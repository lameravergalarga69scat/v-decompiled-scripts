void func_0(var uParam0, int iParam1)//Position - 0x416F9
{
	*uParam0 = iParam1;
}

void func_1(int* iParam0, int iParam1)//Position - 0x41706
{
	*iParam0 = iParam1;
}

void func_2(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x41713
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

void func_3()//Position - 0x41767
{
	if (Global_2703735.f_2400[0 /*80*/].f_2 != 0)
	{
		Global_2703735.f_2400[0 /*80*/].f_2 = 5;
	}
}

int func_4(int* iParam0, int iParam1)//Position - 0x417AE
{
	if (iParam1 == 2)
	{
		return -1;
	}
	return iParam0->f_15[iParam1];
}

bool func_5(int* iParam0, int iParam1)//Position - 0x418CD
{
	return BitTest(iParam0->f_18, iParam1);
}

char* func_6(bool bParam0, char* sParam1, char* sParam2)//Position - 0x418DC
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_7(int* iParam0)//Position - 0x41AFD
{
	return iParam0->f_1;
}

int func_8(var uParam0)//Position - 0x41BE2
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

void func_9(var uParam0)//Position - 0x41CB0
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

int func_10(var uParam0)//Position - 0x41D3D
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

void func_11(var uParam0)//Position - 0x41D79
{
	*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false, -1);
}

void func_12(var* uParam0, struct<3> Param1)//Position - 0x41DED
{
	uParam0->f_3 = { Param1 };
}

Vector3 func_13(struct<3> Param0, int iParam1)//Position - 0x41DFF
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

void func_14(var* uParam0, struct<3> Param1)//Position - 0x41E5D
{
	uParam0->f_6 = { Param1 };
}

int func_15(int* iParam0)//Position - 0x41E6F
{
	return iParam0->f_14;
}

int func_16(int* iParam0)//Position - 0x41E7B
{
	return *iParam0;
}

int func_17()//Position - 0x42056
{
	if (Global_2667225.f_2879 > -1)
	{
		return 1;
	}
	return 0;
}

int func_18(int iParam0)//Position - 0x42292
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
		else if (((Global_1575058 || Global_2667225.f_2680) && iParam0 == PLAYER::PLAYER_ID()) && __LIB_0__.func_154(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6;
		}
	}
	return -1;
}

bool func_19()//Position - 0x4285F
{
	return Global_4718592 == 3;
}

bool func_20(var uParam0, int iParam1)//Position - 0x42896
{
	return BitTest(uParam0->f_21, iParam1);
}

void func_21(int iParam0)//Position - 0x42A3F
{
	Global_1057410 = iParam0;
}

bool func_22(var uParam0, int iParam1)//Position - 0x42A4D
{
	return BitTest(uParam0->f_489, iParam1);
}

void func_23(var uParam0, int iParam1, bool bParam2)//Position - 0x42B32
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

int func_24(int iParam0)//Position - 0x42BCE
{
	return iParam0->f_11;
}

void func_25(var uParam0)//Position - 0x42C84
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

var func_26(int iParam0)//Position - 0x42F8A
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * __LIB_0__.func_138(BitTest(iParam0, 31), -1, 1)) + 2011;
}

void func_27(int iParam0)//Position - 0x437E5
{
	Global_1057409 = iParam0;
}

void func_28(var uParam0, int iParam1, bool bParam2)//Position - 0x437F3
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

int func_29(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x43C06
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
				Var2 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
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

void func_30(int* iParam0)//Position - 0x43D9C
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
}

bool func_31(int iParam0)//Position - 0x43E41
{
	return iParam0 == 10;
}

void func_32()//Position - 0x43E4E
{
	__LIB_0__.func_731(1);
	__LIB_0__.func_730(4, 0, -1);
	__LIB_0__.func_730(6, 0, -1);
	__LIB_0__.func_730(7, 0, -1);
	__LIB_0__.func_730(3, 0, -1);
	__LIB_0__.func_730(1, 0, -1);
	__LIB_0__.func_730(2, 0, -1);
	__LIB_0__.func_730(11, 0, -1);
	__LIB_0__.func_730(13, 0, -1);
	__LIB_0__.func_730(14, 0, -1);
	__LIB_0__.func_730(16, 0, -1);
}

int func_33(int iParam0)//Position - 0x44205
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__.func_5();
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

void func_34(var* uParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x451C1
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

void func_35(var uParam0, int iParam1)//Position - 0x453DC
{
	if (iParam1 < 1)
	{
		return;
	}
	uParam0->f_8 = iParam1;
}

int func_36(var uParam0)//Position - 0x45464
{
	return uParam0->f_8;
}

void func_37(var uParam0)//Position - 0x4E7
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_38(int iParam0)//Position - 0x1B9C
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

void func_39(int iParam0, int iParam1, int iParam2)//Position - 0x2AB1
{
	if (iParam2 == -1)
	{
		iParam2 = __LIB_0__.func_5();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
}

int func_40(int iParam0)//Position - 0x2C04
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278;
	}
	return 0;
}

bool func_41()//Position - 0x4538
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 0);
}

int func_42(int iParam0)//Position - 0x66EC
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

int func_43(int iParam0)//Position - 0x6726
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

int func_44(int iParam0, bool bParam1)//Position - 0x676C
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

int func_45(int iParam0)//Position - 0x6809
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

void func_46(var uParam0)//Position - 0x906
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_47(int iParam0)//Position - 0x26F3
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

int func_48(int iParam0)//Position - 0x273D
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

void func_49()//Position - 0x29A5
{
	if (HUD::DOES_BLIP_EXIST(iLocal_47))
	{
		HUD::REMOVE_BLIP(&iLocal_47);
	}
}

void func_50(int iParam0, int iParam1)//Position - 0x3CA
{
	if (Global_2703735.f_3572[iParam0] < iParam1)
	{
		Global_2703735.f_3572[iParam0] = iParam1;
	}
	MISC::SET_BIT(&(Global_2703735.f_3571), iParam0);
}

char* func_51(int iParam0)//Position - 0x137B
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

char* func_52(int iParam0)//Position - 0x1405
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

int func_53(var uParam0)//Position - 0x355E
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

void func_54(var uParam0)//Position - 0x3587
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_0__.func_580(uParam0, 0, 0);
		}
	}
}

void func_55(int iParam0, var uParam1)//Position - 0x3CD3
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_56(var uParam0)//Position - 0x3D20
{
	uParam0->f_692 = 0;
}

int func_57(var uParam0)//Position - 0x3D2E
{
	return uParam0->f_692;
}

void func_58(var uParam0)//Position - 0x3E16
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

struct<9> func_59()//Position - 0x3EF7
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

void func_60()//Position - 0x408A
{
	Global_2826521.f_258 = 1;
}

void func_61(var uParam0, var uParam1)//Position - 0x1745
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

int func_62(int iParam0)//Position - 0x178F
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

int func_63(int iParam0)//Position - 0x3B15
{
	if (__LIB_0__.func_154(iParam0, 0, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_64(struct<3> Param0, var uParam1)//Position - 0x3B42
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

int func_65(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3CC9
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

int func_66(float fParam0)//Position - 0x3D74
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

void func_67(struct<3> Param0)//Position - 0x4355
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

void func_68(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x440A
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

void func_69(var uParam0, struct<3> Param1)//Position - 0x44A9
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

void func_70(var uParam0)//Position - 0x452B
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

void func_71(var uParam0, float fParam1)//Position - 0x4598
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

int func_72()//Position - 0x461B
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

float func_73(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x5010
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

int func_74(struct<3> Param0, var uParam1, var uParam2)//Position - 0x5C65
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

int func_75(int iParam0)//Position - 0x5ED5
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

int func_76(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x608E
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

int func_77(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x6328
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

int func_78(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, float fParam4)//Position - 0x63F2
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

int func_79(struct<3> Param0)//Position - 0x6564
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

int func_80(struct<3> Param0, var uParam1, var uParam2, float fParam3)//Position - 0x6661
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

int func_81(struct<3> Param0, float fParam1, int iParam2)//Position - 0x67F2
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

int func_82(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6BD4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (__LIB_0__.func_154(iVar1, 0, 1) && __LIB_0__.func_154(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (__LIB_0__.func_154(iVar1, 0, 1) && __LIB_0__.func_154(iParam2, 0, 1))
				{
					if (Global_2680265.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(__LIB_0__.func_85(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (__LIB_0__.func_154(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(__LIB_0__.func_85(iVar1), Param0) < 1f)
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

bool func_83(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6FB0
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

int func_84(int iParam0)//Position - 0x7170
{
	if ((Global_2667225.f_489 == 9 || Global_2667225.f_489 == 9) || (Global_2667225.f_489 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

var func_85()//Position - 0x7977
{
	return Global_1573131.f_4;
}

bool func_86(int iParam0)//Position - 0x9C8C
{
	return iParam0 == 50;
}

void func_87(float fParam0, float fParam1)//Position - 0x9C99
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2667225.f_2474 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_2472 = 1;
	Global_2667225.f_2475 = NETWORK::GET_NETWORK_TIME();
}

void func_88()//Position - 0x9DFA
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

void func_89()//Position - 0x9E32
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

void func_90()//Position - 0x9E61
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

void func_91()//Position - 0x9E8F
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

void func_92()//Position - 0x9ECB
{
	struct<6> Var0;
	Var0.f_3 = -1;
	Global_2667225.f_2491 = { Var0 };
}

void func_93()//Position - 0x9EE9
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

void func_94()//Position - 0xA1C9
{
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
}

void func_95(int iParam0)//Position - 0xB3B6
{
	int iVar0;
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

void func_96(var uParam0)//Position - 0xB463
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

int func_97()//Position - 0xB5A1
{
	return Local_60.f_0;
}

int func_98(int iParam0)//Position - 0xB5CD
{
	return Local_62[iParam0 /*3*/];
}

int func_99(int iParam0)//Position - 0xB704
{
	return Global_1853348[iParam0 /*834*/];
}

int func_100(int iParam0)//Position - 0x15FC
{
	switch (iParam0)
	{
		case 0:
			return 11353;
		default:
	}
	return 11353;
}

int func_101(var uParam0, var uParam1)//Position - 0x1C2D
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

int func_102(int iParam0)//Position - 0x1F77
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

void func_103(bool bParam0, bool bParam1)//Position - 0x24EA
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

int func_104(int iParam0, bool bParam1)//Position - 0x37EA
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

int func_105(int iParam0)//Position - 0x7102
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_106()//Position - 0x1E6
{
	return Local_101.f_6;
}

void func_107(int iParam0)//Position - 0x1F2
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_1 = iParam0;
}

int func_108()//Position - 0x289
{
	return Local_101.f_17;
}

void func_109(int iParam0)//Position - 0x356
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_6 = iParam0;
}

int func_110()//Position - 0x56D
{
	return Local_101.f_7;
}

bool func_111(int iParam0)//Position - 0x1012
{
	return iParam0 == 998;
}

var func_112(int iParam0, int iParam1)//Position - 0x1073
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_6, iParam1);
}

bool func_113(int iParam0, bool bParam1)//Position - 0x112C
{
	if (!bParam1)
	{
		if (__LIB_0__.func_581(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__.func_160();
}

void func_114(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1434
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

int func_115(int iParam0)//Position - 0x15CB
{
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_116()//Position - 0x165E
{
	return Local_101.f_1;
}

void func_117(int iParam0)//Position - 0x166A
{
	Local_101.f_0 = iParam0;
}

int func_118(int iParam0)//Position - 0xA6D1
{
	if (!__LIB_0__.func_114() && func_142(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_119(int iParam0)//Position - 0xAA1A
{
	if (!Global_262145.f_4711 /* Tunable: DISABLE_RAMMING_SOOP_AND_RAMP */)
	{
		VEHICLE::SET_ALLOW_RAMMING_SOOP_OR_RAMP(iParam0, 0);
	}
}

void func_120(var uParam0, struct<3> Param1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0xE5D3
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
			__LIB_0__.func_602(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			__LIB_0__.func_602(&Var0, 0f, 0f, fParam5);
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

int func_121(struct<3> Param0)//Position - 0x182E6
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
		if (__LIB_0__.func_615(Param0, &(Global_2674547[iVar0 /*7*/])))
		{
			Global_2667225.f_2907 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667225.f_2907 = -1;
	return -1;
}

int func_122()//Position - 0x187AA
{
	if (!Global_2667225.f_606 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__.func_638(0))
	{
		return 1;
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x18C90
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), iParam0);
}

void func_124(int iParam0)//Position - 0x18D39
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_101.f_7 = iParam0;
}

void func_125(int iParam0)//Position - 0x192A5
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_6), iParam0);
}

int func_126(int iParam0, int iParam1)//Position - 0x19A13
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

void func_127(int* iParam0)//Position - 0x19B38
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

void func_128(var uParam0)//Position - 0x1A1A9
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

int func_129()//Position - 0x1A50A
{
	return BitTest(Global_2714762, 7);
}

void func_130(int iParam0)//Position - 0x1A9FC
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

void func_131(var uParam0)//Position - 0x1AA9F
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

void func_132(int iParam0, int iParam1)//Position - 0x1AAE9
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_133(int iParam0, int iParam1)//Position - 0x1ABE7
{
	return (iParam0 && iParam1) != 0;
}

int func_134()//Position - 0x1AC6C
{
	return 90;
}

int func_135()//Position - 0x1AD38
{
	return SYSTEM::ROUND(800f);
}

int func_136()//Position - 0x1ADAD
{
	return 7000;
}

void func_137(int iParam0)//Position - 0x3B54F
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

void func_138(int iParam0, var uParam1)//Position - 0x3B61E
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

var func_139(int iParam0)//Position - 0x3B825
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_0__.func_592(iParam0);
	__LIB_0__.func_591(iVar1, &uVar0);
	return uVar0;
}

void func_140(var uParam0)//Position - 0x3C27B
{
	__LIB_0__.func_14(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_141()//Position - 0x3C323
{
	Global_2715699.f_4316.f_780 = 1;
}

void func_142()//Position - 0x3C336
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
}

int func_143(int iParam0, int iParam1)//Position - 0x3C3FB
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (Global_1892703[iParam0 /*599*/].f_10.f_26 != __LIB_0__.func_160())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10.f_26;
		}
	}
	return 0;
}

int func_144(int iParam0, int iParam1)//Position - 0x3C47E
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (iParam0 != __LIB_0__.func_160())
		{
			if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__.func_160())
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

bool func_145()//Position - 0x3C4C3
{
	return __LIB_0__.func_581(PLAYER::PLAYER_ID());
}

float func_146()//Position - 0x3C9F6
{
	return 20f;
}

float func_147(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x3EF66
{
	return SYSTEM::VDIST2(Param0.f_0, Param0.f_1, 0f, Param2.f_0, Param2.f_1, 0f);
}

bool func_148(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x3EF80
{
	return SYSTEM::VDIST2(Param0, Param1) <= (fParam2 * fParam2);
}

float func_149(int iParam0)//Position - 0x3FD35
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

Vector3 func_150(int iParam0)//Position - 0x3FDCD
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

int func_151(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x3FEF3
{
	if ((Param0.f_0 >= Param2.f_0 && Param0.f_0 <= Param4.f_0) && (Param0.f_1 >= Param2.f_1 && Param0.f_1 <= Param4.f_1))
	{
		return 1;
	}
	return 0;
}

int func_152(struct<3> Param0, struct<3> Param1)//Position - 0x3FF2E
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

int func_153(struct<3> Param0)//Position - 0x3FF73
{
	char* sVar0;
	sVar0 = ZONE::GET_NAME_OF_ZONE(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, sVar0) || MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, sVar0)) || MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, sVar0)) || MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, sVar0)) || MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, sVar0)) || MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, sVar0)) || MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, sVar0)) || MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, sVar0)) || MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, sVar0)) || MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, sVar0)) || MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, sVar0)) || MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, sVar0)) || MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, sVar0)) || MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, sVar0)) || MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, sVar0)) || MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, sVar0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0)//Position - 0x40408
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

int func_155(int iParam0, bool bParam1, bool bParam2)//Position - 0x40441
{
	if (iParam0 == __LIB_0__.func_160())
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

int func_156()//Position - 0x4070A
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_157(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x40C49
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

int func_158(int iParam0)//Position - 0x40EDB
{
	switch (iParam0)
	{
		case 1:
			return 0;
		default:
	}
	return 1;
}

bool func_159()//Position - 0x4102D
{
	return Global_2703735.f_2400[0 /*80*/].f_1 != 0;
}

int func_160()//Position - 0x41418
{
	return 9;
}

int func_161()//Position - 0x41857
{
	return Local_101.f_0;
}

void func_162(int iParam0)//Position - 0x42083
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

Vector3 func_163(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x6D37A
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

int func_164()//Position - 0x6E4DA
{
	return 12;
}

int func_165()//Position - 0x71C6F
{
	if (Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_2;
}

int func_166(int iParam0)//Position - 0x7328E
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

void func_167()//Position - 0x75248
{
	__LIB_0__.func_731(0);
	__LIB_0__.func_730(4, 1, -1);
	__LIB_0__.func_730(6, 1, -1);
	__LIB_0__.func_730(7, 1, -1);
	__LIB_0__.func_730(3, 1, -1);
	__LIB_0__.func_730(1, 1, -1);
	__LIB_0__.func_730(2, 1, -1);
	__LIB_0__.func_730(11, 1, -1);
	__LIB_0__.func_730(13, 1, -1);
	__LIB_0__.func_730(14, 1, -1);
	__LIB_0__.func_730(16, 1, -1);
}

bool func_168()//Position - 0x75401
{
	return Global_1946250.f_4533 != -1;
}

bool func_169()//Position - 0x756BF
{
	return __LIB_0__.func_137(28256, -1);
}

float func_170(var uParam0, float fParam1)//Position - 0x769C3
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

Vector3 func_171(var uParam0, var uParam1, struct<3> Param2)//Position - 0x76A01
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, *uParam1, Param2);
}

int func_172(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x98DBA
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!__LIB_0__.func_78(Global_1946167, 0f, 0f, 0f, 0) && !__LIB_0__.func_78(Global_1946170, 0f, 0f, 0f, 0)) && !__LIB_0__.func_78(Global_1946173, 0f, 0f, 0f, 0)) && !Global_1946176 == 0f)
	{
		*uParam2 = { Global_1946167 };
		*uParam3 = { Global_1946170 };
		*uParam4 = { Global_1946173 };
		*uParam5 = Global_1946176;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.425f;
			break;
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("zr350"):
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		case joaat("calico"):
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("comet6"):
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("warrener2"):
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("remus"):
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("vectre"):
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("dominator7"):
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("cypher"):
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("sultan3"):
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("previon"):
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("dominator8"):
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("futo2"):
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("euros"):
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("growler"):
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("champion"):
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("granger2"):
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("deity"):
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("baller7"):
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("zeno"):
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		case joaat("comet7"):
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("astron"):
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("patriot3"):
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		case joaat("jubilee"):
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("shinobi"):
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.045f;
			break;
		case joaat("reever"):
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		case joaat("iwagen"):
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("brioso3"):
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("corsita"):
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("greenwood"):
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("kanjosj"):
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("postlude"):
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("rhinehart"):
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		case joaat("tenf"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("tenf2"):
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("torero2"):
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		case joaat("vigero2"):
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("weevil2"):
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		case joaat("draugur"):
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("ruiner4"):
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.28f;
			break;
		case joaat("sentinel4"):
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		case joaat("sm722"):
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		case joaat("omnisegt"):
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
	}
	return 1;
}

int func_173(var uParam0)//Position - 0x9E71D
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_174(int iParam0)//Position - 0xA10F0
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

var func_175()//Position - 0xA1F4E
{
	return Global_2714762.f_735;
}

int func_176(int iParam0)//Position - 0xA1F6E
{
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		return 1;
	}
	return 0;
}

int func_177(int iParam0)//Position - 0xAAC9F
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

int func_178(int iParam0)//Position - 0xAB9DE
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_179(int iParam0)//Position - 0xABA84
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

int func_180(int iParam0)//Position - 0xABB03
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

int func_181(var uParam0)//Position - 0xABB94
{
	int iVar0;
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

int func_182(int iParam0)//Position - 0xABBB7
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892703[iVar0 /*599*/];
	}
	return -1;
}

int func_183(int iParam0)//Position - 0xAC4A4
{
	if (__LIB_0__.func_121(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_184(int iParam0)//Position - 0xAC7B3
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

int func_185(int iParam0)//Position - 0xB2792
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

int func_186(int iParam0)//Position - 0xB7ED6
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

int func_187(int iParam0)//Position - 0xB7F1F
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_188(int iParam0)//Position - 0xB8EEC
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

int func_189(int iParam0)//Position - 0xB905C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

bool func_190(int iParam0)//Position - 0xB9B4D
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

void func_191(bool bParam0)//Position - 0xBE3F0
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

var func_192(var uParam0)//Position - 0xC76EC
{
	return uParam0;
}

void func_193(bool bParam0, bool bParam1)//Position - 0xC7E86
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

int func_194(int iParam0)//Position - 0xCD7C4
{
	if (Global_2689235[iParam0 /*453*/].f_215 != 0)
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0xD0B51
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

int func_196(int iParam0)//Position - 0xD0B98
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_465;
	}
	return 0;
}

int func_197(int iParam0)//Position - 0xDAB4D
{
	if (__LIB_0__.func_121(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, int iParam1, int iParam2)//Position - 0xDAB7E
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

void func_199()//Position - 0x10A494
{
	Global_78291 = 0;
	Global_78292 = -1;
	Global_78293 = -1;
	Global_78294 = -1;
	Global_78295 = -1;
	Global_78299 = -1;
}

int func_200(int iParam0)//Position - 0x10B146
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

int func_201(int iParam0)//Position - 0x11675B
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

int func_202(int iParam0)//Position - 0x1167F4
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

bool func_203()//Position - 0x11723F
{
	return Global_2714762.f_841;
}

int func_204(int iParam0)//Position - 0x117F4B
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

int func_205(int iParam0)//Position - 0x11B4FF
{
	return Global_1911933[iParam0 /*260*/].f_259;
}

var func_206()//Position - 0x124EF5
{
	return BitTest(Global_1574942, 4);
}

int func_207()//Position - 0x125ED6
{
	return Global_1574632.f_19;
}

void func_208(int iParam0)//Position - 0x125EE4
{
	if (Global_1574632.f_19 != iParam0)
	{
		Global_1574632.f_19 = iParam0;
	}
}

int func_209()//Position - 0x126024
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

void func_210()//Position - 0x127A95
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

bool func_211(int iParam0)//Position - 0x127C41
{
	return iParam0 == 65;
}

bool func_212()//Position - 0x127C75
{
	return BitTest(Global_2715699.f_1.f_2809, 12);
}

void func_213()//Position - 0x1283EC
{
	Global_2667225.f_45.f_320 = 1;
}

void func_214()//Position - 0x12868F
{
	Global_2815059.f_6776 = -1;
}

bool func_215()//Position - 0x1287C5
{
	return BitTest(Global_2714762.f_43.f_4, 0);
}

int func_216()//Position - 0x1287D7
{
	return Global_2714762.f_43.f_40;
}

bool func_217()//Position - 0x1287F7
{
	return Global_1931975.f_1767;
}

int func_218(int iParam0)//Position - 0x132C0F
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

int func_219(int iParam0)//Position - 0x132C61
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_408;
	}
	return 0;
}

bool func_220(int iParam0)//Position - 0x13C4E9
{
	return __LIB_1__.func_112(iParam0, 3);
}

bool func_221()//Position - 0x13C92A
{
	return Global_1946250.f_4716 != -1;
}

int func_222(int iParam0)//Position - 0x1416C1
{
	if (iParam0 == 1)
	{
		return 124;
	}
	return -1;
}

int func_223(int iParam0)//Position - 0x1416D5
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384;
	}
	return 0;
}

var func_224()//Position - 0x1457C3
{
	return Global_1836579;
}

void func_225()//Position - 0x1458BA
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

void func_226(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x146B15
{
	Param0.f_0 = -1529596656;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_227(int iParam0)//Position - 0x151E3F
{
	if (iParam0 == 1)
	{
		return 122;
	}
	return -1;
}

int func_228(int iParam0)//Position - 0x151E53
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_353;
	}
	return 0;
}

int func_229(int iParam0)//Position - 0x1550EE
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 4);
	}
	return 0;
}

int func_230(int iParam0)//Position - 0x166DAC
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_295;
	}
	return 0;
}

int func_231(int iParam0)//Position - 0x166DD0
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

int func_232()//Position - 0x16A271
{
	return Global_2667225.f_2669;
}

int func_233(int iParam0)//Position - 0x16A42F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285 != 0;
	}
	return 0;
}

int func_234(int iParam0)//Position - 0x17389A
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336;
	}
	return 0;
}

int func_235(int iParam0)//Position - 0x17562F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_295 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x17FF2F
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return iParam0;
	}
	return Global_2689235[iParam0 /*453*/].f_318.f_9;
}

int func_237(int iParam0)//Position - 0x184875
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 6);
	}
	return 0;
}

var func_238()//Position - 0x1850DA
{
	return BitTest(Global_2714762, 1);
}

var func_239()//Position - 0x1850E8
{
	return BitTest(Global_2714762, 2);
}

var func_240()//Position - 0x1850F6
{
	return BitTest(Global_2714762, 20);
}

var func_241()//Position - 0x185114
{
	return Global_1575025;
}

int func_242(int iParam0)//Position - 0x19259F
{
	if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_243(int iParam0)//Position - 0x1945B0
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

int func_244(int iParam0)//Position - 0x19463E
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_285;
}

void func_245(bool bParam0)//Position - 0x19890C
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

int func_246(int iParam0)//Position - 0x19AE70
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

int func_247(int iParam0)//Position - 0x19AEEA
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278 != 0;
	}
	return 0;
}

int func_248(int iParam0)//Position - 0x19B35A
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

Vector3 func_249(struct<3> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x19C4C2
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

int func_250(int iParam0)//Position - 0x19ED18
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

int func_251(int iParam0)//Position - 0x1ABF6B
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 6);
	}
	return 0;
}

void func_252(int iParam0, var uParam1)//Position - 0x1AD512
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

int func_253(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x1ADF62
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

void func_254(int iParam0)//Position - 0x1AE005
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

bool func_255()//Position - 0x1AE07D
{
	return ((BitTest(Global_4718592.f_30, 12) && BitTest(Global_1965531, 12)) && Global_1965530 == 8);
}

void func_256()//Position - 0x1AE189
{
	Global_2824571.f_92 = 1;
}

int func_257(int iParam0)//Position - 0x1BC04A
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

void func_258()//Position - 0x1BC3E7
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

int func_259(int iParam0)//Position - 0x1C30A6
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_15;
	}
	return -1;
}

int func_260(int iParam0)//Position - 0x1E3D0E
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

int func_261()//Position - 0x1EE51F
{
	return Global_2671449;
}

int func_262(var uParam0, int iParam1, struct<3> Param2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x1EEF70
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

int func_263(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x1EFF14
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

int func_264(bool bParam0, bool bParam1, bool bParam2)//Position - 0x610
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

Vector3 func_265(bool bParam0)//Position - 0x148B
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false);
}

int func_266(int iParam0, int iParam1)//Position - 0x33E6
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

struct<13> func_267(bool bParam0)//Position - 0x4A35
{
	struct<13> Var0;
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(bParam0, &Var0, 13);
	return Var0;
}

void func_268()//Position - 0x52D3
{
	MISC::SET_BIT(&(Global_1574757.f_59), 1);
}

void func_269(bool bParam0)//Position - 0x52E6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574757.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574757.f_59), 0);
}

void func_270()//Position - 0x530C
{
	Global_1574757.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574757.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_271(bool bParam0)//Position - 0x5342
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

void func_272()//Position - 0x53FD
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

int func_273()//Position - 0x566F
{
	if (Global_1574757 == 20)
	{
		return 0;
	}
	return 1;
}

void func_274()//Position - 0x5BB2
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

int func_275(int iParam0)//Position - 0x7A28
{
	int iVar0;
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((__LIB_0__.func_785(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

var func_276(bool bParam0)//Position - 0x8D88
{
	var uVar0;
	if (bParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, bParam0);
	}
	return uVar0;
}

void func_277(var uParam0, var uParam1)//Position - 0x9064
{
	*uParam0 = Global_1920255.f_9;
	*uParam1 = Global_1920255.f_10;
}

void func_278(char* sParam0, int iParam1)//Position - 0xA12F
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_279(int iParam0)//Position - 0xA160
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_5, 4);
	}
	return 0;
}

int func_280()//Position - 0xB082
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

int func_281()//Position - 0xB0A6
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

var func_282()//Position - 0xBDCD
{
	return Global_2621446.f_3;
}

float func_283(float fParam0, float fParam1)//Position - 0xC12F
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_284()//Position - 0xC79E
{
	if (__LIB_1__.func_156())
	{
		Global_2703735.f_833.f_16 = 1;
	}
}

void func_285(int iParam0)//Position - 0xFFCF
{
	Global_100493.f_196[iParam0] = 1;
	Global_100493.f_195 = 1;
}

int func_286(var uParam0)//Position - 0x13EF3
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

bool func_287(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x14009
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

bool func_288()//Position - 0x14585
{
	return Global_2788198;
}

int func_289()//Position - 0x1459D
{
	if (Global_4718592 == 6)
	{
		return 1;
	}
	return 0;
}

Vector3 func_290(int iParam0)//Position - 0x1557E
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

int func_291()//Position - 0x159EE
{
	if (BitTest(Global_1946250.f_2, 13) || Global_1946250.f_3281)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x15D4A
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_191[5 /*13*/];
}

Vector3 func_293(int iParam0)//Position - 0x15EE6
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

int func_294(int iParam0, int iParam1)//Position - 0x16756
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_295(var uParam0, bool bParam1, bool bParam2)//Position - 0x167C0
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

bool func_296(int iParam0)//Position - 0x171AC
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 11);
}

int func_297(int iParam0)//Position - 0x172CC
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

bool func_298(int iParam0, int iParam1)//Position - 0x1774E
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_5, iParam1);
}

bool func_299(int iParam0)//Position - 0x1965B
{
	return Global_2689235[iParam0 /*453*/].f_119 == 4;
}

