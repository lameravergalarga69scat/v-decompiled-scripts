void func_0(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0xBF056
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_2__::func_407();
	__LIB_2__::func_406();
	Global_1931427 = 0;
	__LIB_2__::func_405();
	__LIB_2__::func_404(2);
	Global_1057165 = 0;
	if (__LIB_0__::func_626() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_1__::func_25();
	}
	__LIB_2__::func_366();
	__LIB_2__::func_364();
	Global_1922915.f_4 = 0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam3, false, uParam0->f_16);
	if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_80()) && !__LIB_2__::func_447())
	{
		iVar0 = __LIB_2__::func_403();
		if (iVar0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				__LIB_1__::func_36(1, PLAYER::GET_PLAYER_PED(iVar0), 1);
			}
		}
	}
	__LIB_18__::func_984();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(true);
	if (__LIB_2__::func_256())
	{
		__LIB_2__::func_255();
	}
	iVar1 = __LIB_2__::func_403();
	if (iVar1 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
	}
	__LIB_2__::func_402();
	__LIB_2__::func_401();
	__LIB_2__::func_400();
	__LIB_2__::func_399();
	__LIB_2__::func_398();
	__LIB_2__::func_397();
	bVar2 = false;
	if (__LIB_1__::func_202())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
		}
	}
	__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(false);
	}
	__LIB_2__::func_329(0);
	Global_1888183 = 0;
	if (__LIB_2__::func_446(8))
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 28);
	}
	if (__LIB_1__::func_345())
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18), 27);
	}
	__LIB_2__::func_396();
	__LIB_2__::func_395();
	if ((__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_80()) || __LIB_2__::func_447())
	{
		__LIB_2__::func_822(8, 0, 1);
	}
	else
	{
		__LIB_2__::func_822(2, 0, 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (((Global_4718592 != 5 && Global_4718592 != 6) && Global_4718592 != 32) && Global_4718592 != 148)
		{
			__LIB_2__::func_394();
		}
		if (Global_4718592 != 5 || *uParam1 != 40)
		{
			if (bParam5)
			{
				if (Global_4980736.f_78574 > 0 || Global_4980736.f_202536 > 0)
				{
					iVar3 = Global_4980736.f_78574;
					iVar3 = (iVar3 + Global_4980736.f_202536);
					if (__LIB_1__::func_202())
					{
						iVar3++;
					}
					NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar3);
				}
			}
			if (bParam4)
			{
				if (Global_4980736.f_94384 > 0 || Global_4980736.f_202537 > 0)
				{
					if (Global_4718592 == 1)
					{
					}
					else
					{
						iVar4 = Global_4980736.f_94384;
						if (Global_4718592.f_116990 != 0)
						{
							iVar4++;
						}
						iVar4 = (iVar4 + Global_4980736.f_202537);
						if (iVar4 > 50)
						{
							iVar4 = 50;
						}
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar4);
					}
				}
			}
			if ((((Global_4980736.f_5739 > 0 || Global_4980736.f_63310 > 0) || Global_4980736.f_36354 > 0) || BitTest(Global_4718592.f_13, 24)) || Global_4980736.f_202535 > 0)
			{
				iVar5 = Global_4980736.f_5739;
				iVar5 = (iVar5 + __LIB_2__::func_393(iParam7) * 3);
				if (BitTest(Global_4718592.f_13, 24))
				{
					iVar5 += 16;
				}
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((((iVar5 + Global_4980736.f_63310) + Global_4980736.f_36354) + Global_4980736.f_202535));
			}
		}
		if (!bVar2)
		{
			if (__LIB_1__::func_202() && __LIB_13__::func_466())
			{
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, uParam0->f_16);
			}
		}
	}
	__LIB_0__::func_895(0, -1, 0);
	if (!__LIB_2__::func_392())
	{
		__LIB_2__::func_391();
	}
	if (!__LIB_2__::func_390())
	{
		__LIB_2__::func_389();
	}
	if (__LIB_2__::func_444())
	{
		__LIB_2__::func_388();
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (uParam0->f_16 != -1)
		{
			*uParam1 = uParam0->f_2;
			*uParam2 = uParam0->f_1;
		}
		else
		{
			*uParam1 = PLAYER::PLAYER_ID();
			*uParam2 = 0;
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	__LIB_1__::func_371(uParam0->f_2, uParam0->f_1, uParam0->f_16);
	if (bParam6)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	if (Global_4718592 == 0)
	{
		if (!__LIB_0__::func_80() && !__LIB_1__::func_623())
		{
			if (!__LIB_1__::func_202())
			{
				MISC::CLEAR_AREA(0f, 0f, 0f, 16000f, true, false, false, false);
			}
		}
	}
	else if (Global_4718592 == 6)
	{
		__LIB_1__::func_315(17);
	}
	if (__LIB_0__::func_80())
	{
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
		if ((((Global_4718592 != 2 && Global_4718592 != 8) && Global_4718592 != 0) && Global_4718592 != 1) && Global_4718592 != 3)
		{
			__LIB_2__::func_387();
			__LIB_2__::func_386();
			__LIB_2__::func_385();
		}
	}
	if (((((((((Global_4718592 == 10 || Global_4718592 == 15) || Global_4718592 == 14) || Global_4718592 == 11) || Global_4718592 == 92) || Global_4718592 == 35) || Global_4718592 == 33) || Global_4718592 == 34) || Global_4718592 == 13) || Global_4718592 == 12)
	{
		if (__LIB_19__::func_68(0) > 0)
		{
			__LIB_2__::func_384(4, -1);
		}
	}
	if (!__LIB_1__::func_202())
	{
		__LIB_2__::func_383(Global_4718592, uParam0->f_1);
	}
	Global_1922955 = 0;
	Global_1922955.f_23 = { 0f, 0f, 0f };
	Global_2703735.f_61.f_69 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_2__::func_382();
}

int func_1()//Position - 0x11E0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0] != 0)
		{
			iVar1 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[iVar0];
			iVar2 = __LIB_33__::func_479(245, 0);
			if (iVar0 == (iVar2 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar2 % 32));
			}
			iVar3 = __LIB_33__::func_479(323, 0);
			if (iVar0 == (iVar3 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar3 % 32));
			}
			iVar4 = __LIB_33__::func_479(324, 0);
			if (iVar0 == (iVar4 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar4 % 32));
			}
			iVar5 = __LIB_33__::func_479(357, 0);
			if (iVar0 == (iVar5 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar5 % 32));
			}
			iVar6 = __LIB_33__::func_479(402, 0);
			if (iVar0 == (iVar6 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar6 % 32));
			}
			iVar7 = __LIB_33__::func_479(518, 0);
			if (iVar0 == (iVar7 / 32))
			{
				MISC::CLEAR_BIT(&iVar1, (iVar7 % 32));
			}
			if (iVar1 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2(int iParam0)//Position - 0x9586
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_112())
	{
		if (iParam0 == __LIB_33__::func_479(245, 0) && __LIB_1__::func_360(3171, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_33__::func_479(323, 0) && __LIB_1__::func_360(5396, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_33__::func_479(324, 0) && __LIB_0__::func_137(9461, -1))
		{
			return 1;
		}
		if (iParam0 == __LIB_33__::func_479(357, 0) && __LIB_1__::func_360(6159, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_33__::func_479(402, 0) && __LIB_1__::func_360(7210, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == __LIB_33__::func_479(518, 0) && __LIB_1__::func_360(9517, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				case 1:
					iVar1 = 451;
					break;
				case 2:
					iVar1 = 452;
					break;
				case 3:
					iVar1 = 453;
					break;
				case 4:
					iVar1 = 454;
					break;
				case 5:
					iVar1 = 455;
					break;
				case 6:
					iVar1 = 456;
					break;
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == __LIB_33__::func_479(iVar1, 0) && __LIB_1__::func_886(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (BitTest(Global_2359296[__LIB_0__::func_155() /*5567*/].f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_3(int iParam0)//Position - 0x66A29
{
	switch (iParam0)
	{
		case 0:
			return 2558.324f, 350.988f, 107.5975f;
		case 1:
			return -301.6573f, -829.5886f, 31.41977f;
		case 2:
			return -303.2257f, -829.3121f, 31.41977f;
		case 3:
			return -204.0193f, -861.0091f, 29.27133f;
		case 4:
			return 118.6416f, -883.5695f, 30.13945f;
		case 5:
			return 24.5933f, -945.543f, 28.33305f;
		case 6:
			return 5.686035f, -919.9551f, 28.48088f;
		case 7:
			return 296.1756f, -896.2318f, 28.29015f;
		case 8:
			return 296.8775f, -894.3196f, 28.26148f;
		case 9:
			return 147.4731f, -1036.218f, 28.38707f;
		case 10:
			return 145.8392f, -1035.625f, 28.38707f;
		case 11:
			return -256.6386f, -715.8899f, 32.7883f;
		case 12:
			return 112.4762f, -819.8081f, 30.33955f;
		case 13:
			return -259.2767f, -723.2651f, 32.70155f;
		case 14:
			return -254.5219f, -692.8869f, 32.57825f;
		case 15:
			return -27.89034f, -724.1089f, 43.22287f;
		case 16:
			return -30.09956f, -723.2863f, 43.22287f;
		case 17:
			return 111.3886f, -774.8402f, 30.43766f;
		case 18:
			return 114.5474f, -775.972f, 30.41737f;
		case 19:
			return 289.53f, -1256.788f, 28.44057f;
		case 20:
			return 289.2679f, -1282.32f, 28.65519f;
		case 21:
			return 158.7965f, 234.7452f, 105.6433f;
		case 22:
			return 228.0324f, 337.8501f, 104.5013f;
		case 23:
			return 527.7776f, -160.6609f, 56.13671f;
		case 24:
			return -57.17029f, -92.37918f, 56.75069f;
		case 25:
			return 285.3485f, 142.9751f, 103.1623f;
		case 26:
			return 357.1284f, 174.0836f, 102.0597f;
		case 27:
			return 89.81339f, 2.880329f, 67.35216f;
		case 28:
			return 1077.779f, -776.9664f, 57.25652f;
		case 29:
			return 1137.811f, -468.8625f, 65.69865f;
		case 30:
			return 1167.06f, -455.6541f, 65.81857f;
		case 31:
			return -165.5844f, 234.7659f, 93.92897f;
		case 32:
			return -165.5844f, 232.6955f, 93.92897f;
		case 33:
			return -1205.378f, -326.5286f, 36.85104f;
		case 34:
			return -1206.142f, -325.0316f, 36.85104f;
		case 35:
			return -846.6537f, -341.509f, 37.6685f;
		case 36:
			return -847.204f, -340.4291f, 37.6793f;
		case 37:
			return -720.6288f, -415.5243f, 33.97996f;
		case 38:
			return -867.013f, -187.9928f, 36.88218f;
		case 39:
			return -867.9745f, -186.3419f, 36.88218f;
		case 40:
			return -1415.48f, -212.3324f, 45.49542f;
		case 41:
			return -1430.663f, -211.3587f, 45.47162f;
		case 42:
			return -1410.736f, -98.92789f, 51.39701f;
		case 43:
			return -1410.183f, -100.6454f, 51.39652f;
		case 44:
			return -1282.098f, -210.5599f, 41.43031f;
		case 45:
			return -1286.704f, -213.7827f, 41.43031f;
		case 46:
			return -1289.742f, -227.165f, 41.43031f;
		case 47:
			return -1285.136f, -223.9422f, 41.43031f;
		case 48:
			return -1569.84f, -547.0309f, 33.93216f;
		case 49:
			return -1570.765f, -547.7035f, 33.93216f;
		case 50:
			return -1315.416f, -834.431f, 15.95233f;
		case 51:
			return -1314.466f, -835.6913f, 15.95233f;
		case 52:
			return -2071.928f, -317.2862f, 12.31808f;
		case 53:
			return -821.8936f, -1081.555f, 10.13664f;
		case 54:
			return -1110.228f, -1691.154f, 3.378483f;
		case 55:
			return -712.9357f, -818.4827f, 22.74066f;
		case 56:
			return -710.0828f, -818.4756f, 22.73634f;
		case 57:
			return -617.8035f, -708.8591f, 29.04321f;
		case 58:
			return -617.8035f, -706.8521f, 29.04321f;
		case 59:
			return 2564f, 2584.553f, 37.06807f;
		case 60:
			return -3241.455f, 997.9085f, 11.66582f;
		case 61:
			return -614.5187f, -705.5981f, 30.224f;
		case 62:
			return -611.8581f, -705.5981f, 30.224f;
		case 63:
			return -660.6763f, -854.4882f, 23.45663f;
		case 64:
			return -537.8052f, -854.9357f, 28.27543f;
		case 65:
			return -594.6144f, -1160.852f, 21.33351f;
		case 66:
			return -596.1251f, -1160.85f, 21.3336f;
		case 67:
			return -526.7791f, -1223.374f, 17.45272f;
		case 68:
			return 156.1886f, 6643.2f, 30.59372f;
		case 69:
			return 173.8246f, 6638.217f, 30.59372f;
		case 70:
			return -386.4596f, 6046.411f, 30.47399f;
		case 71:
			return -282.7141f, 6226.43f, 30.49648f;
		case 72:
			return -132.6663f, 6366.876f, 30.47258f;
		case 73:
			return -95.87029f, 6457.462f, 30.47394f;
		case 74:
			return -97.63721f, 6455.732f, 30.46793f;
		case 75:
			return 1687.395f, 4815.9f, 41.00647f;
		case 76:
			return 1700.694f, 6426.762f, 31.63297f;
		case 77:
			return 1822.971f, 3682.577f, 33.26745f;
		case 78:
			return 1171.523f, 2703.139f, 37.1477f;
		case 79:
			return 1172.457f, 2703.139f, 37.1477f;
		case 80:
			return -2956.848f, 487.2158f, 14.478f;
		case 81:
			return -2958.977f, 487.3071f, 14.478f;
		case 82:
			return -2974.586f, 380.1269f, 14.32212f;
		case 83:
			return -1091.887f, 2709.053f, 17.91941f;
		case 84:
			return -2295.853f, 357.9348f, 173.6014f;
		case 85:
			return -2295.069f, 356.2556f, 173.6014f;
		case 86:
			return -2294.3f, 354.6056f, 173.6014f;
		case 87:
			return -3043.835f, 594.1639f, 6.732796f;
		case 88:
			return -3144.887f, 1127.811f, 19.83804f;
		default:
	}
	return 158.7965f, 234.7452f, 105.6433f;
}

int func_4()//Position - 0x67515
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if ((!PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/) && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/)) && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
	{
		return 1;
	}
	return 0;
}

int func_5()//Position - 0x67B00
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(int iParam0)//Position - 0x72DC0
{
	switch (iParam0)
	{
		case 66:
		case 67:
		case 69:
		case 70:
		case 68:
			return 0;
			break;
		case 0:
		case 1:
		case 2:
			return 1;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 2;
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			return 3;
			break;
		case 12:
		case 13:
			return 4;
			break;
		case 71:
		case 72:
		case 74:
		case 75:
			return 5;
			break;
		case 73:
			return 6;
			break;
		case 14:
		case 15:
		case 16:
			return 7;
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 8;
			break;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 38:
		case 39:
			return 9;
			break;
		case 34:
			return 10;
			break;
		case 35:
			return 11;
			break;
		case 36:
			return 12;
			break;
		case 37:
			return 13;
			break;
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
			return 14;
			break;
		case 76:
		case 77:
		case 78:
		case 79:
		case 84:
		case 85:
			return 15;
			break;
		case 80:
		case 83:
			return 16;
			break;
		case 81:
			return 17;
			break;
		case 82:
			return 18;
			break;
		case 40:
		case 41:
		case 42:
			return 19;
			break;
		case 86:
		case 87:
		case 89:
		case 90:
			return 20;
			break;
		case 88:
			return 21;
			break;
		case 43:
			return 22;
			break;
		case 44:
			return 23;
			break;
		case 45:
			return 24;
			break;
		case 46:
		case 47:
		case 48:
		case 49:
			return 25;
			break;
		case 50:
		case 51:
		case 52:
			return 26;
			break;
		case 53:
			return 27;
			break;
		case 91:
		case 92:
		case 93:
			return 28;
			break;
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 29;
			break;
		case 59:
		case 60:
		case 61:
			return 30;
			break;
		case 62:
		case 63:
		case 64:
		case 65:
			return 31;
			break;
	}
	return -1;
}

int func_7(int iParam0)//Position - 0xF1A
{
	if (!__LIB_0__::func_43(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_8(bool bParam0, int iParam1)//Position - 0x67C07
{
	float fVar0;
	float fVar1;
	if (bParam0)
	{
		__LIB_3__::func_52(1, -1, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
		{
			if (Global_4539955 < 1f)
			{
				return 1;
			}
		}
	}
	else
	{
		__LIB_3__::func_52(0, -1, 1);
		if (*iParam1)
		{
			if (((Global_4539955 > (1f - 0.05f) || Global_4539955 < 0.05f) || Global_4539956 > (1f - 0.03f)) || Global_4539956 < 0.03f)
			{
				return 0;
			}
			else
			{
				*iParam1 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 0;
			}
		}
		if (Global_4539961 == -1 || Global_4539961 == -4)
		{
			if (Global_4539955 > (1f - (0.05f * 0.75f)))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(7);
				fVar0 = (0.05f - (1f - Global_4539955));
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 - (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4539955 < (0.05f * 0.75f))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(6);
				fVar0 = (0.05f - Global_4539955);
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 + (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4539956 > (1f - (0.03f * 0.75f)))
			{
			}
			else if (Global_4539956 < (0.03f * 0.75f))
			{
			}
		}
	}
	return 0;
}

bool func_9()//Position - 0x2247F
{
	return Global_113386.f_2363.f_539.f_2352;
}

int func_10()//Position - 0x23031
{
	if (DLC::IS_DLC_PRESENT(-65181770))
	{
		return 1;
	}
	return 0;
}

struct<16> func_11(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x2D641
{
	struct<16> Var0;
	StringCopy(&Var0, sParam1, 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, sParam3, 64);
	StringConCat(&Var0, sParam2, 64);
	return Var0;
}

int func_12(int iParam0)//Position - 0x2FA97
{
	switch (iParam0)
	{
		case 12:
			return joaat("A_C_Rabbit_01");
		case 109:
			return joaat("A_C_Boar");
		case 43:
			return joaat("A_C_Deer");
		case 35:
			return joaat("emperor2");
		case 17:
			return joaat("scorcher");
		case 28:
			return joaat("A_C_MtLion");
		case 49:
			return joaat("CS_Hunter");
		case 25:
			return joaat("A_M_Y_Hiker_01");
		case 14:
			return joaat("A_F_Y_Hippie_01");
		case 86:
			return joaat("A_M_M_Hillbilly_01");
		default:
	}
	return 0;
}

int func_13()//Position - 0x2FE00
{
	return joaat("IG_Orleans");
}

bool func_14()//Position - 0x30604
{
	return Global_110133 & 511 == 511;
}

void func_15(int iParam0)//Position - 0x894AC
{
	Global_113386.f_2363[iParam0 /*164*/][0] = 0;
	Global_113386.f_2363[iParam0 /*164*/][1] = 0;
	Global_113386.f_2363[iParam0 /*164*/][2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_4[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_8[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_12[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_16[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_20[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_24[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_28[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_32[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_36[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_40[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_44[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_48[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_52[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_56[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_60[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_64[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_68[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_72[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_76[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_80[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_84[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_88[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_92[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_96[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_100[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_104[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_108[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_112[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_116[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_120[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_124[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_128[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_132[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_136[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_140[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_144[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_148[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_152[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_156[2] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[0] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[1] = 0;
	Global_113386.f_2363[iParam0 /*164*/].f_160[2] = 0;
}

void func_16(int iParam0, struct<98> Param1)//Position - 0x84358
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (Param1.f_9)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, Param1.f_4);
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Param1.f_7, Param1.f_8);
	}
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Param1.f_2);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, Param1.f_3, 0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
		}
	}
	if (__LIB_17__::func_243(&uVar2, &iVar1) && Param1.f_97)
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar2);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar1);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param1.f_27)))
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Param1.f_26);
		}
	}
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Param1.f_84, Param1.f_85, Param1.f_86);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Param1.f_88);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Param1.f_87);
	VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Param1.f_93, Param1.f_94, Param1.f_95);
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Param1.f_92, 28));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Param1.f_92, 29));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Param1.f_92, 30));
	VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Param1.f_92, 31));
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Param1.f_89 >= 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Param1.f_89);
	}
	if (Param1.f_90 > -1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
			{
				if (Param1.f_90 == 6)
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_90);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_90);
			}
		}
	}
	__LIB_0__::func_372(iParam0, &(Param1.f_31), &(Param1.f_81));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Param1.f_96);
}

int func_17(int iParam0)//Position - 0x3592B
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || __LIB_17__::func_899(iParam0, 0, 0)) || __LIB_17__::func_899(iParam0, 1, 0)) || __LIB_17__::func_899(iParam0, 2, 0)) || __LIB_0__::func_119(iParam0) != 145) || __LIB_0__::func_118(iParam0)) || __LIB_0__::func_117(iParam0)) || __LIB_0__::func_108(iParam0)) || __LIB_0__::func_458(iParam0)) || !__LIB_0__::func_465(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_17__::func_899(iParam0, 0, 0))
		{
		}
		if (__LIB_17__::func_899(iParam0, 1, 0))
		{
		}
		if (__LIB_17__::func_899(iParam0, 2, 0))
		{
		}
		if (__LIB_0__::func_119(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_18(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x33C53
{
	int iVar0;
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (__LIB_32__::func_567(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

void func_19(bool bParam0)//Position - 0x89CD9
{
	__LIB_0__::func_184();
	if (!Global_113386.f_20564.f_232 && __LIB_0__::func_422(53))
	{
		Global_60328[0] = 4000;
		Global_113386.f_20564.f_233[0 /*69*/] = 0;
		Global_113386.f_20564.f_233[0 /*69*/].f_1 = 0;
		Global_60328[1] = 4000;
		Global_113386.f_20564.f_233[1 /*69*/] = 0;
		Global_113386.f_20564.f_233[1 /*69*/].f_1 = 0;
		Global_60328[2] = 4000;
		Global_113386.f_20564.f_233[2 /*69*/] = 0;
		Global_113386.f_20564.f_233[2 /*69*/].f_1 = 0;
		__LIB_0__::func_180(2);
		__LIB_0__::func_180(0);
		__LIB_0__::func_180(1);
		__LIB_14__::func_571(2, 1, 36, 22300, 0);
		__LIB_14__::func_571(2, 0, 13, 678, 0);
		__LIB_14__::func_571(2, 1, 36, 45200, 0);
		__LIB_14__::func_571(2, 0, 6, 200, 0);
		__LIB_14__::func_571(2, 0, 4, 12, 0);
		__LIB_14__::func_571(2, 0, 4, 14, 0);
		__LIB_14__::func_571(2, 0, 8, 280, 0);
		__LIB_14__::func_571(2, 1, 36, 30200, 0);
		__LIB_14__::func_571(2, 0, 13, 185, 0);
		__LIB_14__::func_571(1, 0, 5, 45, 0);
		__LIB_14__::func_571(1, 0, 10, 400, 0);
		__LIB_14__::func_571(1, 0, 11, 19, 0);
		__LIB_14__::func_571(1, 0, 7, 149, 0);
		__LIB_14__::func_571(1, 0, 4, 19, 0);
		__LIB_14__::func_571(0, 0, 4, 19, 0);
		__LIB_14__::func_571(0, 0, 7, 2313, 0);
		__LIB_14__::func_571(0, 0, 5, 20, 0);
		__LIB_14__::func_571(0, 0, 9, 5633, 0);
		__LIB_14__::func_571(0, 0, 12, 700, 0);
		STATS::STAT_SET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), 0, true);
		STATS::STAT_SET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), 0, true);
		Global_60328[2] = 10666;
		Global_60328[0] = 3085;
		Global_60328[1] = 1178;
		Global_113386.f_20564.f_232 = 1;
	}
	if (bParam0)
	{
		Global_60328[2] = 108654;
		Global_60328[0] = 7860;
		Global_60328[1] = 78;
	}
	__LIB_0__::func_180(2);
	__LIB_0__::func_180(0);
	__LIB_0__::func_180(1);
}

int func_20(float fParam0, float fParam1)//Position - 0x1AC17
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_63 == -1)
	{
		iLocal_63 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_63);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}

int func_21(var uParam0, float fParam1)//Position - 0x1B6B1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	Var0 = { Local_61 };
	Var1 = { Local_62 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13, false))
	{
		Local_61 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, true) };
		Var0 = { Local_61 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12, false))
	{
		Local_62 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, true) };
		Var1 = { Local_62 };
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, false);
	*fParam1 = (fVar4 / fVar3);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_22(int iParam0)//Position - 0x936F5
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return BitTest(Global_32338[iVar0 /*23*/].f_11, 19);
}

var func_23(int iParam0)//Position - 0x94728
{
	return Global_113386.f_7688.f_765[iParam0 /*10*/].f_7;
}

var func_24(int iParam0)//Position - 0x94740
{
	return Global_113386.f_7688.f_651[iParam0 /*14*/].f_7;
}

var func_25(int iParam0)//Position - 0x947C3
{
	return Global_113386.f_7688[iParam0 /*15*/].f_7;
}

int func_26(int iParam0)//Position - 0x98842
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("SLOT_UNARMED"):
			iVar0 = 0;
			break;
		case joaat("SLOT_KNIFE"):
			iVar0 = 1;
			break;
		case joaat("SLOT_NIGHTSTICK"):
			iVar0 = 2;
			break;
		case joaat("SLOT_HAMMER"):
			iVar0 = 3;
			break;
		case joaat("SLOT_BAT"):
			iVar0 = 4;
			break;
		case joaat("SLOT_CROWBAR"):
			iVar0 = 5;
			break;
		case joaat("SLOT_GOLFCLUB"):
			iVar0 = 6;
			break;
		case joaat("SLOT_STUNGUN"):
			iVar0 = 7;
			break;
		case joaat("SLOT_PISTOL"):
			iVar0 = 8;
			break;
		case joaat("SLOT_COMBATPISTOL"):
			iVar0 = 9;
			break;
		case joaat("SLOT_APPISTOL"):
			iVar0 = 10;
			break;
		case joaat("SLOT_MICROSMG"):
			iVar0 = 11;
			break;
		case joaat("SLOT_SMG"):
			iVar0 = 12;
			break;
		case joaat("SLOT_ASSAULTRIFLE"):
			iVar0 = 13;
			break;
		case joaat("SLOT_CARBINERIFLE"):
			iVar0 = 14;
			break;
		case joaat("SLOT_ADVANCEDRIFLE"):
			iVar0 = 15;
			break;
		case joaat("SLOT_MG"):
			iVar0 = 16;
			break;
		case joaat("SLOT_COMBATMG"):
			iVar0 = 17;
			break;
		case joaat("SLOT_PUMPSHOTGUN"):
			iVar0 = 18;
			break;
		case joaat("SLOT_SAWNOFFSHOTGUN"):
			iVar0 = 19;
			break;
		case joaat("SLOT_ASSAULTSHOTGUN"):
			iVar0 = 20;
			break;
		case joaat("SLOT_SNIPERRIFLE"):
			iVar0 = 21;
			break;
		case joaat("SLOT_HEAVYSNIPER"):
			iVar0 = 22;
			break;
		case joaat("SLOT_GRENADELAUNCHER"):
			iVar0 = 23;
			break;
		case joaat("SLOT_RPG"):
			iVar0 = 24;
			break;
		case joaat("SLOT_MINIGUN"):
			iVar0 = 25;
			break;
		case joaat("SLOT_GRENADE"):
			iVar0 = 26;
			break;
		case joaat("SLOT_STICKYBOMB"):
			iVar0 = 27;
			break;
		case joaat("SLOT_SMOKEGRENADE"):
			iVar0 = 28;
			break;
		case joaat("SLOT_MOLOTOV"):
			iVar0 = 29;
			break;
		case joaat("SLOT_FIREEXTINGUISHER"):
			iVar0 = 30;
			break;
		case joaat("SLOT_PETROLCAN"):
			iVar0 = 31;
			break;
		case joaat("SLOT_PARACHUTE"):
			iVar0 = 33;
			break;
		case joaat("SLOT_DIGISCANNER"):
			iVar0 = 34;
			break;
		case joaat("SLOT_OBJECT"):
			iVar0 = 35;
			break;
		case joaat("SLOT_ASSAULTSMG"):
			iVar0 = 36;
			break;
		case joaat("SLOT_BULLPUPSHOTGUN"):
			iVar0 = 37;
			break;
		case joaat("SLOT_PISTOL50"):
			iVar0 = 38;
			break;
	}
	return iVar0;
}

void func_27(int iParam0)//Position - 0xBC4B
{
	bool bVar0;
	bVar0 = __LIB_17__::func_104(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_113386.f_2363.f_539.f_2328[bVar0], false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
}

void func_28(bool bParam0)//Position - 0xA41
{
	if (__LIB_0__::func_374(bParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_509(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_29(int iParam0)//Position - 0x83CF
{
	int iVar0;
	iVar0 = __LIB_17__::func_104(iParam0);
	if (__LIB_0__::func_374(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_36__::func_13();
	}
}

void func_30(int iParam0)//Position - 0x224D2
{
	bool bVar0;
	bVar0 = __LIB_17__::func_104(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_17__::func_685(iParam0, bVar0);
		__LIB_38__::func_191(iParam0, bVar0);
	}
}

void func_31(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x81269
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	iVar0 = 0;
	iVar1 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				*uParam4 = 2;
			}
			else
			{
				iVar2 = __LIB_17__::func_104(iParam0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar2], false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100144[iVar2], -1, false))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
						Var4 = { ENTITY::GET_ENTITY_COORDS(Global_100144[iVar2], true) };
						if (ENTITY::GET_ENTITY_MODEL(Global_100144[iVar2]) == joaat("luxor2"))
						{
							if (SYSTEM::VDIST(Var3, Var4) < 10f)
							{
								*uParam4 = 2;
								iVar1 = Global_100144[iVar2];
								iVar0 = 1;
							}
						}
					}
				}
			}
		}
	}
	__LIB_38__::func_192(iParam0, iVar1, uParam1, uParam2, uParam3, uParam4, uParam5, iVar0);
}

int func_32(int iParam0, int iParam1)//Position - 0x94CC3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_0__::func_684();
	if ((iParam0 >= iVar0 || iParam1 >= iVar0) || iParam0 == iParam1)
	{
		return 0;
	}
	if (!__LIB_0__::func_540(6))
	{
		iVar1 = __LIB_14__::func_791(iParam0);
		iVar2 = __LIB_14__::func_791(iParam1);
		if (iVar1 != 7 && iVar2 != 7)
		{
			iVar3 = __LIB_13__::func_95(iVar1, iVar2);
			if (iVar3 != 10)
			{
				iVar4 = __LIB_17__::func_222(iVar3);
				if (iVar4 == 3 || iVar4 == 4)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_33(int iParam0)//Position - 0x9A6C4
{
	return __LIB_0__::func_431(iParam0, 4, 0);
}

int func_34(var uParam0, var uParam1, var uParam2)//Position - 0x8AA58
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	var uVar6;
	if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
	{
		iVar0 = __LIB_0__::func_484(uParam0->f_61);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
		{
		}
		else
		{
			Var1 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
			iVar2 = Global_113386.f_2363.f_539.f_2296[iVar0];
			if (__LIB_17__::func_689(Var1, &Var3, &uVar4, &uVar5))
			{
				*uParam1 = { Var3 };
				*uParam2 = uVar4;
				return 1;
			}
			if (__LIB_3__::func_423(iVar2))
			{
				switch (__LIB_38__::func_554(iVar0, iVar2, &uVar6))
				{
					case 0:
						return 0;
						break;
					case 1:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_17, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_17 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_26;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/], 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/] };
							*uParam2 = Global_97831[iVar0 /*29*/].f_9;
							return 1;
						}
						break;
					case 2:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_20, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_20 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_27;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_3, 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/].f_3 };
							*uParam2 = Global_97831[iVar0 /*29*/].f_10;
							return 1;
						}
						break;
					case 3:
						if (Global_100140[iVar0] == 0 || Global_100140[iVar0] == 1)
						{
							if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_23, 0f, 0f, 0f, 1.5f, 0))
							{
								*uParam1 = { Global_97831[iVar0 /*29*/].f_23 };
								*uParam2 = Global_97831[iVar0 /*29*/].f_28;
								return 1;
							}
						}
						else if (!__LIB_0__::func_490(Global_97831[iVar0 /*29*/].f_6, 0f, 0f, 0f, 1.5f, 0))
						{
							*uParam1 = { Global_97831[iVar0 /*29*/].f_6 };
							*uParam2 = Global_97831[iVar0 /*29*/].f_11;
							return 1;
						}
						break;
					default:
						break;
				}
				return 0;
			}
		}
	}
	return 0;
}

int func_35(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x1B7A3
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	iVar0 = uParam3;
	if (!uParam0->f_16)
	{
		if (STREAMING::IS_SAFE_TO_START_PLAYER_SWITCH())
		{
			if (!bParam10)
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_13) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_27 = 0;
				Global_97360 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
						__LIB_15__::func_890(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, true);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, true);
				}
				uParam0->f_21 = __LIB_1__::func_861();
				__LIB_0__::func_671(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					iVar0 |= 2;
				}
				if (__LIB_0__::func_629())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_13, uParam0->f_12, iVar0, iParam2);
					if (bParam11)
					{
						STREAMING::SET_PLAYER_SHORT_SWITCH_STYLE(iParam12);
					}
					switch (__LIB_17__::func_104(uParam0->f_13))
					{
						case 0:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 1:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDMichaelOut");
							break;
						case 2:
							GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchHUDOut");
				}
				else if (STREAMING::IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED())
				{
					STREAMING::SWITCH_TO_MULTI_SECONDPART(uParam0->f_12);
					__LIB_0__::func_986(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::SET_PLAYER_SWITCH_ESTABLISHING_SHOT(sParam8);
				}
				if (!Global_23011.f_111)
				{
					AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, false, 0, true);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_13, true), ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true)) == 3)
					{
						AUDIO::PLAY_SOUND(-1, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", false, 0, true);
					}
					if (Global_23011.f_109 == -1)
					{
						Global_23011.f_109 = AUDIO::GET_SOUND_ID();
					}
					Global_23011.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_23011.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, false, 0, true);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_23011.f_109);
					AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
					Global_23011.f_109 = -1;
					Global_23011.f_110 = 0;
				}
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				__LIB_7__::func_703(1);
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(true, uParam0->f_13);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_509(0))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_10(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_509(2))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_10(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_16__::func_509(1))
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_10(1));
					}
					else
					{
						GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
					}
					GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
				}
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_23011.f_111)
			{
			}
			if (__LIB_0__::func_703(uParam3, 512))
			{
				if (!STREAMING::IS_SWITCH_READY_FOR_DESCENT())
				{
				}
				else if (Global_100164 == 0)
				{
					STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				switch (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE())
				{
					case 0:
						break;
					case 1:
						break;
					}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_18)
					{
						__LIB_13__::func_788();
						uParam0->f_18 = 1;
					}
					if (!uParam0->f_22)
					{
						__LIB_24__::func_404(0, 1);
						uParam0->f_22 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_18)
					{
						__LIB_13__::func_788();
						uParam0->f_18 = 1;
					}
				}
				if (!uParam0->f_18)
				{
					if (STREAMING::IS_SWITCH_SKIPPING_DESCENT() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						fVar4 = 20f;
						fVar5 = SYSTEM::VDIST2(Var2, Var3);
						if (fVar5 < (fVar4 * fVar4))
						{
							__LIB_13__::func_788();
							uParam0->f_18 = 1;
						}
					}
				}
				if (!uParam0->f_22)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						__LIB_24__::func_404(0, 1);
						uParam0->f_22 = 1;
					}
				}
				if (!uParam0->f_23)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE("CSM_ST_BOX3x3");
						uParam0->f_23 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_18)
			{
				uParam0->f_18 = 1;
				__LIB_13__::func_788();
			}
			if (!uParam0->f_22)
			{
				__LIB_24__::func_404(0, 1);
				uParam0->f_22 = 1;
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		iVar6 = __LIB_15__::func_931();
		if (((iVar6 != 8 && iVar6 != 9) && iVar6 != 10) && iVar6 != 55)
		{
			__LIB_0__::func_671(uParam0->f_21);
		}
		if (uParam0->f_23)
		{
			GRAPHICS::CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE();
			uParam0->f_23 = 0;
		}
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
			Global_23011.f_109 = -1;
			Global_23011.f_110 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_23011.f_107 != -1 && Global_23011.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_107);
			Global_23011.f_107 = -1;
			Global_23011.f_108 = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
		}
		if (!Global_44203)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, true, false);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_13, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_13, false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, true, false);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_13))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_13, false);
					__LIB_15__::func_890(iVar7, 1);
				}
			}
		}
		__LIB_0__::func_986(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_13) || bParam10)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, false);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_15__::func_888();
			GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(__LIB_16__::func_10(__LIB_17__::func_338()));
		}
		__LIB_7__::func_703(0);
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(false, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_36(int iParam0, int iParam1)//Position - 0xE07
{
	struct<3> Var0;
	float fVar1;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (__LIB_0__::func_39(14))
		{
			return 0;
		}
		if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
		{
			return 0;
		}
		if (!__LIB_37__::func_48(iParam0, __LIB_14__::func_792()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
			if (fVar1 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == __LIB_1__::func_601(Global_100162) && iParam1 != 0)
		{
			Global_100162 = 0;
		}
	}
	return 1;
}

int func_37(int iParam0)//Position - 0x4F9C
{
	if (iParam0 == 0)
	{
		return joaat("TEXT_FRIEND_GRIEF_MICHAEL");
	}
	else if (iParam0 == 1)
	{
		return joaat("TEXT_FRIEND_GRIEF_FRANKLIN");
	}
	else if (iParam0 == 2)
	{
		return joaat("TEXT_FRIEND_GRIEF_TREVOR");
	}
	else if (iParam0 == 3)
	{
		return joaat("TEXT_FRIEND_GRIEF_LAMAR");
	}
	else if (iParam0 == 4)
	{
		return joaat("TEXT_FRIEND_GRIEF_JIMMY");
	}
	else if (iParam0 == 5)
	{
		return joaat("TEXT_FRIEND_GRIEF_AMANDA");
	}
	return -1;
}

void func_38(var uParam0, int iParam1)//Position - 0x5EC0
{
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 20, true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, 16);
	if (iParam1 != joaat("NO_RELATIONSHIP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iParam1);
	}
}

int func_39(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1BD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	iVar0 = 3;
	iVar1 = __LIB_14__::func_791(bParam1);
	iVar2 = __LIB_17__::func_259(iParam0);
	iVar3 = 10000;
	if (iParam3 == 0)
	{
		if (__LIB_36__::func_23(iVar1, iParam2, -1, &iVar4, &iVar5))
		{
			if (iParam5 == -1)
			{
				return 0;
			}
			iVar6 = 0;
			if (((((iParam5 == joaat("TEXT_FRIEND_GRIEF_MICHAEL") || iParam5 == joaat("TEXT_FRIEND_GRIEF_FRANKLIN")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_TREVOR")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_LAMAR")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_JIMMY")) || iParam5 == joaat("TEXT_FRIEND_GRIEF_AMANDA"))
			{
				iVar6 = 262144;
			}
			iVar7 = -1;
			if (iParam5 == joaat("TEXT_FRIEND_GRIEF_MICHAEL"))
			{
				iVar7 = 24;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_FRANKLIN"))
			{
				iVar7 = 25;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_TREVOR"))
			{
				iVar7 = 26;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_LAMAR"))
			{
				iVar7 = 27;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_JIMMY"))
			{
				iVar7 = 28;
			}
			else if (iParam5 == joaat("TEXT_FRIEND_GRIEF_AMANDA"))
			{
				iVar7 = 29;
			}
			if (__LIB_17__::func_268(iParam5, iVar4, iVar5, iVar0, iVar2, bParam1, iVar3, 10000, iParam6, iParam4, iVar7, iVar6, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	else if (__LIB_30__::func_377(iVar1, iParam2, -1, &sVar8))
	{
		if (__LIB_30__::func_385(bParam1, &sVar8, 1, 0, 0, 0, 0, 1, 0, 1))
		{
			if (iParam4 != 0)
			{
				switch (iParam4)
				{
					case 202:
						__LIB_30__::func_389();
						break;
					case 203:
						__LIB_30__::func_388();
						break;
					case 204:
						__LIB_30__::func_387();
						break;
					case 205:
						__LIB_30__::func_386();
						break;
					case 206:
						__LIB_30__::func_390();
						break;
					}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_40(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0xFB4
{
	StringCopy(sParam0, sParam3, 64);
	StringCopy(sParam1, sParam4, 64);
	StringCopy(sParam2, sParam5, 64);
}

int func_41()//Position - 0x303
{
	if (!__LIB_17__::func_677())
	{
		return 1;
	}
	return 0;
}

void func_42()//Position - 0x10D
{
	iLocal_67 = 0;
}

void func_43(int* iParam0, float fParam1)//Position - 0x1B2
{
	iParam0->f_1 = (__LIB_0__::func_616(BitTest(*iParam0, 4)) + fParam1);
	MISC::SET_BIT(iParam0, 1);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_44(int iParam0, int iParam1)//Position - 0x7563E
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_721(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_45(int iParam0)//Position - 0x6FE6A
{
	if (__LIB_0__::func_43(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(int iParam0)//Position - 0x6FE93
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_47(int iParam0)//Position - 0x75665
{
	if (__LIB_0__::func_43(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_154(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

void func_48()//Position - 0x132
{
	iLocal_232 = 0;
}

int func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)//Position - 0x25049
{
	switch (iParam0)
	{
		case 34:
			*uParam1 = 0;
			*uParam2 = 4;
			*uParam3 = 12;
			*uParam4 = 18;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 35:
			*uParam1 = 0;
			*uParam2 = 2;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 36:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 37:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 13;
			*uParam4 = 20;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 38:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 14;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 39:
			*uParam1 = 0;
			*uParam2 = 5;
			*uParam3 = 7;
			*uParam4 = 16;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 4);
			return 1;
			break;
		case 40:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 15;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 41:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 19;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 26;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 42:
			*uParam1 = 0;
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 17;
			*uParam5 = 23;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 43:
			*uParam1 = 0;
			*uParam2 = 3;
			*uParam3 = 10;
			*uParam4 = 16;
			*uParam5 = 21;
			*uParam6 = 24;
			*uParam7 = 25;
			*uParam8 = 29;
			*uParam9 = 30;
			*uParam10 = 31;
			*uParam11 = 32;
			*uParam12 = 33;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 79:
			*uParam1 = 44;
			*uParam2 = 53;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 80:
			*uParam1 = 44;
			*uParam2 = 47;
			*uParam3 = 54;
			*uParam4 = 63;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 81:
			*uParam1 = 44;
			*uParam2 = 48;
			*uParam3 = 55;
			*uParam4 = 64;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 82:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 2);
			return 1;
			break;
		case 83:
			*uParam1 = 45;
			*uParam2 = 52;
			*uParam3 = 60;
			*uParam4 = 69;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 84:
			*uParam1 = 46;
			*uParam2 = 51;
			*uParam3 = 62;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 4);
			return 1;
			break;
		case 85:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 58;
			*uParam4 = 67;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 86:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 56;
			*uParam4 = 65;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 87:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 61;
			*uParam4 = 70;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 2);
			return 1;
			break;
		case 88:
			*uParam1 = 44;
			*uParam2 = 49;
			*uParam3 = 57;
			*uParam4 = 66;
			*uParam5 = 71;
			*uParam6 = 72;
			*uParam7 = 73;
			*uParam8 = 74;
			*uParam9 = 75;
			*uParam10 = 76;
			*uParam11 = 77;
			*uParam12 = 78;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 131:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 111;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 132:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 102;
			*uParam4 = 110;
			*uParam5 = 115;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 123;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 133:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 97;
			*uParam4 = 105;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 122;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 134:
			*uParam1 = 89;
			*uParam2 = 90;
			*uParam3 = 96;
			*uParam4 = 104;
			*uParam5 = 114;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 121;
			*uParam10 = 127;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 135:
			*uParam1 = 89;
			*uParam2 = 95;
			*uParam3 = 101;
			*uParam4 = 108;
			*uParam5 = 116;
			*uParam6 = 118;
			*uParam7 = 119;
			*uParam8 = 120;
			*uParam9 = 126;
			*uParam10 = 128;
			*uParam11 = 129;
			*uParam12 = 130;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 158:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 151;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 159:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 138;
			*uParam4 = 142;
			*uParam5 = 146;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 160:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 141;
			*uParam4 = 145;
			*uParam5 = 147;
			*uParam6 = 150;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
		case 161:
			*uParam1 = 136;
			*uParam2 = 137;
			*uParam3 = 140;
			*uParam4 = 144;
			*uParam5 = 147;
			*uParam6 = 148;
			*uParam7 = 152;
			*uParam8 = 153;
			*uParam9 = 154;
			*uParam10 = 155;
			*uParam11 = 156;
			*uParam12 = 157;
			__LIB_0__::func_989(uParam13, 1);
			return 1;
			break;
	}
	return 0;
}

void func_50()//Position - 0x10E
{
	iLocal_257 = 0;
}

Vector3 func_51(struct<3> Param0, float fParam1, float fParam2)//Position - 0x872
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = (fParam1 * fParam1);
	iVar3 = 0;
	while (iVar3 < 10)
	{
		Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1), 0f };
		if (((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) <= fVar1)
		{
			fVar2 = (fParam2 / 2f);
			Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar2, fVar2);
			return Param0 + Var0;
		}
		iVar3++;
	}
	return __LIB_14__::func_834(Param0, fParam1, fParam2);
}

int func_52(int iParam0, int iParam1)//Position - 0x531F
{
	struct<10> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_732(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Var0.f_6 != 144)
	{
		if (Global_43604[Var0.f_6] > iParam1)
		{
			return 3;
		}
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_53(int iParam0, int iParam1)//Position - 0x541C
{
	struct<14> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_733(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 6;
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_54(int iParam0, int iParam1)//Position - 0x54F7
{
	struct<15> Var0;
	bool bVar1;
	Var0 = { __LIB_37__::func_734(iParam0) };
	if (Var0.f_0 != iParam0)
	{
		return 6;
	}
	if (!__LIB_0__::func_43(__LIB_0__::func_683()))
	{
		return 1;
	}
	if (Global_43599 != -1)
	{
		if (Global_113386.f_7688[Global_43599 /*15*/] == iParam0)
		{
			return 0;
		}
	}
	bVar1 = false;
	if (BitTest(Var0.f_2, __LIB_0__::func_683()))
	{
		bVar1 = true;
	}
	if (Var0.f_4 > iParam1)
	{
		return 4;
	}
	if (bVar1)
	{
		if (Var0.f_3 < Global_113386.f_7688.f_919[__LIB_0__::func_683()])
		{
			return 5;
		}
	}
	if (Global_43604[Var0.f_6] > iParam1)
	{
		return 3;
	}
	if (Global_43603 > iParam1)
	{
		return 2;
	}
	return 1;
}

int func_55(char* sParam0, char* sParam1, var uParam2, int iParam3, var uParam4, char* sParam5)//Position - 0x1105
{
	char* sVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (__LIB_17__::func_318(sParam0, 7))
	{
		sVar0 = "";
		switch (__LIB_0__::func_683())
		{
			case 0:
				sVar0 = "MICHAEL";
				break;
			case 1:
				sVar0 = "FRANKLIN";
				break;
			case 2:
				sVar0 = "TREVOR";
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			__LIB_0__::func_222(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (__LIB_0__::func_787(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				iVar1 = (*uParam4 - 1);
				while (iVar1 > 0)
				{
					*(uParam4[iVar1 /*4*/]) = { *(uParam4[(iVar1 - 1) /*4*/]) };
					iVar1 = (iVar1 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_222(uParam2, 0, PLAYER::PLAYER_PED_ID(), sVar0, 0, 1);
			if (__LIB_0__::func_787(uParam2, sParam0, sParam1, iParam3, 0, 0, 0))
			{
				__LIB_0__::func_620(1);
				iVar2 = (*uParam4 - 1);
				while (iVar2 > 0)
				{
					*(uParam4[iVar2 /*4*/]) = { *(uParam4[(iVar2 - 1) /*4*/]) };
					iVar2 = (iVar2 - 1);
				}
				StringCopy(uParam4[0 /*4*/], sParam1, 16);
				return 1;
			}
		}
	}
	return 0;
}

int func_56()//Position - 0x1DC7
{
	int iVar0;
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2))
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !__LIB_0__::func_217())
		{
			return 1;
		}
	}
	if (__LIB_0__::func_194(8, -1))
	{
		return 1;
	}
	if (Global_2703735.f_60)
	{
		return 1;
	}
	if (Global_97919.f_44 == 1)
	{
		if (Global_97919.f_46 == 0)
		{
			return 1;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(int iParam0, char* sParam1, char* sParam2, var uParam3)//Position - 0x2B2E
{
	*uParam3 = 0;
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_WEEDBOTTLE", 64);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_Lap_Top", 64);
			return 1;
			break;
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CHAIR", 64);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "exit_table", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CHAIR_01", 64);
			StringCopy(sParam2, "RONEX_IG5_P2_CHAIR_02", 64);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CHAIR", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_$", 64);
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CASH", 64);
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_GUITAR", 64);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_rasp", 64);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_doll", 64);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "Pineapple_EXIT_PINEAPPLE", 64);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_Foot", 64);
			return 1;
			break;
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CIG", 64);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "EXIT_Taco", 64);
			return 1;
			break;
		case 198:
			StringCopy(sParam1, "Garbage_Toss_BAG", 64);
			*uParam3 = 1;
			return 1;
			break;
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CUP", 64);
			return 1;
			break;
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CUP", 64);
			return 1;
			break;
		case 236:
			StringCopy(sParam1, "EXIT_Beer", 64);
			return 1;
			break;
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_PROP", 64);
			return 1;
			break;
		case 80:
			StringCopy(sParam1, "EXIT_FORWARD_CHAIR", 64);
			return 1;
			break;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x7A71
{
	if (!Global_113386.f_9085.f_99.f_58[137])
	{
		if (iParam0 == joaat("Player_Zero"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 169 || (iParam2 >= 171 && iParam2 <= 173))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if (((iParam2 >= 47 && iParam2 <= 54) || (iParam2 >= 72 && iParam2 <= 79)) || (iParam2 >= 89 && iParam2 <= 91))
				{
					return 1;
				}
			}
			else if (iParam1 == 11)
			{
				if (iParam2 == 44)
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("Player_One"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 260)
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((iParam2 >= 14 && iParam2 <= 21) || (iParam2 >= 72 && iParam2 <= 77))
				{
					return 1;
				}
			}
		}
		else if (iParam0 == joaat("Player_Two"))
		{
			if (iParam1 == 3)
			{
				if (iParam2 == 96 || (iParam2 >= 71 && iParam2 <= 75))
				{
					return 1;
				}
			}
			else if (iParam1 == 4)
			{
				if ((((iParam2 >= 18 && iParam2 <= 29) || (iParam2 >= 81 && iParam2 <= 90)) || (iParam2 >= 94 && iParam2 <= 103)) || iParam2 == 33)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA503
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam2 == 10 || iParam2 == 16)
			{
				if (iParam1 != -99)
				{
					if (((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 38 && iParam1 <= 43)) || (iParam1 >= 113 && iParam1 <= 128)) || (iParam1 >= 129 && iParam1 <= 134)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 151 && iParam1 <= 160)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176)) || (iParam1 >= 177 && iParam1 <= 180))
					{
						return 0;
					}
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam2 == 0)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((((((iParam1 >= 57 && iParam1 <= 72) || (iParam1 >= 73 && iParam1 <= 88)) || (iParam1 >= 91 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 122)) || (iParam1 >= 123 && iParam1 <= 138)) || (iParam1 >= 139 && iParam1 <= 146)) || iParam1 == 159) || (iParam1 >= 160 && iParam1 <= 175)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 209 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 226)) || (iParam1 >= 227 && iParam1 <= 242)) || (iParam1 >= 243 && iParam1 <= 258)) || (iParam1 >= 261 && iParam1 <= 266)) || (iParam1 >= 267 && iParam1 <= 282)) || (iParam1 >= 296 && iParam1 <= 308))
					{
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 != 0)
					{
						return 0;
					}
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam2 == 0 || iParam2 == 1)
			{
				if (iParam1 != -99)
				{
					if ((((((((((((iParam1 >= 27 && iParam1 <= 42) || (iParam1 >= 79 && iParam1 <= 94)) || (iParam1 >= 98 && iParam1 <= 103)) || (iParam1 == 136 && iParam1 <= 143)) || (iParam1 >= 144 && iParam1 <= 154)) || (iParam1 >= 156 && iParam1 <= 161)) || (iParam1 >= 178 && iParam1 <= 189)) || (iParam1 >= 190 && iParam1 <= 199)) || (iParam1 >= 200 && iParam1 <= 206)) || (iParam1 >= 207 && iParam1 <= 222)) || (iParam1 >= 223 && iParam1 <= 232)) || (iParam1 >= 233 && iParam1 <= 240))
					{
						return 0;
					}
				}
			}
			break;
	}
	return 1;
}

int func_60(int iParam0, int iParam1, int iParam2)//Position - 0xAC4C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 0 && iParam2 <= 15)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				if (iVar1 == 1)
				{
					if (((iParam1 >= 85 && iParam1 <= 90) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 92 && iParam1 <= 96))
					{
						return 1;
					}
				}
				return 0;
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 >= 190 && iParam1 <= 199)
			{
				iVar0 = 1;
			}
			if (iParam2 >= 71 && iParam2 <= 80)
			{
				iVar1 = 1;
			}
			if (iVar0 != iVar1)
			{
				return 0;
			}
			if (iParam1 >= 71 && iParam1 <= 75)
			{
				if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
				{
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 92)
			{
				if (iParam1 == 241 || (iParam1 >= 200 && iParam1 <= 206))
				{
				}
				else
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_61(int iParam0, int iParam1, int iParam2)//Position - 0xAD8D
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				if (((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 77 && iParam1 <= 84)) || (iParam1 >= 135 && iParam1 <= 150)) || (iParam1 >= 161 && iParam1 <= 168)) || (iParam1 >= 175 && iParam1 <= 176))
				{
					return 0;
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam1 >= 192 && iParam1 <= 207)
			{
				if (((((iParam2 >= 40 && iParam2 <= 51) || iParam2 == 52) || (iParam2 >= 72 && iParam2 <= 77)) || (iParam2 >= 88 && iParam2 <= 96)) || (iParam2 >= 97 && iParam2 <= 110))
				{
					return 0;
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 96)
			{
				if ((iParam2 >= 62 && iParam2 <= 70) || iParam2 == 92)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

void func_62(float fParam0)//Position - 0x3202C
{
	if (!Global_44203)
	{
		return;
	}
	Global_44209 = fParam0;
}

void func_63(float fParam0)//Position - 0x32043
{
	if (!Global_44203)
	{
		return;
	}
	if (fParam0 < 0f || fParam0 > 5f)
	{
		return;
	}
	Global_44207 = fParam0;
}

void func_64(int iParam0)//Position - 0x3F33E
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		Global_22616 = iParam0;
		Global_22617 = 1;
	}
}

int func_65()//Position - 0x3F356
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		if (Global_22616 == 1)
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

void func_66(bool bParam0)//Position - 0x9BA70
{
	if (bParam0)
	{
		if (Global_20266.f_1 == 9)
		{
			Global_20464 = 1;
		}
	}
	else
	{
		Global_20464 = 0;
	}
}

void func_67()//Position - 0xAC730
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 < 1)
		{
			Global_96903[iVar0] = Global_96903[iVar0 + 1];
		}
		else
		{
			Global_96903[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

int func_68(bool bParam0)//Position - 0x38926
{
	if (bParam0 == 145)
	{
		return 7;
	}
	if (bParam0 < __LIB_0__::func_684())
	{
		return __LIB_13__::func_96(bParam0);
	}
	if (bParam0 == 144)
	{
		return 7;
	}
	if (bParam0 == __LIB_0__::func_684())
	{
		return 6;
	}
	if (bParam0 == 188)
	{
		return 6;
	}
	return 6;
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0x31D4B
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (__LIB_4__::func_961(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = __LIB_0__::func_760();
	if (iVar0 == -1)
	{
		return;
	}
	Global_44105[iVar0 /*6*/] = iParam0;
	Global_44105[iVar0 /*6*/].f_1 = iParam1;
	Global_44105[iVar0 /*6*/].f_2 = iParam2;
	Global_44105[iVar0 /*6*/].f_3 = iParam3;
	Global_44105[iVar0 /*6*/].f_4 = uParam4;
	Global_44105[iVar0 /*6*/].f_5 = iParam5;
}

void func_70(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x528BA
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_25__::func_653(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_33__::func_612(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_33__::func_611(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
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

bool func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3F37B
{
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return __LIB_37__::func_687(sParam2, iParam3, 0);
}

bool func_72(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x3EC07
{
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam5 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return __LIB_37__::func_687(sParam3, iParam4, bParam8);
}

Vector3 func_73(int iParam0)//Position - 0x226
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
			break;
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
			break;
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
			break;
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
			break;
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
			break;
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
			break;
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
			break;
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
			break;
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
			break;
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
			break;
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
			break;
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
			break;
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
			break;
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_74(int iParam0, int iParam1)//Position - 0x1CC9
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

float func_75(int iParam0, int iParam1)//Position - 0x536D
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				case 1:
					return 177.9306f;
					break;
				case 2:
					return 49.6978f;
					break;
				case 3:
					return 336.9449f;
					break;
				case 4:
					return 80.1639f;
					break;
				case 5:
					return 287.983f;
					break;
				case 6:
					return 46.7895f;
					break;
			}
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				case 8:
					return 256.7899f;
					break;
				case 9:
					return 180.9647f;
					break;
				case 10:
					return 126.4385f;
					break;
				case 11:
					return 123.4767f;
					break;
				case 12:
					return 226.219f;
					break;
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

int func_76()//Position - 0x5811
{
	return Global_112096.f_20;
}

int func_77(int iParam0, int iParam1)//Position - 0x5837
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
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
			}
			break;
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				case 1:
					return 10;
					break;
				case 2:
					return 11;
					break;
				case 3:
					return 12;
					break;
				case 4:
					return 13;
					break;
			}
			break;
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x9E56
{
	Global_112096.f_22 = iParam0;
}

void func_79(var uParam0, int iParam1, int iParam2)//Position - 0x2833
{
	switch (iParam1)
	{
		case 11:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -543.6415f, 303.5388f, 82.0202f };
					uParam0->f_3 = 231.5559f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -563.5045f, 303.3635f, 82.192f };
					uParam0->f_3 = 191.6703f;
					uParam0->f_4 = { -561.9358f, 293.7914f, 84.1827f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { -547.9926f, 299.531f, 82.0218f };
					uParam0->f_3 = 170.2791f;
					uParam0->f_4 = { -550.0999f, 292.7203f, 87.8903f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -551.7525f, 301.2135f, 82.1226f };
					uParam0->f_3 = 132.7229f;
					uParam0->f_4 = { -561.2323f, 294.0457f, 87.6588f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 4:
					*uParam0 = { -549.7384f, 303.0894f, 82.0981f };
					uParam0->f_3 = 167.5811f;
					uParam0->f_4 = { -552.8337f, 292.7388f, 88.2295f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { -558.4697f, 303.0401f, 82.2333f };
					uParam0->f_3 = 161.0839f;
					uParam0->f_4 = { -561.9985f, 293.9765f, 87.8096f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { 231.2834f, 345.2137f, 104.3893f };
					uParam0->f_3 = 324.6404f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { 236.5094f, 339.3164f, 104.5298f };
					uParam0->f_3 = 112.7911f;
					uParam0->f_4 = { 230.1282f, 337.069f, 106.8048f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 2:
					*uParam0 = { 224.3295f, 348.2992f, 104.4469f };
					uParam0->f_3 = 165.7146f;
					uParam0->f_4 = { 221.6486f, 340.3152f, 106.6212f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { 234.1038f, 341.6698f, 104.5309f };
					uParam0->f_3 = 110.0142f;
					uParam0->f_4 = { 223.9347f, 338.3914f, 106.8137f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 4:
					*uParam0 = { 228.9968f, 344.3681f, 104.5384f };
					uParam0->f_3 = 153.6073f;
					uParam0->f_4 = { 224.4416f, 336.0886f, 106.1191f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 5:
					*uParam0 = { 221.382f, 346.3744f, 104.5675f };
					uParam0->f_3 = 165.8422f;
					uParam0->f_4 = { 219.6116f, 340.9911f, 106.4532f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
			}
			break;
		case 13:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -325.1079f, 6263.8325f, 30.4151f };
					uParam0->f_3 = 195.9702f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_SAWNOFFSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -312.9843f, 6250.1147f, 30.4899f };
					uParam0->f_3 = 319.1074f;
					uParam0->f_4 = { -308.3476f, 6254.857f, 32.6941f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -326.1756f, 6268.3384f, 30.4714f };
					uParam0->f_3 = 261.9836f;
					uParam0->f_4 = { -312.8552f, 6265.857f, 43.5835f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 3:
					*uParam0 = { -323.9344f, 6259.6587f, 30.3539f };
					uParam0->f_3 = 292.4941f;
					uParam0->f_4 = { -313.3472f, 6263.3945f, 42.7414f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -318.7812f, 6259.576f, 30.5161f };
					uParam0->f_3 = 295.0701f;
					uParam0->f_4 = { -313.766f, 6261.479f, 32.6516f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -314.925f, 6255.542f, 30.5164f };
					uParam0->f_3 = 309.7791f;
					uParam0->f_4 = { -310.572f, 6258.45f, 32.6648f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
			}
			break;
		case 14:
			switch (iParam2)
			{
				case 0:
					*uParam0 = { -2215.3203f, 4275.0464f, 46.475f };
					uParam0->f_3 = 16.955f;
					uParam0->f_4 = { 0f, 0f, 0f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 1:
					*uParam0 = { -2195.425f, 4262.31f, 47.2741f };
					uParam0->f_3 = 241.4366f;
					uParam0->f_4 = { -2185.362f, 4256.3765f, 48.4082f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 1;
					uParam0->f_9 = 0;
					break;
				case 2:
					*uParam0 = { -2200.848f, 4268.1904f, 47.3093f };
					uParam0->f_3 = 331.1949f;
					uParam0->f_4 = { -2196.5752f, 4275.1294f, 49.0669f };
					uParam0->f_7 = joaat("WEAPON_ASSAULTRIFLE");
					uParam0->f_8 = -1;
					uParam0->f_9 = -2;
					break;
				case 3:
					*uParam0 = { -2202.8179f, 4294.1494f, 47.4518f };
					uParam0->f_3 = 263.7257f;
					uParam0->f_4 = { -2192.7834f, 4289.572f, 50.3251f };
					uParam0->f_7 = joaat("WEAPON_MOLOTOV");
					uParam0->f_8 = 0;
					uParam0->f_9 = 0;
					break;
				case 4:
					*uParam0 = { -2196.2708f, 4265.0645f, 47.3446f };
					uParam0->f_3 = 325.4524f;
					uParam0->f_4 = { -2191.1833f, 4271.747f, 49.867f };
					uParam0->f_7 = joaat("WEAPON_PUMPSHOTGUN");
					uParam0->f_8 = 1;
					uParam0->f_9 = -1;
					break;
				case 5:
					*uParam0 = { -2204.4917f, 4290.0586f, 47.3773f };
					uParam0->f_3 = 269.5739f;
					uParam0->f_4 = { -2193.0168f, 4292.6694f, 54.873f };
					uParam0->f_7 = joaat("WEAPON_MICROSMG");
					uParam0->f_8 = 0;
					uParam0->f_9 = -1;
					break;
			}
			break;
	}
}

void func_80(int iParam0, struct<3> Param1)//Position - 0x164A
{
	int iVar0;
	int iVar1;
	int iVar2;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
	if (!__LIB_0__::func_86(Param1))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true);
		if (iVar0 == joaat("WEAPON_MOLOTOV"))
		{
			if (iVar1 != joaat("WEAPON_MOLOTOV"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_MOLOTOV"), true);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
				TASK::TASK_THROW_PROJECTILE(0, __LIB_26__::func_465(Param1, 1f), 0, false);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar2, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SHOOT_AT_COORD")) != 0)
		{
			TASK::TASK_SHOOT_AT_COORD(iParam0, Param1, -1, joaat("FIRING_PATTERN_BURST_FIRE"));
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_STAND_STILL")) != 0)
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

int func_81(int iParam0, int iParam1)//Position - 0xFDE
{
	switch (iParam0)
	{
		case 6:
		case 5:
		case 7:
			return 0;
			break;
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 1;
					break;
			}
			break;
	}
	return iParam1;
}

int func_82(int iParam0, struct<3> Param1)//Position - 0x37F2
{
	switch (iParam0)
	{
		case 5:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 174.58f, 335.5574f)), __LIB_0__::func_79(Vector(0f, 174.8707f, 334.8261f) - Vector(0f, 174.58f, 335.5574f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 6:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, -711.023f, 393.0992f)), __LIB_0__::func_79(Vector(0f, -715.4372f, 393.1879f) - Vector(0f, -711.023f, 393.0992f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 7:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, -215.2002f, -1423.2535f)), __LIB_0__::func_79(Vector(0f, -215.1443f, -1420.7098f) - Vector(0f, -215.2002f, -1423.2535f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 11:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 274.9096f, -564.5655f)), __LIB_0__::func_79(Vector(0f, 275.0867f, -567.1105f) - Vector(0f, 274.9096f, -564.5655f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 12:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 338.8084f, 225.5057f)), __LIB_0__::func_79(Vector(0f, 338.4193f, 226.8374f) - Vector(0f, 338.8084f, 225.5057f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 13:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 6256.4995f, -299.9329f)), __LIB_0__::func_79(Vector(0f, 6255.1787f, -301.1977f) - Vector(0f, 6256.4995f, -299.9329f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 14:
			if (__LIB_0__::func_158(__LIB_0__::func_79(Param1 - Vector(0f, 4287.951f, -2200.2039f)), __LIB_0__::func_79(Vector(0f, 4289.739f, -2199.2598f) - Vector(0f, 4287.951f, -2200.2039f))) < 0f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			break;
	}
	return 0;
}

struct<4> func_83(char* sParam0)//Position - 0x1930
{
	struct<4> Var0;
	StringCopy(&Var0, sParam0, 16);
	switch (__LIB_0__::func_683())
	{
		case 0:
			StringConCat(&Var0, "_M", 16);
			break;
		case 1:
			StringConCat(&Var0, "_F", 16);
			break;
		case 2:
			StringConCat(&Var0, "_T", 16);
			break;
	}
	return Var0;
}

int func_84(int iParam0)//Position - 0xE15
{
	if (((!__LIB_0__::func_683() == iParam0 || __LIB_13__::func_94()) || __LIB_0__::func_690()) || Global_78316 != -1)
	{
		if (!__LIB_0__::func_683() == 1)
		{
		}
		if (__LIB_13__::func_94())
		{
		}
		if (__LIB_0__::func_690())
		{
		}
		if (Global_78316 != -1)
		{
		}
	}
	return 0;
}

void func_85()//Position - 0x6FD44
{
	iLocal_56 = 1;
}

void func_86(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x7090A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
}

void func_87(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5)//Position - 0x70D70
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		if (iParam4 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam5);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
}

void func_88(int iParam0)//Position - 0x7B8B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_89(char* sParam0)//Position - 0x933EC
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::GET_HASH_KEY(&(Global_41585[iVar0 /*8*/])) == iVar1)
		{
			StringCopy(&(Global_41585[iVar0 /*8*/]), "", 32);
		}
		iVar0++;
	}
}

void func_90(int* iParam0, int iParam1, bool bParam2)//Position - 0x7B176
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!PED::IS_PED_INJURED(*iParam1))
			{
				*iParam0 = __LIB_0__::func_666(*iParam1, bParam2, 145);
				if (bParam2 == 0)
				{
					HUD::SET_BLIP_PRIORITY(*iParam0, 7);
				}
			}
		}
	}
}

int func_91(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x8225C
{
	return __LIB_16__::func_897(uParam0, 0, 3, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

void func_92()//Position - 0x98387
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97754[iVar0] = 0;
		Global_97762[iVar0] = 0;
		Global_97766[iVar0] = 0;
		Global_97820[iVar0 /*3*/][0] = -1;
		Global_97820[iVar0 /*3*/][1] = -1;
		Global_113386.f_2363.f_539.f_3588[0 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_3588[1 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2387[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2391[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/] = 0;
			Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_1 = 0;
			StringCopy(&(Global_113386.f_2363.f_539.f_2407[iVar1 /*295*/][iVar0 /*98*/].f_27), "", 16);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_113386.f_2363.f_539.f_2247[iVar1 /*4*/][iVar0] = 0;
			iVar1++;
		}
		Global_113386.f_2363.f_539.f_290[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_294[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2348[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2352 = 0;
		Global_113386.f_2363.f_539.f_2354 = 0;
		Global_113386.f_2363.f_539.f_4315 = 0;
		Global_113386.f_2363.f_539.f_4316 = 0;
		Global_113386.f_2363.f_539.f_4321 = 145;
		Global_113386.f_2363.f_539.f_4322 = 145;
		Global_113386.f_2363.f_539.f_4323 = 0;
		Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2310[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2314[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2328[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2332[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2383[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2355[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2359[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2363[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2367[iVar0] = 0f;
		Global_113386.f_2363.f_539.f_2371[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2375[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2379[iVar0] = 0;
		Global_113386.f_2363.f_539.f_2336[iVar0] = -15;
		Global_113386.f_2363.f_539.f_2340[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2344[iVar0] = -1;
		Global_113386.f_2363.f_539.f_2395[iVar0] = -99;
		Global_113386.f_2363.f_539.f_2399[iVar0] = 14;
		Global_113386.f_2363.f_539.f_2403[iVar0] = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = 0;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
		Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
		iVar1 = 0;
		while (iVar1 < 44)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = 0;
			if (__LIB_0__::func_292(iVar1) == joaat("SLOT_UNARMED"))
			{
				Global_113386.f_2363.f_539.f_298[iVar0 /*477*/][iVar1 /*5*/] = joaat("WEAPON_UNARMED");
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 51)
		{
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_1 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_2 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_3 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/].f_4 = 0;
			Global_113386.f_2363.f_539.f_298[iVar0 /*477*/].f_221[iVar1 /*5*/] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_113386.f_2363.f_493[iVar0 /*15*/][iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_5[iVar1] = 0;
			Global_113386.f_2363.f_493[iVar0 /*15*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_2363.f_539.f_2241)
	{
		Global_113386.f_2363.f_539.f_2241[iVar0] = 0;
		iVar0++;
	}
	Global_113386.f_2363.f_539.f_196[0] = 77;
	Global_113386.f_2363.f_539.f_196[1] = 41;
	Global_113386.f_2363.f_539.f_196[2] = 54;
	Global_113386.f_2363.f_539.f_200[0] = 47;
	Global_113386.f_2363.f_539.f_200[1] = 14;
	Global_113386.f_2363.f_539.f_200[2] = 18;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/] = 0;
	Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_1 = 0;
	StringCopy(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][0 /*98*/].f_27), "", 16);
	Global_113386.f_2363.f_4863 = -1;
	Global_113386.f_2363.f_4864 = 145;
	__LIB_39__::func_19(0);
	Global_97747 = 1;
	iVar0 = 0;
	while (iVar0 <= 20)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 0, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[0 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 1, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[1 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (__LIB_0__::func_445(&Var3, iVar0, 2, 0, -1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/][Var3.f_9]), Var3.f_10);
			MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_5[Var3.f_9]), Var3.f_10);
		}
		iVar0++;
	}
	MISC::SET_BIT(&(Global_113386.f_2363.f_493[2 /*15*/].f_10[(1 / 32)]), (1 % 32));
	Global_113386.f_2363.f_539.f_2348[0] = 1;
	Global_113386.f_2363.f_539.f_290[0] = 100f;
	iVar2 = __LIB_0__::func_42(0);
	__LIB_39__::func_15(0);
	__LIB_13__::func_802(0);
	__LIB_15__::func_950(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[2] = 1;
	Global_113386.f_2363.f_539.f_290[2] = 100f;
	iVar2 = __LIB_0__::func_42(2);
	__LIB_39__::func_15(2);
	__LIB_13__::func_802(2);
	__LIB_15__::func_950(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2348[1] = 1;
	Global_113386.f_2363.f_539.f_290[1] = 100f;
	iVar2 = __LIB_0__::func_42(1);
	__LIB_39__::func_15(1);
	__LIB_13__::func_802(1);
	__LIB_15__::func_950(iVar2, 12, 0, 0);
	Global_113386.f_2363.f_539.f_2352 = 1;
	Global_113386.f_2363.f_539.f_2353 = 0;
}

void func_93(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x70DE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		__LIB_33__::func_487(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

int func_94()//Position - 0x60747
{
	return Local_630.f_31;
}

int func_95()//Position - 0x62318
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 13;
			break;
		case 6:
			return 26;
			break;
		case 12:
			return 26;
			break;
		case 5:
			return 261;
			break;
		case 7:
			return 159;
			break;
		case 8:
		case 9:
		case 10:
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 == 0)
			{
				return 369;
			}
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428.f_2 == 1)
			{
				return 368;
			}
			break;
		case 11:
			return 488;
			break;
	}
	return 4;
}

int func_96()//Position - 0x623D6
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 14;
			break;
		case 6:
			return 27;
			break;
		case 12:
			return 27;
			break;
		case 5:
			return 263;
			break;
		case 8:
		case 9:
		case 10:
			return 371;
			break;
		case 7:
			return 160;
			break;
		case 11:
			return 489;
			break;
	}
	return 4;
}

int func_97()//Position - 0x64C56
{
	switch (Local_630.f_31)
	{
		case 2:
		case 3:
		case 4:
			return 15;
			break;
		case 6:
			return 28;
			break;
		case 12:
			return 28;
			break;
		case 5:
			return 264;
			break;
		case 8:
		case 9:
		case 10:
			return 370;
			break;
		case 7:
			return 161;
			break;
		case 11:
			return 490;
			break;
	}
	return 4;
}

void func_98(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)//Position - 0x64CE6
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = -105579290;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar1 = __LIB_1__::func_705(iParam0);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

int func_99()//Position - 0x64EAE
{
	int iVar0;
	if (Local_630.f_36 != -1)
	{
		return Local_630.f_36;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_630[iVar0 /*3*/].f_2)
		{
			Local_630.f_36 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

bool func_100(int iParam0)//Position - 0x6B4A6
{
	int iVar0;
	var uVar1;
	iVar0 = iParam0;
	uVar1 = Global_2815059.f_6759;
	if (iVar0 > 31)
	{
		if (iVar0 <= 63)
		{
			uVar1 = Global_2815059.f_6760;
			iVar0 = (iVar0 - 32);
		}
		else if (iVar0 <= 95)
		{
			uVar1 = Global_2815059.f_6761;
			iVar0 = (iVar0 - 64);
		}
	}
	return BitTest(uVar1, iVar0);
}

void func_101()//Position - 0x6DB43
{
	Local_629.f_0 = 0;
}

bool func_102(char* sParam0)//Position - 0x6F715
{
	return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1);
}

int func_103(char* sParam0)//Position - 0x2ED6
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162())
	{
		return 1;
	}
	if (!__LIB_4__::func_991(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__::func_990(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) != 1)
	{
		StringCopy(sParam0, "ARC_START_M_D5" /* GXT: Unavailable: Vault laser required. */, 64);
		return 1;
	}
	return 0;
}

int func_104(char* sParam0)//Position - 0x2FEA
{
	if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9 == __LIB_0__::func_162())
	{
		return 1;
	}
	if (!__LIB_4__::func_992(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) || __LIB_4__::func_990(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9) != 2)
	{
		StringCopy(sParam0, "ARC_START_M_D4" /* GXT: Unavailable: Vault drill required. */, 64);
		return 1;
	}
	return 0;
}

void func_105(var uParam0)//Position - 0x59406
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
			__LIB_1__::func_387(uParam0[0]);
		}
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

int func_106(int* iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, struct<3> Param5, struct<3> Param6)//Position - 0x5B506
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[3]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("hei_prop_hei_drill_hole"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("hei_prop_hei_drill_hole")))
	{
		return 0;
	}
	if (!BitTest(*iParam0, 11))
	{
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
		}
		MISC::SET_BIT(iParam0, 11);
	}
	if (BitTest(*iParam0, 11))
	{
		if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
		{
			if (__LIB_1__::func_671(uParam1[3], joaat("hei_prop_hei_drill_hole"), Param5, bParam4, 1, 0, 1, 0, 0, 0))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ((*uParam1)[3]), Param5, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ((*uParam1)[3]), Param6, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[3]), true);
				ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ((*uParam1)[3]), false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ((*uParam1)[3]), true);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE((*uParam1)[3], false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hei_prop_hei_drill_hole"));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[3]), false, false);
				iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam3);
				iVar1 = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam3);
				if (iVar0 != 0 && iVar1 != 0)
				{
					if (INTERIOR::IS_INTERIOR_READY(iVar0))
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(NETWORK::NET_TO_OBJ((*uParam1)[3]), iVar0, iVar1);
					}
				}
				MISC::CLEAR_BIT(iParam0, 11);
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x5B6FE
{
	if (!bParam5)
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[1]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam6);
	if (STREAMING::HAS_MODEL_LOADED(iParam6))
	{
		if (!BitTest(*iParam0, 10))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 10);
		}
		if (BitTest(*iParam0, 10))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[1], iParam6, ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[1]), true);
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ((*uParam1)[1]), true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), true);
					NETWORK::SET_NETWORK_ID_CAN_MIGRATE((*uParam1)[1], false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam6);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[1]), !bParam4, false);
					MISC::CLEAR_BIT(iParam0, 10);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5B82D
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[0]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("ch_prop_ch_heist_drill"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_ch_heist_drill")))
	{
		if (!BitTest(*iParam0, 9))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 9);
		}
		if (BitTest(*iParam0, 9))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[0], joaat("ch_prop_ch_heist_drill"), ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					__LIB_5__::func_88(iParam0, uParam1, iParam2, bParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_109(int* iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5B958
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[0]))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("ch_prop_laserdrill_01a"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("ch_prop_laserdrill_01a")))
	{
		if (!BitTest(*iParam0, 9))
		{
			if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
			}
			else
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1);
			}
			MISC::SET_BIT(iParam0, 9);
		}
		if (BitTest(*iParam0, 9))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				if (__LIB_1__::func_671(uParam1[0], joaat("ch_prop_laserdrill_01a"), ENTITY::GET_ENTITY_COORDS(iParam2, true), bParam3, 1, 0, 1, 0, 0, 0))
				{
					__LIB_5__::func_88(iParam0, uParam1, iParam2, bParam4);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_110(var uParam0, int iParam1)//Position - 0x60337
{
	struct<8> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = -1887020194;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar1 = false;
	if (iParam1 == 11)
	{
		if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428, 1))
		{
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_428), 1);
			bVar1 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!__LIB_0__::func_864(&(uParam0->f_1)))
	{
		__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
	}
	bVar2 = true;
	if (*uParam0 == iParam1 && !bVar1)
	{
		if (__LIB_0__::func_864(&(uParam0->f_1)) && !__LIB_0__::func_937(&(uParam0->f_1), 1000, 0))
		{
			bVar2 = false;
		}
		else
		{
			__LIB_0__::func_794(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		__LIB_0__::func_794(&(uParam0->f_1));
	}
	if (bVar2)
	{
		iVar3 = __LIB_1__::func_705(PLAYER::PLAYER_ID());
		if (iVar3 != -1)
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, iVar3);
			uParam0->f_5 = 1;
		}
	}
}

void func_111()//Position - 0x61EC1
{
	Local_629.f_5 = -1;
	if (Local_629.f_6 != -2147483647)
	{
		Local_629.f_6 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_629.f_7))
	{
		Local_629.f_7 = __LIB_0__::func_591();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_112(int iParam0)//Position - 0x62466
{
	if (Local_134.f_19[iParam0] == -1)
	{
		Local_134.f_19[iParam0] = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_134.f_19[iParam0], __LIB_36__::func_701(iParam0), __LIB_36__::func_700(iParam0), false);
}

void func_113(int iParam0, int iParam1)//Position - 0x6502F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (iParam1 - 1))
	{
		if ((iParam0[iVar0 /*3*/])->f_1 < (iParam0[(iParam1 - 1) /*3*/])->f_1)
		{
			__LIB_36__::func_702(iParam0, iVar0, (iParam1 - 1));
			if (Local_630.f_36 == -1)
			{
				Local_630.f_36 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_114(var uParam0)//Position - 0x48E8
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
			__LIB_1__::func_387(uParam0[1]);
		}
		if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
		{
			NETWORK::RESERVE_LOCAL_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) - 1));
		}
		else
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) - 1));
		}
	}
}

void func_115(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B120
{
	int iVar0;
	iVar0 = __LIB_5__::func_172(iParam3);
	if (__LIB_2__::func_213(uParam0))
	{
		if (!BitTest(Global_1966339[iVar0], 2))
		{
			__LIB_25__::func_462(iVar0, uParam2, iParam1, 0, 0);
		}
	}
	else if (uParam0->f_12 > 0f)
	{
		if (!BitTest(Global_1966339[iVar0], 0) && !BitTest(Global_1966339[iVar0], 1))
		{
			__LIB_25__::func_462(iVar0, uParam2, iParam1, 1, 0);
		}
	}
	else if (!BitTest(Global_1966339[iVar0], 2))
	{
		__LIB_25__::func_462(iVar0, uParam2, iParam1, 0, 0);
	}
}

void func_116(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x5B1A6
{
	int iVar0;
	iVar0 = __LIB_5__::func_172(iParam3);
	if (__LIB_2__::func_213(uParam0))
	{
		if (!BitTest(Global_1966339[iVar0], 2))
		{
			__LIB_25__::func_462(iVar0, uParam2, iParam1, 0, 1);
		}
	}
	else if (uParam0->f_12 > 0f)
	{
		if (!BitTest(Global_1966339[iVar0], 0) && !BitTest(Global_1966339[iVar0], 1))
		{
			__LIB_25__::func_462(iVar0, uParam2, iParam1, 1, 1);
		}
	}
	else if (!BitTest(Global_1966339[iVar0], 2))
	{
		__LIB_25__::func_462(iVar0, uParam2, iParam1, 0, 1);
	}
}

void func_117(int iParam0)//Position - 0x5BDF9
{
	struct<3> Var0;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_0 = -525890435;
	Var0.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_5__::func_410(1, 1));
}

void func_118(int iParam0)//Position - 0x61654
{
	Local_629.f_0 = 1;
	Local_629.f_6 = -2147483647;
	Local_629.f_5 = MISC::GET_HASH_KEY(__LIB_15__::func_818(iParam0));
	__LIB_5__::func_401(__LIB_15__::func_818(iParam0));
}

void func_119(int iParam0, var uParam1, bool bParam2)//Position - 0xACE
{
	int iVar0;
	WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iParam0, uParam1->f_6, uParam1->f_7);
	PED::SET_PED_SHOOT_RATE(iParam0, MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_16, uParam1->f_17));
	PED::SET_PED_FIRING_PATTERN(iParam0, *uParam1);
	PED::SET_COMBAT_FLOAT(iParam0, 3, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_12, uParam1->f_13));
	PED::SET_COMBAT_FLOAT(iParam0, 4, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_10, uParam1->f_11));
	PED::SET_COMBAT_FLOAT(iParam0, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam1->f_14, uParam1->f_15));
	if (bParam2)
	{
		PED::SET_COMBAT_FLOAT(iParam0, 6, uParam1->f_5);
	}
	else
	{
		PED::SET_COMBAT_FLOAT(iParam0, 6, uParam1->f_4);
	}
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_1);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_2);
	PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), uParam1->f_3);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_20);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 42, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_8);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < uParam1->f_9);
	if (uParam1->f_19 != -1)
	{
		iVar0 = uParam1->f_19;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_RANGE(iParam0, 0);
			break;
		case 1:
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			break;
		case 2:
			PED::SET_PED_COMBAT_RANGE(iParam0, 2);
			break;
		default:
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			break;
	}
	if (uParam1->f_18 != -1)
	{
		iVar0 = uParam1->f_18;
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	switch (iVar0)
	{
		case 0:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
			break;
		case 1:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			break;
		case 2:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
			break;
		default:
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			break;
	}
}

int func_120(int iParam0, int iParam1)//Position - 0x9F42
{
	int iVar0;
	int iVar1;
	iVar1 = 28422;
	if (!__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (iParam0 == 0 || iParam0 == joaat("WEAPON_UNARMED"))
	{
		return 0;
	}
	if (iParam1 == 1)
	{
		iVar1 = 60309;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	iVar0 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::GET_WEAPONTYPE_MODEL(iParam0), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f), true, true, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), iVar1), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	return iVar0;
}

void func_121(var uParam0, var uParam1)//Position - 0xEB36
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()));
		}
		switch (*uParam0)
		{
			case 52:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "TriggerHappy_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Nervous_WhiteTrash";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			case 53:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Rampage_Hipster";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				break;
			case 54:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Armed_Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 8, 1, 0, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Mexican_Goon";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			case 55:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[0], 10, 0, 1, 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Armed_Thug";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION((*uParam1)[1], 10, 1, 0, 0);
				}
				break;
			case 56:
				if (__LIB_0__::func_121(uParam0->f_28[0]))
				{
					(*uParam1)[0] = "Army_Guy_Right";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[0], uParam0->f_28[0], 0);
				}
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					(*uParam1)[1] = "Army_Guy_Left";
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED((*uParam1)[1], uParam0->f_28[1], 0);
				}
				break;
			}
	}
}

int func_122(int iParam0, int iParam1)//Position - 0x3B68A
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	WEAPON::REQUEST_WEAPON_ASSET(iParam0, 31, 0);
	if (WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !WEAPON::HAS_WEAPON_ASSET_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_123(var uParam0)//Position - 0x95E
{
	if (*uParam0 >= iLocal_412)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_412[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

int func_124(var uParam0)//Position - 0x98B
{
	if (*uParam0 >= iLocal_411)
	{
		*uParam0 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iLocal_411[*uParam0]))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

void func_125(var uParam0)//Position - 0xDD1
{
	__LIB_0__::func_714(&(uParam0->f_1));
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	if (uParam0->f_7 != -1)
	{
		Local_348[uParam0->f_7 /*44*/].f_36 = (Local_348[uParam0->f_7 /*44*/].f_36 - 1);
		if (Local_348[uParam0->f_7 /*44*/].f_36 < 0)
		{
			Local_348[uParam0->f_7 /*44*/].f_36 = 0;
		}
		uParam0->f_7 = -1;
	}
}

int func_126()//Position - 0xE4E
{
	if (Local_280.f_37 == 0)
	{
		return 0;
	}
	return Local_280.f_27[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_280.f_37)];
}

int func_127(int iParam0, int iParam1)//Position - 0xE8F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*13*/]))
		{
			*iParam1 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_128(var uParam0)//Position - 0xEC3
{
	if (bLocal_594)
	{
		return MISC::GET_GAME_TIMER() > iLocal_591;
	}
	return MISC::GET_GAME_TIMER() > *uParam0;
}

Vector3 func_129(struct<16> Param0, var uParam1)//Position - 0x1373
{
	struct<3> Var0;
	Var0 = { Param0.f_1[0 /*3*/] + Param0.f_9 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, Param0.f_15)) };
	Var0 = { Var0 + Param0.f_12 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) * Vector(Param0.f_8, Param0.f_8, Param0.f_8) };
	Var0.f_2 = (Param0.f_1[0 /*3*/].f_2 + ((Param0.f_1[1 /*3*/].f_2 - Param0.f_1[0 /*3*/].f_2) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1.5f)));
	if (Var0.f_2 > Param0.f_1[1 /*3*/].f_2)
	{
		Var0.f_2 = Param0.f_1[1 /*3*/].f_2;
	}
	return Var0;
}

int func_130(var uParam0)//Position - 0x213A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			*uParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_131(int iParam0, int iParam1)//Position - 0x216F
{
	float fVar0;
	float fVar1;
	int iVar2;
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, true);
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-30f, 30f);
	PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(20f, 30f), true);
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_318 && __LIB_0__::func_121(iParam1))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true), MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 25f), false, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 37, true);
	}
	else
	{
		PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0, fVar1, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 80f), false);
	}
	if (Local_280.f_0 != 81 && (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
	{
		if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= fLocal_320)
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_RPG"), 60, false, true);
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
	TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
	TASK::CLOSE_SEQUENCE_TASK(iVar2);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar2);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
}

int func_132(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x2455
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	*uParam2 = (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0, false, true));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (iParam4 && !VEHICLE::IS_VEHICLE_STOPPED(iParam0))
		{
			return 0;
		}
		if (iParam3 && VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			*uParam1 = -1;
			iVar0 = 1;
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1, false))
				{
					*uParam1 = iVar1;
					return 1;
				}
				iVar1++;
			}
		}
	}
	return iVar0;
}

bool func_133(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x24DC
{
	return MISC::IS_POSITION_OCCUPIED(Param0, fParam1, bParam2, bParam3, bParam4, bParam5, bParam6, iParam7, bParam8);
}

int func_134(int iParam0)//Position - 0x24FC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_324[iVar0 /*20*/]))
		{
			*iParam0 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_135()//Position - 0x2534
{
	if (Local_280.f_38 == 0)
	{
		return 0;
	}
	return Local_280.f_32[MISC::GET_RANDOM_INT_IN_RANGE(0, Local_280.f_38)];
}

int func_136()//Position - 0x255A
{
	if (iLocal_590 == 0)
	{
		return 1;
	}
	iLocal_586 = (iLocal_338 / 2);
	switch (iLocal_585)
	{
		case 0:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (iLocal_336 >= iLocal_338)
			{
				iLocal_585 = 1;
				return 0;
			}
			break;
		case 1:
			if (iLocal_336 < iLocal_586)
			{
				iLocal_585 = 2;
				iLocal_589 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iLocal_587, iLocal_588));
			}
			return 0;
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_589 || iLocal_336 < 4)
			{
				iLocal_585 = 0;
				return 1;
			}
			return 0;
			break;
	}
	return 1;
}

int func_137()//Position - 0x25F3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		if (__LIB_0__::func_121(Local_324[iVar0 /*20*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_138()//Position - 0x2A38
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, false, false, 0);
}

int func_139()//Position - 0x2A6E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1599.593f, 2818.15f, -17.645f, -1612.423f, 2806.997f, 17.645f, 51f, true, false, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2301.089f, 3385.031f, -31.086f, -2305.302f, 3379.441f, 31.086f, 16f, true, false, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2287.138f, 3385.616f, 31.124f, -2292.554f, 3378.428f, 31.124f, 19.8f, true, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_140(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x3B50
{
	uParam0->f_2 = { Param1 };
	uParam0->f_5 = fParam2;
	uParam0->f_1 = iParam3;
}

int func_141(var uParam0, var uParam1)//Position - 0x3C06
{
	if (iLocal_336 >= iLocal_338)
	{
		return 0;
	}
	if ((uParam0->f_1 % 4) != 0)
	{
		return 0;
	}
	*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_214);
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_15[*uParam1 /*6*/].f_2) > 3600f)
	{
		return 0;
	}
	if (bLocal_315)
	{
		if (__LIB_14__::func_819(uParam0->f_15[*uParam1 /*6*/].f_2, 1f, 0, 1))
		{
			return 0;
		}
	}
	else if (PED::IS_ANY_PED_NEAR_POINT(uParam0->f_15[*uParam1 /*6*/].f_2, 1f))
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0)//Position - 0x3F82
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (Local_280.f_38 <= 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_143(int* iParam0)//Position - 0x42E6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	var uVar8;
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (__LIB_0__::func_715(iParam0->f_2))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) };
	}
	Var3 = { Var1 - Var2 };
	fLocal_347 = MISC::ATAN2(Var3.f_1, Var3.f_0);
	fLocal_345 = (fLocal_347 + fLocal_342);
	fLocal_346 = ((fLocal_347 - fLocal_342) + 360f);
	fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_345, fLocal_346);
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_343, fLocal_344);
	Var4.f_0 = SYSTEM::COS(fVar6);
	Var4.f_1 = SYSTEM::SIN(fVar6);
	Var4.f_2 = 0f;
	Var5 = { Vector(fVar7, fVar7, fVar7) * Var4 };
	Var0 = { Var1 + Var5 };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar8, false, false))
	{
		Var0.f_2 = uVar8;
	}
	return Var0;
}

void func_144(int* iParam0, bool bParam1)//Position - 0x4CA2
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		return;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	if (!__LIB_0__::func_121(iParam0->f_2))
	{
		__LIB_0__::func_124(iParam0, 1, 0, 1);
	}
	else
	{
		if (__LIB_0__::func_121(*iParam0))
		{
			if (bParam1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) + __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0->f_2, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * Vector(500f, 500f, 500f) };
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var1, 0, &Var2, 1, 3f, 0f))
				{
					Var2 = { Var1 };
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iParam0->f_2, Var2, 4, 60f, 786436, -1f, -1f, true);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iParam0->f_2, 60f, 786469);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 8, 60f, 786436, -1f, -1f, true);
			}
		}
		__LIB_0__::func_124(iParam0, 1, 0, 1);
	}
	__LIB_0__::func_106(&(iParam0->f_2));
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = { 0f, 0f, 0f };
}

void func_145(int iParam0)//Position - 0x54C5
{
	__LIB_0__::func_121(iParam0);
	Local_277.f_7++;
}

void func_146()//Position - 0x6095
{
	int iVar0;
	if (!Local_280.f_52)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Local_308[iVar0 /*8*/].f_7)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_308[iVar0 /*8*/]))
			{
				Local_308[iVar0 /*8*/] = OBJECT::CREATE_OBJECT(Local_280.f_36, Local_308[iVar0 /*8*/].f_1, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(Local_308[iVar0 /*8*/], Local_308[iVar0 /*8*/].f_4, 2, true);
				Local_308[iVar0 /*8*/].f_7 = 1;
			}
		}
		iVar0++;
	}
}

int func_147(int iParam0)//Position - 0x63D5
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = -1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false) || PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::GET_PED_LAST_DAMAGE_BONE(iParam0, &iVar0))
		{
			return 0;
		}
		return (((iVar0 == 63931 || iVar0 == 36864) || iVar0 == 51826) || iVar0 == 58271);
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x64ED
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] == iVar1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_149()//Position - 0x937F
{
	iLocal_379 = 1;
}

void func_150()//Position - 0x9541
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Rampage"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("Rampage");
		GRAPHICS::ANIMPOSTFX_PLAY("RampageOut", 0, false);
	}
}

void func_151(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9951
{
	uParam0->f_549 = uParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	StringCopy(&(uParam0->f_554), "", 16);
	uParam0->f_558 = iParam3;
	uParam0->f_559 = iParam4;
	uParam0->f_560 = iParam5;
	uParam0->f_561 = iParam6;
	uParam0->f_580 = iParam7;
}

int func_152(var uParam0)//Position - 0x9AE2
{
	switch (*uParam0)
	{
		case 1:
			return Local_277.f_0 >= uParam0->f_1;
		case 2:
			return Local_277.f_1 >= uParam0->f_1;
		case 3:
			return Local_277.f_17 >= uParam0->f_1;
		case 4:
			return Local_277.f_6 >= uParam0->f_1;
		case 5:
			return Local_277.f_8 >= uParam0->f_1;
		case 6:
			return Local_277.f_9 >= uParam0->f_1;
		case 7:
			return Local_277.f_4 >= uParam0->f_1;
		case 8:
			return Local_277.f_5 >= uParam0->f_1;
		case 9:
			return Local_277.f_10 >= uParam0->f_1;
		default:
	}
	return 0;
}

int func_153(bool bParam0)//Position - 0x9E60
{
	if (BitTest(Global_32209, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0)//Position - 0x9ED5
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*3*/] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_155(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9F06
{
	iParam0 = MISC::ABSI(iParam0);
	*uParam1 = ((iParam0 - (iParam0 % 60000)) / 60000);
	*uParam2 = ((iParam0 % 60000) / 1000);
	*uParam3 = ((iParam0 % 1000) / 100);
}

int func_156(int iParam0)//Position - 0xA420
{
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		return 1;
	}
	if (PED::IS_PED_IN_GROUP(iParam0))
	{
		if (PED::GET_PED_GROUP_INDEX(iParam0) == PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_157()//Position - 0xA454
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
}

void func_158()//Position - 0xA4CC
{
	int iVar0;
	iVar0 = 0;
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 15, false, false);
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], -1, true, true);
			WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], -1);
			WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), true, Local_280.f_17[iVar0]);
		}
		iVar0++;
	}
	if (Local_280.f_17[0] != 0 && Local_280.f_17[0] != joaat("WEAPON_UNARMED"))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_280.f_24)
		{
			if (Local_280.f_24[iVar0] != 0)
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], Local_280.f_24[iVar0]);
			}
			iVar0++;
		}
	}
	if (Local_280.f_17[0] != 0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], true);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
	}
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
}

void func_159()//Position - 0xA5EB
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("Rampage"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("Rampage", 0, true);
	}
}

void func_160()//Position - 0xA609
{
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_161()//Position - 0xA673
{
	if (iLocal_596 == 1)
	{
		return;
	}
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_1_START");
			break;
		case 81:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_2_START");
			break;
		case 78:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_3_START");
			break;
		case 79:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_4_START");
			break;
		case 80:
			AUDIO::TRIGGER_MUSIC_EVENT("RAMPAGE_5_START");
			break;
	}
	iLocal_596 = 1;
}

void func_162()//Position - 0xA75A
{
	__LIB_0__::func_222(&uLocal_420, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_415 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 40000));
}

void func_163(var uParam0)//Position - 0xAC36
{
	int iVar0;
	if (!__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, false);
	if (!__LIB_0__::func_121(iVar0))
	{
		return;
	}
	VEHICLE::SET_CAN_ADJUST_GROUND_CLEARANCE(*uParam0, true);
}

void func_164(int iParam0, struct<3> Param1, bool bParam2)//Position - 0xBB6C
{
	int iVar0;
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bLocal_419);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam2)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, 2f, -1, 0.25f, 1, 40000f);
	}
	else
	{
		TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Param1, 2f, 0, false, 786603, -1f);
	}
	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MotionState_Run"), false, 0, false);
}

void func_165()//Position - 0xC74D
{
	int iVar0;
	switch (Local_280.f_0)
	{
		case 77:
			iVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 907.5499f, 3641.5085f, 33.1808f, -11.3754f, 0.0004f, -105.7755f, 50f, true, 2);
			break;
		default:
			iVar0 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_597, Local_598, 50f, true, 2);
			break;
	}
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::SET_CAM_ACTIVE(iVar0, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		SYSTEM::WAIT(0);
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
}

int func_166()//Position - 0xC80A
{
	int iVar0;
	int iVar1;
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 0;
	}
	iVar1 = Local_280.f_27;
	if (Local_280.f_37 < iVar1)
	{
		iVar1 = Local_280.f_37;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_27[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	iVar1 = Local_280.f_32;
	if (Local_280.f_38 < iVar1)
	{
		iVar1 = Local_280.f_38;
	}
	if (iVar1 > 0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_32[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	if (Local_280.f_52)
	{
		if (Local_280.f_36 != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_280.f_36))
			{
				return 0;
			}
		}
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_01", false, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\RAMPAGE_02", false, -1))
	{
		return 0;
	}
	if (!AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
	{
		return 0;
	}
	return 1;
}

void func_167(var uParam0)//Position - 0xC909
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_6))
	{
		return;
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_6))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam0->f_6);
	}
}

void func_168()//Position - 0xE3BB
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_408 = "Trevor";
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), sLocal_408, 0, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3);
	}
	switch (Local_280.f_0)
	{
		case 77:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "TriggerHappy_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Nervous_WhiteTrash";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, 0, 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE"));
			if (__LIB_0__::func_121(Local_276.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[3], false);
			}
			if (__LIB_0__::func_121(Local_276.f_41[4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[4], false);
			}
			break;
		case 81:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Rampage_Hipster";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_41[1]))
			{
				__LIB_0__::func_123(&(Local_276.f_41[1]));
			}
			if (__LIB_0__::func_121(Local_276.f_41[2]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[2], false);
			}
			if (__LIB_0__::func_121(Local_276.f_41[3]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_276.f_41[3], false);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_SAWNOFFSHOTGUN"));
			break;
		case 78:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Armed_Mexican_Goon";
				PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 9, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Mexican_Goon";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[1]), 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_MICROSMG"));
			break;
		case 79:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[0]), 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Armed_Thug";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, ENTITY::GET_ENTITY_MODEL(Local_276.f_28[1]), 11);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_ASSAULTRIFLE"));
			if (__LIB_0__::func_121(Local_276.f_41[0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_276.f_41[0]));
			}
			if (!__LIB_0__::func_121(Local_276.f_41[0]))
			{
				Local_276.f_41[0] = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_ASSAULTRIFLE"), 100, ENTITY::GET_ENTITY_COORDS(Local_276.f_28[0], true), true, 1f, 0, 0, 1);
				if (__LIB_0__::func_121(Local_276.f_41[0]))
				{
				}
			}
			break;
		case 80:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Army_Guy_Right";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[0], sLocal_410[0], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Army_Guy_Left";
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_28[1], sLocal_410[1], 0, 0, 0);
			}
			if (__LIB_0__::func_121(Local_276.f_35[0]))
			{
				sLocal_410[2] = "Army_Truck";
				VEHICLE::SET_VEHICLE_EXTRA(Local_276.f_35[0], 1, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_35[0], sLocal_410[2], 0, 0, 0);
			}
			sLocal_409 = "Trevors_weapon";
			iVar0 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_GRENADELAUNCHER"));
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_409))
	{
		if (__LIB_0__::func_121(Local_276.f_41[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_276.f_41[0], sLocal_409, 0, 0, 0);
		}
		else
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_409, 2, iVar0, 0);
		}
	}
}

void func_169(int iParam0)//Position - 0x3B311
{
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	iParam0->f_7 = 0;
	iParam0->f_8 = 0;
	iParam0->f_11 = 0;
	iParam0->f_12 = 0;
	iParam0->f_16 = 0;
	iParam0->f_17 = 0;
	STATS::STAT_GET_INT(joaat("SP2_SHOTS"), &(iParam0->f_19), -1);
	STATS::STAT_GET_INT(joaat("SP2_HITS"), &(iParam0->f_18), -1);
}

int func_170(int iParam0, bool bParam1)//Position - 0x3B625
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (iParam0 == 0)
	{
		return 0;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	if (STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 1;
	}
	if (bParam1 == 0)
	{
		return 1;
	}
	while (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_171(char* sParam0, bool bParam1)//Position - 0x3B6E8
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return 1;
	}
	if (bParam1 == 0)
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

int func_172(char* sParam0, int iParam1)//Position - 0x3B743
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		return 1;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam0, false, -1))
		{
			return 0;
		}
	}
	return 1;
}

int func_173(char* sParam0, int iParam1, int iParam2)//Position - 0x3B79E
{
	int iVar0;
	iVar0 = MISC::GET_GAME_TIMER() + 7500;
	if (*iParam1 == 0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam0);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
	{
		SYSTEM::WAIT(0);
		if (MISC::GET_GAME_TIMER() > iVar0 && !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			return 0;
		}
	}
	return 1;
}

void func_174()//Position - 0x3B86B
{
	switch (Local_280.f_0)
	{
		case 77:
			Local_280.f_3 = "RAMP1AU";
			Local_280.f_4 = "RAMP1_FIGHT";
			break;
		case 81:
			Local_280.f_3 = "RAMP2AU";
			Local_280.f_4 = "RAMP2_FIGHT";
			break;
		case 78:
			Local_280.f_3 = "RAMP3AU";
			Local_280.f_4 = "RAMP3_FIGHT";
			break;
		case 79:
			Local_280.f_3 = "RAMP4AU";
			Local_280.f_4 = "RAMP4_FIGHT";
			break;
		case 80:
			Local_280.f_3 = "RAMP5AU";
			Local_280.f_4 = "RAMP5_FIGHT";
			break;
		default:
			return;
	}
	__LIB_17__::func_133(Local_280.f_3, 6, 0, 0);
}

Vector3 func_175()//Position - 0x3BA42
{
	int iVar0;
	iVar0 = Local_280.f_0;
	return Global_32338[iVar0 /*23*/][0 /*3*/];
}

bool func_176()//Position - 0x3BADB
{
	return iLocal_379 != 0;
}

void func_177()//Position - 0x3BB0A
{
	int iVar0;
	switch (Local_280.f_0)
	{
		case 78:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(500.957f, -1805.29f, 27.5551f, 4f, joaat("prop_fnclink_02gate4"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(511.2028f, -1798.3715f, 27.4122f, 4f, joaat("prop_fncres_06gater"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(469.1499f, -1805.6255f, 28.4358f, 4f, joaat("prop_fnclink_06gate2"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
		case 79:
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-155.46f, -1665.8f, 32.17f, 4f, joaat("prop_fncsec_03c"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-133.76f, -1617.43f, 32f, 4f, joaat("prop_fncsec_03c"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, 0f, 0f, -20f, true, false, false, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
				iVar0 = 0;
			}
			break;
	}
}

void func_178()//Position - 0x3D210
{
	int iVar0;
	iVar0 = 0;
	if (Local_280.f_36 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_36);
	}
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_27[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_280.f_32[iVar0]);
		}
		iVar0++;
	}
}

void func_179()//Position - 0x441F8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_308[iVar0 /*8*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_308[iVar0 /*8*/]));
			Local_308[iVar0 /*8*/].f_7 = 0;
		}
		iVar0++;
	}
}

void func_180()//Position - 0x44236
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			if (__LIB_0__::func_121(iLocal_333[iVar0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_333[iVar0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_333[iVar0], false);
			}
			__LIB_0__::func_106(&(iLocal_333[iVar0]));
			iLocal_333[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_181()//Position - 0x468B2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), Local_280.f_17[iVar0], false))
			{
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), false, Local_280.f_17[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_182()//Position - 0x46907
{
	int iVar0;
	__LIB_0__::func_714(&iLocal_366);
	iLocal_366 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_323.f_0)
	{
		__LIB_0__::func_714(&(Local_323[iVar0 /*13*/].f_1));
		Local_323[iVar0 /*13*/].f_1 = 0;
		iVar0++;
	}
}

void func_183(var uParam0, struct<3> Param1, struct<3> Param2)//Position - 0x470CC
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
}

void func_184(var uParam0, int iParam1, int iParam2)//Position - 0x471E6
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	switch (*uParam0)
	{
		case 1:
			uParam0->f_2 = "CH_000";
			break;
		case 2:
			uParam0->f_2 = "CH_001";
			break;
		case 3:
			uParam0->f_2 = "CH_002";
			break;
		case 4:
			uParam0->f_2 = "CH_003";
			break;
		case 5:
			uParam0->f_2 = "CH_004";
			break;
		case 6:
			uParam0->f_2 = "CH_005";
			break;
		case 7:
			uParam0->f_2 = "CH_006";
			break;
		case 8:
			uParam0->f_2 = "CH_007";
			break;
		case 9:
			uParam0->f_2 = "CH_008";
			break;
	}
}

void func_185(var uParam0)//Position - 0x472A3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[iVar0 /*3*/])->f_2 = "";
		iVar0++;
	}
}

void func_186(var uParam0)//Position - 0x4744E
{
	*uParam0 = joaat("FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC");
	uParam0->f_4 = 0.0325f;
	uParam0->f_5 = 0.0325f;
	uParam0->f_6 = 0.36f;
	uParam0->f_7 = 0.6f;
	uParam0->f_8 = 0.2f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10f;
	uParam0->f_11 = 11f;
	uParam0->f_12 = 1.25f;
	uParam0->f_13 = 2.25f;
	uParam0->f_14 = 2f;
	uParam0->f_15 = 2.5f;
	uParam0->f_16 = 20;
	uParam0->f_17 = 50;
	uParam0->f_18 = 0;
	uParam0->f_19 = -1;
	uParam0->f_1 = 1f;
	uParam0->f_2 = 1f;
	uParam0->f_3 = 1f;
	uParam0->f_20 = 0.5f;
}

void func_187(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x48438
{
	if (fParam1 > 0f)
	{
		uParam0->f_38 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(Local_280.f_53 * 2) * fParam1));
	}
	else
	{
		uParam0->f_38 = 99;
	}
	if (iParam3 > iLocal_338)
	{
		iParam3 = iLocal_338;
	}
	if (iParam3 > 10)
	{
		iParam3 = 10;
	}
	uParam0->f_41 = iParam3;
	uParam0->f_40 = iParam2;
}

float func_188(struct<3> Param0, struct<3> Param1)//Position - 0x485B4
{
	struct<3> Var0;
	Var0 = { Param1 - Param0 };
	return SYSTEM::SQRT((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)));
}

void func_189()//Position - 0x490DA
{
	switch (Local_280.f_0)
	{
		case 77:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_1_OS");
			break;
		case 81:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_2_OS");
			break;
		case 78:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_3_OS");
			break;
		case 79:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_4_OS");
			break;
		case 80:
			AUDIO::PREPARE_MUSIC_EVENT("RAMPAGE_5_OS");
			break;
	}
}

void func_190(var uParam0)//Position - 0xA16
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, joaat("WEAPON_PISTOL"), -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, joaat("WEAPON_PISTOL"));
	}
	if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) < fLocal_319 && Local_280.f_21[1] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_280.f_21[1], -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, Local_280.f_21[1]);
		__LIB_39__::func_119(*uParam0, &Local_285, 1);
	}
	else if (Local_280.f_21[0] != 0)
	{
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, Local_280.f_21[0], -1, false, true);
		WEAPON::SET_PED_INFINITE_AMMO(*uParam0, true, Local_280.f_21[0]);
		__LIB_39__::func_119(*uParam0, &Local_285, 0);
	}
}

void func_191(var uParam0, int iParam1, float fParam2)//Position - 0x193B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam2;
	uParam0->f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 25f);
	if (__LIB_0__::func_692(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar2, true, 0f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bLocal_419);
		if (Local_280.f_0 == 80)
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786468, uParam0->f_18, 15f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 4, uParam0->f_17, 786436, uParam0->f_18, 15f, true);
		}
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	if (iParam1 == 1)
	{
		uParam0->f_11 = 3;
	}
	else
	{
		uParam0->f_11 = 2;
	}
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

void func_192(var uParam0, float fParam1)//Position - 0x1A8D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 1, uParam0->f_17, 786436, -1f, -1f, true);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else if (__LIB_0__::func_692(iVar1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 1;
}

void func_193(var uParam0, float fParam1)//Position - 0x1B6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam1;
	TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar2, *uParam0, PLAYER::PLAYER_PED_ID(), 6, uParam0->f_17, 786436, -1f, -1f, true);
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("rhino"))
	{
		uParam0->f_11 = 5;
	}
}

int func_194(int iParam0)//Position - 0x262B
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_0__::func_692((*iParam0)[iVar0 /*13*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_195(var uParam0)//Position - 0x5AAE
{
	if (iLocal_418 > 8)
	{
		iLocal_418 = 0;
	}
	switch (iLocal_418)
	{
		case 0:
			uParam0->f_11 = "RAMP2_HIP9";
			uParam0->f_10 = "RAMPAGEHIPSTER9";
			break;
		case 1:
			uParam0->f_11 = "RAMP2_HIP1";
			uParam0->f_10 = "RAMPAGEHIPSTER";
			break;
		case 2:
			uParam0->f_11 = "RAMP2_HIP2";
			uParam0->f_10 = "RAMPAGEHIPSTER2";
			break;
		case 3:
			uParam0->f_11 = "RAMP2_HIP3";
			uParam0->f_10 = "RAMPAGEHIPSTER3";
			break;
		case 4:
			uParam0->f_11 = "RAMP2_HIP4";
			uParam0->f_10 = "RAMPAGEHIPSTER4";
			break;
		case 5:
			uParam0->f_11 = "RAMP2_HIP5";
			uParam0->f_10 = "RAMPAGEHIPSTER5";
			break;
		case 6:
			uParam0->f_11 = "RAMP2_HIP6";
			uParam0->f_10 = "RAMPAGEHIPSTER6";
			break;
		case 7:
			uParam0->f_11 = "RAMP2_HIP7";
			uParam0->f_10 = "RAMPAGEHIPSTER7";
			break;
		case 8:
			uParam0->f_11 = "RAMP2_HIP8";
			uParam0->f_10 = "RAMPAGEHIPSTER8";
			break;
	}
	__LIB_0__::func_222(&uLocal_420, iLocal_418, *uParam0, uParam0->f_10, 0, 1);
	iLocal_418++;
	if (iLocal_418 == 2)
	{
		iLocal_418++;
	}
}

void func_196(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x5D8E
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
		Global_1649593.f_2839[iVar0] = uParam0;
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

void func_197(float fParam0)//Position - 0x9996
{
	float fVar0;
	fVar0 = __LIB_38__::func_376(iLocal_275);
	if (fVar0 < 100f)
	{
		if (fParam0 >= 100f)
		{
			Global_113386.f_10016.f_22++;
		}
	}
	if (fParam0 >= fVar0)
	{
		__LIB_38__::func_375(iLocal_275, fParam0, 0);
	}
}

void func_198(int iParam0)//Position - 0xA6EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (__LIB_0__::func_692((*iParam0)[iVar0 /*13*/]))
		{
			if (!(iParam0[iVar0 /*13*/])->f_3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*13*/], false) && (iParam0[iVar0 /*13*/])->f_3 == 0)
				{
					TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_MONEY((*iParam0)[iVar0 /*13*/], 0);
				}
			}
		}
		iVar0++;
	}
}

void func_199(var uParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xAC6C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_2[0] == -1)
	{
		return;
	}
	iVar2 = Local_323[uParam0->f_2[0] /*13*/];
	if (PED::IS_PED_INJURED(iVar2) || !__LIB_0__::func_121(*uParam0))
	{
		return;
	}
	uParam0->f_14 = { Param1 };
	uParam0->f_17 = fParam2;
	uParam0->f_18 = iParam3;
	if (__LIB_0__::func_692(iVar2))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 2, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, bLocal_419);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar2, *uParam0, uParam0->f_14, 4, uParam0->f_17, 786436, uParam0->f_18, 15f, true);
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar0, false);
		if (__LIB_0__::func_692(iVar1) && iVar1 != iVar2)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 2, true);
			TASK::TASK_COMBAT_PED(iVar1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
	uParam0->f_12 = 0;
	uParam0->f_11 = 3;
}

void func_200(int iParam0)//Position - 0x3B3CA
{
	__LIB_0__::func_136(&(iParam0->f_28));
	__LIB_0__::func_136(&(iParam0->f_35));
	__LIB_0__::func_136(&(iParam0->f_41));
}

bool func_201()//Position - 0x3B912
{
	return (__LIB_0__::func_323() || __LIB_0__::func_425(108));
}

void func_202(var uParam0)//Position - 0x3C6DE
{
	int iVar0;
	iLocal_380[0] = 6;
	iLocal_380[1] = 107;
	iLocal_380[2] = 108;
	iLocal_380[3] = 109;
	Global_31962 = 1;
	Global_95696 = 1;
	Local_276 = { *uParam0 };
	__LIB_12__::func_849(23, 1);
	uLocal_284 = Global_32209;
	Global_32209 = 0;
	PED::ADD_RELATIONSHIP_GROUP("RamageGrp", &iLocal_304);
	PED::ADD_RELATIONSHIP_GROUP("PassiveGrp", &iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_304, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_305, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_305, iLocal_304);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_304, iLocal_305);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_FAMILY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_MEXICAN"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("AMBIENT_GANG_LOST"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_FAMILY"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_MEXICAN"), joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("AMBIENT_GANG_LOST"), joaat("PLAYER"));
	PLAYER::SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(PLAYER::PLAYER_ID(), false);
	__LIB_0__::func_671(1);
	__LIB_14__::func_826(0);
	OBJECT::SUPPRESS_PICKUP_REWARD_TYPE(2047, true);
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	__LIB_14__::func_804(1);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), fLocal_317);
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(false);
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_323.f_0)
	{
		Local_323[iVar0 /*13*/].f_9 = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_324.f_0)
	{
		Local_324[iVar0 /*20*/].f_13 = iVar0;
		iVar0++;
	}
}

void func_203()//Position - 0x649C
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_415)
	{
		return;
	}
	if (iLocal_378 != 4)
	{
		return;
	}
	iLocal_415 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	__LIB_0__::func_787(&uLocal_420, Local_280.f_3, Local_280.f_4, 7, 0, 0, 0);
}

void func_204()//Position - 0x2D8BB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	iVar0 = __LIB_14__::func_794();
	switch (Local_280.f_0)
	{
		case 77:
			__LIB_14__::func_827(&Local_371, 896.1204f, 3640.058f, 36.08886f, 922.2221f, 3639.5684f, 31.159431f, 13.5f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 899.9673f, 3653.049f, 31.7576f };
				fVar2 = 268.2063f;
			}
			else
			{
				Var1 = { 891.0971f, 3653.328f, 31.8184f };
				fVar2 = 268.1944f;
			}
			break;
		case 81:
			__LIB_14__::func_827(&Local_371, 1179.1853f, -421.631f, 74.338844f, 1185.7046f, -388.5753f, 66.90026f, 21.5f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 1231.5063f, -442.6294f, 66.5811f };
				fVar2 = 191.4606f;
			}
			else
			{
				Var1 = { 1226.6814f, -436.0827f, 66.5804f };
				fVar2 = 76.5787f;
			}
			break;
		case 78:
			__LIB_14__::func_827(&Local_371, 449.73056f, -1858.2241f, 28.84542f, 472.45517f, -1843.8956f, 25.801113f, 37.25f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { 506.3633f, -1842.3701f, 26.644f };
				fVar2 = 308.821f;
			}
			else
			{
				Var1 = { 505.1393f, -1845.2905f, 26.3862f };
				fVar2 = 308.6425f;
			}
			break;
		case 79:
			__LIB_14__::func_827(&Local_371, -143.97147f, -1646.401f, 39.63461f, -172.5223f, -1680.7948f, 31.561562f, 18.75f);
			if (__LIB_14__::func_742(__LIB_13__::func_790(), 1))
			{
				Var1 = { -163.3928f, -1698.3533f, 30.6384f };
				fVar2 = 63.0698f;
			}
			else
			{
				Var1 = { -225.3203f, -1699.5354f, 33.0015f };
				fVar2 = 107.6143f;
			}
			break;
		case 80:
			__LIB_14__::func_827(&Local_371, -1303.8075f, 2499.506f, 29.048244f, -1228.8273f, 2569.8462f, 14.73124f, 29.5f);
			Var1 = { -1323.6338f, 2474.4177f, 23.6185f };
			fVar2 = 318.5112f;
			break;
	}
	if (__LIB_0__::func_323())
	{
		__LIB_14__::func_865(&iVar0, Var1, fVar2, 0, 0, 1, 1, 0, joaat("asterope"), 0, 145, 1);
	}
	__LIB_14__::func_614(Local_371[0 /*3*/], Local_371[1 /*3*/], Local_371.f_7, Var1, fVar2, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	__LIB_14__::func_775(iVar0, 0f, 0f, 0f, 0f, 24, 0);
}

int func_205(var uParam0)//Position - 0x9EA1
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (__LIB_39__::func_152(uParam0[iVar0 /*3*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_206()//Position - 0xC20D
{
	int iVar0;
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_408, 0))
		{
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, "TREVOR_ACTION");
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_ActionMode_Idle"), false, 1, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", Local_280.f_11, 4f, -4f, -1, 0, 0f, false, false, false);
			__LIB_39__::func_159();
			bLocal_413 = true;
		}
	}
	switch (Local_280.f_0)
	{
		case 77:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "TriggerHappy_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[0], 930.2522f, 3681.339f, 30.6506f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Nervous_WhiteTrash";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[1], 920.2722f, 3546.1018f, 32.9231f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 2f);
				}
			}
			break;
		case 81:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Rampage_Hipster";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[0], 1212.5776f, -421.3977f, 66.5951f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			break;
		case 78:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Armed_Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_276.f_28[0], 8, 0, 0, 0);
					__LIB_39__::func_164(Local_276.f_28[0], 335.7316f, -1887.2788f, 24.8253f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Mexican_Goon";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[1], 408.9685f, -1923.8516f, 24.0339f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 3f);
				}
			}
			break;
		case 79:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[0], -110.74f, -1601.2f, 31.7f, 0);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Armed_Thug";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[1], -142.6f, -1713.4f, 30.1f, 1);
				}
			}
			break;
		case 80:
			if (__LIB_0__::func_121(Local_276.f_28[0]))
			{
				sLocal_410[0] = "Army_Guy_Left";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[0], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[0], -1209.9448f, 2598.6895f, 14.3906f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[0], joaat("MotionState_Run"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[0], 2f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_28[1]))
			{
				sLocal_410[1] = "Army_Guy_Right";
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_410[1], 0))
				{
					__LIB_39__::func_164(Local_276.f_28[1], -1222.5686f, 2587.6506f, 15.1474f, 1);
					PED::FORCE_PED_MOTION_STATE(Local_276.f_28[1], joaat("MotionState_Sprint"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_276.f_28[1], 3f);
				}
			}
			if (__LIB_0__::func_121(Local_276.f_35[0]))
			{
				if (CUTSCENE::CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(sLocal_410[2], 0))
				{
					VEHICLE::SET_VEHICLE_EXTRA(Local_276.f_35[0], 1, false);
				}
			}
			break;
	}
	if (!__LIB_0__::func_121(Local_276.f_41[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_409, 0)))
		{
			Local_276.f_41[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_409, 0));
			if (__LIB_0__::func_121(Local_276.f_41[0]))
			{
			}
		}
	}
	else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_409, 0))
	{
		if (Local_276.f_0 == 55)
		{
			__LIB_0__::func_123(&(Local_276.f_41[0]));
			__LIB_39__::func_158();
		}
		else
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(Local_276.f_41[0], PLAYER::PLAYER_PED_ID());
		}
	}
	if (Local_276.f_0 == 54)
	{
		if (CUTSCENE::GET_CUTSCENE_TIME() >= 23000)
		{
			if (!iLocal_374)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], -1, true, true);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < Local_280.f_24)
				{
					if (Local_280.f_24[iVar0] != 0)
					{
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), Local_280.f_17[0], Local_280.f_24[iVar0]);
					}
					iVar0++;
				}
				iLocal_374 = 1;
			}
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		}
	}
}

void func_207()//Position - 0x49144
{
	int iVar0;
	__LIB_39__::func_186(&Local_285);
	Local_280.f_53 = 30;
	Local_280.f_16 = 180000;
	Local_280.f_43 = { 0f, 0f, 0f };
	Local_280.f_46 = 0f;
	Local_280.f_39 = { 0f, 0f, 0f };
	Local_280.f_42 = 0f;
	Local_280.f_50 = 0;
	Local_280.f_48 = 0f;
	Local_280.f_47 = 0f;
	Local_280.f_54 = 0;
	Local_280.f_52 = 0;
	Local_280.f_49 = 0f;
	Local_280.f_6 = "";
	Local_280.f_7 = { 0f, 0f, 0f };
	Local_280.f_10 = 0f;
	Local_280.f_36 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		Local_280.f_27[iVar0] = 0;
		iVar0++;
	}
	Local_280.f_37 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		Local_280.f_32[iVar0] = 0;
		iVar0++;
	}
	Local_280.f_38 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		Local_280.f_17[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_24)
	{
		Local_280.f_24[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_21)
	{
		Local_280.f_21[iVar0] = 0;
		iVar0++;
	}
	sLocal_407 = "";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_411)
	{
		iLocal_411[iVar0] = "";
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_412)
	{
		iLocal_412[iVar0] = "";
		iVar0++;
	}
}

void func_208(int* iParam0)//Position - 0x8D6
{
	if (PED::IS_PED_MALE(*iParam0))
	{
		if (__LIB_39__::func_124(&iLocal_416))
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, iLocal_411[iLocal_416]);
			iLocal_416++;
		}
		else
		{
			iLocal_416 = 0;
		}
	}
	else if (__LIB_39__::func_123(&iLocal_417))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(*iParam0, iLocal_412[iLocal_417]);
		iLocal_417++;
	}
	else
	{
		iLocal_417 = 0;
	}
	if (!Local_280.f_0 == 81)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_407))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*iParam0, sLocal_407, "SPEECH_PARAMS_FORCE", 1);
		}
	}
}

void func_209(int* iParam0)//Position - 0xD6A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	__LIB_39__::func_125(iParam0);
	__LIB_0__::func_0(iParam0);
	*iParam0 = 0;
}

int func_210(int iParam0)//Position - 0x20BC
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_121(iParam0))
	{
		return 0;
	}
	if (!__LIB_39__::func_130(&iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_333)
	{
		if (__LIB_0__::func_121(iLocal_333[iVar1]) && iLocal_333[iVar1] == iParam0)
		{
			return 1;
		}
		iVar1++;
	}
	iLocal_333[iVar0] = iParam0;
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_333[iVar0], true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_333[iVar0], 1);
	return 1;
}

void func_211(int* iParam0, bool bParam1)//Position - 0x22A1
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_121(*iParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(*iParam0, false);
	__LIB_39__::func_125(iParam0);
	__LIB_0__::func_124(iParam0, bParam1, 0, 1);
	*iParam0 = 0;
}

int func_212(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x23E2
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_39__::func_132(iParam1, &iVar2, &uVar0, 1, 1))
	{
		return 0;
	}
	iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, iParam5, iParam0, iVar2, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (iParam2 != 0 && iParam2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iVar1, iParam2, -1, true, true);
	}
	if (bParam3)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("HATES_PLAYER"));
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, bParam4);
	return iVar1;
}

void func_213(int iParam0, int iParam1)//Position - 0x3F2A
{
	__LIB_0__::func_121(iParam0);
	if (__LIB_39__::func_142(iParam0))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RampageCarExploded"))
		{
			if (DECORATOR::DECOR_SET_BOOL(iParam0, "RampageCarExploded", true))
			{
				if (bLocal_361)
				{
					HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_VDED");
					HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
				Local_277.f_6++;
				if (iParam1 == 1)
				{
				}
			}
		}
	}
}

void func_214(var uParam0)//Position - 0x9A2D
{
	int iVar0;
	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = 1;
	if (__LIB_39__::func_152(uParam0))
	{
		iVar0 = 2;
		iLocal_282++;
	}
	__LIB_16__::func_617(&Local_286, 17, uParam0->f_2, "", uParam0->f_1, 0, iVar0, 0);
}

void func_215(int iParam0, float fParam1, bool bParam2, float fParam3)//Position - 0xA298
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	var uVar7[32];
	bool bVar8;
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar7);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_0__::func_715(uVar7[iVar1]))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(uVar7[iVar1])))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar7[iVar1], true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) <= (fParam1 * fParam1))
				{
					bVar8 = true;
					if (bParam2)
					{
						Var4 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(uVar7[iVar1], true)) };
						bVar8 = __LIB_0__::func_158(Var4, ENTITY::GET_ENTITY_FORWARD_VECTOR(uVar7[iVar1])) < SYSTEM::COS(fParam3);
					}
					if (bVar8)
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar7[iVar1], -1, false);
						if (__LIB_0__::func_715(iVar5))
						{
							if (!__LIB_39__::func_156(iVar5))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
								TASK::OPEN_SEQUENCE_TASK(&iVar6);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_SMART_FLEE_PED(0, iParam0, 300f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar6);
								TASK::TASK_PERFORM_SEQUENCE(iVar5, iVar6);
								TASK::CLEAR_SEQUENCE_TASK(&iVar6);
							}
						}
						iVar2 = 0;
						iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uVar7[iVar1]);
						iVar2 = 0;
						while (iVar2 < iVar3)
						{
							iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar7[iVar1], iVar2, false);
							if (__LIB_0__::func_715(iVar5))
							{
								if (!__LIB_39__::func_156(iVar5))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar5, true);
									TASK::OPEN_SEQUENCE_TASK(&iVar6);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_SMART_FLEE_PED(0, iParam0, 300f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iVar6);
									TASK::TASK_PERFORM_SEQUENCE(iVar5, iVar6);
									TASK::CLEAR_SEQUENCE_TASK(&iVar6);
								}
							}
							iVar2++;
						}
					}
				}
			}
		}
		iVar1++;
	}
}

void func_216(bool bParam0)//Position - 0x3B4B9
{
	int iVar0;
	bool bVar1;
	__LIB_39__::func_174();
	__LIB_17__::func_133("TRVRAMP", 0, bParam0, 0);
	__LIB_39__::func_173("MP_BIG_MESSAGE_FREEMODE", &iLocal_375, bParam0);
	__LIB_39__::func_172("SCRIPT\RAMPAGE_01", bParam0);
	__LIB_39__::func_172("SCRIPT\RAMPAGE_02", bParam0);
	bVar1 = false;
	if (bParam0)
	{
		while (!bVar1)
		{
			if (AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0))
			{
				bVar1 = true;
			}
			else if (iLocal_369 > 50)
			{
				bVar1 = true;
			}
			else
			{
				iLocal_369++;
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		AUDIO::LOAD_STREAM("RAMPAGE_STREAMING_BED_MASTER", 0);
	}
	__LIB_39__::func_171("missrampageintrooutro", bParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_17)
	{
		if (Local_280.f_17[iVar0] != 0 && Local_280.f_17[iVar0] != joaat("WEAPON_UNARMED"))
		{
			__LIB_39__::func_122(Local_280.f_17[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_27)
	{
		if (Local_280.f_27[iVar0] != 0)
		{
			__LIB_39__::func_170(Local_280.f_27[iVar0], bParam0);
			PED::SET_PED_MODEL_IS_SUPPRESSED(Local_280.f_27[iVar0], true);
		}
		iVar0++;
	}
	if (Local_280.f_36 != 0)
	{
		__LIB_39__::func_170(Local_280.f_36, bParam0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_280.f_32)
	{
		if (Local_280.f_32[iVar0] != 0)
		{
			__LIB_39__::func_170(Local_280.f_32[iVar0], bParam0);
		}
		iVar0++;
	}
}

void func_217(int iParam0)//Position - 0x46F9A
{
	switch (iParam0)
	{
		case 77:
			__LIB_39__::func_183(&(Local_308[0 /*8*/]), 917.5861f, 3593.5764f, 32.1551f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[1 /*8*/]), 899.7161f, 3607.4707f, 31.8142f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[2 /*8*/]), 889.1971f, 3618.664f, 31.8218f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[3 /*8*/]), 901.7499f, 3586.1833f, 32.4256f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[4 /*8*/]), 915.1172f, 3569.61f, 32.7876f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[5 /*8*/]), 979.5751f, 3584.9543f, 32.493f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[6 /*8*/]), 999.9662f, 3583.392f, 32.6675f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[7 /*8*/]), 956.1263f, 3620.4758f, 31.6291f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[8 /*8*/]), 864.4873f, 3671.1313f, 31.8982f, 0f, 0f, 0f);
			__LIB_39__::func_183(&(Local_308[9 /*8*/]), 921.76f, 3644.44f, 31.5245f, 0f, 0f, 0f);
			break;
	}
}

void func_218(int iParam0)//Position - 0x470E8
{
	__LIB_39__::func_185(&Local_281);
	switch (iParam0)
	{
		case 77:
			__LIB_39__::func_184(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_39__::func_184(&(Local_281[1 /*3*/]), 2, 3);
			__LIB_39__::func_184(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 81:
			__LIB_39__::func_184(&(Local_281[0 /*3*/]), 1, 30);
			__LIB_39__::func_184(&(Local_281[1 /*3*/]), 2, 10);
			__LIB_39__::func_184(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 78:
			__LIB_39__::func_184(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_39__::func_184(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_39__::func_184(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 79:
			__LIB_39__::func_184(&(Local_281[0 /*3*/]), 1, 50);
			__LIB_39__::func_184(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_39__::func_184(&(Local_281[2 /*3*/]), 4, 2);
			break;
		case 80:
			__LIB_39__::func_184(&(Local_281[0 /*3*/]), 1, 45);
			__LIB_39__::func_184(&(Local_281[1 /*3*/]), 2, 6);
			__LIB_39__::func_184(&(Local_281[2 /*3*/]), 9, 2);
			break;
	}
}

void func_219(int iParam0)//Position - 0x472DA
{
	__LIB_39__::func_186(&Local_285);
	switch (iParam0)
	{
		case 77:
			Local_285.f_4 = 0.12f;
			Local_285.f_5 = 0.12f;
			Local_285.f_6 = 0.1f;
			Local_285.f_7 = 0.5f;
			Local_285.f_16 = 30;
			Local_285.f_17 = 55;
			Local_285.f_2 = 0.25f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		case 81:
			Local_285.f_4 = 0.032f;
			Local_285.f_5 = 0.015f;
			Local_285.f_6 = 0.4f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 40;
			Local_285.f_2 = 0.25f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		case 80:
			Local_285.f_4 = 0.12f;
			Local_285.f_5 = 0.09f;
			Local_285.f_6 = 0.2f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 50;
			Local_285.f_2 = 0.11f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
		default:
			Local_285.f_4 = 0.032f;
			Local_285.f_5 = 0.015f;
			Local_285.f_6 = 0.4f;
			Local_285.f_7 = 0.6f;
			Local_285.f_16 = 20;
			Local_285.f_17 = 40;
			Local_285.f_2 = 0.2f;
			Local_285.f_20 = 1f;
			Local_285.f_8 = 0.5f;
			break;
	}
}

void func_220(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x4853A
{
	*uParam0 = 1;
	uParam0->f_1[0 /*3*/] = { Param1 };
	uParam0->f_1[1 /*3*/] = { Param2 };
	uParam0->f_8 = fParam3;
	uParam0->f_16 = (Param2.f_2 - Param1.f_2);
	Param2.f_2 = Param1.f_2;
	uParam0->f_9 = { __LIB_0__::func_79(Param2 - Param1) };
	uParam0->f_15 = __LIB_39__::func_188(Param1, Param2);
	uParam0->f_12 = { uParam0->f_9.f_1, uParam0->f_9, uParam0->f_9.f_2 };
}

int func_221(var uParam0, var* uParam1)//Position - 0x114A
{
	struct<3> Var0;
	bool bVar1;
	var uVar2;
	int iVar3;
	Var0 = { __LIB_39__::func_129(uParam0->f_1) };
	bVar1 = false;
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Var0, bVar1, uParam1, 12))
	{
		return 0;
	}
	if (uParam0->f_35 > 0f)
	{
		if (uParam1->f_2 > uParam0->f_35 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) > uParam0->f_39)
		{
			return 0;
		}
	}
	uParam1->f_2 = (uParam1->f_2 + 0.25f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar2, false, false))
	{
		uParam1->f_2 = uVar2;
	}
	if (SYSTEM::VDIST2(*uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < (Local_357.f_1 * Local_357.f_1))
	{
		if (bLocal_314)
		{
			Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - CAM::GET_GAMEPLAY_CAM_COORD()) };
			if (__LIB_16__::func_46(Var0, CAM::GET_GAMEPLAY_CAM_COORD(), *uParam1) <= 0)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, uParam0->f_18.f_1[0 /*3*/], uParam0->f_18.f_1[1 /*3*/], uParam0->f_18.f_8, false, true))
	{
		return 0;
	}
	if (PED::IS_ANY_PED_NEAR_POINT(*uParam1, 1.5f))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iLocal_322)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam1, Local_321[iVar3 /*17*/].f_1[0 /*3*/], Local_321[iVar3 /*17*/].f_1[1 /*3*/], Local_321[iVar3 /*17*/].f_8, false, true))
		{
			return 0;
		}
		iVar3++;
	}
	if (CAM::IS_SPHERE_VISIBLE(*uParam1, 0.25f))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(Local_280.f_27[0], *uParam1, true))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_222(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, var uParam7)//Position - 0x5D27
{
	int iVar0;
	if (__LIB_1__::func_76(sParam3))
	{
		sParam3 = "TIMER_TIME" /* GXT: TIME */;
	}
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	__LIB_1__::func_350(iParam2, sParam3, iParam4, iVar0, iParam6, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	if (__LIB_1__::func_76(sParam1))
	{
		sParam1 = "TIMER_KILL" /* GXT: KILLED */;
	}
	__LIB_39__::func_196(iParam0, sParam1, iParam6, uParam7, 4, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
}

void func_223(int* iParam0)//Position - 0x5A2C
{
	if (!Local_280.f_0 == 81)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_11) || MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_10))
	{
		__LIB_39__::func_195(iParam0);
	}
	if (iParam0->f_12 == 0)
	{
		iParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 15000));
	}
	if (MISC::GET_GAME_TIMER() > iParam0->f_12)
	{
		__LIB_0__::func_787(&uLocal_420, Local_280.f_3, iParam0->f_11, 6, 1, 0, 0);
		iParam0->f_12 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000));
	}
}

void func_224(int* iParam0)//Position - 0x3FD6
{
	struct<3> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_2, false))
	{
		Local_277.f_10++;
		VEHICLE::EXPLODE_VEHICLE(iParam0->f_2, true, false);
		__LIB_39__::func_144(iParam0, 1);
		return;
	}
	iParam0->f_3 = __LIB_0__::func_76(iParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	if (iParam0->f_3 > (iParam0->f_4 + 100f))
	{
		__LIB_39__::func_144(iParam0, 1);
		return;
	}
	if (!__LIB_0__::func_121(*iParam0))
	{
		__LIB_39__::func_144(iParam0, 1);
		return;
	}
	VEHICLE::SET_VEHICLE_TURRET_SPEED_THIS_FRAME(iParam0->f_2, 0.7f);
	switch (iParam0->f_6)
	{
		case 0:
			PED::SET_PED_ACCURACY(*iParam0, 100);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 40f, 786436, -1f, -1f, true);
			iParam0->f_6 = 1;
			break;
		case 1:
			if (iParam0->f_3 < 35f)
			{
				TASK::CLEAR_PED_TASKS(*iParam0);
				TASK::TASK_VEHICLE_TEMP_ACTION(*iParam0, iParam0->f_2, 24, 100);
				iParam0->f_6 = 2;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, true);
			}
			break;
		case 2:
			if (!iLocal_372)
			{
				if (__LIB_0__::func_787(&uLocal_420, Local_280.f_3, "RAMP5_TANK", 7, 0, 0, 0))
				{
					iLocal_372 = 1;
				}
			}
			TASK::CLEAR_PED_TASKS(*iParam0);
			iParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var0 = { __LIB_39__::func_143(iParam0) };
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, Var0, 20f);
			iParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			iParam0->f_6 = 3;
			break;
		case 3:
			if (FIRE::IS_EXPLOSION_IN_SPHERE(5, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f) || MISC::GET_GAME_TIMER() >= iParam0->f_5)
			{
				iParam0->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
				iParam0->f_6 = 4;
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() >= iParam0->f_5)
			{
				TASK::CLEAR_PED_TASKS(*iParam0);
				iParam0->f_6 = 6;
			}
			else if (iParam0->f_3 < 10f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 8, 30f, 786436, -1f, -1f, true);
				}
			}
			else if (iParam0->f_3 < 35f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
				{
					TASK::TASK_VEHICLE_TEMP_ACTION(*iParam0, iParam0->f_2, 24, 100);
					TASK::CLEAR_PED_TASKS(*iParam0);
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_AIM_AT_COORD")) > 1)
				{
					TASK::CLEAR_PED_TASKS(*iParam0);
					TASK::TASK_VEHICLE_AIM_AT_COORD(*iParam0, iParam0->f_7);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, iParam0->f_2, PLAYER::PLAYER_PED_ID(), 4, 50f, 786436, 30f, -1f, true);
			}
			break;
		case 6:
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::TASK_VEHICLE_SHOOT_AT_COORD(*iParam0, iParam0->f_7, 20f);
			iParam0->f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iParam0->f_5 = MISC::GET_GAME_TIMER() + 6000;
			iParam0->f_6 = 3;
			break;
	}
}

void func_225(int iParam0)//Position - 0x6294
{
	float fVar0;
	__LIB_0__::func_121(iParam0);
	if (!__LIB_39__::func_148(iParam0))
	{
		Local_277.f_2++;
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	__LIB_39__::func_203();
	Local_277.f_0++;
	if (__LIB_23__::func_570(iParam0))
	{
		Local_277.f_1++;
		if (bLocal_361)
		{
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("NOT_HEAD");
			HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		if ((Local_277.f_0 % 5) == 0)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_HEAD_SHOT_MASTER", 0, true);
		}
	}
	else if ((Local_277.f_0 % 5) == 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_ROAR_MASTER", 0, true);
	}
	else if ((MISC::GET_GAME_TIMER() - Local_277.f_11) > 64)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "RAMPAGE_KILLED_COUNTER_MASTER", 0, true);
	}
	Local_277.f_11 = MISC::GET_GAME_TIMER();
	Local_277.f_16++;
	fVar0 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iParam0, 1);
	if (fVar0 <= 2f)
	{
		Local_277.f_4++;
	}
	if (fVar0 >= 50f)
	{
		Local_277.f_5++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		Local_277.f_8++;
	}
	if (__LIB_39__::func_147(iParam0))
	{
		Local_277.f_3++;
	}
}

int func_226(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x15ED
{
	bool bVar0;
	int iVar1;
	iVar1 = __LIB_39__::func_126();
	*iParam0 = PED::CREATE_PED(26, iVar1, Param1, fParam2, true, true);
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		__LIB_39__::func_209(iParam0);
		return 0;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true);
	__LIB_14__::func_808(*iParam0, Param1);
	PED::SET_PED_MONEY(*iParam0, 0);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, 120, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, 120);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, true, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 16, true);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	bVar0 = true;
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 11, bVar0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, bVar0);
	TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
	Local_277.f_12++;
	iLocal_336++;
	__LIB_39__::func_208(iParam0);
	PED::SET_PED_ACCURACY(*iParam0, 2);
	PED::SET_PED_COMBAT_ABILITY(*iParam0, 0);
	iParam0->f_3 = 1;
	return 1;
}

int func_227(var uParam0, struct<3> Param1, float fParam2)//Position - 0x2900
{
	int iVar0;
	uParam0->f_2 = VEHICLE::CREATE_VEHICLE(joaat("rhino"), Param1, fParam2, true, true, false);
	if (!__LIB_0__::func_121(uParam0->f_2))
	{
		return 0;
	}
	*uParam0 = __LIB_39__::func_212(Local_280.f_27[0], uParam0->f_2, joaat("VEHICLE_WEAPON_TANK"), 1, 1, 26);
	uParam0->f_1 = __LIB_14__::func_866(uParam0->f_2, 0, 5);
	PED::SET_PED_CAN_BE_DRAGGED_OUT(*uParam0, false);
	ENTITY::SET_ENTITY_PROOFS(uParam0->f_2, true, true, false, false, true, false, false, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_2, 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_2, false);
	iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_2) * 2;
	ENTITY::SET_ENTITY_MAX_HEALTH(uParam0->f_2, iVar0);
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_2, iVar0, 0);
	uParam0->f_3 = __LIB_0__::func_76(uParam0->f_2, PLAYER::PLAYER_PED_ID(), 1);
	uParam0->f_4 = uParam0->f_3;
	PED::SET_PED_SEEING_RANGE(*uParam0, 100f);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 27, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, true);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { 0f, 0f, 0f };
	return 1;
}

void func_228(int iParam0)//Position - 0x617C
{
	int iVar0;
	int iVar1;
	var uVar2[20];
	if (__LIB_0__::func_121(iParam0))
	{
		iVar1 = PED::GET_PED_NEARBY_VEHICLES(iParam0, &uVar2);
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (ENTITY::IS_ENTITY_DEAD(uVar2[iVar0], false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar2[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					__LIB_39__::func_213(uVar2[iVar0], 0);
				}
			}
			iVar0++;
		}
	}
}

float func_229(var uParam0)//Position - 0x9E76
{
	int iVar0;
	iVar0 = __LIB_39__::func_154(uParam0);
	if (iVar0 == 0)
	{
		return 0f;
	}
	return (SYSTEM::TO_FLOAT(__LIB_39__::func_205(uParam0)) / SYSTEM::TO_FLOAT(iVar0));
}

void func_230(int* iParam0)//Position - 0xA05E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_692(*iParam0))
	{
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(*iParam0, true);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, true);
		TASK::CLEAR_PED_TASKS(*iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bLocal_419);
		TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 400f, -1, false, false);
		PED::SET_PED_MONEY(*iParam0, 0);
	}
	__LIB_39__::func_211(iParam0, 1);
}

int func_231(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x4887D
{
	if (iLocal_322 >= Local_321.f_0)
	{
		return 0;
	}
	__LIB_39__::func_220(&(Local_321[iLocal_322 /*17*/]), Param0, Param1, fParam2);
	iLocal_322++;
	return 1;
}

void func_232(int iParam0)//Position - 0x488B1
{
	struct<3> Var0;
	struct<3> Var1;
	__LIB_39__::func_207();
	Local_280.f_0 = iParam0;
	Local_364 = { __LIB_39__::func_175() };
	switch (iParam0)
	{
		case 77:
			iLocal_275 = 52;
			Local_280.f_1 = 0;
			Local_280.f_16 = SYSTEM::CEIL((2f * 60000f));
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_17[0] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_24[0] = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
			Local_280.f_24[1] = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_27[0] = joaat("A_M_M_Hillbilly_01");
			Local_280.f_27[1] = joaat("A_M_Y_Salton_01");
			Local_280.f_27[2] = joaat("IG_Ramp_Hic");
			Local_280.f_37 = 2;
			Local_280.f_32[0] = joaat("bfinjection");
			Local_280.f_32[1] = joaat("bison");
			Local_280.f_38 = 2;
			Local_280.f_2 = "TR_RTGT1";
			Local_280.f_5 = "TR_RAMP1";
			Local_280.f_49 = 0.33f;
			Local_280.f_52 = 1;
			Local_280.f_36 = joaat("prop_gascyl_01a");
			Local_280.f_6 = "Rampage1";
			Local_280.f_43 = { 908.7723f, 3641.4531f, 31.4889f };
			Local_280.f_46 = 270.3831f;
			Local_280.f_39 = { 899.2652f, 3649.5786f, 31.7623f };
			Local_280.f_42 = 269.0209f;
			Local_280.f_53 = 25;
			iLocal_411[0] = "A_M_M_SALTON_02_WHITE_FULL_01";
			iLocal_411[1] = "A_M_O_SALTON_01_WHITE_FULL_01 ";
			iLocal_411[2] = "A_M_M_HILLBILLY_01_WHITE_MINI_01";
			iLocal_411[3] = "A_M_M_HILLBILLY_02_WHITE_MINI_01";
			iLocal_411[4] = "A_M_Y_SALTON_01_WHITE_MINI_01";
			sLocal_407 = "GENERIC_INSULT_HIGH";
			iLocal_370 = "RAMPAGE_REDNECKS_SCENE";
			iLocal_595 = 28000;
			break;
		case 81:
			iLocal_275 = 53;
			Local_280.f_1 = 1;
			Local_280.f_17[0] = joaat("WEAPON_SAWNOFFSHOTGUN");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_BAT");
			Local_280.f_16 = 120000;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_27[0] = joaat("A_M_Y_Hipster_03");
			Local_280.f_27[1] = joaat("A_M_Y_Hipster_02");
			Local_280.f_27[2] = joaat("A_M_Y_Hipster_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Hipster");
			Local_280.f_37 = 3;
			Local_280.f_32[0] = joaat("faggio2");
			Local_280.f_32[1] = joaat("fixter");
			Local_280.f_32[2] = joaat("issi2");
			Local_280.f_38 = 3;
			Local_280.f_43 = { 1181.1375f, -400.7188f, 66.913f };
			Local_280.f_46 = 218.467f;
			Local_280.f_39 = { 1193.6074f, -392.7852f, 67.0623f };
			Local_280.f_42 = 164.6903f;
			Local_280.f_2 = "TR_RTGT2";
			Local_280.f_5 = "TR_RAMP5";
			Local_280.f_48 = 1f;
			Local_280.f_47 = 0.2f;
			iLocal_411[0] = "A_M_Y_Hipster_03_White_Mini_01";
			iLocal_411[1] = "A_M_Y_Vinewood_02_White_Mini_01";
			iLocal_411[2] = "A_M_Y_Vinewood_03_White_Mini_01";
			iLocal_411[3] = "A_M_Y_Vinewood_04_White_Mini_01";
			iLocal_412[0] = "A_F_Y_Hipster_01_White_Mini_01";
			iLocal_412[1] = "A_F_Y_Vinewood_01_White_Mini_01";
			iLocal_412[2] = "A_F_Y_Vinewood_02_White_Mini_01";
			iLocal_412[3] = "A_F_Y_Vinewood_03_Chinese_Mini_01";
			iLocal_412[4] = "A_F_Y_Vinewood_04_White_Mini_01";
			sLocal_407 = "RAMPAGEHIPSTER";
			iLocal_370 = "RAMPAGE_HIPSTERS_SCENE";
			Local_280.f_53 = 20;
			fLocal_319 = 0f;
			fLocal_320 = 0f;
			iLocal_595 = 17000;
			fLocal_365 = 600f;
			iLocal_378 = 0;
			break;
		case 78:
			iLocal_275 = 54;
			Local_280.f_1 = 2;
			Local_280.f_16 = 120000;
			Local_280.f_11 = "trvram_6_1h_intro";
			Local_280.f_12 = "trvram_6_1h_outro";
			Local_280.f_13 = "trvram_6_1h_run_outro";
			Local_280.f_14 = 0.19f;
			Local_280.f_15 = 0.24f;
			Local_280.f_17[0] = joaat("WEAPON_MICROSMG");
			Local_280.f_24[0] = joaat("COMPONENT_AT_SCOPE_MACRO");
			Local_280.f_24[1] = joaat("COMPONENT_MICROSMG_CLIP_02");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_27[0] = joaat("A_M_M_MexLabor_01");
			Local_280.f_27[1] = joaat("G_M_Y_MexGoon_03");
			Local_280.f_27[2] = joaat("A_M_Y_MexThug_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Mex");
			Local_280.f_37 = 3;
			Local_280.f_32[0] = joaat("cavalcade2");
			Local_280.f_32[1] = joaat("vigero");
			Local_280.f_38 = 2;
			Local_280.f_43 = { 463.9719f, -1848.9276f, 26.864f };
			Local_280.f_46 = 135.7623f;
			Local_280.f_39 = { 444.072f, -1861.689f, 26.5592f };
			Local_280.f_42 = 131.0001f;
			Local_280.f_2 = "TR_RTGT3";
			Local_280.f_5 = "TR_RAMP2";
			Local_280.f_53 = 30;
			iLocal_595 = 15500;
			sLocal_407 = "GENERIC_INSULT_HIGH";
			iLocal_370 = "RAMPAGE_VAGOS_SCENE";
			break;
		case 79:
			iLocal_275 = 55;
			Local_280.f_1 = 3;
			Local_280.f_16 = 120000;
			Local_280.f_17[0] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_27[0] = joaat("G_M_Y_BallaEast_01");
			Local_280.f_27[1] = joaat("G_M_Y_BallaOrig_01");
			Local_280.f_27[2] = joaat("G_M_Y_BallaSout_01");
			Local_280.f_27[3] = joaat("IG_Ramp_Gang");
			Local_280.f_37 = 3;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_32[0] = joaat("oracle");
			Local_280.f_32[1] = joaat("felon");
			Local_280.f_38 = 2;
			Local_280.f_43 = { -162.3577f, -1668.2686f, 32.1239f };
			Local_280.f_46 = 327.584f;
			Local_280.f_39 = { -168.0764f, -1633.8662f, 32.6486f };
			Local_280.f_42 = 262.9751f;
			Local_280.f_2 = "TR_RTGT4";
			Local_280.f_5 = "TR_RAMP3";
			Local_280.f_53 = 30;
			Local_364 = { -129f, -1622.7f, 32.1f };
			iLocal_595 = 14100;
			iLocal_370 = "RAMPAGE_BALLAS_SCENE";
			break;
		case 80:
			iLocal_275 = 56;
			Local_280.f_1 = 4;
			Local_280.f_11 = "trvram_6_2h_intro";
			Local_280.f_12 = "trvram_6_2h_outro";
			Local_280.f_13 = "trvram_6_2h_run_outro";
			Local_280.f_14 = 0.15f;
			Local_280.f_15 = 0.37f;
			Local_280.f_17[0] = joaat("WEAPON_GRENADELAUNCHER");
			Local_280.f_17[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_21[0] = joaat("WEAPON_PISTOL");
			Local_280.f_21[1] = joaat("WEAPON_ASSAULTRIFLE");
			Local_280.f_27[0] = joaat("S_M_Y_Marine_01");
			Local_280.f_27[1] = joaat("S_M_Y_Marine_03");
			Local_280.f_37 = 2;
			Local_280.f_32[0] = joaat("crusader");
			Local_280.f_32[1] = joaat("barracks");
			Local_280.f_32[2] = joaat("rhino");
			Local_280.f_38 = 2;
			Local_280.f_43 = { -1295.7534f, 2507.1167f, 20.2824f };
			Local_280.f_46 = 336.2132f;
			Local_280.f_39 = { -1317.2107f, 2482.0774f, 22.8051f };
			Local_280.f_42 = 311.7142f;
			Local_280.f_2 = "TR_RTGT5";
			Local_280.f_5 = "TR_RAMP4";
			Local_280.f_53 = 35;
			Local_280.f_54 = 19780921;
			fLocal_320 = 0.8f;
			iLocal_595 = 16000;
			iLocal_370 = "RAMPAGE_MILITARY_SCENE";
			break;
		default:
			break;
	}
	__LIB_39__::func_189();
	if (!__LIB_0__::func_86(Local_280.f_7) && Local_280.f_10 > 0f)
	{
		__LIB_14__::func_822(Local_280.f_7, Local_280.f_10, &Var0, &Var1);
		iLocal_306 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_280.f_6))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(Local_280.f_6, false);
	}
	__LIB_14__::func_822(Local_364, fLocal_365, &Var0, &Var1);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Var0, Var1, false);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Var0, Var1, 0);
}

void func_233(int* iParam0, bool bParam1)//Position - 0x7D8
{
	if (!__LIB_0__::func_692(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		__LIB_39__::func_190(iParam0);
	}
	iParam0->f_6 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, true);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, 120, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, 120);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, true, joaat("PLAYER"));
	TASK::SET_PED_PATH_AVOID_FIRE(*iParam0, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, true);
	PED::SET_PED_CAN_BE_TARGETED_WHEN_INJURED(*iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, false);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(*iParam0, true);
	PED::SET_PED_MONEY(*iParam0, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 23, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 47, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	__LIB_39__::func_208(iParam0);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*iParam0, 200f);
	PED::SET_PED_MONEY(*iParam0, 0);
}

void func_234(int* iParam0)//Position - 0x1EDD
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (iLocal_378 == 4)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			if (iParam0->f_2[iVar0] != -1)
			{
				if (__LIB_0__::func_121(Local_323[iParam0->f_2[iVar0] /*13*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_323[iParam0->f_2[iVar0] /*13*/], 3, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_323[iParam0->f_2[iVar0] /*13*/], 1, false);
					if (Local_323[iParam0->f_2[iVar0] /*13*/].f_5 > 120f)
					{
						__LIB_39__::func_211(&(Local_323[iParam0->f_2[iVar0] /*13*/]), 0);
						iParam0->f_2[iVar0] = -1;
					}
					else
					{
						__LIB_39__::func_131(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
						iParam0->f_2[iVar0] = -1;
					}
				}
				else if (iVar0 == 0)
				{
					iParam0->f_2[iVar0] = -1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			iParam0->f_2[iVar0] = -1;
			iVar0++;
		}
		if (__LIB_0__::func_121(*iParam0))
		{
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, false);
			if (iParam0->f_1 == 1)
			{
				if (__LIB_39__::func_210(*iParam0))
				{
					*iParam0 = 0;
					return;
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_2)
		{
			if (iParam0->f_2[iVar0] != -1)
			{
				if (__LIB_0__::func_121(Local_323[iParam0->f_2[iVar0] /*13*/]))
				{
					TASK::TASK_SMART_FLEE_COORD(Local_323[iParam0->f_2[iVar0] /*13*/], ENTITY::GET_ENTITY_COORDS(*iParam0, true), 200f, -1, false, false);
					__LIB_39__::func_211(&(Local_323[iParam0->f_2[iVar0] /*13*/]), 1);
				}
				iParam0->f_2[iVar0] = -1;
			}
			iVar0++;
		}
	}
	__LIB_0__::func_106(iParam0);
	*iParam0 = 0;
}

void func_235()//Position - 0x3EB9
{
	int iVar0;
	iVar0 = 0;
	iLocal_334 = 0;
	__LIB_12__::func_768(iLocal_334);
	iVar0 = 0;
	while (iVar0 < iLocal_333)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_333[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_333[iVar0], false))
			{
				__LIB_39__::func_213(iLocal_333[iVar0], 0);
				__LIB_0__::func_106(&(iLocal_333[iVar0]));
				iLocal_333[iVar0] = 0;
			}
			else
			{
				iLocal_334++;
			}
		}
		iVar0++;
	}
}

void func_236(int iParam0)//Position - 0x9FDA
{
	int iVar0;
	int iVar1;
	iVar0 = (Local_280.f_16 - (Local_277.f_14 - Local_277.f_13));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() < iVar1)
	{
		__LIB_39__::func_157();
		__LIB_39__::func_222(Local_277.f_0, "TR_HKILL", iVar0, "TR_HTIME", 0, 0, -1, iLocal_380[iLocal_303]);
		SYSTEM::WAIT(0);
	}
}

struct<17> func_237(struct<9> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)//Position - 0x484C6
{
	struct<17> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	Var0.f_1 = 2;
	Var1 = { __LIB_0__::func_79(Param0.f_1[1 /*3*/] - Param0.f_1[0 /*3*/]) * Vector(fParam9, fParam9, fParam9) };
	Var2 = { Param0.f_1[0 /*3*/] - Var1 };
	Var3 = { Param0.f_1[1 /*3*/] + Var1 };
	fVar4 = (Param0.f_8 + (fParam9 * 2f));
	__LIB_39__::func_220(&Var0, Var2, Var3, fVar4);
	return Var0;
}

void func_238()//Position - 0x5C62
{
	int iVar0;
	int iVar1;
	iVar0 = Local_277.f_0;
	iVar1 = (Local_280.f_16 - (MISC::GET_GAME_TIMER() - Local_277.f_13));
	if (iLocal_316 == 0)
	{
		if (iVar1 <= 0)
		{
			iVar1 = 0;
			iLocal_378 = 5;
			if (iVar0 >= Local_280.f_53)
			{
				Local_280.f_50 = 1;
			}
		}
	}
	if (!iLocal_311)
	{
		iLocal_311 = 1;
		if (Local_280.f_0 == 80)
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_310, "RAMPAGE_TIMER_COUNTDOWN_LOOP_3_MIN_MASTER", 0, true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_310, "RAMPAGE_TIMER_COUNTDOWN_LOOP_MASTER", 0, true);
		}
	}
	if (iVar1 <= 0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
	}
	else if (iVar1 < iLocal_373)
	{
		iLocal_373 = (iLocal_373 - 1000);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
	}
	__LIB_39__::func_222(iVar0, "TR_HKILL", iVar1, "TR_HTIME", 0, 0, -1, iLocal_380[iLocal_303]);
}

void func_239(int* iParam0)//Position - 0x56F9
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(*iParam0) || ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		__LIB_39__::func_211(iParam0, 0);
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
	if (Var0.f_2 < -10f)
	{
		__LIB_39__::func_211(iParam0, 0);
		return;
	}
	__LIB_39__::func_223(iParam0);
	if (Local_280.f_0 == 80 && __LIB_0__::func_121(Local_325.f_2))
	{
		if (PED::GET_COMBAT_FLOAT(*iParam0, 6) != 0.05f)
		{
			PED::SET_COMBAT_FLOAT(*iParam0, 6, 0.05f);
		}
	}
	else if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_COMBAT_FLOAT(*iParam0, 6) != 0.01f)
		{
			PED::SET_COMBAT_FLOAT(*iParam0, 6, 0.01f);
		}
	}
	else if (PED::GET_COMBAT_FLOAT(*iParam0, 6) == 0.01f)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar2, true))
		{
			if (iVar2 == Local_280.f_21[1])
			{
				PED::SET_COMBAT_FLOAT(*iParam0, 6, Local_285.f_5);
			}
			else
			{
				PED::SET_COMBAT_FLOAT(*iParam0, 6, Local_285.f_4);
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		iParam0->f_5 = __LIB_0__::func_76(PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		iParam0->f_5 = __LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iParam0->f_4)
	{
		if (iParam0->f_5 < 25f && ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_MOLOTOV"), 4, true, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(*iParam0, sLocal_407, "SPEECH_PARAMS_FORCE", 1);
			TASK::CLEAR_PED_TASKS(*iParam0);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_THROW_PROJECTILE(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, false);
			TASK::TASK_SWAP_WEAPON(0, true);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			iParam0->f_4 = 0;
		}
	}
	if (iParam0->f_2 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			__LIB_0__::func_714(&(iParam0->f_1));
			if (__LIB_1__::func_606(*iParam0, PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), -1))
			{
				iParam0->f_1 = __LIB_14__::func_866(PED::GET_VEHICLE_PED_IS_IN(*iParam0, false), 0, 5);
			}
			iParam0->f_2 = 1;
			return;
		}
	}
	if (iParam0->f_2 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			__LIB_0__::func_714(&(iParam0->f_1));
			iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
			iParam0->f_2 = 0;
			iParam0->f_6 = iParam0->f_5;
			TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
			return;
		}
	}
	if (iParam0->f_3)
	{
		bVar1 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
		if ((!bVar1 && iParam0->f_5 > (iParam0->f_6 + 40f)) || (bVar1 && iParam0->f_5 > (100f * 2f)))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
			{
				__LIB_39__::func_209(iParam0);
			}
			else
			{
				__LIB_39__::func_211(iParam0, 1);
			}
		}
	}
	else if (iParam0->f_2 == 0 && iParam0->f_5 > (iParam0->f_6 + 100f))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
		{
			__LIB_39__::func_209(iParam0);
		}
	}
}

void func_240()//Position - 0x61DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar0 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar2);
		switch (iVar0)
		{
			case 141:
				SCRIPT::GET_EVENT_DATA(0, iVar2, &iVar1, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							__LIB_39__::func_225(iVar3);
						}
						else if (PED::IS_PED_INJURED(iVar3))
						{
							ENTITY::SET_ENTITY_HEALTH(iVar3, 0, 0);
							__LIB_39__::func_225(iVar3);
						}
					}
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
					{
						iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::IS_ENTITY_DEAD(iVar4, false))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, PLAYER::PLAYER_PED_ID(), true))
							{
								__LIB_39__::func_213(iVar4, 1);
							}
						}
					}
				}
				break;
		}
		iVar2++;
	}
}

int func_241(var uParam0, int iParam1)//Position - 0x235F
{
	int iVar0;
	iVar0 = __LIB_39__::func_126();
	*uParam0 = __LIB_39__::func_212(iVar0, iParam1, joaat("WEAPON_PISTOL"), 1, bLocal_419, 26);
	if (!__LIB_0__::func_121(*uParam0))
	{
		return 0;
	}
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	__LIB_39__::func_233(uParam0, !PED::IS_PED_IN_ANY_HELI(*uParam0));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, bLocal_419);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(*uParam0, 200f);
	PED::SET_PED_MONEY(*uParam0, 0);
	Local_277.f_12++;
	iLocal_336++;
	uParam0->f_2 = 0;
	return 1;
}

void func_242(int* iParam0)//Position - 0x4EEF
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	switch (iParam0->f_12)
	{
		case 0:
			if (!__LIB_0__::func_121(iVar0))
			{
				__LIB_39__::func_234(iParam0);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("VEHICLE_WEAPON_TANK"), -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_76(*iParam0, PLAYER::PLAYER_PED_ID(), 1) > 5f)
			{
				TASK::TASK_VEHICLE_SHOOT_AT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 20f);
				iParam0->f_12 = 2;
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY")) == 7)
			{
				iParam0->f_19 = MISC::GET_GAME_TIMER() + 9000;
				iParam0->f_12 = 3;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_SHOOT_AT_ENTITY")) != 1)
			{
				iParam0->f_12 = 1;
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() > iParam0->f_19)
			{
				iParam0->f_12 = 1;
			}
			break;
	}
}

void func_243(int* iParam0, int iParam1)//Position - 0x5091
{
	int iVar0;
	int iVar1;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	switch (iParam0->f_12)
	{
		case 0:
			if (!__LIB_0__::func_121(iVar1))
			{
				__LIB_39__::func_234(iParam0);
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 7)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					if (iParam0->f_9 > (iParam0->f_18 + 20f))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
						return;
					}
				}
				else if (__LIB_0__::func_724(*iParam0, iParam0->f_14, 1) > (iParam0->f_18 + 20f))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
					return;
				}
				iParam0->f_12 = 1;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					if (Local_280.f_0 == 80)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786468, iParam0->f_18, 15f, true);
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, *iParam0, iParam0->f_14, 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
				}
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iParam0->f_2)
				{
					if (iParam0->f_2[iVar0] != -1)
					{
						if (__LIB_0__::func_692(Local_323[iParam0->f_2[iVar0] /*13*/]))
						{
							__LIB_39__::func_131(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
						}
					}
					iParam0->f_2[iVar0] = -1;
					iVar0++;
				}
				iParam0->f_12 = 3;
				__LIB_39__::func_234(iParam0);
			}
			else
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iParam0->f_2)
				{
					if (iParam0->f_2[iVar0] != -1)
					{
						if (Local_323[iParam0->f_2[iVar0] /*13*/] != iVar1)
						{
							if (__LIB_0__::func_692(Local_323[iParam0->f_2[iVar0] /*13*/]))
							{
								__LIB_39__::func_131(Local_323[iParam0->f_2[iVar0] /*13*/], *iParam0);
							}
							iParam0->f_2[iVar0] = -1;
						}
					}
					iVar0++;
				}
				iParam0->f_12 = 2;
			}
			break;
		case 2:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*iParam0, false, true) == 0 && iParam1)
			{
				if (__LIB_0__::func_692(iVar1))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, *iParam0, PLAYER::PLAYER_PED_ID(), 8, 80f, 786436, 500f, -1f, true);
					iParam0->f_12 = 3;
				}
				else
				{
					return;
				}
			}
			break;
	}
}

void func_244(int* iParam0)//Position - 0x5345
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_121(iVar0))
	{
		__LIB_39__::func_234(iParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
	{
		if (__LIB_0__::func_86(iParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 1, iParam0->f_17, 786436, -1f, -1f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 1, iParam0->f_17, 786436, -1f, -1f, true);
		}
	}
}

void func_245(int* iParam0)//Position - 0x53DD
{
	int iVar0;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar0 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_121(iVar0))
		{
			TASK::CLEAR_PED_TASKS(iVar0);
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 4, iParam0->f_17, 786436, iParam0->f_18, 15f, true);
			iParam0->f_11 = 3;
		}
	}
	if (!__LIB_0__::func_121(iVar0))
	{
		__LIB_39__::func_234(iParam0);
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
	{
		if (__LIB_0__::func_86(iParam0->f_14))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, *iParam0, PLAYER::PLAYER_PED_ID(), 6, iParam0->f_17, 786436, -1f, -1f, true);
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, *iParam0, iParam0->f_14, 6, iParam0->f_17, 786436, -1f, -1f, true);
		}
	}
}

void func_246()//Position - 0x6118
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	__LIB_39__::func_228(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_121(Local_323[iLocal_283 /*13*/]))
		{
			__LIB_39__::func_228(Local_323[iLocal_283 /*13*/]);
			iVar1++;
		}
		iLocal_283++;
		if (iLocal_283 >= 10)
		{
			iLocal_283 = 0;
		}
		if (iVar1 >= 2)
		{
			return;
		}
		iVar0++;
	}
}

int func_247()//Position - 0x9C10
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	float fVar7;
	iVar6 = (Local_280.f_16 - (Local_277.f_14 - Local_277.f_13));
	__LIB_39__::func_155(iVar6, &uVar3, &uVar4, &uVar5);
	iVar2 = Local_277.f_6 * 500;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_17 * 10000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_1 * 5000;
	iVar1 = (iVar1 + iVar2);
	iVar2 = Local_277.f_0 * 1000;
	iVar1 = (iVar1 + iVar2);
	fVar7 = (__LIB_39__::func_229(&Local_281) * 50f);
	iVar0 = 0;
	while (iVar0 < Local_281.f_0)
	{
		if (__LIB_39__::func_152(&(Local_281[iVar0 /*3*/])))
		{
		}
		iVar0++;
	}
	if (Local_277.f_0 >= Local_280.f_53)
	{
		fVar7 = (fVar7 + 50f);
	}
	if ((((((((__LIB_39__::func_153(0) || __LIB_39__::func_153(1)) || __LIB_39__::func_153(2)) || __LIB_39__::func_153(3)) || __LIB_39__::func_153(4)) || __LIB_39__::func_153(6)) || __LIB_39__::func_153(7)) || __LIB_39__::func_153(20)) || __LIB_39__::func_153(10))
	{
		iLocal_303 = 1;
	}
	else if (fVar7 >= 100f)
	{
		iLocal_303 = 3;
	}
	else if (fVar7 >= 75f)
	{
		iLocal_303 = 2;
	}
	else if (fVar7 >= 50f)
	{
		iLocal_303 = 1;
	}
	else
	{
		iLocal_303 = 0;
	}
	if (__LIB_0__::func_2(0))
	{
		if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/] || iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
		{
			MISC::CLEAR_REPLAY_STATS();
			MISC::BEGIN_REPLAY_STATS(13, 37);
			MISC::ADD_REPLAY_STAT_VALUE(Local_280.f_1);
			if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/])
			{
				MISC::ADD_REPLAY_STAT_VALUE(iLocal_303);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_113386.f_2352[Local_280.f_1 /*2*/]);
			}
			if (iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
			{
				MISC::ADD_REPLAY_STAT_VALUE(iVar1);
			}
			else
			{
				MISC::ADD_REPLAY_STAT_VALUE(Global_113386.f_2352[Local_280.f_1 /*2*/].f_1);
			}
			MISC::END_REPLAY_STATS();
		}
	}
	if (iLocal_303 > Global_113386.f_2352[Local_280.f_1 /*2*/])
	{
		Global_113386.f_2352[Local_280.f_1 /*2*/] = iLocal_303;
	}
	if (iVar1 > Global_113386.f_2352[Local_280.f_1 /*2*/].f_1)
	{
		Global_113386.f_2352[Local_280.f_1 /*2*/].f_1 = iVar1;
	}
	return iVar1;
}

void func_248(int iParam0)//Position - 0xA038
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_39__::func_230(iParam0[iVar0 /*13*/]);
		iVar0++;
	}
}

void func_249(int* iParam0, bool bParam1)//Position - 0xA0F0
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (iParam0->f_2[0] == -1)
	{
		return;
	}
	iVar1 = Local_323[iParam0->f_2[0] /*13*/];
	if (!__LIB_0__::func_121(*iParam0))
	{
		return;
	}
	if (__LIB_0__::func_121(iVar1) && !PED::IS_PED_INJURED(iVar1))
	{
		if (bParam1)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) + __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(*iParam0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * Vector(500f, 500f, 500f) };
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Var2, 0, &Var3, 1, 3f, 0f))
			{
				Var3 = { Var2 };
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, *iParam0, false))
			{
				if (__LIB_0__::func_336(iVar1, 0) == -1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, Var3, 4, 60f, 786436, iParam0->f_18, 15f, true);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, *iParam0, 60f, 786469);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iVar1, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_PED(iVar1, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		}
	}
	__LIB_39__::func_211(&(Local_323[iParam0->f_2[0] /*13*/]), 1);
	__LIB_39__::func_234(iParam0);
}

int func_250(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xBC03
{
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam1))
	{
		return 0;
	}
	*uParam0 = *iParam1;
	__LIB_0__::func_714(&(uParam0->f_1));
	uParam0->f_1 = __LIB_14__::func_661(*uParam0, 1, 0, 5);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, true, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
	__LIB_39__::func_233(uParam0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	if (iParam4 == 1)
	{
		if (iParam2 == 0)
		{
			TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		else
		{
			uParam0->f_3 = 1;
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, true);
			TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 600f, -1, false, false);
		}
	}
	else if (iParam2 == 1)
	{
		uParam0->f_3 = 1;
	}
	Local_277.f_12++;
	iLocal_336++;
	uParam0->f_3 = iParam2;
	return 1;
}

void func_251(var uParam0)//Position - 0x44299
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_39__::func_234(uParam0[iVar0 /*20*/]);
		iVar0++;
	}
}

void func_252(int iParam0)//Position - 0x485E6
{
	iLocal_322 = 0;
	switch (iParam0)
	{
		case 77:
			__LIB_39__::func_231(899.08f, 3616.2893f, 30.824312f, 889.8982f, 3616.47f, 33.862087f, 6.3f);
			__LIB_39__::func_231(900.75366f, 3579.7073f, 30.141163f, 916.0252f, 3579.704f, 37.61824f, 13f);
			__LIB_39__::func_231(908.9027f, 3571.474f, 30.782627f, 908.86725f, 3554.104f, 37.818115f, 12f);
			__LIB_39__::func_231(985.62177f, 3578.335f, 30.448856f, 997.5567f, 3569.8901f, 41.186794f, 9.75f);
			__LIB_39__::func_231(954.7393f, 3617.5725f, 30.717031f, 960.03467f, 3617.539f, 34.758904f, 8f);
			break;
		case 81:
			__LIB_39__::func_231(1145.496f, -368.67682f, 66.048904f, 1133.0378f, -417.90536f, 77.88786f, 16.5f);
			__LIB_39__::func_231(1186.174f, -386.63562f, 66.453995f, 1156.4647f, -379.28146f, 72.744225f, 8.75f);
			break;
		case 78:
			__LIB_39__::func_231(413.36664f, -1746.9587f, 27.106783f, 405.91623f, -1742.0536f, 33.078545f, 7.5f);
			__LIB_39__::func_231(444.24518f, -1745.2334f, 26.727312f, 435.74442f, -1741.4211f, 32.967648f, 8.75f);
			__LIB_39__::func_231(468.18805f, -1802.8021f, 26.34261f, 449.5238f, -1787.4714f, 33.342533f, 13f);
			__LIB_39__::func_231(531.59326f, -1806.0286f, 26.562597f, 521.0415f, -1806.0931f, 31.505949f, 10f);
			__LIB_39__::func_231(419.3922f, -1845.8894f, 25.887005f, 425.955f, -1850.8474f, 28.781279f, 7f);
			__LIB_39__::func_231(481.7917f, -1735.0114f, 30.85977f, 488.15057f, -1737.2976f, 26.943594f, 11.2f);
			break;
		case 79:
			__LIB_39__::func_231(-139.40996f, -1648.2852f, 31.54327f, -133.89108f, -1653.2937f, 34.950226f, 3.5f);
			break;
		case 80:
			__LIB_39__::func_231(-1277.2125f, 2569.2905f, 22.069016f, -1284.0968f, 2548.2217f, 28.853512f, 19.25f);
			break;
		default:
			break;
	}
}

int func_253(int* iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x699
{
	int iVar0;
	iVar0 = __LIB_39__::func_126();
	*iParam0 = PED::CREATE_PED(26, iVar0, Param1, fParam2, true, true);
	if (ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		__LIB_39__::func_209(iParam0);
		return 0;
	}
	__LIB_0__::func_714(&(iParam0->f_1));
	iParam0->f_1 = __LIB_14__::func_661(*iParam0, 1, 0, 5);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_304);
	if (iParam3 == 1)
	{
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	}
	__LIB_14__::func_808(*iParam0, Param1);
	__LIB_39__::func_233(iParam0, 1);
	if (fParam2 == 0f)
	{
		__LIB_14__::func_831(*iParam0);
	}
	TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
	Local_277.f_12++;
	iLocal_336++;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return 1;
}

void func_254(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5)//Position - 0x4848A
{
	*uParam0 = iParam4;
	__LIB_39__::func_220(&(uParam0->f_1), Param1, Param2, fParam3);
	uParam0->f_18 = { __LIB_39__::func_237(uParam0->f_1, 2.5f) };
	uParam0->f_43 = iParam5;
}

void func_255(int iParam0)//Position - 0x56BF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_39__::func_239(iParam0[iLocal_335 /*13*/]);
		iLocal_335++;
		if (iLocal_335 >= *iParam0)
		{
			iLocal_335 = 0;
		}
		iVar0++;
	}
}

void func_256(int iParam0)//Position - 0xBF6
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (BitTest(Global_32338[iVar0 /*23*/].f_11, 8) || BitTest(Global_32338[iVar0 /*23*/].f_11, 10))
	{
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	}
	MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 8);
	MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 10);
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_257(int iParam0, int iParam1)//Position - 0x468F
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_32338[iVar0 /*23*/].f_16 == iParam1)
	{
		return;
	}
	Global_32338[iVar0 /*23*/].f_16 = iParam1;
	switch (iParam1)
	{
		case 1:
			Global_32338[iVar0 /*23*/].f_12[0] = 40;
			break;
		case 3:
			Global_32338[iVar0 /*23*/].f_12[0] = 60;
			break;
	}
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
}

void func_258(int iParam0, int iParam1)//Position - 0x4D4C
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (Global_32338[iVar0 /*23*/].f_12[0] == iParam1)
	{
		return;
	}
	Global_32338[iVar0 /*23*/].f_12[0] = iParam1;
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

void func_259(int iParam0, int iParam1)//Position - 0x9724
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 16);
	Global_32338[iVar0 /*23*/].f_22 = iParam1;
	if (Global_32335 == 1)
	{
		Global_32336 = 1;
	}
	Global_32335 = 1;
	MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}

int func_260(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3735
{
	struct<14> Var0;
	if (__LIB_0__::func_2(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (bParam3 < 3)
	{
		if (BitTest(iParam2, bParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_113386.f_7688.f_764 < 8)
	{
		Var0.f_0 = iParam0;
		Var0.f_3 = __LIB_0__::func_713(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = bParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_13 = iParam10;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/] = { Var0 };
		Global_113386.f_7688.f_764++;
		__LIB_17__::func_244(0);
		__LIB_17__::func_244(1);
		__LIB_17__::func_244(2);
		return 1;
	}
	return 0;
}

void func_261(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x47B3
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1)
	{
		if (!bParam3)
		{
			Global_32338[iVar0 /*23*/].f_17 = iParam2;
			if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 8))
			{
				MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
			}
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 8);
		}
		else
		{
			Global_32338[iVar0 /*23*/].f_18 = iParam2;
			if (bParam1 != BitTest(Global_32338[iVar0 /*23*/].f_11, 10))
			{
				MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
			}
			MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 10);
		}
		MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
	}
	else
	{
		__LIB_39__::func_256(iParam0);
	}
}

int func_262(var uParam0, int iParam1, int iParam2)//Position - 0x7AAC1
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = iParam2;
	iVar1 = 0;
	while (iVar1 < uParam0->f_123)
	{
		bVar2 = false;
		while (bVar2 < uParam0->f_2[iVar1 /*15*/].f_14)
		{
			if (!BitTest(uParam0->f_2[iVar1 /*15*/].f_12, bVar2))
			{
				if (uParam0->f_2[iVar1 /*15*/].f_3[bVar2 /*2*/] == iParam1 && uParam0->f_2[iVar1 /*15*/].f_3[bVar2 /*2*/].f_1 == iVar0)
				{
					return 1;
				}
			}
			bVar2++;
		}
		iVar1++;
	}
	return 0;
}

int func_263(bool bParam0, var uParam1, int iParam2)//Position - 0x7FAF8
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_264(int* iParam0, float fParam1)//Position - 0x7204C
{
	if (!__LIB_0__::func_702(iParam0))
	{
		__LIB_0__::func_706(iParam0, fParam1);
	}
}

char* func_265(int iParam0)//Position - 0x7C601
{
	struct<24> Var0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return "WTT_PIST" /* GXT: the Pistol */;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return "WTT_PIST_CBT" /* GXT: the Combat Pistol */;
			break;
		case joaat("WEAPON_APPISTOL"):
			return "WTT_PIST_AP" /* GXT: the AP Pistol */;
			break;
		case joaat("WEAPON_SMG"):
			return "WTT_SMG" /* GXT: the SMG */;
			break;
		case joaat("WEAPON_MICROSMG"):
			return "WTT_SMG_MCR" /* GXT: the Micro SMG */;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return "WTT_RIFLE_ASL" /* GXT: the Assault Rifle */;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return "WTT_RIFLE_CBN" /* GXT: the Carbine Rifle */;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return "WTT_RIFLE_ADV" /* GXT: the Advanced Rifle */;
			break;
		case joaat("WEAPON_MG"):
			return "WTT_MG" /* GXT: the MG */;
			break;
		case joaat("WEAPON_COMBATMG"):
			return "WTT_MG_CBT" /* GXT: the Combat MG */;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return "WTT_SG_PMP" /* GXT: the Pump Shotgun */;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return "WTT_SG_SOF" /* GXT: the Sawed-Off Shotgun */;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return "WTT_SG_ASL" /* GXT: the Assault Shotgun */;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return "WTT_SNIP_HVY" /* GXT: the Heavy Sniper */;
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			return "WTT_SNIP_RMT" /* GXT: the Remote Sniper */;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return "WTT_SNIP_RIF" /* GXT: the Sniper Rifle */;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return "WTT_GL" /* GXT: the Grenade Launcher */;
			break;
		case joaat("WEAPON_RPG"):
			return "WTT_RPG" /* GXT: the RPG */;
			break;
		case joaat("WEAPON_MINIGUN"):
			return "WTT_MINIGUN" /* GXT: the Minigun */;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return "WTT_SMG_ASL" /* GXT: the Assault SMG */;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return "WTT_SG_BLP" /* GXT: the Bullpup Shotgun */;
			break;
		case joaat("WEAPON_PISTOL50"):
			return "WTT_PIST_50" /* GXT: the Pistol .50 */;
			break;
		case joaat("WEAPON_BOTTLE"):
			return "WTT_BOTTLE" /* GXT: the Bottle */;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return "WTT_GUSENBERG" /* GXT: the Gusenberg Sweeper */;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return "WTT_SNSPISTOL" /* GXT: the SNS Pistol */;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return "WTT_VPISTOL" /* GXT: the Vintage Pistol */;
			break;
		case joaat("WEAPON_DAGGER"):
			return "WTT_DAGGER" /* GXT: the Antique Cavalry Dagger */;
			break;
		case joaat("WEAPON_FLAREGUN"):
			return "WTT_FLAREGUN" /* GXT: the Flare Gun */;
			break;
		case joaat("WEAPON_RAILGUN"):
			return "WTT_RAILGUN" /* GXT: the Railgun */;
			break;
		case joaat("WEAPON_MUSKET"):
			return "WTT_MUSKET" /* GXT: the Musket */;
			break;
		case joaat("WEAPON_FIREWORK"):
			return "WTT_FWRKLNCHR" /* GXT: the Firework Launcher */;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return "WTT_HMKRIFLE" /* GXT: the Marksman Rifle */;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return "WTT_HVYSHOT" /* GXT: the Heavy Shotgun */;
			break;
		case joaat("WEAPON_PROXMINE"):
			return "WTT_PRXMINE" /* GXT: the Proximity Mine */;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return "WTT_HOMLNCH" /* GXT: the Homing Launcher */;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return "WTT_COMBATPDW" /* GXT: the Combat PDW */;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return "WTT_KNUCKLE" /* GXT: the Knuckle Duster */;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return "WTT_MKPISTOL" /* GXT: the Marksman Pistol */;
			break;
		case joaat("WEAPON_MACHETE"):
			return "WTT_MACHETE" /* GXT: the Machete */;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return "WTT_MCHPIST" /* GXT: the Machine Pistol */;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return "WTT_FLASHLIGHT" /* GXT: the Flashlight */;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return "WTT_DBSHGN" /* GXT: the Double Barrel Shotgun */;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return "WTT_CMPRIFLE" /* GXT: the Compact Rifle */;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return "WTT_SWBLADE" /* GXT: the Switchblade */;
			break;
		case joaat("WEAPON_REVOLVER"):
			return "WTT_REVOLVER" /* GXT: the Heavy Revolver */;
			break;
		default:
			if (__LIB_0__::func_289(iParam0, &Var0) != -1)
			{
				return __LIB_1__::func_601(&(Var0.f_23));
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

void func_266(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x7FEF3
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	__LIB_38__::func_991(fParam0, uParam1, sParam2, 0, 0);
}

void func_267(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x67E8B
{
	__LIB_38__::func_960(uParam0, fParam3, fParam4);
	__LIB_38__::func_959(uParam0, fParam1, fParam2, bParam5);
}

float func_268(float fParam0)//Position - 0x769B3
{
	return (fParam0 + fLocal_14);
}

void func_269(var uParam0, int iParam1)//Position - 0x795D1
{
	uParam0->f_228 = iParam1;
}

int func_270(var uParam0)//Position - 0x795DF
{
	return uParam0->f_228;
}

void func_271(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)//Position - 0x84ED8
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(1, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(1, iVar0);
		Global_1649593.f_1775[iVar0] = uParam0;
		Global_1649593.f_1775.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1775.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1775.f_194[iVar0] = uParam3;
		Global_1649593.f_1775.f_269[iVar0] = uParam12;
		Global_1649593.f_1775.f_205[iVar0] = uParam4;
		Global_1649593.f_1775.f_183[iVar0] = iParam5;
		Global_1649593.f_1775.f_216[iVar0] = iParam6;
		Global_1649593.f_1775.f_227[iVar0 /*3*/] = iParam7;
		Global_1649593.f_1775.f_227[iVar0 /*3*/].f_1 = iParam8;
		Global_1649593.f_1775.f_258[iVar0] = iParam9;
		Global_2824945[iVar0] = iParam13;
		Global_2824956[iVar0] = iParam14;
		Global_2824967[iVar0] = iParam15;
		Global_2824978[iVar0] = iParam16;
		Global_2824989[iVar0] = iParam17;
		Global_2825000[iVar0] = iParam18;
		Global_2825011[iVar0] = iParam19;
		Global_2825022[iVar0] = iParam20;
		Global_1649593.f_1775.f_312[iVar0] = iParam10;
		Global_1649593.f_1775.f_323[iVar0] = iParam11;
		Global_1649593.f_1775.f_334[iVar0] = iParam21;
		Global_1649593.f_1172 = 1;
	}
}

void func_272(var uParam0)//Position - 0x868E6
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	iVar0 = 1;
	while (iVar0 < 4)
	{
		Var2 = { *(uParam0[iVar0 /*7*/]) };
		iVar1 = iVar0;
		while (iVar1 > 0 && Var2.f_2 < (uParam0[(iVar1 - 1) /*7*/])->f_2)
		{
			*(uParam0[iVar1 /*7*/]) = { *(uParam0[(iVar1 - 1) /*7*/]) };
			iVar1 = (iVar1 - 1);
		}
		*(uParam0[iVar1 /*7*/]) = { Var2 };
		iVar0++;
	}
}

var func_273(var uParam0)//Position - 0x86CAA
{
	return uParam0->f_79;
}

var func_274(var uParam0)//Position - 0x86CB6
{
	return uParam0->f_78;
}

int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x897C9
{
	if (iParam0 > -1 && iParam0 < iParam1)
	{
		return iParam0;
	}
	if (iParam0 > (iParam1 + iParam2))
	{
		return (iParam0 - iParam2);
	}
	if (iParam0 == iParam1)
	{
		return -2;
	}
	return -1;
}

void func_276(var uParam0)//Position - 0x8BE90
{
	*uParam0 = (*uParam0 - 0.01f);
}

void func_277(var uParam0)//Position - 0x8CF74
{
	*uParam0 = (*uParam0 + 0.01f);
}

char* func_278(int iParam0, bool bParam1)//Position - 0x8CFAE
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTT_PIST" /* GXT: the Pistol */;
			}
			else
			{
				return "SHR_CAT_HG";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "WTT_SMG_MCR" /* GXT: the Micro SMG */;
			}
			else
			{
				return "SHR_CAT_SMG";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "WTT_RIFLE_ASL" /* GXT: the Assault Rifle */;
			}
			else
			{
				return "SHR_CAT_AR";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "WTT_SG_PMP" /* GXT: the Pump Shotgun */;
			}
			else
			{
				return "SHR_CAT_SG";
			}
			break;
		case 4:
			if (bParam1)
			{
				return "WTT_MG" /* GXT: the MG */;
			}
			else
			{
				return "SHR_CAT_LMG";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "WTT_MINIGUN" /* GXT: the Minigun */;
			}
			else
			{
				return "SHR_CAT_HVY";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "WTT_RAILGUN" /* GXT: the Railgun */;
			}
			else
			{
				return "SHR_CAT_RAILGUN";
			}
			break;
	}
	return "";
}

void func_279()//Position - 0x93D67
{
	Global_1649593.f_1165 = 1;
}

void func_280(var uParam0, int iParam1)//Position - 0x961DC
{
	uParam0->f_14 = iParam1;
}

void func_281(int iParam0)//Position - 0xB1718
{
	Global_112471 = (Global_112471 || iParam0);
}

void func_282(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x84AAB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = uParam3;
		Global_1649593.f_4041.f_172[iVar0] = iParam2;
		Global_1649593.f_4041.f_260[iVar0] = iParam4;
		Global_1649593.f_4041.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1649593.f_4041.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1649593.f_4041.f_443[iVar0] = iParam7;
		Global_1649593.f_4041.f_454[iVar0] = iParam8;
		Global_1649593.f_4041.f_497[iVar0] = iParam9;
		Global_1649593.f_4041.f_508[iVar0] = iParam10;
		Global_1649593.f_4041.f_205[iVar0] = iParam11;
		Global_1649593.f_4041.f_216[iVar0] = iParam12;
		Global_1649593.f_4041.f_227[iVar0] = iParam13;
		Global_1649593.f_4041.f_238[iVar0] = iParam14;
		Global_1649593.f_4041.f_249[iVar0] = iParam15;
		Global_1649593.f_4041.f_519[iVar0] = iParam16;
		Global_1649593.f_4041.f_530[iVar0] = iParam17;
		Global_1649593.f_4041.f_541[iVar0] = iParam18;
		Global_1649593.f_4041.f_552[iVar0] = iParam19;
		Global_1649593.f_4041.f_563[iVar0] = iParam20;
		Global_1649593.f_4041.f_574[iVar0] = iParam21;
		Global_1649593.f_4041.f_585[iVar0] = iParam22;
		Global_1649593.f_4041.f_596[iVar0] = iParam23;
		Global_1649593.f_4041.f_607[iVar0] = iParam24;
		Global_1649593.f_4041.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && __LIB_1__::func_710())
		{
			Global_1649593.f_1172 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1649593.f_1176 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1649593.f_1175 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1649593.f_1172 = 1;
			}
			if (__LIB_1__::func_709())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

void func_283(var uParam0, bool bParam1)//Position - 0x76FC8
{
	if (__LIB_1__::func_209())
	{
		return;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		bParam1 = false;
	}
	if (!Global_1574971)
	{
		if (bParam1)
		{
			if (!__LIB_1__::func_208(Global_4718592.f_168757))
			{
				if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
				{
					__LIB_1__::func_207(1);
					__LIB_2__::func_467(1, 2);
				}
				__LIB_1__::func_347(&(uParam0->f_1203), &(uParam0->f_1200));
			}
		}
		Global_1574971 = 1;
	}
}

var func_284(int iParam0)//Position - 0xA6223
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	Global_1837285 = 0;
	Global_1837286 = 0;
	if (__LIB_32__::func_499(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_2__::func_211())
		{
			if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
			{
				iVar1 = Global_2688483[iParam0 /*10*/].f_9;
				iVar0 = __LIB_37__::func_45(iVar1);
			}
		}
		Global_1837285 = (iVar0 - Global_2703735.f_3307.f_72);
		if (Global_1837285 != 0)
		{
			__LIB_2__::func_427(Global_1837285);
		}
		__LIB_23__::func_538();
	}
	return Global_1837285;
}

void func_285(int iParam0)//Position - 0x2975
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 23))
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			MISC::SET_BIT(&(Global_100441.f_20), 23);
		}
	}
	else if (BitTest(Global_100441.f_20, 23))
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 23);
	}
}

void func_286(int iParam0)//Position - 0x2BF0
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 18))
		{
			GRAPHICS::TOGGLE_PLAYER_DAMAGE_OVERLAY(false);
			MISC::SET_BIT(&(Global_100441.f_20), 18);
		}
	}
	else if (BitTest(Global_100441.f_20, 18))
	{
		GRAPHICS::TOGGLE_PLAYER_DAMAGE_OVERLAY(true);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 18);
	}
}

void func_287(int iParam0, int iParam1)//Position - 0x2C3C
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_100441.f_20), 16);
		if (iParam1 == 1)
		{
			MISC::SET_TIME_SCALE(0.2f);
		}
		else
		{
			MISC::SET_TIME_SCALE(0.075f);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 16))
		{
			MISC::SET_TIME_SCALE(1f);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 16);
	}
}

void func_288()//Position - 0x2F2B
{
	if (Global_100441.f_18 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_100441.f_18))
		{
			AUDIO::STOP_SOUND(Global_100441.f_18);
		}
		Global_100441.f_18 = -1;
	}
	if (Global_100441.f_19 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Global_100441.f_19))
		{
			AUDIO::STOP_SOUND(Global_100441.f_19);
		}
		Global_100441.f_19 = -1;
	}
	if (BitTest(Global_100441.f_20, 6))
	{
		MISC::CLEAR_BIT(&(Global_100441.f_20), 6);
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == joaat("replay_controller"))
	{
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
}

void func_289(int iParam0)//Position - 0x3005
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 11))
		{
			AUDIO::BLOCK_DEATH_JINGLE(true);
			MISC::SET_BIT(&(Global_100441.f_20), 11);
		}
	}
	else if (BitTest(Global_100441.f_20, 11))
	{
		AUDIO::BLOCK_DEATH_JINGLE(false);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 11);
	}
}

void func_290(int iParam0)//Position - 0x30DC
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 12))
		{
			AUDIO::START_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
			MISC::SET_BIT(&(Global_100441.f_20), 12);
		}
	}
	else if (BitTest(Global_100441.f_20, 12))
	{
		AUDIO::STOP_AUDIO_SCENE("REPLAY_SCREEN_SCENE");
		MISC::CLEAR_BIT(&(Global_100441.f_20), 12);
	}
}

void func_291(int iParam0)//Position - 0x3143
{
	if (iParam0 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		MISC::SET_BIT(&(Global_100441.f_20), 10);
	}
	else if (BitTest(Global_100441.f_20, 10))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		MISC::CLEAR_BIT(&(Global_100441.f_20), 10);
	}
}

int func_292(bool bParam0, int iParam1)//Position - 0x2DD69
{
	var uVar0;
	int iVar1;
	var uVar2;
	if (__LIB_0__::func_374(bParam0))
	{
		if (__LIB_37__::func_94(iParam1))
		{
			return 1;
		}
		uVar0 = __LIB_37__::func_100(bParam0, iParam1);
		iVar1 = __LIB_3__::func_371(iParam1);
		uVar2 = __LIB_0__::func_160(iVar1);
		return BitTest(uVar0, uVar2);
	}
	return 0;
}

void func_293(bool bParam0, char* sParam1)//Position - 0x3602F
{
	if (!__LIB_0__::func_374(bParam0))
	{
		return;
	}
	if (!Global_113386.f_32749.f_5596[bParam0])
	{
		switch (bParam0)
		{
			case 0:
				__LIB_38__::func_390("IMPOUND_HELPM" /* GXT: Michael's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 1, 0, 0, 0);
				break;
			case 1:
				__LIB_38__::func_390("IMPOUND_HELPF" /* GXT: Franklin's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 2, 0, 0, 0);
				break;
			case 2:
				__LIB_38__::func_390("IMPOUND_HELPT" /* GXT: Trevor's ~a~ has been impounded. Vehicles can be recovered at ~BLIP_GANG_VEHICLE~ for a small fee. */, sParam1, 2, MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000), -1, 10000, 4, 0, 0, 0);
				break;
		}
		Global_113386.f_32749.f_5596[bParam0] = 1;
	}
}

int func_294()//Position - 0x20F
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("airfield");
	return 1;
}

int func_295()//Position - 0x576
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TORTURE_ZOOM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FBI_3_TORTURE_ZOOM");
	}
	AUDIO::STOP_STREAM();
	return 1;
}

int func_296()//Position - 0x596
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL("smboat");
	return 1;
}

int func_297()//Position - 0x5B2
{
	int iVar0;
	int iVar1;
	iVar0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_tunnel");
	iVar1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(7.25f, -656.98f, 17.14f, 50f, "des_finale_vault");
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar0))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar0, 11);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar1))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar1, 11);
	}
	return 1;
}

void func_298(int iParam0, int iParam1, int iParam2)//Position - 0x7A76
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, true);
	*iParam2++;
}

void func_299(int iParam0, var uParam1)//Position - 0x8876
{
	if (__LIB_0__::func_703(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (__LIB_0__::func_703(uParam1, 0))
	{
	}
}

int func_300(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x8A88
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		__LIB_37__::func_701(0);
		MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(Param0, 5000f, true, false, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(Param0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Param0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Param0, 5000f);
		__LIB_38__::func_315();
		__LIB_17__::func_7();
		SYSTEM::SETTIMERA(0);
		__LIB_37__::func_701(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::INSTANTLY_FILL_PED_POPULATION();
				if (iParam3 == 1)
				{
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() && !__LIB_17__::func_6()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(Param0, &(Param0.f_2), false, false);
			MISC::CLEAR_AREA(Param0, 5f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		__LIB_37__::func_701(0);
		return 1;
	}
	__LIB_37__::func_701(0);
	return 0;
}

void func_301(int iParam0, bool bParam1)//Position - 0xB254
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			__LIB_13__::func_814(iParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
					if (Global_113386.f_2363.f_539.f_1730[iVar2 /*4*/][bVar0] == iVar1)
					{
						Global_113386.f_2363.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &iVar3);
			if (bVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
			else if (bVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, true);
			}
		}
	}
}

void func_302()//Position - 0x70716
{
	int iVar0;
	int iVar1;
	if (!Global_113386.f_7229.f_26)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			Global_113386.f_7229.f_11[iVar0] = 0;
			iVar0++;
		}
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[0]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[2]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[1]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[3]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[4]), 0);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[0]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[2]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[1]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[3]), 1);
		MISC::SET_BIT(&(Global_113386.f_7229.f_11[4]), 1);
		Global_113386.f_7229.f_26 = 1;
	}
	iVar1 = 0;
	while (iVar1 <= (5 - 1))
	{
		__LIB_37__::func_758(iVar1, BitTest(Global_113386.f_7229.f_11[iVar1], 0));
		iVar1++;
	}
	__LIB_38__::func_326();
}

void func_303(int iParam0)//Position - 0x4E0D
{
	char* sVar0;
	switch (__LIB_14__::func_466())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!BitTest(Global_100441.f_20, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, false);
			MISC::SET_BIT(&(Global_100441.f_20), 0);
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(1);
			__LIB_39__::func_287(1, 1);
		}
	}
	else
	{
		if (BitTest(Global_100441.f_20, 0))
		{
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
			{
				GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			}
			CAM::SET_CAM_DEATH_FAIL_EFFECT_STATE(0);
		}
		MISC::CLEAR_BIT(&(Global_100441.f_20), 0);
	}
}

void func_304(int iParam0, bool bParam1, bool bParam2)//Position - 0x9202
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_0__::func_672(iParam0, &(Global_113386.f_2363.f_539.f_298[bVar0 /*477*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_113386.f_2363.f_539.f_1763 || (Global_113386.f_2363.f_539.f_1763 == -1 && iVar1 == 4))
				{
					if (Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0] != 0 && Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0] != joaat("WEAPON_MOLOTOV"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0], false))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][bVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (bVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (bVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		else if (bVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), &iVar2, -1);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), iVar2);
	}
}

int func_305(bool bParam0)//Position - 0x1088
{
	if (BitTest(Global_32118, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)//Position - 0x1579
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_307(int iParam0)//Position - 0x1B20
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 2;
			break;
		case 9:
			iVar0 = 10;
			break;
		case 11:
			iVar0 = 4;
			break;
		case 13:
			iVar0 = 4;
			break;
		case 15:
			iVar0 = 2;
			break;
		case 17:
			iVar0 = 2;
			break;
		case 22:
			iVar0 = 2;
			break;
		case 23:
			iVar0 = 2;
			break;
		case 25:
			iVar0 = 3;
			break;
		case 26:
			iVar0 = 2;
			break;
		case 27:
			iVar0 = 2;
			break;
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_308(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1BEE
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		case joaat("re_accident"):
			return 0;
			break;
		case joaat("re_arrests"):
			return 15;
			break;
		case joaat("re_atmrobbery"):
			return 1;
			break;
		case joaat("re_bikethief"):
			return 26;
			break;
		case joaat("re_border"):
			return 29;
			break;
		case joaat("re_burials"):
			return 24;
			break;
		case joaat("re_bus_tours"):
			return 2;
			break;
		case joaat("re_cartheft"):
			return 17;
			break;
		case joaat("re_chasethieves"):
			return 11;
			break;
		case joaat("re_crashrescue"):
			return 16;
			break;
		case joaat("re_cultshootout"):
			return 18;
			break;
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		case joaat("re_domestic"):
			return 3;
			break;
		case joaat("re_drunkdriver"):
			return 27;
			break;
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		case joaat("re_gangfight"):
			return 19;
			break;
		case joaat("re_getaway_driver"):
			return 4;
			break;
		case joaat("re_hitch_lift"):
			return 13;
			break;
		case joaat("re_homeland_security"):
			return 28;
			break;
		case joaat("re_lured"):
			return 7;
			break;
		case joaat("re_muggings"):
			return 25;
			break;
		case joaat("re_paparazzi"):
			return 10;
			break;
		case joaat("re_prisonerlift"):
			return 22;
			break;
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		case joaat("re_securityvan"):
			return 9;
			break;
		case joaat("re_shoprobbery"):
			return 5;
			break;
		case joaat("re_snatched"):
			return 6;
			break;
		case joaat("re_stag_do"):
			return 14;
			break;
		case joaat("re_yetarian"):
			return 30;
			break;
		case joaat("re_duel"):
			return 31;
			break;
		case joaat("re_seaplane"):
			return 32;
			break;
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

char* func_309(int iParam0)//Position - 0x21C7E
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS" /* GXT: Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby. */;
			break;
		case 1:
			sVar0 = "RE_FLASHBLIP" /* GXT: Flashing blue and red blips indicate situations around San Andreas that you can choose to help with. */;
			break;
		case 2:
			sVar0 = "RE_HANDOVER" /* GXT: If you retrieve a stolen item, you can choose to keep it or return it for a reward. */;
			break;
	}
	return sVar0;
}

void func_310(int iParam0)//Position - 0x24749
{
	Global_113375 = iParam0;
}

char* func_311(int iParam0, bool bParam1)//Position - 0x24794
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		case 1:
			return "RE_ATMROBBERY";
			break;
		case 2:
			return "RE_BUSTOUR";
			break;
		case 3:
			return "RE_DOMESTIC";
			break;
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		case 5:
			return "RE_SHOPROBBERY";
			break;
		case 6:
			return "RE_SNATCHED";
			break;
		case 7:
			return "RE_LURED";
			break;
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		case 9:
			return "RE_SECURITYVAN";
			break;
		case 10:
			return "RE_PAPARAZZI";
			break;
		case 11:
			return "RE_CHASETHIEVES";
			break;
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		case 13:
			return "RE_HITCHLIFT";
			break;
		case 14:
			return "RE_STAG";
			break;
		case 15:
			return "RE_ARREST";
			break;
		case 16:
			return "RE_CRASHRESCUE";
			break;
		case 17:
			return "RE_CARTHEFT";
			break;
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		case 19:
			return "RE_GANGFIGHT";
			break;
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		case 22:
			return "RE_PRISONERLIFT";
			break;
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		case 24:
			return "RE_BURIAL";
			break;
		case 25:
			return "RE_MUGGING";
			break;
		case 26:
			return "RE_BIKETHIEF";
			break;
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		case 29:
			return "RE_BORDERPATROL";
			break;
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		case 31:
			return "RE_DUEL";
			break;
		case 32:
			return "RE_SEAPLANE";
			break;
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

int func_312(int iParam0)//Position - 0x2500A
{
	int iVar0;
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		case 0:
			iVar0 = 30;
			break;
		case 15:
			iVar0 = 30;
			break;
		case 1:
			iVar0 = 200;
			break;
		case 26:
			iVar0 = 30;
			break;
		case 8:
			iVar0 = 30;
			break;
		case 29:
			iVar0 = 30;
			break;
		case 24:
			iVar0 = 30;
			break;
		case 2:
			iVar0 = 0;
			break;
		case 17:
			iVar0 = 30;
			break;
		case 11:
			iVar0 = 30;
			break;
		case 16:
			iVar0 = 30;
			break;
		case 18:
			iVar0 = 30;
			break;
		case 12:
			iVar0 = 120;
			break;
		case 3:
			iVar0 = 60;
			break;
		case 27:
			iVar0 = 60;
			break;
		case 19:
			iVar0 = 30;
			break;
		case 20:
			iVar0 = 30;
			break;
		case 4:
			iVar0 = 60;
			break;
		case 28:
			iVar0 = 30;
			break;
		case 13:
			iVar0 = 35;
			break;
		case 7:
			iVar0 = 30;
			break;
		case 25:
			iVar0 = 40;
			break;
		case 10:
			iVar0 = 30;
			break;
		case 22:
			iVar0 = 30;
			break;
		case 21:
			iVar0 = 30;
			break;
		case 5:
			iVar0 = 30;
			break;
		case 30:
			iVar0 = 60;
			break;
		case 9:
			iVar0 = 60;
			break;
		case 6:
			iVar0 = 40;
			break;
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_313()//Position - 0x296AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

int func_314(int iParam0, bool bParam1)//Position - 0x29F99
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_315()//Position - 0x21CC2
{
	switch (__LIB_0__::func_782(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_316()//Position - 0x2A795
{
	__LIB_0__::func_698();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

void func_317(struct<3> Param0, bool bParam1)//Position - 0x958
{
	if (iLocal_62 == 0)
	{
		bParam1 = false;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_60[iLocal_65 /*5*/]);
	if (Local_60[iLocal_65 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_60[iLocal_65 /*5*/].f_1, 0.4f, 1f);
	}
	Local_60[iLocal_65 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_60[iLocal_65 /*5*/].f_1 = { Param0 };
	Local_60[iLocal_65 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_53, bParam1);
	iLocal_65++;
	if (iLocal_65 >= 31)
	{
		iLocal_65 = 0;
	}
}

void func_318()//Position - 0xDB7
{
	if (!iLocal_47)
	{
		iLocal_47 = 1;
	}
}

void func_319(int iParam0)//Position - 0x29DD
{
	Global_113372 = iParam0;
}

int func_320(int iParam0, int iParam1)//Position - 0x3009
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		case 1:
			return 226;
			break;
		case 2:
			return 243;
			break;
		case 3:
			return 256;
			break;
		case 4:
			return 259;
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		case 6:
			return 265;
			break;
		case 7:
			return 218;
			break;
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		case 10:
			return 219;
			break;
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		case 12:
			return 254;
			break;
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		case 14:
			return 283;
			break;
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		case 16:
			return 252;
			break;
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		case 18:
			return 253;
			break;
		case 19:
			return 215;
			break;
		case 20:
			return 216;
			break;
		case 21:
			return 251;
			break;
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		case 24:
			return 242;
			break;
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		case 8:
			return 255;
			break;
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		case 28:
			return 217;
			break;
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		case 30:
			return 285;
			break;
		case 31:
			return 318;
			break;
		case 32:
			return 319;
			break;
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_321(int iParam0, int iParam1)//Position - 0x377F
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

bool func_322()//Position - 0x743D
{
	return Global_113104 > 0;
}

void func_323(int iParam0, var uParam1)//Position - 0x926D
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

int func_324()//Position - 0x384B
{
	struct<16> Var0;
	var uVar1;
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = __LIB_39__::func_308(Var0);
	return uVar1;
}

void func_325(int iParam0)//Position - 0x3D34
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_39__::func_309(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_39__::func_309(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					__LIB_0__::func_151(__LIB_39__::func_309(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

int func_326(int iParam0)//Position - 0x8ACE
{
	int iVar0;
	int iVar1;
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_327(float fParam0, bool bParam1)//Position - 0x594B
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar5 = __LIB_14__::func_792();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					__LIB_0__::func_432(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

int func_328(int iParam0, int iParam1, int iParam2)//Position - 0x89C6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_683();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_329(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x4F36
{
	__LIB_0__::func_376(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam2, iParam3, 0);
}

int func_330(int iParam0, int iParam1)//Position - 0x3FC0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 1f, -0.5f, 0f) };
		Var3 = { Var1 - Var0 };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, -1f, -0.5f, 0f) };
		Var4 = { Var2 - Var0 };
		if (SYSTEM::VMAG(Var3) < SYSTEM::VMAG(Var4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

int func_331()//Position - 0x746E
{
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 1;
	}
	if (__LIB_17__::func_260() && __LIB_39__::func_322())
	{
		return 1;
	}
	return 0;
}

struct<16> func_332(var uParam0)//Position - 0x944F
{
	struct<16> Var0;
	int iVar1;
	StringCopy(&Var0, "", 64);
	iVar1 = __LIB_0__::func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_198(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = __LIB_0__::func_615(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = __LIB_0__::func_614(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = __LIB_0__::func_553(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, __LIB_0__::func_214(*uParam0), 64);
	return Var0;
}

int func_333()//Position - 0x9895
{
	if ((Global_113375 == __LIB_39__::func_324() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0)//Position - 0x756C
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_39__::func_310(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	__LIB_39__::func_313();
}

void func_335(int iParam0, var uParam1, var uParam2)//Position - 0x9A3B
{
	bool bVar0;
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		__LIB_0__::func_186((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		__LIB_0__::func_696();
	}
}

int func_336(int iParam0)//Position - 0x4AAE
{
	if (__LIB_39__::func_315())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (__LIB_39__::func_306(Global_113375))
		{
			__LIB_39__::func_325(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && __LIB_39__::func_306(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_337(var uParam0, int iParam1)//Position - 0xA372
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

bool func_338(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x76C4
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	iVar2 = __LIB_37__::func_655(iParam0, iParam1);
	if (!__LIB_0__::func_121(iParam0) || !__LIB_0__::func_121(iParam1))
	{
		if (iVar2 != -1)
		{
			__LIB_13__::func_439(&(Local_49[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!__LIB_14__::func_736(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = __LIB_37__::func_654();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_49[iVar2 /*4*/].f_1 = iParam0;
		Local_49[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = __LIB_37__::func_656(&(Local_49[iVar2 /*4*/]), Var1, iParam1, &(Local_49[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_49[iVar2 /*4*/].f_3) < iParam4);
}

void func_339(int iParam0, int iParam1, int iParam2)//Position - 0xEB7C
{
	var uVar0;
	struct<16> Var1;
	uVar0 = __LIB_11__::func_762();
	__LIB_13__::func_726(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	__LIB_39__::func_323(iParam0, &uVar0);
	Var1 = { __LIB_39__::func_332(&uVar0) };
}

int func_340()//Position - 0xCB23
{
	if (!__LIB_0__::func_215(5))
	{
		return 1;
	}
	if (__LIB_39__::func_331())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_327(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0)//Position - 0x25CB
{
	*uParam0 = -99;
}

void func_342(int iParam0, var uParam1)//Position - 0x328C
{
	int iVar0;
	int iVar1;
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_343(int iParam0)//Position - 0x9C11
{
	__LIB_39__::func_339(iParam0, 0, __LIB_39__::func_312(iParam0));
}

void func_344(int iParam0)//Position - 0x6484
{
	char cVar0[64];
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_39__::func_333())
	{
		__LIB_39__::func_343(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		__LIB_0__::func_50(30000);
		StringCopy(&cVar0, __LIB_39__::func_311(Global_113375, 1), 64);
		if (__LIB_39__::func_307(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	__LIB_0__::func_56(&Global_32019);
	Global_113376 = 0;
	__LIB_39__::func_310(-1);
}

int func_345(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4D00
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_39__::func_324();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_331())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_327(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_326(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_7(__LIB_0__::func_683()) == 4 || __LIB_39__::func_7(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_328(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__::func_316())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_39__::func_314(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_39__::func_314(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_326(30) && !__LIB_39__::func_314(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_395(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

int func_346()//Position - 0x1086
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_347()//Position - 0x10A2
{
	return Global_32197;
}

void func_348()//Position - 0xBC95
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_349(int iParam0, int iParam1)//Position - 0x1333
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_39__::func_307(iParam0))
	{
		__LIB_39__::func_321(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_39__::func_306(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_39__::func_320(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_39__::func_319(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_39__::func_319(7);
			}
			else
			{
				__LIB_39__::func_319(1);
			}
		}
	}
}

int func_350()//Position - 0x7F86
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_331())
	{
		return 1;
	}
	if (__LIB_39__::func_327(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0xCAA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_352(int iParam0)//Position - 0x884C
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}

int func_353(int iParam0, int iParam1)//Position - 0x8868
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if ((PED::GET_PED_MAX_HEALTH(iParam0) - ENTITY::GET_ENTITY_HEALTH(iParam0)) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_354(char* sParam0, int iParam1)//Position - 0x8817
{
	__LIB_0__::func_756(sParam0);
	__LIB_12__::func_768(iParam1);
}

int func_355(int iParam0, float fParam1, float fParam2)//Position - 0x240F
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0, bool bParam1, int iParam2)//Position - 0x2DE3
{
	iParam2 = iParam2;
	return __LIB_0__::func_666(iParam0, bParam1, 145);
}

void func_357(var uParam0)//Position - 0xD06
{
	*uParam0 = (MISC::GET_GAME_TIMER() - 5000);
}

void func_358(int iParam0)//Position - 0x2299E
{
	if (OBJECT::DOES_PICKUP_EXIST(*iParam0))
	{
		OBJECT::REMOVE_PICKUP(*iParam0);
	}
}

var func_359(int iParam0)//Position - 0x25357
{
	return BitTest(Global_113382, iParam0);
}

int func_360(int iParam0)//Position - 0x28104
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		case 0:
			return 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return 0;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 0;
			break;
		case 7:
			return 1;
			break;
		case 8:
			return 0;
			break;
		case 9:
			return 1;
			break;
	}
	return 0;
}

bool func_361(int iParam0)//Position - 0x21D13
{
	return __LIB_0__::func_1(__LIB_39__::func_309(iParam0));
}

void func_362(int* iParam0)//Position - 0x282A7
{
	__LIB_14__::func_597(iParam0, "NULL", iParam0->f_1);
}

void func_363(var uParam0)//Position - 0x2AB7C
{
	__LIB_14__::func_600(*uParam0, "NULL", uParam0->f_1);
}

int func_364(int iParam0)//Position - 0x24D65
{
	return __LIB_16__::func_321(iParam0);
}

bool func_365(var uParam0)//Position - 0x27EF6
{
	return __LIB_14__::func_596(*uParam0, "NULL", uParam0->f_1);
}

int func_366()//Position - 0x237AA
{
	struct<3> Var0[2];
	struct<3> Var1;
	int iVar2;
	iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar2), &(Var0[0 /*3*/]), &(Var0[1 /*3*/]));
		Var1 = { __LIB_13__::func_790() };
		if ((Var0[1 /*3*/] - Var0[0 /*3*/]) > Var1.f_0)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_1 - Var0[0 /*3*/].f_1) > Var1.f_1)
		{
			return 0;
		}
		if ((Var0[1 /*3*/].f_2 - Var0[0 /*3*/].f_2) > Var1.f_2)
		{
			return 0;
		}
	}
	return 1;
}

int func_367(int iParam0, bool bParam1, int iParam2)//Position - 0x224FF
{
	iParam2 = iParam2;
	return __LIB_0__::func_639(iParam0, bParam1, 0);
}

int func_368(int iParam0)//Position - 0x317B
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_369(int iParam0, int iParam1)//Position - 0x1B02
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_39__::func_307(iParam0))
	{
		__LIB_39__::func_321(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_39__::func_306(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_39__::func_320(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_39__::func_319(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_39__::func_319(7);
			}
			else
			{
				__LIB_39__::func_319(1);
			}
		}
	}
}

int func_370()//Position - 0x6C05
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_331())
	{
		return 1;
	}
	if (__LIB_39__::func_327(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_371(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_39__::func_324();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_331())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_327(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_326(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_7(__LIB_0__::func_683()) == 4 || __LIB_39__::func_7(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_328(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__::func_316())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_39__::func_314(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_39__::func_314(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_326(30) && !__LIB_39__::func_314(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_395(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

int func_372()//Position - 0x2050
{
	if (Global_32198)
	{
		__LIB_39__::func_319(4);
		return 1;
	}
	return 0;
}

void func_373(var uParam0, int iParam1)//Position - 0x43C7
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

int func_374()//Position - 0x5225
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375()//Position - 0x5290
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_376(char* sParam0)//Position - 0x5955
{
	var uVar0;
	if (__LIB_0__::func_75())
	{
		MemCopy(&uVar0, {__LIB_13__::func_743()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_377(struct<3> Param0)//Position - 0x2CC1
{
	if (__LIB_0__::func_683() == 2)
	{
		if (__LIB_39__::func_347() && !Global_32200)
		{
			if (fLocal_45 == -1f)
			{
				fLocal_45 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_45 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_378()//Position - 0x4F49
{
	if (__LIB_0__::func_683() == 2)
	{
		if (!Global_32199)
		{
			__LIB_0__::func_151("CULT_BLIP_HELP" /* GXT: Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~ */, -1);
			Global_32199 = 1;
		}
	}
}

void func_379()//Position - 0x591F
{
	if (!__LIB_39__::func_346())
	{
		if (__LIB_0__::func_683() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_380()//Position - 0x2314
{
	if (__LIB_0__::func_683() == 2)
	{
		if (__LIB_39__::func_347())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_32202)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_32202 = 1;
					if (!Global_32201)
					{
						Global_32201 = 1;
						return 1;
					}
				}
			}
			else if (Global_32202)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_32202 = 0;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)//Position - 0x7AA7
{
	int iVar0;
	int iVar1;
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/) - 128);
	iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 128);
	if (((iVar0 < iParam0 && iVar0 > -iParam0) && iVar1 < iParam0) && iVar1 > -iParam0)
	{
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_382(int iParam0, bool bParam1)//Position - 0x1412
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_39__::func_307(iParam0))
	{
		__LIB_39__::func_321(iParam0, bParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_39__::func_306(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_39__::func_320(iParam0, bParam1) != 322)
		{
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, bParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_39__::func_319(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_39__::func_319(7);
			}
			else
			{
				__LIB_39__::func_319(1);
			}
		}
	}
}

int func_383(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x93F1
{
	__LIB_0__::func_487(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam2, iParam3, 0);
}

void func_384(bool bParam0)//Position - 0xD8B7
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(8, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(6, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(12, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		__LIB_12__::func_849(9, 1);
		__LIB_12__::func_849(8, 1);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
		PED::SET_CREATE_RANDOM_COPS(true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(8, true);
		MISC::ENABLE_DISPATCH_SERVICE(2, true);
		MISC::ENABLE_DISPATCH_SERVICE(6, true);
		MISC::ENABLE_DISPATCH_SERVICE(4, true);
		MISC::ENABLE_DISPATCH_SERVICE(12, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		__LIB_12__::func_849(9, 0);
		__LIB_12__::func_849(8, 0);
	}
}

void func_385()//Position - 0xB8C
{
	while (__LIB_0__::func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_39__::func_369(-1, 0);
	__LIB_14__::func_557();
	iLocal_45 = 3;
}

int func_386()//Position - 0x4D51
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_46) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_331())
	{
		return 1;
	}
	if (__LIB_39__::func_327(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_387(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6B83
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_39__::func_324();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_46 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_331())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_327(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_46.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_326(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_7(__LIB_0__::func_683()) == 4 || __LIB_39__::func_7(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_328(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__::func_316())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_39__::func_314(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_39__::func_314(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_326(30) && !__LIB_39__::func_314(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_395(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_388(int iParam0, bool bParam1)//Position - 0x36AB
{
	int iVar0;
	char* sVar1;
	MISC::SET_BIT(&(Global_113386.f_1.f_116), iParam0);
	switch (iParam0)
	{
		case 10:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 14);
			break;
		case 13:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 16);
			break;
		case 12:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 15);
			break;
		case 11:
			MISC::SET_BIT(&(Global_113386.f_1.f_119), 17);
			break;
	}
	if (!bParam1)
	{
		iVar0 = 0;
		switch (__LIB_0__::func_617(iParam0))
		{
			case 1:
				iVar0 = 6;
				break;
			case 3:
				iVar0 = 4;
				break;
			case 2:
				iVar0 = 5;
				break;
		}
		sVar1 = __LIB_37__::func_295(iParam0);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U" /* GXT: Heist crew member ~a~ unlocked. */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_37__::func_295(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, false, iVar0, "", 0);
		if (!__LIB_0__::func_67(45))
		{
			__LIB_0__::func_697("AM_H_CREWU" /* GXT: Throughout the game you may meet contacts who can help on heists. This will give you extra crew members to pick from. */, 2, 0, 20000, 10000, __LIB_14__::func_792(), 0, 131, 0);
		}
	}
}

void func_389(int iParam0, int iParam1)//Position - 0x32A7
{
	if (iParam1 > -1)
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
	}
	else
	{
		Global_112380.f_4[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200000, 2100000));
	}
}

void func_390(int iParam0)//Position - 0x32E4
{
	if (iParam0 != -1)
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		Global_112380.f_3 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(21600000, 25200000));
	}
}

int func_391(int iParam0)//Position - 0x36A2
{
	switch (iParam0)
	{
		case 0:
			return 104;
			break;
		case 1:
			return 105;
			break;
		case 2:
			return 106;
			break;
		case 3:
			return 107;
			break;
		case 4:
			return 108;
			break;
		case 5:
			return 109;
			break;
		case 6:
			return 110;
			break;
		case 7:
			return 111;
			break;
		case 8:
			return 112;
			break;
		case 9:
			return 93;
			break;
	}
	return 145;
}

void func_392(int* iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x75C0
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
				if (HUD::DOES_BLIP_EXIST(*iParam3))
				{
					HUD::REMOVE_BLIP(iParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*iParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*iParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*iParam2, 0f);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
	}
}

int func_393()//Position - 0x379B
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	switch (iVar0)
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
		default:
			switch (__LIB_1__::func_27(-1))
			{
				case 0:
					return 3;
					break;
				case 1:
					return 4;
					break;
				case 2:
					return 5;
					break;
				case 3:
					return 6;
					break;
				case 4:
					return 7;
					break;
				default:
					break;
			}
			break;
	}
	return 3;
}

void func_394(int iParam0, var uParam1)//Position - 0x233
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*iParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *iParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 50f, -1f, 30f, 1.4E-43f, 7E-44f, true);
				}
			}
		}
	}
}

bool func_395(int iParam0, int iParam1)//Position - 0x30AB
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_396()//Position - 0x4AE2
{
	int iVar0;
	iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 65f, true, 2);
	CAM::SET_CAM_ACTIVE(iVar0, true);
}

Vector3 func_397(struct<3> Param0, struct<3> Param1)//Position - 0x4B9C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	iVar5 = 0;
	iVar6 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var3, &Var4);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var2, 1, 3f, 0f);
	if (SYSTEM::VDIST(Param0, -3039.6548f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar5 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar5 = 8;
	}
	while (iVar5 < 8)
	{
		switch (iVar5)
		{
			case 0:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 + IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 2;
						}
						else
						{
							iVar6++;
							iVar5 = 0;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 2:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var4.f_1 - IntToFloat(iVar6)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 4;
						}
						else
						{
							iVar6++;
							iVar5 = 2;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 4:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 + IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 6;
						}
						else
						{
							iVar6++;
							iVar5 = 4;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 6:
				if (SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)) < SYSTEM::VDIST(Var2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var4.f_0 - IntToFloat(iVar6)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						Var10 = { __LIB_1__::func_657(Var1, 0f, Var4) };
						Var11 = { __LIB_1__::func_657(Var1, 0f, Var3) };
						iVar13 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var10, Var11, 511, iVar0, 7);
						iVar5++;
					}
					else
					{
						iVar5 = 8;
					}
				}
				else
				{
					iVar5 = 8;
				}
				break;
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar7, &uVar9, &uVar8, &uVar12) == 2)
				{
					if (iVar7 != 0)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, true) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param1, true) <= 5f)
					{
						if (iVar6 >= 3)
						{
							iVar6 = 1;
							iVar5 = 8;
						}
						else
						{
							iVar6++;
							iVar5 = 6;
						}
					}
					else
					{
						iVar5 = 8;
					}
				}
				break;
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}

void func_398(int iParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)//Position - 0x51EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	var uVar11;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	uParam2->f_2 = __LIB_16__::func_864(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = __LIB_16__::func_864(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = __LIB_16__::func_864(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	Var10 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
	{
		Var9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam3, sParam4, *uParam1, *uParam2, 0f, 2) };
	}
	else
	{
		Var9 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(iParam0, false), *uParam1, 1);
					*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false), uParam2->f_2, Var10) };
					iVar0 = 2;
				}
				else
				{
					iVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var9 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar5, &iVar6, &Var8, &uVar7, &uVar11) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var8.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar4, Var10) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = __LIB_6__::func_252(Var9 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_399()//Position - 0x5A3C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_75())
		{
			return 1;
		}
	}
	return 0;
}

void func_400(int iParam0, var uParam1)//Position - 0x656E
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && __LIB_39__::func_359(0))
		{
			__LIB_39__::func_325(1);
		}
	}
}

int func_401(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param4)//Position - 0x3751
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var5, &uVar6);
		fVar7 = MISC::ABSF((Var4.f_2 - Var3.f_2));
		fVar8 = MISC::ABSF((Var4.f_0 - Var3.f_0));
		fVar9 = MISC::ABSF((Var4.f_1 - Var3.f_1));
		if (fVar8 > fVar7)
		{
			fVar10 = (fVar8 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.f_2));
		}
		else
		{
			fVar10 = (fVar9 / 2f);
			fVar11 = (fVar10 - MISC::ABSF(Var3.f_0));
		}
		Var12.f_2 = (Var12.f_2 + (Var5.f_2 - Var3.f_2));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param4, 2, true);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((fVar9 / 2f) - (fVar10 * 0.75f)), 0f) + Var12) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar11 * 1.25f), ((-fVar9 / 2f) + (fVar10 * 0.75f)), 0f) + Var12) };
		iVar17 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var2, Var1, fVar10, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar17, &iVar13, &uVar14, &uVar15, &uVar16) != 2)
		{
		}
		if (iVar13 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_402(var uParam0, int iParam1)//Position - 0xFCA6
{
	if (iParam1 > 0)
	{
		uParam0->f_33 = iParam1;
	}
}

int func_403(struct<3> Param0, bool bParam1)//Position - 0x9753
{
	return __LIB_0__::func_488(Param0, bParam1);
}

void func_404(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xE257
{
	int iVar0;
	if (!__LIB_39__::func_360(bParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*2*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*2*/])->f_1 == iParam2)
					{
						return;
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
	if (!uParam0->f_31)
	{
		uParam0->f_31 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			(uParam0[iVar0 /*2*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*2*/] = iParam3;
			MISC::SET_BIT(uParam0[iVar0 /*2*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*2*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_405(var uParam0)//Position - 0xE44F
{
	int iVar0;
	if (uParam0->f_31)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_32 + uParam0->f_33) || BitTest(Global_100441.f_20, 2)) || BitTest(Global_100441.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (BitTest((*uParam0)[iVar0 /*2*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
					{
						__LIB_39__::func_362(uParam0[iVar0 /*2*/]);
						uParam0->f_32 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_406(var uParam0)//Position - 0x10652
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			__LIB_39__::func_363(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

int func_407(var uParam0)//Position - 0xE0C0
{
	int iVar0;
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (BitTest((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!__LIB_39__::func_365(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

void func_408(bool bParam0)//Position - 0x5FDA
{
	if (bParam0)
	{
		Global_32193 = 1;
	}
	else
	{
		Global_32193 = 0;
	}
}

int func_409(var uParam0)//Position - 0x3FA4
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, false))
	{
		return 0;
	}
	return 1;
}

void func_410(var uParam0, var uParam1)//Position - 0x39A3
{
	int iVar0;
	int iVar1;
	if (((((*uParam0)[*uParam1 /*6*/] != 0 && ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) && (uParam0[*uParam1 /*6*/])->f_1 != 0) && ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1)) && (uParam0[*uParam1 /*6*/])->f_4)
	{
		if (__LIB_0__::func_703((uParam0[*uParam1 /*6*/])->f_2, 2))
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1);
		}
		else
		{
			(uParam0[*uParam1 /*6*/])->f_5 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY((*uParam0)[*uParam1 /*6*/], (uParam0[*uParam1 /*6*/])->f_1, (uParam0[*uParam1 /*6*/])->f_3);
		}
	}
	iVar0++;
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	while ((((*uParam0)[*uParam1 /*6*/] == 0 || !ENTITY::DOES_ENTITY_EXIST((*uParam0)[*uParam1 /*6*/])) || ((uParam0[*uParam1 /*6*/])->f_1 == 0 || !ENTITY::DOES_ENTITY_EXIST((uParam0[*uParam1 /*6*/])->f_1))) && iVar0 < *uParam0)
	{
		iVar0++;
		*uParam1++;
		if (*uParam1 >= *uParam0)
		{
			*uParam1 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!(uParam0[iVar1 /*6*/])->f_4)
		{
			(*uParam0)[iVar1 /*6*/] = 0;
			(uParam0[iVar1 /*6*/])->f_1 = 0;
			(uParam0[iVar1 /*6*/])->f_2 = 0;
			(uParam0[iVar1 /*6*/])->f_3 = 0;
			(uParam0[iVar1 /*6*/])->f_5 = 0;
		}
		(uParam0[iVar1 /*6*/])->f_4 = 0;
		iVar1++;
	}
}

float func_411(float fParam0, float fParam1)//Position - 0x56B1
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_412(int iParam0, bool bParam1)//Position - 0x2E5D
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_39__::func_324();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= __LIB_39__::func_307(iParam0))
	{
		__LIB_39__::func_321(iParam0, bParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_39__::func_306(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_39__::func_320(iParam0, bParam1) != 322)
		{
			__LIB_39__::func_335(__LIB_39__::func_320(iParam0, bParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_113374 = bParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_39__::func_319(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_39__::func_319(7);
			}
			else
			{
				__LIB_39__::func_319(1);
			}
		}
	}
}

void func_413(int iParam0)//Position - 0xC85D
{
	__LIB_13__::func_768(iParam0, 9, 1);
}

int func_414(bool bParam0, int iParam1, int iParam2)//Position - 0x1BF1
{
	if (__LIB_0__::func_185(bParam0) == 3)
	{
		return 0;
	}
	if (__LIB_0__::func_185(bParam0) == 4)
	{
		return 0;
	}
	return __LIB_14__::func_571(__LIB_0__::func_185(bParam0), 0, iParam1, iParam2, 0);
}

float func_415(float fParam0)//Position - 0x571D
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

int func_416(struct<3> Param0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)//Position - 0x54A9
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	fVar0 = Param0.f_0;
	fVar1 = Param1.f_0;
	fVar2 = Param3.f_0;
	fVar3 = Param5.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < __LIB_39__::func_411(fVar0, fVar1) || fVar11 > __LIB_3__::func_480(fVar0, fVar1)) || fVar11 < __LIB_39__::func_411(fVar2, fVar3)) || fVar11 > __LIB_3__::func_480(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < __LIB_39__::func_411(fVar4, fVar5) || fVar12 > __LIB_3__::func_480(fVar4, fVar5)) || fVar12 < __LIB_39__::func_411(fVar6, fVar7)) || fVar12 > __LIB_3__::func_480(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = Param0.f_2;
	return 1;
}

int func_417()//Position - 0x6B63
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_331())
	{
		return 1;
	}
	if (__LIB_39__::func_327(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_418(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x8965
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_39__::func_324();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_331())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_327(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_326(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_7(__LIB_0__::func_683()) == 4 || __LIB_39__::func_7(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_328(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__::func_316())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_39__::func_314(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_39__::func_314(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_326(30) && !__LIB_39__::func_314(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_395(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_419(struct<3> Param0)//Position - 0xBCB3
{
	if (SYSTEM::VDIST(Param0, Param0) > 1f)
	{
	}
}

void func_420(int iParam0)//Position - 0x6B01
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_346())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { __LIB_0__::func_403(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		__LIB_13__::func_730(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_37__::func_683(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (__LIB_0__::func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (__LIB_37__::func_541())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		__LIB_0__::func_401(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

int func_421(int iParam0, int iParam1, int iParam2)//Position - 0x62DA6
{
	if (PAD::IS_CONTROL_PRESSED(iParam0->f_2, iParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(iParam0->f_2, iParam0->f_3) && iParam1))
	{
		if (!__LIB_0__::func_864(iParam0))
		{
			__LIB_0__::func_795(iParam0, 0, 0);
		}
		else if (__LIB_0__::func_937(iParam0, iParam2, 0))
		{
			__LIB_0__::func_794(iParam0);
			return 1;
		}
	}
	else
	{
		__LIB_0__::func_794(iParam0);
	}
	return 0;
}

int func_422(var uParam0, int iParam1)//Position - 0x64633
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	bVar2 = (iVar0 % 32);
	if (!BitTest((*uParam0)[iVar1], bVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], bVar2);
		return 1;
	}
	return 0;
}

void func_423(var uParam0, int iParam1)//Position - 0x66528
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	fVar0 = SYSTEM::TO_FLOAT(iParam1);
	iVar1 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 5f)));
	fVar0 = (fVar0 - (IntToFloat(iVar1) * SYSTEM::POW(10f, 5f)));
	(*uParam0)[0] = iVar1;
	iVar2 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 4f)));
	fVar0 = (fVar0 - (IntToFloat(iVar2) * SYSTEM::POW(10f, 4f)));
	(*uParam0)[1] = iVar2;
	iVar3 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 3f)));
	fVar0 = (fVar0 - (IntToFloat(iVar3) * SYSTEM::POW(10f, 3f)));
	(*uParam0)[2] = iVar3;
	iVar4 = SYSTEM::FLOOR((fVar0 / SYSTEM::POW(10f, 2f)));
	fVar0 = (fVar0 - (IntToFloat(iVar4) * SYSTEM::POW(10f, 2f)));
	(*uParam0)[3] = iVar4;
	iVar5 = SYSTEM::FLOOR((fVar0 / 10f));
	fVar0 = (fVar0 - IntToFloat(iVar5 * 10));
	(*uParam0)[4] = iVar5;
	iVar6 = SYSTEM::FLOOR(fVar0);
	fVar0 = (fVar0 - IntToFloat(iVar6));
	(*uParam0)[5] = iVar6;
}

void func_424(int iParam0)//Position - 0x7E054
{
	Local_641.f_137 = iParam0;
	__LIB_15__::func_812(&(Local_641[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_641[1 /*17*/].f_6 = 1000;
	Local_641[1 /*17*/].f_7 = 10000;
	Local_641[2 /*17*/].f_1 = 1;
	Local_641[2 /*17*/].f_8 = 40;
	__LIB_15__::func_812(&(Local_641[2 /*17*/].f_9), 0, 0, 0, 0);
	__LIB_15__::func_812(&(Local_641[3 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 127);
	__LIB_15__::func_812(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_641.f_137)
	{
		case 2:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 3:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_641[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[4 /*17*/] = 1;
			break;
		case 4:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 30);
			__LIB_15__::func_812(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[5 /*17*/] = 1;
			break;
		case 1:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 0:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			__LIB_15__::func_812(&(Local_641[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[5 /*17*/] = 1;
			break;
		case 6:
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 8);
			__LIB_15__::func_812(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_641[0 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[7 /*17*/] = 1;
			break;
		case 7:
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_641[2 /*17*/] = 1;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_641[3 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_641[6 /*17*/] = 1;
			break;
		case 5:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 30);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 20);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 8:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 9:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 10:
			Local_641[1 /*17*/] = 0;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_641[6 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_641[7 /*17*/] = 1;
			__LIB_15__::func_812(&(Local_641[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		case 11:
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 15);
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 10);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			Local_641[1 /*17*/] = 1;
			Local_641[3 /*17*/] = 1;
			break;
		case 12:
			__LIB_15__::func_812(&(Local_641[1 /*17*/].f_9), 255, 255, 255, 3);
			__LIB_15__::func_812(&(Local_641[2 /*17*/].f_13), 0, 0, 0, 15);
			__LIB_15__::func_812(&(Local_641[0 /*17*/].f_9), 0, 0, 255, 90);
			__LIB_15__::func_812(&(Local_641[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_641[1 /*17*/] = 1;
			Local_641[2 /*17*/] = 0;
			Local_641[0 /*17*/] = 1;
			Local_641[6 /*17*/] = 1;
			break;
	}
}

void func_425(int iParam0)//Position - 0x630F3
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<4> Var3;
	float fVar4;
	if (!Local_641[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { __LIB_16__::func_762() };
	Var3.f_3 = 255;
	if (Local_641[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var1 = { __LIB_16__::func_761() };
	if (!Local_641[iParam0 /*17*/].f_2)
	{
		if (Local_641[iParam0 /*17*/].f_4 > 0)
		{
			Var1.f_1 = (Var1.f_1 - ((Var0.f_1 * (IntToFloat(Local_641[iParam0 /*17*/].f_4) % (IntToFloat(Local_641[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_641[iParam0 /*17*/].f_6) * 1f)));
			Var2 = { Var1 };
			Var2.f_1 = (Var2.f_1 + Var0.f_1);
		}
		else if (Local_641[iParam0 /*17*/].f_7 > 0)
		{
			Local_641[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_641[iParam0 /*17*/].f_7);
			Local_641[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_641[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_641[iParam0 /*17*/].f_4 = Local_641[iParam0 /*17*/].f_6;
		Local_641[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_641[iParam0 /*17*/].f_1)
	{
		fVar4 = (SYSTEM::TO_FLOAT(Local_641[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_641[iParam0 /*17*/].f_8));
		Var3.f_0 = __LIB_15__::func_813(Local_641[iParam0 /*17*/].f_9, Local_641[iParam0 /*17*/].f_13, fVar4);
		Var3.f_1 = __LIB_15__::func_813(Local_641[iParam0 /*17*/].f_9.f_1, Local_641[iParam0 /*17*/].f_13.f_1, fVar4);
		Var3.f_2 = __LIB_15__::func_813(Local_641[iParam0 /*17*/].f_9.f_2, Local_641[iParam0 /*17*/].f_13.f_2, fVar4);
		Var3.f_3 = __LIB_15__::func_813(Local_641[iParam0 /*17*/].f_9.f_3, Local_641[iParam0 /*17*/].f_13.f_3, fVar4);
	}
	else
	{
		Var3 = { Local_641[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_760(iParam0)))
	{
		__LIB_37__::func_93(Var1, Var0, Var3);
	}
	else
	{
		__LIB_36__::func_716(__LIB_16__::func_756(iParam0), __LIB_16__::func_760(iParam0), Var1, Var0, 0f, Var3);
	}
	if (!Local_641[iParam0 /*17*/].f_2 && Local_641[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_16__::func_760(0)))
		{
			__LIB_37__::func_93(Var2, Var0, Var3);
		}
		else
		{
			__LIB_36__::func_716(__LIB_16__::func_756(iParam0), __LIB_16__::func_760(iParam0), Var2, Var0, 0f, Var3);
		}
	}
	Local_641[iParam0 /*17*/].f_5 = (Local_641[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_641[iParam0 /*17*/].f_5 < 0)
	{
		Local_641[iParam0 /*17*/].f_5 = (Local_641[iParam0 /*17*/].f_5 + Local_641[iParam0 /*17*/].f_8);
	}
	Local_641[iParam0 /*17*/].f_4 = (Local_641[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_641[iParam0 /*17*/].f_4 < 0)
	{
		Local_641[iParam0 /*17*/].f_4 = 0;
	}
}

int func_426(int iParam0, int iParam1)//Position - 0x36AE
{
	struct<2> Var0;
	struct<2> Var1;
	struct<2> Var2;
	struct<2> Var3;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var1);
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var2, &Var3);
	if (MISC::ABSF((Var1.f_0 - Var0.f_0)) > MISC::ABSF((Var3.f_0 - Var2.f_0)))
	{
		return 0;
	}
	if (MISC::ABSF((Var1.f_1 - Var0.f_1)) > MISC::ABSF((Var3.f_1 - Var2.f_1)))
	{
		return 0;
	}
	return 1;
}

int func_427()//Position - 0x6742B
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("freight")) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightgrain"))) && STREAMING::HAS_MODEL_LOADED(joaat("tankercar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar")))
	{
		return 1;
	}
	return 0;
}

void func_428(float fParam0)//Position - 0x674A8
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_429()//Position - 0x70068
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont1"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightgrain"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tankercar"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
}

void func_430()//Position - 0x7657F
{
	Global_1649593.f_1169 = 1;
}

Vector3 func_431(int iParam0)//Position - 0x8CA3D
{
	switch (iParam0)
	{
		case 0:
			return 0.7f, 0.7f, -0.85f;
			break;
		case 1:
			return -0.7f, 0.7f, -0.85f;
			break;
		case 2:
			return 0.7f, -0.7f, -0.85f;
			break;
		case 3:
			return -0.7f, -0.7f, -0.85f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_432(int iParam0, struct<7> Param1, var uParam2, bool bParam3, bool bParam4)//Position - 0x9118D
{
	if (__LIB_0__::func_715(iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, bParam3, bParam4);
	}
}

void func_433(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x93C3D
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
}

int func_434()//Position - 0x97D26
{
	int iVar0;
	int iVar1;
	int iVar2;
	STATS::STAT_GET_INT(joaat("SP0_KILLS_COP"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("SP1_KILLS_COP"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("SP2_KILLS_COP"), &iVar2, -1);
	return ((iVar0 + iVar1) + iVar2);
}

char* func_435(int iParam0)//Position - 0xA1D5E
{
	switch (iParam0)
	{
		case 1:
			return "HC_FN_GUS" /* GXT: Gustavo */;
			break;
		case 2:
			return "HC_FN_KAR" /* GXT: Karl */;
			break;
		case 10:
			return "HC_FN_PAC" /* GXT: Packie */;
			break;
		case 11:
			return "HC_FN_CHE" /* GXT: Chef */;
			break;
		case 3:
			return "HC_FN_HUG" /* GXT: Hugh */;
			break;
		case 4:
			return "HC_FN_NOR" /* GXT: Norm */;
			break;
		case 5:
			return "HC_FN_DAR" /* GXT: Daryl */;
			break;
		case 6:
			return "HC_FN_PAI" /* GXT: Paige */;
			break;
		case 7:
			return "HC_FN_CHR" /* GXT: Christian */;
			break;
		case 12:
			return "HC_FN_RIC" /* GXT: Rickie */;
			break;
		case 8:
			return "HC_FN_EDD" /* GXT: Eddie */;
			break;
		case 13:
			return "HC_FN_TAL" /* GXT: Taliana */;
			break;
		case 9:
			return "HC_FN_KRM" /* GXT: Karim */;
			break;
	}
	return "ERROR!";
}

bool func_436()//Position - 0x71487
{
	return __LIB_14__::func_466() == 1;
}

bool func_437()//Position - 0x71495
{
	return __LIB_14__::func_466() == 0;
}

bool func_438()//Position - 0x714A3
{
	return __LIB_14__::func_466() == 2;
}

int func_439()//Position - 0x876BF
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if ((MISC::ABSI(iVar0) > 75 || MISC::ABSI(iVar1) > 75) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
	{
		return 1;
	}
	return 0;
}

int func_440(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x8985A
{
	return __LIB_16__::func_897(uParam0, iParam1, iParam2, iParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_441(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0xEA7C
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_0__::func_86(Param0 + Param1))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param1, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param1, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param1, Param0) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param1, Param0) && !bParam4)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param1, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param2, fParam3) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param2, fParam3)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param2, fParam3) && !bParam4)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param2, fParam3) && !bParam4)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param2, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_442(struct<2> Param0, Vector3 vParam1, int iParam2)//Position - 0x14D1
{
	if (!(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam2 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0.f_0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0.f_0 > 1278.08f)
				{
					*iParam2 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_443(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5)//Position - 0x17C26
{
	return (((Param4.f_0 - Param2.f_0) * (Param0.f_1 - Param2.f_1)) - ((Param4.f_1 - Param2.f_1) * (Param0.f_0 - Param2.f_0))) >= 0f;
}

void func_444(int iParam0)//Position - 0x1B9B1
{
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

bool func_445(int iParam0)//Position - 0x1F906
{
	return BitTest(uLocal_78, iParam0);
}

bool func_446(int iParam0, int iParam1)//Position - 0x2086D
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!bVar1)
		{
			if (iParam0 == (*iParam1)[iVar0])
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	return bVar1;
}

void func_447(var uParam0, int iParam1)//Position - 0x8E4DC
{
	uParam0->f_9 = iParam1;
}

void func_448(int iParam0)//Position - 0x8E860
{
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
}

Vector3 func_449(struct<3> Param0, float fParam1)//Position - 0x4859
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_79(Param0) };
	Var0.f_0 = (Var0.f_0 * fParam1);
	Var0.f_1 = (Var0.f_1 * fParam1);
	Var0.f_2 = (Var0.f_2 * fParam1);
	return Var0;
}

void func_450(var uParam0)//Position - 0x4CD6
{
	if (!uParam0->f_1)
	{
		if (!MISC::IS_STRING_NULL(*uParam0))
		{
			__LIB_0__::func_229(*uParam0, 7500, 1);
			uParam0->f_1 = 1;
		}
	}
}

void func_451(bool bParam0, int iParam1, bool bParam2)//Position - 0x1A069
{
	char* sVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			bParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	bParam0->f_1 = 0;
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_8 = 0;
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(bParam0->f_3))
	{
		if (__LIB_0__::func_1(bParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (__LIB_0__::func_1(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_452(var uParam0, bool bParam1)//Position - 0x1AEC8
{
	bool bVar0;
	bool bVar1;
	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}
	if ((bParam1 != 0 && bParam1 != 2) && bParam1 != 1)
	{
	}
	else
	{
		bVar0 = uParam0->f_34[bParam1] == 2;
		if (__LIB_0__::func_482(__LIB_15__::func_942()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[bParam1] != 0) || ((__LIB_13__::func_765(bParam1) && __LIB_13__::func_764(bParam1)) && !uParam0->f_18[bParam1]))
			{
				if (!uParam0->f_23)
				{
					if (!PED::IS_PED_INJURED((*uParam0)[bParam1]) || bVar0)
					{
						if (uParam0->f_34[bParam1] != 1 && uParam0->f_34[bParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)) && !BitTest(Global_97919.f_47, bParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((BitTest(Global_113386.f_9085.f_2[27 /*3*/], 1) && !Global_3) && !__LIB_0__::func_2(0)))
			{
				if (uParam0->f_23)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				uParam0->f_7 = bParam1;
				return 1;
			}
		}
	}
	uParam0->f_39 = 0;
	return 0;
}

int func_453(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x88C94
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__::func_374(bParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__::func_378(bParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				else if (((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					__LIB_32__::func_433(bParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_0__::func_397(*iParam0, bParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_454()//Position - 0x6614
{
	struct<50> Var0;
	if ((PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !__LIB_0__::func_374(__LIB_14__::func_466())) || !__LIB_0__::func_438())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	__LIB_37__::func_526(PLAYER::PLAYER_PED_ID(), &Var0, 1, -1);
	__LIB_0__::func_408(1306, Var0[0], -1);
	__LIB_0__::func_408(1307, Var0[1], -1);
	__LIB_0__::func_408(1308, Var0[2], -1);
	__LIB_0__::func_408(1309, Var0[3], -1);
	__LIB_0__::func_408(1310, Var0[4], -1);
	__LIB_0__::func_408(1311, Var0[5], -1);
	__LIB_0__::func_408(1312, Var0[6], -1);
	__LIB_0__::func_408(1313, Var0[7], -1);
	__LIB_0__::func_408(1314, Var0[8], -1);
	__LIB_0__::func_408(1315, Var0[9], -1);
	__LIB_0__::func_408(1316, Var0[10], -1);
	__LIB_0__::func_408(1317, Var0[11], -1);
	__LIB_0__::func_408(1318, Var0.f_13[0], -1);
	__LIB_0__::func_408(1319, Var0.f_13[1], -1);
	__LIB_0__::func_408(1320, Var0.f_13[2], -1);
	__LIB_0__::func_408(1321, Var0.f_13[3], -1);
	__LIB_0__::func_408(1322, Var0.f_13[4], -1);
	__LIB_0__::func_408(1323, Var0.f_13[5], -1);
	__LIB_0__::func_408(1324, Var0.f_13[6], -1);
	__LIB_0__::func_408(1325, Var0.f_13[7], -1);
	__LIB_0__::func_408(1326, Var0.f_13[8], -1);
	__LIB_0__::func_408(1327, Var0.f_13[9], -1);
	__LIB_0__::func_408(1328, Var0.f_13[10], -1);
	__LIB_0__::func_408(1329, Var0.f_13[11], -1);
	__LIB_0__::func_408(1330, Var0.f_26[0], -1);
	__LIB_0__::func_408(1331, Var0.f_26[1], -1);
	__LIB_0__::func_408(1332, Var0.f_26[2], -1);
	__LIB_0__::func_408(1333, Var0.f_26[3], -1);
	__LIB_0__::func_408(1334, Var0.f_26[4], -1);
	__LIB_0__::func_408(1335, Var0.f_26[5], -1);
	__LIB_0__::func_408(1336, Var0.f_26[6], -1);
	__LIB_0__::func_408(1337, Var0.f_26[7], -1);
	__LIB_0__::func_408(1338, Var0.f_26[8], -1);
	__LIB_0__::func_408(1339, Var0.f_26[9], -1);
	__LIB_0__::func_408(1340, Var0.f_26[10], -1);
	__LIB_0__::func_408(1341, Var0.f_26[11], -1);
	__LIB_0__::func_408(1342, Var0.f_39[0], -1);
	__LIB_0__::func_408(1343, Var0.f_39[1], -1);
	__LIB_0__::func_408(1344, Var0.f_39[2], -1);
	__LIB_0__::func_408(1345, Var0.f_39[3], -1);
	__LIB_0__::func_408(1346, Var0.f_39[4], -1);
	__LIB_0__::func_408(1347, Var0.f_39[5], -1);
	__LIB_0__::func_408(1348, Var0.f_39[6], -1);
	__LIB_0__::func_408(1349, Var0.f_39[7], -1);
	__LIB_0__::func_408(1350, Var0.f_39[8], -1);
	__LIB_0__::func_408(1351, Var0.f_49[0], -1);
	__LIB_0__::func_408(1352, Var0.f_49[1], -1);
	__LIB_0__::func_408(1353, Var0.f_49[2], -1);
	__LIB_0__::func_408(1354, Var0.f_49[3], -1);
	__LIB_0__::func_408(1355, Var0.f_49[4], -1);
	__LIB_0__::func_408(1356, Var0.f_49[5], -1);
	__LIB_0__::func_408(1357, Var0.f_49[6], -1);
	__LIB_0__::func_408(1358, Var0.f_49[7], -1);
	__LIB_0__::func_408(1359, Var0.f_49[8], -1);
	__LIB_0__::func_408(1360, __LIB_14__::func_466(), -1);
	STATS::STAT_SET_BOOL(joaat("CLO_STORED_INITIAL"), true, true);
	Global_113386.f_2363.f_539.f_4315 = 1;
}

int func_455(int iParam0, bool bParam1)//Position - 0x69C11
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = iParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar5 = __LIB_16__::func_594();
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar1 = iVar6;
			if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
			{
				__LIB_0__::func_432(iVar1, &Var0);
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
				if (fVar4 < fVar3)
				{
					bVar7 = true;
					if (bParam1)
					{
						if (iVar5 != Var0.f_26)
						{
							bVar7 = false;
						}
					}
					if (bVar7)
					{
						iVar2 = iVar1;
						fVar3 = fVar4;
					}
				}
			}
			iVar6++;
		}
	}
	return iVar2;
}

int func_456(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6C2BC
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (__LIB_17__::func_899(*uParam1, __LIB_14__::func_466(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_457(int iParam0)//Position - 0x93
{
	if (Global_20245 == 0)
	{
		if (((((((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			Global_20245 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_20245 = 0;
	}
	if (Global_20245 == 0)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 206 /*INPUT_FRONTEND_RB*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(17);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_458()//Position - 0x215
{
	__LIB_0__::func_671(0);
	MISC::SET_GAME_PAUSED(false);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_18);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_459(var uParam0, int iParam1)//Position - 0x2C89
{
	__LIB_14__::func_576(uParam0, 0, iParam1, "NULL", 0);
}

void func_460(var uParam0, int iParam1)//Position - 0x2DD0
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_461(bool bParam0)//Position - 0x2EC3
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 128);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 128);
	}
}

void func_462(int iParam0)//Position - 0x4BD6
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iParam0);
}

void func_463()//Position - 0x28FE3
{
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
	PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
	PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
}

void func_464(int* iParam0)//Position - 0x340DB
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	*iParam0 = 0;
}

int func_465()//Position - 0x36634
{
	return GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_MEDAL_FREEMODE");
}

void func_466()//Position - 0x4B87F
{
	CAM::SHAKE_GAMEPLAY_CAM("JOLT_SHAKE", 0.07f);
}

int func_467(int iParam0, int iParam1)//Position - 0x56D3D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 > 0)
		{
			iVar1 = (3 - iVar0);
			(*iParam0)[iVar1] = (*iParam0)[(iVar1 - 1)];
		}
		iVar0++;
	}
	(*iParam0)[0] = iParam1;
	return 0;
}

int func_468()//Position - 0x56DCD
{
	if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3) != 0)
	{
		return 1;
	}
	return 0;
}

int func_469(int iParam0)//Position - 0x62F00
{
	if (iParam0 < 0)
	{
		return 0;
	}
	return iParam0;
}

void func_470(var uParam0, int iParam1)//Position - 0x74F35
{
	MISC::SET_BIT(&(uParam0->f_28), iParam1);
}

int func_471(struct<36> Param0, var uParam1, var uParam2, var uParam3, struct<4> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x1825
{
	if (Param4.f_3 < 0f)
	{
		return -1;
	}
	if (Param4.f_3 >= Param0.f_33)
	{
		return 100;
	}
	if (Param4.f_3 < Param0.f_33 && Param4.f_3 >= Param0.f_34)
	{
		return 80;
	}
	if (Param0.f_35 == -1f || (Param4.f_3 < Param0.f_34 && Param4.f_3 >= Param0.f_35))
	{
		return 70;
	}
	return -1;
}

int func_472(struct<36> Param0, var uParam1, var uParam2, var uParam3, struct<4> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x189F
{
	if (Param4.f_3 < 0f)
	{
		return -1;
	}
	if (Param4.f_3 <= Param0.f_33)
	{
		return 100;
	}
	if (Param4.f_3 > Param0.f_33 && Param4.f_3 <= Param0.f_34)
	{
		return 80;
	}
	if (Param0.f_35 == -1f || (Param4.f_3 > Param0.f_34 && Param4.f_3 <= Param0.f_35))
	{
		return 70;
	}
	return -1;
}

int func_473(struct<38> Param0, var uParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5)//Position - 0x1919
{
	return (100 * SYSTEM::ROUND(((Param0.f_37 - Param2.f_6) / Param0.f_37)));
}

int func_474(struct<37> Param0, var uParam1, var uParam2, struct<6> Param3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1936
{
	return (Param3.f_5 * 100 / Param0.f_36);
}

int func_475(struct<33> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)//Position - 0x19C3
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((fParam7 * 1000f));
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_30 * 1000f)))
	{
		return 100;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_31 * 1000f)))
	{
		return 80;
	}
	if (Param0.f_32 == -1f || iVar0 <= SYSTEM::FLOOR((Param0.f_32 * 1000f)))
	{
		return 70;
	}
	return -1;
}

bool func_476(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10)//Position - 0x1A45
{
	return unk_0xA921AA820C25702F(Param0.f_29, iParam10);
}

int func_477()//Position - 0x1C31
{
	if (Global_10433.f_1 == 1 || Global_10433.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)//Position - 0x1CCC
{
	if (iParam0 == 1)
	{
		if (Global_10433.f_1 > 3)
		{
			if (unk_0xA921AA820C25702F(Global_1686, 14))
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
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_10433.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0, int iParam1)//Position - 0x2B4B
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 6;
					break;
				case 3:
					return 181;
					break;
				case 4:
					return 113;
					break;
				case 5:
					return 14;
					break;
				case 6:
					return 99;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 24;
					break;
				case 9:
					return 20;
					break;
				case 10:
					return 48;
					break;
				case 11:
					return 45;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 5;
					break;
				case 2:
					return 21;
					break;
				case 3:
					return 318;
					break;
				case 4:
					return 117;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 134;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 77;
					break;
				case 9:
					return 12;
					break;
				case 10:
					return 53;
					break;
				case 11:
					return 63;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				case 1:
					return 6;
					break;
				case 2:
					return 9;
					break;
				case 3:
					return 234;
					break;
				case 4:
					return 93;
					break;
				case 5:
					return 7;
					break;
				case 6:
					return 84;
					break;
				case 7:
					return 1;
					break;
				case 8:
					return 18;
					break;
				case 9:
					return 17;
					break;
				case 10:
					return 33;
					break;
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 91;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 92;
					break;
				case 8:
					return 241;
					break;
				case 9:
					return 46;
					break;
				case 10:
					return 7;
					break;
				case 11:
					return 237;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 26;
					break;
				case 2:
					return 92;
					break;
				case 3:
					return 16;
					break;
				case 4:
					return 256;
					break;
				case 5:
					return 9;
					break;
				case 6:
					return 256;
					break;
				case 7:
					return 55;
					break;
				case 8:
					return 136;
					break;
				case 9:
					return 36;
					break;
				case 10:
					return 6;
					break;
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_480(int iParam0)//Position - 0x2EF2
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			return 111;
			break;
		case joaat("Player_One"):
			return 173;
			break;
		case joaat("Player_Two"):
			return 138;
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			return 291;
			break;
		case joaat("MP_F_Freemode_01"):
			return 291;
			break;
	}
	return -99;
}

int func_481(int iParam0, int iParam1, int iParam2)//Position - 0x2F53
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 58) || iParam2 == 59) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 81 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 72 || iParam2 == 12) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || iParam2 == 42) || (iParam2 >= 43 && iParam2 <= 45))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_482(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6259
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

bool func_483(int iParam0, int iParam1, var uParam2)//Position - 0x7753
{
	*uParam2 = 964;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 965;
					break;
				case 3:
					*uParam2 = 1403;
					break;
				case 4:
					*uParam2 = 981;
					break;
				case 6:
					*uParam2 = 989;
					break;
				case 8:
					*uParam2 = 1404;
					break;
				case 9:
					*uParam2 = 1412;
					break;
				case 10:
					*uParam2 = 1414;
					break;
				case 1:
					*uParam2 = 997;
					break;
				case 7:
					*uParam2 = 1415;
					break;
				case 11:
					*uParam2 = 973;
					break;
				case 14:
					*uParam2 = 1005;
					break;
				case 12:
					*uParam2 = 1016;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 966;
					break;
				case 4:
					*uParam2 = 982;
					break;
				case 6:
					*uParam2 = 990;
					break;
				case 8:
					*uParam2 = 1405;
					break;
				case 9:
					*uParam2 = 1413;
					break;
				case 7:
					*uParam2 = 1416;
					break;
				case 11:
					*uParam2 = 974;
					break;
				case 14:
					*uParam2 = 1006;
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 967;
					break;
				case 4:
					*uParam2 = 983;
					break;
				case 6:
					*uParam2 = 991;
					break;
				case 8:
					*uParam2 = 1406;
					break;
				case 7:
					*uParam2 = 1417;
					break;
				case 11:
					*uParam2 = 975;
					break;
				case 14:
					*uParam2 = 1007;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 984;
					break;
				case 6:
					*uParam2 = 992;
					break;
				case 8:
					*uParam2 = 1407;
					break;
				case 11:
					*uParam2 = 976;
					break;
				case 14:
					*uParam2 = 1008;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 985;
					break;
				case 6:
					*uParam2 = 993;
					break;
				case 8:
					*uParam2 = 1408;
					break;
				case 11:
					*uParam2 = 977;
					break;
				case 14:
					*uParam2 = 1009;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 986;
					break;
				case 6:
					*uParam2 = 994;
					break;
				case 8:
					*uParam2 = 1409;
					break;
				case 11:
					*uParam2 = 978;
					break;
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 987;
					break;
				case 6:
					*uParam2 = 995;
					break;
				case 8:
					*uParam2 = 1410;
					break;
				case 11:
					*uParam2 = 979;
					break;
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				case 6:
					*uParam2 = 996;
					break;
				case 8:
					*uParam2 = 1411;
					break;
				case 11:
					*uParam2 = 980;
					break;
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
	}
	return *uParam2 != 964;
}

int func_484(int iParam0, int iParam1, int iParam2)//Position - 0x1ADCB
{
	if (iParam0 == joaat("Player_Zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_One"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 49 && iParam2 <= 64)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_485(int iParam0, int iParam1, int iParam2)//Position - 0x1C438
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		case joaat("Player_One"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		case joaat("Player_Two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 86)) || (iParam1 >= 90 && iParam1 <= 92))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

void func_486(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1CAE3
{
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
	}
}

int func_487(int iParam0, int iParam1)//Position - 0x1CC4E
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 57;
					break;
				case 2:
					return 110;
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 81;
					break;
				case 2:
					return 156;
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 72;
					break;
				case 2:
					return 137;
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 283;
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				case 1:
					return 155;
					break;
				case 6:
					return 283;
					break;
			}
			break;
	}
	return -99;
}

float func_488()//Position - 0x1EE9A
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_489(int* iParam0)//Position - 0x1EECC
{
	return unk_0xA921AA820C25702F(*iParam0, 2);
}

bool func_490(int* iParam0)//Position - 0x1EEDC
{
	return unk_0xA921AA820C25702F(*iParam0, 1);
}

void func_491()//Position - 0x1EF0A
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 63 /*INPUT_VEH_MOVE_LEFT_ONLY*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 64 /*INPUT_VEH_MOVE_RIGHT_ONLY*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 104 /*INPUT_VEH_SHUFFLE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 105 /*INPUT_VEH_DROP_PROJECTILE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 106 /*INPUT_VEH_MOUSE_CONTROL_OVERRIDE*/);
}

int func_492()//Position - 0x1F242
{
	if (Global_11728 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_493(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1F2DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1)))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							return 0;
						}
					}
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1));
					if (!PED::IS_PED_INJURED(iVar3))
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

int func_494(int iParam0)//Position - 0x1F4CE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_495(int iParam0)//Position - 0x2041F
{
	iLocal_187 = iParam0;
}

bool func_496()//Position - 0x21BE3
{
	return Global_2883949 >= 12;
}

int func_497()//Position - 0x21BF2
{
	if (Global_2883949 < 12)
	{
		return Global_2883949;
	}
	else
	{
		return (Global_2883949 - 12);
	}
	return -1;
}

int func_498(struct<3> Param0, int iParam1, int iParam2)//Position - 0x229E1
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

int func_499(int iParam0)//Position - 0x22C26
{
	switch (iParam0)
	{
		case 3:
			return 3;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 2;
			break;
		case 11:
			return 1;
			break;
		case 12:
			return 5;
			break;
	}
	return 5;
}

int func_500(int iParam0)//Position - 0x22FA1
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		fVar1 = 0f;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1))
		{
			if (Var0.f_2 > (fVar1 + 1.5f))
			{
				return 1;
			}
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_501()//Position - 0x2376B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_10596[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_11728 = 1;
}

void func_502()//Position - 0x238F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_11017[iVar0 /*10*/] = 0;
		StringCopy(&(Global_11017[iVar0 /*10*/].f_1), "", 24);
		Global_11017[iVar0 /*10*/].f_7 = 0;
		Global_11017[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_11017.f_161 = -99;
	Global_11017.f_162 = { 0f, 0f, 0f };
}

int func_503(struct<3> Param0)//Position - 0x23B3E
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

void func_504(var uParam0, int iParam1)//Position - 0x24285
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
	if (PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_IN_SESSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_505(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x25BF7
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (MISC::ABSF((Param0.f_0 - Param1.f_0)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_506(int* iParam0)//Position - 0x27423
{
	int iVar0;
	if (*iParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
	iParam0->f_77 = "";
	iParam0->f_78 = 0;
	iParam0->f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iParam0->f_11[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_2[iVar0] = "";
		iVar0++;
	}
}

int func_507(int iParam0)//Position - 0x279C5
{
	switch (iParam0)
	{
		case 19:
			return 171;
			break;
		case 18:
			return 172;
			break;
		case 28:
			return 173;
			break;
		case 27:
			return 174;
			break;
		case 0:
		case 4:
			return 164;
			break;
		case 1:
		case 5:
			return 163;
			break;
		case 2:
		case 6:
			return 165;
			break;
		case 3:
		case 7:
			return 166;
			break;
		case 38:
			return 175;
			break;
		case 39:
			return 186;
			break;
		case 32:
			return 178;
			break;
		case 33:
			return 179;
			break;
		case 30:
			return 176;
			break;
		case 31:
			return 177;
			break;
		case 34:
			return 180;
			break;
		case 35:
			return 182;
			break;
		case 36:
			return 181;
			break;
		case 37:
			return 183;
			break;
	}
	return -1;
}

void func_508()//Position - 0x28015
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET");
}

void func_509(var uParam0, int iParam1)//Position - 0x28792
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false);
}

void func_510(var uParam0, struct<3> Param1, int iParam2)//Position - 0x29FF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds");
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_511()//Position - 0x2A0B8
{
	return PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

bool func_512()//Position - 0x2A0D4
{
	return PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

bool func_513()//Position - 0x2A0E3
{
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/);
}

int func_514()//Position - 0x2A29E
{
	if ((unk_0x4DC84C86C4DF6500() == 8 || unk_0x4DC84C86C4DF6500() == 9) || unk_0x4DC84C86C4DF6500() == 10)
	{
		return 1;
	}
	return 0;
}

float func_515(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x2BC14
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam2);
}

struct<6> func_516()//Position - 0x2C604
{
	struct<6> Var0;
	int iVar1;
	StringCopy(&Var0, "NULL", 24);
	if (Global_11728 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_12718);
		if (iVar1 > -1)
		{
			return Global_10596[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_517(int iParam0, var uParam1, var uParam2)//Position - 0x2CBAA
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_518(int iParam0)//Position - 0x2D0B1
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar2, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				if (MISC::GET_HASH_KEY(&cVar2) != 0 && MISC::GET_HASH_KEY(&cVar2) == MISC::GET_HASH_KEY("MNU_CAGE" /* GXT: Roll Cage and Chassis Upgrade */))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_519(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x3506E
{
	Global_11725 = iParam0;
	Global_11735 = 0;
	Global_11742 = 0;
	Global_11737 = 0;
	Global_12699 = 0;
	Global_12705 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = iParam7;
	(*uParam2)[2] = iParam8;
	(*uParam1)[3] = iParam9;
	(*uParam2)[3] = iParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

float func_520(int iParam0, int iParam1, bool bParam2)//Position - 0x3680F
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, bParam2);
}

void func_521(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x36DA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (bParam4)
	{
		fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		fVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		fVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		fVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	}
	else
	{
		fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
		fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
		fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/);
		fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_522(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x37111
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) * 127f));
		}
	}
}

struct<4> func_523(int iParam0)//Position - 0x3BFF5
{
	struct<4> Var0;
	StringCopy(&Var0, "PS_FLa_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

int func_524(int* iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C011
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2 + 1);
	while (iVar1 < (iParam2 - iParam1) + 1)
	{
		if (!unk_0xA921AA820C25702F(*iParam0, iVar0))
		{
			MISC::SET_BIT(iParam0, iVar0);
			*iParam3 = iVar0 + 3;
			return 1;
		}
		iVar0++;
		if (iVar0 > iParam2)
		{
			iVar0 = iParam1;
		}
		iVar1++;
	}
	return 0;
}

int func_525()//Position - 0x48367
{
	switch (Global_2883949)
	{
		case 0:
			return 30;
		case 1:
			return 40;
		case 2:
			return 50;
		case 3:
			return 60;
		case 6:
			return 70;
		case 4:
			return 75;
		case 5:
			return 80;
		case 11:
			return 85;
		case 7:
			return 90;
		case 8:
			return 95;
		case 9:
			return 0;
		case 10:
			return 0;
		default:
	}
	return 0;
}

void func_526(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x4A85C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_527(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x4A930
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_528(float fParam0, float fParam1, char* sParam2)//Position - 0x4AA13
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1);
}

void func_529()//Position - 0x4AF59
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET");
}

bool func_530(int iParam0, var uParam1)//Position - 0x4AF85
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/);
	if (MISC::ABSI(iVar1) < 28 && MISC::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (MISC::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		case 1:
			bVar0 = iVar2 > 156;
			break;
		case 2:
			bVar0 = iVar1 < 100;
			break;
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = MISC::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

void func_531()//Position - 0x4B05E
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

void func_532(var uParam0, bool bParam1)//Position - 0x4B310
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		*uParam0 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_533(var uParam0, bool bParam1)//Position - 0x4B3D2
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_534(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x4C874
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY" /* GXT: – */);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		case 0:
			break;
	}
}

int func_535(int iParam0)//Position - 0x4D2A8
{
	if (iParam0 == 500)
	{
		return joaat("WEAPON_MINIGUN");
	}
	else if (iParam0 == 400)
	{
		return joaat("WEAPON_MG");
	}
	else if (iParam0 == 401)
	{
		return joaat("WEAPON_COMBATMG");
	}
	else if (iParam0 == 402)
	{
		return joaat("WEAPON_ASSAULTMG");
	}
	else if (iParam0 == 300)
	{
		return joaat("WEAPON_ASSAULTRIFLE");
	}
	else if (iParam0 == 301)
	{
		return joaat("WEAPON_CARBINERIFLE");
	}
	else if (iParam0 == 302)
	{
		return joaat("WEAPON_ADVANCEDRIFLE");
	}
	else if (iParam0 == 303)
	{
		return joaat("WEAPON_HEAVYRIFLE");
	}
	else if (iParam0 == 200)
	{
		return joaat("WEAPON_PUMPSHOTGUN");
	}
	else if (iParam0 == 201)
	{
		return joaat("WEAPON_SAWNOFFSHOTGUN");
	}
	else if (iParam0 == 202)
	{
		return joaat("WEAPON_ASSAULTSHOTGUN");
	}
	else if (iParam0 == 203)
	{
		return joaat("WEAPON_BULLPUPSHOTGUN");
	}
	else if (iParam0 == 100)
	{
		return joaat("WEAPON_MICROSMG");
	}
	else if (iParam0 == 101)
	{
		return joaat("WEAPON_SMG");
	}
	else if (iParam0 == 102)
	{
		return joaat("WEAPON_ASSAULTSMG");
	}
	else if (iParam0 == 0)
	{
		return joaat("WEAPON_PISTOL");
	}
	else if (iParam0 == 1)
	{
		return joaat("WEAPON_COMBATPISTOL");
	}
	else if (iParam0 == 2)
	{
		return joaat("WEAPON_APPISTOL");
	}
	else if (iParam0 == 3)
	{
		return joaat("WEAPON_PISTOL50");
	}
	return 0;
}

void func_536(var uParam0)//Position - 0x4D803
{
	struct<13> Var0;
	int iVar1;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 24);
	StringCopy(&(uParam0->f_7), "", 32);
	uParam0->f_15 = { Var0 };
	uParam0->f_28 = { Var0 };
	uParam0->f_41 = 0;
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_46[iVar1] = 0f;
		uParam0->f_79[iVar1] = 0;
		iVar1++;
	}
}

int func_537(int iParam0)//Position - 0x4D8F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1837576.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1837576.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1837576.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1837576.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_538(var uParam0)//Position - 0x4DF00
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*72*/], "", 24);
		StringCopy(&((uParam0[iVar1 /*72*/])->f_6), "", 32);
		(uParam0[iVar1 /*72*/])->f_14 = { Var0 };
		(uParam0[iVar1 /*72*/])->f_27 = { Var0 };
		(uParam0[iVar1 /*72*/])->f_40 = 0;
		(uParam0[iVar1 /*72*/])->f_41 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*72*/])->f_42[iVar2] = 0f;
			(uParam0[iVar1 /*72*/])->f_49[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*72*/])->f_57 = 0;
		(uParam0[iVar1 /*72*/])->f_56 = 0;
		(uParam0[iVar1 /*72*/])->f_58 = 0;
		(uParam0[iVar1 /*72*/])->f_59 = 0;
		StringCopy(&((uParam0[iVar1 /*72*/])->f_60), "", 16);
		iVar1++;
	}
	__LIB_0__::func_794(&(Global_1835390.f_2182));
}

void func_539(var uParam0, struct<2> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)//Position - 0x4F83B
{
	*uParam0 = Param1.f_0;
	uParam0->f_1 = Param1.f_1;
	uParam0->f_2 = 0;
}

int func_540()//Position - 0x4F98D
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

struct<6> func_541(int iParam0)//Position - 0x5583A
{
	struct<6> Var0;
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0" /* GXT: - Pistol Challenge 1 */, 24);
			break;
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1" /* GXT: - Pistol Challenge 2 */, 24);
			break;
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2" /* GXT: - Pistol Challenge 3 */, 24);
			break;
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3" /* GXT: - Submachine Gun Challenge 1 */, 24);
			break;
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4" /* GXT: - Submachine Gun Challenge 2 */, 24);
			break;
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5" /* GXT: - Submachine Gun Challenge 3 */, 24);
			break;
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6" /* GXT: - Shotgun Challenge 1 */, 24);
			break;
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7" /* GXT: - Shotgun Challenge 2 */, 24);
			break;
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8" /* GXT: - Shotgun Challenge 3 */, 24);
			break;
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9" /* GXT: - Assault Rifle Challenge 1 */, 24);
			break;
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10" /* GXT: - Assault Rifle Challenge 2 */, 24);
			break;
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11" /* GXT: - Assault Rifle Challenge 3 */, 24);
			break;
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12" /* GXT: - Light Machine Gun Challenge 1 */, 24);
			break;
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13" /* GXT: - Light Machine Gun Challenge 2 */, 24);
			break;
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14" /* GXT: - Light Machine Gun Challenge 3 */, 24);
			break;
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15" /* GXT: - Heavy Weapon Challenge 1 */, 24);
			break;
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16" /* GXT: - Heavy Weapon Challenge 2 */, 24);
			break;
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17" /* GXT: - Heavy Weapon Challenge 3 */, 24);
			break;
	}
	return Var0;
}

int func_542(var uParam0)//Position - 0x55BE3
{
	if ((unk_0xA921AA820C25702F(uParam0->f_42, 1) && Global_1835390.f_2056[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_543()//Position - 0x55D27
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET");
}

bool func_544(int* iParam0)//Position - 0x5733E
{
	return (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", false));
}

void func_545(int* iParam0)//Position - 0x573B7
{
	*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true);
}

int func_546(int iParam0)//Position - 0x58F1F
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_547()//Position - 0x58FAE
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_548(int iParam0, int iParam1)//Position - 0x5900E
{
	switch (iParam0)
	{
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_549(int* iParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x208F3
{
	int iVar0;
	if (*iParam0 == 0)
	{
		*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iParam0->f_11[iVar0] = -1;
		iParam0->f_44[iVar0] = "";
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iParam0->f_2[iVar0] = "";
		iVar0++;
	}
	iParam0->f_2[0] = sParam1;
	iParam0->f_11[0] = iParam2;
	iParam0->f_1 = 0;
	if (bParam3)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		__LIB_0__::func_989(&(iParam0->f_1), 1);
	}
}

int func_550(int iParam0)//Position - 0x22BBE
{
	switch (iParam0)
	{
		case 3:
			return 9;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 18;
			break;
		case 11:
			return 6;
			break;
		case 12:
			return __LIB_1__::func_577();
			break;
	}
	return __LIB_1__::func_577();
}

Vector3 func_551(struct<3> Param0, float fParam1)//Position - 0x288EB
{
	struct<3> Var0;
	int iVar1;
	iVar1 = 0;
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 180f) };
			if (__LIB_38__::func_953(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 135f) };
			if (__LIB_38__::func_953(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(45f, 0f, 225f) };
			if (__LIB_38__::func_953(Param0, Var0))
			{
				break;
			}
			Var0 = { Vector(fParam1, fParam1, fParam1) * __LIB_3__::func_80(-45f, 0f, 0f) };
			if (__LIB_38__::func_953(Param0, Var0))
			{
				break;
			}
			Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() - Param0 };
			break;
	}
	return Var0;
}

void func_552(var uParam0)//Position - 0x295CD
{
	if (__LIB_0__::func_339(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds");
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

char* func_553(int iParam0, bool bParam1)//Position - 0x4CB6E
{
	struct<32> Var0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID" /* GXT: Invalid */;
			}
			break;
		case joaat("WEAPON_UNARMED"):
			if (bParam1)
			{
				return "WTU_UNARMED" /* GXT: UNARMED */;
			}
			else
			{
				return "WT_UNARMED" /* GXT: Unarmed */;
			}
			break;
		case joaat("WEAPON_PISTOL"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_CBT" /* GXT: COMBAT PISTOL */;
			}
			else
			{
				return "WT_PIST_CBT" /* GXT: Combat Pistol */;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			if (bParam1)
			{
				return "WTU_PIST_AP" /* GXT: AP PISTOL */;
			}
			else
			{
				return "WT_PIST_AP" /* GXT: AP Pistol */;
			}
			break;
		case joaat("WEAPON_SMG"):
			if (bParam1)
			{
				return "WTU_SMG" /* GXT: SMG */;
			}
			else
			{
				return "WT_SMG" /* GXT: SMG */;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			if (bParam1)
			{
				return "WTU_SMG_MCR" /* GXT: MICRO SMG */;
			}
			else
			{
				return "WT_SMG_MCR" /* GXT: Micro SMG */;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL" /* GXT: ASSAULT RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ASL" /* GXT: Assault Rifle */;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN" /* GXT: CARBINE RIFLE */;
			}
			else
			{
				return "WT_RIFLE_CBN" /* GXT: Carbine Rifle */;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV" /* GXT: ADVANCED RIFLE */;
			}
			else
			{
				return "WT_RIFLE_ADV" /* GXT: Advanced Rifle */;
			}
			break;
		case joaat("WEAPON_MG"):
			if (bParam1)
			{
				return "WTU_MG" /* GXT: MG */;
			}
			else
			{
				return "WT_MG" /* GXT: MG */;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			if (bParam1)
			{
				return "WTU_MG_CBT" /* GXT: COMBAT MG */;
			}
			else
			{
				return "WT_MG_CBT" /* GXT: Combat MG */;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_PMP" /* GXT: PUMP SHOTGUN */;
			}
			else
			{
				return "WT_SG_PMP" /* GXT: Pump Shotgun */;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_SOF" /* GXT: SAWED-OFF SHOTGUN */;
			}
			else
			{
				return "WT_SG_SOF" /* GXT: Sawed-Off Shotgun */;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_ASL" /* GXT: ASSAULT SHOTGUN */;
			}
			else
			{
				return "WT_SG_ASL" /* GXT: Assault Shotgun */;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY" /* GXT: HEAVY SNIPER */;
			}
			else
			{
				return "WT_SNIP_HVY" /* GXT: Heavy Sniper */;
			}
			break;
		case joaat("WEAPON_REMOTESNIPER"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT" /* GXT: REMOTE SNIPER */;
			}
			else
			{
				return "WT_SNIP_RMT" /* GXT: Remote Sniper */;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF" /* GXT: SNIPER RIFLE */;
			}
			else
			{
				return "WT_SNIP_RIF" /* GXT: Sniper Rifle */;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			if (bParam1)
			{
				return "WTU_GL" /* GXT: GRENADE LAUNCHER */;
			}
			else
			{
				return "WT_GL" /* GXT: Grenade Launcher */;
			}
			break;
		case joaat("WEAPON_RPG"):
			if (bParam1)
			{
				return "WTU_RPG" /* GXT: RPG */;
			}
			else
			{
				return "WT_RPG" /* GXT: RPG */;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			if (bParam1)
			{
				return "WTU_MINIGUN" /* GXT: MINIGUN */;
			}
			else
			{
				return "WT_MINIGUN" /* GXT: Minigun */;
			}
			break;
		case joaat("WEAPON_GRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE" /* GXT: GRENADE */;
			}
			else
			{
				return "WT_GNADE" /* GXT: Grenade */;
			}
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK" /* GXT: TEAR GAS */;
			}
			else
			{
				return "WT_GNADE_SMK" /* GXT: Tear Gas */;
			}
			break;
		case joaat("WEAPON_STICKYBOMB"):
			if (bParam1)
			{
				return "WTU_GNADE_STK" /* GXT: STICKY BOMB */;
			}
			else
			{
				return "WT_GNADE_STK" /* GXT: Sticky Bomb */;
			}
			break;
		case joaat("WEAPON_MOLOTOV"):
			if (bParam1)
			{
				return "WTU_MOLOTOV" /* GXT: MOLOTOV */;
			}
			else
			{
				return "WT_MOLOTOV" /* GXT: Molotov */;
			}
			break;
		case joaat("WEAPON_STUNGUN"):
			if (bParam1)
			{
				return "WTU_STUN" /* GXT: STUN GUN */;
			}
			else
			{
				return "WT_STUN" /* GXT: Stun Gun */;
			}
			break;
		case joaat("WEAPON_PETROLCAN"):
			if (bParam1)
			{
				return "WTU_PETROL" /* GXT: JERRY CAN */;
			}
			else
			{
				return "WT_PETROL" /* GXT: Jerry Can */;
			}
			break;
		case joaat("WEAPON_ELECTRIC_FENCE"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		case joaat("VEHICLE_WEAPON_TANK"):
			if (bParam1)
			{
				return "WTU_V_TANK" /* GXT: TANK CANNON */;
			}
			else
			{
				return "WT_V_TANK" /* GXT: Tank Cannon */;
			}
			break;
		case joaat("VEHICLE_WEAPON_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT" /* GXT: ROCKETS */;
			}
			else
			{
				return "WT_V_SPACERKT" /* GXT: Rockets */;
			}
			break;
		case joaat("VEHICLE_WEAPON_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_V_PLRLSR" /* GXT: Laser */;
			}
			break;
		case joaat("OBJECT"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT" /* GXT: Object */;
			}
			break;
		case joaat("GADGET_PARACHUTE"):
			if (bParam1)
			{
				return "WTU_PARA" /* GXT: PARACHUTE */;
			}
			else
			{
				return "WT_PARA" /* GXT: Parachute */;
			}
			break;
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_RPG" /* GXT: Rocket */;
			}
			break;
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK" /* GXT: TANK */;
			}
			else
			{
				return "WT_A_TANK" /* GXT: Tank */;
			}
			break;
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT" /* GXT: ROCKET */;
			}
			else
			{
				return "WT_A_SPACERKT" /* GXT: Rocket */;
			}
			break;
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_PLRLSR" /* GXT: Laser */;
			}
			break;
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR" /* GXT: LASER */;
			}
			else
			{
				return "WT_A_ENMYLSR" /* GXT: Laser */;
			}
			break;
		case joaat("WEAPON_KNIFE"):
			if (bParam1)
			{
				return "WTU_KNIFE" /* GXT: KNIFE */;
			}
			else
			{
				return "WT_KNIFE" /* GXT: Knife */;
			}
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			if (bParam1)
			{
				return "WTU_NGTSTK" /* GXT: NIGHTSTICK */;
			}
			else
			{
				return "WT_NGTSTK" /* GXT: Nightstick */;
			}
			break;
		case joaat("WEAPON_HAMMER"):
			if (bParam1)
			{
				return "WTU_HAMMER" /* GXT: HAMMER */;
			}
			else
			{
				return "WT_HAMMER" /* GXT: Hammer */;
			}
			break;
		case joaat("WEAPON_BAT"):
			if (bParam1)
			{
				return "WTU_BAT" /* GXT: BASEBALL BAT */;
			}
			else
			{
				return "WT_BAT" /* GXT: Baseball Bat */;
			}
			break;
		case joaat("WEAPON_CROWBAR"):
			if (bParam1)
			{
				return "WTU_CROWBAR" /* GXT: CROWBAR */;
			}
			else
			{
				return "WT_CROWBAR" /* GXT: Crowbar */;
			}
			break;
		case joaat("WEAPON_GOLFCLUB"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB" /* GXT: GOLF CLUB */;
			}
			else
			{
				return "WT_GOLFCLUB" /* GXT: Golf Club */;
			}
			break;
		case joaat("WEAPON_RAMMED_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_RUN_OVER_BY_CAR"):
			if (bParam1)
			{
				return "WTU_PIST" /* GXT: PISTOL */;
			}
			else
			{
				return "WT_PIST" /* GXT: Pistol */;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			if (bParam1)
			{
				return "WTU_SMG_ASL" /* GXT: ASSAULT SMG */;
			}
			else
			{
				return "WT_SMG_ASL" /* GXT: Assault SMG */;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			if (bParam1)
			{
				return "WTU_SG_BLP" /* GXT: BULLPUP SHOTGUN */;
			}
			else
			{
				return "WT_SG_BLP" /* GXT: Bullpup Shotgun */;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			if (bParam1)
			{
				return "WTU_PIST_50" /* GXT: PISTOL .50 */;
			}
			else
			{
				return "WT_PIST_50" /* GXT: Pistol .50 */;
			}
			break;
		case joaat("WEAPON_BOTTLE"):
			if (bParam1)
			{
				return "WTU_BOTTLE" /* GXT: BOTTLE */;
			}
			else
			{
				return "WT_BOTTLE" /* GXT: Bottle */;
			}
			break;
		case joaat("WEAPON_GUSENBERG"):
			if (bParam1)
			{
				return "WTU_GUSENBERG" /* GXT: GUSENBERG SWEEPER */;
			}
			else
			{
				return "WT_GUSENBERG" /* GXT: Gusenberg Sweeper */;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL" /* GXT: SNS PISTOL */;
			}
			else
			{
				return "WT_SNSPISTOL" /* GXT: SNS Pistol */;
			}
			break;
		default:
			if (__LIB_0__::func_289(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return __LIB_1__::func_601(&(Var0.f_31));
				}
				else
				{
					return __LIB_1__::func_601(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID" /* GXT: Invalid */;
}

void func_554(bool bParam0, bool bParam1)//Position - 0x590E5
{
	bParam0 = bParam0;
	if (bParam0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	if (Global_2883949 == 19)
	{
		__LIB_38__::func_982(0, 0);
	}
	else
	{
		__LIB_38__::func_982(1, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/);
	if (bParam1)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_555(char* sParam0)//Position - 0x499
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

void func_556(var uParam0)//Position - 0x5B1
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_557()//Position - 0x107F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_134))
	{
		return;
	}
	if (Local_134.f_19 == 0)
	{
		return;
	}
	Local_134.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_134.f_19);
	STATS::PLAYSTATS_ARCADE_GAME(MISC::GET_HASH_KEY(&Local_134), Local_134.f_16, Local_134.f_17, Local_134.f_18, Local_134.f_19, Local_134.f_20, Local_134.f_21);
}

int func_558()//Position - 0x194D
{
	int iVar0;
	iVar0 = 199;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		iVar0 = 201;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, iVar0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_559(struct<2> Param0)//Position - 0x9922
{
	return __LIB_5__::func_403((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

int func_560(struct<2> Param0, struct<2> Param1)//Position - 0xA084
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = (Param0.f_0 - (Param1.f_0 / 2f));
	if (fVar0 > (1f - 0.15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param1.f_0 / 2f));
	if (fVar1 < 0.15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param1.f_1 / 2f));
	if (fVar2 > (1f - 0.06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param1.f_1 / 2f));
	if (fVar3 < (0f + 0.06944444f))
	{
		return 1;
	}
	return 0;
}

float func_561(float fParam0, var uParam1)//Position - 0xB0EB
{
	return __LIB_0__::func_331(((fParam0 - 0.15625f) / 0.658333f), 0f, 1f);
}

void func_562(bool bParam0)//Position - 0x11CB0
{
	if (bParam0)
	{
		StringCopy(&Local_134, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_134, "Invade and Persuade II.", 64);
	}
	Local_134.f_16 = 0;
	Local_134.f_17 = 0;
	Local_134.f_18 = 0;
	Local_134.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_134.f_20 = 0;
	Local_134.f_21 = 0;
}

int func_563(struct<2> Param0, struct<2> Param1, struct<2> Param2, struct<2> Param3, var uParam4)//Position - 0x102BF
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	fVar0 = (Param1.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param1.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param3.f_1 - Param2.f_1);
	fVar4 = (Param2.f_0 - Param3.f_0);
	fVar5 = ((fVar3 * Param2.f_0) + (fVar4 * Param2.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!__LIB_15__::func_816(fVar6, (0f - 0.0001f), (0f + 0.0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { __LIB_5__::func_403(fVar7, fVar8) };
		if (((((((__LIB_1__::func_712((Param0.f_0 - 0.001f), (Param1.f_0 - 0.001f)) <= Var9.f_0 && Var9.f_0 <= __LIB_3__::func_480((Param0.f_0 + 0.001f), (Param1.f_0 + 0.001f))) && __LIB_1__::func_712((Param0.f_1 - 0.001f), (Param1.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= __LIB_3__::func_480((Param0.f_1 + 0.001f), (Param1.f_1 + 0.001f))) && __LIB_1__::func_712((Param2.f_0 - 0.001f), (Param3.f_0 - 0.001f)) <= Var9.f_0) && Var9.f_0 <= __LIB_3__::func_480((Param2.f_0 + 0.001f), (Param3.f_0 + 0.001f))) && __LIB_1__::func_712((Param2.f_1 - 0.001f), (Param3.f_1 - 0.001f)) <= Var9.f_1) && Var9.f_1 <= __LIB_3__::func_480((Param2.f_1 + 0.001f), (Param3.f_1 + 0.001f)))
		{
			*uParam4 = { Var9 };
			return 1;
		}
	}
	*uParam4 = { __LIB_5__::func_403(3.402823E+38f, 3.402823E+38f) };
	return 0;
}

bool func_564()//Position - 0x6F0F1
{
	return Global_2714762.f_687;
}

void func_565(int iParam0)//Position - 0x736AC
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 27);
	}
}

bool func_566()//Position - 0x74E46
{
	return Global_2715699.f_1.f_2827;
}

bool func_567()//Position - 0x1B0033
{
	return BitTest(Global_2714762, 0);
}

int func_568()//Position - 0x1B0053
{
	if (__LIB_1__::func_16())
	{
		__LIB_2__::func_235();
	}
	if (Global_2715699.f_1.f_2800)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_TRANSITION_STARTED())
	{
		if (NETWORK::NETWORK_IS_TRANSITION_BUSY())
		{
			return 0;
		}
		else
		{
			NETWORK::NETWORK_LEAVE_TRANSITION();
			Global_2715699.f_1.f_2800 = 1;
			return 1;
		}
	}
	return 1;
}

void func_569()//Position - 0x1B00DB
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 16);
}

bool func_570(int iParam0)//Position - 0x1B0103
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_36.f_18, 5);
}

void func_571(var uParam0)//Position - 0x1B0179
{
	struct<4> Var0;
	*uParam0 = { Var0 };
}

int func_572()//Position - 0x1B0B69
{
	return Global_2621446.f_69.f_4;
}

void func_573(int iParam0)//Position - 0x1B0F83
{
	Global_1937518.f_46 = iParam0;
}

void func_574()//Position - 0x1B2D24
{
	Global_1937518.f_42 = 0;
}

void func_575(bool bParam0)//Position - 0x1B36DD
{
	int iVar0;
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	if ((__LIB_0__::func_1("HEIST_PRE_VIEW" /* GXT: Press ~INPUT_CONTEXT~ to view the Heist Planning Board. */) || __LIB_0__::func_1("HEIST_PRE_DONE" /* GXT: Press ~INPUT_CONTEXT~ to start Heist Finale. */)) || __LIB_0__::func_1("HEIST_NOTE_2" /* GXT: Grayed out Setup Missions on the Planning Board cannot be started until all previous Setup Missions have been completed. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	__LIB_27__::func_473(0);
	if (Global_2666788.f_17 != -1)
	{
		__LIB_3__::func_122(&(Global_2666788.f_17));
	}
	__LIB_25__::func_355(-1);
	Global_16 = 0;
	Global_1931975.f_1705 = -1;
	Global_1931975.f_1663 = 0;
	StringCopy(&(Global_1931975.f_1787), "", 24);
	Global_1931975.f_1708 = -1;
	Global_1931975.f_1706 = 0;
	Global_1931975.f_1711 = 0;
	Global_1931975.f_1751 = 0;
	Global_1931975.f_1754 = 0;
	Global_1931975.f_1761 = 0;
	Global_1931975.f_1763 = 0;
	Global_1931975.f_1777 = 0;
	Global_1931975.f_1785 = 0;
	Global_1931975.f_1714 = 0;
	Global_1931975.f_1715 = 0;
	Global_1931975.f_1716 = 0;
	Global_1931975.f_1702 = 0;
	Global_1931975.f_1704 = 0;
	Global_1931975.f_1710 = -1;
	__LIB_11__::func_684(&(Global_1931975.f_1610), 1, 1);
	__LIB_28__::func_534();
	__LIB_28__::func_533(0);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (bParam0)
		{
			Global_1931975.f_1720[iVar0] = -1;
		}
		Global_1931975.f_1736[iVar0] = 0;
		Global_1931975.f_1736[iVar0] = 0;
		Global_1931975.f_1728[iVar0] = -1;
		if (Global_1931975.f_1574[iVar0 /*5*/] != 0)
		{
			NETWORK::TEXTURE_DOWNLOAD_RELEASE(Global_1931975.f_1574[iVar0 /*5*/]);
		}
		NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(Global_1931975.f_111[iVar0 /*204*/].f_43);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1931975.f_1744 - 1))
	{
		Global_1931975.f_1744[iVar0] = 0;
		iVar0++;
	}
	if (Global_1931975.f_1705 != -1)
	{
		__LIB_3__::func_122(&(Global_1931975.f_1705));
	}
	__LIB_27__::func_473(0);
	__LIB_27__::func_474(&(Global_1931975.f_1663), 99, 0);
	if (__LIB_18__::func_66() && !Global_1931426)
	{
		__LIB_28__::func_532();
	}
	if (__LIB_28__::func_531())
	{
		__LIB_27__::func_439(0);
	}
	Global_1883784[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*77*/].f_10 = 0;
	__LIB_28__::func_530(&(Global_1931975.f_3));
	__LIB_35__::func_679();
	__LIB_28__::func_528();
	__LIB_28__::func_527(&(Global_1931975.f_1610));
	__LIB_25__::func_136(&(Global_1931975.f_1663));
	__LIB_28__::func_526(&(Global_1931975.f_1670));
	__LIB_28__::func_525();
	__LIB_19__::func_157(&(Global_1931975.f_1696));
	__LIB_28__::func_524();
	__LIB_28__::func_523(0);
	__LIB_28__::func_522();
	__LIB_28__::func_521(0);
	__LIB_28__::func_520(0);
	__LIB_28__::func_519(0);
	__LIB_28__::func_518(0);
	__LIB_28__::func_517(0);
	__LIB_28__::func_516(0);
	__LIB_28__::func_515(0);
	if (__LIB_28__::func_531())
	{
		__LIB_27__::func_439(0);
	}
	if (__LIB_28__::func_514())
	{
		__LIB_28__::func_513(0);
	}
	__LIB_35__::func_678(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_1937518.f_1));
	Global_1883784[PLAYER::PLAYER_ID() /*77*/].f_14 = 0;
	Global_2715699.f_6314 = 0;
}

int func_576()//Position - 0x56E
{
	return joaat("MP_M_Freemode_01");
}

int func_577(bool bParam0)//Position - 0x5A9E
{
	if (!__LIB_0__::func_374(bParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[bParam0];
}

void func_578()//Position - 0x7202C
{
	Global_2667225.f_665 = 1;
	__LIB_10__::func_253(0);
}

void func_579(int iParam0)//Position - 0x734C0
{
	Global_2725360 = iParam0;
}

bool func_580()//Position - 0x741E9
{
	return Global_1575060;
}

var func_581()//Position - 0x74331
{
	return Global_1575056;
}

void func_582(int iParam0)//Position - 0x74875
{
	Global_1575058 = iParam0;
}

void func_583(int iParam0)//Position - 0x74883
{
	Global_1575031 = iParam0;
}

void func_584()//Position - 0x74891
{
	Global_1574654.f_1 = -1;
	Global_1574654.f_2 = 0;
	Global_1574654.f_4 = 0;
	Global_1574654.f_5 = 0;
}

void func_585(int iParam0)//Position - 0x748B5
{
	Global_1574531 = iParam0;
}

void func_586(int iParam0)//Position - 0x748D1
{
	Global_2725337 = iParam0;
}

void func_587(bool bParam0)//Position - 0x749FA
{
	if (bParam0)
	{
		if (Global_2726701 == 0)
		{
			STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
			STREAMING::SET_SRL_LONG_JUMP_MODE(true);
			Global_2726701 = 1;
		}
	}
	else if (Global_2726701 == 1)
	{
		if (STREAMING::IS_SRL_LOADED())
		{
			STREAMING::END_SRL();
		}
		Global_2726701 = 0;
	}
}

void func_588(int iParam0)//Position - 0x74A49
{
	Global_2725909 = iParam0;
}

void func_589(int iParam0)//Position - 0x74A73
{
	Global_2725389 = iParam0;
}

void func_590(int iParam0)//Position - 0x74A9D
{
	Global_2727742 = iParam0;
}

void func_591(int iParam0)//Position - 0x74AD5
{
	Global_1574537 = iParam0;
}

void func_592(int iParam0)//Position - 0x74AE3
{
	Global_2725402 = iParam0;
}

void func_593(int iParam0)//Position - 0x74AF1
{
	Global_1575022 = iParam0;
}

void func_594(int iParam0)//Position - 0x74B6F
{
	Global_1575028 = iParam0;
}

void func_595(int iParam0)//Position - 0x74B8B
{
	Global_1574613 = iParam0;
}

void func_596(int iParam0)//Position - 0x74B99
{
	Global_1575055 = iParam0;
}

void func_597(int iParam0)//Position - 0x74BA7
{
	Global_2727714 = iParam0;
}

void func_598(int iParam0)//Position - 0x74BB5
{
	Global_2727713 = iParam0;
}

void func_599(int iParam0)//Position - 0x74CCB
{
	if (iParam0 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("SWITCH_TO_MP_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("SWITCH_TO_MP_SCENE");
	}
	else if (iParam0 == 0 && AUDIO::IS_AUDIO_SCENE_ACTIVE("SWITCH_TO_MP_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("SWITCH_TO_MP_SCENE");
	}
}

void func_600(int iParam0)//Position - 0x74D12
{
	Global_2725428 = iParam0;
}

void func_601(int iParam0)//Position - 0x74D20
{
	Global_1575064 = iParam0;
}

void func_602()//Position - 0x74D2E
{
	Global_1574612 = 0;
}

void func_603(int iParam0)//Position - 0x74D84
{
	Global_2725422 = iParam0;
}

void func_604(int iParam0)//Position - 0x74DDF
{
	Global_2725339 = iParam0;
}

void func_605()//Position - 0x74F05
{
	Global_1575043 = 0;
}

void func_606(int iParam0)//Position - 0x75014
{
	Global_2725359 = iParam0;
}

int func_607()//Position - 0x77316
{
	if (Global_1575046)
	{
		return 1;
	}
	return 0;
}

int func_608()//Position - 0x774EE
{
	return Global_2726955;
}

void func_609(int iParam0)//Position - 0x78F31
{
	if (iParam0 && !AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_MENU_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("MP_MENU_SCENE");
	}
	else if (iParam0 == 0 && AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_MENU_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MP_MENU_SCENE");
	}
}

void func_610()//Position - 0x790E2
{
	Global_1931899.f_1 = 0;
}

int func_611()//Position - 0x79129
{
	return Global_2727894;
}

void func_612(int iParam0)//Position - 0x79143
{
	Global_2727719 = iParam0;
}

void func_613()//Position - 0x79245
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1575086[iVar0] = 0;
		iVar0++;
	}
}

var func_614()//Position - 0x7938E
{
	return Global_2725413;
}

bool func_615()//Position - 0x79443
{
	return Global_1574529;
}

void func_616(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)//Position - 0x7AE36
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 0, 1))
		{
			ENTITY::IS_ENTITY_DEAD(iParam0, false);
			Var0 = { PED::GET_PED_BONE_COORDS(iParam1, 57005, 0f, 0f, 0f) };
			Var1 = { PED::GET_PED_BONE_COORDS(iParam1, 28252, 0f, 0f, 0f) };
			Var2 = { __LIB_0__::func_79(Var0 - Var1) * FtoV((fParam3 / 2f)) };
			Var3 = { 0f, 0f, 0f };
			WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(iParam0, &Var3);
			if (!PED::IS_PED_INJURED(iParam0))
			{
				PED::SET_PED_TO_RAGDOLL(iParam0, 0, 2000, 2, false, false, false);
			}
			ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 3, Var2, Var3, 0, false, false, true, false, true);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam0);
			if (bParam2)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
			}
			else if (iParam4 != 0)
			{
				PED::APPLY_DAMAGE_TO_PED(iParam0, iParam4, false, 0);
			}
		}
	}
}

void func_617(int iParam0)//Position - 0x7B0E1
{
	struct<5> Var0;
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_BERD_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_JBIB_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var0.f_3, Var0.f_4, 0);
	FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_REPLAY_M_TORSO_0_0"), &Var0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, Var0.f_3, Var0.f_4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 10, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, 0);
}

var func_618(int iParam0, bool bParam1)//Position - 0x3A92
{
	return __LIB_1__::func_68(iParam0, bParam1, 0);
}

void func_619()//Position - 0x74D3B
{
	Global_2725364 = 0;
	Global_2725365 = 0;
	Global_2725367 = 0;
	__LIB_0__::func_794(&Global_2725368);
}

void func_620()//Position - 0x7809C
{
	__LIB_37__::func_460(0);
	__LIB_37__::func_975(0, 1);
	Global_1575069 = 0;
	__LIB_18__::func_321(0);
	__LIB_27__::func_492(0);
	NETWORK::NETWORK_SESSION_FORCE_CANCEL_INVITE();
	__LIB_37__::func_807();
	__LIB_5__::func_940(1);
	__LIB_10__::func_309();
	__LIB_37__::func_459(0);
}

int func_621()//Position - 0x780D4
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(24, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_622()//Position - 0x78147
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (__LIB_10__::func_437(202))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(44, 0, -1);
			STATS::PLAYSTATS_BAN_ALERT(1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_MODINSTAL" /* GXT: You are attempting to access GTA Online servers with an altered version of the game. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_623()//Position - 0x781F1
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		if (BitTest(Global_1574939, 0))
		{
			if (__LIB_10__::func_212(201))
			{
				MISC::CLEAR_BIT(&Global_1574939, 0);
				Global_1577854 = 0;
				__LIB_13__::func_744(25, 0, -1);
				__LIB_13__::func_744(37, 0, -1);
				__LIB_13__::func_744(45, 0, -1);
				return 1;
			}
		}
	}
	if (NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 1)
	{
		return 1;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		if (__LIB_1__::func_584())
		{
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_XBGOLD";
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_961();
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	}
	else
	{
		GRAPHICS::DRAW_RECT(0f, 0f, 1f, 1f, 0, 0, 0, 255, false);
	}
	return 0;
}

int func_624()//Position - 0x782DC
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() == 0)
	{
		if (BitTest(Global_1574939, 0))
		{
			if (__LIB_10__::func_212(201))
			{
				MISC::CLEAR_BIT(&Global_1574939, 0);
				Global_1577854 = 0;
				__LIB_13__::func_744(25, 0, -1);
				__LIB_13__::func_744(37, 0, -1);
				__LIB_13__::func_744(45, 0, -1);
				return 1;
			}
		}
	}
	if (NETWORK::NETWORK_HAVE_PLATFORM_SUBSCRIPTION() == 1)
	{
		return 1;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		if (__LIB_1__::func_584())
		{
			SCRIPT::SHUTDOWN_LOADING_SCREEN();
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PSPLUS" /* GXT: You need PlayStation®Plus membership to access GTA Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_961();
	if (NETWORK::NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() == 0)
	{
		HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	}
	else
	{
		GRAPHICS::DRAW_RECT(0f, 0f, 1f, 1f, 0, 0, 0, 255, false);
	}
	return 0;
}

int func_625()//Position - 0x783A2
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_CLOUDFAILMSG" /* GXT: Unable to connect to Rockstar game services.  Please check your network connection and see ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/support~s~ for information about outages and maintenance schedules. */;
	sVar2 = "HUD_SPRETRNFRSH" /* GXT: Please return to Grand Theft Auto V. */;
	if (__LIB_0__::func_236() != 4)
	{
		__LIB_27__::func_961();
	}
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

struct<8> func_626(var uParam0)//Position - 0x78592
{
	struct<8> Var0;
	struct<8> Var1;
	StringCopy(&Var1, __LIB_37__::func_821(uParam0->f_1), 32);
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 5:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 9:
		case 12:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 1:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			if (uParam0->f_2 == 1)
			{
				StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			}
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 2:
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, ". ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 3:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 10:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 8:
			IntToString(&Var0, *uParam0, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			break;
		case 11:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 6:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 7:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTYEARCHAR"), 32);
			break;
		case 4:
			StringCopy(&Var1, __LIB_37__::func_820(uParam0->f_1), 32);
			IntToString(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTDAYCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, &Var1, 32);
			StringConCat(&Var0, " ", 32);
			StringConCat(&Var0, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("POSTMONTHCHAR"), 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		case 0:
			Var0 = { Var1 };
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
		default:
			Var0 = { Var1 };
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, uParam0->f_2, 32);
			StringConCat(&Var0, " ", 32);
			StringIntConCat(&Var0, *uParam0, 32);
			break;
	}
	return Var0;
}

int func_627()//Position - 0x78A68
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(27, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_SYSTUPD" /* GXT: The system requires an update to access Grand Theft Auto Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_628()//Position - 0x78ADF
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(26, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_GAMEUPD" /* GXT: The game requires an update to access Grand Theft Auto Online. */;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_629()//Position - 0x78B56
{
	char* sVar0;
	char* sVar1;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(25, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PROFILECHNG" /* GXT: Please change to a profile with correct permissions. */;
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, 0, false, -1, 0, 0, true, 0);
	return 0;
}

int func_630()//Position - 0x78BC1
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_10__::func_437(201))
	{
		MISC::SET_BIT(&Global_1574939, 0);
	}
	if (BitTest(Global_1574939, 0))
	{
		if (__LIB_10__::func_212(201))
		{
			MISC::CLEAR_BIT(&Global_1574939, 0);
			Global_1577854 = 0;
			__LIB_13__::func_744(46, 0, -1);
			return 1;
		}
	}
	sVar0 = "HUD_CONNPROB" /* GXT: alert */;
	sVar1 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
	sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
	__LIB_27__::func_961();
	HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 16384, sVar2, false, -1, 0, 0, true, 0);
	return 0;
}

int func_631(bool bParam0, bool bParam1)//Position - 0x78CFD
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (Global_1574938 == -2)
	{
		bParam1 = false;
	}
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || bParam1 == 0)
	{
		if (__LIB_0__::func_937(&Global_1577859, 3000, 0) || bParam1 == 0)
		{
			if (bParam0)
			{
				MISC::SET_GAME_PAUSED(true);
			}
			if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || bParam1 == 0)
			{
				if (__LIB_10__::func_437(201))
				{
					MISC::SET_BIT(&Global_1574939, 0);
				}
				if (BitTest(Global_1574939, 0))
				{
					if (__LIB_10__::func_212(201))
					{
						MISC::CLEAR_BIT(&Global_1574939, 0);
						Global_1574938 = -1;
						__LIB_1__::func_863(0);
						__LIB_0__::func_794(&Global_1577859);
						Global_1577854 = 0;
						__LIB_13__::func_744(13, 0, -1);
						return 1;
					}
				}
				sVar0 = "HUD_CONNPROB" /* GXT: alert */;
				sVar1 = "HUD_CONNT" /* GXT: Sign in to Social Club to play GTA Online. */;
				if (__LIB_0__::func_52())
				{
					sVar1 = "HUD_CONNTPS4SI" /* GXT: You are signed out of PlayStation™Network, you will be unable to access network features until you sign back in. */;
				}
				if (__LIB_0__::func_52() && NETWORK::NETWORK_IS_CABLE_CONNECTED() == 0)
				{
					sVar1 = "HUD_PLUGPU" /* GXT: Internet connection has been lost, re-establish connection to play GTA Online. */;
				}
				sVar2 = "HUD_RETURNSP" /* GXT: Return to Grand Theft Auto V */;
				__LIB_27__::func_961();
				HUD::SET_WARNING_MESSAGE_WITH_HEADER(sVar0, sVar1, 2, sVar2, false, -1, 0, 0, true, 0);
			}
			else if (bParam1)
			{
				__LIB_10__::func_305();
				__LIB_25__::func_178();
				__LIB_10__::func_304(0);
				__LIB_1__::func_863(0);
				Global_1574938 = -1;
				Global_1577854 = 0;
				__LIB_13__::func_744(13, 0, -1);
				return 2;
			}
		}
		else if (bParam0)
		{
			MISC::SET_GAME_PAUSED(false);
		}
	}
	return 0;
}

void func_632(int iParam0)//Position - 0xC11B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_17__::func_909(iParam0, iVar0);
		iVar0++;
	}
}

void func_633()//Position - 0x734FE
{
	if (!__LIB_25__::func_137())
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	__LIB_0__::func_985();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	if (!__LIB_25__::func_137())
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
	if (__LIB_37__::func_958())
	{
		__LIB_37__::func_957(1);
	}
	__LIB_1__::func_33(0);
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	if (__LIB_1__::func_584())
	{
		HUD::DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME();
	}
	HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
			{
				PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("RETURN_TO_MENU")))
	{
		__LIB_1__::func_10(1);
	}
}

void func_634()//Position - 0x74DED
{
	Global_1575043 = 1;
	__LIB_37__::func_478(0);
}

int func_635()//Position - 0x77345
{
	if (((((__LIB_1__::func_894() == 0 || __LIB_17__::func_52(0) == 0) || __LIB_37__::func_976() == 0) || __LIB_37__::func_976() == 0) || __LIB_0__::func_109() == 0) || __LIB_16__::func_655() == 0)
	{
		if (__LIB_16__::func_655() == 0)
		{
			return 6;
		}
		else if (__LIB_1__::func_894() == 0)
		{
			return 1;
		}
		else if (__LIB_17__::func_52(0))
		{
			return 2;
		}
		else if (__LIB_37__::func_976())
		{
			return 3;
		}
		else if (__LIB_37__::func_976())
		{
			return 4;
		}
		else if (__LIB_0__::func_109())
		{
			return 5;
		}
	}
	return 0;
}

void func_636(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xC850
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			__LIB_14__::func_626(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_14__::func_625(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (__LIB_0__::func_374(iVar0))
		{
			uParam1->f_59 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
			uParam1->f_60 = __LIB_1__::func_360(754, iParam3, 0);
			uParam1->f_61 = __LIB_1__::func_360(755, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_1__::func_342(161, iParam3))
			{
				uParam1->f_59 = __LIB_1__::func_360(2053, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = __LIB_1__::func_360(753, iParam3, 0);
			}
		}
	}
}

var func_637(float fParam0)//Position - 0x4FCF
{
	if (__LIB_38__::func_25())
	{
		if (__LIB_38__::func_24() < Global_262145.f_13167 /* Tunable: GB_BOSS_STAT_BOOST_MAX_RANK */)
		{
			if (*fParam0 + (IntToFloat(__LIB_38__::func_24()) * Global_262145.f_13166 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */)) <= IntToFloat(Global_262145.f_13176 /* Tunable: GB_BOSS_BOOST_MAX_FINAL_STAT */)
			{
				*fParam0 = (*fParam0 + (IntToFloat(__LIB_38__::func_24()) * Global_262145.f_13166 /* Tunable: GB_BOSS_STAT_BOOST_PERCENTAGE */));
			}
		}
		return *fParam0;
	}
	return *fParam0;
}

void func_638(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x77646
{
	__LIB_37__::func_494(iParam0, iParam1, iParam2);
}

void func_639(var uParam0, int iParam1)//Position - 0xA43
{
	struct<3> Var0;
	__LIB_17__::func_140(uParam0);
	MISC::CLEAR_BIT(&uLocal_43, iParam1);
	switch (iParam1)
	{
		case 0:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-4.29f) + 180f) };
			__LIB_33__::func_516(uParam0, 82047830, 667.319f, 572.133f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 83248680, 666.312f, 571.675f, 128.521f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 71526810, 665.235f, 571.183f, 128.521f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 49826530, 664.124f, 570.679f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 78575440, 663.029f, 570.181f, 128.521f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 12133230, 661.937f, 569.685f, 128.521f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 89665750, 660.839f, 569.194f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 65990810, 659.537f, 569.392f, 128.521f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 21233450, 658.187f, 569.572f, 128.523f, Var0, 4, 0, 1f);
			__LIB_17__::func_138(&(uParam0->f_155[0 /*11*/]), 659.867f, 571.539f, 128.531f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_138(&(uParam0->f_155[1 /*11*/]), 660.646f, 567.108f, 128.521f, Var0, 0, 0.5f, -1.5f);
			break;
		case 1:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.98f) + 180f) };
			__LIB_33__::func_516(uParam0, 21091970, 670.312f, 568.023f, 128.521f, Var0, 5, 0, 0.5f);
			__LIB_33__::func_516(uParam0, 97482490, 669.189f, 567.502f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 66764240, 668.28f, 566.688f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 82832850, 667.384f, 565.885f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 33636100, 666.491f, 565.085f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 22769640, 665.595f, 564.282f, 128.522f, Var0, 6, 1, 0);
			break;
		case 2:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.78f) + 180f) };
			__LIB_33__::func_516(uParam0, 91480760, 673.7f, 564.799f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 64996320, 672.996f, 563.847f, 128.521f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 30855220, 672.271f, 562.865f, 128.521f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 98921990, 671.557f, 561.897f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 73357200, 670.258f, 561.366f, 128.522f, Var0, 6, 1, 0);
			__LIB_17__::func_138(&(uParam0->f_155[0 /*11*/]), 669.564f, 563.469f, 128.521f, Var0, 2, -1.5f, -1.5f);
			__LIB_17__::func_138(&(uParam0->f_155[1 /*11*/]), 672.34f, 559.914f, 128.522f, Var0, 2, -1.5f, -1.5f);
			break;
		case 3:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.38f) + 180f) };
			__LIB_33__::func_516(uParam0, 89689390, 681.517f, 555.801f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 71057000, 681.796f, 556.967f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 26206390, 682.076f, 558.137f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 58207860, 682.36f, 559.342f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 43622440, 682.635f, 560.475f, 128.522f, Var0, 6, 1, 0);
			break;
		case 4:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.17f) + 180f) };
			__LIB_33__::func_516(uParam0, 78555440, 687.841f, 559.785f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 12324420, 687.807f, 558.602f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 4083210, 687.771f, 557.382f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 2021980, 688.465f, 556.159f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 21091970, 688.431f, 554.961f, 128.521f, Var0, 6, 1, 0);
			__LIB_17__::func_138(&(uParam0->f_155[0 /*11*/]), 685.931f, 556.306f, 128.522f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_138(&(uParam0->f_155[1 /*11*/]), 685.897f, 555.108f, 128.521f, Var0, 1, -1.5f, -1.5f);
			break;
		case 5:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.97f) + 180f) };
			__LIB_33__::func_516(uParam0, 31491440, 692.632f, 559.992f, 128.522f, Var0, 5, 2, -0.5f);
			__LIB_33__::func_516(uParam0, 34393340, 693.189f, 558.886f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 94762900, 693.396f, 557.684f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 95283980, 693.6f, 556.498f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 92416940, 693.803f, 555.317f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 53597080, 694.007f, 554.131f, 128.522f, Var0, 6, 1, 0);
			break;
		case 6:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.7f) + 180f) };
			__LIB_33__::func_516(uParam0, 86170110, 697.492f, 561.188f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 62247860, 697.964f, 560.188f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 43665230, 698.467f, 559.116f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 32906070, 698.988f, 558.013f, 128.522f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 70836820, 699.502f, 556.925f, 128.522f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 67800350, 700.014f, 555.841f, 128.522f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 41115560, 701.184f, 555.063f, 128.521f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 98430790, 701.005f, 553.758f, 128.522f, Var0, 6, 1, 0);
			__LIB_17__::func_138(&(uParam0->f_155[0 /*11*/]), 698.861f, 554.048f, 128.521f, Var0, 0, 0.5f, -1.5f);
			__LIB_17__::func_138(&(uParam0->f_155[1 /*11*/]), 703.267f, 554.91f, 128.522f, Var0, 0, 0.5f, -1.5f);
			break;
		case 7:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.99f) + 180f) };
			__LIB_33__::func_516(uParam0, 13168530, 652.833f, 570.052f, 128.529f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 92127780, 652.006f, 569.319f, 128.528f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 51664260, 651.136f, 568.538f, 128.729f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 35914010, 650.242f, 567.746f, 128.729f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 43076060, 649.661f, 566.94f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 21755390, 648.426f, 566.137f, 128.929f, Var0, 6, 2, 0);
			break;
		case 8:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.9f) + 180f) };
			__LIB_33__::func_516(uParam0, 20501110, 656.955f, 565.868f, 128.53f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 10114780, 656.193f, 565.067f, 128.53f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 12664730, 655.358f, 564.19f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 32956570, 654.534f, 563.324f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 11862860, 653.696f, 562.443f, 128.93f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 87809290, 652.862f, 561.566f, 128.93f, Var0, 6, 2, 0);
			break;
		case 9:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.76f) + 180f) };
			__LIB_33__::func_516(uParam0, 75170110, 662.947f, 560.965f, 128.529f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 62246860, 662.306f, 560.065f, 128.529f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 83665250, 661.603f, 559.079f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 22016170, 660.91f, 558.106f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 41846840, 660.204f, 557.116f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 10000350, 659.502f, 556.13f, 128.929f, Var0, 6, 2, 0);
			break;
		case 10:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.68f) + 180f) };
			__LIB_33__::func_516(uParam0, 86878180, 667.872f, 557.785f, 128.53f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 22242820, 667.31f, 556.833f, 128.53f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 93969290, 666.693f, 555.791f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 12101010, 666.086f, 554.762f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 20232220, 665.467f, 553.715f, 128.93f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 57707370, 664.852f, 552.673f, 128.93f, Var0, 6, 2, 0);
			break;
		case 11:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.53f) + 180f) };
			__LIB_33__::func_516(uParam0, 13130110, 674.882f, 554.326f, 128.529f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 97845810, 674.46f, 553.305f, 128.529f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 12345670, 673.997f, 552.186f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 89101110, 673.541f, 551.081f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 12131410, 673.076f, 549.958f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 51617180, 672.613f, 548.839f, 128.929f, Var0, 6, 2, 0);
			break;
		case 12:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.45f) + 180f) };
			__LIB_33__::func_516(uParam0, 60616260, 680.396f, 552.335f, 128.53f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 36465660, 680.063f, 551.281f, 128.53f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 67686970, 679.697f, 550.127f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 71727370, 679.336f, 548.988f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 47576770, 678.969f, 547.829f, 128.93f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 78798080, 678.603f, 546.674f, 128.93f, Var0, 6, 2, 0);
			break;
		case 13:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.31f) + 180f) };
			__LIB_33__::func_516(uParam0, 11511610, 688.034f, 550.483f, 128.529f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 17118110, 687.853f, 549.393f, 128.529f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 91201210, 687.653f, 548.199f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 12212310, 687.457f, 547.02f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 23124120, 687.257f, 545.821f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 51261270, 687.058f, 544.627f, 128.929f, Var0, 6, 2, 0);
			break;
		case 14:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.22f) + 180f) };
			__LIB_33__::func_516(uParam0, 15515610, 693.855f, 549.783f, 128.53f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 57158150, 693.767f, 548.682f, 128.53f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 91601610, 693.67f, 547.474f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 16216310, 693.575f, 546.283f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 64165160, 693.478f, 545.071f, 128.93f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 61671680, 693.381f, 543.865f, 128.93f, Var0, 6, 2, 0);
			break;
		case 15:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.08f) + 180f) };
			__LIB_33__::func_516(uParam0, 19920020, 701.652f, 549.708f, 128.529f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 1202200, 701.721f, 548.605f, 128.529f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 32042050, 701.795f, 547.396f, 128.729f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 20620720, 701.869f, 546.203f, 128.729f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 8209210, 701.944f, 544.99f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 2112120, 702.019f, 543.781f, 128.929f, Var0, 6, 2, 0);
			break;
		case 16:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-2.99f) + 180f) };
			__LIB_33__::func_516(uParam0, 24024120, 707.482f, 550.335f, 128.53f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 43244240, 707.644f, 549.242f, 128.53f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 42452460, 707.821f, 548.044f, 128.73f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 24724820, 707.996f, 546.862f, 128.73f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 48249250, 708.174f, 545.659f, 128.929f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 2512520, 708.351f, 544.461f, 128.929f, Var0, 6, 2, 0);
			break;
		case 17:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.98f) + 180f) };
			__LIB_33__::func_516(uParam0, 46779100, 646.434f, 564.522f, 128.927f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 93643160, 645.612f, 563.784f, 128.927f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 34729570, 644.71f, 562.975f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 28556490, 643.821f, 562.177f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 75335160, 642.916f, 561.365f, 129.327f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 84872300, 642.015f, 560.557f, 129.327f, Var0, 6, 2, 0);
			break;
		case 18:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.91f) + 180f) };
			__LIB_33__::func_516(uParam0, 65187100, 651.092f, 559.707f, 128.926f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 87514460, 650.325f, 558.912f, 128.926f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 46165810, 649.483f, 558.04f, 128.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 12560720, 648.654f, 557.18f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 27854880, 647.809f, 556.306f, 129.326f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 97601360, 646.968f, 555.435f, 129.326f, Var0, 6, 2, 0);
			break;
		case 19:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.75f) + 180f) };
			__LIB_33__::func_516(uParam0, 55178130, 657.925f, 554.108f, 128.927f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 75148880, 657.29f, 553.204f, 128.927f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 88865540, 656.593f, 552.213f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 64916770, 655.906f, 551.235f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 70536220, 655.207f, 550.241f, 129.327f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 17101310, 654.512f, 549.25f, 129.327f, Var0, 6, 2, 0);
			break;
		case 20:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.68f) + 180f) };
			__LIB_33__::func_516(uParam0, 76870120, 663.545f, 550.463f, 128.926f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 32147850, 662.977f, 549.515f, 128.926f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 97662220, 662.353f, 548.477f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 12107070, 661.738f, 547.453f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 60841880, 661.111f, 546.411f, 129.326f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 27803350, 660.489f, 545.373f, 129.326f, Var0, 6, 2, 0);
			break;
		case 21:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.53f) + 180f) };
			__LIB_33__::func_516(uParam0, 19202120, 671.531f, 546.515f, 128.927f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 22232420, 671.116f, 545.491f, 128.927f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 52627280, 670.66f, 544.369f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 29303130, 670.211f, 543.262f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 23334350, 669.753f, 542.135f, 129.327f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 36373830, 669.298f, 541.014f, 129.327f, Var0, 6, 2, 0);
			break;
		case 22:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.46f) + 180f) };
			__LIB_33__::func_516(uParam0, 18283840, 677.828f, 544.227f, 128.926f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 85858680, 677.487f, 543.176f, 128.926f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 78889900, 677.112f, 542.024f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 91929390, 676.744f, 540.888f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 49596970, 676.368f, 539.731f, 129.326f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 98991000, 675.994f, 538.58f, 129.326f, Var0, 6, 2, 0);
			break;
		case 23:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.3f) + 180f) };
			__LIB_33__::func_516(uParam0, 12812910, 686.526f, 542.118f, 128.927f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 30131130, 686.352f, 541.027f, 128.927f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 21331340, 686.16f, 539.831f, 129.127f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 13513610, 685.972f, 538.652f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 37138130, 685.779f, 537.451f, 129.327f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 91401410, 685.588f, 536.256f, 129.327f, Var0, 6, 2, 0);
			break;
		case 24:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.23f) + 180f) };
			__LIB_33__::func_516(uParam0, 16917010, 693.176f, 541.306f, 128.926f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 71172170, 693.08f, 540.205f, 128.926f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 31741750, 692.975f, 538.998f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 17617810, 692.871f, 537.808f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 79180180, 692.765f, 536.597f, 129.326f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 21831840, 692.66f, 535.391f, 129.326f, Var0, 6, 2, 0);
			break;
		case 25:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3.07f) + 180f) };
			__LIB_33__::func_516(uParam0, 21321420, 702.065f, 541.218f, 128.927f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 15216210, 702.14f, 540.116f, 128.927f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 72182190, 702.223f, 538.907f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 22022120, 702.304f, 537.715f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 22223220, 702.387f, 536.502f, 129.327f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 42252260, 703.116f, 526.841f, 129.618f, Var0, 6, 2, 0);
			break;
		case 26:
			Var0 = { 0f, 0f, (__LIB_0__::func_503(-3f) + 180f) };
			__LIB_33__::func_516(uParam0, 25325420, 708.727f, 541.922f, 128.926f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 55256250, 709.881f, 539.828f, 128.926f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 72582590, 709.05f, 539.628f, 129.127f, Var0, 6, 2, 0);
			__LIB_33__::func_516(uParam0, 26026120, 709.217f, 538.445f, 129.127f, Var0, 6, 0, 0);
			__LIB_33__::func_516(uParam0, 62263260, 709.386f, 537.241f, 129.326f, Var0, 6, 1, 0);
			__LIB_33__::func_516(uParam0, 42652650, 709.555f, 536.043f, 129.326f, Var0, 6, 2, 0);
			break;
		default:
			break;
	}
}

void func_640()//Position - 0x29EE
{
	int iVar0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
	__LIB_0__::func_123(&iLocal_60);
	HUD::RELEASE_NAMED_RENDERTARGET("Big_Disp");
	STREAMING::REMOVE_IPL("LInvader");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_51);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_52);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar0 = 0;
	while (iVar0 < Local_42.f_0)
	{
		__LIB_33__::func_518(&(Local_42[iVar0 /*178*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_44.f_0)
	{
		__LIB_33__::func_517(&(Local_44[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		__LIB_33__::func_517(&(Local_46[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_40)
	{
		__LIB_17__::func_134(iLocal_40[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		__LIB_17__::func_143(__LIB_17__::func_142(iVar0));
		iVar0++;
	}
	__LIB_14__::func_828(iLocal_63);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
}

void func_641(bool bParam0)//Position - 0x531
{
	int iVar0;
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 689.1f, 586.5f, 130.5f, true, false, false, true);
		MISC::CLEAR_AREA_OF_PEDS(689.1f, 586.5f, 130.5f, 500f, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	}
	__LIB_14__::func_826(0);
	__LIB_14__::func_815(&iLocal_63, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(689.1f, 586.5f, 130.5f, 80f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (bParam0)
	{
		STREAMING::REQUEST_IPL("LInvader");
		while (!STREAMING::IS_IPL_ACTIVE("LInvader"))
		{
			SYSTEM::WAIT(0);
		}
	}
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	iLocal_40[0] = joaat("A_M_Y_Hipster_01");
	iLocal_40[1] = joaat("A_M_Y_Hipster_02");
	iLocal_40[2] = joaat("A_M_Y_Hipster_03");
	iLocal_40[3] = joaat("A_F_Y_Hipster_01");
	iLocal_40[4] = joaat("A_F_Y_Hipster_02");
	iLocal_40[5] = joaat("A_F_Y_Hipster_03");
	iLocal_40[6] = joaat("A_F_Y_Hipster_04");
	iLocal_40[7] = joaat("A_F_Y_BevHills_01");
	iLocal_40[8] = joaat("A_M_M_Business_01");
	iLocal_40[9] = joaat("A_M_M_BevHills_02");
	iLocal_40[10] = joaat("A_M_M_Skater_01");
	iLocal_40[11] = joaat("A_M_Y_BeachVesp_01");
	iLocal_40[12] = joaat("A_M_Y_BevHills_01");
	iLocal_40[13] = joaat("A_F_M_BevHills_01");
	iLocal_40[14] = joaat("A_M_M_KTown_01");
	iLocal_40[15] = joaat("A_M_Y_BusiCas_01");
	iLocal_40[16] = joaat("A_M_Y_Business_02");
	iLocal_40[17] = joaat("A_M_Y_Gay_01");
	iLocal_40[18] = joaat("A_M_Y_KTown_02");
	iLocal_40[19] = joaat("A_M_M_BevHills_02");
	iLocal_40[20] = joaat("A_M_Y_Business_03");
	iLocal_40[21] = joaat("A_M_Y_Gay_02");
	iLocal_40[22] = joaat("A_M_M_Malibu_01");
	iLocal_40[22] = joaat("A_M_Y_Gay_02");
	iLocal_40[23] = joaat("A_M_Y_EastSA_02");
	iLocal_40[24] = joaat("A_M_Y_SouCent_02");
	iLocal_40[25] = joaat("A_M_Y_Vinewood_01");
	iLocal_40[26] = joaat("A_M_Y_Vinewood_02");
	iLocal_40[27] = joaat("A_M_Y_Vinewood_03");
	iLocal_40[28] = joaat("A_M_Y_Vinewood_04");
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		__LIB_14__::func_817(__LIB_17__::func_142(iVar0), 1);
		iVar0++;
	}
	__LIB_14__::func_817("misslester1b_crowdlow@14@", 1);
	__LIB_14__::func_817("misslester1b_crowdlow@24@", 1);
	__LIB_17__::func_141("BREAKING_NEWS", &iLocal_52, 1);
	__LIB_17__::func_141("lifeinvader_presentation", &iLocal_51, 1);
	__LIB_17__::func_133("LEST1", 0, 1, 0);
	iVar0 = 0;
	while (iVar0 <= 26)
	{
		__LIB_39__::func_639(&(Local_42[iVar0 /*178*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		__LIB_17__::func_137(&(Local_44[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		__LIB_17__::func_136(&(Local_46[iVar0 /*24*/]), iVar0);
		iVar0++;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	HUD::REGISTER_NAMED_RENDERTARGET("Big_Disp", false);
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_01"));
	HUD::LINK_NAMED_RENDERTARGET(joaat("prop_huge_display_02"));
	iLocal_53 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("Big_Disp");
	iLocal_54 = HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID();
	while (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	SYSTEM::WAIT(2000);
	iLocal_59 = 0;
	Local_21.f_0 = 12;
	Local_21.f_1 = 0;
	Local_21.f_2 = 0;
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		__LIB_33__::func_515(iVar0);
		iVar0++;
	}
	if (bLocal_56)
	{
	}
}

void func_642()//Position - 0x29ED
{
	__LIB_39__::func_640();
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_643(var uParam0, int iParam1)//Position - 0xCF63
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < (iParam1 - 1))
		{
			(*uParam0)[iVar0] = (*uParam0)[iVar0 + 1];
		}
		else
		{
			(*uParam0)[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

int func_644(var uParam0, float fParam1)//Position - 0xC030
{
	if (__LIB_1__::func_13(uParam0))
	{
		if (__LIB_2__::func_572(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_645(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xD9AD
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (!bLocal_45)
		{
			iLocal_46 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_45 = true;
		}
		iLocal_47 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_48 = (iLocal_46 - iLocal_47);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true))
			{
				if (IntToFloat(iLocal_48) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_45)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), true))
			{
				if (IntToFloat(iLocal_48) > 100f)
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

void func_646(var uParam0, int iParam1)//Position - 0x101BF
{
	__LIB_39__::func_404(uParam0, 0, iParam1, 0);
}

void func_647(var uParam0, bool bParam1)//Position - 0x14628
{
	int iVar0;
	if (!bParam1)
	{
		__LIB_39__::func_406(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		__LIB_16__::func_714(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}

int func_648(int iParam0)//Position - 0x519F
{
	int iVar0;
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19))
	{
		if (HUD::IS_BLIP_ON_MINIMAP(Global_32338[iVar0 /*23*/].f_19))
		{
			return 1;
		}
	}
	return 0;
}

int func_649()//Position - 0x41C02
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_BIKER_CLIENT_VEHICLE_v0", 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_650(int iParam0)//Position - 0x42518
{
	int iVar0;
	iVar0 = 1;
	switch (iParam0)
	{
		case 2:
			if (!Global_262145.f_29956 /* Tunable: -41446819 */ && !Global_262145.f_29957 /* Tunable: -45280244 */)
			{
				iVar0 = 0;
			}
			break;
		case 1:
			if (!Global_262145.f_29958 /* Tunable: 440904823 */)
			{
				iVar0 = 0;
			}
			break;
		case 3:
			if (!Global_262145.f_29959 /* Tunable: 1695142738 */)
			{
				iVar0 = 0;
			}
			break;
		case 25:
			if (!Global_262145.f_29963 /* Tunable: FIXER_ENABLE_RADIO_37_MOTOMAMI */)
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

bool func_651()//Position - 0x47055
{
	return BitTest(Global_1966179, 2);
}

int func_652(int iParam0)//Position - 0xBE8B5
{
	if (__LIB_1__::func_693(iParam0, 1, 1))
	{
		if (BitTest(Global_2689235[iParam0 /*453*/].f_416, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_653(int iParam0)//Position - 0xBF2CF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] == iParam0 || Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] == (1000 + iParam0))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar0] = 0;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_654(int iParam0, int iParam1)//Position - 0xBF984
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 != -1)
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iParam1] = iParam0;
		iVar0 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_1;
		if (iVar0 >= 10)
		{
			iVar1 = (iVar0 - 10);
			iVar2 = __LIB_0__::func_253(__LIB_27__::func_369(iVar1), -1);
			iVar3 = 0;
			while (iVar3 < 40)
			{
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar3] == iVar2)
				{
					Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_2[iVar3] = (1000 + iVar2);
				}
				iVar3++;
			}
		}
	}
}

int func_655(int iParam0)//Position - 0xBFBB3
{
	char cVar0[64];
	StringCopy(&cVar0, "MP_STAT_IE_WH_OWNED_VEHICLE_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar0, "_v0", 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_656(int iParam0)//Position - 0xC1ADE
{
	switch (iParam0)
	{
		case 0:
			return Global_4535594;
			break;
		case 1:
			return Global_4535593;
			break;
	}
	return 0;
}

int func_657(var uParam0)//Position - 0xC1B0E
{
	if (uParam0->f_66.f_4 == joaat("SERVICE_SPEND_CASH_DROP"))
	{
		return 0;
	}
	return 1;
}

int func_658(var uParam0)//Position - 0xC4D9B
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

int func_659()//Position - 0xC4DB0
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_660(struct<18> Param0, var uParam1, int iParam2)//Position - 0xC4F17
{
	if (Global_4534105[iParam2 /*85*/].f_66.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4534105[iParam2 /*85*/].f_66.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

void func_661()//Position - 0xB7548
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1886249[iVar0 /*51*/][0] = __LIB_1__::func_360(1049, -1, 0);
		Global_1886249[iVar0 /*51*/][1] = __LIB_1__::func_360(1050, -1, 0);
		Global_1886249[iVar0 /*51*/][2] = __LIB_1__::func_360(1051, -1, 0);
		Global_1886249[iVar0 /*51*/][3] = __LIB_1__::func_360(1052, -1, 0);
		Global_1886249[iVar0 /*51*/][4] = __LIB_1__::func_360(1053, -1, 0);
		Global_1886249[iVar0 /*51*/][5] = __LIB_1__::func_360(1054, -1, 0);
		Global_1886249[iVar0 /*51*/][6] = __LIB_1__::func_360(1488, -1, 0);
		Global_1886249[iVar0 /*51*/][7] = __LIB_1__::func_360(1489, -1, 0);
		Global_1886249[iVar0 /*51*/][8] = __LIB_1__::func_360(1490, -1, 0);
		Global_1886249[iVar0 /*51*/][9] = __LIB_1__::func_360(1491, -1, 0);
		Global_1886249[iVar0 /*51*/][10] = __LIB_1__::func_360(1949, -1, 0);
		Global_1886249[iVar0 /*51*/][11] = __LIB_1__::func_360(1950, -1, 0);
		Global_1886249[iVar0 /*51*/][12] = __LIB_1__::func_360(1951, -1, 0);
		Global_1886249[iVar0 /*51*/][13] = __LIB_1__::func_360(2425, -1, 0);
		Global_1886249[iVar0 /*51*/][14] = __LIB_1__::func_360(2445, -1, 0);
		Global_1886249[iVar0 /*51*/][15] = __LIB_1__::func_360(2448, -1, 0);
		Global_1886249[iVar0 /*51*/][16] = __LIB_1__::func_360(2451, -1, 0);
		Global_1886249[iVar0 /*51*/][17] = __LIB_1__::func_360(2615, -1, 0);
		Global_1886249[iVar0 /*51*/][18] = __LIB_1__::func_360(2618, -1, 0);
		Global_1886249[iVar0 /*51*/][19] = __LIB_1__::func_360(2621, -1, 0);
		Global_1886249[iVar0 /*51*/][20] = __LIB_1__::func_360(3787, -1, 0);
		Global_1886249[iVar0 /*51*/][21] = __LIB_1__::func_360(3790, -1, 0);
		Global_1886249[iVar0 /*51*/][22] = __LIB_1__::func_360(3865, -1, 0);
		Global_1886249[iVar0 /*51*/][23] = __LIB_1__::func_360(3868, -1, 0);
		Global_1886249[iVar0 /*51*/][24] = __LIB_1__::func_360(3871, -1, 0);
		Global_1886249[iVar0 /*51*/][25] = __LIB_1__::func_360(3874, -1, 0);
		Global_1886249[iVar0 /*51*/][26] = __LIB_1__::func_360(5365, -1, 0);
		Global_1886249[iVar0 /*51*/][27] = __LIB_1__::func_360(5368, -1, 0);
		Global_1886249[iVar0 /*51*/][28] = __LIB_1__::func_360(5470, -1, 0);
		Global_1886249[iVar0 /*51*/][29] = __LIB_1__::func_360(5473, -1, 0);
		Global_1886249[iVar0 /*51*/][30] = __LIB_1__::func_360(6432, -1, 0);
		Global_1886249[iVar0 /*51*/][31] = __LIB_1__::func_360(6435, -1, 0);
		Global_1886249[iVar0 /*51*/][32] = __LIB_1__::func_360(7256, -1, 0);
		Global_1886249[iVar0 /*51*/][33] = __LIB_1__::func_360(7259, -1, 0);
		Global_1886249[iVar0 /*51*/][34] = __LIB_1__::func_360(7262, -1, 0);
		Global_1886249[iVar0 /*51*/][35] = __LIB_1__::func_360(7971, -1, 0);
		Global_1886249[iVar0 /*51*/][36] = __LIB_1__::func_360(7974, -1, 0);
		Global_1886249[iVar0 /*51*/][37] = __LIB_1__::func_360(7977, -1, 0);
		Global_1886249[iVar0 /*51*/][38] = __LIB_1__::func_360(7980, -1, 0);
		Global_1886249[iVar0 /*51*/][39] = __LIB_1__::func_360(8502, -1, 0);
		Global_1886249[iVar0 /*51*/][40] = __LIB_1__::func_360(8505, -1, 0);
		Global_1886249[iVar0 /*51*/][41] = __LIB_1__::func_360(8508, -1, 0);
		Global_1886249[iVar0 /*51*/][42] = __LIB_1__::func_360(8511, -1, 0);
		Global_1886249[iVar0 /*51*/][43] = __LIB_1__::func_360(8907, -1, 0);
		Global_1886249[iVar0 /*51*/][44] = __LIB_1__::func_360(8910, -1, 0);
		Global_1886249[iVar0 /*51*/][45] = __LIB_1__::func_360(8913, -1, 0);
		Global_1886249[iVar0 /*51*/][46] = __LIB_1__::func_360(10288, -1, 0);
		Global_1886249[iVar0 /*51*/][47] = __LIB_1__::func_360(10291, -1, 0);
		Global_1886249[iVar0 /*51*/][48] = __LIB_1__::func_360(10414, -1, 0);
		Global_1886249[iVar0 /*51*/][49] = __LIB_1__::func_360(10417, -1, 0);
	}
}

void func_662()//Position - 0xBF8D3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_1__::func_360(__LIB_27__::func_368(iVar0), -1, 0) != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	__LIB_27__::func_367(iVar1);
}

int func_663()//Position - 0xBFA5C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_1__::func_360(__LIB_27__::func_368(iVar0), -1, 0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_664(var uParam0, int iParam1, var uParam2)//Position - 0xF635F
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
}

void func_665(var uParam0, int iParam1, var uParam2)//Position - 0x10425C
{
	if (((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID()) || __LIB_3__::func_879(PLAYER::PLAYER_ID()))
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("avisa") || ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("seasparrow2"))
	{
		Global_2789752 = 1;
	}
}

void func_666(var uParam0, int iParam1, var uParam2)//Position - 0x15122A
{
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
}

void func_667(var uParam0, int iParam1, var uParam2)//Position - 0x16798C
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
	if ((__LIB_0__::func_870(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_856(iParam1, 1, 0) == PLAYER::PLAYER_ID())
	{
		__LIB_4__::func_314(1);
	}
}

void func_668(var uParam0, int iParam1, bool bParam2)//Position - 0x178EB0
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("avenger")))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iParam1, 100f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
		else if (bParam2)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
			ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		}
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
}

bool func_669()//Position - 0x1E6FF7
{
	return __LIB_1__::func_360(6109, -1, 0) == 2;
}

bool func_670()//Position - 0x1E700A
{
	return __LIB_1__::func_360(6109, -1, 0) == 1;
}

int func_671()//Position - 0xAD58F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((__LIB_1__::func_319(Global_4718592.f_168757) || __LIB_13__::func_435(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757))
		{
			return 0;
		}
		if (__LIB_12__::func_668(Global_4718592.f_116524, Global_4718592.f_168757))
		{
			return 0;
		}
	}
	return 1;
}

void func_672(int iParam0)//Position - 0xB2256
{
	__LIB_1__::func_354(__LIB_13__::func_652(iParam0), 0, -1, 1, 0);
	__LIB_1__::func_354(__LIB_13__::func_207(iParam0), 0, -1, 1, 0);
	__LIB_33__::func_720(iParam0);
	__LIB_19__::func_385(iParam0);
	__LIB_13__::func_698(iParam0, &(Global_2789412[iParam0 /*106*/]));
}

int func_673()//Position - 0xB2F8C
{
	if (((__LIB_9__::func_698(0) && __LIB_9__::func_698(1)) && __LIB_9__::func_698(2)) && __LIB_9__::func_698(3))
	{
		if (!__LIB_9__::func_698(5))
		{
			__LIB_12__::func_591(5, 1);
		}
		return 1;
	}
	if (__LIB_9__::func_698(5))
	{
		__LIB_12__::func_591(5, 0);
	}
	return 0;
}

void func_674()//Position - 0xBEC94
{
	__LIB_1__::func_354(8353, (Global_1966142 + 604800), -1, 1, 0);
	Global_2725353 = 1;
}

void func_675(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xC07B7
{
	int iVar0;
	iVar0 = __LIB_7__::func_933(iParam1);
	if (__LIB_7__::func_932(iVar0))
	{
		if (__LIB_5__::func_661(iParam0, iParam1))
		{
			__LIB_13__::func_7(iVar0, 0);
			if (bParam3)
			{
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 = 0;
				__LIB_1__::func_379(__LIB_12__::func_991(iVar0), 0, -1);
			}
			else
			{
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 = 1;
				__LIB_1__::func_379(__LIB_12__::func_991(iVar0), 1, -1);
			}
			if (bParam2)
			{
				__LIB_1__::func_354(__LIB_12__::func_990(iVar0), 0, -1, 1, 0);
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_1 = 0;
				Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_11 = 0;
			}
			if (bParam4)
			{
				__LIB_1__::func_354(__LIB_12__::func_971(iVar0), 0, -1, 1, 0);
				__LIB_12__::func_948(iVar0, 0);
				__LIB_12__::func_989(iVar0, 0);
			}
			Global_1640649[iVar0] = 0;
			__LIB_0__::func_186(__LIB_12__::func_980(iVar0), 0, -1);
			__LIB_0__::func_186(__LIB_12__::func_988(iVar0), 0, -1);
			if (__LIB_1__::func_794(iParam1) == 1)
			{
				Global_1640664 = 1;
				Global_1640676 = 0;
			}
			Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_8 = 0;
			__LIB_0__::func_186(__LIB_12__::func_969(iVar0), 0, -1);
			__LIB_12__::func_987(iVar0);
			if (__LIB_7__::func_553(iParam1))
			{
				if (bParam5)
				{
					Global_1853348[iParam0 /*834*/].f_267.f_270 = 0;
					__LIB_1__::func_354(5445, 0, -1, 1, 0);
				}
			}
			Global_2725352 = 1;
		}
	}
}

void func_676(int iParam0, bool bParam1)//Position - 0xC2AC0
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
	__LIB_37__::func_361(&Var3);
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
			if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(Global_4534105[iParam0 /*85*/]), 0, 0))
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

void func_677(var uParam0, int iParam1, var uParam2)//Position - 0xC9B0F
{
	if ((uParam2 && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
	}
	if ((__LIB_0__::func_872(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_854(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_5__::func_213();
		__LIB_27__::func_629(1);
	}
	if ((__LIB_3__::func_601(iParam1, 1) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1) && __LIB_6__::func_927(iParam1) == PLAYER::PLAYER_ID())
	{
		__LIB_3__::func_600(1);
	}
}

int func_678(int iParam0, var uParam1)//Position - 0x17C0EF
{
	char* sVar0;
	bool bVar1;
	sVar0 = "anim@amb@facility@hangerdoors@base@enter_exit@male@";
	bVar1 = true;
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 0);
	MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_3), 1);
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_CHRISTMAS2017/XM_FACILITY_ENTRY_EXIT", false, -1))
	{
		MISC::CLEAR_BIT(&(uParam1->f_188), 22);
		bVar1 = false;
	}
	else
	{
		MISC::SET_BIT(&(uParam1->f_188), 22);
	}
	if ((__LIB_0__::func_177() || __LIB_3__::func_719()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!BitTest(uParam1->f_188, 17))
		{
			__LIB_5__::func_604(iParam0);
			MISC::SET_BIT(&(uParam1->f_188), 17);
		}
		STREAMING::REQUEST_MODEL(__LIB_4__::func_441());
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_441()))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(__LIB_4__::func_440());
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_440()))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_ANIM_DICT("anim@amb@facility@hanger_doors");
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@facility@hanger_doors"))
		{
			bVar1 = false;
		}
		STREAMING::REQUEST_MODEL(joaat("xm_prop_out_hanger_lift"));
		if (!STREAMING::HAS_MODEL_LOADED(joaat("xm_prop_out_hanger_lift")))
		{
			bVar1 = false;
		}
		sVar0 = "anim@AMB@FACILITY@HANGERDOORS@BASE@ENTER_EXIT@GROUP@LIFT";
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		sVar0 = "anim@AMB@FACILITY@HANGERDOORS@BASE@ENTER_EXIT@GROUP@EXTERIOR";
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			bVar1 = false;
		}
		if (__LIB_1__::func_614() || BitTest(Global_1574942, 4))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 21);
		}
		else if (Global_2824886)
		{
			if (__LIB_0__::func_893() || __LIB_4__::func_54())
			{
				if (!BitTest(Global_1946250.f_2, 21))
				{
					__LIB_25__::func_735(&(uParam1->f_101), 1, 0);
					STREAMING::SET_FOCUS_POS_AND_VEL(482.435f, 4812.798f, -59.383f, 0f, 0f, 0f);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(482.435f, 4812.798f, -59.383f, 20f, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_1946250.f_2), 20);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__::func_394())
			{
				sVar0 = "anim@amb@facility@hangerdoors@base@enter_exit@female@";
			}
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				bVar1 = false;
			}
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	return 1;
}

void func_679(var uParam0, var uParam1)//Position - 0x180EED
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (!BitTest(uParam0->f_396, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		MISC::SET_BIT(&(uParam0->f_396), 0);
	}
	if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 427, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 353, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	if ((!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_4__::func_490()) && (!BitTest(Global_1946250.f_4523, 4) || uParam0->f_399 == 1))
	{
		if (!__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_746())
			{
				__LIB_25__::func_742(&(uParam0->f_397), 0, 0);
				uParam0->f_399 = 1;
			}
		}
		if (__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_746())
			{
				__LIB_25__::func_735(&(uParam0->f_397), 0, 0);
				if (!Global_2787784)
				{
					MISC::SET_BIT(&(Global_1946250.f_4523), 4);
					uParam0->f_399 = 1;
				}
			}
			else if (__LIB_30__::func_931(&(uParam0->f_397), 10000, 0))
			{
				__LIB_25__::func_747(&(uParam0->f_397));
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 0;
			}
			else if (!BitTest(Global_1946250.f_4523, 4))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
				uParam0->f_399 = 1;
			}
		}
	}
	else if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 4);
		uParam0->f_399 = 0;
		__LIB_25__::func_747(&(uParam0->f_397));
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

int func_680(var uParam0, int iParam1)//Position - 0x1B6F6A
{
	if (__LIB_8__::func_867(iParam1))
	{
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (!__LIB_1__::func_296(&(uParam0->f_101)))
	{
		__LIB_25__::func_742(&(uParam0->f_101), 0, 0);
	}
	else if (__LIB_30__::func_931(&(uParam0->f_101), 1500, 0))
	{
		__LIB_25__::func_747(&(uParam0->f_101));
		MISC::CLEAR_BIT(&Global_1946250, 25);
		MISC::CLEAR_BIT(&Global_1946250, 23);
		MISC::CLEAR_BIT(&Global_1946250, 24);
		__LIB_4__::func_561(1);
		return 1;
	}
	else if (Global_1946250.f_3621[0] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_25__::func_747(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 24);
		return 1;
	}
	else if ((Global_1946250.f_3621[1] == 1 && Global_1946250.f_3621[3] == 1) || __LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		__LIB_25__::func_747(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 23);
		return 1;
	}
	else if (Global_1946250.f_3621[2] == 1 && Global_1946250.f_3621[3] == 1)
	{
		__LIB_25__::func_747(&(uParam0->f_101));
		MISC::SET_BIT(&Global_1946250, 25);
		return 1;
	}
	return 0;
}

void func_681(var uParam0, var uParam1)//Position - 0x1BDCF1
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	__LIB_3__::func_122(&(uParam0->f_22.f_94));
	__LIB_25__::func_747(&(uParam0->f_22.f_103));
	__LIB_4__::func_646(0);
	if (!__LIB_4__::func_535(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!BitTest(uParam0->f_396, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		}
		MISC::SET_BIT(&(uParam0->f_396), 0);
	}
	if ((!__LIB_3__::func_171(PLAYER::PLAYER_ID()) && __LIB_5__::func_365()) && (!BitTest(Global_1946250.f_4523, 3) || uParam0->f_399 == 1))
	{
		if (!__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_659())
			{
				__LIB_25__::func_742(&(uParam0->f_397), 0, 0);
				uParam0->f_399 = 1;
			}
		}
		if (__LIB_1__::func_296(&(uParam0->f_397)))
		{
			if (__LIB_5__::func_659())
			{
				__LIB_25__::func_735(&(uParam0->f_397), 0, 0);
				if (!Global_2787784)
				{
					MISC::SET_BIT(&(Global_1946250.f_4523), 3);
					uParam0->f_399 = 1;
				}
			}
			else if (__LIB_30__::func_931(&(uParam0->f_397), 10000, 0))
			{
				__LIB_25__::func_747(&(uParam0->f_397));
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
				uParam0->f_399 = 0;
			}
			else if (!BitTest(Global_1946250.f_4523, 3))
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
				uParam0->f_399 = 1;
			}
		}
	}
	else if (uParam0->f_399)
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_4523), 3);
		uParam0->f_399 = 0;
		__LIB_25__::func_747(&(uParam0->f_397));
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), &bVar0, &bVar1, &bVar2, &bVar3, &bVar4, &uVar5, &uVar6, &uVar7))
		{
			if ((((!bVar0 || !bVar1) || !bVar2) || !bVar3) || !bVar4)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
				VEHICLE::SET_DISABLE_WEAPON_BLADE_FORCES(true);
			}
		}
	}
}

void func_682(int iParam0, bool bParam1)//Position - 0x202CE
{
	if (bParam1)
	{
		if (!__LIB_1__::func_686(iParam0, 10, 0))
		{
			__LIB_2__::func_911(iParam0, 10, 0);
			__LIB_1__::func_714(iParam0);
		}
	}
	else if (__LIB_1__::func_686(iParam0, 10, 0))
	{
		__LIB_2__::func_943(iParam0, 10, 0);
		__LIB_1__::func_714(iParam0);
	}
}

bool func_683(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x43BE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (*uParam3 != 0 && *uParam3 != 1)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			iVar0 = __LIB_13__::func_499(iParam0);
			iVar1 = __LIB_31__::func_529();
			iVar2 = __LIB_28__::func_704(iParam0);
			iVar3 = __LIB_28__::func_703(iParam0);
			if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam1, 0, 0, 4, 0, 3))
				{
					if (iParam2 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar3, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam2, 0, 0, 4, 0, 3))
					{
						if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), joaat("CF_MISSION_PASSED_v1"), joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, iParam1, 4, iVar2, 3))
						{
							*uParam3 = 1;
						}
						else
						{
							*uParam3 = 3;
						}
					}
					else
					{
						*uParam3 = 3;
					}
				}
				else
				{
					*uParam3 = 3;
				}
			}
			else
			{
				*uParam3 = 3;
			}
			if (*uParam3 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam3 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam3 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam3 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam3 != 1;
}

void func_684(bool bParam0)//Position - 0x43FFC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar1 = 11;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Global_1640632 == -1)
	{
		__LIB_28__::func_709();
		Global_1640632 = 0;
	}
	while (iVar3 < iVar1)
	{
		iVar2 = (iVar2 + __LIB_31__::func_545(iVar3));
		iVar3++;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2 + 1);
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		if (iVar4 < __LIB_31__::func_545(iVar3))
		{
			iVar0 = iVar3;
			iVar3 = (iVar1 - 1);
		}
		iVar4 = (iVar4 - __LIB_31__::func_545(iVar3));
		iVar3++;
	}
	__LIB_28__::func_707(iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(1, 101);
	iVar6 = SYSTEM::ROUND((Global_262145.f_15616 /* Tunable: EXEC_CONTRABAND_SPECIAL_ITEM_CHANCE */ * 100f));
	if (((((iVar5 <= iVar6 && !__LIB_0__::func_114()) && __LIB_28__::func_706()) && __LIB_28__::func_705(iVar0)) && !__LIB_19__::func_938(__LIB_13__::func_502(iVar0))) && __LIB_20__::func_9() < 6)
	{
		Global_1946111 = 1;
		if ((__LIB_7__::func_570(PLAYER::PLAYER_ID()) && __LIB_5__::func_185(PLAYER::PLAYER_ID()) == 167) && !bParam0)
		{
		}
		else
		{
			__LIB_1__::func_928(54);
		}
	}
	else
	{
		Global_1946111 = 0;
	}
	Global_1945956 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Global_1945957 = iVar0;
}

bool func_685(int iParam0, int iParam1, var uParam2)//Position - 0xAE704
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (__LIB_3__::func_534() != -1)
			{
				return 0;
			}
			iVar0 = __LIB_12__::func_993(iParam0);
			iVar1 = __LIB_12__::func_992();
			iVar2 = __LIB_20__::func_490(iParam0);
			if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar1, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, 1, 4, iVar0, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar2, joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), iParam1, 0, 0, 4, 0, 3))
				{
					if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), joaat("CF_MISSION_PASSED_BKR_v1"), joaat("NET_SHOP_ACTION_ADD_CONTRABAND"), 1, 0, iParam1, 4, iVar2, 3))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam2 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					*uParam2 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam2 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

bool func_686(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5)//Position - 0xBFE10
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	switch (*uParam4)
	{
		case 0:
			if (__LIB_3__::func_534() != -1)
			{
				return 0;
			}
			iVar2 = __LIB_12__::func_993(iParam0);
			iVar3 = __LIB_12__::func_992();
			iVar4 = __LIB_12__::func_970(iParam0, 0);
			switch (iParam3)
			{
				case 0:
					iVar5 = joaat("CF_ATTACKED");
					break;
				case 1:
					iVar5 = joaat("CF_MISSION_STARTED");
					break;
				case 2:
					iVar5 = joaat("CF_MISSION_FAILED");
					break;
				case 3:
					iVar5 = joaat("CF_MISSION_PASSED_BKR");
					break;
			}
			if (iParam3 == 0 || __LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), iVar3, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, 0, 1, 4, iVar2, 3))
			{
				if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_QNTY"), iVar4, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), iParam1, 0, 1, 4, 0, 3))
				{
					if (__LIB_9__::func_510(joaat("NET_SHOP_TTYPE_BASKET"), joaat("CATEGORY_CONTRABAND_FLAGS"), iVar5, joaat("NET_SHOP_ACTION_REMOVE_CONTRABAND"), 1, iParam2, 0, 4, iVar4, 3))
					{
						*uParam4 = 1;
					}
					else
					{
						*uParam4 = 3;
					}
				}
				else
				{
					*uParam4 = 3;
				}
			}
			else
			{
				*uParam4 = 3;
			}
			if (*uParam4 == 1 && __LIB_6__::func_360())
			{
			}
			else
			{
				*uParam4 = 3;
				__LIB_1__::func_34(__LIB_3__::func_534());
			}
			break;
		case 1:
			if (__LIB_2__::func_835(__LIB_3__::func_534()))
			{
				if (__LIB_2__::func_834(__LIB_3__::func_534()) == 2)
				{
					if (iParam2 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(__LIB_1__::func_818(__LIB_3__::func_534()));
						iVar0 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iParam0);
						iVar1 = __LIB_1__::func_794(iVar0);
						MONEY::NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam2, MISC::GET_HASH_KEY(__LIB_12__::func_642(iVar0)), iVar1, iParam5);
					}
					*uParam4 = 2;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
				else
				{
					*uParam4 = 3;
					__LIB_1__::func_34(__LIB_3__::func_534());
				}
			}
			break;
	}
	return *uParam4 != 1;
}

int func_687(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xAFBE0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_24__::func_384(iParam0, 0, bParam4, 0);
	iVar1 = __LIB_1__::func_724(&uParam1, 0, 0);
	if (__LIB_13__::func_4(iParam3, bParam4) > 0)
	{
		iVar2 = __LIB_13__::func_4(iParam3, bParam4);
		if (__LIB_7__::func_553(iParam0) && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iParam0) == 2)
		{
			iVar2 = (iVar2 / 2);
		}
		iVar1 = (iVar0 - iVar2);
		iVar3 = (__LIB_20__::func_503(PLAYER::PLAYER_ID(), iParam0, bParam4) - __LIB_1__::func_724(&uParam1, 0, 0));
		__LIB_12__::func_968(iParam3, iVar3, bParam4);
	}
	return iVar1;
}

int func_688(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0x3EF5D
{
	if (iParam0 == 275)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 270)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 274)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 278)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 267)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 280)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 268)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 276)
	{
		switch (iParam1)
		{
			case 1:
				__LIB_8__::func_394(__LIB_12__::func_52(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				__LIB_8__::func_394(__LIB_12__::func_52(iParam0, iParam1), uParam2, uParam3);
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 281)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 277)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 0;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 271)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 27;
				*uParam3 = 36;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 272)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 38;
				*uParam3 = 0;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 88;
				*uParam3 = 88;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 269)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 111;
				*uParam3 = 111;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	else if (iParam0 == 279)
	{
		switch (iParam1)
		{
			case 1:
				*uParam2 = 0;
				*uParam3 = 10;
				*uParam4 = 1;
				return 1;
				break;
			case 2:
				*uParam2 = 64;
				*uParam3 = 68;
				*uParam4 = 2;
				return 1;
				break;
		}
		return 0;
	}
	return 0;
}

void func_689()//Position - 0xAE957
{
	int iVar0;
	if (__LIB_5__::func_339(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_4__::func_566(PLAYER::PLAYER_ID());
		if (__LIB_7__::func_931(PLAYER::PLAYER_ID(), iVar0) <= 0 && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iVar0) != 0)
		{
			__LIB_20__::func_502(PLAYER::PLAYER_ID(), iVar0, 0, 1);
			__LIB_30__::func_481(5, 0, 1, 0);
			__LIB_12__::func_966(PLAYER::PLAYER_ID(), iVar0, 5000, 1);
		}
	}
}

void func_690(int* iParam0, bool bParam1)//Position - 0x6E2
{
	if (bParam1)
	{
		__LIB_0__::func_989(&(iParam0->f_1), 16);
	}
	else
	{
		__LIB_0__::func_988(&(iParam0->f_1), 16);
	}
}

int func_691(int* iParam0, int iParam1)//Position - 0x9DD
{
	if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(iParam0))
	{
		if (*iParam0)
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE(0);
			}
			return 1;
		}
		else
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE(0);
			}
			return 1;
		}
	}
	return 0;
}

struct<4> func_692(var uParam0)//Position - 0xAB7
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 24);
	uParam0->f_15 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_693(var uParam0)//Position - 0xB95
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	StringCopy(&Var0, "RAND_", 16);
	STATS::STAT_GET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), &iVar2, -1);
	STATS::STAT_GET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), &iVar3, -1);
	iVar4 = (iVar2 + iVar3);
	if (iVar4 > 10)
	{
		StringCopy(&(uParam0->f_13), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_13), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_13), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_694(var uParam0)//Position - 0xFEC
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "VEHS_", 16);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_CARS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BIKES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BOATS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_HELIS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_QUADBIKES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_NUMBER_STOLEN_BICYCLES"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_CARS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BIKES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BOATS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_HELIS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_QUADBIKES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_NUMBER_STOLEN_BICYCLES"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_COP_VEHICLE"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_CARS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BIKES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BOATS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_HELIS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_QUADBIKES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_NUMBER_STOLEN_BICYCLES"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 100)
	{
		StringCopy(&(uParam0->f_10), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_10), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_10), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_695(var uParam0)//Position - 0x11E9
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "PEDS_", 16);
	STATS::STAT_GET_INT(joaat("SP0_KILLS_INNOCENTS"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_KILLS_INNOCENTS"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_KILLS_INNOCENTS"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 100)
	{
		StringCopy(&(uParam0->f_9), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_9), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_9), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_696(var uParam0)//Position - 0x127E
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	StringCopy(&Var0, "STOCK_", 16);
	STATS::STAT_GET_INT(joaat("TIME_SPENT_ON_STOCKMARKET"), &iVar2, 0);
	if (iVar2 >= 120000)
	{
		StringCopy(&(uParam0->f_8), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_8), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_8), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

int func_697(int iParam0)//Position - 0x134B
{
	if (iParam0 < 9)
	{
		return BitTest(Global_113386.f_18103.f_175[iParam0 /*19*/].f_18, 0);
	}
	return 0;
}

int func_698(int iParam0)//Position - 0x13E8
{
	switch (iParam0)
	{
		case 0:
			return Global_113386.f_10049.f_90[0];
			break;
		case 1:
			return Global_113386.f_10049.f_90[1];
			break;
		case 2:
			return Global_113386.f_10049.f_90[2];
			break;
	}
	return 0;
}

struct<4> func_699(var uParam0)//Position - 0x1440
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	StringCopy(&Var0, "STRIP_", 16);
	STATS::STAT_GET_INT(joaat("SP0_LAP_DANCED_BOUGHT"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_LAP_DANCED_BOUGHT"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_LAP_DANCED_BOUGHT"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 0);
	iVar5 = (iVar5 + iVar4);
	STATS::STAT_GET_INT(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 1);
	iVar5 = (iVar5 + iVar4);
	STATS::STAT_GET_INT(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), &iVar4, 2);
	iVar5 = (iVar5 + iVar4);
	if (iVar3 >= 3 || iVar5 >= 100)
	{
		StringCopy(&(uParam0->f_5), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_5), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_5), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_700(var uParam0)//Position - 0x1525
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "CASH_", 16);
	STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar2, 0);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar2, 1);
	iVar3 = (iVar3 + iVar2);
	STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar2, 2);
	iVar3 = (iVar3 + iVar2);
	if (iVar3 >= 1000000)
	{
		StringCopy(&(uParam0->f_3), "SP", 8);
		StringConCat(&Var0, "SP", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 14);
	}
	else
	{
		StringCopy(&(uParam0->f_3), "SA", 8);
		StringConCat(&Var0, "SA", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	StringIntConCat(&(uParam0->f_3), iVar1, 8);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_701(var uParam0)//Position - 0x15C5
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	StringCopy(&Var0, "CHAR_", 16);
	iVar2 = 0;
	iVar4 = 0;
	STATS::STAT_GET_INT(joaat("SP0_TOTAL_PLAYING_TIME"), &iVar4, 0);
	STATS::STAT_GET_INT(joaat("SP1_TOTAL_PLAYING_TIME"), &iVar3, 1);
	if (iVar3 > iVar4)
	{
		iVar4 = iVar3;
		iVar2 = 1;
	}
	STATS::STAT_GET_INT(joaat("SP2_TOTAL_PLAYING_TIME"), &iVar3, 2);
	if (iVar3 > iVar4)
	{
		iVar4 = iVar3;
		iVar2 = 2;
	}
	if (iVar2 == 0)
	{
		StringCopy(&(uParam0->f_2), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else if (iVar2 == 1)
	{
		StringCopy(&(uParam0->f_2), "F", 4);
		StringConCat(&Var0, "F", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_2), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_2), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_702(var uParam0)//Position - 0x1693
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "STORY_", 16);
	if (__LIB_0__::func_425(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else if (__LIB_0__::func_425(136))
	{
		StringCopy(&(uParam0->f_1), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	else
	{
		StringCopy(&(uParam0->f_1), "B", 4);
		StringConCat(&Var0, "B", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	StringIntConCat(&(uParam0->f_1), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_703(var uParam0)//Position - 0x171E
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "INTRO_", 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 21);
	*uParam0 = iVar1;
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_704(var uParam0)//Position - 0xAE0
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "COLLECT_", 16);
	if (((__LIB_0__::func_425(110) || __LIB_0__::func_425(95)) || __LIB_0__::func_425(106)) || __LIB_0__::func_425(107))
	{
		StringCopy(&(uParam0->f_14), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else
	{
		StringCopy(&(uParam0->f_14), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_14), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_705(var uParam0)//Position - 0xF68
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "YOGA_", 16);
	if (__LIB_17__::func_695(300, 1))
	{
		StringCopy(&(uParam0->f_11), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_11), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_11), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

struct<4> func_706(var uParam0)//Position - 0xC0F
{
	struct<4> Var0;
	int iVar1;
	StringCopy(&Var0, "FIT_", 16);
	if ((((((((__LIB_16__::func_888(1, 1) > 50 && __LIB_16__::func_888(1, 2) > 50) && __LIB_16__::func_888(1, 3) > 50) && __LIB_16__::func_888(0, 1) > 50) && __LIB_16__::func_888(0, 2) > 50) && __LIB_16__::func_888(0, 3) > 50) && __LIB_16__::func_888(2, 1) > 50) && __LIB_16__::func_888(2, 2) > 50) && __LIB_16__::func_888(2, 3) > 50)
	{
		StringCopy(&(uParam0->f_12), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_12), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 11);
	StringIntConCat(&(uParam0->f_12), iVar1, 4);
	StringIntConCat(&Var0, iVar1, 16);
	return Var0;
}

void func_707(int iParam0)//Position - 0x31AC
{
	MISC::SET_BIT(&(Global_1641031.f_15[iParam0 /*24*/]), 0);
}

void func_708(int iParam0, int iParam1)//Position - 0x31C3
{
	Global_1641031.f_15[iParam0 /*24*/].f_16 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam1);
	Global_1641031.f_15[iParam0 /*24*/].f_17 = 1;
}

bool func_709(int iParam0)//Position - 0x3279
{
	return BitTest(Global_1641031.f_15[iParam0 /*24*/], 1);
}

bool func_710()//Position - 0x3D98
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2);
}

bool func_711()//Position - 0x3DDD
{
	return Global_2723612.f_1;
}

void func_712(int iParam0, int iParam1)//Position - 0x5C8E
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	bVar0 = false;
	bVar1 = false;
	StringCopy(&Global_2726816, "", 64);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "awardAmount", &iVar2);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardType", &uVar3);
	bVar4 = SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_BOOL(iParam0, "fullRefresh");
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "awardLabel", &Global_2726816);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_STRING(iParam0, "items", &uVar5);
	SOCIALCLUB::SC_INBOX_MESSAGE_GET_DATA_INT(iParam0, "userScreen", &iVar6);
	SOCIALCLUB::SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(iParam0);
	if (iVar2 != 0)
	{
		if (iVar2 == -99)
		{
			Global_2726798 = -99;
			Global_2726797 = iVar2;
		}
		else if (iVar2 < 0)
		{
			Global_2726798 = -1;
			Global_2726797 = iVar2;
		}
		else if (iVar2 > 0)
		{
			Global_2726798 = 1;
			Global_2726797 = iVar2;
		}
		bVar1 = true;
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar5, "[]") == 0)
	{
		Global_2726834 = 1;
	}
	if (iVar6 > 0)
	{
		Global_2726835 = iVar6;
	}
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_3() == 0)
		{
			if (bVar4 == 1)
			{
				NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar7, &uVar8);
				if (iVar7 == 8)
				{
					NETSHOPPING::NET_GAMESERVER_START_SESSION_RESTART(bVar0, bVar1);
				}
			}
		}
	}
}

int func_713(int iParam0, int iParam1)//Position - 0xC98B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar1], false))
		{
			if (Global_97782[iVar1] == iParam0)
			{
				if (iParam1 == 0 || iParam1 == ENTITY::GET_ENTITY_MODEL(Global_97772[iVar1]))
				{
					iVar0++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_714(char* sParam0, int iParam1, var uParam2)//Position - 0x36AA
{
	var* uVar0;
	var* uVar1;
	int iVar2;
	int iVar3;
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(uVar0, "mission");
	iVar2 = DATAFILE::DATADICT_GET_DICT(uVar1, "gen");
	StringCopy(sParam0, NETWORK::UGC_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::UGC_GET_CONTENT_USER_ID(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::UGC_GET_CONTENT_NAME(iParam1), 64);
	sParam0->f_56 = { __LIB_17__::func_929(iVar2) };
	sParam0->f_59 = { __LIB_16__::func_643(iVar2, "cam") };
	sParam0->f_62 = { __LIB_16__::func_642(iVar2) };
	sParam0->f_65 = DATAFILE::DATADICT_GET_INT(iVar2, "type");
	sParam0->f_68 = DATAFILE::DATADICT_GET_INT(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::DATADICT_GET_INT(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::DATADICT_GET_INT(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::DATADICT_GET_INT(iVar2, "min");
	sParam0->f_70 = DATAFILE::DATADICT_GET_INT(iVar2, "rank");
	sParam0->f_71 = DATAFILE::DATADICT_GET_INT(iVar2, "num");
	sParam0->f_73 = __LIB_16__::func_641(NETWORK::UGC_GET_CONTENT_RATING(iParam1, 0), NETWORK::UGC_GET_CONTENT_RATING_COUNT(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::DATADICT_GET_INT(iVar2, "charcon");
	*uParam2 = MISC::GET_HASH_KEY(NETWORK::UGC_GET_ROOT_CONTENT_ID(0));
	if (__LIB_29__::func_45(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (__LIB_0__::func_3() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_71 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
		if (sParam0->f_69 > Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */)
		{
			sParam0->f_69 = Global_262145.f_4605 /* Tunable: MAX_NG_TRANSITION_SESSION_SIZE */;
		}
	}
	if (!__LIB_11__::func_730())
	{
		iVar3 = NETWORK::UGC_GET_CONTENT_LANGUAGE(iParam1);
		if (NETWORK::UGC_IS_LANGUAGE_SUPPORTED(iVar3))
		{
			sParam0->f_54 = NETWORK::UGC_GET_CONTENT_DESCRIPTION_HASH(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::DATADICT_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::DATADICT_GET_INT(iVar2, "ltm");
	}
	MISC::SET_BIT(&(sParam0->f_76), 13);
	__LIB_2__::func_289();
}

int func_715(int iParam0)//Position - 0x71D0
{
	if (__LIB_1__::func_592(iParam0) == 133)
	{
		return Global_2815059.f_5116;
	}
	return -1;
}

int func_716(int iParam0, bool bParam1)//Position - 0x21A6E
{
	if (__LIB_2__::func_588(iParam0, bParam1, -1))
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_717(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x35941
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (__LIB_0__::func_343(24) != PLAYER::GET_PLAYERS_LAST_VEHICLE())
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				__LIB_14__::func_775(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Param0, fParam1, 24, 0);
			}
		}
	}
}

int func_718(int iParam0, int iParam1)//Position - 0x31B55
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	fVar2 = MISC::ABSF((Var0.f_2 - Var1.f_2));
	if (fVar2 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

bool func_719(int iParam0, char* sParam1)//Position - 0x132FC
{
	return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1);
}

void func_720(int iParam0, char* sParam1)//Position - 0x1330C
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
}

int func_721()//Position - 0x14440
{
	if (iLocal_198 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_198;
}

int func_722()//Position - 0x1B12D
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("digitalOverlay", false);
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

void func_723(int iParam0, int iParam1, float fParam2)//Position - 0x1BC3E
{
	struct<3> Var0;
	struct<3> Var1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1))
		{
			VEHICLE::SET_PLAYBACK_SPEED(iParam1, fParam2);
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
			Var1 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
			CAM::SET_CAM_COORD(iParam0, Var0);
			CAM::SET_CAM_ROT(iParam0, Var1, 2);
		}
	}
}

void func_724(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x1BC8D
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_PROOFS(iParam1, true, true, true, true, true, false, false, false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam3, sParam2, true);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		CAM::SET_CAM_COORD(iParam0, Var0);
		CAM::SET_CAM_ROT(iParam0, ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2);
	}
}

void func_725(int iParam0, char* sParam1)//Position - 0x21701
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
}

bool func_726(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x224F4
{
	struct<2> Var0;
	__LIB_17__::func_639(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return __LIB_17__::func_631(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

Vector3 func_727(int iParam0, int iParam1)//Position - 0x1988
{
	switch (iParam0)
	{
		case 0:
			return -1219f, -3495.9f, 12.9448f;
			break;
		case 1:
			if (iParam1 == 1)
			{
				return 606.8925f, -3250.1875f, 5.06951f;
			}
			else
			{
				return 634.5865f, -3232.7903f, -16.5774f;
			}
			break;
		case 2:
			return 1590.5997f, -2810.174f, 3.4494f;
			break;
		case 3:
			if (iParam1 == 1)
			{
				return 327.99f, -2757.61f, 4.99f;
			}
			else
			{
				return 338.4039f, -2762.1057f, 42.6543f;
			}
			break;
		case 4:
			if (iParam1 == 1)
			{
				return 1134.4216f, -2607.0237f, 14.77071f;
			}
			else
			{
				return 1133.6882f, -2605.0728f, 14.9729f;
			}
			break;
		case 5:
			if (iParam1 == 1)
			{
				return 368.93164f, -2118.5327f, 15.40341f;
			}
			else
			{
				return 369.945f, -2116.7556f, 16.1688f;
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				return 1741.82f, -1623.85f, 111.41f;
			}
			else
			{
				return 1742.0242f, -1618.7767f, 111.8313f;
			}
			break;
		case 7:
			return 287.7294f, -1444.4f, 45.5095f;
			break;
		case 8:
			return 17.5926f, -1213.2073f, 28.3678f;
			break;
		case 9:
			if (iParam1 == 1)
			{
				return -910.01715f, -1147.44f, 1.06785f;
			}
			else
			{
				return -900.3597f, -1165.5511f, 31.8047f;
			}
			break;
		case 10:
			if (iParam1 == 1)
			{
				return 1237.7278f, -1099.1497f, 37.52579f;
			}
			else
			{
				return 1231.9734f, -1102.3076f, 34.4289f;
			}
			break;
		case 11:
			if (iParam1 == 1)
			{
				return 87.69075f, 810.3736f, 210.12582f;
			}
			else
			{
				return 81.2213f, 814.0283f, 213.2917f;
			}
			break;
		case 12:
			if (iParam1 == 1)
			{
				return -1900.9506f, 1389.5819f, 218.1509f;
			}
			else
			{
				return -1907.5149f, 1388.69f, 217.9728f;
			}
			break;
		case 13:
			if (iParam1 == 1)
			{
				return 467.36896f, -730.75525f, 26.36373f;
			}
			else
			{
				return 469.8529f, -730.8f, 26.3985f;
			}
			break;
		case 14:
			return 202.1081f, -569.7198f, 128.18f;
			break;
		case 15:
			if (iParam1 == 1)
			{
				return 163.0531f, -566.3394f, 21.029f;
			}
			else
			{
				return 159.39f, -563.82f, 21f;
			}
			break;
		case 16:
			if (iParam1 == 1)
			{
				return -1183.1521f, -518.5386f, 38.53018f;
			}
			else
			{
				return -1182.5385f, -525.5859f, 39.9114f;
			}
			break;
		case 17:
			return -228.0476f, -236.4184f, 49.1361f;
			break;
		case 18:
			return -407.7026f, -151.7918f, 63.5505f;
			break;
		case 19:
			if (iParam1 == 1)
			{
				return -1169.3975f, -56.76701f, 44.45705f;
			}
			else
			{
				return -1175.4877f, -65.4649f, 44.6563f;
			}
			break;
		case 20:
			if (iParam1 == 1)
			{
				return 1679.0564f, 39.44059f, 160.77364f;
			}
			else
			{
				return 1684.664f, 40.7142f, 153.4074f;
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				return 1964.25f, 553.68f, 160.72f;
			}
			else
			{
				return 1965.58f, 555.99f, 160.79f;
			}
			break;
		case 22:
			if (iParam1 == 1)
			{
				return 24.21706f, 637.1212f, 206.38968f;
			}
			else
			{
				return 22.4492f, 638.8155f, 189.6085f;
			}
			break;
		case 23:
			return 2901.204f, 796.1192f, 3.3556f;
			break;
		case 24:
			if (iParam1 == 1)
			{
				return -1531.895f, 870.3203f, 180.67746f;
			}
			else
			{
				return -1529.7219f, 871.4257f, 180.6421f;
			}
			break;
		case 25:
			return -404.3191f, 1100.889f, 331.535f;
			break;
		case 26:
			return -2809.3538f, 1449.643f, 99.928f;
			break;
		case 27:
			if (iParam1 == 1)
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			else
			{
				return 3144.0452f, 2184.4133f, -5.2961f;
			}
			break;
		case 28:
			return 815.7574f, 1850.879f, 120.1796f;
			break;
		case 29:
			return -1944.24f, 1941.07f, 162.8f;
			break;
		case 30:
			if (iParam1 == 1)
			{
				return -1452.23f, 2127.41f, 42.84f;
			}
			else
			{
				return -1436.87f, 2130.22f, 26.78f;
			}
			break;
		case 31:
			return 1367.4128f, 2180.6316f, 96.6914f;
			break;
		case 32:
			if (iParam1 == 1)
			{
				return 170.1652f, 2217.637f, 89.30811f;
			}
			else
			{
				return 172.1426f, 2220.1313f, 89.7842f;
			}
			break;
		case 33:
			return 889.3209f, 2870.0522f, 55.2834f;
			break;
		case 34:
			if (iParam1 == 1)
			{
				return 1980.2f, 2914.79f, 45.48f;
			}
			else
			{
				return 1963.55f, 2922.81f, 57.76f;
			}
			break;
		case 35:
			return -390.384f, 2963.2605f, 18.2713f;
			break;
		case 36:
			return 71.6642f, 3279.3682f, 30.3918f;
			break;
		case 37:
			return 1924.1864f, 3471.2563f, 50.3238f;
			break;
		case 38:
			return -583.1569f, 3580.3752f, 266.2471f;
			break;
		case 39:
			if (iParam1 == 1)
			{
				return 2514.3015f, 3789.5193f, 52.077f;
			}
			else
			{
				return 2516.98f, 3789.35f, 53.79f;
			}
			break;
		case 40:
			if (iParam1 == 1)
			{
				return 1517.6129f, 3803.926f, 30.95605f;
			}
			else
			{
				return 1486.0475f, 3857.2168f, 22.2905f;
			}
			break;
		case 41:
			if (iParam1 == 1)
			{
				return -530.27386f, 4474.3584f, 59.45993f;
			}
			else
			{
				return -528.8246f, 4440.6436f, 31.7384f;
			}
			break;
		case 42:
			if (iParam1 == 1)
			{
				return 3815.055f, 4447.343f, 2.06631f;
			}
			else
			{
				return 3820.8132f, 4441.683f, 1.8007f;
			}
			break;
		case 43:
			if (iParam1 == 1)
			{
				return -1946.95f, 4584.36f, 56.06f;
			}
			else
			{
				return -1943.0546f, 4585.1943f, 46.6362f;
			}
			break;
		case 44:
			return 2437.5452f, 4779.9595f, 33.5101f;
			break;
		case 45:
			return -1441.4948f, 5414.888f, 23.3f;
			break;
		case 46:
			return 2196.2507f, 5599.034f, 52.7129f;
			break;
		case 47:
			if (iParam1 == 1)
			{
				return -503.95f, 5673.55f, 51.24f;
			}
			else
			{
				return -503.2193f, 5665.6104f, 48.8487f;
			}
			break;
		case 48:
			if (iParam1 == 1)
			{
				return -378.41922f, 6080.782f, 30.44296f;
			}
			else
			{
				return -381.291f, 6086.949f, 38.6147f;
			}
			break;
		case 49:
			return 440.9546f, 6459.6416f, 27.7432f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_728(var uParam0, var uParam1, struct<3> Param2)//Position - 0xD9D
{
	int iVar0;
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (OBJECT::HAS_PICKUP_BEEN_COLLECTED((uParam1[iVar0 /*11*/])->f_1) || __LIB_0__::func_744((uParam1[iVar0 /*11*/])->f_1))
			{
				__LIB_37__::func_692(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((SYSTEM::VDIST2(Param2, OBJECT::GET_PICKUP_COORDS((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || __LIB_0__::func_39(13)) || __LIB_0__::func_39(14))
		{
			__LIB_0__::func_733(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

int func_729()//Position - 0x72EB
{
	if (Global_1946250.f_4698 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_730()//Position - 0xFF32
{
	int iVar0;
	iVar0 = __LIB_3__::func_485();
	return (iVar0 == 2 || iVar0 == 3);
}

int func_731()//Position - 0x1F80
{
	if (Global_2671449.f_18)
	{
		__LIB_37__::func_877();
		__LIB_37__::func_986();
		return 1;
	}
	if (__LIB_17__::func_922() || __LIB_25__::func_186())
	{
		__LIB_37__::func_877();
		__LIB_37__::func_986();
		return 1;
	}
	if ((((((((((((__LIB_28__::func_548() && Global_2671449 != 5) && Global_2671449 != 6) && Global_2671449 != 7) && !Global_2671449.f_27) && !Global_2671449.f_28) && !Global_2671449.f_29) && !Global_2671449.f_30) && !Global_2671449.f_31) && !Global_2671449.f_32) && !Global_2671449.f_33) && !Global_2671449 == 8) && !Global_2671449 == 9)
	{
		__LIB_6__::func_43(0);
		__LIB_37__::func_877();
		__LIB_37__::func_986();
		return 1;
	}
	if (Global_2671449.f_16 && Global_2671449.f_15)
	{
		return 1;
	}
	else if (!Global_2671449.f_20)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spawn_activities")) == 0)
		{
			if (__LIB_5__::func_99("spawn_activities", 1424))
			{
				Global_2671449.f_20 = 1;
			}
		}
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spawn_activities")) == 0)
	{
		__LIB_37__::func_877();
		__LIB_37__::func_986();
		return 1;
	}
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2671449.f_3)) > 120000)
	{
		__LIB_37__::func_877();
		__LIB_37__::func_986();
		return 1;
	}
	MISC::SET_BIT(&(Global_1940663[1]), 22);
	return 0;
}

int func_732(int iParam0, int iParam1)//Position - 0x2A49
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					if ((__LIB_1__::func_307(PLAYER::PLAYER_ID()) != -1 && __LIB_3__::func_592(__LIB_1__::func_307(PLAYER::PLAYER_ID()), 11)) && __LIB_0__::func_509() == 0)
					{
						return !__LIB_4__::func_358(PLAYER::PLAYER_ID());
					}
					return 1;
					break;
				case 60:
				case 61:
				case 62:
				case 63:
				case 64:
				case 65:
				case 66:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_733()//Position - 0x6FC8
{
	if (__LIB_2__::func_867(Global_1310720.f_1441))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Global_4196263[Global_1310720.f_1441 /*2012*/].f_146.f_47, true) <= 30f)
		{
			if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0))
			{
				if (!Global_2667225.f_2677 && !Global_2667225.f_2679)
				{
					return 0;
				}
			}
			if (__LIB_37__::func_768(&(Global_4196263[Global_1310720.f_1441 /*2012*/]), 1, 0))
			{
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 12))
				{
					return 1;
				}
			}
		}
	}
	Global_1310720.f_1441++;
	if (Global_1310720.f_1441 >= 42)
	{
		Global_1310720.f_1441 = -1;
	}
	return 0;
}

int func_734()//Position - 0x72B41
{
	if (!Global_1976975)
	{
		if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_2__::func_638()) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(5017.4224f, -5130.4478f, 2.19928f, ENTITY::GET_ENTITY_COORDS(Global_2815059.f_298, true), true) < 1500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_735()//Position - 0x627
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
	{
		return "anim@scripted@heist@ig25_beach@heeled@";
	}
	return "anim@scripted@heist@ig25_beach@male@";
}

bool func_736()//Position - 0x1095F
{
	if (__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1) && !Global_1973160)
	{
		return 1;
	}
	return (Global_262145.f_29314 || !__LIB_1__::func_35());
}

int func_737()//Position - 0x72E12
{
	if (__LIB_11__::func_705())
	{
		return 1;
	}
	return __LIB_10__::func_459(__LIB_1__::func_463());
}

void func_738(int iParam0)//Position - 0x8007
{
	if (!__LIB_29__::func_198(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (iParam0 != -1)
	{
		__LIB_7__::func_946(iParam0);
	}
	__LIB_13__::func_134(243, -1);
}

Vector3 func_739(int iParam0)//Position - 0x175F
{
	if (iParam0 >= 7 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -1939.4829f, 4443.9526f, 37.3474f;
		case 1:
			return -516.9256f, 2008.014f, 204.0998f;
		case 3:
			return -223.6755f, 4224.6436f, 43.7304f;
		case 4:
			return 1606.5785f, 3841.1882f, 33.2931f;
		case 5:
			return 2037.6644f, 2137.3862f, 92.7095f;
		case 2:
			return 2996.776f, 2774.085f, 43.26f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_740(int iParam0)//Position - 0x2BF5
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_44024[iParam0 /*5*/] = -1;
	Global_44024[iParam0 /*5*/].f_1 = 0;
	Global_44024[iParam0 /*5*/].f_2 = -1;
	Global_44024[iParam0 /*5*/].f_3 = 0;
	Global_44024[iParam0 /*5*/].f_4 = 0;
}

Vector3 func_741(int iParam0)//Position - 0x50F9
{
	if (iParam0 >= 3 || iParam0 <= -1)
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 1:
			return 2434.4146f, 4284.2495f, 35.5059f;
		case 0:
			return -1230.6222f, -2049.97f, 12.8882f;
		case 2:
			return 1591.686f, 3813.4014f, 33.3371f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_742()//Position - 0x2B60
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		__LIB_17__::func_9(iVar0);
		iVar0++;
	}
}

void func_743()//Position - 0x2C42
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_758(iVar0);
		iVar0++;
	}
}

void func_744(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1A74
{
	Global_113386.f_1.f_73[iParam0 /*3*/] = iParam1;
	__LIB_38__::func_354(iParam0, 0, iParam2);
	__LIB_38__::func_354(iParam0, 1, iParam3);
	__LIB_38__::func_354(iParam0, 2, iParam4);
	__LIB_38__::func_354(iParam0, 3, iParam5);
}

Vector3 func_745(struct<3> Param0, bool bParam1)//Position - 0xECF2
{
	struct<3> Var0;
	Var0 = { -5f, -5f, 0f };
	if (bParam1)
	{
		Var0 = { 5f, 5f, 3f };
	}
	Var0 = { Param0 + Var0 };
	return Var0;
}

void func_746(int iParam0)//Position - 0x14DA7
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::CLEAR_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
		MISC::CLEAR_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_747()//Position - 0x80AFA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		Global_95479[iVar0 /*10*/] = { 0f, 0f, 0f };
		Global_95479[iVar0 /*10*/].f_3 = { 0f, 0f, 0f };
		Global_95479[iVar0 /*10*/].f_6 = 0f;
		Global_95479[iVar0 /*10*/].f_7 = 263;
		Global_95479[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
}

var func_748(int iParam0)//Position - 0x8442E
{
	return Global_1998[iParam0 /*29*/].f_1;
}

int func_749()//Position - 0x7477D
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	while (bVar1 < 32)
	{
		if (BitTest(Global_113386.f_10049.f_96, bVar1))
		{
			if (!__LIB_37__::func_739(bVar1))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_97, bVar1))
		{
			if (!__LIB_37__::func_739(bVar1 + 32))
			{
				iVar0++;
			}
		}
		if (BitTest(Global_113386.f_10049.f_98, bVar1))
		{
			if (!__LIB_37__::func_739(bVar1 + 64))
			{
				iVar0++;
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_750(var uParam0, int iParam1)//Position - 0x862FB
{
	__LIB_38__::func_321(uParam0);
	switch (iParam1)
	{
		case 0:
			__LIB_30__::func_358(uParam0[0], 0, 0, 0, 2, 2, 0, 9);
			__LIB_30__::func_358(uParam0[1], 0, 0, 0, 8, 8, 2, 1);
			break;
		case 1:
			__LIB_30__::func_358(uParam0[0], 0, 0, 0, 6, 6, 5, 1);
			break;
	}
}

void func_751(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x86519
{
	*uParam1 = iParam3;
	uParam1->f_1 = iParam4;
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = -1;
	uParam1->f_4 = -1;
	__LIB_1__::func_377(&(uParam1->f_5));
	uParam1->f_8 = 1;
	uParam1->f_16 = 7;
	uParam1->f_17 = -1;
	uParam1->f_18 = 0;
	__LIB_38__::func_321(&(uParam1->f_9));
	switch (iParam2)
	{
		case 6:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 4);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 10, 6, 10, 1);
			break;
		case 3:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 18);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 1, 0, 0, 19);
			__LIB_30__::func_358(&(uParam1->f_9[2]), 0, 0, 0, 4, 8, 0, 7);
			__LIB_30__::func_358(&(uParam1->f_9[3]), 0, 0, 0, 4, 8, 0, 8);
			__LIB_30__::func_358(&(uParam1->f_9[4]), 0, 0, 0, 9, 0, 0, 9);
			__LIB_30__::func_358(&(uParam1->f_9[5]), 0, 0, 0, 0, 0, 8, 1);
			__LIB_38__::func_321(&(Global_113386.f_18103.f_388));
			__LIB_30__::func_358(&(Global_113386.f_18103.f_388[0]), 0, 0, 0, 0, 4, 0, 10);
			__LIB_30__::func_358(&(Global_113386.f_18103.f_388[1]), 0, 0, 0, 0, 5, 0, 11);
			__LIB_30__::func_358(&(Global_113386.f_18103.f_388[2]), 0, 0, 0, 0, 4, 0, 12);
			__LIB_30__::func_358(&(Global_113386.f_18103.f_388[3]), 0, 0, 0, 0, 6, 0, 13);
			__LIB_30__::func_358(&(Global_113386.f_18103.f_388[4]), 0, 0, 0, 0, 3, 0, 14);
			break;
		case 1:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 2, 2, 0, 17);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 2, 1, 1, 10);
			__LIB_30__::func_358(&(uParam1->f_9[2]), 0, 0, 0, 8, 8, 4, 1);
			break;
		case 8:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 8, 8, 4, 3);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 8, 8, 3, 4);
			__LIB_30__::func_358(&(uParam1->f_9[2]), 0, 0, 0, 0, 0, 1, 21);
			break;
		case 0:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 2, 2, 0, 15);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 2, 2, 0, 17);
			__LIB_30__::func_358(&(uParam1->f_9[2]), 0, 0, 0, 2, 2, 0, 9);
			__LIB_30__::func_358(&(uParam1->f_9[3]), 0, 0, 0, 8, 8, 4, 1);
			break;
		case 5:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 6, 6, 0, 5);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 8, 8, 0, 6);
			break;
		case 2:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 2, 0, 0, 16);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 2, 1, 1, 10);
			__LIB_30__::func_358(&(uParam1->f_9[2]), 0, 0, 0, 1, 0, 0, 20);
			__LIB_30__::func_358(&(uParam1->f_9[3]), 0, 0, 0, 5, 8, 4, 1);
			break;
		case 7:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 1, 0, 0, 4);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 10, 6, 0, 1);
			break;
		case 4:
			__LIB_30__::func_358(&(uParam1->f_9[0]), 0, 0, 0, 6, 6, 0, 1);
			__LIB_30__::func_358(&(uParam1->f_9[1]), 0, 0, 0, 6, 6, 0, 1);
			break;
	}
}

void func_752(var* uParam0, int iParam1)//Position - 0x869FD
{
	__LIB_38__::func_322(uParam0, iParam1);
}

void func_753()//Position - 0x86CA5
{
	__LIB_38__::func_335();
	__LIB_38__::func_334();
}

void func_754(int iParam0, int iParam1)//Position - 0x73A1A
{
	int iVar0;
	if (iParam0 == 94 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 && !Global_113386.f_9085.f_330[iParam0 /*6*/])
	{
		if (!BitTest(Global_91229[iParam0 /*34*/].f_15, 6))
		{
			iVar0 = __LIB_38__::func_306(iParam0);
			if (iVar0 != 322)
			{
				__LIB_0__::func_716(iVar0, 0, 0);
			}
		}
		__LIB_17__::func_900(iParam0, __LIB_37__::func_702(iParam0), 0);
		if (iParam0 == 53)
		{
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				STATS::SET_PROFILE_SETTING_PROLOGUE_COMPLETE();
			}
		}
		if (iParam0 == 40)
		{
			if (NETWORK::NETWORK_IS_SIGNED_IN())
			{
				STATS::SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE();
			}
		}
	}
	Global_113386.f_9085.f_330[iParam0 /*6*/] = iParam1;
}

void func_755()//Position - 0x308
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_756(var* uParam0, char* sParam1)//Position - 0x25C3
{
	MISC::START_SAVE_STRUCT_WITH_SIZE(uParam0, 41, sParam1);
	MISC::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_21), "tlPlateText");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	MISC::REGISTER_TEXT_LABEL_15_TO_SAVE(&(uParam0->f_28), "tlPlateText_pending");
	MISC::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	MISC::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	MISC::STOP_SAVE_STRUCT();
}

int func_757()//Position - 0x23113
{
	if (((LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_FREEMODE() || LOADINGSCREEN::LOBBY_AUTO_MULTIPLAYER_MENU()) || NETWORK::GET_IS_LAUNCH_FROM_LIVE_AREA()) || NETWORK::GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT())
	{
		return 1;
	}
	return 0;
}

void func_758(char* sParam0, int iParam1)//Position - 0x15
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(sParam0);
	}
	SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
}

int func_759(struct<3> Param0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5)//Position - 0x9FE7
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	iVar0 = (*iParam2 / iParam3);
	iVar1 = (*iParam2 % iParam3);
	fVar2 = (IntToFloat(iVar0) * fParam5);
	if (fVar2 > fParam4)
	{
		return 0;
	}
	if (IntToFloat(*iParam2) > ((IntToFloat(iParam3) * fParam4) / fParam5))
	{
		return 0;
	}
	fVar3 = ((360f / IntToFloat(iParam3)) * IntToFloat(iVar1));
	fVar4 = ((SYSTEM::COS(fVar3) * fParam5) * IntToFloat(iVar0 + 1));
	fVar5 = ((SYSTEM::SIN(fVar3) * fParam5) * IntToFloat(iVar0 + 1));
	*uParam1 = { Param0 + Vector(0f, fVar5, fVar4) };
	*iParam2++;
	return 1;
}

int func_760(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA070
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam2 == 0)
		{
			iParam2 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = 126;
		if (!bParam3)
		{
			iVar0 = 0;
			iVar1 = 126;
		}
		iVar2 = -1;
		MISC::GET_MODEL_DIMENSIONS(iParam2, &Var3, &Var4);
		if (bParam4)
		{
			Var3 = { Var3 * Vector(1.25f, 1.25f, 1.25f) };
			Var4 = { Var4 * Vector(1.25f, 1.25f, 1.25f) };
		}
		Var4 = { Var4 - Var3 };
		iVar7 = SHAPETEST::START_SHAPE_TEST_BOX(Param0 - Vector(Var3.f_2, 0f, 0f), Var4, 0f, 0f, fParam1, 2, iVar1, iVar0, 4);
		iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar2, &uVar5, &uVar6, &uVar8);
		while (iVar9 == 1)
		{
			SYSTEM::WAIT(0);
			iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar7, &iVar2, &uVar5, &uVar6, &uVar8);
		}
		if (iVar9 == 2)
		{
			if (iVar2 != 0)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_761(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5)//Position - 0x97C69
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam4;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam4 == 263)
	{
		return 0;
	}
	if (((Global_32338[iVar0 /*23*/].f_16 == 6 || Global_32338[iVar0 /*23*/].f_16 == 1) || Global_32338[iVar0 /*23*/].f_16 == 9) || Global_32338[iVar0 /*23*/].f_16 == 7)
	{
		return 0;
	}
	if (SYSTEM::VDIST2(Param1, Param2) < (7.5f * 7.5f))
	{
		*fParam3 = SYSTEM::VDIST2(Param1, Param2);
		return 1;
	}
	fVar1 = -1f;
	if (Global_32338[iVar0 /*23*/].f_16 == 4)
	{
		fVar1 = 10f;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (Global_97374[iVar2 /*17*/])
			{
				if (Global_97374[iVar2 /*17*/].f_9 == iParam4)
				{
					fVar1 = Global_94426[Global_97374[iVar2 /*17*/].f_5 /*2*/].f_1;
				}
			}
			iVar2++;
		}
	}
	else if (Global_32338[iVar0 /*23*/].f_16 == 8)
	{
		fVar1 = 20f;
	}
	if (fVar1 > 0f)
	{
		if (SYSTEM::VDIST2(Param1, Param2) < (fVar1 * fVar1))
		{
			*fParam3 = SYSTEM::VDIST2(Param1, Param2);
			return 1;
		}
		if (iParam0 != 89)
		{
			iVar3 = 0;
			while (iVar3 < 10)
			{
				if (BitTest(Global_113386.f_7229[iVar3], 0))
				{
					if (SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param2) < (50f * 50f))
					{
						if (SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param1) < (30f * 30f))
						{
							*fParam3 = SYSTEM::VDIST2(Global_95479[iVar3 /*10*/], Param1);
							iParam0 = iParam0;
							return 1;
						}
					}
				}
				iVar3++;
			}
		}
	}
	iParam5 = iParam5;
	*fParam3 = 0f;
	return 0;
}

int func_762(int iParam0)//Position - 0x985A7
{
	switch (iParam0)
	{
		case 315:
		case 311:
		case 234:
		case 316:
		case 245:
			if (BitTest(Global_113386.f_18574[35 /*6*/], 3) && !BitTest(Global_113386.f_18574[36 /*6*/], 3))
			{
				return 1;
			}
			break;
	}
	switch (Global_78583)
	{
		case 42:
			if (iParam0 == 118)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_763(int iParam0, int iParam1)//Position - 0x98AB2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam1 == Global_113386.f_18533.f_4[iParam0 /*6*/][iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_764(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x99022
{
	if ((((((((Global_113386.f_18533[iParam0] == iParam2 && iParam2 != 318) || (Global_113386.f_18533[iParam0] == iParam3 && iParam3 != 318)) || (Global_113386.f_18533[iParam0] == iParam4 && iParam4 != 318)) || (Global_113386.f_18533[iParam0] == iParam5 && iParam5 != 318)) || (Global_113386.f_18533[iParam0] == iParam6 && iParam6 != 318)) || (Global_113386.f_18533[iParam0] == iParam7 && iParam7 != 318)) || (Global_113386.f_18533[iParam0] == iParam8 && iParam8 != 318)) || (Global_113386.f_18533[iParam0] == iParam9 && iParam9 != 318))
	{
		if ((((((((iParam1 == iParam2 && iParam2 != 318) || (iParam1 == iParam3 && iParam3 != 318)) || (iParam1 == iParam4 && iParam4 != 318)) || (iParam1 == iParam5 && iParam5 != 318)) || (iParam1 == iParam6 && iParam6 != 318)) || (iParam1 == iParam7 && iParam7 != 318)) || (iParam1 == iParam8 && iParam8 != 318)) || (iParam1 == iParam9 && iParam9 != 318))
		{
			return 1;
		}
	}
	return 0;
}

int func_765(var uParam0, int iParam1, var uParam2)//Position - 0x99538
{
	if (*uParam0 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*uParam0] = iParam1;
	*uParam0++;
	return 1;
}

int func_766(int iParam0, bool bParam1)//Position - 0x997C0
{
	if (BitTest(Global_113386.f_18574[iParam0 /*6*/], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_767(int iParam0, float fParam1, var uParam2, var uParam3, int iParam4)//Position - 0x99B5B
{
	if (*iParam4 >= *uParam2)
	{
		return 0;
	}
	(*uParam2)[*iParam4] = iParam0;
	(*uParam3)[*iParam4] = fParam1;
	*iParam4++;
	return 1;
}

int func_768(int iParam0, int iParam1, int iParam2)//Position - 0x99B8B
{
	if (iParam0 != 145)
	{
	}
	if (iParam1 != 318)
	{
	}
	if (iParam2 != 0)
	{
	}
	return 1;
}

bool func_769(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9AA4B
{
	*uParam0 = 318;
	*uParam1 = -1f;
	uParam2->f_2 = uParam2->f_2;
	uParam3->f_111 = uParam3->f_111;
	uParam4 = uParam4;
	return *uParam0 != 318;
}

void func_770(int iParam0)//Position - 0xEFE
{
	if (__LIB_38__::func_385(iParam0))
	{
		Global_97364 = iParam0;
		Global_97368 = 1;
		return;
	}
}

int func_771(struct<3> Param0, bool bParam1, int iParam2)//Position - 0x9C94
{
	float fVar0;
	if (bParam1)
	{
		if (iParam2 < 2)
		{
			return 1;
		}
		if (((((((((SYSTEM::VDIST2(Param0, -1601.68f, -1013.9f, 12.02f) < 2809f || SYSTEM::VDIST2(Param0, -1645.58f, -1065.69f, 17.53f) < 2809f) || SYSTEM::VDIST2(Param0, -1688.35f, -1118.13f, 12.15f) < 2809f) || SYSTEM::VDIST2(Param0, -1751.62f, -1133.6f, 12.09f) < 2809f) || SYSTEM::VDIST2(Param0, -150.3f, 969.48f, 234.61f) < 400f) || SYSTEM::VDIST2(Param0, -160.5f, 1006.18f, 233.11f) < 400f) || SYSTEM::VDIST2(Param0, -215.49f, 887.98f, 207.17f) < 400f) || SYSTEM::VDIST2(Param0, -186.37f, 830.33f, 202.51f) < 400f) || SYSTEM::VDIST2(Param0, -114.1f, 784.55f, 201.24f) < 400f) || SYSTEM::VDIST2(Param0, -140.14f, 910.92f, 237.18f) < 400f)
		{
			return 1;
		}
	}
	if (((((((((((((__LIB_0__::func_490(Param0, 24.2857f, -663.82f, 31.6286f, 1f, 0) || __LIB_0__::func_490(Param0, -73.2402f, -682.619f, 32.6686f, 1f, 0)) || __LIB_0__::func_490(Param0, 20.6539f, -673.9974f, 31.3274f, 1f, 0)) || __LIB_0__::func_490(Param0, 17.0277f, -679.2629f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 13.0123f, -681.9813f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 9.33f, -683.0215f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -3.0009f, -684.3066f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -15.2584f, -685.263f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -27.7868f, -686.3926f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -40.3021f, -687.285f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -44.0514f, -687.7671f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -49.712f, -688.2113f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, -57.6906f, -686.7383f, 31.3381f, 1f, 0)) || __LIB_0__::func_490(Param0, 1643.25f, 20.25f, 169.531f, 1f, 0))
	{
		return 1;
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Param0 + Vector(10f, 0f, 0f), &fVar0, false, false);
	if (Param0.f_2 < (fVar0 - 0.1f))
	{
		return 1;
	}
	return 0;
}

int func_772(int iParam0, bool bParam1)//Position - 0x97973
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 87:
		case 88:
		case 80:
		case 164:
		case 152:
		case 184:
		case 185:
		case 241:
		case 247:
		case 286:
			iVar0 = MISC::GET_PREV_WEATHER_TYPE_HASH_NAME();
			iVar1 = MISC::GET_NEXT_WEATHER_TYPE_HASH_NAME();
			iVar3 = 0;
			iVar4 = 0;
			if (!bParam1)
			{
				if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar0 == joaat("snow"))
				{
					iVar3 = 1;
				}
			}
			if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == joaat("snow"))
			{
				iVar3 = 1;
			}
			if (iVar3 || iVar4)
			{
				return 1;
			}
			iVar2 = __LIB_17__::func_696();
			if (iVar2 < 9 || iVar2 >= 14)
			{
				return 1;
			}
			break;
		case 192:
		case 193:
		case 202:
			iVar2 = __LIB_17__::func_696();
			if (iVar2 < 9 || iVar2 >= 21)
			{
				return 1;
			}
			break;
		case 81:
			iVar2 = __LIB_17__::func_696();
			if (!__LIB_36__::func_833(iVar2))
			{
				return 1;
			}
			break;
		case 296:
			if (Global_39990[145] != 1)
			{
				return 1;
			}
			break;
		case 89:
		case 90:
		case 112:
		case 113:
		case 123:
			if (Global_113386.f_9085.f_99.f_58[128])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_773(int iParam0)//Position - 0x9861C
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case 77:
		case 78:
		case 79:
		case 86:
		case 87:
		case 122:
		case 89:
			iVar0 = 17;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 19;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 62;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 83:
		case 82:
		case 85:
		case 124:
			iVar0 = 22;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 173:
		case 171:
		case 161:
		case 163:
		case 169:
		case 168:
		case 167:
		case 152:
		case 170:
		case 151:
		case 156:
		case 172:
		case 155:
			iVar0 = 49;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 212:
		case 211:
		case 218:
		case 219:
		case 220:
		case 225:
			iVar0 = 41;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 293:
		case 294:
		case 295:
			iVar0 = iLocal_42;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = iLocal_40;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			iVar0 = 71;
			if (__LIB_11__::func_283(iVar0))
			{
				return 1;
			}
			break;
		case 270:
			iVar0 = 71;
			if (!__LIB_0__::func_178(iVar0))
			{
				return 1;
			}
			break;
		case 267:
			iVar0 = 77;
			if (__LIB_0__::func_178(iVar0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_774(int iParam0, var uParam1, var uParam2)//Position - 0x9880E
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_97919.f_45;
	if (__LIB_38__::func_190(*uParam1, uParam2))
	{
		if (uParam2->f_111 != 145 && uParam2->f_111 != 144)
		{
			iVar0 = 0;
			switch (uParam2->f_111)
			{
				case 19:
					iVar0 = 8;
					break;
				case 14:
					iVar0 = 16;
					break;
				case 17:
					iVar0 = 32;
					break;
				default:
					return 0;
					break;
			}
			iVar3 = 0;
			while (iVar3 < Global_91193)
			{
				if (Global_91193[iVar3 /*5*/] != -1)
				{
					uVar1 = Global_78588.f_109[Global_91193[iVar3 /*5*/] /*4*/];
					iVar2 = uVar1;
					if (__LIB_0__::func_703(Global_91229[iVar2 /*34*/].f_12, iVar0))
					{
						return 1;
					}
				}
				iVar3++;
			}
		}
	}
	return 0;
}

int func_775(int iParam0)//Position - 0x991D1
{
	bool bVar0;
	if (__LIB_17__::func_676(iParam0, &bVar0))
	{
		if (iParam0 == 197)
		{
			if (!BitTest(Global_113386.f_18533.f_23, bVar0))
			{
				if (__LIB_0__::func_178(9))
				{
					MISC::SET_BIT(&(Global_113386.f_18533.f_23), bVar0);
				}
			}
		}
		if (BitTest(Global_113386.f_18533.f_23, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_776(int iParam0, int iParam1)//Position - 0x99572
{
	int iVar0;
	iVar0 = WEAPON::GET_WEAPONTYPE_SLOT(iParam1);
	if (Global_113386.f_2363.f_539.f_298[iParam0 /*477*/][__LIB_39__::func_26(iVar0) /*5*/] == iParam1)
	{
		if (Global_113386.f_2363.f_539.f_298[iParam0 /*477*/][__LIB_39__::func_26(iVar0) /*5*/].f_1 > 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_777()//Position - 0x1003
{
	__LIB_0__::func_15(&(Global_113386.f_25084));
	__LIB_14__::func_790(&(Global_113386.f_25084.f_6));
	Global_113386.f_25084.f_96 = -1;
	Global_113386.f_25084.f_97 = -1;
}

int func_778(int iParam0, var uParam1, int iParam2)//Position - 0x18729
{
	if (Global_99845[iParam0 /*98*/] == 0)
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (Global_99845[iParam0 /*98*/] == joaat("blimp"))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (__LIB_17__::func_888(iParam0))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_99845[iParam0 /*98*/]))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_99845[iParam0 /*98*/]))
		{
			__LIB_0__::func_378(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_99845[iParam0 /*98*/]))
		{
			__LIB_0__::func_378(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	if (!__LIB_0__::func_371(Global_99845[iParam0 /*98*/], 0))
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		__LIB_0__::func_378(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		if (Global_99845[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_99845[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		__LIB_0__::func_378(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			__LIB_0__::func_378(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
		__LIB_0__::func_378(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
		if (Global_99845[iParam0 /*98*/] == *uParam1)
		{
			__LIB_0__::func_378(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
		*uParam1 = { Global_99845[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}
	__LIB_0__::func_378(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

int func_779(var uParam0)//Position - 0xDB87
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (uParam0->f_2)
	{
		case 5:
		case 6:
		case 7:
			__LIB_38__::func_550(PLAYER::PLAYER_PED_ID());
			return 1;
			break;
		case 275:
		case 276:
		case 277:
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 1;
			break;
		default:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 0;
			break;
	}
	return 0;
}

void func_780(int iParam0)//Position - 0x20BD2
{
	int iVar0;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_113386.f_2363.f_539.f_2296[iVar0] = __LIB_36__::func_13();
	}
}

void func_781(int iParam0)//Position - 0x857C3
{
	bool bVar0;
	bVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		__LIB_17__::func_685(iParam0, bVar0);
		__LIB_38__::func_191(iParam0, bVar0);
	}
}

int func_782(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x97F2F
{
	if (bParam3)
	{
		return 0;
	}
	*uParam1 = 0;
	uParam1->f_2 = iParam0;
	uParam1->f_3 = Global_97919.f_45;
	if (__LIB_38__::func_190(*uParam1, uParam2))
	{
		if (iParam0 == 132)
		{
			uParam2->f_111 = 36;
		}
		if (uParam2->f_111 != 145)
		{
			if (__LIB_17__::func_363(uParam2->f_111))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_783(int iParam0)//Position - 0x988E6
{
	switch (iParam0)
	{
		case 218:
		case 219:
		case 220:
		case 225:
			if (__LIB_39__::func_32(1, 19))
			{
				return 1;
			}
			if (__LIB_39__::func_32(2, 19))
			{
				return 1;
			}
			break;
		case 86:
		case 101:
		case 102:
		case 171:
		case 173:
			if (__LIB_39__::func_32(0, 14))
			{
				return 1;
			}
			if (__LIB_39__::func_32(1, 14))
			{
				return 1;
			}
			if (__LIB_39__::func_32(2, 14))
			{
				return 1;
			}
			break;
		case 77:
		case 78:
		case 79:
		case 94:
		case 98:
		case 122:
		case 151:
			if (__LIB_39__::func_32(0, 17))
			{
				return 1;
			}
			if (__LIB_11__::func_283(19))
			{
				return 1;
			}
			break;
		case 291:
		case 296:
		case 297:
		case 298:
		case 299:
		case 300:
		case 301:
		case 302:
		case 303:
		case 292:
		case 295:
		case 293:
		case 294:
			if (__LIB_11__::func_283(74) || __LIB_11__::func_283(75))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_784(struct<7> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)//Position - 0x9381
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			iVar3 = Global_97374[iVar0 /*17*/].f_9;
			iVar2 = 263;
			if (iVar3 >= iVar2)
			{
				return 0;
			}
			if (BitTest(Global_32338[iVar3 /*23*/].f_11, 19))
			{
				Var1 = { __LIB_15__::func_962(iVar3, __LIB_14__::func_466()) };
			}
			else
			{
				Var1 = { __LIB_15__::func_962(iVar3, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 3f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar10 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param0.f_12.f_66, &Var6, &Var7);
	if (!ENTITY::IS_ENTITY_DEAD(iParam84, false))
	{
		iVar4 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var7 - Var6, 0f, 0f, Param0.f_6, 2, 90, iParam84, 4);
	}
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar10, &uVar8, &uVar9, &uVar5) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar10 == 0)
	{
		return 1;
	}
	if (iVar10 == 1)
	{
		return 0;
	}
	return 0;
}

int func_785(var uParam0, bool bParam1)//Position - 0x94CC
{
	int iVar0;
	if (!__LIB_0__::func_465(uParam0->f_66))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_78043))
	{
		return 0;
	}
	switch (bParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			return 0;
			break;
	}
	if (!__LIB_0__::func_542(0, bParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	else if (!__LIB_0__::func_542(1, bParam1))
	{
		Global_113386.f_32749.f_5592[iVar0] = 1;
	}
	__LIB_39__::func_293(bParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam0->f_66));
	__LIB_0__::func_313(uParam0, &(Global_113386.f_32749.f_5038[iVar0 /*157*/][Global_113386.f_32749.f_5592[iVar0] /*78*/]));
	Global_113386.f_32749.f_5592[iVar0]++;
	if (Global_113386.f_32749.f_5592[iVar0] >= __LIB_0__::func_404(&(Global_113386.f_32749.f_5038[iVar0 /*157*/])))
	{
		Global_113386.f_32749.f_5592[iVar0] = 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_99845[iVar0 /*98*/] == uParam0->f_66 && MISC::ARE_STRINGS_EQUAL(&(Global_99845[iVar0 /*98*/].f_27), &(uParam0->f_1)))
		{
			Global_99845[iVar0 /*98*/] = 0;
		}
		iVar0++;
	}
	return 1;
}

int func_786(int iParam0, int iParam1, bool bParam2)//Position - 0x978D3
{
	int iVar0;
	if (bParam2)
	{
		return 0;
	}
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	if (!__LIB_3__::func_423(iVar0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 77:
		case 78:
		case 89:
		case 90:
		case 83:
		case 82:
		case 84:
		case 163:
		case 175:
		case 176:
		case 292:
		case 295:
		case 293:
		case 294:
			if (!__LIB_38__::func_556(iVar0, 6))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_787(struct<3> Param0, float fParam1, struct<13> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)//Position - 0x90C5
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	var uVar8;
	var uVar9;
	int iVar10;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			iVar3 = Global_97374[iVar0 /*17*/].f_9;
			iVar2 = 263;
			if (iVar3 >= iVar2)
			{
				return 0;
			}
			if (BitTest(Global_32338[iVar3 /*23*/].f_11, 19))
			{
				Var1 = { __LIB_15__::func_962(iVar3, __LIB_14__::func_466()) };
			}
			else
			{
				Var1 = { __LIB_15__::func_962(iVar3, 0) };
			}
			if (SYSTEM::VDIST2(Param0, Var1) < 9f)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar10 = -1;
	MISC::GET_MODEL_DIMENSIONS(Param2.f_12.f_66, &Var6, &Var7);
	iVar4 = SHAPETEST::START_SHAPE_TEST_BOX(Param0, Var7 - Var6, 0f, 0f, fParam1, 2, 90, iParam80, 4);
	while (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar10, &uVar8, &uVar9, &uVar5) == 1)
	{
		SYSTEM::WAIT(0);
	}
	if (iVar10 == 0)
	{
		return 1;
	}
	if (iVar10 == 1)
	{
		return 0;
	}
	return 0;
}

void func_788(int iParam0)//Position - 0x19D49
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_346())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { __LIB_0__::func_403(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		__LIB_38__::func_552(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_14__::func_633(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (__LIB_0__::func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (__LIB_14__::func_632())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		__LIB_0__::func_401(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

int func_789(var uParam0)//Position - 0x20C0C
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 192:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 75:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 95:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 280:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 76:
			if (Global_3)
			{
				if (__LIB_39__::func_21(uParam0, &fVar1))
				{
					return __LIB_38__::func_555(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 174:
			if (__LIB_39__::func_21(uParam0, &fVar1))
			{
				__LIB_13__::func_812(20, &uVar3, &iVar2);
				return __LIB_38__::func_555(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		case 231:
			if (__LIB_39__::func_21(uParam0, &fVar1))
			{
				__LIB_13__::func_812(15, &uVar5, &iVar4);
				return __LIB_38__::func_555(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (__LIB_3__::func_423(Global_1574629))
	{
		iVar6 = __LIB_0__::func_199(Global_1574629);
		iVar7 = __LIB_0__::func_198(Global_1574629);
		sVar8 = "";
		sVar9 = "";
		if (!__LIB_17__::func_679())
		{
			sVar8 = "SMOG";
		}
		if (__LIB_39__::func_20(&fVar1, 5f))
		{
			return __LIB_38__::func_555(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!__LIB_17__::func_679())
	{
	}
	return 0;
}

int func_790(var uParam0, int iParam1)//Position - 0x8518D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	struct<3> Var14;
	iVar0 = __LIB_0__::func_484(uParam0->f_61);
	if (PED::IS_PED_INJURED(uParam0->f_17[uParam0->f_61]))
	{
		if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[uParam0->f_61]))
			{
			}
			else
			{
				iVar1 = Global_113386.f_2363.f_539.f_2296[uParam0->f_61];
				if (!CAM::IS_SPHERE_VISIBLE(uParam0->f_4, 3f))
				{
				}
				else if (__LIB_3__::func_423(iVar1))
				{
					__LIB_38__::func_194(iVar1, &iVar2, &iVar3, &iVar4, &uVar5, &uVar6, &uVar7);
					fVar8 = -1f;
					if (__LIB_38__::func_556(iVar1, 3))
					{
						fVar8 = 1f;
					}
					else
					{
						fVar8 = (SYSTEM::TO_FLOAT(((iVar2 + iVar3 * 60) + iVar4 * 60 * 60)) / 3600f);
						if (fVar8 < 0f)
						{
							fVar8 = 0f;
						}
						if (fVar8 > 1f)
						{
							fVar8 = 1f;
						}
					}
					fVar9 = (((100f - 10f) * fVar8) + 10f);
					iVar10 = 0;
					while (iVar10 < 5)
					{
						GRAPHICS::DRAW_DEBUG_SPHERE(uParam0->f_4, fVar9, 255, 0, 0, 64);
						Var11 = { __LIB_14__::func_834(uParam0->f_4, fVar9, 0f) };
						Var12 = { Var11 };
						if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var11, false, &Var12, 16))
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var12, 3f))
							{
								fVar13 = 0f;
								if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var12, &fVar13, false, false))
								{
									GRAPHICS::DRAW_DEBUG_SPHERE(Var12, 0.5f, 255, 0, 255, 255);
									Var12.f_2 = fVar13;
									Var14 = { uParam0->f_4 - Var12 };
									uParam0->f_4 = { Var12 };
									uParam0->f_7 = MISC::GET_HEADING_FROM_VECTOR_2D(Var14.f_0, Var14.f_1);
									iVar10 = 99;
								}
							}
							else
							{
								GRAPHICS::DRAW_DEBUG_SPHERE(Var12, 0.5f, 255, 0, 255, 255);
							}
						}
						else
						{
							GRAPHICS::DRAW_DEBUG_SPHERE(Var11, 0.5f, 0, 255, 255, 255);
						}
						iVar10++;
					}
				}
			}
		}
		if (iParam1 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam0->f_4, false, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		return 1;
	}
	__LIB_37__::func_321(uParam0->f_17[uParam0->f_61], &(Global_99845[iVar0 /*98*/]), &(Global_100148[iVar0 /*3*/]), &(Global_100158[iVar0]), &(Global_100140[iVar0]), &(Global_4541522[iVar0]));
	return 0;
}

void func_791()//Position - 0xCC
{
	iLocal_54 = 0;
}

bool func_792()//Position - 0xD31
{
	return Global_1648034.f_112;
}

void func_793(bool bParam0, int iParam1)//Position - 0xEA2
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
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			iVar1 = __LIB_1__::func_14(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			break;
		default:
			iVar1 = __LIB_1__::func_14(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!BitTest(iVar0, bParam0))
			{
				MISC::SET_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			__LIB_0__::func_513(120, 0, iParam1, 1);
			__LIB_0__::func_513(124, 0, iParam1, 1);
			__LIB_0__::func_513(115, 0, iParam1, 1);
			__LIB_0__::func_513(119, 0, iParam1, 1);
			__LIB_0__::func_513(121, 0, iParam1, 1);
			__LIB_0__::func_513(122, 0, iParam1, 1);
			__LIB_0__::func_513(125, 0, iParam1, 1);
			__LIB_0__::func_413(1304, 0, iParam1, 1, 0);
			__LIB_0__::func_413(7236, 0, iParam1, 1, 0);
			break;
	}
}

int func_794(int iParam0, int iParam1, int iParam2)//Position - 0x14DC
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_39(14))
		{
			return 100;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 47;
					break;
				case 3:
					return 22;
					break;
				case 2:
					return 21;
					break;
				case 4:
					return 54;
					break;
				case 5:
					return 31;
					break;
				case 6:
					return 79;
					break;
				case 7:
					return 81;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 51;
					break;
				case 3:
					return 46;
					break;
				case 2:
					return 49;
					break;
				case 4:
					return 71;
					break;
				case 5:
					return 19;
					break;
				case 6:
					return 24;
					break;
				case 7:
					return 21;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				case 1:
					return 23;
					break;
				case 3:
					return 28;
					break;
				case 2:
					return 79;
					break;
				case 4:
					return 31;
					break;
				case 5:
					return 82;
					break;
				case 6:
					return 69;
					break;
				case 7:
					return 49;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					return __LIB_0__::func_369(1225, iParam2, 0);
					break;
				case 3:
					return __LIB_0__::func_369(1231, iParam2, 0);
					break;
				case 2:
					return __LIB_0__::func_369(1227, iParam2, 0);
					break;
				case 4:
					return __LIB_0__::func_369(1230, iParam2, 0);
					break;
				case 5:
					return __LIB_0__::func_369(1229, iParam2, 0);
					break;
				case 6:
					return __LIB_0__::func_369(1226, iParam2, 0);
					break;
				case 7:
					return __LIB_0__::func_369(1228, iParam2, 0);
					break;
			}
			break;
	}
	return 0;
}

int func_795(int iParam0)//Position - 0x17AA
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
			break;
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
			break;
	}
	return 0;
}

int func_796(int iParam0)//Position - 0x218D
{
	switch (iParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
			break;
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
			break;
		default:
			return 3;
			break;
	}
	return 3;
}

int func_797(int iParam0, int iParam1)//Position - 0x4E40
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_113386.f_20564[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_22[iVar0] > 0)
					{
						return Global_113386.f_20564.f_22[iVar0];
					}
				}
				break;
			case 1:
				if (Global_113386.f_20564.f_33[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_55[iVar0] > 0)
					{
						return Global_113386.f_20564.f_55[iVar0];
					}
				}
				break;
			case 2:
				if (Global_113386.f_20564.f_66[iVar0] == iParam1)
				{
					if (Global_113386.f_20564.f_88[iVar0] > 0)
					{
						return Global_113386.f_20564.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_798(int iParam0)//Position - 0x43F1
{
	switch (iParam0)
	{
		case 0:
			__LIB_39__::func_643(&Global_96909, 1);
			break;
		case 1:
			__LIB_39__::func_643(&Global_96911, 3);
			break;
		case 2:
			__LIB_39__::func_643(&Global_96915, 1);
			break;
		case 3:
			__LIB_39__::func_643(&Global_96917, 1);
			break;
		case 4:
			__LIB_39__::func_643(&Global_96919, 1);
			break;
		case 5:
			__LIB_39__::func_643(&Global_96921, 1);
			break;
		case 6:
			__LIB_39__::func_643(&Global_96923, 1);
			break;
		case 7:
			__LIB_39__::func_643(&Global_96925, 2);
			break;
		case 8:
			__LIB_39__::func_643(&Global_96928, 1);
			break;
		case 9:
			__LIB_39__::func_643(&Global_96930, 1);
			break;
	}
}

float func_799(int iParam0)//Position - 0x497
{
	int iVar0;
	float fVar1;
	iVar0 = iParam0;
	fVar1 = (Global_55453[iParam0 /*36*/].f_9 * __LIB_33__::func_456(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

void func_800(int iParam0)//Position - 0x19DF
{
	MISC::CLEAR_BIT(&uLocal_160, iParam0);
}

void func_801(int iParam0)//Position - 0x19F0
{
	MISC::SET_BIT(&uLocal_160, iParam0);
}

void func_802(int iParam0, int iParam1, int iParam2)//Position - 0x5967
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
	}
}

void func_803(int iParam0, int iParam1, int iParam2)//Position - 0x598C
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 11, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, iParam1, iParam2, 0);
	}
}

void func_804(int iParam0, int iParam1, int iParam2)//Position - 0x59B3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 8, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iParam1, iParam2, 0);
	}
}

void func_805(int iParam0, int iParam1, int iParam2)//Position - 0x5A7E
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 4, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, iParam1, iParam2, 0);
	}
}

void func_806(int iParam0, int iParam1, int iParam2)//Position - 0x5AA3
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 3, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, iParam1, iParam2, 0);
	}
}

void func_807(int iParam0, int iParam1, int iParam2)//Position - 0x5AC8
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 2, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, iParam1, iParam2, 0);
	}
}

void func_808(int iParam0, int iParam1, int iParam2)//Position - 0x5AED
{
	if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 0, iParam1, iParam2))
	{
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, iParam1, iParam2, 0);
	}
}

void func_809(int iParam0)//Position - 0x62C0
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::DESTROY_CAM(iParam0, false);
	}
}

int func_810(int iParam0)//Position - 0x6D981
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 1:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 2:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 3:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 4:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 5:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 6:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
		case 7:
			return SYSTEM::FLOOR((0.95f * 7500f));
			break;
	}
	return 0;
}

int func_811(int iParam0, bool bParam1)//Position - 0x6E2F3
{
	if (iParam0 == 0)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_01");
		}
		else
		{
			return joaat("S_F_Y_Stripper_01");
		}
	}
	else if (iParam0 == 1)
	{
		if (bParam1)
		{
			return joaat("CSB_Stripper_02");
		}
		else
		{
			return joaat("S_F_Y_Stripper_02");
		}
	}
	return 0;
}

int func_812()//Position - 0x6E366
{
	if (__LIB_0__::func_75() || Global_21605 != 0)
	{
		return 0;
	}
	return 1;
}

char* func_813(int iParam0)//Position - 0x6F9B5
{
	if (iParam0 == 0)
	{
		return "base";
	}
	if (iParam0 == 1)
	{
		return "idle_a";
	}
	if (iParam0 == 2)
	{
		return "idle_b";
	}
	return "idle_c";
}

char* func_814(int iParam0)//Position - 0x6F9F4
{
	if (iParam0 == 0)
	{
		return "mini@strip_club@idles@bouncer@base";
	}
	if (iParam0 == 1)
	{
		return "mini@strip_club@idles@bouncer@idle_a";
	}
	if (iParam0 == 2)
	{
		return "mini@strip_club@idles@bouncer@idle_b";
	}
	return "mini@strip_club@idles@bouncer@idle_c";
}

bool func_815(int iParam0)//Position - 0x70AF5
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), 128.7f, -1298.22f, 29.31f) < 9f;
}

void func_816(int iParam0)//Position - 0x74123
{
	iLocal_167 = iParam0;
}

int func_817()//Position - 0x762F3
{
	return iLocal_103;
}

bool func_818(int iParam0)//Position - 0x772DA
{
	return BitTest(uLocal_160, iParam0);
}

int func_819()//Position - 0x79668
{
	return joaat("WEAPON_PISTOL");
}

void func_820(bool bParam0)//Position - 0x7AC17
{
	if (bParam0)
	{
		Global_112408 = 0;
	}
	else
	{
		Global_112408 = 1;
	}
}

bool func_821()//Position - 0x7B082
{
	return __LIB_0__::func_703(Global_112411, 128);
}

int func_822()//Position - 0x7F8B9
{
	if (__LIB_13__::func_94())
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(__LIB_15__::func_804()) && !__LIB_37__::func_608()) && !__LIB_0__::func_217())
		{
			return 1;
		}
	}
	return 0;
}

bool func_823()//Position - 0x73789
{
	return __LIB_0__::func_703(Global_112411, 16);
}

bool func_824()//Position - 0x7A08B
{
	return __LIB_0__::func_703(Global_112411, 4);
}

bool func_825()//Position - 0x7F897
{
	return __LIB_0__::func_426(4);
}

void func_826(bool bParam0)//Position - 0x1AB7
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 4);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 4);
	}
}

void func_827(int iParam0)//Position - 0x7B64E
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_346())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { __LIB_0__::func_403(iParam0) };
	if (BitTest(Var0.f_4, 2))
	{
		__LIB_0__::func_726(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
	if ((BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] == 2) && fVar4 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
		Global_38430[iParam0] = 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning")) == 0)
	{
		if (BitTest(Global_38657[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_100493.f_373 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_100493.f_373 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_100493.f_373;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
					Global_38884[iParam0] = 3;
					MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_38884[iParam0];
	}
	else if (BitTest(Var0.f_4, 0))
	{
		if (Global_113386.f_9085)
		{
			iVar3 = __LIB_37__::func_683(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (__LIB_0__::func_39(14))
		{
			iVar3 = 0;
		}
	}
	else if (BitTest(Var0.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon")) == 0)
	{
		if (__LIB_37__::func_541())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_113386.f_7261[iParam0];
	}
	if (Global_39111[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (BitTest(Global_38412[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0] == 0 && Global_38884[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_38411)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
			}
			switch (iVar3)
			{
				case 1:
					if (BitTest(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
						bVar2 = true;
					}
					break;
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
					bVar2 = true;
					break;
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar3, false, true);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
			Global_39111[iParam0] = iVar3;
		}
	}
	if (BitTest(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
		__LIB_0__::func_401(iParam0);
		if (Global_38430[iParam0] < 2)
		{
			Global_38430[iParam0]++;
		}
	}
}

int func_828(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23C4
{
	__LIB_0__::func_376(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return __LIB_37__::func_687(sParam2, iParam3, 0);
}

void func_829(int iParam0)//Position - 0x58B2F
{
	int iVar0;
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	STATS::STAT_SET_INT(iParam0, iVar0 + 1, true);
}

void func_830(int iParam0)//Position - 0x58B4D
{
	iLocal_77 = (iLocal_77 + iParam0);
	iLocal_79 = 1;
}

struct<6> func_831(int iParam0)//Position - 0x5A4D5
{
	struct<6> Var0;
	if (iParam0 == 2)
	{
		StringCopy(&Var0, "BLIP_170" /* GXT: Trevor */, 24);
	}
	else if (iParam0 == 0)
	{
		StringCopy(&Var0, "BLIP_MICHAEL" /* GXT: Michael */, 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(&Var0, "BLIP_FRANKLIN" /* GXT: Franklin */, 24);
	}
	else if (iParam0 == 19)
	{
		StringCopy(&Var0, "BLIP_172" /* GXT: Lamar */, 24);
	}
	else if (iParam0 == 14)
	{
		StringCopy(&Var0, "BLIP_33" /* GXT: Jimmy */, 24);
	}
	return Var0;
}

struct<4> func_832(int iParam0)//Position - 0x5A565
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_NM_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_833(int iParam0, bool bParam1)//Position - 0x5A852
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "one_player";
			}
			else
			{
				return "one_bartender";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "two_player";
			}
			else
			{
				return "two_bartender";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "three_player";
			}
			else
			{
				return "three_bartender";
			}
			break;
		case 3:
			if (bParam1)
			{
				return "four_player";
			}
			else
			{
				return "four_bartender";
			}
			break;
		case 4:
			return "idle_a_bartender";
			break;
		default:
			break;
	}
	return "";
}

int func_834(char* sParam0, int iParam1)//Position - 0x5A955
{
	if (__LIB_5__::func_831(sParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_835(char* sParam0)//Position - 0x5A96D
{
	if (__LIB_0__::func_1(sParam0))
	{
		return 1;
	}
	if (__LIB_13__::func_101(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_836()//Position - 0x5AB12
{
	return (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("maintransition")) > 0 || Global_23011.f_11);
}

Vector3 func_837()//Position - 0x5B5D3
{
	switch (iLocal_82)
	{
		case 0:
			return 127.16f, -1283.59f, 29.27f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_838()//Position - 0x5BBF8
{
	return __LIB_4__::func_850(PLAYER::PLAYER_PED_ID());
}

int func_839()//Position - 0x57113
{
	if (__LIB_16__::func_610())
	{
		return 1;
	}
	return 0;
}

void func_840(char* sParam0, int iParam1)//Position - 0x59D0C
{
	if (__LIB_5__::func_831(sParam0, iParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_841(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x5A494
{
	if (__LIB_13__::func_101(sParam0))
	{
		__LIB_13__::func_311(sParam0, 0);
	}
	if (__LIB_3__::func_56(sParam0, &sParam1))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_842()//Position - 0x5AF1A
{
	if (__LIB_0__::func_217() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	return 0;
}

char* func_843(int iParam0)//Position - 0x5B426
{
	if (!__LIB_7__::func_685(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
	{
		switch (iParam0)
		{
			case 0:
				return "mini@strip_club@drink@one";
				break;
			case 1:
				return "mini@strip_club@drink@two";
				break;
			case 2:
				return "mini@strip_club@drink@three";
				break;
			case 3:
				return "mini@strip_club@drink@four";
				break;
			case 4:
				return "mini@strip_club@drink@idle_a";
				break;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "anim@mini@yacht@bar@drink@one";
				break;
			case 1:
				return "anim@mini@yacht@bar@drink@two";
				break;
			case 2:
				return "anim@mini@yacht@bar@drink@three";
				break;
			case 3:
				return "anim@mini@yacht@bar@drink@four";
				break;
			case 4:
				return "anim@mini@yacht@bar@drink@idle_a";
				break;
			default:
				break;
			}
	}
	return "";
}

void func_844(char* sParam0)//Position - 0x59D3D
{
	if (__LIB_13__::func_101(sParam0))
	{
		__LIB_13__::func_311(sParam0, 1);
	}
	if (__LIB_0__::func_1(sParam0))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_845()//Position - 0x5BC2A
{
	if (__LIB_0__::func_683() == 2)
	{
		return 1;
	}
	return 0;
}

int func_846(int iParam0)//Position - 0x58B5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
	{
		return 0;
	}
	if (!__LIB_0__::func_438())
	{
		return 0;
	}
	iVar2 = __LIB_0__::func_369(757, -1, 0);
	MISC::SET_BIT(&iVar2, iParam0);
	__LIB_0__::func_413(757, iVar2, -1, 1, 0);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (__LIB_1__::func_205(iVar2, iVar0, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 9)
	{
		__LIB_0__::func_746(45, 1);
	}
	return 1;
}

Vector3 func_847()//Position - 0x4ADC
{
	return 127.96f, -1298.51f, 29.42f;
}

void func_848(int iParam0)//Position - 0x54A0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_106[iVar0]) && (iParam0 == iVar0 || iParam0 < 0))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_106[iVar0]));
		}
		iVar0++;
	}
}

bool func_849(var uParam0)//Position - 0x5AAE
{
	return BitTest(*uParam0, 6);
}

void func_850()//Position - 0x607D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_110[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_110[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_110[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_110[1]));
	}
}

int func_851(int iParam0)//Position - 0x6123
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
	}
	return -1;
}

void func_852()//Position - 0x7007
{
	PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

char* func_853(int iParam0, bool bParam1)//Position - 0x704C
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "enter_female";
			}
			else
			{
				return "enter";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "exit_female";
			}
			else
			{
				return "exit";
			}
			break;
		case 3:
			return "toss_full";
			break;
		case 2:
			if (bParam1)
			{
				return "toss_female";
			}
			else
			{
				return "toss";
			}
			break;
		case 5:
			if (bParam1)
			{
				return "base_female";
			}
			else
			{
				return "base";
			}
			break;
		default:
			break;
	}
	return "";
}

char* func_854(int iParam0)//Position - 0x70EE
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@leaning@enter";
			break;
		case 1:
			return "mini@strip_club@leaning@exit";
			break;
		case 2:
		case 3:
			return "mini@strip_club@leaning@toss";
			break;
		case 4:
			return "mini@strip_club@leaning@toss_many";
			break;
		case 5:
			return "mini@strip_club@leaning@base";
			break;
		default:
			break;
	}
	return "";
}

struct<4> func_855(int iParam0)//Position - 0x8690
{
	struct<4> Var0;
	StringCopy(&Var0, "SCLUB_METER_", 16);
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_856(bool bParam0)//Position - 0x90E0
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_decline";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_decline";
}

char* func_857(bool bParam0)//Position - 0x90FB
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_accept";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_accept";
}

char* func_858(bool bParam0)//Position - 0x9116
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_wait";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_wait";
}

char* func_859(bool bParam0)//Position - 0x9131
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_reach";
	}
	return "mini@strip_club@lap_dance@ld_reach";
}

int func_860(int iParam0, bool bParam1, bool bParam2)//Position - 0x91D6
{
	if (bParam2)
	{
		return joaat("MP_F_StripperLite");
	}
	switch (iParam0)
	{
		case 0:
			return __LIB_39__::func_811(0, bParam1);
			break;
		case 1:
			return __LIB_39__::func_811(1, bParam1);
			break;
		case 2:
			return __LIB_39__::func_811(0, bParam1);
			break;
		case 3:
			return __LIB_39__::func_811(1, bParam1);
			break;
		case 4:
			return __LIB_39__::func_811(0, bParam1);
			break;
		case 5:
			return __LIB_39__::func_811(1, bParam1);
			break;
		case 6:
			return __LIB_39__::func_811(0, bParam1);
			break;
		case 7:
			return __LIB_39__::func_811(1, bParam1);
			break;
	}
	return __LIB_39__::func_811(0, bParam1);
}

Vector3 func_861(bool bParam0)//Position - 0x990F
{
	if (bParam0)
	{
		return 116.9946f, -1300.2452f, 28.019f;
	}
	return 114.529f, -1297.4677f, 28.2688f;
}

Vector3 func_862(int iParam0)//Position - 0x9F52
{
	if (iParam0 == 0)
	{
		return 114.1263f, -1296.7617f, 28.2689f;
	}
	else if (iParam0 == 1)
	{
		return 121.3242f, -1292.9474f, 28.2791f;
	}
	else if (iParam0 == 2)
	{
		return 119.43f, -1289.14f, 27.26f;
	}
	else if (iParam0 == 3)
	{
		return 110.6793f, -1298.3816f, 28.2688f;
	}
	return 0f, 0f, 0f;
}

char* func_863(bool bParam0, bool bParam1)//Position - 0xA027
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_exit";
	}
	if (bParam1)
	{
		return "mini@strip_club@lap_dance@ld_girl_a_decline_alt";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_exit";
}

char* func_864(int iParam0, bool bParam1)//Position - 0xA051
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p1";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p1";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p2";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p2";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "mini@strip_club@lap_dance_2g@ld_2g_p3";
			}
			else
			{
				return "mini@strip_club@lap_dance@ld_girl_a_song_a_p3";
			}
			break;
	}
	return "";
}

char* func_865(int iParam0, bool bParam1)//Position - 0xA269
{
	if (bParam1)
	{
		return "ld_2g_sit_idle";
	}
	if (iParam0 == 1)
	{
		return "ld_girl_a_song_a_p2_no_touch_m";
	}
	if (iParam0 == 2)
	{
		return "ld_girl_a_song_a_p3_no_touch_m";
	}
	return "ld_sit_idle";
}

char* func_866(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA38B
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_approach_m";
				}
				else
				{
					return "ld_girl_a_approach_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_approach_s1";
				}
				else
				{
					return "ld_2g_approach_s2";
				}
			}
			else
			{
				return "ld_girl_a_approach_f";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_intro_m";
				}
				else
				{
					return "ld_girl_a_intro_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_intro_s1";
				}
				else
				{
					return "ld_2g_intro_s2";
				}
			}
			else
			{
				return "ld_girl_a_intro_f";
			}
			break;
		case 3:
			if (bParam2)
			{
				return "ld_2g_sit_reach_enter";
			}
			else
			{
				return "ld_sit_reach_enter";
			}
			break;
		case 4:
			if (bParam2)
			{
				return "ld_2g_sit_reach_exit";
			}
			else
			{
				return "ld_sit_reach_exit";
			}
			break;
		case 6:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_wait_m";
				}
				else
				{
					return "ld_girl_a_wait_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_wait_s1";
				}
				else
				{
					return "ld_2g_wait_s2";
				}
			}
			else
			{
				return "ld_girl_a_wait_f";
			}
			break;
		case 7:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_accept_m";
				}
				else
				{
					return "ld_girl_a_accept_m";
				}
			}
			else if (bParam2)
			{
				if (bParam3)
				{
					return "ld_2g_accept_s1";
				}
				else
				{
					return "ld_2g_accept_s2";
				}
			}
			else
			{
				return "ld_girl_a_accept_f";
			}
			break;
		case 8:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_decline_m";
				}
				else
				{
					return "ld_girl_a_decline_m";
				}
			}
			else if (bParam2)
			{
				if (bParam4)
				{
					if (bParam3)
					{
						return "ld_2g_decline_h_s1";
					}
					else
					{
						return "ld_2g_decline_h_s2";
					}
				}
				else if (bParam3)
				{
					return "ld_2g_decline_s1";
				}
				else
				{
					return "ld_2g_decline_s2";
				}
			}
			else if (bParam4)
			{
				return "ld_girl_a_decline_h_f";
			}
			else
			{
				return "ld_girl_a_decline_f";
			}
			break;
		default:
			break;
	}
	return "";
}

char* func_867(int iParam0, bool bParam1)//Position - 0xA960
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "ld_2g_approach_cam";
			}
			else
			{
				return "ld_girl_a_approach_cam";
			}
			break;
		case 1:
			if (bParam1)
			{
				return "ld_2g_intro_cam";
			}
			else
			{
				return "ld_girl_a_intro_cam";
			}
			break;
		case 6:
			if (bParam1)
			{
				return "ld_2g_wait_cam";
			}
			else
			{
				return "ld_girl_a_wait_cam";
			}
			break;
		case 7:
			if (bParam1)
			{
				return "ld_2g_accept_cam";
			}
			else
			{
				return "ld_girl_a_accept_cam";
			}
			break;
		case 8:
			if (bParam1)
			{
				return "ld_2g_decline_cam";
			}
			else
			{
				return "ld_girl_a_decline_cam";
			}
			break;
	}
	return "";
}

int func_868(int iParam0)//Position - 0xB133
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 2:
			return 2;
			break;
		case 1:
			return 1;
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 3;
			break;
	}
	return 4;
}

int func_869(int iParam0)//Position - 0xB6BA
{
	switch (iParam0)
	{
		case 0:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 1:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 2:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 3:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 4:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 5:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 6:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
		case 7:
			return SYSTEM::FLOOR((0.7f * 7500f));
			break;
	}
	return 0;
}

char* func_870(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x75EFD
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_approach_s2_face";
				}
				else
				{
					return "ld_2g_approach_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_approach_f_face";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_intro_s2_face";
				}
				else
				{
					return "ld_2g_intro_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_intro_f_face";
			}
			break;
		case 5:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_exit_s2_face";
				}
				else
				{
					return "ld_2g_exit_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_exit_f_face";
			}
			break;
		case 6:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_wait_s2_face";
				}
				else
				{
					return "ld_2g_wait_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_wait_f_face";
			}
			break;
		case 7:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_accept_s2_face";
				}
				else
				{
					return "ld_2g_accept_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_accept_f_face";
			}
			break;
		case 8:
			if (bParam1)
			{
				if (bParam2)
				{
					if (bParam3)
					{
						return "ld_2g_decline_h_s2_face";
					}
					else
					{
						return "ld_2g_decline_s2_face";
					}
				}
				else if (bParam3)
				{
					return "ld_2g_decline_h_s1_face";
				}
				else
				{
					return "ld_2g_decline_s1_face";
				}
			}
			else if (bParam3)
			{
				return "ld_girl_a_decline_h_f_face";
			}
			else
			{
				return "ld_girl_a_decline_f_face";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_871()//Position - 0x76314
{
	iLocal_151 = MISC::GET_GAME_TIMER() + 3000;
}

void func_872()//Position - 0x798E2
{
	iLocal_76++;
	iLocal_79 = 1;
}

char* func_873(bool bParam0, bool bParam1)//Position - 0x7A7F4
{
	if (bParam0)
	{
		return "ld_2g_exit_cam";
	}
	if (bParam1)
	{
		return "ld_girl_a_decline_alt_cam";
	}
	return "ld_girl_a_exit_cam";
}

char* func_874(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7A821
{
	if (bParam0)
	{
		if (bParam1)
		{
			return "ld_2g_exit_m";
		}
		else if (bParam3)
		{
			return "ld_girl_a_decline_alt_m";
		}
		else
		{
			return "ld_girl_a_exit_m";
		}
	}
	if (bParam1)
	{
		if (bParam2)
		{
			return "ld_2g_exit_s1";
		}
		else
		{
			return "ld_2g_exit_s2";
		}
	}
	if (bParam3)
	{
		return "ld_girl_a_decline_alt_f";
	}
	return "ld_girl_a_exit_f";
}

int func_875(int iParam0)//Position - 0x7A9F2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
			return 1;
			break;
		case 2:
		case 3:
		case 6:
		case 7:
			return 0;
			break;
		case 8:
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_876()//Position - 0x7B340
{
	if (CAM::DOES_CAM_EXIST(Local_122.f_0))
	{
		CAM::DETACH_CAM(Local_122.f_0);
		Local_122.f_1 = { Local_204 + Vector(0.066f, 0.0107f, -0.1052f) };
		Local_122.f_4 = 15f;
		Local_122.f_4.f_2 = __LIB_0__::func_932(CAM::GET_CAM_COORD(Local_122.f_0), ENTITY::GET_ENTITY_COORDS(Local_89[iLocal_136 /*11*/], true));
	}
}

Vector3 func_877()//Position - 0x7B9A5
{
	return 116.2204f, -1297.7778f, 28.0192f;
}

char* func_878(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x7BA70
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p1_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p1_s1";
				}
				else
				{
					return "ld_2g_p1_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p1_m";
			}
			else
			{
				return "ld_girl_a_song_a_p1_f";
			}
			break;
		case 1:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p2_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p2_s1";
				}
				else
				{
					return "ld_2g_p2_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p2_m";
			}
			else
			{
				return "ld_girl_a_song_a_p2_f";
			}
			break;
		case 2:
			if (bParam2)
			{
				if (bParam1)
				{
					return "ld_2g_p3_m";
				}
				else if (bParam3)
				{
					return "ld_2g_p3_s1";
				}
				else
				{
					return "ld_2g_p3_s2";
				}
			}
			else if (bParam1)
			{
				return "ld_girl_a_song_a_p3_m";
			}
			else
			{
				return "ld_girl_a_song_a_p3_f";
			}
			break;
		default:
			break;
	}
	return "";
}

int func_879()//Position - 0x7BB94
{
	if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
	{
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_880(int iParam0, int iParam1)//Position - 0x7BCD6
{
	int iVar0;
	iVar0 = 1500;
	PED::SET_IK_TARGET(PLAYER::PLAYER_PED_ID(), 1, Local_89[iParam0 /*11*/], iParam1, 0f, 0f, 0f, 0, iVar0, iVar0);
}

char* func_881(bool bParam0)//Position - 0x7BDC1
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_intro";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_intro";
}

char* func_882(bool bParam0)//Position - 0x7BDDE
{
	if (bParam0)
	{
		return "mini@strip_club@lap_dance_2g@ld_2g_approach";
	}
	return "mini@strip_club@lap_dance@ld_girl_a_approach";
}

void func_883()//Position - 0x7BEC2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 < 0)
		{
			Global_96906[iVar0] = Global_96906[iVar0 + 1];
		}
		else
		{
			Global_96906[iVar0] = MISC::GET_GAME_TIMER();
		}
		iVar0++;
	}
}

char* func_884(int iParam0, bool bParam1, bool bParam2)//Position - 0x7C0AF
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p1_s2_face";
				}
				else
				{
					return "ld_2g_p1_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p1_f_face";
			}
			break;
		case 1:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p2_s2_face";
				}
				else
				{
					return "ld_2g_p2_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p2_f_face";
			}
			break;
		case 2:
			if (bParam1)
			{
				if (bParam2)
				{
					return "ld_2g_p3_s2_face";
				}
				else
				{
					return "ld_2g_p3_s1_face";
				}
			}
			else
			{
				return "ld_girl_a_song_a_p3_f_face";
			}
			break;
	}
	return "";
}

void func_885(int iParam0, struct<3> Param1, struct<3> Param2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x7C6F6
{
	iParam0->f_1 = { Param1 };
	iParam0->f_4 = { Param2 };
	iParam0->f_7 = uParam3;
	iParam0->f_20 = iParam4;
	iParam0->f_21 = iParam5;
	iParam0->f_22 = iParam6;
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_11 = { 0f, 0f, 0f };
	iParam0->f_14 = { 0f, 0f, 0f };
	iParam0->f_17 = uParam3;
	iParam0->f_18 = uParam3;
	iParam0->f_23 = iParam8;
	iParam0->f_19 = fParam7;
	*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*iParam0, true);
	CAM::SET_CAM_PARAMS(*iParam0, iParam0->f_1, iParam0->f_4, iParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*iParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*iParam0, fParam10);
	}
	if (iParam0->f_23)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	iParam0->f_29 = 0f;
	iParam0->f_30 = 0f;
	iParam0->f_26 = 0;
	iParam0->f_28 = 0;
	iParam0->f_27 = 0;
}

Vector3 func_886(int iParam0, int iParam1, bool bParam2)//Position - 0x7C889
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return 0.04f, 1.58f, 1.419f;
				}
				else
				{
					return -1f, 1.18f, -0.28f;
				}
				break;
		}
	}
	else if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return 1.1f, 1.82f, 0.82f;
				}
				else
				{
					return 0.72f, 1.36f, 0.56f;
				}
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 0:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 1:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 2:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 3:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 4:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 5:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			case 6:
				if (bParam2)
				{
					return -0.943f, -0.91f, 0.688f;
				}
				else
				{
					return -0.79f, -0.85f, 0.597f;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

float func_887(int iParam0)//Position - 0x7CCFE
{
	switch (iParam0)
	{
		case 0:
			return (20.8127f + 180f);
			break;
		case 1:
			return 20.8127f;
			break;
		case 2:
			return 20.8127f;
			break;
		case 3:
			return (20.8127f + 180f);
			break;
		case 4:
			return (20.8127f + 180f);
			break;
		case 5:
			return 20.8127f;
			break;
		case 6:
			return 20.8127f;
			break;
	}
	return (20.8127f + 180f);
}

Vector3 func_888(int iParam0)//Position - 0x7CDA1
{
	switch (iParam0)
	{
		case 0:
			return 114.29f, -1299.73f, 28.72f;
			break;
		case 1:
			return 116.9f, -1303.81f, 28.72f;
			break;
		case 2:
			return 114.83f, -1304.97f, 28.72f;
			break;
		case 3:
			return 112.42f, -1300.88f, 28.72f;
			break;
		case 4:
			return 110.67f, -1301.9f, 28.72f;
			break;
		case 5:
			return 113.08f, -1306.12f, 28.72f;
			break;
		case 6:
			return 119.14f, -1302.68f, 28.72f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_889(int iParam0, int iParam1, int iParam2)//Position - 0x7D171
{
	uLocal_91[iParam2] = Local_89[iParam0 /*11*/].f_1;
	uLocal_187[iParam2] = iParam1;
}

char* func_890(int iParam0)//Position - 0x7D413
{
	switch (iParam0)
	{
		case 1:
		case 0:
			return "base";
			break;
		case 3:
			return "side_enter";
			break;
		case 4:
			return "side_exit";
			break;
		case 2:
			return "stop";
			break;
		case 5:
			return "go_away";
			break;
	}
	return "";
}

char* func_891()//Position - 0x7D480
{
	return "mini@strip_club@idles@bouncer@go_away";
}

float func_892()//Position - 0x7D50C
{
	return 130.0314f;
}

Vector3 func_893()//Position - 0x7D54C
{
	return 118.4887f, -1300.0215f, 28.0194f;
}

void func_894()//Position - 0x7DC4C
{
	MISC::CLEAR_AREA_OF_OBJECTS(116.62639f, -1294.9115f, 28.270168f, 1.5f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(116.62639f, -1294.9115f, 28.270168f, 1.5f, false, false, false, false, false, false, 0);
}

bool func_895()//Position - 0x7E642
{
	return PED::IS_ANY_PED_SHOOTING_IN_AREA(137.6174f, -1271.6357f, 28.1323f, 96.3833f, -1322.4016f, 28.2919f, false, false);
}

int func_896()//Position - 0x7E66E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 118.21f, -1300.93f, 28.02f, 113.97f, -1293.97f, 28.27f, 1.5f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 118.8f, -1299.83f, 28.02f, 110.83f, -1304.35f, 28.02f, 6f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_897(int iParam0)//Position - 0x7E93C
{
	return __LIB_0__::func_703(uLocal_100, iParam0);
}

void func_898()//Position - 0x7EBA8
{
	iLocal_141++;
}

void func_899()//Position - 0x7EBFB
{
	MISC::CLEAR_AREA_OF_PEDS(116.484f, -1302.986f, 29f, 2f, 0);
}

Vector3 func_900()//Position - 0x7EDAD
{
	return 117.27327f, -1294.7175f, 28.27479f;
}

int func_901()//Position - 0x7EDC4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 < 28.4f)
		{
			return 0;
		}
		return SYSTEM::VDIST2(Var0, 117.155f, -1294.798f, 29.269f) < (0.84f * 0.84f);
	}
	return 0;
}

char* func_902()//Position - 0x7F566
{
	return "mini@strip_club@pole_dance@stage_exit";
}

char* func_903()//Position - 0x7F573
{
	return "mini@strip_club@pole_dance@stage_enter";
}

char* func_904()//Position - 0x7F580
{
	return "mini@strip_club@pole_dance@pole_exit";
}

char* func_905()//Position - 0x7F58D
{
	return "mini@strip_club@pole_dance@pole_enter";
}

char* func_906(int iParam0)//Position - 0x7F59A
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_A";
			break;
		case 1:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_B";
			break;
		case 2:
			return "mini@strip_club@pole_dance@Pole_C_2_PrvD_C";
			break;
	}
	return "";
}

char* func_907(int iParam0)//Position - 0x7F5E0
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@pole_c_2_stage";
			break;
		case 1:
			return "mini@strip_club@pole_dance@pole_b_2_stage";
			break;
		case 2:
			return "mini@strip_club@pole_dance@pole_a_2_stage";
			break;
	}
	return "";
}

char* func_908(int iParam0)//Position - 0x7F626
{
	switch (iParam0)
	{
		case 0:
			return "mini@strip_club@pole_dance@stage_2_pole_c";
			break;
		case 1:
			return "mini@strip_club@pole_dance@stage_2_pole_b";
			break;
		case 2:
			return "mini@strip_club@pole_dance@stage_2_pole_a";
			break;
	}
	return "";
}

char* func_909(int iParam0)//Position - 0x7F66C
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@pole_dance@pole_dance1";
			break;
		case 2:
			return "mini@strip_club@pole_dance@pole_dance2";
			break;
		case 3:
			return "mini@strip_club@pole_dance@pole_dance3";
			break;
	}
	return "";
}

char* func_910()//Position - 0x7F6CA
{
	return "mini@strip_club@idles@stripper";
}

char* func_911()//Position - 0x7FE93
{
	return "mini@strip_club@idles@bouncer@side_exit";
}

char* func_912()//Position - 0x7FEA0
{
	return "mini@strip_club@idles@bouncer@side_enter";
}

char* func_913()//Position - 0x7FEAD
{
	return "mini@strip_club@idles@bouncer@stop";
}

int func_914(int iParam0)//Position - 0x7FEBA
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_814(0), __LIB_39__::func_813(0), 3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_814(1), __LIB_39__::func_813(1), 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_814(2), __LIB_39__::func_813(2), 3))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_814(3), __LIB_39__::func_813(3), 3))
	{
		return 3;
	}
	return -1;
}

float func_915(int iParam0)//Position - 0x7FF23
{
	switch (iParam0)
	{
		case 0:
			return 35.2391f;
			break;
		case 2:
			return 116.99f;
			break;
		case 3:
			return 129.69f;
			break;
	}
	return 0f;
}

int func_916()//Position - 0x802AB
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 113.24f, -1297.15f, 28.27f, 107.37f, -1300.99f, 27.77f, 4.13f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 103.71f, -1299.99f, 27.77f, 100.05f, -1293.64f, 28.27f, 2.87f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 104.89f, -1299.19f, 27.77f, 109.28f, -1306.68f, 27.77f, 5.76f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_917()//Position - 0x8043C
{
	iLocal_140 = __LIB_0__::func_138(iLocal_140 + 1 < 30, iLocal_140 + 1, 0);
}

Vector3 func_918(int iParam0)//Position - 0x80586
{
	switch (iParam0)
	{
		case 0:
			return 118.51906f, -1281.4622f, 27.72217f;
			break;
		case 1:
			return 119.51733f, -1283.4725f, 27.72217f;
			break;
		case 2:
			return 121.30746f, -1283.9093f, 27.72217f;
			break;
		case 3:
			return 122.12188f, -1285.2399f, 27.72217f;
			break;
		case 4:
			return 122.81584f, -1286.487f, 27.72217f;
			break;
		case 5:
			return 123.58376f, -1287.4509f, 27.72217f;
			break;
		case 6:
			return 123.82587f, -1288.7689f, 27.72217f;
			break;
		case 7:
			return 112.90668f, -1293.3568f, 27.72217f;
			break;
		case 8:
			return 110.34463f, -1294.934f, 27.72217f;
			break;
		case 9:
			return 109.23676f, -1295.4808f, 27.72217f;
			break;
		case 10:
			return 106.67527f, -1297.0493f, 27.72217f;
			break;
		case 11:
			return 107.08104f, -1282.8727f, 27.72217f;
			break;
		case 12:
			return 104.80939f, -1284.1366f, 27.72217f;
			break;
		case 13:
			return 103.31277f, -1285.018f, 27.72217f;
			break;
		case 14:
			return 101.16519f, -1286.2114f, 27.72217f;
			break;
		case 15:
			return 113.74977f, -1283.025f, 27.72217f;
			break;
		case 16:
			return 115.05013f, -1284.7708f, 27.72217f;
			break;
		case 17:
			return 116.00701f, -1286.5315f, 27.72217f;
			break;
		case 18:
			return 116.70783f, -1288.5795f, 27.72217f;
			break;
		case 19:
			return 103.5546f, -1287.3937f, 28.26099f;
			break;
		case 20:
			return 104.90012f, -1288.0212f, 27.72693f;
			break;
		case 21:
			return 106.85392f, -1286.8373f, 27.72693f;
			break;
		case 22:
			return 108.48473f, -1285.9154f, 27.72693f;
			break;
		case 23:
			return 110.53699f, -1284.5789f, 28.26099f;
			break;
		case 24:
			return 111.46305f, -1283.9565f, 28.26592f;
			break;
		case 25:
			return 113.83677f, -1290.3102f, 28.26099f;
			break;
		case 26:
			return 111.35435f, -1291.0565f, 27.78339f;
			break;
		case 27:
			return 110.08369f, -1291.5956f, 27.72693f;
			break;
		case 28:
			return 108.99257f, -1292.2212f, 27.72693f;
			break;
		case 29:
			return 108.35011f, -1293.6873f, 28.26099f;
			break;
	}
	return 0f, 0f, 0f;
}

char* func_919(int iParam0)//Position - 0x80B49
{
	switch (iParam0)
	{
		case 1:
			return "idle_01";
			break;
		case 2:
			return "idle_02";
			break;
		case 3:
			return "idle_03";
			break;
		case 4:
			return "idle_04";
			break;
		case 5:
			return "idle_05";
			break;
		default:
			break;
	}
	return "";
}

char* func_920(int iParam0)//Position - 0x80BCE
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@idles@dj@idle_01";
			break;
		case 2:
			return "mini@strip_club@idles@dj@idle_02";
			break;
		case 3:
			return "mini@strip_club@idles@dj@idle_03";
			break;
		case 4:
			return "mini@strip_club@idles@dj@idle_04";
			break;
		case 5:
			return "mini@strip_club@idles@dj@idle_05";
			break;
		default:
			break;
	}
	return "";
}

char* func_921()//Position - 0x80F95
{
	return "stripclub_drinking";
}

char* func_922(int iParam0, bool bParam1)//Position - 0x81559
{
	switch (iParam0)
	{
		case 0:
			return "Juliet";
			break;
		case 1:
			if (bParam1)
			{
				return "NIKKI_MP";
			}
			else
			{
				return "Nikki";
			}
			break;
		case 2:
			if (bParam1)
			{
				return "CHASTITY_MP";
			}
			else
			{
				return "Chastity";
			}
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
			if (bParam1)
			{
				return "FUFU_MP";
			}
			else
			{
				return "Fufu";
			}
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

int func_923(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, float fParam5, int iParam6, bool bParam7)//Position - 0x82C5C
{
	if (bParam7)
	{
		TASK::TASK_PLAY_ANIM(iParam0, sParam3, sParam4, 4f, -4f, -1, iParam6, 0f, false, 25, false);
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2) >= fParam5)
		{
			TASK::TASK_PLAY_ANIM(iParam0, sParam3, sParam4, 4f, -4f, -1, iParam6, 0f, false, 25, false);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_924()//Position - 0x82EAD
{
	return "mini@strip_club@private_dance@exit";
}

char* func_925(int iParam0)//Position - 0x82EBA
{
	switch (iParam0)
	{
		case 1:
			return "mini@strip_club@private_dance@part1";
			break;
		case 2:
			return "mini@strip_club@private_dance@part2";
			break;
		case 3:
			return "mini@strip_club@private_dance@part3";
			break;
	}
	return "";
}

char* func_926()//Position - 0x82F00
{
	return "mini@strip_club@private_dance@idle";
}

char* func_927(int iParam0)//Position - 0x82F0D
{
	switch (iParam0)
	{
		case 0:
			return "Pole_C_2_PrvD_A";
			break;
		case 1:
			return "Pole_C_2_PrvD_B";
			break;
		case 2:
			return "Pole_C_2_PrvD_C";
			break;
	}
	return "";
}

char* func_928(int iParam0)//Position - 0x8304E
{
	switch (iParam0)
	{
		case 1:
			return "pd_dance_01";
			break;
		case 2:
			return "pd_dance_02";
			break;
		case 3:
			return "pd_dance_03";
			break;
	}
	return "";
}

Vector3 func_929(int iParam0)//Position - 0x83094
{
	if (iParam0 == 0)
	{
		return 0.26f, 0.12f, -0.89f;
	}
	else if (iParam0 == 1)
	{
		return -8.16f, -7.11f, -0.092f;
	}
	else if (iParam0 == 2)
	{
		return -10.1f, -3.75f, -0.092f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_930(int iParam0)//Position - 0x8311F
{
	if (iParam0 == 0)
	{
		return -0.119f, 0.407f, -0.89f;
	}
	else if (iParam0 == 1)
	{
		return -8.54f, -6.83f, -0.092f;
	}
	else if (iParam0 == 2)
	{
		return -10.48f, -3.47f, -0.092f;
	}
	return 0f, 0f, 0f;
}

bool func_931(var uParam0)//Position - 0x831A1
{
	return BitTest(*uParam0, 7);
}

char* func_932(int iParam0)//Position - 0x83472
{
	switch (iParam0)
	{
		case 0:
			return "stage_enter";
			break;
		case 1:
			return "stage_exit";
			break;
		case 2:
			return "stage_2_pole_a";
			break;
		case 3:
			return "stage_2_pole_b";
			break;
		case 4:
			return "stage_2_pole_c";
			break;
		case 5:
			return "pole_a_2_stage";
			break;
		case 6:
			return "pole_b_2_stage";
			break;
		case 7:
			return "pole_c_2_stage";
			break;
		case 8:
			return "pd_enter";
			break;
		case 9:
			return "pd_exit";
			break;
		case 10:
			return "priv_dance_idle";
			break;
		case 11:
			return "priv_dance_p1";
			break;
		case 12:
			return "priv_dance_p2";
			break;
		case 13:
			return "priv_dance_p3";
			break;
		case 14:
			return "priv_dance_exit";
			break;
	}
	return "";
}

char* func_933(int iParam0)//Position - 0x83584
{
	iParam0 = __LIB_0__::func_138(iParam0 <= 0, MISC::GET_RANDOM_INT_IN_RANGE(2, 7), iParam0);
	iParam0 = __LIB_0__::func_138(iParam0 == 5, 2, iParam0);
	switch (iParam0)
	{
		case 1:
			return "stripper_idle_01";
			break;
		case 2:
			return "stripper_idle_02";
			break;
		case 3:
			return "stripper_idle_03";
			break;
		case 4:
			return "stripper_idle_04";
			break;
		case 5:
			return "stripper_idle_05";
			break;
		case 6:
			return "stripper_idle_06";
			break;
	}
	return "";
}

float func_934(int iParam0)//Position - 0x838FD
{
	switch (iParam0)
	{
		case 0:
			return (22.03f + 180f);
			break;
		case 1:
			return 22.03f;
			break;
		case 2:
			return 22.03f;
			break;
		case 3:
			return (22.03f + 180f);
			break;
		case 4:
			return (22.03f + 180f);
			break;
		case 5:
			return 22.03f;
			break;
		case 6:
			return 22.03f;
			break;
	}
	return 0f;
}

Vector3 func_935()//Position - 0x83A41
{
	return 120.25f, -1293.07f, 28.27f;
}

float func_936(int iParam0, struct<3> Param1)//Position - 0x842ED
{
	float fVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			fVar0 = 212.9749f;
			break;
		case 1:
			fVar0 = 191.0365f;
			break;
		case 2:
			fVar0 = 103.831f;
			break;
		case 3:
			fVar0 = 104.9055f;
			break;
		case 4:
			fVar0 = 105.2947f;
			break;
		case 5:
			fVar0 = 41.7561f;
			break;
		case 6:
			fVar0 = 310.2245f;
			break;
	}
	PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
	if (PED::GET_CLOSEST_PED(Param1, 3f, true, false, &iVar1, false, true, 26))
	{
		if (!PED::IS_PED_INJURED(iVar1))
		{
			return __LIB_0__::func_932(Param1, ENTITY::GET_ENTITY_COORDS(iVar1, true));
		}
	}
	return fVar0;
}

bool func_937()//Position - 0x84786
{
	return MISC::GET_GAME_TIMER() < iLocal_164;
}

void func_938(int iParam0)//Position - 0x848CF
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("facials@gen_female@variations@happy"))
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 3))
		{
			TASK::TASK_PLAY_ANIM(iParam0, "facials@gen_female@variations@happy", "mood_happy_1", 8f, -8f, -1, 33, 0f, false, false, false);
		}
	}
}

void func_939(int iParam0)//Position - 0x85911
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_106[iVar0]) && (iParam0 == -1 || iParam0 == iVar0))
		{
			Var1 = { 0f, 0f, -1f };
			ENTITY::SET_ENTITY_VELOCITY(iLocal_106[iVar0], Var1);
		}
		iVar0++;
	}
}

char* func_940(bool bParam0, int iParam1)//Position - 0x85961
{
	if (bParam0)
	{
		return "toss_many_player";
	}
	switch (iParam1)
	{
		case 1:
			return "toss_many_note_01";
			break;
		case 2:
			return "toss_many_note_02";
			break;
		case 3:
			return "toss_many_note_03";
			break;
		case 4:
			return "toss_many_note_04";
			break;
		case 5:
			return "toss_many_note_05";
			break;
		case 6:
			return "toss_many_note_06";
			break;
	}
	return "";
}

float func_941(struct<3> Param0, struct<3> Param1)//Position - 0x85B34
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar1 = (Param1.f_2 - Param0.f_2);
	fVar2 = (Param1.f_1 - Param0.f_1);
	fVar3 = (Param1.f_2 - Param0.f_2);
	fVar4 = SYSTEM::SQRT(((fVar1 * fVar1) + (fVar2 * fVar2)));
	if (fVar4 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar3, fVar4);
	}
	else if (fVar3 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	return fVar0;
}

int func_942()//Position - 0x85F07
{
	return joaat("prop_anim_cash_note_b");
}

int func_943(int iParam0)//Position - 0x85F84
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (Var0.f_2 > 31f)
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 111.19f, -1287.89f, 27.46f, 113.58f, -1286.54f, 27.46f, 4.36f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 103.12f, -1292.54f, 28.26f, 113.58f, -1286.54f, 27.46f, 2.3f, false, false, 0))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 101.72f, -1293.39f, 28.26f, 104.4f, -1291.79f, 28.26f, 7.49f, false, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_944(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x86425
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	Var0 = { Param0 - Param1 };
	Var1 = { Param2 - Param1 };
	fVar2 = ((Var1.f_0 * Var1.f_0) + (Var1.f_1 * Var1.f_1));
	fVar3 = ((Var0.f_0 * Var1.f_0) + (Var0.f_1 * Var1.f_1));
	fVar4 = (fVar3 / fVar2);
	if (fVar4 < 0f)
	{
		fVar4 = 0f;
	}
	else if (fVar4 > 1f)
	{
		fVar4 = 1f;
	}
	return Param1 + Var1 * Vector(fVar4, fVar4, fVar4);
}

void func_945()//Position - 0x86546
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_811(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_811(1, 0));
}

int func_946(int iParam0)//Position - 0x86562
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return joaat("S_M_M_Bouncer_01");
			break;
		case 2:
		case 4:
			return joaat("S_F_Y_Bartender_01");
			break;
		case 3:
			return joaat("A_M_Y_Hipster_01");
			break;
	}
	return joaat("S_M_M_Bouncer_01");
}

void func_947(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x8687F
{
	Local_90[iParam0 /*8*/] = { Param1 };
	Local_90[iParam0 /*8*/].f_3 = { Param2 };
	Local_90[iParam0 /*8*/].f_6 = fParam3;
	Local_90[iParam0 /*8*/].f_7 = iParam4;
}

void func_948()//Position - 0x86ACD
{
	iLocal_200[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(116.03237f, -1288.5013f, 27.26096f, 0.66f, 1.2f, 0.5f, 0f, false, 7);
	iLocal_200[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(113.30757f, -1283.595f, 27.26592f, 0.5f, 0.5f, 0.5f, 0f, false, 7);
	iLocal_200[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(107.46f, -1292.28f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
	iLocal_200[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(105.58f, -1289.37f, 28.795f, 10f, 0.2f, 2f, 0.55f, false, 7);
}

int func_949()//Position - 0x86B81
{
	return joaat("p_whiskey_bottle_s");
}

Vector3 func_950(int iParam0)//Position - 0x86EB1
{
	switch (iParam0)
	{
		case 0:
			return 114.64f, -1290.34f, 29.68f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_951()//Position - 0x875FB
{
	Global_96908 = MISC::GET_GAME_TIMER();
}

int func_952(int iParam0, int iParam1)//Position - 0x8765E
{
	if (iParam1 != 0)
	{
		return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
	}
	return 1;
}

Vector3 func_953()//Position - 0x877DA
{
	return 128.15f, -1282.8f, 29.45f;
}

Vector3 func_954()//Position - 0x877F1
{
	return 128.36f, -1283.11f, 29.29f;
}

bool func_955()//Position - 0x87808
{
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_107) && ENTITY::DOES_ENTITY_EXIST(iLocal_108));
}

void func_956()//Position - 0x879DC
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[4], 4, 0, 1, 0);
}

void func_957()//Position - 0x87A36
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[1], 3, 1, 0, 0);
}

void func_958()//Position - 0x87A58
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_101[2], 4, 0, 0, 0);
}

void func_959()//Position - 0x87B3E
{
	MISC::CLEAR_AREA_OF_PEDS(114.09f, -1302.54f, 28.02f, 5.75f, 0);
}

bool func_960()//Position - 0x87BC4
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 132.7121f, -1304.899f, 28.195f) < (25f * 25f);
}

bool func_961()//Position - 0x87DA2
{
	return ((((__LIB_39__::func_835("SCLUB_DRNK_TREV" /* GXT: Press ~INPUT_CONTEXT~ to get a drink. */) || __LIB_39__::func_835("SCLUB_DRNK_HELP" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $10. */)) || __LIB_39__::func_834("SCLUB_DRNK_HELP_TUNE" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $~1~. */, iLocal_81)) || __LIB_39__::func_835("SCLUB_NO_DRINK" /* GXT: Not enough cash for a drink. */)) || __LIB_39__::func_835("SCLUB_NO_DRINK_MP" /* GXT: Not enough cash for a drink. */));
}

Vector3 func_962()//Position - 0x87DF1
{
	return 116f, -1304.66f, 35f;
}

Vector3 func_963()//Position - 0x87E08
{
	return 111.1f, -1295.46f, 25f;
}

bool func_964()//Position - 0x8829E
{
	return __LIB_0__::func_703(uLocal_159, 2);
}

bool func_965()//Position - 0x88487
{
	return __LIB_0__::func_703(uLocal_159, 16384);
}

void func_966(bool bParam0)//Position - 0x887F2
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 21);
	}
}

int func_967(int iParam0)//Position - 0x890FB
{
	if (iLocal_109 != 0)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_109))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_109)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_968()//Position - 0x89163
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_89.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_89[iVar0 /*11*/]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Local_89[iVar0 /*11*/].f_10 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_89[iVar0 /*11*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		iVar0++;
	}
}

int func_969()//Position - 0x891BA
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(128.6535f, -1298.3918f, 28.2327f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 125.58423f, -1306.2335f, 28.232737f, 136.7617f, -1299.7859f, 34.232735f, 10f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_970()//Position - 0x89229
{
	return __LIB_0__::func_703(uLocal_159, 4);
}

void func_971()//Position - 0x89653
{
	if (iLocal_143 != 0 && MISC::GET_GAME_TIMER() > iLocal_143)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		iLocal_143 = 0;
	}
}

Vector3 func_972()//Position - 0x89886
{
	return 113.98f, -1297.43f, 29.42f;
}

Vector3 func_973()//Position - 0x89922
{
	return 96.092f, -1284.8536f, 29.4319f;
}

int func_974()//Position - 0x89D06
{
	return iLocal_77;
}

int func_975()//Position - 0x89D10
{
	return iLocal_78;
}

int func_976()//Position - 0x89D1A
{
	return iLocal_76;
}

void func_977()//Position - 0x5556
{
	if (__LIB_7__::func_691())
	{
		GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
	}
}

bool func_978()//Position - 0x6228
{
	return __LIB_0__::func_703(Global_112411, 8);
}

bool func_979()//Position - 0x86B6
{
	return __LIB_0__::func_703(uLocal_159, 4096);
}

bool func_980()//Position - 0x89BC
{
	return __LIB_0__::func_703(uLocal_159, 1024);
}

void func_981(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8E9C
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar0 == __LIB_39__::func_811(0, 0) || iVar0 == __LIB_39__::func_811(0, 1))
	{
		if (bParam1)
		{
			__LIB_39__::func_806(iParam0, 2, 0);
			__LIB_39__::func_804(iParam0, 1, 0);
		}
	}
	else if (iVar0 == __LIB_39__::func_811(1, 0) || iVar0 == __LIB_39__::func_811(1, 1))
	{
		if (bParam1)
		{
			__LIB_39__::func_806(iParam0, 0, iParam2);
			__LIB_39__::func_802(iParam0, iParam3, 0);
			__LIB_39__::func_804(iParam0, 1, 0);
		}
	}
	else if (iVar0 == joaat("MP_F_StripperLite"))
	{
		if (bParam1)
		{
			__LIB_39__::func_804(iParam0, 1, 0);
		}
	}
}

void func_982(int iParam0)//Position - 0x9712
{
	__LIB_27__::func_440(0);
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_117))
	{
		iLocal_117 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_118))
	{
		iLocal_118 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	CAM::SET_CAM_COORD(iLocal_117, 121f, -1291.7f, 29.8f);
	CAM::SET_CAM_ROT(iLocal_117, 8.1f, 0f, 129.1f, 2);
	CAM::SET_CAM_FOV(iLocal_117, 30f);
	CAM::SET_CAM_COORD(iLocal_118, 121f, -1291.7f, 29.8f);
	CAM::SET_CAM_ROT(iLocal_118, -3.7f, 0f, 141f, 2);
	CAM::SET_CAM_FOV(iLocal_118, 30f);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_118, iLocal_117, 5500, 1, 1);
	HUD::DISPLAY_HUD(false);
	HUD::DISPLAY_RADAR(false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

bool func_983()//Position - 0xB9AD
{
	return __LIB_0__::func_703(uLocal_159, 32768);
}

bool func_984()//Position - 0x7DE6D
{
	return __LIB_0__::func_703(uLocal_159, 256);
}

void func_985(int iParam0)//Position - 0x7E94C
{
	__LIB_0__::func_989(&uLocal_100, iParam0);
}

void func_986()//Position - 0x7EE96
{
	if (!__LIB_0__::func_703(uLocal_158, 1048576))
	{
		__LIB_1__::func_330(&uLocal_158, 1048576);
		PED::ADD_RELATIONSHIP_GROUP("stripClubRelGroup", &iLocal_105);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_105, iLocal_105);
	}
}

bool func_987()//Position - 0x84774
{
	return __LIB_0__::func_703(uLocal_159, 8192);
}

bool func_988()//Position - 0x84796
{
	return __LIB_0__::func_703(uLocal_159, 8);
}

bool func_989()//Position - 0x856EA
{
	return __LIB_0__::func_703(uLocal_159, 65536);
}

bool func_990()//Position - 0x85C60
{
	return __LIB_0__::func_703(uLocal_159, 2048);
}

bool func_991()//Position - 0x867DB
{
	return __LIB_0__::func_703(uLocal_159, 16);
}

bool func_992()//Position - 0x87B87
{
	return (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 118f, -1287.68f, 27.26f) < (16f * 16f) && __LIB_3__::func_137(PLAYER::PLAYER_PED_ID()));
}

bool func_993()//Position - 0x8805A
{
	return __LIB_0__::func_703(uLocal_159, 64);
}

bool func_994()//Position - 0x88259
{
	return __LIB_0__::func_703(uLocal_159, 32);
}

void func_995(bool bParam0)//Position - 0x882AE
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 2);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 2);
	}
}

void func_996(bool bParam0)//Position - 0x88463
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 16384);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 16384);
	}
}

void func_997(bool bParam0)//Position - 0x884B3
{
	if (bParam0)
	{
		__LIB_1__::func_330(&uLocal_159, 4);
	}
	else
	{
		__LIB_2__::func_712(&uLocal_159, 4);
	}
}

void func_998()//Position - 0x89421
{
	__LIB_39__::func_844("SCLUB_DRNK_TREV" /* GXT: Press ~INPUT_CONTEXT~ to get a drink. */);
	__LIB_39__::func_844("SCLUB_DRNK_HELP" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $10. */);
	__LIB_39__::func_844("SCLUB_NO_DRINK" /* GXT: Not enough cash for a drink. */);
	__LIB_39__::func_844("SCLUB_NO_DRINK_MP" /* GXT: Not enough cash for a drink. */);
	__LIB_39__::func_840("SCLUB_DRNK_HELP_TUNE" /* GXT: Press ~INPUT_CONTEXT~ to buy a drink for $~1~. */, iLocal_81);
}

void func_999(bool bParam0)//Position - 0x89950
{
	if (bParam0)
	{
		__LIB_1__::func_330(&Global_112411, 16);
	}
	else
	{
		__LIB_2__::func_712(&Global_112411, 16);
	}
}
