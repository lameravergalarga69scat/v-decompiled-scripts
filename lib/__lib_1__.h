bool func_0(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8D58C
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

var func_1(int iParam0)//Position - 0x8D6C7
{
	return Global_2680265.f_818.f_44[iParam0 /*2*/].f_1;
}

bool func_2()//Position - 0x8D811
{
	return Global_2714762.f_21;
}

int func_3(int iParam0)//Position - 0x8D99E
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_168914;
			break;
		case 1:
			iVar0 = Global_4718592.f_168915;
			break;
		case 2:
			iVar0 = Global_4718592.f_168916;
			break;
		case 3:
			iVar0 = Global_4718592.f_168917;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		case 1:
			return 21;
		case 2:
			return 24;
		case 3:
			return 18;
		case 4:
			return 6;
		case 5:
			return 9;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 12;
		case 9:
			return 2;
		default:
	}
	return 2;
}

var func_4()//Position - 0x8DA73
{
	return Global_2621446.f_2;
}

var func_5()//Position - 0x8DA81
{
	return BitTest(Global_2621446, 4);
}

int func_6()//Position - 0x8ED38
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_7(int iParam0, bool bParam1, int iParam2)//Position - 0x8EFFB
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1648034.f_137[iParam2] = bParam1;
			}
			break;
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1648034.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1648034.f_1046), iParam0);
			}
			break;
	}
}

void func_8(int iParam0)//Position - 0x8F04A
{
	Global_2815059.f_4598 = iParam0;
}

float func_9(float fParam0, float fParam1, float fParam2)//Position - 0x8F072
{
	float fVar0;
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_10(int iParam0)//Position - 0x8F22D
{
	Global_1577896 = iParam0;
}

bool func_11()//Position - 0x8F2EE
{
	return (BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 0));
}

void func_12(int* iParam0)//Position - 0x8F4A1
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

bool func_13(int* iParam0)//Position - 0x8F4B7
{
	return BitTest(*iParam0, 1);
}

int func_14(int iParam0)//Position - 0x9183A
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::getGlobal_1574918();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		case 1:
			iVar0 = 915;
			break;
		case 2:
			iVar0 = 916;
			break;
		case 3:
			iVar0 = 917;
			break;
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x91BDC
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/] != -1;
	}
	return 0;
}

bool getGlobal_2714762_f_691()//Position - 0x920AF
{
	return Global_2714762.f_691;
}

int func_17(int iParam0)//Position - 0x9278D
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

bool func_18()//Position - 0x92DA0
{
	return Global_2725911;
}

int func_19()//Position - 0x93489
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192;
}

bool func_20(int iParam0)//Position - 0x93655
{
	return Global_1853348[iParam0 /*834*/].f_192 != 0;
}

void func_21()//Position - 0x936FB
{
	Global_1888188 = -1;
	Global_1888194 = 0;
	Global_1888189 = -1;
}

void func_22(int* iParam0)//Position - 0x93936
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_23(var uParam0, bool bParam1, int iParam2)//Position - 0x93962
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
			*uParam0 = iVar2;
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
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_24()//Position - 0x93FBB
{
	return Global_1922955.f_3;
}

void func_25()//Position - 0x96E95
{
	Global_2714762.f_756 = 1;
}

var func_26(int iParam0)//Position - 0x4A2C
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_0__::func_156(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_27(int iParam0)//Position - 0x8B27
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = __LIB_0__::getGlobal_1574918();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

void func_28(int iParam0)//Position - 0x2FBE3
{
	int iVar0;
	if (Global_262145.f_9035 /* Tunable: DISABLE_DAILY_OBJECTIVES */)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0x3D6DC
{
	if (bParam1)
	{
		if (__LIB_0__::func_936(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853348[iParam0 /*834*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_30(int iParam0, bool bParam1)//Position - 0x8D733
{
	if (!bParam1)
	{
		if (__LIB_0__::func_796(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::getMinusOneOrNull();
}

void func_31(int* iParam0)//Position - 0x8E1F9
{
	__LIB_0__::func_706(iParam0, 0f);
}

int func_32(int iParam0)//Position - 0x94DDB
{
	switch (iParam0)
	{
		case 3:
			return 2;
		case 1:
			return 32;
		case 32:
			return 32;
		case 33:
			return 32;
		case 34:
			return 32;
		case 35:
			return 32;
		case 36:
			return 32;
		case 37:
			return 32;
		case 38:
			return 32;
		case 39:
			return 32;
		case 40:
			return 32;
		case 41:
			return 32;
		case 42:
			return 32;
		case 43:
			return 32;
		case 44:
			return 32;
		case 45:
			return 32;
		case 46:
			return 32;
		case 47:
			return 32;
		case 48:
			return 32;
		case 49:
			return 32;
		case 50:
			return 4;
		case 51:
			return 32;
		case 52:
			return 32;
		case 53:
			return 32;
		case 54:
			return 32;
		case 55:
			return 32;
		case 56:
			return 32;
		case 57:
			return 32;
		case 58:
			return 32;
		case 59:
			return 32;
		case 60:
			return 32;
		case 61:
			return 32;
		case 62:
			return 32;
		case 63:
			return 32;
		case 64:
			return 4;
		case 65:
			return 32;
		case 66:
			return 4;
		case 67:
			return 4;
		case 68:
			return 32;
		case 69:
			return 32;
		case 70:
			return 4;
		case 71:
			return 32;
		case 72:
			return 32;
		case 73:
		case 74:
			return 4;
		case 75:
			return 32;
		case 76:
			return 32;
		case 77:
			return 32;
		case 78:
			return 32;
		case 79:
			return 32;
		case 80:
			return 32;
		case 81:
			return 32;
		case 82:
			return 32;
		case 84:
			return 32;
		case 83:
			return 32;
		case 85:
			return 32;
		case 86:
			return 8;
		case 87:
			return 32;
		case 88:
			return 32;
		case 89:
			return 32;
		case 90:
			return 32;
		case 91:
			return 8;
		case 92:
			return 32;
		case 93:
			return 8;
		case 94:
			return 8;
		case 102:
			return 8;
		case 95:
			return 8;
		case 96:
			return 32;
		case 97:
			return 32;
		case 98:
			return 32;
		case 99:
			return 8;
		case 100:
			return 32;
		case 101:
			return 32;
		case 103:
			return 32;
		case 104:
			return 32;
		case 105:
			return 32;
		case 106:
			return 8;
		case 107:
			return 8;
		case 108:
			return 8;
		case 109:
			return 8;
		case 110:
			return 8;
		case 111:
			return 8;
		case 112:
			return 8;
		case 113:
			return 8;
		case 114:
			return 32;
		case 115:
			return 8;
		case 116:
			return 8;
		case 117:
			return 8;
		case 118:
			return 8;
		case 119:
			return 32;
		case 120:
			return 32;
		case 121:
			return 32;
		case 122:
			return 32;
		case 123:
			return 8;
		case 124:
			return 8;
		case 125:
			return 8;
		case 126:
			return 8;
		case 12:
			return 32;
		case 4:
			return 16;
		case 13:
			return 32;
		case 5:
			return 16;
		case 6:
			return 2;
		case 8:
			return 2;
		case 9:
			return 2;
		case 7:
			return 16;
		case 10:
			return 2;
		case 11:
			return 4;
		case 15:
			return 32;
		case 16:
			return 32;
		case 27:
			return 2;
		case 25:
			return 2;
		case 26:
			return 2;
		case 18:
			return 32;
		case 28:
			return 32;
		case 29:
			return 2;
		case 30:
			return 32;
		case 31:
			return 32;
		case 17:
			return 2;
		case 163:
			return 32;
		case 164:
			return 32;
		case 19:
			return 32;
		case 22:
			return 32;
		case 23:
			return 32;
		case 24:
			return 32;
		case 20:
			return 2;
		case 0:
			return 0;
		case 21:
			return 32;
		case 175:
			return 32;
		case 176:
			return 32;
		case 165:
			return 32;
		case 166:
			return 32;
		case 170:
			return 32;
		case 168:
			return 32;
		case 169:
			return 32;
		case 173:
			return 32;
		case 174:
			return 32;
		case 171:
			return 32;
		case 172:
			return 32;
		case 177:
			return 32;
		case 178:
			return 32;
		case 179:
			return 32;
		case 180:
			return 32;
		case 181:
			return 2;
		case 186:
			return 1;
		case 182:
			return 2;
		case 183:
			return 4;
		case 184:
			return 2;
		case 185:
			return 2;
		case 167:
			return 1;
		case 187:
			return 2;
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
			return 0;
		case 209:
			return 1;
		case 194:
			return 4;
		case 197:
			return 4;
		case 198:
			return 1;
		case 199:
			return 1;
		case 205:
			return 1;
		case 201:
			return 2;
		case 206:
			return 1;
		case 202:
			return 1;
		case 200:
			return 2;
		case 203:
			return 8;
		case 204:
			return 8;
		case 207:
			return 1;
		case 208:
			return 2;
		case 142:
			return 8;
		case 148:
			return 1;
		case 195:
			return 16;
		case 196:
			return 32;
		default:
	}
	switch (__LIB_0__::func_955(__LIB_0__::func_956(iParam0, 1)))
	{
		case 0:
			return 8;
		case 1:
			return 32;
		case 2:
			return 32;
		default:
	}
	return 0;
}

void func_33(int iParam0)//Position - 0x2FB75
{
	if (__LIB_0__::func_94())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (__LIB_0__::func_77(0))
		{
			__LIB_0__::func_366(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

void func_34(int iParam0)//Position - 0x32AB0
{
	bool bVar0;
	bVar0 = false;
	if (!__LIB_0__::func_112())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (__LIB_0__::func_947(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		__LIB_0__::func_961(&(Global_4534105[iParam0 /*85*/]));
	}
}

var func_35()//Position - 0x3D21E
{
	return __LIB_0__::func_938(PLAYER::PLAYER_ID());
}

void func_36(bool bParam0, int iParam1, int iParam2)//Position - 0x8FD76
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				__LIB_0__::func_861();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		__LIB_0__::func_860(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

int func_37(int iParam0)//Position - 0x5B63D
{
	int iVar0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28;
		if (iVar0 != -1 && iVar0 < 4)
		{
			if (__LIB_0__::func_675(iVar0) != -1 && __LIB_0__::func_675(iVar0) != 0)
			{
				return 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 15)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38(bool bParam0)//Position - 0x4B6A
{
	char* sVar0;
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (__LIB_0__::func_683())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

void func_39(int* iParam0)//Position - 0x395E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_5[iVar0] = 0f;
		iParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_40(int* iParam0, int iParam1)//Position - 0x398B
{
	if (iParam1 == 2)
	{
		return;
	}
	iParam0->f_15[iParam1]++;
}

void func_41(int* iParam0, int iParam1, float fParam2)//Position - 0x3DCF
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		bVar1 = iParam0->f_24[iVar0] == false;
		if (iVar0 > 0)
		{
			iParam0->f_5[(iVar0 - 1)] = iParam0->f_5[iVar0];
			iParam0->f_24[(iVar0 - 1)] = iParam0->f_24[iVar0];
		}
		if (bVar1 || iVar0 >= 7)
		{
			iParam0->f_5[iVar0] = fParam2;
			iParam0->f_24[iVar0] = iParam1;
			iVar0 = 8;
		}
		iVar0++;
	}
}

void func_42(int* iParam0, float fParam1)//Position - 0x3E47
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!iParam0->f_24[((8 - iVar0) - 1)] == 0)
		{
			iParam0->f_5[((8 - iVar0) - 1)] = (iParam0->f_5[((8 - iVar0) - 1)] + fParam1);
			return;
		}
		iVar0++;
	}
}

void func_43(var uParam0, bool bParam1)//Position - 0x3ED8
{
	uParam0->f_19 = bParam1;
}

int func_44(var uParam0)//Position - 0x3EE6
{
	return uParam0->f_19;
}

int func_45(var uParam0)//Position - 0x3EF2
{
	return uParam0->f_22;
}

void func_46(var uParam0, bool bParam1, float fParam2)//Position - 0x3EFE
{
	if (bParam1 < 0 || bParam1 >= 15)
	{
		return;
	}
	uParam0->f_2[bParam1] = fParam2;
}

float func_47(var uParam0, bool bParam1)//Position - 0x3F25
{
	if (bParam1 < 0 || bParam1 >= 15)
	{
		return 0f;
	}
	return uParam0->f_2[bParam1];
}

void func_48(int* iParam0, int iParam1)//Position - 0x428D
{
	iParam0->f_1 = iParam1;
}

void func_49(int* iParam0, int iParam1)//Position - 0x429B
{
	iParam0->f_14 = iParam1;
}

void func_50(var uParam0, var uParam1)//Position - 0x5112
{
	float fVar0;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.371f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.152f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Slow_Clap_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
	}
}

void func_51(var uParam0, var uParam1)//Position - 0x5207
{
	float fVar0;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_438))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_438);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
		{
			return;
		}
		if (uParam0->f_440 == -1)
		{
			uParam0->f_440 = AUDIO::GET_SOUND_ID();
		}
		if (!PED::IS_PED_MALE(*uParam1))
		{
			if (fVar0 >= 0.622f)
			{
				if (!BitTest(uParam0->f_439, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 0);
				}
			}
			else if (fVar0 >= 0.495f)
			{
				if (!BitTest(uParam0->f_439, 1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 1);
				}
			}
			else if (fVar0 >= 0.333f)
			{
				if (!BitTest(uParam0->f_439, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 2);
				}
			}
			else if (fVar0 >= 0.162f)
			{
				if (!BitTest(uParam0->f_439, 3))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 3);
				}
			}
			else if (fVar0 >= 0.131f)
			{
				if (!BitTest(uParam0->f_439, 4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Slap_Cel", "MP_SNACKS_SOUNDSET", true);
					MISC::SET_BIT(&(uParam0->f_439), 4);
				}
			}
		}
		else if (fVar0 >= 0.595f)
		{
			if (!BitTest(uParam0->f_439, 0))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 0);
			}
		}
		else if (fVar0 >= 0.445f)
		{
			if (!BitTest(uParam0->f_439, 1))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 1);
			}
		}
		else if (fVar0 >= 0.282f)
		{
			if (!BitTest(uParam0->f_439, 2))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 2);
			}
		}
		else if (fVar0 >= 0.141f)
		{
			if (!BitTest(uParam0->f_439, 3))
			{
				AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_440, "Knuckle_Crack_Hard_Cel", "MP_SNACKS_SOUNDSET", true);
				MISC::SET_BIT(&(uParam0->f_439), 3);
			}
		}
	}
}

bool func_52(var uParam0)//Position - 0x5E79
{
	return *uParam0 == 0;
}

int func_53(int iParam0)//Position - 0x5E86
{
	switch (iParam0)
	{
		case 25:
		case 52:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
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
		case 80:
		case 100:
		case 81:
		case 101:
		case 82:
		case 102:
		case 83:
		case 103:
		case 84:
		case 104:
		case 85:
		case 105:
		case 86:
		case 106:
		case 67:
		case 87:
		case 68:
		case 88:
		case 69:
		case 89:
		case 70:
		case 90:
		case 71:
		case 91:
		case 72:
		case 92:
		case 73:
		case 93:
		case 74:
		case 94:
		case 75:
		case 95:
		case 76:
		case 96:
		case 77:
		case 97:
		case 78:
		case 98:
		case 79:
		case 99:
			return 1;
		default:
	}
	return 0;
}

bool func_54()//Position - 0x6014
{
	return BitTest(Global_4718592.f_162495, 19);
}

int func_55(int iParam0, bool bParam1)//Position - 0x6029
{
	int iVar0;
	if (!bParam1)
	{
		if (iParam0 == 59)
		{
			iVar0 = joaat("prop_cs_ciggy_01");
		}
		else
		{
			return 1;
		}
		STREAMING::REQUEST_MODEL(iVar0);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_56(int iParam0, bool bParam1)//Position - 0x6061
{
	if (bParam1)
	{
		return 1;
	}
	if (iParam0 != 8 && iParam0 != 9)
	{
		return 1;
	}
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_GTAO/SNACKS", false, -1);
}

void func_57(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x6092
{
	int iVar0;
	if (uParam0->f_449 == 0)
	{
		if (bParam3)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				uParam0->f_449 = 1;
			}
			else
			{
				uParam0->f_449 = 2;
			}
		}
		else
		{
			uParam0->f_449 = 3;
		}
	}
	switch (uParam0->f_449)
	{
		case 1:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_A", 64);
			break;
		case 2:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@MALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_M_B", 64);
			break;
		case 3:
			StringCopy(sParam1, "MP_CELEBRATION@IDLES@FEMALE", 64);
			StringCopy(sParam2, "CELEBRATION_IDLE_F_A", 64);
			break;
		case 0:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "", 64);
			break;
	}
}

void func_58(int iParam0, int iParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5)//Position - 0x613C
{
	bool bVar0;
	switch (iParam0)
	{
		case 2:
			if (PED::IS_PED_MALE(iParam2))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 1:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
		case 3:
			if (bParam3)
			{
				bVar0 = true;
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_manly_handshake", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_manly_handshake", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_manly_handshake", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "MANLY_HANDSHAKE_RIGHT", 64);
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_fist_bump", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_fist_bump", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_fist_bump", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "FIST_BUMP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "FIST_BUMP_RIGHT", 64);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_backslap", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_backslap", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_backslap", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BACKSLAP_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BACKSLAP_RIGHT", 64);
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_high_five", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_high_five", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_high_five", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "HIGH_FIVE_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "HIGH_FIVE_RIGHT", 64);
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_cowering", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_cowering", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_cowering", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "COWERING_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "COWERING_RIGHT", 64);
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_sarcastic", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_sarcastic", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_sarcastic", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "SARCASTIC_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "SARCASTIC_RIGHT", 64);
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 1:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@m_m_bro_hug", 64);
					break;
				case 2:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_m_bro_hug", 64);
					break;
				case 3:
					StringCopy(sParam4, "anim@mp_player_intcelebrationpaired@f_f_bro_hug", 64);
					break;
			}
			if (bVar0)
			{
				StringCopy(sParam5, "BRO_HUG_LEFT", 64);
			}
			else
			{
				StringCopy(sParam5, "BRO_HUG_RIGHT", 64);
			}
			break;
	}
}

void func_59(int* iParam0)//Position - 0x6775
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_21))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_21));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam0->f_41))
	{
		if (INTERIOR::IS_INTERIOR_READY(iParam0->f_41))
		{
			INTERIOR::UNPIN_INTERIOR(iParam0->f_41);
		}
	}
	STREAMING::REMOVE_ANIM_DICT("Move_m@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("Move_f@generic_idles@std");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intfinger");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intsalute");
	STREAMING::REMOVE_ANIM_DICT("mp_player_introck");
	STREAMING::REMOVE_ANIM_DICT("mp_player_intwank");
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_23)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_23[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_23[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1225))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1225));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1226))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_1226));
	}
}

bool func_60(int iParam0)//Position - 0x6954
{
	return iParam0 == 15;
}

void func_61(int* iParam0)//Position - 0x6961
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	if (iParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
		iParam0->f_1 = 0;
	}
	if (iParam0->f_2 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(iParam0->f_2));
		iParam0->f_2 = 0;
	}
}

void func_62(int* iParam0, char* sParam1)//Position - 0x69A4
{
	if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CLEANUP");
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_63(int* iParam0, bool bParam1)//Position - 0x6AC0
{
	if (bParam1)
	{
		CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
	}
	if ((*iParam0 != 0 && iParam0->f_1 != 0) && iParam0->f_2 != 0)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*iParam0, iParam0->f_1, 255, 255, 255, 255);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0->f_2, 255, 255, 255, 255, 0);
	}
}

void func_64(bool bParam0)//Position - 0x6B43
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 2);
	}
}

void func_65(bool bParam0)//Position - 0x6B6F
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
	else
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPDark"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPDark");
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailMPIn");
		}
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 1);
	}
}

void func_66(bool bParam0)//Position - 0x6BC6
{
	if (bParam0)
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_race_crash");
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CrossLine"))
		{
			GRAPHICS::ANIMPOSTFX_STOP("CrossLine");
		}
		if (GRAPHICS::GET_REQUESTINGNIGHTVISION())
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPDark", 0, false);
		}
		else
		{
			GRAPHICS::ANIMPOSTFX_PLAY("DeathFailMPIn", 0, false);
		}
		CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
		Global_2703735.f_2394 = NETWORK::GET_NETWORK_TIME();
		Global_2703735.f_2394.f_1 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_2394.f_2), 0);
	}
}

void func_67(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x6C5D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_REP_POINTS_AND_RANK_BAR_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_68(int iParam0, bool bParam1, int iParam2)//Position - 0x6E1F
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

void func_69(int iParam0, int iParam1)//Position - 0x70DB
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_70(int iParam0, int iParam1)//Position - 0x721C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1659609 = iParam1;
			break;
		case joaat("MPPLY_CREW_1_ID"):
			Global_1659611 = iParam1;
			break;
		case joaat("MPPLY_CREW_2_ID"):
			Global_1659611 = iParam1;
			break;
		case joaat("MPPLY_CREW_3_ID"):
			Global_1659612 = iParam1;
			break;
		case joaat("MPPLY_CREW_4_ID"):
			Global_1659613 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1659614 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1659615 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1659616 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1659617 = iParam1;
			break;
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1659618 = iParam1;
			break;
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1659619 = iParam1;
			break;
		case joaat("MPPLY_FRIENDLY"):
			Global_1659620 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1659621 = iParam1;
			break;
		case joaat("MPPLY_GRIEFING"):
			Global_1659622 = iParam1;
			break;
		case joaat("MPPLY_HELPFUL"):
			Global_1659623 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1659624 = iParam1;
			break;
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1659625 = iParam1;
			break;
		default:
			break;
	}
}

void func_71(var uParam0, int iParam1)//Position - 0x7341
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_72(int iParam0)//Position - 0x7352
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_73(var* uParam0)//Position - 0x73AF
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

int func_74(int iParam0, bool bParam1)//Position - 0x8114
{
	if (bParam1)
	{
	}
	return __LIB_0__::func_966(iParam0, 0);
}

float func_75(int iParam0, int iParam1)//Position - 0x8581
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_76(char* sParam0)//Position - 0x89A5
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x8A89
{
	switch (iParam0)
	{
		case 233:
			return 1;
		default:
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x8B25
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_79()//Position - 0x8C0F
{
	Global_75488 = 1;
}

int func_80(int iParam0)//Position - 0x9BE0
{
	int iVar0;
	if (PED::IS_PED_INJURED(iParam0) || !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iParam0, false));
	if (VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_81()//Position - 0xA61A
{
	if (Global_2725323)
	{
		return Global_2725322;
	}
	return 0;
}

void func_82(int* iParam0, char* sParam1)//Position - 0xA631
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_83(int* iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0xA6A1
{
	if (__LIB_0__::func_177())
	{
		iParam3 = 1;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (iParam2 > -1)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_84(int iParam0)//Position - 0xABA9
{
	int iVar0;
	struct<13> Var1;
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { __LIB_0__::func_819(iParam0) };
			if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85()//Position - 0xAC82
{
	if (__LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_53())
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() == 0)
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)//Position - 0xAD48
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_87(var* uParam0)//Position - 0xAD5E
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_88(var uParam0)//Position - 0xAD84
{
	if (!uParam0->f_1206)
	{
		uParam0->f_1206 = 1;
	}
}

int func_89(var uParam0, bool bParam1)//Position - 0xAD9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 = (uParam0->f_420 - 30);
	if (uParam0->f_420 < 0)
	{
		uParam0->f_420 = 0;
	}
	if (uParam0->f_420 != 0)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	}
	if (uParam0->f_420 <= 0)
	{
		return 1;
	}
	return 0;
}

void func_90(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xAE08
{
	if (bParam3)
	{
		CAM::DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE();
	}
	if (GRAPHICS::UI3DSCENE_IS_AVAILABLE())
	{
		if (GRAPHICS::UI3DSCENE_PUSH_PRESET("CELEBRATION_WINNER"))
		{
			if (!PED::IS_PED_INJURED(*uParam1))
			{
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 0, 0f, 0f, 0f);
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 1, 0f, 0f, 0f);
				GRAPHICS::UI3DSCENE_ASSIGN_PED_TO_SLOT("CELEBRATION_WINNER", *uParam1, 2, 0f, 0f, 0f);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1.5f, 1.5f, 0, 0, 0, 255, false);
			if (bParam2)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(*uParam0, uParam0->f_1, 255, 255, 255, 255);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_2, 255, 255, 255, 255, 0);
		}
	}
}

void func_91()//Position - 0xAF04
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

void func_92()//Position - 0xAF22
{
	if (!Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 1;
	}
}

void func_93(int iParam0, char* sParam1, char* sParam2)//Position - 0xBBCD
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
			StringCopy(sParam2, "knuckle_crunch", 64);
			break;
		case 1:
			StringCopy(sParam1, "anim@mp_player_intcelebrationmale@finger", 64);
			StringCopy(sParam2, "finger", 64);
			break;
	}
}

char* func_94(int iParam0)//Position - 0xBE0A
{
	switch (iParam0)
	{
		case 0:
			return "mood_Aiming_1";
		case 1:
			return "mood_Angry_1";
		case 2:
			return "mood_Happy_1";
		case 3:
			return "mood_Injured_1";
		case 4:
			return "mood_Normal_1";
		case 5:
			return "mood_stressed_1";
		case 6:
			return "mood_smug_1";
		case 7:
			return "mood_sulk_1";
		default:
	}
	return "mood_Normal_1";
}

int func_95(var uParam0, int iParam1)//Position - 0xBF5F
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (BitTest((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)//Position - 0xBF9D
{
	int iVar0;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	return iVar0;
}

int func_97(int iParam0)//Position - 0xBFFE
{
	int iVar0;
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, 0);
	return iVar0;
}

void func_98(var uParam0, int iParam1, bool bParam2)//Position - 0x1231E
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_99(var uParam0, int iParam1, bool bParam2)//Position - 0x1384B
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		MISC::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_100()//Position - 0x1389D
{
	if (Global_4521801.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x1391F
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 11, joaat("JUGG_SUIT")))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0, int iParam1)//Position - 0x13A80
{
	if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, iParam1, joaat("PILOT_SUIT")))
	{
		return 1;
	}
	return 0;
}

int func_103(var uParam0, bool bParam1)//Position - 0x2EDD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	uParam0->f_420 += 30;
	if (uParam0->f_420 > 255)
	{
		uParam0->f_420 = 255;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, iVar0, iVar1, iVar2, uParam0->f_420, false);
	if (uParam0->f_420 >= 255)
	{
		return 1;
	}
	return 0;
}

int func_104(int* iParam0)//Position - 0x2EE3A
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		return 1;
	}
	else
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
		{
		}
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
		{
		}
	}
	return 0;
}

void func_105(int* iParam0, int iParam1)//Position - 0x2EE91
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	switch (iParam1)
	{
		case 0:
			sVar0 = "MP_CELEBRATION_BG";
			sVar1 = "MP_CELEBRATION_FG";
			sVar2 = "MP_CELEBRATION";
			break;
		case 1:
			sVar0 = "HEIST_CELEBRATION_BG";
			sVar1 = "HEIST_CELEBRATION_FG";
			sVar2 = "HEIST_CELEBRATION";
			break;
		case 2:
			sVar0 = "HEIST2_CELEBRATION_BG";
			sVar1 = "HEIST2_CELEBRATION_FG";
			sVar2 = "HEIST2_CELEBRATION";
			break;
	}
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar0);
	}
	if (iParam0->f_1 == 0)
	{
		iParam0->f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar1);
	}
	if (iParam0->f_2 == 0)
	{
		iParam0->f_2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sVar2);
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 != LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::GET_CURRENT_LANGUAGE();
	}
}

void func_106(var uParam0)//Position - 0x2EF4E
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar1 = iVar0;
			if (__LIB_0__::func_156(iVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
			iVar0++;
		}
	}
}

void func_107(var uParam0, int iParam1, int iParam2)//Position - 0x2F332
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_3[iParam2], "SET_SPEAKER_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

Vector3 func_108(int iParam0)//Position - 0x2F355
{
	switch (iParam0)
	{
		case 0:
			return 0.9f, 0.6f, 2f;
		case 1:
			return 1.2f, 0.7f, 2f;
		case 2:
			return 1.3f, 0.7f, 2f;
		case 3:
			return 1.2f, 0.7f, 2f;
		case 4:
			return 1.3f, 0.8f, 2f;
		case 5:
			return 1.4f, 0.8f, 2f;
		case 6:
			return 1.6f, 0.8f, 2f;
		case 7:
			return 1.7f, 0.9f, 2f;
		default:
	}
	return 1.4f, 0.8f, 2f;
}

float func_109(float fParam0)//Position - 0x2F7E3
{
	return (fParam0 + fLocal_13);
}

float func_110(float fParam0)//Position - 0x2F7F0
{
	return (fParam0 + fLocal_12);
}

void func_111(var uParam0, bool bParam1)//Position - 0x2F7FD
{
	HUD::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		HUD::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	HUD::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	HUD::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		case 1:
			HUD::SET_TEXT_OUTLINE();
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 3:
			HUD::SET_TEXT_DROP_SHADOW();
			break;
		case 2:
			HUD::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}

bool func_112()//Position - 0x2F8D5
{
	return Global_1574604;
}

void func_113(var uParam0, int iParam1)//Position - 0x2F8E1
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (((0.5f + 0.004f) - 0.01f) - 0.11f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 19;
}

void func_114()//Position - 0x2F93F
{
	int iVar0;
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_0__::func_156(iVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, true);
		}
		iVar0++;
	}
}

bool func_115(int iParam0)//Position - 0x3103A
{
	return Global_4718592.f_168758 > iParam0;
}

int func_116(int iParam0)//Position - 0x3104F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_31039[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)//Position - 0x31080
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iVar0 >= 8)
	{
		return 0;
	}
	return BitTest(Global_2715699.f_1.f_2813[iVar0], iVar1);
}

int func_118(int iParam0)//Position - 0x310C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31710[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0)//Position - 0x3115F
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (Global_262145.f_29921[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x311AC
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_262145.f_6086[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_121()//Position - 0x311E6
{
	struct<31> Var0;
	Global_1944390 = { Var0 };
}

int func_122()//Position - 0x311FA
{
	switch (Global_1575016)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 11:
			return 1;
		default:
	}
	return 0;
}

int func_123(int iParam0)//Position - 0x31265
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 7);
	}
	return 0;
}

int func_124(int iParam0)//Position - 0x3128D
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x312B3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_5058[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_126()//Position - 0x313DC
{
	return Global_4718592 == 1;
}

bool func_127(int iParam0)//Position - 0x313EA
{
	return iParam0 == 83;
}

bool func_128(int iParam0)//Position - 0x313F7
{
	return iParam0 == 81;
}

int func_129()//Position - 0x31404
{
	if (Global_4718592.f_107227 == 22 || Global_4718592.f_107227 == 23)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_32, 9);
}

int func_130()//Position - 0x3143C
{
	if (Global_4718592.f_107227 == 20 || Global_4718592.f_107227 == 21)
	{
		return 1;
	}
	return BitTest(Global_4718592.f_30, 3);
}

bool func_131(int iParam0)//Position - 0x31473
{
	return iParam0 == 72;
}

bool func_132(int iParam0)//Position - 0x31480
{
	return iParam0 == 76;
}

bool func_133(int iParam0)//Position - 0x3148D
{
	return iParam0 == 74;
}

bool func_134(int iParam0)//Position - 0x3149A
{
	return iParam0 == 78;
}

bool func_135(int iParam0)//Position - 0x314A7
{
	return iParam0 == 77;
}

var func_136(int iParam0)//Position - 0x314B4
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

int func_137(bool bParam0)//Position - 0x314C9
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_138()//Position - 0x314DB
{
	if (((Global_4718592.f_116524 == Global_262145.f_5041[0] || Global_4718592.f_116524 == Global_262145.f_5041[1]) || Global_4718592.f_116524 == Global_262145.f_5041[2]) || Global_4718592.f_116524 == Global_262145.f_5041[3])
	{
		return Global_262145.f_5041[3];
	}
	else if ((((Global_4718592.f_116524 == Global_262145.f_5041[4] || Global_4718592.f_116524 == Global_262145.f_5041[5]) || Global_4718592.f_116524 == Global_262145.f_5041[6]) || Global_4718592.f_116524 == Global_262145.f_5041[7]) || Global_4718592.f_116524 == Global_262145.f_5041[8])
	{
		return Global_262145.f_5041[8];
	}
	else if ((((((Global_4718592.f_116524 == Global_262145.f_5041[9] || Global_4718592.f_116524 == Global_262145.f_5041[10]) || Global_4718592.f_116524 == Global_262145.f_5041[11]) || Global_4718592.f_116524 == Global_262145.f_5041[12]) || Global_4718592.f_116524 == Global_262145.f_5041[13]) || Global_4718592.f_116524 == Global_262145.f_5041[14]) || Global_4718592.f_116524 == Global_262145.f_5041[15])
	{
		return Global_262145.f_5041[14];
	}
	return 0;
}

void func_139()//Position - 0x31B1A
{
	Global_1057409 = -1;
}

bool func_140()//Position - 0x31B27
{
	return Global_2714762.f_669.f_9 > 0;
}

int func_141()//Position - 0x31B3A
{
	if (__LIB_0__::func_625() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_142()//Position - 0x31B57
{
	return BitTest(Global_1048576.f_10, 3);
}

var func_143()//Position - 0x31B67
{
	return BitTest(Global_2715699.f_1.f_2809, 6);
}

var func_144()//Position - 0x31B7A
{
	return BitTest(Global_1048576.f_10, 5);
}

var func_145()//Position - 0x31B8A
{
	return BitTest(Global_2715699.f_1.f_2809, 8);
}

int func_146()//Position - 0x31B9E
{
	return PLAYER::PLAYER_ID();
}

int func_147(int iParam0, var uParam1)//Position - 0x31BDA
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (((Global_262145.f_6890[iVar1] == 202 || Global_262145.f_6890[iVar1] == 203) || Global_262145.f_6890[iVar1] == 204) || (uParam1 && ((((((((((((Global_262145.f_6890[iVar1] == 224 || Global_262145.f_6890[iVar1] == 223) || Global_262145.f_6890[iVar1] == 232) || Global_262145.f_6890[iVar1] == 245) || Global_262145.f_6890[iVar1] == 246) || Global_262145.f_6890[iVar1] == 251) || Global_262145.f_6890[iVar1] == 252) || Global_262145.f_6890[iVar1] == 253) || Global_262145.f_6890[iVar1] == 161) || Global_262145.f_6890[iVar1] == 278) || Global_262145.f_6890[iVar1] == 279) || Global_262145.f_6890[iVar1] == 302) || Global_262145.f_6890[iVar1] == 303)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x31D8E
{
	int iVar0;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (iParam0 == Global_262145.f_4794[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_149()//Position - 0x31DC4
{
	return (BitTest(Global_4718592.f_11, 19) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

bool func_150()//Position - 0x31DDE
{
	return (BitTest(Global_4718592.f_11, 18) && NETWORK::NETWORK_IS_ACTIVITY_SESSION());
}

int func_151(int iParam0)//Position - 0x31DF8
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 232)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

bool func_152()//Position - 0x31E5E
{
	return BitTest(Global_2715699.f_1.f_2809, 5);
}

bool func_153()//Position - 0x31ED5
{
	return Global_2714762.f_669.f_12;
}

int func_154(int iParam0)//Position - 0x31EE6
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (__LIB_0__::func_855(iParam0))
		{
			return Global_1853348[iParam0 /*834*/].f_205.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_155()//Position - 0x31F7F
{
	return Global_2703735.f_21;
}

void func_156()//Position - 0x31FAF
{
	struct<45> Var0;
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
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
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
	Global_1944345 = { Var0 };
}

int func_157(int iParam0)//Position - 0x32EBC
{
	int iVar0;
	int iVar1;
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 19)
		{
			if (Global_262145.f_6890[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_6210[iVar1])
				{
					if (iParam0 == Global_262145.f_5065[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x33124
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		case 9:
			return 24964;
			break;
		case 10:
			return 24966;
			break;
		case 11:
			return 24965;
			break;
		case 12:
			return 24968;
			break;
		case 13:
			return 25101;
			break;
		case 14:
			return 24967;
			break;
		case 15:
			return 25105;
			break;
		case 16:
			return 25106;
			break;
		case 20:
			return 25102;
			break;
		case 21:
			return 25103;
			break;
		case 22:
			return 25104;
			break;
		case 102:
			return 24969;
			break;
		case 17:
			return 25107;
			break;
		case 18:
			return 25108;
			break;
		case 19:
			return 25109;
			break;
		case 103:
			return 24972;
			break;
		case 104:
			return 24973;
			break;
		case 105:
			return 24974;
			break;
		case 106:
			return 24975;
			break;
		case 107:
			return 24976;
			break;
		case 108:
			return 24978;
			break;
		case 109:
			return 24980;
			break;
		case 110:
			return 24981;
			break;
		case 111:
			return 24982;
			break;
		case 112:
			return 24983;
			break;
		case 113:
			return 24984;
			break;
		case 114:
			return 24985;
			break;
		case 115:
			return 24986;
			break;
		case 116:
			return 24987;
			break;
		case 117:
			return 24988;
			break;
		case 118:
			return 24989;
			break;
		case 119:
			return 24990;
			break;
		case 120:
			return 24991;
			break;
		case 0:
			return 24992;
			break;
		case 1:
			return 24993;
			break;
		case 2:
			return 24994;
			break;
		case 3:
			return 24995;
			break;
		case 4:
			return 24996;
			break;
		case 5:
			return 24997;
			break;
		case 6:
			return 24998;
			break;
		case 7:
			return 24999;
			break;
		case 127:
			return 25117;
			break;
		case 128:
			return 25118;
			break;
		case 23:
			return 25119;
			break;
		case 139:
			return 25125;
			break;
		case 140:
			return 25127;
			break;
		case 141:
			return 25128;
			break;
		case 27:
			return 25129;
			break;
		case 160:
			return 25136;
			break;
		case 161:
			return 25139;
			break;
		case 162:
			return 25140;
			break;
		case 31:
			return 25141;
			break;
		case 181:
			return 25148;
			break;
		case 182:
			return 25151;
			break;
		case 183:
			return 25152;
			break;
		case 35:
			return 25153;
			break;
		case 193:
			return 25160;
			break;
		case 194:
			return 25161;
			break;
		case 39:
			return 25162;
			break;
		case 206:
			return 25168;
			break;
		case 207:
			return 25169;
			break;
		case 208:
			return 25170;
			break;
		case 209:
			return 25173;
			break;
		case 210:
			return 25174;
			break;
		case 43:
			return 25175;
			break;
		case 234:
			return 25179;
			break;
		case 235:
			return 25183;
			break;
		case 236:
			return 25184;
			break;
		case 47:
			return 25185;
			break;
		case 248:
			return 25188;
			break;
		case 249:
			return 25191;
			break;
		case 250:
			return 25192;
			break;
		case 51:
			return 25193;
			break;
		case 259:
			return 25198;
			break;
		case 260:
			return 25202;
			break;
		case 261:
			return 25203;
			break;
		case 55:
			return 25204;
			break;
		case 274:
			return 25209;
			break;
		case 275:
			return 25212;
			break;
		case 276:
			return 25213;
			break;
		case 59:
			return 25214;
			break;
		case 284:
			return 25217;
			break;
		case 285:
			return 25221;
			break;
		case 286:
			return 25222;
			break;
		case 63:
			return 25223;
			break;
		case 307:
			return 25228;
			break;
		case 308:
			return 24979;
			break;
		case 309:
			return 25229;
			break;
		case 310:
			return 25111;
			break;
		case 67:
			return 25230;
			break;
		case 68:
			return 25112;
			break;
		case 72:
			return 25231;
			break;
		case 73:
			return 25233;
			break;
		case 74:
			return 25234;
			break;
		case 75:
			return 25235;
			break;
		case 76:
			return 25236;
			break;
		case 77:
			return 25394;
			break;
		case 121:
			return 25395;
			break;
		case 122:
			return 25396;
			break;
		case 123:
			return 25397;
			break;
		case 124:
			return 25398;
			break;
		case 125:
			return 25399;
			break;
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		case 79:
			return 25245;
			break;
		case 80:
			return 25246;
			break;
		case 81:
			return 25247;
			break;
		case 82:
			return 25248;
			break;
		case 83:
			return 25249;
			break;
		case 84:
			return 25250;
			break;
		case 85:
			return 25000;
			break;
		case 86:
			return 25251;
			break;
		case 87:
			return 25252;
			break;
		case 88:
			return 25253;
			break;
		case 89:
			return 25254;
			break;
		case 90:
			return 25255;
			break;
		case 91:
			return 25256;
			break;
		case 92:
			return 25257;
			break;
		case 93:
			return 25258;
			break;
		case 94:
			return 25259;
			break;
		case 95:
			return 25260;
			break;
		case 96:
			return 25261;
			break;
		case 97:
			return 25262;
			break;
		case 98:
			return 25263;
			break;
		case 99:
			return 25264;
			break;
		case 100:
			return 25225;
			break;
		case 101:
			return 25178;
			break;
		case 311:
			return 25265;
			break;
		case 312:
			return 25266;
			break;
		case 313:
			return 25267;
			break;
		case 314:
			return 25268;
			break;
		case 315:
			return 24977;
			break;
		case 316:
			return 25269;
			break;
		case 317:
			return 25270;
			break;
		case 318:
			return 25271;
			break;
		case 319:
			return 25272;
			break;
		case 320:
			return 25273;
			break;
		case 321:
			return 25274;
			break;
		case 322:
			return 25275;
			break;
		case 323:
			return 25276;
			break;
		case 324:
			return 25277;
			break;
		case 325:
			return 25278;
			break;
		case 326:
			return 25279;
			break;
		case 327:
			return 25280;
			break;
		case 328:
			return 25281;
			break;
		case 329:
			return 25282;
			break;
		case 330:
			return 25283;
			break;
		case 331:
			return 25284;
			break;
		case 332:
			return 25285;
			break;
		case 333:
			return 25286;
			break;
		case 334:
			return 25287;
			break;
		case 335:
			return 25288;
			break;
		case 336:
			return 25289;
			break;
		case 337:
			return 25290;
			break;
		case 338:
			return 25291;
			break;
		case 339:
			return 25292;
			break;
		case 340:
			return 25293;
			break;
		case 341:
			return 25294;
			break;
		case 342:
			return 25295;
			break;
		case 343:
			return 25296;
			break;
		case 344:
			return 25297;
			break;
		case 345:
			return 25298;
			break;
		case 346:
			return 25299;
			break;
		case 347:
			return 25300;
			break;
		case 348:
			return 25301;
			break;
		case 349:
			return 25302;
			break;
		case 350:
			return 25303;
			break;
		case 351:
			return 25304;
			break;
		case 352:
			return 25305;
			break;
		case 353:
			return 25306;
			break;
		case 354:
			return 25307;
			break;
		case 355:
			return 25308;
			break;
		case 356:
			return 25309;
			break;
		case 357:
			return 25310;
			break;
		case 358:
			return 25311;
			break;
		case 359:
			return 25312;
			break;
		case 360:
			return 25313;
			break;
		case 361:
			return 25314;
			break;
		case 362:
			return 25315;
			break;
		case 363:
			return 25316;
			break;
		case 364:
			return 25317;
			break;
		case 365:
			return 25318;
			break;
		case 366:
			return 25319;
			break;
		case 367:
			return 25320;
			break;
		case 368:
			return 25321;
			break;
		case 369:
			return 25322;
			break;
		case 370:
			return 25323;
			break;
		case 371:
			return 25324;
			break;
		case 372:
			return 25325;
			break;
		case 373:
			return 25326;
			break;
		case 374:
			return 25327;
			break;
		case 375:
			return 25328;
			break;
		case 376:
			return 25329;
			break;
		case 377:
			return 25330;
			break;
		case 378:
			return 25331;
			break;
		case 379:
			return 25332;
			break;
		case 380:
			return 25333;
			break;
		case 381:
			return 25334;
			break;
		case 382:
			return 25335;
			break;
		case 383:
			return 25336;
			break;
		case 384:
			return 25337;
			break;
		case 385:
			return 25338;
			break;
		case 386:
			return 25339;
			break;
		case 387:
			return 25340;
			break;
		case 388:
			return 25341;
			break;
		case 389:
			return 25342;
			break;
		case 390:
			return 25343;
			break;
		case 391:
			return 25344;
			break;
		case 392:
			return 25345;
			break;
		case 393:
			return 25346;
			break;
		case 394:
			return 25347;
			break;
		case 395:
			return 24970;
			break;
		case 396:
			return 25348;
			break;
		case 397:
			return 25349;
			break;
		case 398:
			return 25350;
			break;
		case 399:
			return 25351;
			break;
		case 400:
			return 25352;
			break;
		case 401:
			return 25353;
			break;
		case 402:
			return 25354;
			break;
		case 403:
			return 25355;
			break;
		case 404:
			return 25356;
			break;
		case 405:
			return 25357;
			break;
		case 406:
			return 25358;
			break;
		case 407:
			return 25359;
			break;
		case 408:
			return 25360;
			break;
		case 409:
			return 25361;
			break;
		case 410:
			return 25362;
			break;
		case 411:
			return 25363;
			break;
		case 412:
			return 25364;
			break;
		case 413:
			return 25365;
			break;
		case 414:
			return 25366;
			break;
		case 415:
			return 25367;
			break;
		case 416:
			return 25368;
			break;
		case 417:
			return 25369;
			break;
		case 418:
			return 25370;
			break;
		case 419:
			return 25371;
			break;
		case 420:
			return 25373;
			break;
		case 421:
			return 25374;
			break;
		case 422:
			return 25375;
			break;
		case 423:
			return 25377;
			break;
		case 424:
			return 25378;
			break;
		case 425:
			return 25379;
			break;
		case 426:
			return 25382;
			break;
		case 427:
			return 25383;
			break;
		case 428:
			return 25386;
			break;
		case 429:
			return 25390;
			break;
		case 430:
			return 25391;
			break;
		case 431:
			return 25392;
			break;
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		case 25:
			return 25113;
			break;
		case 26:
			return 25114;
			break;
		case 28:
			return 25115;
			break;
		case 29:
			return 25116;
			break;
		case 30:
			return 25120;
			break;
		case 32:
			return 25121;
			break;
		case 33:
			return 25122;
			break;
		case 34:
			return 25123;
			break;
		case 36:
			return 25124;
			break;
		case 37:
			return 25126;
			break;
		case 38:
			return 25130;
			break;
		case 40:
			return 25131;
			break;
		case 41:
			return 25132;
			break;
		case 42:
			return 25133;
			break;
		case 44:
			return 25134;
			break;
		case 45:
			return 25137;
			break;
		case 46:
			return 25138;
			break;
		case 48:
			return 25142;
			break;
		case 49:
			return 25143;
			break;
		case 50:
			return 25144;
			break;
		case 52:
			return 25145;
			break;
		case 53:
			return 25146;
			break;
		case 54:
			return 25147;
			break;
		case 56:
			return 25149;
			break;
		case 57:
			return 25150;
			break;
		case 58:
			return 25154;
			break;
		case 60:
			return 25155;
			break;
		case 61:
			return 25156;
			break;
		case 62:
			return 25157;
			break;
		case 64:
			return 25158;
			break;
		case 65:
			return 25159;
			break;
		case 66:
			return 25163;
			break;
		case 69:
			return 25164;
			break;
		case 70:
			return 25165;
			break;
		case 71:
			return 25166;
			break;
		case 129:
			return 25167;
			break;
		case 130:
			return 25171;
			break;
		case 131:
			return 25172;
			break;
		case 132:
			return 25176;
			break;
		case 133:
			return 25177;
			break;
		case 134:
			return 25181;
			break;
		case 135:
			return 25182;
			break;
		case 136:
			return 25186;
			break;
		case 137:
			return 25187;
			break;
		case 138:
			return 25189;
			break;
		case 142:
			return 25190;
			break;
		case 143:
			return 25194;
			break;
		case 144:
			return 25195;
			break;
		case 145:
			return 25196;
			break;
		case 146:
			return 25197;
			break;
		case 147:
			return 25199;
			break;
		case 148:
			return 25200;
			break;
		case 149:
			return 25201;
			break;
		case 150:
			return 25205;
			break;
		case 151:
			return 25206;
			break;
		case 152:
			return 25207;
			break;
		case 153:
			return 25208;
			break;
		case 154:
			return 25210;
			break;
		case 155:
			return 25211;
			break;
		case 156:
			return 25215;
			break;
		case 157:
			return 25216;
			break;
		case 158:
			return 25218;
			break;
		case 159:
			return 25219;
			break;
		case 163:
			return 25220;
			break;
		case 164:
			return 25224;
			break;
		case 165:
			return 25226;
			break;
		case 166:
			return 25227;
			break;
		case 167:
			return 25232;
			break;
		case 168:
			return 25372;
			break;
		case 169:
			return 25376;
			break;
		case 170:
			return 25380;
			break;
		case 171:
			return 25381;
			break;
		case 172:
			return 25384;
			break;
		case 173:
			return 25385;
			break;
		case 174:
			return 25387;
			break;
		case 175:
			return 25388;
			break;
		case 176:
			return 25389;
			break;
		case 177:
			return 25407;
			break;
		case 178:
			return 25408;
			break;
		case 179:
			return 25409;
			break;
		case 180:
			return 25410;
			break;
		case 184:
			return 25411;
			break;
		case 185:
			return 25412;
			break;
		case 186:
			return 25413;
			break;
		case 187:
			return 25414;
			break;
		case 188:
			return 25415;
			break;
		case 189:
			return 25416;
			break;
		case 190:
			return 25417;
			break;
		case 191:
			return 25418;
			break;
		case 192:
			return 25419;
			break;
		case 195:
			return 25420;
			break;
		case 196:
			return 25421;
			break;
		case 197:
			return 25422;
			break;
		case 198:
			return 25423;
			break;
		case 199:
			return 25424;
			break;
		case 200:
			return 25425;
			break;
		case 201:
			return 25426;
			break;
		case 202:
			return 25427;
			break;
		case 203:
			return 25428;
			break;
		case 204:
			return 25429;
			break;
		case 205:
			return 25430;
			break;
		case 211:
			return 25431;
			break;
		case 212:
			return 25432;
			break;
		case 213:
			return 25433;
			break;
		case 214:
			return 25434;
			break;
		case 215:
			return 25435;
			break;
		case 216:
			return 25436;
			break;
		case 217:
			return 25437;
			break;
		case 218:
			return 25438;
			break;
		case 219:
			return 25439;
			break;
		case 220:
			return 25440;
			break;
		case 221:
			return 25441;
			break;
		case 222:
			return 25442;
			break;
		case 223:
			return 25443;
			break;
		case 224:
			return 25444;
			break;
		case 225:
			return 25445;
			break;
		case 226:
			return 25446;
			break;
		case 227:
			return 25447;
			break;
		case 228:
			return 25448;
			break;
		case 229:
			return 25449;
			break;
		case 230:
			return 25450;
			break;
		case 231:
			return 25451;
			break;
		case 232:
			return 25452;
			break;
		case 233:
			return 25453;
			break;
		case 237:
			return 25454;
			break;
		case 238:
			return 25455;
			break;
		case 239:
			return 25456;
			break;
		case 240:
			return 25457;
			break;
		case 241:
			return 25458;
			break;
		case 242:
			return 25459;
			break;
		case 243:
			return 25460;
			break;
		case 244:
			return 25461;
			break;
		case 245:
			return 25462;
			break;
		case 246:
			return 25463;
			break;
		case 247:
			return 25464;
			break;
		case 251:
			return 25465;
			break;
		case 252:
			return 25466;
			break;
		case 253:
			return 25467;
			break;
		case 254:
			return 25468;
			break;
		case 255:
			return 25469;
			break;
		case 256:
			return 25470;
			break;
		case 257:
			return 25471;
			break;
		case 258:
			return 25472;
			break;
		case 262:
			return 25473;
			break;
		case 263:
			return 25474;
			break;
		case 264:
			return 25475;
			break;
		case 265:
			return 25476;
			break;
		case 266:
			return 25477;
			break;
		case 267:
			return 25478;
			break;
		case 268:
			return 25479;
			break;
		case 269:
			return 25480;
			break;
		case 270:
			return 25481;
			break;
		case 271:
			return 25482;
			break;
		case 272:
			return 25483;
			break;
		case 273:
			return 25484;
			break;
		case 277:
			return 25485;
			break;
		case 278:
			return 25486;
			break;
		case 279:
			return 25487;
			break;
		case 280:
			return 25488;
			break;
		case 281:
			return 25489;
			break;
		case 282:
			return 25490;
			break;
		case 283:
			return 25491;
			break;
		case 287:
			return 25492;
			break;
		case 288:
			return 25493;
			break;
		case 289:
			return 25494;
			break;
		case 290:
			return 25495;
			break;
		case 291:
			return 25496;
			break;
		case 292:
			return 25497;
			break;
		case 293:
			return 25498;
			break;
		case 294:
			return 25499;
			break;
		case 295:
			return 25500;
			break;
		case 296:
			return 25501;
			break;
		case 297:
			return 25502;
			break;
		case 298:
			return 25503;
			break;
		case 299:
			return 25504;
			break;
		case 300:
			return 25505;
			break;
		case 301:
			return 25506;
			break;
		case 302:
			return 25507;
			break;
		case 303:
			return 25508;
			break;
		case 304:
			return 25509;
			break;
		case 305:
			return 25510;
			break;
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_159(int iParam0, bool bParam1)//Position - 0x354B7
{
	if (bParam1)
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
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
			case 1:
				return 8;
			case 2:
				return 9;
			case 3:
				return 10;
			case 4:
				return 11;
			case 5:
				return 12;
			}
		default:
	}
	return -1;
}

int func_160(int iParam0)//Position - 0x35553
{
	switch (iParam0)
	{
		case joaat("kanjosj"):
			return 0;
		case joaat("postlude"):
			return 1;
		case joaat("greenwood"):
			return 2;
		case joaat("draugur"):
			return 3;
		case joaat("conada"):
			return 4;
		default:
	}
	return -1;
}

int func_161(int iParam0)//Position - 0x3564D
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 2);
	}
	return 0;
}

int func_162(int iParam0, var uParam1)//Position - 0x35691
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_163(int iParam0)//Position - 0x356D3
{
	if (iParam0 != -1)
	{
		return Global_1977138[iParam0 /*57*/].f_27.f_8;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x35708
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
		case joaat("buffalo4"):
			return 1;
		case joaat("champion"):
			return 2;
		case joaat("deity"):
			return 3;
		case joaat("granger2"):
			return 4;
		case joaat("jubilee"):
			return 5;
		case joaat("mule5"):
			return 6;
		case joaat("patriot3"):
			return 7;
		case joaat("youga4"):
			return 8;
		default:
	}
	return -1;
}

int func_165(int iParam0)//Position - 0x3594D
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		case joaat("comet6"):
			return 1;
		case joaat("jester4"):
			return 2;
		case joaat("vectre"):
			return 3;
		case joaat("cypher"):
			return 4;
		case joaat("tailgater2"):
			return 5;
		case joaat("euros"):
			return 6;
		case joaat("growler"):
			return 7;
		case joaat("calico"):
			return 8;
		case joaat("remus"):
			return 9;
		case joaat("dominator7"):
			return 10;
		case joaat("futo2"):
			return 11;
		case joaat("rt3000"):
			return 12;
		case joaat("warrener2"):
			return 13;
		case joaat("sultan3"):
			return 14;
		case joaat("dominator8"):
			return 15;
		case joaat("previon"):
			return 16;
		default:
	}
	return -1;
}

int func_166(int iParam0, var uParam1)//Position - 0x35B48
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_167(int iParam0)//Position - 0x35B67
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_168(int iParam0, var uParam1)//Position - 0x35BC6
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_169(int iParam0)//Position - 0x35BE5
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 7:
			return 1;
		case 1:
			return 2;
		case 5:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		case 4:
			return 6;
		case 6:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 11;
		case 13:
			return 12;
		case 14:
			return 13;
		case 15:
			return 14;
		case 16:
			return 15;
		default:
	}
	return -1;
}

int func_170(int iParam0)//Position - 0x35CA8
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		case joaat("winky"):
			return 1;
			break;
		case joaat("longfin"):
			return 2;
			break;
		case joaat("annihilator2"):
			return 3;
			break;
		case joaat("alkonost"):
			return 4;
			break;
		case joaat("patrolboat"):
			return 5;
			break;
		case joaat("brioso2"):
			return 6;
			break;
		case joaat("weevil"):
			return 7;
			break;
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_171(int iParam0)//Position - 0x35D2E
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		case joaat("burrito2"):
			return 1;
			break;
		case joaat("boxville"):
			return 2;
			break;
		case joaat("stockade"):
			return 3;
			break;
		case joaat("asbo"):
			return 4;
			break;
		case joaat("kanjo"):
			return 5;
			break;
		case joaat("everon"):
			return 6;
			break;
		case joaat("retinue2"):
			return 7;
			break;
		case joaat("yosemite2"):
			return 8;
			break;
		case joaat("sugoi"):
			return 9;
			break;
		case joaat("sultan2"):
			return 10;
			break;
		case joaat("outlaw"):
			return 11;
			break;
		case joaat("vagrant"):
			return 12;
			break;
		case joaat("komoda"):
			return 13;
			break;
		case joaat("stryder"):
			return 14;
			break;
		case joaat("furia"):
			return 15;
			break;
		case joaat("zhaba"):
			return 16;
			break;
		case joaat("jugular"):
			return 17;
			break;
		case joaat("sentinel3"):
			return 18;
			break;
		case joaat("gauntlet3"):
			return 19;
			break;
		case joaat("ellie"):
			return 20;
			break;
		case joaat("defiler"):
			return 21;
			break;
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_172(int iParam0)//Position - 0x3629A
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		case joaat("cerberus2"):
			return 9;
			break;
		case joaat("cerberus3"):
			return 10;
			break;
		case joaat("brutus"):
			return 11;
			break;
		case joaat("brutus2"):
			return 12;
			break;
		case joaat("brutus3"):
			return 13;
			break;
		case joaat("zr380"):
			return 14;
			break;
		case joaat("zr3802"):
			return 15;
			break;
		case joaat("zr3803"):
			return 16;
			break;
		case joaat("scarab"):
			return 20;
			break;
		case joaat("scarab2"):
			return 21;
			break;
		case joaat("scarab3"):
			return 22;
			break;
		case joaat("imperator"):
			return 17;
			break;
		case joaat("imperator2"):
			return 18;
			break;
		case joaat("imperator3"):
			return 19;
			break;
		case joaat("impaler"):
			return 102;
			break;
		case joaat("ratloader2"):
			return 103;
			break;
		case joaat("glendale"):
			return 104;
			break;
		case joaat("slamvan"):
			return 105;
			break;
		case joaat("dominator"):
			return 106;
			break;
		case joaat("issi3"):
			return 107;
			break;
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_173(int iParam0)//Position - 0x363DE
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		case joaat("cerberus2"):
			return 1;
		case joaat("cerberus3"):
			return 2;
		case joaat("brutus"):
			return 3;
		case joaat("brutus2"):
			return 4;
		case joaat("brutus3"):
			return 5;
		case joaat("scarab"):
			return 6;
		case joaat("scarab2"):
			return 7;
		case joaat("scarab3"):
			return 8;
		case joaat("imperator"):
			return 9;
		case joaat("imperator2"):
			return 10;
		case joaat("imperator3"):
			return 11;
		case joaat("zr380"):
			return 12;
		case joaat("zr3802"):
			return 13;
		case joaat("zr3803"):
			return 14;
		case joaat("ratloader2"):
			return 15;
		case joaat("glendale"):
			return 16;
		case joaat("slamvan"):
			return 17;
		case joaat("dominator"):
			return 18;
		case joaat("impaler"):
			return 19;
		case joaat("issi3"):
			return 20;
		case joaat("gargoyle"):
			return 21;
		default:
	}
	return -1;
}

int func_174(int iParam0)//Position - 0x36640
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24718 /* Tunable: -781384755 */;
			break;
		case joaat("pounder2"):
			return Global_262145.f_24719 /* Tunable: 1813909003 */;
			break;
		case joaat("oppressor2"):
			return Global_262145.f_24720 /* Tunable: 246949104 */;
			break;
		case joaat("patriot2"):
			return Global_262145.f_24721 /* Tunable: -410593703 */;
			break;
		case joaat("blimp3"):
			return Global_262145.f_24722 /* Tunable: -121606550 */;
			break;
	}
	return 0;
}

int func_175(int iParam0)//Position - 0x366AF
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		case joaat("pounder2"):
			return 1;
			break;
		case joaat("oppressor2"):
			return 2;
			break;
		case joaat("pbus2"):
			return 3;
			break;
		case joaat("patriot2"):
			return 4;
			break;
		case joaat("blimp3"):
			return 5;
			break;
	}
	return -1;
}

int func_176(int iParam0)//Position - 0x367D2
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
			return 11;
		case 12:
			return 12;
		case 13:
			return 13;
		case 14:
			return 14;
		case 15:
			return 15;
		default:
	}
	return -1;
}

int func_177(int iParam0)//Position - 0x3688A
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		case joaat("akula"):
			return 1;
			break;
		case joaat("riot2"):
			return 2;
			break;
		case joaat("stromberg"):
			return 3;
			break;
		case joaat("chernobog"):
			return 4;
			break;
		case joaat("barrage"):
			return 5;
			break;
		case joaat("khanjali"):
			return 6;
			break;
		case joaat("volatol"):
			return 7;
			break;
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_178(int iParam0)//Position - 0x3694F
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22740 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MICROLIGHT */;
		case joaat("rogue"):
			return Global_262145.f_22741 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ROGUE */;
		case joaat("alphaz1"):
			return Global_262145.f_22742 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_ALPHAZ1 */;
		case joaat("havok"):
			return Global_262145.f_22743 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HAVOK */;
		case joaat("starling"):
			return Global_262145.f_22744 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_STARLING */;
		case joaat("molotok"):
			return Global_262145.f_22745 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOLOTOK */;
		case joaat("tula"):
			return Global_262145.f_22746 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_TULA */;
		case joaat("bombushka"):
			return Global_262145.f_22747 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_BOMBUSHKA */;
		case joaat("howard"):
			return Global_262145.f_22748 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HOWARD */;
		case joaat("mogul"):
			return Global_262145.f_22749 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_MOGUL */;
		case joaat("pyro"):
			return Global_262145.f_22750 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_PYRO */;
		case joaat("seabreeze"):
			return Global_262145.f_22751 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_SEABREEZE */;
		case joaat("nokota"):
			return Global_262145.f_22752 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_NOKOTA */;
		case joaat("hunter"):
			return Global_262145.f_22753 /* Tunable: SMUG_NUMBER_OF_STEAL_MISSIONS_TO_UNLOCK_HUNTER */;
		default:
	}
	return 0;
}

int func_179(int iParam0)//Position - 0x36A5F
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		case joaat("halftrack"):
			return 1;
		case joaat("trailersmall2"):
			return 2;
		case joaat("apc"):
			return 3;
		case joaat("tampa3"):
			return 5;
		case joaat("oppressor"):
			return 7;
		default:
	}
	return 3;
}

int func_180(int iParam0)//Position - 0x36AAB
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		case joaat("halftrack"):
			return 1;
			break;
		case joaat("trailersmall2"):
			return 2;
			break;
		case joaat("apc"):
			return 3;
			break;
		case joaat("tampa3"):
			return 4;
			break;
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_181(int iParam0)//Position - 0x36CCF
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x36D89
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x36E00
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		case joaat("dune5"):
			return 0;
		case joaat("wastelander"):
			return 1;
		case joaat("blazer5"):
			return 2;
		case joaat("phantom2"):
			return 3;
		case joaat("voltic2"):
			return 4;
		case joaat("technical2"):
			return 5;
		case joaat("boxville5"):
			return 6;
		case joaat("ruiner2"):
			return 7;
		default:
	}
	return 0;
}

int func_184(var uParam0)//Position - 0x36E6A
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		case joaat("boxville5"):
			return 1;
			break;
		case joaat("wastelander"):
			return 2;
			break;
		case joaat("phantom2"):
			return 3;
			break;
		case joaat("voltic2"):
			return 4;
			break;
		case joaat("dune4"):
			return 5;
			break;
		case joaat("dune5"):
			return 5;
			break;
		case joaat("ruiner2"):
			return 6;
			break;
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_185(int iParam0)//Position - 0x36EF3
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x3921A
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		case joaat("stinger"):
			return 1;
		case joaat("jb700"):
			return 2;
		case joaat("cheetah"):
			return 3;
		case joaat("entityxf"):
			return 4;
		case joaat("adder"):
			return 5;
		case joaat("monroe"):
			return 6;
		case joaat("cogcabrio"):
			return 7;
		case joaat("shamal"):
			return 10;
		case joaat("stunt"):
			return 11;
		case joaat("cuban800"):
			return 12;
		case joaat("duster"):
			return 13;
		case joaat("luxor"):
			return 14;
		case joaat("frogger"):
			return 15;
		case joaat("maverick"):
			return 16;
		case joaat("rhino"):
			return 17;
		case joaat("titan"):
			return 18;
		case joaat("cargobob"):
			return 19;
		case joaat("buzzard"):
			return 20;
		case joaat("crusader"):
			return 21;
		case joaat("barracks"):
			return 22;
		case joaat("marquis"):
			return 24;
		case joaat("jetmax"):
			return 25;
		case joaat("squalo"):
			return 27;
		case joaat("tropic"):
			return 29;
		case joaat("seashark"):
			return 30;
		case joaat("submersible"):
			return 31;
		case joaat("suntrap"):
			return 32;
		case joaat("tug"):
			return 258;
		case joaat("bmx"):
			return 33;
		case joaat("scorcher"):
			return 34;
		case joaat("tribike"):
			return 35;
		case joaat("tribike2"):
			return 36;
		case joaat("tribike3"):
			return 37;
		case joaat("cruiser"):
			return 38;
		case joaat("schwarzer"):
			return 39;
		case joaat("zion"):
			return 40;
		case joaat("gauntlet"):
			return 41;
		case joaat("vigero"):
			return 42;
		case joaat("issi2"):
			return 43;
		case joaat("infernus"):
			return 44;
		case joaat("surano"):
			return 45;
		case joaat("vacca"):
			return 46;
		case joaat("ninef"):
			return 47;
		case joaat("comet2"):
			return 48;
		case joaat("banshee"):
			return 49;
		case joaat("feltzer2"):
			return 50;
		case joaat("bfinjection"):
			return 51;
		case joaat("sandking"):
			return 52;
		case joaat("fugitive"):
			return 53;
		case joaat("dilettante"):
			return 54;
		case joaat("superd"):
			return 55;
		case joaat("exemplar"):
			return 56;
		case joaat("baller2"):
			return 57;
		case joaat("cavalcade"):
			return 58;
		case joaat("rocoto"):
			return 59;
		case joaat("felon"):
			return 60;
		case joaat("oracle2"):
			return 61;
		case joaat("bati"):
			return 62;
		case joaat("akuma"):
			return 63;
		case joaat("ruffian"):
			return 64;
		case joaat("vader"):
			return 65;
		case joaat("blazer"):
			return 66;
		case joaat("pcj"):
			return 67;
		case joaat("sanchez"):
			return 68;
		case joaat("faggio2"):
			return 69;
		case joaat("airbus"):
			return 82;
		case joaat("annihilator"):
			return 78;
		case joaat("bati2"):
			return 94;
		case joaat("bison"):
			return 89;
		case joaat("bullet"):
			return 70;
		case joaat("bus"):
			return 83;
		case joaat("carbonizzare"):
			return 71;
		case joaat("coach"):
			return 84;
		case joaat("coquette"):
			return 72;
		case joaat("double"):
			return 90;
		case joaat("dump"):
			return 81;
		case joaat("felon2"):
			return 91;
		case joaat("hexer"):
			return 92;
		case joaat("journey"):
			return 85;
		case joaat("mammatus"):
			return 79;
		case joaat("mule"):
			return 86;
		case joaat("ninef2"):
			return 73;
		case joaat("rapidgt"):
			return 74;
		case joaat("rapidgt2"):
			return 75;
		case joaat("rentalbus"):
			return 87;
		case joaat("stingergt"):
			return 76;
		case joaat("stretch"):
			return 88;
		case joaat("velum"):
			return 80;
		case joaat("voltic"):
			return 77;
		case joaat("zion2"):
			return 93;
		case joaat("elegy2"):
			return 95;
		case joaat("khamelion"):
			return 96;
		case joaat("hotknife"):
			return 97;
		case joaat("carbonrs"):
			return 98;
		case joaat("bodhi2"):
			return 103;
		case joaat("dune"):
			return 104;
		case joaat("rebel"):
			return 105;
		case joaat("sadler"):
			return 106;
		case joaat("sanchez2"):
			return 107;
		case joaat("sandking2"):
			return 108;
		case joaat("asea"):
			return 128;
		case joaat("asterope"):
			return 129;
		case joaat("bobcatxl"):
			return 130;
		case joaat("cavalcade2"):
			return 131;
		case joaat("granger"):
			return 132;
		case joaat("ingot"):
			return 133;
		case joaat("intruder"):
			return 134;
		case joaat("minivan"):
			return 135;
		case joaat("premier"):
			return 136;
		case joaat("radi"):
			return 137;
		case joaat("rancherxl"):
			return 138;
		case joaat("ratloader"):
			return 139;
		case joaat("stanier"):
			return 140;
		case joaat("stratum"):
			return 141;
		case joaat("washington"):
			return 142;
		case joaat("dominator"):
			return 122;
		case joaat("f620"):
			return 123;
		case joaat("fusilade"):
			return 124;
		case joaat("penumbra"):
			return 125;
		case joaat("sentinel"):
			return 126;
		case joaat("sentinel2"):
			return 127;
		case joaat("picador"):
			return 150;
		case joaat("regina"):
			return 151;
		case joaat("surfer"):
			return 152;
		case joaat("youga"):
			return 153;
		case joaat("blazer3"):
			return 154;
		case joaat("rebel2"):
			return 155;
		case joaat("primo"):
			return 156;
		case joaat("buffalo"):
			return 157;
		case joaat("buffalo2"):
			return 158;
		case joaat("tailgater"):
			return 159;
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("roosevelt") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("roosevelt2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == Global_75448)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == __LIB_0__::func_981())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	else if (iParam0 == joaat("comet7"))
	{
		return 554;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		return 555;
	}
	else if (iParam0 == joaat("reever"))
	{
		return 556;
	}
	else if (iParam0 == joaat("baller7"))
	{
		return 557;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		return 558;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		return 559;
	}
	else if (iParam0 == joaat("astron"))
	{
		return 560;
	}
	else if (iParam0 == joaat("deity"))
	{
		return 561;
	}
	else if (iParam0 == joaat("zeno"))
	{
		return 562;
	}
	else if (iParam0 == joaat("champion"))
	{
		return 563;
	}
	else if (iParam0 == joaat("ignus"))
	{
		return 564;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		return 565;
	}
	else if (iParam0 == joaat("granger2"))
	{
		return 566;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		return 567;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		return 568;
	}
	else if (iParam0 == joaat("tenf"))
	{
		return 569;
	}
	return -1;
}

int func_187(int iParam0)//Position - 0x3B8DB
{
	switch (iParam0)
	{
		case 2:
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x3B8FE
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_189(int iParam0, bool bParam1)//Position - 0x3B927
{
	if (bParam1)
	{
		return Global_1659905;
	}
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_96;
	}
	return 0;
}

int func_190()//Position - 0x3B959
{
	return Global_1057406;
}

void func_191()//Position - 0x3B98A
{
	Global_1837295 = 0;
	Global_1837296 = 0;
}

int func_192()//Position - 0x3B99C
{
	return Global_1057409;
}

bool func_193(int iParam0)//Position - 0x3B9A8
{
	return Global_2689235[iParam0 /*453*/].f_119 == 8;
}

bool func_194(int iParam0)//Position - 0x3B9BE
{
	return Global_2689235[iParam0 /*453*/].f_119 == 6;
}

bool func_195(int iParam0)//Position - 0x3B9D3
{
	return Global_2689235[iParam0 /*453*/].f_119 == 5;
}

int func_196(int iParam0)//Position - 0x3BA0C
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5032[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0x3BA78
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_5023[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_198()//Position - 0x3BAC0
{
	Global_2714762.f_669.f_13 = 1;
}

var func_199()//Position - 0x3BAD2
{
	return Global_2714762.f_669.f_13;
}

var func_200()//Position - 0x3BAE3
{
	return BitTest(Global_2714762.f_669.f_1, 0);
}

var func_201(int iParam0)//Position - 0x3BB56
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 14);
}

bool func_202()//Position - 0x3BB6E
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 2);
}

void func_203(char* sParam0, int iParam1, int iParam2)//Position - 0x3BB85
{
	switch (iParam1)
	{
		case 11:
			StringCopy(sParam0, "MG_GOLF_", 32);
			break;
		case 13:
			StringCopy(sParam0, "MG_RANGE_", 32);
			break;
		case 12:
			StringCopy(sParam0, "MG_TENNIS_", 32);
			break;
		case 15:
			StringCopy(sParam0, "MG_ARM_", 32);
			break;
		case 14:
			StringCopy(sParam0, "MG_DARTS_", 32);
			break;
		case 122:
			StringCopy(sParam0, "MG_PILOT_", 32);
			break;
		case 5:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
		case 148:
			StringCopy(sParam0, "IMPROMPTU_DM", 32);
			return;
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

void func_204(char* sParam0, int iParam1, int iParam2)//Position - 0x3BC28
{
	switch (iParam1)
	{
		case 32:
			StringCopy(sParam0, "RACE_TO_POINT_", 32);
			break;
		case 25:
			StringCopy(sParam0, "PROSTITUTES_", 32);
			break;
		case 19:
			StringCopy(sParam0, "IMPORT_EXPORT_", 32);
			break;
		case 30:
			StringCopy(sParam0, "HOLD_UPS_", 32);
			break;
		case 31:
			StringCopy(sParam0, "CREATE_DROP_", 32);
			break;
	}
	StringIntConCat(sParam0, iParam2, 32);
}

int func_205(int iParam0, int iParam1, bool bParam2)//Position - 0x3C004
{
	var uVar0;
	uVar0 = BitTest(iParam0, iParam1);
	if (!bParam2)
	{
		return uVar0;
	}
	switch (iParam1)
	{
		case 0:
			return uVar0;
		case 1:
			return uVar0;
		case 2:
			return uVar0;
		case 3:
			return uVar0;
		case 4:
			return uVar0;
		case 5:
			return uVar0;
		case 6:
			return uVar0;
		case 7:
			return uVar0;
		case 8:
			return uVar0;
		default:
	}
	return 0;
}

int func_206(var uParam0)//Position - 0x3C3EF
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			__LIB_0__::func_989(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_207(bool bParam0)//Position - 0x3C7DC
{
	if (Global_4538805 != bParam0)
	{
		Global_4538805 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4538806, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
		}
		else
		{
			StringCopy(&Global_4538806, "", 64);
		}
	}
}

bool func_208(int iParam0)//Position - 0x3C80F
{
	return iParam0 == 2;
}

bool func_209()//Position - 0x3C81B
{
	return Global_2714762.f_43.f_57;
}

void func_210()//Position - 0x3C8F3
{
	Global_2727095 = 1;
}

void func_211(int iParam0)//Position - 0x3C900
{
	if (Global_1574632.f_20 != iParam0)
	{
		Global_1574632.f_20 = iParam0;
	}
}

int func_212()//Position - 0x3C91B
{
	return Global_1574632.f_20;
}

void func_213(var uParam0, bool bParam1)//Position - 0x3C929
{
	if (bParam1)
	{
		__LIB_0__::func_989(&(uParam0->f_1), 1024);
	}
	else
	{
		__LIB_0__::func_988(&(uParam0->f_1), 1024);
	}
}

void func_214(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3CA18
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		__LIB_0__::func_989(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		__LIB_0__::func_989(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, true);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			__LIB_0__::func_989(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		__LIB_0__::func_989(&(uParam0->f_1), 8192);
	}
}

int func_215(var uParam0)//Position - 0x3CA92
{
	return uParam0->f_25;
}

void func_216(var uParam0, float fParam1)//Position - 0x3CD23
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_217(var uParam0)//Position - 0x3D3C5
{
	int iVar0;
	Local_45.f_66++;
	iVar0 = Local_45.f_66;
	Local_45.f_9[iVar0 /*7*/].f_3 = -1f;
	Local_45.f_9[iVar0 /*7*/].f_4 = -1f;
	Local_45.f_9[iVar0 /*7*/].f_5 = 0;
	Local_45.f_9[iVar0 /*7*/].f_6 = 0;
	Local_45.f_9[iVar0 /*7*/] = iVar0;
	Local_45.f_9[iVar0 /*7*/].f_1 = uParam0;
	return iVar0;
}

void func_218()//Position - 0x3D421
{
	int iVar0;
	Local_45.f_66 = -1;
	Local_45.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_45.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_45.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_45.f_9[iVar0 /*7*/].f_5 = 0;
		Local_45.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_45.f_5 = 0;
	Local_45.f_5.f_1 = -1f;
	Local_45.f_5.f_2 = 0;
	Local_45.f_0 = 0;
	Local_45.f_1 = 0;
}

char* func_219(int iParam0, bool bParam1)//Position - 0x3D4F6
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return "ARM_WRESTLING_WIN_01_MASTER";
			case 2:
				return "ARM_WRESTLING_WIN_02_MASTER";
			case 3:
				return "ARM_WRESTLING_WIN_03_MASTER";
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "ARM_WRESTLING_LOSE_01_MASTER";
			case 2:
				return "ARM_WRESTLING_LOSE_02_MASTER";
			case 3:
				return "ARM_WRESTLING_LOSE_03_MASTER";
			}
		default:
	}
	return "";
}

void func_220()//Position - 0x3D6A4
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Lose", 0, true);
}

char* func_221(int iParam0)//Position - 0x3DA7B
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_222()//Position - 0x3DAEA
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win", 0, true);
}

int func_223(var uParam0)//Position - 0x3DB0F
{
	if (uParam0->f_25 == 14)
	{
		return 0;
	}
	return (*uParam0)[uParam0->f_25];
}

void func_224()//Position - 0x3DE74
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 23);
}

void func_225()//Position - 0x3DE91
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 12);
}

void func_226()//Position - 0x3DEAE
{
	Global_1922955.f_4 = 1;
}

Vector3 func_227()//Position - 0x3DEBD
{
	return Global_2714762.f_43.f_575;
}

int func_228()//Position - 0x3DED0
{
	if ((Global_2714762.f_43.f_575 != 0f || Global_2714762.f_43.f_575.f_1 != 0f) || Global_2714762.f_43.f_575.f_2 != 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_229()//Position - 0x3DF11
{
	return Global_2714762.f_43.f_578;
}

struct<6> func_230()//Position - 0x3DF24
{
	return Global_2714762.f_43.f_12;
}

var func_231()//Position - 0x3DF36
{
	return Global_2714762.f_43.f_59;
}

var func_232()//Position - 0x3DF46
{
	return Global_2714762.f_43.f_55;
}

void func_233(int iParam0)//Position - 0x3DF56
{
	Global_2715699.f_6321 = iParam0;
}

void func_234()//Position - 0x3DF67
{
	Global_1922955.f_3 = 1;
}

bool func_235()//Position - 0x3DF76
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 24);
}

void func_236()//Position - 0x3DF90
{
	Global_1922955.f_7 = 1;
}

void func_237(var uParam0)//Position - 0x3DF9F
{
	Global_1922955.f_10 = uParam0;
}

void func_238()//Position - 0x3E02F
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 9);
}

var func_239(int iParam0)//Position - 0x3E04C
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 9);
}

void func_240()//Position - 0x3E064
{
	Global_1922955.f_7 = 0;
}

void func_241()//Position - 0x3E073
{
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_5 = 0;
}

void func_242()//Position - 0x3E089
{
	Global_1922955.f_10 = -1;
}

void func_243()//Position - 0x3E098
{
	Global_1922955.f_4 = 0;
}

void func_244()//Position - 0x3E0A7
{
	Global_1922955.f_3 = 0;
}

void func_245()//Position - 0x3E0B6
{
	Global_2715699.f_2846.f_2 = 1;
}

int func_246(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3E1E7
{
	int iVar0;
	int iVar1;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = (uParam0->f_123 - 1);
	if (iVar0 >= 0 && iVar0 < 8)
	{
		iVar1 = uParam0->f_2[iVar0 /*15*/].f_14;
		if (iVar1 < 4)
		{
			uParam0->f_2[iVar0 /*15*/].f_3[iVar1 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*15*/].f_3[iVar1 /*2*/].f_1 = iParam2;
			if (iParam3 == 1)
			{
				MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), iVar1);
			}
			uParam0->f_2[iVar0 /*15*/].f_14++;
			return 1;
		}
	}
	return 0;
}

int func_247(var uParam0, int iParam1)//Position - 0x3E41E
{
	if (iParam1 >= 14)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_248(int* iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x3E8D7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::IS_TIME_MORE_THAN(iParam0->f_24[iVar0], iParam1) || iVar0 == 7)
		{
			*uParam2 = iParam0->f_24[iVar0];
			*uParam3 = iParam0->f_5[iVar0];
			return;
		}
		iVar0++;
	}
}

float func_249(var uParam0)//Position - 0x3E95A
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::ABSF((uParam0->f_3 - uParam0->f_7));
	fVar1 = MISC::ABSF((uParam0->f_5 - uParam0->f_9));
	if (fVar0 > fVar1 || PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return SYSTEM::SQRT(fVar0);
	}
	return SYSTEM::SQRT(fVar1);
}

void func_250(var uParam0, bool bParam1)//Position - 0x3E9D2
{
	uParam0->f_22++;
	if (uParam0->f_22 >= 15)
	{
		uParam0->f_22 = 0;
	}
	if (bParam1)
	{
		uParam0->f_2[uParam0->f_22] = 0f;
	}
}

void func_251(var uParam0, int iParam1, float fParam2)//Position - 0x3EA02
{
	if (iParam1 < 0 || iParam1 >= 15)
	{
		return;
	}
	uParam0->f_2[iParam1] = (uParam0->f_2[iParam1] + fParam2);
}

float func_252(int* iParam0)//Position - 0x3EA6E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!iParam0->f_24[((8 - iVar0) - 1)] == 0)
		{
			return iParam0->f_5[((8 - iVar0) - 1)];
		}
		iVar0++;
	}
	return 0f;
}

void func_253(var uParam0)//Position - 0x3EAC5
{
	uParam0->f_26.f_1 = 0;
}

int func_254()//Position - 0x3EC76
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
	{
		return 1;
	}
	return 0;
}

int func_255(int iParam0)//Position - 0x3EDE8
{
	switch (iParam0)
	{
		case 51:
		case 52:
		case 54:
		case 40:
		case 41:
		case 53:
		case 43:
		case 44:
		case 24:
		case 45:
		case 14:
		case 15:
		case 16:
		case 17:
		case 20:
		case 21:
		case 18:
		case 19:
		case 31:
		case 32:
		case 33:
		case 36:
		case 37:
		case 38:
		case 22:
		case 39:
		case 47:
		case 48:
		case 49:
		case 50:
		case 23:
		case 58:
		case 42:
		case 28:
		case 25:
		case 26:
		case 61:
		case 46:
		case 55:
		case 27:
		case 56:
		case 11:
		case 34:
		case 35:
		case 62:
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
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 84:
		case 105:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 1;
		default:
	}
	return 0;
}

int func_256(int iParam0)//Position - 0x3F283
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		default:
	}
	return 0;
}

void func_257(var uParam0)//Position - 0x3F47F
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_258(int iParam0)//Position - 0x3F4FE
{
	if ((((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110) || iParam0 == 111)
	{
		return 1;
	}
	return 0;
}

int func_259()//Position - 0x3F631
{
	return 21;
}

int func_260(int iParam0)//Position - 0x3F63B
{
	switch (iParam0)
	{
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
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		default:
	}
	return 0;
}

int func_261(int iParam0, int iParam1, int iParam2)//Position - 0x3FB81
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!__LIB_0__::func_825(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_262()//Position - 0x3FC2D
{
	if (__LIB_0__::func_625())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_172946, 4);
}

int func_263()//Position - 0x400B0
{
	return __LIB_0__::func_976(Global_4718592.f_116524);
}

void func_264(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x40368
{
	uParam1->f_17 = __LIB_0__::getMinusOneOrNull();
	uParam1->f_18 = __LIB_0__::getMinusOneOrNull();
	uParam1->f_19 = __LIB_0__::getMinusOneOrNull();
	uParam1->f_20 = __LIB_0__::getMinusOneOrNull();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_265(var uParam0, int iParam1)//Position - 0x40709
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_266(int* iParam0, bool bParam1)//Position - 0x4076E
{
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 4);
	}
	if (BitTest(*iParam0, 4))
	{
	}
}

int func_267(var uParam0, int iParam1)//Position - 0x40797
{
	if (iParam1 == 7)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_268(var uParam0, int iParam1, bool bParam2)//Position - 0x4092F
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_11), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_11), iParam1);
	}
}

void func_269(var uParam0)//Position - 0x40953
{
	uParam0->f_12 = uParam0->f_11;
	uParam0->f_11 = 0;
}

void func_270(var uParam0, var uParam1)//Position - 0x40980
{
	uParam0->f_6 = uParam1;
}

void func_271(var uParam0, var uParam1)//Position - 0x4098E
{
	uParam0->f_5 = uParam1;
}

void func_272(var uParam0, var uParam1)//Position - 0x409B4
{
	uParam0->f_4 = uParam1;
}

void func_273(var uParam0, var uParam1)//Position - 0x409C2
{
	uParam0->f_3 = uParam1;
}

void func_274(var uParam0)//Position - 0x40AA5
{
	uParam0->f_7 = uParam0->f_3;
	uParam0->f_8 = uParam0->f_4;
	uParam0->f_9 = uParam0->f_5;
	uParam0->f_10 = uParam0->f_6;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0f;
}

void func_275(int* iParam0, int iParam1, bool bParam2)//Position - 0x40B12
{
	if (bParam2)
	{
		MISC::SET_BIT(&(iParam0->f_18), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_18), iParam1);
	}
}

void func_276(var uParam0, float fParam1)//Position - 0x40B36
{
	uParam0->f_487 = fParam1;
}

bool func_277(var uParam0, int iParam1)//Position - 0x40B45
{
	return uParam0->f_25 == iParam1;
}

void func_278()//Position - 0x40CD6
{
	struct<13> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Global_1581361.f_1[iVar1 /*13*/] = { Var0 };
		StringCopy(&(Global_1581361.f_418[iVar1 /*16*/]), "", 64);
		MISC::CLEAR_BIT(&Global_1581361, iVar1);
		iVar1++;
	}
}

void func_279(var uParam0, int iParam1, int iParam2)//Position - 0x40DE3
{
	uParam0->f_16 = iParam1;
	uParam0->f_17 = iParam2;
}

float func_280(var* uParam0)//Position - 0x40DF7
{
	return uParam0->f_9;
}

float func_281(int iParam0, float fParam1)//Position - 0x40E03
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 8:
			return (fParam1 - 180f);
		default:
	}
	return fParam1;
}

void func_282(var uParam0)//Position - 0x40E31
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		uParam0->f_2[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_22 = 0;
	Global_2703735.f_3620.f_37 = 0;
}

void func_283(int iParam0)//Position - 0x40E85
{
	if (Global_2825122.f_3.f_173[0] != iParam0)
	{
		Global_2825122.f_3.f_173[0] = iParam0;
	}
}

int func_284(int iParam0)//Position - 0x40F5E
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_285(var uParam0)//Position - 0x414F1
{
	return uParam0->f_6;
}

Vector3 func_286(var uParam0)//Position - 0x414FF
{
	return uParam0->f_3;
}

Vector3 func_287(bool bParam0, struct<3> Param1, struct<3> Param2)//Position - 0x4150D
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x41531
{
	if (iParam1 >= 14)
	{
		return;
	}
	if (iParam3 && !CAM::DOES_CAM_EXIST(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

void func_289(var uParam0, int iParam1)//Position - 0x416F9
{
	*uParam0 = iParam1;
}

void func_290(int* iParam0, int iParam1)//Position - 0x41706
{
	*iParam0 = iParam1;
}

void func_291(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x41713
{
	if (iParam1 >= 14)
	{
		return;
	}
	uParam0->f_25 = iParam1;
	if (CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_25]))
	{
		if (!bParam3)
		{
			CAM::SET_CAM_ACTIVE((*uParam0)[uParam0->f_25], bParam2);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP((*uParam0)[uParam0->f_25], (*uParam0)[iParam4], iParam5, 1, 1);
		}
	}
}

void func_292()//Position - 0x41767
{
	if (Global_2703735.f_2400[0 /*80*/].f_2 != 0)
	{
		Global_2703735.f_2400[0 /*80*/].f_2 = 5;
	}
}

int func_293(int* iParam0, int iParam1)//Position - 0x417AE
{
	if (iParam1 == 2)
	{
		return -1;
	}
	return iParam0->f_15[iParam1];
}

bool func_294(int* iParam0, int iParam1)//Position - 0x418CD
{
	return BitTest(iParam0->f_18, iParam1);
}

char* func_295(bool bParam0, char* sParam1, char* sParam2)//Position - 0x418DC
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_296(int* iParam0)//Position - 0x41AFD
{
	return iParam0->f_1;
}

int func_297(var uParam0)//Position - 0x41BE2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_298(var uParam0)//Position - 0x41CB0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_299(var uParam0)//Position - 0x41D3D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_300(var uParam0)//Position - 0x41D79
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
}

void func_301(var* uParam0, struct<3> Param1)//Position - 0x41DED
{
	uParam0->f_3 = { Param1 };
}

Vector3 func_302(struct<3> Param0, int iParam1)//Position - 0x41DFF
{
	struct<3> Var0;
	switch (iParam1)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_303(var* uParam0, struct<3> Param1)//Position - 0x41E5D
{
	uParam0->f_6 = { Param1 };
}

int func_304(int* iParam0)//Position - 0x41E6F
{
	return iParam0->f_14;
}

int func_305(int* iParam0)//Position - 0x41E7B
{
	return *iParam0;
}

int func_306()//Position - 0x42056
{
	if (Global_2667225.f_2879 > -1)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0)//Position - 0x42292
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_0__::func_156(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && __LIB_0__::func_156(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

bool func_308()//Position - 0x4285F
{
	return Global_4718592 == 3;
}

bool func_309(var uParam0, int iParam1)//Position - 0x42896
{
	return BitTest(uParam0->f_21, iParam1);
}

void func_310(int iParam0)//Position - 0x42A3F
{
	Global_1057410 = iParam0;
}

bool func_311(var uParam0, int iParam1)//Position - 0x42A4D
{
	return BitTest(uParam0->f_489, iParam1);
}

void func_312(var uParam0, int iParam1, bool bParam2)//Position - 0x42B32
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_489), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_489), iParam1);
	}
}

int func_313(int iParam0)//Position - 0x42BCE
{
	return iParam0->f_11;
}

void func_314(var uParam0)//Position - 0x42C84
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_3[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_315(int iParam0)//Position - 0x437E5
{
	Global_1057409 = iParam0;
}

void func_316(var uParam0, int iParam1, bool bParam2)//Position - 0x437F3
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_21), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_21), iParam1);
	}
}

int func_317(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x43C06
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		Var0.f_2.f_1 = 4;
		Var0.f_0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				Var2 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_2097157.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723612.f_3)
			{
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&Var0, &(Global_1931618.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
	}
	return 0;
}

void func_318(int* iParam0)//Position - 0x43D9C
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}

bool func_319(int iParam0)//Position - 0x43E41
{
	return iParam0 == 10;
}

void func_320()//Position - 0x43E4E
{
	__LIB_1__::func_8(1);
	__LIB_1__::func_7(4, 0, -1);
	__LIB_1__::func_7(6, 0, -1);
	__LIB_1__::func_7(7, 0, -1);
	__LIB_1__::func_7(3, 0, -1);
	__LIB_1__::func_7(1, 0, -1);
	__LIB_1__::func_7(2, 0, -1);
	__LIB_1__::func_7(11, 0, -1);
	__LIB_1__::func_7(13, 0, -1);
	__LIB_1__::func_7(14, 0, -1);
	__LIB_1__::func_7(16, 0, -1);
}

int func_321(int iParam0)//Position - 0x44205
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::getGlobal_1574918();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		case 1:
			iVar0 = 910;
			break;
		case 2:
			iVar0 = 911;
			break;
		case 3:
			iVar0 = 912;
			break;
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

void func_322(var* uParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x451C1
{
	struct<3> Var0;
	switch (iParam2)
	{
		case 1:
			*uParam0 = { 1116.5148f, -3153.2751f, -37.569f };
			*fParam1 = 90f;
			break;
		case 2:
			*uParam0 = { 1003.2322f, -3165.736f, -34.5976f };
			*fParam1 = 0f;
			break;
		case 3:
			*uParam0 = { 1443.3403f, -2219.0103f, 60.348946f };
			*fParam1 = 105.02331f;
			break;
		case 4:
			*uParam0 = { -82.4445f, -1327.78f, 28.7965f };
			*fParam1 = 180f;
			break;
		case 5:
			*uParam0 = { 901.9729f, -172.1309f, 73.5662f };
			*fParam1 = 0f;
			break;
		case 6:
			*uParam0 = { 369.092f, -2445.45f, 5.51899f };
			*fParam1 = -178.02731f;
			break;
		case 7:
			*uParam0 = { 1221.22f, 2726.06f, 37.5038f };
			*fParam1 = -63.207565f;
			break;
		case 8:
			*uParam0 = { 1051.6752f, 2663.61f, 39.026268f };
			*fParam1 = 111.57772f;
			break;
		case 9:
			*uParam0 = { 270.225f, 2603.96f, 44.2309f };
			*fParam1 = 140.46843f;
			break;
		case 10:
			*uParam0 = { -191.917f, 6273.26f, 30.9709f };
			*fParam1 = -3.810523f;
			break;
		case 11:
			*uParam0 = { 1685.72f, 4970.39f, 42.096f };
			*fParam1 = 15.229779f;
			break;
		case 12:
			*uParam0 = { 2340.87f, 3130.47f, 47.6839f };
			*fParam1 = 126.138824f;
			break;
		default:
			break;
	}
	if (bParam3)
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 8f, joaat("prop_arm_wrestle_01"), false))
		{
			OBJECT::GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(*uParam0, 8f, joaat("prop_arm_wrestle_01"), uParam0, &Var0, 0);
			if (((iParam2 != 12 && iParam2 != 3) && iParam2 != 4) && iParam2 != 8)
			{
				*fParam1 = Var0.f_2;
			}
		}
	}
}

void func_323(var uParam0, int iParam1)//Position - 0x453DC
{
	if (iParam1 < 1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

int func_324(var uParam0)//Position - 0x45464
{
	return uParam0->f_8;
}

void func_325(var uParam0, int iParam1)//Position - 0x3E95
{
	struct<3> Var0;
	Var0.f_0 = 219130657;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_0__::func_950(iParam1));
}

void func_326(int* iParam0)//Position - 0x3F4B
{
	if (__LIB_1__::func_13(&(iParam0->f_2)))
	{
		__LIB_1__::func_12(&(iParam0->f_2));
	}
}

void func_327(int* iParam0, float fParam1)//Position - 0x403A
{
	if (!__LIB_1__::func_13(iParam0))
	{
		__LIB_0__::func_706(iParam0, fParam1);
	}
}

bool func_328(int* iParam0)//Position - 0x4054
{
	return __LIB_1__::func_13(&(iParam0->f_2));
}

void func_329(var uParam0, float fParam1)//Position - 0x648F
{
	if (__LIB_0__::func_625())
	{
		return;
	}
	CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam1);
}

void func_330(var uParam0, int iParam1)//Position - 0x6A9F
{
	__LIB_0__::func_964(uParam0, iParam1);
}

var func_331(int iParam0)//Position - 0x6DF9
{
	char cVar0[16];
	StringCopy(&cVar0, "", 16);
	StringIntConCat(&cVar0, iParam0, 16);
	return __LIB_0__::func_965(&cVar0);
}

int func_332(int iParam0)//Position - 0x70F7
{
	if (iParam0 > -1)
	{
		if (__LIB_0__::func_156(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return __LIB_0__::func_991(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return __LIB_0__::func_991(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_333(int iParam0, int iParam1, int iParam2)//Position - 0x750F
{
	int iVar0;
	if (__LIB_0__::func_968(iParam1, iParam2))
	{
		iVar0 = __LIB_0__::func_967();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

float func_334(int iParam0, int iParam1)//Position - 0x88D2
{
	return SYSTEM::VDIST(__LIB_0__::func_85(iParam0), __LIB_0__::func_85(iParam1));
	return 0f;
}

int func_335(int iParam0)//Position - 0x8B97
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[__LIB_1__::func_27(-1)];
			}
			else if (__LIB_0__::func_855(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[__LIB_1__::func_27(-1)];
	}
	return 0;
}

void func_336(int* iParam0)//Position - 0xA532
{
	iParam0->f_436 = 0;
	iParam0->f_419 = 0;
	iParam0->f_420 = 0;
	iParam0->f_437 = 0;
	iParam0->f_426 = 0;
	iParam0->f_427 = 0;
	iParam0->f_1209 = 0;
	__LIB_0__::clearF_1Prop(&(iParam0->f_430));
	__LIB_0__::clearF_1Prop(&(iParam0->f_432));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_20))
	{
		PED::DELETE_PED(&(iParam0->f_20));
	}
}

void func_337(int* iParam0)//Position - 0xA589
{
	iParam0->f_453 = 0;
	Global_1574971 = 0;
	__LIB_0__::clearF_1Prop(&(iParam0->f_454));
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MP_Celeb_Preload_Fade");
	}
}

int func_338()//Position - 0xA9BE
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == 0)
	{
		return 0;
	}
	if (__LIB_0__::func_52())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	else if (__LIB_0__::func_53())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_339(struct<2> Param0, var uParam1, struct<3> Param2)//Position - 0x2F466
{
	struct<3> Var0;
	if (__LIB_0__::func_86(Param2))
	{
		return 0f, 0f, 0f;
	}
	Var0.f_2 = (180f - MISC::GET_HEADING_FROM_VECTOR_2D((Param2.f_0 - Param0.f_0), (Param2.f_1 - Param0.f_1)));
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	return Var0;
}

void func_340()//Position - 0x2FA6B
{
	if (!__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0))
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

int func_341(int iParam0)//Position - 0x31234
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 6);
	}
	return 0;
}

int func_342(int iParam0, int iParam1)//Position - 0x31AC4
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866852[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_343(var uParam0)//Position - 0x36C54
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__::func_161(iVar0);
	if ((__LIB_0__::func_3() == 0 || __LIB_0__::func_63() == 0) || (__LIB_0__::func_3() == 999 && __LIB_0__::func_63() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			case 1:
				return 740;
				break;
		}
	}
	return 13122;
}

int func_344(int iParam0, int iParam1)//Position - 0x3713C
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		case 1:
			return joaat("stinger");
		case 2:
			return joaat("jb700");
		case 3:
			return joaat("cheetah");
		case 4:
			return joaat("entityxf");
		case 5:
			return joaat("adder");
		case 6:
			return joaat("monroe");
		case 7:
			return joaat("cogcabrio");
		case 10:
			return joaat("shamal");
		case 11:
			return joaat("stunt");
		case 12:
			return joaat("cuban800");
		case 13:
			return joaat("duster");
		case 14:
			return joaat("luxor");
		case 15:
			return joaat("frogger");
		case 16:
			return joaat("maverick");
		case 17:
			return joaat("rhino");
		case 18:
			return joaat("titan");
		case 19:
			return joaat("cargobob");
		case 20:
			return joaat("buzzard");
		case 21:
			return joaat("crusader");
		case 22:
			return joaat("barracks");
		case 24:
			return joaat("marquis");
		case 25:
			return joaat("jetmax");
		case 27:
			return joaat("squalo");
		case 29:
			return joaat("tropic");
		case 30:
			return joaat("seashark");
		case 31:
			return joaat("submersible");
		case 32:
			return joaat("suntrap");
		case 258:
			return joaat("tug");
		case 33:
			return joaat("bmx");
		case 34:
			return joaat("scorcher");
		case 35:
			return joaat("tribike");
		case 36:
			return joaat("tribike2");
		case 37:
			return joaat("tribike3");
		case 38:
			return joaat("cruiser");
		case 39:
			return joaat("schwarzer");
		case 40:
			return joaat("zion");
		case 41:
			return joaat("gauntlet");
		case 42:
			return joaat("vigero");
		case 43:
			return joaat("issi2");
		case 44:
			return joaat("infernus");
		case 45:
			return joaat("surano");
		case 46:
			return joaat("vacca");
		case 47:
			return joaat("ninef");
		case 48:
			return joaat("comet2");
		case 49:
			return joaat("banshee");
		case 50:
			return joaat("feltzer2");
		case 51:
			return joaat("bfinjection");
		case 52:
			return joaat("sandking");
		case 53:
			return joaat("fugitive");
		case 54:
			return joaat("dilettante");
		case 55:
			return joaat("superd");
		case 56:
			return joaat("exemplar");
		case 57:
			return joaat("baller2");
		case 58:
			return joaat("cavalcade");
		case 59:
			return joaat("rocoto");
		case 60:
			return joaat("felon");
		case 61:
			return joaat("oracle2");
		case 62:
			return joaat("bati");
		case 63:
			return joaat("akuma");
		case 64:
			return joaat("ruffian");
		case 65:
			return joaat("vader");
		case 66:
			return joaat("blazer");
		case 67:
			return joaat("pcj");
		case 68:
			return joaat("sanchez");
		case 69:
			return joaat("faggio2");
		case 70:
			return joaat("bullet");
		case 71:
			return joaat("carbonizzare");
		case 72:
			return joaat("coquette");
		case 73:
			return joaat("ninef2");
		case 74:
			return joaat("rapidgt");
		case 75:
			return joaat("rapidgt2");
		case 76:
			return joaat("stingergt");
		case 77:
			return joaat("voltic");
		case 78:
			return joaat("annihilator");
		case 79:
			return joaat("mammatus");
		case 80:
			return joaat("velum");
		case 81:
			return joaat("dump");
		case 82:
			return joaat("airbus");
		case 83:
			return joaat("bus");
		case 84:
			return joaat("coach");
		case 85:
			return joaat("journey");
		case 86:
			return joaat("mule");
		case 87:
			return joaat("rentalbus");
		case 88:
			return joaat("stretch");
		case 89:
			return joaat("bison");
		case 90:
			return joaat("double");
		case 91:
			return joaat("felon2");
		case 92:
			return joaat("hexer");
		case 93:
			return joaat("zion2");
		case 94:
			return joaat("bati2");
		case 95:
			return joaat("elegy2");
		case 96:
			return joaat("khamelion");
		case 97:
			return joaat("hotknife");
		case 98:
			return joaat("carbonrs");
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		case 100:
			return joaat("kalahari");
		case 101:
			return joaat("paradise");
		case 102:
			return joaat("speeder");
		case 103:
			return joaat("bodhi2");
		case 104:
			return joaat("dune");
		case 105:
			return joaat("rebel");
		case 106:
			return joaat("sadler");
		case 107:
			return joaat("sanchez2");
		case 108:
			return joaat("sandking2");
		case 109:
			return joaat("btype");
		case 111:
			return joaat("jester");
		case 114:
			return joaat("massacro");
		case 112:
			return joaat("turismor");
		case 115:
			return joaat("zentorno");
		case 116:
			return joaat("huntley");
		case 110:
			return joaat("alpha");
		case 113:
			return joaat("vestra");
		case 117:
			return joaat("coquette");
		case 118:
			return joaat("banshee");
		case 119:
			return joaat("stinger");
		case 120:
			return joaat("voltic");
		case 121:
			return joaat("thrust");
		case 128:
			return joaat("asea");
		case 129:
			return joaat("asterope");
		case 130:
			return joaat("bobcatxl");
		case 131:
			return joaat("cavalcade2");
		case 132:
			return joaat("granger");
		case 133:
			return joaat("ingot");
		case 134:
			return joaat("intruder");
		case 135:
			return joaat("minivan");
		case 136:
			return joaat("premier");
		case 137:
			return joaat("radi");
		case 138:
			return joaat("rancherxl");
		case 139:
			return joaat("ratloader");
		case 140:
			return joaat("stanier");
		case 141:
			return joaat("stratum");
		case 142:
			return joaat("washington");
		case 122:
			return joaat("dominator");
		case 123:
			return joaat("f620");
		case 124:
			return joaat("fusilade");
		case 125:
			return joaat("penumbra");
		case 126:
			return joaat("sentinel");
		case 127:
			return joaat("sentinel2");
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		case 144:
			return joaat("warrener");
		case 145:
			return joaat("glendale");
		case 146:
			return joaat("rhapsody");
		case 147:
			return joaat("panto");
		case 148:
			return joaat("dubsta3");
		case 149:
			return joaat("pigalle");
		case 150:
			return joaat("picador");
		case 151:
			return joaat("regina");
		case 152:
			return joaat("surfer");
		case 153:
			return joaat("youga");
		case 154:
			return joaat("blazer3");
		case 155:
			return joaat("rebel2");
		case 156:
			return joaat("primo");
		case 157:
			return joaat("buffalo");
		case 158:
			return joaat("buffalo2");
		case 159:
			return joaat("tailgater");
		case 160:
			return joaat("monster");
		case 161:
			return joaat("sovereign");
		case 162:
			return joaat("miljet");
		case 163:
			return joaat("besra");
		case 164:
			return joaat("swift");
		case 165:
			return joaat("coquette2");
		case 166:
			return joaat("coquette2");
		case 167:
			return joaat("innovation");
		case 168:
			return joaat("hakuchou");
		case 169:
			return joaat("furoregt");
		case 170:
			return joaat("kalahari");
		case 187:
			return joaat("valkyrie");
		case 177:
			return joaat("hydra");
		case 185:
			return joaat("savage");
		case 174:
			return joaat("enduro");
		case 171:
			return joaat("boxville4");
		case 172:
			return joaat("casco");
		case 173:
			return joaat("dinghy3");
		case 175:
			return joaat("gburrito2");
		case 176:
			return joaat("guardian");
		case 178:
			return joaat("insurgent");
		case 179:
			return joaat("insurgent2");
		case 183:
			return joaat("mule3");
		case 180:
			return joaat("kuruma");
		case 181:
			return joaat("kuruma2");
		case 182:
			return joaat("lectro");
		case 184:
			return joaat("pbus");
		case 186:
			return joaat("technical");
		case 188:
			return joaat("velum2");
		case 189:
			return joaat("gresley");
		case 190:
			return joaat("jackal");
		case 191:
			return joaat("landstalker");
		case 192:
			return joaat("mesa3");
		case 193:
			return joaat("nemesis");
		case 194:
			return joaat("oracle");
		case 195:
			return joaat("rumpo");
		case 196:
			return joaat("schafter2");
		case 197:
			return joaat("seminole");
		case 198:
			return joaat("surge");
		case 199:
			return joaat("dodo");
		case 200:
			return joaat("marshall");
		case 201:
			return joaat("submersible2");
		case 202:
			return joaat("blista2");
		case 203:
			return joaat("stalion");
		case 204:
			return joaat("dukes");
		case 205:
			return joaat("dukes2");
		case 206:
			return joaat("stalion2");
		case 207:
			return joaat("dominator2");
		case 208:
			return joaat("gauntlet2");
		case 209:
			return joaat("buffalo3");
		case 210:
			return joaat("slamvan");
		case 211:
			return joaat("ratloader2");
		case 212:
			return joaat("jester2");
		case 213:
			return joaat("massacro2");
		case 214:
			return joaat("feltzer3");
		case 215:
			return joaat("luxor2");
		case 216:
			return joaat("osiris");
		case 217:
			return joaat("swift2");
		case 218:
			return joaat("virgo");
		case 219:
			return joaat("windsor");
		case 220:
			return joaat("brawler");
		case 221:
			return joaat("chino");
		case 222:
			return joaat("coquette3");
		case 223:
			return joaat("t20");
		case 224:
			return joaat("toro");
		case 225:
			return joaat("vindicator");
		case 229:
			return joaat("primo");
		case 228:
			return joaat("moonbeam");
		case 227:
			return joaat("faction");
		case 226:
			return joaat("buccaneer");
		case 230:
			return joaat("voodoo2");
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		case 264:
			return joaat("seven70");
		case 259:
			return joaat("windsor2");
		case 260:
			return joaat("prototipo");
		case 261:
			return joaat("fmj");
		case 262:
			return joaat("bestiagts");
		case 265:
			return joaat("pfister811");
		case 266:
			return joaat("reaper");
		case 231:
			return joaat("btype2");
		case 232:
			return joaat("lurcher");
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		case 237:
			return joaat("limo2");
		case 238:
			return joaat("mamba");
		case 239:
			return joaat("nightshade");
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		case 242:
			return joaat("verlierer2");
		case 243:
			return joaat("supervolito");
		case 244:
			return joaat("supervolito2");
		case 245:
			return Global_75446;
		case 251:
			return joaat("virgo3");
		case 250:
			return joaat("tornado");
		case 249:
			return joaat("sabregt");
		case 252:
			return joaat("faction");
		case 246:
			return joaat("tampa");
		case 247:
			return joaat("sultan");
		case 49:
			return joaat("banshee");
		case 248:
			return joaat("btype3");
		case 253:
			return joaat("volatus");
		case 254:
			return joaat("cargobob2");
		case 255:
			return joaat("rumpo3");
		case 256:
			return joaat("brickade");
		case 257:
			return joaat("nimbus");
		case 267:
			return joaat("le7b");
		case 268:
			return joaat("omnis");
		case 269:
			return joaat("tropos");
		case 270:
			return joaat("brioso");
		case 271:
			return joaat("trophytruck");
		case 272:
			return joaat("trophytruck2");
		case 273:
			return joaat("contender");
		case 274:
			return joaat("cliffhanger");
		case 275:
			return joaat("bf400");
		case 279:
			return joaat("tyrus");
		case 280:
			return joaat("lynx");
		case 281:
			return joaat("sheava");
		case 276:
			return joaat("rallytruck");
		case 277:
			return joaat("tampa2");
		case 278:
			return joaat("gargoyle");
		case 282:
			return joaat("bagger");
		case 283:
			return joaat("esskey");
		case 284:
			return joaat("nightblade");
		case 285:
			return joaat("defiler");
		case 286:
			return joaat("avarus");
		case 287:
			return joaat("zombiea");
		case 288:
			return joaat("zombieb");
		case 289:
			return joaat("chimera");
		case 290:
			return joaat("daemon2");
		case 291:
			return joaat("ratbike");
		case 292:
			return joaat("shotaro");
		case 293:
			return joaat("raptor");
		case 294:
			return joaat("hakuchou2");
		case 296:
			return joaat("blazer4");
		case 297:
			return joaat("sanctus");
		case 295:
			return joaat("vortex");
		case 298:
			return joaat("manchez");
		case 299:
			return joaat("tornado6");
		case 300:
			return joaat("youga2");
		case 301:
			return joaat("wolfsbane");
		case 302:
			return joaat("faggio3");
		case 303:
			return joaat("faggio");
		case 304:
			return joaat("dune5");
		case 305:
			return joaat("phantom2");
		case 306:
			return joaat("technical2");
		case 307:
			return joaat("blazer5");
		case 308:
			return joaat("boxville5");
		case 309:
			return joaat("wastelander");
		case 310:
			return joaat("ruiner2");
		case 311:
			return joaat("voltic2");
		case 312:
			return joaat("penetrator");
		case 313:
			return joaat("tempesta");
		case 314:
			return joaat("italigtb");
		case 315:
			return joaat("nero");
		case 316:
			return joaat("diablous");
		case 317:
			return joaat("fcr");
		case 318:
			return joaat("specter");
		case 319:
			return joaat("gp1");
		case 320:
			return joaat("infernus2");
		case 321:
			return joaat("ruston");
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_75447;
		case 324:
			return Global_75448;
		case 325:
			return joaat("cheetah2");
		case 326:
			return joaat("torero");
		case 327:
			return joaat("vagner");
		case 328:
			return joaat("xa21");
		case 329:
			return joaat("apc");
		case 330:
			return joaat("dune3");
		case 331:
			return joaat("halftrack");
		case 332:
			return joaat("oppressor");
		case 333:
			return joaat("tampa3");
		case 334:
			return joaat("trailersmall2");
		case 335:
			return joaat("ardent");
		case 336:
			return joaat("nightshark");
		case 337:
			return joaat("lazer");
		case 338:
			return joaat("microlight");
		case 339:
			return joaat("mogul");
		case 340:
			return joaat("rogue");
		case 341:
			return joaat("starling");
		case 342:
			return joaat("seabreeze");
		case 343:
			return joaat("tula");
		case 344:
			return joaat("pyro");
		case 345:
			return joaat("molotok");
		case 346:
			return joaat("nokota");
		case 347:
			return joaat("bombushka");
		case 348:
			return joaat("hunter");
		case 349:
			return joaat("havok");
		case 350:
			return joaat("howard");
		case 351:
			return joaat("alphaz1");
		case 352:
			return joaat("cyclone");
		case 353:
			return joaat("visione");
		case 354:
			return joaat("retinue");
		case 355:
			return joaat("rapidgt3");
		case 356:
			return joaat("vigilante");
		case 357:
			return Global_75449;
		case 358:
			return joaat("deluxo");
		case 359:
			return joaat("stromberg");
		case 360:
			return joaat("riot2");
		case 361:
			return joaat("chernobog");
		case 362:
			return joaat("khanjali");
		case 363:
			return joaat("akula");
		case 364:
			return joaat("thruster");
		case 365:
			return joaat("barrage");
		case 366:
			return joaat("volatol");
		case 367:
			return joaat("comet4");
		case 368:
			return joaat("neon");
		case 369:
			return joaat("streiter");
		case 370:
			return joaat("sentinel3");
		case 371:
			return joaat("yosemite");
		case 372:
			return joaat("sc1");
		case 373:
			return joaat("autarch");
		case 374:
			return joaat("gt500");
		case 375:
			return joaat("hustler");
		case 376:
			return joaat("revolter");
		case 377:
			return joaat("pariah");
		case 378:
			return joaat("raiden");
		case 379:
			return joaat("savestra");
		case 380:
			return joaat("riata");
		case 381:
			return joaat("hermes");
		case 382:
			return joaat("comet5");
		case 383:
			return joaat("z190");
		case 384:
			return joaat("viseris");
		case 385:
			return joaat("kamacho");
		case 386:
			return joaat("gb200");
		case 387:
			return joaat("fagaloa");
		case 388:
			return joaat("ellie");
		case 389:
			return joaat("issi3");
		case 390:
			return joaat("michelli");
		case 391:
			return joaat("flashgt");
		case 392:
			return joaat("hotring");
		case 393:
			return joaat("tezeract");
		case 394:
			return joaat("tyrant");
		case 395:
			return joaat("dominator3");
		case 396:
			return joaat("taipan");
		case 397:
			return joaat("entity2");
		case 398:
			return joaat("jester3");
		case 399:
			return joaat("cheburek");
		case 400:
			return joaat("caracara");
		case 401:
			return joaat("seasparrow");
		case 402:
			return Global_75450;
		case 403:
			return joaat("mule4");
		case 404:
			return joaat("pounder2");
		case 405:
			return joaat("swinger");
		case 406:
			return joaat("menacer");
		case 407:
			return joaat("scramjet");
		case 408:
			return joaat("strikeforce");
		case 409:
			return joaat("oppressor2");
		case 410:
			return joaat("patriot2");
		case 411:
			return joaat("stafford");
		case 412:
			return joaat("freecrawler");
		case 415:
			return joaat("futo");
		case 416:
			return joaat("ruiner");
		case 417:
			return joaat("romero");
		case 418:
			return joaat("prairie");
		case 419:
			return joaat("baller");
		case 420:
			return joaat("serrano");
		case 421:
			return joaat("bjxl");
		case 422:
			return joaat("habanero");
		case 423:
			return joaat("fq2");
		case 424:
			return joaat("patriot");
		case 413:
			return joaat("blimp3");
		case 414:
			return joaat("pbus2");
		case 425:
			return joaat("cerberus");
		case 426:
			return joaat("cerberus2");
		case 427:
			return joaat("cerberus3");
		case 428:
			return joaat("brutus");
		case 429:
			return joaat("brutus2");
		case 430:
			return joaat("brutus3");
		case 431:
			return joaat("scarab");
		case 432:
			return joaat("scarab2");
		case 433:
			return joaat("scarab3");
		case 434:
			return joaat("imperator");
		case 435:
			return joaat("imperator2");
		case 436:
			return joaat("imperator3");
		case 437:
			return joaat("zr380");
		case 438:
			return joaat("zr3802");
		case 439:
			return joaat("zr3803");
		case 440:
			return joaat("impaler");
		case 450:
			return joaat("taxi");
		case 451:
			return joaat("bulldozer");
		case 452:
			return joaat("speedo2");
		case 453:
			return joaat("trash2");
		case 454:
			return joaat("barracks2");
		case 455:
			return joaat("mixer");
		case 456:
			return joaat("dune2");
		case 457:
			return joaat("tractor");
		case 458:
			return joaat("blista3");
		case 441:
			return joaat("vamos");
		case 442:
			return joaat("tulip");
		case 443:
			return joaat("deveste");
		case 444:
			return joaat("schlagen");
		case 445:
			return joaat("toros");
		case 446:
			return joaat("deviant");
		case 447:
			return joaat("clique");
		case 448:
			return joaat("italigto");
		case 449:
			return joaat("rcbandito");
		case 459:
			return joaat("thrax");
		case 460:
			return joaat("drafter");
		case 461:
			return joaat("locust");
		case 462:
			return joaat("novak");
		case 463:
			return joaat("zorrusso");
		case 464:
			return joaat("gauntlet3");
		case 465:
			return joaat("issi7");
		case 466:
			return joaat("zion3");
		case 467:
			return joaat("nebula");
		case 468:
			return joaat("hellion");
		case 469:
			return joaat("dynasty");
		case 470:
			return joaat("rrocket");
		case 471:
			return joaat("peyote2");
		case 472:
			return joaat("gauntlet4");
		case 473:
			return joaat("caracara2");
		case 474:
			return joaat("jugular");
		case 475:
			return joaat("s80");
		case 476:
			return joaat("krieger");
		case 477:
			return joaat("emerus");
		case 478:
			return joaat("neo");
		case 479:
			return joaat("paragon");
		case 480:
			return joaat("firetruk");
		case 481:
			return joaat("burrito2");
		case 482:
			return joaat("boxville");
		case 483:
			return joaat("stockade");
		case 484:
			return joaat("lguard");
		case 485:
			return joaat("blazer2");
		case 486:
			return joaat("zhaba");
		case 487:
			return joaat("minitank");
		case 488:
			return joaat("jb7002");
		case 489:
			return joaat("stryder");
		case 490:
			return joaat("vstr");
		case 491:
			return joaat("formula");
		case 492:
			return joaat("imorgon");
		case 493:
			return joaat("formula2");
		case 494:
			return joaat("furia");
		case 495:
			return joaat("rebla");
		case 496:
			return joaat("vagrant");
		case 497:
			return joaat("retinue2");
		case 498:
			return joaat("yosemite2");
		case 499:
			return joaat("komoda");
		case 500:
			return joaat("sultan2");
		case 501:
			return joaat("sugoi");
		case 502:
			return joaat("everon");
		case 503:
			return joaat("asbo");
		case 504:
			return joaat("kanjo");
		case 505:
			return joaat("outlaw");
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		case 507:
			return joaat("dukes3");
		case 508:
			return joaat("yosemite3");
		case 509:
			return joaat("penumbra2");
		case 510:
			return joaat("landstalker2");
		case 511:
			return joaat("seminole2");
		case 512:
			return joaat("tigon");
		case 513:
			return joaat("openwheel1");
		case 514:
			return joaat("openwheel2");
		case 515:
			return joaat("coquette4");
		case 516:
			return joaat("manana");
		case 517:
			return joaat("peyote");
		case 518:
			return __LIB_0__::func_981();
		case 519:
			return joaat("italirsx");
		case 520:
			return joaat("slamtruck");
		case 521:
			return joaat("brioso2");
		case 522:
			return joaat("weevil");
		case 523:
			return joaat("alkonost");
		case 524:
			return joaat("annihilator2");
		case 525:
			return joaat("dinghy5");
		case 526:
			return joaat("manchez2");
		case 527:
			return joaat("patrolboat");
		case 528:
			return joaat("squaddie");
		case 529:
			return joaat("toreador");
		case 530:
			return joaat("verus");
		case 531:
			return joaat("vetir");
		case 532:
			return joaat("winky");
		case 533:
			return joaat("longfin");
		case 534:
			return joaat("veto");
		case 535:
			return joaat("veto2");
		case 543:
			return joaat("zr350");
		case 537:
			return joaat("comet6");
		case 540:
			return joaat("jester4");
		case 542:
			return joaat("vectre");
		case 538:
			return joaat("cypher");
		case 548:
			return joaat("tailgater2");
		case 550:
			return joaat("euros");
		case 551:
			return joaat("growler");
		case 536:
			return joaat("calico");
		case 541:
			return joaat("remus");
		case 539:
			return joaat("dominator7");
		case 546:
			return joaat("futo2");
		case 545:
			return joaat("rt3000");
		case 544:
			return joaat("warrener2");
		case 547:
			return joaat("sultan3");
		case 549:
			return joaat("dominator8");
		case 552:
			return joaat("previon");
		case 554:
			return joaat("comet7");
		case 555:
			return joaat("shinobi");
		case 556:
			return joaat("reever");
		case 557:
			return joaat("baller7");
		case 558:
			return joaat("cinquemila");
		case 559:
			return joaat("jubilee");
		case 560:
			return joaat("astron");
		case 561:
			return joaat("deity");
		case 562:
			return joaat("zeno");
		case 563:
			return joaat("champion");
		case 564:
			return joaat("ignus");
		case 565:
			return joaat("buffalo4");
		case 566:
			return joaat("granger2");
		case 567:
			return joaat("iwagen");
		case 568:
			return joaat("patriot3");
		case 553:
			return joaat("supervolito2");
		case 569:
			return joaat("tenf");
		case 570:
			return joaat("sm722");
		case 571:
			return joaat("torero2");
		case 572:
			return joaat("corsita");
		case 573:
			return joaat("lm87");
		case 574:
			return joaat("omnisegt");
		case 575:
			return joaat("rhinehart");
		case 576:
			return joaat("postlude");
		case 577:
			return joaat("kanjosj");
		case 578:
			return joaat("vigero2");
		case 579:
			return joaat("ruiner4");
		case 580:
			return joaat("draugur");
		case 581:
			return joaat("greenwood");
		case 582:
			return joaat("conada");
		default:
	}
	return 0;
}

int func_345()//Position - 0x3BAF6
{
	var uVar0;
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_1794, 23))
	{
		return 1;
	}
	if (__LIB_0__::func_192())
	{
		return 1;
	}
	if (__LIB_0__::func_191())
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_1__::func_27(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2815059.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_346(int iParam0)//Position - 0x3C474
{
	if (iParam0 == 1)
	{
		__LIB_0__::func_229("ARMMP_TERM_LEFT" /* GXT: The other player has left. */, 5000, 0);
	}
	return 1;
}

void func_347(var uParam0, var uParam1)//Position - 0x3C545
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		if (!*uParam0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Preload_Fade", 0, true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Pre_Screen_Stinger", "DLC_HEISTS_PREP_SCREEN_SOUNDS", false);
			*uParam0 = 1;
			if (!__LIB_0__::func_864(uParam1))
			{
				__LIB_0__::func_795(uParam1, 0, 0);
			}
		}
	}
}

void func_348(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3C79D
{
	int iVar0;
	if (__LIB_0__::func_409())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

void func_349(var uParam0)//Position - 0x3CD49
{
	uParam0->f_8 = 0;
	__LIB_1__::func_12(&(uParam0->f_2));
	__LIB_1__::func_12(&(uParam0->f_5));
}

void func_350(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x3CD77
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
		Global_1649593.f_4659.f_183[iVar0] = iParam4;
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

bool func_351(int* iParam0)//Position - 0x3D190
{
	return __LIB_1__::func_13(iParam0);
}

int func_352()//Position - 0x3D19E
{
	if (__LIB_0__::func_703(uLocal_46, 1) || SCRIPT::IS_THREAD_ACTIVE(iLocal_47))
	{
		return 1;
	}
	return 0;
}

struct<16> func_353(var uParam0)//Position - 0x3D491
{
	struct<16> Var0;
	StringCopy(&Var0, PLAYER::GET_PLAYER_NAME(__LIB_0__::func_864(uParam0)), 64);
	return Var0;
}

void func_354(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3D674
{
	int iVar0;
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

bool func_355(var uParam0)//Position - 0x3EA5E
{
	return __LIB_1__::func_13(&(uParam0->f_13));
}

void func_356(var uParam0, int iParam1)//Position - 0x3F37E
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78587)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78588)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__::func_2(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	__LIB_0__::func_704(0);
}

int func_357(int iParam0)//Position - 0x3FEB9
{
	int iVar0;
	if (iParam0 > -1)
	{
		iVar0 = __LIB_1__::func_1(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			case 1:
				return 193;
			case 2:
				return 194;
			case 3:
				return 195;
			case 4:
				return 196;
			case 5:
				return 197;
			case 6:
				return 198;
			case 7:
				return 199;
			case 8:
				return 200;
			case 9:
				return 201;
			case 10:
				return 202;
			case 11:
				return 203;
			case 12:
				return 204;
			case 13:
				return 205;
			case 14:
				return 206;
			}
		default:
	}
	return 1;
}

float func_358(int* iParam0)//Position - 0x40B54
{
	if (__LIB_1__::func_13(iParam0))
	{
		if (__LIB_0__::func_701(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (__LIB_0__::func_616(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_359()//Position - 0x415F9
{
	__LIB_1__::func_8(0);
	__LIB_1__::func_7(4, 1, -1);
	__LIB_1__::func_7(6, 1, -1);
	__LIB_1__::func_7(7, 1, -1);
	__LIB_1__::func_7(3, 1, -1);
	__LIB_1__::func_7(1, 1, -1);
	__LIB_1__::func_7(2, 1, -1);
	__LIB_1__::func_7(11, 1, -1);
	__LIB_1__::func_7(13, 1, -1);
	__LIB_1__::func_7(14, 1, -1);
	__LIB_1__::func_7(16, 1, -1);
}

int func_360(int iParam0, int iParam1, int iParam2)//Position - 0x429F4
{
	int iVar0;
	var uVar1;
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

float func_361(int* iParam0)//Position - 0x42ADE
{
	if (__LIB_1__::func_13(iParam0))
	{
		if (__LIB_0__::func_701(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (__LIB_0__::func_616(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

void func_362(int* iParam0)//Position - 0x42B1A
{
	if (!__LIB_1__::func_13(iParam0))
	{
		__LIB_1__::func_31(iParam0);
	}
}

void func_363()//Position - 0x42CD2
{
	int iVar0;
	iVar0 = __LIB_0__::func_993(27);
	Global_2676732[iVar0 /*83*/] = 27;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-FromLiveArea", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[1 /*16*/]), "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[2 /*16*/]), "-LiveAreaLoadContent=", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[3 /*16*/]), "15", 64);
}

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x75F7
{
	int iVar0;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 789:
			Global_1659693[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 790:
			Global_1659699[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 791:
			Global_1659705[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1659711[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 778:
			Global_1659657[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 779:
			Global_1659663[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 780:
			Global_1659669[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 781:
			Global_1659675[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1659681[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 768:
			Global_1659627[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 769:
			Global_1659633[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 770:
			Global_1659639[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 771:
			Global_1659645[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1659651[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 758:
			Global_1659717[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 759:
			Global_1659723[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 760:
			Global_1659729[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 761:
			Global_1659735[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8735:
			Global_1659741[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 1304:
			Global_1659747[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 7236:
			Global_1659753[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 640:
			Global_1659759[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 1279:
			Global_1659765[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 1878:
			Global_2869777[0 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 2269:
			Global_2869777[1 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 2932:
			Global_2869777[2 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3061:
			Global_2869777[3 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 11391:
			Global_2869950[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 765:
			Global_1659771[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 766:
			Global_1659777[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 767:
			Global_1659783[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8734:
			Global_1659789[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 9538:
			Global_1659795[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 1237:
			Global_1659801[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2869862[0 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2869862[1 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2869862[2 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2869862[3 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3060:
			Global_2869862[4 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2869953[0 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2869953[1 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2869953[2 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2869953[3 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2869953[4 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2869969[0 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2869969[1 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2869969[2 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3647:
			Global_2869969[3 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3648:
			Global_2869969[4 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3224:
			Global_2869862[5 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2869777[4 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2869985[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2869994[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2869988[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2869997[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3670:
			Global_2869991[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3671:
			Global_2870000[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3692:
			Global_2870003[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2869862[6 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2869777[5 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3237:
			Global_2869862[7 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2869777[6 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2869862[8 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2869777[7 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2869862[9 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2869777[8 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2869862[10 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2869777[9 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4031:
			Global_2869862[11 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 4032:
			Global_2869777[10 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6112:
			Global_2869862[12 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6113:
			Global_2869777[11 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6170:
			Global_2869862[13 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6171:
			Global_2869777[12 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6548:
			Global_2869862[14 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6549:
			Global_2869777[13 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2869862[15 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2869777[14 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2869862[16 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2869777[15 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6567:
			Global_2869862[17 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 6568:
			Global_2869777[16 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2869777[17 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2869777[18 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 7290:
			Global_2869777[19 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8013:
			Global_2869777[20 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2870006[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2870009[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2870012[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2870015[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2870018[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2870021[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2870024[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2870027[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2870030[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2870033[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2870036[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8296:
			Global_2870039[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8297:
			Global_2870042[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8905:
			Global_2870045[__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8537:
			Global_2869777[21 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8982:
			Global_2869862[23 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2869777[22 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8985:
			Global_2869862[24 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 8983:
			Global_2869777[23 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 9624:
			Global_2869777[24 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 9913:
			Global_2869777[25 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 10443:
			Global_2869862[27 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 10441:
			Global_2869777[26 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 10446:
			Global_2869862[28 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		case 10444:
			Global_2869777[27 /*3*/][__LIB_1__::func_27(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_365(int iParam0)//Position - 0x9C1E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("MP_F_Freemode_01"))
	{
		iVar1 = __LIB_0__::func_350(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = __LIB_0__::func_205(iVar0, iVar1, 6, 4);
			iVar3 = __LIB_0__::func_278(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(var uParam0)//Position - 0xAF4E
{
	if (!__LIB_0__::func_864(&(uParam0->f_434)))
	{
		__LIB_0__::func_795(&(uParam0->f_434), 0, 0);
	}
	else if (__LIB_0__::func_937(&(uParam0->f_434), 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x32C9B
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!__LIB_0__::func_112())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == joaat("NET_SHOP_TTYPE_SERVICE") && iParam10)
			{
				__LIB_0__::func_962(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_368(int iParam0)//Position - 0x3FF93
{
	if (!iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_30(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_0__::func_818(iParam0)];
		}
	}
	return -1;
}

void func_369(int iParam0, bool bParam1, bool bParam2)//Position - 0x42B58
{
	struct<5> Var0;
	Var0.f_0 = 575515772;
	Var0.f_1 = iParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(Var0.f_4), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Var0.f_4), 3);
	}
	if (!bParam2)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_0__::func_943(1, 1));
	}
	else
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_1__::func_26(1));
	}
}

void func_370(int iParam0, int iParam1, bool bParam2)//Position - 0x43D3A
{
	struct<5> Var0;
	Var0.f_0 = -1532069709;
	Var0.f_1 = iParam0;
	Var0.f_4 = SYSTEM::SHIFT_LEFT(iParam1, 1);
	if (!bParam2)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_0__::func_943(1, 1));
	}
	else
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_1__::func_26(1));
	}
}

void func_371(var uParam0, var uParam1, var uParam2)//Position - 0x44104
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Global_1853348[iVar0 /*834*/].f_36.f_2 = uParam0;
	Global_1853348[iVar0 /*834*/].f_36.f_1 = uParam1;
	Global_1853348[iVar0 /*834*/].f_36.f_16 = uParam2;
	Global_1853348[iVar0 /*834*/].f_1 = -1;
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_36.f_18), 0);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_36.f_18), 7);
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_457(PLAYER::PLAYER_ID())) && !__LIB_0__::func_80())
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_372(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x40FC
{
	struct<5> Var0;
	Var0.f_0 = -1532069709;
	Var0.f_1 = iParam0;
	Var0.f_2 = iParam1;
	Var0.f_3 = (iParam2 & 32767 + SYSTEM::SHIFT_LEFT(iParam3 & 32767, 15));
	Var0.f_4 = SYSTEM::SHIFT_LEFT(iParam4, 1);
	if (bParam5)
	{
		MISC::SET_BIT(&(Var0.f_4), 0);
	}
	if (!bParam6)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_0__::func_943(1, 1));
	}
	else
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_1__::func_26(1));
	}
}

void func_373(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x654E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		__LIB_0__::func_83(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!__LIB_0__::func_73())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		__LIB_0__::func_963(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		__LIB_0__::func_83(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		__LIB_0__::func_963(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_457(PLAYER::PLAYER_ID())) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0)) && !__LIB_0__::func_80()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !__LIB_0__::func_457(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

void func_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x32A78
{
	switch (iParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		__LIB_1__::func_34(iParam0);
	}
}

bool func_375(bool bParam0)//Position - 0x3D94D
{
	return __LIB_0__::func_536(PLAYER::PLAYER_ID(), bParam0);
}

void func_376(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4306A
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
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
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
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && !__LIB_0__::func_81()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					__LIB_1__::func_36(0, 0, 0);
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
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(iParam0, false);
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
				Global_2689235[iParam0 /*453*/].f_253 = 0;
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
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
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
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

void func_377(var uParam0)//Position - 0x4E7
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_378(int iParam0)//Position - 0x1B9C
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		default:
	}
	return 0;
}

void func_379(int iParam0, int iParam1, int iParam2)//Position - 0x2AB1
{
	if (iParam2 == -1)
	{
		iParam2 = __LIB_0__::getGlobal_1574918();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_380(int iParam0)//Position - 0x2C04
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278;
	}
	return 0;
}

bool func_381()//Position - 0x4538
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_382(int iParam0)//Position - 0x66EC
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		case 1:
			return 10;
			break;
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x6726
{
	switch (iParam0)
	{
		case 0:
			return Global_1661006.f_1;
			break;
		case 1:
			return Global_1661006.f_2;
			break;
		case 2:
			return Global_1661006.f_3;
			break;
	}
	return 0;
}

int func_384(int iParam0, bool bParam1)//Position - 0x676C
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_217;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_218;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2689235[iVar0 /*453*/].f_219;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x6809
{
	switch (iParam0)
	{
		case 0:
			return Global_1661014;
			break;
		case 1:
			return Global_1661015;
			break;
		case 2:
			return Global_1661016;
			break;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)//Position - 0x1C20
{
	if (Global_1892703[iParam0 /*599*/] == iParam1)
	{
		return __LIB_1__::func_17(iParam0);
	}
	return 0;
}

void func_387(var uParam0)//Position - 0x906
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_388(int iParam0)//Position - 0x26F3
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_389(int iParam0)//Position - 0x273D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case 1:
			return 4;
		case 0:
			return 4;
		case 6:
			return 59;
		case 18:
			return 2;
		case 13:
			return 5;
		case 116:
			return 38;
		case 28:
			return 6;
		case 29:
			return 7;
		case 30:
			return 8;
		case 31:
			return 9;
		case 32:
			return 10;
		case 33:
			return 11;
		case 34:
			return 12;
		case 35:
			return 13;
		case 36:
			return 14;
		case 37:
			return 15;
		case 38:
			return 16;
		case 39:
			return 17;
		case 40:
			return 18;
		case 41:
			return 19;
		case 42:
			return 20;
		case 43:
			return 21;
		case 44:
			return 22;
		case 45:
			return 23;
		case 46:
			return 24;
		case 47:
			return 25;
		case 48:
			return 26;
		case 49:
			return 27;
		case 50:
			return 28;
		case 51:
			return 29;
		case 52:
			return 30;
		case 53:
			return 31;
		case 54:
			return 32;
		case 55:
			return 33;
		case 56:
			return 34;
		case 57:
			return 35;
		case 58:
			return 36;
		case 59:
			return 37;
		case 9:
			return 57;
		case 10:
			return 53;
		case 118:
			return 57;
		case 14:
			return 56;
		case 3:
			return 55;
		case 21:
			return 50;
		case 15:
			return 51;
		case 20:
			return 52;
		case 11:
			return 54;
		case 23:
			return 58;
		case 12:
			return 60;
		case 24:
			return 61;
		case 4:
			return 62;
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_390()//Position - 0x29A5
{
	if (HUD::DOES_BLIP_EXIST(iLocal_47))
	{
		HUD::REMOVE_BLIP(&iLocal_47);
	}
}

int func_391(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (__LIB_1__::func_385(iParam0) - __LIB_1__::func_384(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - __LIB_1__::func_384(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (__LIB_1__::func_385(iParam0) - __LIB_1__::func_383(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - __LIB_1__::func_384(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (__LIB_1__::func_385(iParam0) - __LIB_1__::func_384(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - __LIB_1__::func_382(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

void func_392(int iParam0, bool bParam1)//Position - 0x2DC9
{
	int iVar0;
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_19 = iVar0;
			break;
		case 19:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_18 = iVar0;
			break;
		case 74:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_12 = iVar0;
			break;
		case 29:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_14 = iVar0;
			break;
		case 8:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_15 = iVar0;
			break;
		case 31:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_16 = iVar0;
			break;
		case 3:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_20 = iVar0;
			break;
		case 6:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_17 = iVar0;
			break;
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_23 = iVar0;
			break;
		case 76:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_24 = iVar0;
			break;
		case 93:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_25 = iVar0;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_26 = iVar0;
			break;
		case 65:
		case 75:
		case 95:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		case 97:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_29 = iVar0;
			break;
		case 88:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_28 = iVar0;
			break;
		case 100:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_31 = iVar0;
			break;
		case 106:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_32 = iVar0;
			break;
		case 99:
			Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

int func_393(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7, int iParam8)//Position - 0x1551
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (__LIB_0__::func_156(iVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && __LIB_0__::func_820(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && __LIB_0__::func_958(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(iVar1), Param0, true) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_394()//Position - 0x55D
{
	return __LIB_0__::func_338(PLAYER::PLAYER_ID());
}

void func_395(int iParam0, int iParam1)//Position - 0x3CA
{
	if (Global_2703735.f_3572[iParam0] < iParam1)
	{
		Global_2703735.f_3572[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2703735.f_3571), iParam0);
}

char* func_396(int iParam0)//Position - 0x137B
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		case 1:
			return "TARGET_ESCAPE";
			break;
		case 2:
			return "DELIVERY_FAIL";
			break;
		case 3:
			return "NOT_USED";
			break;
		case 4:
			return "TEAM_QUIT";
			break;
		case 5:
			return "SERVER_ERROR";
			break;
		case 6:
			return "RECEIVE_LJ_L";
			break;
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT" /* GXT: _ */;
}

char* func_397(int iParam0)//Position - 0x1405
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		case 1:
			return "BACKUP_LOST";
		case 2:
			return "BACKUP_FAMILIES";
		case 3:
			return "HIRE_MUGGER";
		case 4:
			return "HIRE_MERCENARY";
		case 5:
			return "BUY_CARDROPOFF";
		case 6:
			return "HELI_PICKUP";
		case 7:
			return "BOAT_PICKUP";
		case 8:
			return "CLEAR_WANTED";
		case 9:
			return "HEAD_2_HEAD";
		case 10:
			return "CHALLENGE";
		case 11:
			return "SHARE_LAST_JOB";
		case 13:
			return "REFUNDAPPEA";
		case 14:
			return "AMMO_DROP_REF";
		case 15:
			return "ORBITAL_MANUAL";
		case 16:
			return "ORBITAL_AUTO";
		case 17:
			return "ARENA_SPEC_BOX";
		default:
	}
	return "DEFAULT" /* GXT: _ */;
}

int func_398(var uParam0)//Position - 0x355E
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_399(var uParam0)//Position - 0x3587
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_0__::func_795(uParam0, 0, 0);
		}
	}
}

void func_400(int iParam0, var uParam1)//Position - 0x3CD3
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_401(var uParam0)//Position - 0x3D20
{
	uParam0->f_692 = 0;
}

int func_402(var uParam0)//Position - 0x3D2E
{
	return uParam0->f_692;
}

void func_403(var uParam0)//Position - 0x3E16
{
	int iVar0;
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 363;
		uParam0->f_1[iVar0 /*57*/].f_56 = 363;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_404()//Position - 0x3EF7
{
	struct<9> Var0;
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_405()//Position - 0x408A
{
	Global_2826521.f_258 = 1;
}

Vector3 func_406(struct<3> Param0, float fParam1, float fParam2, float fParam3)//Position - 0x3074
{
	struct<3> Var0;
	float fVar1;
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { __LIB_0__::func_952(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return Param0 + Var0;
}

int func_407(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xD9B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bVar0 = false;
	if (!__LIB_0__::func_112())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(__LIB_0__::getGlobal_1574918()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == joaat("CATEGORY_WEAPON_AMMO") || iParam3 == joaat("CATEGORY_MART"))
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = __LIB_1__::func_367(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			__LIB_0__::func_948(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			__LIB_1__::func_374(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

int func_408(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, bool bParam16)//Position - 0x29EE
{
	Global_2667225.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam3, bParam16))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (fParam12 > 0f)
	{
		if (__LIB_1__::func_393(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13, 0))
		{
			return 0;
		}
	}
	Global_2667225.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (__LIB_0__::func_944(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2667225.f_2++;
	return 1;
}

void func_409(var uParam0, var uParam1)//Position - 0x1745
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_410(int iParam0)//Position - 0x178F
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

int func_411(struct<3> Param0, var uParam1)//Position - 0x3B42
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			fVar3 = SYSTEM::VDIST(Global_2667225.f_2263[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam1 = { Global_2667225.f_2263[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_412(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3CC9
{
	struct<3> Var0;
	struct<3> Var1;
	if (Param0.f_0 > Param1.f_0)
	{
		Var1.f_0 = Param0.f_0;
		Var0.f_0 = Param1.f_0;
	}
	else
	{
		Var1.f_0 = Param1.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param1.f_1)
	{
		Var1.f_1 = Param0.f_1;
		Var0.f_1 = Param1.f_1;
	}
	else
	{
		Var1.f_1 = Param1.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param1.f_2)
	{
		Var1.f_2 = Param0.f_2;
		Var0.f_2 = Param1.f_2;
	}
	else
	{
		Var1.f_2 = Param1.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var1 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_413(float fParam0)//Position - 0x3D74
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

void func_414(struct<3> Param0)//Position - 0x4355
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2667225.f_2625[(3 - iVar0) /*3*/] = { Global_2667225.f_2625[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2667225.f_2625[0 /*3*/] = { Param0 };
}

void func_415(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x440A
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar3 = SYSTEM::VDIST(Global_2670168[iVar0 /*10*/].f_4, Param2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_416(var uParam0, struct<3> Param1)//Position - 0x44A9
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2670168[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2670168[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_417(var uParam0)//Position - 0x452B
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_1;
				Var2 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_418(var uParam0, float fParam1)//Position - 0x4598
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_2 < fVar1 && Global_2670168[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2670168[iVar0 /*10*/].f_2;
				Var2 = { Global_2670168[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_419()//Position - 0x461B
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2670168[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

float func_420(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x5010
{
	float fVar0;
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

int func_421(struct<3> Param0, var uParam1, var uParam2)//Position - 0x5C65
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	var uVar3;
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &Var0);
		*uParam1 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam2 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x5ED5
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("PLAYER")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837161[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1837161[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1836871[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1836871[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_423(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x608E
{
	float fVar0;
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam6, false))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam7, true)))
	{
		return 1;
	}
	return 0;
}

int func_424(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x6328
{
	struct<3> Var0[8];
	int iVar1;
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param1.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param1.f_1, Param1.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param1.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param1.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param1.f_0, Param0.f_1, Param1.f_2 };
	Var0[6 /*3*/] = { Param1.f_0, Param1.f_1, Param1.f_2 };
	Var0[7 /*3*/] = { Param1.f_0, Param1.f_1, Param0.f_2 };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, false, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_425(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x63F2
{
	struct<3> Var0[4];
	int iVar1;
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam1, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam1), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam1) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar1 /*3*/], Param2, Param3, fParam4, false, true))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_426(struct<3> Param0)//Position - 0x6564
{
	int iVar0;
	int iVar1;
	if (Global_2667225.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2667225.f_45.f_56))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2667225.f_45.f_57)
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
	}
	return 1;
}

int func_427(struct<3> Param0, var uParam1, var uParam2, float fParam3)//Position - 0x6661
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var2 = { *(uParam2[iVar1 /*10*/]) };
		Var3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var3, fVar4, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_428(struct<3> Param0, float fParam1, int iParam2)//Position - 0x67F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_2667225.f_2625[iVar0 /*3*/], Param0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_429(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6FB0
{
	struct<3> Var0;
	struct<3> Var1;
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	Var0.f_0 = SYSTEM::SIN(fParam2);
	Var0.f_1 = SYSTEM::COS(fParam2);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam3, fParam3, fParam3) };
	Var1 = { Param1 + Var0 };
	Var1.f_2 = Param1.f_2;
	Var1.f_2 = (Var1.f_2 + fParam5);
	Param1.f_2 = (Param1.f_2 + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param1, Var1, fParam4, false, true);
}

int func_430(int iParam0)//Position - 0x7170
{
	if ((Global_2667225.f_489 == 9 || Global_2667225.f_489 == 9) || (Global_2667225.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0)//Position - 0x73B8
{
	if (!__LIB_0__::func_156(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

var func_432()//Position - 0x7977
{
	return Global_1573131.f_4;
}

int func_433(struct<3> Param0, float fParam1, struct<3> Param2)//Position - 0x92E9
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 0f, 1f, 0f };
	__LIB_0__::func_817(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (__LIB_0__::func_158(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_434(struct<3> Param0)//Position - 0x9325
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_831(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674493[iVar1])
	{
		if (__LIB_0__::func_830(Param0, &(Global_2673790[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674493[8])
	{
		if (__LIB_0__::func_830(Param0, &(Global_2673790[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_435(int iParam0)//Position - 0x9C8C
{
	return iParam0 == 50;
}

void func_436(float fParam0, float fParam1)//Position - 0x9C99
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2667225.f_2474 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_2472 = 1;
	Global_2667225.f_2475 = NETWORK::GET_NETWORK_TIME();
}

void func_437()//Position - 0x9DFA
{
	struct<10> Var0;
	int iVar1;
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_2670168[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_438()//Position - 0x9E32
{
	struct<10> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_2667225.f_2491.f_90[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_439()//Position - 0x9E61
{
	struct<4> Var0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_2667225.f_2491.f_57[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_440()//Position - 0x9E8F
{
	struct<10> Var0;
	int iVar1;
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_2667225.f_2491.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_441()//Position - 0x9ECB
{
	struct<6> Var0;
	Var0.f_3 = -1;
	Global_2667225.f_2491 = { Var0 };
}

void func_442()//Position - 0x9EE9
{
	if (Global_2667225.f_2472)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_2474)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2667225.f_2472 = 0;
	}
}

void func_443()//Position - 0xA1C9
{
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
}

void func_444(int iParam0)//Position - 0xB3B6
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

void func_445(var uParam0)//Position - 0xB463
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_446()//Position - 0xB5A1
{
	return Local_60.f_0;
}

int func_447(int iParam0)//Position - 0xB5CD
{
	return Local_62[iParam0 /*3*/];
}

int func_448(int iParam0)//Position - 0xB704
{
	return Global_1853348[iParam0 /*834*/];
}

void func_449(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)//Position - 0x1E06
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	Var0 = { Param2 - Param1 };
	Var0.f_2 = 0f;
	Var1 = { *uParam0 - Param1 };
	Var1.f_2 = 0f;
	Var2 = { __LIB_0__::func_835(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (__LIB_0__::func_158(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (__LIB_0__::func_158(Var2, Var1) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		Var4 = { *uParam0 + Var2 };
		fVar6 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
		Var7 = { Param1 + Param2 / Vector(2f, 2f, 2f) };
		Var7.f_2 = 0f;
		Var2 = { __LIB_0__::func_835(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { __LIB_0__::func_835(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (__LIB_0__::func_158(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (__LIB_0__::func_158(Var2, Var11) >= 0f)
		{
			Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			Var2 = { Var2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		Var5 = { *uParam0 + Var2 };
		if (SYSTEM::VDIST(Var4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var4 };
		}
		else
		{
			*uParam0 = { Var5 };
		}
	}
}

void func_450(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x222E
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			__LIB_0__::func_817(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			__LIB_0__::func_817(&Var0, 0f, 0f, fParam5);
		}
	}
	Var0 = { Var0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		Var1 = { Param1 + Var0 };
	}
	else
	{
		Var1 = { Param1 - Var0 };
	}
	*uParam0 = Var1.f_0;
	uParam0->f_1 = Var1.f_1;
}

void func_451(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3357
{
	int iVar0;
	__LIB_0__::func_815(iParam0, &Global_1577992);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1577992[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1577992[iVar0], &(Global_1577996[iVar0 /*3*/]), &(Global_1578003[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1577996[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1578003[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1577996[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1578003[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1577996[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1578003[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1578010[iVar0] = (Global_1578003[iVar0 /*3*/] - Global_1577996[iVar0 /*3*/]);
		Global_1578013[iVar0] = (Global_1578003[iVar0 /*3*/].f_1 - Global_1577996[iVar0 /*3*/].f_1);
		Global_1578016[iVar0] = (Global_1578003[iVar0 /*3*/].f_2 - Global_1577996[iVar0 /*3*/].f_2);
		if (Global_1578010[iVar0] > Global_1578019)
		{
			Global_1578019 = Global_1578010[iVar0];
		}
		if (Global_1578016[iVar0] > Global_1578020)
		{
			Global_1578020 = Global_1578016[iVar0];
		}
		iVar0++;
	}
	Global_1578021 = (Global_1578019 * -0.5f);
	Global_1578024 = (Global_1578019 * 0.5f);
	Global_1578021.f_1 = ((((0.5f * Global_1578013[0]) + Global_1578013[1]) + Global_1577992.f_3) * -1f);
	Global_1578024.f_1 = (0.5f * Global_1578013[0]);
	Global_1578021.f_2 = (Global_1578016[0] * -0.5f);
	Global_1578024.f_2 = (Global_1578016[0] * 0.5f);
	*uParam1 = { Global_1578021 };
	*uParam2 = { Global_1578024 };
}

int func_452(int iParam0)//Position - 0x35E4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_816(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_453(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x3BBC
{
	__LIB_0__::func_827(&Param1, &Param2);
	if (((!Param0.f_0 >= Param1.f_0 || !Param0.f_1 >= Param1.f_1) || !Param0.f_0 <= Param2.f_0) || !Param0.f_1 <= Param2.f_1)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (Param0.f_2 >= Param1.f_2)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (Param0.f_2 <= Param2.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param1.f_2 && Param0.f_2 <= Param2.f_2)
	{
		return 1;
	}
	return 0;
}

void func_454(struct<3> Param0)//Position - 0x9BEF
{
	float fVar0;
	var uVar1;
	int iVar2;
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = __LIB_0__::func_839(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

bool func_455(int iParam0, bool bParam1)//Position - 0x3AEE
{
	if (__LIB_0__::func_3() != 0)
	{
		return __LIB_0__::func_892(iParam0) != 0;
	}
	return __LIB_1__::func_29(iParam0, bParam1, 0);
}

int func_456(int iParam0)//Position - 0x67CD
{
	if (__LIB_1__::func_29(iParam0, 1, 0))
	{
		if (Global_1853348[iParam0 /*834*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_457(int iParam0)//Position - 0x15FC
{
	switch (iParam0)
	{
		case 0:
			return 11353;
		default:
	}
	return 11353;
}

int func_458(var uParam0, var uParam1)//Position - 0x1C2D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

int func_459(int iParam0)//Position - 0x1F77
{
	int iVar0;
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1201;
			break;
		case 1:
			return 1202;
			break;
		case 2:
			return 1203;
			break;
		case 3:
			return 1204;
			break;
		case 4:
			return 1205;
			break;
		case 5:
			return 1207;
			break;
		case 6:
			return 3818;
			break;
		case 7:
			return 4021;
			break;
		case 8:
			return 5475;
			break;
		case 9:
			return 10353;
			break;
	}
	return 1201;
}

void func_460(bool bParam0, bool bParam1)//Position - 0x24EA
{
	if (bParam1)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216, bParam0))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_216), bParam0);
	}
}

int func_461(int iParam0, bool bParam1)//Position - 0x37EA
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_462()//Position - 0x2484
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__::func_192())
	{
		return 1;
	}
	if (__LIB_0__::func_191())
	{
		return 1;
	}
	return __LIB_1__::func_342(120, -1);
}

int func_463()//Position - 0x375F
{
	if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2;
}

int func_464(int iParam0, bool bParam1)//Position - 0x23F2
{
	if (bParam1)
	{
	}
	return __LIB_1__::func_335(iParam0);
}

int func_465(int iParam0)//Position - 0x72C4
{
	if (__LIB_0__::func_308(PLAYER::PLAYER_ID()) || __LIB_0__::func_307(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_678(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_466()//Position - 0x1E6
{
	return Local_101.f_6;
}

void func_467(int iParam0)//Position - 0x1F2
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_1 = iParam0;
}

int func_468()//Position - 0x289
{
	return Local_101.f_17;
}

void func_469(int iParam0)//Position - 0x356
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_6 = iParam0;
}

int func_470()//Position - 0x56D
{
	return Local_101.f_7;
}

bool func_471(int iParam0)//Position - 0x1012
{
	return iParam0 == 998;
}

var func_472(int iParam0, int iParam1)//Position - 0x1073
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_6, iParam1);
}

void func_473(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1434
{
	struct<9> Var0;
	Var0.f_0 = -714268990;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_474(int iParam0)//Position - 0x15CB
{
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_475()//Position - 0x165E
{
	return Local_101.f_1;
}

void func_476(int iParam0)//Position - 0x166A
{
	Local_101.f_0 = iParam0;
}

void func_477(int iParam0)//Position - 0xAA1A
{
	if (!Global_262145.f_4711 /* Tunable: DISABLE_RAMMING_SOOP_AND_RAMP */)
	{
		VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
	}
}

int func_478(struct<3> Param0)//Position - 0x182E6
{
	int iVar0;
	if (SYSTEM::VDIST(Global_2667225.f_2904, Param0) < Global_2667225.f_2912)
	{
		return Global_2667225.f_2907;
	}
	Global_2667225.f_2904 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674547[iVar0 /*7*/].f_2 + Global_2674547[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (__LIB_0__::func_830(Param0, &(Global_2674547[iVar0 /*7*/])))
		{
			Global_2667225.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667225.f_2907 = -1;
	return -1;
}

int func_479()//Position - 0x187AA
{
	if (!Global_2667225.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
	{
		return 1;
	}
	return 0;
}

void func_480(int iParam0)//Position - 0x18C90
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), iParam0);
}

void func_481(int iParam0)//Position - 0x18D39
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_7 = iParam0;
}

void func_482(int iParam0)//Position - 0x192A5
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), iParam0);
}

int func_483(int iParam0, int iParam1)//Position - 0x19A13
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_484(int* iParam0)//Position - 0x19B38
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1[iVar0]))
		{
			PED::DELETE_PED(&(iParam0->f_1[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		VEHICLE::DELETE_VEHICLE(&(iParam0->f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_485(var uParam0)//Position - 0x1A1A9
{
	uParam0->f_379 = 0;
	uParam0->f_380 = 0;
	uParam0->f_382 = 0;
	uParam0->f_383 = 0;
	uParam0->f_386 = 0;
	uParam0->f_374 = 0;
	uParam0->f_384 = 0;
	uParam0->f_381 = 0;
	uParam0->f_385 = 0;
	uParam0->f_377 = 0;
	uParam0->f_375 = 0;
	uParam0->f_1 = 0;
}

int func_486()//Position - 0x1A50A
{
	return BitTest(Global_2714762, 7);
}

void func_487(int iParam0)//Position - 0x1A9FC
{
	Global_112038[iParam0 /*28*/].f_21 = 0;
	StringCopy(&(Global_112038[iParam0 /*28*/]), "", 16);
	StringCopy(&(Global_112038[iParam0 /*28*/].f_4), "", 64);
	Global_112038[iParam0 /*28*/].f_23 = 0;
	Global_112038[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112038[iParam0 /*28*/].f_27 = 0;
	Global_112038[iParam0 /*28*/].f_20 = 0;
	Global_112038[iParam0 /*28*/].f_22 = 0;
}

void func_488(var uParam0)//Position - 0x1AA9F
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_387))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_387))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_387, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::STOP_CAM_SHAKING(uParam0->f_387, true);
		CAM::DESTROY_CAM(uParam0->f_387, false);
	}
}

void func_489(int iParam0, int iParam1)//Position - 0x1AAE9
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_490(int iParam0, int iParam1)//Position - 0x1ABE7
{
	return (iParam0 && iParam1) != 0;
}

int func_491()//Position - 0x1AC6C
{
	return 90;
}

int func_492()//Position - 0x1AD38
{
	return SYSTEM::ROUND(800f);
}

int func_493()//Position - 0x1ADAD
{
	return 7000;
}

void func_494(int iParam0)//Position - 0x3B54F
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		PED::SET_PED_AS_ENEMY(iParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, false);
		PED::SET_PED_RESET_FLAG(iParam0, 249, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 185, true);
		PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
		PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iParam0, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 202, true);
		PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	}
}

void func_495(int iParam0, var uParam1)//Position - 0x3B61E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) != ENTITY::GET_ENTITY_MODEL(*uParam1))
	{
	}
	iVar0 = 1;
	while (iVar0 <= 14)
	{
		if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXTRA(*uParam1, iVar0, !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0));
		}
		iVar0++;
	}
}

var func_496(int iParam0)//Position - 0x3B825
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_807(iParam0);
	__LIB_0__::func_806(iVar1, &uVar0);
	return uVar0;
}

void func_497()//Position - 0x3C323
{
	Global_2715699.f_4316.f_780 = 1;
}

void func_498()//Position - 0x3C336
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
}

int func_499(int iParam0, int iParam1)//Position - 0x3C3FB
{
	if (iParam1 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1892703[iParam0 /*599*/].f_10.f_26 != __LIB_0__::getMinusOneOrNull())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

int func_500(int iParam0, int iParam1)//Position - 0x3C47E
{
	if (iParam1 != __LIB_0__::getMinusOneOrNull())
	{
		if (iParam0 != __LIB_0__::getMinusOneOrNull())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::getMinusOneOrNull())
			{
				if (Global_1892703[iParam0 /*599*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_501()//Position - 0x3C4C3
{
	return __LIB_0__::func_796(PLAYER::PLAYER_ID());
}

float func_502()//Position - 0x3C9F6
{
	return 20f;
}

float func_503(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3EF66
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

bool func_504(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3EF80
{
	return SYSTEM::VDIST2(Param0, Param1) <= (fParam2 * fParam2);
}

float func_505(int iParam0)//Position - 0x3FD35
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		case 2:
			return 1000000f;
			break;
		case 3:
			return 1500000f;
			break;
		case 4:
			return 500000f;
			break;
		case 5:
			return 500000f;
			break;
		case 6:
			return 500000f;
			break;
		case 7:
			return 500000f;
			break;
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_506(int iParam0)//Position - 0x3FDCD
{
	switch (iParam0)
	{
		case 1:
			return -1155.8766f, 48.3426f, 52.4985f;
			break;
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		case 4:
			return 1701.6664f, 2586.2612f, 51.4925f;
			break;
		case 5:
			return 3525.0576f, 3711.3232f, 35.6423f;
			break;
		case 6:
			return 548.1421f, -3157.9612f, 5.0696f;
			break;
		case 7:
			return -1142.4111f, -526.4487f, 31.6878f;
			break;
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_507(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x3FEF3
{
	if ((Param0.f_0 >= Param2.f_0 && Param0.f_0 <= Param4.f_0) && (Param0.f_1 >= Param2.f_1 && Param0.f_1 <= Param4.f_1))
	{
		return 1;
	}
	return 0;
}

int func_508(struct<3> Param0, struct<3> Param1)//Position - 0x3FF2E
{
	float fVar0;
	float fVar1;
	if (Param0.f_2 == 1f)
	{
		return 1;
	}
	fVar0 = MISC::ABSF((Param1.f_2 - Param0.f_2));
	fVar1 = (SYSTEM::VDIST(Param0, Param1) / 1.75f);
	if (fVar0 < fVar1)
	{
		return 1;
	}
	return 0;
}

int func_509(struct<3> Param0)//Position - 0x3FF73
{
	char* sVar0;
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, sVar0))
	{
		return 1;
	}
	return 0;
}

int func_510(int iParam0)//Position - 0x40408
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14))
	{
		return 1;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11))
	{
		return 1;
	}
	return 0;
}

int func_511(int iParam0, bool bParam1, bool bParam2)//Position - 0x40441
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_512()//Position - 0x4070A
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_513(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x40C49
{
	int iVar0;
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	MISC::SET_BIT(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		MISC::SET_BIT(&(uParam3->f_691), iVar0);
		if (iParam5 < 363)
		{
		}
	}
	uParam3->f_693++;
}

int func_514(int iParam0)//Position - 0x40EDB
{
	switch (iParam0)
	{
		case 1:
			return 0;
		default:
	}
	return 1;
}

bool func_515()//Position - 0x4102D
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

int func_516()//Position - 0x41418
{
	return 9;
}

int func_517()//Position - 0x41857
{
	return Local_101.f_0;
}

void func_518(int iParam0)//Position - 0x42083
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_519(int iParam0, int iParam1)//Position - 0x1094
{
	if (__LIB_0__::func_796(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1892703[iParam0 /*599*/].f_10.f_11[iParam1];
		}
	}
	return __LIB_0__::getMinusOneOrNull();
}

bool func_520(bool bParam0)//Position - 0x111A
{
	return __LIB_1__::func_30(PLAYER::PLAYER_ID(), bParam0);
}

int func_521(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x148D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__::func_156(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), bParam3))
			{
				if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_522(int iParam0)//Position - 0x1EAC
{
	return __LIB_0__::func_811(iParam0);
}

int func_523(int iParam0)//Position - 0x29C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577911));
			iVar3 = 20000;
			if (Global_1836584)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(iParam0);
				__LIB_0__::func_802(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_524(int iParam0)//Position - 0x8143
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || __LIB_0__::func_805(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_525(int iParam0, int iParam1)//Position - 0x8CF2
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__::func_807(iParam1);
	__LIB_0__::func_806(iVar1, &iVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, iVar0);
}

int func_526()//Position - 0x9255
{
	struct<13> Var0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { __LIB_0__::func_808() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_527(bool bParam0)//Position - 0xB71C
{
	Global_2667225.f_676 = 0;
	__LIB_0__::func_851();
	__LIB_0__::func_854();
	if (bParam0)
	{
		__LIB_0__::func_814();
	}
}

int func_528(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xE430
{
	switch (uParam1->f_10)
	{
		case 0:
			return __LIB_0__::func_828(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		case 1:
			return __LIB_1__::func_453(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 < uParam1->f_2 && Param0.f_2 < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, false) && !(Param0.f_2 > uParam1->f_2 && Param0.f_2 > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam1, uParam1->f_3, uParam1->f_6, false, true);
			}
			break;
	}
	return 0;
}

void func_529(int iParam0)//Position - 0x14FA1
{
	switch (iParam0)
	{
		case 83:
			__LIB_0__::func_849(-1133.454f, -3371.672f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1119.748f, -3379.991f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1147.602f, -3363.505f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1161.988f, -3354.852f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1116.563f, -3358.99f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1131.23f, -3350.104f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1145.252f, -3341.608f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1115.202f, -3339.265f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1129.559f, -3330.697f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1114.664f, -3320.954f, 12.945f, 329.799f);
			__LIB_0__::func_849(-1199.923f, -3369.502f, 12.945f, 350.399f);
			__LIB_0__::func_849(-1212.069f, -3363.568f, 12.945f, 350.399f);
			__LIB_0__::func_849(-1223.637f, -3356.694f, 12.945f, 350.399f);
			__LIB_0__::func_849(-1102.284f, -3420.613f, 12.945f, 354.599f);
			__LIB_0__::func_849(-1091.131f, -3427.396f, 12.945f, 354.599f);
			__LIB_0__::func_849(-1079.372f, -3434.306f, 12.945f, 354.599f);
			__LIB_0__::func_849(-1067.498f, -3441.878f, 13.114f, 354.599f);
			__LIB_0__::func_849(-1055.714f, -3448.819f, 12.977f, 354.599f);
			__LIB_0__::func_849(-1043.37f, -3455.796f, 13.146f, 354.599f);
			__LIB_0__::func_849(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-971.724f, -3409.109f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
			__LIB_0__::func_849(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
			__LIB_0__::func_849(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
			__LIB_0__::func_849(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
			break;
		case 84:
			__LIB_0__::func_849(-1356.991f, -3242.228f, 12.945f, 330f);
			__LIB_0__::func_849(-1369.313f, -3234.758f, 12.945f, 330f);
			__LIB_0__::func_849(-1381.751f, -3227.408f, 12.945f, 330f);
			__LIB_0__::func_849(-1394.302f, -3220.021f, 12.945f, 330f);
			__LIB_0__::func_849(-1354.339f, -3223.129f, 12.945f, 330f);
			__LIB_0__::func_849(-1366.302f, -3215.809f, 12.945f, 330f);
			__LIB_0__::func_849(-1378.492f, -3208.645f, 12.945f, 330f);
			__LIB_0__::func_849(-1350.322f, -3203.405f, 12.945f, 330f);
			__LIB_0__::func_849(-1362.684f, -3196.451f, 12.945f, 330f);
			__LIB_0__::func_849(-1347.089f, -3182.69f, 12.945f, 330f);
			__LIB_0__::func_849(-1452.642f, -3222.367f, 12.945f, 347.799f);
			__LIB_0__::func_849(-1464.229f, -3215.108f, 12.945f, 347.799f);
			__LIB_0__::func_849(-1476.133f, -3207.652f, 12.945f, 347.799f);
			__LIB_0__::func_849(-1488.295f, -3200.033f, 12.945f, 347.799f);
			__LIB_0__::func_849(-1336.877f, -3272.344f, 12.945f, 8.199f);
			__LIB_0__::func_849(-1323.381f, -3279.614f, 12.945f, 8.199f);
			__LIB_0__::func_849(-1309.671f, -3287.749f, 12.945f, 8.199f);
			__LIB_0__::func_849(-1296.963f, -3294.511f, 12.945f, 8.199f);
			__LIB_0__::func_849(-1501.978f, -3193.849f, 12.945f, 350.599f);
			__LIB_0__::func_849(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
			__LIB_0__::func_849(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1326.5376f, -3318.499f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
			__LIB_0__::func_849(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
			__LIB_0__::func_849(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
			__LIB_0__::func_849(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
			__LIB_0__::func_849(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1297.4025f, -3316.699f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
			__LIB_0__::func_849(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
			break;
		case 85:
			__LIB_0__::func_849(-2039.992f, 3132.191f, 31.81f, 149.399f);
			__LIB_0__::func_849(-2025.075f, 3128.63f, 31.81f, 197.599f);
			__LIB_0__::func_849(-2049.589f, 3142.464f, 31.81f, 109.199f);
			__LIB_0__::func_849(-2088.648f, 3081.327f, 31.81f, 150.599f);
			__LIB_0__::func_849(-2070.669f, 3111.575f, 31.81f, 123.399f);
			__LIB_0__::func_849(-2053.385f, 3109.703f, 31.81f, 150.599f);
			__LIB_0__::func_849(-2044.448f, 3094.012f, 31.81f, 181.799f);
			__LIB_0__::func_849(-2071.825f, 3093.477f, 31.81f, 150.599f);
			__LIB_0__::func_849(-2060.579f, 3085.924f, 31.81f, 150.599f);
			__LIB_0__::func_849(-2062.712f, 3066.073f, 31.81f, 150.599f);
			__LIB_0__::func_849(-2094.385f, 3190.445f, 31.81f, 117.799f);
			__LIB_0__::func_849(-2083.056f, 3182.885f, 31.81f, 117.799f);
			__LIB_0__::func_849(-2071.578f, 3175.554f, 31.81f, 117.799f);
			__LIB_0__::func_849(-2120.249f, 3173.97f, 31.81f, 25.199f);
			__LIB_0__::func_849(-2067.547f, 3146.325f, 31.81f, 14.998f);
			__LIB_0__::func_849(-2080.506f, 3154.591f, 31.81f, 15.798f);
			__LIB_0__::func_849(-2093.278f, 3159.793f, 31.81f, 14.798f);
			__LIB_0__::func_849(-2106.614f, 3167.605f, 31.81f, 21.198f);
			__LIB_0__::func_849(-2106.347f, 3196.902f, 31.81f, 117.799f);
			__LIB_0__::func_849(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
			__LIB_0__::func_849(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
			break;
		case 86:
			__LIB_0__::func_849(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1898.637f, 3072.816f, 31.811f, 150.2f);
			__LIB_0__::func_849(-1886.469f, 3065.78f, 31.811f, 150.2f);
			__LIB_0__::func_849(-1874.621f, 3058.437f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1862.818f, 3051.244f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1915.317f, 3041.652f, 31.811f, 150.2f);
			__LIB_0__::func_849(-1896.724f, 2997.848f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1932.975f, 3011.781f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1875.668f, 3034.438f, 31.811f, 150.2f);
			__LIB_0__::func_849(-1886.144f, 3016.285f, 31.81f, 150.2f);
			__LIB_0__::func_849(-1913.706f, 3104.196f, 31.81f, 118.599f);
			__LIB_0__::func_849(-1925.44f, 3112.236f, 31.81f, 118.599f);
			__LIB_0__::func_849(-1938.08f, 3119.383f, 31.81f, 118.599f);
			__LIB_0__::func_849(-1927.822f, 3072.679f, 31.81f, 13.399f);
			__LIB_0__::func_849(-1940.575f, 3079.031f, 31.81f, 13.399f);
			__LIB_0__::func_849(-1953.344f, 3084.888f, 31.81f, 13.399f);
			__LIB_0__::func_849(-1965.91f, 3091.929f, 31.81f, 13.399f);
			__LIB_0__::func_849(-1978.86f, 3100.029f, 31.81f, 13.399f);
			__LIB_0__::func_849(-1950.928f, 3126.457f, 31.81f, 118.999f);
			__LIB_0__::func_849(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
			__LIB_0__::func_849(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
			break;
		case 87:
			__LIB_0__::func_849(-2484.323f, 3249.294f, 31.828f, 151f);
			__LIB_0__::func_849(-2495.313f, 3255.746f, 31.828f, 151f);
			__LIB_0__::func_849(-2472.644f, 3242.684f, 31.828f, 151f);
			__LIB_0__::func_849(-2506.313f, 3262.27f, 31.823f, 151f);
			__LIB_0__::func_849(-2461.494f, 3235.93f, 31.828f, 151f);
			__LIB_0__::func_849(-2505.602f, 3238.049f, 31.828f, 151f);
			__LIB_0__::func_849(-2481.937f, 3224.8f, 31.828f, 151f);
			__LIB_0__::func_849(-2516.813f, 3244.266f, 31.823f, 151f);
			__LIB_0__::func_849(-2470.03f, 3217.899f, 31.828f, 151f);
			__LIB_0__::func_849(-2493.933f, 3231.308f, 31.828f, 151f);
			__LIB_0__::func_849(-2443.467f, 3227.753f, 31.828f, 175.8f);
			__LIB_0__::func_849(-2431.365f, 3220.9f, 31.828f, 175.8f);
			__LIB_0__::func_849(-2419.883f, 3214.708f, 31.828f, 175.8f);
			__LIB_0__::func_849(-2501.903f, 3272.865f, 31.822f, 123.999f);
			__LIB_0__::func_849(-2513.555f, 3280.176f, 31.817f, 123.999f);
			__LIB_0__::func_849(-2524.776f, 3287.276f, 31.973f, 123.999f);
			__LIB_0__::func_849(-2407.718f, 3208.055f, 31.827f, 176.199f);
			__LIB_0__::func_849(-2395.689f, 3201.125f, 31.827f, 176.199f);
			__LIB_0__::func_849(-2383.498f, 3194.211f, 31.833f, 176.199f);
			__LIB_0__::func_849(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
			__LIB_0__::func_849(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
			__LIB_0__::func_849(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
			__LIB_0__::func_849(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
			__LIB_0__::func_849(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
			__LIB_0__::func_849(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
			__LIB_0__::func_849(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
			__LIB_0__::func_849(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
			__LIB_0__::func_849(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
			__LIB_0__::func_849(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			__LIB_0__::func_849(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
			__LIB_0__::func_849(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
			__LIB_0__::func_849(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
			__LIB_0__::func_849(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
			__LIB_0__::func_849(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
			__LIB_0__::func_849(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
			__LIB_0__::func_849(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
			__LIB_0__::func_849(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
			__LIB_0__::func_849(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
			__LIB_0__::func_849(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
			__LIB_0__::func_849(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
			__LIB_0__::func_849(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
			__LIB_0__::func_849(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
			__LIB_0__::func_849(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
			__LIB_0__::func_849(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
			__LIB_0__::func_849(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
			__LIB_0__::func_849(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
			break;
		default:
			break;
	}
}

void func_530(int iParam0)//Position - 0x1661A
{
	switch (iParam0)
	{
		case 83:
		case 84:
			__LIB_0__::func_849(-947.712f, -3367.704f, 12.944f, 60f);
			__LIB_0__::func_849(-904.692f, -3293.072f, 12.944f, 60f);
			__LIB_0__::func_849(-863.71f, -3221.978f, 12.944f, 60f);
			__LIB_0__::func_849(-966.418f, -3162.773f, 12.944f, 60f);
			__LIB_0__::func_849(-1007.435f, -3233.93f, 12.944f, 60f);
			__LIB_0__::func_849(-1050.455f, -3308.559f, 12.944f, 60f);
			__LIB_0__::func_849(-1145.673f, -3253.456f, 12.944f, 60f);
			__LIB_0__::func_849(-1098.386f, -3181.428f, 12.944f, 60f);
			__LIB_0__::func_849(-1060.474f, -3108.903f, 12.944f, 60f);
			__LIB_0__::func_849(-1155.391f, -3053.632f, 12.944f, 60f);
			__LIB_0__::func_849(-1196.114f, -3125.146f, 12.948f, 60f);
			__LIB_0__::func_849(-1235.552f, -3201.86f, 12.944f, 60f);
			__LIB_0__::func_849(-1344.446f, -3139.177f, 12.944f, 60f);
			__LIB_0__::func_849(-1301.308f, -3064.341f, 12.944f, 60f);
			__LIB_0__::func_849(-1260.135f, -2992.912f, 12.944f, 60f);
			__LIB_0__::func_849(-1364.244f, -2932.9f, 12.98f, 60f);
			__LIB_0__::func_849(-1405.284f, -3004.108f, 12.96f, 60f);
			__LIB_0__::func_849(-1448.29f, -3078.72f, 12.95f, 60f);
			__LIB_0__::func_849(-1535.732f, -3028.318f, 12.945f, 60f);
			__LIB_0__::func_849(-1492.639f, -2953.558f, 12.945f, 60f);
			__LIB_0__::func_849(-1451.506f, -2882.2f, 12.944f, 60f);
			__LIB_0__::func_849(-1553.927f, -2823.12f, 13.002f, 60f);
			__LIB_0__::func_849(-1595.097f, -2894.571f, 12.944f, 60f);
			__LIB_0__::func_849(-1637.836f, -2968.714f, 12.945f, 60f);
			__LIB_0__::func_849(-1740.971f, -2911.484f, 12.944f, 330f);
			__LIB_0__::func_849(-1696.293f, -2833.978f, 12.944f, 330f);
			__LIB_0__::func_849(-1651.502f, -2756.273f, 12.945f, 330f);
			__LIB_0__::func_849(-1588.258f, -2647.575f, 12.944f, 330f);
			__LIB_0__::func_849(-1536.862f, -2681.378f, 12.945f, 330f);
			__LIB_0__::func_849(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		case 85:
		case 86:
		case 87:
			__LIB_0__::func_849(-1970.422f, 2825.696f, 31.81f, 60.4f);
			__LIB_0__::func_849(-2033.307f, 2855.526f, 31.83f, 60.4f);
			__LIB_0__::func_849(-2091.018f, 2888.691f, 31.81f, 60.4f);
			__LIB_0__::func_849(-2206.717f, 2955.363f, 31.81f, 60.4f);
			__LIB_0__::func_849(-2268.817f, 2990.846f, 31.81f, 60.4f);
			__LIB_0__::func_849(-2324.039f, 3023.154f, 31.811f, 60.4f);
			__LIB_0__::func_849(-2435.806f, 3087.705f, 31.824f, 60.4f);
			__LIB_0__::func_849(-2543.753f, 3149.909f, 31.821f, 60.4f);
			__LIB_0__::func_849(-1944.848f, 2898.798f, 31.81f, 125.398f);
			__LIB_0__::func_849(-1978.705f, 2924.367f, 31.846f, 151.999f);
			__LIB_0__::func_849(-2064.849f, 2955.153f, 31.867f, 151.199f);
			__LIB_0__::func_849(-2106.165f, 2980.687f, 31.81f, 104.599f);
			__LIB_0__::func_849(-2302.367f, 3088.676f, 31.814f, 150.598f);
			__LIB_0__::func_849(-2152.113f, 2924.162f, 31.81f, 60.198f);
			__LIB_0__::func_849(-2488.232f, 3118.146f, 31.822f, 59.798f);
			__LIB_0__::func_849(-2277.922f, 3133.756f, 31.811f, 120.598f);
			__LIB_0__::func_849(-2604.776f, 3185.186f, 31.812f, 59.998f);
			__LIB_0__::func_849(-2608.107f, 3305.049f, 31.812f, 60.198f);
			__LIB_0__::func_849(-2718.936f, 3323.203f, 31.81f, 201.198f);
			__LIB_0__::func_849(-2658.718f, 3216.499f, 31.812f, 59.998f);
			__LIB_0__::func_849(-2380.372f, 3055.341f, 31.826f, 60.4f);
			__LIB_0__::func_849(-2790.616f, 3286.24f, 31.812f, 240.397f);
			__LIB_0__::func_849(-2770.946f, 3322.605f, 31.812f, 240.397f);
			__LIB_0__::func_849(-2678.805f, 3339.186f, 31.812f, 199.597f);
			__LIB_0__::func_849(-2743.882f, 3224.094f, 31.81f, 303.397f);
			__LIB_0__::func_849(-2701.354f, 3203.092f, 31.994f, 328.397f);
			__LIB_0__::func_849(-2249.816f, 2944.609f, 31.937f, 330.196f);
			__LIB_0__::func_849(-2586.579f, 3137.286f, 31.935f, 330.196f);
			__LIB_0__::func_849(-2134.76f, 2878.728f, 31.81f, 330.196f);
			__LIB_0__::func_849(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		default:
			break;
	}
}

int func_531(int iParam0)//Position - 0x16F4D
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_846(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_285 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_532(int iParam0)//Position - 0x17076
{
	switch (iParam0)
	{
		case 78:
			__LIB_0__::func_849(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			__LIB_0__::func_849(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			__LIB_0__::func_849(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			__LIB_0__::func_849(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		case 79:
			__LIB_0__::func_849(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			__LIB_0__::func_849(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__::func_849(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__::func_849(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 82:
			__LIB_0__::func_849(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			__LIB_0__::func_849(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			__LIB_0__::func_849(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			__LIB_0__::func_849(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		case 81:
			__LIB_0__::func_849(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
			__LIB_0__::func_849(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
			__LIB_0__::func_849(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
			__LIB_0__::func_849(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
			break;
		case 73:
			__LIB_0__::func_849(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			__LIB_0__::func_849(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			__LIB_0__::func_849(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			__LIB_0__::func_849(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		case 75:
			__LIB_0__::func_849(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			__LIB_0__::func_849(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__::func_849(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__::func_849(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 76:
			__LIB_0__::func_849(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			__LIB_0__::func_849(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__::func_849(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__::func_849(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		case 77:
			__LIB_0__::func_849(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			__LIB_0__::func_849(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			__LIB_0__::func_849(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			__LIB_0__::func_849(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		case 80:
			__LIB_0__::func_849(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			__LIB_0__::func_849(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			__LIB_0__::func_849(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			__LIB_0__::func_849(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		case 87:
			if (__LIB_0__::func_848())
			{
				__LIB_0__::func_849(-1608.297f, -556.875f, 33.406f, 310f);
				__LIB_0__::func_849(-1616.095f, -563.402f, 33.049f, 309.4f);
				__LIB_0__::func_849(-1560.29f, -531.69f, 34.576f, 35.3994f);
				__LIB_0__::func_849(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				__LIB_0__::func_849(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				__LIB_0__::func_849(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				__LIB_0__::func_849(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
				__LIB_0__::func_849(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
				__LIB_0__::func_849(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
				__LIB_0__::func_849(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
				__LIB_0__::func_849(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				__LIB_0__::func_849(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		case 88:
			if (__LIB_0__::func_848())
			{
				__LIB_0__::func_849(-1402.362f, -511.396f, 30.888f, 35.4f);
				__LIB_0__::func_849(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				__LIB_0__::func_849(-1407.634f, -503.839f, 31.35f, 35.4f);
				__LIB_0__::func_849(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				__LIB_0__::func_849(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
				__LIB_0__::func_849(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
				__LIB_0__::func_849(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
				__LIB_0__::func_849(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
				__LIB_0__::func_849(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
				__LIB_0__::func_849(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
				__LIB_0__::func_849(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
				__LIB_0__::func_849(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		case 89:
			if (__LIB_0__::func_848())
			{
				__LIB_0__::func_849(-102.737f, -597.379f, 35.053f, 160.999f);
				__LIB_0__::func_849(-97.793f, -589.568f, 35.082f, 134.799f);
				__LIB_0__::func_849(-110.357f, -619.402f, 35.055f, 160.599f);
				__LIB_0__::func_849(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				__LIB_0__::func_849(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				__LIB_0__::func_849(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				__LIB_0__::func_849(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				__LIB_0__::func_849(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				__LIB_0__::func_849(-98.3748f, -612.642f, 35.137f, 161.1124f);
				__LIB_0__::func_849(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				__LIB_0__::func_849(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				__LIB_0__::func_849(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		case 90:
			if (__LIB_0__::func_848())
			{
				__LIB_0__::func_849(-59.349f, -779.238f, 43.134f, 228.398f);
				__LIB_0__::func_849(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				__LIB_0__::func_849(-65.212f, -772.66f, 43.151f, 219.398f);
				__LIB_0__::func_849(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				__LIB_0__::func_849(-59.684f, -779.4568f, 43.114f, 228.7591f);
				__LIB_0__::func_849(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				__LIB_0__::func_849(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				__LIB_0__::func_849(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				__LIB_0__::func_849(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				__LIB_0__::func_849(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				__LIB_0__::func_849(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				__LIB_0__::func_849(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		case 91:
			__LIB_0__::func_849(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
			__LIB_0__::func_849(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
			__LIB_0__::func_849(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
			__LIB_0__::func_849(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
			__LIB_0__::func_849(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			__LIB_0__::func_849(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
			__LIB_0__::func_849(264.814f, -1785.8008f, 26.1131f, 164.5991f);
			__LIB_0__::func_849(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
			break;
		case 92:
			__LIB_0__::func_849(-1464.5f, -927.9f, 9f, 296.7991f);
			__LIB_0__::func_849(-1466f, -926.1f, 9f, 296.7991f);
			__LIB_0__::func_849(-1467.9f, -924.7f, 9f, 296.7991f);
			__LIB_0__::func_849(-1469.7f, -923.7f, 9f, 296.7991f);
			__LIB_0__::func_849(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
			__LIB_0__::func_849(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
			__LIB_0__::func_849(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
			__LIB_0__::func_849(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		case 93:
			__LIB_0__::func_849(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
			__LIB_0__::func_849(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
			__LIB_0__::func_849(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
			__LIB_0__::func_849(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			__LIB_0__::func_849(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
			__LIB_0__::func_849(33.672f, -1014.3994f, 28.4552f, 234.5994f);
			__LIB_0__::func_849(37.488f, -1014.344f, 28.4781f, 175.5986f);
			__LIB_0__::func_849(39.4909f, -1015.0972f, 28.484f, 175.5986f);
			break;
		case 94:
			__LIB_0__::func_849(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
			__LIB_0__::func_849(43.316f, 2785.9026f, 56.8782f, 103.5999f);
			__LIB_0__::func_849(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
			__LIB_0__::func_849(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			__LIB_0__::func_849(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			__LIB_0__::func_849(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
			__LIB_0__::func_849(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
			__LIB_0__::func_849(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
			break;
		case 95:
			__LIB_0__::func_849(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
			__LIB_0__::func_849(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
			__LIB_0__::func_849(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
			__LIB_0__::func_849(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			__LIB_0__::func_849(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
			__LIB_0__::func_849(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
			__LIB_0__::func_849(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
			__LIB_0__::func_849(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		case 96:
			__LIB_0__::func_849(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
			__LIB_0__::func_849(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
			__LIB_0__::func_849(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
			__LIB_0__::func_849(1750.4752f, 3715.007f, 33.1067f, 39.399f);
			__LIB_0__::func_849(1747.1798f, 3721.1023f, 33.007f, 95.199f);
			__LIB_0__::func_849(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
			__LIB_0__::func_849(1740.67f, 3717.6128f, 33.0616f, 8.199f);
			__LIB_0__::func_849(1733.937f, 3715.0796f, 33.1236f, 8.199f);
			break;
		case 97:
			__LIB_0__::func_849(947.9371f, -1452.7367f, 30.143f, 331.5991f);
			__LIB_0__::func_849(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
			__LIB_0__::func_849(952.4588f, -1452.8821f, 30.129f, 331.5991f);
			__LIB_0__::func_849(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
			__LIB_0__::func_849(935.1006f, -1452.7012f, 30.1907f, 316.999f);
			__LIB_0__::func_849(932.5459f, -1452.5793f, 30.2194f, 316.999f);
			__LIB_0__::func_849(929.9319f, -1452.5665f, 30.2647f, 316.999f);
			__LIB_0__::func_849(927.4857f, -1452.4463f, 30.3167f, 316.999f);
			break;
		case 98:
			__LIB_0__::func_849(186.6051f, 306.8702f, 104.389f, 162.3999f);
			__LIB_0__::func_849(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			__LIB_0__::func_849(182.1681f, 306.6823f, 104.375f, 162.3999f);
			__LIB_0__::func_849(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			__LIB_0__::func_849(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			__LIB_0__::func_849(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			__LIB_0__::func_849(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			__LIB_0__::func_849(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		case 99:
			__LIB_0__::func_849(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			__LIB_0__::func_849(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			__LIB_0__::func_849(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			__LIB_0__::func_849(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			__LIB_0__::func_849(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			__LIB_0__::func_849(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			__LIB_0__::func_849(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			__LIB_0__::func_849(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		case 100:
			__LIB_0__::func_849(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
			__LIB_0__::func_849(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
			__LIB_0__::func_849(2465.1226f, 4081.35f, 37.0655f, 167.4f);
			__LIB_0__::func_849(2463.017f, 4082.271f, 37.0653f, 167.4f);
			__LIB_0__::func_849(2467.7002f, 4080.332f, 37.0649f, 167.4f);
			__LIB_0__::func_849(2469.5867f, 4079.5378f, 37.061f, 167.4f);
			__LIB_0__::func_849(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
			__LIB_0__::func_849(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
			break;
		case 101:
			__LIB_0__::func_849(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			__LIB_0__::func_849(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
			__LIB_0__::func_849(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			__LIB_0__::func_849(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			__LIB_0__::func_849(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			__LIB_0__::func_849(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
			__LIB_0__::func_849(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
			__LIB_0__::func_849(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		case 102:
			__LIB_0__::func_849(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
			__LIB_0__::func_849(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
			__LIB_0__::func_849(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
			__LIB_0__::func_849(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
			__LIB_0__::func_849(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
			__LIB_0__::func_849(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
			__LIB_0__::func_849(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
			__LIB_0__::func_849(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
			break;
		default:
			break;
	}
}

int func_533()//Position - 0x187DE
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2667225.f_517 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !__LIB_0__::func_157(0))
	{
		return 0;
	}
	return 1;
}

void func_534()//Position - 0x1AA68
{
	if (!Global_1574747)
	{
		return;
	}
	__LIB_0__::func_865();
}

int func_535(int iParam0, bool bParam1, int iParam2)//Position - 0x3BA24
{
	int iVar0;
	if (!__LIB_0__::func_870(iParam0, 1))
	{
		return __LIB_0__::getMinusOneOrNull();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return __LIB_0__::func_894(iVar0, 0, bParam1, iParam2);
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_536(int iParam0, bool bParam1, int iParam2)//Position - 0x3BAA4
{
	int iVar0;
	if (!__LIB_0__::func_871(iParam0, 1))
	{
		return __LIB_0__::getMinusOneOrNull();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return __LIB_0__::func_894(iVar0, 0, bParam1, iParam2);
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_537(int iParam0)//Position - 0x3BB24
{
	int iVar0;
	if (!__LIB_0__::func_872(iParam0, 1))
	{
		return __LIB_0__::getMinusOneOrNull();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return __LIB_0__::func_894(iVar0, 0, 1, 0);
}

void func_538(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x40817
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		__LIB_1__::func_401(uParam2);
	}
	if (Global_1577896 < 2)
	{
		__LIB_1__::func_10(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						__LIB_0__::func_700(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							__LIB_0__::func_700(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						__LIB_0__::func_700(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					__LIB_0__::func_700(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						__LIB_0__::func_700(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		__LIB_1__::func_400(*iParam0, uParam1);
	}
	__LIB_0__::func_985();
}

void func_539(var uParam0)//Position - 0x40CC6
{
	__LIB_1__::func_403(uParam0);
	uParam0->f_692 = 1;
}

void func_540(int iParam0, int iParam1)//Position - 0x4118A
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = __LIB_1__::func_389(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_541(int iParam0, int iParam1)//Position - 0x2AB3
{
	__LIB_0__::func_804();
	if (Global_1574632.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*iParam0))
	{
		Global_1946141.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*iParam0);
		if (Global_1946141.f_11 < 0f)
		{
			Global_1946141.f_11 = 0f;
		}
	}
	__LIB_0__::func_881(*iParam0, &Global_1946141, &(Global_1946141.f_1), &(Global_1946141.f_4), &(Global_1946141.f_7), &(Global_1946141.f_10));
	Global_1946141.f_1.f_2 = (Global_1946141.f_1.f_2 - Global_1946141.f_11);
	if (Global_1946141.f_4.f_2 < 0f)
	{
		Global_1946141.f_12 = 1;
	}
	Global_1946141.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1946141.f_13 = 255;
	}
	if (Global_1946141.f_12)
	{
		if (__LIB_0__::func_803(iParam0, iParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1946141.f_14 = { Global_1946141.f_1 };
		Global_1946141.f_14 = (Global_1946141.f_14 * -1f);
		Global_1946141.f_17 = { Global_1946141.f_4 };
		Global_1946141.f_17 = (Global_1946141.f_17 * -1f);
		Global_1946141.f_20 = { Global_1946141.f_7 };
		Global_1946141.f_20.f_1 = (Global_1946141.f_20.f_1 * -1f);
		Global_1946141.f_20.f_2 = (Global_1946141.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1946141.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1946141.f_23 = 3;
		}
		Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1946141.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1946141.f_24 = 3;
		}
		if (((Global_1946141.f_23 == 0 && __LIB_0__::func_803(iParam0, iParam1, Global_1946141, Global_1946141.f_1, Global_1946141.f_4, Global_1946141.f_7, Global_1946141.f_10, 0, Global_1946141.f_13)) || Global_1946141.f_23 != 0) && ((Global_1946141.f_24 == 0 && __LIB_0__::func_803(iParam0, iParam1, Global_1946141, Global_1946141.f_14, Global_1946141.f_17, Global_1946141.f_20, Global_1946141.f_10, 1, Global_1946141.f_13)) || Global_1946141.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577911 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577911 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

var func_542(int iParam0)//Position - 0x879D
{
	var uVar0;
	uVar0 = __LIB_0__::func_369(__LIB_0__::func_882(iParam0), -1, 0);
	return uVar0;
}

int func_543(int iParam0)//Position - 0x87EF
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_0__::func_883(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_544(int iParam0)//Position - 0xA7F4
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_0__::func_322(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (__LIB_0__::func_896(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (__LIB_0__::func_320(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_545(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0xB9CF
{
	int iVar0;
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = __LIB_1__::func_452(iParam0);
		if (iVar0 != 0)
		{
			__LIB_1__::func_451(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

int func_546(struct<3> Param0, var uParam1)//Position - 0xD7FE
{
	if (uParam1->f_18)
	{
		switch (uParam1->f_26)
		{
			case 0:
				if (__LIB_0__::func_828(Param0, uParam1->f_19, uParam1->f_25, 0, 0))
				{
					return 1;
				}
				break;
			case 1:
				if (__LIB_1__::func_453(Param0, uParam1->f_19, uParam1->f_22, 0, 0))
				{
					return 1;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam1->f_19, uParam1->f_22, uParam1->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_547(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0xE7A6
{
	int iVar0;
	struct<3> Var1;
	switch (iParam4)
	{
		case 0:
			__LIB_1__::func_450(&Param0, Param1, fParam3, fParam5, bParam6, 0);
			break;
		case 1:
			__LIB_0__::func_836(&Param0, Param1, Param2, fParam5, bParam6);
			break;
		case 2:
			__LIB_1__::func_449(&Param0, Param1, Param2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!__LIB_0__::func_828(Var1, Param1, fParam3, 0, 0))
				{
					return Var1;
				}
				break;
			case 1:
				if (!__LIB_1__::func_453(Var1, Param1, Param2, 0, 0))
				{
					return Var1;
				}
				break;
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param1, Param2, fParam3, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_548(int iParam0)//Position - 0x1008A
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_156(iParam0, 1, 1))
	{
		if (__LIB_0__::func_890(iParam0) && !__LIB_0__::func_889(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_549(int iParam0)//Position - 0x3B93D
{
	int iVar0;
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return __LIB_0__::func_894(iVar0, 0, 1, 0);
}

int func_550(int iParam0)//Position - 0x82AD
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (__LIB_0__::func_896(PLAYER::PLAYER_ID()) == 3)
	{
		if (__LIB_0__::func_320(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1946166)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
		case joaat("lm87"):
			return 1;
			break;
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		case joaat("gp1"):
			return 1;
			break;
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		case joaat("thruster"):
			return 1;
			break;
		case joaat("terbyte"):
			return 1;
			break;
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
		case joaat("draugur"):
			return 1;
			break;
		case joaat("club"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		case joaat("yosemite3"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_551(int iParam0)//Position - 0xD3C0
{
	if (__LIB_0__::func_156(iParam0, 0, 1))
	{
		if (!__LIB_0__::func_457(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!__LIB_0__::func_958(iParam0))
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
		}
	}
	return 0;
}

int func_552(int iParam0)//Position - 0x2186
{
	int iVar0;
	if (__LIB_0__::func_719())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (__LIB_0__::func_328(iVar0) == iParam0)
			{
				if (__LIB_0__::func_921(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_553()//Position - 0x1A7C3
{
	__LIB_0__::func_671(0);
}

int func_554(int iParam0)//Position - 0x1B4CB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		iVar2 = iVar1;
		iVar4 = __LIB_0__::func_453(iParam0, iVar2);
		if (__LIB_0__::func_232(iVar5, 14, iVar4, -1))
		{
			return 1;
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
			if (__LIB_0__::func_232(iVar5, iVar3, iVar4, -1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_555(int iParam0, int iParam1, int iParam2)//Position - 0x2F980
{
	switch (iParam0)
	{
		case 2:
			__LIB_0__::func_920(iParam1, iParam2);
			break;
		case 11:
			__LIB_0__::func_925(iParam1, iParam2);
			break;
		case 8:
			__LIB_0__::func_924(iParam1, iParam2);
			break;
		case 9:
			__LIB_0__::func_919(iParam1, iParam2);
			break;
		case 3:
			__LIB_0__::func_918(iParam1, iParam2);
			break;
		case 4:
			__LIB_0__::func_917(iParam1, iParam2);
			break;
		case 6:
			__LIB_0__::func_916(iParam1, iParam2);
			break;
		case 1:
			__LIB_0__::func_915(iParam1, iParam2);
			break;
		case 7:
			__LIB_0__::func_914(iParam1, iParam2);
			break;
		case 10:
			__LIB_0__::func_913(iParam1, iParam2);
			break;
		case 14:
			__LIB_0__::func_912(iParam1, iParam2);
			break;
		case 12:
			__LIB_0__::func_911(iParam1, iParam2);
			break;
		case 5:
			__LIB_0__::func_910(iParam1, iParam2);
			break;
		case 0:
			__LIB_0__::func_909(iParam1, iParam2);
			break;
		case 13:
			__LIB_0__::func_664(iParam1);
			break;
	}
}

void func_556(int iParam0, int iParam1, int iParam2)//Position - 0x20411
{
	switch (iParam0)
	{
		case 2:
			__LIB_0__::func_908(iParam1, iParam2);
			break;
		case 11:
			__LIB_0__::func_923(iParam1, iParam2);
			break;
		case 8:
			__LIB_0__::func_926(iParam1, iParam2);
			break;
		case 9:
			__LIB_0__::func_907(iParam1, iParam2);
			break;
		case 3:
			__LIB_0__::func_906(iParam1, iParam2);
			break;
		case 4:
			__LIB_0__::func_905(iParam1, iParam2);
			break;
		case 6:
			__LIB_0__::func_904(iParam1, iParam2);
			break;
		case 1:
			__LIB_0__::func_903(iParam1, iParam2);
			break;
		case 7:
			__LIB_0__::func_902(iParam1, iParam2);
			break;
		case 10:
			__LIB_0__::func_901(iParam1, iParam2);
			break;
		case 14:
			__LIB_0__::func_900(iParam1, iParam2);
			break;
		case 12:
			__LIB_0__::func_899(iParam1, iParam2);
			break;
		case 5:
			__LIB_0__::func_898(iParam1, iParam2);
			break;
		case 0:
			__LIB_0__::func_922(iParam1, iParam2);
			break;
		case 13:
			__LIB_0__::func_663(iParam1);
			break;
	}
}

int func_557(struct<3> Param0, int iParam1)//Position - 0xF060
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1 || iParam1 == 0)
		{
			if (__LIB_1__::func_528(Param0, &(Global_2672169[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_558(var uParam0, bool bParam1)//Position - 0x172BE
{
	int iVar0;
	struct<3> Var1;
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674503[iVar0 /*7*/].f_2 + Global_2674503[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (__LIB_0__::func_830(Var1, &(Global_2674503[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				__LIB_1__::func_449(&Var1, Global_2674503[iVar0 /*7*/], Global_2674503[iVar0 /*7*/].f_3, Global_2674503[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_559(struct<3> Param0, float fParam1)//Position - 0x17464
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (__LIB_1__::func_528(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_560(struct<3> Param0, float fParam1)//Position - 0x174AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			if (__LIB_1__::func_528(Param0, &(Global_2667225.f_45[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_561(int iParam0)//Position - 0x17E59
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (__LIB_0__::func_953(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_562(int iParam0, int iParam1, int iParam2)//Position - 0x7CEC
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_526()) && Global_1576214)
	{
		if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
		{
			return 13;
		}
	}
	return 0;
}

float func_563(int iParam0, float fParam1)//Position - 0xACBB
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (iParam0 == 0)
	{
		return 5f;
	}
	__LIB_1__::func_545(iParam0, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
	Var2 = { Var1 - Var0 };
	fVar3 = (SYSTEM::SQRT(((((Var2.f_0 * 0.5f) * (Var2.f_0 * 0.5f)) + ((Var2.f_1 * 0.5f) * (Var2.f_1 * 0.5f))) + ((Var2.f_2 * 0.5f) * (Var2.f_2 * 0.5f)))) + fParam1);
	return fVar3;
}

float func_564(int iParam0, float fParam1)//Position - 0xCF67
{
	float fVar0;
	float fVar1;
	float fVar2;
	__LIB_1__::func_545(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_565(struct<3> Param0, var uParam1)//Position - 0xD201
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	iVar1 = __LIB_0__::func_832();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667225.f_368[iVar0 /*12*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(Param0, &(Global_2667225.f_368[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_566(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xDC25
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { __LIB_1__::func_547(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			case 1:
				*uParam0 = { __LIB_1__::func_547(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			case 2:
				*uParam0 = { __LIB_1__::func_547(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				__LIB_1__::func_450(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			case 1:
				__LIB_0__::func_836(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			case 2:
				__LIB_1__::func_449(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_567(struct<3> Param0, float fParam1, int iParam2, bool bParam3)//Position - 0x13D88
{
	struct<2> Var0;
	struct<2> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (!iParam2 == 0)
	{
		__LIB_1__::func_545(iParam2, &Var0, &Var1, 1086324736, 1080033280, 1077936128);
		fVar2 = (Var1.f_1 - Var0.f_1);
		if (bParam3)
		{
			fVar2 = (fVar2 * -1f);
		}
		fVar2 = (fVar2 * 0.5f);
		Var3 = { 0f, fVar2, 0f };
		Var4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Var3) };
		__LIB_0__::func_849(Var4, fParam1);
	}
	else
	{
		__LIB_0__::func_849(Param0, fParam1);
	}
}

int func_568(int iParam0, bool bParam1)//Position - 0x73AB
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
	if (__LIB_1__::func_543(PLAYER::PLAYER_ID()))
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
	uVar0 = __LIB_1__::func_542(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

void func_569(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x833D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_1__::func_544(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_0__::func_524(uParam1->f_5) || __LIB_0__::func_524(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__::func_318(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__::func_291())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__::func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__::func_317(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__::func_317(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_0__::func_372(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((__LIB_0__::func_897() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

void func_570(struct<3> Param0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0xA74B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	Var0 = { 0f, 1f, 0f };
	__LIB_0__::func_817(&Var0, 0f, 0f, fParam1);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	__LIB_1__::func_545(iParam2, &Var1, &Var2, 1086324736, 1080033280, 1077936128);
	Var3 = { Param0 + Var0 * FtoV((Var2.f_1 + fParam6)) };
	Var3.f_2 = (Var3.f_2 - ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	Var4 = { Param0 - Var0 * FtoV(((Var1.f_1 * -1f) + fParam6)) };
	Var4.f_2 = (Var4.f_2 + ((0.5f * MISC::ABSF((Var2.f_2 - Var1.f_2))) + fParam6));
	*uParam3 = { Var3 };
	*uParam4 = { Var4 };
	*uParam5 = MISC::ABSF((Var2.f_0 - Var1.f_0));
}

void func_571(struct<3> Param0, var uParam1, int iParam2, var uParam3)//Position - 0xB20C
{
	struct<8> Var0;
	*uParam3 = __LIB_0__::func_823(&Param0, &uParam1, &iParam2);
	Var0.f_0 = 495813132;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_6 = iParam2;
	Var0.f_7 = *uParam3;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, __LIB_0__::func_943(1, 1));
}

bool func_572(var uParam0, bool bParam1)//Position - 0xD4E9
{
	bool bVar0;
	bVar0 = false;
	if (Global_2667225.f_26.f_18)
	{
		switch (Global_2667225.f_26.f_17)
		{
			case 0:
				if (__LIB_0__::func_828(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 1:
				if (__LIB_1__::func_453(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { __LIB_1__::func_547(*uParam0, Global_2667225.f_26.f_10, Global_2667225.f_26.f_13, Global_2667225.f_26.f_16, Global_2667225.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_573(int iParam0)//Position - 0xEC01
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_840(iParam0);
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
	if (iVar1 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1853348[iVar1 /*834*/].f_267.f_278 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_6 == iParam0)
	{
		return 1;
	}
	if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0) || (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (__LIB_0__::func_308(PLAYER::PLAYER_ID()) || (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (__LIB_0__::func_307(PLAYER::PLAYER_ID()) || (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (__LIB_0__::func_887(PLAYER::PLAYER_ID()) || (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (__LIB_0__::func_886(PLAYER::PLAYER_ID()) || (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

void func_574(struct<3> Param0)//Position - 0xCD6
{
	struct<3> Var0;
	Var0.f_0 = -1553386096;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Param0.f_0;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_0__::func_943(1, 1));
}

int func_575(struct<3> Param0, float fParam1, float fParam2)//Position - 0xC18D
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (__LIB_1__::func_551(iVar3))
		{
			Var1 = { __LIB_0__::func_85(iVar3) };
			fVar5 = SYSTEM::VDIST(Param0, Var1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

Vector3 func_576(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x6D37A
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

int func_577()//Position - 0x6E4DA
{
	return 12;
}

int func_578(int iParam0)//Position - 0x7328E
{
	switch (iParam0)
	{
		case 1:
			return 155;
		case 2:
			return 156;
		case 3:
			return 157;
		case 4:
			return 158;
		default:
	}
	return -1;
}

bool func_579()//Position - 0x75401
{
	return Global_1946250.f_4533 != -1;
}

bool func_580()//Position - 0x756BF
{
	return __LIB_0__::func_137(28256, -1);
}

float func_581(var uParam0, float fParam1)//Position - 0x769C3
{
	float fVar0;
	fVar0 = (fParam1 + *uParam0);
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

Vector3 func_582(var uParam0, var uParam1, struct<3> Param2)//Position - 0x76A01
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, *uParam1, Param2);
}

int func_583(int iParam0)//Position - 0xA10F0
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

int func_584()//Position - 0xA1DFC
{
	if (__LIB_0__::func_623() == 3 || __LIB_0__::func_623() == 2)
	{
		return 1;
	}
	return 0;
}

var func_585()//Position - 0xA1F4E
{
	return Global_2714762.f_735;
}

int func_586(int iParam0)//Position - 0xA1F6E
{
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0)//Position - 0xAAC9F
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
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
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
			return 1;
		default:
	}
	return 0;
}

int func_588(int iParam0)//Position - 0xAB9DE
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_589(int iParam0)//Position - 0xABA84
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_590(int iParam0)//Position - 0xABB03
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

int func_591(var uParam0)//Position - 0xABB94
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_592(int iParam0)//Position - 0xABBB7
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

int func_593(int iParam0)//Position - 0xAC7B3
{
	int iVar0;
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_594(int iParam0)//Position - 0xB2792
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("coquette"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt2"):
		case joaat("rapidgt"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("vacca"):
		case joaat("ztype"):
		case joaat("akuma"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("double"):
		case joaat("hexer"):
		case joaat("elegy2"):
		case joaat("khamelion"):
		case joaat("hotknife"):
		case joaat("carbonrs"):
		case joaat("voltic"):
		case joaat("comet2"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("blazer3"):
		case joaat("jester"):
		case joaat("massacro"):
		case joaat("turismor"):
		case joaat("zentorno"):
		case joaat("huntley"):
		case joaat("alpha"):
		case joaat("paradise"):
		case joaat("bifta"):
		case joaat("kalahari"):
		case joaat("btype"):
		case joaat("thrust"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("coquette2"):
		case joaat("monster"):
		case joaat("sovereign"):
		case joaat("innovation"):
		case joaat("hakuchou"):
		case joaat("furoregt"):
		case joaat("boxville4"):
		case joaat("casco"):
		case joaat("dinghy3"):
		case joaat("enduro"):
		case joaat("gburrito2"):
		case joaat("guardian"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("mule3"):
		case joaat("savage"):
		case joaat("technical"):
		case joaat("valkyrie"):
		case joaat("velum2"):
		case joaat("blista2"):
		case joaat("dodo"):
		case joaat("dukes"):
		case joaat("marshall"):
		case joaat("stalion"):
		case joaat("submersible2"):
		case joaat("blista3"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("buffalo3"):
		case joaat("dominator2"):
		case joaat("dukes2"):
		case joaat("gauntlet2"):
		case joaat("stalion2"):
		case joaat("blimp2"):
		case joaat("jester2"):
		case joaat("massacro2"):
		case joaat("ratloader2"):
		case joaat("slamvan"):
		case joaat("barracks3"):
		case joaat("slamvan2"):
		case joaat("brawler"):
		case joaat("chino"):
		case joaat("coquette3"):
		case joaat("feltzer3"):
		case joaat("luxor2"):
		case joaat("osiris"):
		case joaat("swift2"):
		case joaat("t20"):
		case joaat("toro"):
		case joaat("vindicator"):
		case joaat("virgo"):
		case joaat("windsor"):
		case joaat("faction"):
		case joaat("moonbeam"):
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("btype2"):
		case joaat("lurcher"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("virgo3"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
		case joaat("cog55"):
		case joaat("cog552"):
		case joaat("cognoscenti"):
		case joaat("cognoscenti2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter5"):
		case joaat("schafter4"):
		case joaat("schafter6"):
		case joaat("verlierer2"):
		case joaat("tampa"):
		case joaat("banshee2"):
		case joaat("sultanrs"):
		case joaat("btype3"):
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
		case joaat("le7b"):
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("contender"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("tyrus"):
		case joaat("sheava"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("lynx"):
		case joaat("avarus"):
		case joaat("blazer4"):
		case joaat("chimera"):
		case joaat("daemon2"):
		case joaat("defiler"):
		case joaat("esskey"):
		case joaat("faggio3"):
		case joaat("faggio"):
		case joaat("hakuchou2"):
		case joaat("manchez"):
		case joaat("nightblade"):
		case joaat("raptor"):
		case joaat("ratbike"):
		case joaat("sanctus"):
		case joaat("shotaro"):
		case joaat("tornado6"):
		case joaat("vortex"):
		case joaat("wolfsbane"):
		case joaat("youga2"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("comet2"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("elegy2"):
		case joaat("elegy"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("italigtb2"):
		case joaat("nero"):
		case joaat("nero2"):
		case joaat("penetrator"):
		case joaat("specter"):
		case joaat("specter2"):
		case joaat("tempesta"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("ruiner3"):
		case joaat("technical2"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("gp1"):
		case joaat("infernus2"):
		case joaat("ruston"):
		case joaat("turismo2"):
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
		case joaat("gb200"):
		case joaat("fagaloa"):
		case joaat("ellie"):
		case joaat("issi3"):
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
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("scramjet"):
		case joaat("freecrawler"):
		case joaat("menacer"):
		case joaat("patriot2"):
		case joaat("stafford"):
		case joaat("swinger"):
		case joaat("terbyte"):
		case joaat("strikeforce"):
		case joaat("pbus2"):
		case joaat("blimp3"):
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
		case joaat("deathbike3"):
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
		case joaat("rcbandito"):
		case joaat("zr380"):
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
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("jugular"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("stryder"):
		case joaat("retinue2"):
		case joaat("formula2"):
		case joaat("yosemite2"):
		case joaat("furia"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("yosemite3"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("coquette4"):
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
		case joaat("kosatka"):
		case joaat("toreador"):
		case joaat("italirsx"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
			break;
	}
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
	switch (iParam0)
	{
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

int func_595(int iParam0)//Position - 0xB7ED6
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_596(int iParam0)//Position - 0xB7F1F
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_597(int iParam0)//Position - 0xB8EEC
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_598(int iParam0)//Position - 0xB905C
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

bool func_599(int iParam0)//Position - 0xB9B4D
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

void func_600(bool bParam0)//Position - 0xBE3F0
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

var func_601(var uParam0)//Position - 0xC76EC
{
	return uParam0;
}

void func_602(bool bParam0, bool bParam1)//Position - 0xC7E86
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.7777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.7777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

int func_603(int iParam0)//Position - 0xCD7C4
{
	if (Global_2689235[iParam0 /*453*/].f_215 != 0)
	{
		return 1;
	}
	return 0;
}

int func_604(int iParam0)//Position - 0xD0B51
{
	switch (iParam0)
	{
		case 1:
			return 149;
		case 2:
			return 150;
		case 3:
			return 151;
		case 4:
			return 152;
		case 5:
			return 153;
		default:
	}
	return -1;
}

int func_605(int iParam0)//Position - 0xD0B98
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_465;
	}
	return 0;
}

int func_606(int iParam0, int iParam1, int iParam2)//Position - 0xDAB7E
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_607()//Position - 0x10A494
{
	Global_78291 = 0;
	Global_78292 = -1;
	Global_78293 = -1;
	Global_78294 = -1;
	Global_78295 = -1;
	Global_78299 = -1;
}

int func_608(int iParam0)//Position - 0x10B146
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5);
	iVar1 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("MP_M_Freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if ((iVar0 >= 1 && iVar0 <= 19) || (iVar0 >= 21 && iVar0 <= 29))
			{
				return 1;
			}
			iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 5, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 5));
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("PARACHUTE"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_609(int iParam0)//Position - 0x11675B
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("pyro"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("nokota"):
		case joaat("hunter"):
		case joaat("molotok"):
		case joaat("bombushka"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
			return 1;
			break;
	}
	return 0;
}

int func_610(int iParam0)//Position - 0x1167F4
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("havok"):
		case joaat("alphaz1"):
		case joaat("microlight"):
		case joaat("howard"):
		case joaat("avenger"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("volatol"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
			return 1;
			break;
	}
	return 0;
}

bool func_611()//Position - 0x11723F
{
	return Global_2714762.f_841;
}

int func_612(int iParam0)//Position - 0x117F4B
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		default:
	}
	return 0;
}

int func_613(int iParam0)//Position - 0x11B4FF
{
	return Global_1911933[iParam0 /*260*/].f_259;
}

var func_614()//Position - 0x124EF5
{
	return BitTest(Global_1574942, 4);
}

int func_615()//Position - 0x125ED6
{
	return Global_1574632.f_19;
}

void func_616(int iParam0)//Position - 0x125EE4
{
	if (Global_1574632.f_19 != iParam0)
	{
		Global_1574632.f_19 = iParam0;
	}
}

int func_617()//Position - 0x126024
{
	int iVar0;
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGSelectionIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGSelectionIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGSelectionTint"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGSelectionTint");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTournamentIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGTournamentIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistTint"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistTint");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGHeistIntro"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGHeistIntro");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTournamentTint"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGTournamentTint");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGRemixIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGRemixIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuSurvivalAlienIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuSurvivalAlienIn");
		iVar0 = 1;
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGIslandHeistIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGIslandHeistIn");
		iVar0 = 1;
	}
	return iVar0;
}

void func_618()//Position - 0x127A95
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2726703))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_2726703, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_2726703))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_2726703, false, false);
			}
			PED::DELETE_PED(&Global_2726703);
		}
	}
}

bool func_619(int iParam0)//Position - 0x127C41
{
	return iParam0 == 65;
}

bool func_620()//Position - 0x127C75
{
	return BitTest(Global_2715699.f_1.f_2809, 12);
}

void func_621()//Position - 0x1283EC
{
	Global_2667225.f_45.f_320 = 1;
}

void func_622()//Position - 0x12868F
{
	Global_2815059.f_6776 = -1;
}

bool func_623()//Position - 0x1287C5
{
	return BitTest(Global_2714762.f_43.f_4, 0);
}

int func_624()//Position - 0x1287D7
{
	return Global_2714762.f_43.f_40;
}

bool func_625()//Position - 0x1287F7
{
	return Global_1931975.f_1767;
}

int func_626(int iParam0)//Position - 0x132C0F
{
	switch (iParam0)
	{
		case 1:
			return 128;
		case 2:
			return 129;
		case 3:
			return 130;
		case 4:
			return 131;
		case 5:
			return 132;
		case 6:
			return 133;
		default:
	}
	return -1;
}

int func_627(int iParam0)//Position - 0x132C61
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_408;
	}
	return 0;
}

bool func_628(int iParam0)//Position - 0x13C4E9
{
	return __LIB_1__::func_472(iParam0, 3);
}

bool func_629()//Position - 0x13C92A
{
	return Global_1946250.f_4716 != -1;
}

int func_630(int iParam0)//Position - 0x1416C1
{
	if (iParam0 == 1)
	{
		return 124;
	}
	return -1;
}

int func_631(int iParam0)//Position - 0x1416D5
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384;
	}
	return 0;
}

var func_632()//Position - 0x1457C3
{
	return Global_1836579;
}

void func_633()//Position - 0x1458BA
{
	int iVar0;
	struct<5> Var1;
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2667225.f_714.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_634(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x146B15
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_635(int iParam0)//Position - 0x151E3F
{
	if (iParam0 == 1)
	{
		return 122;
	}
	return -1;
}

int func_636(int iParam0)//Position - 0x151E53
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_353;
	}
	return 0;
}

int func_637(int iParam0)//Position - 0x1550EE
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_638(int iParam0)//Position - 0x166DAC
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_295;
	}
	return 0;
}

int func_639(int iParam0)//Position - 0x166DD0
{
	switch (iParam0)
	{
		case 1:
			return 102;
		case 2:
			return 103;
		case 3:
			return 104;
		case 4:
			return 105;
		case 5:
			return 106;
		case 6:
			return 107;
		case 7:
			return 108;
		case 8:
			return 109;
		case 9:
			return 110;
		case 10:
			return 111;
		default:
	}
	return -1;
}

int func_640()//Position - 0x16A271
{
	return Global_2667225.f_2669;
}

int func_641(int iParam0)//Position - 0x16A42F
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285 != 0;
	}
	return 0;
}

int func_642(int iParam0)//Position - 0x17389A
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336;
	}
	return 0;
}

int func_643(int iParam0)//Position - 0x17562F
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_295 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_644(int iParam0)//Position - 0x17FF2F
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_645(int iParam0)//Position - 0x184875
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

var func_646()//Position - 0x1850DA
{
	return BitTest(Global_2714762, 1);
}

var func_647()//Position - 0x1850E8
{
	return BitTest(Global_2714762, 2);
}

var func_648()//Position - 0x1850F6
{
	return BitTest(Global_2714762, 20);
}

var func_649()//Position - 0x185114
{
	return Global_1575025;
}

int func_650(int iParam0)//Position - 0x19259F
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_651(int iParam0)//Position - 0x1945B0
{
	switch (iParam0)
	{
		case 1:
			return 89;
			break;
		case 2:
			return 90;
			break;
		case 3:
			return 91;
			break;
		case 4:
			return 92;
			break;
		case 5:
			return 93;
			break;
		case 6:
			return 94;
			break;
		case 7:
			return 95;
			break;
		case 8:
			return 96;
			break;
		case 9:
			return 97;
			break;
	}
	return -1;
}

int func_652(int iParam0)//Position - 0x19463E
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_285;
}

void func_653(bool bParam0)//Position - 0x19890C
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

int func_654(int iParam0)//Position - 0x19AE70
{
	switch (iParam0)
	{
		case 1:
			return 83;
			break;
		case 2:
			return 84;
			break;
		case 3:
			return 85;
			break;
		case 4:
			return 86;
			break;
		case 5:
			return 87;
			break;
	}
	return -1;
}

int func_655(int iParam0)//Position - 0x19AEEA
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278 != 0;
	}
	return 0;
}

int func_656(int iParam0)//Position - 0x19B35A
{
	switch (iParam0)
	{
		case 1:
			return 22;
			break;
		case 2:
			return 23;
			break;
		case 3:
			return 24;
			break;
		case 4:
			return 25;
			break;
		case 5:
			return 26;
			break;
		case 6:
			return 27;
			break;
		case 7:
			return 28;
			break;
		case 8:
			return 29;
			break;
		case 9:
			return 30;
			break;
		case 10:
			return 31;
			break;
		case 11:
			return 32;
			break;
		case 12:
			return 33;
			break;
		case 13:
			return 34;
			break;
		case 14:
			return 35;
			break;
		case 15:
			return 36;
			break;
		case 16:
			return 37;
			break;
		case 17:
			return 38;
			break;
		case 18:
			return 39;
			break;
		case 19:
			return 40;
			break;
		case 20:
			return 41;
			break;
		case 21:
			return 70;
			break;
		case 22:
			return 71;
			break;
		case 23:
			return 72;
			break;
		case 24:
			return 73;
			break;
		case 25:
			return 74;
			break;
		case 26:
			return 75;
			break;
		case 27:
			return 76;
			break;
		case 28:
			return 77;
			break;
		case 29:
			return 78;
			break;
		case 30:
			return 79;
			break;
		case 31:
			return 80;
			break;
	}
	return -1;
}

Vector3 func_657(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x19C4C2
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	fVar1 = fParam1;
	fVar2 = SYSTEM::COS(fVar1);
	fVar3 = SYSTEM::SIN(fVar1);
	Var0.f_0 = ((Param2.f_0 * fVar2) + (Param2.f_1 * fVar3));
	Var0.f_1 = ((Param2.f_1 * fVar2) - (Param2.f_0 * fVar3));
	Var4 = { Param0 + Var0 };
	return Var4;
}

int func_658(int iParam0)//Position - 0x19ED18
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("cuban800"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("avenger"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("alkonost"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
			{
				return 1;
			}
			break;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("strikeforce"))
	{
		if (VEHICLE::GET_VEHICLE_MOD(iParam0, 9) > -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_659(int iParam0)//Position - 0x1ABF6B
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

void func_660(int iParam0, var uParam1)//Position - 0x1AD512
{
	int iVar0;
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 363)
		{
			if (iParam0 == (Global_1940666[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

int func_661(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1ADF62
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_919) && !ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2703735.f_919 = iParam3;
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2703735.f_919);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2703735.f_919))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_2703735.f_919, false))
				{
					ENTITY::SET_ENTITY_HEADING(Global_2703735.f_919, fParam2);
					ENTITY::SET_ENTITY_COORDS(Global_2703735.f_919, Param1, false, true, true, true);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_662(int iParam0)//Position - 0x1AE005
{
	int iVar0;
	iVar0 = Global_2667225.f_2691;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2667225.f_2689 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2667225.f_2688)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2667225.f_2688 = iVar0;
		}
	}
}

bool func_663()//Position - 0x1AE07D
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

void func_664()//Position - 0x1AE189
{
	Global_2824571.f_92 = 1;
}

int func_665()//Position - 0x1AE198
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_0__::func_157(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

int func_666(int iParam0)//Position - 0x1BC04A
{
	switch (iParam0)
	{
		case 0:
			return 157;
		case 2:
			return 224;
		case 1:
			return 227;
		case 3:
			return 279;
		default:
	}
	return -1;
}

void func_667()//Position - 0x1BC3E7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 3))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_668(int iParam0)//Position - 0x1C30A6
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_15;
	}
	return -1;
}

int func_669(int iParam0)//Position - 0x1E3D0E
{
	switch (iParam0)
	{
		case 1:
			return 60;
			break;
		case 2:
			return 61;
			break;
		case 3:
			return 62;
			break;
		case 4:
			return 63;
			break;
		case 5:
			return 64;
			break;
		case 6:
			return 65;
			break;
		case 7:
			return 66;
			break;
		case 8:
			return 67;
			break;
		case 9:
			return 68;
			break;
		case 10:
			return 69;
			break;
	}
	return -1;
}

int func_670()//Position - 0x1EE51F
{
	return Global_2671449;
}

int func_671(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x1EEF70
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam7)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam4, bParam3, bParam5));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_OBJ(*uParam0), bParam6);
		if (bParam8)
		{
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam9)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam3)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_672(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1EFF14
{
	int iVar0;
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam4, bParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

void func_673(var uParam0, bool bParam1)//Position - 0x333
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

void func_674(bool bParam0)//Position - 0x742BB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112038)
	{
		HUD::CLEAR_FLOATING_HELP(iVar0, bParam0);
		__LIB_1__::func_487(iVar0);
		iVar0++;
	}
}

int func_675()//Position - 0xB8AB9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_0__::func_848();
	}
	return __LIB_1__::func_197(Global_4718592.f_116524);
}

int func_676(int iParam0, int iParam1)//Position - 0xE7934
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2869167[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_677(int iParam0, int iParam1)//Position - 0xEA431
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2868734[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_678(int iParam0, int iParam1)//Position - 0xF54D6
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (HUD::GET_MENU_PED_INT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

float func_679(int iParam0, int iParam1)//Position - 0xF5E5E
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (HUD::GET_MENU_PED_FLOAT_STAT(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

float func_680(int iParam0, int iParam1)//Position - 0xF5F9D
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866176[iParam0 /*3*/][__LIB_1__::func_27(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_681(int iParam0)//Position - 0x11E82B
{
	return __LIB_1__::func_342(123, iParam0);
}

int func_682(int iParam0)//Position - 0x11E851
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__::func_192())
	{
		return 1;
	}
	if (__LIB_0__::func_191())
	{
		return 1;
	}
	return __LIB_1__::func_342(119, iParam0);
}

int func_683()//Position - 0x125F73
{
	if (__LIB_1__::func_81())
	{
		return Global_2725330;
	}
	return 0;
}

void func_684()//Position - 0x1286DD
{
	bool bVar0;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_0__::func_985();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
	if (!Global_1648034.f_1556)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	bVar0 = false;
	bVar0 = __LIB_0__::func_1("HQRHELP" /* GXT: You can quick restart a failed Heist by voting with ~INPUT_FRONTEND_RT~ */);
	if (!bVar0)
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
	__LIB_1__::func_33(0);
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	__LIB_1__::func_33(0);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
}

void func_685(int iParam0)//Position - 0x735BE
{
	if (BitTest(Global_2824374, iParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_937(&(Global_2824375[iParam0 /*2*/]), 3500, 1) || NETWORK::NETWORK_IS_PLAYER_FADING(iParam0))
		{
			if (!__LIB_0__::func_863())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_0__::func_627(&(Global_2824375[iParam0 /*2*/]), 1, 0);
				}
				else if (!__LIB_0__::func_361(iParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(iParam0, true);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
					{
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0), 255, false);
					}
				}
			}
			else
			{
				__LIB_0__::func_627(&(Global_2824375[iParam0 /*2*/]), 1, 0);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(iParam0));
			}
			__LIB_0__::clearF_1Prop(&(Global_2824375[iParam0 /*2*/]));
			MISC::CLEAR_BIT(&Global_2824374, iParam0);
		}
	}
}

int func_686(int iParam0, int iParam1, bool bParam2)//Position - 0x9827C
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_3() == 0)
		{
			return BitTest(__LIB_1__::func_360(__LIB_0__::func_326(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_687(int iParam0)//Position - 0xC0A9D
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return __LIB_1__::func_360(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_688(int iParam0)//Position - 0xCD9AE
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(__LIB_1__::func_360(9618, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 0);
	}
	return 0;
}

int func_689(bool bParam0)//Position - 0xD66CC
{
	if (bParam0)
	{
		return BitTest(__LIB_1__::func_360(9905, -1, 0), 2);
	}
	return __LIB_1__::func_161(PLAYER::PLAYER_ID());
}

bool func_690(int iParam0, bool bParam1, bool bParam2)//Position - 0xDB02B
{
	return __LIB_1__::func_391(1, iParam0, 1, bParam1, bParam2);
}

void func_691(bool bParam0)//Position - 0x109D14
{
	__LIB_1__::func_348(370, bParam0, -1, 1);
}

int func_692()//Position - 0xBA737
{
	if (!__LIB_1__::func_462())
	{
		return 0;
	}
	return 1;
}

int func_693(bool bParam0, bool bParam1, bool bParam2)//Position - 0x610
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(bParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_694(bool bParam0)//Position - 0x148B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_695(int iParam0, int iParam1)//Position - 0x33E6
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		default:
	}
	return 0;
}

struct<13> func_696(bool bParam0)//Position - 0x4A35
{
	struct<13> Var0;
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

void func_697()//Position - 0x52D3
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_698(bool bParam0)//Position - 0x52E6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_699()//Position - 0x530C
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_700(bool bParam0)//Position - 0x5342
{
	bool bVar0;
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574757 = 20;
	StringCopy(&(Global_1574757.f_1), "", 32);
	Global_1574757.f_9 = 0;
	if (bVar0)
	{
		Global_1574757.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574757.f_12), "", 16);
	StringCopy(&(Global_1574757.f_16), "", 64);
	StringCopy(&(Global_1574757.f_32), "", 64);
	Global_1574757.f_52 = 0;
	Global_1574757.f_53 = 0;
	Global_1574757.f_54 = 0;
	Global_1574757.f_55 = -1;
	Global_1574757.f_56 = 0;
	Global_1574757.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_701()//Position - 0x53FD
{
	switch (Global_1574757)
	{
		case 20:
			return;
		case 0:
			return;
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			return;
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574757.f_53);
			return;
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574757.f_16));
			return;
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_32));
			return;
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			return;
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			return;
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_16));
			return;
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574757.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574757.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574757.f_32));
			return;
		default:
	}
}

int func_702()//Position - 0x566F
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_703()//Position - 0x5BB2
{
	struct<28> Var0;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2676213 = { Var0 };
	Global_2676213.f_6 = -1;
}

int func_704(int iParam0)//Position - 0x7A28
{
	int iVar0;
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((__LIB_1__::func_75(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

var func_705(bool bParam0)//Position - 0x8D88
{
	var uVar0;
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_706(var uParam0, var uParam1)//Position - 0x9064
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

void func_707(char* sParam0, int iParam1)//Position - 0xA12F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_708(int iParam0)//Position - 0xA160
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_709()//Position - 0xB082
{
	int iVar0;
	var uVar1;
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_710()//Position - 0xB0A6
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

var func_711()//Position - 0xBDCD
{
	return Global_2621446.f_3;
}

float func_712(float fParam0, float fParam1)//Position - 0xC12F
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_713()//Position - 0xC79E
{
	if (__LIB_1__::func_512())
	{
		Global_2703735.f_833.f_16 = 1;
	}
}

void func_714(int iParam0)//Position - 0xFFCF
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

int func_715(var uParam0)//Position - 0x13EF3
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		case 2:
			return 9;
			break;
		case 3:
			return 3;
			break;
		case 4:
			return 3;
			break;
		case 5:
			return 8;
			break;
		case 6:
			return 8;
			break;
		case 7:
			return 11;
			break;
		case 8:
			return 11;
			break;
		case 9:
			return 6;
			break;
		case 10:
			return 6;
			break;
		case 11:
			return 10;
			break;
		case 12:
			return 10;
			break;
	}
	return 0;
}

bool func_716(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14009
{
	*uParam2 = 0;
	*uParam3 = 0;
	switch (iParam1)
	{
		case 1:
			*uParam2 = joaat("xm_prop_x17_para_sp_s");
			*uParam3 = iParam0;
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 0;
					break;
				case 1:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 1;
					break;
				case 2:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 2;
					break;
				case 3:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 3;
					break;
				case 4:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 4;
					break;
				case 5:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 5;
					break;
				case 6:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 6;
					break;
				case 7:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 7;
					break;
				case 8:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 8;
					break;
				case 9:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 9;
					break;
				case 10:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 10;
					break;
				case 11:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 11;
					break;
				case 12:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 12;
					break;
				case 13:
					*uParam2 = joaat("lts_p_para_pilot2_sp_s");
					*uParam3 = 13;
					break;
				case 14:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 1;
					break;
				case 15:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 2;
					break;
				case 16:
					*uParam2 = joaat("tr_prop_tr_para_sp_s_01a");
					*uParam3 = 3;
					break;
				case 17:
					*uParam2 = joaat("reh_prop_reh_para_sp_s_01a");
					*uParam3 = 1;
					break;
			}
			break;
	}
	return *uParam2 != 0;
}

bool func_717()//Position - 0x14585
{
	return Global_2788198;
}

int func_718()//Position - 0x1459D
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

Vector3 func_719(int iParam0)//Position - 0x1557E
{
	switch (iParam0)
	{
		case 102:
			return 750.5f, -1322.3f, 26.2802f;
		case 103:
			return 331.9f, -974.9f, 30f;
		case 104:
			return -146f, -1270f, 28.3088f;
		case 105:
			return -17.7f, 225.7f, 106.7566f;
		case 106:
			return 894.4f, -2106.4f, 29.4768f;
		case 107:
			return -668f, -2431.5f, 12.9444f;
		case 108:
			return 213.4f, -3166.6f, 4.7903f;
		case 109:
			return 366.6f, 237.6f, 104.9f;
		case 110:
			return -1275.3f, -666.8f, 25.6332f;
		case 111:
			return -1188.8f, -1156.9f, 4.6582f;
		default:
	}
	return Global_1946250.f_533[iParam0 /*3*/];
}

int func_720()//Position - 0x159EE
{
	if (BitTest(Global_1946250.f_2, 13) || Global_1946250.f_3281)
	{
		return 1;
	}
	return 0;
}

int func_721(int iParam0)//Position - 0x15D4A
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_191[5 /*13*/];
}

Vector3 func_722(int iParam0)//Position - 0x15EE6
{
	int iVar0;
	switch (HUD::GET_BLIP_INFO_ID_TYPE(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return ENTITY::GET_ENTITY_COORDS(iVar0, false);
			}
			break;
	}
	return HUD::GET_BLIP_COORDS(iParam0);
}

int func_723(int iParam0, int iParam1)//Position - 0x16756
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_724(var uParam0, bool bParam1, bool bParam2)//Position - 0x167C0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

bool func_725(int iParam0)//Position - 0x171AC
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11);
}

int func_726(int iParam0)//Position - 0x172CC
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
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
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
		case 291:
		case 292:
		case 293:
		case 294:
		case 295:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
			return 0;
		case 276:
		case 267:
			return 3;
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		case 148:
		case 179:
			return 2;
		default:
	}
	return -1;
}

bool func_727(int iParam0, int iParam1)//Position - 0x1774E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

bool func_728(int iParam0)//Position - 0x1965B
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

bool func_729()//Position - 0x1969A
{
	return Global_4718592.f_1 == 0;
}

int func_730()//Position - 0x19BE7
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_731(int iParam0)//Position - 0x1A680
{
	return BitTest(Global_2815059.f_5195.f_47, iParam0);
}

int func_732(int iParam0)//Position - 0x1A79B
{
	int iVar0;
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_733()//Position - 0x1B2F3
{
	Global_2815059.f_4599 = 0;
}

bool func_734()//Position - 0x1B43C
{
	return BitTest(Global_2815059.f_5033, 0);
}

bool func_735()//Position - 0x1B55D
{
	return BitTest(Global_2714762.f_2, 27);
}

var func_736()//Position - 0x1B5BB
{
	return BitTest(Global_2714762, 5);
}

void func_737()//Position - 0x1C3EC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_714), &(Global_2667225.f_1233), 519);
	Global_2667225.f_490 = { Global_2667225.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		Global_2667225.f_1752 = 0;
	}
}

int func_738()//Position - 0x1C434
{
	if ((Global_2667225.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

int func_739()//Position - 0x1C545
{
	if ((Global_2667225.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_740()//Position - 0x1C5A9
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2667225.f_2263[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667225.f_2262 = 0;
}

void func_741(var uParam0)//Position - 0x204E
{
	__LIB_1__::func_257(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_742(var uParam0)//Position - 0x221D
{
	if (__LIB_1__::func_260(uParam0->f_1))
	{
		uParam0->f_72 = __LIB_1__::func_259();
	}
}

int func_743(int iParam0, int iParam1)//Position - 0x2991
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_1__::func_261(iParam1, iParam0, 4);
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

int func_744(bool bParam0)//Position - 0x2DF7
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__::getMinusOneOrNull())
		{
			return Global_1892703[bParam0 /*599*/].f_10 == bParam0;
		}
	}
	return 0;
}

void func_745(int iParam0)//Position - 0x6280
{
	if (__LIB_0__::func_109())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		__LIB_1__::func_69(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_746(int iParam0, int iParam1, int iParam2)//Position - 0x749F
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(iParam0, __LIB_1__::func_27(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!__LIB_0__::func_969(iParam0))
	{
		__LIB_1__::func_354(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		__LIB_1__::func_364(iParam0, iVar0, iParam2, 1);
	}
}

int func_747(int iParam0)//Position - 0x7A5F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > __LIB_1__::func_335(PLAYER::PLAYER_ID()))
		{
			iParam0 = -__LIB_1__::func_335(PLAYER::PLAYER_ID());
		}
	}
	if (__LIB_1__::func_68(8000, 0, 0) > 0)
	{
		if (__LIB_1__::func_68(8000, 0, 0) < (iParam0 + __LIB_1__::func_335(PLAYER::PLAYER_ID())))
		{
			iParam0 = (__LIB_1__::func_68(8000, 0, 0) - __LIB_1__::func_335(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_748(int iParam0)//Position - 0x7BC5
{
	return __LIB_1__::func_77(__LIB_0__::func_492(iParam0));
}

bool func_749()//Position - 0x7C14
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_0__::func_177();
	}
	return __LIB_1__::func_78(Global_4718592.f_116524);
}

int func_750(int iParam0)//Position - 0x925B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			__LIB_1__::func_444(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_751()//Position - 0x9E77
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_752(int iParam0)//Position - 0xA101
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !__LIB_1__::func_515())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

int func_753(int iParam0)//Position - 0x1540E
{
	int iVar0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		iVar0 = __LIB_1__::func_638(iParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__::func_639(iVar0);
		}
	}
	return -1;
}

int func_754(int iParam0)//Position - 0x158E7
{
	int iVar0;
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return -1;
	}
	iVar0 = __LIB_1__::func_652(iParam0);
	if (!iVar0 == 0)
	{
		return __LIB_1__::func_651(iVar0);
	}
	return -1;
}

int func_755()//Position - 0x1A859
{
	if (__LIB_1__::func_112())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

int func_756()//Position - 0x1B56E
{
	if (__LIB_0__::func_626() || __LIB_1__::func_585())
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_95 == 8;
	}
	return 0;
}

int func_757(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x261F
{
	int iVar0;
	iVar0 = __LIB_1__::func_261(iParam0, iParam1, iParam3);
	if (__LIB_0__::func_996(Global_4718592.f_116524, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			case 3:
				return 31;
			case 4:
				return 32;
			case 5:
				return 33;
			case 6:
				return 34;
			case 7:
				return 35;
			case 8:
				return 36;
			case 9:
				return 37;
			case 10:
				return 38;
			case 11:
				return 39;
			case 12:
				return 40;
			case 13:
				return 41;
			case 14:
				return 42;
			case 15:
				return 43;
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			case 1:
				return 29;
			case 2:
				return 30;
			}
		default:
	}
	return 28;
}

int func_758()//Position - 0x2E2C
{
	if ((((((__LIB_0__::func_848() || __LIB_0__::func_188()) || __LIB_0__::func_177()) || __LIB_1__::func_2()) || __LIB_0__::func_622()) || __LIB_0__::func_447()) || __LIB_1__::func_263())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

void func_759(int iParam0, int iParam1, int iParam2)//Position - 0x65C0
{
	if (__LIB_0__::func_109())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 /* Tunable: TURN_OFF_RP_REDUCED_BLOCKER */ == 0 && iParam1 != joaat("XPCATEGORY_KEYS_DEBUG"))
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[__LIB_1__::func_27(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR"), iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[__LIB_1__::func_27(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 /* Tunable: TURN_OFF_RP_RESET_TELEMETRY */ == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, joaat("XPTYPE_ERROR_NEGATIVE"), iParam1);
				return;
			}
		}
		if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = __LIB_1__::func_74(iParam0, 1);
		}
		__LIB_1__::func_364(640, iParam0, -1, 1);
		__LIB_1__::func_354(641, __LIB_1__::func_74(iParam0, 1), -1, 1, 0);
		Global_1659759[__LIB_1__::func_27(-1)] = iParam0;
		__LIB_1__::func_333(-1109644434, 7, 0);
	}
}

float func_760(char* sParam0)//Position - 0x26C8
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_761(int iParam0)//Position - 0x2810
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

bool func_762(int iParam0, int iParam1)//Position - 0x296C
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

void func_763(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x312E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_764(int iParam0, bool bParam1)//Position - 0x33B8
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_765(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3443
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_766(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3482
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_767(char* sParam0)//Position - 0x3587
{
	int iVar0;
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

bool func_768(var uParam0)//Position - 0x3C09
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

int func_769()//Position - 0xBCD4
{
	return Global_1920255;
}

int func_770(int iParam0)//Position - 0xBD44
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

int func_771(int iParam0)//Position - 0xC711
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
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
		default:
	}
	return 0;
}

bool func_772(int iParam0)//Position - 0xCAFE
{
	return iParam0 == 49;
}

int func_773(int iParam0)//Position - 0xCB0B
{
	switch (iParam0)
	{
		case 0:
			return 156;
		case 2:
			return 223;
		case 1:
			return 224;
		case 3:
			return 278;
		default:
	}
	return -1;
}

int func_774(int iParam0, bool bParam1)//Position - 0xCBBA
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("halftrack"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("vigilante"):
		case joaat("barrage"):
		case joaat("menacer"):
		case joaat("scramjet"):
			return 1;
			break;
		case joaat("oppressor2"):
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_775(int iParam0, int iParam1, bool bParam2)//Position - 0xCC33
{
	if (Global_262145.f_10629 /* Tunable: MPSV_DISABLE_DISPLAY_SLOTS */)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1940666[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

Vector3 func_776(int iParam0)//Position - 0xD6C6
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

int func_777()//Position - 0xD6DA
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

int func_778(int iParam0)//Position - 0xD6F4
{
	if (iParam0 > -1 && iParam0 < 42)
	{
		return 1;
	}
	return 0;
}

int func_779(int iParam0, int iParam1)//Position - 0xD848
{
	if ((Global_4282659[iParam0 /*10*/].f_6 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_780(int iParam0)//Position - 0xD866
{
	return Global_2683918[iParam0 /*3*/];
}

bool func_781(int iParam0)//Position - 0xD876
{
	return Global_2689235[iParam0 /*453*/].f_269;
}

int func_782(int iParam0)//Position - 0x103AD
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (!__LIB_1__::func_20(iParam0))
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

int func_783(int iParam0)//Position - 0x1126C
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_0__::func_156(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_172(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_784(int iParam0, bool bParam1)//Position - 0x114D5
{
	if (__LIB_0__::func_156(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2689235[iParam0 /*453*/].f_269.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2689235[iParam0 /*453*/].f_269.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_785(int iParam0)//Position - 0x115CE
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_786(int iParam0)//Position - 0x1163C
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_0__::func_156(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__::func_172(Global_2689235[iParam0 /*453*/].f_318.f_6) == 4;
			}
		}
	}
	return 0;
}

bool func_787()//Position - 0x11C29
{
	return __LIB_0__::func_137(22067, -1);
}

int func_788(int iParam0)//Position - 0x11F31
{
	switch (iParam0)
	{
		case 0:
			return 6541;
			break;
		case 1:
			return 6543;
			break;
		case 2:
			return 6544;
			break;
		case 3:
			return 6545;
			break;
		case 4:
			return 6546;
			break;
		case 5:
			return 6547;
			break;
	}
	return 13122;
}

void func_789(char* sParam0, int iParam1, int iParam2)//Position - 0x1201A
{
	int iVar0;
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = MISC::GET_GAME_TIMER();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

bool func_790()//Position - 0x120D3
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 253 /*INPUT_CREATOR_RT*/) && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 252 /*INPUT_CREATOR_LT*/));
	}
	return (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/));
}

void func_791(int iParam0, char* sParam1, int iParam2)//Position - 0x1235A
{
	char* sVar0;
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_792(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x12409
{
	char* sVar0;
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	}
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

int func_793(int iParam0)//Position - 0x127F5
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_794(int iParam0)//Position - 0x12916
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 4;
		case 4:
			return 2;
		case 5:
			return 0;
		case 6:
			return 3;
		case 7:
			return 1;
		case 8:
			return 4;
		case 9:
			return 2;
		case 10:
			return 0;
		case 11:
			return 3;
		case 12:
			return 1;
		case 13:
			return 4;
		case 14:
			return 2;
		case 15:
			return 0;
		case 16:
			return 3;
		case 17:
			return 1;
		case 18:
			return 4;
		case 19:
			return 2;
		case 20:
			return 0;
		case 21:
			return 5;
		case 22:
			return 5;
		case 23:
			return 5;
		case 24:
			return 5;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 5;
		case 28:
			return 5;
		case 29:
			return 5;
		case 30:
			return 5;
		case 31:
			return 5;
		default:
	}
	return -1;
}

bool func_795(int iParam0)//Position - 0x13C12
{
	return __LIB_1__::func_472(iParam0, 16);
}

bool func_796(int iParam0)//Position - 0x166FB
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 22);
}

int func_797(int iParam0)//Position - 0x16DE7
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_465 != 0;
	}
	return 0;
}

int func_798()//Position - 0x19914
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_303;
}

int func_799()//Position - 0x19BDE
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_302;
}

bool setGlobal_1575016_10()//Position - 0x1A01B
{
	return Global_1575016 == 10;
}

int func_801(int iParam0)//Position - 0x1A550
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (((((BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 2) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 3)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 5)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 7)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_802(int iParam0)//Position - 0x1AC84
{
	return __LIB_0__::func_275(iParam0, 1);
}

int func_803(int iParam0)//Position - 0x1BC05
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		default:
	}
	return 0;
}

int func_804(int iParam0)//Position - 0x1C093
{
	return 4;
}

int func_805(int iParam0)//Position - 0x1C79D
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		default:
	}
	return 0;
}

int func_806(var uParam0, int iParam1)//Position - 0x1E821
{
	return 2;
}

bool func_807(int iParam0)//Position - 0x220DB
{
	return __LIB_1__::func_472(iParam0, 11);
}

bool func_808(int iParam0)//Position - 0x220EB
{
	return __LIB_1__::func_472(iParam0, 9);
}

bool func_809(int iParam0)//Position - 0x22149
{
	return __LIB_1__::func_472(iParam0, 7);
}

int func_810(int iParam0)//Position - 0x2602C
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		case joaat("boxville5"):
			return 1;
			break;
		case joaat("wastelander"):
			return 2;
			break;
		case joaat("phantom2"):
			return 3;
			break;
		case joaat("voltic2"):
			return 4;
			break;
		case joaat("dune4"):
			return 5;
			break;
		case joaat("dune5"):
			return 5;
			break;
		case joaat("ruiner2"):
			return 6;
			break;
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_811(int iParam0, int iParam1)//Position - 0x293D0
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				case 1:
					return 1637;
				case 2:
					return 1644;
				case 3:
					return 1651;
				case 4:
					return 1658;
				case 5:
					return 1665;
				case 6:
					return 1672;
				case 7:
					return 1679;
				case 8:
					return 1686;
				case 9:
					return 1693;
				case 10:
					return 1700;
				case 11:
					return 1706;
				case 12:
					return 1712;
				case 13:
					return 1718;
				case 14:
					return 1797;
				case 15:
					return 1804;
				case 16:
					return 1811;
				case 17:
					return 1818;
				case 18:
					return 1825;
				case 19:
					return 1832;
				case 20:
					return 1839;
				case 21:
					return 1846;
				case 22:
					return 1853;
				case 23:
					return 1860;
				case 24:
					return 1866;
				case 25:
					return 1872;
				case 26:
					return 2167;
				case 27:
					return 2174;
				case 28:
					return 2181;
				case 29:
					return 2188;
				case 30:
					return 2195;
				case 31:
					return 2202;
				case 32:
					return 2209;
				case 33:
					return 2216;
				case 34:
					return 2223;
				case 35:
					return 2230;
				case 36:
					return 2237;
				case 37:
					return 2243;
				case 38:
					return 2249;
				case 39:
					return 2831;
				case 40:
					return 2838;
				case 41:
					return 2845;
				case 42:
					return 2852;
				case 43:
					return 2859;
				case 44:
					return 2866;
				case 45:
					return 2873;
				case 46:
					return 2880;
				case 47:
					return 2887;
				case 48:
					return 2894;
				case 49:
					return 2901;
				case 50:
					return 2907;
				case 51:
					return 2913;
				case 52:
					return 2955;
				case 53:
					return 2962;
				case 54:
					return 2969;
				case 55:
					return 2976;
				case 56:
					return 2983;
				case 57:
					return 2990;
				case 58:
					return 2997;
				case 59:
					return 3004;
				case 60:
					return 3011;
				case 61:
					return 3018;
				case 62:
					return 3025;
				case 63:
					return 3031;
				case 64:
					return 3037;
				case 65:
					return 3238;
				case 66:
					return 3246;
				case 67:
					return 3254;
				case 68:
					return 3262;
				case 69:
					return 3270;
				case 70:
					return 3278;
				case 71:
					return 3286;
				case 72:
					return 3294;
				case 73:
					return 3302;
				case 74:
					return 3310;
				case 75:
					return 3318;
				case 76:
					return 3326;
				case 77:
					return 3334;
				case 78:
					return 3342;
				case 79:
					return 3350;
				case 80:
					return 3358;
				case 81:
					return 3366;
				case 82:
					return 3374;
				case 83:
					return 3382;
				case 84:
					return 3390;
				case 85:
					return 3398;
				case 86:
					return 3405;
				case 87:
					return 3412;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				case 89:
					return 4042;
				case 90:
					return 4050;
				case 91:
					return 4058;
				case 92:
					return 4066;
				case 93:
					return 4074;
				case 94:
					return 4082;
				case 95:
					return 4090;
				case 96:
					return 4098;
				case 97:
					return 4106;
				case 98:
					return 4114;
				case 99:
					return 4122;
				case 100:
					return 4130;
				case 101:
					return 4138;
				case 102:
					return 4146;
				case 103:
					return 4154;
				case 104:
					return 4162;
				case 105:
					return 4170;
				case 106:
					return 4178;
				case 107:
					return 4186;
				case 108:
					return 4194;
				case 109:
					return 4202;
				case 110:
					return 4210;
				case 111:
					return 4218;
				case 112:
					return 4226;
				case 113:
					return 4234;
				case 114:
					return 4242;
				case 115:
					return 4250;
				case 116:
					return 4258;
				case 117:
					return 4266;
				case 118:
					return 4274;
				case 119:
					return 4282;
				case 120:
					return 4290;
				case 121:
					return 4298;
				case 122:
					return 4306;
				case 123:
					return 4314;
				case 124:
					return 4322;
				case 125:
					return 4330;
				case 126:
					return 4338;
				case 127:
					return 4346;
				case 128:
					return 4354;
				case 129:
					return 4362;
				case 130:
					return 4370;
				case 131:
					return 4378;
				case 132:
					return 4386;
				case 133:
					return 4394;
				case 134:
					return 4402;
				case 135:
					return 4410;
				case 136:
					return 4418;
				case 137:
					return 4426;
				case 138:
					return 4434;
				case 139:
					return 4442;
				case 140:
					return 4450;
				case 141:
					return 4458;
				case 142:
					return 4466;
				case 143:
					return 4474;
				case 144:
					return 4482;
				case 145:
					return 4490;
				case 146:
					return 4498;
				case 147:
					return 4506;
				case 148:
					return 4514;
				case 149:
					return 4522;
				case 150:
					return 4530;
				case 151:
					return 4538;
				case 152:
					return 4546;
				case 153:
					return 4554;
				case 154:
					return 4562;
				case 155:
					return 4570;
				case 156:
					return 4578;
				case 157:
					return 4586;
				case 158:
					return 5479;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				case 160:
					return 5935;
				case 161:
					return 5942;
				case 162:
					return 5949;
				case 163:
					return 5956;
				case 164:
					return 5963;
				case 165:
					return 5970;
				case 166:
					return 5977;
				case 167:
					return 5984;
				case 168:
					return 5991;
				case 169:
					return 5998;
				case 170:
					return 6005;
				case 171:
					return 6012;
				case 172:
					return 6019;
				case 173:
					return 6026;
				case 174:
					return 6033;
				case 175:
					return 6040;
				case 176:
					return 6047;
				case 177:
					return 6054;
				case 178:
					return 6061;
				case 179:
					return 6068;
				case 180:
					return 6075;
				case 181:
					return 6082;
				case 182:
					return 6089;
				case 183:
					return 6096;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				case 185:
					return 6180;
				case 186:
					return 6187;
				case 187:
					return 6194;
				case 188:
					return 6201;
				case 189:
					return 6208;
				case 190:
					return 6215;
				case 191:
					return 6222;
				case 192:
					return 6229;
				case 193:
					return 6236;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				case 195:
					return 6577;
				case 196:
					return 6584;
				case 197:
					return 6591;
				case 198:
					return 6598;
				case 199:
					return 6605;
				case 200:
					return 6612;
				case 201:
					return 6619;
				case 202:
					return 6626;
				case 203:
					return 6633;
				case 204:
					return 6640;
				case 205:
					return 6647;
				case 206:
					return 6654;
				case 207:
					return 6661;
				case 208:
					return 6668;
				case 209:
					return 6675;
				case 210:
					return 6682;
				case 211:
					return 6689;
				case 212:
					return 6696;
				case 213:
					return 6703;
				case 214:
					return 6710;
				case 215:
					return 6717;
				case 216:
					return 6724;
				case 217:
					return 6731;
				case 218:
					return 6738;
				case 219:
					return 6745;
				case 220:
					return 6752;
				case 221:
					return 6759;
				case 222:
					return 6766;
				case 223:
					return 6773;
				case 224:
					return 6780;
				case 225:
					return 6787;
				case 226:
					return 6794;
				case 227:
					return 6801;
				case 228:
					return 6808;
				case 229:
					return 6815;
				case 230:
					return 6822;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				case 232:
					return 7299;
				case 233:
					return 7306;
				case 234:
					return 7313;
				case 235:
					return 7320;
				case 236:
					return 7327;
				case 237:
					return 7334;
				case 238:
					return 7341;
				case 239:
					return 7348;
				case 240:
					return 7355;
				case 241:
					return 7362;
				case 242:
					return 7369;
				case 243:
					return 7376;
				case 244:
					return 7383;
				case 245:
					return 7390;
				case 246:
					return 7397;
				case 247:
					return 7404;
				case 248:
					return 7411;
				case 249:
					return 7418;
				case 250:
					return 7425;
				case 251:
					return 7432;
				case 252:
					return 7439;
				case 253:
					return 7446;
				case 254:
					return 7453;
				case 255:
					return 7460;
				case 256:
					return 7467;
				case 257:
					return 7474;
				case 258:
					return 7481;
				case 259:
					return 7488;
				case 260:
					return 7495;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				case 262:
					return 8022;
				case 263:
					return 8029;
				case 264:
					return 8036;
				case 265:
					return 8043;
				case 266:
					return 8050;
				case 267:
					return 8057;
				case 268:
					return 8064;
				case 269:
					return 8071;
				case 270:
					return 8078;
				case 271:
					return 8539;
				case 272:
					return 8546;
				case 273:
					return 8553;
				case 274:
					return 8560;
				case 275:
					return 8567;
				case 276:
					return 8574;
				case 277:
					return 8581;
				case 278:
					return 8588;
				case 279:
					return 8595;
				case 280:
					return 8602;
				case 281:
					return 8986;
				case 282:
					return 8993;
				case 283:
					return 9000;
				case 284:
					return 9007;
				case 285:
					return 9014;
				case 286:
					return 9021;
				case 287:
					return 9028;
				case 288:
					return 9035;
				case 289:
					return 9042;
				case 290:
					return 9049;
				case 291:
					return 9056;
				case 292:
					return 9062;
				case 293:
					return 9068;
				case 294:
					return 9074;
				case 295:
					return 9081;
				case 296:
					return 9088;
				case 297:
					return 9095;
				case 298:
					return 9102;
				case 299:
					return 9109;
				case 300:
					return 9116;
				case 301:
					return 9123;
				case 302:
					return 9130;
				case 303:
					return 9137;
				case 304:
					return 9144;
				case 305:
					return 9150;
				case 306:
					return 9156;
				case 307:
					return 9637;
				case 308:
					return 9644;
				case 309:
					return 9651;
				case 310:
					return 9658;
				case 311:
					return 9665;
				case 312:
					return 9672;
				case 313:
					return 9679;
				case 314:
					return 9686;
				case 315:
					return 9693;
				case 316:
					return 9700;
				case 317:
					return 9921;
				case 318:
					return 9928;
				case 319:
					return 9935;
				case 320:
					return 9942;
				case 321:
					return 9949;
				case 322:
					return 9956;
				case 323:
					return 9963;
				case 324:
					return 9970;
				case 325:
					return 9977;
				case 326:
					return 9984;
				case 327:
					return 9991;
				case 328:
					return 9998;
				case 329:
					return 10005;
				case 330:
					return 10012;
				case 331:
					return 10019;
				case 332:
					return 10026;
				case 333:
					return 10033;
				case 334:
					return 10040;
				case 335:
					return 10047;
				case 336:
					return 10054;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10447;
				case 338:
					return 10454;
				case 339:
					return 10461;
				case 340:
					return 10468;
				case 341:
					return 10475;
				case 342:
					return 10482;
				case 343:
					return 10489;
				case 344:
					return 10496;
				case 345:
					return 10503;
				case 346:
					return 10510;
				case 347:
					return 10517;
				case 348:
					return 10523;
				case 349:
					return 10529;
				case 350:
					return 10535;
				case 351:
					return 10542;
				case 352:
					return 10549;
				case 353:
					return 10556;
				case 354:
					return 10563;
				case 355:
					return 10570;
				case 356:
					return 10577;
				case 357:
					return 10584;
				case 358:
					return 10591;
				case 359:
					return 10598;
				case 360:
					return 10605;
				case 361:
					return 10611;
				case 362:
					return 10617;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				case 1:
					return 1638;
				case 2:
					return 1645;
				case 3:
					return 1652;
				case 4:
					return 1659;
				case 5:
					return 1666;
				case 6:
					return 1673;
				case 7:
					return 1680;
				case 8:
					return 1687;
				case 9:
					return 1694;
				case 10:
					return 1701;
				case 11:
					return 1707;
				case 12:
					return 1713;
				case 13:
					return 1719;
				case 14:
					return 1798;
				case 15:
					return 1805;
				case 16:
					return 1812;
				case 17:
					return 1819;
				case 18:
					return 1826;
				case 19:
					return 1833;
				case 20:
					return 1840;
				case 21:
					return 1847;
				case 22:
					return 1854;
				case 23:
					return 1861;
				case 24:
					return 1867;
				case 25:
					return 1873;
				case 26:
					return 2168;
				case 27:
					return 2175;
				case 28:
					return 2182;
				case 29:
					return 2189;
				case 30:
					return 2196;
				case 31:
					return 2203;
				case 32:
					return 2210;
				case 33:
					return 2217;
				case 34:
					return 2224;
				case 35:
					return 2231;
				case 36:
					return 2238;
				case 37:
					return 2244;
				case 38:
					return 2250;
				case 39:
					return 2832;
				case 40:
					return 2839;
				case 41:
					return 2846;
				case 42:
					return 2853;
				case 43:
					return 2860;
				case 44:
					return 2867;
				case 45:
					return 2874;
				case 46:
					return 2881;
				case 47:
					return 2888;
				case 48:
					return 2895;
				case 49:
					return 2902;
				case 50:
					return 2908;
				case 51:
					return 2914;
				case 52:
					return 2956;
				case 53:
					return 2963;
				case 54:
					return 2970;
				case 55:
					return 2977;
				case 56:
					return 2984;
				case 57:
					return 2991;
				case 58:
					return 2998;
				case 59:
					return 3005;
				case 60:
					return 3012;
				case 61:
					return 3019;
				case 62:
					return 3026;
				case 63:
					return 3032;
				case 64:
					return 3038;
				case 65:
					return 3239;
				case 66:
					return 3247;
				case 67:
					return 3255;
				case 68:
					return 3263;
				case 69:
					return 3271;
				case 70:
					return 3279;
				case 71:
					return 3287;
				case 72:
					return 3295;
				case 73:
					return 3303;
				case 74:
					return 3311;
				case 75:
					return 3319;
				case 76:
					return 3327;
				case 77:
					return 3335;
				case 78:
					return 3343;
				case 79:
					return 3351;
				case 80:
					return 3359;
				case 81:
					return 3367;
				case 82:
					return 3375;
				case 83:
					return 3383;
				case 84:
					return 3391;
				case 85:
					return 3399;
				case 86:
					return 3406;
				case 87:
					return 3413;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				case 89:
					return 4043;
				case 90:
					return 4051;
				case 91:
					return 4059;
				case 92:
					return 4067;
				case 93:
					return 4075;
				case 94:
					return 4083;
				case 95:
					return 4091;
				case 96:
					return 4099;
				case 97:
					return 4107;
				case 98:
					return 4115;
				case 99:
					return 4123;
				case 100:
					return 4131;
				case 101:
					return 4139;
				case 102:
					return 4147;
				case 103:
					return 4155;
				case 104:
					return 4163;
				case 105:
					return 4171;
				case 106:
					return 4179;
				case 107:
					return 4187;
				case 108:
					return 4195;
				case 109:
					return 4203;
				case 110:
					return 4211;
				case 111:
					return 4219;
				case 112:
					return 4227;
				case 113:
					return 4235;
				case 114:
					return 4243;
				case 115:
					return 4251;
				case 116:
					return 4259;
				case 117:
					return 4267;
				case 118:
					return 4275;
				case 119:
					return 4283;
				case 120:
					return 4291;
				case 121:
					return 4299;
				case 122:
					return 4307;
				case 123:
					return 4315;
				case 124:
					return 4323;
				case 125:
					return 4331;
				case 126:
					return 4339;
				case 127:
					return 4347;
				case 128:
					return 4355;
				case 129:
					return 4363;
				case 130:
					return 4371;
				case 131:
					return 4379;
				case 132:
					return 4387;
				case 133:
					return 4395;
				case 134:
					return 4403;
				case 135:
					return 4411;
				case 136:
					return 4419;
				case 137:
					return 4427;
				case 138:
					return 4435;
				case 139:
					return 4443;
				case 140:
					return 4451;
				case 141:
					return 4459;
				case 142:
					return 4467;
				case 143:
					return 4475;
				case 144:
					return 4483;
				case 145:
					return 4491;
				case 146:
					return 4499;
				case 147:
					return 4507;
				case 148:
					return 4515;
				case 149:
					return 4523;
				case 150:
					return 4531;
				case 151:
					return 4539;
				case 152:
					return 4547;
				case 153:
					return 4555;
				case 154:
					return 4563;
				case 155:
					return 4571;
				case 156:
					return 4579;
				case 157:
					return 4587;
				case 158:
					return 5480;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				case 160:
					return 5936;
				case 161:
					return 5943;
				case 162:
					return 5950;
				case 163:
					return 5957;
				case 164:
					return 5964;
				case 165:
					return 5971;
				case 166:
					return 5978;
				case 167:
					return 5985;
				case 168:
					return 5992;
				case 169:
					return 5999;
				case 170:
					return 6006;
				case 171:
					return 6013;
				case 172:
					return 6020;
				case 173:
					return 6027;
				case 174:
					return 6034;
				case 175:
					return 6041;
				case 176:
					return 6048;
				case 177:
					return 6055;
				case 178:
					return 6062;
				case 179:
					return 6069;
				case 180:
					return 6076;
				case 181:
					return 6083;
				case 182:
					return 6090;
				case 183:
					return 6097;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				case 185:
					return 6181;
				case 186:
					return 6188;
				case 187:
					return 6195;
				case 188:
					return 6202;
				case 189:
					return 6209;
				case 190:
					return 6216;
				case 191:
					return 6223;
				case 192:
					return 6230;
				case 193:
					return 6237;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				case 195:
					return 6578;
				case 196:
					return 6585;
				case 197:
					return 6592;
				case 198:
					return 6599;
				case 199:
					return 6606;
				case 200:
					return 6613;
				case 201:
					return 6620;
				case 202:
					return 6627;
				case 203:
					return 6634;
				case 204:
					return 6641;
				case 205:
					return 6648;
				case 206:
					return 6655;
				case 207:
					return 6662;
				case 208:
					return 6669;
				case 209:
					return 6676;
				case 210:
					return 6683;
				case 211:
					return 6690;
				case 212:
					return 6697;
				case 213:
					return 6704;
				case 214:
					return 6711;
				case 215:
					return 6718;
				case 216:
					return 6725;
				case 217:
					return 6732;
				case 218:
					return 6739;
				case 219:
					return 6746;
				case 220:
					return 6753;
				case 221:
					return 6760;
				case 222:
					return 6767;
				case 223:
					return 6774;
				case 224:
					return 6781;
				case 225:
					return 6788;
				case 226:
					return 6795;
				case 227:
					return 6802;
				case 228:
					return 6809;
				case 229:
					return 6816;
				case 230:
					return 6823;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				case 232:
					return 7300;
				case 233:
					return 7307;
				case 234:
					return 7314;
				case 235:
					return 7321;
				case 236:
					return 7328;
				case 237:
					return 7335;
				case 238:
					return 7342;
				case 239:
					return 7349;
				case 240:
					return 7356;
				case 241:
					return 7363;
				case 242:
					return 7370;
				case 243:
					return 7377;
				case 244:
					return 7384;
				case 245:
					return 7391;
				case 246:
					return 7398;
				case 247:
					return 7405;
				case 248:
					return 7412;
				case 249:
					return 7419;
				case 250:
					return 7426;
				case 251:
					return 7433;
				case 252:
					return 7440;
				case 253:
					return 7447;
				case 254:
					return 7454;
				case 255:
					return 7461;
				case 256:
					return 7468;
				case 257:
					return 7475;
				case 258:
					return 7482;
				case 259:
					return 7489;
				case 260:
					return 7496;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				case 262:
					return 8023;
				case 263:
					return 8030;
				case 264:
					return 8037;
				case 265:
					return 8044;
				case 266:
					return 8051;
				case 267:
					return 8058;
				case 268:
					return 8065;
				case 269:
					return 8072;
				case 270:
					return 8079;
				case 271:
					return 8540;
				case 272:
					return 8547;
				case 273:
					return 8554;
				case 274:
					return 8561;
				case 275:
					return 8568;
				case 276:
					return 8575;
				case 277:
					return 8582;
				case 278:
					return 8589;
				case 279:
					return 8596;
				case 280:
					return 8603;
				case 281:
					return 8987;
				case 282:
					return 8994;
				case 283:
					return 9001;
				case 284:
					return 9008;
				case 285:
					return 9015;
				case 286:
					return 9022;
				case 287:
					return 9029;
				case 288:
					return 9036;
				case 289:
					return 9043;
				case 290:
					return 9050;
				case 291:
					return 9057;
				case 292:
					return 9063;
				case 293:
					return 9069;
				case 294:
					return 9075;
				case 295:
					return 9082;
				case 296:
					return 9089;
				case 297:
					return 9096;
				case 298:
					return 9103;
				case 299:
					return 9110;
				case 300:
					return 9117;
				case 301:
					return 9124;
				case 302:
					return 9131;
				case 303:
					return 9138;
				case 304:
					return 9145;
				case 305:
					return 9151;
				case 306:
					return 9157;
				case 307:
					return 9638;
				case 308:
					return 9645;
				case 309:
					return 9652;
				case 310:
					return 9659;
				case 311:
					return 9666;
				case 312:
					return 9673;
				case 313:
					return 9680;
				case 314:
					return 9687;
				case 315:
					return 9694;
				case 316:
					return 9701;
				case 317:
					return 9922;
				case 318:
					return 9929;
				case 319:
					return 9936;
				case 320:
					return 9943;
				case 321:
					return 9950;
				case 322:
					return 9957;
				case 323:
					return 9964;
				case 324:
					return 9971;
				case 325:
					return 9978;
				case 326:
					return 9985;
				case 327:
					return 9992;
				case 328:
					return 9999;
				case 329:
					return 10006;
				case 330:
					return 10013;
				case 331:
					return 10020;
				case 332:
					return 10027;
				case 333:
					return 10034;
				case 334:
					return 10041;
				case 335:
					return 10048;
				case 336:
					return 10055;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10448;
				case 338:
					return 10455;
				case 339:
					return 10462;
				case 340:
					return 10469;
				case 341:
					return 10476;
				case 342:
					return 10483;
				case 343:
					return 10490;
				case 344:
					return 10497;
				case 345:
					return 10504;
				case 346:
					return 10511;
				case 347:
					return 10518;
				case 348:
					return 10524;
				case 349:
					return 10530;
				case 350:
					return 10536;
				case 351:
					return 10543;
				case 352:
					return 10550;
				case 353:
					return 10557;
				case 354:
					return 10564;
				case 355:
					return 10571;
				case 356:
					return 10578;
				case 357:
					return 10585;
				case 358:
					return 10592;
				case 359:
					return 10599;
				case 360:
					return 10606;
				case 361:
					return 10612;
				case 362:
					return 10618;
				default:
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				case 1:
					return 1639;
				case 2:
					return 1646;
				case 3:
					return 1653;
				case 4:
					return 1660;
				case 5:
					return 1667;
				case 6:
					return 1674;
				case 7:
					return 1681;
				case 8:
					return 1688;
				case 9:
					return 1695;
				case 10:
					return 1702;
				case 11:
					return 1708;
				case 12:
					return 1714;
				case 13:
					return 1720;
				case 14:
					return 1799;
				case 15:
					return 1806;
				case 16:
					return 1813;
				case 17:
					return 1820;
				case 18:
					return 1827;
				case 19:
					return 1834;
				case 20:
					return 1841;
				case 21:
					return 1848;
				case 22:
					return 1855;
				case 23:
					return 1862;
				case 24:
					return 1868;
				case 25:
					return 1874;
				case 26:
					return 2169;
				case 27:
					return 2176;
				case 28:
					return 2183;
				case 29:
					return 2190;
				case 30:
					return 2197;
				case 31:
					return 2204;
				case 32:
					return 2211;
				case 33:
					return 2218;
				case 34:
					return 2225;
				case 35:
					return 2232;
				case 36:
					return 2239;
				case 37:
					return 2245;
				case 38:
					return 2251;
				case 39:
					return 2833;
				case 40:
					return 2840;
				case 41:
					return 2847;
				case 42:
					return 2854;
				case 43:
					return 2861;
				case 44:
					return 2868;
				case 45:
					return 2875;
				case 46:
					return 2882;
				case 47:
					return 2889;
				case 48:
					return 2896;
				case 49:
					return 2903;
				case 50:
					return 2909;
				case 51:
					return 2915;
				case 52:
					return 2957;
				case 53:
					return 2964;
				case 54:
					return 2971;
				case 55:
					return 2978;
				case 56:
					return 2985;
				case 57:
					return 2992;
				case 58:
					return 2999;
				case 59:
					return 3006;
				case 60:
					return 3013;
				case 61:
					return 3020;
				case 62:
					return 3027;
				case 63:
					return 3033;
				case 64:
					return 3039;
				case 65:
					return 3240;
				case 66:
					return 3248;
				case 67:
					return 3256;
				case 68:
					return 3264;
				case 69:
					return 3272;
				case 70:
					return 3280;
				case 71:
					return 3288;
				case 72:
					return 3296;
				case 73:
					return 3304;
				case 74:
					return 3312;
				case 75:
					return 3320;
				case 76:
					return 3328;
				case 77:
					return 3336;
				case 78:
					return 3344;
				case 79:
					return 3352;
				case 80:
					return 3360;
				case 81:
					return 3368;
				case 82:
					return 3376;
				case 83:
					return 3384;
				case 84:
					return 3392;
				case 85:
					return 3400;
				case 86:
					return 3407;
				case 87:
					return 3414;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				case 89:
					return 4044;
				case 90:
					return 4052;
				case 91:
					return 4060;
				case 92:
					return 4068;
				case 93:
					return 4076;
				case 94:
					return 4084;
				case 95:
					return 4092;
				case 96:
					return 4100;
				case 97:
					return 4108;
				case 98:
					return 4116;
				case 99:
					return 4124;
				case 100:
					return 4132;
				case 101:
					return 4140;
				case 102:
					return 4148;
				case 103:
					return 4156;
				case 104:
					return 4164;
				case 105:
					return 4172;
				case 106:
					return 4180;
				case 107:
					return 4188;
				case 108:
					return 4196;
				case 109:
					return 4204;
				case 110:
					return 4212;
				case 111:
					return 4220;
				case 112:
					return 4228;
				case 113:
					return 4236;
				case 114:
					return 4244;
				case 115:
					return 4252;
				case 116:
					return 4260;
				case 117:
					return 4268;
				case 118:
					return 4276;
				case 119:
					return 4284;
				case 120:
					return 4292;
				case 121:
					return 4300;
				case 122:
					return 4308;
				case 123:
					return 4316;
				case 124:
					return 4324;
				case 125:
					return 4332;
				case 126:
					return 4340;
				case 127:
					return 4348;
				case 128:
					return 4356;
				case 129:
					return 4364;
				case 130:
					return 4372;
				case 131:
					return 4380;
				case 132:
					return 4388;
				case 133:
					return 4396;
				case 134:
					return 4404;
				case 135:
					return 4412;
				case 136:
					return 4420;
				case 137:
					return 4428;
				case 138:
					return 4436;
				case 139:
					return 4444;
				case 140:
					return 4452;
				case 141:
					return 4460;
				case 142:
					return 4468;
				case 143:
					return 4476;
				case 144:
					return 4484;
				case 145:
					return 4492;
				case 146:
					return 4500;
				case 147:
					return 4508;
				case 148:
					return 4516;
				case 149:
					return 4524;
				case 150:
					return 4532;
				case 151:
					return 4540;
				case 152:
					return 4548;
				case 153:
					return 4556;
				case 154:
					return 4564;
				case 155:
					return 4572;
				case 156:
					return 4580;
				case 157:
					return 4588;
				case 158:
					return 5481;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				case 160:
					return 5937;
				case 161:
					return 5944;
				case 162:
					return 5951;
				case 163:
					return 5958;
				case 164:
					return 5965;
				case 165:
					return 5972;
				case 166:
					return 5979;
				case 167:
					return 5986;
				case 168:
					return 5993;
				case 169:
					return 6000;
				case 170:
					return 6007;
				case 171:
					return 6014;
				case 172:
					return 6021;
				case 173:
					return 6028;
				case 174:
					return 6035;
				case 175:
					return 6042;
				case 176:
					return 6049;
				case 177:
					return 6056;
				case 178:
					return 6063;
				case 179:
					return 6070;
				case 180:
					return 6077;
				case 181:
					return 6084;
				case 182:
					return 6091;
				case 183:
					return 6098;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				case 185:
					return 6182;
				case 186:
					return 6189;
				case 187:
					return 6196;
				case 188:
					return 6203;
				case 189:
					return 6210;
				case 190:
					return 6217;
				case 191:
					return 6224;
				case 192:
					return 6231;
				case 193:
					return 6238;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				case 195:
					return 6579;
				case 196:
					return 6586;
				case 197:
					return 6593;
				case 198:
					return 6600;
				case 199:
					return 6607;
				case 200:
					return 6614;
				case 201:
					return 6621;
				case 202:
					return 6628;
				case 203:
					return 6635;
				case 204:
					return 6642;
				case 205:
					return 6649;
				case 206:
					return 6656;
				case 207:
					return 6663;
				case 208:
					return 6670;
				case 209:
					return 6677;
				case 210:
					return 6684;
				case 211:
					return 6691;
				case 212:
					return 6698;
				case 213:
					return 6705;
				case 214:
					return 6712;
				case 215:
					return 6719;
				case 216:
					return 6726;
				case 217:
					return 6733;
				case 218:
					return 6740;
				case 219:
					return 6747;
				case 220:
					return 6754;
				case 221:
					return 6761;
				case 222:
					return 6768;
				case 223:
					return 6775;
				case 224:
					return 6782;
				case 225:
					return 6789;
				case 226:
					return 6796;
				case 227:
					return 6803;
				case 228:
					return 6810;
				case 229:
					return 6817;
				case 230:
					return 6824;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				case 232:
					return 7301;
				case 233:
					return 7308;
				case 234:
					return 7315;
				case 235:
					return 7322;
				case 236:
					return 7329;
				case 237:
					return 7336;
				case 238:
					return 7343;
				case 239:
					return 7350;
				case 240:
					return 7357;
				case 241:
					return 7364;
				case 242:
					return 7371;
				case 243:
					return 7378;
				case 244:
					return 7385;
				case 245:
					return 7392;
				case 246:
					return 7399;
				case 247:
					return 7406;
				case 248:
					return 7413;
				case 249:
					return 7420;
				case 250:
					return 7427;
				case 251:
					return 7434;
				case 252:
					return 7441;
				case 253:
					return 7448;
				case 254:
					return 7455;
				case 255:
					return 7462;
				case 256:
					return 7469;
				case 257:
					return 7476;
				case 258:
					return 7483;
				case 259:
					return 7490;
				case 260:
					return 7497;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				case 262:
					return 8024;
				case 263:
					return 8031;
				case 264:
					return 8038;
				case 265:
					return 8045;
				case 266:
					return 8052;
				case 267:
					return 8059;
				case 268:
					return 8066;
				case 269:
					return 8073;
				case 270:
					return 8080;
				case 271:
					return 8541;
				case 272:
					return 8548;
				case 273:
					return 8555;
				case 274:
					return 8562;
				case 275:
					return 8569;
				case 276:
					return 8576;
				case 277:
					return 8583;
				case 278:
					return 8590;
				case 279:
					return 8597;
				case 280:
					return 8604;
				case 281:
					return 8988;
				case 282:
					return 8995;
				case 283:
					return 9002;
				case 284:
					return 9009;
				case 285:
					return 9016;
				case 286:
					return 9023;
				case 287:
					return 9030;
				case 288:
					return 9037;
				case 289:
					return 9044;
				case 290:
					return 9051;
				case 291:
					return 9058;
				case 292:
					return 9064;
				case 293:
					return 9070;
				case 294:
					return 9076;
				case 295:
					return 9083;
				case 296:
					return 9090;
				case 297:
					return 9097;
				case 298:
					return 9104;
				case 299:
					return 9111;
				case 300:
					return 9118;
				case 301:
					return 9125;
				case 302:
					return 9132;
				case 303:
					return 9139;
				case 304:
					return 9146;
				case 305:
					return 9152;
				case 306:
					return 9158;
				case 307:
					return 9639;
				case 308:
					return 9646;
				case 309:
					return 9653;
				case 310:
					return 9660;
				case 311:
					return 9667;
				case 312:
					return 9674;
				case 313:
					return 9681;
				case 314:
					return 9688;
				case 315:
					return 9695;
				case 316:
					return 9702;
				case 317:
					return 9923;
				case 318:
					return 9930;
				case 319:
					return 9937;
				case 320:
					return 9944;
				case 321:
					return 9951;
				case 322:
					return 9958;
				case 323:
					return 9965;
				case 324:
					return 9972;
				case 325:
					return 9979;
				case 326:
					return 9986;
				case 327:
					return 9993;
				case 328:
					return 10000;
				case 329:
					return 10007;
				case 330:
					return 10014;
				case 331:
					return 10021;
				case 332:
					return 10028;
				case 333:
					return 10035;
				case 334:
					return 10042;
				case 335:
					return 10049;
				case 336:
					return 10056;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10449;
				case 338:
					return 10456;
				case 339:
					return 10463;
				case 340:
					return 10470;
				case 341:
					return 10477;
				case 342:
					return 10484;
				case 343:
					return 10491;
				case 344:
					return 10498;
				case 345:
					return 10505;
				case 346:
					return 10512;
				case 347:
					return 10519;
				case 348:
					return 10525;
				case 349:
					return 10531;
				case 350:
					return 10537;
				case 351:
					return 10544;
				case 352:
					return 10551;
				case 353:
					return 10558;
				case 354:
					return 10565;
				case 355:
					return 10572;
				case 356:
					return 10579;
				case 357:
					return 10586;
				case 358:
					return 10593;
				case 359:
					return 10600;
				case 360:
					return 10607;
				case 361:
					return 10613;
				case 362:
					return 10619;
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				case 1:
					return 1640;
				case 2:
					return 1647;
				case 3:
					return 1654;
				case 4:
					return 1661;
				case 5:
					return 1668;
				case 6:
					return 1675;
				case 7:
					return 1682;
				case 8:
					return 1689;
				case 9:
					return 1696;
				case 10:
					return 1703;
				case 11:
					return 1709;
				case 12:
					return 1715;
				case 13:
					return 1721;
				case 14:
					return 1800;
				case 15:
					return 1807;
				case 16:
					return 1814;
				case 17:
					return 1821;
				case 18:
					return 1828;
				case 19:
					return 1835;
				case 20:
					return 1842;
				case 21:
					return 1849;
				case 22:
					return 1856;
				case 23:
					return 1863;
				case 24:
					return 1869;
				case 25:
					return 1875;
				case 26:
					return 2170;
				case 27:
					return 2177;
				case 28:
					return 2184;
				case 29:
					return 2191;
				case 30:
					return 2198;
				case 31:
					return 2205;
				case 32:
					return 2212;
				case 33:
					return 2219;
				case 34:
					return 2226;
				case 35:
					return 2233;
				case 36:
					return 2240;
				case 37:
					return 2246;
				case 38:
					return 2252;
				case 39:
					return 2834;
				case 40:
					return 2841;
				case 41:
					return 2848;
				case 42:
					return 2855;
				case 43:
					return 2862;
				case 44:
					return 2869;
				case 45:
					return 2876;
				case 46:
					return 2883;
				case 47:
					return 2890;
				case 48:
					return 2897;
				case 49:
					return 2904;
				case 50:
					return 2910;
				case 51:
					return 2916;
				case 52:
					return 2958;
				case 53:
					return 2965;
				case 54:
					return 2972;
				case 55:
					return 2979;
				case 56:
					return 2986;
				case 57:
					return 2993;
				case 58:
					return 3000;
				case 59:
					return 3007;
				case 60:
					return 3014;
				case 61:
					return 3021;
				case 62:
					return 3028;
				case 63:
					return 3034;
				case 64:
					return 3040;
				case 65:
					return 3241;
				case 66:
					return 3249;
				case 67:
					return 3257;
				case 68:
					return 3265;
				case 69:
					return 3273;
				case 70:
					return 3281;
				case 71:
					return 3289;
				case 72:
					return 3297;
				case 73:
					return 3305;
				case 74:
					return 3313;
				case 75:
					return 3321;
				case 76:
					return 3329;
				case 77:
					return 3337;
				case 78:
					return 3345;
				case 79:
					return 3353;
				case 80:
					return 3361;
				case 81:
					return 3369;
				case 82:
					return 3377;
				case 83:
					return 3385;
				case 84:
					return 3393;
				case 85:
					return 3401;
				case 86:
					return 3408;
				case 87:
					return 3415;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				case 89:
					return 4045;
				case 90:
					return 4053;
				case 91:
					return 4061;
				case 92:
					return 4069;
				case 93:
					return 4077;
				case 94:
					return 4085;
				case 95:
					return 4093;
				case 96:
					return 4101;
				case 97:
					return 4109;
				case 98:
					return 4117;
				case 99:
					return 4125;
				case 100:
					return 4133;
				case 101:
					return 4141;
				case 102:
					return 4149;
				case 103:
					return 4157;
				case 104:
					return 4165;
				case 105:
					return 4173;
				case 106:
					return 4181;
				case 107:
					return 4189;
				case 108:
					return 4197;
				case 109:
					return 4205;
				case 110:
					return 4213;
				case 111:
					return 4221;
				case 112:
					return 4229;
				case 113:
					return 4237;
				case 114:
					return 4245;
				case 115:
					return 4253;
				case 116:
					return 4261;
				case 117:
					return 4269;
				case 118:
					return 4277;
				case 119:
					return 4285;
				case 120:
					return 4293;
				case 121:
					return 4301;
				case 122:
					return 4309;
				case 123:
					return 4317;
				case 124:
					return 4325;
				case 125:
					return 4333;
				case 126:
					return 4341;
				case 127:
					return 4349;
				case 128:
					return 4357;
				case 129:
					return 4365;
				case 130:
					return 4373;
				case 131:
					return 4381;
				case 132:
					return 4389;
				case 133:
					return 4397;
				case 134:
					return 4405;
				case 135:
					return 4413;
				case 136:
					return 4421;
				case 137:
					return 4429;
				case 138:
					return 4437;
				case 139:
					return 4445;
				case 140:
					return 4453;
				case 141:
					return 4461;
				case 142:
					return 4469;
				case 143:
					return 4477;
				case 144:
					return 4485;
				case 145:
					return 4493;
				case 146:
					return 4501;
				case 147:
					return 4509;
				case 148:
					return 4517;
				case 149:
					return 4525;
				case 150:
					return 4533;
				case 151:
					return 4541;
				case 152:
					return 4549;
				case 153:
					return 4557;
				case 154:
					return 4565;
				case 155:
					return 4573;
				case 156:
					return 4581;
				case 157:
					return 4589;
				case 158:
					return 5482;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				case 160:
					return 5938;
				case 161:
					return 5945;
				case 162:
					return 5952;
				case 163:
					return 5959;
				case 164:
					return 5966;
				case 165:
					return 5973;
				case 166:
					return 5980;
				case 167:
					return 5987;
				case 168:
					return 5994;
				case 169:
					return 6001;
				case 170:
					return 6008;
				case 171:
					return 6015;
				case 172:
					return 6022;
				case 173:
					return 6029;
				case 174:
					return 6036;
				case 175:
					return 6043;
				case 176:
					return 6050;
				case 177:
					return 6057;
				case 178:
					return 6064;
				case 179:
					return 6071;
				case 180:
					return 6078;
				case 181:
					return 6085;
				case 182:
					return 6092;
				case 183:
					return 6099;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				case 185:
					return 6183;
				case 186:
					return 6190;
				case 187:
					return 6197;
				case 188:
					return 6204;
				case 189:
					return 6211;
				case 190:
					return 6218;
				case 191:
					return 6225;
				case 192:
					return 6232;
				case 193:
					return 6239;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				case 195:
					return 6580;
				case 196:
					return 6587;
				case 197:
					return 6594;
				case 198:
					return 6601;
				case 199:
					return 6608;
				case 200:
					return 6615;
				case 201:
					return 6622;
				case 202:
					return 6629;
				case 203:
					return 6636;
				case 204:
					return 6643;
				case 205:
					return 6650;
				case 206:
					return 6657;
				case 207:
					return 6664;
				case 208:
					return 6671;
				case 209:
					return 6678;
				case 210:
					return 6685;
				case 211:
					return 6692;
				case 212:
					return 6699;
				case 213:
					return 6706;
				case 214:
					return 6713;
				case 215:
					return 6720;
				case 216:
					return 6727;
				case 217:
					return 6734;
				case 218:
					return 6741;
				case 219:
					return 6748;
				case 220:
					return 6755;
				case 221:
					return 6762;
				case 222:
					return 6769;
				case 223:
					return 6776;
				case 224:
					return 6783;
				case 225:
					return 6790;
				case 226:
					return 6797;
				case 227:
					return 6804;
				case 228:
					return 6811;
				case 229:
					return 6818;
				case 230:
					return 6825;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				case 232:
					return 7302;
				case 233:
					return 7309;
				case 234:
					return 7316;
				case 235:
					return 7323;
				case 236:
					return 7330;
				case 237:
					return 7337;
				case 238:
					return 7344;
				case 239:
					return 7351;
				case 240:
					return 7358;
				case 241:
					return 7365;
				case 242:
					return 7372;
				case 243:
					return 7379;
				case 244:
					return 7386;
				case 245:
					return 7393;
				case 246:
					return 7400;
				case 247:
					return 7407;
				case 248:
					return 7414;
				case 249:
					return 7421;
				case 250:
					return 7428;
				case 251:
					return 7435;
				case 252:
					return 7442;
				case 253:
					return 7449;
				case 254:
					return 7456;
				case 255:
					return 7463;
				case 256:
					return 7470;
				case 257:
					return 7477;
				case 258:
					return 7484;
				case 259:
					return 7491;
				case 260:
					return 7498;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				case 262:
					return 8025;
				case 263:
					return 8032;
				case 264:
					return 8039;
				case 265:
					return 8046;
				case 266:
					return 8053;
				case 267:
					return 8060;
				case 268:
					return 8067;
				case 269:
					return 8074;
				case 270:
					return 8081;
				case 271:
					return 8542;
				case 272:
					return 8549;
				case 273:
					return 8556;
				case 274:
					return 8563;
				case 275:
					return 8570;
				case 276:
					return 8577;
				case 277:
					return 8584;
				case 278:
					return 8591;
				case 279:
					return 8598;
				case 280:
					return 8605;
				case 281:
					return 8989;
				case 282:
					return 8996;
				case 283:
					return 9003;
				case 284:
					return 9010;
				case 285:
					return 9017;
				case 286:
					return 9024;
				case 287:
					return 9031;
				case 288:
					return 9038;
				case 289:
					return 9045;
				case 290:
					return 9052;
				case 291:
					return 9059;
				case 292:
					return 9065;
				case 293:
					return 9071;
				case 294:
					return 9077;
				case 295:
					return 9084;
				case 296:
					return 9091;
				case 297:
					return 9098;
				case 298:
					return 9105;
				case 299:
					return 9112;
				case 300:
					return 9119;
				case 301:
					return 9126;
				case 302:
					return 9133;
				case 303:
					return 9140;
				case 304:
					return 9147;
				case 305:
					return 9153;
				case 306:
					return 9159;
				case 307:
					return 9640;
				case 308:
					return 9647;
				case 309:
					return 9654;
				case 310:
					return 9661;
				case 311:
					return 9668;
				case 312:
					return 9675;
				case 313:
					return 9682;
				case 314:
					return 9689;
				case 315:
					return 9696;
				case 316:
					return 9703;
				case 317:
					return 9924;
				case 318:
					return 9931;
				case 319:
					return 9938;
				case 320:
					return 9945;
				case 321:
					return 9952;
				case 322:
					return 9959;
				case 323:
					return 9966;
				case 324:
					return 9973;
				case 325:
					return 9980;
				case 326:
					return 9987;
				case 327:
					return 9994;
				case 328:
					return 10001;
				case 329:
					return 10008;
				case 330:
					return 10015;
				case 331:
					return 10022;
				case 332:
					return 10029;
				case 333:
					return 10036;
				case 334:
					return 10043;
				case 335:
					return 10050;
				case 336:
					return 10057;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10450;
				case 338:
					return 10457;
				case 339:
					return 10464;
				case 340:
					return 10471;
				case 341:
					return 10478;
				case 342:
					return 10485;
				case 343:
					return 10492;
				case 344:
					return 10499;
				case 345:
					return 10506;
				case 346:
					return 10513;
				case 347:
					return 10520;
				case 348:
					return 10526;
				case 349:
					return 10532;
				case 350:
					return 10538;
				case 351:
					return 10545;
				case 352:
					return 10552;
				case 353:
					return 10559;
				case 354:
					return 10566;
				case 355:
					return 10573;
				case 356:
					return 10580;
				case 357:
					return 10587;
				case 358:
					return 10594;
				case 359:
					return 10601;
				case 360:
					return 10608;
				case 361:
					return 10614;
				case 362:
					return 10620;
				default:
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				case 1:
					return 1641;
				case 2:
					return 1648;
				case 3:
					return 1655;
				case 4:
					return 1662;
				case 5:
					return 1669;
				case 6:
					return 1676;
				case 7:
					return 1683;
				case 8:
					return 1690;
				case 9:
					return 1697;
				case 10:
					return 1704;
				case 11:
					return 1710;
				case 12:
					return 1716;
				case 13:
					return 1722;
				case 14:
					return 1801;
				case 15:
					return 1808;
				case 16:
					return 1815;
				case 17:
					return 1822;
				case 18:
					return 1829;
				case 19:
					return 1836;
				case 20:
					return 1843;
				case 21:
					return 1850;
				case 22:
					return 1857;
				case 23:
					return 1864;
				case 24:
					return 1870;
				case 25:
					return 1876;
				case 26:
					return 2171;
				case 27:
					return 2178;
				case 28:
					return 2185;
				case 29:
					return 2192;
				case 30:
					return 2199;
				case 31:
					return 2206;
				case 32:
					return 2213;
				case 33:
					return 2220;
				case 34:
					return 2227;
				case 35:
					return 2234;
				case 36:
					return 2241;
				case 37:
					return 2247;
				case 38:
					return 2253;
				case 39:
					return 2835;
				case 40:
					return 2842;
				case 41:
					return 2849;
				case 42:
					return 2856;
				case 43:
					return 2863;
				case 44:
					return 2870;
				case 45:
					return 2877;
				case 46:
					return 2884;
				case 47:
					return 2891;
				case 48:
					return 2898;
				case 49:
					return 2905;
				case 50:
					return 2911;
				case 51:
					return 2917;
				case 52:
					return 2959;
				case 53:
					return 2966;
				case 54:
					return 2973;
				case 55:
					return 2980;
				case 56:
					return 2987;
				case 57:
					return 2994;
				case 58:
					return 3001;
				case 59:
					return 3008;
				case 60:
					return 3015;
				case 61:
					return 3022;
				case 62:
					return 3029;
				case 63:
					return 3035;
				case 64:
					return 3041;
				case 65:
					return 3242;
				case 66:
					return 3250;
				case 67:
					return 3258;
				case 68:
					return 3266;
				case 69:
					return 3274;
				case 70:
					return 3282;
				case 71:
					return 3290;
				case 72:
					return 3298;
				case 73:
					return 3306;
				case 74:
					return 3314;
				case 75:
					return 3322;
				case 76:
					return 3330;
				case 77:
					return 3338;
				case 78:
					return 3346;
				case 79:
					return 3354;
				case 80:
					return 3362;
				case 81:
					return 3370;
				case 82:
					return 3378;
				case 83:
					return 3386;
				case 84:
					return 3394;
				case 85:
					return 3402;
				case 86:
					return 3409;
				case 87:
					return 3416;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				case 89:
					return 4046;
				case 90:
					return 4054;
				case 91:
					return 4062;
				case 92:
					return 4070;
				case 93:
					return 4078;
				case 94:
					return 4086;
				case 95:
					return 4094;
				case 96:
					return 4102;
				case 97:
					return 4110;
				case 98:
					return 4118;
				case 99:
					return 4126;
				case 100:
					return 4134;
				case 101:
					return 4142;
				case 102:
					return 4150;
				case 103:
					return 4158;
				case 104:
					return 4166;
				case 105:
					return 4174;
				case 106:
					return 4182;
				case 107:
					return 4190;
				case 108:
					return 4198;
				case 109:
					return 4206;
				case 110:
					return 4214;
				case 111:
					return 4222;
				case 112:
					return 4230;
				case 113:
					return 4238;
				case 114:
					return 4246;
				case 115:
					return 4254;
				case 116:
					return 4262;
				case 117:
					return 4270;
				case 118:
					return 4278;
				case 119:
					return 4286;
				case 120:
					return 4294;
				case 121:
					return 4302;
				case 122:
					return 4310;
				case 123:
					return 4318;
				case 124:
					return 4326;
				case 125:
					return 4334;
				case 126:
					return 4342;
				case 127:
					return 4350;
				case 128:
					return 4358;
				case 129:
					return 4366;
				case 130:
					return 4374;
				case 131:
					return 4382;
				case 132:
					return 4390;
				case 133:
					return 4398;
				case 134:
					return 4406;
				case 135:
					return 4414;
				case 136:
					return 4422;
				case 137:
					return 4430;
				case 138:
					return 4438;
				case 139:
					return 4446;
				case 140:
					return 4454;
				case 141:
					return 4462;
				case 142:
					return 4470;
				case 143:
					return 4478;
				case 144:
					return 4486;
				case 145:
					return 4494;
				case 146:
					return 4502;
				case 147:
					return 4510;
				case 148:
					return 4518;
				case 149:
					return 4526;
				case 150:
					return 4534;
				case 151:
					return 4542;
				case 152:
					return 4550;
				case 153:
					return 4558;
				case 154:
					return 4566;
				case 155:
					return 4574;
				case 156:
					return 4582;
				case 157:
					return 4590;
				case 158:
					return 5483;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				case 160:
					return 5939;
				case 161:
					return 5946;
				case 162:
					return 5953;
				case 163:
					return 5960;
				case 164:
					return 5967;
				case 165:
					return 5974;
				case 166:
					return 5981;
				case 167:
					return 5988;
				case 168:
					return 5995;
				case 169:
					return 6002;
				case 170:
					return 6009;
				case 171:
					return 6016;
				case 172:
					return 6023;
				case 173:
					return 6030;
				case 174:
					return 6037;
				case 175:
					return 6044;
				case 176:
					return 6051;
				case 177:
					return 6058;
				case 178:
					return 6065;
				case 179:
					return 6072;
				case 180:
					return 6079;
				case 181:
					return 6086;
				case 182:
					return 6093;
				case 183:
					return 6100;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				case 185:
					return 6184;
				case 186:
					return 6191;
				case 187:
					return 6198;
				case 188:
					return 6205;
				case 189:
					return 6212;
				case 190:
					return 6219;
				case 191:
					return 6226;
				case 192:
					return 6233;
				case 193:
					return 6240;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				case 195:
					return 6581;
				case 196:
					return 6588;
				case 197:
					return 6595;
				case 198:
					return 6602;
				case 199:
					return 6609;
				case 200:
					return 6616;
				case 201:
					return 6623;
				case 202:
					return 6630;
				case 203:
					return 6637;
				case 204:
					return 6644;
				case 205:
					return 6651;
				case 206:
					return 6658;
				case 207:
					return 6665;
				case 208:
					return 6672;
				case 209:
					return 6679;
				case 210:
					return 6686;
				case 211:
					return 6693;
				case 212:
					return 6700;
				case 213:
					return 6707;
				case 214:
					return 6714;
				case 215:
					return 6721;
				case 216:
					return 6728;
				case 217:
					return 6735;
				case 218:
					return 6742;
				case 219:
					return 6749;
				case 220:
					return 6756;
				case 221:
					return 6763;
				case 222:
					return 6770;
				case 223:
					return 6777;
				case 224:
					return 6784;
				case 225:
					return 6791;
				case 226:
					return 6798;
				case 227:
					return 6805;
				case 228:
					return 6812;
				case 229:
					return 6819;
				case 230:
					return 6826;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				case 232:
					return 7303;
				case 233:
					return 7310;
				case 234:
					return 7317;
				case 235:
					return 7324;
				case 236:
					return 7331;
				case 237:
					return 7338;
				case 238:
					return 7345;
				case 239:
					return 7352;
				case 240:
					return 7359;
				case 241:
					return 7366;
				case 242:
					return 7373;
				case 243:
					return 7380;
				case 244:
					return 7387;
				case 245:
					return 7394;
				case 246:
					return 7401;
				case 247:
					return 7408;
				case 248:
					return 7415;
				case 249:
					return 7422;
				case 250:
					return 7429;
				case 251:
					return 7436;
				case 252:
					return 7443;
				case 253:
					return 7450;
				case 254:
					return 7457;
				case 255:
					return 7464;
				case 256:
					return 7471;
				case 257:
					return 7478;
				case 258:
					return 7485;
				case 259:
					return 7492;
				case 260:
					return 7499;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				case 262:
					return 8026;
				case 263:
					return 8033;
				case 264:
					return 8040;
				case 265:
					return 8047;
				case 266:
					return 8054;
				case 267:
					return 8061;
				case 268:
					return 8068;
				case 269:
					return 8075;
				case 270:
					return 8082;
				case 271:
					return 8543;
				case 272:
					return 8550;
				case 273:
					return 8557;
				case 274:
					return 8564;
				case 275:
					return 8571;
				case 276:
					return 8578;
				case 277:
					return 8585;
				case 278:
					return 8592;
				case 279:
					return 8599;
				case 280:
					return 8606;
				case 281:
					return 8990;
				case 282:
					return 8997;
				case 283:
					return 9004;
				case 284:
					return 9011;
				case 285:
					return 9018;
				case 286:
					return 9025;
				case 287:
					return 9032;
				case 288:
					return 9039;
				case 289:
					return 9046;
				case 290:
					return 9053;
				case 291:
					return 9060;
				case 292:
					return 9066;
				case 293:
					return 9072;
				case 294:
					return 9078;
				case 295:
					return 9085;
				case 296:
					return 9092;
				case 297:
					return 9099;
				case 298:
					return 9106;
				case 299:
					return 9113;
				case 300:
					return 9120;
				case 301:
					return 9127;
				case 302:
					return 9134;
				case 303:
					return 9141;
				case 304:
					return 9148;
				case 305:
					return 9154;
				case 306:
					return 9160;
				case 307:
					return 9641;
				case 308:
					return 9648;
				case 309:
					return 9655;
				case 310:
					return 9662;
				case 311:
					return 9669;
				case 312:
					return 9676;
				case 313:
					return 9683;
				case 314:
					return 9690;
				case 315:
					return 9697;
				case 316:
					return 9704;
				case 317:
					return 9925;
				case 318:
					return 9932;
				case 319:
					return 9939;
				case 320:
					return 9946;
				case 321:
					return 9953;
				case 322:
					return 9960;
				case 323:
					return 9967;
				case 324:
					return 9974;
				case 325:
					return 9981;
				case 326:
					return 9988;
				case 327:
					return 9995;
				case 328:
					return 10002;
				case 329:
					return 10009;
				case 330:
					return 10016;
				case 331:
					return 10023;
				case 332:
					return 10030;
				case 333:
					return 10037;
				case 334:
					return 10044;
				case 335:
					return 10051;
				case 336:
					return 10058;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10451;
				case 338:
					return 10458;
				case 339:
					return 10465;
				case 340:
					return 10472;
				case 341:
					return 10479;
				case 342:
					return 10486;
				case 343:
					return 10493;
				case 344:
					return 10500;
				case 345:
					return 10507;
				case 346:
					return 10514;
				case 347:
					return 10521;
				case 348:
					return 10527;
				case 349:
					return 10533;
				case 350:
					return 10539;
				case 351:
					return 10546;
				case 352:
					return 10553;
				case 353:
					return 10560;
				case 354:
					return 10567;
				case 355:
					return 10574;
				case 356:
					return 10581;
				case 357:
					return 10588;
				case 358:
					return 10595;
				case 359:
					return 10602;
				case 360:
					return 10609;
				case 361:
					return 10615;
				case 362:
					return 10621;
				default:
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				case 1:
					return 1643;
				case 2:
					return 1650;
				case 3:
					return 1657;
				case 4:
					return 1664;
				case 5:
					return 1671;
				case 6:
					return 1678;
				case 7:
					return 1685;
				case 8:
					return 1692;
				case 9:
					return 1699;
				case 13:
					return 1724;
				case 14:
					return 1803;
				case 15:
					return 1810;
				case 16:
					return 1817;
				case 17:
					return 1824;
				case 18:
					return 1831;
				case 19:
					return 1838;
				case 20:
					return 1845;
				case 21:
					return 1852;
				case 22:
					return 1859;
				case 26:
					return 2173;
				case 27:
					return 2180;
				case 28:
					return 2187;
				case 29:
					return 2194;
				case 30:
					return 2201;
				case 31:
					return 2208;
				case 32:
					return 2215;
				case 33:
					return 2222;
				case 34:
					return 2229;
				case 35:
					return 2236;
				case 39:
					return 2837;
				case 40:
					return 2844;
				case 41:
					return 2851;
				case 42:
					return 2858;
				case 43:
					return 2865;
				case 44:
					return 2872;
				case 45:
					return 2879;
				case 46:
					return 2886;
				case 47:
					return 2893;
				case 48:
					return 2900;
				case 52:
					return 2961;
				case 53:
					return 2968;
				case 54:
					return 2975;
				case 55:
					return 2982;
				case 56:
					return 2989;
				case 57:
					return 2996;
				case 58:
					return 3003;
				case 59:
					return 3010;
				case 60:
					return 3017;
				case 61:
					return 3024;
				case 65:
					return 3245;
				case 66:
					return 3253;
				case 67:
					return 3261;
				case 68:
					return 3269;
				case 69:
					return 3277;
				case 70:
					return 3285;
				case 71:
					return 3293;
				case 72:
					return 3301;
				case 73:
					return 3309;
				case 74:
					return 3317;
				case 75:
					return 3325;
				case 76:
					return 3333;
				case 77:
					return 3341;
				case 78:
					return 3349;
				case 79:
					return 3357;
				case 80:
					return 3365;
				case 81:
					return 3373;
				case 82:
					return 3381;
				case 83:
					return 3389;
				case 84:
					return 3397;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4041;
				case 89:
					return 4049;
				case 90:
					return 4057;
				case 91:
					return 4065;
				case 92:
					return 4073;
				case 93:
					return 4081;
				case 94:
					return 4089;
				case 95:
					return 4097;
				case 96:
					return 4105;
				case 97:
					return 4113;
				case 98:
					return 4121;
				case 99:
					return 4129;
				case 100:
					return 4137;
				case 101:
					return 4145;
				case 102:
					return 4153;
				case 103:
					return 4161;
				case 104:
					return 4169;
				case 105:
					return 4177;
				case 106:
					return 4185;
				case 107:
					return 4193;
				case 108:
					return 4201;
				case 109:
					return 4209;
				case 110:
					return 4217;
				case 111:
					return 4225;
				case 112:
					return 4233;
				case 113:
					return 4241;
				case 114:
					return 4249;
				case 115:
					return 4257;
				case 116:
					return 4265;
				case 117:
					return 4273;
				case 118:
					return 4281;
				case 119:
					return 4289;
				case 120:
					return 4297;
				case 121:
					return 4305;
				case 122:
					return 4313;
				case 123:
					return 4321;
				case 124:
					return 4329;
				case 125:
					return 4337;
				case 126:
					return 4345;
				case 127:
					return 4353;
				case 128:
					return 4361;
				case 129:
					return 4369;
				case 130:
					return 4377;
				case 131:
					return 4385;
				case 132:
					return 4393;
				case 133:
					return 4401;
				case 134:
					return 4409;
				case 135:
					return 4417;
				case 136:
					return 4425;
				case 137:
					return 4433;
				case 138:
					return 4441;
				case 139:
					return 4449;
				case 140:
					return 4457;
				case 141:
					return 4465;
				case 142:
					return 4473;
				case 143:
					return 4481;
				case 144:
					return 4489;
				case 145:
					return 4497;
				case 146:
					return 4505;
				case 147:
					return 4513;
				case 148:
					return 4521;
				case 149:
					return 4529;
				case 150:
					return 4537;
				case 151:
					return 4545;
				case 152:
					return 4553;
				case 153:
					return 4561;
				case 154:
					return 4569;
				case 155:
					return 4577;
				case 156:
					return 4585;
				case 157:
					return 4593;
				case 158:
					return 5486;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5934;
				case 160:
					return 5941;
				case 161:
					return 5948;
				case 162:
					return 5955;
				case 163:
					return 5962;
				case 164:
					return 5969;
				case 165:
					return 5976;
				case 166:
					return 5983;
				case 167:
					return 5990;
				case 168:
					return 5997;
				case 169:
					return 6004;
				case 170:
					return 6011;
				case 171:
					return 6018;
				case 172:
					return 6025;
				case 173:
					return 6032;
				case 174:
					return 6039;
				case 175:
					return 6046;
				case 176:
					return 6053;
				case 177:
					return 6060;
				case 178:
					return 6067;
				case 179:
					return 6074;
				case 180:
					return 6081;
				case 181:
					return 6088;
				case 182:
					return 6095;
				case 183:
					return 6102;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6179;
				case 185:
					return 6186;
				case 186:
					return 6193;
				case 187:
					return 6200;
				case 188:
					return 6207;
				case 189:
					return 6214;
				case 190:
					return 6221;
				case 191:
					return 6228;
				case 192:
					return 6235;
				case 193:
					return 6242;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6576;
				case 195:
					return 6583;
				case 196:
					return 6590;
				case 197:
					return 6597;
				case 198:
					return 6604;
				case 199:
					return 6611;
				case 200:
					return 6618;
				case 201:
					return 6625;
				case 202:
					return 6632;
				case 203:
					return 6639;
				case 204:
					return 6646;
				case 205:
					return 6653;
				case 206:
					return 6660;
				case 207:
					return 6667;
				case 208:
					return 6674;
				case 209:
					return 6681;
				case 210:
					return 6688;
				case 211:
					return 6695;
				case 212:
					return 6702;
				case 213:
					return 6709;
				case 214:
					return 6716;
				case 215:
					return 6723;
				case 216:
					return 6730;
				case 217:
					return 6737;
				case 218:
					return 6744;
				case 219:
					return 6751;
				case 220:
					return 6758;
				case 221:
					return 6765;
				case 222:
					return 6772;
				case 223:
					return 6779;
				case 224:
					return 6786;
				case 225:
					return 6793;
				case 226:
					return 6800;
				case 227:
					return 6807;
				case 228:
					return 6814;
				case 229:
					return 6821;
				case 230:
					return 6828;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7298;
				case 232:
					return 7305;
				case 233:
					return 7312;
				case 234:
					return 7319;
				case 235:
					return 7326;
				case 236:
					return 7333;
				case 237:
					return 7340;
				case 238:
					return 7347;
				case 239:
					return 7354;
				case 240:
					return 7361;
				case 241:
					return 7368;
				case 242:
					return 7375;
				case 243:
					return 7382;
				case 244:
					return 7389;
				case 245:
					return 7396;
				case 246:
					return 7403;
				case 247:
					return 7410;
				case 248:
					return 7417;
				case 249:
					return 7424;
				case 250:
					return 7431;
				case 251:
					return 7438;
				case 252:
					return 7445;
				case 253:
					return 7452;
				case 254:
					return 7459;
				case 255:
					return 7466;
				case 256:
					return 7473;
				case 257:
					return 7480;
				case 258:
					return 7487;
				case 259:
					return 7494;
				case 260:
					return 7501;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8021;
				case 262:
					return 8028;
				case 263:
					return 8035;
				case 264:
					return 8042;
				case 265:
					return 8049;
				case 266:
					return 8056;
				case 267:
					return 8063;
				case 268:
					return 8070;
				case 269:
					return 8077;
				case 270:
					return 8084;
				case 271:
					return 8545;
				case 272:
					return 8552;
				case 273:
					return 8559;
				case 274:
					return 8566;
				case 275:
					return 8573;
				case 276:
					return 8580;
				case 277:
					return 8587;
				case 278:
					return 8594;
				case 279:
					return 8601;
				case 280:
					return 8608;
				case 281:
					return 8992;
				case 282:
					return 8999;
				case 283:
					return 9006;
				case 284:
					return 9013;
				case 285:
					return 9020;
				case 286:
					return 9027;
				case 287:
					return 9034;
				case 288:
					return 9041;
				case 289:
					return 9048;
				case 290:
					return 9055;
				case 294:
					return 9080;
				case 295:
					return 9087;
				case 296:
					return 9094;
				case 297:
					return 9101;
				case 298:
					return 9108;
				case 299:
					return 9115;
				case 300:
					return 9122;
				case 301:
					return 9129;
				case 302:
					return 9136;
				case 303:
					return 9143;
				case 307:
					return 9643;
				case 308:
					return 9650;
				case 309:
					return 9657;
				case 310:
					return 9664;
				case 311:
					return 9671;
				case 312:
					return 9678;
				case 313:
					return 9685;
				case 314:
					return 9692;
				case 315:
					return 9699;
				case 316:
					return 9706;
				case 317:
					return 9927;
				case 318:
					return 9934;
				case 319:
					return 9941;
				case 320:
					return 9948;
				case 321:
					return 9955;
				case 322:
					return 9962;
				case 323:
					return 9969;
				case 324:
					return 9976;
				case 325:
					return 9983;
				case 326:
					return 9990;
				case 327:
					return 9997;
				case 328:
					return 10004;
				case 329:
					return 10011;
				case 330:
					return 10018;
				case 331:
					return 10025;
				case 332:
					return 10032;
				case 333:
					return 10039;
				case 334:
					return 10046;
				case 335:
					return 10053;
				case 336:
					return 10060;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10453;
				case 338:
					return 10460;
				case 339:
					return 10467;
				case 340:
					return 10474;
				case 341:
					return 10481;
				case 342:
					return 10488;
				case 343:
					return 10495;
				case 344:
					return 10502;
				case 345:
					return 10509;
				case 346:
					return 10516;
				case 350:
					return 10541;
				case 351:
					return 10548;
				case 352:
					return 10555;
				case 353:
					return 10562;
				case 354:
					return 10569;
				case 355:
					return 10576;
				case 356:
					return 10583;
				case 357:
					return 10590;
				case 358:
					return 10597;
				case 359:
					return 10604;
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				case 1:
					return 1642;
				case 2:
					return 1649;
				case 3:
					return 1656;
				case 4:
					return 1663;
				case 5:
					return 1670;
				case 6:
					return 1677;
				case 7:
					return 1684;
				case 8:
					return 1691;
				case 9:
					return 1698;
				case 10:
					return 1705;
				case 11:
					return 1711;
				case 12:
					return 1717;
				case 13:
					return 1723;
				case 14:
					return 1802;
				case 15:
					return 1809;
				case 16:
					return 1816;
				case 17:
					return 1823;
				case 18:
					return 1830;
				case 19:
					return 1837;
				case 20:
					return 1844;
				case 21:
					return 1851;
				case 22:
					return 1858;
				case 23:
					return 1865;
				case 24:
					return 1871;
				case 25:
					return 1877;
				case 26:
					return 2172;
				case 27:
					return 2179;
				case 28:
					return 2186;
				case 29:
					return 2193;
				case 30:
					return 2200;
				case 31:
					return 2207;
				case 32:
					return 2214;
				case 33:
					return 2221;
				case 34:
					return 2228;
				case 35:
					return 2235;
				case 36:
					return 2242;
				case 37:
					return 2248;
				case 38:
					return 2254;
				case 39:
					return 2836;
				case 40:
					return 2843;
				case 41:
					return 2850;
				case 42:
					return 2857;
				case 43:
					return 2864;
				case 44:
					return 2871;
				case 45:
					return 2878;
				case 46:
					return 2885;
				case 47:
					return 2892;
				case 48:
					return 2899;
				case 49:
					return 2906;
				case 50:
					return 2912;
				case 51:
					return 2918;
				case 52:
					return 2960;
				case 53:
					return 2967;
				case 54:
					return 2974;
				case 55:
					return 2981;
				case 56:
					return 2988;
				case 57:
					return 2995;
				case 58:
					return 3002;
				case 59:
					return 3009;
				case 60:
					return 3016;
				case 61:
					return 3023;
				case 62:
					return 3030;
				case 63:
					return 3036;
				case 64:
					return 3042;
				case 65:
					return 3243;
				case 66:
					return 3251;
				case 67:
					return 3259;
				case 68:
					return 3267;
				case 69:
					return 3275;
				case 70:
					return 3283;
				case 71:
					return 3291;
				case 72:
					return 3299;
				case 73:
					return 3307;
				case 74:
					return 3315;
				case 75:
					return 3323;
				case 76:
					return 3331;
				case 77:
					return 3340;
				case 78:
					return 3348;
				case 79:
					return 3355;
				case 80:
					return 3363;
				case 81:
					return 3371;
				case 82:
					return 3379;
				case 83:
					return 3387;
				case 84:
					return 3395;
				case 85:
					return 3403;
				case 86:
					return 3410;
				case 87:
					return 3417;
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				case 89:
					return 4047;
				case 90:
					return 4055;
				case 91:
					return 4063;
				case 92:
					return 4071;
				case 93:
					return 4079;
				case 94:
					return 4087;
				case 95:
					return 4095;
				case 96:
					return 4103;
				case 97:
					return 4111;
				case 98:
					return 4119;
				case 99:
					return 4127;
				case 100:
					return 4136;
				case 101:
					return 4144;
				case 102:
					return 4151;
				case 103:
					return 4159;
				case 104:
					return 4167;
				case 105:
					return 4175;
				case 106:
					return 4183;
				case 107:
					return 4191;
				case 108:
					return 4199;
				case 109:
					return 4207;
				case 110:
					return 4215;
				case 111:
					return 4223;
				case 112:
					return 4231;
				case 113:
					return 4239;
				case 114:
					return 4247;
				case 115:
					return 4255;
				case 116:
					return 4263;
				case 117:
					return 4271;
				case 118:
					return 4279;
				case 119:
					return 4287;
				case 120:
					return 4296;
				case 121:
					return 4304;
				case 122:
					return 4311;
				case 123:
					return 4319;
				case 124:
					return 4327;
				case 125:
					return 4335;
				case 126:
					return 4343;
				case 127:
					return 4351;
				case 128:
					return 4359;
				case 129:
					return 4367;
				case 130:
					return 4375;
				case 131:
					return 4383;
				case 132:
					return 4391;
				case 133:
					return 4399;
				case 134:
					return 4407;
				case 135:
					return 4415;
				case 136:
					return 4423;
				case 137:
					return 4431;
				case 138:
					return 4439;
				case 139:
					return 4447;
				case 140:
					return 4456;
				case 141:
					return 4464;
				case 142:
					return 4471;
				case 143:
					return 4479;
				case 144:
					return 4487;
				case 145:
					return 4495;
				case 146:
					return 4503;
				case 147:
					return 4511;
				case 148:
					return 4519;
				case 149:
					return 4527;
				case 150:
					return 4535;
				case 151:
					return 4543;
				case 152:
					return 4551;
				case 153:
					return 4559;
				case 154:
					return 4567;
				case 155:
					return 4575;
				case 156:
					return 4583;
				case 157:
					return 4591;
				case 158:
					return 5484;
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				case 160:
					return 5940;
				case 161:
					return 5947;
				case 162:
					return 5954;
				case 163:
					return 5961;
				case 164:
					return 5968;
				case 165:
					return 5975;
				case 166:
					return 5982;
				case 167:
					return 5989;
				case 168:
					return 5996;
				case 169:
					return 6003;
				case 170:
					return 6010;
				case 171:
					return 6017;
				case 172:
					return 6024;
				case 173:
					return 6031;
				case 174:
					return 6038;
				case 175:
					return 6045;
				case 176:
					return 6052;
				case 177:
					return 6059;
				case 178:
					return 6066;
				case 179:
					return 6073;
				case 180:
					return 6080;
				case 181:
					return 6087;
				case 182:
					return 6094;
				case 183:
					return 6101;
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				case 185:
					return 6185;
				case 186:
					return 6192;
				case 187:
					return 6199;
				case 188:
					return 6206;
				case 189:
					return 6213;
				case 190:
					return 6220;
				case 191:
					return 6227;
				case 192:
					return 6234;
				case 193:
					return 6241;
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				case 195:
					return 6582;
				case 196:
					return 6589;
				case 197:
					return 6596;
				case 198:
					return 6603;
				case 199:
					return 6610;
				case 200:
					return 6617;
				case 201:
					return 6624;
				case 202:
					return 6631;
				case 203:
					return 6638;
				case 204:
					return 6645;
				case 205:
					return 6652;
				case 206:
					return 6659;
				case 207:
					return 6666;
				case 208:
					return 6673;
				case 209:
					return 6680;
				case 210:
					return 6687;
				case 211:
					return 6694;
				case 212:
					return 6701;
				case 213:
					return 6708;
				case 214:
					return 6715;
				case 215:
					return 6722;
				case 216:
					return 6729;
				case 217:
					return 6736;
				case 218:
					return 6743;
				case 219:
					return 6750;
				case 220:
					return 6757;
				case 221:
					return 6764;
				case 222:
					return 6771;
				case 223:
					return 6778;
				case 224:
					return 6785;
				case 225:
					return 6792;
				case 226:
					return 6799;
				case 227:
					return 6806;
				case 228:
					return 6813;
				case 229:
					return 6820;
				case 230:
					return 6827;
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				case 232:
					return 7304;
				case 233:
					return 7311;
				case 234:
					return 7318;
				case 235:
					return 7325;
				case 236:
					return 7332;
				case 237:
					return 7339;
				case 238:
					return 7346;
				case 239:
					return 7353;
				case 240:
					return 7360;
				case 241:
					return 7367;
				case 242:
					return 7374;
				case 243:
					return 7381;
				case 244:
					return 7388;
				case 245:
					return 7395;
				case 246:
					return 7402;
				case 247:
					return 7409;
				case 248:
					return 7416;
				case 249:
					return 7423;
				case 250:
					return 7430;
				case 251:
					return 7437;
				case 252:
					return 7444;
				case 253:
					return 7451;
				case 254:
					return 7458;
				case 255:
					return 7465;
				case 256:
					return 7472;
				case 257:
					return 7479;
				case 258:
					return 7486;
				case 259:
					return 7493;
				case 260:
					return 7500;
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				case 262:
					return 8027;
				case 263:
					return 8034;
				case 264:
					return 8041;
				case 265:
					return 8048;
				case 266:
					return 8055;
				case 267:
					return 8062;
				case 268:
					return 8069;
				case 269:
					return 8076;
				case 270:
					return 8083;
				case 271:
					return 8544;
				case 272:
					return 8551;
				case 273:
					return 8558;
				case 274:
					return 8565;
				case 275:
					return 8572;
				case 276:
					return 8579;
				case 277:
					return 8586;
				case 278:
					return 8593;
				case 279:
					return 8600;
				case 280:
					return 8607;
				case 281:
					return 8991;
				case 282:
					return 8998;
				case 283:
					return 9005;
				case 284:
					return 9012;
				case 285:
					return 9019;
				case 286:
					return 9026;
				case 287:
					return 9033;
				case 288:
					return 9040;
				case 289:
					return 9047;
				case 290:
					return 9054;
				case 291:
					return 9061;
				case 292:
					return 9067;
				case 293:
					return 9073;
				case 294:
					return 9079;
				case 295:
					return 9086;
				case 296:
					return 9093;
				case 297:
					return 9100;
				case 298:
					return 9107;
				case 299:
					return 9114;
				case 300:
					return 9121;
				case 301:
					return 9128;
				case 302:
					return 9135;
				case 303:
					return 9142;
				case 304:
					return 9149;
				case 305:
					return 9155;
				case 306:
					return 9161;
				case 307:
					return 9642;
				case 308:
					return 9649;
				case 309:
					return 9656;
				case 310:
					return 9663;
				case 311:
					return 9670;
				case 312:
					return 9677;
				case 313:
					return 9684;
				case 314:
					return 9691;
				case 315:
					return 9698;
				case 316:
					return 9705;
				case 317:
					return 9926;
				case 318:
					return 9933;
				case 319:
					return 9940;
				case 320:
					return 9947;
				case 321:
					return 9954;
				case 322:
					return 9961;
				case 323:
					return 9968;
				case 324:
					return 9975;
				case 325:
					return 9982;
				case 326:
					return 9989;
				case 327:
					return 9996;
				case 328:
					return 10003;
				case 329:
					return 10010;
				case 330:
					return 10017;
				case 331:
					return 10024;
				case 332:
					return 10031;
				case 333:
					return 10038;
				case 334:
					return 10045;
				case 335:
					return 10052;
				case 336:
					return 10059;
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10452;
				case 338:
					return 10459;
				case 339:
					return 10466;
				case 340:
					return 10473;
				case 341:
					return 10480;
				case 342:
					return 10487;
				case 343:
					return 10494;
				case 344:
					return 10501;
				case 345:
					return 10508;
				case 346:
					return 10515;
				case 347:
					return 10522;
				case 348:
					return 10528;
				case 349:
					return 10534;
				case 350:
					return 10540;
				case 351:
					return 10547;
				case 352:
					return 10554;
				case 353:
					return 10561;
				case 354:
					return 10568;
				case 355:
					return 10575;
				case 356:
					return 10582;
				case 357:
					return 10589;
				case 358:
					return 10596;
				case 359:
					return 10603;
				case 360:
					return 10610;
				case 361:
					return 10616;
				case 362:
					return 10622;
				default:
			}
			break;
	}
	return 1630;
}

int func_812(int iParam0)//Position - 0x33478
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	return (24625 + iParam0);
}

int func_813(int iParam0)//Position - 0x33529
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	return (4036 + iParam0);
}

int func_814(int iParam0)//Position - 0x36D5F
{
	if (__LIB_1__::func_587(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("youga4"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
			return 0;
		default:
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_815(var uParam0)//Position - 0x373B5
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
			*uParam0 = joaat("bison");
			break;
		case joaat("speedo2"):
			*uParam0 = joaat("speedo");
			break;
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			*uParam0 = joaat("burrito3");
			break;
	}
}

int func_816(var uParam0)//Position - 0x37410
{
	switch (*uParam0)
	{
		case joaat("bison2"):
		case joaat("bison3"):
		case joaat("speedo2"):
		case joaat("burrito"):
		case joaat("burrito4"):
		case joaat("burrito5"):
			return 1;
			break;
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x379C1
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285;
	}
	return 0;
}

int func_818(int iParam0)//Position - 0x3861D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_819(int iParam0)//Position - 0x41C3D
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

void func_820(int iParam0)//Position - 0x42407
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836751.f_4[iVar0]), iVar1);
}

void func_821(int iParam0)//Position - 0x427D4
{
	Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_2 = iParam0;
}

int func_822(int iParam0)//Position - 0x438C0
{
	int iVar0;
	var uVar1;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (FILES::GET_DLC_VEHICLE_DATA(iParam0, &uVar1))
	{
		iVar0 = FILES::GET_DLC_VEHICLE_FLAGS(iParam0);
		if (!BitTest(iVar0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_823()//Position - 0x452E7
{
	if (__LIB_0__::func_995(2))
	{
		return 0;
	}
	return 1;
}

void func_824(int iParam0, bool bParam1, int iParam2)//Position - 0x459C6
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_825(var* uParam0, char* sParam1)//Position - 0x45B59
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

int func_826(int iParam0)//Position - 0x45CBA
{
	if (__LIB_0__::func_970(iParam0) || __LIB_0__::func_971(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_827()//Position - 0x45CDC
{
	return Global_1836359;
}

int func_828()//Position - 0x45CE8
{
	if (Global_1836358 > 16)
	{
		return 1;
	}
	return 0;
}

void func_829(var uParam0)//Position - 0x45F35
{
	*uParam0 = 0;
	uParam0->f_1 = __LIB_0__::getMinusOneOrNull();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_830(int iParam0)//Position - 0x4677C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

bool func_831(int iParam0)//Position - 0x467E8
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 6);
}

bool func_832(int iParam0)//Position - 0x46FB2
{
	return __LIB_0__::func_987(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_833(bool bParam0)//Position - 0x48A65
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	}
	iVar0 = (iVar0 + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
	return iVar0;
}

char* func_834()//Position - 0x4BC62
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode";
		default:
	}
	return "freemode";
}

void func_835()//Position - 0x4C388
{
	if (!__LIB_1__::func_628(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_480(3);
	}
	else
	{
		__LIB_1__::func_480(8);
	}
}

int func_836(int iParam0, int iParam1)//Position - 0x4C4D1
{
	if (__LIB_0__::func_321(iParam0, 0))
	{
		return __LIB_1__::func_726(Global_1892703[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

bool func_837()//Position - 0x4C839
{
	return Global_1836594;
}

int func_838(int iParam0, int iParam1)//Position - 0x4C845
{
	int iVar0;
	if (__LIB_0__::func_3() != 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_855(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1853348[iVar0 /*834*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_839()//Position - 0x4FFBB
{
	return joaat("terbyte");
}

int func_840(int iParam0)//Position - 0x4FFC8
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_841(int iParam0)//Position - 0x50040
{
	switch (iParam0)
	{
		case joaat("oppressor2"):
		case joaat("caracara"):
		case joaat("zhaba"):
		case joaat("apc"):
		case joaat("barrage"):
		case joaat("dune3"):
		case joaat("tampa3"):
		case joaat("menacer"):
		case joaat("halftrack"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("technical"):
		case joaat("technical2"):
		case joaat("technical3"):
		case joaat("insurgent"):
		case joaat("insurgent3"):
			return 0;
			break;
	}
	return 1;
}

bool func_842(int iParam0)//Position - 0x50701
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_9, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_10, (iParam0 - 32));
}

bool func_843(int iParam0)//Position - 0x50748
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_7, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_8, (iParam0 - 32));
}

int func_844(int iParam0)//Position - 0x5079C
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_1, 11);
	}
	return 0;
}

bool func_845(int iParam0)//Position - 0x507DB
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_5, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_6, (iParam0 - 32));
}

int func_846(int iParam0)//Position - 0x5082F
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 29);
	}
	return 0;
}

int func_847(int iParam0)//Position - 0x50855
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 11);
	}
	return 0;
}

int func_848(int iParam0)//Position - 0x5087B
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 9);
	}
	return 0;
}

int func_849(int iParam0)//Position - 0x508EC
{
	if (Global_2815059.f_304[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_850(int iParam0)//Position - 0x50908
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_3, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_4, (iParam0 - 32));
}

int func_851(int iParam0)//Position - 0x53DD7
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_852()//Position - 0x54B09
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2631.8325f, 4526.624f, -10f, -380.1435f, 3906.7017f, 78.484f, 1200f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1731.902f, -123.846825f, 137.25964f, 2079.203f, 798.3421f, 249.3267f, 600f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.50253f, 855.094f, 148.12129f, -393.35385f, 695.785f, 272.18668f, 500f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

Vector3 func_853(int iParam0)//Position - 0x54BF4
{
	switch (iParam0)
	{
		case 0:
			return 709.8127f, 6699.7803f, 0f;
		case 1:
			return 1551.805f, 6686.0522f, 0f;
		case 2:
			return 3260.507f, 5309.454f, 0f;
		case 3:
			return 3788.334f, 3812.6934f, 0f;
		case 4:
			return 2945.665f, 1773.1919f, 0f;
		case 5:
			return 2866.816f, -658.5848f, 0f;
		case 6:
			return 2342.881f, -2167.953f, 0f;
		case 7:
			return 1215.167f, -2728.054f, 0f;
		case 8:
			return 1305.229f, -3364.572f, 0f;
		case 9:
			return 293.8953f, -3361.616f, 0f;
		case 10:
			return -484.948f, -2940.643f, 0f;
		case 11:
			return -1387.61f, -1704.374f, 0f;
		case 12:
			return -1566.04f, -1312.232f, 0f;
		case 13:
			return -1920.23f, -849.6466f, 0f;
		case 14:
			return -2876.76f, -74.3269f, 0f;
		case 15:
			return -3133.45f, 604.7179f, 0f;
		case 16:
			return -3286.57f, 1285.3721f, 0f;
		case 17:
			return -3205.53f, 3285.1995f, 0f;
		case 18:
			return -2520.42f, 4240.6714f, 0f;
		case 19:
			return -909.632f, 5830.909f, 0f;
		case 20:
			return -325.109f, 6584.622f, 0f;
		default:
	}
	return -673.5316f, 6175.048f, 0f;
}

int func_854(int iParam0, int iParam1)//Position - 0x5682C
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_855(int iParam0, int iParam1)//Position - 0x568D3
{
	if (__LIB_1__::func_592(iParam0) == iParam1)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_474;
	}
	return -1;
}

void func_856(bool bParam0)//Position - 0x59AB0
{
	MISC::SET_BIT(&(Global_2703735.f_61.f_60), 0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_60), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_60), 4);
	}
}

int func_857(int iParam0)//Position - 0x59B24
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return Global_2680265.f_903.f_168[iParam0];
}

bool func_858()//Position - 0x5A9A3
{
	return Global_2726699;
}

int func_859()//Position - 0x5B011
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

int func_860(int iParam0)//Position - 0x5B034
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_20266.f_1 == 9)
		{
			if (Global_7451 == iParam0)
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

int func_861()//Position - 0x5B209
{
	if (Global_20266.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_862(bool bParam0)//Position - 0x5B391
{
	if (bParam0)
	{
		Global_1835497 = 1;
	}
	else
	{
		Global_1835497 = 0;
	}
}

void func_863(bool bParam0)//Position - 0x5B3AB
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

int func_864(int iParam0)//Position - 0x5C107
{
	if (__LIB_1__::func_597(Global_1853348[iParam0 /*834*/].f_267.f_32))
	{
		return 1;
	}
	return 0;
}

void func_865(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x48C9
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_3 = (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		__LIB_0__::func_994(iVar1, 0);
	}
}

int func_866(int iParam0, bool bParam1)//Position - 0xD2B4
{
	if (Global_1853184 != __LIB_0__::getMinusOneOrNull())
	{
		if (!__LIB_1__::func_598(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || __LIB_1__::func_583(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_867(int iParam0)//Position - 0xD446
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(__LIB_1__::func_360(8726, -1, 0), 4);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

bool func_868(int iParam0)//Position - 0xD5C5
{
	return __LIB_1__::func_360(9517, iParam0, 0) != 0;
}

bool func_869(int iParam0)//Position - 0xD5FF
{
	if (!Global_262145.f_24199 /* Tunable: ENABLE_TERBYTE */)
	{
		return 0;
	}
	return __LIB_1__::func_360(7210, iParam0, 0) != 0;
}

int func_870()//Position - 0xD8E0
{
	if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_871()//Position - 0xFAD3
{
	if (__LIB_0__::func_995(6))
	{
		return 0;
	}
	return 1;
}

int func_872(int iParam0)//Position - 0x10362
{
	switch (__LIB_0__::func_3())
	{
		case 0:
			if (!__LIB_1__::func_20(iParam0))
			{
				if (Global_1853348[iParam0 /*834*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_873(int iParam0, struct<3> Param1)//Position - 0x1483B
{
	return SYSTEM::VDIST2(Param1, __LIB_1__::func_506(iParam0)) < __LIB_1__::func_505(iParam0);
}

int func_874(int iParam0)//Position - 0x162B7
{
	int iVar0;
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return iParam0;
	}
	if (__LIB_1__::func_307(iParam0) != -1)
	{
		iVar0 = __LIB_0__::func_172(__LIB_1__::func_307(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_1__::func_30(iParam0, 0))
			{
				return __LIB_0__::func_818(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return __LIB_0__::getMinusOneOrNull();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return __LIB_0__::getMinusOneOrNull();
}

void func_875(int iParam0, int iParam1, int iParam2)//Position - 0x17516
{
	int iVar0;
	iVar0 = Global_2868734[iParam0 /*3*/][__LIB_1__::func_27(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_876(int iParam0, int iParam1, bool bParam2)//Position - 0x19E37
{
	if (iParam1 != __LIB_0__::getMinusOneOrNull())
	{
		if (!bParam2)
		{
			if (__LIB_1__::func_500(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__::getMinusOneOrNull())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_877(int iParam0)//Position - 0x1A085
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		default:
	}
	return __LIB_1__::func_695(iParam0, 0);
	return 0;
}

var func_878(int iParam0)//Position - 0x22D32
{
	return BitTest(__LIB_1__::func_360(10393, -1, 0), __LIB_1__::func_159(iParam0, 1));
}

int func_879(int iParam0, bool bParam1)//Position - 0x22EFF
{
	if (bParam1)
	{
		return BitTest(__LIB_1__::func_360(9907, -1, 0), iParam0);
	}
	return __LIB_1__::func_162(PLAYER::PLAYER_ID(), iParam0);
}

int func_880(bool bParam0)//Position - 0x22F46
{
	if (bParam0)
	{
		return __LIB_1__::func_360(9910, -1, 0);
	}
	return __LIB_1__::func_163(PLAYER::PLAYER_ID());
}

bool func_881()//Position - 0x22F85
{
	return __LIB_1__::func_360(9903, __LIB_1__::func_27(-1), 0) != 0;
}

bool func_882(int iParam0, bool bParam1)//Position - 0x23381
{
	if (bParam1)
	{
		return BitTest(__LIB_1__::func_360(9586, -1, 0), iParam0);
	}
	return __LIB_1__::func_166(PLAYER::PLAYER_ID(), iParam0);
}

int func_883(bool bParam0)//Position - 0x233C6
{
	if (bParam0)
	{
		return BitTest(__LIB_1__::func_360(9511, -1, 0), 1);
	}
	return __LIB_1__::func_167(PLAYER::PLAYER_ID());
}

int func_884(int iParam0, int iParam1)//Position - 0x233E9
{
	if (iParam0 != -1)
	{
		return __LIB_1__::func_168(iParam0, __LIB_1__::func_169(iParam1));
	}
	return 0;
}

int func_885(int iParam0)//Position - 0x236B9
{
	int iVar0;
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = __LIB_1__::func_360(8837, -1, 0);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (BitTest(iVar0, 0) || Global_262145.f_28576 /* Tunable: -1997603235 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("burrito2"):
			if (BitTest(iVar0, 1) || Global_262145.f_28577 /* Tunable: 1293915021 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("boxville"):
			if (BitTest(iVar0, 2) || Global_262145.f_28578 /* Tunable: -423431250 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("stockade"):
			if (BitTest(iVar0, 3) || Global_262145.f_28579 /* Tunable: -1491164275 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("asbo"):
			if (BitTest(iVar0, 4) || Global_262145.f_28580 /* Tunable: -170684478 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("kanjo"):
			if (BitTest(iVar0, 5) || Global_262145.f_28581 /* Tunable: -1541063863 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("everon"):
			if (BitTest(iVar0, 6) || Global_262145.f_28582 /* Tunable: 2075481779 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("retinue2"):
			if (BitTest(iVar0, 7) || Global_262145.f_28583 /* Tunable: -1775833032 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("yosemite2"):
			if (BitTest(iVar0, 8) || Global_262145.f_28584 /* Tunable: -1971661685 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("sugoi"):
			if (BitTest(iVar0, 9) || Global_262145.f_28585 /* Tunable: 1161220966 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("sultan2"):
			if (BitTest(iVar0, 10) || Global_262145.f_28586 /* Tunable: -1874913332 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("outlaw"):
			if (BitTest(iVar0, 11) || Global_262145.f_28587 /* Tunable: -595990903 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("vagrant"):
			if (BitTest(iVar0, 12) || Global_262145.f_28588 /* Tunable: 829638346 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("komoda"):
			if (BitTest(iVar0, 13) || Global_262145.f_28589 /* Tunable: 1362146058 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("stryder"):
			if (BitTest(iVar0, 14) || Global_262145.f_28590 /* Tunable: -758040390 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("furia"):
			if (BitTest(iVar0, 15) || Global_262145.f_28591 /* Tunable: 1378787619 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("zhaba"):
			if (BitTest(iVar0, 16) || Global_262145.f_28592 /* Tunable: 1041883040 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("jugular"):
			if (BitTest(iVar0, 17) || Global_262145.f_28593 /* Tunable: -463901261 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("sentinel3"):
			if (BitTest(iVar0, 18) || Global_262145.f_28594 /* Tunable: 1961619344 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("gauntlet3"):
			if (BitTest(iVar0, 19) || Global_262145.f_28595 /* Tunable: -2141495545 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("ellie"):
			if (BitTest(iVar0, 20) || Global_262145.f_28596 /* Tunable: -349041781 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("defiler"):
			if (BitTest(iVar0, 21) || Global_262145.f_28597 /* Tunable: -410267195 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("manchez"):
			if (BitTest(iVar0, 22) || Global_262145.f_28598 /* Tunable: -1071451023 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_886(int iParam0)//Position - 0x23ADB
{
	return __LIB_0__::func_137(__LIB_1__::func_158(iParam0), -1);
}

int func_887(int iParam0)//Position - 0x256AB
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (__LIB_1__::func_360(7233, -1, 0) >= __LIB_1__::func_174(iParam0) || Global_262145.f_24711 /* Tunable: 1416880888 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("pounder2"):
			if (__LIB_1__::func_360(7233, -1, 0) >= __LIB_1__::func_174(iParam0) || Global_262145.f_24712 /* Tunable: 132690314 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("oppressor2"):
			if (__LIB_0__::func_253(22050, -1) >= __LIB_1__::func_174(iParam0) || Global_262145.f_24713 /* Tunable: 407802353 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("pbus2"):
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295.f_7, 1) || Global_262145.f_24715 /* Tunable: -26415325 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("patriot2"):
			if (__LIB_1__::func_360(7231, -1, 0) >= __LIB_1__::func_174(iParam0) || Global_262145.f_24716 /* Tunable: 1547508956 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case joaat("blimp3"):
			if (__LIB_1__::func_360(7231, -1, 0) >= __LIB_1__::func_174(iParam0) || Global_262145.f_24717 /* Tunable: -1431059775 */)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_888()//Position - 0x25AF5
{
	return __LIB_1__::func_360(6116, -1, 0);
}

int func_889(var uParam0)//Position - 0x25BF6
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(__LIB_1__::func_360(5466, -1, 0), uParam0);
}

int func_890(var uParam0)//Position - 0x25FA2
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(__LIB_1__::func_360(5329, -1, 0), uParam0);
}

void func_891(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x4242D
{
	if (__LIB_1__::func_463() < 0 && Global_1958535)
	{
		return;
	}
	if (__LIB_1__::func_599(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		__LIB_1__::func_653(2);
	}
	else
	{
		__LIB_1__::func_653(1);
	}
	if (bParam1)
	{
		__LIB_1__::func_653(11);
	}
	if (bParam2)
	{
		__LIB_1__::func_653(32);
		if (bParam3)
		{
			if (__LIB_1__::func_463() >= 0 && BitTest(Global_1585857[__LIB_1__::func_463() /*142*/].f_103, 0))
			{
				__LIB_1__::func_653(33);
			}
		}
		else
		{
			__LIB_1__::func_600(33);
		}
		if (__LIB_1__::func_463() >= 0)
		{
			if (__LIB_1__::func_590(Global_1585857[__LIB_1__::func_463() /*142*/].f_66))
			{
				__LIB_1__::func_653(40);
			}
		}
	}
	else if (bParam5)
	{
		__LIB_1__::func_653(37);
	}
	if (bParam4)
	{
		__LIB_1__::func_653(36);
	}
	if (__LIB_1__::func_599(36))
	{
		if (__LIB_1__::func_599(2))
		{
			__LIB_1__::func_600(36);
		}
	}
	if (bParam6)
	{
		__LIB_1__::func_653(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<35> func_892(int iParam0)//Position - 0x45B6B
{
	struct<13> Var0;
	struct<35> Var1;
	if (__LIB_1__::func_86(iParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { __LIB_0__::func_819(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

void func_893(int iParam0, int iParam1)//Position - 0x472F5
{
	Global_1941273[iParam0 /*8*/] = iParam1;
	__LIB_1__::func_354(__LIB_1__::func_457(iParam0), iParam1, -1, 1, 0);
}

int func_894()//Position - 0x5A977
{
	if (__LIB_1__::func_18())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

void func_895(bool bParam0, int iParam1)//Position - 0x5B3C0
{
	int iVar0;
	if (!__LIB_1__::func_23(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		__LIB_1__::func_22(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

int func_896(int iParam0, int iParam1)//Position - 0x118E5
{
	if (!__LIB_1__::func_692())
	{
		return 0;
	}
	if (__LIB_0__::func_978())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return __LIB_0__::func_316(&(Global_1853348[iParam0 /*834*/].f_765), __LIB_0__::func_977(iParam1));
}

int func_897(struct<2> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x157D0
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam2)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312193[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam2)[iVar2] = iVar0;
					(*uParam3)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (__LIB_1__::func_573(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (__LIB_1__::func_531(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam2)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946250.f_533[iVar0 /*3*/], Global_1946250.f_533[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam2)[iVar2] = iVar0;
				(*uParam3)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_898(struct<3> Param0, var uParam1)//Position - 0x15E2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	*uParam1 = -1;
	iVar2 = __LIB_1__::func_557(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (__LIB_1__::func_573(iVar1))
			{
				if (__LIB_1__::func_557(Global_1946250.f_533[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam1 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_899(bool bParam0)//Position - 0x4CC
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 2);
}

void func_900(var uParam0, int iParam1)//Position - 0x7A8
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_901(int iParam0, bool bParam1)//Position - 0xBD0
{
	int iVar0;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

float func_902(struct<3> Param0, struct<3> Param1)//Position - 0xF11
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param1);
}

int func_903(int iParam0, var uParam1, var uParam2)//Position - 0xF42
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1729.5818f, -2943.7695f, 12.9443f };
			*uParam2 = 300.078f;
			break;
		case 1:
			*uParam1 = { 677.2984f, 769.7758f, 204.6846f };
			*uParam2 = 82.8903f;
			break;
		case 2:
			*uParam1 = { 1073.972f, 3003.8894f, 40.5508f };
			*uParam2 = 333.2717f;
			break;
		case 3:
			*uParam1 = { 1928.635f, 4702.3267f, 40.1958f };
			*uParam2 = 327.9112f;
			break;
		case 4:
			*uParam1 = { 1278.6503f, 6579.366f, 1.505f };
			*uParam2 = 84.26f;
			break;
		case 5:
			*uParam1 = { -1700.4066f, -829.8932f, 8.2542f };
			*uParam2 = 70.1811f;
			break;
		case 6:
			*uParam1 = { -2733.5889f, 2925.5627f, 1.2152f };
			*uParam2 = 176.5378f;
			break;
		case 7:
			*uParam1 = { 1493.4181f, -2442.9897f, 64.9693f };
			*uParam2 = 52.9918f;
			break;
		case 8:
			*uParam1 = { 569.0449f, -772.5692f, 10.4088f };
			*uParam2 = 179.3501f;
			break;
		case 9:
			*uParam1 = { -905.1526f, 5548.172f, 5.5251f };
			*uParam2 = 95.8361f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_904()//Position - 0x11E1
{
	return BitTest(Global_1836844.f_1, 0);
}

bool func_905(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x239F
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

var func_906(bool bParam0, int iParam1)//Position - 0x2AF6
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_4, iParam1);
}

int func_907(bool bParam0, int iParam1)//Position - 0x2C41
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_908(bool bParam0)//Position - 0x9D8C
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

int func_909(bool bParam0, bool bParam1)//Position - 0x9FC1
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { __LIB_1__::func_696(bParam0) };
		Global_2787518 = { __LIB_1__::func_696(bParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_910()//Position - 0xA5AC
{
	Global_1649593.f_1172 = 1;
}

bool func_911()//Position - 0xAC5F
{
	if (!__LIB_1__::func_702())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	__LIB_1__::func_701();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_912()//Position - 0xAD89
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_913()//Position - 0xAE15
{
	struct<6> Var0;
	if (Global_2667225.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667225.f_490 = { Var0 };
	}
}

void func_914()//Position - 0xB0A3
{
	Global_2727091 = 1;
}

void func_915()//Position - 0xB5C8
{
	if (BitTest(Global_2815059.f_5032, 1))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_5032), 1);
	}
	if (Global_2815059.f_5032 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2815059.f_5032 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2815059.f_5042 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2815059.f_5042);
				Global_2815059.f_5042 = -1;
			}
		}
	}
}

void func_916(int iParam0)//Position - 0xB8B7
{
	if (iParam0 == iParam0)
	{
	}
}

char* func_917()//Position - 0xBB29
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

int func_918(bool bParam0, int iParam1)//Position - 0xBBA6
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__::getMinusOneOrNull())
		{
			if (Global_1892703[bParam0 /*599*/].f_10 == bParam0 && Global_1892703[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_919()//Position - 0xBCCB
{
	return Global_2703735.f_2400[0 /*80*/].f_1;
}

var func_920()//Position - 0xBCDF
{
	return BitTest(Global_1836844.f_1, 25);
}

void func_921(int iParam0)//Position - 0xBFF6
{
	Global_2703735.f_1568 = iParam0;
}

int func_922()//Position - 0xC1F9
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_923()//Position - 0xC223
{
	var uVar0;
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_924(struct<3> Param0, var uParam1, var uParam2)//Position - 0xC23E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

void func_925()//Position - 0xDE81
{
	Global_2727090 = 1;
}

void func_926(int iParam0, int iParam1)//Position - 0xDE8E
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_24025 /* Tunable: 277748102 */ == 0 || Global_262145.f_24025 /* Tunable: 277748102 */ == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_24025 /* Tunable: 277748102 */ == 1)
			{
				Global_2815059.f_283 = iParam0;
				if (iParam1 > Global_262145.f_7043 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */)
				{
					iParam1 = Global_262145.f_7043 /* Tunable: CAP_MAX_AMOUNT_CASH_TO_SHARE */;
				}
				Global_2815059.f_284 = iParam1;
				Global_2815059.f_285 = 0;
			}
		}
	}
}

var func_927(bool bParam0)//Position - 0xEDFB
{
	return Global_1892703[bParam0 /*599*/].f_510;
}

void func_928(int iParam0)//Position - 0xEE0F
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

int func_929(bool bParam0)//Position - 0xF0E4
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12862 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_930()//Position - 0xF10A
{
	return Global_262145.f_12861 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

int func_931(int iParam0)//Position - 0xF1B2
{
	var uVar0;
	uVar0 = __LIB_1__::func_360(2537, -1, 0);
	if (iParam0 == 0)
	{
		if ((BitTest(uVar0, 0) && BitTest(uVar0, 1)) && BitTest(uVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((BitTest(uVar0, 3) && BitTest(uVar0, 4)) && BitTest(uVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((BitTest(uVar0, 6) && BitTest(uVar0, 7)) && BitTest(uVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((BitTest(uVar0, 9) && BitTest(uVar0, 10)) && BitTest(uVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

struct<16> func_932(int iParam0, char* sParam1)//Position - 0xFA94
{
	struct<16> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		case 1:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIRST" /* GXT: 1st: */), 64);
			break;
		case 2:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSSECOND" /* GXT: 2nd: */), 64);
			break;
		case 3:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSTHIRD" /* GXT: 3rd: */), 64);
			break;
		case 4:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFOURTH" /* GXT: 4th: */), 64);
			break;
		case 5:
			StringCopy(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("HUD_POSFIFTH" /* GXT: 5th: */), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_933()//Position - 0xFB36
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2727094 = 1;
}

bool func_934()//Position - 0xFBA7
{
	return BitTest(Global_2621446, 12);
}

int func_935(bool bParam0)//Position - 0x10184
{
	if (bParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_936(int iParam0)//Position - 0x1043D
{
	if ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9) && !(BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7))) || ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7)) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_937()//Position - 0x104C6
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 19);
}

bool func_938()//Position - 0x108E4
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

int func_939(int iParam0)//Position - 0x1096C
{
	switch (iParam0)
	{
		case 150:
			return 67;
		case 236:
			return 67;
		case 133:
			return 69;
		default:
	}
	return 68;
}

int func_940(int iParam0)//Position - 0x109CC
{
	if (__LIB_1__::func_592(iParam0) == 236 || __LIB_1__::func_592(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_941()//Position - 0x110CD
{
	return Global_1574582.f_1;
}

int func_942(int iParam0)//Position - 0x12C02
{
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 20);
}

var func_943()//Position - 0x12C24
{
	return BitTest(Global_1958691, 1);
}

void func_944(struct<12> Param0, int iParam1)//Position - 0x12DC9
{
	Global_2667225.f_368[iParam1 /*12*/] = { Param0 };
	Global_2667225.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_945(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x12FCF
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_946(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x13026
{
	struct<3> Var0;
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_947(var uParam0, var uParam1)//Position - 0x13051
{
	struct<3> Var0;
	struct<3> Var1;
	if (*uParam0 <= *uParam1)
	{
		Var0.f_0 = *uParam0;
		Var1.f_0 = *uParam1;
	}
	else
	{
		Var0.f_0 = *uParam1;
		Var1.f_0 = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_948(bool bParam0)//Position - 0x13124
{
	if (!__LIB_1__::func_693(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_949()//Position - 0x1316D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2667225.f_368[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_950()//Position - 0x131FF
{
	Global_1941287 = 1;
	if (!BitTest(Global_2824440, 0))
	{
		MISC::SET_BIT(&Global_2824440, 0);
		MISC::SET_BIT(&Global_1941288, 0);
	}
	if (!BitTest(Global_2824440, 1))
	{
		MISC::SET_BIT(&Global_2824440, 1);
		MISC::SET_BIT(&Global_1941288, 1);
	}
	if (!BitTest(Global_2824440, 5))
	{
		MISC::SET_BIT(&Global_2824440, 5);
		MISC::SET_BIT(&Global_1941288, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

void func_951()//Position - 0x135DE
{
	MISC::SET_BIT(&(Global_2815059.f_5033), 0);
}

int func_952()//Position - 0x13678
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_953(bool bParam0)//Position - 0x136FC
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_954()//Position - 0x137E2
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 0;
	MISC::CLEAR_BIT(&(Global_2815059.f_4630), 1);
}

int func_955(int iParam0)//Position - 0x13804
{
	switch (iParam0)
	{
		case 136:
			return 1;
		default:
	}
	return 0;
}

void func_956(int iParam0)//Position - 0x1381E
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

int func_957(int iParam0)//Position - 0x138EB
{
	switch (iParam0)
	{
		case 134:
			return 21;
		case 254:
			return 25;
		default:
	}
	return 0;
}

int func_958(bool bParam0)//Position - 0x13C64
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

void func_959(struct<3> Param0, int iParam1, int iParam2)//Position - 0x13CB4
{
	Global_2667225.f_45.f_49 = { Param0 };
	Global_2667225.f_45.f_52 = iParam1;
	Global_2667225.f_45.f_53 = iParam2;
}

char* func_960(int iParam0)//Position - 0x141A1
{
	char* sVar0;
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING" /* GXT: EVENT START */;
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG" /* GXT: MOVING TARGET START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL" /* GXT: CHECKPOINTS START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ" /* GXT: LONGEST JUMP CHALLENGE START */;
			case 1:
				return "AST_CHALL_LS" /* GXT: LONGEST FREEFALL CHALLENGE START */;
			case 2:
				return "AST_CHALL_HS" /* GXT: HIGHEST SPEED CHALLENGE START */;
			case 3:
				return "AST_CHALL_LST" /* GXT: LONGEST STOPPIE CHALLENGE START */;
			case 4:
				return "AST_CHALL_LW" /* GXT: LONGEST WHEELIE CHALLENGE START */;
			case 5:
				return "AST_CHALL_NC" /* GXT: NO CRASHES CHALLENGE START */;
			case 6:
				return "AST_CHALL_LP" /* GXT: LOWEST PARACHUTE CHALLENGE START */;
			case 7:
				return "AST_CHALL_VS" /* GXT: VEHICLES STOLEN CHALLENGE START */;
			case 8:
				return "AST_CHALL_NM" /* GXT: NEAR MISSES CHALLENGE START */;
			case 9:
				return "AST_CHALL_RD" /* GXT: REVERSE DRIVING CHALLENGE START */;
			case 10:
				return "AST_CHALL_LF" /* GXT: LONGEST FALL SURVIVED CHALLENGE START */;
			case 11:
				return "AST_CHALL_LFL" /* GXT: LOW FLYING CHALLENGE START */;
			case 12:
				return "AST_CHALL_LFI" /* GXT: LOW FLYING INVERTED CHALLENGE START */;
			case 13:
				return "AST_CHALL_LB" /* GXT: LONGEST BAIL CHALLENGE START */;
			case 14:
				return "AST_CHALL_MB" /* GXT: MOST BRIDGES CHALLENGE START */;
			case 15:
				return "AST_CHALL_HSH" /* GXT: HEADSHOTS CHALLENGE START */;
			case 16:
				return "AST_CHALL_DB" /* GXT: DRIVE-BY CHALLENGE START */;
			case 17:
				return "AST_CHALL_ML" /* GXT: MELEE CHALLENGE START */;
			case 18:
				return "AST_CHALL_LSN" /* GXT: SNIPER KILLS CHALLENGE START */;
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED" /* GXT: PENNED IN START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL" /* GXT: HOLD THE WHEEL START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY" /* GXT: HOT PROPERTY START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP" /* GXT: DEAD DROP START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE" /* GXT: KING OF THE CASTLE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST" /* GXT: CRIMINAL DAMAGE START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF" /* GXT: KILL LIST START */;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST" /* GXT: HUNT THE BEAST START */;
	}
	return "";
}

void func_961(int iParam0)//Position - 0x143C0
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2815059.f_5032 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!BitTest(Global_2815059.f_5032, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2815059.f_5032 = 0;
			MISC::SET_BIT(&(Global_2815059.f_5032), 1);
		}
	}
}

bool func_962(int iParam0)//Position - 0x14860
{
	return Global_2703735.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_963(bool bParam0)//Position - 0x148A3
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 4);
	}
}

int func_964(int iParam0)//Position - 0x14C9C
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		default:
	}
	return 0;
}

int func_965(int iParam0)//Position - 0x14F52
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

void func_966(int iParam0)//Position - 0x15067
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

void func_967(int iParam0)//Position - 0x150D7
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_968(int iParam0)//Position - 0x15145
{
	if (Global_2689235[iParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[iParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_969(var uParam0)//Position - 0x151AA
{
	var uVar0;
	uVar0 = __LIB_1__::func_360(2483, -1, 0);
	return BitTest(uVar0, uParam0);
}

int func_970(int iParam0)//Position - 0x151C2
{
	switch (iParam0)
	{
		case 132:
			return 11;
		case 133:
			return 12;
		case 136:
			return 19;
		case 138:
			return 14;
		case 139:
			return 15;
		case 129:
			return 17;
		case 141:
			return 18;
		case 144:
			return 13;
		case 146:
			return 16;
		case 236:
			return 20;
		case 150:
			return 20;
		default:
	}
	return Global_262145.f_24170 /* Tunable: -1488550814 */;
}

void func_971(bool bParam0)//Position - 0x159AD
{
	if (bParam0)
	{
		if (Global_1836580 != 2)
		{
			Global_1836580 = 2;
		}
	}
	else
	{
		switch (Global_1836580)
		{
			case 0:
				Global_1836580 = 1;
				break;
			case 1:
				break;
			case 2:
				break;
			}
	}
}

void func_972(var uParam0, int iParam1, int iParam2)//Position - 0x15B20
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

var func_973(var uParam0, int iParam1)//Position - 0x15B42
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_974(var uParam0, int* iParam1)//Position - 0x15B8A
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_975()//Position - 0x15BBF
{
	if (Global_1836580 != 0)
	{
		Global_1836580 = 0;
	}
}

void func_976(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15C49
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
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

int func_977(int iParam0, bool bParam1, int iParam2)//Position - 0x15C86
{
	int iVar0;
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		case 1:
			return 49;
		default:
	}
	return iVar0;
}

bool func_978(var uParam0)//Position - 0x15DF4
{
	return BitTest(uParam0->f_33, 6);
}

bool func_979(var uParam0)//Position - 0x15E02
{
	return BitTest(uParam0->f_33, 5);
}

int func_980()//Position - 0x1605D
{
	int iVar0;
	if (Global_1836359)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_981()//Position - 0x16079
{
	int iVar0;
	iVar0 = 0;
	if (Global_1836359)
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_982(int iParam0)//Position - 0x163E8
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

char* func_983(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x16456
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB" /* GXT: m */;
				}
				else if (bParam2)
				{
					return "AMCH_M" /* GXT: ~1~m */;
				}
				else
				{
					return "AMCH_METRES" /* GXT:  meters */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB" /* GXT: ft */;
			}
			else if (bParam2)
			{
				return "AMCH_FT" /* GXT: ~1~ft */;
			}
			else
			{
				return "AMCH_FEET" /* GXT:  feet */;
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB" /* GXT: km/h */;
				}
				else if (bParam2)
				{
					return "AMCH_KMHN" /* GXT: ~1~km/h */;
				}
				else
				{
					return "AMCH_KMH" /* GXT:  km/h */;
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB" /* GXT: mph */;
			}
			else if (bParam2)
			{
				return "AMCH_MPHN" /* GXT: ~1~mph */;
			}
			else
			{
				return "AMCH_MPH" /* GXT:  mph */;
			}
			break;
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH" /* GXT:  vehicles */;
			}
			break;
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS" /* GXT:  kills */;
			}
			else
			{
				return "AMCH_KILL" /* GXT:  kill */;
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY" /* GXT: ~r~~s~ */;
}

float func_984(float fParam0)//Position - 0x166D6
{
	return (fParam0 / 1.609344f);
}

float func_985(float fParam0)//Position - 0x166E6
{
	return (fParam0 / 0.3048f);
}

int func_986(int iParam0)//Position - 0x166F6
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

int func_987(bool bParam0)//Position - 0x167F4
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1660984)
	{
		if (Global_1660951[iVar0] == bParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_988(bool bParam0)//Position - 0x16AF2
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 22);
}

int func_989(bool bParam0)//Position - 0x16B08
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1892703[bParam0 /*599*/].f_1, 10) || BitTest(Global_1892703[bParam0 /*599*/].f_1, 9));
	}
	return 0;
}

void func_990(int* iParam0, int iParam1, int iParam2)//Position - 0x16ECF
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_991(bool bParam0)//Position - 0x16EFD
{
	if (bParam0)
	{
		if (Global_1648031.f_2 == 0)
		{
			Global_1648031.f_2 = 1;
		}
	}
	else if (Global_1648031.f_2 == 1)
	{
		Global_1648031.f_2 = 0;
	}
}

int func_992()//Position - 0x16F4E
{
	if (BitTest(Global_2815059.f_4657, 0) && __LIB_1__::func_515())
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_4657, 1) && __LIB_1__::func_515())
	{
		return 1;
	}
	return 0;
}

int func_993()//Position - 0x16F89
{
	if (__LIB_1__::func_515())
	{
		if (__LIB_1__::func_256(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_994()//Position - 0x16FB0
{
	if (__LIB_1__::func_515())
	{
		if (__LIB_1__::func_260(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_995(int iParam0)//Position - 0x16FD7
{
	if (Global_1648031.f_1 != Global_1648031)
	{
		Global_1648031.f_1 = Global_1648031;
	}
	if (Global_1648031 != iParam0)
	{
		Global_1648031 = iParam0;
	}
}

int func_996()//Position - 0x172D8
{
	return Global_1836358;
}

void func_997(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17498
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_998(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17A02
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
		}
		else if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) == 133)
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
		__LIB_0__::do_TEXT_COMMAND_SCALEFORM_STRING("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_999()//Position - 0x17C34
{
	return Global_1853221;
}