bool func_300()//Position - 0x1969A
{
	return Global_4718592.f_1 == 0;
}

int func_301()//Position - 0x19BE7
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_35;
}

bool func_302(int iParam0)//Position - 0x1A680
{
	return BitTest(Global_2815059.f_5195.f_47, iParam0);
}

int func_303(int iParam0)//Position - 0x1A79B
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

void func_304()//Position - 0x1B2F3
{
	Global_2815059.f_4599 = 0;
}

bool func_305()//Position - 0x1B43C
{
	return BitTest(Global_2815059.f_5033, 0);
}

bool func_306()//Position - 0x1B55D
{
	return BitTest(Global_2714762.f_2, 27);
}

var func_307()//Position - 0x1B5BB
{
	return BitTest(Global_2714762, 5);
}

void func_308()//Position - 0x1C3EC
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_714), &(Global_2667225.f_1233), 519);
	Global_2667225.f_490 = { Global_2667225.f_496 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		Global_2667225.f_1752 = 0;
	}
}

int func_309()//Position - 0x1C434
{
	if ((Global_2667225.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_1233.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_1233.f_518))
	{
		return 1;
	}
	return 0;
}

int func_310()//Position - 0x1C545
{
	if ((Global_2667225.f_1753 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_714.f_518))
	{
		return 1;
	}
	return 0;
}

void func_311()//Position - 0x1C5A9
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

float func_312(char* sParam0)//Position - 0x26C8
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_313(int iParam0)//Position - 0x2810
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

bool func_314(int iParam0, int iParam1)//Position - 0x296C
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

void func_315(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x312E
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

void func_316(int iParam0, bool bParam1)//Position - 0x33B8
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

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3443
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_318(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3482
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

void func_319(char* sParam0)//Position - 0x3587
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

bool func_320(var uParam0)//Position - 0x3C09
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

int func_321()//Position - 0xBCD4
{
	return Global_1920255;
}

int func_322(int iParam0)//Position - 0xBD44
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

int func_323(int iParam0)//Position - 0xC711
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

bool func_324(int iParam0)//Position - 0xCAFE
{
	return iParam0 == 49;
}

int func_325(int iParam0)//Position - 0xCB0B
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

int func_326(int iParam0, bool bParam1)//Position - 0xCBBA
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

void func_327(int iParam0, int iParam1, bool bParam2)//Position - 0xCC33
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

Vector3 func_328(int iParam0)//Position - 0xD6C6
{
	return Global_4280768[iParam0 /*45*/].f_4;
}

int func_329()//Position - 0xD6DA
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1958711.f_20;
	}
	return -1;
}

int func_330(int iParam0)//Position - 0xD6F4
{
	if (iParam0 > -1 && iParam0 < 42)
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0, int iParam1)//Position - 0xD848
{
	if ((Global_4282659[iParam0 /*10*/].f_6 && iParam1) != 0)
	{
		return 1;
	}
	return 0;
}

int func_332(int iParam0)//Position - 0xD866
{
	return Global_2683918[iParam0 /*3*/];
}

bool func_333(int iParam0)//Position - 0xD876
{
	return Global_2689235[iParam0 /*453*/].f_269;
}

int func_334(int iParam0)//Position - 0x1126C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_335(int iParam0, bool bParam1)//Position - 0x112B3
{
	int iVar0;
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1 && Global_2689235[iParam0 /*453*/].f_318.f_9 != __LIB_0__.func_160())
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_336(int iParam0, bool bParam1)//Position - 0x114D5
{
	if (__LIB_0__.func_154(iParam0, 0, 1))
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

int func_337(int iParam0)//Position - 0x11522
{
	if (__LIB_0__.func_292(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_182;
	}
	return -1;
}

bool func_338(int iParam0)//Position - 0x115CE
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 4);
}

int func_339(int iParam0)//Position - 0x1163C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 4;
			}
		}
	}
	return 0;
}

bool func_340()//Position - 0x11C29
{
	return __LIB_0__.func_137(22067, -1);
}

int func_341(int iParam0)//Position - 0x11F31
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

void func_342(char* sParam0, int iParam1, int iParam2)//Position - 0x1201A
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

bool func_343()//Position - 0x120D3
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 253 /*INPUT_CREATOR_RT*/) && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 252 /*INPUT_CREATOR_LT*/));
	}
	return (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/) && PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/));
}

void func_344(int iParam0, char* sParam1, int iParam2)//Position - 0x1235A
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

void func_345(int iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x12409
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

int func_346(int iParam0)//Position - 0x127F5
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_347(int iParam0)//Position - 0x12916
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

int func_348(int iParam0)//Position - 0x15B99
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)//Position - 0x15BDF
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_350(int iParam0)//Position - 0x15C26
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_0__.func_154(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_351(int iParam0)//Position - 0x15C90
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_0__.func_154(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 4);
	}
	return 0;
}

int func_352(int iParam0)//Position - 0x15CC1
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_0__.func_154(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

bool func_353(int iParam0)//Position - 0x166FB
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 22);
}

int func_354(int iParam0)//Position - 0x16DE7
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_465 != 0;
	}
	return 0;
}

int func_355()//Position - 0x19914
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_303;
}

int func_356()//Position - 0x19BDE
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_302;
}

bool func_357()//Position - 0x1A01B
{
	return Global_1575016 == 10;
}

int func_358(int iParam0)//Position - 0x1A550
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (((((BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 2) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 3)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 5)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6)) || BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 7)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_359(int iParam0)//Position - 0x1AC84
{
	return __LIB_0__.func_249(iParam0, 1);
}

int func_360(int iParam0)//Position - 0x1BC05
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

int func_361(int iParam0)//Position - 0x1C093
{
	return 4;
}

int func_362(int iParam0)//Position - 0x1C79D
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

int func_363(var uParam0, int iParam1)//Position - 0x1E821
{
	return 2;
}

bool func_364(int iParam0)//Position - 0x220DB
{
	return __LIB_1__.func_112(iParam0, 11);
}

bool func_365(int iParam0)//Position - 0x220EB
{
	return __LIB_1__.func_112(iParam0, 9);
}

bool func_366(int iParam0)//Position - 0x22149
{
	return __LIB_1__.func_112(iParam0, 7);
}

int func_367(int iParam0)//Position - 0x2602C
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

int func_368(int iParam0, int iParam1)//Position - 0x293D0
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

int func_369(int iParam0)//Position - 0x33478
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

int func_370(int iParam0)//Position - 0x33529
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

int func_371(int iParam0)//Position - 0x36D5F
{
	if (__LIB_1__.func_177(iParam0))
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

void func_372(var uParam0)//Position - 0x373B5
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

int func_373(var uParam0)//Position - 0x37410
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

int func_374(int iParam0)//Position - 0x379C1
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285;
	}
	return 0;
}

int func_375(int iParam0)//Position - 0x3861D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_376(int iParam0)//Position - 0x41C3D
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

void func_377(int iParam0)//Position - 0x42407
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836751.f_4[iVar0]), iVar1);
}

int func_378(int iParam0)//Position - 0x438C0
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

void func_379(int iParam0, bool bParam1, int iParam2)//Position - 0x459C6
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

void func_380(var* uParam0, char* sParam1)//Position - 0x45B59
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(uParam0, 35, sParam1);
}

int func_381(int iParam0)//Position - 0x45CBA
{
	if (__LIB_0__.func_693(iParam0) || __LIB_0__.func_694(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_382()//Position - 0x45CDC
{
	return Global_1836359;
}

int func_383()//Position - 0x45CE8
{
	if (Global_1836358 > 16)
	{
		return 1;
	}
	return 0;
}

void func_384(var uParam0)//Position - 0x45F35
{
	*uParam0 = 0;
	uParam0->f_1 = __LIB_0__.func_160();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_385(int iParam0)//Position - 0x4677C
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1888862[iVar0 /*120*/].f_77.f_42 != 0;
	}
	return 0;
}

bool func_386(int iParam0)//Position - 0x467E8
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_139, 6);
}

int func_387(bool bParam0)//Position - 0x48A65
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	}
	iVar0 = (iVar0 + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
	return iVar0;
}

char* func_388()//Position - 0x4BC62
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode";
		default:
	}
	return "freemode";
}

bool func_389()//Position - 0x4C839
{
	return Global_1836594;
}

int func_390(int iParam0, int iParam1)//Position - 0x4C845
{
	int iVar0;
	if (__LIB_0__.func_3() != 0)
	{
		return 0;
	}
	if (!__LIB_0__.func_640(iParam0))
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

int func_391()//Position - 0x4FFBB
{
	return joaat("terbyte");
}

int func_392(int iParam0)//Position - 0x4FFC8
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

int func_393(int iParam0)//Position - 0x50040
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

bool func_394(int iParam0)//Position - 0x50701
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_9, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_10, (iParam0 - 32));
}

bool func_395(int iParam0)//Position - 0x50748
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_7, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_8, (iParam0 - 32));
}

int func_396(int iParam0)//Position - 0x5079C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_1, 11);
	}
	return 0;
}

bool func_397(int iParam0)//Position - 0x507DB
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_5, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_6, (iParam0 - 32));
}

int func_398(int iParam0)//Position - 0x5082F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 29);
	}
	return 0;
}

int func_399(int iParam0)//Position - 0x50855
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 11);
	}
	return 0;
}

int func_400(int iParam0)//Position - 0x5087B
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_3, 9);
	}
	return 0;
}

int func_401(int iParam0)//Position - 0x508EC
{
	if (Global_2815059.f_304[0] == iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_402(int iParam0)//Position - 0x50908
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_3, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_4, (iParam0 - 32));
}

int func_403(int iParam0)//Position - 0x53DD7
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

int func_404()//Position - 0x54B09
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

Vector3 func_405(int iParam0)//Position - 0x54BF4
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

int func_406(int iParam0, int iParam1)//Position - 0x5682C
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

int func_407(int iParam0, int iParam1)//Position - 0x568D3
{
	if (__LIB_1__.func_182(iParam0) == iParam1)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_474;
	}
	return -1;
}

int func_408(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x589D8
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_0__.func_154(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (__LIB_0__.func_154(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return __LIB_0__.func_160();
}

void func_409(bool bParam0)//Position - 0x59AB0
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

int func_410(int iParam0)//Position - 0x59B24
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return Global_2680265.f_903.f_168[iParam0];
}

bool func_411()//Position - 0x5A9A3
{
	return Global_2726699;
}

int func_412()//Position - 0x5B011
{
	if (Global_21654 == 1 || Global_22621 == 1)
	{
		return 1;
	}
	return 0;
}

int func_413(int iParam0)//Position - 0x5B034
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

int func_414()//Position - 0x5B209
{
	if (Global_20266.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_415(bool bParam0)//Position - 0x5B391
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

void func_416(bool bParam0)//Position - 0x5B3AB
{
	HUD::BUSYSPINNER_OFF();
	if (bParam0)
	{
		HUD::PRELOAD_BUSYSPINNER();
	}
}

bool func_417(bool bParam0)//Position - 0x4CC
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 2);
}

void func_418(var uParam0, int iParam1)//Position - 0x7A8
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_419(int iParam0, bool bParam1)//Position - 0xBD0
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

float func_420(struct<3> Param0, struct<3> Param1)//Position - 0xF11
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param1);
}

int func_421(int iParam0, var uParam1, var uParam2)//Position - 0xF42
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

bool func_422()//Position - 0x11E1
{
	return BitTest(Global_1836844.f_1, 0);
}

bool func_423(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x239F
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

var func_424(bool bParam0, int iParam1)//Position - 0x2AF6
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_10.f_4, iParam1);
}

int func_425(bool bParam0, int iParam1)//Position - 0x2C41
{
	if (Global_1892703[bParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[bParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_426(bool bParam0)//Position - 0x9D8C
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(bParam0)) || Global_2689235[bParam0 /*453*/].f_253)
	{
		return 1;
	}
	return 0;
}

int func_427(bool bParam0, bool bParam1)//Position - 0x9FC1
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { __LIB_1__.func_267(bParam0) };
		Global_2787518 = { __LIB_1__.func_267(bParam1) };
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

void func_428()//Position - 0xA5AC
{
	Global_1649593.f_1172 = 1;
}

bool func_429()//Position - 0xAC5F
{
	if (!__LIB_1__.func_273())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574757.f_12));
	__LIB_1__.func_272();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_430()//Position - 0xAD89
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_7 = 0;
}

void func_431()//Position - 0xAE15
{
	struct<6> Var0;
	if (Global_2667225.f_490.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2667225.f_490 = { Var0 };
	}
}

void func_432()//Position - 0xB0A3
{
	Global_2727091 = 1;
}

void func_433()//Position - 0xB5C8
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

void func_434(int iParam0)//Position - 0xB8B7
{
	if (iParam0 == iParam0)
	{
	}
}

char* func_435()//Position - 0xBB29
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /* GXT: Motorcycle Club */);
}

int func_436(bool bParam0, int iParam1)//Position - 0xBBA6
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__.func_160())
		{
			if (Global_1892703[bParam0 /*599*/].f_10 == bParam0 && Global_1892703[bParam0 /*599*/].f_10.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_437()//Position - 0xBCCB
{
	return Global_2703735.f_2400[0 /*80*/].f_1;
}

var func_438()//Position - 0xBCDF
{
	return BitTest(Global_1836844.f_1, 25);
}

void func_439(int iParam0)//Position - 0xBFF6
{
	Global_2703735.f_1568 = iParam0;
}

int func_440()//Position - 0xC1F9
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_441()//Position - 0xC223
{
	var uVar0;
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_442(struct<3> Param0, var uParam1, var uParam2)//Position - 0xC23E
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

int func_443(int iParam0)//Position - 0xD5F3
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = __LIB_0__.func_5();
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

void func_444()//Position - 0xDE81
{
	Global_2727090 = 1;
}

void func_445(int iParam0, int iParam1)//Position - 0xDE8E
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

var func_446(bool bParam0)//Position - 0xEDFB
{
	return Global_1892703[bParam0 /*599*/].f_510;
}

void func_447(int iParam0)//Position - 0xEE0F
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_7[iVar0]), iVar1);
}

int func_448(bool bParam0)//Position - 0xF0E4
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12862 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_AGENCY */;
}

int func_449()//Position - 0xF10A
{
	return Global_262145.f_12861 /* Tunable: GB_PERCENTAGE_OF_GOONS_CASH_TO_BOSS */;
}

struct<16> func_450(int iParam0, char* sParam1)//Position - 0xFA94
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

void func_451()//Position - 0xFB36
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2727094 = 1;
}

bool func_452()//Position - 0xFBA7
{
	return BitTest(Global_2621446, 12);
}

int func_453(bool bParam0)//Position - 0x10184
{
	if (bParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(bParam0, 1, 1))
	{
		return Global_2689235[bParam0 /*453*/].f_318.f_16;
	}
	return -1;
}

int func_454(int iParam0)//Position - 0x1043D
{
	if ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9) && !(BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7))) || ((BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 6) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 7)) && !BitTest(Global_2689235[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_455()//Position - 0x104C6
{
	MISC::SET_BIT(&(Global_2815059.f_1797), 19);
}

bool func_456()//Position - 0x108E4
{
	return BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 17);
}

int func_457(int iParam0)//Position - 0x1096C
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

int func_458(int iParam0)//Position - 0x109CC
{
	if (__LIB_1__.func_182(iParam0) == 236 || __LIB_1__.func_182(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

bool func_459()//Position - 0x110CD
{
	return Global_1574582.f_1;
}

int func_460(int iParam0)//Position - 0x12C02
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 20);
}

var func_461()//Position - 0x12C24
{
	return BitTest(Global_1958691, 1);
}

void func_462(struct<12> Param0, int iParam1)//Position - 0x12DC9
{
	Global_2667225.f_368[iParam1 /*12*/] = { Param0 };
	Global_2667225.f_368[iParam1 /*12*/].f_9 = 1;
}

int func_463(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)//Position - 0x12FCF
{
	if (((((Param0.f_0 >= Param2.f_0 && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.f_0 <= Param3.f_0) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_464(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)//Position - 0x13026
{
	struct<3> Var0;
	Var0 = { Param2 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_465(var uParam0, var uParam1)//Position - 0x13051
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

int func_466(bool bParam0)//Position - 0x13124
{
	if (!__LIB_1__.func_264(bParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

int func_467()//Position - 0x1316D
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

void func_468()//Position - 0x131FF
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

void func_469()//Position - 0x135DE
{
	MISC::SET_BIT(&(Global_2815059.f_5033), 0);
}

int func_470()//Position - 0x13678
{
	if ((((Global_1057409 != -1 && Global_1057409 != 33) && Global_1057409 != 35) && Global_1057409 != 37) && Global_1057409 != 21)
	{
		return 1;
	}
	return 0;
}

int func_471(bool bParam0)//Position - 0x136FC
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 0);
	}
	return 0;
}

void func_472()//Position - 0x137E2
{
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_208 = 0;
	MISC::CLEAR_BIT(&(Global_2815059.f_4630), 1);
}

int func_473(int iParam0)//Position - 0x13804
{
	switch (iParam0)
	{
		case 136:
			return 1;
		default:
	}
	return 0;
}

void func_474(int iParam0)//Position - 0x1381E
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/] = iParam0;
}

int func_475(int iParam0)//Position - 0x138EB
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

int func_476(bool bParam0)//Position - 0x13C64
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892703[iVar0 /*599*/].f_1, 7);
	}
	return 0;
}

void func_477(struct<3> Param0, int iParam1, int iParam2)//Position - 0x13CB4
{
	Global_2667225.f_45.f_49 = { Param0 };
	Global_2667225.f_45.f_52 = iParam1;
	Global_2667225.f_45.f_53 = iParam2;
}

char* func_478(int iParam0)//Position - 0x141A1
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

void func_479(int iParam0)//Position - 0x143C0
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

bool func_480(int iParam0)//Position - 0x14860
{
	return Global_2703735.f_2400[0 /*80*/].f_1 == iParam0;
}

void func_481(bool bParam0)//Position - 0x148A3
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

int func_482(int iParam0)//Position - 0x14C9C
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

int func_483(int iParam0)//Position - 0x14F52
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

void func_484(int iParam0)//Position - 0x15067
{
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

void func_485(int iParam0)//Position - 0x150D7
{
	MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_4), iParam0);
}

int func_486(int iParam0)//Position - 0x15145
{
	if (Global_2689235[iParam0 /*453*/].f_269.f_4 != 0 || Global_2689235[iParam0 /*453*/].f_269.f_5)
	{
		return 1;
	}
	return 0;
}

int func_487(int iParam0)//Position - 0x151C2
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

void func_488(bool bParam0)//Position - 0x159AD
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

void func_489(var uParam0, int iParam1, int iParam2)//Position - 0x15B20
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

var func_490(var uParam0, int iParam1)//Position - 0x15B42
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_491(var uParam0, int* iParam1)//Position - 0x15B8A
{
	if (!BitTest(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_492()//Position - 0x15BBF
{
	if (Global_1836580 != 0)
	{
		Global_1836580 = 0;
	}
}

void func_493(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15C49
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

int func_494(int iParam0, bool bParam1, int iParam2)//Position - 0x15C86
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

bool func_495(var uParam0)//Position - 0x15DF4
{
	return BitTest(uParam0->f_33, 6);
}

bool func_496(var uParam0)//Position - 0x15E02
{
	return BitTest(uParam0->f_33, 5);
}

int func_497()//Position - 0x1605D
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

int func_498()//Position - 0x16079
{
	int iVar0;
	iVar0 = 0;
	if (Global_1836359)
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_499(int iParam0)//Position - 0x163E8
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

char* func_500(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x16456
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

float func_501(float fParam0)//Position - 0x166D6
{
	return (fParam0 / 1.609344f);
}

float func_502(float fParam0)//Position - 0x166E6
{
	return (fParam0 / 0.3048f);
}

int func_503(int iParam0)//Position - 0x166F6
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

int func_504(bool bParam0)//Position - 0x167F4
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

bool func_505(bool bParam0)//Position - 0x16AF2
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 22);
}

int func_506(bool bParam0)//Position - 0x16B08
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return (BitTest(Global_1892703[bParam0 /*599*/].f_1, 10) || BitTest(Global_1892703[bParam0 /*599*/].f_1, 9));
	}
	return 0;
}

void func_507(int* iParam0, int iParam1, int iParam2)//Position - 0x16ECF
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_508(bool bParam0)//Position - 0x16EFD
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

int func_509()//Position - 0x16F4E
{
	if (BitTest(Global_2815059.f_4657, 0) && __LIB_1__.func_159())
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_4657, 1) && __LIB_1__.func_159())
	{
		return 1;
	}
	return 0;
}

int func_510()//Position - 0x16F89
{
	if (__LIB_1__.func_159())
	{
		if (__LIB_0__.func_966(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_511()//Position - 0x16FB0
{
	if (__LIB_1__.func_159())
	{
		if (__LIB_0__.func_970(Global_2703735.f_2400[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_512(int iParam0)//Position - 0x16FD7
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

int func_513()//Position - 0x172D8
{
	return Global_1836358;
}

void func_514(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17498
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__.func_478(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT" /* GXT: ~a~ (~a~) */);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		__LIB_0__.func_478("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_515(int* iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x17A02
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			__LIB_0__.func_478(sParam1);
		}
		else if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 133)
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
		__LIB_0__.func_478("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_516()//Position - 0x17C34
{
	return Global_1853221;
}

int func_517()//Position - 0x17E33
{
	return Global_2815059.f_5119;
}

int func_518()//Position - 0x17E42
{
	if (__LIB_1__.func_182(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2815059.f_5114;
	}
	return -1;
}

char* func_519()//Position - 0x18171
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF" /* GXT: GTA Online (Friend, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC" /* GXT: GTA Online (Crew, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS" /* GXT: GTA Online (Solo, ~1~) */;
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI" /* GXT: GTA Online (Invite, ~1~) */;
	}
	return "HUD_LBD_FMP" /* GXT: GTA Online (Public, ~1~) */;
}

void func_520()//Position - 0x181B5
{
	Global_43992 = 1;
}

bool func_521(bool bParam0, int* iParam1, bool bParam2)//Position - 0x181C1
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

int func_522(int iParam0)//Position - 0x18448
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_4, 6);
}

int func_523()//Position - 0x186A6
{
	return Global_1648034.f_68;
}

float func_524()//Position - 0x186CA
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_525(int iParam0)//Position - 0x186EE
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		default:
	}
	return 0;
}

bool func_526(bool bParam0)//Position - 0x189CB
{
	return BitTest(Global_1892703[bParam0 /*599*/].f_1, 10);
}

int func_527()//Position - 0x18A65
{
	if (Global_2722673)
	{
		return 32;
	}
	return (32 - Global_2722674);
}

void func_528(int iParam0)//Position - 0x190B6
{
	Global_1648034.f_68 = iParam0;
}

void func_529()//Position - 0x191DB
{
	MISC::CLEAR_BIT(&(Global_2815059.f_5033), 0);
}

int func_530(int iParam0)//Position - 0x19270
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		default:
	}
	return 0;
}

bool func_531()//Position - 0x193E0
{
	return Global_2815059.f_5128 != -1;
}

void func_532()//Position - 0x1962C
{
	if (Global_1941287)
	{
		if (BitTest(Global_1941288, 0))
		{
			MISC::CLEAR_BIT(&Global_2824440, 0);
		}
		if (BitTest(Global_1941288, 1))
		{
			MISC::CLEAR_BIT(&Global_2824440, 1);
		}
		if (BitTest(Global_1941288, 5))
		{
			MISC::CLEAR_BIT(&Global_2824440, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1941288 = 0;
	}
	Global_1941287 = 0;
}

void func_533()//Position - 0x19723
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2815059.f_5191))
	{
		if (!Global_2815059.f_5191 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2815059.f_5190 < 1f)
		{
			return;
		}
	}
	Global_2815059.f_5191 = -1;
	Global_2815059.f_5190 = 1f;
}

bool func_534()//Position - 0x1977E
{
	return Global_1836844.f_24;
}

bool func_535(int iParam0)//Position - 0x19FB1
{
	return iParam0 == 57;
}

int func_536()//Position - 0x19FBE
{
	if (Global_4718592.f_116524 == Global_262145.f_10062 /* Tunable: TRANSFORM_INFERNO */)
	{
		return 1;
	}
	return 0;
}

int func_537()//Position - 0x19FDF
{
	if ((Global_4718592 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4718592.f_5 != 0 || Global_4718592.f_168757 > 0) || BitTest(Global_4718592.f_4, 15)) || BitTest(Global_4718592.f_4, 18)) || BitTest(Global_4718592.f_4, 19)) || BitTest(Global_4718592.f_4, 29)) || BitTest(Global_4718592.f_4, 28)) || BitTest(Global_4718592.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_538()//Position - 0x1A077
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (BitTest(Global_2621865[iVar0 /*26*/].f_12, 11))
		{
			if (BitTest(Global_2621865[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2621865[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_539()//Position - 0x1A0C7
{
	struct<25> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1836844 = { Var0 };
}

void func_540()//Position - 0x1A0F6
{
	var uVar0;
	Global_1581339 = uVar0;
}

void func_541(int iParam0, int iParam1)//Position - 0x1A148
{
	Global_2667225.f_22 = iParam0;
	Global_2667225.f_23 = iParam1;
}

void func_542(bool bParam0)//Position - 0x1A206
{
	if (bParam0)
	{
		Global_2667225.f_713 = 0;
	}
	else
	{
		Global_2667225.f_713 = 1;
	}
}

void func_543()//Position - 0x1A444
{
	if (__LIB_1__.func_309())
	{
		if (Global_2667225.f_714.f_518 == Global_2667225.f_1233.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_714.f_518)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_1233), &(Global_2667225.f_714), 519);
		Global_2667225.f_496 = { Global_2667225.f_490 };
		Global_2667225.f_1752 = 1;
	}
}

void func_544()//Position - 0x1A4F1
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_368), &Global_2671853, 121);
}

void func_545()//Position - 0x1A54A
{
	Global_2815059.f_5033 = 0;
}

void func_546()//Position - 0x1A55A
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1 = 0;
	}
}

void func_547()//Position - 0x1A578
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1892703[iVar0 /*599*/] = -1;
	}
}

void func_548(int iParam0)//Position - 0x1A6E0
{
	if (Global_2815059.f_4587 != iParam0)
	{
		Global_2815059.f_4587 = iParam0;
	}
}

void func_549(bool bParam0)//Position - 0x1A6FD
{
	if (Global_2815059.f_4586 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2815059.f_4586 = bParam0;
	}
}

void func_550(int iParam0)//Position - 0x1A722
{
	if (Global_2815059.f_4584 != iParam0)
	{
		Global_2815059.f_4584 = iParam0;
	}
}

void func_551()//Position - 0x1A8E3
{
	var uVar0;
	Global_1836869 = uVar0;
}

int func_552(int iParam0)//Position - 0x1AA24
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 10;
		case 9:
			return 10;
		case 10:
			return 1;
		case 11:
			return 6;
		case 12:
			return 0;
		case 13:
			return 1;
		case 14:
			return 0;
		case 15:
			return 0;
		case 16:
			return 0;
		case 17:
			return 0;
		case 18:
			return 0;
		case 19:
			return 0;
		default:
	}
	return 0;
}

int func_553()//Position - 0x1F8C
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x2DF4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2689235[iParam0 /*453*/].f_238;
}

int func_555(int iParam0)//Position - 0x8ED7
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[__LIB_1__.func_443(-1)];
			}
			else if (__LIB_0__.func_640(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[__LIB_1__.func_443(-1)];
	}
	return 0;
}

int func_556(int iParam0, int iParam1, int iParam2)//Position - 0x9240
{
	int iVar0;
	var uVar1;
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_557()//Position - 0x9D4C
{
	int iVar0;
	iVar0 = Global_2703735;
	if (BitTest(Global_1888862[iVar0 /*120*/].f_14, 0) && Global_1888862[iVar0 /*120*/].f_23 == 2)
	{
		return 1;
	}
	return 0;
}

int func_558()//Position - 0x2DE0D
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

int func_559(int iParam0)//Position - 0x2F029
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
			return 0;
			break;
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		case joaat("WEAPON_APPISTOL"):
			return 3;
			break;
		case joaat("WEAPON_PISTOL50"):
			return 4;
			break;
		case joaat("WEAPON_SMG"):
			return 5;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return 6;
			break;
		case joaat("WEAPON_MICROSMG"):
			return 7;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 8;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return 9;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 11;
			break;
		case joaat("WEAPON_MG"):
			return 12;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 13;
			break;
		case joaat("WEAPON_ASSAULTMG"):
			return 14;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 15;
			break;
		case joaat("WEAPON_GRENADE"):
			return 16;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 17;
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			return 18;
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 19;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 20;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 21;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 22;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 23;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 24;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 25;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 26;
			break;
		case joaat("WEAPON_RPG"):
			return 27;
			break;
		case joaat("WEAPON_MINIGUN"):
			return 28;
			break;
		case joaat("WEAPON_LOUDHAILER"):
			return 29;
			break;
		case joaat("WEAPON_PROGRAMMABLEAR"):
			return 30;
			break;
		case joaat("WEAPON_STUNGUN"):
			return 31;
			break;
		case joaat("WEAPON_RUBBERGUN"):
			return 32;
			break;
		case joaat("GADGET_PARACHUTE"):
			return 33;
			break;
		case joaat("WEAPON_KNIFE"):
			return 34;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return 35;
			break;
		case joaat("WEAPON_HAMMER"):
			return 36;
			break;
		case joaat("WEAPON_BAT"):
			return 37;
			break;
		case joaat("WEAPON_CROWBAR"):
			return 38;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return 39;
			break;
		case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
			return 40;
			break;
		case joaat("WEAPON_MOLOTOV"):
			return 41;
			break;
		case joaat("WEAPON_FIREEXTINGUISHER"):
			return 42;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return 43;
			break;
		case joaat("WEAPON_DIGISCANNER"):
			return 44;
			break;
		case joaat("WEAPON_BOTTLE"):
			return 45;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 46;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return 47;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 49;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 48;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return 50;
			break;
		case joaat("WEAPON_DAGGER"):
			return 51;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 52;
			break;
		case joaat("WEAPON_FLAREGUN"):
			return 57;
			break;
		case joaat("WEAPON_MUSKET"):
			return 53;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 54;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 56;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 55;
			break;
		case joaat("WEAPON_PROXMINE"):
			return 60;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 61;
			break;
		case joaat("WEAPON_HATCHET"):
			return 58;
			break;
		case joaat("WEAPON_RAILGUN"):
			return 59;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return 64;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return 62;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 63;
			break;
		case joaat("WEAPON_MACHETE"):
			return 65;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 68;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return 66;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 67;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return 69;
			break;
		case joaat("WEAPON_REVOLVER"):
			return 70;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return 71;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 72;
			break;
		case joaat("WEAPON_MINISMG"):
			return 73;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 74;
			break;
		case joaat("WEAPON_BATTLEAXE"):
			return 75;
			break;
		case joaat("WEAPON_PIPEBOMB"):
			return 76;
			break;
		case joaat("WEAPON_POOLCUE"):
			return 77;
			break;
		case joaat("WEAPON_WRENCH"):
			return 78;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 8;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 9;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 13;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 21;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			return 1;
			break;
		case joaat("WEAPON_SMG_MK2"):
			return 5;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 22;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 46;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 47;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 56;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 70;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 48;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			return 79;
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			return 80;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 81;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 82;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 83;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 84;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 85;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 86;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			return 88;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			return 87;
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 10;
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			return 89;
			break;
		case joaat("WEAPON_FERTILIZERCAN"):
			return 90;
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			return 91;
			break;
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
	}
	return 0;
}

var func_560(int iParam0)//Position - 0x3067E
{
	return Global_1892703[iParam0 /*599*/].f_510;
}

int func_561(int iParam0, int iParam1)//Position - 0x30C3C
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__.func_971(iParam1, iParam0, 4);
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

var func_562(int iParam0)//Position - 0x317FB
{
	var uVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true);
	return uVar0;
}

int func_563(int iParam0, int iParam1)//Position - 0x31E4E
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866852[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_564()//Position - 0x3219E
{
	return Local_83.f_0;
}

int func_565(int iParam0)//Position - 0x321A8
{
	return Local_85[iParam0 /*4*/];
}

int func_566(int iParam0)//Position - 0x322EF
{
	return Global_1853348[iParam0 /*834*/].f_192;
}

void func_567(struct<3> Param0, char* sParam1, int iParam2)//Position - 0x32916
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), sParam1))
			{
				if (iParam2 || __LIB_0__.func_78(Global_2815059.f_4033[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2815059.f_4033[iVar0 /*26*/] = 0;
					Global_2815059.f_4033[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2815059.f_4033[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_568(int iParam0)//Position - 0x329B6
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_569(int iParam0, int iParam1, bool bParam2)//Position - 0x32E85
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				__LIB_0__.func_199();
			}
			else
			{
				return 0;
			}
		}
		if (!__LIB_0__.func_155(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						__LIB_0__.func_199();
					}
					else
					{
						return 0;
					}
				}
				if (__LIB_0__.func_194())
				{
					if (!bParam2)
					{
						__LIB_0__.func_199();
					}
					else
					{
						return 0;
					}
				}
				if (__LIB_0__.func_193(157))
				{
					if (!bParam2)
					{
						__LIB_0__.func_199();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					__LIB_0__.func_199();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574666 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				__LIB_0__.func_199();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			__LIB_0__.func_199();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_570(bool bParam0)//Position - 0x21DB
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		return __LIB_1__.func_424(bParam0, 9);
	}
	return 0;
}

bool func_571(char* sParam0)//Position - 0x83CF9
{
	if (!__LIB_1__.func_273())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

int func_572(int iParam0, int iParam1, int iParam2)//Position - 0x872E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

int func_573(bool bParam0)//Position - 0x877E8
{
	struct<13> Var0;
	Var0 = { __LIB_1__.func_267(bParam0) };
	if (__LIB_0__.func_53())
	{
		if (bParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_574(bool bParam0)//Position - 0x87828
{
	struct<13> Var0;
	if (bParam0 != __LIB_0__.func_160())
	{
		Var0 = { __LIB_1__.func_267(bParam0) };
		if ((MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION()) || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (__LIB_0__.func_53() || MISC::IS_PROSPERO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

bool func_575(bool bParam0)//Position - 0x88480
{
	return __LIB_1__.func_424(bParam0, 19);
}

int func_576(bool bParam0)//Position - 0x8942D
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 19;
			}
		}
	}
	return 0;
}

bool func_577(int iParam0, int iParam1)//Position - 0x89680
{
	return iParam0 > iParam1;
}

void func_578()//Position - 0x89919
{
	if (!__LIB_1__.func_456())
	{
		Global_2815059.f_6743 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

int func_579(int iParam0)//Position - 0x9231D
{
	switch (iParam0)
	{
		case joaat("chino2"):
			return Global_262145.f_12341 /* Tunable: MOD_SHOP_UPGRADE_VAPID_CHINO_CUSTOM */;
			break;
		case joaat("primo2"):
			return Global_262145.f_12344 /* Tunable: MOD_SHOP_UPGRADE_ALBANY_PRIMO_CUSTOM */;
			break;
		case joaat("moonbeam2"):
			return Global_262145.f_12343 /* Tunable: MOD_SHOP_UPGRADE_DECLASSE_MOONBEAM_CUSTOM */;
			break;
		case joaat("faction2"):
			return Global_262145.f_12342 /* Tunable: MOD_SHOP_UPGRADE_WILLARD_FACTION_CUSTOM */;
			break;
		case joaat("buccaneer2"):
			return Global_262145.f_12340 /* Tunable: MOD_SHOP_UPGRADE_ALBANY_BUCCANEER_CUSTOM */;
			break;
		case joaat("voodoo"):
			return Global_262145.f_12345 /* Tunable: MOD_SHOP_UPGRADE_DECLASSE_VOODOO_CUSTOM */;
			break;
		case joaat("sultanrs"):
			return Global_262145.f_13450 /* Tunable: BENNYSWEBSITE_KARIN_SULTAN_RS_UPGRADE */;
			break;
		case joaat("banshee2"):
			return Global_262145.f_13452 /* Tunable: UPGRADE_BRAVADO_BANSHEE_900R_UPGRADE */;
			break;
		case joaat("faction3"):
			return Global_262145.f_15030 /* Tunable: CAR_MODS_WILLARD_FACTION_CUSTOM_DONK_UPGRADE */;
			break;
		case joaat("minivan2"):
			return Global_262145.f_15031 /* Tunable: CAR_MODS_VAPID_MINIVAN_CUSTOM_UPGRADE */;
			break;
		case joaat("sabregt2"):
			return Global_262145.f_15032 /* Tunable: CAR_MODS_DECLASSE_SABRE_TURBO_CUSTOM_UPGRADE */;
			break;
		case joaat("slamvan3"):
			return Global_262145.f_15033 /* Tunable: CAR_MODS_VAPID_SLAMVAN_CUSTOM_UPGRADE */;
			break;
		case joaat("tornado5"):
			return Global_262145.f_15034 /* Tunable: CAR_MODS_DECLASSE_TORNADO_CUSTOM_UPGRADE */;
			break;
		case joaat("virgo2"):
			return Global_262145.f_15035 /* Tunable: CAR_MODS_DUNDREARY_VIRGO_CLASSIC_CUSTOM_UPGRADE */;
			break;
		case joaat("comet3"):
			return Global_262145.f_19686 /* Tunable: IMPEXP_COMET3_UPGRADE_PRICE */;
			break;
		case joaat("diablous2"):
			return Global_262145.f_19690 /* Tunable: IMPEXP_DIABLOUS2_UPGRADE_PRICE */;
			break;
		case joaat("fcr2"):
			return Global_262145.f_19688 /* Tunable: IMPEXP_FCR2_UPGRADE_PRICE */;
			break;
		case joaat("italigtb2"):
			return Global_262145.f_19680 /* Tunable: IMPEXP_ITALIGTB2_UPGRADE_PRICE */;
			break;
		case joaat("specter2"):
			return Global_262145.f_19682 /* Tunable: IMPEXP_SPECTER2_UPGRADE_PRICE */;
			break;
		case joaat("nero2"):
			return Global_262145.f_19684 /* Tunable: IMPEXP_NERO2_UPGRADE_PRICE */;
			break;
		case joaat("elegy"):
			return Global_262145.f_19685 /* Tunable: IMPEXP_ELEGY_UPGRADE_PRICE */;
			break;
		case joaat("technical3"):
			return Global_262145.f_21415 /* Tunable: 424298680 */;
			break;
		case joaat("insurgent3"):
			return Global_262145.f_21414 /* Tunable: 2123626407 */;
			break;
		case joaat("bruiser"):
			return Global_262145.f_25976 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_GLENDALE */;
			break;
		case joaat("monster3"):
			return Global_262145.f_25975 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_RATLOADER */;
			break;
		case joaat("impaler2"):
			return Global_262145.f_25979 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_IMPALER */;
			break;
		case joaat("issi4"):
			return Global_262145.f_25980 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_ISSI */;
			break;
		case joaat("deathbike"):
			return Global_262145.f_25981 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_GARGOYLE */;
			break;
		case joaat("dominator4"):
			return Global_262145.f_25978 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_DOMINATOR */;
			break;
		case joaat("slamvan4"):
			return Global_262145.f_25977 /* Tunable: AW_UPGRADE_PRICE_APOCALYPSE_SLAMVAN */;
			break;
		case joaat("deathbike3"):
			return Global_262145.f_25995 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_GARGOYLE */;
			break;
		case joaat("deathbike2"):
			return Global_262145.f_25988 /* Tunable: AW_UPGRADE_PRICE_SCIFI_GARGOYLE */;
			break;
		case joaat("impaler3"):
			return Global_262145.f_25986 /* Tunable: AW_UPGRADE_PRICE_SCIFI_IMPALER */;
			break;
		case joaat("bruiser2"):
			return Global_262145.f_25983 /* Tunable: AW_UPGRADE_PRICE_SCIFI_GLENDALE */;
			break;
		case joaat("slamvan5"):
			return Global_262145.f_25984 /* Tunable: AW_UPGRADE_PRICE_SCIFI_SLAMVAN */;
			break;
		case joaat("issi5"):
			return Global_262145.f_25987 /* Tunable: AW_UPGRADE_PRICE_SCIFI_ISSI */;
			break;
		case joaat("monster4"):
			return Global_262145.f_25982 /* Tunable: AW_UPGRADE_PRICE_SCIFI_RATLOADER */;
			break;
		case joaat("dominator5"):
			return Global_262145.f_25985 /* Tunable: AW_UPGRADE_PRICE_SCIFI_DOMINATOR */;
			break;
		case joaat("impaler4"):
			return Global_262145.f_25993 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_IMPALER */;
			break;
		case joaat("bruiser3"):
			return Global_262145.f_25990 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_GLENDALE */;
			break;
		case joaat("slamvan6"):
			return Global_262145.f_25991 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_SLAMVAN */;
			break;
		case joaat("issi6"):
			return Global_262145.f_25994 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_ISSI */;
			break;
		case joaat("monster5"):
			return Global_262145.f_25989 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_RATLOADER */;
			break;
		case joaat("dominator6"):
			return Global_262145.f_25992 /* Tunable: AW_UPGRADE_PRICE_CONSUMERISM_DOMINATOR */;
			break;
		case joaat("youga3"):
			return Global_262145.f_29364 /* Tunable: SUM_UPGRADE_PRICE_YOUGA3 */;
			break;
		case joaat("gauntlet5"):
			return Global_262145.f_29359 /* Tunable: SUM_UPGRADE_PRICE_GAUNTLET5 */;
			break;
		case joaat("manana2"):
			return Global_262145.f_29363 /* Tunable: SUM_UPGRADE_PRICE_MANANA2 */;
			break;
		case joaat("peyote3"):
			return Global_262145.f_29361 /* Tunable: SUM_UPGRADE_PRICE_PEYOTE3 */;
			break;
		case joaat("yosemite3"):
			return Global_262145.f_29360 /* Tunable: SUM_UPGRADE_PRICE_YOSEMITE3 */;
			break;
		case joaat("glendale2"):
			return Global_262145.f_29362 /* Tunable: SUM_UPGRADE_PRICE_GLENDALE2 */;
			break;
		case joaat("tenf2"):
			return Global_262145.f_32664 /* Tunable: SUM2_UPGRADE_PRICE_TENF2 */;
		case joaat("weevil2"):
			return Global_262145.f_32665 /* Tunable: SUM2_UPGRADE_PRICE_WEEVIL2 */;
		case joaat("brioso3"):
			return Global_262145.f_32666 /* Tunable: SUM2_UPGRADE_PRICE_BRIOSO3 */;
		case joaat("sentinel4"):
			return Global_262145.f_32667 /* Tunable: SUM2_UPGRADE_PRICE_SENTINEL4 */;
	}
	return 0;
}

int func_580(int iParam0, bool bParam1)//Position - 0x92832
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Avenger"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_581(var uParam0)//Position - 0x9477A
{
	if (__LIB_1__.func_496(uParam0) && __LIB_1__.func_495(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_582(int iParam0)//Position - 0x948F4
{
	if (__LIB_1__.func_182(iParam0) == 236 || __LIB_1__.func_182(iParam0) == 150)
	{
		return __LIB_1__.func_476(iParam0);
	}
	return 0;
}

int func_583()//Position - 0x94921
{
	switch (__LIB_0__.func_396(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		default:
	}
	return 0;
}

char* func_584()//Position - 0x95E4F
{
	switch (__LIB_0__.func_396(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1" /* GXT: Total Value */;
			break;
		case 160:
			return "BD_SORT_4" /* GXT: Packages Collected */;
			break;
		case 154:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
		case 155:
			return "BD_SORT_3" /* GXT: Total Cash */;
			break;
	}
	return "";
}

int func_585(int iParam0)//Position - 0x9631E
{
	return __LIB_1__.func_436(iParam0, 1);
}

void func_586(int* iParam0, var uParam1, bool bParam2)//Position - 0x96B5A
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1836357 = 0;
	__LIB_1__.func_492();
	Global_1836356 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (__LIB_0__.func_649(&(uParam1->f_19)))
		{
			__LIB_0__.func_579(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (BitTest(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_587(int iParam0)//Position - 0x98FE0
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		case 146:
			if (__LIB_1__.func_471(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_588()//Position - 0x7942
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1577841))
	{
		Global_1577841 = PED::CREATE_PED(25, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), Global_2715699.f_6598, 0f, false, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1577841, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1577841, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577841, false, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1577841);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DESIRED_HEADING(Global_1577841, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
		}
		ENTITY::SET_ENTITY_COLLISION(Global_1577841, false, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1577841, false, false);
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::SET_FOCUS_ENTITY(Global_1577841);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1577841) && !ENTITY::IS_ENTITY_DEAD(Global_1577841, false))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_1577841, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1577841, true);
		TASK::CLEAR_PED_TASKS(Global_1577841);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1577841, true);
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			STREAMING::SET_FOCUS_ENTITY(Global_1577841);
		}
		return 1;
	}
	return 0;
}

void func_589()//Position - 0x7A6C
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1577840))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1577840, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1577840))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1577840, false, false);
			}
			PED::DELETE_PED(&Global_1577840);
		}
	}
}

int func_590()//Position - 0x8480
{
	int iVar0;
	if (__LIB_0__.func_791())
	{
		iVar0 = MISC::ABSI((MISC::GET_GAME_TIMER() - Global_2725331));
		return iVar0;
	}
	return 0;
}

void func_591()//Position - 0x87D4
{
	if (!BitTest(Global_2621446, 27))
	{
		MISC::SET_BIT(&Global_2621446, 27);
	}
}

bool func_592()//Position - 0x87F1
{
	return BitTest(Global_2621446, 27);
}

bool func_593()//Position - 0x8C0B
{
	return Global_2725902;
}

void func_594(int iParam0)//Position - 0x8C17
{
	Global_2725902 = iParam0;
}

int func_595(int iParam0, int iParam1)//Position - 0x1EBA0
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2869167[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_596(int iParam0, int iParam1)//Position - 0x216AF
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2868734[iParam0 /*3*/][__LIB_1__.func_443(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_597(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x54F32
{
	int iVar0;
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

bool func_598()//Position - 0x6A656
{
	return Global_151971;
}

void func_599(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)//Position - 0x6E492
{
	if (bParam3)
	{
		sParam2 = "HUD_COLOUR_BLACK" /* GXT: Black */;
	}
	if (__LIB_0__.func_175())
	{
		if (Global_2715699.f_3479)
		{
			sParam2 = "HUD_COLOUR_HARK";
		}
	}
	__LIB_0__.func_772(iParam0, sParam1);
	HUD::RESET_GLOBAL_ACTIONSCRIPT_FLAG(10);
	if (*iParam0 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CREATE_STAT_WALL");
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
	if (iParam0->f_1 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_1))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_1, "CREATE_STAT_WALL");
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
	if (iParam0->f_2 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0->f_2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0->f_2, "CREATE_STAT_WALL");
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

bool func_600(var uParam0, int iParam1)//Position - 0x6FB6E
{
	return __LIB_0__.func_805(uParam0, iParam1);
}

void func_601(var uParam0, int iParam1, bool bParam2)//Position - 0x75ECA
{
	__LIB_0__.func_808(uParam0, iParam1, bParam2);
}

void func_602(int iParam0, bool bParam1, int iParam2)//Position - 0x78AEF
{
	int iVar0;
	iVar0 = Global_2869167[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
	STATS::STAT_SET_BOOL(iVar0, bParam1, true);
}

void func_603(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x790AC
{
	int iVar0;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 789:
			Global_1659693[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 790:
			Global_1659699[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 791:
			Global_1659705[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1659711[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 778:
			Global_1659657[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 779:
			Global_1659663[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 780:
			Global_1659669[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 781:
			Global_1659675[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1659681[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 768:
			Global_1659627[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 769:
			Global_1659633[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 770:
			Global_1659639[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 771:
			Global_1659645[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1659651[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 758:
			Global_1659717[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 759:
			Global_1659723[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 760:
			Global_1659729[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 761:
			Global_1659735[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8735:
			Global_1659741[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 1304:
			Global_1659747[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 7236:
			Global_1659753[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 640:
			Global_1659759[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 1279:
			Global_1659765[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 1878:
			Global_2869777[0 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 2269:
			Global_2869777[1 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 2932:
			Global_2869777[2 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3061:
			Global_2869777[3 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 11391:
			Global_2869950[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 765:
			Global_1659771[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 766:
			Global_1659777[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 767:
			Global_1659783[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8734:
			Global_1659789[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 9538:
			Global_1659795[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 1237:
			Global_1659801[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2869862[0 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2869862[1 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2869862[2 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2869862[3 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3060:
			Global_2869862[4 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2869953[0 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2869953[1 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2869953[2 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2869953[3 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2869953[4 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2869969[0 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2869969[1 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2869969[2 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3647:
			Global_2869969[3 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3648:
			Global_2869969[4 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3224:
			Global_2869862[5 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2869777[4 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2869985[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2869994[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2869988[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2869997[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3670:
			Global_2869991[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3671:
			Global_2870000[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3692:
			Global_2870003[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2869862[6 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2869777[5 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3237:
			Global_2869862[7 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2869777[6 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2869862[8 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2869777[7 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2869862[9 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2869777[8 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2869862[10 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2869777[9 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4031:
			Global_2869862[11 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 4032:
			Global_2869777[10 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6112:
			Global_2869862[12 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6113:
			Global_2869777[11 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6170:
			Global_2869862[13 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6171:
			Global_2869777[12 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6548:
			Global_2869862[14 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6549:
			Global_2869777[13 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2869862[15 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2869777[14 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2869862[16 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2869777[15 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6567:
			Global_2869862[17 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 6568:
			Global_2869777[16 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2869777[17 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2869777[18 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 7290:
			Global_2869777[19 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8013:
			Global_2869777[20 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2870006[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2870009[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2870012[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2870015[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2870018[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2870021[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2870024[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2870027[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2870030[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2870033[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2870036[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8296:
			Global_2870039[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8297:
			Global_2870042[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8905:
			Global_2870045[__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8537:
			Global_2869777[21 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8982:
			Global_2869862[23 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2869777[22 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8985:
			Global_2869862[24 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 8983:
			Global_2869777[23 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 9624:
			Global_2869777[24 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 9913:
			Global_2869777[25 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 10443:
			Global_2869862[27 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 10441:
			Global_2869777[26 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 10446:
			Global_2869862[28 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		case 10444:
			Global_2869777[27 /*3*/][__LIB_1__.func_443(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

float func_604(int iParam0, int iParam1)//Position - 0x7A323
{
	return SYSTEM::VDIST(__LIB_0__.func_85(iParam0), __LIB_0__.func_85(iParam1));
	return 0f;
}

void func_605(int iParam0)//Position - 0x7EBD2
{
	Global_2715699.f_1.f_837 = iParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_220 = iParam0;
}

void func_606(int iParam0)//Position - 0x7EFD8
{
	if (iParam0 == 1)
	{
		Global_2703735.f_3423 = NETWORK::GET_NETWORK_TIME();
	}
	Global_2703735.f_3307 = iParam0;
}

void func_607()//Position - 0x7F00A
{
	struct<72> Var0;
	if (__LIB_0__.func_640(PLAYER::PLAYER_ID()))
	{
		Var0.f_6 = 32;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124 = { Var0 };
	}
}

void func_608()//Position - 0x7F03C
{
	struct<113> Var0;
	Var0.f_4 = -1;
	Var0.f_7 = 32;
	Var0.f_79 = { Global_2703735.f_3307.f_79 };
	Var0.f_95 = { Global_2703735.f_3307.f_95 };
	Global_2703735.f_3307 = { Var0 };
}

int func_609(struct<3> Param0, struct<3> Param1)//Position - 0x7F089
{
	if ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_610()//Position - 0x7F0BA
{
	return Global_2688483[PLAYER::PLAYER_ID() /*10*/];
}

void func_611(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x7F0FD
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
		__LIB_0__.func_717(iVar1, 0);
	}
}

int func_612()//Position - 0x8007D
{
	return Global_2703735.f_3307.f_78;
}

int func_613(int iParam0)//Position - 0x80218
{
	switch (iParam0)
	{
		case 12:
		case 13:
			return 1;
			break;
	}
	return 0;
}

int func_614(int iParam0)//Position - 0x8087B
{
	char cVar0[64];
	if (iParam0 >= 28)
	{
		StringCopy(&cVar0, "CONTENT_MODIFIER_", 64);
		StringIntConCat(&cVar0, (iParam0 - 28), 64);
		return MISC::GET_HASH_KEY(&cVar0);
	}
	switch (iParam0)
	{
		case 0:
			return joaat("BASE_GLOBALS");
			break;
		case 1:
			return joaat("MP_Global");
			break;
		case 2:
			return joaat("MP_CNC");
			break;
		case 3:
			return joaat("MP_CNC_TEAM_COP");
			break;
		case 4:
			return joaat("MP_CNC_TEAM_VAGOS");
			break;
		case 5:
			return joaat("MP_CNC_TEAM_LOST");
			break;
		case 6:
			return joaat("MP_FM");
			break;
		case 7:
			return joaat("MP_FM_DM");
			break;
		case 8:
			return joaat("MP_FM_RACES");
			break;
		case 9:
			return joaat("MP_FM_RACES_CAR");
			break;
		case 10:
			return joaat("MP_FM_RACES_BIKE");
			break;
		case 11:
			return joaat("MP_FM_RACES_CYCLE");
			break;
		case 12:
			return joaat("MP_FM_RACES_AIR");
			break;
		case 13:
			return joaat("MP_FM_RACES_SEA");
			break;
		case 14:
			return joaat("MP_FM_RACES_STUNT");
			break;
		case 15:
			return joaat("MP_FM_MISSIONS");
			break;
		case 16:
			return joaat("MP_FM_SURVIVAL");
			break;
		case 17:
			return joaat("MP_FM_BASEJUMP");
			break;
		case 18:
			return joaat("MP_FM_CAPTURE");
			break;
		case 19:
			return joaat("MP_FM_LTS");
			break;
		case 26:
			return joaat("MP_FM_HEIST");
			break;
		case 20:
			return joaat("MP_FM_CONTACT");
			break;
		case 21:
			return joaat("MP_FM_RANDOM");
			break;
		case 22:
			return joaat("MP_FM_VERSUS");
			break;
		case 23:
			break;
		case 24:
			return joaat("MP_FM_GANG_ATTACK");
			break;
		case 25:
			return joaat("MP_FMADVERSARY");
			break;
		case 27:
			return 2;
			break;
		case 29:
			StringCopy(&cVar0, "ILLEGAL TUNABLE CONTEXT", 64);
			break;
	}
	return 0;
}

void func_615(int iParam0, bool bParam1)//Position - 0x817DF
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1061[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1061[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

int func_616(var uParam0)//Position - 0x818CA
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_617(int iParam0, int iParam1, int iParam2)//Position - 0x818F9
{
	switch (iParam0)
	{
		case 53:
			return "MPAwards5";
		case 39:
			return "MPAwards5";
		case 51:
			return "MPAwards5";
		case 52:
			return "MPAwards5";
		case 16:
			return "MPAwards2";
		case 60:
			return "MPAwards4";
		case 61:
			return "MPAwards4";
		case 62:
			return "MPAwards4";
		case 63:
			return "MPAwards4";
		case 0:
			switch (iParam2)
			{
				case 9:
					switch (iParam1)
					{
						case 0:
							return "MPAwards1";
						case 1:
							return "MPAwards1";
						case 2:
							return "MPAwards1";
						case 3:
							return "MPAwards1";
						case 4:
							return "MPAwards1";
						case 5:
							return "MPAwards1";
						default:
					}
					break;
			}
			break;
		case 12:
			return "MPAwards3";
		case 11:
			return "MPAwards4";
		case 20:
			return "MPAwards5";
		case 19:
			return "MPAwards2";
		case 15:
			return "MPAwards4";
		case 17:
			return "MPAwards2";
		case 21:
			return "MPAwards2";
		case 14:
			return "MPAwards4";
		case 22:
			return "MPAwards1";
		case 1:
			return "MPAwards5";
		case 2:
			return "MPAwards5";
		case 3:
			return "MPAwards5";
		case 4:
			return "MPAwards5";
		case 5:
			return "MPAwards4";
		case 6:
			return "MPAwards5";
		case 7:
			return "MPAwards4";
		case 8:
			return "MPAwards5";
		case 9:
			return "MPAwards4";
		case 10:
			return "MPAwards2";
		case 23:
			return "MPAwards1";
		case 24:
			return "MPAwards1";
		case 25:
			return "MPAwards1";
		case 26:
			return "MPAwards1";
		case 27:
			return "MPAwards1";
		case 28:
			return "MPAwards1";
		case 29:
			return "MPAwards5";
		case 30:
			return "MPAWARDS5";
		case 31:
			return "MPAWARDS5";
		case 32:
			return "MPAWARDS5";
		case 33:
			return "MPAWARDS5";
		case 34:
			return "MPAWARDS5";
		case 35:
			return "MPAWARDS5";
		case 36:
			return "MPAWARDS5";
		case 37:
			return "MPAWARDS5";
		case 38:
			return "MPAWARDS5";
		case 40:
			return "MPAWARDS5";
		case 41:
			return "MPAWARDS5";
		case 42:
			return "MPAWARDS5";
		case 43:
			return "MPAWARDS5";
		case 44:
			return "MPAWARDS5";
		case 45:
			return "MPAWARDS5";
		case 46:
			return "MPAWARDS5";
		case 47:
			return "MPAWARDS5";
		case 48:
			return "MPAWARDS5";
		case 49:
			return "MPAWARDS5";
		case 54:
			return "MPAWARDS5";
		case 55:
			return "MPAWARDS5";
		case 56:
			return "MPAWARDS5";
		case 57:
			return "MPAWARDS5";
		case 58:
			return "MPAWARDS5";
		case 59:
			return "MPAWARDS5";
		case 126:
			return "MPAwardHeists";
		case 127:
			return "MPAwardHeists";
		case 128:
			return "MPAwardHeists";
		case 129:
			return "MPAwardHeists";
		case 130:
			return "MPAwardHeists";
		case 67:
			return "MPAwardHeists";
		case 120:
			return "MPAwardHeists";
		case 121:
			return "MPAwardHeists";
		case 122:
			return "MPAwardHeists";
		case 123:
			return "MPAwardHeists";
		case 124:
			return "MPAwardHeists";
		case 125:
			return "MPAwardHeists";
		case 131:
			return "MPAwardHeists";
		case 132:
			return "MPAwardHeists";
		case 133:
			return "MPAwardHeists";
		case 134:
			return "MPAwardHeists";
		case 135:
			return "MPAwardHeists";
		case 136:
			return "MPAwardHeists";
		case 137:
			return "MPAwardHeists";
		case 138:
			return "MPAwardHeists";
		case 139:
			return "MPAwardNightclub";
		case 140:
			return "MPAwardNightclub";
		case 141:
			return "MPAwardNightclub";
		case 142:
			return "MPAwardNightclub";
		case 143:
			return "MPAwardNightclub";
		case 70:
			return "MPAwardsArena";
		case 71:
			return "MPAwardsArena";
		case 72:
			return "MPAwardsArena";
		case 73:
			return "MPAwardsArena";
		case 74:
			return "MPAwardsArena";
		case 75:
			return "MPAwardsArena";
		case 76:
			return "MPAwardsArena";
		case 77:
			return "MPAwardsArena";
		case 78:
			return "MPAwardsArena";
		case 79:
			return "MPAwardsArena";
		case 80:
			return "MPAwardsArena";
		case 81:
			return "MPAwardsArena";
		case 82:
			return "MPAwardsArena";
		case 83:
			return "MPAwardsArena";
		case 84:
			return "MPAwardsArena";
		case 85:
			return "MPAwardsArena";
		case 86:
			return "MPAwardsArena";
		case 87:
			return "MPAwardCasino";
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
			return "MPAwardCasinoHeist";
			break;
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
			return "MPAwardIslandHeist";
			break;
		case 107:
		case 108:
		case 109:
		case 110:
		case 112:
		case 114:
		case 115:
		case 116:
		case 111:
		case 113:
			return "MPAwardTunerPack";
			break;
		case 117:
		case 118:
		case 119:
			return "MPAwardsFixer";
			break;
	}
	return "";
}

char* func_618(int iParam0, int iParam1, int iParam2)//Position - 0x82008
{
	if (iParam2 == 9)
	{
	}
	if (iParam1 == 5)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "ShootDownPoliceHeli";
		case 39:
			return "ComeFromBehind";
		case 60:
			return "TheFugitive";
		case 61:
			return "NoClaimsBonus";
		case 62:
			return "swallow";
		case 63:
			return "Spinderella";
		case 16:
			return "Timeinheli";
		case 0:
			return "HangingOutInCars";
		case 51:
			return "WinRallyAsDriver";
		case 52:
			return "WinRallyAsNavigator";
		case 12:
			return "Killenemiesindriveby";
		case 11:
			return "JackVehicles";
		case 20:
			return "Jump40m";
		case 19:
			return "Timesavoiding5stars";
		case 15:
			return "GetLapDances";
		case 17:
			return "Delivercars";
		case 21:
			return "racesWon_generic";
		case 14:
			return "HoldUpShops";
		case 22:
			return "ArmWrestlingVictories";
		case 1:
			return "KillPistol";
		case 2:
			return "KillSniperrifle";
		case 3:
			return "KillGrenades";
		case 4:
			return "KillShotgun";
		case 5:
			return "KillSMG";
		case 6:
			return "KillRocketLauncher";
		case 7:
			return "KillStickyBombs";
		case 8:
			return "KillMeleeWeapons";
		case 9:
			return "Headshots" /* GXT: Headshot kills */;
		case 10:
			return "BlowupVehicles";
		case 23:
			return "Winatdarts";
		case 24:
			return "Blowupenemiesusingcarbombs";
		case 25:
			return "KilledpeoplewithanAssaultRifle";
		case 26:
			return "KilledpeoplewithaMachineGun";
		case 27:
			return "Gethaircuts";
		case 28:
			return "Parachute1min";
		case 29:
			return "ParachuteJumps20m";
		case 30:
			return "Birdie";
		case 31:
			return "GolfWin";
		case 32:
			return "TargetGridWin";
		case 33:
			return "RandomTargetsWin";
		case 34:
			return "CoveredTargetsWin";
		case 35:
			return "TennisMatchesWon";
		case 36:
			return "TennisServiceAce";
		case 37:
			return "GTARacesWon";
		case 38:
			return "FastestLap";
		case 40:
			return "DeathmatchWin";
		case 41:
			return "TeamDeathmatchWin";
		case 42:
			return "TeamDeathmatchMVP";
		case 43:
			return "KillStreak";
		case 44:
			return "TotalKills";
		case 45:
			return "HatTrickKiller";
		case 46:
			return "StolenKill";
		case 47:
			return "Land2mFromTarget";
		case 48:
			return "ReachHordeModeWave";
		case 49:
			return "EarnCashFromBetting";
		case 54:
			return "RaceToPointWinner";
		case 55:
			return "BountyHunter";
		case 56:
			return "OverallKills";
		case 57:
			return "WinASeaRace";
		case 58:
			return "WinAPlaneRace";
		case 59:
			return "GetRevengeKillDeathmatch";
		case 126:
			return "Captured";
		case 127:
			return "ThePostman";
		case 128:
			return "GimmeThat";
		case 129:
			return "NoYouDont";
		case 130:
			return "DeathDefying";
		case 67:
			return "dailyduty";
		case 120:
			return "TheBigTime";
		case 121:
			return "BePrepared";
		case 122:
			return "ForHire";
		case 123:
			return "ShotCaller";
		case 124:
			return "LiveALittle";
		case 125:
			return "Decorated";
		case 131:
			return "LightsOut";
		case 132:
			return "InControl";
		case 133:
			return "PsychoKiller";
		case 134:
			return "CalmDown";
		case 135:
			return "StillStanding";
		case 136:
			return "OneAndOnly";
		case 137:
			return "OneManArmy";
		case 138:
			return "MovingDay";
		case 139:
			return "Solomun";
		case 140:
			return "TaleOfUs";
		case 141:
			return "Dixon";
		case 142:
			return "TheBlackMadonna";
		case 143:
			return "ClubDrunk";
		case 70:
			return "watchyourstep";
		case 71:
			return "TOWEROFFENSE";
		case 72:
			return "READYFORWAR";
		case 73:
			return "THROUGHTHELENS";
		case 74:
			return "SPINNER";
		case 75:
			return "YOUMEANBOOBYTRAP";
		case 76:
			return "MASTERBANDITO";
		case 77:
			return "SITTINGDUCK";
		case 78:
			return "CROWDPARTICIPATION";
		case 79:
			return "KILLORBEKILLED";
		case 80:
			return "MASSIVESHUNT";
		case 81:
			return "YOUREOUTTAHERE";
		case 82:
			return "WEVEGOTONE";
		case 83:
			return "ARENAWAGEWORKER";
		case 84:
			return "TIMESERVED";
		case 85:
			return "TOPSCORE";
		case 86:
			return "CAREERWINNER";
		case 87:
			return "HighRoller";
		case 88:
			return "Preparation";
		case 89:
			return "AsleepOnTheJob";
		case 90:
			return "DailyCashGrab";
		case 91:
			return "Bigbrother";
		case 92:
			return "Sharpshooter";
		case 93:
			return "RaceChampion";
		case 94:
			return "PlatinumSword";
		case 95:
			return "CoinPurse";
		case 96:
			return "Astrochimp";
		case 97:
			return "Masterful";
		case 99:
			return "sunset";
		case 100:
			return "TreasureHunter";
		case 101:
			return "WreckDiving";
		case 102:
			return "Keinmusik";
		case 103:
			return "PalmsTrax";
		case 104:
			return "Moodymann";
		case 105:
			return "FillYourBags";
		case 106:
			return "Prepped";
		case 107:
			return "LSCarMeetMember";
		case 108:
			return "SprintRacer";
		case 109:
			return "StreetRacer";
		case 110:
			return "PursuitRacer";
		case 112:
			return "SpecialDelivery";
		case 114:
			return "Groundwork";
		case 115:
			return "ContractualCriminal";
		case 116:
			return "FacesofDeath";
		case 111:
			return "TriedandTested";
		case 113:
			return "CarExporter";
		case 117:
			return "ContracualObligations";
		case 118:
			return "ColdCaller";
		case 119:
			return "Producer";
			break;
			break;
	}
	return "";
}

char* func_619(int iParam0, int iParam1, int iParam2)//Position - 0x82790
{
	if (iParam1 == 5)
	{
	}
	if (iParam2 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWD_721";
		case 60:
			return "AWD_728";
		case 61:
			return "AWD_730";
		case 62:
			return "AWD_731";
		case 63:
			return "AWD_732";
		case 16:
			switch (iParam1)
			{
				case 2:
					return "AWS_550";
					break;
				case 3:
				case 4:
				case 5:
					return "AWD_550";
					break;
			}
			break;
		case 0:
			return "AWD_282";
		case 51:
			return "AWD_707";
		case 52:
			return "AWD_708";
		case 12:
			return "AWD_581";
		case 11:
			return "AWD_582";
		case 19:
			return "AWD_534";
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWD_509_M";
			}
			else
			{
				return "AWD_509";
			}
			break;
		case 39:
			return "AWD_678";
		case 15:
			return "AWD_559";
		case 17:
			return "AWD_535";
		case 21:
			return "AWD_586";
		case 14:
			return "AWD_566";
		case 22:
			return "AWD_589";
		case 1:
			return "AWD_506";
		case 2:
			return "AWD_585";
		case 3:
			return "AWD_541";
		case 4:
			return "AWD_584";
		case 5:
			return "AWD_540";
		case 6:
			return "AWD_539";
		case 7:
			return "AWD_538";
		case 8:
			return "AWD_537";
		case 9:
			return "AWD_536";
		case 10:
			return "AWD_583";
		case 23:
			return "AWD_610";
		case 24:
			return "AWD_611";
		case 25:
			return "AWD_631";
		case 26:
			return "AWD_632";
		case 27:
			return "AWD_639";
		case 28:
			return "AWD_640";
		case 29:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWD_699_m";
			}
			else
			{
				return "AWD_699";
			}
			break;
		case 30:
			return "AWD_661";
		case 31:
			return "AWD_662";
		case 32:
			return "AWD_663";
		case 33:
			return "AWD_665";
		case 34:
			return "AWD_666";
		case 35:
			return "AWD_668";
		case 36:
			return "AWD_669";
		case 37:
			return "AWD_675";
		case 38:
			return "AWD_676";
		case 40:
			return "AWD_679";
		case 41:
			return "AWD_681";
		case 42:
			return "AWD_682";
		case 43:
			return "AWD_677";
		case 44:
			return "AWD_683";
		case 45:
			return "AWD_684";
		case 46:
			return "AWD_685";
		case 47:
			return "AWD_692";
		case 48:
			return "AWD_696";
		case 49:
			return "AWD_693";
		case 54:
			return "AWD_710";
		case 55:
			return "AWD_703";
		case 56:
			return "AWD_704";
		case 57:
			return "AWD_722";
		case 58:
			return "AWD_723";
		case 59:
			return "AWD_716";
		case 126:
			return "AWD_740" /* GXT: ~1~ Captures won. */;
		case 127:
			return "AWD_741" /* GXT: ~1~ package drop-offs in Capture. */;
		case 128:
			return "AWD_742" /* GXT: ~1~ package pickups in Capture. */;
		case 129:
			return "AWD_743" /* GXT: ~1~ package carrier kills in Capture. */;
		case 130:
			return "AWD_744" /* GXT: ~1~ Captures won without dying. */;
		case 67:
			return "AWD_782";
		case 120:
			return "AWD_745" /* GXT: ~1~ Heist Finales successfully completed. */;
		case 121:
			return "AWD_746" /* GXT: ~1~ Heist Setups completed. */;
		case 122:
			return "AWD_747" /* GXT: Heist crew member ~1~ times. */;
		case 123:
			return "AWD_748" /* GXT: Heist leader ~1~ times. */;
		case 124:
			return "AWD_749";
		case 125:
			return "AWD_752" /* GXT: ~1~ Heist platinum medals. */;
		case 131:
			return "AWD_755" /* GXT: ~1~ Night Vision kills. */;
		case 132:
			return "AWD_757" /* GXT: ~1~ crowds successfully controlled. */;
		case 133:
			return "AWD_758" /* GXT: ~1~ Psychopaths killed. */;
		case 134:
			return "AWD_759" /* GXT: Mental State returned to Normal ~1~ times. */;
		case 135:
			return "AWD_760" /* GXT: ~1~ Last Team Standings won. */;
		case 136:
			return "AWD_761" /* GXT: Only player left alive in LTS  ~1~ times. */;
		case 137:
			return "AWD_762" /* GXT: Killed the whole team in LTS ~1~ times. */;
		case 138:
			return "AWD_764" /* GXT: ~1~ property trade ins. */;
		case 139:
			return "AWD_788";
		case 140:
			return "AWD_789";
		case 141:
			return "AWD_790";
		case 142:
			return "AWD_791";
		case 143:
			return "AWD_792";
		case 70:
			return "AWD_817";
		case 71:
			return "AWD_818";
		case 72:
			return "AWD_821";
		case 73:
			return "AWD_822";
		case 74:
			return "AWD_823";
		case 75:
			return "AWD_824";
		case 76:
			return "AWD_825";
		case 77:
			return "AWD_826";
		case 78:
			return "AWD_827";
		case 79:
			return "AWD_828";
		case 80:
			return "AWD_829";
		case 81:
			return "AWD_830";
		case 82:
			return "AWD_831";
		case 83:
			return "AWD_832";
		case 84:
			return "AWD_833";
		case 85:
			return "AWD_834";
		case 86:
			return "AWD_835";
		case 87:
			if (iParam1 == 5)
			{
				return "AWS_845_4" /* GXT: Complete 50 Casino Work missions for Agatha and earn $100,000. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_845_3" /* GXT: Complete 25 Casino Work missions for Agatha and earn $50,000. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_845_2" /* GXT: Complete 10 Casino Work missions for Agatha and earn $20,000. */;
			}
			else
			{
				return "AWS_845_1" /* GXT: Complete 5 Casino Work missions for Agatha and earn $10,000. */;
			}
			break;
		case 88:
			return "AWS_847";
		case 89:
			return "AWS_848";
		case 90:
			return "AWS_849";
		case 91:
			return "AWS_850";
		case 92:
			return "AWS_851";
		case 93:
			return "AWS_852";
		case 94:
			return "AWS_853";
		case 95:
			return "AWS_854";
		case 96:
			return "AWS_855";
		case 97:
			return "AWS_856";
		case 99:
			if (iParam1 == 5)
			{
				return "AWS_936d" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_936c" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_936b" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 15 minutes. */;
			}
			else
			{
				return "AWS_936a" /* GXT: Dance to Keinemusik's set at the Cayo Perico beach party for 5 minutes. */;
			}
			break;
		case 100:
			if (iParam1 == 5)
			{
				return "AWS_937d" /* GXT: Steal the loot from 50 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_937c" /* GXT: Steal the loot from 20 treasure chests found on Cayo Perico. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_937b" /* GXT: Steal the loot from 10 treasure chests found on Cayo Perico. */;
			}
			else
			{
				return "AWS_937a" /* GXT: Steal the loot from 5 treasure chests found on Cayo Perico. */;
			}
			break;
		case 101:
			if (iParam1 == 5)
			{
				return "AWS_938d" /* GXT: Steal a total of $1,000,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_938c" /* GXT: Steal a total of $750,000 from hidden caches found around the San Andreas coast. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_938b" /* GXT: Steal a total of $250,000 from hidden caches found around the San Andreas coast. */;
			}
			else
			{
				return "AWS_938a" /* GXT: Steal a total of $50,000 from hidden caches found around the San Andreas coast. */;
			}
			break;
		case 102:
			if (iParam1 == 5)
			{
				return "AWS_939d" /* GXT: Dance to Keinemusik's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_939c" /* GXT: Dance to Keinemusik's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_939b" /* GXT: Dance to Keinemusik's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_939a" /* GXT: Dance to Keinemusik's set in The Music Locker for 5 minutes. */;
			}
			break;
		case 103:
			if (iParam1 == 5)
			{
				return "AWS_940d" /* GXT: Dance to Palms Trax set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_940c" /* GXT: Dance to Palms Trax set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_940b" /* GXT: Dance to Palms Trax set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_940a" /* GXT: Dance to Palms Trax set in The Music Locker for 5 minutes. */;
			}
			break;
		case 104:
			if (iParam1 == 5)
			{
				return "AWS_941d" /* GXT: Dance to Moodymann's set in The Music Locker for 60 minutes. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_941c" /* GXT: Dance to Moodymann's set in The Music Locker for 30 minutes. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_941b" /* GXT: Dance to Moodymann's set in The Music Locker for 15 minutes. */;
			}
			else
			{
				return "AWS_941a" /* GXT: Dance to Moodymann's set in The Music Locker for 5 minutes. */;
			}
			break;
		case 105:
			if (iParam1 == 5)
			{
				return "AWS_942d" /* GXT: Steal a total of $20,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_942c" /* GXT: Steal a total of $10,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_942b" /* GXT: Steal a total of $5,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_942a" /* GXT: Steal a total of $1,000,000 in secondary targets during The Cayo Perico Heist. */;
			}
			break;
		case 106:
			if (iParam1 == 5)
			{
				return "AWS_943d" /* GXT: Complete 50 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_943c" /* GXT: Complete 20 prep missions as part of The Cayo Perico Heist. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_943b" /* GXT: Complete 10 prep missions as part of The Cayo Perico Heist. */;
			}
			else
			{
				return "AWS_943a" /* GXT: Complete 5 prep missions as part of The Cayo Perico Heist. */;
			}
			break;
		case 107:
			if (iParam1 == 5)
			{
				return "AWS_945d" /* GXT: Reach LS Car Meet Reputation Level 100. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_945c" /* GXT: Reach LS Car Meet Reputation Level 50. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_945b" /* GXT: Reach LS Car Meet Reputation Level 25. */;
			}
			else
			{
				return "AWS_945a" /* GXT: Reach LS Car Meet Reputation Level 5. */;
			}
			break;
		case 108:
			if (iParam1 == 5)
			{
				return "AWS_967d" /* GXT: Win 50 Sprints. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_967c" /* GXT: Win 25 Sprints. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_967b" /* GXT: Win 10 Sprints. */;
			}
			else
			{
				return "AWS_967a" /* GXT: Win 5 Sprints. */;
			}
			break;
		case 109:
			if (iParam1 == 5)
			{
				return "AWS_946d" /* GXT: Win 50 races in the Street Race Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_946c" /* GXT: Win 25 races in the Street Race Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_946b" /* GXT: Win 10 races in the Street Race Series. */;
			}
			else
			{
				return "AWS_946a" /* GXT: Win 5 races in the Street Race Series. */;
			}
			break;
		case 110:
			if (iParam1 == 5)
			{
				return "AWS_947d" /* GXT: Win 50 races in the Pursuit Series. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_947c" /* GXT: Win 25 races in the Pursuit Series. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_947b" /* GXT: Win 10 races in the Pursuit Series. */;
			}
			else
			{
				return "AWS_947a" /* GXT: Win 5 races in the Pursuit Series. */;
			}
			break;
		case 112:
			if (iParam1 == 5)
			{
				return "AWS_949d" /* GXT: Successfully mod and deliver 50 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_949c" /* GXT: Successfully mod and deliver 25 customer vehicles from your Auto Shop. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_949b" /* GXT: Successfully mod and deliver 10 customer vehicles from your Auto Shop. */;
			}
			else
			{
				return "AWS_949a" /* GXT: Successfully mod and deliver 5 customer vehicles from your Auto Shop. */;
			}
			break;
		case 114:
			if (iParam1 == 5)
			{
				return "AWS_952d" /* GXT: Complete 40 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_952c" /* GXT: Complete 20 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_952b" /* GXT: Complete 10 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_952a" /* GXT: Complete 5 Planning Work missions as leader as part of the Contracts for KDJ and Sessanta. */;
			}
			break;
		case 115:
			if (iParam1 == 5)
			{
				return "AWS_961d" /* GXT: Complete 100 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_961c" /* GXT: Complete 50 Contracts for KDJ and Sessanta. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_961b" /* GXT: Complete 25 Contracts for KDJ and Sessanta. */;
			}
			else
			{
				return "AWS_961a" /* GXT: Complete 5 Contracts for KDJ and Sessanta. */;
			}
			break;
		case 116:
			if (iParam1 == 5)
			{
				return "AWS_962d" /* GXT: Carry out over 30 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_962c" /* GXT: Carry out over 20 headshots across all scenes in Camhedz. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_962b" /* GXT: Carry out over 10 headshots across all scenes in Camhedz. */;
			}
			else
			{
				return "AWS_962a" /* GXT: Carry out over 5 headshots across all scenes in Camhedz. */;
			}
			break;
		case 111:
			if (iParam1 == 5)
			{
				return "AWS_948d" /* GXT: Drive one of the test rides for 240 minutes inside the Test Track. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_948c" /* GXT: Drive one of the test rides for 120 minutes inside the Test Track. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_948b" /* GXT: Drive one of the test rides for 60 minutes inside the Test Track. */;
			}
			else
			{
				return "AWS_948a" /* GXT: Drive one of the test rides for 30 minutes inside the Test Track. */;
			}
			break;
		case 113:
			if (iParam1 == 5)
			{
				return "AWS_950d" /* GXT: Deliver 100 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_950c" /* GXT: Deliver 50 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_950b" /* GXT: Deliver 25 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			else
			{
				return "AWS_950a" /* GXT: Deliver 10 Exotic Exports Vehicles to the Docks for Sessanta's partner. */;
			}
			break;
		case 117:
			if (iParam1 == 5)
			{
				return "AWS_978d" /* GXT: Complete 50 Security Contracts. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_978c" /* GXT: Complete 25 Security Contracts. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_978b" /* GXT: Complete 15 Security Contracts. */;
			}
			else
			{
				return "AWS_978a" /* GXT: Complete 5 Security Contracts. */;
			}
			break;
		case 118:
			if (iParam1 == 5)
			{
				return "AWS_979d" /* GXT: Complete 50 Payphone Hits. */;
			}
			else if (iParam1 == 4)
			{
				return "AWS_979c" /* GXT: Complete 25 Payphone Hits. */;
			}
			else if (iParam1 == 3)
			{
				return "AWS_979b" /* GXT: Complete 15 Payphone Hits. */;
			}
			else
			{
				return "AWS_979a" /* GXT: Complete 5 Payphone Hits. */;
			}
			break;
		case 119:
			return "AWS_983" /* GXT: Watch Dr. Dre working in Record A Studios. */;
			break;
	}
	return "";
}

char* func_620(int iParam0, int iParam1)//Position - 0x833DD
{
	if (iParam1 == 9)
	{
	}
	switch (iParam0)
	{
		case 53:
			return "AWT_721";
		case 39:
			return "AWT_678";
		case 51:
			return "AWT_707";
		case 52:
			return "AWT_708";
		case 60:
			return "AWT_728";
		case 61:
			return "AWT_730";
		case 62:
			return "AWT_731";
		case 63:
			return "AWT_732";
		case 16:
			return "AWT_550";
		case 0:
			return "AWT_282";
		case 12:
			return "AWT_581";
		case 11:
			return "AWT_582";
		case 19:
			return "AWT_534";
		case 20:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return "AWT_509";
			}
			else
			{
				return "AWT_509";
			}
			break;
		case 15:
			return "AWT_559";
		case 17:
			return "AWT_535";
		case 21:
			return "AWT_586";
		case 14:
			return "AWT_566";
		case 22:
			return "AWT_589";
		case 1:
			return "AWT_506";
		case 2:
			return "AWT_585";
		case 3:
			return "AWT_541";
		case 4:
			return "AWT_584";
		case 5:
			return "AWT_540";
		case 6:
			return "AWT_539";
		case 7:
			return "AWT_538";
		case 8:
			return "AWT_537";
		case 9:
			return "AWT_536";
		case 10:
			return "AWT_583";
		case 23:
			return "AWT_610";
		case 24:
			return "AWT_611";
		case 25:
			return "AWT_631";
		case 26:
			return "AWT_632";
		case 27:
			return "AWT_639";
		case 28:
			return "AWT_640";
		case 29:
			return "AWT_699";
		case 30:
			return "AWT_661";
		case 31:
			return "AWT_662";
		case 32:
			return "AWT_663";
		case 33:
			return "AWT_665";
		case 34:
			return "AWT_666";
		case 35:
			return "AWT_668";
		case 36:
			return "AWT_669";
		case 37:
			return "AWT_675";
		case 38:
			return "AWT_676";
		case 40:
			return "AWT_679";
		case 41:
			return "AWT_681";
		case 42:
			return "AWT_682";
		case 43:
			return "AWT_677";
		case 44:
			return "AWT_683";
		case 45:
			return "AWT_684";
		case 46:
			return "AWT_685";
		case 47:
			return "AWT_692";
		case 48:
			return "AWT_696";
		case 49:
			return "AWT_693";
		case 54:
			return "AWT_710";
		case 55:
			return "AWT_703";
		case 56:
			return "AWT_704";
		case 57:
			return "AWT_722";
		case 58:
			return "AWT_723";
		case 59:
			return "AWT_716";
		case 126:
			return "AWT_740" /* GXT: Captured */;
		case 127:
			return "AWT_741" /* GXT: The Postman */;
		case 128:
			return "AWT_742" /* GXT: Gimme That */;
		case 129:
			return "AWT_743" /* GXT: No You Don't */;
		case 130:
			return "AWT_744" /* GXT: Death Defying */;
		case 67:
			return "AWT_782";
		case 120:
			return "AWT_745" /* GXT: The Big Time */;
		case 121:
			return "AWT_746" /* GXT: Be Prepared */;
		case 122:
			return "AWT_747" /* GXT: For Hire */;
		case 123:
			return "AWT_748" /* GXT: Shot Caller */;
		case 124:
			return "AWT_749";
		case 125:
			return "AWT_752" /* GXT: Decorated */;
		case 131:
			return "AWT_755" /* GXT: Lights Out */;
		case 132:
			return "AWT_757" /* GXT: In Control */;
		case 133:
			return "AWT_758" /* GXT: Psycho Killer */;
		case 134:
			return "AWT_759" /* GXT: Calm Down */;
		case 135:
			return "AWT_760" /* GXT: Still Standing */;
		case 136:
			return "AWT_761" /* GXT: One and Only */;
		case 137:
			return "AWT_762" /* GXT: One Man Army */;
		case 138:
			return "AWT_764" /* GXT: Moving Day */;
		case 139:
			return "AWT_788";
		case 140:
			return "AWT_789";
		case 141:
			return "AWT_790";
		case 142:
			return "AWT_791";
		case 143:
			return "AWT_792";
		case 70:
			return "AWT_817";
		case 71:
			return "AWT_818";
		case 72:
			return "AWT_821";
		case 73:
			return "AWT_822";
		case 74:
			return "AWT_823";
		case 75:
			return "AWT_824";
		case 76:
			return "AWT_825";
		case 77:
			return "AWT_826";
		case 78:
			return "AWT_827";
		case 79:
			return "AWT_828";
		case 80:
			return "AWT_829";
		case 81:
			return "AWT_830";
		case 82:
			return "AWT_831";
		case 83:
			return "AWT_832";
		case 84:
			return "AWT_833";
		case 85:
			return "AWT_834";
		case 86:
			return "AWT_835";
		case 87:
			return "AWT_845" /* GXT: High Roller */;
		case 88:
			return "AWT_847" /* GXT: Preparation */;
		case 89:
			return "AWT_848" /* GXT: Asleep On The Job */;
		case 90:
			return "AWT_849" /* GXT: Daily Cash Grab */;
		case 91:
			return "AWT_850" /* GXT: Big Brother */;
		case 92:
			return "AWT_851" /* GXT: Sharpshooter */;
		case 93:
			return "AWT_852" /* GXT: Race Champion */;
		case 94:
			return "AWT_853" /* GXT: Platinum Sword */;
		case 95:
			return "AWT_854" /* GXT: Coin Purse */;
		case 96:
			return "AWT_855" /* GXT: Astrochimp */;
		case 97:
			return "AWT_856" /* GXT: Masterful */;
		case 99:
			return "AWT_936" /* GXT: Sun Set */;
		case 100:
			return "AWT_937" /* GXT: Treasure Hunter */;
		case 101:
			return "AWT_938" /* GXT: Wreck Diving */;
		case 102:
			return "AWT_939" /* GXT: Keinemusik */;
		case 103:
			return "AWT_940" /* GXT: Palms Trax */;
		case 104:
			return "AWT_941" /* GXT: Moodymann */;
		case 105:
			return "AWT_942" /* GXT: Fill Your Bags */;
		case 106:
			return "AWT_943" /* GXT: Prepped */;
		case 107:
			return "AWT_945" /* GXT: LS Car Meet Member */;
			break;
		case 108:
			return "AWT_967" /* GXT: Sprint Racer */;
			break;
		case 109:
			return "AWT_946" /* GXT: Street Racer */;
			break;
		case 110:
			return "AWT_947" /* GXT: Pursuit Racer */;
			break;
		case 112:
			return "AWT_949" /* GXT: Special Delivery */;
			break;
		case 114:
			return "AWT_952" /* GXT: Groundwork */;
			break;
		case 115:
			return "AWT_961" /* GXT: Contractual Criminal */;
			break;
		case 116:
			return "AWT_962" /* GXT: Faces Of Death */;
			break;
		case 111:
			return "AWT_948" /* GXT: Tried and Tested */;
			break;
		case 113:
			return "AWT_950" /* GXT: Car Exporter */;
			break;
		case 117:
			return "AWT_978" /* GXT: Contractual Obligations */;
			break;
		case 118:
			return "AWT_979" /* GXT: Cold Caller */;
			break;
		case 119:
			return "AWT_983" /* GXT: Producer */;
			break;
	}
	return "";
}

var func_621(int iParam0)//Position - 0x83BB2
{
	var uVar0;
	uVar0 = Global_1656668.f_1061[__LIB_0__.func_159(iParam0)];
	return uVar0;
}

int func_622(var uParam0)//Position - 0x83FA4
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 758;
			break;
		case 1:
			return 759;
			break;
		case 2:
			return 760;
			break;
		case 3:
			return 761;
			break;
		case 4:
			return 8735;
			break;
	}
	return 13122;
}

void func_623(int iParam0, bool bParam1)//Position - 0x8413F
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1205[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1205[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

var func_624(int iParam0)//Position - 0x841AB
{
	var uVar0;
	uVar0 = Global_1656668.f_1205[__LIB_0__.func_159(iParam0)];
	return uVar0;
}

int func_625(var uParam0)//Position - 0x84211
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 768;
			break;
		case 1:
			return 769;
			break;
		case 2:
			return 770;
			break;
		case 3:
			return 771;
			break;
		case 4:
			return 8733;
			break;
	}
	return 13122;
}

void func_626(int iParam0, bool bParam1)//Position - 0x843C2
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1157[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1157[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

var func_627(int iParam0)//Position - 0x8442E
{
	var uVar0;
	uVar0 = Global_1656668.f_1157[__LIB_0__.func_159(iParam0)];
	return uVar0;
}

int func_628(var uParam0)//Position - 0x84494
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 778;
			break;
		case 1:
			return 779;
			break;
		case 2:
			return 780;
			break;
		case 3:
			return 781;
			break;
		case 4:
			return 8731;
			break;
	}
	return 13122;
}

void func_629(int iParam0, bool bParam1)//Position - 0x84717
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_1656668.f_1109[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1656668.f_1109[__LIB_0__.func_159(iParam0)]), __LIB_0__.func_158(iVar0));
		}
	}
}

var func_630(int iParam0)//Position - 0x84783
{
	var uVar0;
	uVar0 = Global_1656668.f_1109[__LIB_0__.func_159(iParam0)];
	return uVar0;
}

int func_631(var uParam0)//Position - 0x847E9
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = __LIB_0__.func_159(iVar0);
	switch (iVar1)
	{
		case 0:
			return 788;
			break;
		case 1:
			return 789;
			break;
		case 2:
			return 790;
			break;
		case 3:
			return 791;
			break;
		case 4:
			return 8729;
			break;
	}
	return 13122;
}

int func_632(int iParam0, int iParam1)//Position - 0x848CA
{
	if (iParam1 <= iParam0)
	{
		return 1;
	}
	return 0;
}

bool func_633()//Position - 0x848FB
{
	return Global_2703735.f_3307.f_1;
}

void func_634(int iParam0, int iParam1, int iParam2)//Position - 0x84933
{
	int iVar0;
	iVar0 = Global_2868734[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_635(int iParam0)//Position - 0x8601E
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 6);
	}
	return 0;
}

bool func_636()//Position - 0x8FD37
{
	return Global_2714762.f_853;
}

bool func_637(int* iParam0)//Position - 0x903A4
{
	return BitTest(*iParam0, 2);
}

int func_638()//Position - 0x90C08
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_639()//Position - 0x91ABA
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 7);
}

void func_640(float fParam0)//Position - 0x91E44
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(false);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

void func_641(int iParam0)//Position - 0x93CF0
{
	if (!Global_1931398 == iParam0)
	{
		Global_1931398 = iParam0;
	}
}

void func_642()//Position - 0x93D09
{
	MISC::SET_BIT(&(Global_1048576.f_10), 22);
}

bool func_643()//Position - 0x93D1D
{
	return BitTest(Global_1048576.f_10, 21);
}

void func_644(int iParam0)//Position - 0x94093
{
	Global_2715699.f_6503 = iParam0;
}

void func_645(int iParam0)//Position - 0x940A4
{
	Global_2715699.f_6502 = iParam0;
}

void func_646(int iParam0)//Position - 0x940B5
{
	Global_2715699.f_6501 = iParam0;
}

void func_647(int iParam0)//Position - 0x940C6
{
	Global_2715699.f_6322 = iParam0;
}

int func_648()//Position - 0x940D7
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116841[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_649()//Position - 0x9410E
{
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
}

void func_650()//Position - 0x942F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		Global_1964160[iVar0] = -1;
		Global_1964195[iVar0] = -1;
		Global_1964230[iVar0] = -1;
		iVar0++;
	}
}

void func_651()//Position - 0x94326
{
	Global_2714762.f_43.f_41 = 0;
}

void func_652()//Position - 0x94337
{
	Global_1922955.f_6 = 0;
}

void func_653()//Position - 0x94346
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 5);
}

bool func_654()//Position - 0x94362
{
	return BitTest(Global_2714762.f_3, 7);
}

void func_655(int iParam0)//Position - 0x94372
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	if (((Global_2779511[iParam0 /*5*/].f_1 == -1 || Global_2779511[iParam0 /*5*/].f_2 == -1) || Global_2779511[iParam0 /*5*/].f_3 == -1) || Global_2779511[iParam0 /*5*/].f_4 == -1)
	{
		return;
	}
	HUD::REPLACE_HUD_COLOUR_WITH_RGBA(Global_2779511[iParam0 /*5*/], Global_2779511[iParam0 /*5*/].f_1, Global_2779511[iParam0 /*5*/].f_2, Global_2779511[iParam0 /*5*/].f_3, Global_2779511[iParam0 /*5*/].f_4);
	Global_2779511[iParam0 /*5*/] = -1;
	Global_2779511[iParam0 /*5*/].f_1 = -1;
	Global_2779511[iParam0 /*5*/].f_2 = -1;
	Global_2779511[iParam0 /*5*/].f_3 = -1;
	Global_2779511[iParam0 /*5*/].f_4 = -1;
}

int func_656(int iParam0, int iParam1)//Position - 0x9443F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_2779511[iVar0 /*5*/] == iParam0)
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_657()//Position - 0x94470
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 18);
}

void func_658()//Position - 0x94584
{
	Global_2711251.f_32 = 0;
}

void func_659()//Position - 0x94593
{
	Global_2714762.f_691 = 0;
}

void func_660()//Position - 0x945B7
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 >= 0)
	{
		MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_96.f_32), 6);
	}
}

void func_661()//Position - 0x945DD
{
	Global_2714762 = 0;
	Global_2714762.f_2 = 0;
	Global_2714762.f_3 = 0;
}

bool func_662()//Position - 0x94607
{
	return Global_1931899;
}

bool func_663()//Position - 0x94621
{
	return BitTest(Global_2714762, 16);
}

void func_664()//Position - 0x94630
{
	MISC::CLEAR_BIT(&Global_2714762, 21);
}

void func_665()//Position - 0x94642
{
	Global_2715699.f_2846.f_35 = 1;
}

void func_666()//Position - 0x94654
{
	Global_2715699.f_1.f_2827 = 1;
}

void func_667()//Position - 0x94666
{
	Global_2714762.f_827 = 1;
}

void func_668()//Position - 0x94676
{
	Global_2715699.f_1.f_2826 = 1;
}

void func_669()//Position - 0x94688
{
	MISC::SET_BIT(&Global_2714762, 21);
}

void func_670()//Position - 0x9469A
{
	struct<38> Var0;
	Var0 = 31;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_2711289 = { Var0 };
}

void func_671()//Position - 0x946C2
{
	Global_2715699.f_2846.f_1 = 1;
}

void func_672()//Position - 0x946D4
{
	Global_2715699.f_2846.f_1 = 0;
}

bool func_673()//Position - 0x946E6
{
	return Global_2714762.f_716;
}

bool func_674()//Position - 0x946F5
{
	return Global_2714762.f_706;
}

bool func_675()//Position - 0x94704
{
	return Global_2714762.f_702;
}

bool func_676()//Position - 0x94713
{
	return BitTest(Global_2714762.f_2, 15);
}

void func_677()//Position - 0x94741
{
	Global_2715699.f_2846.f_35 = 0;
}

bool func_678()//Position - 0x94753
{
	return BitTest(Global_1048576.f_10, 8);
}

void func_679()//Position - 0x94764
{
	Global_2714762.f_721 = 0;
}

bool func_680()//Position - 0x94774
{
	return Global_2714762.f_721;
}

void func_681()//Position - 0x94783
{
	Global_2714762.f_752 = 0;
}

bool func_682()//Position - 0x94793
{
	return Global_2714762.f_752;
}

void func_683()//Position - 0x947A2
{
	Global_2715699.f_1.f_838 = 0;
	Global_2715699.f_1.f_839 = 0;
	Global_2715699.f_1.f_841 = 0;
}

void func_684()//Position - 0x947C8
{
	MISC::CLEAR_BIT(&Global_2714762, 4);
}

void func_685()//Position - 0x947D9
{
	MISC::CLEAR_BIT(&Global_2714762, 28);
}

void func_686()//Position - 0x947EB
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 4);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 5);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 7);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 8);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 9);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 10);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 11);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 12);
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_11.f_1), 13);
}

void func_687(bool bParam0)//Position - 0x948A1
{
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bParam0);
}

int func_688()//Position - 0x948F4
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if ((Global_1853348[iVar0 /*834*/].f_36.f_2 == 63 || Global_1853348[iVar0 /*834*/].f_36.f_2 == 62) || Global_1853348[iVar0 /*834*/].f_36.f_2 == 61)
	{
		return 1;
	}
	return 0;
}

void func_689()//Position - 0x9495E
{
	Global_2714762.f_881 = 1;
}

bool func_690()//Position - 0x9496E
{
	return Global_2715699.f_2846.f_2;
}

var func_691(int iParam0)//Position - 0x9497F
{
	return Global_1853348[iParam0 /*834*/].f_96.f_2;
}

bool func_692()//Position - 0x949A8
{
	return __LIB_0__.func_1("FM_RETRY_INV" /* GXT: Press ~INPUT_FRONTEND_X~ to replay the Job. Press ~INPUT_FRONTEND_CANCEL~ to start a random Job. More than half the players have to agree. */);
}

void func_693(int iParam0)//Position - 0x94B60
{
	Global_112471 = (Global_112471 - (Global_112471 && iParam0));
}

void func_694(int iParam0)//Position - 0x94B78
{
	Global_112472 = (Global_112472 - (Global_112472 && iParam0));
}

void func_695(var uParam0, var uParam1)//Position - 0x94BA0
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_696()//Position - 0x94C26
{
	return Global_2715699.f_1.f_2822;
}

bool func_697(int iParam0)//Position - 0x94C37
{
	return (Global_112471 && iParam0) != 0;
}

bool func_698(int iParam0)//Position - 0x94C48
{
	return (Global_112472 && iParam0) != 0;
}

int func_699(int iParam0)//Position - 0x94CC5
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11861 /* Tunable: DISABLE_BAD_SPORT_HOT_TARGET */)
			{
				return 1;
			}
			break;
		case 132:
			if (Global_262145.f_11863 /* Tunable: DISABLE_BAD_SPORT_CHECKPOINT */)
			{
				return 1;
			}
			break;
		case 133:
			if (Global_262145.f_11860 /* Tunable: DISABLE_BAD_SPORT_CHALLENGE */)
			{
				return 1;
			}
			break;
		case 136:
			if (Global_262145.f_11864 /* Tunable: DISABLE_BAD_SPORT_PENNED_IN */)
			{
				return 1;
			}
			break;
		case 138:
			if (Global_262145.f_11865 /* Tunable: DISABLE_BAD_SPORT_PASS_THE_PARCEL */)
			{
				return 1;
			}
			break;
		case 139:
			if (Global_262145.f_11866 /* Tunable: DISABLE_BAD_SPORT_HOT_PROPERTY */)
			{
				return 1;
			}
			break;
		case 129:
			if (Global_262145.f_11862 /* Tunable: DISABLE_BAD_SPORT_KILL_LIST */)
			{
				return 1;
			}
			break;
		case 140:
			if (Global_262145.f_11867 /* Tunable: DISABLE_BAD_SPORT_DEAD_DROP */)
			{
				return 1;
			}
			break;
		case 141:
			if (Global_262145.f_11868 /* Tunable: DISABLE_BAD_SPORT_KING_OF_THE_CASTLE */)
			{
				return 1;
			}
			break;
		case 144:
			if (Global_262145.f_11869 /* Tunable: DISABLE_BAD_SPORT_CRIMINAL_DAMAGES */)
			{
				return 1;
			}
			break;
		case 146:
			if (Global_262145.f_11870 /* Tunable: DISABLE_BAD_SPORT_HUNT_THE_BEAST */)
			{
				return 1;
			}
			break;
		case 236:
		case 150:
			break;
	}
	return 0;
}

bool func_700()//Position - 0x94E08
{
	return BitTest(Global_1574589, 0);
}

int func_701(int iParam0)//Position - 0x94EA5
{
	if (iParam0 != -1)
	{
		return Global_262145.f_32760[iParam0];
	}
	return -1;
}

int func_702(int iParam0)//Position - 0x94EC2
{
	switch (iParam0)
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		default:
	}
	return 0;
}

void func_703()//Position - 0x94EFA
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId");
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId"))
	{
		DECORATOR::DECOR_REMOVE(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "TeamId");
	}
}

void func_704()//Position - 0x94F7D
{
	Global_2714762.f_697 = 0;
	NETWORK::NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE();
}

void func_705(bool bParam0)//Position - 0x94F91
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 2);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 2);
	}
}

int func_706(int iParam0)//Position - 0x94FEE
{
	if (iParam0 == 4 || iParam0 == 6)
	{
		return 1;
	}
	return 0;
}

void func_707()//Position - 0x9500C
{
	Global_2714762.f_841 = 0;
}

void func_708()//Position - 0x9502B
{
	Global_2714762.f_845 = 0;
}

bool func_709()//Position - 0x9503B
{
	return Global_2714762.f_845;
}

void func_710()//Position - 0x9504A
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 1);
}

void func_711()//Position - 0x951B7
{
	Global_1922915 = 0;
	Global_1922915.f_2 = 0;
	Global_1922915.f_8 = 0;
	Global_1922915.f_3 = 0;
	Global_1922915.f_6 = 0;
}

char* func_712(int iParam0)//Position - 0x951E0
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		case 1:
			return "playlist";
		case 2:
			return "lifeinvaderpost";
		case 3:
			return "photo";
		case 4:
			return "challenge";
		default:
	}
	return "gta5mission";
}

void func_713()//Position - 0x9523A
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

int func_714()//Position - 0x95250
{
	if (NETWORK::UGC_IS_CREATING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_GETTING())
	{
		return 1;
	}
	else if (NETWORK::UGC_IS_MODIFYING())
	{
		return 1;
	}
	return 0;
}

bool func_715()//Position - 0x952C1
{
	return Global_2714762.f_734;
}

void func_716(bool bParam0)//Position - 0x952D0
{
	if (bParam0)
	{
		Global_1574615 = 1;
	}
	else
	{
		Global_1574615 = 0;
	}
}

void func_717()//Position - 0x952EA
{
	Global_2715699.f_1.f_2828.f_13 = 0;
	Global_2715699.f_1.f_2828 = 0;
	Global_2715699.f_1.f_2828.f_1 = 0;
	Global_2715699.f_1.f_2828.f_2 = 0;
	Global_2715699.f_1.f_2828.f_3 = 0;
	Global_2715699.f_1.f_2828.f_4 = 0;
	Global_2715699.f_1.f_2828.f_5 = 0;
	Global_2715699.f_1.f_2828.f_6 = 0;
	Global_2715699.f_1.f_2828.f_7 = 0;
	Global_2715699.f_1.f_2828.f_8 = 0;
	Global_2715699.f_1.f_2828.f_9 = 0;
	Global_2715699.f_1.f_2828.f_10 = 0;
	Global_2715699.f_1.f_2828.f_11 = 0;
	Global_2715699.f_1.f_2828.f_12 = 0;
}

bool func_718(int iParam0)//Position - 0x95398
{
	return Global_2689235[iParam0 /*453*/].f_119 == 1;
}

void func_719()//Position - 0x953AD
{
	Global_2714762.f_716 = 1;
}

void func_720()//Position - 0x953BD
{
	Global_2714762.f_669.f_14 = 0;
}

bool func_721()//Position - 0x953CF
{
	return Global_2714762.f_669.f_14;
}

void func_722()//Position - 0x953E0
{
	Global_2714762.f_43.f_55 = 0;
}

void func_723()//Position - 0x953F1
{
	Global_2714762.f_43.f_43 = -1;
}

int func_724()//Position - 0x95402
{
	return Global_2714762.f_43.f_43;
}

void func_725(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x95412
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2661017)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uParam0, &(Global_2661017.f_1)))
	{
		return;
	}
	Global_2661083 = 1;
}

int func_726()//Position - 0x954E9
{
	return Global_1922955.f_12;
}

void func_727(var uParam0, var uParam1)//Position - 0x954F7
{
	Global_1922955.f_14 = uParam0;
	Global_1922955.f_15 = uParam1;
}

void func_728(var uParam0)//Position - 0x9550F
{
	Global_1922955.f_12 = uParam0;
}

int func_729()//Position - 0x9551F
{
	return Global_1922955.f_13;
}

void func_730()//Position - 0x9555F
{
	Global_2714762.f_43.f_56 = 1;
}

void func_731()//Position - 0x95570
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2653202.f_4.f_3)))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2660315.f_3)))
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2660315.f_3), &(Global_2653202.f_4.f_3)))
		{
			Global_1573982 = 0;
		}
		else
		{
			Global_1573982 = 1;
		}
	}
	Global_1573983 = 0;
	Global_1573983.f_1 = { Global_2653202.f_4.f_3 };
}

void func_732()//Position - 0x955D1
{
	Global_1922955.f_5 = 0;
	Global_1922955.f_11 = -1;
}

void func_733(var uParam0)//Position - 0x955E7
{
	Global_1922955.f_5 = 1;
	Global_1922955.f_11 = uParam0;
}

int func_734(int iParam0)//Position - 0x955FE
{
	int iVar0;
	if (Global_4718592.f_168757 == 46)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9641[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_735(int iParam0)//Position - 0x9564B
{
	int iVar0;
	if (Global_4718592.f_168757 == 21)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9477[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_736(int iParam0)//Position - 0x95742
{
	return iParam0 == 48;
}

bool func_737(int iParam0)//Position - 0x9574F
{
	return iParam0 == 8;
}

int func_738(int iParam0)//Position - 0x9575C
{
	int iVar0;
	if (Global_4718592.f_168757 == 35)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9720[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_739(int iParam0)//Position - 0x957A9
{
	int iVar0;
	if (Global_4718592.f_168757 == 27)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9663[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_740(int iParam0)//Position - 0x957F6
{
	int iVar0;
	if (Global_4718592.f_168757 == 32)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9544[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_741(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x95843
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	if (!Global_2653189)
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(&uParam0);
	Global_2653191 = iVar0;
	Global_2653192 = (MISC::GET_GAME_TIMER() + 60000);
}

void func_742(struct<6> Param0)//Position - 0x9587D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		return;
	}
	Global_1573983 = 1;
	Global_1573983.f_1 = { Param0 };
}

bool func_743()//Position - 0x958A2
{
	return Global_2714762.f_14;
}

void func_744(float fParam0)//Position - 0x958B0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fParam0);
		NETWORK::NETWORK_SET_TEAM_ONLY_CHAT(false);
	}
}

void func_745(int iParam0)//Position - 0x958CA
{
	if (Global_2787914 != iParam0)
	{
		Global_2787914 = iParam0;
	}
}

void func_746(bool bParam0, bool bParam1)//Position - 0x95981
{
	NETWORK::NETWORK_BLOCK_INVITES(bParam0);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(bParam0);
	if (NETWORK::NETWORK_IS_HOST())
	{
		NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(bParam1);
	}
}

bool func_747()//Position - 0x959A2
{
	return Global_2714762.f_743;
}

void func_748()//Position - 0x959B1
{
	if (BitTest(Global_2621446, 24))
	{
		MISC::CLEAR_BIT(&Global_2621446, 24);
	}
}

void func_749()//Position - 0x959CD
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 14);
}

var func_750()//Position - 0x959EA
{
	return Global_2787914;
}

bool func_751()//Position - 0x959F6
{
	return Global_2714762.f_832;
}

void func_752(bool bParam0)//Position - 0x95A1A
{
	if (bParam0)
	{
		if (Global_1836363 == 0)
		{
			Global_1836363 = 1;
		}
	}
	else if (Global_1836363 == 1)
	{
		Global_1836363 = 0;
	}
}

void func_753()//Position - 0x95A44
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_2715699.f_1.f_845[iVar0 /*57*/].f_44 = 0;
		Global_2715699.f_1.f_845[iVar0 /*57*/].f_33[0] = 0;
		iVar0++;
	}
}

void func_754()//Position - 0x95B50
{
	Global_2714762.f_844 = 1;
}

void func_755(bool bParam0)//Position - 0x95B60
{
	if (bParam0)
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_ON();
	}
	else
	{
		HUD::THEFEED_AUTO_POST_GAMETIPS_OFF();
	}
}

void func_756()//Position - 0x95B78
{
	Global_2714762.f_843 = 1;
}

void func_757()//Position - 0x95BE6
{
	Global_2714762.f_843 = 0;
}

bool func_758()//Position - 0x95BF6
{
	return Global_2714762.f_843;
}

void func_759(bool bParam0)//Position - 0x95C05
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_01_STAGE", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", bParam0);
}

void func_760()//Position - 0x95C2E
{
	Global_1922955.f_12 = -1;
	Global_1922955.f_14 = -1;
	Global_1922955.f_15 = -1;
}

void func_761()//Position - 0x95C4B
{
	Global_1888187 = 0;
	Global_1836569 = 4;
}

void func_762(bool bParam0)//Position - 0x95C5D
{
	if (bParam0)
	{
		Global_1836582 = 1;
	}
	else
	{
		Global_1836582 = 0;
	}
}

void func_763()//Position - 0x95DD3
{
	Global_2714762.f_844 = 0;
}

bool func_764()//Position - 0x95DE3
{
	return Global_2714762.f_844;
}

int func_765()//Position - 0x96050
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1922981[iVar0 /*42*/].f_1 != __LIB_0__.func_160())
		{
			if (Global_1922981[iVar0 /*42*/].f_11 > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_766(bool bParam0)//Position - 0x9608F
{
	struct<77> Var0;
	if (!bParam0)
	{
		Var0.f_37 = Global_1944587.f_37;
		Var0.f_33 = Global_1944587.f_33;
		Var0.f_30 = Global_1944587.f_30;
		Var0.f_39 = Global_1944587.f_39;
		Var0.f_20 = Global_1944587.f_20;
		Var0.f_15 = Global_1944587.f_15;
		Var0.f_35 = Global_1944587.f_35;
		Var0.f_36 = Global_1944587.f_36;
		Var0.f_31 = Global_1944587.f_31;
		Var0.f_34 = Global_1944587.f_34;
		Var0.f_27 = Global_1944587.f_27;
		Var0.f_28 = Global_1944587.f_28;
		Var0.f_32 = Global_1944587.f_32;
		Var0.f_29 = Global_1944587.f_29;
	}
	Global_1944587 = { Var0 };
}

void func_767(bool bParam0)//Position - 0x96135
{
	struct<51> Var0;
	if (!bParam0)
	{
		Var0.f_2 = { Global_1944501.f_2 };
		Var0.f_14 = Global_1944501.f_14;
		Var0.f_19 = Global_1944501.f_19;
		Var0.f_23 = Global_1944501.f_23;
		Var0.f_25 = Global_1944501.f_25;
		Var0.f_30 = Global_1944501.f_30;
		Var0.f_26 = Global_1944501.f_26;
		Var0.f_27 = Global_1944501.f_27;
		Var0.f_28 = Global_1944501.f_28;
		Var0.f_29 = Global_1944501.f_29;
		Var0.f_31 = Global_1944501.f_31;
		Var0.f_32 = Global_1944501.f_32;
		Var0.f_33 = Global_1944501.f_33;
		Var0.f_40 = Global_1944501.f_40;
		Var0.f_42 = Global_1944501.f_42;
		Var0.f_50 = Global_1944501.f_50;
		Var0.f_46 = Global_1944501.f_46;
	}
	Global_1944501 = { Var0 };
}

void func_768(bool bParam0)//Position - 0x963C5
{
	Global_786435.f_3 = 0;
	Global_786435.f_4 = 0;
	Global_786435.f_6 = 0;
	Global_786435.f_7 = 0;
	Global_786435.f_8 = 0;
	Global_786435.f_9 = 0;
	Global_786435.f_10 = 0;
	Global_786435.f_11 = 0;
	Global_786435.f_12 = 0;
	Global_786435.f_13 = 0;
	Global_786435.f_14 = 0;
	Global_786435.f_15 = 0;
	Global_786435.f_16 = 0;
	Global_786435.f_17 = 0;
	Global_786435.f_18 = 0;
	Global_786435.f_20 = 0;
	Global_786435.f_21 = 0;
	Global_786435.f_22 = 0;
	Global_786435.f_24 = 0;
	Global_786435.f_25 = 0;
	Global_786435.f_28 = 0;
	Global_786435.f_29 = 0;
	Global_786435.f_30 = 0;
	Global_786435.f_31 = 0;
	Global_786435.f_32 = 0;
	Global_786435.f_33 = 0;
	Global_786435.f_36 = 0;
	Global_786435.f_37 = 0;
	Global_786435.f_38 = 0;
	Global_786435.f_39 = 0;
	Global_786435.f_40 = 0;
	Global_786435.f_41 = 0;
	Global_786435.f_42 = 0;
	Global_786435.f_35 = 0;
	if (bParam0)
	{
		Global_786435 = 0;
		Global_786435.f_1 = 0;
		Global_786435.f_2 = 0;
		Global_786435.f_5 = 0;
		Global_786435.f_19 = 0;
		Global_786435.f_23 = 0;
		Global_786435.f_26 = 0;
	}
}

void func_769(int iParam0, int iParam1)//Position - 0x964EF
{
	int iVar0;
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset");
	}
	MISC::CLEAR_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(iParam0), "MPBitset", iVar0);
}

bool func_770()//Position - 0x96545
{
	return Global_2723612.f_7;
}

bool func_771()//Position - 0x96553
{
	return BitTest(Global_2714762.f_43.f_4, 8);
}

void func_772()//Position - 0x96566
{
	Global_2714762.f_43.f_57 = 0;
}

void func_773()//Position - 0x96589
{
	MISC::CLEAR_BIT(&(Global_1048576.f_10), 8);
}

void func_774(bool bParam0)//Position - 0x9659D
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_11.f_1), 0);
	}
}

void func_775()//Position - 0x96660
{
	Global_2715699.f_3475 = 0;
	Global_2715699.f_3475.f_1 = 0;
	Global_2715699.f_3475.f_2 = 0;
	Global_2715699.f_3475.f_3 = 0;
}

void func_776()//Position - 0x9668E
{
	Global_2715699.f_1.f_2801 = 1;
}

void func_777(bool bParam0, bool bParam1)//Position - 0x966D6
{
	struct<6> Var0;
	int iVar1;
	Global_2714762.f_43 = -1;
	Global_2714762.f_43.f_139 = -1;
	Global_2714762.f_43.f_2 = -1;
	Global_2714762.f_43.f_5 = 0;
	Global_2714762.f_43.f_40 = 0;
	Global_2714762.f_43.f_3 = 0;
	Global_2714762.f_43.f_4 = 0;
	Global_2714762.f_43.f_42 = -1;
	Global_2714762.f_43.f_6 = { Var0 };
	Global_2714762.f_43.f_62 = 0;
	Global_2714762.f_43.f_137 = 0;
	Global_2714762.f_43.f_213 = 0;
	Global_2714762.f_43.f_428 = 0;
	Global_2714762.f_43.f_63 = 0;
	Global_2714762.f_43.f_138 = 0;
	Global_2714762.f_43.f_214 = 0;
	Global_2714762.f_43.f_429 = 0;
	Global_2714762.f_43.f_617 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714762.f_43.f_560[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_136 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714762.f_43.f_140[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_212 = 0;
	iVar1 = 0;
	while (iVar1 <= 29)
	{
		Global_2714762.f_43.f_215[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_61 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		Global_2714762.f_43.f_64[iVar1] = 0;
		iVar1++;
	}
	Global_2714762.f_43.f_427 = 0;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		Global_2714762.f_43.f_430[iVar1] = 0;
		Global_2714762.f_43.f_445[iVar1] = 0;
		Global_2714762.f_43.f_475[iVar1 /*6*/] = { Var0 };
		Global_2714762.f_43.f_460[iVar1] = 0;
		iVar1++;
	}
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_2714762.f_43.f_44[iVar1] = 0;
			iVar1++;
		}
		if (bParam1)
		{
			Global_2714762.f_43.f_581 = 0;
			Global_2714762.f_43.f_582 = 0;
			iVar1 = 0;
			while (iVar1 < 5)
			{
				Global_2714762.f_43.f_589[iVar1] = -1;
				Global_2714762.f_43.f_595[iVar1] = -1;
				iVar1++;
			}
			Global_2714762.f_43.f_55 = 0;
			Global_2714762.f_43.f_12 = { Var0 };
			Global_2714762.f_43.f_59 = 0;
			Global_2714762.f_43.f_575 = { 0f, 0f, 0f };
			Global_2714762.f_43.f_578 = { 0f, 0f, 0f };
			Global_2714762.f_43.f_58 = 0;
			Global_2714762.f_43.f_57 = 0;
			Global_2714762.f_43.f_1 = -1;
			Global_2714762.f_43.f_601 = -1;
		}
	}
}

void func_778()//Position - 0x96948
{
	Global_2723612.f_8 = 0;
	Global_2723612.f_7 = 0;
}

void func_779()//Position - 0x969A8
{
	Global_1057161 = 0;
	Global_1057161.f_1 = 0;
}

void func_780()//Position - 0x969BC
{
	Global_1931975.f_1774 = 0;
}

void func_781()//Position - 0x969CC
{
	Global_2714762.f_837 = 0;
}

bool func_782()//Position - 0x969DC
{
	return Global_2714762.f_837;
}

int func_783(int iParam0)//Position - 0x96A1C
{
	if (iParam0 == Global_262145.f_5041[0])
	{
		return 0;
	}
	else if (iParam0 == Global_262145.f_5041[1])
	{
		return 1;
	}
	else if (iParam0 == Global_262145.f_5041[2])
	{
		return 2;
	}
	else if (iParam0 == Global_262145.f_5041[3])
	{
		return 3;
	}
	else if (iParam0 == Global_262145.f_5041[4])
	{
		return 4;
	}
	else if (iParam0 == Global_262145.f_5041[5])
	{
		return 5;
	}
	else if (iParam0 == Global_262145.f_5041[6])
	{
		return 6;
	}
	else if (iParam0 == Global_262145.f_5041[7])
	{
		return 7;
	}
	else if (iParam0 == Global_262145.f_5041[8])
	{
		return 8;
	}
	else if (iParam0 == Global_262145.f_5041[9])
	{
		return 9;
	}
	else if (iParam0 == Global_262145.f_5041[10])
	{
		return 10;
	}
	else if (iParam0 == Global_262145.f_5041[11])
	{
		return 11;
	}
	else if (iParam0 == Global_262145.f_5041[12])
	{
		return 12;
	}
	else if (iParam0 == Global_262145.f_5041[13])
	{
		return 13;
	}
	else if (iParam0 == Global_262145.f_5041[14])
	{
		return 14;
	}
	else if (iParam0 == Global_262145.f_5041[15])
	{
		return 15;
	}
	return -1;
}

void func_784()//Position - 0x96B92
{
	Global_2714762.f_700 = 0;
}

void func_785()//Position - 0x96BA2
{
	struct<14> Var0;
	int iVar1;
	Var0.f_4 = -1;
	iVar1 = PLAYER::PLAYER_ID();
	if (iVar1 != -1)
	{
		Global_1888862[iVar1 /*120*/] = { Var0 };
	}
}

void func_786(bool bParam0, bool bParam1, int iParam2)//Position - 0x96BCF
{
	struct<6> Var0;
	Global_2714762.f_669.f_3 = { Var0 };
	Global_2714762.f_669 = 0;
	Global_2714762.f_669.f_1 = 0;
	Global_2714762.f_669.f_12 = 0;
	if (bParam0)
	{
		Global_2714762.f_669.f_2 = 0;
		Global_2714762.f_669.f_13 = 0;
		Global_2714762.f_669.f_14 = 0;
		Global_2656981 = 0;
		if (bParam1)
		{
			Global_2714762.f_669.f_9 = 0;
			Global_2714762.f_669.f_10 = 0;
			Global_2714762.f_669.f_11 = 0;
			Global_2714762.f_669.f_16 = -1;
		}
		if (iParam2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			Global_1922981.f_1347 = 0;
			Global_1922981.f_1348 = 0;
		}
		if (PLAYER::PLAYER_ID() != -1)
		{
			Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_2 = 0;
			Global_1888862[PLAYER::PLAYER_ID() /*120*/] = 0;
		}
	}
}

void func_787()//Position - 0x96C96
{
	Global_2714762.f_669.f_12 = 0;
}

void func_788()//Position - 0x96CA8
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 11);
}

void func_789()//Position - 0x96CC5
{
	MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 3);
}

void func_790()//Position - 0x96CDE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1837303[iVar0] = 0;
		iVar0++;
	}
}

void func_791()//Position - 0x96D02
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1888862[iVar0 /*120*/].f_5 = 0;
	}
}

void func_792()//Position - 0x96D21
{
	Global_2725873 = 0;
	Global_2725874 = 0;
	Global_2725875 = 0;
	Global_2725876 = 0;
}

void func_793()//Position - 0x96D3D
{
	Global_2714762.f_43.f_56 = 0;
}

void func_794()//Position - 0x96D4E
{
	Global_2714762.f_43.f_58 = 0;
}

void func_795()//Position - 0x96D5F
{
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != Global_1659868)
	{
		if (CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0 && Global_1659868 == 3)
		{
			Global_1659868 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
		}
		CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT(), Global_1659868);
	}
}

void func_796(int iParam0)//Position - 0x96DED
{
	if (MISC::IS_PC_VERSION())
	{
		HUD::MP_TEXT_CHAT_IS_TEAM_JOB(iParam0);
	}
}

void func_797(bool bParam0)//Position - 0x96E02
{
	int iVar0;
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 != -1)
	{
		if (bParam0)
		{
			if (!BitTest(Global_1853348[iVar0 /*834*/].f_199, 0))
			{
				MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_199), 0);
			}
		}
		else if (BitTest(Global_1853348[iVar0 /*834*/].f_199, 0))
		{
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_199), 0);
		}
	}
}

void func_798()//Position - 0x96E5F
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 31);
}

void func_799()//Position - 0x96E73
{
	Global_2703735.f_1571.f_816 = __LIB_0__.func_160();
}

void func_800()//Position - 0x96E89
{
	Global_2714762.f_885 = 0;
}

void func_801()//Position - 0x96EEB
{
	Global_1940311.f_4 = 0;
}

void func_802()//Position - 0x96EFA
{
	Global_1940311.f_3 = 0;
}

void func_803(int iParam0)//Position - 0x96F09
{
	struct<53> Var0;
	Var0 = -1;
	Var0.f_1 = 1;
	Var0.f_2 = 3;
	Var0.f_28 = 4;
	Global_1940311.f_5[iParam0 /*53*/] = { Var0 };
}

void func_804()//Position - 0x96F3C
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 20);
}

void func_805()//Position - 0x98C9A
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	if (Global_4718592 == 0)
	{
		bVar4 = BitTest(Global_4718592.f_4, 20);
		bVar5 = BitTest(Global_4718592.f_4, 21);
		bVar6 = BitTest(Global_4718592.f_4, 22);
		bVar7 = BitTest(Global_4718592.f_4, 23);
		if (bVar6)
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!__LIB_0__.func_86(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/]))
				{
					fVar0 = (Global_4718592.f_658[iVar1 /*22957*/].f_6885[0] + 2f);
					iVar3 = 0;
					while (iVar3 <= 7)
					{
						if (Global_4980736.f_5742[iVar3 /*442*/].f_16[iVar1] == 11)
						{
							if (!__LIB_0__.func_86(Global_4980736.f_5742[iVar3 /*442*/]))
							{
								if (SYSTEM::VDIST(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/], Global_4980736.f_5742[iVar3 /*442*/]) < fVar0 && SYSTEM::VDIST(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/], Global_4980736.f_5742[iVar3 /*442*/]) > Global_4718592.f_658[iVar1 /*22957*/].f_6885[0])
								{
									Global_1922915.f_4 = 1;
									return;
								}
							}
						}
						iVar3++;
					}
				}
				iVar1++;
			}
		}
		else if (bVar4)
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!__LIB_0__.func_86(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/]))
				{
					fVar0 = (Global_4718592.f_658[iVar1 /*22957*/].f_6885[0] + 2f);
					iVar3 = 0;
					while (iVar3 <= 7)
					{
						if (Global_4980736.f_5742[iVar3 /*442*/].f_16[iVar1] == 1)
						{
							if (!__LIB_0__.func_86(Global_4980736.f_5742[iVar3 /*442*/]))
							{
								if (SYSTEM::VDIST(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/], Global_4980736.f_5742[iVar3 /*442*/]) < fVar0)
								{
									Global_1922915.f_4 = 1;
									return;
								}
							}
						}
						iVar3++;
					}
				}
				iVar1++;
			}
		}
		else if (bVar5)
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!__LIB_0__.func_86(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/]))
				{
					fVar0 = (Global_4718592.f_658[iVar1 /*22957*/].f_6885[0] + 4f);
					iVar3 = 0;
					while (iVar3 <= 7)
					{
						if (Global_4980736.f_78578[iVar3 /*450*/].f_13[iVar1] == 1)
						{
							if (!__LIB_0__.func_86(Global_4980736.f_78578[iVar3 /*450*/]))
							{
								if (SYSTEM::VDIST(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/], Global_4980736.f_78578[iVar3 /*450*/]) < fVar0)
								{
									Global_1922915.f_4 = 1;
									return;
								}
							}
						}
						iVar3++;
					}
				}
				iVar1++;
			}
		}
		else if (bVar7)
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (!__LIB_0__.func_86(Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/]))
				{
					iVar2 = 0;
					while (iVar2 <= 3)
					{
						if (iVar1 != iVar2)
						{
							if (!__LIB_0__.func_86(Global_4718592.f_658[iVar2 /*22957*/].f_6781[0 /*3*/]))
							{
								fVar0 = Global_4718592.f_658[iVar1 /*22957*/].f_6885[0];
								fVar0 = (fVar0 + 1f);
								fVar0 = (fVar0 + Global_4718592.f_658[iVar2 /*22957*/].f_6885[0]);
								if (SYSTEM::VDIST(Global_4718592.f_658[iVar2 /*22957*/].f_6781[0 /*3*/], Global_4718592.f_658[iVar1 /*22957*/].f_6781[0 /*3*/]) < fVar0)
								{
									Global_1922915.f_4 = 1;
									return;
								}
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_806(int iParam0, int iParam1)//Position - 0x99030
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MissionType", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType"))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MissionType", iParam0);
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MatchId", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId"))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()), "MatchId", iParam1);
		}
	}
}

void func_807()//Position - 0x9916E
{
	Global_2714762.f_731 = 1;
}

void func_808()//Position - 0x9917E
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 5);
}

void func_809()//Position - 0x9919A
{
	Global_2714762.f_729 = 1;
}

void func_810()//Position - 0x991B8
{
	MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 17);
}

void func_811()//Position - 0x991FE
{
	Global_2715699.f_1.f_837 = 6;
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_220 = 6;
	}
}

bool func_812()//Position - 0x99226
{
	return Global_2715699.f_1.f_837 == 6;
}

void func_813()//Position - 0x99239
{
	Global_2715699.f_1.f_840 = 1;
}

bool func_814()//Position - 0x9924B
{
	return Global_2715699.f_1.f_840;
}

int func_815(var uParam0)//Position - 0x9928C
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	bVar1 = false;
	while (bVar1 <= 31)
	{
		if (BitTest(uParam0, bVar1))
		{
			iVar0++;
		}
		bVar1++;
	}
	return iVar0;
}

void func_816()//Position - 0x992BD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (__LIB_0__.func_154(iVar1, 0, 1))
		{
			NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
		}
		iVar0++;
	}
}

void func_817()//Position - 0x994E2
{
	Global_1922955.f_16 = -1;
}

void func_818()//Position - 0x994F1
{
	Global_2715699.f_2846.f_2 = 0;
}

void func_819()//Position - 0x997E1
{
	if (Global_4718592 == 0 && Global_4718592.f_116986 > Global_262145.f_8186 /* Tunable: MAX_NONE_ROCK_PAYOUT */)
	{
		if (((((Global_4718592.f_117095 != 1 && Global_4718592.f_117095 != 2) && Global_4718592.f_117095 != 3) && Global_4718592.f_117095 != 4) && Global_4718592.f_117095 != 5) && Global_4718592.f_117095 != 6)
		{
			Global_4718592.f_116986 = Global_262145.f_8186 /* Tunable: MAX_NONE_ROCK_PAYOUT */;
		}
	}
}

void func_820()//Position - 0x9987E
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 9);
	}
}

void func_821()//Position - 0x998A0
{
	MISC::CLEAR_BIT(&(Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_29), 1);
}

void func_822()//Position - 0x998B9
{
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_32), 13);
}

void func_823()//Position - 0x998D6
{
	Global_2714762.f_884 = 0;
}

void func_824()//Position - 0x998E6
{
	Global_2714762.f_883 = 0;
}

var func_825()//Position - 0x998F6
{
	return Global_2714762.f_764;
}

void func_826(int iParam0)//Position - 0x9994C
{
	Global_2715699.f_6468.f_1 = iParam0;
}

void func_827()//Position - 0x9995F
{
	struct<98> Var0;
	struct<3> Var1;
	int iVar2;
	Var0 = 18;
	Var0.f_95 = -1;
	Global_1057830 = { Var0 };
	iVar2 = 0;
	while (iVar2 < 18)
	{
		Global_1057928[iVar2 /*3*/] = { Var1 };
		Global_1057830[iVar2 /*5*/] = -1;
		iVar2++;
	}
}

void func_828()//Position - 0x999AB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1836159[iVar0 /*6*/])))
		{
			StringCopy(&(Global_1836159[iVar0 /*6*/]), "", 24);
		}
		iVar0++;
	}
}

void func_829()//Position - 0x999E4
{
	int iVar0;
	iVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT());
	Global_1659868 = iVar0;
}

int func_830(var uParam0)//Position - 0x5D14
{
	if (uParam0->f_25)
	{
		return 1;
	}
	return 0;
}

void func_831(var uParam0)//Position - 0x711E
{
	Global_2715699.f_1.f_837 = uParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_220 = uParam0;
}

void func_832(int iParam0)//Position - 0x30F04
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	Global_1892703[iVar0 /*599*/].f_10.f_467 = (Global_1892703[iVar0 /*599*/].f_10.f_467 + iParam0);
	if (Global_1892703[iVar0 /*599*/].f_10.f_467 < -9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
	else if (Global_1892703[iVar0 /*599*/].f_10.f_467 > 9999)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_467 = 9999;
	}
}

int func_833()//Position - 0x30F7E
{
	if (Global_1943929.f_3 != 0)
	{
		return Global_1943929.f_3;
	}
	return -1;
}

int func_834()//Position - 0x30F9A
{
	if (Global_1943929.f_2 != 0)
	{
		return Global_1943929.f_2;
	}
	return -1;
}

int func_835(int iParam0)//Position - 0x30FE4
{
	if (iParam0 == __LIB_0__.func_160())
	{
		return -1;
	}
	return Global_1892703[iParam0 /*599*/].f_10.f_8[0];
}

void func_836()//Position - 0x310EC
{
	Global_32104 = 1;
}

int func_837(int iParam0)//Position - 0x3196F
{
	if (iParam0 > -1)
	{
		if (__LIB_0__.func_154(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return __LIB_0__.func_714(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return __LIB_0__.func_714(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_838(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33227
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
}

void func_839(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3324C
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

void func_840(var uParam0, int iParam1)//Position - 0x3326B
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

void func_841(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x33280
{
	iParam4 = iParam4;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_PRINT(iParam3, true);
}

void func_842(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x332A5
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

char* func_843(int iParam0)//Position - 0x336B3
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		case 1:
			return "DARTS_BE_SPLSH";
		default:
	}
	return "DARTS_BE_SPLSH";
}

float func_844(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x336FA
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1, bParam2);
}

void func_845(int* iParam0, int iParam1)//Position - 0x33724
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_846(int* iParam0, int iParam1)//Position - 0x33742
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_847()//Position - 0x33788
{
	int iVar0;
	Local_224.f_66 = -1;
	Local_224.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_224.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_224.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_224.f_9[iVar0 /*7*/].f_5 = 0;
		Local_224.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_224.f_5 = 0;
	Local_224.f_5.f_1 = -1f;
	Local_224.f_5.f_2 = 0;
	Local_224.f_0 = 0;
	Local_224.f_1 = 0;
}

float func_848(int iParam0)//Position - 0x33803
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.10272f;
	}
	if (iParam0 < 50)
	{
		return 0.09844f;
	}
	if (iParam0 < 70)
	{
		return 0.09416f;
	}
	return 0.08988f;
}

float func_849(int iParam0)//Position - 0x33858
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.0768f;
	}
	if (iParam0 < 50)
	{
		return 0.0736f;
	}
	if (iParam0 < 70)
	{
		return 0.0704f;
	}
	return 0.0672f;
}

int func_850(int iParam0, var uParam1)//Position - 0x338AD
{
	if (iParam0 >= 10)
	{
		if (!BitTest(Global_113386.f_18970.f_6, 17))
		{
			*uParam1 = 17;
			return 1;
		}
	}
	return 0;
}

int func_851(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x33F43
{
	int iVar0;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

int func_852(int* iParam0)//Position - 0x34075
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	return 1;
}

float func_853(struct<3> Param0)//Position - 0x344A4
{
	return SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_2 * Param0.f_2)));
}

int func_854(var uParam0, var uParam1, struct<3> Param2)//Position - 0x34551
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Var2 = { Param2 - uParam1->f_1 };
	fVar3 = MISC::GET_FRAME_TIME();
	Var1 = { uParam0->f_5 * Vector(fVar3, fVar3, fVar3) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (Var2.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(*uParam0, true);
		return 1;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_165), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, Var0, true, false, false, true);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar3));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, true);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_855(var uParam0)//Position - 0x34852
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_856(var uParam0)//Position - 0x3486C
{
	uParam0->f_7 = 2;
}

void func_857(var uParam0)//Position - 0x34879
{
	uParam0->f_7 = 5;
}

void func_858(var uParam0)//Position - 0x34886
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_859(var uParam0)//Position - 0x348A3
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_860(var uParam0)//Position - 0x348C0
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_861(var uParam0)//Position - 0x348E9
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_862()//Position - 0x34E4C
{
	Local_170.f_4 = 210;
	Local_170.f_5 = 23;
	Local_170.f_6 = 19;
}

void func_863()//Position - 0x34E66
{
	Local_170.f_4 = 183;
	Local_170.f_5 = 137;
	Local_170.f_6 = 0;
}

void func_864()//Position - 0x34E7F
{
	Local_170.f_4 = 16;
	Local_170.f_5 = 184;
	Local_170.f_6 = 10;
}

void func_865(var uParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x3546F
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	Var0.f_0 = (Var0.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_172 };
}

void func_866(var uParam0)//Position - 0x355FA
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_172 - uParam0->f_8 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (MISC::TAN(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_172 - uParam0->f_11 };
	fVar1 = SYSTEM::VMAG(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

char* func_867(int iParam0, int iParam1)//Position - 0x3A601
{
	return "MPClubEmblemSmall";
}

void func_868()//Position - 0x3A854
{
	CAM::SET_CAM_ACTIVE(iLocal_191, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (CAM::IS_CAM_ACTIVE(iLocal_198))
	{
		CAM::SET_CAM_ACTIVE(iLocal_198, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_193))
	{
		CAM::SET_CAM_ACTIVE(iLocal_193, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_194))
	{
		CAM::SET_CAM_ACTIVE(iLocal_194, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_195))
	{
		CAM::SET_CAM_ACTIVE(iLocal_195, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_196))
	{
		CAM::SET_CAM_ACTIVE(iLocal_196, false);
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_197))
	{
		CAM::SET_CAM_ACTIVE(iLocal_197, false);
	}
}

void func_869(int* iParam0)//Position - 0x46F7E
{
	struct<3> Var0;
	Var0 = { -1668.0444f, -1056.4501f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, Var0, true, false, false, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_870(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)//Position - 0x47056
{
	CAM::STOP_CAM_POINTING(iLocal_199);
	CAM::SET_CAM_FOV(iLocal_199, 35f);
	CAM::SET_CAM_COORD(iLocal_199, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(iLocal_199, Vector(fParam1, 0f, 0f) - Param3, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_199, iLocal_198, iParam4, 1, 1);
}

int func_871(var uParam0)//Position - 0x473F8
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		case 1:
			return 75;
		case 2:
			return 90;
		default:
	}
	return 25;
}

void func_872(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)//Position - 0x4742C
{
	CAM::STOP_CAM_POINTING(iLocal_198);
	CAM::SET_CAM_FOV(iLocal_198, 35f);
	CAM::SET_CAM_COORD(iLocal_198, OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, fParam1, Param2));
	CAM::SET_CAM_ROT(iLocal_198, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		CAM::SET_CAM_ACTIVE(iLocal_198, true);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_198, iLocal_199, iParam4, 1, 1);
	}
}

Vector3 func_873(bool bParam0)//Position - 0x47484
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_874(int iParam0)//Position - 0x474AD
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_875(int iParam0)//Position - 0x47961
{
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_195, iParam0, 0.0166f, 1.6423f, 0.4373f, true);
	CAM::POINT_CAM_AT_ENTITY(iLocal_195, iParam0, -0.0432f, -1.3557f, 0.3447f, true);
	CAM::SET_CAM_FOV(iLocal_195, 35f);
	CAM::SET_CAM_ACTIVE(iLocal_195, true);
}

int func_876()//Position - 0x48EF5
{
	return Global_1574580;
}

void func_877(int iParam0)//Position - 0x48F8D
{
	int iVar0;
	iVar0 = iParam0 + 1;
	Local_169.f_0 = 0.5f;
	Local_169.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_169.f_2 = 0.05f;
		Local_169.f_3 = 0.095f;
	}
	else
	{
		Local_169.f_2 = 0.065f;
		Local_169.f_3 = 0.09f;
	}
	Local_169.f_4 = 255;
	Local_169.f_5 = 250;
	Local_169.f_6 = 255;
	Local_169.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_169.f_4 = 255;
		Local_169.f_5 = 255;
		Local_169.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_169.f_4 = 255;
		Local_169.f_5 = 255;
		Local_169.f_6 = 255;
	}
	Local_169.f_8 = 0f;
	Local_170.f_0 = 0f;
	Local_170.f_1 = 0f;
	Local_170.f_2 = 0.061f;
	Local_170.f_3 = 0.105f;
	Local_170.f_4 = 200;
	Local_170.f_5 = 45;
	Local_170.f_6 = 40;
	Local_170.f_7 = 255;
	Local_170.f_8 = 0f;
}

void func_878(var uParam0, int iParam1)//Position - 0x49060
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_159;
	}
	else
	{
		uParam0->f_1 = iLocal_160;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

float func_879(float fParam0)//Position - 0x49300
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_880(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x49B98
{
	if (MISC::GET_GAME_TIMER() < (*uParam1 + iParam8))
	{
		return;
	}
	*uParam1 = MISC::GET_GAME_TIMER();
}

void func_881(int* iParam0, int iParam1, bool bParam2)//Position - 0x49C66
{
	if (bParam2)
	{
		MISC::SET_BIT(iParam0, iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iParam1);
	}
}

void func_882(int* iParam0, char* sParam1, char* sParam2)//Position - 0x49D81
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DARTS_PLAYER_NAMES");
	__LIB_0__.func_514(sParam1);
	__LIB_0__.func_514(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_883(int* iParam0, int iParam1)//Position - 0x49DA5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "CLEAR_SCORES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_884(char* sParam0)//Position - 0x49EFD
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 0)
	{
		return 1;
	}
	return 0;
}

struct<2> func_885(var* uParam0)//Position - 0x49F21
{
	struct<2> Var0;
	struct<18> Var1;
	StringCopy(&Var0, "", 8);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, uParam0);
			return Var1.f_17;
		}
	}
	return Var0;
}

void func_886(int* iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x4A1B2
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			iParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		iParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		iParam0->f_21 = { 180f, 0f, 252.555f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		iParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		iParam0->f_21 = { 180f, 0f, 87.77f };
		iParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!__LIB_0__.func_86(Param2) && fParam3 != 0f)
	{
		iParam0->f_18 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		iParam0->f_21 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	iParam0->f_27 = 0.885f;
	iParam0->f_28 = 0.244f;
	iParam0->f_29 = 0.17f;
	iParam0->f_30 = 0.415f;
}

void func_887(int* iParam0, int iParam1)//Position - 0x4A3DC
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_888(int* iParam0, int iParam1, int iParam2)//Position - 0x4A417
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "ADD_DARTS_SCORE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_889()//Position - 0x4AA82
{
	return Global_4196257;
}

var func_890(int iParam0)//Position - 0x4AA8E
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 14);
}

void func_891(int iParam0, int iParam1, int* iParam2, bool bParam3)//Position - 0x4BC89
{
	int iVar0;
	var uVar1;
	iVar0 = __LIB_1__.func_614(iParam0);
	uVar1 = *iParam2;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT_HASH(iVar0, iParam1, iParam2))
	{
		if (bParam3)
		{
		}
		return;
		*iParam2 = uVar1;
	}
	else
	{
		NETWORK::NETWORK_ACCESS_TUNABLE_INT_MODIFICATION_DETECTION_REGISTRATION_HASH(iVar0, iParam1, iParam2);
	}
	if (bParam3)
	{
	}
}

int func_892(char* sParam0)//Position - 0x5233F
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Bro Love") || MISC::ARE_STRINGS_EQUAL(sParam0, "Animation1"))
	{
		return 0;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "The Bird") || MISC::ARE_STRINGS_EQUAL(sParam0, "Animation2"))
	{
		return 1;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Jerk") || MISC::ARE_STRINGS_EQUAL(sParam0, "Animation3"))
	{
		return 2;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Up Yours") || MISC::ARE_STRINGS_EQUAL(sParam0, "Animation4"))
	{
		return 3;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "null"))
	{
		return 0;
	}
	return 0;
}

void func_893(var uParam0, var uParam1)//Position - 0x5336C
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_166 };
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_894(var uParam0, var uParam1)//Position - 0x533A7
{
	*uParam0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_165), -1.7272f) };
	uParam0->f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_165), -1.7272f) };
}

void func_895(var uParam0, var uParam1)//Position - 0x533F9
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_164[0] = 20;
	iLocal_164[10] = 3;
	iLocal_164[1] = 1;
	iLocal_164[11] = 19;
	iLocal_164[2] = 18;
	iLocal_164[12] = 7;
	iLocal_164[3] = 4;
	iLocal_164[13] = 16;
	iLocal_164[4] = 13;
	iLocal_164[14] = 8;
	iLocal_164[5] = 6;
	iLocal_164[15] = 11;
	iLocal_164[6] = 10;
	iLocal_164[16] = 14;
	iLocal_164[7] = 15;
	iLocal_164[17] = 9;
	iLocal_164[8] = 2;
	iLocal_164[18] = 12;
	iLocal_164[9] = 17;
	iLocal_164[19] = 5;
	iLocal_164[20] = 20;
}

void func_896()//Position - 0x534C3
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(29);
	Global_2676732[iVar0 /*83*/] = 29;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-FromLiveArea", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[1 /*16*/]), "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[2 /*16*/]), "-LiveAreaLoadContent=", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[3 /*16*/]), "14", 64);
}

void func_897()//Position - 0x53570
{
	if (iLocal_228 || iLocal_229)
	{
		PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
		iLocal_228 = 0;
		iLocal_229 = 0;
	}
}

void func_898(int iParam0)//Position - 0x53593
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_528 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_528 = iParam0;
	}
}

void func_899(int* iParam0)//Position - 0x53989
{
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_123 = 0;
}

void func_900()//Position - 0x53A85
{
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
}

void func_901(var uParam0)//Position - 0x53CBC
{
	int iVar0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_902(var uParam0)//Position - 0x53D12
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	__LIB_0__.func_579(&(Global_2097536.f_2830));
}

void func_903(var uParam0)//Position - 0x53DF1
{
	int iVar0;
	struct<13> Var1;
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	__LIB_0__.func_579(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_904(var uParam0)//Position - 0x53E79
{
	int iVar0;
	struct<35> Var1;
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_905(var uParam0, var uParam1, var uParam2)//Position - 0x53F43
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_2097152 = 0;
	__LIB_0__.func_579(&(Global_2097152.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

void func_906()//Position - 0x53F6F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
	{
		OBJECT::DELETE_OBJECT(&iLocal_167);
	}
}

void func_907(int* iParam0)//Position - 0x53F86
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_908()//Position - 0x5436B
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_528 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_528 = -1;
	}
}

bool func_909()//Position - 0xFEE
{
	return Global_1835491;
}

void func_910(bool bParam0, int iParam1)//Position - 0x3AED
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_JOB_ACTIVITY_ID_STARTED(0, iParam1);
			break;
		default:
			iVar1 = __LIB_1__.func_33(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar0, iParam1);
			}
			break;
	}
}

int func_911(int iParam0)//Position - 0x4D81
{
	if (__LIB_1__.func_425(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_912()//Position - 0x84C6
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_0__.func_155(0))
	{
		return 0;
	}
	if (BitTest(Global_4718592.f_174915[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

var func_913(int iParam0)//Position - 0x8788
{
	return Global_4280768[iParam0 /*45*/].f_7;
}

void func_914()//Position - 0x87D0
{
	Global_2667225.f_5 = 1;
}

int func_915(int iParam0, int iParam1)//Position - 0x8F4C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			NETWORK::NETWORK_DISABLE_INVINCIBLE_FLASHING(iVar1, true);
			if (iParam1 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
			{
				NETWORK::SET_REMOTE_PLAYER_AS_GHOST(iVar1, true);
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::SET_NETWORK_VEHICLE_AS_GHOST(iParam0, true);
		return 1;
	}
	else
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	return 0;
}

bool func_916()//Position - 0x8FC8
{
	return Global_1836596;
}

int func_917(int iParam0, var uParam1)//Position - 0x9046
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
					*uParam1 = 1;
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

int func_918()//Position - 0x90A5
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
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_919(int iParam0, var uParam1)//Position - 0x959F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_920(int iParam0)//Position - 0x95E3
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_921()//Position - 0xA5F0
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_922()//Position - 0xA62B
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_923()//Position - 0xA666
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_924(int iParam0, int iParam1, int iParam2)//Position - 0x3DC77
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam1 == iParam1)
	{
	}
	if (iParam2 == iParam2)
	{
	}
	switch (iVar0)
	{
		case joaat("MP_M_Freemode_01"):
			break;
		case joaat("MP_F_Freemode_01"):
			break;
	}
}

int func_925(int iParam0)//Position - 0x56297
{
	switch (iParam0)
	{
		case joaat("veto"):
		case joaat("veto2"):
			return 1;
		default:
	}
	return 0;
}

int func_926(int iParam0)//Position - 0x562B7
{
	switch (iParam0)
	{
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
			return 1;
		default:
	}
	return 0;
}

int func_927(int iParam0, int iParam1, bool bParam2)//Position - 0x562E3
{
	int iVar0;
	if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
		if (!bParam2)
		{
			if (iVar0 == 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_928(int iParam0)//Position - 0x56326
{
	if (iParam0 == joaat("v_res_d_dildo_b") || iParam0 == joaat("prop_cs_dildo_01"))
	{
		return 1;
	}
	return 0;
}

void func_929(int iParam0, struct<10> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94)//Position - 0x567E3
{
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		if (Param1.f_9[48] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 48, Param1.f_9[48]);
		}
		if (Param1.f_9[10] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 10, Param1.f_9[10]);
		}
		if (Param1.f_9[4] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 4, Param1.f_9[4]);
		}
		if (Param1.f_9[24] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 24, Param1.f_9[24]);
		}
		if (Param1.f_9[23] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 23, Param1.f_9[23]);
		}
		if (Param1.f_9[1] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 1, Param1.f_9[1]);
		}
		if (Param1.f_9[2] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 2, Param1.f_9[2]);
		}
		if (Param1.f_9[3] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 3, Param1.f_9[3]);
		}
		if (Param1.f_9[5] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 5, Param1.f_9[5]);
		}
		if (Param1.f_9[42] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 42, Param1.f_9[42]);
		}
		if (Param1.f_9[6] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 6, Param1.f_9[6]);
		}
		if (Param1.f_9[7] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 7, Param1.f_9[7]);
		}
		if (Param1.f_9[0] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 0, Param1.f_9[0]);
		}
		if (Param1.f_9[8] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 8, Param1.f_9[8]);
		}
		if (Param1.f_9[9] != 0)
		{
			VEHICLE::PRELOAD_VEHICLE_MOD(iParam0, 9, Param1.f_9[9]);
		}
	}
}

void func_930(int iParam0)//Position - 0x56981
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			if (Global_1958552 > -1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("GBMissionFire", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "GBMissionFire"))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "GBMissionFire", Global_1958552);
					}
				}
			}
		}
	}
}

void func_931()//Position - 0x57387
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_2703735.f_61.f_82[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_2703735.f_61.f_89[iVar0] = 0f;
		iVar0++;
	}
}

int func_932(int iParam0)//Position - 0x576C7
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
		default:
	}
	return 0;
}

int func_933()//Position - 0x58004
{
	if ((BitTest(Global_4718592.f_28, 18) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19)
	{
		return 1;
	}
	return 0;
}

int func_934(int iParam0)//Position - 0x58043
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
				if (BitTest(iVar0, 24))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_935()//Position - 0x638DD
{
	return BitTest(Global_2703735.f_61.f_60, 0);
}

var func_936()//Position - 0x638EF
{
	return BitTest(Global_2703735.f_61.f_56, 0);
}

int func_937(int iParam0, bool bParam1, int iParam2)//Position - 0x63EC2
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (bParam1)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (iParam2 == 0)
					{
						if (!DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "bombdec1", 1);
						}
					}
				}
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (iParam2 == 1)
					{
						if (!DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "bombdec", 1);
						}
					}
				}
				if (!DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
				{
					iVar0 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
					DECORATOR::DECOR_SET_INT(iParam0, "bombowner", iVar0);
					if (iParam2 == 0)
					{
						VEHICLE::ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(iParam0);
					}
				}
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
				{
					return 1;
				}
			}
		}
		else
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
			{
				DECORATOR::DECOR_REMOVE(iParam0, "bombdec");
			}
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
			{
				DECORATOR::DECOR_REMOVE(iParam0, "bombowner");
			}
			return 1;
		}
	}
	return 0;
}

void func_938(int iParam0)//Position - 0x63FF5
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
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_939()//Position - 0x6C208
{
	Global_2703735.f_61.f_65 = 0;
	__LIB_1__.func_191(25);
	__LIB_1__.func_191(24);
}

void func_940(int iParam0, var uParam1, var uParam2)//Position - 0x6C225
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 396.811f, -1643.6652f, 28.2928f };
			*uParam2 = 140.0127f;
			break;
		case 1:
			*uParam1 = { 401.2413f, -1648.0807f, 28.2928f };
			*uParam2 = 139.3439f;
			break;
		case 2:
			*uParam1 = { 411.1246f, -1655.9967f, 28.2928f };
			*uParam2 = 139.9064f;
			break;
		case 3:
			*uParam1 = { 418.3765f, -1646.2842f, 28.294f };
			*uParam2 = 229.6834f;
			break;
		case 4:
			*uParam1 = { 419.971f, -1641.7426f, 28.2903f };
			*uParam2 = 266.1893f;
			break;
		case 5:
			*uParam1 = { 421.0552f, -1635.9493f, 28.2928f };
			*uParam2 = 269.4205f;
			break;
		case 6:
			*uParam1 = { 419.6233f, -1629.6582f, 28.2928f };
			*uParam2 = 319.6136f;
			break;
		case 7:
			*uParam1 = { 410.8506f, -1636.7677f, 28.2928f };
			*uParam2 = 231.3992f;
			break;
		case 8:
			*uParam1 = { 373.3945f, -1623.8993f, 28.2928f };
			*uParam2 = 138.3859f;
			break;
		case 9:
			*uParam1 = { 373.3945f, -1623.8993f, 28.2928f };
			*uParam2 = 138.3859f;
			break;
		case 10:
			*uParam1 = { 393.5292f, -1608.745f, 28.2928f };
			*uParam2 = 230.8697f;
			break;
		case 11:
			*uParam1 = { 389.3376f, -1613.0973f, 28.2928f };
			*uParam2 = 228.0681f;
			break;
		case 12:
			*uParam1 = { 402.6421f, -1615.9017f, 28.2928f };
			*uParam2 = 228.3702f;
			break;
		case 13:
			*uParam1 = { 398.339f, -1620.8989f, 28.2928f };
			*uParam2 = 231.9081f;
			break;
		case 14:
			*uParam1 = { 394.6593f, -1625.9562f, 28.2928f };
			*uParam2 = 231.1938f;
			break;
		case 15:
			*uParam1 = { 385.6364f, -1634.1802f, 28.2928f };
			*uParam2 = 140.7528f;
			break;
		default:
			*uParam1 = { 385.6364f, -1634.1802f, 28.2928f };
			*uParam2 = 140.7528f;
			break;
	}
}

int func_941(struct<3> Param0, float fParam1, struct<3> Param2)//Position - 0x6EE77
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 0f, 1f, 0f };
	__LIB_0__.func_602(&Var0, 0f, 0f, fParam1);
	Var1 = { Param2 - Param0 };
	if (__LIB_0__.func_156(Var1, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

void func_942(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, float fParam4, bool bParam5)//Position - 0x6F54F
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
	Var2 = { __LIB_0__.func_620(0f, 0f, 1f, Var0) };
	Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
	fVar3 = (SYSTEM::VMAG(Var1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (__LIB_0__.func_156(Var2, Var1) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (__LIB_0__.func_156(Var2, Var1) >= 0f)
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
		Var2 = { __LIB_0__.func_620(0f, 0f, 1f, Var0) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		Var2 = { Var2 * FtoV((fParam3 * 0.5f)) };
		Var8 = { Var7 - Var2 };
		Var9 = { Var7 + Var2 };
		Var10 = { Var9 - Var8 };
		Var10.f_2 = 0f;
		Var11 = { *uParam0 - Var8 };
		Var11.f_2 = 0f;
		Var2 = { __LIB_0__.func_620(0f, 0f, 1f, Var10) };
		Var2 = { Var2 / FtoV(SYSTEM::VMAG(Var2)) };
		fVar3 = (SYSTEM::VMAG(Var11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var10.f_0, Var10.f_1, Var11.f_0, Var11.f_1)));
		if (!bParam5)
		{
			if (__LIB_0__.func_156(Var2, Var11) >= 0f)
			{
				Var2 = { Var2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				Var2 = { Var2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (__LIB_0__.func_156(Var2, Var11) >= 0f)
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

int func_943()//Position - 0x7D342
{
	if (Global_2815059.f_962 || Global_2815059.f_954)
	{
		return 1;
	}
	return 0;
}

int func_944(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x7E0EF
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (iParam4 != -3 && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam4, false))
		{
			return iParam4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) && !bParam3)
		{
			return -1;
		}
		else if (bParam1)
		{
			iVar0 = 0;
			while (iVar0 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false) && (iVar0 != -1 || !bParam3))
				{
					if (VEHICLE::IS_TURRET_SEAT(iParam0, iVar0) && !bParam2)
					{
						return iVar0;
					}
					if (iVar1 == -1)
					{
						iVar1 = iVar0;
					}
				}
				iVar0++;
			}
			return iVar1;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar0, false) && (iVar0 != -1 || !bParam3))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_945(int iParam0)//Position - 0x7E1E2
{
	if (iParam0 != Global_2667225.f_45.f_173)
	{
		Global_2667225.f_45.f_174 = Global_2667225.f_45.f_173;
		Global_2667225.f_45.f_173 = iParam0;
	}
}

int func_946()//Position - 0x7E211
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_414;
}

var func_947(int iParam0)//Position - 0x7E4DD
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_407[iParam0];
}

int func_948()//Position - 0x7E4F7
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_415;
}

bool func_949()//Position - 0x7E50D
{
	return Global_1836591;
}

var func_950()//Position - 0x7E5E8
{
	return Global_1836606;
}

int func_951(int iParam0)//Position - 0x7E65F
{
	if ((iParam0 == joaat("technical2") || iParam0 == joaat("blazer5")) || iParam0 == joaat("seashark"))
	{
		return 1;
	}
	return 0;
}

int func_952()//Position - 0x7E8BF
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	switch (iVar0)
	{
		case 0:
			return joaat("premier");
		case 1:
			return joaat("cavalcade");
		case 2:
			return joaat("emperor");
		case 3:
			return joaat("ingot");
		case 4:
			return joaat("mesa");
		case 5:
			return joaat("primo");
		case 6:
			return joaat("washington");
		default:
	}
	return joaat("premier");
}

void func_953()//Position - 0x7E93D
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
	Global_2667225.f_45.f_69 = { Var0 };
	Global_2667225.f_45.f_172 = 0;
}

int func_954()//Position - 0x7ECA8
{
	if (Global_4718592.f_117095 == 0)
	{
		return 1;
	}
	return 0;
}

void func_955(int iParam0)//Position - 0x7ECC3
{
	VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iParam0, 149.9f);
}

int func_956(int iParam0)//Position - 0x7ECD6
{
	if ((iParam0 == joaat("hydra") || iParam0 == joaat("tula")) || iParam0 == joaat("avenger"))
	{
		return 1;
	}
	return 0;
}

void func_957(int iParam0, bool bParam1)//Position - 0x7ED0A
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo") && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		VEHICLE::SET_DISABLE_HOVER_MODE_FLIGHT(iParam0, !bParam1);
	}
}

void func_958(int iParam0, bool bParam1)//Position - 0x7ED35
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo") && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		VEHICLE::SET_SPECIAL_FLIGHT_MODE_ALLOWED(iParam0, bParam1);
	}
}

void func_959(int iParam0)//Position - 0x7ED5F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (VEHICLE::DOES_EXTRA_EXIST(iParam0, iVar0 + 1))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
		}
		iVar0++;
	}
	if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("bodhi2")))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 5, true);
	}
	if (((((((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("chino")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("voltic"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("buccaneer2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("chino2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("faction"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("faction2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("mamba")))
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			VEHICLE::SET_CONVERTIBLE_ROOF(iParam0, true);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("mamba")))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, true);
		}
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0, 4, true);
	}
}

int func_960(int iParam0)//Position - 0x7EF73
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (WATER::TEST_PROBE_AGAINST_WATER(Var0, Var0.f_0, Var0.f_1, -1f, &uVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_961(int iParam0, float fParam1)//Position - 0x7EFA8
{
	struct<3> Var0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			if (MISC::ABSF((Var0.f_2 - fVar1)) > fParam1)
			{
				return 1;
			}
		}
		else if (Var0.f_2 > (PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1) + fParam1))
		{
			return 1;
		}
		else if (Var0.f_2 > 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_962(int iParam0)//Position - 0x7F019
{
	Global_2667225.f_16 = 0;
	Global_2667225.f_21 = iParam0;
}

void func_963(int iParam0, int iParam1)//Position - 0x7F423
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (iParam1)
		{
			case 1:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 255, 255, 255);
				break;
			case 11:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 0, 0, 0);
				break;
			case 6:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 255, 127, 0);
				break;
			case 4:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 252, 238, 0);
				break;
			case 3:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 0, 174, 239);
				break;
			case 8:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 226, 6, 6);
				break;
			case 2:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, 20, 20, 20);
				break;
			case 12:
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217);
				break;
			case 5:
				HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
				break;
			case 7:
				HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
				break;
			case 9:
				HUD::GET_HUD_COLOUR(24, &iVar0, &iVar1, &iVar2, &uVar3);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
				break;
			case 10:
				HUD::GET_HUD_COLOUR(107, &iVar0, &iVar1, &iVar2, &uVar3);
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, iVar0, iVar1, iVar2);
				break;
			}
	}
}

void func_964(int iParam0)//Position - 0x7F5C6
{
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(iParam0, true);
}

var func_965()//Position - 0x7F81C
{
	return Global_1836584;
}

int func_966(var uParam0, int iParam1)//Position - 0x7F8AB
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iParam1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iParam1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
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

void func_967(int iParam0)//Position - 0x7FF23
{
	if (Global_2667225.f_607 < 7)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667225.f_2735 < iParam0))
		{
			Global_2667225.f_607++;
			Global_2667225.f_2735++;
			Global_2667225.f_606 = 1;
		}
		else
		{
			Global_2667225.f_606 = 4;
		}
	}
	else
	{
		Global_2667225.f_606 = 4;
	}
}

int func_968(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x801CF
{
	char cVar0[64];
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	StringCopy(&cVar0, "", 64);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var2.f_0 = (Var2.f_0 + (*uParam0)[iVar1 /*3*/]);
		Var2.f_1 = (Var2.f_1 + (uParam0[iVar1 /*3*/])->f_1);
		Var2.f_2 = (Var2.f_2 + (uParam0[iVar1 /*3*/])->f_2);
		fVar3 = (fVar3 + uParam0->f_16[iVar1]);
		iVar4 = (iVar4 + uParam0->f_22[iVar1]);
		iVar1++;
	}
	StringIntConCat(&cVar0, SYSTEM::ROUND(Var2.f_0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(Var2.f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(Var2.f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(fVar3), 64);
	StringIntConCat(&cVar0, iVar4, 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	if (*uParam2)
	{
		StringIntConCat(&cVar0, 1, 64);
	}
	else
	{
		StringIntConCat(&cVar0, 0, 64);
	}
	StringIntConCat(&cVar0, *uParam3, 64);
	iVar5 = MISC::GET_HASH_KEY(&cVar0);
	return iVar5;
}

void func_969(struct<10> Param0)//Position - 0x882F0
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	Var1.f_2 = 1176256410;
	iVar2 = __LIB_1__.func_72();
	if (Param0.f_0 > iVar2)
	{
		iVar2 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] < iVar2)
		{
			Global_2670168[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] == 0)
		{
			Global_2670168[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2670168[iVar0 /*10*/] > 0)
		{
			if (Global_2670168[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_2670168[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > -1)
	{
		Global_2670168[iVar4 /*10*/] = { Param0 };
	}
}

void func_970(struct<3> Param0, struct<3> Param1, float fParam2, var uParam3)//Position - 0x88C6A
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	if (Param0.f_2 == Param1.f_2)
	{
		Param1.f_2 = (Param1.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param1 };
	Var1 = { __LIB_0__.func_620(Var0, Var0.f_0, Var0.f_1, 0f) };
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
	*(uParam3[0 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) - Var1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, Param0.f_1, Param0.f_0) + Var1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) + Var1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) - Var1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, Param1.f_1, Param1.f_0) + Var1 };
}

void func_971(struct<3> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x88EE5
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	Var1 = { Param0 };
	iVar2 = __LIB_0__.func_616(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2673770[iVar2])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[iVar2 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672374[iVar2 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672374[iVar2 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2673770[8])
	{
		if (__LIB_0__.func_615(Var1, &(Global_2672374[8 /*155*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_2672374[8 /*155*/][iVar0 /*7*/] };
			*uParam2 = { Global_2672374[8 /*155*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_2672374[8 /*155*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

void func_972(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, float fParam4)//Position - 0x89C6E
{
	float fVar0;
	__LIB_0__.func_612(&Param0, &Param1);
	fVar0 = (Param1.f_0 - Param0.f_0);
	*uParam2 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam2->f_1 = Param0.f_1;
	uParam2->f_2 = Param0.f_2;
	*uParam3 = *uParam2;
	uParam3->f_1 = Param1.f_1;
	uParam3->f_2 = Param1.f_2;
	*fParam4 = (fVar0 * 0.5f);
}

void func_973(var uParam0, int iParam1)//Position - 0x89E57
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*iParam1 + iVar0) < 5)
		{
			*(uParam0[iVar0 /*3*/]) = { *(uParam0[(*iParam1 + iVar0) /*3*/]) };
			uParam0->f_16[iVar0] = uParam0->f_16[(*iParam1 + iVar0)];
			uParam0->f_22[iVar0] = uParam0->f_22[(*iParam1 + iVar0)];
		}
		else
		{
			*(uParam0[iVar0 /*3*/]) = { 0f, 0f, 0f };
			uParam0->f_16[iVar0] = 0f;
			uParam0->f_22[iVar0] = 0;
		}
		iVar0++;
	}
	Global_2667225.f_587 = 2;
	*iParam1 = 5;
}

Vector3 func_974(struct<3> Param0, struct<3> Param1)//Position - 0x8A01B
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(Param0.f_0, Param1.f_0), MISC::GET_RANDOM_FLOAT_IN_RANGE(Param0.f_1, Param1.f_1), MISC::GET_RANDOM_FLOAT_IN_RANGE(Param0.f_2, Param1.f_2);
}

void func_975(var uParam0)//Position - 0x8A0CE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2674518[iVar0 /*7*/], Global_2674518[iVar0 /*7*/].f_3, Global_2674518[iVar0 /*7*/].f_6, false, true))
		{
			if (Global_2674518[iVar0 /*7*/].f_3.f_2 > Global_2674518[iVar0 /*7*/].f_2)
			{
				uParam0->f_2 = Global_2674518[iVar0 /*7*/].f_3.f_2;
			}
			else
			{
				uParam0->f_2 = Global_2674518[iVar0 /*7*/].f_2;
			}
		}
		iVar0++;
	}
}

void func_976(var uParam0, float fParam1)//Position - 0x8A1B6
{
	if (*uParam0 < -8000f)
	{
		*uParam0 = (-8000f + fParam1);
	}
	if (*uParam0 > 8000f)
	{
		*uParam0 = (8000f - fParam1);
	}
	if (uParam0->f_1 < -8000f)
	{
		uParam0->f_1 = (-8000f + fParam1);
	}
	if (uParam0->f_1 > 8000f)
	{
		uParam0->f_1 = (8000f - fParam1);
	}
}

int func_977(struct<3> Param0)//Position - 0x8A440
{
	int iVar0;
	iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, 1, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar0))
	{
		if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_978(int iParam0, var uParam1, var uParam2)//Position - 0x8A5EA
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 175.8746f, -2266.8647f, -0.1876f };
			*uParam2 = 95.9999f;
			break;
		case 1:
			*uParam1 = { -65.106f, -2281.4697f, 0.1369f };
			*uParam2 = 95.9999f;
			break;
		case 2:
			*uParam1 = { -181.1033f, -2291.0762f, 0.1211f };
			*uParam2 = 95.9999f;
			break;
		case 3:
			*uParam1 = { -437.3371f, -2253.6873f, -0.1875f };
			*uParam2 = 90.5998f;
			break;
		case 4:
			*uParam1 = { -686.1516f, -2576.2708f, 0.3484f };
			*uParam2 = 155.1994f;
			break;
		case 5:
			*uParam1 = { -727.4426f, -2828.9614f, 1.1092f };
			*uParam2 = 155.1994f;
			break;
		case 6:
			*uParam1 = { -819.9704f, -3123.208f, 0f };
			*uParam2 = 220.1993f;
			break;
		case 7:
			*uParam1 = { -756.1753f, -3315.6692f, 0.3265f };
			*uParam2 = 151.3992f;
			break;
		case 8:
			*uParam1 = { -889.4266f, -3553.4314f, 0.0001f };
			*uParam2 = 151.3992f;
			break;
		case 9:
			*uParam1 = { -1197.8612f, -3568.7825f, -0.0001f };
			*uParam2 = 62.3989f;
			break;
		case 10:
			*uParam1 = { -1521.3159f, -3431.7786f, 0.211f };
			*uParam2 = 246.5987f;
			break;
		case 11:
			*uParam1 = { -1896.7605f, -3249.4812f, 0.0623f };
			*uParam2 = 237.5986f;
			break;
		case 12:
			*uParam1 = { -1989.2168f, -3111.1785f, 0.1f };
			*uParam2 = 192.1987f;
			break;
		case 13:
			*uParam1 = { -1940.6399f, -2871.0874f, 0f };
			*uParam2 = 150.3987f;
			break;
		case 14:
			*uParam1 = { -1841.018f, -2695.0957f, 0.3076f };
			*uParam2 = 150.3987f;
			break;
		case 15:
			*uParam1 = { -1672.2787f, -2403.9214f, 0.4199f };
			*uParam2 = 148.3987f;
			break;
		case 16:
			*uParam1 = { -1397.7823f, -2105.9749f, 0.4769f };
			*uParam2 = 132.7986f;
			break;
		case 17:
			*uParam1 = { -1249.7543f, -1918.8058f, 0f };
			*uParam2 = 136.9985f;
			break;
		case 18:
			*uParam1 = { -864.7389f, -1654.1245f, -0.0403f };
			*uParam2 = 133.9985f;
			break;
		case 19:
			*uParam1 = { -1009.9089f, -1681.6685f, 0.2243f };
			*uParam2 = 133.9985f;
			break;
		case 20:
			*uParam1 = { -889.3003f, -1336.532f, -0.0232f };
			*uParam2 = 284.5981f;
			break;
		case 21:
			*uParam1 = { -769.5701f, -1417.6295f, 0f };
			*uParam2 = 139.5976f;
			break;
		case 22:
			*uParam1 = { 452.3387f, -2270.5164f, 0.6099f };
			*uParam2 = 153.9975f;
			break;
		case 23:
			*uParam1 = { 636.8014f, -2426.2341f, 0.2376f };
			*uParam2 = 177.3973f;
			break;
		case 24:
			*uParam1 = { 600.2491f, -2312.2363f, 0f };
			*uParam2 = 174.3972f;
			break;
		case 25:
			*uParam1 = { 605.8359f, -2120.622f, 0.0001f };
			*uParam2 = 178.5972f;
			break;
		case 26:
			*uParam1 = { 9.8654f, -2403.5498f, -0.1555f };
			*uParam2 = 57.3968f;
			break;
		case 27:
			*uParam1 = { -449.7825f, -2465.7573f, 1.4199f };
			*uParam2 = 55.3968f;
			break;
		case 28:
			*uParam1 = { -538.5108f, -2772.8396f, 0f };
			*uParam2 = 118.3966f;
			break;
		case 29:
			*uParam1 = { -480.5373f, -2929.5718f, 1.2917f };
			*uParam2 = 127.3965f;
			break;
		case 30:
			*uParam1 = { -281.9166f, -2730.3455f, 0.3389f };
			*uParam2 = 313.396f;
			break;
		case 31:
			*uParam1 = { -109.8522f, -2750.3977f, 0.1582f };
			*uParam2 = 160.9957f;
			break;
		case 32:
			*uParam1 = { 54.6664f, -2768.8618f, 0.0603f };
			*uParam2 = 180.9999f;
			break;
		case 33:
			*uParam1 = { 96.1311f, -2908.8416f, 0.6769f };
			*uParam2 = 179.7999f;
			break;
		case 34:
			*uParam1 = { 94.7913f, -3166.5713f, 0.5726f };
			*uParam2 = 181.7999f;
			break;
		case 35:
			*uParam1 = { 176.029f, -3349.8113f, 0.4749f };
			*uParam2 = 268.8001f;
			break;
		case 36:
			*uParam1 = { 306.8796f, -3277.5342f, -0.0001f };
			*uParam2 = 187.6003f;
			break;
		case 37:
			*uParam1 = { 320.6241f, -3018.044f, 1.3892f };
			*uParam2 = 187.6003f;
			break;
		case 38:
			*uParam1 = { 431.5668f, -2755.8423f, 0.4375f };
			*uParam2 = 182.6004f;
			break;
		case 39:
			*uParam1 = { 393.8086f, -2540.162f, 1.1457f };
			*uParam2 = 182.6004f;
			break;
		case 40:
			*uParam1 = { 525.9057f, -2866.133f, 1.6181f };
			*uParam2 = 60.8001f;
			break;
		case 41:
			*uParam1 = { 429.7821f, -3072.6519f, 0.82f };
			*uParam2 = 175.9998f;
			break;
		case 42:
			*uParam1 = { 616.54f, -3250.9016f, 0.7666f };
			*uParam2 = 180.1997f;
			break;
		case 43:
			*uParam1 = { 631.5167f, -3036.1782f, 0.3326f };
			*uParam2 = 185.7998f;
			break;
		case 44:
			*uParam1 = { 671.7608f, -3175.3464f, 0.5179f };
			*uParam2 = 185.7998f;
			break;
		case 45:
			*uParam1 = { 834.8912f, -3361.8528f, 0.7999f };
			*uParam2 = 266.7998f;
			break;
		case 46:
			*uParam1 = { 1126.1738f, -3360.4587f, 0.9017f };
			*uParam2 = 266.7998f;
			break;
		case 47:
			*uParam1 = { 1306.5139f, -3346.9028f, 0.1569f };
			*uParam2 = 181.5998f;
			break;
		case 48:
			*uParam1 = { 1307.7316f, -3085.9834f, 0.5615f };
			*uParam2 = 181.5998f;
			break;
		case 49:
			*uParam1 = { 1112.2158f, -2889.588f, 0f };
			*uParam2 = 268.5999f;
			break;
		case 50:
			*uParam1 = { 790.0952f, -2890.989f, 0.2851f };
			*uParam2 = 268.5999f;
			break;
		case 51:
			*uParam1 = { 763.7927f, -2681.2932f, 0.3161f };
			*uParam2 = 192.3999f;
			break;
		case 52:
			*uParam1 = { 603.3765f, -2576.4858f, -0.4777f };
			*uParam2 = 243.0001f;
			break;
		case 53:
			*uParam1 = { 1031.0363f, -2693.851f, 0.3319f };
			*uParam2 = 264f;
			break;
		case 54:
			*uParam1 = { 1356.262f, -2763.3872f, 0.1661f };
			*uParam2 = 246.3999f;
			break;
		case 55:
			*uParam1 = { 1837.3584f, -2716.6462f, 0.2226f };
			*uParam2 = 146.5997f;
			break;
		case 56:
			*uParam1 = { 2015.6465f, -2588.7222f, 0.7029f };
			*uParam2 = 164.7995f;
			break;
		case 57:
			*uParam1 = { 2126.1475f, -2426.0078f, 0.2007f };
			*uParam2 = 184.7994f;
			break;
		case 58:
			*uParam1 = { 2275.153f, -2216.9758f, 0.099f };
			*uParam2 = 166.7993f;
			break;
		case 59:
			*uParam1 = { 2441.317f, -2167.2847f, 0.0732f };
			*uParam2 = 67.599f;
			break;
		case 60:
			*uParam1 = { 2636.498f, -2066.3838f, 0.5585f };
			*uParam2 = 143.7987f;
			break;
		case 61:
			*uParam1 = { 2670.5366f, -1912.4182f, 0.6084f };
			*uParam2 = 198.9985f;
			break;
		case 62:
			*uParam1 = { 2680.2095f, -1733.1948f, 0.6768f };
			*uParam2 = 149.3985f;
			break;
		case 63:
			*uParam1 = { 2722.1616f, -1590.3104f, 0.3128f };
			*uParam2 = 149.3985f;
			break;
		case 64:
			*uParam1 = { 2554.595f, -1558.4839f, 0.957f };
			*uParam2 = 248.9998f;
			break;
		case 65:
			*uParam1 = { 2525.4702f, -1381.7438f, 0.0772f };
			*uParam2 = 202.7998f;
			break;
		case 66:
			*uParam1 = { 2569.7756f, -1236.91f, 0.2436f };
			*uParam2 = 109.7998f;
			break;
		case 67:
			*uParam1 = { 2680.567f, -1127.9359f, 0f };
			*uParam2 = 147.7995f;
			break;
		case 68:
			*uParam1 = { 2700f, -933f, 1f };
			*uParam2 = 154.7993f;
			break;
		case 69:
			*uParam1 = { 2861.557f, -795.5785f, 0.0636f };
			*uParam2 = 172.9991f;
			break;
		case 70:
			*uParam1 = { 2853.8271f, -635.6807f, -0.1875f };
			*uParam2 = 180.3992f;
			break;
		case 71:
			*uParam1 = { 2933.6494f, -200.9922f, 0f };
			*uParam2 = 235.5994f;
			break;
		case 72:
			*uParam1 = { 2856.4866f, -51.5898f, 0.1877f };
			*uParam2 = 235.5994f;
			break;
		case 73:
			*uParam1 = { 2904.5696f, 203.1047f, 0.3361f };
			*uParam2 = 154.5992f;
			break;
		case 74:
			*uParam1 = { 2950.6755f, 409.0153f, 0.4243f };
			*uParam2 = 160.1991f;
			break;
		case 75:
			*uParam1 = { 2956.0889f, 635.3788f, 0.0202f };
			*uParam2 = 210.799f;
			break;
		case 76:
			*uParam1 = { 2846.419f, 851.8556f, 0.1386f };
			*uParam2 = 210.799f;
			break;
		case 77:
			*uParam1 = { 2792.9229f, 1013.4801f, 0f };
			*uParam2 = 210.799f;
			break;
		case 78:
			*uParam1 = { 2802.927f, 1238.4653f, 0f };
			*uParam2 = 178.5991f;
			break;
		case 79:
			*uParam1 = { 2973.8936f, 1589.487f, 0.2715f };
			*uParam2 = 185.1989f;
			break;
		case 80:
			*uParam1 = { 2934.5f, 1781.9276f, 0.3534f };
			*uParam2 = 126.9988f;
			break;
		case 81:
			*uParam1 = { 3038.087f, 1900.6073f, 0.5419f };
			*uParam2 = 182.1986f;
			break;
		case 82:
			*uParam1 = { 3053.7104f, 2072.5803f, 0.4812f };
			*uParam2 = 252.3987f;
			break;
		case 83:
			*uParam1 = { 3286.6985f, 2215.9343f, 0.4889f };
			*uParam2 = 245.1987f;
			break;
		case 84:
			*uParam1 = { 3343.269f, 2508.115f, 0.3227f };
			*uParam2 = 229.5986f;
			break;
		case 85:
			*uParam1 = { 3394.6921f, 2674.2686f, 0.5062f };
			*uParam2 = 211.3986f;
			break;
		case 86:
			*uParam1 = { 3523.9573f, 2786.022f, 0.325f };
			*uParam2 = 166.5988f;
			break;
		case 87:
			*uParam1 = { 3641.4126f, 2980.5833f, 0.4504f };
			*uParam2 = 166.5988f;
			break;
		case 88:
			*uParam1 = { 3633.7065f, 3094.4392f, 0.6986f };
			*uParam2 = 178.5988f;
			break;
		case 89:
			*uParam1 = { 3875.2883f, 3236.8303f, 0.9576f };
			*uParam2 = 148.5986f;
			break;
		case 90:
			*uParam1 = { 3939.8765f, 3502.4365f, 0.6033f };
			*uParam2 = 165.9984f;
			break;
		case 91:
			*uParam1 = { 3867.9053f, 3661.2246f, 0.6934f };
			*uParam2 = 329.1979f;
			break;
		case 92:
			*uParam1 = { 3779.109f, 3810.074f, 0.0316f };
			*uParam2 = 329.1979f;
			break;
		case 93:
			*uParam1 = { 3965.849f, 4021.089f, 0.3118f };
			*uParam2 = 147.1976f;
			break;
		case 94:
			*uParam1 = { 3884.2415f, 4231.953f, 0.8226f };
			*uParam2 = 212.1974f;
			break;
		case 95:
			*uParam1 = { 3850.9805f, 4434.9746f, 0.0112f };
			*uParam2 = 260.1973f;
			break;
		case 96:
			*uParam1 = { 3801.6677f, 4565.9893f, 0.6616f };
			*uParam2 = 269.9999f;
			break;
		case 97:
			*uParam1 = { 3647.52f, 4726.5347f, 0.1782f };
			*uParam2 = 251.7999f;
			break;
		case 98:
			*uParam1 = { 3374.4958f, 5191.567f, -0.1874f };
			*uParam2 = 251.7999f;
			break;
		case 99:
			*uParam1 = { 3238.795f, 5317.315f, 0.5904f };
			*uParam2 = 251.7999f;
			break;
		case 100:
			*uParam1 = { 3413.1008f, 5629.363f, -0.0001f };
			*uParam2 = 201.1998f;
			break;
		case 101:
			*uParam1 = { 3455.8218f, 5917.5894f, 1.1358f };
			*uParam2 = 187.5999f;
			break;
		case 102:
			*uParam1 = { 3383.5151f, 6138.2896f, 1.1936f };
			*uParam2 = 310.3998f;
			break;
		case 103:
			*uParam1 = { 3199.848f, 6336.7544f, 0f };
			*uParam2 = 252.5994f;
			break;
		case 104:
			*uParam1 = { 2996.3652f, 6396.114f, 0.7086f };
			*uParam2 = 252.5994f;
			break;
		case 105:
			*uParam1 = { 2647.0315f, 6563.635f, 1.1152f };
			*uParam2 = 319.1992f;
			break;
		case 106:
			*uParam1 = { 2492.642f, 6626.543f, 0f };
			*uParam2 = 285.3989f;
			break;
		case 107:
			*uParam1 = { 2351.3857f, 6684.619f, 0.1416f };
			*uParam2 = 226.1988f;
			break;
		case 108:
			*uParam1 = { 2140.6382f, 6741.995f, 0.341f };
			*uParam2 = 307.7985f;
			break;
		case 109:
			*uParam1 = { 1894.8313f, 6711.33f, 0.3437f };
			*uParam2 = 358.3983f;
			break;
		case 110:
			*uParam1 = { 1547.0073f, 6666.2104f, 0.3348f };
			*uParam2 = 303.1983f;
			break;
		case 111:
			*uParam1 = { 1315.3569f, 6644.3486f, 0.4022f };
			*uParam2 = 303.1983f;
			break;
		case 112:
			*uParam1 = { 1051.4713f, 6645.0024f, 0.1266f };
			*uParam2 = 283.3981f;
			break;
		case 113:
			*uParam1 = { 777.575f, 6678.724f, 0.1412f };
			*uParam2 = 95.1977f;
			break;
		case 114:
			*uParam1 = { 565.9356f, 6738.2207f, 0.0098f };
			*uParam2 = 64.3976f;
			break;
		case 115:
			*uParam1 = { 355.6869f, 6964.288f, 0.2944f };
			*uParam2 = 53.3975f;
			break;
		case 116:
			*uParam1 = { 88.6908f, 7244.8457f, 0.0883f };
			*uParam2 = 46.5975f;
			break;
		case 117:
			*uParam1 = { -36.5813f, 7005.16f, -0.1027f };
			*uParam2 = 141.797f;
			break;
		case 118:
			*uParam1 = { -172.9629f, 6723.5034f, 0.2301f };
			*uParam2 = 117.1967f;
			break;
		case 119:
			*uParam1 = { -323.4896f, 6580.3926f, -0.1875f };
			*uParam2 = 117.1967f;
			break;
		case 120:
			*uParam1 = { -488.1758f, 6495.041f, -0.3132f };
			*uParam2 = 118.3967f;
			break;
		case 121:
			*uParam1 = { -672.123f, 6284.4473f, 0.2093f };
			*uParam2 = 354.1964f;
			break;
		case 122:
			*uParam1 = { -798.1337f, 6054.6914f, 0.0001f };
			*uParam2 = 6.1964f;
			break;
		case 123:
			*uParam1 = { -1009.4064f, 6237.2153f, 0.3807f };
			*uParam2 = 194.9962f;
			break;
		case 124:
			*uParam1 = { -894.3038f, 5906.4595f, 0.3689f };
			*uParam2 = 143.1962f;
			break;
		case 125:
			*uParam1 = { -923.6738f, 5659.1045f, 0.0001f };
			*uParam2 = 143.1962f;
			break;
		case 126:
			*uParam1 = { -1162.16f, 5422.3496f, 0.4302f };
			*uParam2 = 99.9959f;
			break;
		case 127:
			*uParam1 = { -1369.9705f, 5407.206f, 0.0863f };
			*uParam2 = 23.1958f;
			break;
		case 128:
			*uParam1 = { -1418.3264f, 5264.5405f, -0.0001f };
			*uParam2 = 144.1997f;
			break;
		case 129:
			*uParam1 = { -1607.4014f, 5218.512f, -0.1152f };
			*uParam2 = 68.5995f;
			break;
		case 130:
			*uParam1 = { -1764.4795f, 4963.7593f, 0.3639f };
			*uParam2 = 187.5992f;
			break;
		case 131:
			*uParam1 = { -1883.9316f, 4796.082f, 0.4997f };
			*uParam2 = 181.9993f;
			break;
		case 132:
			*uParam1 = { -1947.9845f, 4609.6646f, -0.1875f };
			*uParam2 = 97.799f;
			break;
		case 133:
			*uParam1 = { -2277.9268f, 4520.2275f, 0.0592f };
			*uParam2 = 147.3987f;
			break;
		case 134:
			*uParam1 = { -2483.9448f, 4274.9f, 0.2772f };
			*uParam2 = 154.5986f;
			break;
		case 135:
			*uParam1 = { -2552.1863f, 3999.6057f, -0.0224f };
			*uParam2 = 154.5986f;
			break;
		case 136:
			*uParam1 = { -2641.237f, 3613.7444f, 0.0602f };
			*uParam2 = 133.5985f;
			break;
		case 137:
			*uParam1 = { -3018.233f, 3559.8245f, -0.1875f };
			*uParam2 = 109.3983f;
			break;
		case 138:
			*uParam1 = { -3149.8872f, 3228.0215f, -0.1875f };
			*uParam2 = 232.1979f;
			break;
		case 139:
			*uParam1 = { -2951.1401f, 3067.6123f, 0.026f };
			*uParam2 = 190.198f;
			break;
		case 140:
			*uParam1 = { -2689.9907f, 2806.662f, 0f };
			*uParam2 = 152.198f;
			break;
		case 141:
			*uParam1 = { -2794.581f, 2548.7686f, 0.0897f };
			*uParam2 = 142.3979f;
			break;
		case 142:
			*uParam1 = { -2854.2988f, 2342.3953f, 0.4108f };
			*uParam2 = 139.3979f;
			break;
		case 143:
			*uParam1 = { -3059.4224f, 2177.0195f, 0.6273f };
			*uParam2 = 163.3977f;
			break;
		case 144:
			*uParam1 = { -3105.7866f, 1902.8488f, 0.7718f };
			*uParam2 = 98.9974f;
			break;
		case 145:
			*uParam1 = { -3189.2632f, 1702.1139f, 0.3011f };
			*uParam2 = 200.397f;
			break;
		case 146:
			*uParam1 = { -3058.2559f, 1563.3888f, 0.4287f };
			*uParam2 = 137.3969f;
			break;
		case 147:
			*uParam1 = { -3254.543f, 1331.0033f, 0f };
			*uParam2 = 137.3969f;
			break;
		case 148:
			*uParam1 = { -3299.4353f, 1127.64f, 0f };
			*uParam2 = 164.5968f;
			break;
		case 149:
			*uParam1 = { -3423.9753f, 944.6937f, 0f };
			*uParam2 = 272.5966f;
			break;
		case 150:
			*uParam1 = { -3261.2913f, 877.7032f, 0.0834f };
			*uParam2 = 185.5966f;
			break;
		case 151:
			*uParam1 = { -3162.37f, 677.1174f, 0.0664f };
			*uParam2 = 185.5966f;
			break;
		case 152:
			*uParam1 = { -3117.108f, 476.2288f, 0.0262f };
			*uParam2 = 164.5966f;
			break;
		case 153:
			*uParam1 = { -3177.534f, 244.8833f, 0.0564f };
			*uParam2 = 200.5966f;
			break;
		case 154:
			*uParam1 = { -3074.4043f, 9.0769f, 0.2539f };
			*uParam2 = 229.3967f;
			break;
		case 155:
			*uParam1 = { -2841.947f, -70.2356f, 0.2181f };
			*uParam2 = 229.3967f;
			break;
		case 156:
			*uParam1 = { -2627.9253f, -229.6535f, 0.2826f };
			*uParam2 = 234.9966f;
			break;
		case 157:
			*uParam1 = { -2361.2476f, -367.853f, 0.2203f };
			*uParam2 = 225.9966f;
			break;
		case 158:
			*uParam1 = { -2161.6077f, -523.2668f, 0.6005f };
			*uParam2 = 187.7966f;
			break;
		case 159:
			*uParam1 = { -2028.7723f, -688.3555f, 0.5176f };
			*uParam2 = 187.7966f;
			break;
		case 160:
			*uParam1 = { -1842.416f, -931.4218f, 0.3996f };
			*uParam2 = 190.8f;
			break;
		case 161:
			*uParam1 = { -1884.1825f, -1190.0253f, 0.5642f };
			*uParam2 = 134.7999f;
			break;
		case 162:
			*uParam1 = { -1796.0983f, -1241.2012f, 0.4669f };
			*uParam2 = 327.1996f;
			break;
		case 163:
			*uParam1 = { -1637.2253f, -1174.8992f, 0.3341f };
			*uParam2 = 202.9994f;
			break;
		case 164:
			*uParam1 = { -1558.7034f, -1303.6364f, 0.5846f };
			*uParam2 = 195.7994f;
			break;
		case 165:
			*uParam1 = { -1464.2737f, -1530.9089f, 0.256f };
			*uParam2 = 195.7994f;
			break;
		case 166:
			*uParam1 = { -1382.1365f, -1680.511f, 0f };
			*uParam2 = 215.5996f;
			break;
		case 167:
			*uParam1 = { -1265.9431f, -1866.0009f, 0.2382f };
			*uParam2 = 142.3997f;
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 0;
	}
	return 1;
}

float func_979(int iParam0)//Position - 0x8C26B
{
	switch (iParam0)
	{
		case 0:
			return 72.7551f;
		case 1:
			return 273.689f;
		case 2:
			return 102.4901f;
		case 3:
			return 176.9972f;
		case 4:
			return 111.3628f;
		default:
	}
	return 72.7551f;
}

Vector3 func_980(int iParam0)//Position - 0x8C2C5
{
	switch (iParam0)
	{
		case 0:
			return -1590.9675f, -3015.215f, -77.005f;
		case 1:
			return -1587.4396f, -3006.7056f, -80.006f;
		case 2:
			return -1591.1267f, -3008.5693f, -77.0051f;
		case 3:
			return -1576.5996f, -3014.0754f, -80.006f;
		case 4:
			return -1593.4803f, -3009.1829f, -80.006f;
		default:
	}
	return -1590.9675f, -3015.215f, -77.005f;
}

bool func_981(int iParam0)//Position - 0x8C859
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 8);
}

int func_982(int iParam0, var uParam1)//Position - 0x8E3E7
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_983(int iParam0, bool bParam1)//Position - 0x8E50D
{
	struct<6> Var0;
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.59628f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 179.99997f };
			break;
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -109.99999f };
			break;
		case 7:
			Var0 = { -1471.8821f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 34:
			Var0 = { -1471.8821f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.39966f };
			Var0.f_3 = { 0f, 0f, -153.30931f };
			break;
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.23286f };
			Var0.f_3 = { 0f, 0f, -152.55307f };
			break;
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		case 81:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		case 86:
			Var0 = { -1573.0981f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 87:
			Var0 = { -1572.1869f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		case 88:
			Var0 = { -1383.9543f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.7644f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.6702f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.5712f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.2538f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.0984f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.0225f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.5178f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.5383f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.9939f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_984(int iParam0)//Position - 0x8F0C3
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
			return 1;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		case 86:
			return 86;
			break;
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

void func_985(int iParam0)//Position - 0x8F300
{
	Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_1303 = iParam0;
}

Vector3 func_986(int iParam0)//Position - 0x90A47
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		case 3:
			Var0 = { -1443.0938f, -544.7684f, 33.7424f };
			break;
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		case 14:
			Var0 = { -973.3757f, -1429.4247f, 6.6791f };
			break;
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		case 21:
			Var0 = { -1534.0247f, -324.5247f, 46.5237f };
			break;
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		case 23:
			Var0 = { -1608.8514f, -429.184f, 39.439f };
			break;
		case 24:
			Var0 = { 964.3583f, -1034.1991f, 39.8303f };
			break;
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		case 28:
			Var0 = { 844.7289f, -1164.0997f, 24.2681f };
			break;
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		case 30:
			Var0 = { 572.0462f, -1570.7357f, 27.4904f };
			break;
		case 31:
			Var0 = { 722.2852f, -1190.6168f, 23.282f };
			break;
		case 32:
			Var0 = { 497.6212f, -1494.0845f, 28.2893f };
			break;
		case 33:
			Var0 = { 480.3127f, -1549.9368f, 28.2828f };
			break;
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		case 36:
			Var0 = { 2554.1653f, 4668.059f, 33.0233f };
			break;
		case 37:
			Var0 = { 2461.2202f, 1589.2552f, 32.0443f };
			break;
		case 38:
			Var0 = { -2203.335f, 4244.4272f, 47.3305f };
			break;
		case 39:
			Var0 = { 218.0665f, 2601.8171f, 44.7668f };
			break;
		case 40:
			Var0 = { 186.1719f, 2786.3425f, 45.0144f };
			break;
		case 41:
			Var0 = { 642.0746f, 2791.7295f, 40.9795f };
			break;
		case 42:
			Var0 = { -1130.9376f, 2701.1333f, 17.8004f };
			break;
		case 43:
			Var0 = { -10.944f, -1646.7601f, 28.3125f };
			break;
		case 44:
			Var0 = { 1024.2628f, -2398.4036f, 29.1261f };
			break;
		case 45:
			Var0 = { 870.8577f, -2232.3228f, 29.5508f };
			break;
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		case 47:
			Var0 = { -1088.6158f, -2235.0977f, 12.2182f };
			break;
		case 48:
			Var0 = { -342.5126f, -1468.6746f, 29.6107f };
			break;
		case 49:
			Var0 = { -1241.5399f, -259.8841f, 37.9445f };
			break;
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		case 51:
			Var0 = { -1405.4109f, 526.8572f, 122.8361f };
			break;
		case 52:
			Var0 = { 1341.5518f, -1578.0366f, 53.4443f };
			break;
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		case 56:
			Var0 = { 1899.6729f, 3773.1785f, 31.8829f };
			break;
		case 57:
			Var0 = { 1662.1211f, 4776.317f, 41.0075f };
			break;
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		case 66:
			Var0 = { -1292.4557f, 440.9454f, 93.7572f };
			break;
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		case 68:
			Var0 = { -1581.5015f, -558.2578f, 33.9528f };
			break;
		case 69:
			Var0 = { -1379.5457f, -499.1783f, 32.1574f };
			break;
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		case 72:
			Var0 = { 254.1892f, -1809.1831f, 26.1805f };
			break;
		case 73:
			Var0 = { -1472.2778f, -920.0677f, 8.9683f };
			break;
		case 74:
			Var0 = { 38.9478f, -1026.6288f, 28.6354f };
			break;
		case 75:
			Var0 = { 46.903f, 2789.8247f, 57.1124f };
			break;
		case 76:
			Var0 = { -342.3246f, 6065.3164f, 30.4895f };
			break;
		case 77:
			Var0 = { 1737.8784f, 3709.0876f, 33.1348f };
			break;
		case 78:
			Var0 = { 939.7161f, -1459.2039f, 30.467f };
			break;
		case 79:
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		case 81:
			Var0 = { 2472.2197f, 4110.4927f, 36.9629f };
			break;
		case 82:
			Var0 = { -39.3286f, 6420.6025f, 30.7017f };
			break;
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_987(int iParam0)//Position - 0x9136E
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		case 5:
		case 6:
			return 2;
			break;
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		case 42:
		case 43:
		case 64:
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
		case 14:
			return 14;
			break;
		case 15:
			return 15;
			break;
		case 16:
			return 16;
			break;
		case 17:
			return 17;
			break;
		case 18:
			return 18;
			break;
		case 19:
			return 19;
			break;
		case 20:
			return 20;
			break;
		case 21:
			return 21;
			break;
		case 22:
			return 22;
			break;
		case 23:
			return 23;
			break;
		case 24:
			return 24;
			break;
		case 25:
			return 25;
			break;
		case 26:
			return 26;
			break;
		case 27:
			return 27;
			break;
		case 28:
			return 28;
			break;
		case 29:
			return 29;
			break;
		case 30:
			return 30;
			break;
		case 31:
			return 31;
			break;
		case 32:
			return 32;
			break;
		case 33:
			return 33;
			break;
		case 44:
			return 34;
			break;
		case 45:
			return 35;
			break;
		case 46:
			return 36;
			break;
		case 47:
			return 37;
			break;
		case 48:
			return 38;
			break;
		case 49:
			return 39;
			break;
		case 50:
			return 40;
			break;
		case 51:
			return 41;
			break;
		case 52:
			return 42;
			break;
		case 53:
			return 43;
			break;
		case 54:
			return 44;
			break;
		case 55:
			return 45;
			break;
		case 56:
			return 46;
			break;
		case 57:
			return 47;
			break;
		case 58:
			return 48;
			break;
		case 59:
			return 49;
			break;
		case 60:
			return 50;
			break;
		case 66:
			return 51;
			break;
		case 67:
			return 52;
			break;
		case 68:
			return 53;
			break;
		case 69:
			return 54;
			break;
		case 70:
			return 55;
			break;
		case 71:
			return 56;
			break;
		case 72:
			return 57;
			break;
		case 73:
			return 58;
			break;
		case 74:
			return 59;
			break;
		case 75:
			return 60;
			break;
		case 76:
			return 61;
			break;
		case 77:
			return 62;
			break;
		case 78:
			return 63;
			break;
		case 79:
			return 64;
			break;
		case 80:
			return 65;
			break;
		case 81:
			return 66;
			break;
		case 82:
			return 67;
			break;
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		case 91:
			return 72;
			break;
		case 92:
			return 73;
			break;
		case 93:
			return 74;
			break;
		case 94:
			return 75;
			break;
		case 95:
			return 76;
			break;
		case 96:
			return 77;
			break;
		case 97:
			return 78;
			break;
		case 98:
			return 79;
			break;
		case 99:
			return 80;
			break;
		case 100:
			return 81;
			break;
		case 101:
			return 82;
			break;
		case 102:
			return 83;
			break;
	}
	return 0;
}

struct<6> func_988(int iParam0)//Position - 0x92B0F
{
	struct<6> Var0;
	switch (iParam0)
	{
		case -1:
		case default:
			Var0 = { -1478.436f, -3753.5378f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		case 0:
			Var0 = { -3555.1155f, 1473.0128f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		case 1:
			Var0 = { -3147.0488f, 2827.088f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		case 2:
			Var0 = { -3277.473f, 2159.8499f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		case 3:
			Var0 = { -2822.4194f, 4054.8396f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		case 4:
			Var0 = { -3249.849f, 3704.6814f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 5:
			Var0 = { -2383.1934f, 4685.0034f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		case 6:
			Var0 = { -3224.6863f, -215.9825f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		case 7:
			Var0 = { -3447.8765f, 291.9275f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 97f };
			break;
		case 8:
			Var0 = { -2713.098f, -528.3185f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -33f };
			break;
		case 9:
			Var0 = { -1981.6182f, -1537.2692f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 142f };
			break;
		case 10:
			Var0 = { -2100.817f, -2533.2332f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -143f };
			break;
		case 11:
			Var0 = { -1599.6425f, -1891.2773f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 112f };
			break;
		case 12:
			Var0 = { -733.6151f, -3916.9846f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -168f };
			break;
		case 13:
			Var0 = { -363.3534f, -3568.56f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 57f };
			break;
		case 14:
			Var0 = { -1478.436f, -3753.5378f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -18f };
			break;
		case 15:
			Var0 = { 1535.974f, -3061.8774f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 62f };
			break;
		case 16:
			Var0 = { 2471.4185f, -2430.9297f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 12f };
			break;
		case 17:
			Var0 = { 2067.3708f, -2813.0103f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		case 18:
			Var0 = { 3021.0881f, -1513.6022f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 72f };
			break;
		case 19:
			Var0 = { 3025.9556f, -704.3854f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 20:
			Var0 = { 2961.8628f, -2007.6315f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 47f };
			break;
		case 21:
			Var0 = { 3398.1694f, 1958.5214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 77f };
			break;
		case 22:
			Var0 = { 3428.6812f, 1202.0597f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -148f };
			break;
		case 23:
			Var0 = { 3787.8298f, 2567.8838f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -93f };
			break;
		case 24:
			Var0 = { 4235.9463f, 4004.2522f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -118f };
			break;
		case 25:
			Var0 = { 4245.1514f, 4595.375f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -68f };
			break;
		case 26:
			Var0 = { 4209.057f, 3392.7053f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -98f };
			break;
		case 27:
			Var0 = { 3738.8098f, 5768.2524f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -43f };
			break;
		case 28:
			Var0 = { 3472.9656f, 6315.245f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -23f };
			break;
		case 29:
			Var0 = { 3693.4683f, 5194.6587f, 9.7027f };
			Var0.f_3 = { 0f, 0f, 122f };
			break;
		case 30:
			Var0 = { 572.9806f, 7142.138f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -58f };
			break;
		case 31:
			Var0 = { 2024.036f, 6907.536f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -173f };
			break;
		case 32:
			Var0 = { 1377.2958f, 6863.2305f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -3f };
			break;
		case 33:
			Var0 = { -1169.3605f, 6000.214f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -88f };
			break;
		case 34:
			Var0 = { -759.2205f, 6573.955f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -153f };
			break;
		case 35:
			Var0 = { -373.8432f, 6964.86f, 9.7027f };
			Var0.f_3 = { 0f, 0f, -108f };
			break;
		case 36:
			Var0 = { 3634.999f, -4781.017f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -179.95f };
			break;
		case 37:
			Var0 = { 50.6219f, -3312.5625f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 90.05f };
			break;
		case 38:
			Var0 = { -3556.677f, 738.4581f, 9.7065f };
			Var0.f_3 = { 0f, 0f, 0.05f };
			break;
		case 39:
			Var0 = { -1766.8353f, 5334.0933f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -9.95f };
			break;
		case 40:
			Var0 = { -3280.7068f, -1580.8092f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -12.45f };
			break;
		case 41:
			Var0 = { -833.0568f, -4809.8076f, 9.7065f };
			Var0.f_3 = { 0f, 0f, -147.45f };
			break;
	}
	return Var0;
}

float func_989(struct<3> Param0, var uParam1, int iParam2)//Position - 0x9332E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar3 = -1;
	fVar2 = 10000000f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2667225.f_2735) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*iParam2 = iVar3;
	return fVar2;
}

int func_990()//Position - 0x934AA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667225.f_45[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_991(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x937D3
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (*uParam0 < Param1.f_0)
	{
		*uParam0 = (Param1.f_0 + fParam3);
	}
	if (*uParam0 > Param2.f_0)
	{
		*uParam0 = (Param2.f_0 - fParam3);
	}
	if (uParam0->f_1 < Param1.f_1)
	{
		uParam0->f_1 = (Param1.f_1 + fParam3);
	}
	if (uParam0->f_1 > Param2.f_1)
	{
		uParam0->f_1 = (Param2.f_1 - fParam3);
	}
	if (Param1.f_2 > Param2.f_2)
	{
		fVar0 = Param2.f_2;
		fVar1 = Param1.f_2;
	}
	else
	{
		fVar0 = Param1.f_2;
		fVar1 = Param2.f_2;
	}
	fVar2 = (fVar1 - fVar0);
	if (uParam0->f_2 > (fVar1 - (fVar2 * 0.25f)))
	{
		uParam0->f_2 = (fVar1 - (fVar2 * 0.25f));
	}
	if (uParam0->f_2 < (fVar0 + (fVar2 * 0.25f)))
	{
		uParam0->f_2 = (fVar0 + (fVar2 * 0.25f));
	}
}

void func_992(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x9389D
{
	struct<3> Var0;
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
	}
	Var0 = { Var0 * FtoV((fParam2 - fParam3)) };
	*uParam0 = { Param1 + Var0 };
}

void func_993(var uParam0)//Position - 0x938FC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Global_2667225.f_586 = 0;
	switch (uParam0->f_10)
	{
		case 0:
			Global_2667225.f_555 = { *uParam0 };
			Global_2667225.f_555.f_4 = (uParam0->f_6 + (IntToFloat(Global_2667225.f_2735) * uParam0->f_8));
			Global_2667225.f_520.f_7 = uParam0->f_11;
			if (uParam0->f_8 > 0f)
			{
				Global_2667225.f_586 = 1;
			}
			if (Global_2667225.f_520.f_7)
			{
				Global_2667225.f_555.f_3 = uParam0->f_7;
			}
			break;
		case 1:
			Global_2667225.f_555 = { 0f, 0f, 0f };
			Global_2667225.f_555.f_3 = 0f;
			Global_2667225.f_555.f_4 = 0f;
			Global_2667225.f_555.f_7 = 2;
			Var0 = { *uParam0 };
			Var1 = { uParam0->f_3 };
			Var2 = { *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			Global_2667225.f_555.f_8 = { Var0.f_0, Var2.f_1, Var0.f_2 };
			Global_2667225.f_555.f_11 = { Var1.f_0, Var2.f_1, Var1.f_2 };
			Global_2667225.f_555.f_14 = (Var1.f_1 - Var0.f_1);
			Global_2667225.f_555 = { Global_2667225.f_555.f_8 + Global_2667225.f_555.f_11 * Vector(0.5f, 0.5f, 0.5f) };
			break;
		case 2:
			Global_2667225.f_555.f_3 = 0f;
			Global_2667225.f_555.f_4 = 0f;
			Global_2667225.f_555.f_7 = 2;
			Global_2667225.f_555.f_8 = { *uParam0 };
			Global_2667225.f_555.f_11 = { uParam0->f_3 };
			Global_2667225.f_555.f_14 = uParam0->f_6;
			Global_2667225.f_555 = { Global_2667225.f_555.f_8 + Global_2667225.f_555.f_11 * Vector(0.5f, 0.5f, 0.5f) };
			break;
	}
}

var func_994(var uParam0)//Position - 0x93B62
{
	*uParam0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (*uParam0 < 4 && *uParam0 > -1)
	{
	}
	else
	{
		*uParam0 = 0;
	}
	return Global_1058069.f_14[*uParam0];
}

float func_995(var uParam0)//Position - 0x93C82
{
	switch (uParam0->f_10)
	{
		case 0:
			return uParam0->f_2;
			break;
		case 1:
		case 2:
			return ((uParam0->f_2 + uParam0->f_3.f_2) * 0.5f);
			break;
	}
	return uParam0->f_2;
}

void func_996(var uParam0, var uParam1, float fParam2)//Position - 0x93D45
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	switch (uParam1->f_10)
	{
		case 0:
			Var0 = { *uParam1 };
			break;
		case 1:
		case 2:
			Var0 = { *uParam1 + uParam1->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			break;
	}
	Var1 = { Var0 - *uParam0 };
	if (SYSTEM::VMAG(Var1) > fParam2)
	{
		Var1 = { Var1 / FtoV(SYSTEM::VMAG(Var1)) };
		Var2 = { *uParam0 + Var1 * Vector(fParam2, fParam2, fParam2) };
	}
	else
	{
		Var2 = { Var0 };
	}
	*uParam0 = { Var2 };
}

void func_997(struct<3> Param0, float fParam1)//Position - 0x944CB
{
	if (Global_2667225.f_2262 < 50)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2667225.f_2263[Global_2667225.f_2262 /*4*/] = { Param0 };
		Global_2667225.f_2263[Global_2667225.f_2262 /*4*/].f_3 = fParam1;
		Global_2667225.f_2262++;
	}
}

float func_998(struct<3> Param0, var uParam1)//Position - 0x94A31
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 10000000f;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if ((*uParam1)[iVar2] > -1)
		{
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_2667225.f_714.f_1[(*uParam1)[iVar2] /*5*/], true);
			if (fVar1 < fVar0)
			{
				fVar0 = fVar1;
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_999(var uParam0)//Position - 0x94AA8
{
	*(uParam0[0 /*4*/]) = { -790.9983f, -164.417f, 36.2931f };
	(uParam0[0 /*4*/])->f_3 = 137.9655f;
	*(uParam0[1 /*4*/]) = { -759.2075f, -190.2448f, 47.6269f };
	(uParam0[1 /*4*/])->f_3 = 69.5793f;
	*(uParam0[2 /*4*/]) = { -859.9305f, -236.0357f, 38.6344f };
	(uParam0[2 /*4*/])->f_3 = 99.9262f;
	*(uParam0[3 /*4*/]) = { -864.9851f, -222.3483f, 60.0416f };
	(uParam0[3 /*4*/])->f_3 = 252.3229f;
	*(uParam0[4 /*4*/]) = { -858.0186f, -242.6807f, 59.9961f };
	(uParam0[4 /*4*/])->f_3 = 5.9838f;
	*(uParam0[5 /*4*/]) = { -899.8217f, -141.3023f, 36.931f };
	(uParam0[5 /*4*/])->f_3 = 313.7854f;
	*(uParam0[6 /*4*/]) = { -816.2837f, -102.6396f, 36.5778f };
	(uParam0[6 /*4*/])->f_3 = 318.5637f;
	*(uParam0[7 /*4*/]) = { -848.1709f, -61.5357f, 36.5473f };
	(uParam0[7 /*4*/])->f_3 = 156.5983f;
	*(uParam0[8 /*4*/]) = { -960.985f, -189.3435f, 36.6712f };
	(uParam0[8 /*4*/])->f_3 = 110.5848f;
	*(uParam0[9 /*4*/]) = { -731.0921f, -273.238f, 35.9452f };
	(uParam0[9 /*4*/])->f_3 = 43.1219f;
	*(uParam0[10 /*4*/]) = { -895.2287f, -157.7689f, 36.7077f };
	(uParam0[10 /*4*/])->f_3 = 244.6843f;
}
