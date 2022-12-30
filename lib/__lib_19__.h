void func_0(var uParam0, bool bParam1)//Position - 0x30F5E7
{
	int iVar0;
	if (Global_1836573)
	{
		if (bParam1)
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPCarHUD");
		}
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPLeaderboard");
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("mphud");
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_402(iVar0)]))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_260[__LIB_0__::func_402(iVar0)]));
			}
			iVar0++;
		}
	}
	Global_1836573 = 0;
}

int func_1()//Position - 0x59DA
{
	return ((NETWORK::GET_CLOUD_TIME_AS_INT() / Global_262145.f_4998 /* Tunable: FM_CORONA_PLAYLIST_INTERVAL_IN_SECONDS */) % __LIB_18__::func_179());
}

var func_2(int iParam0)//Position - 0x9A70
{
	return __LIB_1__::func_136(iParam0);
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7)//Position - 0xAD8F
{
	int iVar0;
	if (!__LIB_0__::func_864(&(uParam0->f_8)))
	{
		__LIB_0__::func_795(&(uParam0->f_8), 0, 0);
	}
	else if (__LIB_0__::func_937(&(uParam0->f_8), 5000, 0))
	{
		__LIB_0__::clearF_1Prop(&(uParam0->f_8));
		iVar0 = 1;
	}
	if ((!PED::IS_PED_INJURED(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)) && !PED::IS_PED_INJURED(iParam3))
	{
		if (((TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0) || iParam3 != uParam0->f_4) || iVar0)
		{
			if (iParam3 != uParam0->f_4)
			{
				uParam0->f_4 = iParam3;
				TASK::CLEAR_PED_TASKS(iParam1);
			}
			TASK::TASK_VEHICLE_HELI_PROTECT(iParam1, iParam2, iParam3, fParam4, 32, fParam5, iParam6, iParam7);
		}
	}
}

bool func_4()//Position - 0xEC82
{
	return (BitTest(Global_4718592.f_107234, 15) && !__LIB_10__::func_365());
}

int func_5(int iParam0)//Position - 0x11024
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
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

int func_6(int iParam0)//Position - 0xC56D9
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(3812, iParam0, 0);
	if (iVar0 >= 20)
	{
		iVar0 = 0;
		__LIB_18__::func_300(iVar0, iParam0);
	}
	return iVar0;
}

int func_7()//Position - 0xC5B97
{
	if (__LIB_1__::func_135(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_134(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_133(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_132(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_131(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_130())
	{
		return 1;
	}
	else if (__LIB_1__::func_129())
	{
		return 1;
	}
	else if (__LIB_1__::func_128(Global_4718592.f_168757))
	{
		return 1;
	}
	else if (__LIB_1__::func_127(Global_4718592.f_168757))
	{
		return 1;
	}
	return 0;
}

void func_8(char* sParam0, bool bParam1)//Position - 0xCC966
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_112038)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_112038[iVar0 /*28*/]), sParam0) || __LIB_6__::func_113(iVar0, sParam0))
		{
			HUD::CLEAR_FLOATING_HELP(iVar0, bParam1);
			__LIB_1__::func_487(iVar0);
		}
		iVar0++;
	}
}

void func_9()//Position - 0xD6292
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
		__LIB_16__::func_623(1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	else if (Global_1574508 == 1)
	{
		sVar0 = "HUD_VEH_GUN" /* GXT: MACHINE GUN */;
		iVar1 = 9;
		__LIB_16__::func_623(Global_1574508.f_1, sVar0, -1, 1, 5, 0, "", 0, 0f, 0, 0, 0, 0, 0, 0, iVar1, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

int func_10()//Position - 0xEF1DA
{
	if (__LIB_18__::func_566())
	{
		if (!__LIB_18__::func_565())
		{
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				return 0;
			}
			if (__LIB_1__::func_620() && NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(true) <= 0)
			{
				return 1;
			}
			if (NETWORK::NETWORK_GET_ACTIVITY_PLAYER_NUM(false) > 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_11()//Position - 0xF3F0E
{
	if (__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1) && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 0)
	{
		return 0;
	}
	return 1;
}

int func_12(int iParam0)//Position - 0xF8FDC
{
	if (iParam0 == Global_262145.f_9050 /* Tunable: ROOT_ID_HASH_THE_FLECCA_JOB */)
	{
		if (__LIB_7__::func_355(iParam0, 1) <= 0)
		{
			return 0;
		}
	}
	return 1;
}

int func_13(int iParam0, int iParam1)//Position - 0xF93BE
{
	if (Global_2653149)
	{
		return 0;
	}
	if (__LIB_1__::func_202() || __LIB_18__::func_229())
	{
		return 0;
	}
	if (__LIB_0__::func_625())
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 == 5 || iParam1 == 6) || iParam1 == 9) || iParam1 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 != 6 && iParam0 < 10)
	{
		return 1;
	}
	return 0;
}

int func_14()//Position - 0x10D553
{
	if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 3;
}

void func_15(int iParam0, int* iParam1, int* iParam2, int* iParam3)//Position - 0x10E230
{
	var uVar0;
	HUD::GET_HUD_COLOUR(__LIB_18__::func_215(iParam0), iParam1, iParam2, iParam3, &uVar0);
}

void func_16(var uParam0, int iParam1, char* sParam2)//Position - 0x10E585
{
	uParam0->f_271[5 /*8*/] = 0.1701f;
	uParam0->f_271[5 /*8*/].f_1 = (0.23f + (SYSTEM::TO_FLOAT(iParam1) * 0.03749976f));
	uParam0->f_271[5 /*8*/].f_2 = 0.01953125f;
	uParam0->f_271[5 /*8*/].f_3 = 0.034722f;
	uParam0->f_271[5 /*8*/].f_7 = 255;
	__LIB_18__::func_598(uParam0->f_271[5 /*8*/], 0, 0);
	(uParam0[10 /*9*/])->f_1 = (0.23f + (SYSTEM::TO_FLOAT(iParam1) * 0.03749976f));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam2, false);
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam2))
		{
			__LIB_6__::func_24(sParam2, sParam2, uParam0[10 /*9*/], 0, 0, 7, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		}
	}
}

void func_17(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x10EAF7
{
	if (bParam1)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
		(*uParam0)[7 /*9*/] = 0.358f;
		(uParam0[7 /*9*/])->f_1 = (0.23f + (SYSTEM::TO_FLOAT(iParam3) * 0.03749976f));
		(uParam0[7 /*9*/])->f_2 = 0.022f;
		(uParam0[7 /*9*/])->f_3 = 0.05f;
		if (bParam2)
		{
			(uParam0[7 /*9*/])->f_8 = 180f;
		}
		else
		{
			(uParam0[7 /*9*/])->f_8 = 0f;
		}
		(uParam0[7 /*9*/])->f_7 = 255;
		(uParam0[7 /*9*/])->f_4 = 255;
		(uParam0[7 /*9*/])->f_5 = 255;
		(uParam0[7 /*9*/])->f_6 = 255;
		__LIB_6__::func_24("MPLeaderboard", "Leaderboard_Thumb", uParam0[7 /*9*/], 0, 0, 7, 0);
	}
}

int func_18(int iParam0)//Position - 0x1119C4
{
	if (__LIB_1__::func_140(iParam0))
	{
		if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_153())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<35> func_19(var* uParam0)//Position - 0x114790
{
	struct<35> Var0;
	if (__LIB_18__::func_529(uParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var0, 35, uParam0);
	return Var0;
}

int func_20(var uParam0)//Position - 0x1149F4
{
	if (uParam0->f_491)
	{
		return 1;
	}
	if (uParam0->f_492 && !Global_1836382)
	{
		return 1;
	}
	if (__LIB_1__::func_826(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_729())
	{
		return 1;
	}
	return 0;
}

void func_21()//Position - 0x11A26E
{
	if (!__LIB_2__::func_324())
	{
		if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			NETWORK::NETWORK_BLOCK_INVITES(true);
			NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
			if (NETWORK::NETWORK_IS_HOST())
			{
				NETWORK::NETWORK_SESSION_BLOCK_JOIN_REQUESTS(true);
			}
		}
	}
}

int func_22(var uParam0)//Position - 0x11B0BF
{
	int iVar0;
	float fVar1;
	iVar0 = 200;
	__LIB_0__::func_603(&(uParam0->f_434), &(uParam0->f_434.f_1), &(uParam0->f_434.f_2), &(uParam0->f_434.f_3), 1);
	fVar1 = 1f;
	if (fVar1 == 1f)
	{
		if ((!uParam0->f_434.f_4 || !uParam0->f_434.f_9) || !uParam0->f_434.f_8)
		{
			if (uParam0->f_434.f_28 <= 0)
			{
				uParam0->f_434.f_28 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_32 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_28 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_32, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_28) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_28 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if ((!uParam0->f_434.f_5 || !uParam0->f_434.f_10) || !uParam0->f_434.f_11)
		{
			if (uParam0->f_434.f_29 <= 0)
			{
				uParam0->f_434.f_29 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_33 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_29 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_33, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_29) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_29 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if (!uParam0->f_434.f_6)
		{
			if (uParam0->f_434.f_30 <= 0)
			{
				uParam0->f_434.f_30 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_34 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_30 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_34, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_30) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_30 = 0;
		}
	}
	if (fVar1 == 1f)
	{
		if (!uParam0->f_434.f_7)
		{
			if (uParam0->f_434.f_31 <= 0)
			{
				uParam0->f_434.f_31 = MISC::GET_GAME_TIMER();
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					uParam0->f_434.f_35 = NETWORK::GET_NETWORK_TIME();
				}
			}
			if (uParam0->f_434.f_31 > 0)
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_35, iVar0 * 3))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_31) > iVar0 * 3))
				{
					fVar1 = 0.25f;
				}
			}
		}
		else
		{
			uParam0->f_434.f_31 = 0;
		}
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * fVar1));
	if (!uParam0->f_434.f_4)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0)) || (uParam0->f_434.f_1 < 75 && uParam0->f_434.f_1 > -75))
		{
			uParam0->f_434.f_4 = 1;
		}
	}
	if (!uParam0->f_434.f_5)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0)) || (uParam0->f_434 < 75 && uParam0->f_434 > -75))
		{
			uParam0->f_434.f_5 = 1;
		}
	}
	if (!uParam0->f_434.f_6)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_26, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_22) > iVar0)) || (uParam0->f_434.f_3 < 75 && uParam0->f_434.f_3 > -75))
		{
			uParam0->f_434.f_6 = 1;
		}
	}
	if (!uParam0->f_434.f_7)
	{
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_27, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_23) > iVar0)) || (uParam0->f_434.f_2 < 75 && uParam0->f_434.f_2 > -75))
		{
			uParam0->f_434.f_7 = 1;
		}
	}
	if (!uParam0->f_434.f_8)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0))
		{
			uParam0->f_434.f_8 = 1;
		}
	}
	if (!uParam0->f_434.f_9)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_24, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_20) > iVar0))
		{
			uParam0->f_434.f_9 = 1;
		}
	}
	if (!uParam0->f_434.f_10)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0))
		{
			uParam0->f_434.f_10 = 1;
		}
	}
	if (!uParam0->f_434.f_11)
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), NETWORK::GET_TIME_OFFSET(uParam0->f_434.f_25, iVar0))) || (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && (MISC::GET_GAME_TIMER() - uParam0->f_434.f_21) > iVar0))
		{
			uParam0->f_434.f_11 = 1;
		}
	}
	return iVar0;
}

int func_23(var uParam0, bool bParam1)//Position - 0x1273C2
{
	var uVar0;
	uVar0 = bParam1;
	if (bParam1)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPCarHUD", false);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", false);
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_402(0)]))
	{
		uParam0->f_260[__LIB_0__::func_402(0)] = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_402(1)]))
	{
		uParam0->f_260[__LIB_0__::func_402(1)] = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SAVING_FOOTER");
	}
	if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard"))
	{
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		{
			if (!bParam1 || GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPCarHUD"))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_402(0)]) || uVar0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_260[__LIB_0__::func_402(1)]) || uVar0)
					{
						Global_1836573 = 1;
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_24()//Position - 0x13FA0C
{
	if (__LIB_0__::func_448(1))
	{
		return 1;
	}
	return 0;
}

struct<16> func_25(int iParam0)//Position - 0x1435D3
{
	struct<16> Var0;
	struct<13> Var1;
	struct<35> Var2;
	if (__LIB_1__::func_693(iParam0, 0, 1))
	{
		Var1 = { __LIB_1__::func_696(iParam0) };
		if (__LIB_1__::func_87(&Var1))
		{
			Var2 = { __LIB_7__::func_699(iParam0) };
			Var0 = { Var2.f_1 };
		}
	}
	return Var0;
}

void func_26()//Position - 0x143642
{
	var uVar0;
	var uVar1;
	var uVar2;
	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &uVar2);
	MISC::SET_OVERRIDE_WEATHER("clear");
	if (!__LIB_1__::func_54())
	{
		__LIB_2__::func_442(4, 0);
	}
	MISC::UNLOAD_ALL_CLOUD_HATS();
}

void func_27(var uParam0)//Position - 0x14F1B0
{
	int iVar0;
	int iVar1;
	if (uParam0->f_1206)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar1 = iVar0;
			if (__LIB_1__::func_693(iVar1, 0, 1))
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar1, false);
			}
			iVar0++;
		}
	}
}

void func_28(var uParam0, int iParam1)//Position - 0x14F4A2
{
	int iVar0;
	struct<13> Var1;
	int iVar2;
	if (iParam1 > -1 && iParam1 < 16)
	{
		if (uParam0->f_402[iParam1] > -1 && uParam0->f_402[iParam1] < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_402[iParam1]);
			if (__LIB_1__::func_693(iVar0, 0, 1))
			{
				Var1 = { __LIB_1__::func_696(iVar0) };
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

void func_29()//Position - 0x14FA19
{
	int iVar0;
	NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(true);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(iVar0, 0, 1))
		{
			NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, true);
		}
		iVar0++;
	}
}

void func_30(var uParam0, bool bParam1, bool bParam2)//Position - 0x14FA4B
{
	struct<9> Var0;
	Var0 = { __LIB_1__::func_404() };
	switch (uParam0->f_477)
	{
		case 0:
			if (__LIB_3__::func_67(0, -1, 0))
			{
				__LIB_1__::func_539(&(uParam0->f_478));
				if (bParam1)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						__LIB_1__::func_513(2, 203, "CELEB_LIST_TTL" /* GXT: Toggle Player List */, &(uParam0->f_478), 1, 363);
					}
					else
					{
						__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true), "CELEB_LIST_TTL" /* GXT: Toggle Player List */, &(uParam0->f_478), 0);
					}
				}
				if (bParam2)
				{
					__LIB_1__::func_513(2, 204, "CELEB_NAMES" /* GXT: Toggle Player Names */, &(uParam0->f_478), 1, 363);
				}
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
				{
					uParam0->f_477++;
				}
				else
				{
					uParam0->f_477 = 2;
				}
			}
			break;
		case 1:
			__LIB_5__::func_693(&(uParam0->f_476), &Var0, &(uParam0->f_478), __LIB_1__::func_402(&(uParam0->f_478)));
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				uParam0->f_477 = 0;
			}
			break;
		case 2:
			__LIB_5__::func_693(&(uParam0->f_476), &Var0, &(uParam0->f_478), __LIB_1__::func_402(&(uParam0->f_478)));
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				uParam0->f_477 = 0;
			}
			break;
	}
}

void func_31(bool bParam0)//Position - 0x150FA8
{
	if (bParam0)
	{
		__LIB_2__::func_321(0);
	}
	NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(bParam0);
}

int func_32(int iParam0)//Position - 0x1516DD
{
	if (iParam0 == __LIB_6__::func_136(4) || iParam0 == __LIB_6__::func_135(4))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1517AF
{
	if ((iParam0 >= __LIB_6__::func_136(1) && iParam0 <= __LIB_6__::func_135(1)) || (iParam0 >= __LIB_6__::func_138(1) && iParam0 <= __LIB_6__::func_137(1)))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)//Position - 0x151C33
{
	if (__LIB_6__::func_132(iParam0))
	{
		return 0;
	}
	if (__LIB_6__::func_131(iParam0))
	{
		return 1;
	}
	if (__LIB_6__::func_130(iParam0))
	{
		return 2;
	}
	if (__LIB_6__::func_129(iParam0))
	{
		return 3;
	}
	if (__LIB_6__::func_128(iParam0))
	{
		return 4;
	}
	if (__LIB_6__::func_127(iParam0))
	{
		return 5;
	}
	if (__LIB_6__::func_126(iParam0))
	{
		return 6;
	}
	if (__LIB_6__::func_125(iParam0))
	{
		return 7;
	}
	if (__LIB_6__::func_124(iParam0))
	{
		return 8;
	}
	if (__LIB_6__::func_123(iParam0))
	{
		return 9;
	}
	if (__LIB_6__::func_122(iParam0))
	{
		return 10;
	}
	if (__LIB_6__::func_121(iParam0))
	{
		return 11;
	}
	return -1;
}

int func_35(int iParam0)//Position - 0x1522CD
{
	return (50 + ((iParam0 - 1) * __LIB_6__::func_168()));
}

int func_36(int iParam0, bool bParam1)//Position - 0x153B2F
{
	var uVar0;
	if (bParam1)
	{
		return __LIB_18__::func_243();
	}
	switch (iParam0)
	{
		case 1:
			uVar0 = Global_262145.f_6281[0];
			break;
		case 2:
			uVar0 = Global_262145.f_6281[1];
			break;
		case 3:
			uVar0 = Global_262145.f_6281[2];
			break;
		case 4:
			uVar0 = Global_262145.f_6281[3];
			break;
		case 5:
			uVar0 = Global_262145.f_6281[4];
			break;
		case 6:
			uVar0 = Global_262145.f_6281[5];
			break;
		case 7:
			uVar0 = Global_262145.f_6281[6];
			break;
		case 8:
			uVar0 = Global_262145.f_6281[7];
			break;
	}
	return uVar0;
}

void func_37(int iParam0, bool bParam1)//Position - 0x156423
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(51))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 1:
			case 10:
			case 11:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(52))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 2:
			case 12:
			case 13:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(53))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 3:
			case 14:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(54))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 4:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(55))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 5:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(56))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 6:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(57))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 7:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(58))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 8:
				__LIB_18__::func_224(iParam0);
				break;
			case 9:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(59))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 15:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
			case 16:
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(46))
				{
					__LIB_18__::func_225(iParam0);
				}
				else
				{
					__LIB_18__::func_224(iParam0);
				}
				break;
		}
	}
	else
	{
		__LIB_18__::func_224(iParam0);
	}
}

int func_38(int iParam0)//Position - 0x1584BF
{
	if (iParam0 >= __LIB_6__::func_119(2) && iParam0 <= 320)
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0)//Position - 0x15B3EF
{
	if (!Global_262145.f_25921 /* Tunable: -148899823 */)
	{
		__LIB_1__::func_746(7852, iParam0, -1);
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_828 = (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_828 + iParam0);
	}
}

int func_40(int iParam0)//Position - 0x15C2E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_18__::func_325();
	iVar1 = 0;
	while (iVar1 < 50)
	{
		iVar2 = Global_262145.f_5065[iVar0 /*51*/][iVar1];
		if (iVar2 == iParam0)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

int func_41(int iParam0)//Position - 0x15C998
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (__LIB_12__::func_588())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return __LIB_12__::func_587(iParam0);
}

bool func_42(var uParam0, int iParam1)//Position - 0x16183D
{
	return BitTest((*uParam0)[__LIB_13__::func_437(iParam1)], __LIB_18__::func_410(iParam1));
}

int func_43(int iParam0)//Position - 0x180F98
{
	return __LIB_18__::func_232(iParam0);
}

void func_44(bool bParam0, int iParam1)//Position - 0x19E0EE
{
	__LIB_1__::func_348(205, bParam0, iParam1, 1);
}

void func_45(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1A85B0
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
		__LIB_2__::func_553(iVar0, 1);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x1A8775
{
	int iVar0;
	if (!__LIB_0__::func_438())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
		{
			if (__LIB_12__::func_841(PLAYER::PLAYER_ID()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = __LIB_18__::func_188(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	__LIB_2__::func_553(iVar0, 1);
}

int func_47(char* sParam0, var uParam1, bool bParam2)//Position - 0x1A9EB4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 2018;
	if (!bParam2)
	{
		iVar2 = 2000;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (BitTest(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = __LIB_13__::func_431(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 100)
	{
		if (BitTest(Global_998606.f_604[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_998606.f_604[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_998606.f_604[iVar0 /*88*/].f_65;
				*uParam1 = __LIB_13__::func_431(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (BitTest(Global_1020252.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_1020252.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_1020252.f_5[iVar0 /*88*/].f_65;
				*uParam1 = __LIB_13__::func_431(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = PLAYER::PLAYER_ID();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_48(var uParam0, bool bParam1)//Position - 0x1B27F3
{
	struct<2> Var0;
	int iVar1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_47.f_1471))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SHOW_TICKER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4());
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_47.f_1471, "SET_TICKER_TITLE");
		switch (Global_1853348[PLAYER::PLAYER_ID() /*834*/])
		{
			case 1:
			case 2:
			case 3:
			case 0:
			case 8:
				if (__LIB_0__::func_936(iVar1))
				{
					if (uParam0->f_47.f_2175 >= 3)
					{
						uParam0->f_47.f_2175 = 0;
					}
					switch (uParam0->f_47.f_2175)
					{
						case 0:
							StringCopy(&Var0, __LIB_10__::func_929(), 16);
							__LIB_0__::func_610(&Var0);
							uParam0->f_47.f_2178 = 8000;
							uParam0->f_47.f_2175++;
							break;
						case 1:
							__LIB_0__::func_700(&(Global_4718592.f_116531));
							uParam0->f_47.f_2178 = 8000;
							uParam0->f_47.f_2175++;
							break;
						case 2:
							__LIB_0__::func_700(&(Global_1048576.f_14));
							uParam0->f_47.f_2178 = 4000;
							uParam0->f_47.f_2175++;
							break;
						case 3:
							__LIB_10__::func_287(uParam0);
							uParam0->f_47.f_2178 = 4000;
							uParam0->f_47.f_2175++;
							break;
					}
				}
				else
				{
					if (uParam0->f_47.f_2175 >= 3)
					{
						uParam0->f_47.f_2175 = 0;
					}
					switch (uParam0->f_47.f_2175)
					{
						case 0:
							StringCopy(&Var0, __LIB_10__::func_929(), 16);
							__LIB_0__::func_610(&Var0);
							uParam0->f_47.f_2178 = 8000;
							uParam0->f_47.f_2175++;
							break;
						case 1:
							__LIB_0__::func_700(&(Global_4718592.f_116531));
							uParam0->f_47.f_2178 = 8000;
							uParam0->f_47.f_2175++;
							break;
						case 2:
							__LIB_10__::func_287(uParam0);
							uParam0->f_47.f_2178 = 4000;
							uParam0->f_47.f_2175++;
							break;
						}
				}
				break;
			default:
				if (uParam0->f_47.f_2175 >= 2)
				{
					uParam0->f_47.f_2175 = 0;
				}
				switch (uParam0->f_47.f_2175)
				{
					case 0:
						MemCopy(&Var0, {__LIB_10__::func_441(__LIB_11__::func_762())}, 4);
						__LIB_0__::func_700(&Var0);
						uParam0->f_47.f_2178 = 8000;
						uParam0->f_47.f_2175++;
						break;
					case 1:
						__LIB_10__::func_287(uParam0);
						break;
				}
				break;
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_49(int iParam0, var uParam1, int* iParam2, var uParam3, var uParam4)//Position - 0x2688D0
{
	struct<3> Var0;
	int iVar1;
	if (__LIB_5__::func_423(iParam0))
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
					__LIB_2__::func_53(iParam2, 166);
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

void func_50(int iParam0, bool bParam1)//Position - 0x2D3CBE
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_565(iParam0);
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
		__LIB_1__::func_364(__LIB_2__::func_200(iParam0), iVar0, -1, 1);
	}
}

void func_51(int iParam0, bool bParam1)//Position - 0x2D3E2B
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_567(iParam0);
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
		__LIB_1__::func_364(__LIB_2__::func_203(iParam0), iVar0, -1, 1);
	}
}

void func_52(int iParam0, bool bParam1)//Position - 0x2D3FB0
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_569(iParam0);
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
		__LIB_1__::func_364(__LIB_2__::func_206(iParam0), iVar0, -1, 1);
	}
}

void func_53(int iParam0, bool bParam1)//Position - 0x2D420C
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__::func_571(iParam0);
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
		__LIB_1__::func_364(__LIB_2__::func_209(iParam0), iVar0, -1, 1);
	}
}

int func_54()//Position - 0x2E0EC4
{
	return __LIB_9__::func_127(__LIB_9__::func_128());
}

void func_55(int iParam0)//Position - 0x2F2A1F
{
	Global_4718592.f_107227 = iParam0;
	if (Global_4718592.f_107227 != 18 && Global_4718592.f_107227 != 19)
	{
		MISC::CLEAR_BIT(&(Global_4718592.f_28), 18);
	}
	__LIB_18__::func_534((__LIB_2__::func_629() || __LIB_0__::func_625()));
}

void func_56(int iParam0, bool bParam1)//Position - 0x2F3F1A
{
	int iVar0;
	iVar0 = iParam0;
	__LIB_11__::func_244(&(Global_2689235[iVar0 /*453*/].f_434), 0, bParam1);
}

var func_57(int iParam0)//Position - 0x304802
{
	struct<13> Var0;
	int iVar1;
	Var0 = { __LIB_1__::func_696(iParam0) };
	iVar1 = __LIB_1__::func_72(__LIB_1__::func_73(&Var0));
	return __LIB_16__::func_389(iVar1);
}

void func_58(bool bParam0)//Position - 0x30B253
{
	char* sVar0;
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (bParam0)
	{
		sVar0 = __LIB_18__::func_571(Global_4718592.f_162543.f_2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar0);
		}
	}
	else
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

int func_59()//Position - 0x30B3B8
{
	if (!__LIB_0__::func_893() && !__LIB_18__::func_654())
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, bool bParam1)//Position - 0x30B559
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	iVar0 = 0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= (__LIB_18__::func_574(iVar0) - 1))
		{
			switch (iVar0)
			{
				case 1:
					StringCopy(&Var2, "Set_Dystopian_", 64);
					break;
				case 2:
					StringCopy(&Var2, "Set_Scifi_", 64);
					break;
				case 3:
					StringCopy(&Var2, "Set_Wasteland_", 64);
					break;
			}
			if (iVar1 < 9)
			{
				StringConCat(&Var2, "0", 64);
			}
			StringIntConCat(&Var2, iVar1 + 1, 64);
			__LIB_18__::func_570(uParam0, &Var2, ((bParam1 && Global_4718592.f_162543.f_1 == iVar1) && Global_4718592.f_162543 == iVar0));
			iVar1++;
		}
		iVar0++;
	}
	__LIB_18__::func_570(uParam0, "Set_Dystopian_Scene", (bParam1 && Global_4718592.f_162543 == 1));
	__LIB_18__::func_570(uParam0, "Set_Scifi_Scene", (bParam1 && Global_4718592.f_162543 == 2));
	__LIB_18__::func_570(uParam0, "Set_Wasteland_Scene", (bParam1 && Global_4718592.f_162543 == 3));
}

void func_61()//Position - 0x30B9EA
{
	struct<68> Var0;
	Global_2097157 = 0;
	Global_2097157.f_1 = 0;
	Global_2097157.f_2 = 0;
	Global_2097157.f_3 = 0;
	Global_2097157.f_4 = 0;
	__LIB_16__::func_734(&(Global_2097157.f_73));
	__LIB_16__::func_734(&(Global_2097157.f_142));
	__LIB_16__::func_734(&(Global_2097157.f_211));
	__LIB_16__::func_734(&(Global_2097157.f_280));
	StringCopy(&(Global_2097157.f_349), "", 24);
	StringCopy(&(Global_2097157.f_355), "", 24);
	__LIB_0__::func_946(&(Global_2097157.f_361));
	Global_2097157.f_374 = -1;
	Global_2097532 = 0;
	Global_2097533 = 0;
	Var0.f_2.f_1 = 4;
	Global_2097157.f_5 = { Var0 };
}

void func_62(int iParam0)//Position - 0x30CFD2
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::getGlobal_1574918();
	}
	iVar0 = __LIB_1__::func_14(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (__LIB_0__::func_438())
	{
		if (BitTest(iVar1, 1))
		{
			__LIB_1__::func_348(133, 1, -1, 1);
		}
	}
}

void func_63()//Position - 0x30DD50
{
	__LIB_2__::func_216(-1f);
}

int func_64()//Position - 0x30F2CC
{
	if (__LIB_1__::func_126() && !__LIB_1__::func_871())
	{
		return 1;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x8926
{
	if (__LIB_12__::func_668(Global_794709.f_177589[iParam0 /*13*/].f_1, Global_794709.f_4[iParam0 /*88*/].f_80))
	{
		return 1;
	}
	return 0;
}

int func_66(var uParam0)//Position - 0xAEF5
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_1);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
	{
		if (__LIB_0__::func_939(uParam0->f_2))
		{
			iVar0 = NETWORK::NET_TO_ENT(uParam0->f_2);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (__LIB_0__::func_930(&(uParam0->f_3), uParam0->f_2, 4, uParam0->f_1, -1, 1, 1, 1))
				{
					return 1;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	return 0;
}

int func_67(int iParam0)//Position - 0x10F84
{
	int iVar0;
	struct<21> Var1;
	iVar0 = 0;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_9 = -1;
	Var1.f_16 = -1;
	Var1.f_19 = -1;
	Var1.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!__LIB_18__::func_422(iVar0))
		{
			Var1 = { __LIB_13__::func_451(iVar0) };
			if (iParam0 == Var1.f_17)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_68(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xC6C25
{
	int iVar0;
	if ((!__LIB_0__::func_261() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_750(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = fParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

void func_69(var uParam0)//Position - 0xCD738
{
	struct<9> Var0;
	Var0 = { __LIB_1__::func_404() };
	if (__LIB_3__::func_67(0, -1, 0))
	{
		switch (uParam0->f_707)
		{
			case 0:
				__LIB_1__::func_539(&(uParam0->f_7));
				__LIB_1__::func_513(2, 202, "HUD_QUIT" /* GXT: Quit */, &(uParam0->f_7), 1, 363);
				uParam0->f_707++;
				break;
			case 1:
				__LIB_5__::func_693(&(uParam0->f_6), &Var0, &(uParam0->f_7), 0);
				break;
			}
	}
}

int func_70()//Position - 0xD90E2
{
	if (__LIB_1__::func_15(PLAYER::PLAYER_ID()) || __LIB_15__::func_580())
	{
		if (!__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

void func_71()//Position - 0xEF5E7
{
	if (__LIB_2__::func_268())
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_72(int iParam0)//Position - 0x10A740
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = __LIB_18__::func_454(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

int func_73()//Position - 0x10B451
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
				if (!__LIB_0__::func_361(iVar4, 0))
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

int func_74()//Position - 0x114223
{
	if (__LIB_2__::func_581())
	{
		return 1;
	}
	if (Global_1836382)
	{
		return 0;
	}
	return Global_1836381;
}

int func_75(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x11ACA4
{
	int iVar0;
	int iVar1;
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	*uParam2 = 0;
	iVar1 = 300;
	if (iParam5 != -1)
	{
		iVar1 = iParam5;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	if (bParam3)
	{
		if (((PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/) || PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) > 0.3f) || __LIB_10__::func_924(iParam7, 1, iParam8)) || (iParam4 && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
		{
			*uParam2 = 1;
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				if (bParam6)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*iParam1 = 1;
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || __LIB_10__::func_924(iParam7, -1, iParam8)) || PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) < -0.3f)
		{
			*uParam2 = 1;
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				if (bParam6)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				iVar0 = 1;
				*iParam1 = -1;
			}
		}
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && __LIB_10__::func_257())
		{
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				if (__LIB_10__::func_438(iParam7, -1, iParam8))
				{
					*uParam2 = 1;
					*iParam1 = -1;
					iVar0 = 1;
					*uParam0 = NETWORK::GET_NETWORK_TIME();
				}
				else if (__LIB_10__::func_438(iParam7, 1, iParam8))
				{
					*uParam2 = 1;
					*iParam1 = 1;
					iVar0 = 1;
					*uParam0 = NETWORK::GET_NETWORK_TIME();
				}
				if (bParam6 && *uParam2)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
			}
		}
	}
	else
	{
		if (((PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < -0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || (iParam4 && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
		{
			*uParam2 = 1;
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
			{
				iVar1 = 100;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				if (bParam6)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				iVar0 = 1;
				*iParam1 = 1;
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) > 0.3f) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
		{
			*uParam2 = 1;
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
			{
				iVar1 = 100;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME())) > iVar1)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
				if (bParam6)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				}
				iVar0 = 1;
				*iParam1 = -1;
			}
		}
	}
	return iVar0;
}

int func_76(bool bParam0)//Position - 0x14E88F
{
	if (bParam0)
	{
		return 1;
	}
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group1");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group2");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group3");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@group4");
	STREAMING::REQUEST_ANIM_DICT("mp_intro_seq@ig_4_car_select@player");
	if (__LIB_18__::func_596())
	{
		STREAMING::REQUEST_ANIM_DICT("MP_INTRO_SEQ@IG_4_CAR_SELECT@");
	}
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_B@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_C@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_A@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_B@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_C@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_D@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_E@BASE");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@FEMALE_A@IDLE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_A@IDLE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA_IDLES@MALE_B@IDLE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA@SINGLE_TEAM");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@FEMALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_B");
	STREAMING::REQUEST_ANIM_DICT("MP_CORONA@TEAM_IDLES@MALE_C");
	if (__LIB_1__::func_60(Global_4718592.f_168757))
	{
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE");
		STREAMING::REQUEST_ANIM_DICT("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A");
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group1"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group2"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group3"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@group4"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("mp_intro_seq@ig_4_car_select@player"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_A@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_B@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_C@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_A@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_B@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_C@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_D@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_E@BASE"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@FEMALE_A@IDLE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_A@IDLE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA_IDLES@MALE_B@IDLE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@SINGLE_TEAM"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@FEMALE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_A"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_B"))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_CORONA@TEAM_IDLES@MALE_C"))
	{
		return 0;
	}
	if (__LIB_1__::func_60(Global_4718592.f_168757))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_A@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_B@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_C@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_D@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@MALE_E@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_A@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_B@IDLE_A"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@BASE"))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("anim@MP_CORONA_IDLES_JUGGERNAUT@FEMALE_C@IDLE_A"))
		{
			return 0;
		}
	}
	return 1;
}

int func_77(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4)//Position - 0x15D9BA
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	float fVar20;
	struct<3> Var21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		bVar13 = true;
		if (bParam3)
		{
			if (uParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (uParam0->f_421 < 6)
			{
				if (uParam0->f_422 == 0)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.305f, 3.404f, 1.873f };
					Var5 = { 0.3318f, 0.6829f, 0.782f };
					fVar7 = 48.872f;
				}
				else if (uParam0->f_422 == 1)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3027f, 1.9371f, 0.8861f };
					Var5 = { 0.7526f, -0.7846f, 0.1942f };
					fVar7 = 49.9607f;
				}
				else if (uParam0->f_422 == 2)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.3685f, 5.6646f, 3.8144f };
					Var5 = { 0.3407f, 3.2028f, 2.2534f };
					fVar7 = 49.9607f;
				}
				else if (uParam0->f_422 == 3)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.551f, 1.5299f, 0.0099f };
					Var5 = { 1.1136f, -0.8876f, 0.6298f };
					fVar7 = 40.5195f;
				}
				else if (uParam0->f_422 == 4)
				{
					Var6 = { -0.6761f, 2.3219f, 0.3315f };
					Var4 = { 0.1252f, 1.692f, 0.0052f };
					Var5 = { -0.9193f, -1.0597f, 0.5854f };
					fVar7 = 40.5195f;
				}
				else if (uParam0->f_422 == 5)
				{
					Var6 = { 1.3494f, 0.8708f, 0.3814f };
					Var4 = { -0.098f, 1.4671f, 0.0645f };
					Var5 = { 0.3334f, -1.4352f, 0.6893f };
					fVar7 = 40.5195f;
				}
			}
			else
			{
				*uParam2 = 0;
				uParam0->f_437 = 0;
				uParam0->f_421 = 0;
				return 1;
			}
		}
		else
		{
			if (uParam0->f_437 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				}
				else
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
			{
				fVar8 = -0.09f;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar14 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				iVar15 = ENTITY::GET_ENTITY_MODEL(iVar14);
				if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar15))
				{
					bVar13 = false;
					bVar11 = true;
				}
			}
			else
			{
				bVar13 = false;
			}
			if (bVar13 && iParam4)
			{
				if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
				}
				else
				{
					uParam0->f_422 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
				}
			}
			if (!__LIB_2__::func_419(uParam0, fVar9, fVar8, bVar11, (iParam4 && bVar13), &Var6, &Var4, &Var5, &fVar7, &bVar12, &bVar10))
			{
				*uParam2 = 0;
				uParam0->f_437 = 0;
				uParam0->f_421 = 0;
				return 1;
			}
			if (bVar13 && iParam4)
			{
				bVar13 = false;
			}
		}
		Var16 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var4) };
		Var17 = { Var16 };
		Var18 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var19 = { ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()) };
		fVar20 = SYSTEM::VMAG(Var19);
		if (MISC::ABSF(fVar20) > 0.5f)
		{
			Var21 = { Var19 / Vector(fVar20, fVar20, fVar20) };
			Var17 = { Var16 + Var21 };
		}
		if (uParam0->f_437 == 0)
		{
			iVar22 = 343;
			uParam0->f_437 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var17, Var18, 0.25f, iVar22, PLAYER::PLAYER_PED_ID(), 7);
		}
		else
		{
			iVar23 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_437, &iVar0, &uVar1, &uVar2, &uVar3);
			switch (iVar23)
			{
				case 2:
					uParam0->f_437 = 0;
					if (iVar0 > 0)
					{
						uParam0->f_421++;
					}
					else if (((((!bVar13 && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var18, &fVar24, false, false);
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var16, &fVar25, false, false);
						if (MISC::ABSF((fVar24 - fVar25)) > 5f)
						{
							uParam0->f_421++;
						}
						else
						{
							if (!CAM::DOES_CAM_EXIST(*uParam1))
							{
								*uParam1 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
							}
							CAM::STOP_CAM_POINTING(*uParam1);
							if (!__LIB_4__::func_972(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								CAM::ATTACH_CAM_TO_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var4, true);
							}
							CAM::POINT_CAM_AT_ENTITY(*uParam1, PLAYER::PLAYER_PED_ID(), Var5, true);
							CAM::SET_CAM_FOV(*uParam1, fVar7);
							__LIB_1__::func_329(uParam1, 0.3f);
							CAM::SET_CAM_NEAR_CLIP(*uParam1, 0.15f);
							if (!bVar12)
							{
								if (bVar10)
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 2048, 2);
								}
								else
								{
									TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var6), 20000, 10240, 2);
								}
							}
							*uParam2 = 1;
							uParam0->f_421 = 0;
							return 1;
						}
					}
					else
					{
						uParam0->f_421++;
					}
					break;
				case 0:
					uParam0->f_437 = 0;
					uParam0->f_421++;
					break;
				}
		}
	}
	else
	{
		*uParam2 = 0;
		uParam0->f_421 = 0;
		return 1;
	}
	return 0;
}

int func_78(int iParam0)//Position - 0x177025
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	iVar1 = __LIB_3__::func_300();
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (__LIB_0__::func_157(0))
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!__LIB_2__::func_713())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (__LIB_2__::func_441())
	{
		iVar0 = 0;
	}
	Global_2726597 = 1;
	return iVar0;
}

void func_79(int iParam0, int iParam1)//Position - 0x19180C
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		__LIB_1__::func_354(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iParam0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iParam0), false);
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			__LIB_5__::func_722(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_80(int iParam0)//Position - 0x1A8059
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 41)
	{
		iVar1 = __LIB_18__::func_424(iVar0);
		if (iParam0 == __LIB_16__::func_652(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

void func_81(int iParam0, int iParam1)//Position - 0x2D450D
{
	Global_262145.f_8727 = 0;
	Global_262145.f_8728 = 100;
	Global_262145.f_8729 = 100;
	Global_262145.f_8718 = 0;
	Global_262145.f_8719 = 0;
	Global_262145.f_8720 = 0;
	Global_262145.f_8721 = 0;
	Global_262145.f_8722 = 0;
	Global_262145.f_8723 = 0;
	Global_262145.f_8724 = 0;
	Global_262145.f_8725 = 0;
	Global_262145.f_8726 = 0;
	__LIB_18__::func_448(iParam0, iParam1, joaat("CASH_REWARD_BET_STAKE_GIFT"), &(Global_262145.f_8728), 1);
	__LIB_18__::func_448(iParam0, iParam1, joaat("ARMOUR_REWARD_GIFT"), &(Global_262145.f_8729), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_DM"), &(Global_262145.f_8718), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_CAR"), &(Global_262145.f_8719), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_CYCLE"), &(Global_262145.f_8720), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_AIR"), &(Global_262145.f_8721), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_RACES_SEA"), &(Global_262145.f_8722), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_MISSIONS"), &(Global_262145.f_8723), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_SURVIAL"), &(Global_262145.f_8724), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_BASEJUMP"), &(Global_262145.f_8725), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_CAPTURE"), &(Global_262145.f_8726), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("DISABLE_MODIFIER_BADGES"), &(Global_262145.f_8572), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("TOGGLE_ON_BET_STAKE_GIFT_LTS"), &(Global_262145.f_8727), 1);
	__LIB_18__::func_495(iParam0, iParam1, joaat("PLAYLIST_EVENT_GIFT_ACTIVE"), &(Global_262145.f_7123), 1);
}

void func_82(int iParam0)//Position - 0x2F3D71
{
	int iVar0;
	struct<4> Var1;
	Var1 = { __LIB_10__::func_348(iParam0) };
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, Var1.f_3);
	__LIB_15__::func_283(iParam0, 1);
	__LIB_13__::func_751(iParam0, 0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		INTERIOR::UNPIN_INTERIOR(iVar0);
	}
}

void func_83(int iParam0, bool bParam1, int iParam2)//Position - 0x2FC764
{
	if (bParam1)
	{
		if (!__LIB_18__::func_186(iParam0))
		{
			__LIB_18__::func_442(iParam0, 1, iParam2);
		}
	}
	else if (__LIB_18__::func_186(iParam0))
	{
		__LIB_18__::func_442(iParam0, 0, iParam2);
	}
}

int func_84(int iParam0)//Position - 0x30D95F
{
	var* uVar0;
	if (__LIB_0__::func_80())
	{
		return 1;
	}
	if (__LIB_12__::func_696())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4718592.f_116811)))
	{
		return 1;
	}
	if (__LIB_2__::func_290())
	{
		return 1;
	}
	__LIB_2__::func_289();
	DATAFILE::DATAFILE_CREATE(0);
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	if (iParam0 == 0)
	{
		Global_1922915++;
		DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1922915);
		DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1922915.f_2);
		DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		Global_1922940.f_1++;
		DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1922940.f_1);
		DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
		DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1922940.f_4);
		DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
	}
	if (iParam0 == 0)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_4718592.f_116811), 0f, __LIB_2__::func_288(iParam0), 0))
		{
		}
	}
	else if (iParam0 == 1 || iParam0 == 4)
	{
		if (DATAFILE::UGC_SET_PLAYER_DATA(&(Global_1048576.f_44), 0f, __LIB_2__::func_288(iParam0), 0))
		{
		}
	}
	__LIB_2__::func_287();
	__LIB_2__::func_289();
	NETWORK::UGC_CLEAR_MODIFY_RESULT();
	return 1;
}

int func_85(var uParam0, struct<3> Param1, float fParam2)//Position - 0xB045
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_2))
	{
		return 1;
	}
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = false;
	bVar4 = true;
	STREAMING::REQUEST_MODEL(*uParam0);
	if (STREAMING::HAS_MODEL_LOADED(*uParam0))
	{
		if (!__LIB_0__::func_86(Param1))
		{
			if (__LIB_0__::func_957(&(uParam0->f_2), *uParam0, Param1, fParam2, bVar0, bVar1, bVar2, bVar3, bVar4, 1, 0, 0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_86(char* sParam0, var uParam1, int iParam2)//Position - 0x10CA24
{
	var* uVar0;
	float fVar1;
	if (__LIB_12__::func_696())
	{
		return 1;
	}
	if (__LIB_0__::func_80())
	{
		return 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 1;
	}
	switch (*uParam1)
	{
		case 0:
			if (__LIB_2__::func_290() || NETWORK::UGC_IS_MODIFYING())
			{
				return 0;
			}
			__LIB_2__::func_289();
			*uParam1++;
			break;
		case 1:
			DATAFILE::DATAFILE_CREATE(0);
			uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
			if (iParam2 == 0)
			{
				if (BitTest(uParam1->f_1, 3))
				{
					Global_1922915++;
				}
				if (Global_1922915.f_5 == 0)
				{
					if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 1)
					{
						__LIB_2__::func_69(1153, -1);
						if (__LIB_1__::func_360(1153, -1, 0) > 25)
						{
							if (!__LIB_1__::func_676(15, -1))
							{
								__LIB_2__::func_183(15, 1, -1);
							}
						}
					}
					else if (__LIB_1__::func_448(PLAYER::PLAYER_ID()) == 2)
					{
						__LIB_2__::func_69(1152, -1);
						if (__LIB_1__::func_360(1152, -1, 0) > 25)
						{
							if (!__LIB_1__::func_676(16, -1))
							{
								__LIB_2__::func_183(16, 1, -1);
							}
						}
					}
				}
				Global_1922915.f_5 = 1;
				if (BitTest(uParam1->f_1, 2))
				{
					Global_1922915.f_6 = 1;
				}
				else
				{
					Global_1922915.f_6 = 0;
				}
				if (!BitTest(uParam1->f_1, 3))
				{
					Global_1922915.f_2++;
				}
				if (Global_1922915.f_2 < 1)
				{
					Global_1922915.f_2 = 1;
				}
				DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1922915);
				if (BitTest(uParam1->f_1, 3))
				{
					DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
				}
				if (!BitTest(uParam1->f_1, 3))
				{
					DATAFILE::DATADICT_SET_INT(uVar0, "plyd", 1);
				}
				DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1922915.f_2);
				DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
				DATAFILE::DATADICT_SET_INT(uVar0, "fl", Global_1922915.f_8);
				DATAFILE::DATADICT_SET_BOOL(uVar0, "rmv", Global_1922915.f_4);
				Global_1922915.f_4 = 0;
			}
			else if (iParam2 == 1)
			{
				Global_1922940.f_4++;
				if (Global_1922940.f_4 < 1)
				{
					Global_1922940.f_4 = 1;
				}
				DATAFILE::DATADICT_SET_INT(uVar0, "plyd", 1);
				DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
				if (Global_1922940.f_1 != 0)
				{
					DATAFILE::DATADICT_SET_INT(uVar0, "quitd", 1);
				}
				DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1922940.f_1);
			}
			else if (iParam2 == 4)
			{
				Global_1922940.f_4++;
				if (Global_1922940.f_4 < 1)
				{
					Global_1922940.f_4 = 1;
				}
				DATAFILE::DATADICT_SET_INT(uVar0, "ply", Global_1922940.f_4);
				DATAFILE::DATADICT_SET_INT(uVar0, "plyd", 1);
				DATAFILE::DATADICT_SET_INT(uVar0, "lp", NETWORK::GET_CLOUD_TIME_AS_INT());
				DATAFILE::DATADICT_SET_INT(uVar0, "quit", Global_1922940.f_1);
				DATAFILE::DATADICT_SET_INT(uVar0, "fl", Global_1922940.f_2);
			}
			*uParam1++;
			break;
		case 2:
			if (BitTest(uParam1->f_1, 5))
			{
				fVar1 = -1f;
			}
			else if (BitTest(uParam1->f_1, 1))
			{
				fVar1 = SYSTEM::TO_FLOAT(Global_1922915.f_6);
			}
			else
			{
				fVar1 = -1f;
			}
			if (DATAFILE::UGC_SET_PLAYER_DATA(sParam0, fVar1, __LIB_2__::func_288(iParam2), 0))
			{
				*uParam1++;
				uParam1->f_2 = NETWORK::GET_NETWORK_TIME();
			}
			break;
		case 3:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam1->f_2, NETWORK::GET_NETWORK_TIME())) > 35000)
			{
				__LIB_2__::func_287();
				__LIB_2__::func_289();
				*uParam1 = 0;
				NETWORK::UGC_CLEAR_MODIFY_RESULT();
				return 1;
			}
			if (NETWORK::UGC_HAS_MODIFY_FINISHED())
			{
				if (NETWORK::UGC_DID_MODIFY_SUCCEED())
				{
				}
				__LIB_2__::func_287();
				__LIB_2__::func_289();
				*uParam1 = 0;
				NETWORK::UGC_CLEAR_MODIFY_RESULT();
				return 1;
			}
			break;
	}
	return 0;
}

int func_87(int iParam0)//Position - 0x155FF6
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	iVar1 = __LIB_3__::func_300();
	if (Global_2726597 == 0)
	{
		return 0;
	}
	if (__LIB_2__::func_276())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (__LIB_3__::func_188() || __LIB_3__::func_187()))
		{
			Global_2725407 = 1;
		}
	}
	Global_2726597 = 0;
	if (Global_1577884)
	{
		iVar0 = 1;
	}
	if (Global_2725407)
	{
		iVar0 = 1;
	}
	if (Global_2725406)
	{
		iVar0 = 1;
	}
	if (__LIB_0__::func_703(Global_112414.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2725346)
	{
		iVar0 = 1;
	}
	if (__LIB_2__::func_274(512))
	{
		iVar0 = 1;
	}
	if (__LIB_2__::func_273(128))
	{
		iVar0 = 1;
	}
	if (Global_1577908 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (__LIB_0__::func_157(0))
	{
		iVar0 = 0;
	}
	if (Global_2725901)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!__LIB_2__::func_713())
		{
			if (Global_4718592.f_117079 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (__LIB_2__::func_441())
	{
		iVar0 = 0;
	}
	if ((Global_2725407 || Global_2725406) || Global_1577884)
	{
		if (__LIB_3__::func_187())
		{
			iVar0 = 0;
		}
	}
	if (Global_1837301)
	{
		iVar0 = 2;
	}
	Global_2725901 = 0;
	Global_2725406 = 0;
	Global_2725407 = 0;
	Global_1577884 = 0;
	Global_2725346 = 0;
	__LIB_2__::func_712(&(Global_112414.f_1), 32);
	__LIB_2__::func_270(512);
	__LIB_2__::func_269(128);
	Global_1837301 = 0;
	return iVar0;
}

void func_88(struct<3> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x1758C5
{
	struct<28> Var0;
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		Global_2676213.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2676213.f_6;
	Var0 = { Param0 };
	Var0.f_5 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = iParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = iParam7;
	Var0.f_22 = iParam8;
	if (__LIB_8__::func_917(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676213 = { Var0 };
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0xF4C11
{
	var uVar0;
	int iVar1;
	if (iParam2 == 0)
	{
	}
	if (__LIB_0__::func_980())
	{
		return 0;
	}
	uVar0 = __LIB_18__::func_500(iParam0, iParam1);
	iVar1 = __LIB_3__::func_371(iParam0);
	return BitTest(uVar0, __LIB_0__::func_160(iVar1));
}

void func_90(var uParam0)//Position - 0x1AE836
{
	if (Global_1931426)
	{
		MISC::SET_BIT(&(uParam0->f_47), 1);
		__LIB_10__::func_265(&(uParam0->f_47), uParam0->f_47.f_1457);
	}
	if ((!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(0))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		MISC::SET_BIT(&(uParam0->f_47), 1);
		__LIB_10__::func_265(&(uParam0->f_47), uParam0->f_47.f_1457);
	}
	if ((!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, __LIB_6__::func_207(1))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/)))
	{
		if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_746(1898, 1, -1);
			}
			else if (__LIB_1__::func_195(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_746(1901, 1, -1);
			}
			else if (__LIB_1__::func_838(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_1__::func_746(1895, 1, -1);
			}
			else if (__LIB_1__::func_838(PLAYER::PLAYER_ID(), 3))
			{
				__LIB_1__::func_746(1904, 1, -1);
			}
			__LIB_10__::func_920();
			MISC::SET_BIT(&(uParam0->f_47), 1);
			MISC::SET_BIT(&Global_2621446, 6);
			MISC::SET_BIT(&(uParam0->f_1), 7);
			MISC::SET_BIT(&Global_2621446, 13);
			if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
			{
				__LIB_11__::func_833();
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			__LIB_10__::func_265(&(uParam0->f_47), uParam0->f_47.f_1457);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			__LIB_16__::func_218();
		}
	}
}

void func_91(int iParam0)//Position - 0xDE8E4
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	iVar0 = __LIB_0__::func_628();
	if (Global_1575058)
	{
		sVar1 = __LIB_7__::func_702(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		iVar3 = __LIB_1__::func_724(&Global_2727815, 1, 0);
		__LIB_0__::func_627(&Global_2727813, 1, 0);
		NETWORK::NETWORK_TRANSITION_ADD_STAGE(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		__LIB_15__::func_180();
	}
	Global_1574991 = iParam0;
}

void func_92(int iParam0)//Position - 0x2296D5
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	__LIB_2__::func_91();
	__LIB_12__::func_846(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		switch (__LIB_3__::func_616())
		{
			case 0:
				__LIB_3__::func_986(*iParam0, iVar0, &Var1, &fVar2);
				break;
			case 1:
				__LIB_4__::func_147(*iParam0, iVar0, &Var1, &fVar2);
				break;
			case 3:
			case 4:
				__LIB_4__::func_147(*iParam0, iVar0, &Var1, &fVar2);
				break;
		}
		__LIB_12__::func_17(Var1, fVar2, (1f - (0.1f * IntToFloat(iVar0))));
		iVar0++;
	}
}

void func_93(int iParam0)//Position - 0x2D8C24
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_9__::func_5(iParam0);
	if (iVar0 != -1)
	{
		if (__LIB_0__::func_112())
		{
			__LIB_9__::func_512(joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"), iVar0, &iVar1, 0, 0, 0);
		}
		else
		{
			MONEY::NETWORK_EARN_CARCLUB_MEMBERSHIP(iVar0);
		}
	}
}

var func_94(int iParam0, int iParam1, int iParam2)//Position - 0x2FFFA3
{
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 1);
}

float func_95(int iParam0, var uParam1, var uParam2)//Position - 0xFB711
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar1 = 0f;
	fVar2 = 0f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_3__::func_538())
	{
		fVar2 = (fVar2 + __LIB_12__::func_580());
		fVar1 = (1f - fVar2);
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * fVar1));
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = __LIB_18__::func_674(iParam0);
		if (iVar0 == 3)
		{
			fVar2 = (fVar2 + 0.05f);
		}
		else if (iVar0 == 2)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (iVar0 == 1)
		{
			fVar2 = (fVar2 + 0.15f);
		}
		if (fVar3 >= 100f)
		{
			fVar2 = (fVar2 + 0.1f);
		}
		else if (fVar3 >= 80f)
		{
			fVar2 = (fVar2 + 0.08f);
		}
		else if (fVar3 >= 60f)
		{
			fVar2 = (fVar2 + 0.06f);
		}
		else if (fVar3 >= 40f)
		{
			fVar2 = (fVar2 + 0.04f);
		}
		else if (fVar3 >= 20f)
		{
			fVar2 = (fVar2 + 0.02f);
		}
		fVar2 = (fVar2 + __LIB_18__::func_498(iParam0));
		fVar2 = (fVar2 + __LIB_18__::func_497());
		fVar2 = (fVar2 + __LIB_18__::func_507());
		fVar2 = (fVar2 + __LIB_12__::func_580());
		if (iLocal_64 == 1)
		{
			fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
		}
		if (iLocal_64 == 0)
		{
			if (__LIB_15__::func_885())
			{
				fVar2 = (fVar2 + (SYSTEM::TO_FLOAT(Global_262145.f_132 /* Tunable: SHOP_GOODBOY_DISCOUNT_PERCENT */) / 100f));
				iLocal_64 = 1;
			}
			else
			{
				iLocal_64 = -1;
			}
		}
		fVar1 = (1f - fVar2);
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
		*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * Global_262145.f_77 /* Tunable: WEAPONS_SHOP_MULTIPLIER */));
		*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * (1f - __LIB_12__::func_580())));
		return fVar1;
	}
	iVar0 = __LIB_18__::func_674(iParam0);
	if (iVar0 == 3)
	{
		fVar2 = (fVar2 + 0.1f);
	}
	else if (iVar0 == 2)
	{
		fVar2 = (fVar2 + 0.15f);
	}
	else if (iVar0 == 1)
	{
		fVar2 = (fVar2 + 0.25f);
	}
	fVar1 = (1f - fVar2);
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam1) * fVar1));
	*uParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*uParam2) * fVar1));
	return fVar1;
}

bool func_96()//Position - 0x2C7E
{
	return (Global_23011.f_5 || Global_23011.f_6);
}

void func_97()//Position - 0x2C96
{
	Global_2723612.f_3 = 1;
}

int func_98()//Position - 0x2CA5
{
	SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration");
	SCRIPT::REQUEST_SCRIPT("UGC_Global_Registration_2");
	if (SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration") && SCRIPT::HAS_SCRIPT_LOADED("UGC_Global_Registration_2"))
	{
		SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration", 128);
		SYSTEM::START_NEW_SCRIPT("UGC_Global_Registration_2", 128);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration");
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("UGC_Global_Registration_2");
		return 1;
	}
	return 0;
}

int func_99()//Position - 0x80CF
{
	int iVar0;
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (WEAPON::GET_WEAPONTYPE_GROUP(iVar0) == joaat("GROUP_SNIPER"))
		{
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 42 /*INPUT_SNIPER_ZOOM_IN_SECONDARY*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 43 /*INPUT_SNIPER_ZOOM_OUT_SECONDARY*/))
					{
						return 1;
					}
				}
				else if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 40 /*INPUT_SNIPER_ZOOM_IN_ONLY*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 41 /*INPUT_SNIPER_ZOOM_OUT_ONLY*/))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_100()//Position - 0x98D0
{
	MISC::CLEAR_BIT(&(Global_2714762.f_2), 8);
}

struct<15> func_101(int iParam0, int iParam1)//Position - 0xA4B0
{
	struct<15> Var0;
	switch (iParam0)
	{
		case 176:
			Var0.f_0 = -247372382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 1204.57f, -3110.4f, 6.57f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 1:
			Var0.f_0 = -1198408382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 467.3716f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 2:
			Var0.f_0 = 1651829484;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door2");
			Var0.f_3 = { 469.9679f, -1014.452f, 26.5362f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 3:
			Var0.f_0 = -1209329220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor02");
			Var0.f_3 = { 464.3613f, -984.6779f, 43.8344f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 4:
			Var0.f_0 = 534621945;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door01");
			Var0.f_3 = { 434.75f, -980.61f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 5:
			Var0.f_0 = -457131900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_door002");
			Var0.f_3 = { 434.75f, -983.22f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 6:
			Var0.f_0 = 163748837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3589.1f, 3671.5f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 7:
			Var0.f_0 = -1249217678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_biolab_g_door");
			Var0.f_3 = { 3587.6f, 3663.3f, 35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 33:
			Var0.f_0 = 1984929564;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3627.71f, 3746.72f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 34:
			Var0.f_0 = -1532658745;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_shutter2");
			Var0.f_3 = { 3620.84f, 3751.53f, 27.69f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 36:
			Var0.f_0 = 1877357900;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor");
			Var0.f_3 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 35:
			Var0.f_0 = -769623617;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_abbmaindoor2");
			Var0.f_3 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 179:
			Var0.f_0 = 738966015;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1138.47f, -2730.45f, 12.95f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 178:
			Var0.f_0 = 969004395;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1151.2043f, -2723.1023f, 12.946f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 118:
			Var0.f_0 = 1036961952;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -977.5174f, -2837.2644f, 12.9549f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 119:
			Var0.f_0 = 1864280899;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -990.2963f, -2829.8872f, 12.9499f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 120:
			Var0.f_0 = -355737150;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1213.4f, -2079.3003f, 12.907f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 121:
			Var0.f_0 = -1170618471;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -967.4473f, -2778.495f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 122:
			Var0.f_0 = -1300449249;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -974.5734f, -2774.3809f, 14.4099f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 123:
			Var0.f_0 = -1529668404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -971.1018f, -2776.3855f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 124:
			Var0.f_0 = 1577455399;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -970.9188f, -2776.4907f, 14.409f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 125:
			Var0.f_0 = 2142655111;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -935.2114f, -2767.3967f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 126:
			Var0.f_0 = 996723181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -933.1581f, -2763.9546f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 127:
			Var0.f_0 = 1830923614;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -933.0535f, -2763.7793f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 128:
			Var0.f_0 = -125385686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -931.0002f, -2760.3372f, 14.3882f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 129:
			Var0.f_0 = 745417724;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -773.2438f, -2842.6775f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 130:
			Var0.f_0 = -1305304906;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -769.7721f, -2844.682f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 131:
			Var0.f_0 = -1543175077;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_r");
			Var0.f_3 = { -769.6071f, -2844.777f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 132:
			Var0.f_0 = -811770997;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_02gate6_l");
			Var0.f_3 = { -766.1354f, -2846.7815f, 14.2715f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 0;
			break;
		case 133:
			Var0.f_0 = 29310942;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -828.9456f, -2964.3037f, 14.2758f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 134:
			Var0.f_0 = -247292187;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -907.7999f, -3100.874f, 14.2808f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 135:
			Var0.f_0 = 460387137;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -833.4395f, -3186.7095f, 14.267f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 136:
			Var0.f_0 = 106875165;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -830.0544f, -3391.1628f, 14.1972f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 137:
			Var0.f_0 = 923052648;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -913.0834f, -3534.9697f, 14.1924f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 138:
			Var0.f_0 = -1237505857;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -971.6149f, -3549.152f, 14.2727f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 139:
			Var0.f_0 = -1938172615;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1017.6921f, -3563.2173f, 14.2767f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 140:
			Var0.f_0 = -810513079;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1146.8314f, -3546.6382f, 14.2595f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 141:
			Var0.f_0 = 69924413;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1260.8966f, -3480.764f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 142:
			Var0.f_0 = -152773711;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1351.1328f, -3404.1616f, 14.1721f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 143:
			Var0.f_0 = 681951026;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1409.5073f, -3370.4614f, 14.2068f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 144:
			Var0.f_0 = 877254262;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1831.804f, -3224.9663f, 14.3119f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 145:
			Var0.f_0 = 1712929328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1942.2893f, -3161.1904f, 14.2981f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 146:
			Var0.f_0 = 1482661565;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1927.5635f, -3076.269f, 14.4569f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 147:
			Var0.f_0 = 1782694529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1951.6956f, -3003.8457f, 14.4418f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 148:
			Var0.f_0 = -1714183772;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1836.875f, -2804.969f, 14.4557f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 149:
			Var0.f_0 = -1953037013;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_09gate1");
			Var0.f_3 = { -1802.6915f, -2745.7615f, 14.448f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 150:
			Var0.f_0 = -795813070;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1099.5308f, -2020.8026f, 12.1745f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 151:
			Var0.f_0 = -580979506;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -994.4996f, -2341.6482f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 152:
			Var0.f_0 = -1426452475;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -984.0709f, -2348.4001f, 12.9448f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 153:
			Var0.f_0 = -1178784373;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1008.0708f, -2406.751f, 12.977f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 154:
			Var0.f_0 = 94815597;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -1015.4854f, -2419.5828f, 12.9586f };
			if (iParam1 == 98)
			{
				Var0.f_6 = 1;
				Var0.f_10 = 1;
				Var0.f_1 = 98;
				Var0.f_11 = 0;
			}
			else
			{
				Var0.f_1 = 99;
				Var0.f_7 = 1;
				Var0.f_8 = 1;
				Var0.f_11 = 0;
			}
			break;
		case 62:
			Var0.f_0 = 208246292;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_lester_doorfront");
			Var0.f_3 = { 1273.82f, -1720.7f, 54.92f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 63:
			Var0.f_0 = -1357778570;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_tort_door");
			Var0.f_3 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 74:
			Var0.f_0 = -80542775;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_janitor_frontdoor");
			Var0.f_3 = { -107.5373f, -9.0181f, 70.6708f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 72:
			Var0.f_0 = 868388666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_deviantfrontdoor");
			Var0.f_3 = { -128.33f, -1457.17f, 37.94f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 73:
			Var0.f_0 = 2137238404;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_po_door");
			Var0.f_3 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 64:
			Var0.f_0 = 1494493065;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1142.9f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 65:
			Var0.f_0 = 1388518119;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door3");
			Var0.f_3 = { 1395.92f, 1140.7f, 114.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 66:
			Var0.f_0 = -2119698256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1390.52f, 1163.44f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 67:
			Var0.f_0 = 1935563805;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1390.52f, 1161.24f, 114.38f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 68:
			Var0.f_0 = -271559421;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1408.07f, 1158.97f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 69:
			Var0.f_0 = -1985574735;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1408.07f, 1161.17f, 114.48f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 70:
			Var0.f_0 = -1132368282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_l");
			Var0.f_3 = { 1409.29f, 1146.25f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 71:
			Var0.f_0 = -1508687478;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ra_door1_r");
			Var0.f_3 = { 1409.29f, 1148.45f, 114.49f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 75:
			Var0.f_0 = 689210336;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_l");
			Var0.f_3 = { -1387.05f, -586.58f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 76:
			Var0.f_0 = 510553748;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_door_r");
			Var0.f_3 = { -1389.24f, -588f, 30.47f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 77:
			Var0.f_0 = 313127870;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01c");
			Var0.f_3 = { 25.03f, -664.6f, 31.04f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		case 78:
			Var0.f_0 = 145416128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_gate_01d");
			Var0.f_3 = { -72.75f, -682.17f, 33.27f };
			Var0.f_7 = 1;
			Var0.f_8 = 5;
			Var0.f_11 = 1;
			break;
		case 60:
			Var0.f_0 = -948170937;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door02");
			Var0.f_3 = { -111.48f, 6463.94f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 61:
			Var0.f_0 = -684544332;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bank4door01");
			Var0.f_3 = { -109.65f, 6462.11f, 31.985f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 12:
			Var0.f_0 = -1135190791;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate_pris");
			Var0.f_3 = { 256.3116f, 220.6579f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 13:
			Var0.f_0 = 1011604710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_v_ilev_bk_gate2_pris");
			Var0.f_3 = { 262.1981f, 222.5188f, 106.4296f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 14:
			Var0.f_0 = -403267826;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -2965.821f, 481.63f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 15:
			Var0.f_0 = -171885917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -2965.71f, 484.219f, 16.048f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 16:
			Var0.f_0 = 1734755709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1176.49f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 17:
			Var0.f_0 = -1006108989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1173.9f, 2703.61f, 38.44f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 18:
			Var0.f_0 = 2012837225;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 19:
			Var0.f_0 = 314747645;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 20:
			Var0.f_0 = 571329950;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -1215.39f, -328.52f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 21:
			Var0.f_0 = 266021177;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -1213.07f, -327.35f, 38.13f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 22:
			Var0.f_0 = -171153163;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 149.63f, -1037.23f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 23:
			Var0.f_0 = -1163398483;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 152.06f, -1038.12f, 29.72f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 24:
			Var0.f_0 = 1080982134;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { 313.96f, -275.6f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 25:
			Var0.f_0 = -775086795;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { 316.39f, -276.49f, 54.52f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 26:
			Var0.f_0 = -1819100989;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor2");
			Var0.f_3 = { -348.8109f, -47.2621f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 27:
			Var0.f_0 = 1787848387;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_genbankdoor1");
			Var0.f_3 = { -351.2598f, -46.4122f, 49.3876f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 58:
			Var0.f_0 = 1598253329;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door02");
			Var0.f_3 = { 106.38f, -742.7f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 59:
			Var0.f_0 = 1369034174;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fibl_door01");
			Var0.f_3 = { 105.76f, -746.65f, 46.18f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 183:
			Var0.f_0 = -1814497429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_l");
			Var0.f_3 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 184:
			Var0.f_0 = 1526269356;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_01_trlrdoor_r");
			Var0.f_3 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 185:
			Var0.f_0 = 422781221;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frntdoor");
			Var0.f_3 = { 0.2169f, -1823.3031f, 29.6391f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 186:
			Var0.f_0 = -1066241800;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 187:
			Var0.f_0 = 1959909816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 188:
			Var0.f_0 = 1931749328;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_cs4_05_tdoor");
			Var0.f_3 = { 31.918f, 3666.8535f, 40.8586f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 189:
			Var0.f_0 = 1624933181;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_magenta_door");
			Var0.f_3 = { 29.102f, 3661.4893f, 40.8547f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 290:
			Var0.f_0 = -1184370912;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorb");
			Var0.f_3 = { 776.8f, 4184.64f, 41.91f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 291:
			Var0.f_0 = -1023333176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("apa_prop_apa_cutscene_doora");
			Var0.f_3 = { 722.399f, 4187.952f, 41.231f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 292:
			Var0.f_0 = 651841620;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_r");
			Var0.f_3 = { 610.594f, -421.83f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 293:
			Var0.f_0 = 1049460666;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("hei_prop_heist_cutscene_doorc_l");
			Var0.f_3 = { 610.874f, -419.365f, 24.979f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 294:
			Var0.f_0 = 1343869835;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { 492f, -3116f, 5f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_12 = 0f;
			break;
		case 295:
			Var0.f_0 = 207506449;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { 476f, -3116f, 5f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_12 = 0f;
			break;
		case 296:
			Var0.f_0 = -2110173063;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("lr_prop_boathousedoor_l");
			Var0.f_3 = { 1527.7452f, 3778.1309f, 34.7106f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 297:
			Var0.f_0 = -1032072975;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("lr_prop_boathousedoor_r");
			Var0.f_3 = { 1530.7625f, 3780.244f, 34.7104f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
	}
	switch (iParam0)
	{
		case 190:
			Var0.f_0 = 1255781408;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -687.73f, -2458.82f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 191:
			Var0.f_0 = 1901756713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -697.82f, -1226.5f, 12.91f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 192:
			Var0.f_0 = 1719167837;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { -692.77f, -2455.93f, 12.9f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 194:
			Var0.f_0 = 389336283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -891.93f, -2748.71f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 195:
			Var0.f_0 = 732598411;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -896.46f, -2746.42f, 12.95f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 196:
			Var0.f_0 = 1348295152;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_airport_01");
			Var0.f_3 = { -859.73f, -2683.9f, 12.76f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 197:
			Var0.f_0 = 1547432097;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -1019.61f, -1897.02f, 13.37f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 198:
			Var0.f_0 = 1231145709;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -160.88f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 199:
			Var0.f_0 = 934782873;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { -148.71f, -2636.2f, 5.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 200:
			Var0.f_0 = 652215786;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 237.78f, -2936.96f, 5.05f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 201:
			Var0.f_0 = -1791270241;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -188.28f, -2204.61f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 202:
			Var0.f_0 = -2108474161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -127.56f, -2185.29f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 203:
			Var0.f_0 = -959673820;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_docks_ld");
			Var0.f_3 = { -33.22f, -2141.27f, 9.3f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 204:
			Var0.f_0 = -653316439;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1000.68f, -2454.99f, 27.57f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 205:
			Var0.f_0 = -1560558973;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1012.91f, -2456.23f, 27.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 206:
			Var0.f_0 = 1221988161;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1028.08f, -2364.72f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 207:
			Var0.f_0 = 1998121926;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1033.22f, -2299.1f, 29.52f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 208:
			Var0.f_0 = 1778504088;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1022.4f, -2417.13f, 28.13f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 209:
			Var0.f_0 = -1618264918;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_military_01");
			Var0.f_3 = { 2485.44f, -432.71f, 91.97f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 210:
			Var0.f_0 = -1881039529;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 2485.09f, -335.84f, 91.98f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 211:
			Var0.f_0 = -1105298992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 2491.97f, -303.48f, 91.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 212:
			Var0.f_0 = -734026222;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1944.86f, -957.69f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 213:
			Var0.f_0 = 895772842;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 1956.74f, -956.86f, 78.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 214:
			Var0.f_0 = 77825833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1845f, 2604.81f, 44.64f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 215:
			Var0.f_0 = 308880052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1818.55f, 2604.81f, 44.6f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 216:
			Var0.f_0 = -620547091;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1799.74f, 2616.98f, 44.61f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 217:
			Var0.f_0 = -1471033717;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1813.4f, 2488.63f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 218:
			Var0.f_0 = -1233360160;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1808.82f, 2474.88f, 44.47f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 219:
			Var0.f_0 = -2075785612;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.19f, 2426.73f, 44.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 220:
			Var0.f_0 = 1874713956;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1749.22f, 2420.28f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 221:
			Var0.f_0 = 2113436121;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1667.61f, 2408.11f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 222:
			Var0.f_0 = 1266488547;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1661.76f, 2748.32f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 223:
			Var0.f_0 = 2060464373;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1653.21f, 2409.71f, 44.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 224:
			Var0.f_0 = -1207063697;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1558.14f, 2469.87f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 225:
			Var0.f_0 = -565839905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1551.18f, 2482.58f, 44.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 226:
			Var0.f_0 = -1189958275;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.41f, 2576.6f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 227:
			Var0.f_0 = -1492973218;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1547.99f, 2591.08f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 228:
			Var0.f_0 = 348251354;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1576.19f, 2667.23f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 229:
			Var0.f_0 = 40845365;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1584.63f, 2679.02f, 44.51f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 230:
			Var0.f_0 = -95047678;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1648.95f, 2741.55f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 231:
			Var0.f_0 = -267871384;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1762.58f, 2751.9f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 232:
			Var0.f_0 = 1572566732;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1776.26f, 2747.1f, 44.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 233:
			Var0.f_0 = 2106931155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1829.8f, 2702.92f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 234:
			Var0.f_0 = -1899079099;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_prison_01");
			Var0.f_3 = { 1834.92f, 2689.37f, 44.45f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 235:
			Var0.f_0 = -1592787256;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 222.07f, -2013.99f, 18.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 236:
			Var0.f_0 = -1902159381;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 210.93f, -2022.58f, 17.65f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 237:
			Var0.f_0 = -1605042858;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 459.7f, -2002.94f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 238:
			Var0.f_0 = -1558510878;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 451.45f, -1994.01f, 22.07f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 239:
			Var0.f_0 = -1259755905;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 455.74f, -1944.85f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 240:
			Var0.f_0 = -42223710;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 466.76f, -1939.65f, 23.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 241:
			Var0.f_0 = -687183168;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 539.83f, -1901.88f, 24.22f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 242:
			Var0.f_0 = 435613848;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 550.87f, -1896.75f, 24.15f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 243:
			Var0.f_0 = 1139523801;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 564.12f, -1903f, 23.71f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 244:
			Var0.f_0 = 1126088511;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01b");
			Var0.f_3 = { 570.6271f, -1913.332f, 23.7104f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 245:
			Var0.f_0 = 827399076;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 1081.65f, -1818.42f, 36.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 246:
			Var0.f_0 = 1126285129;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 987.52f, -1176.82f, 24.55f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 247:
			Var0.f_0 = 829955062;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 705.64f, -1319.67f, 24.96f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 248:
			Var0.f_0 = -1633749438;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 712.95f, -1329.42f, 24.99f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 249:
			Var0.f_0 = -1934732703;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 796.46f, -921.49f, 24.4f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 250:
			Var0.f_0 = 1737951283;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.78f, -909.33f, 24.36f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 251:
			Var0.f_0 = -703535835;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 795.16f, -896.64f, 24.1f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 252:
			Var0.f_0 = -987085992;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_01");
			Var0.f_3 = { 794.48f, -884.48f, 24.06f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 253:
			Var0.f_0 = -1736447128;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 546.17f, -1869.94f, 24.53f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 254:
			Var0.f_0 = 1725499419;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 492.33f, -1410.47f, 28.43f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 255:
			Var0.f_0 = 2032577718;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 484.57f, -1408.5f, 28.48f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 256:
			Var0.f_0 = 2130786415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 469.33f, -1272.7f, 28.82f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 257:
			Var0.f_0 = -783852294;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 487.87f, -1272.59f, 28.86f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 258:
			Var0.f_0 = -493650030;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 488.89f, -1011.67f, 27.14f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 259:
			Var0.f_0 = -1403186394;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 527.55f, -1597.33f, 28.39f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 260:
			Var0.f_0 = -1105283415;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 544.94f, -1649.75f, 27.49f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 261:
			Var0.f_0 = 132270639;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate2");
			Var0.f_3 = { 151.35f, -1668.64f, 28.77f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 262:
			Var0.f_0 = 429714852;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_fnclink_03gate1");
			Var0.f_3 = { 47.2f, -1448.3f, 28.44f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 263:
			Var0.f_0 = 712231657;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1876.37f, 194.85f, 83.33f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 264:
			Var0.f_0 = 2136700087;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1868.31f, 183.79f, 83.34f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 265:
			Var0.f_0 = 218566672;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1452.43f, 37.03f, 51.75f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 266:
			Var0.f_0 = 2061822982;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1483.1f, 46.93f, 53.26f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 267:
			Var0.f_0 = 1617901339;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1507.47f, 39.16f, 54.41f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 268:
			Var0.f_0 = 1859638252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -1528.36f, 35.77f, 55.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 269:
			Var0.f_0 = -1008173552;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1583.28f, 40.14f, 59.32f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 270:
			Var0.f_0 = 1403985307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -1616.23f, 79.78f, 60.78f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 271:
			Var0.f_0 = -1988622032;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -924.98f, -9.03f, 43.28f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 272:
			Var0.f_0 = 1716077491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_03a");
			Var0.f_3 = { -905.7f, 14.66f, 45.66f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 273:
			Var0.f_0 = -1151537699;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_02_ld");
			Var0.f_3 = { -844.05f, 155.96f, 66.03f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 274:
			Var0.f_0 = 1236503176;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_lrggate_04a");
			Var0.f_3 = { -914.32f, 184.54f, 68.42f };
			Var0.f_6 = 1;
			Var0.f_10 = 1;
			break;
		case 79:
			Var0.f_0 = -1725728509;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trev_doorfront");
			Var0.f_3 = { -1149.71f, -1521.09f, 10.79f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 80:
			Var0.f_0 = -854930290;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 81:
			Var0.f_0 = -86464467;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ct_door01");
			Var0.f_3 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 0:
			Var0.f_0 = 1066535586;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 347.8678f, -1003.3159f, -99.0952f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 275:
			Var0.f_0 = -153506146;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { 257.2896f, -1001.2546f, -98.8587f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 276:
			Var0.f_0 = joaat("MP_MED_APT_BATH_DOOR");
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorw");
			Var0.f_3 = { 348.2157f, -993.1122f, -99.043f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 277:
			Var0.f_0 = 1022411403;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_bedrmdoor");
			Var0.f_3 = { -789.3017f, 332.0119f, 201.5596f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			Var0.f_11 = 1;
			break;
		case 82:
			Var0.f_0 = -1858596497;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ld_garaged_01");
			Var0.f_3 = { -815.3282f, 185.9571f, 72.99f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 85:
			Var0.f_0 = 360545155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_windowwc");
			Var0.f_3 = { -802.7333f, 167.5041f, 77.5824f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 83:
			Var0.f_0 = -1846031173;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_l");
			Var0.f_3 = { -816.716f, 179.098f, 72.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 84:
			Var0.f_0 = 1966183215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_doorm_r");
			Var0.f_3 = { -816.1068f, 177.5109f, 72.8274f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 86:
			Var0.f_0 = -452757037;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -796.5657f, 177.2214f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 87:
			Var0.f_0 = 422961723;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.5051f, 178.0124f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 88:
			Var0.f_0 = 113556825;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_l");
			Var0.f_3 = { -793.3943f, 180.5075f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 89:
			Var0.f_0 = 1035119412;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_bh1_48_backdoor_r");
			Var0.f_3 = { -794.1853f, 182.568f, 73.0405f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 90:
			Var0.f_0 = 929216155;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_mm_door");
			Var0.f_3 = { -806.2817f, 187.0246f, 72.624f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 91:
			Var0.f_0 = -2017851706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_l");
			Var0.f_3 = { -1041.2676f, 4906.0967f, 209.2002f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = -1f;
			Var0.f_11 = 1;
			break;
		case 92:
			Var0.f_0 = -90706816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gate_cult_01_r");
			Var0.f_3 = { -1044.749f, 4914.9717f, 209.1932f };
			Var0.f_7 = 1;
			Var0.f_8 = 4;
			Var0.f_12 = 1f;
			Var0.f_11 = 1;
			break;
		case 93:
			Var0.f_0 = -1701678154;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_trevtraildr");
			Var0.f_3 = { 1972.7689f, 3815.366f, 33.6633f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 94:
			Var0.f_0 = -2129438429;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fa_frontdoor");
			Var0.f_3 = { -14.8689f, -1441.1821f, 31.192f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 95:
			Var0.f_0 = -670056199;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door8");
			Var0.f_3 = { 716.7808f, -975.4207f, 25.057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 96:
			Var0.f_0 = 917058539;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door7");
			Var0.f_3 = { 719.3818f, -975.4185f, 25.0057f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 286:
			Var0.f_0 = 505794885;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door02");
			Var0.f_3 = { 710f, -964f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 288:
			Var0.f_0 = 998060257;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_l");
			Var0.f_3 = { 3539f, 3673.7f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 289:
			Var0.f_0 = 1685291713;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_bl_doorel_r");
			Var0.f_3 = { 3541.6f, 3673.2f, 20f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 287:
			Var0.f_0 = 856811118;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_store_door");
			Var0.f_3 = { 708f, -962f, 31f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 97:
			Var0.f_0 = 1579789044;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_l");
			Var0.f_3 = { -631.9554f, -236.3333f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 98:
			Var0.f_0 = -740144707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("p_jewel_door_r1");
			Var0.f_3 = { -630.4265f, -238.4375f, 38.2065f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 99:
			Var0.f_0 = 459292593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_door04");
			Var0.f_3 = { 1395.6134f, 3609.327f, 35.1308f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 100:
			Var0.f_0 = 699522132;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1388.4987f, 3614.8276f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 101:
			Var0.f_0 = 919402122;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ss_doorext");
			Var0.f_3 = { 1399.6996f, 3607.763f, 39.0919f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 102:
			Var0.f_0 = -1009094475;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_com_gar_door_01");
			Var0.f_3 = { 484.5642f, -1315.574f, 30.2033f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 103:
			Var0.f_0 = 1304570179;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_cs_door");
			Var0.f_3 = { 482.8112f, -1311.953f, 29.3506f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 104:
			Var0.f_0 = 1374764510;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_epsstoredoor");
			Var0.f_3 = { 241.3621f, 361.0471f, 105.003f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 105:
			Var0.f_0 = -1326670325;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fh_frontdoor");
			Var0.f_3 = { 7.5179f, 539.526f, 176.1781f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 106:
			Var0.f_0 = -646035010;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch_025c_g_door_01");
			Var0.f_3 = { 18.6504f, 546.3401f, 176.3448f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 8:
			Var0.f_0 = -2020886833;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -59.893f, -1092.9518f, 26.8836f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 9:
			Var0.f_0 = 424893020;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -60.5458f, -1094.7489f, 26.8887f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 10:
			Var0.f_0 = -234058813;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_l");
			Var0.f_3 = { -38.464f, -1108.4462f, 26.7198f };
			Var0.f_7 = 1;
			if (!Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
			{
				Var0.f_8 = 0;
			}
			else
			{
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 11:
			Var0.f_0 = -513447307;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_csr_door_r");
			Var0.f_3 = { -36.6615f, -1109.1016f, 26.7198f };
			Var0.f_7 = 1;
			if (!Global_262145.f_32663 /* Tunable: DISABLE_SIMEON_SHOWROOM */)
			{
				Var0.f_8 = 0;
			}
			else
			{
				Var0.f_8 = 1;
				Var0.f_11 = 1;
			}
			break;
		case 107:
			Var0.f_0 = 777975393;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -608.7289f, -1610.3153f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 108:
			Var0.f_0 = 2134513686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -611.32f, -1610.0886f, 27.1589f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 109:
			Var0.f_0 = -1758213847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_l");
			Var0.f_3 = { -592.9376f, -1631.577f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 110:
			Var0.f_0 = -990993250;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_rc_door3_r");
			Var0.f_3 = { -592.7109f, -1628.986f, 27.1593f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 111:
			Var0.f_0 = -611431917;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -442.66f, 6015.2217f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 112:
			Var0.f_0 = -1988181627;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrf2door");
			Var0.f_3 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 113:
			Var0.f_0 = 1879085215;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_shrfdoor");
			Var0.f_3 = { 1855.6848f, 3683.9302f, 34.5928f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			break;
		case 114:
			Var0.f_0 = -100586674;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_01");
			Var0.f_3 = { -1067.0024f, -1665.6091f, 4.7898f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 115:
			Var0.f_0 = -384071293;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_02");
			Var0.f_3 = { -1064.7632f, -1668.7623f, 4.8084f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 116:
			Var0.f_0 = 1317819491;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_03_ld");
			Var0.f_3 = { -1074.6482f, -1676.1313f, 4.684f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 117:
			Var0.f_0 = -1321526845;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_05");
			Var0.f_3 = { 201.4f, -153.3652f, 57.8522f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 156:
			Var0.f_0 = 96518847;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortl");
			Var0.f_3 = { -1045.1199f, -232.004f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 157:
			Var0.f_0 = 1355864282;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_doorshortr");
			Var0.f_3 = { -1046.5161f, -229.3581f, 39.4379f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 158:
			Var0.f_0 = 1350395200;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door01");
			Var0.f_3 = { -1083.6201f, -260.4167f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 159:
			Var0.f_0 = -351200663;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fb_door02");
			Var0.f_3 = { -1080.9744f, -259.0204f, 38.1867f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 160:
			Var0.f_0 = 1721932052;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gtdoor");
			Var0.f_3 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 304:
			Var0.f_0 = 1196312723;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_door_orange");
			Var0.f_3 = { -1063.804f, -240.832f, 39.883f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 305:
			Var0.f_0 = -1161120149;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_door_orangesolid");
			Var0.f_3 = { -1055.958f, -236.425f, 44.171f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 161:
			Var0.f_0 = 659933472;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 162:
			Var0.f_0 = 1556853707;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_roc_door4");
			Var0.f_3 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 163:
			Var0.f_0 = 9031593;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1065.2372f, -2006.0791f, 32.2329f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 164:
			Var0.f_0 = -1114322496;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1083.5472f, -1975.4354f, 31.622f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 165:
			Var0.f_0 = -1353175737;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ron_door_01");
			Var0.f_3 = { 1085.307f, -2018.5614f, 41.6289f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 166:
			Var0.f_0 = 44182644;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_housedoor1");
			Var0.f_3 = { 86.6624f, -1959.477f, 21.2152f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 167:
			Var0.f_0 = -85603376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_abat_slide");
			Var0.f_3 = { 962.9084f, -2105.8137f, 34.6432f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 168:
			Var0.f_0 = -336931144;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_gar_door_04");
			Var0.f_3 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 169:
			Var0.f_0 = -1850802875;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01l");
			Var0.f_3 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 170:
			Var0.f_0 = -1675259342;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch3_04_door_01r");
			Var0.f_3 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 171:
			Var0.f_0 = 682572401;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_12_door");
			Var0.f_3 = { -58.47f, -1530.51f, 34.54f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 172:
			Var0.f_0 = 638173652;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2255.1938f, 322.2593f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 173:
			Var0.f_0 = -657938605;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2254.0557f, 319.7009f, 184.9264f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 174:
			Var0.f_0 = -913405729;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01l");
			Var0.f_3 = { -2280.597f, 265.432f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 175:
			Var0.f_0 = -61510036;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ch1_07_door_01r");
			Var0.f_3 = { -2278.039f, 266.57f, 184.926f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 180:
			Var0.f_0 = 1741567220;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 413.3649f, -1620.0333f, 28.3416f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 181:
			Var0.f_0 = -2117572376;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_08");
			Var0.f_3 = { 418.2896f, -1651.3962f, 28.2951f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 182:
			Var0.f_0 = 1308623196;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_facgate_07b");
			Var0.f_3 = { 397.8846f, -1607.3838f, 28.3301f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 278:
			Var0.f_0 = -1181991670;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sc1_21_g_door_01");
			Var0.f_3 = { -25.28f, -1431.06f, 30.84f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 279:
			Var0.f_0 = 655256353;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_14_garage_door");
			Var0.f_3 = { -62.38f, 352.7173f, 113.2499f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 280:
			Var0.f_0 = -1283878568;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_motel_door_09");
			Var0.f_3 = { 549.2567f, -1773.115f, 33.7309f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 283:
			Var0.f_0 = -1442263252;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_l");
			Var0.f_3 = { -720.39f, 256.86f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 284:
			Var0.f_0 = 945482706;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_ss1_10_door_r");
			Var0.f_3 = { -718.42f, 257.79f, 80.29f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 298:
			Var0.f_0 = 1281942816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_ph_cellgate");
			Var0.f_3 = { 461.8065f, -994.4086f, 25.0644f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			break;
		case 299:
			Var0.f_0 = 2066876030;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_cf_officedoor");
			Var0.f_3 = { -70.5223f, 6254.584f, 31.2331f };
			Var0.f_7 = 1;
			Var0.f_8 = 0;
			break;
		case 300:
			Var0.f_0 = 302514014;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -1588.27f, 2794.21f, 16.85f };
			Var0.f_6 = 1;
			break;
		case 301:
			Var0.f_0 = 374122670;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -1589.58f, 2793.67f, 16.86f };
			Var0.f_6 = 1;
			break;
		case 302:
			Var0.f_0 = -1450927686;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -2309.107f, 3382.55f, 29.9703f };
			Var0.f_6 = 1;
			break;
		case 303:
			Var0.f_0 = -1927270846;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("prop_sec_barrier_ld_01a");
			Var0.f_3 = { -2299.539f, 3384.9495f, 31.0658f };
			Var0.f_6 = 1;
			break;
		case 306:
			Var0.f_0 = 181342382;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gb_vaubar");
			Var0.f_3 = { -1207.328f, -335.129f, 38.079f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 307:
			Var0.f_0 = 290843807;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_gb_vaubar");
			Var0.f_3 = { 1175.542f, 2710.861f, 38.227f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 308:
			Var0.f_0 = 838938616;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_j2_door");
			Var0.f_3 = { -629.134f, -230.152f, 38.207f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 0;
			break;
		case 309:
			Var0.f_0 = 1801855141;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 116.2367f, -754.6212f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 310:
			Var0.f_0 = -173591179;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.9029f, -755.5384f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 311:
			Var0.f_0 = 487906950;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.8078f, -755.7997f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 312:
			Var0.f_0 = -1571165938;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.474f, -756.7169f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 313:
			Var0.f_0 = 473483816;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.3789f, -756.9781f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
		case 314:
			Var0.f_0 = -1852558119;
			Var0.f_1 = 99;
			Var0.f_2 = joaat("v_ilev_fbisecgate");
			Var0.f_3 = { 115.0451f, -757.8953f, 44.8285f };
			Var0.f_7 = 1;
			Var0.f_8 = 1;
			Var0.f_11 = 1;
			break;
	}
	return Var0;
}

int func_102(int iParam0)//Position - 0xEEC0
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == joaat("xs_prop_arena_turntable_01a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("vw_prop_arena_turntable_02f_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_sf"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_sf");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_01a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_02a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == joaat("xs_prop_arena_turntable_03a_wl"))
	{
		iVar0 = joaat("xs_prop_arena_turntable_b_01a_wl");
	}
	if (iParam0 == -1255963777)
	{
		iVar0 = 11714146;
	}
	return iVar0;
}

int func_103()//Position - 0x14DDC
{
	return joaat("p_parachute_s_shop");
}

int func_104()//Position - 0x14DE9
{
	return joaat("prop_ic_non_hrocket_b");
}

int func_105()//Position - 0x14DF6
{
	return joaat("prop_ic_homing_rocket_b");
}

int func_106()//Position - 0x14E03
{
	return joaat("prop_mp_boost_01");
}

int func_107()//Position - 0x14E10
{
	return joaat("prop_mp_rocket_01");
}

int func_108()//Position - 0x18D9F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_36355 - 1))
	{
		if (BitTest(Global_4980736.f_36356[iVar0 /*134*/].f_22, 13))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x2028A
{
	if (iParam0 <= 10)
	{
		return 3;
	}
	if (iParam0 > 10 && iParam0 <= 20)
	{
		return 5;
	}
	if (iParam0 > 20 && iParam0 <= 30)
	{
		return 7;
	}
	if (iParam0 > 30 && iParam0 <= 40)
	{
		return 9;
	}
	if (iParam0 > 40 && iParam0 <= 50)
	{
		return 11;
	}
	if (iParam0 > 50 && iParam0 <= 60)
	{
		return 13;
	}
	if (iParam0 > 60 && iParam0 <= 70)
	{
		return 15;
	}
	if (iParam0 > 70 && iParam0 <= 80)
	{
		return 17;
	}
	if (iParam0 > 80 && iParam0 <= 90)
	{
		return 19;
	}
	if (iParam0 > 90)
	{
		return 21;
	}
	return 1;
}

int func_110()//Position - 0x2090C
{
	return Global_2703735.f_925;
}

bool func_111()//Position - 0x20E2B
{
	return Global_2815059.f_5118;
}

int func_112(bool bParam0, int iParam1)//Position - 0x21992
{
	switch (bParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				if (Global_1648034.f_137[iParam1])
				{
					return 1;
				}
				if (Global_1648034.f_170[iParam1])
				{
					return 1;
				}
			}
			break;
		default:
			if (BitTest(Global_1648034.f_1046, bParam0))
			{
				return 1;
			}
			if (BitTest(Global_1648034.f_1047, bParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_113(char* sParam0)//Position - 0x23024
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_113386.f_14141[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14141[iVar0 /*104*/]), sParam0))
			{
				iVar1 = Global_113386.f_14141[iVar0 /*104*/].f_29;
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_114(int iParam0)//Position - 0x23D00
{
	Global_1574530 = iParam0;
}

int func_115(int iParam0)//Position - 0x25181
{
	var uVar0;
	int iVar1;
	var uVar2;
	uVar0 = Global_1659575[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_INT(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)//Position - 0x51CAA
{
	Global_4718592.f_95507[iParam0 /*58*/] = { Global_4718592.f_95507[iParam1 /*58*/] };
	Global_4718592.f_95507[iParam0 /*58*/].f_3 = { Global_4718592.f_95507[iParam1 /*58*/].f_3 };
	Global_4718592.f_95507[iParam0 /*58*/].f_42 = Global_4718592.f_95507[iParam1 /*58*/].f_42;
	Global_4718592.f_95507[iParam0 /*58*/].f_43 = Global_4718592.f_95507[iParam1 /*58*/].f_43;
	Global_4718592.f_95507[iParam0 /*58*/].f_46 = Global_4718592.f_95507[iParam1 /*58*/].f_46;
	Global_4718592.f_95507[iParam0 /*58*/].f_47 = Global_4718592.f_95507[iParam1 /*58*/].f_47;
	Global_4718592.f_95507[iParam0 /*58*/].f_30 = Global_4718592.f_95507[iParam1 /*58*/].f_30;
	Global_4718592.f_95507[iParam0 /*58*/].f_31 = Global_4718592.f_95507[iParam1 /*58*/].f_31;
	Global_4718592.f_95507[iParam0 /*58*/].f_6 = { Global_4718592.f_95507[iParam1 /*58*/].f_6 };
	Global_4718592.f_95507[iParam0 /*58*/].f_17 = { Global_4718592.f_95507[iParam1 /*58*/].f_17 };
	Global_4718592.f_95507[iParam0 /*58*/].f_48 = Global_4718592.f_95507[iParam1 /*58*/].f_48;
	Global_4718592.f_95507[iParam0 /*58*/].f_49 = Global_4718592.f_95507[iParam1 /*58*/].f_49;
	Global_4718592.f_95507[iParam0 /*58*/].f_50 = Global_4718592.f_95507[iParam1 /*58*/].f_50;
	Global_4718592.f_95507[iParam0 /*58*/].f_51 = Global_4718592.f_95507[iParam1 /*58*/].f_51;
	Global_4718592.f_95507[iParam0 /*58*/].f_44 = Global_4718592.f_95507[iParam1 /*58*/].f_44;
	Global_4718592.f_95507[iParam0 /*58*/].f_45 = Global_4718592.f_95507[iParam1 /*58*/].f_45;
	Global_4718592.f_95507[iParam0 /*58*/].f_52 = Global_4718592.f_95507[iParam1 /*58*/].f_52;
	Global_4718592.f_95507[iParam0 /*58*/].f_53 = Global_4718592.f_95507[iParam1 /*58*/].f_53;
	Global_4718592.f_95507[iParam0 /*58*/].f_54 = Global_4718592.f_95507[iParam1 /*58*/].f_54;
	Global_4718592.f_95507[iParam0 /*58*/].f_32 = { Global_4718592.f_95507[iParam1 /*58*/].f_32 };
	Global_4718592.f_95507[iParam0 /*58*/].f_35 = { Global_4718592.f_95507[iParam1 /*58*/].f_35 };
	Global_4718592.f_95507[iParam0 /*58*/].f_55 = Global_4718592.f_95507[iParam1 /*58*/].f_55;
	Global_4718592.f_95507[iParam0 /*58*/].f_57 = Global_4718592.f_95507[iParam1 /*58*/].f_57;
	Global_4718592.f_95507[iParam0 /*58*/].f_56 = Global_4718592.f_95507[iParam1 /*58*/].f_56;
	Global_4718592.f_95507[iParam0 /*58*/].f_28 = Global_4718592.f_95507[iParam1 /*58*/].f_28;
	Global_4718592.f_95507[iParam0 /*58*/].f_29 = Global_4718592.f_95507[iParam1 /*58*/].f_29;
	Global_4718592.f_95507[iParam0 /*58*/].f_38 = Global_4718592.f_95507[iParam1 /*58*/].f_38;
	Global_4718592.f_95507[iParam0 /*58*/].f_39 = Global_4718592.f_95507[iParam1 /*58*/].f_39;
	Global_4718592.f_95507[iParam0 /*58*/].f_40 = Global_4718592.f_95507[iParam1 /*58*/].f_40;
	Global_4718592.f_95507[iParam0 /*58*/].f_41 = Global_4718592.f_95507[iParam1 /*58*/].f_41;
}

int func_117(int iParam0)//Position - 0x61D03
{
	if ((((PED::GET_PED_DRAWABLE_VARIATION(iParam0, 0) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 0) == 3) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 5) == 2)) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 4) == 3)) || (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11) == 0 && PED::GET_PED_TEXTURE_VARIATION(iParam0, 11) == 3))
	{
		return 1;
	}
	return 0;
}

Vector3 func_118(int iParam0, int iParam1)//Position - 0x627F8
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("boxville4"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("hei_prop_heist_transponder"))
		{
			return 90f, 0f, 180f;
		}
	}
	else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("hei_prop_hei_ammo_pile_02"))
		{
			return 0f, 0f, 90f;
		}
	}
	else if ((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("rumpo") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("pony")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("burrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("boxville2")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo"))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam1) == joaat("reh_prop_reh_box_metal_01a"))
		{
			return 0f, 0f, -90f;
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_119(int iParam0, int iParam1)//Position - 0x628C8
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iVar1 == joaat("barracks") || iVar1 == joaat("barracks3"))
	{
		return 0f, -0.09f, 1.5059f;
	}
	else if (iVar1 == joaat("benson"))
	{
		if (iVar0 == joaat("hei_prop_heist_weed_pallet_02"))
		{
			return 0.4f, -3f, 0.65f;
		}
		else
		{
			return 0.4f, -2f, 1.09f;
		}
	}
	else if (iVar1 == joaat("granger"))
	{
		if (iVar0 == joaat("hei_prop_hei_ammo_pile_02"))
		{
			return 0f, 0f, -0.257f;
		}
	}
	else if (iVar1 == joaat("gburrito2") || iVar1 == joaat("gburrito"))
	{
		if ((iVar0 == joaat("hei_prop_mini_sever_02") || iVar0 == joaat("hei_prop_mini_sever_03")) || iVar0 == joaat("hei_prop_mini_sever_broken"))
		{
			return 0f, 1.1f, -0.39f;
		}
		else if (iVar0 == joaat("hei_prop_drug_statue_stack"))
		{
			return 0f, 1.29f, -0.14f;
		}
	}
	else if (iVar1 == joaat("boxville4"))
	{
		if (iVar0 == joaat("hei_prop_heist_transponder"))
		{
			return 0.28f, -3.36f, 1.52f;
		}
	}
	else if ((iVar1 == joaat("mule") || iVar1 == joaat("mule3")) || iVar1 == joaat("mule5"))
	{
		if (iVar0 == joaat("hei_prop_heist_tub_truck"))
		{
			return 0f, 0.1f, 0f;
		}
	}
	else if (iVar1 == joaat("insurgent"))
	{
		if (iVar0 == joaat("hei_prop_heist_emp"))
		{
			return 0f, -2.138671f, 0.682988f;
		}
	}
	else if (iVar1 == joaat("insurgent2"))
	{
		if (iVar0 == joaat("hei_prop_heist_emp"))
		{
			return 0f, -2.138671f, 0.562988f;
		}
	}
	else if (iVar1 == joaat("speedo"))
	{
		if (iVar0 == joaat("xm_prop_vancrate_01a"))
		{
			return 0f, -2.17f, 0.13f;
		}
		else if (iVar0 == joaat("reh_prop_reh_box_wood01a"))
		{
			return 0f, -0.5f, -0.1f;
		}
		else if (iVar0 == joaat("reh_prop_reh_box_metal_01a"))
		{
			return 0f, -0.6f, -0.127f;
		}
	}
	else if (iVar1 == joaat("youga2"))
	{
		return 0f, -1.5f, -0.445f;
	}
	else if (iVar1 == joaat("youga4"))
	{
		return 0f, -1.5f, 0.095f;
	}
	else if (iVar1 == joaat("caddy"))
	{
		return 0.15f, -1.15f, 0.51f;
	}
	else if (iVar1 == joaat("youga3"))
	{
		if (iVar0 == joaat("reh_prop_reh_bomb_tech_01a"))
		{
			return -0.2f, 0.38f, -0.445f;
		}
	}
	else if (iVar1 == joaat("pony"))
	{
		return 0f, -0.9f, -0.142f;
	}
	else if (iVar1 == joaat("burrito"))
	{
		return 0f, -1.2f, -0.3f;
	}
	else if (iVar1 == joaat("rumpo"))
	{
		return 0f, -0.9f, -0.46f;
	}
	else if (iVar1 == joaat("boxville2"))
	{
		return 0f, -1.5f, -0.28f;
	}
	return 0f, 0f, 0f;
}

char* func_120(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x62BCB
{
	if ((((BitTest(uParam0, 9) || BitTest(uParam1, 20)) || BitTest(uParam1, 21)) || BitTest(uParam1, 24)) || BitTest(uParam1, 25))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Box_Ammo03A_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_Box_Ammo03A";
		}
	}
	else if (BitTest(uParam0, 10))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Drop_Crate_01_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_Drop_Crate_01";
		}
	}
	else if (BitTest(uParam0, 11))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
		{
			return "Prop_Drop_Crate_01_2";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
		{
			return "chassis_dummy";
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("benson"))
		{
			return "exhaust";
		}
		else if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule3")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("mule5"))
		{
			return "chassis_dummy";
		}
		else
		{
			return "Prop_MB_crate_01A";
		}
	}
	else if (BitTest(uParam1, 8) || BitTest(uParam1, 27))
	{
		return "Prop_MB_crate_01A";
	}
	else if (((BitTest(uParam1, 11) || (BitTest(uParam1, 26) && ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("boxville4"))) || (BitTest(uParam1, 28) && (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("insurgent2")))) || BitTest(uParam2, 28))
	{
		return "chassis_dummy";
	}
	return "";
}

int func_121(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x63031
{
	if (BitTest(uParam0, 9))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
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
		if ((ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger") || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("barracks3"))
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
		if (ENTITY::GET_ENTITY_MODEL(iParam3) == joaat("granger"))
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
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam3, false))
		{
			return joaat("hei_prop_mini_sever_02");
		}
		else
		{
			return joaat("hei_prop_mini_sever_broken");
		}
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

int func_122(int iParam0)//Position - 0x6494C
{
	if (iParam0 < 0 || iParam0 >= 30)
	{
		return 0;
	}
	return 1;
}

int func_123(int iParam0)//Position - 0x760FF
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 18;
		case 3:
			return 19;
		case 4:
			return 14;
		case 5:
			return 111;
		case 6:
			return 27;
		case 7:
			return 40;
		case 8:
			return 41;
		case 9:
			return 42;
		case 10:
			return 49;
		case 11:
			return 50;
		case 12:
			return 54;
		case 13:
			return 80;
		case 14:
			return 62;
		case 15:
			return 64;
		case 16:
			return 88;
		case 17:
			return 89;
		case 18:
			return 105;
		case 19:
			return 37;
		case 20:
			return 90;
		case 21:
			return 135;
		case 22:
			return 137;
		case 23:
			return 136;
		case 24:
			return 145;
		case 25:
			return 71;
		case 26:
			return 92;
		case 27:
			return 53;
		case 28:
			return 70;
		case 29:
			return 31;
		case 30:
			return 34;
		case 31:
			return 38;
		case 32:
			return 138;
		case 33:
			return 12;
		case 34:
			return 13;
		case 35:
			return 112;
		case 36:
			return 83;
		case 37:
			return 39;
		case 38:
			return 128;
		case 39:
			return 55;
		case 40:
			return 148;
		case 41:
			return 153;
		case 42:
			return 154;
		case 43:
			return 117;
		case 44:
			return 119;
		case 45:
			return 159;
		case 46:
			return 120;
		case 47:
			return 67;
		default:
	}
	return 135;
}

int func_124(int iParam0)//Position - 0x76320
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar0 == joaat("dukes2") || iVar0 == joaat("vigilante")) || iVar0 == joaat("visione")) || iVar0 == joaat("retinue")) || iVar0 == joaat("rapidgt3")) || iVar0 == joaat("cyclone")) || iVar0 == joaat("yosemite")) || iVar0 == joaat("hermes")) || iVar0 == joaat("streiter")) || iVar0 == joaat("sc1")) || iVar0 == joaat("riata")) || iVar0 == joaat("raiden")) || iVar0 == joaat("gt500")) || iVar0 == joaat("z190")) || iVar0 == joaat("hustler")) || iVar0 == joaat("neon")) || iVar0 == joaat("kamacho")) || iVar0 == joaat("comet5")) || iVar0 == joaat("comet4")) || iVar0 == joaat("savestra")) || iVar0 == joaat("viseris")) || iVar0 == joaat("tezeract")) || iVar0 == joaat("ellie")) || iVar0 == joaat("issi3")) || iVar0 == joaat("hotring")) || iVar0 == joaat("flashgt")) || iVar0 == joaat("seasparrow")) || iVar0 == joaat("swinger")) || iVar0 == joaat("romero")) || iVar0 == joaat("menacer")) || iVar0 == joaat("freecrawler")) || iVar0 == joaat("stafford")) || iVar0 == joaat("toros")) || iVar0 == joaat("clique")) || iVar0 == joaat("italigto")) || iVar0 == joaat("schlagen")) || iVar0 == joaat("deveste")) || iVar0 == joaat("pbus2")) || iVar0 == joaat("mule4")) || iVar0 == joaat("speedo4")) || iVar0 == joaat("issi3")) || iVar0 == joaat("brioso")) || iVar0 == joaat("hermes")) || iVar0 == joaat("hustler")) || iVar0 == joaat("raptor")) || iVar0 == joaat("tampa2")) || iVar0 == joaat("jester3")) || iVar0 == joaat("swinger")) || iVar0 == joaat("entity2")) || iVar0 == joaat("taipan")) || iVar0 == joaat("toros")) || iVar0 == joaat("baller4")) || iVar0 == joaat("freecrawler")) || iVar0 == joaat("kamacho")) || iVar0 == joaat("oppressor")) || iVar0 == joaat("diablous2")) || iVar0 == joaat("barrage")) || iVar0 == joaat("thruster")) || iVar0 == joaat("volatol")) || iVar0 == joaat("alphaz1")) || iVar0 == joaat("blazer5")) || iVar0 == joaat("drafter")) || iVar0 == joaat("issi7")) || iVar0 == joaat("paragon")) || iVar0 == joaat("gauntlet3")) || iVar0 == joaat("komoda")) || iVar0 == joaat("vstr")) || iVar0 == joaat("rebla")) || iVar0 == joaat("zhaba")) || iVar0 == joaat("sugoi")) || iVar0 == joaat("sultan2")) || iVar0 == joaat("everon")) || iVar0 == joaat("vagrant")) || iVar0 == joaat("outlaw")) || iVar0 == joaat("dukes3")) || iVar0 == joaat("gauntlet5")) || iVar0 == joaat("club")) || iVar0 == joaat("btype2")) || iVar0 == joaat("peyote3")) || iVar0 == joaat("yosemite3")) || iVar0 == joaat("rebel2")) || iVar0 == joaat("manana2")) || iVar0 == joaat("formula")) || iVar0 == joaat("formula2")) || iVar0 == joaat("openwheel1")) || iVar0 == joaat("openwheel2")) || iVar0 == joaat("seminole2")) || iVar0 == joaat("youga3")) || iVar0 == joaat("glendale2")) || iVar0 == joaat("tigon")) || iVar0 == joaat("italirsx")) || iVar0 == joaat("weevil")) || iVar0 == joaat("brioso2")) || iVar0 == joaat("slamtruck")) || iVar0 == joaat("manchez2")) || iVar0 == joaat("calico")) || iVar0 == joaat("jester4")) || iVar0 == joaat("zr350")) || iVar0 == joaat("remus")) || iVar0 == joaat("vectre")) || iVar0 == joaat("cypher")) || iVar0 == joaat("dominator7")) || iVar0 == joaat("comet6")) || iVar0 == joaat("warrener2")) || iVar0 == joaat("rt3000")) || iVar0 == joaat("tailgater2")) || iVar0 == joaat("sultan3")) || iVar0 == joaat("dominator8")) || iVar0 == joaat("previon")) || iVar0 == joaat("euros")) || iVar0 == joaat("growler")) || iVar0 == joaat("veto")) || iVar0 == joaat("veto2")) || iVar0 == joaat("granger2")) || iVar0 == joaat("ignus")) || iVar0 == joaat("deity")) || iVar0 == joaat("buffalo4")) || iVar0 == joaat("astron")) || iVar0 == joaat("comet7")) || iVar0 == joaat("baller7")) || iVar0 == joaat("jubilee")) || iVar0 == joaat("cinquemila")) || iVar0 == joaat("iwagen")) || iVar0 == joaat("zeno")) || iVar0 == joaat("champion")) || iVar0 == joaat("patriot3")) || iVar0 == joaat("shinobi")) || iVar0 == joaat("reever")) || iVar0 == joaat("corsita")) || iVar0 == joaat("brioso3")) || iVar0 == joaat("draugur")) || iVar0 == joaat("rhinehart")) || iVar0 == joaat("kanjosj")) || iVar0 == joaat("lm87")) || iVar0 == joaat("postlude")) || iVar0 == joaat("sm722")) || iVar0 == joaat("tenf")) || iVar0 == joaat("tenf2")) || iVar0 == joaat("torero2")) || iVar0 == joaat("vigero2")) || iVar0 == joaat("weevil2")) || iVar0 == joaat("greenwood")) || iVar0 == joaat("ruiner4")) || iVar0 == joaat("sentinel4")) || iVar0 == joaat("conada")) || iVar0 == joaat("omnisegt"))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)//Position - 0x76B2B
{
	if (__LIB_0__::func_261())
	{
		return 1;
	}
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("shamal") || iParam0 == joaat("stunt")) || iParam0 == joaat("sanchez")) || iParam0 == joaat("tribike")) || iParam0 == joaat("ambulance")) || iParam0 == joaat("firetruk")) || iParam0 == joaat("taco")) || iParam0 == joaat("tanker")) || iParam0 == joaat("tanker2")) || iParam0 == joaat("trflat")) || iParam0 == joaat("trailers")) || iParam0 == joaat("gburrito")) || iParam0 == joaat("boxville2")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("journey")) || iParam0 == joaat("stockade")) || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("trash")) || iParam0 == joaat("bus")) || iParam0 == joaat("coach")) || iParam0 == joaat("taxi")) || iParam0 == joaat("airtug")) || iParam0 == joaat("bulldozer")) || iParam0 == joaat("handler")) || iParam0 == joaat("dump")) || iParam0 == joaat("mixer")) || iParam0 == joaat("tiptruck")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("riot")) || iParam0 == joaat("pbus")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("annihilator")) || iParam0 == joaat("polmav")) || iParam0 == joaat("predator")) || iParam0 == joaat("rhino")) || iParam0 == joaat("cargobob")) || iParam0 == joaat("titan")) || iParam0 == joaat("barracks")) || iParam0 == joaat("barracks2")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("armytanker")) || iParam0 == joaat("cargobob2")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("jet")) || iParam0 == joaat("paradise")) || iParam0 == joaat("monster")) || iParam0 == joaat("sovereign")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("savage")) || iParam0 == joaat("swift2")) || iParam0 == joaat("luxor2")) || iParam0 == joaat("camper")) || iParam0 == joaat("tug")) || iParam0 == joaat("policet")) || iParam0 == joaat("crusader"))
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0)//Position - 0x77AD0
{
	if (((((iParam0 == joaat("xs_prop_arena_barrel_01a") || iParam0 == joaat("xs_prop_arena_landmine_03a")) || iParam0 == joaat("xs_prop_arena_barrel_01a_sf")) || iParam0 == joaat("xs_prop_arena_landmine_03a_sf")) || iParam0 == joaat("xs_prop_arena_barrel_01a_wl")) || iParam0 == joaat("xs_prop_arena_landmine_03a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x77B98
{
	if (((((iParam0 == joaat("xs_prop_arena_pit_fire_03a") || iParam0 == joaat("xs_prop_arena_pit_fire_04a")) || iParam0 == joaat("xs_prop_arena_pit_fire_03a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_sf")) || iParam0 == joaat("xs_prop_arena_pit_fire_03a_wl")) || iParam0 == joaat("xs_prop_arena_pit_fire_04a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)//Position - 0x77C3C
{
	if (((((iParam0 == joaat("xs_prop_arena_pit_double_01a") || iParam0 == joaat("xs_prop_arena_pit_double_01b")) || iParam0 == joaat("xs_prop_arena_pit_double_01a_sf")) || iParam0 == joaat("xs_prop_arena_pit_double_01b_sf")) || iParam0 == joaat("xs_prop_arena_pit_double_01a_wl")) || iParam0 == joaat("xs_prop_arena_pit_double_01b_wl"))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)//Position - 0x77C9A
{
	if (((((((((iParam0 == joaat("xs_prop_arena_turntable_01a") || iParam0 == joaat("xs_prop_arena_turntable_02a")) || iParam0 == joaat("xs_prop_arena_turntable_03a")) || iParam0 == joaat("xs_prop_arena_turntable_01a_sf")) || iParam0 == joaat("vw_prop_arena_turntable_02f_sf")) || iParam0 == joaat("xs_prop_arena_turntable_03a_sf")) || iParam0 == joaat("xs_prop_arena_turntable_01a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_02a_wl")) || iParam0 == joaat("xs_prop_arena_turntable_03a_wl")) || iParam0 == -1255963777)
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)//Position - 0x77D9A
{
	if ((iParam0 == joaat("xs_prop_arena_bollard_side_01a") || iParam0 == joaat("xs_prop_arena_bollard_side_01a_sf")) || iParam0 == joaat("xs_prop_arena_bollard_side_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)//Position - 0x77DCE
{
	if (((((iParam0 == joaat("xs_prop_arena_wall_rising_01a") || iParam0 == joaat("xs_prop_arena_wall_rising_02a")) || iParam0 == joaat("xs_prop_arena_wall_rising_01a_sf")) || iParam0 == joaat("xs_prop_arena_wall_rising_02a_sf")) || iParam0 == joaat("xs_prop_arena_wall_rising_01a_wl")) || iParam0 == joaat("xs_prop_arena_wall_rising_02a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)//Position - 0x77E2C
{
	if ((((((((iParam0 == joaat("xs_prop_arena_flipper_small_01a") || iParam0 == joaat("xs_prop_arena_flipper_large_01a")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a")) || iParam0 == joaat("xs_prop_arena_flipper_small_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_large_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a_sf")) || iParam0 == joaat("xs_prop_arena_flipper_small_01a_wl")) || iParam0 == joaat("xs_prop_arena_flipper_large_01a_wl")) || iParam0 == joaat("xs_prop_arena_flipper_xl_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_133(int iParam0)//Position - 0x7812A
{
	if ((iParam0 == joaat("xm_prop_x17_mine_01a") || iParam0 == joaat("xm_prop_x17_mine_02a")) || iParam0 == joaat("xm_prop_x17_mine_03a"))
	{
		return 1;
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x786C7
{
	if ((iParam0 == joaat("xs_prop_arena_pressure_plate_01a") || iParam0 == joaat("xs_prop_arena_pressure_plate_01a_wl")) || iParam0 == joaat("xs_prop_arena_pressure_plate_01a_sf"))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, float fParam1)//Position - 0x786FB
{
	int iVar0;
	float fVar1;
	iVar0 = Global_2788036;
	if (iVar0 >= 8)
	{
		return -1;
	}
	fVar1 = 0f;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		fVar1 = (fParam1 - ENTITY::GET_ENTITY_HEADING(iParam0));
	}
	Global_2788036.f_10[iVar0] = fVar1;
	Global_2788036.f_1[iVar0] = iParam0;
	Global_2788036++;
	return iVar0;
}

int func_136(int iParam0)//Position - 0x7874F
{
	if ((iParam0 == joaat("xs_prop_arena_turret_01a") || iParam0 == joaat("xs_prop_arena_turret_01a_sf")) || iParam0 == joaat("xs_prop_arena_turret_01a_wl"))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0x78783
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ba_prop_battle_track_exshort") || Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("ba_prop_battle_track_short"))
	{
		return 1;
	}
	return 0;
}

bool func_138(int iParam0)//Position - 0x7B2DB
{
	return (((((((((((((((((((((((((iParam0 == joaat("ar_prop_ar_bblock_huge_04") || iParam0 == joaat("ar_prop_ar_bblock_huge_05")) || iParam0 == joaat("ar_prop_ar_tube_gap_02")) || iParam0 == joaat("stt_prop_track_straight_lm")) || iParam0 == joaat("bkr_prop_mast_01a")) || iParam0 == joaat("stt_prop_track_bend_l_b")) || iParam0 == joaat("ch_prop_track_pit_stop_01")) || iParam0 == joaat("ch_prop_track_pit_garage_01a")) || iParam0 == joaat("ch_prop_track_paddock_01")) || iParam0 == joaat("ar_prop_ar_bblock_huge_01")) || iParam0 == joaat("ar_prop_ar_bblock_huge_02")) || iParam0 == joaat("ar_prop_ar_bblock_huge_03")) || iParam0 == joaat("as_prop_as_bblock_huge_04")) || iParam0 == joaat("as_prop_as_bblock_huge_05")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s_s")) || iParam0 == joaat("ch_prop_track_ch_straight_bar_s")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_m_in")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_out")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_l_b")) || iParam0 == joaat("ch_prop_track_ch_bend_180d")) || iParam0 == joaat("ch_prop_track_ch_bend_bar_135")) || iParam0 == joaat("ch_prop_track_ch_bend_135")) || iParam0 == joaat("stt_prop_tyre_wall_01")) || iParam0 == joaat("stt_prop_tyre_wall_0r1")) || iParam0 == joaat("stt_prop_tyre_wall_0l1"));
}

int func_139(int iParam0)//Position - 0x7B5DB
{
	switch (iParam0)
	{
		case joaat("prop_const_fence02b"):
			return 150;
		case joaat("prop_offroad_bale03"):
			return 100;
		case joaat("prop_offroad_bale02"):
			return 100;
		case joaat("prop_offroad_bale01"):
			return 100;
		case joaat("prop_offroad_tyres01"):
			return 100;
		case joaat("lts_prop_lts_offroad_tyres01"):
			return 100;
		case joaat("prop_offroad_tyres02"):
			return 100;
		case joaat("prop_barier_conc_02a"):
			return 100;
		case joaat("prop_barier_conc_05c"):
			return 100;
		case joaat("prop_barier_conc_05a"):
			return 100;
		case joaat("prop_barier_conc_05b"):
			return 100;
		case joaat("prop_barier_conc_01a"):
			return 100;
		case joaat("prop_bench_05"):
			return 100;
		case joaat("prop_bench_07"):
			return 100;
		case joaat("prop_bench_01a"):
			return 100;
		case joaat("prop_dock_bouy_3"):
			return 190;
		case joaat("prop_dock_bouy_2"):
			return 190;
		case joaat("prop_elecbox_24"):
			return 299;
		case joaat("prop_elecbox_24b"):
			return 299;
		case joaat("prop_portacabin01"):
			return 299;
		case joaat("prop_cementbags01"):
			return 140;
		case joaat("prop_conc_blocks01a"):
			return 140;
		case joaat("prop_cons_crate"):
			return 140;
		case joaat("prop_jyard_block_01a"):
			return 120;
		case joaat("prop_conc_sacks_02a"):
			return 115;
		case joaat("prop_byard_sleeper01"):
			return 100;
		case joaat("prop_shuttering01"):
			return 140;
		case joaat("prop_shuttering02"):
			return 140;
		case joaat("prop_shuttering03"):
			return 140;
		case joaat("prop_shuttering04"):
			return 140;
		case joaat("prop_woodpile_01a"):
			return 180;
		case joaat("prop_woodpile_01c"):
			return 180;
		case joaat("prop_rub_cont_01b"):
			return 299;
		case joaat("prop_rail_boxcar4"):
			return 299;
		case joaat("prop_rub_railwreck_2"):
			return 299;
		case joaat("prop_contr_03b_ld"):
			return 500;
		case joaat("prop_container_ld_pu"):
			return 500;
		case joaat("prop_container_ld2"):
			return 500;
		case joaat("prop_rail_boxcar"):
			return 299;
		case joaat("prop_rail_boxcar3"):
			return 299;
		case joaat("prop_byard_floatpile"):
			return 180;
		case joaat("prop_boxpile_07a"):
			return 180;
		case joaat("prop_watercrate_01"):
			return 150;
		case joaat("prop_box_wood01a"):
			return 120;
		case joaat("prop_box_wood03a"):
			return 130;
		case joaat("prop_box_wood04a"):
			return 150;
		case joaat("prop_bin_13a"):
			return 100;
		case joaat("prop_bin_14a"):
			return 120;
		case joaat("prop_dumpster_3a"):
			return 200;
		case joaat("prop_dumpster_4b"):
			return 200;
		case joaat("prop_dumpster_01a"):
			return 180;
		case joaat("prop_skip_06a"):
			return 220;
		case joaat("prop_elecbox_02a"):
			return 150;
		case joaat("prop_elecbox_16"):
			return 180;
		case joaat("prop_elecbox_14"):
			return 160;
		case joaat("prop_ind_deiseltank"):
			return 250;
		case joaat("prop_ind_mech_02a"):
			return 150;
		case joaat("prop_ind_mech_02b"):
			return 120;
		case joaat("prop_sub_trans_01a"):
			return 200;
		case joaat("prop_sub_trans_02a"):
			return 180;
		case joaat("prop_sub_trans_04a"):
			return 180;
		case joaat("prop_mp_ramp_01"):
			return 250;
		case joaat("prop_skip_04"):
			return 250;
		case joaat("prop_mp_ramp_02"):
			return 250;
		case joaat("prop_mp_ramp_03"):
			return 250;
		case joaat("prop_skip_08a"):
			return 250;
		case joaat("prop_jetski_ramp_01"):
			return 250;
		case joaat("prop_beachflag_01"):
			return 150;
		case joaat("prop_trafficdiv_01"):
			return 180;
		case joaat("prop_sign_road_09a"):
			return 100;
		case joaat("prop_sign_road_09b"):
			return 100;
		case joaat("prop_sign_road_09c"):
			return 100;
		case joaat("prop_sign_road_09d"):
			return 100;
		case joaat("prop_sign_road_06q"):
			return 100;
		case joaat("prop_sign_road_06r"):
			return 100;
		case joaat("prop_sign_road_05c"):
			return 100;
		case joaat("prop_sign_road_05d"):
			return 100;
		case joaat("prop_sign_road_05e"):
			return 100;
		case joaat("prop_sign_road_05f"):
			return 100;
		case joaat("prop_food_van_01"):
			return 200;
		case joaat("prop_food_van_02"):
			return 200;
		case joaat("prop_tanktrailer_01a"):
			return 250;
		case joaat("prop_truktrailer_01a"):
			return 250;
		case joaat("prop_rub_buswreck_01"):
			return 250;
		case joaat("prop_rub_buswreck_06"):
			return 250;
		case joaat("prop_rub_carwreck_11"):
			return 180;
		case joaat("prop_rub_carwreck_12"):
			return 180;
		case joaat("prop_rub_carwreck_13"):
			return 180;
		case joaat("prop_rub_carwreck_9"):
			return 180;
		case joaat("prop_ld_alarm_01"):
			return 50;
		case joaat("prop_offroad_barrel02"):
			return 120;
		case joaat("prop_mp_cone_03"):
			return -1;
		case joaat("prop_barrel_exp_01a"):
			return 100;
		case joaat("prop_fire_exting_1b"):
			return 100;
		case joaat("prop_gascyl_01a"):
			return 80;
		case joaat("prop_gascyl_03a"):
			return 100;
		case joaat("prop_gascyl_04a"):
			return 100;
		case joaat("prop_gas_tank_01a"):
			return 100;
		case joaat("prop_mp_cone_01"):
			return 100;
		case joaat("prop_boxpile_02b"):
			return 160;
		case joaat("prop_postbox_01a"):
			return -1;
		case joaat("prop_fncsec_03b"):
			return 150;
		case joaat("prop_table_08_side"):
			return 120;
		case joaat("prop_mp_cone_04"):
			return 100;
		case joaat("prop_mp_cone_02"):
			return 120;
		case joaat("prop_shamal_crash"):
			return 180;
		default:
	}
	if (iParam0 == joaat("apa_mp_apa_crashed_usaf_01a"))
	{
		return 180;
	}
	else if ((((((((((((((iParam0 == -1305574636 || iParam0 == joaat("imp_prop_impexp_boxpile_01")) || iParam0 == joaat("imp_prop_impexp_boxpile_02")) || iParam0 == joaat("imp_prop_groupbarrel_01")) || iParam0 == joaat("imp_prop_groupbarrel_02")) || iParam0 == joaat("imp_prop_groupbarrel_03")) || iParam0 == joaat("sr_prop_sr_boxwood_01")) || iParam0 == joaat("sr_prop_sr_boxpile_01")) || iParam0 == joaat("sr_prop_sr_boxpile_02")) || iParam0 == joaat("sr_prop_sr_boxpile_03")) || iParam0 == joaat("sr_prop_sr_track_wall")) || iParam0 == joaat("sr_prop_sr_tube_wall")) || iParam0 == joaat("ar_prop_ar_ammu_sign")) || iParam0 == joaat("sr_mp_spec_races_ammu_sign")) || iParam0 == joaat("ar_prop_ar_jetski_ramp_01_dev"))
	{
		return 250;
	}
	else if (((((((((iParam0 == joaat("tr_prop_tr_sign_gf_ls_01a") || iParam0 == joaat("tr_prop_tr_sign_gf_lur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_lr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ll_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ms_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mur_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mul_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_mr_01a")) || iParam0 == joaat("tr_prop_tr_sign_gf_ml_01a"))
	{
		return 250;
	}
	return -1;
}

int func_140(int iParam0)//Position - 0x7BBF9
{
	if (((((((((((((((iParam0 == -1196634317 || iParam0 == -958239842) || iParam0 == -618621926) || iParam0 == -376491785) || iParam0 == -8758067) || iParam0 == 233568688) || iParam0 == 9264895) || iParam0 == 239008354) || iParam0 == 1178724959) || iParam0 == -477716074) || iParam0 == -1151119040) || iParam0 == 1899216098) || iParam0 == -1743680867) || iParam0 == -841484759) || iParam0 == joaat("ch_prop_pit_sign_01a")) || iParam0 == joaat("sum_prop_ac_pit_sign_left"))
	{
		return 1;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x7BCE2
{
	if ((((((iParam0 == joaat("prop_jetski_ramp_01") || iParam0 == joaat("prop_dock_bouy_1")) || iParam0 == joaat("prop_dock_bouy_2")) || iParam0 == joaat("prop_byard_float_02")) || iParam0 == joaat("prop_ind_barge_01_cr")) || iParam0 == joaat("ar_prop_ar_jetski_ramp_01_dev")) || iParam0 == joaat("h4_prop_h4_loch_monster"))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x7BDC9
{
	if (iParam0 == joaat("as_prop_as_target_big"))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x7BDE0
{
	if (iParam0 == joaat("as_prop_as_target_medium"))
	{
		return 1;
	}
	return 0;
}

int func_144(int iParam0)//Position - 0x7BDF7
{
	if (iParam0 == joaat("as_prop_as_target_small"))
	{
		return 1;
	}
	return 0;
}

int func_145(int iParam0)//Position - 0x7BE0E
{
	if (iParam0 == joaat("as_prop_as_target_small_02"))
	{
		return 1;
	}
	return 0;
}

void func_146(int iParam0, int iParam1, bool bParam2)//Position - 0x7BE25
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_speakerstack_01a"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Global_4980736.f_36356[iParam0 /*134*/].f_68 = 0;
			MISC::CLEAR_BIT(&(Global_4980736.f_36356[iParam0 /*134*/].f_21), 22);
			if (BitTest(Global_4980736.f_36356[iParam0 /*134*/].f_21, 24))
			{
				if (bParam2 == 1)
				{
					ENTITY::SET_ENTITY_ALPHA(iParam1, 255, bParam2);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, bParam2, false);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(iParam1, 0, bParam2);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam1, bParam2, false);
				}
			}
		}
	}
}

int func_147(int iParam0)//Position - 0x7C081
{
	switch (iParam0)
	{
		case 1:
			return 44;
		case 2:
			return 30;
		case 3:
			return 16;
		default:
	}
	return 30;
}

int func_148(int iParam0)//Position - 0x7C0B3
{
	if (((((((((((((((iParam0 == joaat("gr_prop_gr_target_1_01a") || iParam0 == joaat("gr_prop_gr_target_2_04a")) || iParam0 == joaat("gr_prop_gr_target_3_03a")) || iParam0 == joaat("gr_prop_gr_target_4_01a")) || iParam0 == joaat("gr_prop_gr_target_5_01a")) || iParam0 == joaat("gr_prop_gr_target_small_01a")) || iParam0 == joaat("gr_prop_gr_target_small_03a")) || iParam0 == joaat("gr_prop_gr_target_small_02a")) || iParam0 == joaat("gr_prop_gr_target_small_06a")) || iParam0 == joaat("gr_prop_gr_target_small_07a")) || iParam0 == joaat("gr_prop_gr_target_small_04a")) || iParam0 == joaat("gr_prop_gr_target_small_05a")) || iParam0 == joaat("gr_prop_gr_target_long_01a")) || iParam0 == joaat("gr_prop_gr_target_large_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_01a")) || iParam0 == joaat("gr_prop_gr_target_trap_02a"))
	{
		return 1;
	}
	return 0;
}

float func_149(int iParam0)//Position - 0x7C19D
{
	switch (iParam0)
	{
		case 1:
			return 0.3f;
		case 2:
			return 0.4f;
		case 3:
			return 0.5f;
		case 4:
			return 0.5f;
		case 5:
			return 0.5f;
		default:
	}
	return 0.4f;
}

int func_150(int iParam0)//Position - 0x7C1F7
{
	switch (iParam0)
	{
		case 1:
			return 15;
		case 2:
			return 25;
		case 3:
			return 35;
		case 4:
			return 45;
		case 5:
			return 100;
		default:
	}
	return 25;
}

int func_151(int iParam0)//Position - 0x7C4D2
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
	{
		return joaat("stt_prop_stunt_tube_speeda");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("xm_prop_x17_sub"))
	{
		return joaat("h4_prop_h4_sub_kos_extra");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("sum_prop_ac_barge_01"))
	{
		return joaat("sum_prop_ac_barge_col_01");
	}
	else if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("h4_prop_h4_sub_kos"))
	{
		return joaat("h4_prop_h4_sub_kos_extra");
	}
	return 0;
}

int func_152(int iParam0)//Position - 0x7C560
{
	if (Global_4980736.f_36356[iParam0 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
	{
		return joaat("stt_prop_stunt_tube_speedb");
	}
	return Global_4980736.f_36356[iParam0 /*134*/].f_7;
}

int func_153(var uParam0)//Position - 0x7C596
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_154(int iParam0)//Position - 0xE6864
{
	return ((iParam0 == joaat("stromberg") || iParam0 == joaat("submersible")) || iParam0 == joaat("submersible2"));
}

void func_155(var uParam0)//Position - 0xE8531
{
	uParam0->f_1 = 4;
}

void func_156(var uParam0, char* sParam1)//Position - 0xE958F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "RESUME_FROM_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_157(var uParam0)//Position - 0xE962C
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(uParam0->f_38, uParam0->f_39, 255, 255, 255, 255);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_40, 255, 255, 255, 255, 0);
}

void func_158(var uParam0, char* sParam1)//Position - 0xE9655
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "SHOW_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_159(var uParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xE96C9
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	else if (bParam5)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "ADD_BACKGROUND_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam7)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(20);
	}
	else if (bParam6)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	}
	else if (bParam4)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
	}
	else if (bParam3)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	}
	else if (bParam2)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(75);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_160(var uParam0, char* sParam1)//Position - 0xE986A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "ADD_BREAKPOINT");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_161()//Position - 0xE98DE
{
	return Global_2715699.f_3479.f_24;
}

float func_162(int iParam0)//Position - 0xEB360
{
	switch (iParam0)
	{
		case 25:
			return Global_262145.f_8323 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_FLEECA */;
		case 22:
			return Global_262145.f_8325 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_PRISON_BREAK */;
		case 23:
			return Global_262145.f_8324 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_HUMANE_LABS */;
		case 24:
			return Global_262145.f_8326 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_SERIES_A */;
		case 21:
			return Global_262145.f_8327 /* Tunable: HEISTS_PREP_PERCENTAGE_CUT_PACIFIC_STANDARD */;
		default:
	}
	return 3.8f;
}

char* func_163()//Position - 0xEB735
{
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_319(Global_4718592.f_168757)) || __LIB_10__::func_231(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757)) || (Global_4718592.f_168757 != 0 && !__LIB_1__::func_308()))
	{
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) != -1)
		{
			if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == -1)
			{
				return "HUD_COLOUR_BLUE" /* GXT: Blue */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 0)
			{
				return "HUD_COLOUR_ORANGE" /* GXT: Orange */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 1)
			{
				return "HUD_COLOUR_GREEN" /* GXT: Green */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 2)
			{
				return "HUD_COLOUR_PINK" /* GXT: Pink */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 4)
			{
				return "HUD_COLOUR_PURPLE" /* GXT: Purple */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 6)
			{
				return "HUD_COLOUR_RED" /* GXT: Red */;
			}
			else if (Global_4718592.f_111249[PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX())] == 9)
			{
				return "HUD_COLOUR_BLUE" /* GXT: Blue */;
			}
		}
	}
	return "HUD_COLOUR_WHITE" /* GXT: White */;
}

void func_164(var uParam0, char* sParam1, char* sParam2)//Position - 0xEB913
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "CLEANUP");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_38, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_319(Global_4718592.f_168757)) || __LIB_10__::func_231(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_39, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_319(Global_4718592.f_168757)) || __LIB_10__::func_231(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_40, "CREATE_STAT_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if ((((BitTest(Global_4718592.f_5, 13) || __LIB_1__::func_319(Global_4718592.f_168757)) || __LIB_10__::func_231(Global_4718592.f_168757)) || __LIB_10__::func_232(Global_4718592.f_168757)) || Global_4718592.f_168757 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("100.0");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_165(var uParam0)//Position - 0xEBFAF
{
	if ((GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_38) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_39)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_40))
	{
		return 1;
	}
	return 0;
}

void func_166(var uParam0)//Position - 0xEBFE1
{
	uParam0->f_38 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_BG");
	uParam0->f_39 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_FG");
	uParam0->f_40 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION");
}

void func_167(var uParam0)//Position - 0xEC518
{
	struct<3> Var0;
	*uParam0 = { Var0 };
}

int func_168(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xF903A
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (Param0.f_2 - Param1.f_2);
	if (fVar0 > 0.2f || fVar0 < -0.2f)
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0.f_0, Param0.f_1, 0f, Param1.f_0, Param1.f_1, 0f, true);
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(fVar1, 0f, fVar1, fVar0);
		if (fVar2 > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

var func_169(int iParam0, bool bParam1)//Position - 0xF9DEE
{
	if (bParam1)
	{
		return Global_1659902;
	}
	return Global_1853348[iParam0 /*834*/].f_96.f_3;
}

char* func_170()//Position - 0xFB7D4
{
	return "HUD_FRONTEND_DEFAULT_SOUNDSET";
	return "";
}

void func_171(int* iParam0, bool bParam1)//Position - 0xFDB36
{
	if (BitTest(*iParam0, bParam1))
	{
		MISC::CLEAR_BIT(iParam0, bParam1);
	}
	else
	{
		MISC::SET_BIT(iParam0, bParam1);
	}
}

Vector3 func_172(struct<3> Param0, struct<3> Param1)//Position - 0x100D32
{
	return ((Param0.f_0 + Param1.f_0) / 2f), ((Param0.f_1 + Param1.f_1) / 2f), ((Param0.f_2 + Param1.f_2) / 2f);
}

int func_173(struct<2> Param0, Vector3 vParam1)//Position - 0x1097A6
{
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_174(int iParam0)//Position - 0x10E3A9
{
	return ((iParam0 == 40 || iParam0 == 41) || iParam0 == 42);
}

int func_175(int iParam0)//Position - 0x10E3CC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_169915 - 1))
	{
		if (Global_4718592.f_169889[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_176(var uParam0, bool bParam1)//Position - 0x119F13
{
	if (BitTest(uParam0->f_4, 4))
	{
		return SYSTEM::TO_FLOAT(uParam0->f_6);
	}
	if (((((((((((uParam0->f_3 == joaat("prop_gate_airport_01") || uParam0->f_3 == joaat("prop_gate_military_01")) || uParam0->f_3 == joaat("prop_dock_bouy_1")) || uParam0->f_3 == -1761409654) || uParam0->f_3 == 1836331637) || uParam0->f_3 == joaat("prop_dock_bouy_2")) || uParam0->f_3 == -1964610140) || uParam0->f_3 == 2027407751) || uParam0->f_3 == joaat("prop_dock_bouy_3")) || uParam0->f_3 == -1498457916) || uParam0->f_3 == joaat("prop_dock_bouy_5")) || uParam0->f_3 == joaat("h4_prop_office_desk_01"))
	{
		return 8f;
	}
	if (bParam1)
	{
		return 2f;
	}
	return 0.1f;
}

void func_177(int iParam0, int* iParam1)//Position - 0x12185F
{
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 0);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 1);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 2);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 3);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") != -1)
	{
		MISC::SET_BIT(iParam1, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 4);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") != -1)
	{
		MISC::SET_BIT(iParam1, 5);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 5);
	}
	if (((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		MISC::SET_BIT(iParam1, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 8);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible2"))
	{
		*iParam1 = 0;
	}
}

int func_178(int iParam0)//Position - 0x12FB74
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
		case 26:
		case 27:
			return 24;
			break;
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			return 2;
		case 5:
			return 2;
		case 24:
		case 25:
			return 18;
	}
	return 1;
}

int func_179(int iParam0)//Position - 0x130A42
{
	if (__LIB_0__::func_261())
	{
		return 1;
	}
	if (iParam0 == joaat("issi3"))
	{
		return Global_262145.f_19236 /* Tunable: ENABLE_CREATOR_ISSI3 */;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return Global_262145.f_19233 /* Tunable: ENABLE_CREATOR_ELLIE */;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return Global_262145.f_19245 /* Tunable: ENABLE_CREATOR_DOMINATOR3 */;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return Global_262145.f_19238 /* Tunable: ENABLE_CREATOR_HOTRING */;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return Global_262145.f_19235 /* Tunable: ENABLE_CREATOR_GB200 */;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return Global_262145.f_19232 /* Tunable: ENABLE_CREATOR_FLASHGT */;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return Global_262145.f_19239 /* Tunable: ENABLE_CREATOR_TAIPAN */;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return Global_262145.f_19241 /* Tunable: ENABLE_CREATOR_ENTITY2 */;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return Global_262145.f_19242 /* Tunable: ENABLE_CREATOR_TEZERACT */;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return Global_262145.f_19246 /* Tunable: ENABLE_CREATOR_TYRANT */;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return Global_262145.f_19234 /* Tunable: ENABLE_CREATOR_FAGALOA */;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return Global_262145.f_19244 /* Tunable: ENABLE_CREATOR_CHEBUREK */;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return Global_262145.f_19247 /* Tunable: ENABLE_CREATOR_JESTER3 */;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return Global_262145.f_19237 /* Tunable: ENABLE_CREATOR_MICHELLI */;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return Global_262145.f_20281 /* Tunable: SV_BLAZER5_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return Global_262145.f_20274 /* Tunable: SV_RUINER2_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return Global_262145.f_20273 /* Tunable: SV_VOLTIC2_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return Global_262145.f_20286 /* Tunable: AC_DELUXO_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return Global_262145.f_20287 /* Tunable: AC_STROMBERG_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return Global_262145.f_20288 /* Tunable: AC_THRUSTER_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return Global_262145.f_19317 /* Tunable: 906758493 */;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return Global_262145.f_19318 /* Tunable: 456311447 */;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return Global_262145.f_20278 /* Tunable: SV_TECHNICAL2_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("dune4"))
	{
		return Global_262145.f_20275 /* Tunable: SV_DUNE4_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return Global_262145.f_20276 /* Tunable: SV_DUNE5_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return Global_262145.f_20277 /* Tunable: SV_PHANTOM2_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return Global_262145.f_20279 /* Tunable: SV_BOXVILLE5_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return Global_262145.f_20280 /* Tunable: SV_WASTELANDER_ENABLE_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return Global_262145.f_19243 /* Tunable: ENABLE_CREATOR_SEASPARROW */;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return Global_262145.f_17513 /* Tunable: CREATOR_ENABLE_BIKER_SANCTUS */;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return Global_262145.f_25394 /* Tunable: ENABLE_RACE_CREATOR_OPPRESSOR2 */;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return Global_262145.f_19258 /* Tunable: ENABLE_SWINGER_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return Global_262145.f_19257 /* Tunable: ENABLE_PATIROT2_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return Global_262145.f_19259 /* Tunable: ENABLE_FREECRAWLER_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return Global_262145.f_19261 /* Tunable: ENABLE_STAFFORD_RACE_CREATOR */;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return Global_262145.f_24217 /* Tunable: ENABLE_SERRANO */;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return Global_262145.f_24219 /* Tunable: ENABLE_FQ2 */;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return Global_262145.f_24221 /* Tunable: ENABLE_HABANERO */;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return Global_262145.f_24215 /* Tunable: ENABLE_PRAIRIE */;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return Global_262145.f_24213 /* Tunable: ENABLE_RUINER */;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return Global_262145.f_25394 /* Tunable: ENABLE_RACE_CREATOR_OPPRESSOR2 */;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return Global_262145.f_25395 /* Tunable: ENABLE_RACE_CREATOR_STRIKEFORCE */;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return Global_262145.f_25396 /* Tunable: ENABLE_RACE_CREATOR_SCRAMJET */;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return Global_262145.f_25397 /* Tunable: ENABLE_RACE_CREATOR_MENACER */;
	}
	else if (iParam0 == joaat("toros"))
	{
		return Global_262145.f_25398 /* Tunable: ENABLE_RACE_CREATOR_TOROS */;
	}
	else if (iParam0 == joaat("clique"))
	{
		return Global_262145.f_25399 /* Tunable: ENABLE_RACE_CREATOR_CLIQUE */;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return Global_262145.f_25400 /* Tunable: ENABLE_RACE_CREATOR_ITALIGTO */;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return Global_262145.f_25401 /* Tunable: ENABLE_RACE_CREATOR_DEVIANT */;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return Global_262145.f_25402 /* Tunable: ENABLE_RACE_CREATOR_TULIP */;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return Global_262145.f_25403 /* Tunable: ENABLE_RACE_CREATOR_SCHLAGEN */;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return Global_262145.f_26754 /* Tunable: ENABLE_RACE_CREATOR_DEVESTE */;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return Global_262145.f_26755 /* Tunable: ENABLE_RACE_CREATOR_VAMOS */;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return Global_262145.f_25406 /* Tunable: ENABLE_RACE_CREATOR_THRAX */;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return Global_262145.f_25407 /* Tunable: ENABLE_RACE_CREATOR_DRAFTER */;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return Global_262145.f_25408 /* Tunable: ENABLE_RACE_CREATOR_ISSI7 */;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return Global_262145.f_25409 /* Tunable: ENABLE_RACE_CREATOR_CARACARA2 */;
	}
	else if (iParam0 == joaat("neo"))
	{
		return Global_262145.f_25410 /* Tunable: ENABLE_RACE_CREATOR_NEO */;
	}
	else if (iParam0 == joaat("s80"))
	{
		return Global_262145.f_25411 /* Tunable: ENABLE_RACE_CREATOR_S80 */;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return Global_262145.f_25412 /* Tunable: ENABLE_RACE_CREATOR_NEBULA */;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return Global_262145.f_25413 /* Tunable: ENABLE_RACE_CREATOR_EMERUS */;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return Global_262145.f_25414 /* Tunable: ENABLE_RACE_CREATOR_GAUNTLET3 */;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return Global_262145.f_25415 /* Tunable: ENABLE_RACE_CREATOR_DYNASTY */;
	}
	else if (iParam0 == joaat("locust"))
	{
		return Global_262145.f_25416 /* Tunable: ENABLE_RACE_CREATOR_LOCUST */;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return Global_262145.f_25417 /* Tunable: ENABLE_RACE_CREATOR_PEYOTE2 */;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return Global_262145.f_25418 /* Tunable: ENABLE_RACE_CREATOR_HELLION */;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return Global_262145.f_25419 /* Tunable: ENABLE_RACE_CREATOR_GAUNTLET4 */;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return Global_262145.f_25420 /* Tunable: ENABLE_RACE_CREATOR_ZION3 */;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return Global_262145.f_25421 /* Tunable: ENABLE_RACE_CREATOR_JUGULAR */;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return Global_262145.f_25422 /* Tunable: ENABLE_RACE_CREATOR_ZORRUSSO */;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return Global_262145.f_25423 /* Tunable: ENABLE_RACE_CREATOR_RROCKET */;
	}
	else if (iParam0 == joaat("novak"))
	{
		return Global_262145.f_25424 /* Tunable: ENABLE_RACE_CREATOR_NOVAK */;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return Global_262145.f_25425 /* Tunable: ENABLE_RACE_CREATOR_KRIEGER */;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return Global_262145.f_25405 /* Tunable: ENABLE_RACE_CREATOR_PARAGON */;
	}
	else if (iParam0 == joaat("everon"))
	{
		return Global_262145.f_25468 /* Tunable: ENABLE_RACE_CREATOR_EVERON */;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return Global_262145.f_25469 /* Tunable: ENABLE_RACE_CREATOR_ASBO */;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return Global_262145.f_25470 /* Tunable: ENABLE_RACE_CREATOR_KANJO */;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return Global_262145.f_25471 /* Tunable: ENABLE_RACE_CREATOR_RETINUE2 */;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return Global_262145.f_25472 /* Tunable: ENABLE_RACE_CREATOR_YOSEMITE2 */;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return Global_262145.f_25473 /* Tunable: ENABLE_RACE_CREATOR_SUGOI */;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return Global_262145.f_25474 /* Tunable: ENABLE_RACE_CREATOR_SULTAN2 */;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return Global_262145.f_25475 /* Tunable: ENABLE_RACE_CREATOR_OUTLAW */;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return Global_262145.f_25476 /* Tunable: ENABLE_RACE_CREATOR_VAGRANT */;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return Global_262145.f_25477 /* Tunable: ENABLE_RACE_CREATOR_KOMODA */;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return Global_262145.f_25478 /* Tunable: ENABLE_RACE_CREATOR_STRYDER */;
	}
	else if (iParam0 == joaat("furia"))
	{
		return Global_262145.f_25479 /* Tunable: ENABLE_RACE_CREATOR_FURIA */;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return Global_262145.f_25480 /* Tunable: ENABLE_RACE_CREATOR_ZHABA */;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return Global_262145.f_25481 /* Tunable: ENABLE_RACE_CREATOR_JB7002 */;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return Global_262145.f_25482 /* Tunable: ENABLE_RACE_CREATOR_IMORGEN */;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return Global_262145.f_25483 /* Tunable: ENABLE_RACE_CREATOR_REBLA */;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return Global_262145.f_25484 /* Tunable: ENABLE_RACE_CREATOR_VSTR */;
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		return Global_262145.f_25485 /* Tunable: ENABLE_RACE_CREATOR_GAUNTLET5 */;
	}
	else if (iParam0 == joaat("peyote3"))
	{
		return Global_262145.f_25486 /* Tunable: ENABLE_RACE_CREATOR_PEYOTE3 */;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return Global_262145.f_25487 /* Tunable: ENABLE_RACE_CREATOR_YOSEMITE3 */;
	}
	else if (iParam0 == joaat("formula"))
	{
		return (Global_262145.f_25530 /* Tunable: ENABLE_RACE_CREATOR_FORMULA */ || __LIB_18__::func_699());
	}
	else if (iParam0 == joaat("formula2"))
	{
		return (Global_262145.f_25533 /* Tunable: ENABLE_RACE_CREATOR_FORMULA2 */ || __LIB_18__::func_699());
	}
	else if (iParam0 == joaat("club"))
	{
		return Global_262145.f_25542 /* Tunable: ENABLE_RACE_CREATOR_CLUB */;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return Global_262145.f_25543 /* Tunable: ENABLE_RACE_CREATOR_DUKES3 */;
	}
	else if (iParam0 == joaat("glendale2"))
	{
		return Global_262145.f_25544 /* Tunable: ENABLE_RACE_CREATOR_GLENDALE2 */;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return Global_262145.f_25545 /* Tunable: ENABLE_RACE_CREATOR_LANDSTALKER2 */;
	}
	else if (iParam0 == joaat("manana2"))
	{
		return Global_262145.f_25546 /* Tunable: ENABLE_RACE_CREATOR_MANANA2 */;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return Global_262145.f_25547 /* Tunable: ENABLE_RACE_CREATOR_PENUMBRA2 */;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return Global_262145.f_25548 /* Tunable: ENABLE_RACE_CREATOR_SEMINOLE2 */;
	}
	else if (iParam0 == joaat("youga3"))
	{
		return Global_262145.f_25549 /* Tunable: ENABLE_RACE_CREATOR_YOUGA3 */;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return Global_262145.f_25536 /* Tunable: ENABLE_RACE_CREATOR_OPENWHEEL1 */;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return (Global_262145.f_25539 /* Tunable: ENABLE_RACE_CREATOR_OPENWHEEL2 */ || __LIB_18__::func_699());
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return Global_262145.f_25550 /* Tunable: ENABLE_RACE_CREATOR_COQUETTE4 */;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return Global_262145.f_25551 /* Tunable: ENABLE_RACE_CREATOR_TIGON */;
	}
	else if (iParam0 == joaat("winky"))
	{
		return Global_262145.f_25576 /* Tunable: ENABLE_RACE_CREATOR_WINKY */;
	}
	else if (iParam0 == joaat("verus"))
	{
		return Global_262145.f_25577 /* Tunable: ENABLE_RACE_CREATOR_VERUS */;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return Global_262145.f_25579 /* Tunable: ENABLE_RACE_CREATOR_MANCHEZ2 */;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return Global_262145.f_25578 /* Tunable: ENABLE_RACE_CREATOR_SQUADDIE */;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return Global_262145.f_25580 /* Tunable: ENABLE_RACE_CREATOR_LONGFIN */;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return Global_262145.f_25575 /* Tunable: ENABLE_RACE_CREATOR_ITALIRSX */;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return Global_262145.f_25573 /* Tunable: ENABLE_RACE_CREATOR_WEEVIL */;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return Global_262145.f_25574 /* Tunable: ENABLE_RACE_CREATOR_SLAMTRUCK */;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return Global_262145.f_25572 /* Tunable: ENABLE_RACE_CREATOR_BRIOSO2 */;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return Global_262145.f_25605 /* Tunable: ENABLE_RACE_CREATOR_DOMINATOR7 */;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return Global_262145.f_25606 /* Tunable: ENABLE_RACE_CREATOR_JESTER4 */;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return Global_262145.f_25607 /* Tunable: ENABLE_RACE_CREATOR_FUTO2 */;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return Global_262145.f_25608 /* Tunable: ENABLE_RACE_CREATOR_DOMINATOR8 */;
	}
	else if (iParam0 == joaat("previon"))
	{
		return Global_262145.f_25609 /* Tunable: ENABLE_RACE_CREATOR_PREVION */;
	}
	else if (iParam0 == joaat("growler"))
	{
		return Global_262145.f_25610 /* Tunable: ENABLE_RACE_CREATOR_GROWLER */;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return Global_262145.f_25611 /* Tunable: ENABLE_RACE_CREATOR_COMET6 */;
	}
	else if (iParam0 == joaat("veto"))
	{
		return Global_262145.f_25612 /* Tunable: ENABLE_RACE_CREATOR_VETO */;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return Global_262145.f_25613 /* Tunable: ENABLE_RACE_CREATOR_VETO2 */;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return Global_262145.f_25614 /* Tunable: ENABLE_RACE_CREATOR_VECTRE */;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return Global_262145.f_25615 /* Tunable: ENABLE_RACE_CREATOR_SULTAN3 */;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return Global_262145.f_25616 /* Tunable: ENABLE_RACE_CREATOR_CYPHER */;
	}
	else if (iParam0 == joaat("champion"))
	{
		return Global_262145.f_25695 /* Tunable: ENABLE_RACE_CREATOR_CHAMPION */;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		return Global_262145.f_25696 /* Tunable: ENABLE_RACE_CREATOR_BUFFALO4 */;
	}
	else if (iParam0 == joaat("deity"))
	{
		return Global_262145.f_25697 /* Tunable: ENABLE_RACE_CREATOR_DEITY */;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		return Global_262145.f_25698 /* Tunable: ENABLE_RACE_CREATOR_JUBILEE */;
	}
	else if (iParam0 == joaat("ignus"))
	{
		return Global_262145.f_25699 /* Tunable: ENABLE_RACE_CREATOR_IGNUS */;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		return Global_262145.f_25700 /* Tunable: ENABLE_RACE_CREATOR_CINQUEMILA */;
	}
	else if (iParam0 == joaat("astron"))
	{
		return Global_262145.f_25701 /* Tunable: ENABLE_RACE_CREATOR_ASTRON */;
	}
	else if (iParam0 == joaat("comet7"))
	{
		return Global_262145.f_25702 /* Tunable: ENABLE_RACE_CREATOR_COMET7 */;
	}
	else if (iParam0 == joaat("zeno"))
	{
		return Global_262145.f_25703 /* Tunable: ENABLE_RACE_CREATOR_ZENO */;
	}
	else if (iParam0 == joaat("reever"))
	{
		return Global_262145.f_25704 /* Tunable: ENABLE_RACE_CREATOR_REEVER */;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		return Global_262145.f_25705 /* Tunable: ENABLE_RACE_CREATOR_IWAGEN */;
	}
	else if (iParam0 == joaat("granger2"))
	{
		return Global_262145.f_25706 /* Tunable: ENABLE_RACE_CREATOR_GRANGER2 */;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		return Global_262145.f_25707 /* Tunable: ENABLE_RACE_CREATOR_PATRIOT3 */;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		return Global_262145.f_25708 /* Tunable: ENABLE_RACE_CREATOR_SHINOBI */;
	}
	else if (iParam0 == joaat("baller7"))
	{
		return Global_262145.f_25709 /* Tunable: ENABLE_RACE_CREATOR_BALLER7 */;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return (Global_262145.f_25740 /* Tunable: ENABLE_RACE_CREATOR_RCBANDITO */ && __LIB_19__::func_4());
	}
	if (iParam0 == joaat("omnisegt"))
	{
		return Global_262145.f_25641 /* Tunable: ENABLE_RACE_CREATOR_OMNISEGT */;
	}
	else if (iParam0 == joaat("vigero2"))
	{
		return Global_262145.f_25642 /* Tunable: ENABLE_RACE_CREATOR_VIGERO2 */;
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		return Global_262145.f_25643 /* Tunable: ENABLE_RACE_CREATOR_SENTINEL4 */;
	}
	else if (iParam0 == joaat("greenwood"))
	{
		return Global_262145.f_25644 /* Tunable: ENABLE_RACE_CREATOR_GREENWOOD */;
	}
	else if (iParam0 == joaat("torero2"))
	{
		return Global_262145.f_25645 /* Tunable: ENABLE_RACE_CREATOR_TORERO2 */;
	}
	else if (iParam0 == joaat("corsita"))
	{
		return Global_262145.f_25646 /* Tunable: ENABLE_RACE_CREATOR_CORSITA */;
	}
	else if (iParam0 == joaat("lm87"))
	{
		return Global_262145.f_25647 /* Tunable: ENABLE_RACE_CREATOR_LM87 */;
	}
	else if (iParam0 == joaat("conada"))
	{
		return Global_262145.f_25648 /* Tunable: ENABLE_RACE_CREATOR_CONADA */;
	}
	else if (iParam0 == joaat("sm722"))
	{
		return Global_262145.f_25649 /* Tunable: ENABLE_RACE_CREATOR_SM722 */;
	}
	else if (iParam0 == joaat("draugur"))
	{
		return Global_262145.f_25650 /* Tunable: ENABLE_RACE_CREATOR_DRAUGUR */;
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		return Global_262145.f_25651 /* Tunable: ENABLE_RACE_CREATOR_RUINER4 */;
	}
	else if (iParam0 == joaat("brioso3"))
	{
		return Global_262145.f_25652 /* Tunable: ENABLE_RACE_CREATOR_BRIOSO3 */;
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		return Global_262145.f_25653 /* Tunable: ENABLE_RACE_CREATOR_KANJOSJ */;
	}
	else if (iParam0 == joaat("postlude"))
	{
		return Global_262145.f_25654 /* Tunable: ENABLE_RACE_CREATOR_POSTLUDE */;
	}
	else if (iParam0 == joaat("tenf"))
	{
		return Global_262145.f_25655 /* Tunable: ENABLE_RACE_CREATOR_TENF */;
	}
	else if (iParam0 == joaat("tenf2"))
	{
		return Global_262145.f_25656 /* Tunable: ENABLE_RACE_CREATOR_TENF2 */;
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		return Global_262145.f_25657 /* Tunable: ENABLE_RACE_CREATOR_RHINEHART */;
	}
	else if (iParam0 == joaat("weevil2"))
	{
		return Global_262145.f_25658 /* Tunable: ENABLE_RACE_CREATOR_WEEVIL2 */;
	}
	if ((((((iParam0 == joaat("toreador") || iParam0 == joaat("rancherxl")) || iParam0 == joaat("schwarzer")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("pbus2")) || iParam0 == joaat("mule4"))
	{
		return 0;
	}
	if (__LIB_18__::func_704(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_180(int iParam0)//Position - 0x13A8CD
{
	if (__LIB_0__::func_625() && !__LIB_0__::func_261())
	{
		if (((((((((((((((((iParam0 == joaat("WEAPON_PETROLCAN") || iParam0 == joaat("WEAPON_FIREWORK")) || iParam0 == joaat("WEAPON_WRENCH")) || iParam0 == joaat("WEAPON_BATTLEAXE")) || iParam0 == joaat("WEAPON_SWITCHBLADE")) || iParam0 == joaat("WEAPON_FLASHLIGHT")) || iParam0 == joaat("WEAPON_MACHETE")) || iParam0 == joaat("WEAPON_HATCHET")) || iParam0 == joaat("WEAPON_DAGGER")) || iParam0 == joaat("WEAPON_BOTTLE")) || iParam0 == joaat("WEAPON_GOLFCLUB")) || iParam0 == joaat("WEAPON_CROWBAR")) || iParam0 == joaat("WEAPON_BAT")) || iParam0 == joaat("WEAPON_HAMMER")) || iParam0 == joaat("WEAPON_NIGHTSTICK")) || iParam0 == joaat("WEAPON_KNIFE")) || iParam0 == joaat("WEAPON_KNUCKLE")) || iParam0 == joaat("WEAPON_POOLCUE"))
		{
			return 1;
		}
	}
	return 0;
}

char* func_181(int iParam0, int iParam1)//Position - 0x13B726
{
	int iVar0;
	int iVar1;
	var* uVar2;
	struct<7> Var3;
	if (iParam1 == joaat("WEAPON_KNUCKLE"))
	{
		switch (iParam0)
		{
			case joaat("COMPONENT_KNUCKLE_VARMOD_BASE"):
				return "WT_KNUCKLE" /* GXT: Knuckle Duster */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
				return "WCT_KNUCK_02" /* GXT: The Pimp */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
				return "WCT_KNUCK_BG" /* GXT: The Ballas */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
				return "WCT_KNUCK_DLR" /* GXT: The Hustler */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
				return "WCT_KNUCK_DMD" /* GXT: The Rock */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
				return "WCT_KNUCK_HT" /* GXT: The Hater */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
				return "WCT_KNUCK_LV" /* GXT: The Lover */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
				return "WCT_KNUCK_PC" /* GXT: The Player */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
				return "WCT_KNUCK_SLG" /* GXT: The King */;
				break;
			case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
				return "WCT_KNUCK_VG" /* GXT: The Vagos */;
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			return "WCT_NONE" /* GXT: No Attachment */;
			break;
		case joaat("COMPONENT_AT_RAILCOVER_01"):
			return "WCT_RAIL";
			break;
		case joaat("COMPONENT_AT_AR_AFGRIP"):
			return "WCT_GRIP" /* GXT: Grip */;
			break;
		case joaat("COMPONENT_AT_PI_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		case joaat("COMPONENT_AT_AR_FLSH"):
			return "WCT_FLASH" /* GXT: Flashlight */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
			return "WCT_SCOPE_MAC" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
			return "WCT_SCOPE_SML" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
			return "WCT_SCOPE_MED" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_LARGE"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MAX"):
			return "WCT_SCOPE_MAX" /* GXT: Advanced Scope */;
			break;
		case joaat("COMPONENT_AT_PI_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_AR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_AR_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_AT_SR_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_PISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_APPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_APPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MICROSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MICROSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_SMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_COMBATMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MINIGUN_CLIP_01"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_PISTOL50_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PISTOL50_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
			return "WCT_SCOPE_LRG" /* GXT: Scope */;
			break;
		case joaat("COMPONENT_AT_PI_SUPP_02"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_COMBATPDW_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
			return "WCT_VAR_SIL" /* GXT: Platinum Pearl Deluxe Finish */;
			break;
		case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_SMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
			return "WCT_VAR_METAL" /* GXT: Gilded Gun Metal Finish */;
			break;
		case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
			return "WCT_VAR_GOLD" /* GXT: Yusuf Amir Luxury Finish */;
			break;
		case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
			return "WCT_VAR_WOOD" /* GXT: Etched Wood Grip Finish */;
			break;
		case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
			return "WCT_VAR_ETCHM" /* GXT: Etched Gun Metal Finish */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_BASE"):
			return "WCT_SB_BASE" /* GXT: Default Handle */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
			return "WCT_SB_VAR1" /* GXT: VIP Variant */;
			break;
		case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
			return "WCT_SB_VAR2" /* GXT: Bodyguard Variant */;
			break;
		case joaat("COMPONENT_REVOLVER_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
			return "WCT_REV_VARB" /* GXT: VIP Variant */;
			break;
		case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
			return "WCT_REV_VARG" /* GXT: Bodyguard Variant */;
			break;
		case joaat("COMPONENT_SMG_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
			return "WCT_CLIP_BOX" /* GXT: Box magazine */;
			break;
		case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
			return "WCT_CLIP_DRM" /* GXT: Drum magazine */;
			break;
		case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
			return "WCT_VAR_GUN" /* GXT: Mk II */;
			break;
		case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return "WCT_CAMO_IND" /* GXT: Patriotic */;
			break;
		case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
			return "WCT_SCOPE_MAC2" /* GXT: Small Scope */;
			break;
		case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
			return "WCT_SCOPE_SML2" /* GXT: Medium Scope */;
			break;
		case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
			return "WCT_VAR_RAY18" /* GXT: Festive tint */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
			return "WCT_CLIP1" /* GXT: Default Clip */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
			return "WCT_CLIP2" /* GXT: Extended Clip */;
			break;
		case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
			return "WCT_SUPP" /* GXT: Suppressor */;
			break;
		case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
			return "WCT_VAR_FAM" /* GXT: Families Finish */;
			break;
		case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
			return "WCT_VAR_WEED" /* GXT: Organics Finish */;
			break;
		case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
			return "WCT_VAR_STUD" /* GXT: Record A Finish */;
			break;
		case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
			return "WCT_VAR_BONE" /* GXT: Bone Finish */;
			break;
		default:
			if (iParam1 != 0)
			{
				iVar0 = __LIB_0__::func_289(iParam1, &uVar2);
				if (iVar0 != -1)
				{
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar0))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar0, iVar1, &Var3))
						{
							if (Var3.f_3 == iParam0)
							{
								return __LIB_1__::func_601(&(Var3.f_6));
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	return "WCT_INVALID";
}

bool func_182()//Position - 0x143709
{
	if (__LIB_18__::func_739() || __LIB_18__::func_740())
	{
		return 1;
	}
	return (__LIB_17__::func_992() && Global_4718592.f_2 == 24);
}

int func_183(int iParam0)//Position - 0x1486E2
{
	switch (iParam0)
	{
		case 30:
		case 31:
		case 32:
		case 33:
			return 1;
		default:
	}
	return 0;
}

void func_184(int iParam0)//Position - 0x150CCB
{
	int iVar0;
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if ((((((((((((((((((((((((((((((((((((((((((((((((iVar0 != 30 && iVar0 != 21) && iVar0 != 31) && iVar0 != 0) && iVar0 != 9) && iVar0 != 8) && iVar0 != 1) && iVar0 != 2) && iVar0 != 11) && iVar0 != 10) && iVar0 != 218) && iVar0 != 219) && iVar0 != 220) && iVar0 != 221) && iVar0 != 199) && iVar0 != 201) && iVar0 != 202) && iVar0 != 203) && iVar0 != 204) && iVar0 != 205) && iVar0 != 206) && iVar0 != 207) && iVar0 != 208) && iVar0 != 217) && iVar0 != 187) && iVar0 != 188) && iVar0 != 189) && iVar0 != 190) && iVar0 != 191) && iVar0 != 195) && iVar0 != 196) && iVar0 != 197) && iVar0 != 198) && iVar0 != 209) && iVar0 != 210) && iVar0 != 239) && iVar0 != 240) && iVar0 != 237) && iVar0 != 238) && iVar0 != 242) && iVar0 != 241) && iVar0 != 290) && iVar0 != 291) && iVar0 != 250) && iVar0 != 251) && iVar0 != 252) && iVar0 != 253) && iVar0 != 256) && iVar0 != 254)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if ((((((((((((((((((((((((((((((((((((((((((((iVar0 != 1 && iVar0 != 2) && iVar0 != 30) && iVar0 != 31) && iVar0 != 59) && iVar0 != 60) && iVar0 != 71) && iVar0 != 72) && iVar0 != 0) && iVar0 != 11) && iVar0 != 10) && iVar0 != 199) && iVar0 != 201) && iVar0 != 202) && iVar0 != 203) && iVar0 != 204) && iVar0 != 205) && iVar0 != 206) && iVar0 != 207) && iVar0 != 208) && iVar0 != 217) && iVar0 != 187) && iVar0 != 188) && iVar0 != 189) && iVar0 != 190) && iVar0 != 191) && iVar0 != 195) && iVar0 != 196) && iVar0 != 197) && iVar0 != 198) && iVar0 != 209) && iVar0 != 210) && iVar0 != 239) && iVar0 != 240) && iVar0 != 237) && iVar0 != 238) && iVar0 != 242) && iVar0 != 241) && iVar0 != 290) && iVar0 != 291) && iVar0 != 250) && iVar0 != 251) && iVar0 != 252) && iVar0 != 253) && iVar0 != 256)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
	else if (iParam0 == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (363 - 1))
		{
			if (((((((((iVar0 == 142 || iVar0 == 141) || iVar0 == 140) || iVar0 == 263) || iVar0 == 264) || iVar0 == 69) || iVar0 == 70) || iVar0 == 45) || iVar0 == 76) || iVar0 == 73)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, iVar0, true);
			}
			iVar0++;
		}
	}
}

void func_185(int iParam0)//Position - 0x15210A
{
	if (Global_23150.f_75 >= 3 || Global_23150.f_74 >= 4)
	{
		return;
	}
	Global_23150.f_5[Global_23150.f_74] = 2;
	Global_23150.f_74++;
	Global_23150.f_10[Global_23150.f_75] = iParam0;
	Global_23150.f_75++;
}

int func_186(int iParam0)//Position - 0x1582BC
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return 2;
		case 1:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x15843D
{
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
			return 2;
		default:
	}
	return 1;
}

char* func_188(int iParam0)//Position - 0x164E27
{
	switch (iParam0)
	{
		case 0:
			return "MASK_AMA";
		case 1:
			return "MASK_ANM";
		case 2:
			return "MASK_PBG";
		case 3:
			return "MASK_BST";
		case 4:
			return "MASK_CHA";
		case 5:
			return "MASK_CLM";
		case 6:
			return "MASK_CRN";
		case 7:
			return "MASK_GAS";
		case 8:
			return "MASK_HLM";
		case 9:
			return "MASK_HRH";
		case 10:
			return "MASK_PUP";
		case 11:
			return "MASK_SKL";
		case 12:
			return "MASK_TAC";
		case 13:
			return "MASK_TAP";
		case 14:
			return "MASK_THE";
		case 15:
			return "MASK_PIG";
		case 16:
			return "MASK_DUCT";
		case 17:
			return "MASK_INCO";
		case 18:
			return "MASK_BALA";
		case 19:
			return "MASK_CAMO";
		case 20:
			return "MASK_PSYC";
		case 21:
			return "MASK_STRE";
		case 22:
			return "MASK_BAND";
		case 23:
			return "MASK_HOOD";
		case 24:
			return "MASK_DESI";
		case 25:
			return "MASK_DEVIL";
		case 26:
			return "MASK_SADISTIC";
		case 27:
			return "MASK_POSS";
		case 28:
			return "MASK_FIENDS";
		case 29:
			return "MASK_CREAT";
		case 30:
			return "MASK_WICKED";
		case 31:
			return "MASK_DEFAULT" /* GXT: Ballistic */;
		case 40:
			return "MASK_ANIMAL" /* GXT: Animals */;
		case 37:
			return "MASK_LFRUITS" /* GXT: Lucky Fruits */;
		case 39:
			return "MASK_CLOWNS" /* GXT: Clowns */;
		case 44:
			return "MASK_IH_BHALF" /* GXT: Branded Face */;
		case 45:
			return "MASK_IH_PFULL" /* GXT: Painted Full-Face */;
		case 46:
			return "MASK_IH_CSPEC" /* GXT: Camo Spec Ski */;
		case 47:
			return "MASK_IH_NGAIT" /* GXT: Neck Gaiters */;
		case 48:
			return "MASK_IH_FWRAP" /* GXT: Face Wraps */;
		case 49:
			return "MASK_IH_NOPS" /* GXT: Night Ops */;
		case 50:
			return "MASK_IH_NVISI" /* GXT: Night Vision */;
		case 51:
			return "MASK_IH_CHALF" /* GXT: Camo Half-Face */;
		case 52:
			return "MASK_IH_MNIGH" /* GXT: Monocular Night Vision */;
		case 53:
			return "MASK_IH_IGUER" /* GXT: Island Guerilla */;
		case 54:
			return "MASK_IH_PHOCK" /* GXT: Patterned Hockey */;
		default:
	}
	return "OF_STYLE_INV";
}

int func_189(int iParam0, bool bParam1)//Position - 0x16E0E6
{
	if (iParam0 < 0 || iParam0 >= __LIB_16__::func_699())
	{
		return 0;
	}
	if (bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 28))
	{
		return 1;
	}
	else if (!bParam1 && BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 27))
	{
		return 1;
	}
	return 0;
}

char* func_190(int iParam0)//Position - 0x16F296
{
	if (((((((((((((((iParam0 == 0 || iParam0 == 1) || iParam0 == 6) || iParam0 == 7) || iParam0 == 18) || iParam0 == 19) || iParam0 == 12) || iParam0 == 13) || iParam0 == 22) || iParam0 == 23) || iParam0 == 20) || iParam0 == 21) || iParam0 == 24) || iParam0 == 25) || iParam0 == 26) || iParam0 == 27)
	{
		return "LOB_VEH_CL_";
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		return "LOB_VEH_CLB_";
	}
	else if (iParam0 == 4 || iParam0 == 5)
	{
		return "LOB_VEH_AIR_";
	}
	return "";
}

var func_191()//Position - 0x16F431
{
	return BitTest(Global_4718592.f_32, 17);
}

int func_192(int iParam0)//Position - 0x174400
{
	switch (iParam0)
	{
		case joaat("prop_cctv_cam_06a"):
		case joaat("prop_cctv_cam_07a"):
		case joaat("hei_prop_bank_cctv_01"):
		case joaat("hei_prop_bank_cctv_02"):
		case joaat("xm_prop_x17_server_farm_cctv_01"):
		case joaat("prop_cctv_cam_05a"):
			return 1;
			break;
	}
	if (iParam0 == joaat("ch_prop_ch_cctv_cam_01a") || iParam0 == joaat("ch_prop_ch_cctv_cam_02a"))
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x1966FC
{
	switch (iParam0)
	{
		case joaat("WEAPON_UNARMED"):
		case joaat("WEAPON_KNIFE"):
		case joaat("WEAPON_BAT"):
		case joaat("WEAPON_NIGHTSTICK"):
		case joaat("WEAPON_HAMMER"):
		case joaat("WEAPON_GOLFCLUB"):
		case joaat("WEAPON_CROWBAR"):
		case joaat("WEAPON_BOTTLE"):
		case joaat("WEAPON_DAGGER"):
		case joaat("WEAPON_KNUCKLE"):
		case joaat("WEAPON_FLASHLIGHT"):
		case joaat("WEAPON_MACHETE"):
		case joaat("WEAPON_SWITCHBLADE"):
		case joaat("WEAPON_BATTLEAXE"):
		case joaat("WEAPON_POOLCUE"):
		case joaat("WEAPON_WRENCH"):
		case joaat("WEAPON_STONE_HATCHET"):
		case joaat("WEAPON_HATCHET"):
			return 1;
			break;
	}
	return 0;
}

int func_194(int iParam0)//Position - 0x19677F
{
	switch (*iParam0)
	{
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_ASSAULTSNIPER"):
		case joaat("WEAPON_MARKSMANRIFLE"):
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 1;
			break;
	}
	return 0;
}

int func_195(int iParam0)//Position - 0x196887
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
		case joaat("WEAPON_COMBATPISTOL"):
		case joaat("WEAPON_APPISTOL"):
		case joaat("WEAPON_PISTOL50"):
		case joaat("WEAPON_SNSPISTOL"):
		case joaat("WEAPON_HEAVYPISTOL"):
		case joaat("WEAPON_VINTAGEPISTOL"):
		case joaat("WEAPON_MARKSMANPISTOL"):
		case joaat("WEAPON_REVOLVER"):
		case joaat("WEAPON_DOUBLEACTION"):
		case joaat("WEAPON_REVOLVER_MK2"):
		case joaat("WEAPON_SNSPISTOL_MK2"):
		case joaat("WEAPON_PISTOL_MK2"):
		case joaat("WEAPON_RAYPISTOL"):
		case joaat("WEAPON_CERAMICPISTOL"):
		case joaat("WEAPON_STUNGUN_MP"):
		case joaat("WEAPON_FLAREGUN"):
		case joaat("WEAPON_NAVYREVOLVER"):
		case joaat("WEAPON_GADGETPISTOL"):
			return 1;
		default:
	}
	return 0;
}

char* func_196(int iParam0)//Position - 0x1B7202
{
	switch (iParam0)
	{
		case 0:
			return "OF_STYLE_1";
		case 1:
			return "OF_STYLE_2";
		case 2:
			return "OF_STYLE_3";
		case 3:
			return "OF_STYLE_4";
		case 4:
			return "OF_STYLE_5";
		case 5:
			return "OF_STYLE_6";
		case 6:
			return "OF_STYLE_7";
		case 7:
			return "OF_STYLE_8";
		case 8:
			return "OF_STYLE_9";
		case 9:
			return "OF_STYLE_10";
		case 10:
			return "OF_STYLE_11";
		case 11:
			return "OF_STYLE_12";
		case 12:
			return "OF_STYLE_13";
		case 13:
			return "OF_STYLE_14";
		case 14:
			return "OF_STYLE_15";
		case 15:
			return "OF_STYLE_16";
		case 16:
			return "OF_STYLE_17";
		case 17:
			return "OF_STYLE_18";
		case 18:
			return "OF_STYLE_19";
		case 19:
			return "OF_STYLE_20";
		case 20:
			return "OF_STYLE_21";
		case 21:
			return "OF_STYLE_22";
		case 22:
			return "OF_STYLE_23";
		case 23:
			return "OF_STYLE_24";
		case 24:
			return "OF_STYLE_25";
		case 26:
			return "OF_STYLE_26";
		case 25:
			return "OF_STYLE_27";
		case 27:
			return "OF_STYLE_28";
		case 28:
			return "OF_STYLE_29" /* GXT: Scuba Gear */;
		case 29:
			return "OF_STYLE_30" /* GXT: Paramedics */;
		case 30:
			return "OF_STYLE_31" /* GXT: Mid Tech Technical */;
		case 31:
			return "OF_STYLE_32" /* GXT: Mid Tech Combat */;
		case 32:
			return "OF_STYLE_33" /* GXT: Modern Stealth Gear */;
		case 33:
			return "OF_STYLE_34" /* GXT: Casual Pilot Gear */;
		case 34:
			return "OF_STYLE_35" /* GXT: Fighter Pilot Gear */;
		case 35:
			return "OF_STYLE_36" /* GXT: High Tech Riot */;
		case 36:
			return "OF_STYLE_37" /* GXT: High Tech Impact */;
		case 37:
			return "OF_STYLE_38" /* GXT: Mid Tech Masked */;
		case 38:
			return "OF_STYLE_39" /* GXT: Mid Tech Rebellion */;
		case 39:
			return "OF_STYLE_40" /* GXT: Mid Tech Havoc */;
		case 40:
			return "OF_STYLE_41" /* GXT: Mid Tech Adaptable */;
		case 41:
			return "OF_STYLE_42" /* GXT: Sub Driver */;
		case 42:
			return "OF_STYLE_43" /* GXT: Heavy Combat Gear */;
		case 43:
			return "OF_STYLE_44" /* GXT: Low Tech Tactical */;
		case 44:
			return "OF_STYLE_45" /* GXT: Cruiser Combat */;
		case 45:
			return "OF_STYLE_46" /* GXT: Classic Stealth Gear */;
		case 46:
			return "OF_STYLE_47" /* GXT: Military Stealth Gear */;
		case 47:
			return "OF_STYLE_48" /* GXT: Gorka Suits */;
		case 48:
			return "OF_STYLE_49" /* GXT: Balaclava Crook */;
		case 49:
			return "OF_STYLE_50" /* GXT: Classic Crook */;
		case 50:
			return "OF_STYLE_51" /* GXT: High-end Crook */;
		case 51:
			return "OF_STYLE_52" /* GXT: Infiltration: Upgraded Tech */;
		case 52:
			return "OF_STYLE_53" /* GXT: Infiltration: Advanced Tech */;
		case 53:
			return "OF_STYLE_54" /* GXT: Infiltration: Modernized Tech */;
		case 54:
			return "OF_STYLE_55" /* GXT: Bugstars Uniforms */;
		case 55:
			return "OF_STYLE_56" /* GXT: Maintenance */;
		case 56:
			return "OF_STYLE_57" /* GXT: Gruppe Sechs Gear */;
		case 57:
			return "OF_STYLE_58" /* GXT: The Entourage */;
		case 58:
			return "OF_STYLE_59" /* GXT: Orderly Armor */;
		case 59:
			return "OF_STYLE_60" /* GXT: Upscale Armor */;
		case 60:
			return "OF_STYLE_61" /* GXT: Evening Armor */;
		case 61:
			return "OF_STYLE_62" /* GXT: Reinforced: Padded Combat */;
		case 62:
			return "OF_STYLE_63" /* GXT: Reinforced: Bulk Combat */;
		case 63:
			return "OF_STYLE_64" /* GXT: Reinforced: Compact Combat */;
		case 64:
			return "OF_STYLE_65" /* GXT: Smugglers */;
		case 65:
			return "OF_STYLE_66" /* GXT: Urban Armor */;
		case 66:
			return "OF_STYLE_67" /* GXT: Grassland Armor */;
		case 67:
			return "OF_STYLE_68" /* GXT: Casual */;
		case 68:
			return "OF_STYLE_69" /* GXT: Guerilla */;
		case 69:
			return "OF_STYLE_70" /* GXT: Night Ops */;
		case 70:
			return "OF_STYLE_71" /* GXT: Jungle Camo */;
		default:
	}
	return "OF_STYLE_INV";
}

int func_197(int iParam0)//Position - 0x1B7F4E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_4718592.f_142823[iVar0] != -1)
		{
			iParam0 = (iParam0 - 1);
		}
		iVar0++;
	}
	return iParam0;
}

void func_198(var uParam0, var uParam1)//Position - 0x1B8D2F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iVar0 >= *uParam0)
		{
		}
		else
		{
			(*uParam1)[iVar0] = (*uParam0)[iVar0];
			iVar0++;
		}
	}
}

int func_199()//Position - 0x1BE250
{
	if (__LIB_0__::func_261())
	{
		return 1;
	}
	if (!Global_262145.f_25528 /* Tunable: ENABLE_OPEN_WHEEL_RACE_CREATOR */)
	{
		return 0;
	}
	return 1;
}

int func_200()//Position - 0x1BE273
{
	if (__LIB_0__::func_261())
	{
		return 1;
	}
	if (!Global_262145.f_24027 /* Tunable: -793096515 */)
	{
		return 0;
	}
	return 1;
}

float func_201(int iParam0)//Position - 0x1DCB32
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 1f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 3.5f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return 0.47f;
	}
	return 1f;
}

Vector3 func_202(int iParam0)//Position - 0x1DCB73
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return -12.5f, 0f, 0f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 90f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return -2f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

Vector3 func_203(int iParam0)//Position - 0x1DCBC0
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a"))
	{
		return 0f, 0f, 25f;
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return 0f, 0f, 4.5f;
	}
	else if (iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return 0f, 0f, 11.5f;
	}
	return 0f, 0f, 0f;
}

char* func_204(int iParam0)//Position - 0x1DCC0D
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a") || iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return "scr_stunts_fire_ring";
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "ent_amb_fire_ring";
	}
	return "";
}

char* func_205(int iParam0)//Position - 0x1DCC4E
{
	if (iParam0 == joaat("stt_prop_hoop_constraction_01a") || iParam0 == joaat("ar_prop_ar_hoop_med_01"))
	{
		return "scr_stunts";
	}
	else if (iParam0 == joaat("stt_prop_hoop_small_01"))
	{
		return "core";
	}
	return "";
}

int func_206()//Position - 0x1EF3A8
{
	return Global_1574530;
}

int func_207()//Position - 0x2376BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)) && !__LIB_18__::func_543(iVar2)) && Global_1853348[iVar2 /*834*/].f_205 != 8) && !BitTest(Global_1853348[iVar2 /*834*/].f_36.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_208()//Position - 0x23ACA8
{
	if ((!Global_2656982 && !Global_2656982.f_1) && !Global_2656982.f_2)
	{
		return 0;
	}
	if (!Global_2656982.f_23)
	{
		return 1;
	}
	return 0;
}

bool func_209()//Position - 0x23B290
{
	return Global_1574533;
}

int func_210(char* sParam0)//Position - 0x2423F1
{
	struct<13> Var0;
	struct<13> Var1;
	Var0 = { __LIB_16__::func_635(sParam0) };
	Var1 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var1, &Var0))
	{
		return 1;
	}
	return 0;
}

void func_211(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x242466
{
	bool bVar0;
	bool bVar1;
	var* uVar2;
	var* uVar3;
	int iVar4;
	int iVar5;
	var* uVar6[16];
	if (uParam0->f_9 >= 513)
	{
		return;
	}
	if (uParam0->f_9 == 0 && iParam3 == 1)
	{
		uParam1->f_1864 = 0;
	}
	StringCopy(uParam1[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
	StringCopy(&(uParam1->f_513[uParam0->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
	uVar2 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "list");
	if (bParam2)
	{
		if (DATAFILE::DATADICT_GET_TYPE(uVar2, "h2h") == 1)
		{
			bVar0 = DATAFILE::DATADICT_GET_BOOL(uVar2, "h2h");
		}
		if (DATAFILE::DATADICT_GET_TYPE(uVar2, "h2h") == 1)
		{
			bVar1 = DATAFILE::DATADICT_GET_BOOL(uVar2, "ch");
		}
		if (bVar0)
		{
			MISC::SET_BIT(&(uParam1->f_1865), uParam0->f_9);
		}
		if (bVar1)
		{
			MISC::SET_BIT(&(uParam1->f_1866), uParam0->f_9);
		}
	}
	iVar4 = DATAFILE::DATAARRAY_GET_COUNT(uVar3);
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		uVar6[iVar5] = DATAFILE::DATAARRAY_GET_DICT(uVar3, iVar5);
		if (DATAFILE::DATADICT_GET_TYPE(uVar6[iVar5], "type") == 2)
		{
			uParam1->f_1219[uParam0->f_9 /*17*/][iVar5] = DATAFILE::DATADICT_GET_INT(uVar6[iVar5], "type");
		}
		iVar5++;
	}
	uParam1->f_1864 = uParam0->f_9;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_513[uParam0->f_9 /*6*/])))
	{
		uParam0->f_9++;
	}
	uParam1->f_1864++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

void func_212(var uParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x2425E1
{
	bool bVar0;
	bool bVar1;
	var* uVar2;
	var* uVar3;
	int iVar4;
	int iVar5;
	var* uVar6[16];
	if (uParam0->f_9 >= 257)
	{
		return;
	}
	if (uParam0->f_9 == 0 && iParam3 == 1)
	{
		uParam1->f_936 = 0;
	}
	StringCopy(uParam1[uParam0->f_9 /*16*/], NETWORK::UGC_GET_CONTENT_NAME(uParam0->f_7), 64);
	StringCopy(&(uParam1->f_257[uParam0->f_9 /*6*/]), NETWORK::UGC_GET_CONTENT_ID(uParam0->f_7), 24);
	uVar2 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(uVar2, "list");
	if (bParam2)
	{
		bVar0 = DATAFILE::DATADICT_GET_BOOL(uVar2, "h2h");
		bVar1 = DATAFILE::DATADICT_GET_BOOL(uVar2, "ch");
		if (bVar0)
		{
			MISC::SET_BIT(&(uParam1->f_937), uParam0->f_9);
		}
		if (bVar1)
		{
			MISC::SET_BIT(&(uParam1->f_938), uParam0->f_9);
		}
	}
	iVar4 = DATAFILE::DATAARRAY_GET_COUNT(uVar3);
	if (iVar4 != 0)
	{
		iVar5 = 0;
		while (iVar5 <= (iVar4 - 1))
		{
			uVar6[iVar5] = DATAFILE::DATAARRAY_GET_DICT(uVar3, iVar5);
			uParam1->f_611[uParam0->f_9 /*17*/][iVar5] = DATAFILE::DATADICT_GET_INT(uVar6[iVar5], "type");
			iVar5++;
		}
	}
	uParam1->f_936 = uParam0->f_9;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1[uParam0->f_9 /*16*/]) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_257[uParam0->f_9 /*6*/])))
	{
		uParam0->f_9++;
	}
	uParam1->f_936++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

bool func_213()//Position - 0x2488E7
{
	return Global_1835431.f_2;
}

int func_214()//Position - 0x248E85
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if ((iVar0 == joaat("Player_Zero") || iVar0 == joaat("Player_One")) || iVar0 == joaat("Player_Two"))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x14E1D
{
	if (__LIB_10__::func_229(Global_4718592.f_168757))
	{
		switch (iParam0)
		{
			case -1:
				return joaat("prop_ic_mguns_wh_tr");
				break;
			case 0:
				return joaat("prop_ic_mguns_tr");
				break;
			case 1:
				return joaat("prop_ic_mguns_p_tr");
				break;
			case 2:
				return joaat("prop_ic_mguns_pk_tr");
				break;
			case 3:
				return joaat("prop_ic_mguns_g_tr");
				break;
		}
	}
	else
	{
		return joaat("prop_ic_mguns_b");
	}
	return joaat("prop_ic_mguns_b");
}

int func_216(int iParam0)//Position - 0x1FEFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return __LIB_18__::func_731(iVar0, iVar1, iVar2, iVar3);
}

int func_217()//Position - 0x20360
{
	return __LIB_1__::func_360(1298, -1, 0);
}

int func_218(int iParam0)//Position - 0x2051F
{
	struct<13> Var0;
	int iVar1;
	Var0 = { __LIB_0__::func_819(iParam0) };
	iVar1 = __LIB_1__::func_72(__LIB_1__::func_73(&Var0));
	return __LIB_16__::func_389(iVar1);
}

int func_219(int iParam0)//Position - 0x24BAB
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_156(iParam0, 1, 1))
	{
		return Global_2689235[iParam0 /*453*/].f_318.f_17;
	}
	return -1;
}

void func_220(int iParam0, bool bParam1, int iParam2)//Position - 0xAAFDE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_16__::func_545(iParam0, iParam2);
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
		if (!__LIB_0__::func_157(0))
		{
			iVar2 = __LIB_0__::func_271(iParam0);
			if (iVar2 != 13122)
			{
				__LIB_1__::func_354(iVar2, iVar0, iParam2, 1, 0);
			}
		}
	}
}

bool func_221(var uParam0, bool bParam1)//Position - 0xE69B5
{
	return BitTest((*uParam0)[__LIB_13__::func_437(bParam1)], __LIB_18__::func_410(bParam1));
}

int func_222()//Position - 0xEA6EE
{
	int iVar0;
	iVar0 = __LIB_1__::func_360(6503, -1, 0);
	switch (__LIB_16__::func_275())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return BitTest(iVar0, 3);
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return BitTest(iVar0, 8);
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			return BitTest(iVar0, 15);
		default:
	}
	return 0;
}

bool func_223()//Position - 0xEAE17
{
	return __LIB_18__::func_942(Global_4718592.f_116524);
}

int func_224(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0xEB3E0
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	iVar0 = __LIB_18__::func_941(Global_4718592.f_116986, 0);
	iVar1 = __LIB_18__::func_944();
	if (iVar1 == 0)
	{
		iVar1 = Global_4718592.f_116524;
	}
	switch (Global_4718592.f_591)
	{
		case 0:
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_9198 /* Tunable: HEIST_DIFFICULTY_EASY */));
			break;
		case 1:
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_9199 /* Tunable: HEIST_DIFFICULTY_NORMAL */));
			break;
		case 2:
			iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_262145.f_9200 /* Tunable: HEIST_DIFFICULTY_HARD */));
			break;
	}
	if (iVar0 < Global_262145.f_8150 /* Tunable: EARNINGS_HEISTS_FINALE_MINIMUM_TOTAL_CASH_TAKE */)
	{
		iVar0 = Global_262145.f_8150 /* Tunable: EARNINGS_HEISTS_FINALE_MINIMUM_TOTAL_CASH_TAKE */;
	}
	if (iVar0 > Global_262145.f_8151 /* Tunable: EARNINGS_HEISTS_FINALE_MAXIMUM_TOTAL_CASH_TAKE */)
	{
		iVar0 = Global_262145.f_8151 /* Tunable: EARNINGS_HEISTS_FINALE_MAXIMUM_TOTAL_CASH_TAKE */;
	}
	Global_2715699.f_3479.f_76 = iVar0;
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	if (bParam0)
	{
		iVar4 = 0;
		while (iVar4 < 4)
		{
			iVar3 = (iVar3 + Global_4718592.f_162908[iVar4]);
			iVar4++;
		}
		fVar2 = (fVar2 - IntToFloat((iParam3 * iVar3)));
		if (iParam4 > 0)
		{
			fVar2 = (fVar2 - IntToFloat(iParam4));
		}
		Global_2715699.f_3479.f_77 = SYSTEM::ROUND(fVar2);
		if (bParam1)
		{
			fVar5 = SYSTEM::TO_FLOAT(Global_2715699.f_6332);
			fVar2 = (fVar2 * (fVar5 / 100f));
		}
		Global_2715699.f_3479.f_78 = Global_2715699.f_6332;
		Global_2715699.f_3479.f_79 = SYSTEM::ROUND(fVar2);
		if (__LIB_18__::func_943())
		{
			if (__LIB_7__::func_355(iVar1, 1) > 1)
			{
				fVar2 = (fVar2 * Global_262145.f_8149 /* Tunable: EARNINGS_HEISTS_FINALE_REPLAY_CASH_REWARD */);
				iVar0 = SYSTEM::ROUND(fVar2);
			}
			else
			{
				fVar2 = (fVar2 * Global_262145.f_8148 /* Tunable: EARNINGS_HEISTS_FINALE_FIRST_PLAY_CASH_REWARD */);
				iVar0 = SYSTEM::ROUND(fVar2);
			}
		}
		else if (__LIB_7__::func_355(iVar1, 0) > 1)
		{
			fVar2 = (fVar2 * Global_262145.f_8149 /* Tunable: EARNINGS_HEISTS_FINALE_REPLAY_CASH_REWARD */);
			iVar0 = SYSTEM::ROUND(fVar2);
		}
		else
		{
			fVar2 = (fVar2 * Global_262145.f_8148 /* Tunable: EARNINGS_HEISTS_FINALE_FIRST_PLAY_CASH_REWARD */);
			iVar0 = SYSTEM::ROUND(fVar2);
		}
	}
	else if (iParam2 <= (Global_262145.f_8303 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_1 */ * 60000))
	{
		fVar6 = (Global_262145.f_8309 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_1 */ / 100f);
		fVar2 = (fVar2 * fVar6);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else if (iParam2 <= (Global_262145.f_8304 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_2 */ * 60000))
	{
		fVar7 = (Global_262145.f_8310 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_2 */ / 100f);
		fVar2 = (fVar2 * fVar7);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else if (iParam2 <= (Global_262145.f_8305 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_3 */ * 60000))
	{
		fVar8 = (Global_262145.f_8311 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_3 */ / 100f);
		fVar2 = (fVar2 * fVar8);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else if (iParam2 <= (Global_262145.f_8306 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_4 */ * 60000))
	{
		fVar9 = (Global_262145.f_8312 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_4 */ / 100f);
		fVar2 = (fVar2 * fVar9);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else if (iParam2 <= (Global_262145.f_8307 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_5 */ * 60000))
	{
		fVar10 = (Global_262145.f_8313 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_5 */ / 100f);
		fVar2 = (fVar2 * fVar10);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else if (iParam2 <= (Global_262145.f_8308 /* Tunable: HEIST_FAIL_CASH_TIME_PERIOD_6 */ * 60000))
	{
		fVar11 = (Global_262145.f_8314 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_6 */ / 100f);
		fVar2 = (fVar2 * fVar11);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	else
	{
		fVar12 = (Global_262145.f_8315 /* Tunable: HEISTS_FINALE_FAIL_CASH_PERCENTAGE_PERIOD_7 */ / 100f);
		fVar2 = (fVar2 * fVar12);
		iVar0 = SYSTEM::ROUND(fVar2);
	}
	if (!bParam0)
	{
		if (iVar0 < 500)
		{
			iVar0 = 500;
		}
		if (__LIB_1__::func_614())
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

var func_225()//Position - 0xFB1B6
{
	return BitTest(Global_4718592.f_107262[15 /*4*/][__LIB_13__::func_437(5)], __LIB_18__::func_410(5));
}

int func_226(int iParam0, int iParam1)//Position - 0x11E44D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= __LIB_18__::func_612(iParam1))
	{
		if (iParam0 == __LIB_13__::func_470(iParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_227(int iParam0, bool bParam1)//Position - 0x1378B4
{
	if (!bParam1)
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 5);
	}
	if (!__LIB_0__::func_86(Global_4718592.f_95507[iParam0 /*58*/].f_3))
	{
		return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 6);
	}
	return BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 5);
}

float func_228(char* sParam0, char* sParam1, bool bParam2)//Position - 0x16543F
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	__LIB_3__::func_62(1, 1, 0, 0, 0, 0, bParam2);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

int func_229(int iParam0, bool bParam1)//Position - 0x1B83E1
{
	if ((((BitTest(Global_4718592.f_142733[iParam0 /*3*/][0], __LIB_18__::func_410(bParam1)) || BitTest(Global_4718592.f_142733[iParam0 /*3*/][1], __LIB_18__::func_410(bParam1))) || __LIB_1__::func_117(174)) || BitTest(Global_4718592.f_142759, iParam0)) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
	{
		return 1;
	}
	if (iParam0 == 3)
	{
		if (((Global_262145.f_12034 /* Tunable: DEFAULT_OUTFIT_ADVERSARY_HALLOWEEN */ || Global_262145.f_12035 /* Tunable: ENABLE_OUTFIT_ADVERSARY_HALLOWEEN */) && Global_4718592.f_142733[iParam0 /*3*/][0] == 0) && Global_4718592.f_142733[iParam0 /*3*/][1] == 0)
		{
			return 1;
		}
	}
	if (iParam0 == 4)
	{
		if (((Global_262145.f_12036 /* Tunable: DEFAULT_OUTFIT_ADVERSARY_SOLO */ || Global_262145.f_12037 /* Tunable: ENABLE_OUTFIT_ADVERSARY_SOLO */) && Global_4718592.f_142733[iParam0 /*3*/][0] == 0) && Global_4718592.f_142733[iParam0 /*3*/][1] == 0)
		{
			return 1;
		}
	}
	return 0;
}

var func_230()//Position - 0x1C27C5
{
	return BitTest(Global_4718592.f_107262[15 /*4*/][__LIB_13__::func_437(3)], __LIB_18__::func_410(3));
}

var func_231()//Position - 0x1C2809
{
	return BitTest(Global_4718592.f_107262[15 /*4*/][__LIB_13__::func_437(1)], __LIB_18__::func_410(1));
}

int func_232(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1F2A1C
{
	if (!__LIB_0__::func_261() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!__LIB_11__::func_730() && iParam1 == 0) && !bParam3)
			{
				if (Global_4718592.f_117095 == 0)
				{
					if (__LIB_17__::func_945())
					{
						__LIB_18__::func_603(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						__LIB_2__::func_355();
						DATAFILE::DATAFILE_DELETE_REQUESTED_FILE(uParam0->f_5);
						__LIB_2__::func_289();
						return 1;
					}
				}
			}
		}
	}
	if (Global_4718592 == 0 && Global_4718592.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !__LIB_11__::func_730())
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
		__LIB_17__::func_944();
	}
	__LIB_16__::func_657(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_233(int iParam0)//Position - 0x20B6D2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	var* uVar6;
	var* uVar7;
	var* uVar8;
	var* uVar9;
	var* uVar10;
	var* uVar11;
	var* uVar12;
	int iVar13;
	int iVar14;
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
	var* uVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	var* uVar29;
	var* uVar30;
	int iVar31;
	var* uVar32;
	var* uVar33;
	var* uVar34;
	var* uVar35;
	var* uVar36;
	var* uVar37;
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
	int iVar48;
	int iVar49;
	int iVar50;
	var* uVar51;
	int iVar52;
	var* uVar53;
	var* uVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58[4];
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	var* uVar82[3];
	int iVar83;
	int iVar84;
	var uVar85[20];
	int iVar86;
	int iVar87;
	var* uVar88[4];
	var* uVar89;
	int iVar90;
	int iVar91;
	struct<2> Var92;
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "prop");
	Global_4980736.f_36355 = DATAFILE::DATADICT_GET_INT(iVar5, "no");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "loc");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vRot");
	uVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "head");
	uVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "model");
	uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asst");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asso");
	uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asss");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pasc");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asst2");
	uVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asso2");
	uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asss2");
	uVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pasc2");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asst3");
	uVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asso3");
	uVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asss3");
	uVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pasc3");
	uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asst4");
	uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asso4");
	uVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "asss4");
	uVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pasc4");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bpbid");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bpbip");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bpbpt");
	uVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "fcuat");
	uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpclcr");
	iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpclc");
	uVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "aldel");
	uVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "alsnd");
	uVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "alteam");
	uVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "flvfx");
	uVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "flcl");
	uVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpcl");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prplod");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpatn");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpasn");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpclr");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prptsp");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prptds");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpsba");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "sndid");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "sndtri");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "sndlmt");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpsnpp");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpct");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpcr");
	uVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpbs2");
	iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prcra");
	uVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpbs");
	uVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prers");
	iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ptfxtr");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ptfxst");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prrorc");
	iVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "updatez");
	iVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "updtime");
	iVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "upddel");
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pLODDist");
	iVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "fwTPos");
	iVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "fwTSize");
	iVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "fwTeam");
	iVar66 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "TrTAct");
	iVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "TrPPD");
	iVar68 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpdypil");
	iVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "TTPH");
	iVar70 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "cusprpMn");
	iVar71 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prppi");
	if (__LIB_1__::func_823())
	{
		uVar82[0] = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpsbt");
	}
	iVar83 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpsgg");
	iVar84 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "prpssg");
	iVar86 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&sVar4, "prpsdp", 8);
		StringIntConCat(&sVar4, iVar2, 8);
		uVar88[iVar2] = DATAFILE::DATADICT_GET_ARRAY(iVar5, &sVar4);
		iVar2++;
	}
	uVar89 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "pdip");
	if (Global_4980736.f_36355 > 200)
	{
		Global_4980736.f_36355 = 200;
	}
	if (iVar70 != 0)
	{
		iVar2 = 0;
		while (iVar2 <= (DATAFILE::DATAARRAY_GET_COUNT(iVar70) - 1))
		{
			if (DATAFILE::DATAARRAY_GET_TYPE(iVar70, iVar2) == 2)
			{
				Global_4718592.f_169889[iVar2] = DATAFILE::DATAARRAY_GET_INT(iVar70, iVar2);
				if (STREAMING::IS_MODEL_VALID(Global_4718592.f_169889[iVar2]))
				{
					Global_4718592.f_169915++;
				}
				else
				{
					Global_4718592.f_169889[iVar2] = 0;
				}
			}
			else
			{
				Global_4718592.f_169889[iVar2] = 0;
			}
			iVar2++;
		}
	}
	iVar90 = 0;
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_36355 - 1))
	{
		Global_4980736.f_36356[bVar0 /*134*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar6, bVar0) };
		Global_4980736.f_36356[bVar0 /*134*/].f_3 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar7, bVar0) };
		Global_4980736.f_36356[bVar0 /*134*/].f_6 = DATAFILE::DATAARRAY_GET_FLOAT(uVar8, bVar0);
		iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar9, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_7 = __LIB_18__::func_611(iVar1);
		if (Global_4980736.f_36356[bVar0 /*134*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
		{
			iVar90++;
			if (iVar90 > 15)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_7 = joaat("stt_prop_stunt_tube_xxs");
			}
		}
		if (!STREAMING::IS_MODEL_VALID(Global_4980736.f_36356[bVar0 /*134*/].f_7) && !__LIB_17__::func_994(Global_4980736.f_36356[bVar0 /*134*/].f_7))
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_7 = joaat("prop_const_fence02b");
		}
		if (Global_4980736.f_36356[bVar0 /*134*/].f_7 == joaat("gr_prop_gr_bench_03b"))
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_7 = joaat("gr_prop_gr_bench_03a");
		}
		if ((((!__LIB_0__::func_261() && Global_4718592.f_117095 == 0) && STREAMING::IS_MODEL_VALID(Global_4980736.f_36356[bVar0 /*134*/].f_7)) && !Global_262145.f_19320 /* Tunable: -573066468 */) && !__LIB_0__::func_274())
		{
			if (__LIB_17__::func_993(Global_4980736.f_36356[bVar0 /*134*/].f_7))
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_7 = joaat("prop_const_fence02b");
			}
		}
		if (!__LIB_17__::func_992() && __LIB_17__::func_991(Global_4980736.f_36356[bVar0 /*134*/].f_7))
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_7 = joaat("prop_const_fence02b");
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_9 = DATAFILE::DATAARRAY_GET_INT(uVar10, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_8 = DATAFILE::DATAARRAY_GET_INT(uVar11, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_10 = DATAFILE::DATAARRAY_GET_INT(uVar12, bVar0);
		__LIB_18__::func_404("prpscr0_", &(Global_4980736.f_36356[bVar0 /*134*/].f_34), &iVar5, &iVar77, bVar0, -1, -2340845);
		__LIB_18__::func_404("prpscr1_", &(Global_4980736.f_36356[bVar0 /*134*/].f_35), &iVar5, &iVar78, bVar0, -1, -2340845);
		__LIB_18__::func_404("prpscr2_", &(Global_4980736.f_36356[bVar0 /*134*/].f_36), &iVar5, &iVar79, bVar0, -1, -2340845);
		__LIB_18__::func_404("prpscr3_", &(Global_4980736.f_36356[bVar0 /*134*/].f_37), &iVar5, &iVar80, bVar0, -1, -2340845);
		if (Global_4980736.f_36356[bVar0 /*134*/].f_10 == -1)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_10 = 0;
		}
		if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, bVar0) == 1)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_60 = DATAFILE::DATAARRAY_GET_BOOL(iVar26, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_60 = 0;
		}
		if (iVar27 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar27, bVar0) == 1)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_61 = DATAFILE::DATAARRAY_GET_BOOL(iVar27, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_61 = 0;
		}
		if (iVar28 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar28, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_62 = DATAFILE::DATAARRAY_GET_INT(iVar28, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_62 = 0;
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_63 = DATAFILE::DATAARRAY_GET_INT(uVar29, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_78 = DATAFILE::DATAARRAY_GET_INT(uVar30, bVar0);
		if (iVar31 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar31, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_79 = DATAFILE::DATAARRAY_GET_INT(iVar31, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_79 = -1;
		}
		if (iVar14 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar14, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar14, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_46 = DATAFILE::DATAARRAY_GET_INT(uVar15, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_49 = DATAFILE::DATAARRAY_GET_INT(uVar16, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_44 = DATAFILE::DATAARRAY_GET_INT(uVar18, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_47 = DATAFILE::DATAARRAY_GET_INT(uVar19, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_50 = DATAFILE::DATAARRAY_GET_INT(uVar20, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_45 = DATAFILE::DATAARRAY_GET_INT(uVar22, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_48 = DATAFILE::DATAARRAY_GET_INT(uVar23, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_51 = DATAFILE::DATAARRAY_GET_INT(uVar24, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_46 = -1;
			Global_4980736.f_36356[bVar0 /*134*/].f_43 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_49 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_47 = -1;
			Global_4980736.f_36356[bVar0 /*134*/].f_44 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_50 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_48 = -1;
			Global_4980736.f_36356[bVar0 /*134*/].f_45 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_51 = 0;
		}
		if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_11 = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_52 = DATAFILE::DATAARRAY_GET_INT(uVar17, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_53 = DATAFILE::DATAARRAY_GET_INT(uVar21, bVar0);
			Global_4980736.f_36356[bVar0 /*134*/].f_54 = DATAFILE::DATAARRAY_GET_INT(uVar25, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_11 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_52 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_53 = 0;
			Global_4980736.f_36356[bVar0 /*134*/].f_54 = 0;
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_12 = DATAFILE::DATAARRAY_GET_INT(uVar32, bVar0);
		if (Global_4980736.f_36356[bVar0 /*134*/].f_7 != joaat("ind_prop_firework_01"))
		{
			if (Global_4980736.f_36356[bVar0 /*134*/].f_12 > 0 && Global_4980736.f_36356[bVar0 /*134*/].f_12 < 1000)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_12 = __LIB_17__::func_990(Global_4980736.f_36356[bVar0 /*134*/].f_12);
			}
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_13 = DATAFILE::DATAARRAY_GET_INT(uVar33, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_14 = DATAFILE::DATAARRAY_GET_INT(uVar34, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_15 = DATAFILE::DATAARRAY_GET_INT(uVar35, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_16 = DATAFILE::DATAARRAY_GET_INT(uVar36, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_17 = DATAFILE::DATAARRAY_GET_INT(uVar37, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_38 = DATAFILE::DATAARRAY_GET_FLOAT(iVar42, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_39 = DATAFILE::DATAARRAY_GET_FLOAT(iVar43, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_64 = DATAFILE::DATAARRAY_GET_INT(iVar45, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_65 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_67 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
		if (iVar38 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar38, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar38, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_24 = -1;
		}
		if (iVar39 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar39, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar39, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_25 = 0;
		}
		if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_26 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_26 = 0;
		}
		if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_27 = 1;
		}
		if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_38 = DATAFILE::DATAARRAY_GET_FLOAT(iVar42, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_38 = 0f;
		}
		if (iVar43 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar43, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_39 = DATAFILE::DATAARRAY_GET_FLOAT(iVar43, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_39 = 0.4f;
		}
		if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) > 5)
		{
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 15)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 1;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 25)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 2;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 35)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 3;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 45)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 4;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 55)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 5;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 16)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 3;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 30)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 2;
			}
			if (DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0) == 44)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_40 = 1;
			}
		}
		else if (iVar44 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar44, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_40 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_40 = 2;
		}
		if (iVar45 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar45, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_64 = DATAFILE::DATAARRAY_GET_INT(iVar45, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_64 = 0;
		}
		if (iVar46 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar46, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_65 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_65 = 0;
		}
		if (iVar47 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar47, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_67 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_67 = 0;
		}
		if (iVar48 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar48, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar48, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_28 = 0;
		}
		if (iVar55 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar55, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_41 = DATAFILE::DATAARRAY_GET_FLOAT(iVar55, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_41 = 0f;
		}
		if (iVar50 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar50, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_18 = -1;
		}
		if (iVar49 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar49, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_19 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_19 = -1;
		}
		if (iVar52 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar52, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_20 = DATAFILE::DATAARRAY_GET_INT(iVar52, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_20 = -1;
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_21 = DATAFILE::DATAARRAY_GET_INT(uVar53, bVar0);
		Global_4980736.f_36356[bVar0 /*134*/].f_22 = DATAFILE::DATAARRAY_GET_INT(uVar51, bVar0);
		if (iVar56 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar56, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar56, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_42 = 0;
		}
		if (iVar57 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar57, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_71 = DATAFILE::DATAARRAY_GET_INT(iVar57, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_71 = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&sVar4, "pror_", 8);
			StringIntConCat(&sVar4, iVar3, 8);
			__LIB_18__::func_404(&sVar4, &(Global_4980736.f_36356[bVar0 /*134*/].f_72[iVar3]), &iVar5, &(uVar58[iVar3]), bVar0, 0, -2340845);
			iVar3++;
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_23 = DATAFILE::DATAARRAY_GET_INT(uVar54, bVar0);
		if (iVar59 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar59, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_56 = DATAFILE::DATAARRAY_GET_FLOAT(iVar59, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_56 = -1f;
		}
		if (iVar60 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar60, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_57 = DATAFILE::DATAARRAY_GET_INT(iVar60, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_57 = 0;
		}
		if (iVar61 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar61, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_58 = DATAFILE::DATAARRAY_GET_INT(iVar61, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_58 = 0;
		}
		if (iVar62 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar62, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_59 = DATAFILE::DATAARRAY_GET_INT(iVar62, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_59 = 0;
		}
		if (iVar63 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar63, bVar0) == 5)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_80 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar63, bVar0) };
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_80 = { 0f, 0f, 0f };
		}
		if (iVar64 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar64, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_83 = DATAFILE::DATAARRAY_GET_FLOAT(iVar64, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_83 = 0f;
		}
		if (iVar65 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar65, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_84 = DATAFILE::DATAARRAY_GET_INT(iVar65, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_84 = 0;
		}
		if (iVar66 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar66, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_85 = DATAFILE::DATAARRAY_GET_INT(iVar66, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_85 = -1;
		}
		if (iVar67 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar67, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_86 = DATAFILE::DATAARRAY_GET_FLOAT(iVar67, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_86 = 0f;
		}
		if (iVar69 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar69, bVar0) == 3)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_87 = DATAFILE::DATAARRAY_GET_FLOAT(iVar69, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_87 = 0f;
		}
		if (iVar68 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar68, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_88 = DATAFILE::DATAARRAY_GET_INT(iVar68, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_88 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar88[iVar2] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar88[iVar2], bVar0) == 2)
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_29[iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar88[iVar2], bVar0);
			}
			else
			{
				Global_4980736.f_36356[bVar0 /*134*/].f_29[iVar2] = -1;
			}
			iVar2++;
		}
		Global_4980736.f_36356[bVar0 /*134*/].f_70 = DATAFILE::DATAARRAY_GET_INT(uVar89, bVar0);
		if (iVar71 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar71, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_98 = DATAFILE::DATAARRAY_GET_INT(iVar71, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_98 = -1;
		}
		__LIB_18__::func_610(&iVar5, &iVar81, &(Global_4980736.f_36356[bVar0 /*134*/].f_103), bVar0);
		__LIB_18__::func_403("prpSpInt", &(Global_4980736.f_36356[bVar0 /*134*/].f_89), &iVar5, &iVar72, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_404("prpSpRmK", &(Global_4980736.f_36356[bVar0 /*134*/].f_92), &iVar5, &iVar73, bVar0, -1, -2340845);
		__LIB_18__::func_403("prpSlVc", &(Global_4980736.f_36356[bVar0 /*134*/].f_93), &iVar5, &iVar74, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_404("prpSlRl", &(Global_4980736.f_36356[bVar0 /*134*/].f_96), &iVar5, &iVar75, bVar0, -1, -2340845);
		__LIB_18__::func_404("prpSlTm", &(Global_4980736.f_36356[bVar0 /*134*/].f_97), &iVar5, &iVar76, bVar0, -1, -2340845);
		if (!__LIB_1__::func_823())
		{
			iVar91 = 0;
			while (iVar91 <= 2)
			{
				iVar1 = 0;
				StringCopy(&Var92, "prpsbt", 16);
				StringConCat(&Var92, "f", 16);
				StringIntConCat(&Var92, iVar91, 16);
				__LIB_18__::func_404(&Var92, &iVar1, &iVar5, &(uVar82[iVar91]), bVar0, 0, -2340845);
				Global_4980736.f_36356[bVar0 /*134*/].f_99[iVar91] = iVar1;
				iVar91++;
			}
		}
		else if (uVar82[0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar82[0], bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_99[0] = DATAFILE::DATAARRAY_GET_INT(uVar82[0], bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_99[0] = 0;
		}
		if (iVar83 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar83, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_108 = DATAFILE::DATAARRAY_GET_INT(iVar83, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_108 = 0;
		}
		if (iVar84 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar84, bVar0) == 2)
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_109 = DATAFILE::DATAARRAY_GET_INT(iVar84, bVar0);
		}
		else
		{
			Global_4980736.f_36356[bVar0 /*134*/].f_109 = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 19)
		{
			StringCopy(&sVar4, "1rwb", 8);
			StringIntConCat(&sVar4, iVar3, 8);
			__LIB_18__::func_404(&sVar4, &(Global_4980736.f_36356[bVar0 /*134*/].f_110[iVar3]), &iVar5, &(uVar85[iVar3]), bVar0, 0, 0);
			iVar3++;
		}
		__LIB_18__::func_401("alvprop", &(Global_4980736.f_36356[bVar0 /*134*/].f_132), 1, &iVar5, &iVar86, bVar0, 0, -2340845);
		__LIB_18__::func_404("agIDpp", &(Global_4980736.f_36356[bVar0 /*134*/].f_131), &iVar5, &iVar87, bVar0, 0, 0);
		bVar0++;
	}
}

void func_234(int iParam0)//Position - 0x216C15
{
	bool bVar0;
	int iVar1;
	char cVar2[16];
	int iVar3;
	var* uVar4;
	var* uVar5;
	var* uVar6;
	var* uVar7[4];
	var* uVar8[4];
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
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	var uVar57[20];
	var uVar58[3];
	int iVar59;
	var* uVar60[2];
	int iVar61;
	char cVar62[16];
	char* sVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	struct<2> Var67;
	iVar3 = DATAFILE::DATADICT_GET_DICT(iParam0, "zone");
	Global_4980736.f_195933 = DATAFILE::DATADICT_GET_INT(iVar3, "no");
	uVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "vto");
	uVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "vld");
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zntp");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znbs");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znwd");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znwvd");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znatp");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znwid");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znhei");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zndel");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zngTe");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zngPo");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "ztm_t");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "ztm_tn");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znscra1");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znscra2");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znscra3");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zneilnk");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znetlnk");
	iVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "znebc");
	iVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "zneba");
	iVar55 = 1;
	bVar0 = false;
	while (bVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, bVar0, 16);
		uVar7[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar3, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, bVar0, 16);
		uVar8[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar3, &cVar2);
		bVar0++;
	}
	if (Global_4980736.f_195933 > 32)
	{
		Global_4980736.f_195933 = 32;
	}
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_195933 - 1))
	{
		Global_4980736.f_195934[bVar0 /*111*/][0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar4, bVar0) };
		Global_4980736.f_195934[bVar0 /*111*/][1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar5, bVar0) };
		Global_4980736.f_195934[bVar0 /*111*/].f_10 = DATAFILE::DATAARRAY_GET_INT(uVar6, bVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar7[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar7[iVar1], bVar0) == 2)
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_11[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar7[iVar1], bVar0);
			}
			else
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_11[iVar1] = -1;
			}
			if (uVar8[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar8[iVar1], bVar0) == 2)
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_16[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar8[iVar1], bVar0);
			}
			else
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_16[iVar1] = 99999;
			}
			iVar1++;
		}
		if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_21 = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_21 = 0;
		}
		__LIB_18__::func_404("znbstwo", &(Global_4980736.f_195934[bVar0 /*111*/].f_22), &iVar3, &iVar10, bVar0, 0, -2340845);
		if (iVar11 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar11, bVar0) == 3)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_24 = DATAFILE::DATAARRAY_GET_FLOAT(iVar11, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_24 = 0f;
		}
		if (iVar12 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar12, bVar0) == 3)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_25 = DATAFILE::DATAARRAY_GET_FLOAT(iVar12, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_25 = 0f;
		}
		__LIB_18__::func_404("znVl3", &(Global_4980736.f_195934[bVar0 /*111*/].f_26), &iVar3, &iVar13, bVar0, 0, -2340845);
		if (iVar14 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar14, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar14, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_9 = 0;
		}
		if (iVar15 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 3)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_7 = DATAFILE::DATAARRAY_GET_FLOAT(iVar15, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_7 = 0f;
		}
		if (iVar16 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar16, bVar0) == 3)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar16, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_8 = 0f;
		}
		if (iVar17 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar17, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar17, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_23 = 0;
		}
		if (iVar18 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar18, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_27 = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_27 = 0;
		}
		if (iVar19 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar19, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_28 = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_28 = 2;
		}
		if (iVar20 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar20, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_32 = 0;
		}
		if (iVar21 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar21, bVar0) == 4)
		{
			StringCopy(&(Global_4980736.f_195934[bVar0 /*111*/].f_33), DATAFILE::DATAARRAY_GET_STRING(iVar21, bVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4980736.f_195934[bVar0 /*111*/].f_33), "", 16);
		}
		if (iVar22 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar22, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_37 = DATAFILE::DATAARRAY_GET_INT(iVar22, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_37 = -1;
		}
		if (iVar23 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar23, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_38 = DATAFILE::DATAARRAY_GET_INT(iVar23, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_38 = 0;
		}
		if (iVar24 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar24, bVar0) == 3)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_39 = DATAFILE::DATAARRAY_GET_FLOAT(iVar24, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_39 = 0f;
		}
		if (iVar25 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar25, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar25, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_46 = 0;
		}
		if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_47 = DATAFILE::DATAARRAY_GET_INT(iVar26, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_47 = -1;
		}
		__LIB_18__::func_404("znAtchCr", &(Global_4980736.f_195934[bVar0 /*111*/].f_48), &iVar3, &iVar27, bVar0, 0, -2340845);
		__LIB_18__::func_404("znAltELT", &(Global_4980736.f_195934[bVar0 /*111*/].f_49), &iVar3, &iVar28, bVar0, 0, -2340845);
		__LIB_18__::func_404("znAltELI", &(Global_4980736.f_195934[bVar0 /*111*/].f_50), &iVar3, &iVar29, bVar0, -1, -2340845);
		if (iVar30 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar30, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_53 = DATAFILE::DATAARRAY_GET_INT(iVar30, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_53 = 1;
		}
		if (iVar31 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar31, bVar0) == 2)
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_54 = DATAFILE::DATAARRAY_GET_INT(iVar31, bVar0);
		}
		else
		{
			Global_4980736.f_195934[bVar0 /*111*/].f_54 = 120;
		}
		__LIB_18__::func_402("znebr", &(Global_4980736.f_195934[bVar0 /*111*/].f_55), &iVar3, &iVar32, bVar0, 0f, -904994889);
		__LIB_18__::func_404("znSpFT", &(Global_4980736.f_195934[bVar0 /*111*/].f_40), &iVar3, &iVar33, bVar0, 0, -2340845);
		__LIB_18__::func_404("znSpFSET", &(Global_4980736.f_195934[bVar0 /*111*/].f_41), &iVar3, &iVar34, bVar0, 0, -2340845);
		__LIB_18__::func_404("znSpFSEI", &(Global_4980736.f_195934[bVar0 /*111*/].f_42), &iVar3, &iVar35, bVar0, -1, -2340845);
		__LIB_18__::func_403("znSpFSEP", &(Global_4980736.f_195934[bVar0 /*111*/].f_43), &iVar3, &iVar36, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		iVar61 = 0;
		while (iVar61 <= 1)
		{
			StringCopy(&cVar62, "ovrps", 16);
			StringIntConCat(&cVar62, iVar61, 16);
			uVar60[iVar61] = DATAFILE::DATADICT_GET_ARRAY(iVar3, &cVar62);
			if (uVar60[iVar61] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar60[iVar61], bVar0) == 5)
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_57[iVar61 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar60[iVar61], bVar0) };
			}
			else
			{
				Global_4980736.f_195934[bVar0 /*111*/].f_57[iVar61 /*3*/] = { 0f, 0f, 0f };
			}
			iVar61++;
		}
		__LIB_18__::func_402("pznL", &(Global_4980736.f_195934[bVar0 /*111*/].f_64.f_3), &iVar3, &iVar37, bVar0, 20f, -904994889);
		__LIB_18__::func_402("pznH", &(Global_4980736.f_195934[bVar0 /*111*/].f_64.f_4), &iVar3, &iVar38, bVar0, 90f, -904994889);
		__LIB_18__::func_403("pznC", &(Global_4980736.f_195934[bVar0 /*111*/].f_64), &iVar3, &iVar39, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_404("znSLS", &(Global_4980736.f_195934[bVar0 /*111*/].f_56), &iVar3, &iVar42, bVar0, -1, -1);
		__LIB_18__::func_404("znAoPR", &(Global_4980736.f_195934[bVar0 /*111*/].f_29), &iVar3, &iVar40, bVar0, -1, -2340845);
		__LIB_18__::func_404("znDoPR", &(Global_4980736.f_195934[bVar0 /*111*/].f_30), &iVar3, &iVar41, bVar0, -1, -2340845);
		__LIB_18__::func_404("znCAZ", &(Global_4980736.f_195934[bVar0 /*111*/].f_31), &iVar3, &iVar43, bVar0, -2, -1);
		__LIB_18__::func_401("alvzon", &(Global_4980736.f_195934[bVar0 /*111*/].f_69), 1, &iVar3, &iVar55, bVar0, 0, -2340845);
		__LIB_18__::func_404("znST", &(Global_4980736.f_195934[bVar0 /*111*/].f_73), &iVar3, &iVar47, bVar0, -1, -2340845);
		__LIB_18__::func_404("znSAttSl", &(Global_4980736.f_195934[bVar0 /*111*/].f_74), &iVar3, &iVar44, bVar0, -1, -2340845);
		__LIB_18__::func_402("znSAttSp", &(Global_4980736.f_195934[bVar0 /*111*/].f_75), &iVar3, &iVar45, bVar0, 2f, -904994889);
		__LIB_18__::func_403("znAttchOffs", &(Global_4980736.f_195934[bVar0 /*111*/].f_76), &iVar3, &iVar46, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_404("znChn", &(Global_4980736.f_195934[bVar0 /*111*/].f_71), &iVar3, &iVar48, bVar0, 100, -2340845);
		__LIB_18__::func_404("znRT", &(Global_4980736.f_195934[bVar0 /*111*/].f_72), &iVar3, &iVar49, bVar0, 0, -2340845);
		__LIB_18__::func_404("spnzo", &(Global_4980736.f_195934[bVar0 /*111*/].f_79), &iVar3, &iVar56, bVar0, 0, -2340845);
		iVar64 = 0;
		while (iVar64 <= 19)
		{
			StringCopy(&sVar63, "1rwb", 8);
			StringIntConCat(&sVar63, iVar64, 8);
			__LIB_18__::func_404(&sVar63, &(Global_4980736.f_195934[bVar0 /*111*/].f_80[iVar64]), &iVar3, &(uVar57[iVar64]), bVar0, 0, -2340845);
			iVar64++;
		}
		iVar65 = 0;
		while (iVar65 <= 2)
		{
			iVar66 = 0;
			StringCopy(&Var67, "Zonsbt", 16);
			StringConCat(&Var67, "f", 16);
			StringIntConCat(&Var67, iVar65, 16);
			__LIB_18__::func_404(&Var67, &iVar66, &iVar3, &(uVar58[iVar65]), bVar0, 0, -2340845);
			Global_4980736.f_195934[bVar0 /*111*/].f_101[iVar65] = iVar66;
			iVar65++;
		}
		__LIB_18__::func_404("agIDzo", &(Global_4980736.f_195934[bVar0 /*111*/].f_105), &iVar3, &iVar59, bVar0, 0, 0);
		if (BitTest(Global_4980736.f_195934[bVar0 /*111*/].f_21, 20) && Global_4980736.f_195934[bVar0 /*111*/].f_9 == 0)
		{
			__LIB_18__::func_617(&(Global_4980736.f_195934[bVar0 /*111*/]));
		}
		__LIB_18__::func_402("znSAror", &(Global_4980736.f_195934[bVar0 /*111*/].f_106), &iVar3, &iVar50, bVar0, 0f, 0f);
		__LIB_18__::func_404("znBFse", &(Global_4980736.f_195934[bVar0 /*111*/].f_107), &iVar3, &iVar51, bVar0, 0, 0);
		__LIB_18__::func_404("znBFsd", &(Global_4980736.f_195934[bVar0 /*111*/].f_108), &iVar3, &iVar52, bVar0, 0, 0);
		__LIB_18__::func_404("znBFft", &(Global_4980736.f_195934[bVar0 /*111*/].f_109), &iVar3, &iVar53, bVar0, 0, 0);
		__LIB_18__::func_404("znrppp", &(Global_4980736.f_195934[bVar0 /*111*/].f_110), &iVar3, &iVar54, bVar0, 0, 0);
		bVar0++;
	}
}

void func_235(int iParam0, int iParam1)//Position - 0x21B145
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
	iVar0 = (Global_4718592.f_107224 - 1);
	iVar1 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "rsp");
	iVar2 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "cdsblcu");
	iVar3 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "cpdss");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "rndchk");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "rndchks");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "cpwtr");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "cpwtrs");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, "cpair");
	iVar9 = 0;
	while (iVar9 <= iVar0)
	{
		if (iVar9 < __LIB_16__::func_699())
		{
			if (Global_4718592.f_107227 == 8)
			{
				iVar10 = __LIB_18__::func_537(*iParam1, iVar10);
			}
			else
			{
				iVar10 = iVar9;
			}
			if (!BitTest(Global_4718592.f_95507[iVar9 /*58*/].f_28, 0))
			{
				if (iVar1 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar1, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 5, DATAFILE::DATAARRAY_GET_BOOL(iVar1, iVar10));
				}
				if (iVar2 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar2, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 3, DATAFILE::DATAARRAY_GET_BOOL(iVar2, iVar10));
				}
				if (iVar3 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar3, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 6, DATAFILE::DATAARRAY_GET_BOOL(iVar3, iVar10));
				}
				if (iVar4 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar4, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 1, DATAFILE::DATAARRAY_GET_BOOL(iVar4, iVar10));
				}
				if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 2, DATAFILE::DATAARRAY_GET_BOOL(iVar5, iVar10));
				}
				if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 7, DATAFILE::DATAARRAY_GET_BOOL(iVar6, iVar10));
				}
				if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 8, DATAFILE::DATAARRAY_GET_BOOL(iVar7, iVar10));
				}
				if (iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, iVar10) == 1)
				{
					__LIB_2__::func_522(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 9, DATAFILE::DATAARRAY_GET_BOOL(iVar8, iVar10));
				}
				MISC::SET_BIT(&(Global_4718592.f_95507[iVar9 /*58*/].f_28), 0);
			}
		}
		iVar9++;
	}
}

bool func_236(int iParam0)//Position - 0x237559
{
	bool bVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(bVar0);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5)) && iVar5 != PLAYER::PLAYER_ID())
		{
			iVar2 = iVar5;
			if ((!__LIB_18__::func_543(iVar5) && Global_1853348[iVar2 /*834*/].f_205 != 8) && !BitTest(Global_1853348[iVar2 /*834*/].f_36.f_18, 14))
			{
				if (Global_1853348[iVar2 /*834*/].f_96.f_28 != -1)
				{
					MISC::SET_BIT(&uVar1, Global_1853348[iVar2 /*834*/].f_96.f_28);
					if (Global_1853348[iVar2 /*834*/].f_96.f_28 >= iParam0 && iVar2 < PLAYER::PLAYER_ID())
					{
						bVar4 = true;
					}
				}
			}
		}
		bVar0++;
	}
	bVar0 = false;
	while (bVar0 < iParam0)
	{
		if (!BitTest(uVar1, bVar0))
		{
			if (bVar4)
			{
				bVar4 = false;
			}
			else
			{
				bVar3 = bVar0;
			}
		}
		bVar0++;
	}
	return bVar3;
}

bool func_237(int iParam0)//Position - 0x2378FA
{
	return __LIB_18__::func_643(iParam0, 2);
}

bool func_238(int iParam0)//Position - 0x237909
{
	return __LIB_18__::func_643(iParam0, 1);
}

void func_239(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7)//Position - 0x23BCBC
{
	if (__LIB_0__::func_157(0))
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam3);
	}
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(fParam1, fParam2);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam4);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(fParam5);
	if (fParam6 == 0f)
	{
	}
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(bParam7);
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2420AF
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 1:
				case 2:
					__LIB_18__::func_207(1, 0, iParam3);
					break;
				case 3:
				case 4:
				case 5:
				case 6:
					if (bParam4)
					{
						__LIB_18__::func_206(&Global_1009429, 1, 0, iParam3);
					}
					else
					{
						__LIB_18__::func_206(&Global_998606, 1, 0, iParam3);
					}
					break;
				case 0:
					switch (iParam1)
					{
						case 0:
						case 1:
							if (bParam4)
							{
								__LIB_18__::func_205(&Global_1025782, 1, 1, 0, iParam3, bParam4);
							}
							else
							{
								__LIB_18__::func_205(&Global_1020252, 1, 1, 0, iParam3, 0);
							}
							break;
						case 8:
							if (bParam4)
							{
								__LIB_18__::func_205(&Global_1031312, 1, 1, 0, iParam3, bParam4);
								iVar0 = 0;
								while (iVar0 < 62)
								{
									Global_1031312.f_5462[iVar0] = 0;
									iVar0++;
								}
							}
							else
							{
								__LIB_18__::func_205(&Global_1020252, 0, 1, 0, iParam3 + 31, 0);
							}
							break;
						case 7:
						case 2:
							__LIB_18__::func_204(&Global_1036842, 1, 0, iParam3);
							break;
					}
					break;
			}
			break;
	}
}

void func_241(var uParam0, int iParam1, int iParam2)//Position - 0x2434ED
{
	if (iParam1 == 0 || iParam1 == 1)
	{
		if (NETWORK::UGC_GET_CONTENT_IS_VERIFIED(uParam0->f_7))
		{
			if (Global_1020252.f_5[iParam2 /*88*/].f_65 == 2)
			{
				__LIB_18__::func_185(Global_1025782.f_5[iParam2 /*88*/].f_22);
			}
			else if (Global_1020252.f_5[iParam2 /*88*/].f_65 == 1)
			{
				__LIB_18__::func_184(Global_1025782.f_5[iParam2 /*88*/].f_22);
			}
			else if (Global_1020252.f_5[iParam2 /*88*/].f_65 == 4)
			{
				__LIB_18__::func_441(Global_1025782.f_5[iParam2 /*88*/].f_22);
			}
		}
	}
}

void func_242()//Position - 0x24C047
{
	__LIB_18__::func_590();
	__LIB_18__::func_589();
	MISC::CLEAR_BIT(&Global_1574589, 2);
	MISC::CLEAR_BIT(&Global_1574589, 4);
	MISC::CLEAR_BIT(&Global_1574589, 5);
	MISC::CLEAR_BIT(&Global_1574589, 6);
	Global_1574606 = 0;
}

int func_243(int iParam0, int iParam1)//Position - 0x9CFE1
{
	var uVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = __LIB_16__::func_545(iParam0, iParam1);
	iVar1 = __LIB_0__::func_160(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return BitTest(uVar0, iVar1);
}

void func_244(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xEC012
{
	if (!bParam1)
	{
		if (__LIB_0__::func_3() != 2)
		{
			if (!__LIB_18__::func_953(0))
			{
				if (bParam3)
				{
					if (uParam0->f_14 == 9 || uParam0->f_14 == 10)
					{
						CAM::RENDER_SCRIPT_CAMS(false, bParam2, 1500, true, true, 0);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(false, bParam2, 2000, true, true, 0);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_3))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_3, false);
			CAM::DESTROY_CAM(uParam0->f_3, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			CAM::DESTROY_CAM(uParam0->f_4, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_8))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_8, false);
			CAM::DESTROY_CAM(uParam0->f_8, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_15))
		{
			CAM::DESTROY_CAM(uParam0->f_15, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_16))
		{
			CAM::DESTROY_CAM(uParam0->f_16, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_9));
		}
		__LIB_0__::clearF_1Prop(&(uParam0->f_10));
	}
	__LIB_0__::func_131();
	Global_1836369 = 0;
	uParam0->f_34 = 0;
	__LIB_1__::func_289(uParam0, 0);
	uParam0->f_1 = 0;
}

char* func_245(int iParam0)//Position - 0x160745
{
	switch (iParam0)
	{
		case -1:
			return "HO_NONE" /* GXT: None */;
			break;
		case 0:
			return "HO_NONE" /* GXT: None */;
			break;
		case 5:
			return "HO_STREET_0" /* GXT: The Starter */;
			break;
		case 6:
			return "HO_STREET_1" /* GXT: The Prospect */;
			break;
		case 7:
			return "HO_STREET_2" /* GXT: The Backup */;
			break;
		case 8:
			return "HO_STREET_3" /* GXT: The Jump-in */;
			break;
		case 66:
			return "HO_POLICE_0" /* GXT: The Officer */;
			break;
		case 1:
			return "HO_CASUAL_0" /* GXT: The Doe */;
			break;
		case 2:
			return "HO_CASUAL_1" /* GXT: The Hoodie */;
			break;
		case 3:
			return "HO_CASUAL_2" /* GXT: The Norm */;
			break;
		case 4:
			return "HO_CASUAL_3" /* GXT: The Carefree */;
			break;
		case 36:
			return "HO_DRIVER_0" /* GXT: The Bravado */;
			break;
		case 37:
			return "HO_DRIVER_1" /* GXT: The Lampadati */;
			break;
		case 38:
			return "HO_DRIVER_2" /* GXT: The Pegassi */;
			break;
		case 39:
			return "HO_DRIVER_3" /* GXT: The Imponte */;
			break;
		case 21:
			return "HO_CAS_STE_0" /* GXT: The Tail */;
			break;
		case 22:
			return "HO_CAS_STE_1" /* GXT: The Prowler */;
			break;
		case 23:
			return "HO_CAS_STE_2" /* GXT: The Lurker */;
			break;
		case 24:
			return "HO_CAS_STE_3" /* GXT: The Robber */;
			break;
		case 33:
			return "HO_CAS_PIL_0" /* GXT: The Cuban */;
			break;
		case 34:
			return "HO_CAS_PIL_1" /* GXT: The Duster */;
			break;
		case 35:
			return "HO_CAS_PIL_2" /* GXT: The Cargobob */;
			break;
		case 9:
			return "HO_STR_CBT_0" /* GXT: The Drive-by */;
			break;
		case 10:
			return "HO_STR_CBT_1" /* GXT: The Brawler */;
			break;
		case 11:
			return "HO_STR_CBT_2" /* GXT: The Gunslinger */;
			break;
		case 12:
			return "HO_STR_CBT_3" /* GXT: The Mercenary */;
			break;
		case 67:
			return "HO_PRI_0" /* GXT: The Prisoner */;
			break;
		case 68:
			return "HO_PRI_OFF_0" /* GXT: The Prison Officer */;
			break;
		case 25:
			return "HO_TAC_STE_1" /* GXT: The Raid */;
			break;
		case 26:
			return "HO_TAC_STE_2" /* GXT: The Operative */;
			break;
		case 27:
			return "HO_TAC_STE_3" /* GXT: The Pincer */;
			break;
		case 28:
			return "HO_TAC_STE_0" /* GXT: The Guerilla */;
			break;
		case 13:
			return "HO_LTE_CBT_0" /* GXT: The Skirmish */;
			break;
		case 14:
			return "HO_LTE_CBT_1" /* GXT: The Battle */;
			break;
		case 15:
			return "HO_LTE_CBT_2" /* GXT: The Conflict */;
			break;
		case 16:
			return "HO_LTE_CBT_3" /* GXT: The Fight */;
			break;
		case 17:
			return "HO_HVY_CBT_0" /* GXT: The Full Body */;
			break;
		case 18:
			return "HO_HVY_CBT_1" /* GXT: The Strength */;
			break;
		case 19:
			return "HO_HVY_CBT_2" /* GXT: The Weapon */;
			break;
		case 20:
			return "HO_HVY_CBT_3" /* GXT: The Command */;
			break;
		case 29:
			return "HO_STE_PIL_0" /* GXT: The Wing */;
			break;
		case 30:
			return "HO_STE_PIL_1" /* GXT: The Radar */;
			break;
		case 31:
			return "HO_STE_PIL_2" /* GXT: The Echo */;
			break;
		case 32:
			return "HO_STE_PIL_3" /* GXT: The Fighter */;
			break;
		case 64:
			return "HO_REF_COL_0" /* GXT: The Collector */;
			break;
		case 65:
			return "HO_REF_COL_1" /* GXT: The Trash */;
			break;
		case 60:
			return "HO_NGT_BKR_0" /* GXT: The Burnout */;
			break;
		case 61:
			return "HO_NGT_BKR_1" /* GXT: The Throttle */;
			break;
		case 62:
			return "HO_NGT_BKR_2" /* GXT: The Metal */;
			break;
		case 63:
			return "HO_NGT_BKR_3" /* GXT: The Club */;
			break;
		case 69:
			return "HO_TOURIST_0" /* GXT: The Sightseer */;
			break;
		case 70:
			return "HO_TOURIST_1" /* GXT: The Vacation */;
			break;
		case 71:
			return "HO_TOURIST_2" /* GXT: The Traveler */;
			break;
		case 72:
			return "HO_TOURIST_3" /* GXT: The Day Tripper */;
			break;
		case 40:
			return "HO_SMA_S_0" /* GXT: The Buyer */;
			break;
		case 41:
			return "HO_SMA_S_1" /* GXT: The Security */;
			break;
		case 42:
			return "HO_SMA_S_2" /* GXT: The Manager */;
			break;
		case 43:
			return "HO_SMA_S_3" /* GXT: The Consultant */;
			break;
		case 48:
			return "HO_SLO_S_0" /* GXT: The Bluffs */;
			break;
		case 49:
			return "HO_SLO_S_1" /* GXT: The Burro */;
			break;
		case 50:
			return "HO_SLO_S_2" /* GXT: The Alta */;
			break;
		case 51:
			return "HO_SLO_S_3" /* GXT: The Yankton */;
			break;
		case 44:
			return "HO_SHA_S_0" /* GXT: The Richman */;
			break;
		case 45:
			return "HO_SHA_S_1" /* GXT: The Portola */;
			break;
		case 46:
			return "HO_SHA_S_2" /* GXT: The Vespucci */;
			break;
		case 47:
			return "HO_SHA_S_3" /* GXT: The Rockford */;
			break;
		case 52:
			return "HO_MIN_S_0" /* GXT: The Slick */;
			break;
		case 53:
			return "HO_MIN_S_1" /* GXT: The Fella */;
			break;
		case 54:
			return "HO_MIN_S_2" /* GXT: The Rogue */;
			break;
		case 55:
			return "HO_MIN_S_3" /* GXT: The Classic */;
			break;
		case 56:
			return "HO_TUX_0" /* GXT: The Gala */;
			break;
		case 57:
			return "HO_TUX_1" /* GXT: The Benefit */;
			break;
		case 58:
			return "HO_TUX_2" /* GXT: The Dinner */;
			break;
		case 59:
			return "HO_TUX_3" /* GXT: The Ball */;
			break;
		case 73:
			return "HO_HAZ_0" /* GXT: The Scientist */;
			break;
		case 74:
			return "HO_HAZ_1" /* GXT: The Hazard */;
			break;
		case 75:
			return "HO_HAZ_2" /* GXT: The Fumigator */;
			break;
		case 76:
			return "HO_HAZ_3" /* GXT: The Quarantine */;
			break;
		case 77:
			return "HO_COV_0" /* GXT: The Bugstar */;
			break;
		case 78:
			return "HO_COV_1" /* GXT: The Franklin */;
			break;
		case 79:
			return "HO_COV_2" /* GXT: The Michael */;
			break;
		case 80:
			return "HO_COV_3" /* GXT: The Trevor */;
			break;
		case 81:
			return "HO_FLYS_0" /* GXT: The Flight Suit */;
			break;
		case 82:
			return "HO_FLYS_1" /* GXT: The Ace */;
			break;
		case 83:
			return "HO_FLYS_2" /* GXT: The Lazer */;
			break;
		case 84:
			return "HO_FLYS_3" /* GXT: The Hydra */;
			break;
		case 85:
			return "HO_OUT_RP1";
			break;
		case 86:
			return "HO_OUT_RP2";
			break;
		case 87:
			return "HO_OUT_MSKN";
			break;
		case 88:
			return "HO_OUT_MSKT";
			break;
		case 89:
			return "HO_OUT_MSKF";
			break;
		case 96:
			return "HO_OUT_FOX1";
			break;
		case 97:
			return "HO_OUT_FOX2";
			break;
		case 98:
			return "HO_OUT_HND1";
			break;
		case 99:
			return "HO_PB_POLICE";
			break;
		case 100:
			return "HO_PB_PRISONER";
			break;
		case 101:
			return "HO_MSK_BCV";
			break;
		case 102:
			return "HO_MSK_BRTH";
			break;
		case 103:
			return "HO_MSK_BCV2";
			break;
		case 104:
			return "HO_MSK_GMS";
			break;
		case 105:
			return "HO_MSK_PIG";
			break;
		case 106:
			return "HO_MSK_BSK";
			break;
		case 107:
			return "HO_MSK_POGO";
			break;
		case 108:
			return "HO_MSK_HCK";
			break;
		case 109:
			return "HO_MSK_APE";
			break;
		case 110:
			return "HO_MSK_CNVL";
			break;
		case 111:
			return "HO_MSK_GBL";
			break;
		case 112:
			return "HO_MSK_SNT";
			break;
		case 113:
			return "HO_MSK_MOS";
			break;
		case 114:
			return "HO_MSK_SNW";
			break;
		case 115:
			return "HO_MSK_MQE";
			break;
		case 116:
			return "HO_MSK_MQN";
			break;
		case 117:
			return "HO_MSK_BBY";
			break;
		case 118:
			return "HO_MSK_HCK2";
			break;
		case 119:
			return "HO_MSK_HCK3";
			break;
		case 120:
			return "HO_MSK_WRR";
			break;
		case 121:
			return "HO_MSK_CAT";
			break;
		case 122:
			return "HO_MSK_FOX";
			break;
		case 123:
			return "HO_MSK_OWL";
			break;
		case 124:
			return "HO_MSK_RCN";
			break;
		case 125:
			return "HO_MSK_BBR";
			break;
		case 126:
			return "HO_MSK_BSN";
			break;
		case 127:
			return "HO_MSK_BUL";
			break;
		case 128:
			return "HO_MSK_EGL";
			break;
		case 129:
			return "HO_MSK_VLT";
			break;
		case 130:
			return "HO_MSK_WLF";
			break;
		case 131:
			return "HO_OUT_SUIT";
			break;
		case 132:
			return "HO_OUT_REFC";
			break;
		case 487:
			return "HO_OUT_LOW0";
			break;
		case 488:
			return "HO_OUT_LOW1";
			break;
		case 489:
			return "HO_OUT_LOW2";
			break;
		case 490:
			return "HO_OUT_LOW3";
			break;
		case 491:
			return "HO_OUT_LOW4";
			break;
		case 492:
			return "HO_OUT_LOW5";
			break;
		case 493:
			return "HO_OUT_LOW6";
			break;
		case 494:
			return "HO_OUT_LOW7";
			break;
		case 495:
			if (__LIB_1__::func_394())
			{
				return "HO_OUT_VAG0F";
			}
			else
			{
				return "HO_OUT_VAG0";
			}
			break;
		case 496:
			if (__LIB_1__::func_394())
			{
				return "HO_OUT_VAG1F";
			}
			else
			{
				return "HO_OUT_VAG1";
			}
			break;
		case 497:
			if (__LIB_1__::func_394())
			{
				return "HO_OUT_VAG2F";
			}
			else
			{
				return "HO_OUT_VAG2";
			}
			break;
		case 498:
			if (__LIB_1__::func_394())
			{
				return "HO_OUT_VAG3F";
			}
			else
			{
				return "HO_OUT_VAG3";
			}
			break;
		case 499:
			return "HO_OUT_BAL0";
			break;
		case 500:
			return "HO_OUT_BAL1";
			break;
		case 501:
			return "HO_OUT_BAL2";
			break;
		case 502:
			return "HO_OUT_BAL3";
			break;
		case 503:
			return "HO_OUT_FUNL0";
			break;
		case 504:
			return "HO_OUT_FUNL1";
			break;
		case 505:
			return "HO_OUT_FUNL2";
			break;
		case 506:
			return "HO_OUT_FUNL3";
			break;
	}
	switch (iParam0)
	{
		case 407:
			return "VS_OUTFIT_38";
			break;
		case 408:
			return "VS_OUTFIT_38";
			break;
		case 409:
			return "VS_OUTFIT_38";
			break;
		case 410:
			return "VS_OUTFIT_38";
			break;
		case 411:
			return "VS_OUTFIT_38";
			break;
		case 412:
			return "VS_OUTFIT_38";
			break;
		case 413:
			return "VS_OUTFIT_39";
			break;
		case 414:
			return "VS_OUTFIT_39";
			break;
		case 415:
			return "VS_OUTFIT_39";
			break;
		case 416:
			return "VS_OUTFIT_39";
			break;
		case 417:
			return "VS_OUTFIT_39";
			break;
		case 418:
			return "VS_OUTFIT_39";
			break;
		case 419:
			return "VS_OUTFIT_40";
			break;
		case 420:
			return "VS_OUTFIT_40";
			break;
		case 421:
			return "VS_OUTFIT_40";
			break;
		case 422:
			return "VS_OUTFIT_40";
			break;
		case 423:
			return "VS_OUTFIT_40";
			break;
		case 424:
			return "VS_OUTFIT_40";
			break;
		case 425:
			return "VS_OUTFIT_41";
			break;
		case 426:
			return "VS_OUTFIT_41";
			break;
		case 427:
			return "VS_OUTFIT_41";
			break;
		case 428:
			return "VS_OUTFIT_41";
			break;
		case 429:
			return "VS_OUTFIT_41";
			break;
		case 430:
			return "VS_OUTFIT_41";
			break;
		case 431:
			return "VS_OUTFIT_42";
			break;
		case 432:
			return "VS_OUTFIT_42";
			break;
		case 433:
			return "VS_OUTFIT_42";
			break;
		case 434:
			return "VS_OUTFIT_42";
			break;
		case 435:
			return "VS_OUTFIT_42";
			break;
		case 436:
			return "VS_OUTFIT_42";
			break;
		case 437:
			return "VS_OUTFIT_43";
			break;
		case 438:
			return "VS_OUTFIT_43";
			break;
		case 439:
			return "VS_OUTFIT_43";
			break;
		case 440:
			return "VS_OUTFIT_43";
			break;
		case 441:
			return "VS_OUTFIT_43";
			break;
		case 442:
			return "VS_OUTFIT_43";
			break;
		case 443:
			return "VS_OUTFIT_44";
			break;
		case 444:
			return "VS_OUTFIT_44";
			break;
		case 445:
			return "VS_OUTFIT_44";
			break;
		case 446:
			return "VS_OUTFIT_44";
			break;
		case 447:
			return "VS_OUTFIT_44";
			break;
		case 448:
			return "VS_OUTFIT_44";
			break;
		case 449:
			return "VS_OUTFIT_45";
			break;
		case 450:
			return "VS_OUTFIT_45";
			break;
		case 451:
			return "VS_OUTFIT_45";
			break;
		case 452:
			return "VS_OUTFIT_45";
			break;
		case 453:
			return "VS_OUTFIT_45";
			break;
		case 454:
			return "VS_OUTFIT_45";
			break;
		case 455:
			return "VS_OUTFIT_46";
			break;
		case 456:
			return "VS_OUTFIT_46";
			break;
		case 457:
			return "VS_OUTFIT_46";
			break;
		case 458:
			return "VS_OUTFIT_46";
			break;
		case 459:
			return "VS_OUTFIT_46";
			break;
		case 460:
			return "VS_OUTFIT_46";
			break;
		case 461:
			return "VS_OUTFIT_47";
			break;
		case 462:
			return "VS_OUTFIT_47";
			break;
		case 463:
			return "VS_OUTFIT_47";
			break;
		case 464:
			return "VS_OUTFIT_47";
			break;
		case 465:
			return "VS_OUTFIT_47";
			break;
		case 466:
			return "VS_OUTFIT_47";
			break;
		case 467:
			return "VS_OUTFIT_48";
			break;
		case 468:
			return "VS_OUTFIT_48";
			break;
		case 469:
			return "VS_OUTFIT_48";
			break;
		case 470:
			return "VS_OUTFIT_48";
			break;
		case 471:
			return "VS_OUTFIT_48";
			break;
		case 472:
			return "VS_OUTFIT_48";
			break;
		case 473:
			return "VS_OUTFIT_49";
			break;
		case 474:
			return "VS_OUTFIT_49";
			break;
		case 475:
			return "VS_OUTFIT_49";
			break;
		case 476:
			return "VS_OUTFIT_49";
			break;
		case 477:
			return "VS_OUTFIT_49";
			break;
		case 478:
			return "VS_OUTFIT_49";
			break;
	}
	switch (iParam0)
	{
		case 1194:
			return "GOO_SCUBA" /* GXT: The Diver */;
		case 1337:
			return "GOO_SCUBA2" /* GXT: The Diver (No Tank) */;
		case 1195:
			return "GOO_PARA_B_0" /* GXT: Blue Paramedic (Jacket) */;
		case 1196:
			return "GOO_PARA_B_1" /* GXT: Blue Paramedic */;
		case 1197:
			return "GOO_PARA_G_0" /* GXT: Green Paramedic (Jacket) */;
		case 1198:
			return "GOO_PARA_G_1" /* GXT: Green Paramedic */;
		case 1249:
			return "GOO_MEDT1_0" /* GXT: The Specialist */;
		case 1250:
			return "GOO_MEDT1_1" /* GXT: The Adept */;
		case 1251:
			return "GOO_MEDT1_2" /* GXT: The Proficient */;
		case 1252:
			return "GOO_MEDT1_3" /* GXT: The Deft */;
		case 1253:
			return "GOO_MEDT2_0" /* GXT: The Action */;
		case 1254:
			return "GOO_MEDT2_1" /* GXT: The Wrapped */;
		case 1255:
			return "GOO_MEDT2_2" /* GXT: The Snood */;
		case 1256:
			return "GOO_MEDT2_3" /* GXT: The Conflict */;
		case 1257:
			return "GOO_MODST_0" /* GXT: The Phantom */;
		case 1258:
			return "GOO_MODST_1" /* GXT: The Ghost */;
		case 1259:
			return "GOO_MODST_2" /* GXT: The Covert */;
		case 1260:
			return "GOO_MODST_3" /* GXT: The Undercover */;
		case 1261:
			return "GOO_CASPIL_0" /* GXT: The Aviator */;
		case 1262:
			return "GOO_CASPIL_1" /* GXT: The Flier */;
		case 1263:
			return "GOO_CASPIL_2" /* GXT: The Eagle */;
		case 1264:
			return "GOO_CASPIL_3" /* GXT: The Aeronaut */;
		case 1265:
			return "GOO_FIGPIL_0" /* GXT: The Maverick */;
		case 1266:
			return "GOO_FIGPIL_1" /* GXT: The Bandit */;
		case 1267:
			return "GOO_FIGPIL_2" /* GXT: The Wingman */;
		case 1268:
			return "GOO_FIGPIL_3" /* GXT: The Flying Ace */;
		case 1269:
			return "GOO_HTRIOT_0" /* GXT: The Synthetic */;
		case 1270:
			return "GOO_HTRIOT_1" /* GXT: The Composite */;
		case 1271:
			return "GOO_HTRIOT_2" /* GXT: The Reinforced */;
		case 1272:
			return "GOO_HTRIOT_3" /* GXT: The Enhanced */;
		case 1273:
			return "GOO_HTIMP_0" /* GXT: The Bleeding-Edge */;
		case 1274:
			return "GOO_HTIMP_1" /* GXT: The Machine */;
		case 1275:
			return "GOO_HTIMP_2" /* GXT: The State-of-the-Art */;
		case 1276:
			return "GOO_HTIMP_3" /* GXT: The Engineered */;
		case 1277:
			return "GOO_MTMASK_0" /* GXT: The Undercover */;
		case 1278:
			return "GOO_MTMASK_1" /* GXT: The Concealed */;
		case 1279:
			return "GOO_MTMASK_2" /* GXT: The Disguised */;
		case 1280:
			return "GOO_MTMASK_3" /* GXT: The Hidden */;
		case 1281:
			return "GOO_MTREB_0" /* GXT: The Respirator */;
		case 1282:
			return "GOO_MTREB_1" /* GXT: The Apparatus */;
		case 1283:
			return "GOO_MTREB_2" /* GXT: The Gas Mask */;
		case 1284:
			return "GOO_MTREB_3" /* GXT: The Inhalator */;
		case 1285:
			return "GOO_MTHAVC_0" /* GXT: The Dissident */;
		case 1286:
			return "GOO_MTHAVC_1" /* GXT: The Disaffected */;
		case 1287:
			return "GOO_MTHAVC_2" /* GXT: The Seditious */;
		case 1288:
			return "GOO_MTHAVC_3" /* GXT: The Mischief */;
		case 1289:
			return "GOO_MTADPT_0" /* GXT: The Utility */;
		case 1290:
			return "GOO_MTADPT_1" /* GXT: The Operator */;
		case 1291:
			return "GOO_MTADPT_2" /* GXT: The Practical */;
		case 1292:
			return "GOO_MTADPT_3" /* GXT: The Prepared */;
		case 1293:
			return "GOO_SUBDRV_0" /* GXT: The Bluejacket */;
		case 1294:
			return "GOO_SUBDRV_1" /* GXT: The Submariner */;
		case 1295:
			return "GOO_SUBDRV_2" /* GXT: The Shipmate */;
		case 1296:
			return "GOO_SUBDRV_3" /* GXT: The A-ganger */;
		case 1297:
			return "GOO_HVYCGR_0" /* GXT: The Ironclad */;
		case 1298:
			return "GOO_HVYCGR_1" /* GXT: The Tank */;
		case 1299:
			return "GOO_HVYCGR_2" /* GXT: The Anti-Riot */;
		case 1300:
			return "GOO_HVYCGR_3" /* GXT: The Charger */;
		case 1301:
			return "GOO_LTTACT_0" /* GXT: The Combatant */;
		case 1302:
			return "GOO_LTTACT_1" /* GXT: The Trooper */;
		case 1303:
			return "GOO_LTTACT_2" /* GXT: The Gunner */;
		case 1304:
			return "GOO_LTTACT_3" /* GXT: The Battler */;
		case 1305:
			return "GOO_LTCOMB_0" /* GXT: The Recruit */;
		case 1306:
			return "GOO_LTCOMB_1" /* GXT: The Layman */;
		case 1307:
			return "GOO_LTCOMB_2" /* GXT: The Hopeful */;
		case 1308:
			return "GOO_LTCOMB_3" /* GXT: The Dilettante */;
		case 1309:
			return "GOO_CLSSTL_0" /* GXT: The Sneak */;
		case 1310:
			return "GOO_CLSSTL_1" /* GXT: The Slink */;
		case 1311:
			return "GOO_CLSSTL_2" /* GXT: The Prowl */;
		case 1312:
			return "GOO_CLSSTL_3" /* GXT: The Slip */;
		case 1313:
			return "GOO_MLTCAM_0" /* GXT: The Unseen */;
		case 1314:
			return "GOO_MLTCAM_1" /* GXT: The Inconspicuous */;
		case 1315:
			return "GOO_MLTCAM_2" /* GXT: The Invisible */;
		case 1316:
			return "GOO_MLTCAM_3" /* GXT: The Undetected */;
		case 1317:
			return "GOO_GRK_0" /* GXT: The Waterproof */;
		case 1318:
			return "GOO_GRK_1" /* GXT: The Resistant */;
		case 1319:
			return "GOO_GRK_2" /* GXT: The Repellent */;
		case 1320:
			return "GOO_GRK_3" /* GXT: The Impermeable */;
		default:
	}
	switch (iParam0)
	{
		case 1199:
			return "SL_CLOWN_01" /* GXT: Slasher Clown 1 */;
			break;
		case 1200:
			return "SL_CLOWN_02" /* GXT: Slasher Clown 2 */;
			break;
		case 1201:
			return "SL_CLOWN_03" /* GXT: Slasher Clown 3 */;
			break;
		case 1202:
			return "SL_CLOWN_04" /* GXT: Slasher Clown 4 */;
			break;
		case 1203:
			return "SL_CLOWN_05" /* GXT: Slasher Clown 5 */;
			break;
		case 1204:
			return "SL_CLOWN_06" /* GXT: Slasher Clown 6 */;
			break;
		case 1205:
			return "SL_CLOWN_07" /* GXT: Slasher Clown 7 */;
			break;
		case 1206:
			return "SL_CLOWN_08" /* GXT: Slasher Clown 8 */;
			break;
		case 1207:
			return "SL_GREY_01" /* GXT: Hunted Gray 1 */;
			break;
		case 1208:
			return "SL_GREY_02" /* GXT: Hunted Gray 2 */;
			break;
		case 1209:
			return "SL_GREY_03" /* GXT: Hunted Gray 3 */;
			break;
		case 1210:
			return "SL_GREY_04" /* GXT: Hunted Gray 4 */;
			break;
		case 1211:
			return "SL_GREY_05" /* GXT: Hunted Gray 5 */;
			break;
		case 1212:
			return "SL_GREY_06" /* GXT: Hunted Gray 6 */;
			break;
		case 1213:
			return "SL_GREY_07" /* GXT: Hunted Gray 7 */;
			break;
		case 1214:
			return "SL_GREY_08" /* GXT: Hunted Gray 8 */;
			break;
		case 1215:
			return "SL_ALIEN_01" /* GXT: Slasher Alien 1 */;
			break;
		case 1216:
			return "SL_ALIEN_02" /* GXT: Slasher Alien 2 */;
			break;
		case 1217:
			return "SL_ALIEN_03" /* GXT: Slasher Alien 3 */;
			break;
		case 1218:
			return "SL_ALIEN_04" /* GXT: Slasher Alien 4 */;
			break;
		case 1219:
			return "SL_ALIEN_05" /* GXT: Slasher Alien 5 */;
			break;
		case 1220:
			return "SL_ALIEN_06" /* GXT: Slasher Alien 6 */;
			break;
		case 1221:
			return "SL_ALIEN_07" /* GXT: Slasher Alien 7 */;
			break;
		case 1222:
			return "SL_ALIEN_08" /* GXT: Slasher Alien 8 */;
			break;
		case 1223:
			return "SL_BROWN_01" /* GXT: Hunted Brown 1 */;
			break;
		case 1224:
			return "SL_BROWN_02" /* GXT: Hunted Brown 2 */;
			break;
		case 1225:
			return "SL_BROWN_03" /* GXT: Hunted Brown 3 */;
			break;
		case 1226:
			return "SL_BROWN_04" /* GXT: Hunted Brown 4 */;
			break;
		case 1227:
			return "SL_BROWN_05" /* GXT: Hunted Brown 5 */;
			break;
		case 1228:
			return "SL_BROWN_06" /* GXT: Hunted Brown 6 */;
			break;
		case 1229:
			return "SL_BROWN_07" /* GXT: Hunted Brown 7 */;
			break;
		case 1230:
			return "SL_BROWN_08" /* GXT: Hunted Brown 8 */;
			break;
	}
	switch (iParam0)
	{
		case 1231:
			return "HT_BLACKTARG" /* GXT: Black Target */;
		case 1232:
			return "HT_BLACK_00" /* GXT: Black 1 */;
		case 1233:
			return "HT_BLACK_01" /* GXT: Black 2 */;
		case 1234:
			return "HT_BLACK_02" /* GXT: Black 3 */;
		case 1235:
			return "HT_BLACK_03" /* GXT: Black 4 */;
		case 1236:
			return "HT_BLACK_04" /* GXT: Black 5 */;
		case 1237:
			return "HT_BLACK_05" /* GXT: Black 6 */;
		case 1238:
			return "HT_BLACK_06" /* GXT: Black 7 */;
		case 1239:
			return "HT_BLACK_07" /* GXT: Black 8 */;
		case 1240:
			return "HT_GREENTARG" /* GXT: Green Target */;
		case 1241:
			return "HT_GREEN_00" /* GXT: Green 1 */;
		case 1242:
			return "HT_GREEN_01" /* GXT: Green 2 */;
		case 1243:
			return "HT_GREEN_02" /* GXT: Green 3 */;
		case 1244:
			return "HT_GREEN_03" /* GXT: Green 4 */;
		case 1245:
			return "HT_GREEN_04" /* GXT: Green 5 */;
		case 1246:
			return "HT_GREEN_05" /* GXT: Green 6 */;
		case 1247:
			return "HT_GREEN_06" /* GXT: Green 7 */;
		case 1248:
			return "HT_GREEN_07" /* GXT: Green 8 */;
		default:
	}
	switch (iParam0)
	{
		case 1371:
			return "MC_VJ_RED";
		case 1372:
			return "MC_VJ_BLU";
		case 1373:
			return "MC_VJ_WHI";
		case 1374:
			return "MC_VJ_GRA";
		case 1375:
			return "MC_VJ_FCB";
		case 1376:
			return "MC_VJ_FCR";
		case 1377:
			return "MC_VJ_FCW";
		case 1378:
			return "MC_VJ_FCG";
		case 1379:
			return "MC_VJ_FCO";
		case 1380:
			return "MC_VJ_FCPU";
		case 1381:
			return "MC_VJ_FCPI";
		default:
	}
	switch (iParam0)
	{
		case 1382:
			return "MC_DTB_PU0";
		case 1383:
			return "MC_DTB_PU1";
		case 1384:
			return "MC_DTB_PU2";
		case 1385:
			return "MC_DTB_PU3";
		case 1386:
			return "MC_DTB_OR0";
		case 1387:
			return "MC_DTB_OR1";
		case 1388:
			return "MC_DTB_OR2";
		case 1389:
			return "MC_DTB_OR3";
		case 1390:
			return "MC_DTB_PI0";
		case 1391:
			return "MC_DTB_PI1";
		case 1392:
			return "MC_DTB_PI2";
		case 1393:
			return "MC_DTB_PI3";
		case 1394:
			return "MC_DTB_GR0";
		case 1395:
			return "MC_DTB_GR1";
		case 1396:
			return "MC_DTB_GR2";
		case 1397:
			return "MC_DTB_GR3";
		case 1398:
			return "MC_SR_PU0" /* GXT: Sumo Remix Purple */;
		case 1399:
			return "MC_SR_OR0" /* GXT: Sumo Remix Orange */;
		case 1400:
			return "MC_SR_OI0" /* GXT: Sumo Remix Pink */;
		case 1401:
			return "MC_SR_GR0" /* GXT: Sumo Remix Green */;
		case 1402:
			return "MC_OD_PU0";
		case 1403:
			return "MC_OD_PU1";
		case 1404:
			return "MC_OD_PU2";
		case 1405:
			return "MC_OD_PU3";
		case 1406:
			return "MC_OD_OR0";
		case 1407:
			return "MC_OD_OR1";
		case 1408:
			return "MC_OD_OR2";
		case 1409:
			return "MC_OD_OR3";
		case 1410:
			return "MC_OD_PI0";
		case 1411:
			return "MC_OD_PI1";
		case 1412:
			return "MC_OD_PI2";
		case 1413:
			return "MC_OD_PI3";
		case 1414:
			return "MC_OD_GR0";
		case 1415:
			return "MC_OD_GR1";
		case 1416:
			return "MC_OD_GR2";
		case 1417:
			return "MC_OD_GR3";
		case 1418:
			return "MC_HP_H0" /* GXT: Hunting Pack Remix Hoons 0 */;
		case 1419:
			return "MC_HP_H1" /* GXT: Hunting Pack Remix Hoons 1 */;
		case 1420:
			return "MC_HP_H2" /* GXT: Hunting Pack Remix Hoons 2 */;
		case 1421:
			return "MC_HP_H3" /* GXT: Hunting Pack Remix Hoons 3 */;
		case 1422:
			return "MC_HP_HR" /* GXT: Hunting Pack Remix Hoons Runner */;
		case 1423:
			return "MC_HP_R0" /* GXT: Hunting Pack Remix Rabble 0 */;
		case 1424:
			return "MC_HP_R1" /* GXT: Hunting Pack Remix Rabble 1 */;
		case 1425:
			return "MC_HP_R2" /* GXT: Hunting Pack Remix Rabble 2 */;
		case 1426:
			return "MC_HP_R3" /* GXT: Hunting Pack Remix Rabble 3 */;
		case 1427:
			return "MC_HP_RR" /* GXT: Hunting Pack Remix Rabble Runner */;
		case 1428:
			return "MC_TP_B0" /* GXT: Trading Places Remix Beast 0 */;
		case 1429:
			return "MC_TP_B1" /* GXT: Trading Places Remix Beast 1 */;
		case 1430:
			return "MC_TP_B2" /* GXT: Trading Places Remix Beast 2 */;
		case 1431:
			return "MC_TP_B3" /* GXT: Trading Places Remix Beast 3 */;
		case 1432:
			return "MC_TP_B4" /* GXT: Trading Places Remix Beast 4 */;
		case 1433:
			return "MC_TP_B5" /* GXT: Trading Places Remix Beast 5 */;
		case 1434:
			return "MC_TP_B6" /* GXT: Trading Places Remix Beast 6 */;
		case 1435:
			return "MC_TP_B7" /* GXT: Trading Places Remix Beast 7 */;
		case 1436:
			return "MC_TP_J0" /* GXT: Trading Places Remix Juggernaut 0 */;
		case 1437:
			return "MC_TP_J1" /* GXT: Trading Places Remix Juggernaut 1 */;
		case 1438:
			return "MC_TP_J2" /* GXT: Trading Places Remix Juggernaut 2 */;
		case 1439:
			return "MC_TP_J3" /* GXT: Trading Places Remix Juggernaut 3 */;
		case 1440:
			return "MC_TP_J4" /* GXT: Trading Places Remix Juggernaut 4 */;
		case 1441:
			return "MC_TP_J5" /* GXT: Trading Places Remix Juggernaut 5 */;
		case 1442:
			return "MC_TP_J6" /* GXT: Trading Places Remix Juggernaut 6 */;
		case 1443:
			return "MC_TP_J7" /* GXT: Trading Places Remix Juggernaut 7 */;
		case 1444:
			return "MC_COTP_H0";
		case 1445:
			return "MC_COTP_H1";
		case 1446:
			return "MC_COTP_H2";
		case 1447:
			return "MC_COTP_H3";
		case 1448:
			return "MC_COTP_H4";
		case 1449:
			return "MC_COTP_H5";
		case 1450:
			return "MC_COTP_H6";
		case 1451:
			return "MC_COTP_H7";
		case 1452:
			return "MC_COTP_R0";
		case 1453:
			return "MC_COTP_R2";
		case 1454:
			return "MC_RB_BLACK" /* GXT: Running Back Remix Black */;
		case 1455:
			return "MC_RB_WHITE" /* GXT: Running Back Remix White */;
		case 1456:
			return "MC_RB_RED" /* GXT: Running Back Remix Red */;
		case 1457:
			return "MC_RB_BLUE" /* GXT: Running Back Remix Blue */;
		case 1462:
			return "MC_RB_GRN" /* GXT: Running Back Remix Green */;
		case 1463:
			return "MC_RB_YLW" /* GXT: Running Back Remix Yellow */;
		case 1464:
			return "MC_RB_GRNGLW" /* GXT: Running Back Remix Green Glow */;
		case 1465:
			return "MC_RB_YLWGLW" /* GXT: Running Back Remix Yellow Glow */;
		case 1485:
			return "MC_SPACELNG0" /* GXT: Green & Yellow Creature */;
		case 1486:
			return "MC_SPACELNG1" /* GXT: Orange Cyclops */;
		case 1487:
			return "MC_SPACELNG2" /* GXT: Blue Horror */;
		case 1488:
			return "MC_SPACELNG3" /* GXT: Green Cyclops */;
		default:
	}
	switch (iParam0)
	{
		case 1370:
			return "MC_O_FIREMAN" /* GXT: Fire Man */;
		case 1484:
			return "MC_O_HIGHROLL" /* GXT: High Roller */;
		case 1042:
			return "MC_O_NOOSE" /* GXT: Noose */;
		case 1530:
			return "CHO_STBI0" /* GXT: The Sneaker */;
		case 1531:
			return "CHO_STBI1" /* GXT: The Creeper */;
		case 1532:
			return "CHO_STBI2" /* GXT: The Slinker */;
		case 1533:
			return "CHO_STBI3" /* GXT: The Lifter */;
		case 1534:
			return "CHO_STBI4" /* GXT: The Pilferer */;
		case 1535:
			return "CHO_STBI5" /* GXT: The Skulker */;
		case 1536:
			return "CHO_STBII0" /* GXT: The Shady */;
		case 1537:
			return "CHO_STBII1" /* GXT: The Underhanded */;
		case 1538:
			return "CHO_STBII2" /* GXT: The Suspect */;
		case 1539:
			return "CHO_STBII3" /* GXT: The Dodgy */;
		case 1540:
			return "CHO_STBII4" /* GXT: The Dubious */;
		case 1541:
			return "CHO_STBII5" /* GXT: The Unsavoury */;
		case 1542:
			return "CHO_STBIII0" /* GXT: The Unmoved */;
		case 1543:
			return "CHO_STBIII1" /* GXT: The Untraceable */;
		case 1544:
			return "CHO_STBIII2" /* GXT: The No-Frills */;
		case 1545:
			return "CHO_STBIII3" /* GXT: The Routine */;
		case 1546:
			return "CHO_STBIII4" /* GXT: The Smooth */;
		case 1547:
			return "CHO_STBIII5" /* GXT: The Offhand */;
		case 1548:
			return "CHO_STAI0" /* GXT: The Conspirator */;
		case 1549:
			return "CHO_STAI1" /* GXT: The Accomplice */;
		case 1550:
			return "CHO_STAI2" /* GXT: The Schemer */;
		case 1551:
			return "CHO_STAI3" /* GXT: The Associate */;
		case 1552:
			return "CHO_STAI4" /* GXT: The Intriguer */;
		case 1553:
			return "CHO_STAI5" /* GXT: The Infiltrator */;
		case 1554:
			return "CHO_STAII0" /* GXT: The Scout */;
		case 1555:
			return "CHO_STAII1" /* GXT: The Mole */;
		case 1556:
			return "CHO_STAII2" /* GXT: The Watcher */;
		case 1557:
			return "CHO_STAII3" /* GXT: The Vanguard */;
		case 1558:
			return "CHO_STAII4" /* GXT: The Planter */;
		case 1559:
			return "CHO_STAII5" /* GXT: The Disposer */;
		case 1560:
			return "CHO_STAIII0" /* GXT: The Shadow */;
		case 1561:
			return "CHO_STAIII1" /* GXT: The Blotted */;
		case 1562:
			return "CHO_STAIII2" /* GXT: The Eclipsed */;
		case 1563:
			return "CHO_STAIII3" /* GXT: The Obscure */;
		case 1564:
			return "CHO_STAIII4" /* GXT: The Concealed */;
		case 1565:
			return "CHO_STAIII5" /* GXT: The Shade */;
		case 1585:
			return "CHO_SU_B0" /* GXT: The Debugger */;
		case 1586:
			return "CHO_SU_B1" /* GXT: The Sprayer */;
		case 1587:
			return "CHO_SU_B2" /* GXT: The Compressor */;
		case 1588:
			return "CHO_SU_B3" /* GXT: The Depositor */;
		case 1589:
			return "CHO_SU_B4" /* GXT: The Bagger */;
		case 1590:
			return "CHO_SU_B5" /* GXT: The Eradicator */;
		case 1595:
			return "CHO_SU_M0" /* GXT: The Mender */;
		case 1596:
			return "CHO_SU_M1" /* GXT: The Sustainer */;
		case 1597:
			return "CHO_SU_M2" /* GXT: The Obligor */;
		case 1598:
			return "CHO_SU_M3" /* GXT: The Corrector */;
		case 1599:
			return "CHO_SU_M4" /* GXT: The Renovator */;
		case 1600:
			return "CHO_SU_M5" /* GXT: The Welder */;
		case 1579:
			return "CHO_SU_G0" /* GXT: The Rigid */;
		case 1580:
			return "CHO_SU_G1" /* GXT: The Imposer */;
		case 1581:
			return "CHO_SU_G2" /* GXT: The Shatterproof */;
		case 1582:
			return "CHO_SU_G3" /* GXT: The Defender */;
		case 1583:
			return "CHO_SU_G4" /* GXT: The Unbreakable */;
		case 1584:
			return "CHO_SU_G5" /* GXT: The Enactor */;
		case 1591:
			return "CHO_SU_W0" /* GXT: The Trending */;
		case 1592:
			return "CHO_SU_W1" /* GXT: The In */;
		case 1593:
			return "CHO_SU_W2" /* GXT: The Personality */;
		case 1594:
			return "CHO_SU_W3" /* GXT: The Face */;
		case 1489:
			return "CHO_DLI0" /* GXT: The Careful */;
		case 1490:
			return "CHO_DLI1" /* GXT: The Cautious */;
		case 1491:
			return "CHO_DLI2" /* GXT: The Considered */;
		case 1492:
			return "CHO_DLI3" /* GXT: The Strict */;
		case 1493:
			return "CHO_DLI4" /* GXT: The Correct */;
		case 1494:
			return "CHO_DLI5" /* GXT: The Particular */;
		case 1495:
			return "CHO_DLII0" /* GXT: The Swanky */;
		case 1496:
			return "CHO_DLII1" /* GXT: The Smart */;
		case 1497:
			return "CHO_DLII2" /* GXT: The Neat */;
		case 1498:
			return "CHO_DLII3" /* GXT: The Spruce */;
		case 1499:
			return "CHO_DLII4" /* GXT: The Dashing */;
		case 1500:
			return "CHO_DLII5" /* GXT: The Trendy */;
		case 1501:
			return "CHO_DLIII0" /* GXT: The Proper */;
		case 1502:
			return "CHO_DLIII1" /* GXT: The Stiff */;
		case 1503:
			return "CHO_DLIII2" /* GXT: The Prim */;
		case 1504:
			return "CHO_DLIII3" /* GXT: The Starched */;
		case 1505:
			return "CHO_DLIII4" /* GXT: The Orderly */;
		case 1506:
			return "CHO_DLIII5" /* GXT: The Demure */;
		case 1507:
			return "CHO_DHI0" /* GXT: The Woods */;
		case 1508:
			return "CHO_DHI1" /* GXT: The Desert */;
		case 1509:
			return "CHO_DHI2" /* GXT: The Icefield */;
		case 1510:
			return "CHO_DHI3" /* GXT: The Grassland */;
		case 1511:
			return "CHO_DHI4" /* GXT: The Glacier */;
		case 1512:
			return "CHO_DHI5" /* GXT: The Swamp */;
		case 1513:
			return "CHO_DHII0" /* GXT: The Shielded */;
		case 1514:
			return "CHO_DHII1" /* GXT: The Safeguard */;
		case 1515:
			return "CHO_DHII2" /* GXT: The Fortified */;
		case 1516:
			return "CHO_DHII3" /* GXT: The Defended */;
		case 1517:
			return "CHO_DHII4" /* GXT: The Secured */;
		case 1518:
			return "CHO_DHII5" /* GXT: The Braced */;
		case 1519:
			return "CHO_DHIII0" /* GXT: The Traverser */;
		case 1520:
			return "CHO_DHIII1" /* GXT: The Navigator */;
		case 1521:
			return "CHO_DHIII2" /* GXT: The Router */;
		case 1522:
			return "CHO_DHIII3" /* GXT: The Wayfarer */;
		case 1523:
			return "CHO_DHIII4" /* GXT: The Surveyor */;
		case 1524:
			return "CHO_DHIII5" /* GXT: The Roamer */;
		default:
	}
	switch (iParam0)
	{
		case 1614:
			return "IHO_SM_0" /* GXT: The Big Dog */;
		case 1615:
			return "IHO_SM_1" /* GXT: The City Slicker */;
		case 1616:
			return "IHO_SM_2" /* GXT: The Smart Casual */;
		case 1617:
			return "IHO_SM_3" /* GXT: The Standby */;
		case 1618:
			return "IHO_H1_0" /* GXT: The Newbie */;
		case 1619:
			return "IHO_H1_1" /* GXT: The Polished */;
		case 1620:
			return "IHO_H1_2" /* GXT: The Star */;
		case 1621:
			return "IHO_H1_3" /* GXT: The Visionary */;
		case 1622:
			return "IHO_H2_0" /* GXT: The Naturalist */;
		case 1623:
			return "IHO_H2_1" /* GXT: The Tracker */;
		case 1624:
			return "IHO_H2_2" /* GXT: The Coordinator */;
		case 1625:
			return "IHO_H2_3" /* GXT: The Analyst */;
		case 1626:
			return "IHO_L1_0" /* GXT: The Islander */;
		case 1627:
			return "IHO_L1_1" /* GXT: The Beached */;
		case 1628:
			return "IHO_L1_2" /* GXT: The Fanboy */;
		case 1629:
			return "IHO_L1_3" /* GXT: The Lounger */;
		case 1630:
			return "IHO_L2_0" /* GXT: The Logician */;
		case 1631:
			return "IHO_L2_1" /* GXT: The Escapologist */;
		case 1632:
			return "IHO_L2_2" /* GXT: The Pugilist */;
		case 1633:
			return "IHO_L2_3" /* GXT: The Agitator */;
		case 1634:
			return "IHO_S1_0" /* GXT: The Spectre */;
		case 1635:
			return "IHO_S1_1" /* GXT: The Culprit */;
		case 1636:
			return "IHO_S1_2" /* GXT: The Sleuth */;
		case 1637:
			return "IHO_S1_3" /* GXT: The Deflector */;
		case 1638:
			return "IHO_S2_0" /* GXT: The Python */;
		case 1639:
			return "IHO_S2_1" /* GXT: The Jaguar */;
		case 1640:
			return "IHO_S2_2" /* GXT: The Caiman */;
		case 1641:
			return "IHO_S2_3" /* GXT: The Anaconda */;
		case 1673:
			return "FIXO_PP_0" /* GXT: The Fashionable */;
		case 1674:
			return "FIXO_PP_1" /* GXT: The Voguish */;
		case 1675:
			return "FIXO_PP_2" /* GXT: The Snazzy */;
		case 1676:
			return "FIXO_PP_3" /* GXT: The Modish */;
		case 1677:
			return "FIXO_BG_0" /* GXT: The Moneymaker */;
		case 1678:
			return "FIXO_BG_1" /* GXT: The Deep Pockets */;
		case 1679:
			return "FIXO_BG_2" /* GXT: The Plutocrat */;
		case 1680:
			return "FIXO_BG_3" /* GXT: The Fat Cat */;
		case 1681:
			return "FIXO_GF_0" /* GXT: The Drive */;
		case 1682:
			return "FIXO_GF_1" /* GXT: The Putt */;
		case 1683:
			return "FIXO_GF_2" /* GXT: The Chip */;
		case 1684:
			return "FIXO_GF_3" /* GXT: The Birdie */;
		case 1685:
			return "FIXO_GF_4" /* GXT: The Par */;
		case 1686:
			return "FIXO_GF_5" /* GXT: The Eagle */;
		case 1687:
			return "FIXO_GF_6" /* GXT: The Albatross */;
		case 1688:
			return "FIXO_GF_7" /* GXT: The Bogey */;
		case 1691:
			return "SUM22O_IA_0" /* GXT: The Agent */;
		case 1692:
			return "SUM22O_IA_1" /* GXT: The Emissary */;
		case 1693:
			return "SUM22O_IA_2" /* GXT: The Clandestine */;
		case 1694:
			return "SUM22O_IA_3" /* GXT: The Intelligence */;
		case 1695:
			return "SUM22O_HW_R0" /* GXT: Conquest */;
		case 1696:
			return "SUM22O_HW_R1" /* GXT: War */;
		case 1697:
			return "SUM22O_HW_R2" /* GXT: Famine */;
		case 1698:
			return "SUM22O_HW_R3" /* GXT: Death */;
		case 1699:
			return "SUM22O_HW_R4" /* GXT: Conquest (Sleeveless) */;
		case 1700:
			return "SUM22O_HW_R5" /* GXT: War (Sleeveless) */;
		case 1701:
			return "SUM22O_HW_R6" /* GXT: Famine (Sleeveless) */;
		case 1702:
			return "SUM22O_HW_R7" /* GXT: Death (Sleeveless) */;
		case 1703:
			return "SUM22O_HW_H0" /* GXT: The Chased */;
		case 1704:
			return "SUM22O_HW_H1" /* GXT: The Pursued */;
		case 1705:
			return "SUM22O_HW_H2" /* GXT: The Stalked */;
		case 1706:
			return "SUM22O_HW_H3" /* GXT: The Hounded */;
		case 1707:
			return "SUM22O_HW_H4" /* GXT: The Tracked */;
		case 1708:
			return "SUM22O_HW_H5" /* GXT: The Trailed */;
		case 1709:
			return "SUM22O_HW_H6" /* GXT: The Followed */;
		case 1710:
			return "SUM22O_HW_H7" /* GXT: The Shadowed */;
		default:
	}
	return "NOT NAMED";
}

int func_246(var uParam0, var uParam1)//Position - 0x1F12EB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_67 - 1))
	{
		if (DATAFILE::DATAFILE_SELECT_UGC_DATA(uParam0->f_7, 0))
		{
			if (!__LIB_18__::func_535(uParam0->f_24, uParam0->f_25, NETWORK::UGC_GET_CONTENT_USER_ID(0), NETWORK::UGC_GET_CONTENT_CATEGORY(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			__LIB_18__::func_599(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			__LIB_2__::func_289();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_67)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_247()//Position - 0x1FE7B5
{
	__LIB_18__::func_605(Global_4718592.f_116524);
	__LIB_18__::func_604();
	__LIB_18__::func_400();
	__LIB_17__::func_957();
}

void func_248(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2027DB
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	if (!BitTest((*uParam0)[0], 0))
	{
	}
	if (!BitTest((*uParam0)[0], 2))
	{
	}
	__LIB_18__::func_404("avrad", &(uParam0->f_3), iParam2, iParam1, bParam3, 0, -2340845);
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		StringCopy(&Var0, "iebs", 16);
		if (iVar1 > 0)
		{
			StringConCat(&Var0, "_", 16);
			StringIntConCat(&Var0, iVar1, 16);
		}
		__LIB_18__::func_404(&Var0, uParam0[iVar1], iParam2, &(iParam1->f_1[iVar1]), bParam3, 0, -2340845);
		iVar1++;
	}
	if (iParam4 && !BitTest((*uParam0)[0], 2))
	{
		__LIB_18__::func_409(iVar1);
	}
	__LIB_18__::func_402("paccc", &(uParam0->f_4), iParam2, &(iParam1->f_4), bParam3, 0f, -904994889);
	__LIB_18__::func_404("lgtsi", &(uParam0->f_5), iParam2, &(iParam1->f_5), bParam3, -1, -2340845);
	__LIB_18__::func_404("paot", &(uParam0->f_6), iParam2, &(iParam1->f_6), bParam3, -1, -2340845);
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		if (iParam4 && !BitTest((*uParam0)[0], 0))
		{
			__LIB_18__::func_609(bParam3, iVar1);
		}
		else
		{
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				StringCopy(&Var0, "bs", 16);
				StringIntConCat(&Var0, iVar1, 16);
				StringConCat(&Var0, "t", 16);
				StringIntConCat(&Var0, iVar2, 16);
				__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/][iVar2]), iParam2, &(iParam1->f_7[iVar1 /*2*/][iVar2]), bParam3, 0, -2340845);
				iVar2++;
			}
		}
		StringCopy(&Var0, "actv", 16);
		if (iVar1 > 0)
		{
			StringIntConCat(&Var0, iVar1 + 1, 16);
		}
		__LIB_18__::func_403(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_2), iParam2, &(iParam1->f_32[iVar1]), bParam3, 0f, 0f, 0f, 0f, 0f, 0f);
		StringCopy(&Var0, "achf", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_402(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_5), iParam2, &(iParam1->f_45[iVar1]), bParam3, 0f, -904994889);
		StringCopy(&Var0, "awt", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_6), iParam2, &(iParam1->f_58[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "awr", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_7), iParam2, &(iParam1->f_71[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "awl", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_403(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_8), iParam2, &(iParam1->f_84[iVar1]), bParam3, 0f, 0f, 0f, 0f, 0f, 0f);
		StringCopy(&Var0, "awlr", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_11), iParam2, &(iParam1->f_97[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "aht", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_402(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_12), iParam2, &(iParam1->f_110[iVar1]), bParam3, 0f, -904994889);
		StringCopy(&Var0, "agrd", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_402(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_13), iParam2, &(iParam1->f_123[iVar1]), bParam3, 0f, -904994889);
		StringCopy(&Var0, "ags", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_14), iParam2, &(iParam1->f_136[iVar1]), bParam3, -1, -2340845);
		StringCopy(&Var0, "agvr", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_402(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_15), iParam2, &(iParam1->f_149[iVar1]), bParam3, 0f, -904994889);
		StringCopy(&Var0, "agvg", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_16), iParam2, &(iParam1->f_162[iVar1]), bParam3, -1, -2340845);
		StringCopy(&Var0, "pgtlp", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_18), iParam2, &(iParam1->f_188[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "pgtco", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_17), iParam2, &(iParam1->f_175[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "gtcst", 16);
		StringIntConCat(&Var0, iVar1, 16);
		uParam0->f_7[iVar1 /*27*/].f_19 = __LIB_18__::func_608(&Var0, iParam2, &(iParam1->f_201[iVar1]), bParam3, 0, 0);
		StringCopy(&Var0, "gtcss", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_25), iParam2, &(iParam1->f_275[iVar1]), bParam3, 0, -2340845);
		StringCopy(&Var0, "gtcsd", 16);
		StringIntConCat(&Var0, iVar1, 16);
		__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_26), iParam2, &(iParam1->f_288[iVar1]), bParam3, -1, -2340845);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&Var0, "cs", 16);
			StringIntConCat(&Var0, iVar1, 16);
			StringConCat(&Var0, "i", 16);
			StringIntConCat(&Var0, iVar2, 16);
			__LIB_18__::func_404(&Var0, &(uParam0->f_7[iVar1 /*27*/].f_20[iVar2]), iParam2, &(iParam1->f_214[iVar1 /*5*/][iVar2]), bParam3, 0, -2340845);
			iVar2++;
		}
		iVar1++;
	}
	__LIB_18__::func_404("inpgt", &(uParam0->f_2), iParam2, &(iParam1->f_3), bParam3, -1, -2340845);
}

void func_249(int iParam0)//Position - 0x209ED4
{
	int iVar0;
	int iVar1;
	var* uVar2;
	var* uVar3;
	var* uVar4;
	var* uVar5;
	iVar1 = DATAFILE::DATADICT_GET_DICT(iParam0, "ene");
	Global_4980736.f_176054 = DATAFILE::DATADICT_GET_INT(iVar1, "no");
	Global_4718592.f_110279 = DATAFILE::DATADICT_GET_INT(iVar1, "veh");
	uVar2 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "loc");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "head");
	uVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "team");
	uVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar1, "dmSPTR");
	if (Global_4980736.f_176054 > 60)
	{
		Global_4980736.f_176054 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_176054 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4980736.f_176061[iVar0 /*65*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar2, iVar0) };
			Global_4980736.f_176061[iVar0 /*65*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar3, iVar0);
			Global_4980736.f_176061[iVar0 /*65*/].f_4 = DATAFILE::DATAARRAY_GET_INT(uVar4, iVar0);
			Global_4980736.f_176061[iVar0 /*65*/].f_19 = DATAFILE::DATAARRAY_GET_INT(uVar5, iVar0);
		}
		iVar0++;
	}
	__LIB_18__::func_665(&iVar1);
}

void func_250(int iParam0)//Position - 0x211C64
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	int iVar5;
	var* uVar6;
	var* uVar7;
	var* uVar8;
	var* uVar9;
	var* uVar10;
	var* uVar11;
	var* uVar12;
	var* uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var* uVar22;
	var* uVar23;
	var* uVar24;
	var* uVar25;
	int iVar26;
	var* uVar27;
	var* uVar28;
	var* uVar29;
	var* uVar30;
	var* uVar31;
	var* uVar32;
	var* uVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var* uVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	var uVar44[20];
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
	var uVar56[3];
	int iVar57;
	int iVar58;
	struct<36> Var59;
	int iVar60;
	int iVar61;
	struct<2> Var62;
	int iVar63;
	int iVar64;
	int iVar65;
	iVar5 = DATAFILE::DATADICT_GET_DICT(iParam0, "weap");
	Global_4980736.f_69352 = DATAFILE::DATADICT_GET_INT(iVar5, "no");
	if (Global_4718592 == 0)
	{
		if (Global_4980736.f_69352 > 60)
		{
			Global_4980736.f_69352 = 60;
		}
	}
	else if (Global_4980736.f_69352 > 60)
	{
		Global_4980736.f_69352 = 60;
	}
	Global_4980736.f_69354 = DATAFILE::DATADICT_GET_INT(iVar5, "time");
	Global_4980736.f_69355 = DATAFILE::DATADICT_GET_INT(iVar5, "pal");
	Global_4718592.f_618 = DATAFILE::DATADICT_GET_INT(iVar5, "blip" /* GXT: Blip */);
	uVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "loc");
	uVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "head");
	uVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rotx");
	uVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "roty");
	uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "type");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "sub");
	uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "bits");
	uVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "clip");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest1");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest2");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest3");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "brest4");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "dmgmult");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "rput");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "wcoid");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vput");
	uVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasst");
	uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasso");
	uVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasss");
	uVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasst2");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasso2");
	uVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasss2");
	uVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasst3");
	uVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasso3");
	uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasss3");
	uVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasst4");
	uVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasso4");
	uVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vasss4");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vclnr");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vclnt");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vclnrl");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "ipdi");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "iwati");
	uVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "iptnp");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vbmbl");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "vbmbm");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "wspg");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "wsspg");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar5, "wcpm");
	iVar57 = 1;
	Var59.f_20 = 4;
	Var59.f_25 = 4;
	Var59.f_30 = 4;
	Var59.f_35 = 4;
	Global_4980736.f_78573 = DATAFILE::DATADICT_GET_BOOL(iVar5, "randtyp");
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_69352 - 1))
	{
		if (bVar0 < 60)
		{
			Global_4980736.f_69361[bVar0 /*151*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar6, bVar0) };
			Global_4980736.f_69361[bVar0 /*151*/].f_3.f_2 = DATAFILE::DATAARRAY_GET_FLOAT(uVar7, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_3 = DATAFILE::DATAARRAY_GET_FLOAT(uVar8, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_3.f_1 = DATAFILE::DATAARRAY_GET_FLOAT(uVar9, bVar0);
			iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar10, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_15 = iVar1;
			__LIB_18__::func_404("wtPreReqRq", &(Global_4980736.f_69361[bVar0 /*151*/].f_144), &iVar5, &iVar50, bVar0, -1, -2340845);
			__LIB_18__::func_404("wtPreReq", &(Global_4980736.f_69361[bVar0 /*151*/].f_143), &iVar5, &iVar46, bVar0, -1, -2340845);
			__LIB_18__::func_404("wthop", &(Global_4980736.f_69361[bVar0 /*151*/].f_145), &iVar5, &iVar47, bVar0, -1, -2340845);
			__LIB_18__::func_404("pipmi", &(Global_4980736.f_69361[bVar0 /*151*/].f_146), &iVar5, &iVar48, bVar0, -1, -2340845);
			__LIB_18__::func_404("wturuc", &(Global_4980736.f_69361[bVar0 /*151*/].f_150), &iVar5, &iVar49, bVar0, 0, -2340845);
			__LIB_18__::func_666(&Var59, &iVar5, &(Global_4980736.f_69361[bVar0 /*151*/].f_106), bVar0, 7);
			if (Global_4718592.f_117095 == 0)
			{
				iVar60 = 0;
				while (iVar60 <= 59)
				{
					if (Global_4980736.f_69361[iVar60 /*151*/].f_15 == joaat("PICKUP_WEAPON_STUNGUN"))
					{
						Global_4980736.f_69361[iVar60 /*151*/].f_15 = joaat("PICKUP_WEAPON_PISTOL");
					}
					iVar60++;
				}
			}
			if (!__LIB_17__::func_998(Global_4980736.f_69361[bVar0 /*151*/].f_15))
			{
				if (Global_4980736.f_69361[bVar0 /*151*/].f_15 == joaat("PICKUP_WEAPON_MARKSMANRIFLE"))
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_15 = joaat("PICKUP_WEAPON_SNIPERRIFLE");
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_15 = joaat("PICKUP_WEAPON_PISTOL");
				}
			}
			Global_4980736.f_69361[bVar0 /*151*/].f_6 = DATAFILE::DATAARRAY_GET_INT(uVar11, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_8 = DATAFILE::DATAARRAY_GET_INT(uVar12, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_7 = DATAFILE::DATAARRAY_GET_INT(uVar13, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar21, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_47 = DATAFILE::DATAARRAY_GET_INT(iVar42, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_48 = DATAFILE::DATAARRAY_GET_INT(iVar43, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar38, bVar0);
			Global_4980736.f_69361[bVar0 /*151*/].f_44 = DATAFILE::DATAARRAY_GET_INT(uVar39, bVar0);
			if (iVar14 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar14, bVar0) == 1)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[0] = DATAFILE::DATAARRAY_GET_BOOL(iVar14, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[0] = 0;
			}
			if (iVar15 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 1)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[1] = DATAFILE::DATAARRAY_GET_BOOL(iVar15, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[1] = 0;
			}
			if (iVar16 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar16, bVar0) == 1)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[2] = DATAFILE::DATAARRAY_GET_BOOL(iVar16, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[2] = 0;
			}
			if (iVar17 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar17, bVar0) == 1)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[3] = DATAFILE::DATAARRAY_GET_BOOL(iVar17, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_10[3] = 0;
			}
			if (iVar18 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar18, bVar0) == 3)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar18, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_9 = 1f;
			}
			if (iVar19 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar19, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_23 = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_23 = -1;
			}
			if (iVar20 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar20, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_105 = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_105 = -1;
			}
			if (iVar37 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar37, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_42 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_42 = 0;
			}
			if (iVar21 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar21, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_25 = DATAFILE::DATAARRAY_GET_INT(iVar21, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_25 = -1;
			}
			if (iVar38 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar38, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_43 = DATAFILE::DATAARRAY_GET_INT(iVar38, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_43 = 0;
			}
			if (iVar38 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar38, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_44 = DATAFILE::DATAARRAY_GET_INT(uVar39, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_44 = 0;
			}
			if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_45 = DATAFILE::DATAARRAY_GET_INT(iVar40, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_45 = 0;
			}
			if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_46 = DATAFILE::DATAARRAY_GET_INT(iVar41, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_46 = 0;
			}
			if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_47 = DATAFILE::DATAARRAY_GET_INT(iVar42, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_47 = 0;
			}
			if (iVar43 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar43, bVar0) == 2)
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_48 = DATAFILE::DATAARRAY_GET_INT(iVar43, bVar0);
			}
			else
			{
				Global_4980736.f_69361[bVar0 /*151*/].f_48 = 0;
			}
			iVar3 = 0;
			while (iVar3 <= 19)
			{
				StringCopy(&cVar4, "1wwb", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				__LIB_18__::func_404(&cVar4, &(Global_4980736.f_69361[bVar0 /*151*/].f_49[iVar3]), &iVar5, &(uVar44[iVar3]), bVar0, 0, 0);
				iVar3++;
			}
			if (__LIB_16__::func_683(1))
			{
				if (iVar36 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar36, bVar0) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_30 = DATAFILE::DATAARRAY_GET_INT(iVar36, bVar0);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_30 = -1;
				}
				if (iVar35 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar35, bVar0) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_31 = DATAFILE::DATAARRAY_GET_INT(iVar35, bVar0);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_31 = -1;
				}
				if (iVar34 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar34, bVar0) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_32 = DATAFILE::DATAARRAY_GET_INT(iVar34, bVar0);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_32 = 0;
				}
				Global_4980736.f_69361[bVar0 /*151*/].f_27 = DATAFILE::DATAARRAY_GET_INT(uVar22, bVar0);
				Global_4980736.f_69361[bVar0 /*151*/].f_28 = DATAFILE::DATAARRAY_GET_INT(uVar23, bVar0);
				Global_4980736.f_69361[bVar0 /*151*/].f_29 = DATAFILE::DATAARRAY_GET_INT(uVar24, bVar0);
				if (Global_4980736.f_69361[bVar0 /*151*/].f_29 == -1)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_29 = 0;
				}
				__LIB_18__::func_404("iwrcc", &(Global_4980736.f_69361[bVar0 /*151*/].f_70), &iVar5, &iVar51, bVar0, -1, -1);
				__LIB_18__::func_404("wSpVhT", &(Global_4980736.f_69361[bVar0 /*151*/].f_75), &iVar5, &iVar52, bVar0, 0, -2340845);
				__LIB_18__::func_404("wSpVhI", &(Global_4980736.f_69361[bVar0 /*151*/].f_76), &iVar5, &iVar53, bVar0, -1, -2340845);
				__LIB_18__::func_403("wSpVhC", &(Global_4980736.f_69361[bVar0 /*151*/].f_77), &iVar5, &iVar54, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
				__LIB_18__::func_403("wSpVhH", &(Global_4980736.f_69361[bVar0 /*151*/].f_80), &iVar5, &iVar55, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
				iVar61 = 0;
				while (iVar61 <= 2)
				{
					iVar1 = 0;
					StringCopy(&Var62, "weppbtf", 16);
					StringConCat(&Var62, "f", 16);
					StringIntConCat(&Var62, iVar61, 16);
					__LIB_18__::func_404(&Var62, &iVar1, &iVar5, &(uVar56[iVar61]), bVar0, 0, -2340845);
					Global_4980736.f_69361[bVar0 /*151*/].f_71[iVar61] = iVar1;
					iVar61++;
				}
				if (iVar45 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar45, bVar0) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_24 = DATAFILE::DATAARRAY_GET_INT(iVar45, bVar0);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_24 = 0;
				}
				if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, bVar0) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_36 = DATAFILE::DATAARRAY_GET_INT(uVar25, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_33 = DATAFILE::DATAARRAY_GET_INT(iVar26, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_39 = DATAFILE::DATAARRAY_GET_INT(uVar27, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_37 = DATAFILE::DATAARRAY_GET_INT(uVar28, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_34 = DATAFILE::DATAARRAY_GET_INT(uVar29, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_40 = DATAFILE::DATAARRAY_GET_INT(uVar30, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_38 = DATAFILE::DATAARRAY_GET_INT(uVar31, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_35 = DATAFILE::DATAARRAY_GET_INT(uVar32, bVar0);
					Global_4980736.f_69361[bVar0 /*151*/].f_41 = DATAFILE::DATAARRAY_GET_INT(uVar33, bVar0);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_36 = -1;
					Global_4980736.f_69361[bVar0 /*151*/].f_33 = 0;
					Global_4980736.f_69361[bVar0 /*151*/].f_39 = 0;
					Global_4980736.f_69361[bVar0 /*151*/].f_37 = -1;
					Global_4980736.f_69361[bVar0 /*151*/].f_34 = 0;
					Global_4980736.f_69361[bVar0 /*151*/].f_40 = 0;
					Global_4980736.f_69361[bVar0 /*151*/].f_38 = -1;
					Global_4980736.f_69361[bVar0 /*151*/].f_35 = 0;
					Global_4980736.f_69361[bVar0 /*151*/].f_41 = 0;
				}
				__LIB_18__::func_401("alvwep", &(Global_4980736.f_69361[bVar0 /*151*/].f_148), 1, &iVar5, &iVar57, bVar0, 0, -2340845);
				__LIB_18__::func_404("agIDwe", &(Global_4980736.f_69361[bVar0 /*151*/].f_147), &iVar5, &iVar58, bVar0, 0, 0);
			}
			StringCopy(&cVar4, "comps", 8);
			StringIntConCat(&cVar4, bVar0, 8);
			iVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar4);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (iVar63 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar63, iVar2) == 2)
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_16[iVar2] = DATAFILE::DATAARRAY_GET_INT(iVar63, iVar2);
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_16[iVar2] = 0;
				}
				iVar2++;
			}
			StringCopy(&cVar4, "wtSOv", 8);
			StringIntConCat(&cVar4, bVar0, 8);
			iVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar5, &cVar4);
			iVar2 = 1;
			while (iVar2 <= 20)
			{
				if (iVar64 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar64, (iVar2 - 1)) == 2)
				{
					iVar65 = DATAFILE::DATAARRAY_GET_INT(iVar64, (iVar2 - 1));
					Global_4980736.f_69361[bVar0 /*151*/].f_83[iVar2] = iVar65;
					if (iVar65 != -1 && Global_4980736.f_69361[bVar0 /*151*/].f_83[iVar2] != 76)
					{
					}
				}
				else
				{
					Global_4980736.f_69361[bVar0 /*151*/].f_83[iVar2] = 76;
				}
				iVar2++;
			}
		}
		bVar0++;
	}
	if (!BitTest(Global_4718592.f_26, 11))
	{
		__LIB_18__::func_613();
	}
}

void func_251(int iParam0)//Position - 0x21BDD4
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var* uVar10;
	var* uVar11;
	var* uVar12;
	int iVar13;
	var* uVar14;
	int iVar15;
	var* uVar16;
	var* uVar17;
	var* uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	var uVar23[20];
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<36> Var28;
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "ddblip") == 0)
	{
		return;
	}
	iVar3 = DATAFILE::DATADICT_GET_DICT(iParam0, "ddblip");
	Global_4980736.f_201075 = DATAFILE::DATADICT_GET_INT(iVar3, "no");
	iVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "pos");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "rule");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "team");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "type");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "size");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "veh");
	uVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "clr");
	uVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "spri");
	uVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "bits");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "entt");
	uVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "enti");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "dbnm");
	uVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "sbr");
	uVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "sbhr");
	uVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "hbr");
	iVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "frul");
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "trul");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "dumsg");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar3, "dumssg");
	iVar24 = 1;
	Var28.f_20 = 4;
	Var28.f_25 = 4;
	Var28.f_30 = 4;
	Var28.f_35 = 4;
	if (Global_4980736.f_201075 > 15)
	{
		Global_4980736.f_201075 = 15;
	}
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_201075 - 1))
	{
		if (iVar4 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar4, bVar0) == 5)
		{
			Global_4980736.f_199634[bVar0 /*96*/] = { DATAFILE::DATAARRAY_GET_VECTOR(iVar4, bVar0) };
			__LIB_18__::func_666(&Var28, &iVar3, &(Global_4980736.f_199634[bVar0 /*96*/].f_54), bVar0, 8);
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_2 = DATAFILE::DATAARRAY_GET_INT(uVar10, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_7 = DATAFILE::DATAARRAY_GET_INT(uVar11, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_8 = DATAFILE::DATAARRAY_GET_FLOAT(uVar16, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_9 = DATAFILE::DATAARRAY_GET_FLOAT(uVar17, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_8 = DATAFILE::DATAARRAY_GET_INT(uVar12, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_10 = DATAFILE::DATAARRAY_GET_INT(uVar14, bVar0);
			Global_4980736.f_199634[bVar0 /*96*/].f_11 = DATAFILE::DATAARRAY_GET_FLOAT(uVar18, bVar0);
		}
		if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar7, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_6 = 0;
		}
		if (iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_5 = 4;
		}
		if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_7 = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_7 = -1;
		}
		if (iVar15 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 4)
		{
			StringCopy(&(Global_4980736.f_199634[bVar0 /*96*/].f_35), DATAFILE::DATAARRAY_GET_STRING(iVar15, bVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4980736.f_199634[bVar0 /*96*/].f_35), "", 64);
		}
		if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_3 = DATAFILE::DATAARRAY_GET_INT(iVar5, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_3 = -1;
		}
		if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar6, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_4 = -1;
		}
		if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_9 = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar0);
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_9 = -1;
		}
		if (iVar19 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar19, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_13[0 /*4*/].f_1 = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_13[0 /*4*/].f_1 = -1;
		}
		if (iVar20 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar20, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_13[0 /*4*/].f_2 = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_54.f_13[0 /*4*/].f_2 = -1;
		}
		if (iVar21 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar21, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_12 = DATAFILE::DATAARRAY_GET_INT(iVar21, bVar0);
			if (Global_4980736.f_199634[bVar0 /*96*/].f_12 == -1)
			{
				Global_4980736.f_199634[bVar0 /*96*/].f_12 = 0;
			}
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_12 = 0;
		}
		if (iVar22 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar22, bVar0) == 2)
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_13 = DATAFILE::DATAARRAY_GET_INT(iVar22, bVar0);
			if (Global_4980736.f_199634[bVar0 /*96*/].f_13 == -1)
			{
				Global_4980736.f_199634[bVar0 /*96*/].f_13 = 0;
			}
		}
		else
		{
			Global_4980736.f_199634[bVar0 /*96*/].f_13 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			StringCopy(&sVar2, "1dwb", 8);
			StringIntConCat(&sVar2, iVar1, 8);
			__LIB_18__::func_404(&sVar2, &(Global_4980736.f_199634[bVar0 /*96*/].f_14[iVar1]), &iVar3, &(uVar23[iVar1]), bVar0, 0, 0);
			iVar1++;
		}
		__LIB_18__::func_401("alvdum", &(Global_4980736.f_199634[bVar0 /*96*/].f_92), 1, &iVar3, &iVar24, bVar0, 0, -2340845);
		__LIB_18__::func_404("agIDdm", &(Global_4980736.f_199634[bVar0 /*96*/].f_91), &iVar3, &iVar25, bVar0, 0, 0);
		__LIB_18__::func_404("dbgpsr", &(Global_4980736.f_199634[bVar0 /*96*/].f_94), &iVar3, &iVar26, bVar0, 0, -2340845);
		__LIB_18__::func_404("dbhov", &(Global_4980736.f_199634[bVar0 /*96*/].f_95), &iVar3, &iVar27, bVar0, -1, -2340845);
		bVar0++;
	}
}

void func_252(int iParam0)//Position - 0x21C448
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char[] cVar3[8];
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
	var* uVar20[5];
	var* uVar21[5];
	var uVar22[5];
	var* uVar23[5];
	var* uVar24[5];
	var uVar25[5];
	var* uVar26[5];
	var* uVar27[5];
	var* uVar28[5];
	var* uVar29[5];
	var* uVar30[5];
	var* uVar31[5];
	var uVar32[5];
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "mocap") == 0)
	{
		return;
	}
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "mocap");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "name");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits2");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits3");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "timer");
	iVar13 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "rng");
	iVar14 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccp");
	iVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccr");
	iVar16 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccs");
	iVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vhspz");
	iVar18 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vrbsm");
	bVar0 = false;
	while (bVar0 <= 4)
	{
		if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, bVar0) == 4)
		{
			StringCopy(&(Global_4718592.f_159089[bVar0 /*565*/]), DATAFILE::DATAARRAY_GET_STRING(iVar7, bVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4718592.f_159089[bVar0 /*565*/]), "", 64);
		}
		__LIB_18__::func_403("mocapPs", &(Global_4718592.f_159089[bVar0 /*565*/].f_20), &iVar4, &iVar5, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_403("mocapRt", &(Global_4718592.f_159089[bVar0 /*565*/].f_23), &iVar4, &iVar6, bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, bVar0) == 5)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_23 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar6, bVar0) };
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_23 = { 0f, 0f, 0f };
		}
		if (iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_16 = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_16 = 0;
		}
		if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_17 = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_17 = 0;
		}
		if (iVar10 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar10, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_18 = DATAFILE::DATAARRAY_GET_INT(iVar10, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_18 = 0;
		}
		__LIB_18__::func_404("bits4", &(Global_4718592.f_159089[bVar0 /*565*/].f_19), &iVar4, &iVar11, bVar0, 0, 0);
		if (iVar12 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar12, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_88 = DATAFILE::DATAARRAY_GET_INT(iVar12, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_88 = 0;
		}
		if (iVar13 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar13, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_89 = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_89 = 0;
		}
		__LIB_18__::func_404("csmpir", &(Global_4718592.f_159089[bVar0 /*565*/].f_90), &iVar4, &iVar19, bVar0, 5000, 5000);
		if (iVar14 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar14, bVar0) == 5)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_81 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar14, bVar0) };
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_81 = { 0f, 0f, 0f };
		}
		if (iVar15 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar15, bVar0) == 3)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_87 = DATAFILE::DATAARRAY_GET_FLOAT(iVar15, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_87 = 0f;
		}
		if (iVar16 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar16, bVar0) == 5)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_84 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar16, bVar0) };
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_84 = { 0f, 0f, 0f };
		}
		if (iVar17 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar17, bVar0) == 3)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_91 = DATAFILE::DATAARRAY_GET_FLOAT(iVar17, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_91 = 6f;
		}
		if (iVar18 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar18, bVar0) == 2)
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_92 = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar0);
		}
		else
		{
			Global_4718592.f_159089[bVar0 /*565*/].f_92 = 0;
		}
		StringCopy(&cVar3, "pstr", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&cVar3, bVar0, 8);
		}
		uVar20[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&cVar3, bVar0, 8);
		}
		uVar21[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&cVar3, bVar0, 8);
		}
		uVar23[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&cVar3, bVar0, 8);
		}
		uVar24[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar26[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar27[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar28[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar29[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		StringCopy(&cVar3, "pedEW", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar30[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		if (uVar29[bVar0] != 0 || uVar30[bVar0] != 0)
		{
			bVar2 = false;
			while (bVar2 <= 3)
			{
				__LIB_18__::func_538(&(Global_4718592.f_159089[bVar0 /*565*/].f_490[bVar2 /*4*/]), &(uVar29[bVar0]), bVar2);
				bVar2++;
			}
			bVar2 = false;
			while (bVar2 <= 0)
			{
				__LIB_18__::func_624(&(Global_4718592.f_159089[bVar0 /*565*/].f_507[bVar2 /*5*/]), &(uVar30[bVar0]), bVar2);
				bVar2++;
			}
		}
		else
		{
			__LIB_18__::func_10(&(Global_4718592.f_159089[bVar0 /*565*/]), &iVar4, bVar0);
		}
		StringCopy(&cVar3, "plrInf", 8);
		StringIntConCat(&cVar3, bVar0, 8);
		uVar31[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &cVar3);
		bVar2 = false;
		while (bVar2 <= 3)
		{
			iVar35 = DATAFILE::DATAARRAY_GET_DICT(uVar31[bVar0], bVar2);
			__LIB_18__::func_9(iVar35, &(Global_4718592.f_159089[bVar0 /*565*/].f_95[bVar2 /*13*/]));
			bVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar20[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar20[bVar0], iVar1) == 5)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_26[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar20[bVar0], iVar1) };
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_26[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar21[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar21[bVar0], iVar1) == 5)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_39[iVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar21[bVar0], iVar1) };
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_39[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar23[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar23[bVar0], iVar1) == 3)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_66[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar23[bVar0], iVar1);
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_66[iVar1] = 0f;
			}
			if (uVar24[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar24[bVar0], iVar1) == 3)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_71[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar24[bVar0], iVar1);
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_71[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar26[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar26[bVar0], iVar1) == 2)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar26[bVar0], iVar1);
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/].f_1 = -1;
			}
			if (uVar27[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar27[bVar0], iVar1) == 2)
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/] = DATAFILE::DATAARRAY_GET_INT(uVar27[bVar0], iVar1);
			}
			else
			{
				Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/] = -1;
			}
			if (uVar28[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar28[bVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/].f_2), DATAFILE::DATAARRAY_GET_STRING(uVar28[bVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_4718592.f_159089[bVar0 /*565*/].f_148[iVar1 /*10*/].f_2), "", 32);
			}
			iVar1++;
		}
		bVar2 = false;
		while (bVar2 <= 4)
		{
			StringCopy(&(Global_4718592.f_159089[bVar0 /*565*/].f_449[bVar2 /*8*/]), __LIB_18__::func_412("csehmnt", &iVar4, &(uVar32[bVar0]), bVar2, "", ""), 32);
			bVar2++;
		}
		__LIB_18__::func_404("csmmm", &(Global_4718592.f_159089[bVar0 /*565*/].f_93), &iVar4, &iVar33, bVar0, 0, 0);
		__LIB_18__::func_623(iVar4, &(Global_4718592.f_159089[bVar0 /*565*/].f_513), bVar0);
		iVar36 = 0;
		__LIB_18__::func_404("mcaer", &iVar36, &iVar4, &iVar34, bVar0, 0, -2340845);
		Global_4718592.f_159089[bVar0 /*565*/].f_52 = iVar36;
		bVar37 = false;
		bVar37 = false;
		while (bVar37 <= 3)
		{
			StringCopy(&Var38, "mcaep", 16);
			StringIntConCat(&Var38, bVar0, 16);
			StringConCat(&Var38, "_", 16);
			StringIntConCat(&Var38, bVar37, 16);
			__LIB_18__::func_403(&Var38, &(Global_4718592.f_159089[bVar0 /*565*/].f_53[bVar37 /*3*/]), &iVar4, &(uVar22[bVar0]), bVar37, __LIB_3__::func_554(), __LIB_3__::func_554());
			StringCopy(&Var38, "mcaeh", 16);
			StringIntConCat(&Var38, bVar0, 16);
			StringConCat(&Var38, "_", 16);
			StringIntConCat(&Var38, bVar37, 16);
			__LIB_18__::func_402(&Var38, &(Global_4718592.f_159089[bVar0 /*565*/].f_76[bVar37]), &iVar4, &(uVar25[bVar0]), bVar37, 0f, 0f);
			bVar37++;
		}
		bVar0++;
	}
}

void func_253(int iParam0)//Position - 0x21D2CA
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
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
	var* uVar15[10];
	var* uVar16[10];
	var* uVar17[10];
	var* uVar18[10];
	var* uVar19[10];
	var* uVar20[10];
	var* uVar21[10];
	var* uVar22[10];
	var* uVar23[10];
	var* uVar24[10];
	var* uVar25[10];
	var* uVar26[10];
	var* uVar27[10];
	var* uVar28[10];
	var* uVar29[10];
	var* uVar30[10];
	var* uVar31[10];
	var* uVar32[10];
	var* uVar33[10];
	var uVar34[10];
	var* uVar35[10];
	var uVar36[10];
	var* uVar37[10];
	var* uVar38[10];
	var* uVar39[10];
	var* uVar40[10];
	var* uVar41[10];
	var* uVar42[10];
	var* uVar43[10];
	var* uVar44[10];
	var* uVar45[10];
	var* uVar46[10];
	var* uVar47[10];
	var* uVar48[10];
	var* uVar49[10];
	var* uVar50[10];
	var uVar51[10];
	var uVar52[10];
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	var* uVar70[10];
	var* uVar71[10];
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	var* uVar76[10];
	var* uVar77[10];
	var* uVar78;
	int iVar79;
	int iVar80;
	bool bVar81;
	struct<2> Var82;
	int iVar83;
	if (DATAFILE::DATADICT_GET_DICT(iParam0, "cuts") == 0)
	{
		return;
	}
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "cuts");
	iVar5 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "name");
	iVar6 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits");
	iVar7 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits2");
	iVar8 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "bits3");
	iVar9 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "shot");
	iVar10 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "anim");
	iVar11 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "midp");
	iVar12 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "rng");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "train");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "trahl");
	iVar58 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "traou");
	iVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "trapo");
	iVar60 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccp");
	iVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccr");
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ccs");
	iVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "clms");
	iVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "clsp");
	iVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "clzs");
	iVar66 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "clze");
	iVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "cfbe");
	iVar68 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "citg");
	iVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "vhspd");
	iVar72 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "sset");
	iVar73 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ssvc");
	iVar74 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "ssfh");
	bVar0 = false;
	while (bVar0 <= 9)
	{
		if (iVar5 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar5, bVar0) == 4)
		{
			StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/]), DATAFILE::DATAARRAY_GET_STRING(iVar5, bVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/]), "", 16);
		}
		if (iVar6 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar6, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_4 = DATAFILE::DATAARRAY_GET_INT(iVar6, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_4 = 0;
		}
		if (iVar7 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar7, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_5 = DATAFILE::DATAARRAY_GET_INT(iVar7, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_5 = 0;
		}
		if (iVar8 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar8, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_6 = DATAFILE::DATAARRAY_GET_INT(iVar8, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_6 = 0;
		}
		__LIB_18__::func_404("bits4", &(Global_4718592.f_142828[bVar0 /*1626*/].f_7), &iVar4, &iVar13, bVar0, 0, 0);
		Global_4718592.f_142828[bVar0 /*1626*/].f_1625 = __LIB_18__::func_608("cselet", &iVar4, &iVar14, bVar0, 0, 0);
		if (Global_4718592.f_142828[bVar0 /*1626*/].f_5 == Global_4718592.f_142828[bVar0 /*1626*/].f_4)
		{
			uVar78 = DATAFILE::DATADICT_GET_DICT(iParam0, "gen");
			if (DATAFILE::DATADICT_GET_TYPE(uVar78, "menubs19") == 0)
			{
				iVar79 = 0;
				iVar79 = 9;
				while (iVar79 <= 31)
				{
					MISC::CLEAR_BIT(&(Global_4718592.f_142828[bVar0 /*1626*/].f_5), iVar79);
					iVar79++;
				}
			}
		}
		if (iVar9 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar9, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_111 = DATAFILE::DATAARRAY_GET_INT(iVar9, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_111 = 0;
		}
		if (iVar10 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar10, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_110 = DATAFILE::DATAARRAY_GET_INT(iVar10, bVar0);
			if (Global_4718592.f_142828[bVar0 /*1626*/].f_110 >= 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_110 = 0;
			}
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_110 = 0;
		}
		if (iVar11 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar11, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_112 = DATAFILE::DATAARRAY_GET_INT(iVar11, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_112 = 0;
		}
		if (iVar12 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar12, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_887 = DATAFILE::DATAARRAY_GET_INT(iVar12, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_887 = 0;
		}
		if (iVar60 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar60, bVar0) == 5)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_880 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar60, bVar0) };
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_880 = { 0f, 0f, 0f };
		}
		if (iVar61 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar61, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_883 = DATAFILE::DATAARRAY_GET_FLOAT(iVar61, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_883 = 0f;
		}
		if (iVar62 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar62, bVar0) == 5)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_884 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar62, bVar0) };
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_884 = { 0f, 0f, 0f };
		}
		__LIB_18__::func_404("synshts", &(Global_4718592.f_142828[bVar0 /*1626*/].f_1564.f_5), &iVar4, &iVar75, bVar0, 0, 0);
		if (iVar72 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar72, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564 = DATAFILE::DATAARRAY_GET_INT(iVar72, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564 = 0;
		}
		if (iVar73 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar73, bVar0) == 5)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564.f_1 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar73, bVar0) };
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564.f_1 = { 0f, 0f, 0f };
		}
		if (iVar74 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar74, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564.f_4 = DATAFILE::DATAARRAY_GET_FLOAT(iVar74, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1564.f_4 = 0f;
		}
		if (iVar56 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar56, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_588 = DATAFILE::DATAARRAY_GET_INT(iVar56, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_588 = 0;
		}
		if (iVar57 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar57, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_590 = DATAFILE::DATAARRAY_GET_INT(iVar57, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_590 = 0;
		}
		if (iVar58 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar58, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_589 = DATAFILE::DATAARRAY_GET_INT(iVar58, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_589 = 0;
		}
		if (iVar59 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar59, bVar0) == 5)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_591 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar59, bVar0) };
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_591 = { 0f, 0f, 0f };
		}
		if (iVar63 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar63, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1551 = DATAFILE::DATAARRAY_GET_INT(iVar63, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1551 = -1;
		}
		if (iVar67 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar67, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1570 = DATAFILE::DATAARRAY_GET_INT(iVar67, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1570 = 0;
		}
		if (iVar68 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar68, bVar0) == 2)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1571 = DATAFILE::DATAARRAY_GET_INT(iVar68, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1571 = 3000;
		}
		if (iVar64 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar64, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1552 = DATAFILE::DATAARRAY_GET_FLOAT(iVar64, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1552 = 1f;
		}
		if (iVar65 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar65, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1553 = DATAFILE::DATAARRAY_GET_FLOAT(iVar65, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1553 = 0f;
		}
		if (iVar66 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar66, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1554 = DATAFILE::DATAARRAY_GET_FLOAT(iVar66, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_1554 = 0f;
		}
		if (iVar69 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar69, bVar0) == 3)
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_889 = DATAFILE::DATAARRAY_GET_FLOAT(iVar69, bVar0);
		}
		else
		{
			Global_4718592.f_142828[bVar0 /*1626*/].f_889 = 6f;
		}
		__LIB_18__::func_404("csspir", &(Global_4718592.f_142828[bVar0 /*1626*/].f_888), &iVar4, &iVar54, bVar0, 5000, 5000);
		iVar80 = 0;
		__LIB_18__::func_404("scaer", &iVar80, &iVar4, &iVar55, bVar0, 0, -2340845);
		Global_4718592.f_142828[bVar0 /*1626*/].f_34 = iVar80;
		bVar81 = false;
		bVar81 = false;
		while (bVar81 <= 3)
		{
			StringCopy(&Var82, "scaep", 16);
			StringIntConCat(&Var82, bVar0, 16);
			StringConCat(&Var82, "_", 16);
			StringIntConCat(&Var82, bVar81, 16);
			__LIB_18__::func_403(&Var82, &(Global_4718592.f_142828[bVar0 /*1626*/].f_35[bVar81 /*3*/]), &iVar4, &(uVar34[bVar0]), bVar81, __LIB_3__::func_554(), __LIB_3__::func_554());
			StringCopy(&Var82, "scaeh", 16);
			StringIntConCat(&Var82, bVar0, 16);
			StringConCat(&Var82, "_", 16);
			StringIntConCat(&Var82, bVar81, 16);
			__LIB_18__::func_402(&Var82, &(Global_4718592.f_142828[bVar0 /*1626*/].f_58[bVar81]), &iVar4, &(uVar36[bVar0]), bVar81, 0f, 0f);
			bVar81++;
		}
		iVar83 = 0;
		__LIB_18__::func_404("sxtecs", &iVar83, &iVar4, &iVar53, bVar0, 0, -2340845);
		Global_4718592.f_142828[bVar0 /*1626*/].f_1572 = iVar83;
		StringCopy(&sVar3, "int", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar15[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "rmin", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar16[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "rmax", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar17[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ctp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar18[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "sps", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar19[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "eps", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar20[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "srt", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar21[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ert", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar22[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "sfv", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar23[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "efv", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar24[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ati", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar38[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ato", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar39[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "atr", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar40[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ala", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar41[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "csp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar42[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "csr", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar43[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "cwtp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar46[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "ctpr", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar47[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "cdtp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar48[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "cdsp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar49[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "cssbs", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar27[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "cseet", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar30[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "skt", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar28[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "skm", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar29[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "fmxc", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar50[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "eind", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar25[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "etyp", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar26[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "pstr", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&sVar3, bVar0, 8);
		}
		uVar32[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "pend", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&sVar3, bVar0, 8);
		}
		uVar33[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "strh", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&sVar3, bVar0, 8);
		}
		uVar31[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "endh", 8);
		if (bVar0 > 0)
		{
			StringIntConCat(&sVar3, bVar0, 8);
		}
		uVar35[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "svwi", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar37[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "camnm", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar44[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "locnm", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar45[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "plrSW", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar76[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "plrEW", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar77[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "spcm", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar70[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		StringCopy(&sVar3, "paos", 8);
		StringIntConCat(&sVar3, bVar0, 8);
		uVar71[bVar0] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
		__LIB_18__::func_625(iVar4, &(Global_4718592.f_142828[bVar0 /*1626*/]), bVar0);
		bVar1 = false;
		while (bVar1 <= 3)
		{
			if (uVar32[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar32[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_8[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar32[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_8[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar33[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar33[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_21[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar33[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_21[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar31[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar31[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_48[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar31[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_48[bVar1] = 0f;
			}
			if (uVar35[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar35[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_53[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar35[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_53[bVar1] = 0f;
			}
			if (uVar37[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar37[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_63[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar37[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_63[bVar1] = -1;
			}
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 <= 19)
		{
			if (uVar15[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar15[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_113[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar15[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_113[bVar1] = 0;
			}
			if (uVar16[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar16[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_68[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar16[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_68[bVar1] = 0f;
			}
			if (uVar17[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar17[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_89[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar17[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_89[bVar1] = 0f;
			}
			if (uVar18[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar18[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_134[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar18[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_134[bVar1] = 0;
			}
			if (uVar19[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar19[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_155[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar19[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_155[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar20[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar20[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_216[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar20[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_216[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar21[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar21[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_277[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar21[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_277[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar22[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar22[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_338[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar22[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_338[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar23[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar23[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_399[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar23[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_399[bVar1] = 0f;
			}
			if (uVar24[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar24[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_420[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar24[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_420[bVar1] = 0f;
			}
			if (uVar27[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar27[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_441[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar27[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_441[bVar1] = 0;
			}
			if (uVar30[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar30[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_525[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar30[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_525[bVar1] = 500;
			}
			if (uVar28[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar28[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_483[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar28[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_483[bVar1] = 0;
			}
			if (uVar29[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar29[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_504[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar29[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_504[bVar1] = 0f;
			}
			if (uVar38[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar38[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_676[bVar1] = DATAFILE::DATAARRAY_GET_INT(uVar38[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_676[bVar1] = 0;
			}
			if (uVar39[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar39[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_697[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar39[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_697[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar40[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar40[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_758[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar40[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_758[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar41[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar41[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_819[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar41[bVar0], bVar1) };
				Global_4718592.f_163014[bVar1] = Global_4718592.f_142828[bVar0 /*1626*/].f_819[bVar1 /*3*/];
				Global_4718592.f_163035[bVar1] = Global_4718592.f_142828[bVar0 /*1626*/].f_819[bVar1 /*3*/].f_1;
				Global_4718592.f_163056[bVar1] = Global_4718592.f_142828[bVar0 /*1626*/].f_819[bVar1 /*3*/].f_2;
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_819[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar42[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar42[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_594[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar42[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_594[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar43[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar43[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_655[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar43[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_655[bVar1] = 0f;
			}
			if (uVar46[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar46[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1387[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar46[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1387[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar47[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar47[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1448[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar47[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1448[bVar1] = 0f;
			}
			if (uVar48[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar48[bVar0], bVar1) == 5)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1469[bVar1 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar48[bVar0], bVar1) };
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1469[bVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar49[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar49[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1530[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar49[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1530[bVar1] = 0f;
			}
			if (uVar44[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar44[bVar0], bVar1) == 4)
			{
				StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1225[bVar1 /*4*/]), DATAFILE::DATAARRAY_GET_STRING(uVar44[bVar0], bVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1225[bVar1 /*4*/]), "", 16);
			}
			if (uVar45[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar45[bVar0], bVar1) == 4)
			{
				StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1306[bVar1 /*4*/]), DATAFILE::DATAARRAY_GET_STRING(uVar45[bVar0], bVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1306[bVar1 /*4*/]), "", 16);
			}
			if (uVar50[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar50[bVar0], bVar1) == 3)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_546[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar50[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_546[bVar1] = 0f;
			}
			StringCopy(&sVar3, "zsct", 8);
			StringIntConCat(&sVar3, bVar0, 8);
			__LIB_18__::func_404(&sVar3, &(Global_4718592.f_142828[bVar0 /*1626*/].f_462[bVar1]), &iVar4, &(uVar52[bVar0]), bVar1, -1, -2340845);
			StringCopy(&sVar3, "drnc", 8);
			StringIntConCat(&sVar3, bVar0, 8);
			Global_4718592.f_142828[bVar0 /*1626*/].f_567[bVar1] = __LIB_18__::func_608(&sVar3, &iVar4, &(uVar51[bVar0]), bVar1, 0, 0);
			bVar1++;
		}
		bVar1 = false;
		while (bVar1 <= 29)
		{
			if (uVar25[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar25[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_890[bVar1 /*10*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar25[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_890[bVar1 /*10*/].f_1 = -1;
			}
			if (uVar26[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar26[bVar0], bVar1) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_890[bVar1 /*10*/] = DATAFILE::DATAARRAY_GET_INT(uVar26[bVar0], bVar1);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_890[bVar1 /*10*/] = -1;
			}
			bVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar70[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar70[bVar0], iVar2) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1555[iVar2 /*2*/] = DATAFILE::DATAARRAY_GET_INT(uVar70[bVar0], iVar2);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1555[iVar2 /*2*/] = 0;
			}
			if (uVar71[bVar0] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar71[bVar0], iVar2) == 2)
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1555[iVar2 /*2*/].f_1 = DATAFILE::DATAARRAY_GET_INT(uVar71[bVar0], iVar2);
			}
			else
			{
				Global_4718592.f_142828[bVar0 /*1626*/].f_1555[iVar2 /*2*/].f_1 = -1;
			}
			__LIB_18__::func_538(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1191[iVar2 /*4*/]), &(uVar76[bVar0]), iVar2);
			__LIB_18__::func_538(&(Global_4718592.f_142828[bVar0 /*1626*/].f_1208[iVar2 /*4*/]), &(uVar77[bVar0]), iVar2);
			iVar2++;
		}
		bVar0++;
	}
}

void func_254(int iParam0)//Position - 0x21F9AC
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<199> Var5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	int iVar11;
	struct<3> Var12;
	int iVar13;
	struct<2> Var14;
	iVar1 = DATAFILE::DATADICT_GET_DICT(*iParam0, "interactables");
	__LIB_18__::func_414("intNum", &(Global_4980736.f_20329), &iVar1, 0, -2340845);
	bVar2 = false;
	while (bVar2 < 2)
	{
		__LIB_18__::func_404("intCnt_Typ", &(Global_4980736.f_34605[bVar2 /*2*/]), &iVar1, &iVar3, bVar2, 0, -2340845);
		__LIB_18__::func_404("intCnt_Str", &(Global_4980736.f_34605[bVar2 /*2*/].f_1), &iVar1, &iVar4, bVar2, -1, -2340845);
		bVar2++;
	}
	Var5.f_2.f_20 = 4;
	Var5.f_2.f_25 = 4;
	Var5.f_2.f_30 = 4;
	Var5.f_2.f_35 = 4;
	Var5.f_54 = 5;
	Var5.f_69 = 4;
	Var5.f_83.f_4 = 2;
	Var5.f_108 = 3;
	Var5.f_113 = 20;
	Var5.f_135 = 20;
	Var5.f_157 = 12;
	Var5.f_157.f_13 = 12;
	Var5.f_185 = 1;
	Var5.f_187 = 3;
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_20329 - 1))
	{
		iVar6 = 0;
		__LIB_18__::func_404("int_mdl_", &iVar6, &iVar1, &Var5, bVar0, 0, -2340845);
		Global_4980736.f_20330[bVar0 /*234*/] = iVar6;
		__LIB_18__::func_404("int_ity_", &(Global_4980736.f_20330[bVar0 /*234*/].f_1), &iVar1, &(Var5.f_1), bVar0, 0, -2340845);
		__LIB_18__::func_666(&(Var5.f_2), &iVar1, &(Global_4980736.f_20330[bVar0 /*234*/].f_2), bVar0, 2);
		__LIB_18__::func_403("int_pos_", &(Global_4980736.f_20330[bVar0 /*234*/].f_39), &iVar1, &(Var5.f_42), bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_403("int_rot_", &(Global_4980736.f_20330[bVar0 /*234*/].f_42), &iVar1, &(Var5.f_43), bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_402("int_hdn_", &(Global_4980736.f_20330[bVar0 /*234*/].f_45), &iVar1, &(Var5.f_44), bVar0, 0f, -904994889);
		__LIB_18__::func_404("int_BS_", &(Global_4980736.f_20330[bVar0 /*234*/].f_46), &iVar1, &(Var5.f_45), bVar0, 0, -2340845);
		__LIB_18__::func_402("int_idst_", &(Global_4980736.f_20330[bVar0 /*234*/].f_47), &iVar1, &(Var5.f_46), bVar0, 0.8f, -904994889);
		__LIB_18__::func_404("int_rpveh_", &(Global_4980736.f_20330[bVar0 /*234*/].f_48), &iVar1, &(Var5.f_47), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_hlth_", &(Global_4980736.f_20330[bVar0 /*234*/].f_56), &iVar1, &(Var5.f_48), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_invBS_", &(Global_4980736.f_20330[bVar0 /*234*/].f_58), &iVar1, &(Var5.f_49), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_invT_", &(Global_4980736.f_20330[bVar0 /*234*/].f_57), &iVar1, &(Var5.f_50), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_rstRBS_", &(Global_4980736.f_20330[bVar0 /*234*/].f_59), &iVar1, &(Var5.f_51), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_rstRBS_T_", &(Global_4980736.f_20330[bVar0 /*234*/].f_60), &iVar1, &(Var5.f_52), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_inpr_", &(Global_4980736.f_20330[bVar0 /*234*/].f_78), &iVar1, &(Var5.f_53), bVar0, -1, -2340845);
		iVar7 = 0;
		while (iVar7 <= 4)
		{
			StringCopy(&Var8, "int_prq_rq", 24);
			StringIntConCat(&Var8, iVar7, 24);
			StringConCat(&Var8, "_", 24);
			__LIB_18__::func_404(&Var8, &(Global_4980736.f_20330[bVar0 /*234*/].f_50[iVar7]), &iVar1, &(Var5.f_54[iVar7]), bVar0, -1, -2340845);
			iVar7++;
		}
		__LIB_18__::func_404("int_prq_rqc_", &(Global_4980736.f_20330[bVar0 /*234*/].f_49), &iVar1, &(Var5.f_60), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_objt_st", &(Global_4980736.f_20330[bVar0 /*234*/].f_79), &iVar1, &(Var5.f_61), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_objt_wft", &(Global_4980736.f_20330[bVar0 /*234*/].f_80), &iVar1, &(Var5.f_62), bVar0, -1, -2340845);
		__LIB_18__::func_402("int_objt_ds", &(Global_4980736.f_20330[bVar0 /*234*/].f_81), &iVar1, &(Var5.f_63), bVar0, 10f, -904994889);
		__LIB_18__::func_404("int_ass_st", &(Global_4980736.f_20330[bVar0 /*234*/].f_82), &iVar1, &(Var5.f_64), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_ass_sr", &(Global_4980736.f_20330[bVar0 /*234*/].f_83), &iVar1, &(Var5.f_65), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_ass_sl", &(Global_4980736.f_20330[bVar0 /*234*/].f_84), &iVar1, &(Var5.f_66), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_ass_ct", &(Global_4980736.f_20330[bVar0 /*234*/].f_85), &iVar1, &(Var5.f_67), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_ass_cr", &(Global_4980736.f_20330[bVar0 /*234*/].f_86), &iVar1, &(Var5.f_68), bVar0, -1, -2340845);
		iVar9 = 0;
		while (iVar9 <= 3)
		{
			StringCopy(&Var10, "int_ass_bi", 24);
			StringIntConCat(&Var10, iVar9, 24);
			__LIB_18__::func_404(&Var10, &(Global_4980736.f_20330[bVar0 /*234*/].f_87[iVar9]), &iVar1, &(Var5.f_69[iVar9]), bVar0, 0, -2340845);
			iVar9++;
		}
		__LIB_18__::func_404("int_ass_reqp", &(Global_4980736.f_20330[bVar0 /*234*/].f_92), &iVar1, &(Var5.f_74), bVar0, 0, -2340845);
		__LIB_18__::func_606(&iVar1, &(Var5.f_75), &(Global_4980736.f_20330[bVar0 /*234*/].f_96), bVar0);
		__LIB_18__::func_404("int_atcheT", &(Global_4980736.f_20330[bVar0 /*234*/].f_93), &iVar1, &(Var5.f_80), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_atcheIn", &(Global_4980736.f_20330[bVar0 /*234*/].f_94), &iVar1, &(Var5.f_81), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_atcheRS", &(Global_4980736.f_20330[bVar0 /*234*/].f_95), &iVar1, &(Var5.f_82), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_BS_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_3), &iVar1, &(Var5.f_83), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_stD_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61), &iVar1, &(Var5.f_83.f_1), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_prq_cm_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_1), &iVar1, &(Var5.f_83.f_2), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_prq_cl_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_2), &iVar1, &(Var5.f_83.f_3), bVar0, -1, -2340845);
		__LIB_18__::func_401("int_prq_liBS_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_6), 2, &iVar1, &(Var5.f_83.f_4), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_CslT", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_4), &iVar1, &(Var5.f_83.f_7), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_CslTR", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_5), &iVar1, &(Var5.f_83.f_8), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_uD_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_11), &iVar1, &(Var5.f_83.f_11), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_lD_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_10), &iVar1, &(Var5.f_83.f_10), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_sDC_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_12), &iVar1, &(Var5.f_83.f_12), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_int_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_9), &iVar1, &(Var5.f_83.f_9), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_cG_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_13), &iVar1, &(Var5.f_83.f_13), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cn_ao_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_14), &iVar1, &(Var5.f_83.f_14), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_itg_", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_15), &iVar1, &(Var5.f_83.f_15), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cn_pfc", &(Global_4980736.f_20330[bVar0 /*234*/].f_61.f_16), &iVar1, &(Var5.f_197), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_iw_an_", &(Global_4980736.f_20330[bVar0 /*234*/].f_105), &iVar1, &(Var5.f_99), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_iw_aas_", &(Global_4980736.f_20330[bVar0 /*234*/].f_106), &iVar1, &(Var5.f_100), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_iw_oft_", &(Global_4980736.f_20330[bVar0 /*234*/].f_221), &iVar1, &(Var5.f_101), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cp_pi_", &(Global_4980736.f_20330[bVar0 /*234*/].f_107), &iVar1, &(Var5.f_102), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_fm_tf_", &(Global_4980736.f_20330[bVar0 /*234*/].f_108), &iVar1, &(Var5.f_103), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_fm_pn_", &(Global_4980736.f_20330[bVar0 /*234*/].f_110), &iVar1, &(Var5.f_104), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_fm_ph_", &(Global_4980736.f_20330[bVar0 /*234*/].f_109), &iVar1, &(Var5.f_105), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_msl_SA_pr", &(Global_4980736.f_20330[bVar0 /*234*/].f_111), &iVar1, &(Var5.f_106), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_msl_SB_pr", &(Global_4980736.f_20330[bVar0 /*234*/].f_112), &iVar1, &(Var5.f_107), bVar0, -1, -2340845);
		iVar11 = 0;
		iVar11 = 0;
		while (iVar11 <= 2)
		{
			StringCopy(&Var12, "int_msl_GF", 24);
			StringIntConCat(&Var12, iVar11, 24);
			__LIB_18__::func_402(&Var12, &(Global_4980736.f_20330[bVar0 /*234*/].f_113[iVar11]), &iVar1, &(Var5.f_108[iVar11]), bVar0, 0f, -904994889);
			iVar11++;
		}
		__LIB_18__::func_404("int_sgr", &(Global_4980736.f_20330[bVar0 /*234*/].f_118), &iVar1, &(Var5.f_112), bVar0, 0, -2340845);
		__LIB_18__::func_401("int_ssgr", &(Global_4980736.f_20330[bVar0 /*234*/].f_119), 20, &iVar1, &(Var5.f_113), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_sgrd", &(Global_4980736.f_20330[bVar0 /*234*/].f_140), &iVar1, &(Var5.f_134), bVar0, 0, -2340845);
		__LIB_18__::func_401("int_ssgrd", &(Global_4980736.f_20330[bVar0 /*234*/].f_141), 20, &iVar1, &(Var5.f_113), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_sgrA", &(Global_4980736.f_20330[bVar0 /*234*/].f_162), &iVar1, &(Var5.f_156), bVar0, 0, -2340845);
		__LIB_18__::func_667(&(Var5.f_157), &iVar1, &(Global_4980736.f_20330[bVar0 /*234*/].f_163), bVar0, 5);
		iVar13 = 0;
		while (iVar13 <= 2)
		{
			iVar6 = 0;
			StringCopy(&Var14, "insbt", 16);
			StringConCat(&Var14, "f", 16);
			StringIntConCat(&Var14, iVar13, 16);
			__LIB_18__::func_404(&Var14, &iVar6, &iVar1, &(Var5.f_187[iVar13]), bVar0, 0, -2340845);
			Global_4980736.f_20330[bVar0 /*234*/].f_215[iVar13] = iVar6;
			iVar13++;
		}
		__LIB_18__::func_401("alvint", &(Global_4980736.f_20330[bVar0 /*234*/].f_219), 1, &iVar1, &(Var5.f_185), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_cid", &(Global_4980736.f_20330[bVar0 /*234*/].f_222), &iVar1, &(Var5.f_191), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_cct", &(Global_4980736.f_20330[bVar0 /*234*/].f_223), &iVar1, &(Var5.f_192), bVar0, 0, -2340845);
		__LIB_18__::func_404("int_intr", &(Global_4980736.f_20330[bVar0 /*234*/].f_224), &iVar1, &(Var5.f_193), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_rmKy", &(Global_4980736.f_20330[bVar0 /*234*/].f_225), &iVar1, &(Var5.f_194), bVar0, -1, -2340845);
		__LIB_18__::func_404("int_obmk", &(Global_4980736.f_20330[bVar0 /*234*/].f_227), &iVar1, &(Var5.f_195), bVar0, -1, -2340845);
		__LIB_18__::func_404("agIDii", &(Global_4980736.f_20330[bVar0 /*234*/].f_226), &iVar1, &(Var5.f_196), bVar0, 0, 0);
		__LIB_18__::func_404("intAD_lwa", &(Global_4980736.f_20330[bVar0 /*234*/].f_228), &iVar1, &(Var5.f_198), bVar0, -1, -2340845);
		__LIB_18__::func_404("intAD_lwas", &(Global_4980736.f_20330[bVar0 /*234*/].f_228.f_1), &iVar1, &(Var5.f_198.f_1), bVar0, -1, -2340845);
		__LIB_18__::func_404("intAD_poc", &(Global_4980736.f_20330[bVar0 /*234*/].f_228.f_2), &iVar1, &(Var5.f_198.f_2), bVar0, -1, -2340845);
		__LIB_18__::func_404("intAD_pocs", &(Global_4980736.f_20330[bVar0 /*234*/].f_228.f_3), &iVar1, &(Var5.f_198.f_3), bVar0, -1, -2340845);
		__LIB_18__::func_404("intAD_pod", &(Global_4980736.f_20330[bVar0 /*234*/].f_228.f_4), &iVar1, &(Var5.f_198.f_4), bVar0, -1, -2340845);
		__LIB_18__::func_404("intAD_pods", &(Global_4980736.f_20330[bVar0 /*234*/].f_228.f_5), &iVar1, &(Var5.f_198.f_5), bVar0, -1, -2340845);
		bVar0++;
	}
}

void func_255(int iParam0)//Position - 0x2205FF
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar3;
	struct<125> Var4;
	iVar3 = DATAFILE::DATADICT_GET_DICT(*iParam0, "fmmcTrain");
	__LIB_18__::func_414("trn_num", &(Global_4980736.f_93610), iParam0, 0, -2340845);
	Var4.f_4 = 15;
	Var4.f_20 = 17;
	Var4.f_49 = 20;
	Var4.f_70 = 20;
	Var4.f_94 = 5;
	Var4.f_100 = 5;
	Var4.f_106 = 5;
	Var4.f_112 = 5;
	Var4.f_118 = 5;
	Var4.f_124.f_20 = 4;
	Var4.f_124.f_25 = 4;
	Var4.f_124.f_30 = 4;
	Var4.f_124.f_35 = 4;
	bVar0 = false;
	while (bVar0 <= 2)
	{
		__LIB_18__::func_404("trn_cfg", &(Global_4980736.f_93611[bVar0 /*193*/]), &iVar3, &Var4, bVar0, 0, -2340845);
		__LIB_18__::func_403("trn_pos", &(Global_4980736.f_93611[bVar0 /*193*/].f_1), &iVar3, &(Var4.f_1), bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
		__LIB_18__::func_404("trn_smrBS", &(Global_4980736.f_93611[bVar0 /*193*/].f_9), &iVar3, &(Var4.f_2), bVar0, 0, -2340845);
		__LIB_18__::func_404("trn_smrTm", &(Global_4980736.f_93611[bVar0 /*193*/].f_8), &iVar3, &(Var4.f_3), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_wrpTm", &(Global_4980736.f_93611[bVar0 /*193*/].f_10), &iVar3, &(Var4.f_38), bVar0, -1, -2340845);
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			StringCopy(&Var2, "trn_wrpVc_", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_403(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_11[iVar1 /*3*/]), &iVar3, &(Var4.f_20[iVar1]), bVar0, 0f, 0f, 0f, 0f, 0f, 0f);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			StringCopy(&Var2, "trn_CrgEx", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_63[iVar1]), &iVar3, &(Var4.f_4[iVar1]), bVar0, 0, -2340845);
			iVar1++;
		}
		__LIB_18__::func_404("trn_BS", &(Global_4980736.f_93611[bVar0 /*193*/].f_5), &iVar3, &(Var4.f_39), bVar0, 0, -2340845);
		__LIB_18__::func_402("trn_crsSpd", &(Global_4980736.f_93611[bVar0 /*193*/].f_4), &iVar3, &(Var4.f_40), bVar0, 10f, -904994889);
		__LIB_18__::func_404("trn_Col", &(Global_4980736.f_93611[bVar0 /*193*/].f_6), &iVar3, &(Var4.f_41), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_2Col", &(Global_4980736.f_93611[bVar0 /*193*/].f_7), &iVar3, &(Var4.f_42), bVar0, 0, -2340845);
		__LIB_18__::func_404("trn_ass_st", &(Global_4980736.f_93611[bVar0 /*193*/].f_80), &iVar3, &(Var4.f_43), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_ass_sr", &(Global_4980736.f_93611[bVar0 /*193*/].f_81), &iVar3, &(Var4.f_44), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_ass_sl", &(Global_4980736.f_93611[bVar0 /*193*/].f_79), &iVar3, &(Var4.f_45), bVar0, 0, -2340845);
		__LIB_18__::func_404("trn_ass_ct", &(Global_4980736.f_93611[bVar0 /*193*/].f_82), &iVar3, &(Var4.f_46), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_ass_cr", &(Global_4980736.f_93611[bVar0 /*193*/].f_83), &iVar3, &(Var4.f_47), bVar0, -1, -2340845);
		__LIB_18__::func_404("trn_spwng", &(Global_4980736.f_93611[bVar0 /*193*/].f_84), &iVar3, &(Var4.f_48), bVar0, 0, -2340845);
		__LIB_18__::func_404("trn_spwng_msge", &(Global_4980736.f_93611[bVar0 /*193*/].f_106), &iVar3, &(Var4.f_91), bVar0, 0, -2340845);
		__LIB_18__::func_404("trn_spwng_adf", &(Global_4980736.f_93611[bVar0 /*193*/].f_128), &iVar3, &(Var4.f_92), bVar0, 0, -2340845);
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			StringCopy(&Var2, "trn_spwng_sb", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_85[iVar1]), &iVar3, &(Var4.f_49[iVar1]), bVar0, 0, -2340845);
			StringCopy(&Var2, "trn_spwng_msbge_", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_107[iVar1]), &iVar3, &(Var4.f_70[iVar1]), bVar0, 0, -2340845);
			iVar1++;
		}
		__LIB_18__::func_404("agIDtr", &(Global_4980736.f_93611[bVar0 /*193*/].f_129), &iVar3, &(Var4.f_93), bVar0, 0, 0);
		__LIB_18__::func_666(&(Var4.f_124), &iVar3, &(Global_4980736.f_93611[bVar0 /*193*/].f_156), bVar0, 9);
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			StringCopy(&Var2, "trn_l_z", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_130[iVar1 /*5*/]), &iVar3, &(Var4.f_94[iVar1]), bVar0, -1, -2340845);
			StringCopy(&Var2, "trn_l_b", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_130[iVar1 /*5*/].f_1), &iVar3, &(Var4.f_100[iVar1]), bVar0, 0, -2340845);
			StringCopy(&Var2, "trn_l_c", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_402(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_130[iVar1 /*5*/].f_2), &iVar3, &(Var4.f_106[iVar1]), bVar0, 10f, -904994889);
			StringCopy(&Var2, "trn_l_t", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_130[iVar1 /*5*/].f_3), &iVar3, &(Var4.f_112[iVar1]), bVar0, -1, -2340845);
			StringCopy(&Var2, "trn_l_r", 32);
			StringIntConCat(&Var2, iVar1, 32);
			__LIB_18__::func_404(&Var2, &(Global_4980736.f_93611[bVar0 /*193*/].f_130[iVar1 /*5*/].f_4), &iVar3, &(Var4.f_118[iVar1]), bVar0, -1, -2340845);
			iVar1++;
		}
		bVar0++;
	}
}

void func_256(int iParam0)//Position - 0x220BA3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	var* uVar5[4];
	var* uVar6[4];
	var* uVar7[4];
	var* uVar8[4];
	var* uVar9[4];
	var* uVar10[4];
	var* uVar11[4];
	var* uVar12[4];
	var* uVar13[4];
	var* uVar14[4];
	var* uVar15[4];
	var* uVar16[4];
	var* uVar17[4];
	var* uVar18[4];
	var* uVar19[4];
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
	var* uVar30;
	var* uVar31;
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
	var uVar58[20];
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	struct<36> Var87;
	struct<14> Var88;
	iVar4 = DATAFILE::DATADICT_GET_DICT(iParam0, "goto");
	Global_4980736[0] = DATAFILE::DATADICT_GET_INT(iVar4, "no");
	Global_4718592.f_6 = DATAFILE::DATADICT_GET_INT(iVar4, "atrig");
	iVar1 = 0;
	while (iVar1 <= (Global_4718592.f_593 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&sVar3, "loc", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar5[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "sz", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar6[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "rl", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar7[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "pri", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar8[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "wtm", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar9[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "gps", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar12[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "smc", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar13[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "lbs", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar14[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "rcptp", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar16[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "cmp", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar10[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "air", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar11[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "veh", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar17[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "dir", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar15[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "jtop", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar18[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			StringCopy(&sVar3, "jtof", 8);
			StringIntConCat(&sVar3, iVar1, 8);
			uVar19[iVar1] = DATAFILE::DATADICT_GET_ARRAY(iVar4, &sVar3);
			bVar0 = false;
			while (bVar0 <= (Global_4980736[0] - 1))
			{
				Global_4980736.f_5[bVar0 /*273*/].f_1[0 /*3*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar5[iVar1], bVar0) };
				Global_4980736.f_5[bVar0 /*273*/].f_14[0] = DATAFILE::DATAARRAY_GET_FLOAT(uVar6[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_102[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar7[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_107[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar8[iVar1], bVar0);
				if (Global_4980736.f_5[bVar0 /*273*/].f_107[iVar1] == -1)
				{
					Global_4980736.f_5[bVar0 /*273*/].f_107[iVar1] = 99999;
				}
				Global_4980736.f_5[bVar0 /*273*/].f_112[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar9[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_83[iVar1] = DATAFILE::DATAARRAY_GET_FLOAT(uVar16[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_117[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar10[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_72[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar11[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_88 = DATAFILE::DATAARRAY_GET_INT(uVar14[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_67[0] = DATAFILE::DATAARRAY_GET_INT(uVar12[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_77[0] = DATAFILE::DATAARRAY_GET_INT(uVar13[iVar1], bVar0);
				Global_4980736.f_5[bVar0 /*273*/].f_142 = DATAFILE::DATAARRAY_GET_FLOAT(uVar15[iVar1], bVar0);
				if (uVar17[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar17[iVar1], bVar0) == 2)
				{
					Global_4980736.f_5[bVar0 /*273*/].f_96[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar17[iVar1], bVar0);
				}
				else
				{
					Global_4980736.f_5[bVar0 /*273*/].f_96[iVar1] = 0;
				}
				if (uVar18[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar18[iVar1], bVar0) == 2)
				{
					Global_4980736.f_5[bVar0 /*273*/].f_122[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar18[iVar1], bVar0);
				}
				else
				{
					Global_4980736.f_5[bVar0 /*273*/].f_122[iVar1] = 0;
				}
				if (uVar19[iVar1] != 0 && DATAFILE::DATAARRAY_GET_TYPE(uVar19[iVar1], bVar0) == 2)
				{
					Global_4980736.f_5[bVar0 /*273*/].f_127[iVar1] = DATAFILE::DATAARRAY_GET_INT(uVar19[iVar1], bVar0);
				}
				else
				{
					Global_4980736.f_5[bVar0 /*273*/].f_127[iVar1] = 0;
				}
				bVar0++;
			}
		}
		iVar1++;
	}
	iVar20 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locbc");
	iVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loc2rd");
	iVar22 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loclbr");
	iVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locbra");
	iVar24 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locbhra");
	iVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locdir");
	iVar26 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loctol");
	iVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lochgt");
	iVar28 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locart");
	iVar29 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaa1");
	uVar30 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaa2");
	uVar31 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locaaw");
	iVar32 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locstd");
	iVar33 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locstm");
	iVar34 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lcbs2");
	iVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lcbs3");
	iVar36 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "procde");
	iVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lcfktm");
	iVar38 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locid");
	iVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locti");
	iVar40 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locgc");
	iVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loclto");
	iVar42 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loctmw");
	iVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loctmt");
	iVar44 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loctst");
	iVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locpro");
	iVar46 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locpros");
	iVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locprot");
	iVar48 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locdisa");
	iVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locloo");
	iVar50 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loccors");
	iVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lochght");
	iVar52 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locdpth");
	iVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "localph");
	iVar54 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "loccosc");
	iVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locbso");
	iVar56 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locspg");
	iVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locspsg");
	iVar60 = 20;
	iVar62 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "locitb");
	iVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcve1");
	iVar64 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcve2");
	iVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lpreq");
	iVar66 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "iorfll");
	iVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "gtbsr");
	iVar68 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "gtbss");
	iVar69 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "nmaggg");
	iVar70 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "nmpass");
	iVar71 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "nmfail");
	iVar72 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcp");
	iVar73 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmcf");
	iVar74 = DATAFILE::DATADICT_GET_ARRAY(iVar4, "lmca");
	iVar86 = 1;
	Var87.f_20 = 4;
	Var87.f_25 = 4;
	Var87.f_30 = 4;
	Var87.f_35 = 4;
	Var88 = 12;
	Var88.f_13 = 12;
	bVar0 = false;
	while (bVar0 <= (Global_4980736[0] - 1))
	{
		__LIB_18__::func_666(&Var87, &iVar4, &(Global_4980736.f_5[bVar0 /*273*/].f_20), bVar0, 6);
		if (iVar20 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar20, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar20, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_2 = 0;
		}
		if (iVar21 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar21, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_19 = DATAFILE::DATAARRAY_GET_FLOAT(iVar21, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_19 = 0f;
		}
		if (iVar22 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar22, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_6 = DATAFILE::DATAARRAY_GET_FLOAT(iVar22, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_6 = 1f;
		}
		if (iVar23 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar23, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_8 = DATAFILE::DATAARRAY_GET_FLOAT(iVar23, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_8 = -1f;
		}
		if (iVar24 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar24, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_9 = DATAFILE::DATAARRAY_GET_FLOAT(iVar24, bVar0);
		}
		else if (__LIB_1__::func_823())
		{
			Global_4980736.f_5[bVar0 /*273*/].f_20.f_9 = -1f;
		}
		if (iVar25 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar25, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_64 = DATAFILE::DATAARRAY_GET_FLOAT(iVar25, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_64 = 0f;
		}
		if (iVar26 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar26, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_65 = DATAFILE::DATAARRAY_GET_FLOAT(iVar26, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_65 = 0f;
		}
		if (iVar27 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar27, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_66 = DATAFILE::DATAARRAY_GET_FLOAT(iVar27, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_66 = 0f;
		}
		if (iVar39 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar39, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_94 = DATAFILE::DATAARRAY_GET_FLOAT(iVar39, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_94 = 0f;
		}
		if (iVar40 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar40, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_95 = DATAFILE::DATAARRAY_GET_FLOAT(iVar40, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_95 = 0f;
		}
		if (iVar28 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar28, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/] = DATAFILE::DATAARRAY_GET_INT(iVar28, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/] = 0;
		}
		if (iVar32 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar32, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_141 = DATAFILE::DATAARRAY_GET_FLOAT(iVar32, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_141 = 10.5f;
		}
		if (iVar51 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar51, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_143 = DATAFILE::DATAARRAY_GET_FLOAT(iVar51, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_143 = 1f;
		}
		if (iVar52 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar52, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_144 = DATAFILE::DATAARRAY_GET_FLOAT(iVar52, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_144 = 0f;
		}
		if (iVar53 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar53, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_145 = DATAFILE::DATAARRAY_GET_INT(iVar53, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_145 = -1;
		}
		if (iVar54 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar54, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_146 = DATAFILE::DATAARRAY_GET_FLOAT(iVar54, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_146 = 0f;
		}
		if (iVar33 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar33, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_140 = DATAFILE::DATAARRAY_GET_INT(iVar33, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_140 = 0;
		}
		if (iVar34 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar34, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_89 = DATAFILE::DATAARRAY_GET_INT(iVar34, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_89 = 0;
		}
		if (iVar35 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar35, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_90 = DATAFILE::DATAARRAY_GET_INT(iVar35, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_90 = 0;
		}
		if (iVar36 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar36, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_91 = DATAFILE::DATAARRAY_GET_INT(iVar36, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_91 = 0;
		}
		if (iVar37 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar37, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_92 = DATAFILE::DATAARRAY_GET_INT(iVar37, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_92 = -1;
		}
		if (iVar38 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar38, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_93 = DATAFILE::DATAARRAY_GET_INT(iVar38, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_93 = -1;
		}
		if (iVar49 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar49, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_148 = DATAFILE::DATAARRAY_GET_INT(iVar49, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_148 = 0;
		}
		if (iVar50 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar50, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_82 = DATAFILE::DATAARRAY_GET_INT(iVar50, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_82 = 0;
		}
		if (iVar41 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar41, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_149 = DATAFILE::DATAARRAY_GET_FLOAT(iVar41, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_149 = 0f;
		}
		if (iVar42 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar42, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_150 = DATAFILE::DATAARRAY_GET_FLOAT(iVar42, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_150 = 0f;
		}
		if (iVar43 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar43, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_151 = DATAFILE::DATAARRAY_GET_FLOAT(iVar43, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_151 = 0f;
		}
		if (iVar44 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar44, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_152 = DATAFILE::DATAARRAY_GET_INT(iVar44, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_152 = -1;
		}
		if (iVar45 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar45, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_154 = DATAFILE::DATAARRAY_GET_INT(iVar45, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_154 = -1;
		}
		if (iVar46 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar46, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_155 = DATAFILE::DATAARRAY_GET_INT(iVar46, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_155 = -1;
		}
		if (iVar47 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar47, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_156 = DATAFILE::DATAARRAY_GET_INT(iVar47, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_156 = -1;
		}
		if (iVar48 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar48, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_157 = DATAFILE::DATAARRAY_GET_INT(iVar48, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_157 = 0;
		}
		if (iVar56 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar56, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_158 = DATAFILE::DATAARRAY_GET_INT(iVar56, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_158 = 0;
		}
		if (iVar57 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar57, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_159 = DATAFILE::DATAARRAY_GET_INT(iVar57, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_159 = 0;
		}
		iVar2 = 0;
		while (iVar2 <= 19)
		{
			StringCopy(&sVar3, "1lwb", 8);
			StringIntConCat(&sVar3, iVar2, 8);
			__LIB_18__::func_404(&sVar3, &(Global_4980736.f_5[bVar0 /*273*/].f_160[iVar2]), &iVar4, &(uVar58[iVar2]), bVar0, 0, 0);
			iVar2++;
		}
		if (iVar62 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar62, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_204 = DATAFILE::DATAARRAY_GET_INT(iVar62, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_204 = 0;
		}
		if (iVar63 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar63, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_205 = DATAFILE::DATAARRAY_GET_INT(iVar63, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_205 = -1;
		}
		if (iVar64 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar64, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_206 = DATAFILE::DATAARRAY_GET_INT(iVar64, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_206 = -1;
		}
		if (iVar65 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar65, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_207 = DATAFILE::DATAARRAY_GET_INT(iVar65, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_207 = -1;
		}
		if (iVar66 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar66, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_208 = DATAFILE::DATAARRAY_GET_INT(iVar66, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_208 = 0;
		}
		if (iVar55 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar55, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_147 = DATAFILE::DATAARRAY_GET_INT(iVar55, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_147 = 0;
		}
		if (((iVar29 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar29, bVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(uVar30, bVar0) == 5) && DATAFILE::DATAARRAY_GET_TYPE(uVar31, bVar0) == 3)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_57 = { DATAFILE::DATAARRAY_GET_VECTOR(iVar29, bVar0) };
			Global_4980736.f_5[bVar0 /*273*/].f_60 = { DATAFILE::DATAARRAY_GET_VECTOR(uVar30, bVar0) };
			Global_4980736.f_5[bVar0 /*273*/].f_63 = DATAFILE::DATAARRAY_GET_FLOAT(uVar31, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_57 = { 0f, 0f, 0f };
			Global_4980736.f_5[bVar0 /*273*/].f_60 = { 0f, 0f, 0f };
			Global_4980736.f_5[bVar0 /*273*/].f_63 = 1f;
		}
		if (iVar67 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar67, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_6 = DATAFILE::DATAARRAY_GET_INT(iVar67, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_6 = -1;
		}
		if (iVar68 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar68, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_7 = DATAFILE::DATAARRAY_GET_INT(iVar68, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_7 = -1;
		}
		if (iVar69 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar69, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_2 = DATAFILE::DATAARRAY_GET_INT(iVar69, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_2 = -1;
		}
		if (iVar70 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar70, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132 = DATAFILE::DATAARRAY_GET_INT(iVar70, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132 = -1;
		}
		if (iVar71 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar71, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_1 = DATAFILE::DATAARRAY_GET_INT(iVar71, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_1 = -1;
		}
		if (iVar72 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar72, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_3 = DATAFILE::DATAARRAY_GET_INT(iVar72, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_3 = -1;
		}
		if (iVar73 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar73, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_4 = DATAFILE::DATAARRAY_GET_INT(iVar73, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_4 = -1;
		}
		if (iVar74 != 0 && DATAFILE::DATAARRAY_GET_TYPE(iVar74, bVar0) == 2)
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_5 = DATAFILE::DATAARRAY_GET_INT(iVar74, bVar0);
		}
		else
		{
			Global_4980736.f_5[bVar0 /*273*/].f_132.f_5 = -1;
		}
		__LIB_18__::func_667(&Var88, &iVar4, &(Global_4980736.f_5[bVar0 /*273*/].f_209), bVar0, 4);
		__LIB_18__::func_404("losgrd", &(Global_4980736.f_5[bVar0 /*273*/].f_181), &iVar4, &iVar59, bVar0, 0, -2340845);
		__LIB_18__::func_401("lossgrd", &(Global_4980736.f_5[bVar0 /*273*/].f_182), 1, &iVar4, &iVar60, bVar0, 0, -2340845);
		__LIB_18__::func_404("Loswn_A", &(Global_4980736.f_5[bVar0 /*273*/].f_203), &iVar4, &iVar61, bVar0, 0, -2340845);
		__LIB_18__::func_404("lcPrRq", &(Global_4980736.f_5[bVar0 /*273*/].f_261), &iVar4, &iVar75, bVar0, -1, -2340845);
		__LIB_18__::func_404("lcPrTx", &(Global_4980736.f_5[bVar0 /*273*/].f_262), &iVar4, &iVar76, bVar0, -1, -2340845);
		__LIB_18__::func_404("lciti", &(Global_4980736.f_5[bVar0 /*273*/].f_268), &iVar4, &iVar78, bVar0, -1, -2340845);
		__LIB_18__::func_404("lcitbs", &(Global_4980736.f_5[bVar0 /*273*/].f_268.f_1), &iVar4, &iVar79, bVar0, 0, -2340845);
		__LIB_18__::func_404("lcitcs", &(Global_4980736.f_5[bVar0 /*273*/].f_268.f_2), &iVar4, &iVar80, bVar0, -1, -2340845);
		__LIB_18__::func_404("lcitpot", &(Global_4980736.f_5[bVar0 /*273*/].f_268.f_3), &iVar4, &iVar81, bVar0, -1, -2340845);
		__LIB_18__::func_404("lcitwot", &(Global_4980736.f_5[bVar0 /*273*/].f_268.f_4), &iVar4, &iVar82, bVar0, -1, -2340845);
		__LIB_18__::func_404("lcpmco", &(Global_4980736.f_5[bVar0 /*273*/].f_264), &iVar4, &iVar84, bVar0, -1, -1);
		__LIB_18__::func_404("lsvi", &(Global_4980736.f_5[bVar0 /*273*/].f_101), &iVar4, &iVar83, bVar0, -1, -2340845);
		__LIB_18__::func_401("alvgot", &(Global_4980736.f_5[bVar0 /*273*/].f_265), 1, &iVar4, &iVar86, bVar0, 0, -2340845);
		__LIB_18__::func_404("lcscid", &(Global_4980736.f_5[bVar0 /*273*/].f_263), &iVar4, &iVar77, bVar0, 0, -2340845);
		__LIB_18__::func_404("agIDlo", &(Global_4980736.f_5[bVar0 /*273*/].f_267), &iVar4, &iVar85, bVar0, 0, 0);
		bVar0++;
	}
}

void func_257(var* uParam0)//Position - 0x2222D6
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var* uVar3;
	var* uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<9> Var11[2];
	int iVar12;
	int iVar13;
	iVar2 = DATAFILE::DATADICT_GET_DICT(*uParam0, "door");
	uVar3 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "loc");
	uVar4 = DATAFILE::DATADICT_GET_ARRAY(iVar2, "model");
	iVar9 = 1;
	__LIB_18__::func_414("no", &(Global_4980736.f_34610), &iVar2, 0, -2340845);
	bVar0 = false;
	while (bVar0 <= (Global_4980736.f_34610 - 1))
	{
		Global_4980736.f_34611[bVar0 /*50*/] = { DATAFILE::DATAARRAY_GET_VECTOR(uVar3, bVar0) };
		iVar1 = DATAFILE::DATAARRAY_GET_INT(uVar4, bVar0);
		Global_4980736.f_34611[bVar0 /*50*/].f_3 = iVar1;
		__LIB_18__::func_404("dbs", &(Global_4980736.f_34611[bVar0 /*50*/].f_33), &iVar2, &iVar5, bVar0, 0, 0);
		__LIB_18__::func_404("dcoid", &(Global_4980736.f_34611[bVar0 /*50*/].f_35), &iVar2, &iVar6, bVar0, -1, -1);
		__LIB_18__::func_404("dle", &(Global_4980736.f_34611[bVar0 /*50*/].f_46), &iVar2, &iVar7, bVar0, -1, -1);
		iVar13 = 0;
		while (iVar13 <= 1)
		{
			__LIB_18__::func_629(&iVar2, &(Var11[iVar13 /*9*/]), &(Global_4980736.f_34611[bVar0 /*50*/].f_6[iVar13 /*11*/]), bVar0, iVar13);
			iVar13++;
		}
		__LIB_18__::func_404("dAnimDyno", &(Global_4980736.f_34611[bVar0 /*50*/].f_36), &iVar2, &iVar8, bVar0, -1, -2340845);
		__LIB_18__::func_401("alvdoo", &(Global_4980736.f_34611[bVar0 /*50*/].f_48), 1, &iVar2, &iVar9, bVar0, 0, -2340845);
		__LIB_18__::func_628(&iVar2, &iVar12, &(Global_4980736.f_34611[bVar0 /*50*/].f_29), bVar0);
		__LIB_18__::func_404("agIDdr", &(Global_4980736.f_34611[bVar0 /*50*/].f_47), &iVar2, &iVar10, bVar0, 0, 0);
		bVar0++;
	}
}

void func_258(int iParam0)//Position - 0x22786E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<2> Var3;
	struct<61> Var4;
	var* uVar5[4];
	var* uVar6[4];
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
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	struct<61> Var55;
	int iVar56;
	int iVar57;
	int iVar58;
	Var4 = 2;
	Var4.f_3 = 2;
	Var4.f_3.f_1 = 2;
	Var4.f_3.f_1.f_3 = 2;
	Var4.f_10 = 2;
	Var4.f_13 = 2;
	Var4.f_16 = 2;
	Var4.f_19 = 2;
	Var4.f_22 = 2;
	Var4.f_25 = 2;
	Var4.f_28 = 2;
	Var4.f_31 = 2;
	Var4.f_34 = 2;
	Var4.f_37 = 2;
	Var4.f_40 = 2;
	Var4.f_43 = 2;
	Var4.f_46 = 2;
	Var4.f_49 = 2;
	Var4.f_52 = 2;
	Var4.f_55 = 2;
	Var4.f_58 = 2;
	iVar0 = 0;
	while (iVar0 <= (Global_4718592.f_593 - 1))
	{
		if (iVar0 < 4)
		{
			iVar7 = 0;
			iVar8 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar14 = 0;
			iVar15 = 0;
			iVar16 = 0;
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar23 = 0;
			iVar24 = 0;
			iVar25 = 0;
			iVar26 = 0;
			iVar27 = 0;
			iVar28 = 0;
			iVar29 = 0;
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = 0;
			iVar34 = 0;
			iVar35 = 0;
			iVar36 = 0;
			iVar37 = 0;
			iVar38 = 0;
			iVar39 = 0;
			iVar40 = 0;
			iVar41 = 0;
			iVar42 = 0;
			iVar43 = 0;
			iVar44 = 0;
			iVar45 = 0;
			iVar46 = 0;
			iVar47 = 0;
			iVar48 = 0;
			iVar49 = 0;
			iVar50 = 0;
			iVar51 = 0;
			iVar52 = 0;
			iVar53 = 0;
			iVar54 = 0;
			Var55 = { Var4 };
			iVar56 = 0;
			iVar57 = 0;
			StringCopy(&Var3, "itvsd", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar7 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "itved", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar12 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "invor", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar13 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "emonR", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar14 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "pDSaD", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar15 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "todh", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar29 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "todm", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar30 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "tods", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar31 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "todsh", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar32 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "armr", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar16 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "bsthr", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar17 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "mgdm", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar18 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rorcp", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar19 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rocok", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar20 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rodp", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar21 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rodpt", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar22 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rochta", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar23 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rotes", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar24 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "expRR", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar25 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "rolsw", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar26 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "roapa", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar27 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "sthpp", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar28 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "txt3", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar44 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "txt4", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar45 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "txt5", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar46 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "fail", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar47 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "bfm", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar52 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "wwm", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar48 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "vss", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar49 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "cwt", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar50 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "vhm", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar51 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "tsc", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar53 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "mcry", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar54 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "bdprt", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar56 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			StringCopy(&Var3, "bdpst", 16);
			StringIntConCat(&Var3, iVar0, 16);
			iVar57 = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&Var3, "rlbs", 16);
				StringIntConCat(&Var3, iVar0, 16);
				StringConCat(&Var3, "-", 16);
				StringIntConCat(&Var3, iVar2, 16);
				uVar5[iVar2] = 0;
				uVar5[iVar2] = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
				StringCopy(&Var3, "rlnm", 16);
				StringIntConCat(&Var3, iVar2, 16);
				uVar6[iVar2] = DATAFILE::DATADICT_GET_ARRAY(*iParam0, &Var3);
				iVar2++;
			}
			bVar1 = false;
			while (bVar1 <= (Global_4718592.f_658[iVar0 /*22957*/].f_59 - 1))
			{
				__LIB_18__::func_404("oCH_CTL", &(Global_4718592.f_658[iVar0 /*22957*/].f_15964[bVar1]), iParam0, &iVar8, bVar1, -1, -2340845);
				__LIB_18__::func_404("shTckRS", &(Global_4718592.f_658[iVar0 /*22957*/].f_15982[bVar1]), iParam0, &iVar9, bVar1, -1, -2340845);
				__LIB_18__::func_404("cusot", &(Global_4718592.f_658[iVar0 /*22957*/].f_16000[bVar1]), iParam0, &iVar10, bVar1, -1, -2340845);
				__LIB_18__::func_404("cusmot", &(Global_4718592.f_658[iVar0 /*22957*/].f_16018[bVar1]), iParam0, &iVar11, bVar1, -1, -2340845);
				StringCopy(&Var3, "todw", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1349[bVar1]), iParam0, &iVar33, bVar1, 0, -2340845);
				StringCopy(&Var3, "todwtt", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_402(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1367[bVar1]), iParam0, &iVar42, bVar1, 0f, -904994889);
				StringCopy(&Var3, "todwcod", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1385[bVar1]), iParam0, &iVar43, bVar1, 0, -2340845);
				StringCopy(&Var3, "grvd", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_941[bVar1]), iParam0, &iVar34, bVar1, 0, -2340845);
				StringCopy(&Var3, "grvc", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_959[bVar1]), iParam0, &iVar35, bVar1, 0, -2340845);
				StringCopy(&Var3, "cvhr", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1421[bVar1]), iParam0, &iVar36, bVar1, 0, -2340845);
				StringCopy(&Var3, "cvhrt", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_402(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1439[bVar1]), iParam0, &iVar39, bVar1, 0f, -904994889);
				StringCopy(&Var3, "cvhp", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_402(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1457[bVar1]), iParam0, &iVar40, bVar1, 0f, -904994889);
				StringCopy(&Var3, "cvhdm", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_402(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1475[bVar1]), iParam0, &iVar41, bVar1, 0f, -904994889);
				StringCopy(&Var3, "cvcht", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_404(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1403[bVar1]), iParam0, &iVar37, bVar1, 0, -2340845);
				StringCopy(&Var3, "tddm", 16);
				StringIntConCat(&Var3, iVar0, 16);
				__LIB_18__::func_402(&Var3, &(Global_4718592.f_658[iVar0 /*22957*/].f_1493[bVar1]), iParam0, &iVar38, bVar1, 0f, -904994889);
				iVar58 = 0;
				while (iVar58 <= 1)
				{
					__LIB_18__::func_636(iVar58, iParam0, &Var55, &(Global_4718592.f_658[iVar0 /*22957*/].f_2055[bVar1 /*41*/][iVar58 /*20*/]), iVar0, bVar1);
					iVar58++;
				}
				if (!__LIB_18__::func_14(&iVar7, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_905[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar7, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_905[bVar1] = 5;
				}
				if (!__LIB_18__::func_14(&iVar12, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_923[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar12, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_923[bVar1] = 20;
				}
				if (!__LIB_18__::func_14(&iVar13, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1709[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar13, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1709[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar14, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1727[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar14, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1727[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar15, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1871[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar15, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1871[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar16, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1511[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar16, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1511[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar17, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1529[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar17, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1529[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar18, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1547[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar18, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1547[bVar1] = 100;
				}
				if (!__LIB_18__::func_14(&iVar19, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16456[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar19, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16456[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar20, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16708[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(iVar20, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_16708[bVar1] = 0f;
				}
				if (!__LIB_18__::func_14(&iVar21, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1565[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar21, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1565[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar22, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1583[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar22, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1583[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar23, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1853[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar23, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1853[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar24, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1601[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar24, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1601[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar25, 3, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1619[bVar1] = DATAFILE::DATAARRAY_GET_FLOAT(iVar25, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1619[bVar1] = 0f;
				}
				if (!__LIB_18__::func_14(&iVar26, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1655[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar26, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1655[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar27, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1673[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar27, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1673[bVar1] = -1;
				}
				if (!__LIB_18__::func_14(&iVar28, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1691[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar28, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1691[bVar1] = -2;
				}
				if (!__LIB_18__::func_14(&iVar29, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1277[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar29, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1277[bVar1] = 12;
				}
				if (!__LIB_18__::func_14(&iVar30, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1295[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar30, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1295[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar31, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1313[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar31, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1313[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar32, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1331[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar32, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_1331[bVar1] = 0;
				}
				if (!__LIB_16__::func_682())
				{
					if (!__LIB_18__::func_14(&iVar44, 4, bVar1))
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13775[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar44, bVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13775[bVar1 /*16*/]), "", 64);
					}
					if (!__LIB_18__::func_14(&iVar45, 4, bVar1))
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13229[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar45, bVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13229[bVar1 /*16*/]), "", 64);
					}
					if (!__LIB_18__::func_14(&iVar46, 4, bVar1))
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13502[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar46, bVar1), 64);
					}
					else
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_13502[bVar1 /*16*/]), "", 64);
					}
				}
				if (!__LIB_18__::func_14(&iVar47, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14048[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar47, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14048[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar52, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14321[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar52, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14321[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar48, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14594[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar48, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14594[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar49, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14867[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar49, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_14867[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar50, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_15140[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar50, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_15140[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar51, 4, bVar1))
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_15413[bVar1 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(iVar51, bVar1), 64);
				}
				else
				{
					StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_15413[bVar1 /*16*/]), "", 64);
				}
				if (!__LIB_18__::func_14(&iVar53, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_5836[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar53, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_5836[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar54, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_5854[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar54, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_5854[bVar1] = 0;
				}
				if (!__LIB_18__::func_14(&iVar56, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_12183[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar56, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_12183[bVar1] = Global_4718592.f_658[iVar0 /*22957*/].f_5552;
				}
				if (!__LIB_18__::func_14(&iVar57, 2, bVar1))
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_12201[bVar1] = DATAFILE::DATAARRAY_GET_INT(iVar57, bVar1);
				}
				else
				{
					Global_4718592.f_658[iVar0 /*22957*/].f_12201[bVar1] = Global_4718592.f_658[iVar0 /*22957*/].f_5816;
				}
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (uVar5[iVar2] != 0)
					{
						Global_4718592.f_658[iVar0 /*22957*/].f_12219[bVar1 /*5*/][iVar2] = DATAFILE::DATAARRAY_GET_INT(uVar5[iVar2], bVar1);
					}
					else
					{
						Global_4718592.f_658[iVar0 /*22957*/].f_12219[bVar1 /*5*/][iVar2] = 0;
					}
					if (uVar6[iVar2] != 0)
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_12305[iVar2 /*16*/]), DATAFILE::DATAARRAY_GET_STRING(uVar6[iVar2], 0), 64);
					}
					else
					{
						StringCopy(&(Global_4718592.f_658[iVar0 /*22957*/].f_12305[iVar2 /*16*/]), "", 64);
					}
					iVar2++;
				}
				bVar1++;
			}
		}
		iVar0++;
	}
}

bool func_259(int iParam0)//Position - 0x237813
{
	return __LIB_18__::func_643(iParam0, 3);
}

void func_260(var uParam0, var uParam1, int iParam2)//Position - 0x23866E
{
	__LIB_18__::func_648(uParam0, uParam1, iParam2);
}

void func_261(int iParam0)//Position - 0x23891A
{
	var uVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (!BitTest(Global_4718592.f_40, 2))
	{
		__LIB_18__::func_650(iParam0);
		return;
	}
	uVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "Az", 16);
		__LIB_18__::func_414(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/]), iParam0, -1, -2340845);
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "A", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 5)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_1 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &Var2) };
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_1 = { 0f, 0f, 0f };
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "C", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 3)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_23 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_23 = 1.25f;
		}
		if (Global_4718592.f_173211[iVar1 /*58*/].f_23 < 0.75f)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_23 = 1.25f;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "E", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_34 = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_34 = 0;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "H", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 3)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_4 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_4 = 0f;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "J", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_36 = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_36 = -1;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "K", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 5)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_37 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &Var2) };
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_37 = { 0f, 0f, 0f };
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "L", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 3)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_40 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_40 = 0f;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "M", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 5)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_41 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &Var2) };
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_41 = { 0f, 0f, 0f };
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "N", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 5)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_44 = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &Var2) };
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_44 = { 0f, 0f, 0f };
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&Var2, "w", 16);
			StringIntConCat(&Var2, iVar1, 16);
			StringConCat(&Var2, "F", 16);
			StringIntConCat(&Var2, iVar3, 16);
			if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_24[iVar3] = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
			}
			else
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_24[iVar3] = -1;
			}
			StringCopy(&Var2, "w", 16);
			StringIntConCat(&Var2, iVar1, 16);
			StringConCat(&Var2, "G", 16);
			StringIntConCat(&Var2, iVar3, 16);
			if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_29[iVar3] = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
			}
			else
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_29[iVar3] = -1;
			}
			iVar3++;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "O", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 3)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_47 = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_47 = 65f;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&Var2, "w", 16);
			StringIntConCat(&Var2, iVar1, 16);
			StringConCat(&Var2, "P", 16);
			StringIntConCat(&Var2, iVar4, 16);
			if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 5)
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_5[iVar4 /*3*/] = { DATAFILE::DATADICT_GET_VECTOR(*iParam0, &Var2) };
			}
			else
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_5[iVar4 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&Var2, "w", 16);
			StringIntConCat(&Var2, iVar1, 16);
			StringConCat(&Var2, "Q", 16);
			StringIntConCat(&Var2, iVar4, 16);
			if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 3)
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_18[iVar4] = DATAFILE::DATADICT_GET_FLOAT(*iParam0, &Var2);
			}
			else
			{
				Global_4718592.f_173211[iVar1 /*58*/].f_18[iVar4] = 0f;
			}
			iVar4++;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "T", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_50 = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_50 = -1;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "U", 16);
		if (*iParam0 != 0 && DATAFILE::DATADICT_GET_TYPE(*iParam0, &Var2) == 2)
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_51 = DATAFILE::DATADICT_GET_INT(*iParam0, &Var2);
		}
		else
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_51 = 0;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "X", 16);
		iVar5 = 0;
		while (iVar5 <= 1)
		{
			StringIntConCat(&Var2, iVar5, 16);
			__LIB_18__::func_414(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/].f_54[iVar5]), iParam0, -1, -2340845);
			iVar5++;
		}
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "Ab", 16);
		__LIB_18__::func_414(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/].f_35), iParam0, 0, -2340845);
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "Ac", 16);
		__LIB_18__::func_414(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/].f_48), iParam0, 0, -2340845);
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "Ae", 16);
		__LIB_18__::func_407(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/].f_49), iParam0, 0f, -904994889);
		StringCopy(&Var2, "w", 16);
		StringIntConCat(&Var2, iVar1, 16);
		StringConCat(&Var2, "Ag", 16);
		__LIB_18__::func_414(&Var2, &(Global_4718592.f_173211[iVar1 /*58*/].f_57), iParam0, 0, -2340845);
		__LIB_18__::func_401("alvpor", &(Global_4718592.f_173211[iVar1 /*58*/].f_52), 1, iParam0, &uVar0, iVar1, 0, -2340845);
		if (BitTest(Global_4718592.f_173211[iVar1 /*58*/].f_34, 23) || BitTest(Global_4718592.f_173211[iVar1 /*58*/].f_34, 8))
		{
			Global_4718592.f_173211[iVar1 /*58*/].f_57 = 1;
		}
		if (BitTest(Global_4718592.f_173211[iVar1 /*58*/].f_34, 0))
		{
			MISC::SET_BIT(&(Global_4718592.f_173211[iVar1 /*58*/].f_34), 25);
			MISC::SET_BIT(&(Global_4718592.f_173211[iVar1 /*58*/].f_34), 26);
		}
		iVar1++;
	}
}

int func_262(int iParam0)//Position - 0x247A27
{
	int iVar0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			case 17:
				return 19;
			case 18:
				return 20;
			case 28:
				return 31;
			case 75:
				return 12;
			default:
		}
		return iParam0;
	}
	iVar0 = __LIB_19__::func_80(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_263(int iParam0)//Position - 0x20800
{
	int iVar0;
	iVar0 = __LIB_1__::func_368(iParam0);
	if (iVar0 != -1)
	{
		return __LIB_1__::func_357(iVar0);
	}
	return 1;
}

void func_264(var uParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0x1E19E2
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	__LIB_16__::func_842(uParam0, uParam1, sParam2, 0, 0);
}

void func_265(int iParam0, int iParam1)//Position - 0x2436F2
{
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 89)
		{
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 11, 23, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 23, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 231, 1);
		}
		else if (iParam1 == 88)
		{
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 11, 17, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 17, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 225, 1);
		}
		else if (iParam1 == 87)
		{
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 11, 28, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 28, 1);
			__LIB_18__::func_519(joaat("MP_M_Freemode_01"), 8, 236, 1);
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 89)
		{
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 11, 4, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 4, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 20, 1);
		}
		else if (iParam1 == 88)
		{
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 11, 7, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 7, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 23, 1);
		}
		else if (iParam1 == 87)
		{
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 11, 9, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 9, 1);
			__LIB_18__::func_519(joaat("MP_F_Freemode_01"), 8, 25, 1);
		}
	}
}

Vector3 func_266(int iParam0)//Position - 0x47F9
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

void func_267(int iParam0, int iParam1)//Position - 0x53FF
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
	}
}

bool func_268(int iParam0)//Position - 0xDABD
{
	return __LIB_13__::func_445(&(Global_2703735.f_169), iParam0);
}

float func_269()//Position - 0x21660
{
	return 60f;
}

bool func_270(int iParam0)//Position - 0x21891
{
	int iVar0;
	bool bVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (bVar1 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(bVar1, 0, 1))
			{
				return bVar1;
			}
		}
	}
	return __LIB_0__::getMinusOneOrNull();
}

int func_271(int iParam0)//Position - 0x229A4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0)//Position - 0x22A06
{
	return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_273(struct<3> Param0)//Position - 0x22A18
{
	Global_1952191.f_5479 = { Param0 };
}

Vector3 func_274()//Position - 0x22A56
{
	struct<3> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_275()//Position - 0x22A77
{
	struct<3> Var0;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	return Var0;
}

void func_276(var uParam0)//Position - 0x237B4
{
	DATAFILE::DATAFILE_DELETE(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

int func_277(var* uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24E65
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
	}
	return iParam2;
}

float func_278(var* uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x24E8D
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_279(var* uParam0, int iParam1, struct<3> Param2, bool bParam3)//Position - 0x24EB5
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
	}
	return Param2;
}

int func_280(var* uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x24EDF
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

char* func_281(var uParam0, var uParam1)//Position - 0x250C4
{
	return "Sum2_Ammunation_1";
}

int func_282(int iParam0)//Position - 0x250EC
{
	switch (iParam0)
	{
		case 275:
		case 270:
		case 276:
		case 277:
		case 273:
		case 292:
		case 295:
		case 300:
			return 0;
		default:
	}
	return 1;
}

int func_283()//Position - 0x30AB2
{
	return iLocal_556;
}

int func_284(int iParam0)//Position - 0x34CBE
{
	if (!iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_12__::func_486(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_2__::func_39(iParam0)];
		}
	}
	return -1;
}

int func_285(int iParam0)//Position - 0x358DC
{
	switch (iParam0)
	{
		case 276:
			return 1;
		default:
	}
	return 0;
}

void func_286(struct<2> Param0)//Position - 0x36692
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1952191.f_5322[iVar0 /*2*/].f_1 == -1)
		{
			Global_1952191.f_5322[iVar0 /*2*/] = { Param0 };
			MISC::SET_BIT(&Global_1952191, 1);
			return;
		}
		iVar0++;
	}
	if (!BitTest(Global_1952191, 1))
	{
		MISC::SET_BIT(&Global_1952191, 1);
	}
}

void func_287(bool bParam0)//Position - 0x3961F
{
	if (bParam0)
	{
		__LIB_1__::func_480(13);
	}
	else
	{
		__LIB_1__::func_482(13);
	}
}

void func_288(int iParam0)//Position - 0x3963B
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1911933[iVar0 /*260*/].f_259 != iParam0)
	{
		Global_1911933[iVar0 /*260*/].f_259 = iParam0;
	}
}

int func_289(int iParam0)//Position - 0x39E98
{
	int iVar0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_1__::func_693(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_290()//Position - 0x3B492
{
	Global_1952191.f_5470.f_3 = 0;
	Global_1952191.f_5470 = -1;
	Global_1952191.f_5470.f_2 = -1000;
}

int func_291(int iParam0)//Position - 0x3B4B8
{
	int iVar0;
	int iVar1;
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_3__::func_487(Global_1892703[iParam0 /*599*/].f_556.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_292(struct<2> Param0)//Position - 0x3B67F
{
	int iVar0;
	if (!__LIB_3__::func_487(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) && __LIB_3__::func_685(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_293(struct<3> Param0, int iParam1)//Position - 0x3BA0D
{
	if (!__LIB_0__::func_78(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/], 0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_126[iParam1 /*3*/] = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/] };
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_151[iParam1 /*3*/] = { Param0 };
	}
}

void func_294(int iParam0)//Position - 0x3C25E
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iParam0, true);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	OBJECT::FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(iParam0, true);
}

int func_295(int iParam0)//Position - 0x3C2F3
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		default:
	}
	return 0;
}

void func_296(int iParam0)//Position - 0xB1720
{
	if (__LIB_16__::func_758(&(Global_2703735.f_169), iParam0))
	{
	}
}

void func_297(int iParam0)//Position - 0xBBD21
{
	if (Global_1952160 != iParam0)
	{
		Global_1952160 = iParam0;
	}
}

void func_298(int iParam0)//Position - 0xBBD72
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, 0, 0, 0);
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
	if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar0 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
		{
			FILES::INIT_SHOP_PED_PROP(&Var2);
			if (iVar0 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
			{
				FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var2);
			}
			else
			{
				FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var2);
			}
			PED::SET_PED_PROP_INDEX(iParam0, 1, Var2.f_3, Var2.f_4, false);
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("ARENA_DRAW_0"), 1))
	{
		PED::CLEAR_PED_PROP(iParam0, 1);
	}
}

float func_299()//Position - 0xBC28C
{
	return 0.5f;
}

int func_300()//Position - 0xBE8E3
{
	return Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230;
}

float func_301()//Position - 0xBEA52
{
	return 1200f;
}

float func_302()//Position - 0xBEA93
{
	return 1000f;
}

bool func_303(bool bParam0)//Position - 0xC3158
{
	return __LIB_3__::func_458(&(Global_2678393.f_921[bParam0]));
}

bool func_304(bool bParam0)//Position - 0xC31B7
{
	return __LIB_3__::func_458(&(Global_2678393.f_822[bParam0]));
}

bool func_305(bool bParam0)//Position - 0xC3292
{
	return __LIB_3__::func_458(&(Global_2678393.f_624[bParam0]));
}

void func_306(bool bParam0, int iParam1, bool bParam2)//Position - 0xC4BA4
{
	if (((!SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1576) && !SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1582)) || (Global_2678393.f_1576 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2678393.f_1582 == SCRIPT::GET_ID_OF_THIS_THREAD())) || bParam2)
	{
		if (bParam0)
		{
			Global_2678393.f_1576 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2678393.f_1582 = SCRIPT::GET_ID_OF_THIS_THREAD();
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
			Global_2678393.f_1577 = NETWORK::GET_NETWORK_TIME();
			Global_2678393.f_1583 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			Global_2678393.f_1576 = -1;
			Global_2678393.f_1582 = -1;
			MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_2), 19);
		}
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_4 = 2147483647;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_5 = 0;
		Global_2678393.f_1579 = iParam1;
		Global_2678393.f_1585 = iParam1;
		Global_2678393.f_1587 = bParam0;
	}
	else if (!bParam2)
	{
	}
}

void func_307(int iParam0)//Position - 0xC5026
{
	int iVar0;
	if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), Global_1643899[iParam0]);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 17);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 18);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 19);
		MISC::CLEAR_BIT(&(Global_2689235[iVar0 /*453*/].f_237), 20);
		if (Global_2689235[iVar0 /*453*/].f_237 == 0)
		{
			Global_2689235[iVar0 /*453*/].f_236 = 0;
		}
	}
	Global_1643876[iParam0] = 0;
	Global_1643915[iParam0] = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 0;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0xC50D5
{
	int iVar0;
	Global_1643899[iParam0] = iParam1;
	Global_1643923[iParam0] = iParam4;
	Global_1643931[iParam0] = iParam5;
	if (bParam6)
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 1;
	}
	else
	{
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_240 = 0;
	}
	if (bParam7)
	{
	}
	if (__LIB_0__::func_855(PLAYER::PLAYER_ID()))
	{
		iVar0 = PLAYER::PLAYER_ID();
		MISC::SET_BIT(&(Global_2689235[iVar0 /*453*/].f_237), iParam1);
		Global_2689235[iVar0 /*453*/].f_236 = 1;
	}
	if (iParam2 == 1)
	{
		Global_1643907[iParam0] = 1;
	}
	else
	{
		Global_1643907[iParam0] = 0;
	}
	Global_1643876[iParam0] = 1;
	Global_1643915[iParam0] = iParam3;
	if (bParam8)
	{
		if (iParam1 == 12)
		{
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_241 = 1;
		}
	}
}

bool func_309()//Position - 0xC52C7
{
	return Global_1952159;
}

float func_310()//Position - 0xC5DAC
{
	return 2.5f;
}

int func_311()//Position - 0xC8FFD
{
	return 15000;
}

int func_312()//Position - 0xC9008
{
	return 10000;
}

void func_313(int iParam0, struct<3> Param1)//Position - 0xC9C31
{
	if (iParam0 == 0 || !__LIB_10__::func_803(Param1))
	{
		return;
	}
	if (Global_1952191.f_5470.f_3 != iParam0)
	{
		Global_1952191.f_5470.f_3 = iParam0;
		Global_1952191.f_5470 = { Param1 };
	}
}

int func_314(int iParam0)//Position - 0xCD371
{
	if (__LIB_12__::func_486(iParam0, 1))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_429;
	}
	return -1;
}

bool func_315(bool bParam0)//Position - 0xCF02D
{
	return __LIB_15__::func_303(Global_2678393.f_822[bParam0], &(Global_2678393.f_367), bParam0);
}

bool func_316()//Position - 0xCF133
{
	return Global_2678393.f_1644;
}

int func_317(int iParam0, var uParam1)//Position - 0xCFAF9
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_318(int iParam0, var uParam1)//Position - 0xCFB6D
{
	switch (iParam0)
	{
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_319(int iParam0, var uParam1)//Position - 0xCFBA1
{
	switch (iParam0)
	{
		case 1:
		case 0:
			return 1;
		default:
	}
	return 0;
}

int func_320(int iParam0, var uParam1)//Position - 0xCFBFB
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_321(int iParam0, var uParam1)//Position - 0xCFC2D
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 1:
		case 4:
		case 5:
			return 1;
		default:
	}
	return 0;
}

int func_322(int iParam0, var uParam1)//Position - 0xCFC5F
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 16:
		case 8:
		case 10:
		case 13:
		case 15:
		case 4:
		case 14:
		case 7:
		case 11:
			return 1;
		case 9:
			return 2;
		case 1:
			return 3;
		default:
	}
	return 0;
}

int func_323(int iParam0, var uParam1)//Position - 0xCFCD2
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
		case 9:
		case 7:
		case 8:
		case 13:
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
		case 1:
			return 1;
		default:
	}
	return 0;
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD031A
{
	switch (iParam1)
	{
		case 0:
			return 805;
		case 1:
			return 806;
		case 2:
			return 807;
		case 3:
			return 808;
		case 4:
			return 809;
		case 5:
			return 810;
		case 6:
			return 811;
		case 7:
			return 812;
		case 8:
			return 813;
		case 9:
			return 814;
		default:
	}
	return 0;
}

int func_325(int iParam0)//Position - 0xD03F5
{
	switch (iParam0)
	{
		case 91:
			return 867;
		case 92:
			return 868;
		case 93:
			return 869;
		case 94:
			return 870;
		case 95:
			return 871;
		case 96:
			return 872;
		case 97:
			return 873;
		case 98:
			return 874;
		case 99:
			return 875;
		case 100:
			return 876;
		case 101:
			return 877;
		case 102:
			return 878;
		default:
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD0509
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 815;
				case 1:
					return 816;
				case 2:
					return 817;
				case 3:
					return 818;
				case 4:
					return 819;
				case 5:
					return 820;
				case 6:
					return 821;
				case 7:
					return 822;
				case 8:
					return 823;
				case 9:
					return 824;
				case 10:
					return 825;
				case 11:
					return 826;
				default:
			}
			break;
	}
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD05B9
{
	switch (Global_1892703[iParam3 /*599*/].f_10.f_183)
	{
		case 1:
			return 845;
		case 2:
			return 846;
		case 3:
			return 847;
		case 4:
			return 848;
		case 5:
			return 849;
		case 6:
			return 850;
		case 7:
			return 851;
		case 8:
			return 852;
		case 9:
			return 853;
		case 10:
			return 854;
		case 11:
			return 855;
		case 12:
			return 856;
		case 13:
			return 857;
		case 14:
			return 858;
		case 15:
			return 859;
		case 16:
			return 860;
		case 17:
			return 861;
		case 18:
			return 862;
		case 19:
			return 863;
		case 20:
			return 864;
		case 21:
			return 865;
		case 22:
			return 866;
		default:
	}
	return 0;
}

int func_328(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD0896
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 755;
			break;
	}
	return 756;
}

void func_329(int iParam0)//Position - 0xD0BD0
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_193 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_193 = iParam0;
	}
}

bool func_330(int iParam0)//Position - 0xD0C48
{
	return __LIB_0__::func_165(iParam0, 25);
}

int func_331(int iParam0)//Position - 0xD0F68
{
	if (__LIB_12__::func_486(iParam0, 1))
	{
		return Global_1892703[__LIB_2__::func_39(iParam0) /*599*/].f_10.f_462;
	}
	return __LIB_0__::getMinusOneOrNull();
}

float func_332(int iParam0)//Position - 0xD3844
{
	return 35f;
}

float func_333()//Position - 0xD6B53
{
	return 100f;
}

float func_334(var uParam0)//Position - 0xD6DCF
{
	return -1f;
}

float func_335(var uParam0)//Position - 0xD6DE1
{
	return 6f;
}

float func_336(var uParam0)//Position - 0xD6DEA
{
	return 3f;
}

int func_337(int iParam0, int iParam1, bool bParam2)//Position - 0xD8B2A
{
	if (bParam2)
	{
		if ((!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 19) && !__LIB_0__::func_165(PLAYER::PLAYER_ID(), 20)) && !__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2789228.f_93[iParam0] == 1 && __LIB_0__::func_864(&(Global_2789228[iParam0 /*2*/])))
	{
		if (__LIB_1__::func_724(&(Global_2789228[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2789228.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_338(int iParam0)//Position - 0xD9660
{
	if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 != iParam0)
			{
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_462 = iParam0;
				if (iParam0 != __LIB_0__::getMinusOneOrNull())
				{
				}
			}
		}
	}
}

int func_339(int iParam0)//Position - 0xDD1A3
{
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 238 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_477;
	}
	return -1;
}

int func_340(int iParam0)//Position - 0xDD1DC
{
	if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 237 || __LIB_0__::func_492(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_476;
	}
	return -1;
}

void func_341()//Position - 0xDD4C7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1837161[iVar0], joaat("AGGRESSIVE_INVESTIGATE"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("AGGRESSIVE_INVESTIGATE"), Global_1837161[iVar0]);
		iVar0++;
	}
}

void func_342(int iParam0, int iParam1, bool bParam2)//Position - 0x1FEE
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			__LIB_15__::func_531(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		__LIB_15__::func_531(iVar0, iParam0);
	}
}

void func_343(bool bParam0, int iParam1)//Position - 0x328B5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				bVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (__LIB_1__::func_693(bVar4, 0, 1))
				{
					if (bVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (__LIB_10__::func_583(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar4 = iVar0;
			if (__LIB_1__::func_693(bVar4, 1, 1))
			{
				if (bVar4 != PLAYER::PLAYER_ID())
				{
					if (__LIB_3__::func_243(PLAYER::PLAYER_ID(), bVar4) <= 20f)
					{
						iVar1++;
						if (__LIB_10__::func_583(PLAYER::PLAYER_ID(), bVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((__LIB_1__::func_75(*iParam1, 100) * (10f * Global_262145.f_4227 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((__LIB_1__::func_75(*iParam1, 100) * (20f * Global_262145.f_4220 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

void func_344()//Position - 0x33BCC
{
	if (__LIB_1__::func_501())
	{
		if (Global_2715699.f_3076.f_134 > 0)
		{
			Global_2715699.f_3076.f_134 = (Global_2715699.f_3076.f_134 - 1);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715699.f_3076.f_134;
		}
	}
}

void func_345()//Position - 0x33C2A
{
	if (__LIB_1__::func_501())
	{
		if (Global_2715699.f_3076.f_134 < 10)
		{
			Global_2715699.f_3076.f_134++;
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_427 = Global_2715699.f_3076.f_134;
		}
	}
}

void func_346(bool bParam0)//Position - 0x395A4
{
	if (bParam0)
	{
		__LIB_1__::func_480(14);
	}
	else
	{
		__LIB_1__::func_482(14);
	}
}

int func_347(int iParam0)//Position - 0xAFF86
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<13> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar0 = __LIB_2__::func_893(iParam0);
	if (iVar0 > -1)
	{
		bVar1 = __LIB_2__::func_699(iParam0);
		if (!bVar1 == __LIB_0__::getMinusOneOrNull())
		{
			if (bVar1 == PLAYER::PLAYER_ID())
			{
				return 1;
			}
			bVar2 = __LIB_10__::func_583(PLAYER::PLAYER_ID(), bVar1);
			Var3 = { __LIB_1__::func_696(bVar1) };
			bVar4 = NETWORK::NETWORK_IS_FRIEND(&Var3);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bVar1), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
				{
					iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar6, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar6, false))
						{
							iVar5 = 1;
						}
					}
				}
			}
			bVar7 = __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar1);
			switch (iVar0)
			{
				case 0:
					return 1;
					break;
				case 1:
					if (bVar2)
					{
						return 1;
					}
					break;
				case 2:
					if (bVar4)
					{
						return 1;
					}
					break;
				case 3:
					if (bVar2 || bVar4)
					{
						return 1;
					}
					break;
				case 4:
					if (bVar7)
					{
						return 1;
					}
					break;
				case 5:
					if (((bVar2 || bVar4) || iVar5) || bVar7)
					{
						return 1;
					}
					break;
				case 6:
					return 0;
					break;
				}
			}
	}
	return 0;
}

int func_348()//Position - 0xBB876
{
	if (!__LIB_0__::func_893() || (Global_2703735.f_4.f_5 && !PED::IS_PED_ON_ANY_BIKE(Global_2703735.f_4.f_15)))
	{
		return 0;
	}
	return 1;
}

int func_349(bool bParam0)//Position - 0xBDC74
{
	int iVar0;
	int iVar1;
	iVar0 = joaat("WEAPON_UNARMED");
	iVar1 = 0;
	if (!bParam0 && __LIB_1__::func_360(256, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL");
		iVar1 = __LIB_1__::func_360(256, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(286, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_APPISTOL");
		iVar1 = __LIB_1__::func_360(286, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(266, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPISTOL");
		iVar1 = __LIB_1__::func_360(266, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(296, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MICROSMG");
		iVar1 = __LIB_1__::func_360(296, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(306, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG");
		iVar1 = __LIB_1__::func_360(306, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(389, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SAWNOFFSHOTGUN");
		iVar1 = __LIB_1__::func_360(389, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(417, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STUNGUN");
		iVar1 = __LIB_1__::func_360(417, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(468, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADE");
		iVar1 = __LIB_1__::func_360(468, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(477, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMOKEGRENADE");
		iVar1 = __LIB_1__::func_360(477, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(485, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_STICKYBOMB");
		iVar1 = __LIB_1__::func_360(485, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(494, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MOLOTOV");
		iVar1 = __LIB_1__::func_360(494, -1, 0);
	}
	if (__LIB_1__::func_360(198, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNIFE");
		iVar1 = __LIB_1__::func_360(198, -1, 0);
	}
	if (__LIB_1__::func_360(206, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NIGHTSTICK");
		iVar1 = __LIB_1__::func_360(206, -1, 0);
	}
	if (__LIB_1__::func_360(213, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CROWBAR");
		iVar1 = __LIB_1__::func_360(213, -1, 0);
	}
	if (__LIB_1__::func_360(234, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HAMMER");
		iVar1 = __LIB_1__::func_360(234, -1, 0);
	}
	if (__LIB_1__::func_360(241, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BAT");
		iVar1 = __LIB_1__::func_360(241, -1, 0);
	}
	if (__LIB_1__::func_360(248, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GOLFCLUB");
		iVar1 = __LIB_1__::func_360(248, -1, 0);
	}
	if (__LIB_1__::func_360(1736, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BOTTLE");
		iVar1 = __LIB_1__::func_360(1736, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(276, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL50");
		iVar1 = __LIB_1__::func_360(276, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(316, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSMG");
		iVar1 = __LIB_1__::func_360(316, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(326, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE");
		iVar1 = __LIB_1__::func_360(326, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(335, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE");
		iVar1 = __LIB_1__::func_360(335, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(10883, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = __LIB_1__::func_360(10883, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(1746, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL");
		iVar1 = __LIB_1__::func_360(1746, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(10894, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE");
		iVar1 = __LIB_1__::func_360(10894, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(10874, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYPISTOL");
		iVar1 = __LIB_1__::func_360(10874, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(344, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ADVANCEDRIFLE");
		iVar1 = __LIB_1__::func_360(344, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(353, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MG");
		iVar1 = __LIB_1__::func_360(353, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(362, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG");
		iVar1 = __LIB_1__::func_360(362, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(371, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTMG");
		iVar1 = __LIB_1__::func_360(371, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(380, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN");
		iVar1 = __LIB_1__::func_360(380, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(399, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPSHOTGUN");
		iVar1 = __LIB_1__::func_360(399, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(408, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTSHOTGUN");
		iVar1 = __LIB_1__::func_360(408, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(427, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNIPERRIFLE");
		iVar1 = __LIB_1__::func_360(427, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(436, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER");
		iVar1 = __LIB_1__::func_360(436, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(445, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GRENADELAUNCHER");
		iVar1 = __LIB_1__::func_360(445, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(452, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_RPG");
		iVar1 = __LIB_1__::func_360(452, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(461, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINIGUN");
		iVar1 = __LIB_1__::func_360(461, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11170, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_VINTAGEPISTOL");
		iVar1 = __LIB_1__::func_360(11170, -1, 0);
	}
	if (__LIB_1__::func_360(11160, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DAGGER");
		iVar1 = __LIB_1__::func_360(11160, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11180, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FIREWORK");
		iVar1 = __LIB_1__::func_360(11180, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11190, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MUSKET");
		iVar1 = __LIB_1__::func_360(11190, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11294, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PROXMINE");
		iVar1 = __LIB_1__::func_360(11294, -1, 0);
	}
	if (__LIB_1__::func_360(11286, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HATCHET");
		iVar1 = __LIB_1__::func_360(11286, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11302, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HOMINGLAUNCHER");
		iVar1 = __LIB_1__::func_360(11302, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(10883, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE");
		iVar1 = __LIB_1__::func_360(10883, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(10903, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_GUSENBERG");
		iVar1 = __LIB_1__::func_360(10903, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11268, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSHOTGUN");
		iVar1 = __LIB_1__::func_360(11268, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11278, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE");
		iVar1 = __LIB_1__::func_360(11278, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11312, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATPDW");
		iVar1 = __LIB_1__::func_360(11312, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11329, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANPISTOL");
		iVar1 = __LIB_1__::func_360(11329, -1, 0);
	}
	if (__LIB_1__::func_360(11320, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_KNUCKLE");
		iVar1 = __LIB_1__::func_360(11320, -1, 0);
	}
	if (__LIB_1__::func_360(11337, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHETE");
		iVar1 = __LIB_1__::func_360(11337, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11347, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MACHINEPISTOL");
		iVar1 = __LIB_1__::func_360(11347, -1, 0);
	}
	if (__LIB_1__::func_360(11383, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_FLASHLIGHT");
		iVar1 = __LIB_1__::func_360(11383, -1, 0);
	}
	if (__LIB_1__::func_360(11411, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SWITCHBLADE");
		iVar1 = __LIB_1__::func_360(11411, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11403, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER");
		iVar1 = __LIB_1__::func_360(11403, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11375, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DBSHOTGUN");
		iVar1 = __LIB_1__::func_360(11375, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11365, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTRIFLE");
		iVar1 = __LIB_1__::func_360(11365, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11454, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_AUTOSHOTGUN");
		iVar1 = __LIB_1__::func_360(11454, -1, 0);
	}
	if (__LIB_1__::func_360(11462, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BATTLEAXE");
		iVar1 = __LIB_1__::func_360(11462, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11470, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMPACTLAUNCHER");
		iVar1 = __LIB_1__::func_360(11470, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11480, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MINISMG");
		iVar1 = __LIB_1__::func_360(11480, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11488, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PIPEBOMB");
		iVar1 = __LIB_1__::func_360(11488, -1, 0);
	}
	if (__LIB_1__::func_360(11496, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_POOLCUE");
		iVar1 = __LIB_1__::func_360(11496, -1, 0);
	}
	if (__LIB_1__::func_360(227, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_WRENCH");
		iVar1 = __LIB_1__::func_360(227, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11942, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PISTOL_MK2");
		iVar1 = __LIB_1__::func_360(11942, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11952, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SMG_MK2");
		iVar1 = __LIB_1__::func_360(11952, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11932, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_HEAVYSNIPER_MK2");
		iVar1 = __LIB_1__::func_360(11932, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11922, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_COMBATMG_MK2");
		iVar1 = __LIB_1__::func_360(11922, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11902, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_ASSAULTRIFLE_MK2");
		iVar1 = __LIB_1__::func_360(11902, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11912, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CARBINERIFLE_MK2");
		iVar1 = __LIB_1__::func_360(11912, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11962, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_BULLPUPRIFLE_MK2");
		iVar1 = __LIB_1__::func_360(11962, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11982, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_MARKSMANRIFLE_MK2");
		iVar1 = __LIB_1__::func_360(11982, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11972, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_PUMPSHOTGUN_MK2");
		iVar1 = __LIB_1__::func_360(11972, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(11992, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_REVOLVER_MK2");
		iVar1 = __LIB_1__::func_360(11992, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(12012, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SNSPISTOL_MK2");
		iVar1 = __LIB_1__::func_360(12012, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(12022, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_SPECIALCARBINE_MK2");
		iVar1 = __LIB_1__::func_360(12022, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(12002, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_DOUBLEACTION");
		iVar1 = __LIB_1__::func_360(12002, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(12834, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_NAVYREVOLVER");
		iVar1 = __LIB_1__::func_360(12834, -1, 0);
	}
	if (!bParam0 && __LIB_1__::func_360(12824, -1, 0) > iVar1)
	{
		iVar0 = joaat("WEAPON_CERAMICPISTOL");
		iVar1 = __LIB_1__::func_360(12824, -1, 0);
	}
	return iVar0;
}

void func_350(bool bParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xC2FE5
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	if (__LIB_3__::func_440(&(Global_2678393.f_756[bParam0]), &(Global_2678393.f_1119[bParam0]), &(Global_2678393.f_392), bParam2, bParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2678393.f_558[bParam0] = fParam1;
		}
	}
}

void func_351(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC30D0
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	__LIB_3__::func_440(&(Global_2678393.f_921[bParam0]), &(Global_2678393.f_1284[bParam0]), &(Global_2678393.f_398), bParam1, bParam0, bParam2, &uVar0);
}

bool func_352(bool bParam0)//Position - 0xC310E
{
	return __LIB_15__::func_303(Global_2678393.f_921[bParam0], &(Global_2678393.f_398), bParam0);
}

int func_353(int iParam0)//Position - 0xCDE19
{
	if (__LIB_0__::func_492(iParam0) == 225 || __LIB_0__::func_492(iParam0) == 226)
	{
		return __LIB_0__::func_525(iParam0);
	}
	return -1;
}

void func_354(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCF04D
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	__LIB_3__::func_440(&(Global_2678393.f_789[bParam0]), &(Global_2678393.f_1152[bParam0]), &(Global_2678393.f_394), bParam1, bParam0, bParam2, &uVar0);
}

int func_355(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0xD08C3
{
	switch (iParam0)
	{
		case 11:
		case 5:
		case 6:
		case 10:
			if (__LIB_3__::func_486(iParam3) == 1)
			{
				return 762;
			}
			else
			{
				return 761;
			}
			break;
		case 9:
			return 758;
		case 7:
			return 764;
		case 8:
			return 759;
		case 13:
			return 760;
		case 16:
		case 19:
		case 14:
		case 15:
		case 20:
		case 21:
		case 18:
			return 757;
		case 1:
			return 763;
	}
	return 0;
}

int func_356()//Position - 0xD63B1
{
	if (__LIB_5__::func_301(PLAYER::PLAYER_ID()) && __LIB_15__::func_350())
	{
		return 1;
	}
	if (__LIB_12__::func_542())
	{
		return 1;
	}
	return 0;
}

int func_357(int iParam0)//Position - 0xDBDA5
{
	if (__LIB_0__::func_492(iParam0) == 262)
	{
		return __LIB_0__::func_525(iParam0);
	}
	return -1;
}

int func_358(int iParam0)//Position - 0xDBE27
{
	if (__LIB_0__::func_492(iParam0) == 263)
	{
		return __LIB_0__::func_525(iParam0);
	}
	return -1;
}

int func_359(bool bParam0)//Position - 0xDCE34
{
	if (bParam0)
	{
		return 0;
	}
	if (__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_360(int iParam0, int iParam1)//Position - 0xDD14A
{
	if (__LIB_0__::func_492(iParam0) == iParam1)
	{
		return __LIB_0__::func_525(iParam0);
	}
	return -1;
}

int func_361(int iParam0)//Position - 0xDD185
{
	if (__LIB_0__::func_492(iParam0) == 299)
	{
		return __LIB_0__::func_525(iParam0);
	}
	return -1;
}

int func_362(int iParam0, bool bParam1)//Position - 0xDD657
{
	return __LIB_1__::func_876(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_363()//Position - 0xDDE1C
{
	if (__LIB_15__::func_590())
	{
		__LIB_13__::func_250(0);
		__LIB_13__::func_250(1);
		__LIB_13__::func_250(2);
		__LIB_13__::func_250(3);
		__LIB_13__::func_250(4);
		__LIB_13__::func_250(5);
		if (__LIB_13__::func_251(32))
		{
			if (__LIB_4__::func_854(__LIB_15__::func_433(), 3))
			{
				__LIB_0__::func_506(__LIB_15__::func_433(), 3);
			}
			__LIB_13__::func_250(32);
		}
	}
}

void func_364()//Position - 0xDDF1B
{
	if (__LIB_15__::func_591())
	{
		__LIB_13__::func_252(0);
		__LIB_13__::func_252(1);
		__LIB_13__::func_252(2);
		__LIB_13__::func_252(3);
		__LIB_13__::func_252(4);
		__LIB_13__::func_252(5);
		__LIB_13__::func_252(6);
		__LIB_13__::func_252(7);
		if (__LIB_13__::func_253(8))
		{
			__LIB_13__::func_252(8);
		}
		if (__LIB_13__::func_253(15))
		{
			if (__LIB_4__::func_854(__LIB_15__::func_434(), 3))
			{
				__LIB_0__::func_506(__LIB_15__::func_434(), 3);
			}
			__LIB_13__::func_252(15);
		}
	}
}

void func_365()//Position - 0xDE060
{
	if (__LIB_15__::func_592())
	{
		__LIB_13__::func_258(0);
		__LIB_13__::func_258(1);
		__LIB_13__::func_258(2);
		__LIB_13__::func_258(3);
		__LIB_13__::func_258(4);
		__LIB_13__::func_258(5);
		__LIB_13__::func_258(6);
		__LIB_13__::func_258(7);
		__LIB_13__::func_258(8);
		__LIB_13__::func_258(9);
		__LIB_13__::func_258(10);
		__LIB_13__::func_258(11);
		__LIB_13__::func_258(12);
		if (__LIB_13__::func_259(13))
		{
			if (__LIB_4__::func_854(__LIB_15__::func_435(), 3))
			{
				__LIB_0__::func_506(__LIB_15__::func_435(), 3);
			}
			__LIB_13__::func_258(13);
		}
	}
}

int func_366()//Position - 0x39D9A
{
	if (__LIB_4__::func_934(Global_2703735, 1))
	{
		return 50;
	}
	return 0;
}

int func_367(int iParam0)//Position - 0xAEA1F
{
	if (((__LIB_4__::func_934(iParam0, 1) || __LIB_1__::func_15(iParam0)) || __LIB_0__::func_321(iParam0, 0)) || __LIB_3__::func_462(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xC06E1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_2__::func_40(iVar1, 0))
			{
				if (__LIB_12__::func_558(iVar1) || __LIB_12__::func_485(iVar1, bParam4))
				{
					if (__LIB_1__::func_876(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_369(bool bParam0, bool bParam1, bool bParam2)//Position - 0xC2E85
{
	var uVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	__LIB_3__::func_440(&(Global_2678393.f_723[bParam0]), &(Global_2678393.f_1086[bParam0]), &(Global_2678393.f_393), bParam1, bParam0, bParam2, &uVar0);
}

int func_370(int iParam0)//Position - 0xCD19E
{
	if ((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249)
	{
		return 1;
	}
	if (iParam0 == 237 && __LIB_4__::func_373(__LIB_12__::func_547(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	if ((iParam0 == 299 || iParam0 == 300) || iParam0 == 301)
	{
		return 1;
	}
	return 0;
}

void func_371(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xD8214
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__::getMinusOneOrNull())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && __LIB_12__::func_534())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_372(int iParam0, bool bParam1)//Position - 0xD9AFD
{
	var uVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_794(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17465 /* Tunable: -373027461 */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17470 /* Tunable: 1195564032 */;
			}
			break;
		case 3:
			uVar0 = Global_262145.f_17464 /* Tunable: -730135062 */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17469 /* Tunable: -660914094 */;
			}
			break;
		case 4:
			uVar0 = Global_262145.f_17463 /* Tunable: -161187879 */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17468 /* Tunable: 1500658261 */;
			}
			break;
		case 0:
			uVar0 = Global_262145.f_17461 /* Tunable: -1839004359 */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17466 /* Tunable: -192060672 */;
			}
			break;
		case 2:
			uVar0 = Global_262145.f_17462 /* Tunable: 631857857 */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17467 /* Tunable: -891680742 */;
			}
			break;
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21595 /* Tunable: 1485279815 */;
				if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21596 /* Tunable: 2041812011 */;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21579 /* Tunable: -1652502760 */;
				if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21580 /* Tunable: 1647327744 */;
				}
			}
			break;
	}
	return uVar0;
}

int func_373(int iParam0, bool bParam1)//Position - 0xDA170
{
	if (!__LIB_12__::func_531(PLAYER::PLAYER_ID(), iParam0))
	{
		return 0;
	}
	if (!bParam1 && !__LIB_13__::func_3(PLAYER::PLAYER_ID(), iParam0))
	{
		return 0;
	}
	if (!bParam1 && !__LIB_12__::func_544(PLAYER::PLAYER_ID(), __LIB_7__::func_933(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_374(int iParam0, int iParam1)//Position - 0xDCBC3
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = __LIB_12__::func_953(iParam0, iParam1, 2);
	bVar1 = __LIB_12__::func_953(iParam0, iParam1, 1);
	bVar2 = __LIB_12__::func_953(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

void func_375()//Position - 0xDD974
{
	if (__LIB_15__::func_633())
	{
		__LIB_15__::func_429(0);
		__LIB_15__::func_429(1);
		__LIB_15__::func_429(2);
		__LIB_15__::func_429(3);
	}
}

void func_376()//Position - 0xDDA1C
{
	if (__LIB_15__::func_634())
	{
		__LIB_12__::func_527(4);
		__LIB_12__::func_527(5);
		__LIB_12__::func_527(6);
		__LIB_12__::func_527(7);
	}
}

void func_377()//Position - 0xDDAC4
{
	int iVar0;
	if (__LIB_15__::func_589())
	{
		__LIB_15__::func_432(8);
		__LIB_15__::func_432(9);
		__LIB_15__::func_432(10);
		__LIB_15__::func_432(12);
		__LIB_15__::func_432(13);
		__LIB_15__::func_432(14);
		__LIB_15__::func_432(19);
		__LIB_15__::func_432(20);
		__LIB_15__::func_432(21);
		__LIB_15__::func_432(22);
		__LIB_15__::func_432(23);
		__LIB_15__::func_432(24);
		__LIB_15__::func_432(25);
		__LIB_15__::func_432(26);
		__LIB_15__::func_432(15);
		__LIB_15__::func_432(16);
		__LIB_15__::func_432(17);
		__LIB_15__::func_432(18);
		__LIB_15__::func_432(35);
		__LIB_15__::func_432(45);
		__LIB_15__::func_432(46);
		if (__LIB_15__::func_375(11))
		{
			__LIB_15__::func_432(11);
			iVar0 = __LIB_1__::func_360(7229, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			__LIB_1__::func_354(7229, iVar0, -1, 1, 0);
		}
	}
	if (__LIB_15__::func_375(48))
	{
		if (__LIB_4__::func_854(151, 3))
		{
			__LIB_0__::func_506(151, 3);
		}
		__LIB_15__::func_432(48);
	}
	if (__LIB_15__::func_375(49))
	{
		if (__LIB_4__::func_854(152, 3))
		{
			__LIB_0__::func_506(152, 3);
		}
		__LIB_15__::func_432(49);
	}
	if (__LIB_15__::func_375(50))
	{
		if (__LIB_4__::func_854(153, 3))
		{
			__LIB_0__::func_506(153, 3);
		}
		__LIB_15__::func_432(50);
	}
	if (__LIB_15__::func_375(51))
	{
		if (__LIB_4__::func_854(__LIB_15__::func_438(), 3))
		{
			__LIB_0__::func_506(__LIB_15__::func_438(), 3);
		}
		__LIB_15__::func_432(51);
	}
}

int func_378()//Position - 0xC2099
{
	if (__LIB_12__::func_553())
	{
		return 1;
	}
	if (__LIB_3__::func_491(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_999())
	{
		return 1;
	}
	if (__LIB_1__::func_15(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_1__::func_592(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			case 140:
				if (!__LIB_1__::func_785(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 129:
				if (!__LIB_1__::func_785(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 174:
				if (!__LIB_1__::func_785(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

var func_379(bool bParam0)//Position - 0xCD4AD
{
	var uVar0;
	int iVar1;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (__LIB_9__::func_455(4, 0))
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if (__LIB_9__::func_455(5, 0))
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if (__LIB_9__::func_455(6, 1))
		{
			MISC::SET_BIT(&uVar0, 2);
		}
		if (__LIB_9__::func_455(1, 0))
		{
			MISC::SET_BIT(&uVar0, 3);
		}
		if (__LIB_9__::func_455(2, 0))
		{
			MISC::SET_BIT(&uVar0, 4);
		}
		if (__LIB_9__::func_455(3, 0))
		{
			MISC::SET_BIT(&uVar0, 5);
		}
		if ((((__LIB_9__::func_120(61) || __LIB_9__::func_120(62)) || __LIB_9__::func_120(63)) || __LIB_9__::func_120(64)) || __LIB_9__::func_120(65))
		{
			MISC::SET_BIT(&uVar0, 6);
		}
		if (__LIB_3__::func_39(iVar1))
		{
			MISC::SET_BIT(&uVar0, 7);
		}
		if (__LIB_9__::func_119(iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, 8);
		}
		if (__LIB_9__::func_119(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 9);
		}
		if (__LIB_9__::func_119(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 10);
		}
		if (__LIB_8__::func_842(iVar1))
		{
			MISC::SET_BIT(&uVar0, 11);
		}
		if (__LIB_13__::func_150(iVar1, 3))
		{
			MISC::SET_BIT(&uVar0, 12);
		}
		if (__LIB_13__::func_150(iVar1, 4))
		{
			MISC::SET_BIT(&uVar0, 13);
		}
		if (__LIB_13__::func_150(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 14);
		}
		if (__LIB_13__::func_150(iVar1, 6))
		{
			MISC::SET_BIT(&uVar0, 15);
		}
		if (__LIB_13__::func_150(iVar1, 5))
		{
			MISC::SET_BIT(&uVar0, 16);
		}
		if (__LIB_12__::func_539(iVar1))
		{
			MISC::SET_BIT(&uVar0, 17);
		}
		if (__LIB_13__::func_150(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 18);
		}
		if (__LIB_1__::func_655(iVar1))
		{
			MISC::SET_BIT(&uVar0, 19);
		}
		if (__LIB_1__::func_641(iVar1))
		{
			MISC::SET_BIT(&uVar0, 20);
		}
		if (__LIB_3__::func_929(iVar1))
		{
			MISC::SET_BIT(&uVar0, 21);
		}
		if (__LIB_1__::func_595(iVar1))
		{
			MISC::SET_BIT(&uVar0, 22);
		}
		if (__LIB_1__::func_124(iVar1))
		{
			MISC::SET_BIT(&uVar0, 23);
		}
		if (__LIB_3__::func_981(iVar1))
		{
			MISC::SET_BIT(&uVar0, 24);
		}
		if (__LIB_1__::func_781(iVar1))
		{
			MISC::SET_BIT(&uVar0, 25);
		}
		if (__LIB_4__::func_673(iVar1))
		{
			MISC::SET_BIT(&uVar0, 26);
		}
		if (__LIB_9__::func_118())
		{
			MISC::SET_BIT(&uVar0, 27);
		}
		if (__LIB_4__::func_280(iVar1))
		{
			MISC::SET_BIT(&uVar0, 28);
		}
		if (__LIB_3__::func_949(iVar1))
		{
			MISC::SET_BIT(&uVar0, 29);
		}
		if (__LIB_3__::func_812(iVar1))
		{
			MISC::SET_BIT(&uVar0, 30);
		}
		if (__LIB_3__::func_692(iVar1))
		{
			MISC::SET_BIT(&uVar0, 31);
		}
	}
	return uVar0;
}

int func_380(int iParam0)//Position - 0x35D34
{
	if (((__LIB_1__::func_597(Global_1853348[iParam0 /*834*/].f_267.f_32) || __LIB_8__::func_260(iParam0)) || __LIB_7__::func_726(iParam0)) || __LIB_10__::func_972(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_381(int iParam0)//Position - 0xBC820
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_18__::func_530(Global_4718592.f_168757))
	{
		if (__LIB_3__::func_105(iParam0))
		{
			return;
		}
	}
	iVar0 = __LIB_2__::func_83(iParam0);
	if (((iVar0 == 0 || iVar0 == 29) || iVar0 == 33) || iVar0 == 31)
	{
		return;
	}
	iVar1 = iVar0;
	while (iVar1 >= 0)
	{
		iVar2 = __LIB_6__::func_155(iVar1, 0);
		if (__LIB_12__::func_312(iVar2, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar2, true);
					return;
				}
			}
		}
		iVar1 = (iVar1 + -1);
	}
	iVar1 = iVar0;
	while (iVar1 <= 94)
	{
		iVar3 = __LIB_6__::func_155(iVar1, 0);
		if (__LIB_12__::func_312(iVar3, -1))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar3, true);
					return;
				}
			}
		}
		iVar1++;
	}
}

void func_382(var uParam0, int iParam1)//Position - 0xBF6F9
{
	if (__LIB_12__::func_551(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (__LIB_12__::func_557(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((BitTest(Global_4718592.f_27, 15) && iParam1 > -1) && iParam1 < 32) && BitTest(Global_2689235[iParam1 /*453*/].f_425, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (__LIB_2__::func_75())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_383(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0xC09AA
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = __LIB_2__::func_8(iParam1);
	fVar4 = __LIB_2__::func_7();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (__LIB_1__::func_828())
		{
			if (__LIB_2__::func_6() > 0 && Global_1836359)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!__LIB_12__::func_560())
		{
			__LIB_2__::func_122(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (BitTest(Global_2815059.f_4660, 26))
	{
		__LIB_2__::func_122(iParam0, uParam2, 1);
		return 0;
	}
	if (!__LIB_0__::func_864(&(uParam2->f_19)))
	{
		if (__LIB_2__::func_6() == 1)
		{
			__LIB_2__::func_4(bVar3, iParam0, 0);
			__LIB_0__::func_795(&(uParam2->f_19), 0, 0);
			__LIB_2__::func_122(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2815059.f_4662), 5);
		}
	}
	if (__LIB_0__::func_864(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (__LIB_0__::func_937(&(uParam2->f_19), 10000, 0) || (__LIB_2__::func_6() == 0 && !bParam5))
		{
			__LIB_2__::func_122(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				__LIB_2__::func_3();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!BitTest(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					__LIB_2__::func_3();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (__LIB_2__::func_4(bVar3, iParam0, 0))
				{
					__LIB_1__::func_990(iParam0, 0, 0);
					sVar1 = __LIB_2__::func_166(iParam1, &(Global_4718592.f_116531), bParam4);
					Var0 = { __LIB_2__::func_165(iParam1) };
					if (bParam4)
					{
						__LIB_2__::func_147(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						__LIB_1__::func_998(iParam0, __LIB_2__::func_146(uParam2), __LIB_2__::func_145(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = __LIB_12__::func_559(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar6 = sParam6;
						}
						__LIB_1__::func_997(iParam0, sVar6, __LIB_2__::func_120(), -1);
					}
					else if (__LIB_2__::func_75())
					{
						uParam2->f_34 = Global_1836358;
						__LIB_2__::func_147(iParam0, sVar1, &Var0, 1, -1, Global_1836358, 1);
					}
					else if (bVar2)
					{
						iVar5 = __LIB_2__::func_64(iParam1);
						uParam2->f_34 = Global_1836358;
						__LIB_2__::func_147(iParam0, sVar1, "", 0, iVar5, __LIB_1__::func_996(), 1);
					}
					else
					{
						iVar5 = __LIB_2__::func_64(iParam1);
						__LIB_2__::func_147(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (BitTest(uParam2->f_33, 0))
			{
				Global_1836357 = uParam3;
				Global_1836356 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1836358)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_384(int iParam0)//Position - 0xD1F
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		default:
	}
	return 0;
}

void func_385(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEBB
{
	struct<7> Var0;
	Var0.f_0 = -1946222827;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iParam1);
	}
}

int func_386(int iParam0)//Position - 0x3CF9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("akula") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("annihilator2"))
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

void func_387(int iParam0, int iParam1)//Position - 0x3D9C
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", true);
	}
}

int func_388(int iParam0)//Position - 0x17543
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(iParam0, 1, 1))
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 3);
	}
	return 0;
}

int func_389(int iParam0, int iParam1)//Position - 0x2032E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2681762.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_390(bool bParam0)//Position - 0x20367
{
	int iVar0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar0 /*75*/] == bParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_391(int iParam0)//Position - 0x210A3
{
	return __LIB_1__::func_730();
}

Vector3 func_392(int iParam0, int iParam1)//Position - 0x21430
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				case 1:
					return -1f, -2f, -0.1f;
				case 2:
					return 1f, -2f, -0.1f;
				case 3:
					return -1f, -2f, -0.1f;
				default:
			}
			break;
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				case 1:
					return -0.5f, 0f, -0.1f;
				case 2:
					return 0.5f, 0f, -0.1f;
				case 3:
					return -0.5f, 0f, -0.1f;
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		case 1:
			return -1f, 0f, -0.1f;
		case 2:
			return 1f, 0f, -0.1f;
		case 3:
			return -1f, 0f, -0.1f;
		default:
	}
	return 0f, -1f, -0.1f;
}

void func_393(int iParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x21C45
{
	if (iParam0 <= iParam1)
	{
	}
}

void func_394(int iParam0)//Position - 0x2EB74
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2815059.f_5195.f_35[iVar0]), iVar1);
}

void func_395(int iParam0)//Position - 0x30413
{
	struct<106> Var0;
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return;
	}
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2789412[iParam0 /*106*/] = { Var0 };
}

int func_396()//Position - 0x31EFB
{
	int iVar0;
	iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_845(Global_1852994.f_19, -1))
	{
		if (iVar0 == 293)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_397(int iParam0)//Position - 0x35A6C
{
	if (iParam0 != 0)
	{
		return Global_1952191.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

char* func_398()//Position - 0x35C1F
{
	return "BHH_HELD" /* GXT: You are already carrying Goods. */;
}

void func_399(int iParam0)//Position - 0x35DE4
{
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 != iParam0)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_179 = iParam0;
	}
}

void func_400(var uParam0, bool bParam1)//Position - 0x376A3
{
	HUD::SET_BLIP_FLASHES(*uParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*uParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*uParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

char* func_401()//Position - 0x3771B
{
	return "FMC_BLIP_ME" /* GXT: Package */;
}

int func_402(int iParam0)//Position - 0x37AB2
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		default:
	}
	return 1;
}

int func_403()//Position - 0x38439
{
	int iVar0;
	if (BitTest(Global_2815059.f_4630, 2))
	{
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::getMinusOneOrNull())
			{
				if (Global_2689235[iVar0 /*453*/].f_208)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_404()//Position - 0x385A5
{
	return 20000;
}

void func_405(struct<3> Param0, struct<3> Param1, int iParam2, float fParam3)//Position - 0xAE817
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - fParam3);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, Param1, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

int func_406(int iParam0)//Position - 0xB8DBF
{
	if (__LIB_4__::func_184(__LIB_0__::func_492(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_407(int iParam0)//Position - 0xB9683
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("oppressor2"))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

char* func_408()//Position - 0xBBDA8
{
	return "FMH_LEFTRANGE" /* GXT: You are out of range of the Freemode Event that is currently in progress. Press ~INPUT_CONTEXT~ to continue participating. */;
}

bool func_409()//Position - 0xBBF6C
{
	return BitTest(Global_2815059.f_1797, 9);
}

float func_410()//Position - 0xBF6F1
{
	return 5f;
}

char* func_411(int iParam0)//Position - 0xBFECA
{
	return "PROVOKE_TRESPASS";
}

int func_412(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xC00EF
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, bParam3);
		return 1;
	}
	return 0;
}

bool func_413(bool bParam0)//Position - 0xC0794
{
	return __LIB_3__::func_458(&(Global_2678393.f_756[bParam0]));
}

bool func_414(bool bParam0)//Position - 0xC0816
{
	return __LIB_3__::func_458(&(Global_2678393.f_591[bParam0]));
}

bool func_415(bool bParam0)//Position - 0xC0986
{
	return __LIB_3__::func_458(&(Global_2678393.f_888[bParam0]));
}

int func_416()//Position - 0xC1BBD
{
	if ((CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_417()//Position - 0xC2399
{
	int iVar0;
	if (BitTest(Global_2815059.f_4624, 4))
	{
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::getMinusOneOrNull())
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 17))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_418()//Position - 0xC2651
{
	return 0.7f;
}

int func_419(int iParam0, int iParam1)//Position - 0xC3659
{
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 126))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 84))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 97))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 116))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 94))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 124))
	{
		return 1;
	}
	if (PED::HAS_PED_RECEIVED_EVENT(iParam1, 23))
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0)//Position - 0xC48E6
{
	switch (iParam0)
	{
		case 7:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_421(int iParam0, int iParam1, var uParam2)//Position - 0xC530D
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -2005151571;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar1 = __LIB_4__::func_970(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_422(int iParam0)//Position - 0xC54DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 235)
	{
		iVar0 = iVar2;
		iVar1 = __LIB_1__::func_389(iVar0);
		if (iVar1 == iParam0)
		{
			return iVar0;
		}
		iVar2++;
	}
	return -1;
}

bool func_423()//Position - 0xC6500
{
	return __LIB_1__::func_730() == PLAYER::PLAYER_ID();
}

int func_424(var uParam0, var uParam1)//Position - 0xCBD51
{
	int iVar0;
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != (*uParam1)[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_425(int iParam0)//Position - 0xCBE03
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 3;
		default:
	}
	return 32;
}

int func_426(int iParam0)//Position - 0xCBE81
{
	switch (iParam0)
	{
		case 0:
			return 44;
		default:
	}
	return 49;
}

void func_427(var uParam0, int iParam1)//Position - 0xCBE9D
{
	if (!__LIB_3__::func_479(uParam0, iParam1))
	{
		__LIB_7__::func_698(uParam0, iParam1);
	}
}

int func_428(int iParam0)//Position - 0xCBF31
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 9:
			return 3;
		case 11:
			return 6;
		case 12:
			return 7;
		case 13:
			return 9;
		default:
	}
	return 13;
}

int func_429(int iParam0)//Position - 0xCBFD7
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		default:
	}
	return 17;
}

int func_430(int iParam0)//Position - 0xCC061
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 5:
			return 6;
		case 6:
			return 7;
		case 7:
			return 10;
		case 8:
			return 11;
		case 9:
			return 12;
		case 10:
			return 13;
		case 11:
			return 14;
		case 1:
			return 1;
		case 4:
			return 22;
		case 13:
			return 23;
		case 14:
			return 24;
		case 15:
			return 25;
		case 16:
			return 28;
		default:
	}
	return 32;
}

int func_431(int iParam0)//Position - 0xCC169
{
	switch (iParam0)
	{
		case 4:
			return 5;
		case 3:
			return 3;
		case 5:
			return 6;
		case 6:
			return 8;
		case 7:
			return 11;
		case 9:
			return 17;
		case 10:
			return 10;
		case 12:
			return 18;
		case 13:
			return 19;
		case 14:
			return 20;
		case 15:
			return 21;
		case 16:
			return 22;
		default:
	}
	return 25;
}

int func_432(int iParam0)//Position - 0xCC254
{
	switch (iParam0)
	{
		case 6:
			return 6;
		case 14:
			return 13;
		case 15:
			return 15;
		case 25:
			return 21;
		default:
	}
	return 23;
}

int func_433(int iParam0)//Position - 0xCC2E8
{
	switch (iParam0)
	{
		case 0:
			return 38;
		default:
	}
	return 48;
}

int func_434(int iParam0)//Position - 0xCC372
{
	switch (iParam0)
	{
		case 3:
			return 10;
		case 29:
			return 37;
		case 11:
			return 14;
		case 18:
			return 1;
		case 22:
			return 31;
		case 7:
			return 30;
		case 23:
			return 28;
		case 24:
			return 32;
		case 17:
			return 25;
		case 25:
			return 33;
		case 5:
			return 13;
		case 13:
			return 15;
		case 15:
			return 17;
		case 42:
			return 46;
		case 19:
			return 26;
		case 20:
			return 27;
		case 26:
			return 34;
		case 30:
			return 38;
		case 34:
			return 42;
		case 37:
			return 43;
		case 40:
			return 45;
		case 43:
			return 47;
		case 44:
			return 48;
		case 4:
			return 12;
		case 10:
			return 11;
		case 36:
			return 39;
		case 32:
			return 39;
		case 45:
			return 0;
		case 6:
			return 4;
		case 9:
			return 3;
		case 35:
			return 7;
		case 47:
			return 19;
		default:
	}
	return 49;
}

int func_435(bool bParam0)//Position - 0xCC65B
{
	return Global_2678393.f_426[bParam0];
}

void func_436(int iParam0)//Position - 0xCCACA
{
	if (__LIB_1__::func_458(&(Global_2703735.f_169), iParam0))
	{
	}
}

void func_437(bool bParam0)//Position - 0xCCB53
{
	Global_2726836 = bParam0;
}

void func_438(bool bParam0)//Position - 0xCCB85
{
	if (Global_2815059.f_6731 != bParam0)
	{
		Global_2815059.f_6731 = bParam0;
	}
}

void func_439(bool bParam0)//Position - 0xCCC97
{
	if (!bParam0 == Global_2667225.f_45.f_317)
	{
		Global_2667225.f_45.f_317 = bParam0;
	}
}

void func_440(int iParam0)//Position - 0xCD2D2
{
	Global_77126 = iParam0;
}

int func_441(int iParam0)//Position - 0xCDE63
{
	if (__LIB_0__::func_321(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_193;
	}
	return -1;
}

int func_442(int iParam0)//Position - 0xD0676
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
		if (iVar0 != -1)
		{
			if (Global_2689235[iVar0 /*453*/].f_262)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_443(int iParam0)//Position - 0xD0FE2
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		VEHICLE::SET_BOAT_ANCHOR(iParam0, false);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam0, 1);
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
}

int func_444(var uParam0)//Position - 0xD2C59
{
	return 262144;
}

struct<35> func_445(var uParam0)//Position - 0xD2D8F
{
	struct<35> Var0;
	Var0.f_4 = 1125515264;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 1176255488;
	Var0.f_10 = 1;
	Var0.f_13 = 1;
	Var0.f_15 = 2;
	Var0.f_22 = 2;
	Var0.f_25 = 1;
	Var0.f_26 = 1;
	Var0.f_29 = 1123024896;
	Var0.f_30 = 1;
	Var0.f_1 = 1;
	Var0.f_5 = 0;
	Var0.f_6 = 1;
	Var0.f_10 = 0;
	Var0.f_12 = 1;
	Var0.f_4 = 150f;
	Var0.f_0 = 0f;
	Var0.f_27 = 0;
	return Var0;
}

float func_446(var uParam0)//Position - 0xD2E6F
{
	return 40000f;
}

int func_447(var uParam0)//Position - 0xD2E7C
{
	return joaat("SCRIPT_TASK_WANDER_STANDARD");
}

void func_448(var uParam0, int iParam1)//Position - 0xD2E92
{
	WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("WEAPON_UNARMED"), true);
}

int func_449()//Position - 0xD2EA6
{
	return joaat("FIRING_PATTERN_FULL_AUTO");
}

void func_450(int iParam0)//Position - 0xD2FF1
{
	TASK::CLEAR_PED_TASKS(iParam0);
}

int func_451()//Position - 0xD3466
{
	return 600000;
}

int func_452()//Position - 0xD34C6
{
	return 1350;
}

void func_453(var uParam0)//Position - 0xD38B0
{
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_308 = uParam0;
}

void func_454()//Position - 0xD44F6
{
	if (__LIB_19__::func_330(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_967(25);
	}
}

void func_455(struct<3> Param0, var uParam1, var uParam2, bool bParam3)//Position - 0x1FF9
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	fVar0 = 0.1f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam3)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (__LIB_0__::func_680())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (__LIB_0__::func_680())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (__LIB_0__::func_680())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		case 1:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		case 2:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		case 3:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		case 4:
			*uParam1 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		case 5:
			*uParam1 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam2 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

void func_456(int iParam0)//Position - 0x3B45
{
	int iVar0;
	__LIB_15__::func_287(iParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		MISC::SET_BIT(&iVar0, 10);
		MISC::SET_BIT(&iVar0, 11);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_457(int iParam0, int iParam1)//Position - 0x3E08
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, false);
			break;
	}
	__LIB_1__::func_477(iParam0);
}

int func_458(int iParam0, bool bParam1)//Position - 0x20F8F
{
	int iVar0;
	iVar0 = __LIB_19__::func_272(iParam0);
	return (iVar0 + bParam1);
}

void func_459()//Position - 0x20FCB
{
	Global_1952191.f_5479.f_3 = 0;
	Global_1952191.f_5479.f_4 = 0;
	Global_1952191.f_5479 = { __LIB_19__::func_274() };
}

int func_460()//Position - 0x2EA61
{
	return __LIB_7__::func_943();
}

int func_461()//Position - 0x2EA7F
{
	return __LIB_7__::func_944();
}

bool func_462(int iParam0)//Position - 0x31B80
{
	return __LIB_0__::func_428(iParam0);
}

int func_463(int iParam0)//Position - 0x329B9
{
	int iVar0;
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return iParam0;
	}
	if (__LIB_12__::func_481(iParam0) != -1)
	{
		iVar0 = __LIB_0__::func_172(__LIB_12__::func_481(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_12__::func_486(iParam0, 0))
			{
				return __LIB_2__::func_39(iParam0);
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

Vector3 func_464(int iParam0)//Position - 0x35A8E
{
	switch (iParam0)
	{
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 801:
		case 802:
			return __LIB_3__::func_606(__LIB_3__::func_482(iParam0));
		default:
	}
	return 0f, 0f, 0f;
}

void func_465(bool bParam0)//Position - 0x35E67
{
	if (bParam0)
	{
		__LIB_19__::func_288(8);
		__LIB_19__::func_287(1);
	}
	else
	{
		__LIB_19__::func_288(-1);
		__LIB_19__::func_287(0);
	}
}

Vector3 func_466(int iParam0)//Position - 0x36611
{
	int iVar0;
	if (__LIB_19__::func_289(iParam0))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	return 0f, 0f, 0f;
}

int func_467(int iParam0)//Position - 0x377C9
{
	int iVar0;
	iVar0 = __LIB_19__::func_284(iParam0);
	if (iVar0 != -1)
	{
		return __LIB_1__::func_357(iVar0);
	}
	return 1;
}

void func_468(struct<2> Param0)//Position - 0x37DBE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) && __LIB_3__::func_685(Param0, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (__LIB_19__::func_291(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 0);
		__LIB_19__::func_290();
	}
}

int func_469()//Position - 0x38EA7
{
	int iVar0;
	iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	if (__LIB_1__::func_726(iVar0) == 0 || __LIB_1__::func_726(iVar0) == 3)
	{
		return -1;
	}
	if (__LIB_15__::func_379(iVar0))
	{
		return 65;
	}
	if (__LIB_3__::func_709(iVar0))
	{
		return 66;
	}
	if (__LIB_12__::func_509(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_470(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0xA26F3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((__LIB_1__::func_693(iVar1, 1, 1) && __LIB_1__::func_908(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!__LIB_1__::func_0(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (__LIB_1__::func_429(__LIB_1__::func_694(iVar1), Param0, fParam1, fParam2, fParam3, fParam4))
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

int func_471(bool bParam0, bool bParam1)//Position - 0xBD0A9
{
	int iVar0;
	int iVar1;
	iVar0 = 116;
	if ((!bParam1 && __LIB_1__::func_15(bParam0)) && !__LIB_0__::func_428(bParam0))
	{
		iVar0 = __LIB_1__::func_259();
	}
	iVar1 = __LIB_19__::func_284(bParam0);
	if (!iVar1 == -1)
	{
		return __LIB_1__::func_357(iVar1);
	}
	return iVar0;
}

bool func_472(bool bParam0)//Position - 0xC0708
{
	return __LIB_3__::func_458(&(Global_2678393.f_723[bParam0]));
}

void func_473(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xC0D01
{
	struct<14> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	Var0.f_2 = -1346244703;
	Var0.f_10 = iParam1;
	Var0.f_11 = iParam2;
	Var0.f_3 = iParam0;
	Var0.f_12 = iParam5;
	Var0.f_13 = iParam6;
	Var0.f_4 = __LIB_1__::func_137(bParam3);
	Var0.f_5 = SYSTEM::TO_FLOAT(NETWORK::GET_CLOUD_TIME_AS_INT());
	if (bParam4)
	{
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if (__LIB_1__::func_693(iVar3, 0, 1))
		{
			if (bParam4)
			{
				MISC::SET_BIT(&iVar2, iVar1);
			}
			else if (__LIB_3__::func_360(iParam2, iVar3))
			{
				MISC::SET_BIT(&iVar2, iVar1);
			}
			else if (iParam1 == iVar3)
			{
				MISC::SET_BIT(&iVar2, iVar1);
			}
		}
		iVar1++;
	}
	if (iVar2 != 0)
	{
		__LIB_1__::func_634(Var0, iVar2);
	}
}

bool func_474(int iParam0)//Position - 0xC57A8
{
	return (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, __LIB_19__::func_312()) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, __LIB_19__::func_312())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, __LIB_19__::func_311())) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, __LIB_19__::func_312()));
}

void func_475(struct<3> Param0)//Position - 0xC62EF
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			if (__LIB_5__::func_191(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
			{
				Var1 = { __LIB_5__::func_948(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]) };
				if (__LIB_12__::func_309(Var1, Param0))
				{
					Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/].f_1 = -1;
				}
			}
			else
			{
				Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/].f_1 = -1;
			}
		}
		iVar0++;
	}
	if (__LIB_19__::func_291(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 0);
		if (__LIB_10__::func_803(Global_1952191.f_5470) && __LIB_12__::func_309(Param0, Global_1952191.f_5470))
		{
			__LIB_19__::func_290();
		}
	}
}

void func_476(int iParam0, struct<3> Param1)//Position - 0xC63EA
{
	if (Global_1952191.f_5470.f_3 != 0)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	__LIB_19__::func_313(iParam0, Param1);
}

int func_477(int iParam0)//Position - 0xC64F2
{
	return __LIB_0__::func_315(iParam0);
}

int func_478(int iParam0, int iParam1, int iParam2)//Position - 0xC6D88
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			return 0;
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), -1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && PED::IS_PED_A_PLAYER(iParam2))
	{
		return 0;
	}
	if (__LIB_15__::func_583(ENTITY::GET_ENTITY_MODEL(iParam0)) && ENTITY::GET_ENTITY_POPULATION_TYPE(iParam0) != 7)
	{
		return 1;
	}
	if (__LIB_15__::func_407(iParam1))
	{
		return 1;
	}
	if (__LIB_15__::func_407(iParam2))
	{
		return 1;
	}
	return 0;
}

int func_479(struct<12> Param0, var uParam1, int iParam2)//Position - 0xC6FE4
{
	if (!Param0.f_5)
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam2, false) && WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam2))
	{
		return 0;
	}
	if (Param0.f_11 || __LIB_19__::func_193(Param0.f_6))
	{
		return 0;
	}
	return 1;
}

void func_480(var uParam0, var uParam1)//Position - 0xCBD08
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_778(*uParam0, *uParam1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		(*uParam1)[iVar1] = (*uParam0)[iVar1];
		iVar1++;
	}
}

void func_481()//Position - 0xCD378
{
	if (!__LIB_19__::func_330(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_966(25);
	}
}

int func_482(int iParam0, int iParam1)//Position - 0xCD670
{
	if (__LIB_12__::func_486(iParam0, 1) && __LIB_12__::func_486(iParam1, 1))
	{
		return (__LIB_19__::func_331(iParam0) == __LIB_2__::func_39(iParam1) || __LIB_19__::func_331(iParam1) == __LIB_2__::func_39(iParam0));
	}
	return 0;
}

void func_483(int iParam0, bool bParam1)//Position - 0xD455A
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_12__::func_520();
	}
	if (iParam0 > 0)
	{
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_965(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2789228.f_93[__LIB_12__::func_519(iParam0)] = 1;
			}
		}
		iVar0 = __LIB_12__::func_519(159);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(157);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(148);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(164);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(142);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(152);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(166);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(170);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(173);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(179);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(200);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(201);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13078 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_WORK */, bParam1))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(182);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(183);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(185);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(186);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(180);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(195);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(197);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(198);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(207);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(208);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(209);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(214);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(215);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(216);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(217);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(218);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(219);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(220);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(221);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_484(int iParam0)//Position - 0xD4E5E
{
	int iVar0;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_12__::func_520();
	}
	if (iParam0 > 0)
	{
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_2789228.f_93[__LIB_12__::func_519(iParam0)] = 1;
		}
		iVar0 = __LIB_12__::func_519(155);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(163);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(160);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(153);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(162);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(154);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(171);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(172);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(199);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(194);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(193);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(210);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(205);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(189);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = __LIB_12__::func_519(211);
		if (__LIB_19__::func_337(iVar0, Global_262145.f_13079 /* Tunable: GB_COOLDOWN_UNTIL_NEXT_BOSS_CHALLENGE */, 0))
		{
			__LIB_0__::clearF_1Prop(&(Global_2789228[iVar0 /*2*/]));
			__LIB_0__::func_795(&(Global_2789228[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_485(bool bParam0)//Position - 0xD569F
{
	if (bParam0)
	{
		if (!__LIB_1__::func_727(PLAYER::PLAYER_ID(), 5))
		{
			__LIB_12__::func_584(5);
		}
	}
	else if (__LIB_1__::func_727(PLAYER::PLAYER_ID(), 5))
	{
		__LIB_12__::func_521(5);
	}
}

var func_486()//Position - 0xD857B
{
	var uVar0;
	uVar0 = __LIB_15__::func_466();
	if (!__LIB_1__::func_501())
	{
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			uVar0 = __LIB_12__::func_540(__LIB_0__::func_797()) + 1;
		}
	}
	return uVar0;
}

int func_487(bool bParam0)//Position - 0xF07
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_12__::func_548(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__::func_693(iVar3, 0, 0))
			{
				if (__LIB_1__::func_501())
				{
					if (__LIB_1__::func_876(iVar3, PLAYER::PLAYER_ID(), bParam0))
					{
						MISC::SET_BIT(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = __LIB_0__::func_797();
					if (iVar2 != __LIB_0__::getMinusOneOrNull())
					{
						if (__LIB_1__::func_876(iVar3, iVar2, bParam0))
						{
							MISC::SET_BIT(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_488()//Position - 0xC1C1
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (__LIB_0__::func_523(7))
	{
		if (__LIB_0__::func_315(Global_2703735.f_4.f_16) || __LIB_1__::func_830(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_489(int iParam0)//Position - 0xCCCB
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_3__::func_185(PLAYER::PLAYER_ID(), -1))
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

void func_490(bool bParam0, struct<3> Param1, var uParam2)//Position - 0x20249
{
	struct<26> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_10__::func_803(Param1))
	{
		return;
	}
	if (*uParam2 > 18)
	{
		return;
	}
	if (*uParam2 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0.f_0 = -1247260598;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam2;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		Var0.f_6[iVar1] = (*uParam2)[iVar1];
		iVar1++;
	}
	iVar2 = __LIB_3__::func_206(1, 1);
	if (!iVar2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 26, iVar2);
	}
}

void func_491(struct<2> Param0, int iParam1, var uParam2, struct<3> Param3, var uParam4)//Position - 0x20B82
{
	struct<10> Var0;
	int iVar1;
	if (!__LIB_10__::func_803(Param3))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0.f_0 = -441166609;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam1;
	Var0.f_9 = uParam2;
	Var0.f_5 = uParam4;
	Var0.f_6 = { Param3 };
	iVar1 = __LIB_3__::func_206(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, iVar1);
	}
}

void func_492(struct<2> Param0, char* sParam1)//Position - 0x20C0F
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	bVar0 = false;
	if (bVar0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			sParam1 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = __LIB_3__::func_487(Param0);
		bVar2 = __LIB_5__::func_191(Param0);
		uVar3 = __LIB_5__::func_193(Param0);
		iVar4 = __LIB_5__::func_194(Param0);
		uVar5 = __LIB_10__::func_805(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

void func_493(int iParam0)//Position - 0x28BE0
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	char* sVar3;
	iVar0 = __LIB_9__::func_11(iParam0);
	if (!__LIB_9__::func_10(iVar0))
	{
		return;
	}
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "CCR_UNL_CLTH" /* GXT: LS Car Meet Clothing Unlocked: ~a~ */;
			break;
		case 1:
			sVar1 = "";
			break;
		case 2:
			sVar1 = "CCR_UNL_RC" /* GXT: LS Car Meet Race Unlocked: ~a~ */;
			break;
		case 3:
			sVar1 = "CCR_UNL_FA" /* GXT: Auto Shop Contract Ability Unlocked: ~a~ */;
			break;
		case 4:
			sVar1 = "CCR_UNL_FT" /* GXT: LS Car Meet Feature Unlocked: ~a~ */;
			break;
		case 5:
			sVar1 = "CCR_UNL_WS" /* GXT: LS Car Meet Wheel Style Unlocked: ~a~ */;
			break;
		case 6:
			sVar1 = "CCR_UNL_LIV" /* GXT: LS Car Meet Livery Unlocked: ~a~ */;
			break;
		case 7:
			sVar1 = "";
			break;
	}
	bVar2 = !__LIB_1__::func_394();
	sVar3 = __LIB_13__::func_686(iParam0, bVar2, -1, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		__LIB_15__::func_643(sVar1, sVar3, 0, 0, 0);
	}
}

int func_494(int iParam0, int iParam1, bool bParam2)//Position - 0x317F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = Global_1058069.f_14[iParam0];
	if (__LIB_1__::func_758())
	{
		iVar2 = __LIB_19__::func_284(iParam1);
		if (!iVar2 == -1)
		{
			return __LIB_1__::func_357(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_658[iParam0 /*22957*/].f_7911[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != __LIB_0__::getMinusOneOrNull())
	{
		if (Global_4718592.f_111249[iParam0] != -1 && Global_4718592.f_111249[iParam0] <= 4)
		{
			if (Global_4718592.f_111249[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_111249[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_111249[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_111249[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_111249[iParam0];
			}
		}
		else
		{
			iVar0 = __LIB_2__::func_455(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_21, 13))
		{
			iVar0 = __LIB_1__::func_3(iParam0);
		}
		if (BitTest(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_15, 26) && !__LIB_0__::func_825(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = __LIB_0__::func_999(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_495(int iParam0)//Position - 0x38F2E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_1__::func_15(iParam0) && !__LIB_3__::func_438(iParam0)) && !BitTest(Global_1892703[iParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_0__::func_428(iParam0);
	uVar3 = __LIB_0__::func_945();
	bVar4 = __LIB_12__::func_495();
	if ((bVar1 && (__LIB_3__::func_131(iParam0) || __LIB_1__::func_17(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !__LIB_0__::func_315(iParam0)) && !__LIB_12__::func_482(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

int func_496(struct<3> Param0, float fParam1)//Position - 0xA27FE
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((__LIB_1__::func_693(iVar1, 1, 1) && __LIB_1__::func_908(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !__LIB_4__::func_934(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !__LIB_1__::func_0(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, __LIB_1__::func_694(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_497()//Position - 0xADBA5
{
	if (Global_2667225.f_45.f_65 && !Global_2667225.f_45.f_304)
	{
		if (!__LIB_3__::func_467(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_498()//Position - 0xBB00A
{
	int iVar0;
	iVar0 = __LIB_19__::func_349(0);
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
	}
}

int func_499(int iParam0, int iParam1, bool bParam2)//Position - 0xBD733
{
	if (iParam1 == 27)
	{
		if ((__LIB_3__::func_438(iParam0) || __LIB_12__::func_484(iParam0)) || __LIB_3__::func_491(iParam0))
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_796(iParam0))
	{
		return 0;
	}
	if (!__LIB_12__::func_558(iParam0) && !__LIB_12__::func_485(iParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

void func_500(int iParam0, int iParam1)//Position - 0xD37A4
{
	if ((__LIB_1__::func_501() || !__LIB_12__::func_548(1)) || __LIB_1__::func_726(iParam0) == 3)
	{
		if (!__LIB_1__::func_836(PLAYER::PLAYER_ID(), 0) && !__LIB_1__::func_836(PLAYER::PLAYER_ID(), 3))
		{
			__LIB_7__::func_945(iParam0);
			__LIB_7__::func_941(iParam0, __LIB_3__::func_206(1, 1), __LIB_7__::func_944(), __LIB_7__::func_943(), __LIB_7__::func_942(), iParam1);
		}
	}
}

int func_501(bool bParam0)//Position - 0xD8E23
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = __LIB_5__::func_664(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 150:
			iVar2 = __LIB_15__::func_353(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		case 237:
			iVar2 = __LIB_19__::func_340(PLAYER::PLAYER_ID());
			if (__LIB_4__::func_373(__LIB_12__::func_547(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		case 250:
			iVar2 = __LIB_19__::func_340(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		case 238:
			iVar2 = __LIB_19__::func_339(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		case 249:
			iVar2 = __LIB_19__::func_339(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		case 239:
			iVar1 = 600;
			break;
		case 240:
			iVar1 = 700;
			break;
		case 241:
			iVar1 = 800;
			break;
		case 242:
			iVar1 = 900;
			break;
		case 244:
			iVar1 = 1100;
			break;
		case 248:
			iVar1 = 1200;
			break;
		case 298:
			iVar1 = 1250;
			break;
		case 299:
			if (__LIB_19__::func_361(PLAYER::PLAYER_ID()) == 0)
			{
				iVar1 = 1300;
			}
			else if (__LIB_19__::func_361(PLAYER::PLAYER_ID()) == 1)
			{
				iVar1 = 1301;
			}
			break;
		case 300:
			if (__LIB_12__::func_541(PLAYER::PLAYER_ID()) == 0)
			{
				iVar1 = 1400;
			}
			break;
		case 301:
			if (__LIB_19__::func_360(PLAYER::PLAYER_ID(), 301) == 0)
			{
				iVar1 = 1500;
			}
			if (__LIB_19__::func_360(PLAYER::PLAYER_ID(), 301) == 1)
			{
				iVar1 = 1501;
			}
			break;
		case 302:
			iVar1 = 1700;
			break;
		case 303:
			iVar1 = 1800;
			break;
	}
	return iVar1;
}

int func_502(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x14EB
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (iParam2 && !bParam5)
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_8__::func_843(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_693(iVar1, 1, 1))
		{
			if (!__LIB_2__::func_40(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((__LIB_1__::func_908(iVar1) || !bParam8) && !Global_2689235[iVar1 /*453*/].f_267)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_8__::func_843(iVar1), Param0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_8__::func_843(iVar1), Param0, true) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam1))
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

int func_503(char* sParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0x22888
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
	if (__LIB_2__::func_704(sParam0, sParam1) && Global_1574757.f_56 == Global_1574757.f_58)
	{
		return 0;
	}
	__LIB_2__::func_777();
	Global_1574757 = 3;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	StringCopy(&(Global_1574757.f_16), sParam1, 64);
	Global_1574757.f_58 = uParam3;
	Global_1574757.f_56 = uParam3;
	__LIB_1__::func_699();
	__LIB_1__::func_698(bParam2);
	__LIB_1__::func_697();
	return 1;
}

int func_504(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3139C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853348[iVar2 /*834*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (__LIB_1__::func_758())
			{
				iVar3 = __LIB_19__::func_284(iParam0);
				if (!iVar3 == -1)
				{
					return __LIB_1__::func_357(iVar3);
				}
			}
			if ((__LIB_1__::func_0(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_15, 18)) || ((__LIB_0__::func_825(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && BitTest(Global_4718592.f_15, 23)) && !BitTest(Global_4718592.f_15, 18)))
			{
				return __LIB_0__::func_997(1);
			}
			else if (BitTest(Global_4718592.f_15, 26))
			{
				return __LIB_0__::func_999(1);
			}
			else
			{
				return __LIB_2__::func_455(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836584 || Global_1836575) || Global_1853348[iParam0 /*834*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836584 == 1 && Global_1836594 == 0))
			{
				return __LIB_0__::func_997(1);
			}
			else
			{
				return __LIB_2__::func_455(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836579 && Global_1836068.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = __LIB_19__::func_284(iParam0);
	if (!iVar4 == -1)
	{
		return __LIB_1__::func_357(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_505(int iParam0)//Position - 0xAD530
{
	int iVar0;
	if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_0__::func_797();
		if (__LIB_1__::func_693(iVar0, 0, 0))
		{
			if (__LIB_8__::func_952(iVar0, iParam0, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_506(int iParam0, bool bParam1, var uParam2, int iParam3)//Position - 0xADC80
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
		iVar0 = uParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
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
					Global_2689235[iParam0 /*453*/].f_252 = 0;
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

void func_507()//Position - 0xC0406
{
	if (__LIB_3__::func_244())
	{
		__LIB_3__::func_0();
	}
}

int func_508(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC7C21
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = __LIB_2__::func_101();
	if (__LIB_1__::func_76(sParam2))
	{
	}
	if (__LIB_0__::func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_1__::func_747(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__::func_704(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_4__::func_963(0, &iVar1);
					break;
				case 3:
					__LIB_4__::func_963(1, &iVar1);
					break;
				case 1:
					__LIB_3__::func_447(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_1__::func_746(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_1__::func_759((__LIB_1__::func_335(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_1__::func_746(1166, iVar1, -1);
				}
				__LIB_2__::func_47(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_1__::func_745((__LIB_3__::func_190(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_1__::func_745((__LIB_3__::func_190(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

int func_509()//Position - 0xCA9D5
{
	int iVar0;
	if (__LIB_5__::func_234())
	{
		return 4;
	}
	else if (__LIB_1__::func_501())
	{
		if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (__LIB_1__::func_375(1))
	{
		iVar0 = __LIB_19__::func_314(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (__LIB_12__::func_548(1))
	{
		if (__LIB_3__::func_39(__LIB_0__::func_797()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_510()//Position - 0xD41F1
{
	if (__LIB_1__::func_739() && !__LIB_1__::func_738())
	{
		__LIB_2__::func_26();
	}
	if (__LIB_1__::func_738())
	{
		__LIB_1__::func_737();
	}
	else
	{
		__LIB_2__::func_91();
		__LIB_19__::func_371(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

void func_511(int iParam0, bool bParam1, bool bParam2)//Position - 0xD6051
{
	int iVar0;
	int iVar1;
	if (!__LIB_19__::func_373(iParam0, bParam2))
	{
		return;
	}
	iVar0 = __LIB_12__::func_501(iParam0);
	iVar1 = __LIB_12__::func_524(iVar0);
	if (bParam1)
	{
		iVar1 = __LIB_12__::func_523(iVar0);
	}
	if (!__LIB_0__::func_137(iVar1, -1))
	{
		__LIB_0__::func_186(iVar1, 1, -1);
	}
}

void func_512(bool bParam0)//Position - 0xD9551
{
	int iVar0;
	__LIB_4__::func_861(33);
	__LIB_4__::func_861(34);
	__LIB_4__::func_861(35);
	__LIB_4__::func_861(36);
	__LIB_4__::func_861(37);
	__LIB_4__::func_861(38);
	__LIB_4__::func_861(39);
	__LIB_4__::func_861(40);
	__LIB_4__::func_861(43);
	__LIB_4__::func_861(41);
	__LIB_4__::func_861(54);
	__LIB_4__::func_861(42);
	__LIB_4__::func_861(47);
	__LIB_12__::func_950(23);
	__LIB_12__::func_950(24);
	__LIB_4__::func_861(92);
	MISC::CLEAR_BIT(&(Global_2815059.f_1801), 2);
	__LIB_12__::func_528();
	__LIB_19__::func_365();
	__LIB_19__::func_364();
	__LIB_19__::func_363();
	__LIB_19__::func_377();
	__LIB_19__::func_376();
	__LIB_19__::func_375();
	__LIB_15__::func_632();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2815059.f_5195.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (__LIB_15__::func_426(3))
	{
		__LIB_12__::func_950(3);
	}
	else if (__LIB_15__::func_426(4))
	{
		__LIB_12__::func_950(4);
	}
	else if (__LIB_15__::func_426(5))
	{
		__LIB_12__::func_950(5);
	}
	else if (__LIB_15__::func_426(6))
	{
		__LIB_12__::func_950(6);
	}
	else if (__LIB_15__::func_426(7))
	{
		__LIB_12__::func_950(7);
	}
	else if (((((((((((((((((__LIB_15__::func_426(0) || __LIB_15__::func_426(1)) || __LIB_15__::func_426(2)) || __LIB_15__::func_426(8)) || __LIB_15__::func_426(9)) || __LIB_15__::func_426(10)) || __LIB_15__::func_426(11)) || __LIB_15__::func_426(12)) || __LIB_15__::func_426(13)) || __LIB_15__::func_426(14)) || __LIB_15__::func_426(15)) || __LIB_15__::func_426(16)) || __LIB_15__::func_426(17)) || __LIB_15__::func_426(18)) || __LIB_15__::func_426(19)) || __LIB_15__::func_426(20)) || __LIB_15__::func_426(21)) || __LIB_15__::func_426(22))
	{
		__LIB_12__::func_950(8);
		__LIB_12__::func_950(0);
		__LIB_12__::func_950(1);
		__LIB_12__::func_950(2);
		__LIB_12__::func_950(9);
		__LIB_12__::func_950(10);
		__LIB_12__::func_950(11);
		__LIB_12__::func_950(12);
		__LIB_12__::func_950(13);
		__LIB_12__::func_950(14);
		__LIB_12__::func_950(15);
		__LIB_12__::func_950(16);
		__LIB_12__::func_950(17);
		__LIB_12__::func_950(18);
		__LIB_12__::func_950(19);
		__LIB_12__::func_950(20);
		__LIB_12__::func_950(21);
		__LIB_12__::func_950(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2815059.f_5195.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

int func_513(int iParam0, var* uParam1)//Position - 0xA6C7
{
	bool bVar0;
	bool bVar1;
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		bVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		bVar0 = __LIB_0__::getMinusOneOrNull();
	}
	bVar1 = false;
	if (bVar0 == PLAYER::PLAYER_ID())
	{
		if (__LIB_6__::func_409(15, 0))
		{
			bVar1 = true;
		}
		else if (__LIB_1__::func_375(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || bVar0 == __LIB_0__::getMinusOneOrNull()) || !__LIB_1__::func_693(bVar0, 0, 0)) || !bVar1) || __LIB_1__::func_550(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_514(int iParam0)//Position - 0x3A027
{
	int iVar0;
	float fVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_2689235[iVar0 /*453*/].f_269.f_14 != -1)
	{
		if (__LIB_2__::func_867(Global_2689235[iVar0 /*453*/].f_269.f_14))
		{
			if (!__LIB_8__::func_952(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_14, 0, 0))
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
			if (!__LIB_8__::func_952(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_16, 0, 1))
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
		if (!__LIB_8__::func_952(PLAYER::PLAYER_ID(), Global_2689235[iVar0 /*453*/].f_269.f_15, 0, 0))
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = -1;
		}
	}
	if (__LIB_2__::func_867(iParam0))
	{
		if (__LIB_8__::func_952(PLAYER::PLAYER_ID(), iParam0, 0, 0))
		{
			if (!Global_2689235[iVar0 /*453*/].f_269.f_14 == iParam0)
			{
				Global_2689235[iVar0 /*453*/].f_269.f_14 = iParam0;
			}
		}
		if (__LIB_8__::func_952(PLAYER::PLAYER_ID(), iParam0, 0, 1))
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
	if (__LIB_8__::func_952(PLAYER::PLAYER_ID(), iParam0, 0, 0))
	{
		if (!Global_2689235[iVar0 /*453*/].f_269.f_15 == iParam0)
		{
			Global_2689235[iVar0 /*453*/].f_269.f_15 = iParam0;
		}
	}
}

int func_515()//Position - 0xA8499
{
	int iVar0;
	if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_0__::func_797();
		if (__LIB_1__::func_693(iVar0, 0, 0))
		{
			if (__LIB_9__::func_496(iVar0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_516(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xBCD25
{
	int iVar0;
	char* sVar1;
	if (iParam3 >= __LIB_1__::func_981() && iParam3 < __LIB_1__::func_980())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					__LIB_0__::func_610(sParam16);
				}
				else
				{
					__LIB_0__::func_700(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (__LIB_12__::func_490())
				{
					__LIB_0__::func_700("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						__LIB_0__::func_610(&(uParam2->f_104));
					}
					else
					{
						__LIB_0__::func_700("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					__LIB_0__::func_700("");
				}
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					__LIB_0__::func_700(&sParam4);
				}
				__LIB_19__::func_382(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					__LIB_0__::func_700("");
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (__LIB_2__::func_117(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_979(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_978(uParam2))
				{
					__LIB_0__::func_610("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					__LIB_0__::func_610("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_517()//Position - 0x31FB2
{
	int iVar0;
	iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	if (__LIB_19__::func_380(PLAYER::PLAYER_ID()))
	{
		if (((((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188) || iVar0 == 294) || iVar0 == 295)
		{
			return 1;
		}
	}
	if (__LIB_2__::func_574(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_3__::func_709(iVar0) || __LIB_3__::func_710(iVar0)) || iVar0 == 293)
		{
			return 1;
		}
	}
	if (__LIB_8__::func_259(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_710(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		if (__LIB_4__::func_740(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_6__::func_846(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_612(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_4__::func_955(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_77(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_4__::func_947(PLAYER::PLAYER_ID()))
	{
		if (__LIB_4__::func_374(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_12__::func_509(iVar0))
		{
			if (__LIB_9__::func_704(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (__LIB_4__::func_900(PLAYER::PLAYER_ID()))
	{
		if (__LIB_4__::func_184(iVar0))
		{
			return 1;
		}
		if (__LIB_11__::func_619(iVar0))
		{
			return 1;
		}
		if (__LIB_3__::func_597())
		{
			return 1;
		}
	}
	if (__LIB_4__::func_969(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_596())
		{
			return 1;
		}
	}
	if (__LIB_7__::func_690(PLAYER::PLAYER_ID()))
	{
		if (__LIB_11__::func_619(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_5__::func_186(PLAYER::PLAYER_ID()))
	{
		if (__LIB_3__::func_691(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_5__::func_203(PLAYER::PLAYER_ID()))
	{
		if (__LIB_19__::func_285(iVar0))
		{
			return 1;
		}
	}
	if (__LIB_5__::func_188(PLAYER::PLAYER_ID()))
	{
		if (__LIB_15__::func_310(iVar0) || __LIB_15__::func_309(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_518(bool bParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0xBC93D
{
	int iVar0;
	char* sVar1;
	if (iParam4 >= __LIB_1__::func_981() && iParam4 < __LIB_1__::func_980())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (BitTest(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				__LIB_0__::func_700("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			__LIB_0__::func_700(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				__LIB_0__::func_700("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			__LIB_0__::func_700("");
			if (uParam3->f_108 == 6)
			{
				__LIB_0__::func_700("");
			}
			else
			{
				__LIB_0__::func_700(&sParam5);
			}
			__LIB_19__::func_382(uParam3, bParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (__LIB_2__::func_117(uParam3))
			{
				__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__::func_979(uParam3))
			{
				__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
			}
			else if (__LIB_1__::func_978(uParam3))
			{
				__LIB_0__::func_610("DPAD_CREW" /* GXT: C */);
			}
			else
			{
				__LIB_0__::func_610("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

struct<20> func_519(int iParam0)//Position - 0x21E8E
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	Var0 = 18;
	Var0.f_19 = 0;
	if (!__LIB_0__::func_796(iParam0))
	{
		return Var0;
	}
	if (__LIB_1__::func_693(iParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !__LIB_10__::func_803(Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

struct<16> func_520(var* uParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0x25336
{
	struct<16> Var0;
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

float func_521(int iParam0, char* sParam1, float fParam2)//Position - 0x25446
{
	if (__LIB_7__::func_242(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
	{
		return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
	}
	return fParam2;
}

struct<16> func_522(int iParam0, char* sParam1, char* sParam2)//Position - 0x254F8
{
	struct<16> Var0;
	if (__LIB_7__::func_242(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_523(int iParam0, char* sParam1)//Position - 0x25532
{
	if (!__LIB_7__::func_242(iParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}

char* func_524(var uParam0, int iParam1)//Position - 0x255CA
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Bar_Resupply_1";
		case 1:
			return "Sum2_Bar_Resupply_2";
		case 2:
			return "Sum2_Bar_Resupply_3";
		case 3:
			return "Sum2_Bar_Resupply_4";
		case 4:
			return "Sum2_Bar_Resupply_5";
		case 5:
			return "Sum2_Bar_Resupply_6";
		case 6:
			return "Sum2_Bar_Resupply_7";
		case 7:
			return "Sum2_Bar_Resupply_8";
		case 8:
			return "Sum2_Bar_Resupply_9";
		case 9:
			return "Sum2_Bar_Resupply_10";
		default:
	}
	return "";
}

int func_525(int iParam0, int iParam1)//Position - 0x259A7
{
	switch (iParam0)
	{
		case 295:
			return 32386;
		case 291:
			return 32387;
		case 292:
			return 32388;
		case 300:
			return 32389;
		case 301:
			switch (iParam1)
			{
				case 0:
					return 32390;
				case 1:
					return 32391;
				default:
			}
			break;
		case 296:
			return 32392;
		case 298:
			return 32394;
	}
	return 32386;
}

int func_526(int iParam0, int iParam1)//Position - 0x25A96
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32782 /* Tunable: 1460115652 */;
		case 291:
			return Global_262145.f_32783 /* Tunable: -981598044 */;
		case 292:
			return Global_262145.f_32784 /* Tunable: -92642405 */;
		case 300:
			return Global_262145.f_32785 /* Tunable: -1469288825 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32786 /* Tunable: -1148025017 */;
				case 1:
					return Global_262145.f_32787 /* Tunable: 443149016 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32788 /* Tunable: -1187944715 */;
		case 298:
			return Global_262145.f_32790 /* Tunable: 868157221 */;
	}
	return 0;
}

float func_527(int iParam0, int iParam1)//Position - 0x25D34
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32792 /* Tunable: 273547061 */;
		case 291:
			return Global_262145.f_32794 /* Tunable: -1991988448 */;
		case 292:
			return Global_262145.f_32796 /* Tunable: 1140455130 */;
		case 300:
			return Global_262145.f_32798 /* Tunable: 1717358975 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32802 /* Tunable: -824837257 */;
				case 1:
					return Global_262145.f_32800 /* Tunable: 1414506846 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32804 /* Tunable: -720510129 */;
		case 298:
			return Global_262145.f_32808 /* Tunable: -1174773827 */;
	}
	return 1f;
}

float func_528(int iParam0, int iParam1)//Position - 0x25DEC
{
	switch (iParam0)
	{
		case 295:
			return Global_262145.f_32791 /* Tunable: 232629579 */;
		case 291:
			return Global_262145.f_32793 /* Tunable: -1506809663 */;
		case 292:
			return Global_262145.f_32795 /* Tunable: -289235831 */;
		case 300:
			return Global_262145.f_32797 /* Tunable: 683318740 */;
		case 301:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_32801 /* Tunable: 906515743 */;
				case 1:
					return Global_262145.f_32799 /* Tunable: 932766885 */;
				default:
			}
			break;
		case 296:
			return Global_262145.f_32803 /* Tunable: 1422426602 */;
		case 298:
			return Global_262145.f_32807 /* Tunable: 298190396 */;
	}
	return 1f;
}

char* func_529()//Position - 0x2601F
{
	return "MPSUM2_FAIL";
}

char* func_530()//Position - 0x2602B
{
	return "MPSUM2_MUSIC_STOP";
}

void func_531()//Position - 0xB59A1
{
	if (__LIB_0__::func_1(__LIB_19__::func_408()))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_532()//Position - 0xBC2D8
{
	Global_22622 = 0;
}

struct<6> func_533()//Position - 0xBC546
{
	struct<6> Var0;
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 != 0)
	{
		return Global_21224;
	}
	return Var0;
}

void func_534(int iParam0)//Position - 0xBCD4D
{
	__LIB_0__::func_170(iParam0, Global_20266, 1);
}

bool func_535()//Position - 0xBD160
{
	return Global_1966530;
}

void func_536(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xC0A4C
{
	*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(iParam1);
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	__LIB_2__::func_53(uParam0, iParam3);
	HUD::SET_BLIP_ROUTE(*uParam0, bParam6);
	HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, bParam7);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, true);
		HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(*uParam0, 0);
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, false);
	}
	if (bParam8)
	{
		__LIB_19__::func_400(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		HUD::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

int func_537(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9A17
{
	if (Global_1853348[iParam3 /*834*/].f_267[6] != -1)
	{
		return __LIB_19__::func_325(Global_1853348[iParam3 /*834*/].f_267[6]);
	}
	return 0;
}

int func_538(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9CA1
{
	int iVar0;
	bool bVar1;
	switch (iParam0)
	{
		case 5:
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				return 804;
			}
			else
			{
				return 803;
			}
			break;
	}
	iVar0 = __LIB_3__::func_494(iParam3);
	bVar1 = iParam0 == 4;
	if (iVar0 != -1)
	{
		return __LIB_10__::func_598(iVar0, bVar1);
	}
	return 0;
}

void func_539(bool bParam0)//Position - 0xCA010
{
	if (bParam0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPSUM2/MPSUM2_Generic", false, -1);
	}
	else
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPSUM2/MPSUM2_Generic");
	}
}

void func_540(bool bParam0)//Position - 0xD396B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	}
	if (iVar0 != __LIB_0__::getMinusOneOrNull())
	{
		if (bParam0)
		{
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						Global_1952191.f_5365[iVar2] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						iVar2++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 18)
			{
				Global_1952191.f_5365[iVar1] = 0;
				iVar1++;
			}
		}
	}
}

int func_541(int iParam0)//Position - 0x188E4
{
	if (iParam0 != __LIB_0__::getMinusOneOrNull() && __LIB_1__::func_693(iParam0, 1, 1))
	{
		if (__LIB_19__::func_388(iParam0) && !__LIB_5__::func_301(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_542(int iParam0, char* sParam1, int iParam2)//Position - 0x2540D
{
	if (__LIB_7__::func_242(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 1)
	{
		return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
	}
	return iParam2;
}

void func_543(int iParam0)//Position - 0x28A1E
{
	if (iParam0 == -1 || iParam0 == 68)
	{
		return;
	}
	__LIB_19__::func_394(iParam0);
}

void func_544(var uParam0, struct<3> Param1, int iParam2, int iParam3, char* sParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xA8ACE
{
	*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam2);
	}
	__LIB_2__::func_53(uParam0, iParam3);
	HUD::SET_BLIP_ROUTE(*uParam0, bParam6);
	HUD::SET_BLIP_AS_SHORT_RANGE(*uParam0, bParam7);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam4);
	}
	if (bParam9)
	{
		HUD::SHOW_HEIGHT_ON_BLIP(*uParam0, true);
		HUD::SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(*uParam0, 0);
	}
	if (bParam8)
	{
		__LIB_19__::func_400(uParam0, 0);
	}
	if (fParam5 != 1f)
	{
		HUD::SET_BLIP_SCALE(*uParam0, fParam5);
	}
}

int func_545(int iParam0, int iParam1, int iParam2)//Position - 0xC908A
{
	switch (iParam0)
	{
		case 181:
			return 0;
		case 256:
			return __LIB_19__::func_323(iParam1, iParam2);
		case 258:
			return __LIB_0__::func_109(iParam1, iParam2);
		case 271:
			return __LIB_19__::func_322(iParam1, iParam2);
		case 264:
			return __LIB_19__::func_321(iParam1, iParam2);
		case 263:
			return __LIB_19__::func_320(iParam1, iParam2);
		case 294:
			return __LIB_19__::func_317(iParam1, iParam2);
		case 300:
			return __LIB_3__::func_478(iParam1, iParam2);
		case 301:
			return __LIB_19__::func_319(iParam1, iParam2);
		case 291:
			return __LIB_3__::func_478(iParam1, iParam2);
		case 299:
			return __LIB_19__::func_318(iParam1, iParam2);
		case 293:
			return __LIB_19__::func_317(iParam1, iParam2);
		case 298:
			return __LIB_3__::func_478(iParam1, iParam2);
		case 296:
			return __LIB_3__::func_478(iParam1, iParam2);
		case 297:
			return __LIB_19__::func_317(iParam1, iParam2);
		default:
	}
	return 0;
}

int func_546(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC99F6
{
	int iVar0;
	iVar0 = __LIB_2__::func_54(iParam3);
	if (iVar0 != -1)
	{
		return __LIB_10__::func_598(iVar0, 1);
	}
	return 0;
}

int func_547(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9C3D
{
	int iVar0;
	bool bVar1;
	switch (iParam0)
	{
		case 3:
			return 803;
		default:
	}
	iVar0 = __LIB_3__::func_494(iParam3);
	bVar1 = iParam0 == true;
	if (iVar0 != -1)
	{
		return __LIB_10__::func_598(iVar0, bVar1);
	}
	return 0;
}

int func_548(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC9CF2
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 22:
					return 771;
				case 23:
					return 772;
				default:
			}
			break;
		case 9:
			switch (iParam2)
			{
				case 0:
					return 794;
				case 1:
					iVar0 = __LIB_3__::func_495(iParam3);
					if (iVar0 != -1)
					{
						return __LIB_10__::func_598(iVar0, 0);
					}
					break;
			}
			break;
		case 14:
			return 793;
		case 16:
			return 792;
		case 1:
			switch (iParam2)
			{
				case 0:
					return 789;
				case 1:
					return 790;
				case 2:
					return 791;
				default:
			}
			break;
		default:
			iVar1 = __LIB_3__::func_495(iParam3);
			if (iVar1 != -1)
			{
				return __LIB_10__::func_598(iVar1, 0);
			}
			break;
	}
	return 0;
}

void func_549(var uParam0)//Position - 0xD08BD
{
	__LIB_19__::func_459();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		*uParam0 = { __LIB_19__::func_275() };
	}
}

int func_550(int iParam0)//Position - 0x1D64
{
	if (__LIB_10__::func_583(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2787505 = { __LIB_1__::func_696(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2787505))
	{
		return 1;
	}
	if (__LIB_3__::func_360(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_551()//Position - 0xD9D4
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (__LIB_19__::func_268(7))
	{
		if (__LIB_0__::func_315(Global_2703735.f_4.f_16) || __LIB_1__::func_830(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_552(int iParam0, int iParam1)//Position - 0x22996
{
	bool bVar0;
	if (Global_1952191.f_5484[iParam1] != -1)
	{
		return Global_1952191.f_5484[iParam1];
	}
	bVar0 = false;
	while (bVar0 < 31)
	{
		if (!BitTest(Global_1952191.f_5479.f_3, bVar0))
		{
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), bVar0);
			return __LIB_19__::func_458(iParam0, bVar0);
		}
		bVar0++;
	}
	return -1;
}

int func_553(int iParam0, bool bParam1, int iParam2)//Position - 0x2CE9F
{
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		if (bParam1)
		{
			if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_30, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
	{
		if (iParam2 == -1 || __LIB_0__::func_172(Global_2689235[iParam0 /*453*/].f_318.f_6) != iParam2)
		{
			if (bParam1)
			{
				return __LIB_19__::func_463(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

Vector3 func_554(int iParam0)//Position - 0x30D07
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
	if (iParam0 == __LIB_0__::getMinusOneOrNull())
	{
	}
	if (__LIB_12__::func_483(iParam0))
	{
		iVar0 = __LIB_1__::func_644(iParam0);
		if (iVar0 != __LIB_0__::getMinusOneOrNull())
		{
			if (!__LIB_1__::func_659(iVar0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_239[iVar0 /*3*/][1]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_239[iVar0 /*3*/][1], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_644(iParam0) /*453*/].f_318.f_11;
				}
			}
			else
			{
				iVar1 = __LIB_2__::func_55(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1946250.f_533[iVar1 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_967(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_307, false);
		}
	}
	else if (__LIB_4__::func_954(iParam0) && !__LIB_8__::func_847(iParam0))
	{
		iVar2 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar2 != __LIB_0__::getMinusOneOrNull())
		{
			iVar3 = __LIB_2__::func_55(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1946250.f_533[iVar3 /*3*/];
			}
		}
	}
	else if (__LIB_4__::func_955(iParam0) && !__LIB_8__::func_271(iParam0))
	{
		if (__LIB_4__::func_902(iParam0) && __LIB_1__::func_720())
		{
			return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
		}
		iVar4 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar4 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_641(iVar4))
			{
				iVar5 = __LIB_1__::func_754(iVar4);
				if (iVar5 != -1)
				{
					return Global_1946250.f_533[iVar5 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_952(iParam0))
	{
		iVar6 = __LIB_1__::func_644(iParam0);
		if (iVar6 != __LIB_0__::getMinusOneOrNull())
		{
			if (!__LIB_1__::func_645(iVar6))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_336[iVar6]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_336[iVar6], false);
				}
				else
				{
					return Global_2689235[__LIB_1__::func_644(iParam0) /*453*/].f_318.f_18;
				}
			}
			else
			{
				iVar7 = __LIB_1__::func_754(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1946250.f_533[iVar7 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_968(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_309))
		{
			return ENTITY::GET_ENTITY_COORDS(Global_2815059.f_309, false);
		}
	}
	else if (__LIB_4__::func_947(iParam0) && !__LIB_5__::func_314(iParam0))
	{
		iVar8 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar8 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_595(iVar8))
			{
				iVar9 = __LIB_2__::func_54(iVar8);
				if (iVar9 != -1)
				{
					return __LIB_1__::func_719(iVar9);
				}
			}
		}
	}
	else if (__LIB_4__::func_947(iParam0) && !__LIB_5__::func_314(iParam0))
	{
		iVar10 = Global_2689235[iParam0 /*453*/].f_318.f_9;
		if (iVar10 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_643(iVar10))
			{
				iVar11 = __LIB_1__::func_753(iVar10);
				if (iVar11 != -1)
				{
					return Global_1946250.f_533[iVar11 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_946(iParam0, 0))
	{
		iVar12 = __LIB_1__::func_644(iParam0);
		if (iVar12 != __LIB_0__::getMinusOneOrNull())
		{
			if (!__LIB_1__::func_637(iVar12))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_369[iVar12]))
				{
					return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_369[iVar12], false);
				}
				else
				{
					return Global_1892703[__LIB_1__::func_644(iParam0) /*599*/].f_584;
				}
			}
			else
			{
				iVar13 = __LIB_1__::func_753(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1946250.f_533[iVar13 /*3*/];
				}
			}
		}
	}
	else if (__LIB_4__::func_914(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (__LIB_4__::func_903(iParam0))
	{
		iVar14 = __LIB_19__::func_463(iParam0);
		if (iVar14 != __LIB_0__::getMinusOneOrNull())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_2703735.f_402[iVar14]))
			{
				return ENTITY::GET_ENTITY_COORDS(Global_2703735.f_402[iVar14], false);
			}
			else
			{
				return Global_1911933[iVar14 /*260*/].f_51;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (__LIB_4__::func_947(iParam0))
	{
		return __LIB_1__::func_719(Global_2689235[iParam0 /*453*/].f_318.f_6);
	}
	if (__LIB_8__::func_846(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1946250.f_533[Global_2689235[iParam0 /*453*/].f_318.f_6 /*3*/];
}

void func_555(struct<2> Param0)//Position - 0x325FE
{
	int iVar0;
	if (!__LIB_3__::func_487(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!__LIB_3__::func_487(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/]))
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_556), 0);
	__LIB_19__::func_492(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

void func_556(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x32956
{
	if (PLAYER::PLAYER_ID() == __LIB_1__::func_730())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !bParam2) && !__LIB_19__::func_403())
		{
			if (__LIB_0__::func_937(uParam1, 1000, 0))
			{
				__LIB_19__::func_293(ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam3);
				__LIB_0__::clearF_1Prop(uParam1);
			}
		}
		else
		{
			__LIB_15__::func_455(iParam3);
		}
	}
}

void func_557(int iParam0, bool bParam1, bool bParam2)//Position - 0x32B22
{
	struct<14> Var0;
	int iVar1;
	Var0.f_2 = 107890679;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = __LIB_0__::func_797();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		iVar1 = __LIB_0__::func_950(PLAYER::PLAYER_ID());
	}
	else if (bParam2)
	{
		iVar1 = __LIB_19__::func_487(1);
	}
	else
	{
		iVar1 = __LIB_3__::func_206(1, 1);
	}
	__LIB_1__::func_634(Var0, iVar1);
}

int func_558()//Position - 0xB268E
{
	int iVar0;
	if (__LIB_19__::func_406(Global_2703735.f_4.f_16))
	{
		iVar0 = __LIB_13__::func_552(Global_2703735.f_4.f_16);
	}
	else if (Global_2815059.f_6694.f_4 == 158)
	{
		iVar0 = Global_2815059.f_6694.f_3;
	}
	switch (iVar0)
	{
		case 41:
			return 13;
		case 42:
			return 17;
		case 25:
		case 26:
			return 21;
		case 38:
			return 25;
		case 34:
			return 65;
		default:
	}
	if (__LIB_0__::func_492(Global_2703735.f_4.f_16) == 271)
	{
		switch (__LIB_0__::func_525(Global_2703735.f_4.f_16))
		{
			case 6:
				return 17;
			case 13:
				return 25;
			case 7:
				return 45;
			case 5:
				return 53;
			}
		default:
	}
	return 2;
}

int func_559(int iParam0)//Position - 0xB922B
{
	if (iParam0 == 28)
	{
		if ((__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !__LIB_0__::func_428(PLAYER::PLAYER_ID())) && !__LIB_3__::func_439(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (__LIB_19__::func_495(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_560(struct<3> Param0)//Position - 0xC2EA0
{
	if (Global_1952191.f_5470.f_3 != 0)
	{
		if (__LIB_12__::func_309(Param0, Global_1952191.f_5470))
		{
			__LIB_19__::func_475(Param0);
			__LIB_19__::func_290();
		}
	}
}

void func_561(bool bParam0)//Position - 0xC3095
{
	if (bParam0)
	{
		if (!__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
		{
			if (__LIB_19__::func_495(PLAYER::PLAYER_ID()) != 0)
			{
				__LIB_1__::func_966(9);
			}
		}
	}
	else if (__LIB_0__::func_165(PLAYER::PLAYER_ID(), 9))
	{
		__LIB_1__::func_967(9);
	}
}

void func_562()//Position - 0xCA417
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bVar3 = __LIB_15__::func_454();
	iVar2 = __LIB_2__::func_39(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (__LIB_1__::func_876(iVar1, iVar2, 1) || __LIB_19__::func_482(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(PLAYER::PLAYER_ID(), iVar1, bVar3);
				PLAYER::SET_PLAYER_CAN_DAMAGE_PLAYER(iVar1, PLAYER::PLAYER_ID(), bVar3);
			}
		}
		iVar0++;
	}
}

void func_563(int iParam0, int iParam1)//Position - 0xD0B90
{
	if (!__LIB_1__::func_501())
	{
		return;
	}
	if (!__LIB_1__::func_868(-1))
	{
		return;
	}
	if (iParam0 != -1)
	{
		__LIB_7__::func_946(iParam0);
	}
	__LIB_19__::func_453(iParam1);
	__LIB_19__::func_500(256, -1);
}

void func_564(int iParam0, struct<3> Param1)//Position - 0xD390E
{
	struct<4> Var0;
	int iVar1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_0 = 997339103;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	iVar1 = __LIB_3__::func_206(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 6, iVar1);
	}
}

int func_565(bool bParam0, struct<3> Param1, var uParam2)//Position - 0x21C35
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_10__::func_803(Param1))
	{
		return 0;
	}
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (*uParam2 > 18)
	{
		return 0;
	}
	iVar0 = __LIB_19__::func_390(bParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam2)
		{
			if ((*uParam2)[iVar1] != 0)
			{
				iVar2 = __LIB_19__::func_389(iVar0, (*uParam2)[iVar1]);
				if (iVar2 != -1)
				{
					if (!__LIB_12__::func_309(Param1, Global_2681762.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!__LIB_0__::func_864(&(Global_1952191.f_5477)) || __LIB_0__::func_937(&(Global_1952191.f_5477), 10000, 0))
						{
							__LIB_0__::func_627(&(Global_1952191.f_5477), 0, 0);
							__LIB_19__::func_490(bParam0, Param1, uParam2);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

int func_566(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x28F98
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	iVar2 = __LIB_2__::func_101();
	if (__LIB_1__::func_76(sParam2))
	{
	}
	if (__LIB_0__::func_109())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = __LIB_1__::func_747(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1 /* Tunable: XP_MULTIPLIER */);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = __LIB_1__::func_704(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					__LIB_19__::func_343(0, &iVar1);
					break;
				case 3:
					__LIB_19__::func_343(1, &iVar1);
					break;
				case 1:
					__LIB_15__::func_339(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			__LIB_1__::func_746(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				__LIB_1__::func_759((__LIB_1__::func_335(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					__LIB_1__::func_746(1166, iVar1, -1);
				}
				__LIB_2__::func_47(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				__LIB_1__::func_745((__LIB_2__::func_46(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_567(int iParam0)//Position - 0x3339D
{
	if (!__LIB_0__::func_428(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || __LIB_19__::func_495(PLAYER::PLAYER_ID()) != 0)
		{
			__LIB_1__::func_966(20);
			__LIB_1__::func_28(__LIB_19__::func_469());
			if (__LIB_1__::func_15(PLAYER::PLAYER_ID()))
			{
				if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
				}
			}
		}
	}
}

float func_568()//Position - 0x9B5F3
{
	if (__LIB_19__::func_497())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2667225.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

float func_569()//Position - 0x9B64F
{
	if (__LIB_19__::func_497())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2667225.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2667225.f_45.f_67)) || Global_2667225.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_570()//Position - 0x9CF03
{
	if (__LIB_19__::func_497())
	{
		if (!Global_2667225.f_45.f_67 == 0)
		{
			if (__LIB_2__::func_926(Global_2667225.f_45.f_67))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_571()//Position - 0xA75D2
{
	int iVar0;
	if (Global_2667225.f_2878)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 0;
			}
			else if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 0;
			}
		}
	}
	if (__LIB_19__::func_497() && (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2667225.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2667225.f_45.f_67)))
	{
		return 1;
	}
	return 0;
}

void func_572(int iParam0, int iParam1, int iParam2)//Position - 0xD0A96
{
	if (iParam1 != -1)
	{
		__LIB_7__::func_946(iParam1);
	}
	if (iParam2 != -1)
	{
		__LIB_9__::func_357(iParam2);
	}
	__LIB_19__::func_500(iParam0, -1);
}

void func_573(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11)//Position - 0xD4104
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[3];
	int iVar5[3];
	int iVar6;
	int iVar7;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
		Global_1944213.f_4 = __LIB_2__::func_476();
		Global_1944213.f_5 = __LIB_2__::func_475();
		if (__LIB_1__::func_17(PLAYER::PLAYER_ID()) || __LIB_3__::func_131(PLAYER::PLAYER_ID()))
		{
			Global_1944213.f_6 = 1;
		}
		else
		{
			Global_1944213.f_6 = 0;
		}
		Global_1944213.f_1 = __LIB_19__::func_501(bParam9);
		Global_1944213.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_9 = __LIB_1__::func_137(bParam0);
		Global_1944213.f_10 = uParam1;
		Global_1944213.f_17 = Global_1944213.f_2;
		Global_1944213.f_18 = Global_1944213.f_2;
		Global_1944213.f_19 = __LIB_19__::func_509();
		Global_1944213.f_21 = (Global_1944213.f_8 - Global_1944213.f_7);
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		Global_1944213.f_24 = __LIB_12__::func_540(PLAYER::PLAYER_ID());
		Global_1944213.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		if (Global_1944213.f_24 > 2)
		{
			Global_1944213.f_24 = 2;
		}
		__LIB_15__::func_471(iVar0);
	}
	else if (bParam11)
	{
	}
	else
	{
		iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	}
	if ((__LIB_12__::func_654(iVar0) || iVar0 == 293) || iVar0 == 291)
	{
		Global_1943947.f_2 = __LIB_2__::func_476();
		Global_1943947.f_3 = __LIB_2__::func_475();
		Global_1943947.f_50 = iParam4;
		Global_1943947.f_51 = iParam5;
		Global_1943947.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943947.f_20 = (Global_1943947.f_10 - Global_1943947.f_9);
		Global_1943947.f_12 = uParam1;
		Global_1943947.f_19 = __LIB_15__::func_652(iVar0, bParam0, __LIB_19__::func_359(bParam3));
		if (bParam0)
		{
			Global_1943947.f_11 = 1;
		}
		else
		{
			Global_1943947.f_11 = 0;
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1943947.f_8 = 1;
		}
		else
		{
			Global_1943947.f_8 = 0;
		}
		Global_1943947.f_54 = __LIB_19__::func_379(1);
		Global_1943947.f_55 = __LIB_19__::func_379(0);
		if (iParam2 != 0)
		{
			Global_1943947.f_43 = 0;
			Global_1943947.f_45 = __LIB_7__::func_930(__LIB_0__::func_797(), iParam2);
			Global_1943947.f_47 = iParam7;
			Global_1943947.f_46 = iParam6;
			Global_1943947.f_52 = __LIB_19__::func_374(__LIB_0__::func_797(), iParam2);
		}
		__LIB_15__::func_469(iVar0);
	}
	else if (__LIB_12__::func_499(iVar0))
	{
		Global_1944003.f_2 = __LIB_2__::func_476();
		Global_1944003.f_3 = __LIB_2__::func_475();
		Global_1944003.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944003.f_19 = (Global_1944003.f_10 - Global_1944003.f_9);
		Global_1944003.f_12 = uParam1;
		if (bParam0)
		{
			Global_1944003.f_11 = 1;
		}
		else
		{
			Global_1944003.f_11 = 0;
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944003.f_8 = 1;
		}
		else
		{
			Global_1944003.f_8 = 0;
		}
		__LIB_15__::func_468(iVar0);
	}
	else if (((__LIB_4__::func_740(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		Global_1944066.f_2 = __LIB_2__::func_476();
		Global_1944066.f_3 = __LIB_2__::func_475();
		Global_1944066.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944066.f_18 = (Global_1944066.f_9 - Global_1944066.f_8);
		Global_1944066.f_11 = uParam1;
		Global_1944066.f_7 = __LIB_19__::func_509();
		Global_1944066.f_42 = __LIB_15__::func_347(__LIB_0__::getGlobal_1574918(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = __LIB_1__::func_721(iVar1);
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944066.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		else
		{
			Global_1944066.f_17 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_28 = iVar2;
		Global_1944066.f_29 = __LIB_1__::func_137((__LIB_11__::func_981(iVar1) || __LIB_11__::func_980(iVar1)));
		Global_1944066.f_30 = __LIB_1__::func_137(__LIB_4__::func_719(iVar1));
		Global_1944066.f_32 = __LIB_1__::func_137(__LIB_4__::func_673(iVar1));
		Global_1944066.f_33 = __LIB_1__::func_137(__LIB_2__::func_678(iVar1));
		Global_1944066.f_34 = __LIB_1__::func_137(__LIB_10__::func_102(iVar1));
		Global_1944066.f_35 = __LIB_1__::func_137(__LIB_4__::func_634(0, iVar1) == 1);
		Global_1944066.f_36 = __LIB_1__::func_137(__LIB_3__::func_928(iVar1));
		Global_1944066.f_37 = __LIB_1__::func_137(__LIB_0__::func_389(iVar1));
		Global_1944066.f_38 = __LIB_1__::func_137(__LIB_4__::func_633(iVar1));
		Global_1944066.f_39 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 0));
		Global_1944066.f_40 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 2));
		Global_1944066.f_41 = __LIB_1__::func_137(__LIB_12__::func_953(iVar1, iVar2, 1));
		if (__LIB_12__::func_517(iVar1))
		{
			Global_1944066.f_31 = 2;
		}
		else if (__LIB_12__::func_516(iVar1))
		{
			Global_1944066.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1944066.f_10 = 1;
		}
		else
		{
			Global_1944066.f_10 = 0;
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_6 = 1;
		}
		else
		{
			Global_1944066.f_6 = 0;
		}
		Global_1944066.f_21 = -2;
		Global_1944066.f_22 = -2;
		__LIB_15__::func_467(iVar0);
	}
	else if (__LIB_1__::func_612(iVar0))
	{
		Global_1944113.f_2 = __LIB_2__::func_476();
		Global_1944113.f_3 = __LIB_2__::func_475();
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944113.f_6 = 1;
		}
		else
		{
			Global_1944113.f_6 = 0;
		}
		Global_1944113.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944113.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944113.f_11 = uParam1;
		Global_1944113.f_17 = __LIB_19__::func_314(__LIB_1__::func_730());
		Global_1944113.f_18 = (Global_1944113.f_9 - Global_1944113.f_8);
		Global_1944113.f_20 = iParam8;
		Global_1944113.f_21 = -2;
		Global_1944113.f_22 = -2;
		Global_1944113.f_27 = __LIB_1__::func_888();
		Global_1944113.f_29 = __LIB_1__::func_360(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__::func_360(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__::func_360(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__::func_360(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__::func_360(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__::func_360(6111, -1, 0);
		Global_1944113.f_36 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944113.f_37 = __LIB_19__::func_486();
		__LIB_15__::func_369();
		__LIB_15__::func_465(iVar0);
	}
	else if (__LIB_1__::func_77(iVar0))
	{
		Global_1944167.f_2 = __LIB_2__::func_476();
		Global_1944167.f_3 = __LIB_2__::func_475();
		Global_1944167.f_1 = iParam10;
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944167.f_6 = 1;
		}
		else
		{
			Global_1944167.f_6 = 0;
		}
		Global_1944167.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944167.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944167.f_11 = uParam1;
		Global_1944167.f_18 = (Global_1944167.f_9 - Global_1944167.f_8);
		Global_1944167.f_20 = iParam8;
		Global_1944167.f_23 = Global_786547;
		Global_1944167.f_36 = Global_786547.f_1;
		Global_1944167.f_24 = __LIB_1__::func_360(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__::func_360(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__::func_360(6166, -1, 0);
		Global_1944167.f_27 = __LIB_1__::func_137((((__LIB_2__::func_934() || __LIB_13__::func_355()) || __LIB_13__::func_354()) || __LIB_1__::func_641(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__::func_360(6167, -1, 0);
		Global_1944167.f_29 = __LIB_1__::func_137(__LIB_9__::func_118());
		Global_1944167.f_35 = -1;
		Global_1944167.f_38 = -1;
		Global_1944167.f_39 = Global_1944167.f_4;
		Global_1944167.f_40 = Global_1944167.f_5;
		Global_1944167.f_41 = __LIB_2__::func_476();
		Global_1944167.f_42 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944167.f_44 = Global_1944167.f_18;
		__LIB_15__::func_464(iVar0);
	}
	else if (__LIB_19__::func_370(iVar0))
	{
		if (Global_1944303.f_2 == -1)
		{
			Global_1944303.f_2 = __LIB_2__::func_476();
		}
		if (Global_1944303.f_3 == -1)
		{
			Global_1944303.f_3 = __LIB_2__::func_475();
		}
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944303.f_6 = 1;
		}
		else
		{
			Global_1944303.f_6 = 0;
		}
		Global_1944303.f_1 = __LIB_19__::func_501(0);
		Global_1944303.f_7 = __LIB_19__::func_509();
		Global_1944303.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944303.f_11 = uParam1;
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944303.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944303.f_18 = (Global_1944303.f_9 - Global_1944303.f_8);
		Global_1944303.f_19 = Global_2815059.f_6745;
		Global_1944303.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		Global_1944303.f_29 = __LIB_1__::func_137(__LIB_12__::func_515(PLAYER::PLAYER_ID()));
		Global_1944303.f_30 = __LIB_1__::func_137(__LIB_4__::func_333(PLAYER::PLAYER_ID()));
		Global_1944303.f_31 = __LIB_4__::func_280(PLAYER::PLAYER_ID());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (Global_1944303.f_34 > 2)
		{
			Global_1944303.f_34 = 2;
		}
		Global_1944303.f_41 = __LIB_15__::func_328(iVar0);
		__LIB_15__::func_463(iVar0);
	}
	else if (__LIB_15__::func_326(iVar0))
	{
		Global_1944249.f_2 = __LIB_2__::func_476();
		Global_1944249.f_3 = __LIB_2__::func_475();
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944249.f_6 = 1;
		}
		else
		{
			Global_1944249.f_6 = 0;
		}
		Global_1944249.f_1 = __LIB_19__::func_501(0);
		Global_1944249.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944249.f_11 = uParam1;
		Global_1944249.f_18 = (Global_1944249.f_9 - Global_1944249.f_8);
		Global_1944249.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_15__::func_475(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_13__::func_383(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_4__::func_280(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_1__::func_137(__LIB_4__::func_355(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_1__::func_137(__LIB_4__::func_354(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_1__::func_137(__LIB_4__::func_353(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_1__::func_137(__LIB_4__::func_352(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_12__::func_512(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_6__::func_552(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_12__::func_511(PLAYER::PLAYER_ID());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (Global_1944249.f_42 > 2)
		{
			Global_1944249.f_42 = 2;
		}
		__LIB_15__::func_462(iVar0);
	}
	else if (__LIB_12__::func_747(iVar0))
	{
		Global_1944390.f_2 = __LIB_2__::func_476();
		Global_1944390.f_3 = __LIB_2__::func_475();
		Global_1944390.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944390.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
		{
			Global_1944390.f_6 = 1;
		}
		else
		{
			Global_1944390.f_6 = 0;
		}
		Global_1944390.f_7 = __LIB_19__::func_509();
		Global_1944390.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944390.f_10 = __LIB_1__::func_137(bParam0);
		Global_1944390.f_11 = uParam1;
		if (__LIB_1__::func_730() != -1)
		{
			Global_1944390.f_17 = __LIB_1__::func_136(__LIB_1__::func_730());
		}
		Global_1944390.f_18 = (Global_1944390.f_9 - Global_1944390.f_8);
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = __LIB_2__::func_839(PLAYER::PLAYER_ID());
		Global_1944390.f_27 = __LIB_1__::func_137(__LIB_1__::func_124(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_2__::func_771(21, -1);
		Global_1944390.f_29 = __LIB_1__::func_137(__LIB_1__::func_341(PLAYER::PLAYER_ID()));
		__LIB_15__::func_351(iVar0);
	}
	else if (__LIB_4__::func_184(iVar0))
	{
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944465.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944465.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		Global_1944465.f_10 = __LIB_19__::func_509();
		Global_1944465.f_11 = 1;
		Global_1944465.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1973074);
		Global_1944465.f_14 = uParam1;
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		__LIB_15__::func_461(iVar0);
	}
	else if (__LIB_11__::func_619(iVar0))
	{
		Global_1944552.f_2 = __LIB_2__::func_476();
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944552.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944552.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1944552.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944552.f_10 = __LIB_19__::func_509();
		Global_1944552.f_11 = 1;
		Global_1944552.f_14 = uParam1;
		__LIB_15__::func_460(iVar0);
	}
	else if (__LIB_12__::func_510(iVar0))
	{
		Global_1944664.f_2 = __LIB_2__::func_476();
		Global_1944664.f_9 = 1;
		Global_1944664.f_10 = bParam0;
		Global_1944664.f_11 = uParam1;
		__LIB_15__::func_459(iVar0);
	}
	else if (__LIB_3__::func_691(iVar0) || __LIB_15__::func_310(iVar0))
	{
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944685.f_5 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944685.f_6 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1944685.f_7 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944685.f_9 = __LIB_19__::func_509();
		Global_1944685.f_10 = 1;
		Global_1944685.f_13 = uParam1;
		Global_1944685.f_33 = bParam0;
		Global_1944685.f_32 = iVar0;
		__LIB_15__::func_458(iVar0);
	}
	else if (__LIB_15__::func_309(iVar0) || __LIB_15__::func_308(iVar0))
	{
		iVar3 = __LIB_0__::func_797();
		if (iVar3 != -1)
		{
			Global_1944754.f_7 = __LIB_2__::func_477(iVar3);
			Global_1944754.f_8 = __LIB_2__::func_552(iVar3);
		}
		Global_1944754.f_9 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944754.f_11 = __LIB_19__::func_509();
		Global_1944754.f_12 = 1;
		Global_1944754.f_15 = bParam0;
		Global_1944754.f_3 = __LIB_2__::func_476();
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_15__::func_309(iVar0))
		{
			Global_1944754.f_4 = __LIB_15__::func_320(__LIB_19__::func_358(PLAYER::PLAYER_ID()));
		}
		else
		{
			Global_1944754.f_4 = __LIB_15__::func_319(__LIB_19__::func_357(PLAYER::PLAYER_ID()));
		}
		Global_1944754.f_1 = iVar0;
		Global_1944754.f_16 = uParam1;
		iVar7 = PLAYER::PLAYER_ID();
		if (iVar3 != -1)
		{
			iVar7 = iVar3;
		}
		iVar6 = 0;
		while (iVar6 < 3)
		{
			iVar4[iVar6] = __LIB_15__::func_318(__LIB_13__::func_128(iVar7, iVar6));
			iVar5[iVar6] = __LIB_15__::func_317(__LIB_13__::func_129(iVar7, iVar6));
			iVar6++;
		}
		__LIB_15__::func_457(iVar0, &iVar4, &iVar5);
	}
	else
	{
		Global_1943929.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1943929.f_7 = 1;
		}
		else
		{
			Global_1943929.f_7 = 0;
		}
		Global_1943929.f_8 = uParam1;
		if (Global_1943929.f_4 == 0)
		{
			if ((__LIB_0__::func_315(PLAYER::PLAYER_ID()) || __LIB_12__::func_482(PLAYER::PLAYER_ID())) || __LIB_0__::func_428(PLAYER::PLAYER_ID()))
			{
				Global_1943929.f_4 = 1;
			}
		}
	}
}

int func_574(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2B381
{
	int iVar0;
	int iVar1;
	if (__LIB_3__::func_467(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_3__::func_467(PLAYER::PLAYER_ID()) || (__LIB_0__::func_80() && __LIB_1__::func_5())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_1__::func_4();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_19__::func_494(iParam1, iParam0, 0);
							}
							else
							{
								return __LIB_19__::func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return __LIB_19__::func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_19__::func_494(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_2__::func_599(0, -1, 0);
				}
			}
			else
			{
				return __LIB_2__::func_599(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_19__::func_494(iParam1, iParam0, 0);
		}
		else
		{
			return __LIB_19__::func_504(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return __LIB_19__::func_504(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

void func_575(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xD141F
{
	if (bParam0)
	{
		if (__LIB_1__::func_739())
		{
			__LIB_2__::func_26();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		__LIB_2__::func_91();
		__LIB_19__::func_371(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		__LIB_19__::func_510();
	}
}

int func_576(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xD2FF9
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_1__::func_794(iParam0);
	if (bParam1)
	{
		__LIB_19__::func_511(iParam0, bParam2, bParam3);
	}
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17446 /* Tunable: BIKER_WEED_PRODUCTION_TIME */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17455 /* Tunable: -1694873660 */);
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17460 /* Tunable: 1575359233 */);
			}
			if (Global_262145.f_32949 /* Tunable: 335485367 */ && !__LIB_0__::func_137(34716, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32956 /* Tunable: 1015227874 */));
			}
			break;
		case 3:
			iVar0 = Global_262145.f_17447 /* Tunable: BIKER_METH_PRODUCTION_TIME */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17454 /* Tunable: 1944848251 */);
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17459 /* Tunable: 1577999189 */);
			}
			if (Global_262145.f_32950 /* Tunable: -801385760 */ && !__LIB_0__::func_137(34719, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32957 /* Tunable: -601866636 */));
			}
			break;
		case 4:
			iVar0 = Global_262145.f_17448 /* Tunable: BIKER_CRACK_PRODUCTION_TIME */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17453 /* Tunable: 2070857577 */);
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17458 /* Tunable: -1539796661 */);
			}
			if (Global_262145.f_32951 /* Tunable: -660655388 */ && !__LIB_0__::func_137(34717, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32958 /* Tunable: -1764267310 */));
			}
			break;
		case 0:
			iVar0 = Global_262145.f_17449 /* Tunable: BIKER_FAKEIDS_PRODUCTION_TIME */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17451 /* Tunable: 1672482518 */);
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17456 /* Tunable: -518264160 */);
			}
			if (Global_262145.f_32952 /* Tunable: 1893606490 */ && !__LIB_0__::func_137(34718, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32959 /* Tunable: 1899275219 */));
			}
			break;
		case 2:
			iVar0 = Global_262145.f_17450 /* Tunable: BIKER_COUNTERCASH_PRODUCTION_TIME */;
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17452 /* Tunable: 1690071006 */);
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17457 /* Tunable: -1454958662 */);
			}
			if (Global_262145.f_32953 /* Tunable: 1786115839 */ && !__LIB_0__::func_137(34720, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32960 /* Tunable: 6615240 */));
			}
			break;
		case 5:
			if (bParam2)
			{
				iVar0 = Global_262145.f_21592 /* Tunable: GR_RESEARCH_PRODUCTION_TIME */;
			}
			else
			{
				iVar0 = Global_262145.f_21576 /* Tunable: GR_MANU_PRODUCTION_TIME */;
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam2)
				{
					iVar0 = (iVar0 - Global_262145.f_21593 /* Tunable: -1148432846 */);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21577 /* Tunable: 631477612 */);
				}
			}
			if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam2)
				{
					iVar0 = (iVar0 - Global_262145.f_21594 /* Tunable: 510883248 */);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21578 /* Tunable: 818645907 */);
				}
			}
			if (bParam2)
			{
				if (Global_262145.f_32955 /* Tunable: 737414449 */ && !__LIB_0__::func_137(34739, -1))
				{
					iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32962 /* Tunable: -551759160 */));
				}
			}
			else if (Global_262145.f_32954 /* Tunable: 275206414 */ && !__LIB_0__::func_137(34721, -1))
			{
				iVar0 = SYSTEM::FLOOR((IntToFloat(iVar0) * Global_262145.f_32961 /* Tunable: -1509366616 */));
			}
			if (__LIB_7__::func_934(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

void func_577(int iParam0, int iParam1, bool bParam2)//Position - 0xD6935
{
	__LIB_15__::func_436();
	if (__LIB_9__::func_704(PLAYER::PLAYER_ID()))
	{
		__LIB_19__::func_512(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && __LIB_19__::func_362(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1943915, 0);
				break;
			}
	}
	if (!__LIB_1__::func_501() && !__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
	{
		if (__LIB_2__::func_58())
		{
			__LIB_11__::func_670(3);
		}
	}
	__LIB_11__::func_670(4);
	if (__LIB_12__::func_548(0))
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 = __LIB_0__::func_797();
	}
	if ((__LIB_12__::func_654(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		__LIB_15__::func_333();
		Global_1943947.f_18 = __LIB_19__::func_314(__LIB_1__::func_730());
	}
	else if (__LIB_12__::func_499(__LIB_4__::func_921(PLAYER::PLAYER_ID())))
	{
		__LIB_15__::func_332();
		Global_1944003.f_18 = __LIB_19__::func_314(__LIB_1__::func_730());
	}
	if (bParam2)
	{
		if (!__LIB_12__::func_495())
		{
			__LIB_2__::func_135(1);
		}
	}
	__LIB_15__::func_425();
}

int func_578(int iParam0, var* uParam1)//Position - 0x63C4
{
	int iVar0;
	int iVar1;
	if (!__LIB_19__::func_513(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!__LIB_1__::func_524(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (__LIB_1__::func_541(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (__LIB_1__::func_523(iParam0))
	{
	}
	return 0;
}

void func_579()//Position - 0x345C6
{
	int iVar0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_269.f_20 = -1;
	Global_2667225.f_2875 = -1f;
	iVar0 = 0;
	while (iVar0 < 42)
	{
		__LIB_19__::func_514(iVar0);
		iVar0++;
	}
	if (__LIB_3__::func_165(PLAYER::PLAYER_ID(), 0))
	{
		Global_2824571.f_89 = 1;
		Global_2824571.f_90 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_580(int iParam0)//Position - 0xB34AF
{
	int iVar0;
	if (__LIB_0__::func_927(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (__LIB_0__::func_983())
	{
		iParam0 = 5;
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			__LIB_19__::func_498();
			break;
		case 2:
			if ((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), false) && __LIB_2__::func_517() != joaat("WEAPON_UNARMED")) && __LIB_2__::func_517() != joaat("GADGET_PARACHUTE"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), true);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517()) == 0 && __LIB_2__::func_517() != joaat("WEAPON_STONE_HATCHET"))
				{
					__LIB_19__::func_381(__LIB_2__::func_517());
				}
				if (Global_1574580 == 0 || __LIB_2__::func_517() == 0)
				{
					if (__LIB_2__::func_517() == joaat("WEAPON_STONE_HATCHET"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), true);
						Global_1574580 = __LIB_2__::func_517();
					}
					else
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), true), false);
						Global_1574580 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				if ((!__LIB_3__::func_105(__LIB_2__::func_517()) && !__LIB_3__::func_104(__LIB_2__::func_517())) && __LIB_2__::func_517() != 0)
				{
					WEAPON::REFILL_AMMO_INSTANTLY(PLAYER::PLAYER_PED_ID());
				}
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
				if (iVar0 != 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
				}
			}
			break;
		case 3:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), true);
				Global_1574580 = __LIB_2__::func_517();
			}
			break;
		case 4:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_2__::func_517(), true);
				Global_1574580 = __LIB_2__::func_517();
			}
			break;
		case 5:
			if (!Global_1931426)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				Global_1574580 = joaat("WEAPON_UNARMED");
			}
			break;
		case 6:
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
			Global_1574580 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
			break;
	}
}

int func_581(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBA56B
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
			__LIB_16__::func_291();
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
	__LIB_0__::func_698();
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
	__LIB_16__::func_291();
	__LIB_16__::func_290();
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

bool func_582(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xBCCEA
{
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam8, iParam9, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21687, sParam6, 24);
	StringCopy(&Global_21693, sParam7, 24);
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return __LIB_0__::func_711(sParam3, iParam4, bParam10);
}

void func_583(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xC4672
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (bParam5)
	{
		iVar0 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
		Global_1944213 = iVar0;
		Global_1944213.f_1 = iParam0;
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944213.f_2 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944213.f_3 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944213.f_2), &(Global_1944213.f_3));
		}
		Global_1944213.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944213.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		Global_1944213.f_13 = 0;
		Global_1944213.f_14 = 0;
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944213.f_23 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
	}
	else
	{
		iVar0 = __LIB_0__::func_492(PLAYER::PLAYER_ID());
	}
	if (((iParam2 || __LIB_12__::func_654(iVar0)) || iVar0 == 293) || iVar0 == 291)
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1943947 = iVar0;
		if (__LIB_3__::func_709(iVar0) || iVar0 == 293)
		{
			Global_1943947.f_1 = 4;
		}
		else if (__LIB_3__::func_710(iVar0))
		{
			Global_1943947.f_1 = 5;
		}
		else if (__LIB_1__::func_695(iVar0, 0))
		{
			Global_1943947.f_1 = 2;
			if (__LIB_15__::func_311(iVar0))
			{
				Global_1943947.f_1 = 3;
			}
		}
		else
		{
			Global_1943947.f_1 = 1;
		}
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1943947.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1943947.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1943947.f_6), &(Global_1943947.f_7));
		}
		Global_1943947.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1943947.f_27 = 1;
			Global_1943947.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1943947.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1943947.f_40 = __LIB_1__::func_794(iParam1);
			Global_1943947.f_41 = __LIB_15__::func_348();
			Global_1943947.f_42 = __LIB_6__::func_580(PLAYER::PLAYER_ID(), iParam1);
			Global_1943947.f_44 = __LIB_7__::func_930(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!__LIB_1__::func_501() || iVar0 != 192)
		{
			Global_1943947.f_53 = 0;
		}
	}
	else if (((__LIB_4__::func_740(iVar0) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
	{
		if ((((iVar0 == 225 || iVar0 == 226) || iVar0 == 297) || iVar0 == 296) || iVar0 == 298)
		{
			Global_1944066 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1944066 = iParam0 + 1;
		}
		else
		{
			Global_1944066 = __LIB_19__::func_353(PLAYER::PLAYER_ID());
		}
		Global_1944066.f_46 = iVar0;
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944066.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		else
		{
			Global_1944066.f_17 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (__LIB_0__::func_525(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1944066.f_1 = 0;
				}
				else
				{
					Global_1944066.f_1 = 1;
				}
				break;
			case 226:
				Global_1944066.f_1 = 2;
				break;
			case 227:
				Global_1944066.f_1 = 3;
				break;
			case 297:
				Global_1944066.f_1 = 4;
				break;
			case 296:
				Global_1944066.f_1 = 5;
				break;
			case 298:
				Global_1944066.f_1 = 6;
				break;
		}
		Global_1944066.f_21 = 1;
		Global_1944066.f_22 = 1;
		Global_1944066.f_44 = __LIB_19__::func_379(1);
		Global_1944066.f_45 = __LIB_19__::func_379(0);
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944066.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944066.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944066.f_4), &(Global_1944066.f_5));
		}
		Global_1944066.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944066.f_20 = iParam0;
		}
	}
	else if (__LIB_12__::func_499(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1944003 = iVar0;
		Global_1943947.f_1 = 1;
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944003.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944003.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944003.f_6), &(Global_1944003.f_7));
		}
		Global_1944003.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944003.f_21 = iParam0;
		}
	}
	else if (__LIB_1__::func_612(iVar0))
	{
		Global_1944113 = iVar0;
		Global_1944113.f_1 = iParam0;
		Global_1944113.f_21 = 1;
		Global_1944113.f_22 = 1;
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944113.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944113.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944113.f_4), &(Global_1944113.f_5));
		}
		Global_1944113.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944113.f_20 = iParam0;
		}
		Global_1944113.f_27 = __LIB_15__::func_347(__LIB_0__::getGlobal_1574918(), 5);
		Global_1944113.f_28 = __LIB_1__::func_137(__LIB_1__::func_655(PLAYER::PLAYER_ID()));
		Global_1944113.f_29 = __LIB_1__::func_360(6110, -1, 0);
		Global_1944113.f_30 = __LIB_1__::func_360(6106, -1, 0);
		Global_1944113.f_31 = __LIB_1__::func_360(6107, -1, 0);
		Global_1944113.f_32 = __LIB_1__::func_360(6109, -1, 0);
		Global_1944113.f_33 = __LIB_1__::func_360(6108, -1, 0);
		Global_1944113.f_34 = __LIB_1__::func_360(6111, -1, 0);
		Global_1944113.f_7 = __LIB_19__::func_509();
		Global_1944113.f_51 = __LIB_1__::func_137(bParam4);
	}
	else if (__LIB_1__::func_77(iVar0))
	{
		Global_1944167 = iVar0;
		Global_1944167.f_1 = iParam0;
		Global_1944167.f_21 = 1;
		Global_1944167.f_22 = 1;
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944167.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944167.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944167.f_4), &(Global_1944167.f_5));
		}
		Global_1944167.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1944167.f_20 = iParam0;
		}
		Global_1944167.f_24 = __LIB_1__::func_360(6160, -1, 0);
		Global_1944167.f_25 = __LIB_1__::func_360(6165, -1, 0);
		Global_1944167.f_26 = __LIB_1__::func_360(6166, -1, 0);
		Global_1944167.f_27 = __LIB_1__::func_137((((__LIB_2__::func_934() || __LIB_13__::func_355()) || __LIB_13__::func_354()) || __LIB_1__::func_641(PLAYER::PLAYER_ID())));
		Global_1944167.f_28 = __LIB_1__::func_360(6167, -1, 0);
		Global_1944167.f_29 = __LIB_1__::func_137(__LIB_9__::func_118());
		Global_1944167.f_31 = 0;
		Global_1944167.f_30 = 0;
		Global_1944167.f_32 = 0;
		Global_1944167.f_33 = 0;
		Global_1944167.f_34 = 0;
		Global_1944167.f_16 = 0;
		Global_1944167.f_7 = __LIB_19__::func_509();
	}
	else if (__LIB_19__::func_370(iVar0))
	{
		Global_1944303 = iVar0;
		Global_1944303.f_1 = iParam0;
		Global_1944303.f_21 = 1;
		Global_1944303.f_22 = 1;
		Global_1944303.f_7 = __LIB_19__::func_509();
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944303.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944303.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944303.f_4), &(Global_1944303.f_5));
		}
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944303.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944303.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944303.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		Global_1944303.f_16 = 0;
		Global_1944303.f_24 = 0;
		Global_1944303.f_23 = 0;
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944303.f_33 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		Global_1944303.f_39 = __LIB_19__::func_379(1);
		Global_1944303.f_40 = __LIB_19__::func_379(0);
	}
	else if (iVar0 == 237)
	{
		Global_1944249 = iVar0;
		Global_1944249.f_1 = iParam0;
		Global_1944249.f_21 = 1;
		Global_1944249.f_22 = 1;
		Global_1944249.f_7 = __LIB_19__::func_509();
		Global_1944249.f_24 = 0;
		Global_1944249.f_23 = 0;
		Global_1944249.f_16 = 0;
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1944249.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1944249.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1944249.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
		if (Global_1944249.f_28)
		{
			Global_1944249.f_29 = __LIB_15__::func_475(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1944249.f_29 = 0;
		}
		Global_1944249.f_30 = __LIB_13__::func_383(PLAYER::PLAYER_ID(), 4, -1);
		Global_1944249.f_31 = __LIB_4__::func_280(PLAYER::PLAYER_ID());
		Global_1944249.f_32 = __LIB_1__::func_137(__LIB_4__::func_355(PLAYER::PLAYER_ID()));
		Global_1944249.f_33 = __LIB_1__::func_137(__LIB_4__::func_354(PLAYER::PLAYER_ID()));
		Global_1944249.f_34 = __LIB_1__::func_137(__LIB_4__::func_353(PLAYER::PLAYER_ID()));
		Global_1944249.f_35 = __LIB_1__::func_137(__LIB_4__::func_352(PLAYER::PLAYER_ID()));
		Global_1944249.f_36 = __LIB_12__::func_512(PLAYER::PLAYER_ID());
		Global_1944249.f_37 = __LIB_6__::func_552(PLAYER::PLAYER_ID());
		Global_1944249.f_39 = __LIB_12__::func_511(PLAYER::PLAYER_ID());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944249.f_41 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (__LIB_1__::func_730() != __LIB_0__::getMinusOneOrNull())
		{
			__LIB_15__::func_312(__LIB_1__::func_730(), &(Global_1944249.f_4), &(Global_1944249.f_5));
		}
		Global_1944249.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1944249.f_28 = __LIB_1__::func_595(PLAYER::PLAYER_ID());
	}
	else if (__LIB_12__::func_747(iVar0))
	{
		Global_1944390 = iVar0;
		Global_1944390.f_1 = __LIB_0__::func_525(PLAYER::PLAYER_ID());
		Global_1944390.f_2 = __LIB_2__::func_476();
		Global_1944390.f_3 = __LIB_2__::func_475();
		Global_1944390.f_4 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944390.f_5 = __LIB_2__::func_552(__LIB_0__::func_797());
		Global_1944390.f_7 = __LIB_19__::func_509();
		Global_1944390.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944390.f_17 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944390.f_21 = 1;
		Global_1944390.f_22 = 1;
		Global_1944390.f_25 = iParam0;
		Global_1944390.f_27 = __LIB_1__::func_137(__LIB_1__::func_124(PLAYER::PLAYER_ID()));
		Global_1944390.f_28 = __LIB_2__::func_771(21, -1);
	}
	else if (__LIB_4__::func_184(iVar0))
	{
		Global_1944465 = Global_786547.f_1;
		Global_1944465.f_2 = Global_786547;
		Global_1944465.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944465.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944465.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944465.f_9 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944465.f_10 = __LIB_19__::func_509();
		Global_1944465.f_19 = 1;
		Global_1944465.f_20 = 1;
		Global_1944465.f_21 = 0;
		Global_1944465.f_22 = 0;
		Global_1944465.f_23 = 0;
		Global_1973074 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (__LIB_11__::func_619(iVar0))
	{
		Global_1944552 = Global_786547.f_1;
		Global_1944552.f_3 = Global_786547;
		Global_1944552.f_6 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944552.f_7 = __LIB_2__::func_552(__LIB_0__::func_797());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944552.f_8 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944552.f_9 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944552.f_10 = __LIB_19__::func_509();
		Global_1944552.f_21 = 0;
		Global_1944552.f_22 = 0;
		Global_1944552.f_23 = 0;
		Global_1944552.f_26 = __LIB_19__::func_379(1);
		Global_1944552.f_34 = __LIB_19__::func_379(0);
		Global_1944552.f_15 = !__LIB_1__::func_876(PLAYER::PLAYER_ID(), __LIB_1__::func_730(), 1);
	}
	else if (__LIB_12__::func_510(iVar0))
	{
		Global_1944664 = iParam0;
		Global_1944664.f_1 = iVar0;
		Global_1944664.f_3 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944664.f_4 = __LIB_2__::func_552(__LIB_0__::func_797());
		Global_1944664.f_5 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		Global_1944664.f_6 = __LIB_19__::func_509();
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944664.f_7 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		Global_1944664.f_8 = 0;
	}
	else if (__LIB_3__::func_691(iVar0) || __LIB_15__::func_310(iVar0))
	{
		Global_1944685 = Global_786547.f_1;
		Global_1944685.f_27 = Global_786547;
		Global_1944685.f_5 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944685.f_6 = __LIB_2__::func_552(__LIB_0__::func_797());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944685.f_7 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944685.f_8 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		else
		{
			Global_1944685.f_8 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		}
		Global_1944685.f_9 = __LIB_19__::func_509();
		Global_1944685.f_18 = 1;
		Global_1944685.f_19 = 1;
		Global_1944685.f_20 = 0;
		Global_1944685.f_21 = 0;
		Global_1944685.f_22 = 0;
		Global_1944685.f_23 = __LIB_19__::func_379(1);
		Global_1944685.f_24 = __LIB_19__::func_379(0);
		Global_1944685.f_14 = !__LIB_1__::func_876(PLAYER::PLAYER_ID(), __LIB_1__::func_730(), 1);
	}
	else if (__LIB_15__::func_309(iVar0) || __LIB_15__::func_308(iVar0))
	{
		Global_1944754.f_7 = __LIB_2__::func_477(__LIB_0__::func_797());
		Global_1944754.f_8 = __LIB_2__::func_552(__LIB_0__::func_797());
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			Global_1944754.f_9 = __LIB_1__::func_137(__LIB_1__::func_375(1));
		}
		else
		{
			Global_1944754.f_9 = -1;
		}
		if (__LIB_0__::func_797() != -1)
		{
			Global_1944754.f_10 = __LIB_1__::func_136(__LIB_0__::func_797());
		}
		else
		{
			Global_1944754.f_10 = __LIB_1__::func_136(PLAYER::PLAYER_ID());
		}
		Global_1944754.f_11 = __LIB_19__::func_509();
		Global_1944754.f_20 = 0;
		Global_1944754.f_21 = 0;
		Global_1944754.f_22 = 0;
		Global_1944754.f_23 = __LIB_19__::func_379(1);
		Global_1944754.f_24 = __LIB_19__::func_379(0);
		Global_1944754.f_17 = !__LIB_1__::func_876(PLAYER::PLAYER_ID(), __LIB_1__::func_730(), 1);
		Global_1944754.f_1 = iVar0;
	}
	else
	{
		if (__LIB_0__::func_797() != __LIB_0__::getMinusOneOrNull())
		{
			Global_1943929 = __LIB_2__::func_477(__LIB_0__::func_797());
			Global_1943929.f_1 = __LIB_2__::func_552(__LIB_0__::func_797());
		}
		Global_1943929.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1943929.f_13 = __LIB_15__::func_346();
		Global_1943929.f_15 = 0;
		if (__LIB_12__::func_548(1))
		{
			if (__LIB_1__::func_730() == __LIB_0__::func_797())
			{
				Global_1943929.f_15 = 1;
			}
		}
		if (__LIB_12__::func_555())
		{
			Global_1944066.f_28 = 1;
		}
		if (((((__LIB_4__::func_931() || __LIB_4__::func_930()) || __LIB_4__::func_929()) || __LIB_4__::func_928()) || __LIB_4__::func_927()) || __LIB_3__::func_929(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_30 = 1;
		}
		if (__LIB_12__::func_720(__LIB_12__::func_636(joaat("trailersmall2"))))
		{
			Global_1944066.f_32 = 1;
		}
		if (__LIB_12__::func_739(__LIB_1__::func_810(joaat("caddy"))))
		{
			Global_1944066.f_31 = 1;
		}
		if (__LIB_11__::func_981(PLAYER::PLAYER_ID()) || __LIB_11__::func_980(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_29 = 1;
		}
		if (__LIB_2__::func_678(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_33 = 1;
			Global_1944066.f_34 = 1;
		}
		if (__LIB_4__::func_673(PLAYER::PLAYER_ID()))
		{
			Global_1944066.f_36 = 1;
		}
		if (__LIB_4__::func_634(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1944066.f_35 = 1;
		}
		if (__LIB_12__::func_537(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1944066.f_37 = 1;
		}
		if (__LIB_12__::func_537(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1944066.f_38 = 1;
		}
		if (__LIB_12__::func_952(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iVar2);
				if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1944066.f_39 = 1;
				}
				if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1944066.f_40 = 1;
				}
				if (__LIB_12__::func_953(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1944066.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

void func_584()//Position - 0x2B8
{
	Local_219.f_22++;
	if (Local_219.f_22 >= Local_196.f_38)
	{
		Local_219.f_22 = 0;
	}
}

int func_585()//Position - 0x650
{
	if (Local_196.f_102 != -1)
	{
		return Local_196.f_102 * 60 * 1000;
	}
	return Local_196.f_102;
}

int func_586()//Position - 0x889
{
	return Local_196.f_19;
}

bool func_587(int iParam0, int iParam1)//Position - 0xB05
{
	return __LIB_0__::func_316(&(Local_196.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_588(int iParam0)//Position - 0xB4A
{
	if (Local_213.f_156.f_168 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_168);
		return StackVal;
	}
	return 0;
}

int func_589(int iParam0)//Position - 0xD6A
{
	if (Local_213.f_156.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_1);
		return StackVal;
	}
	return 0;
}

int func_590()//Position - 0x10C8
{
	Call_Loc(Local_213.f_64);
	return StackVal;
}

bool func_591(int iParam0)//Position - 0x1115
{
	return __LIB_0__::func_316(&(Local_196.f_16), iParam0);
}

struct<9> func_592(int iParam0)//Position - 0x2470
{
	struct<9> Var0;
	Var0 = 1;
	if (Local_213.f_453.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_453.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_196.f_120.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_196.f_120.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_196.f_120.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_196.f_120.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

struct<9> func_593(int iParam0)//Position - 0x2506
{
	return Local_196.f_120.f_1[iParam0 /*9*/];
}

var func_594(int iParam0)//Position - 0x2833
{
	return Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_595(int iParam0)//Position - 0x2B0F
{
	if (Local_213.f_156.f_175 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_175);
		return StackVal;
	}
	return 1;
}

bool func_596(int iParam0, int iParam1)//Position - 0x310A
{
	return __LIB_0__::func_316(&(Local_196.f_85.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_597(int iParam0)//Position - 0x3122
{
	struct<3> Var0;
	if (Local_213.f_407.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_38);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_196.f_85.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_598(int iParam0)//Position - 0x3166
{
	struct<3> Var0;
	if (Local_213.f_407.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (__LIB_0__::func_86(Var0))
	{
		Var0 = { Local_196.f_85.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_599(int iParam0)//Position - 0x31AA
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(bLocal_324))
	{
		return 0;
	}
	return 1;
}

int func_600(int iParam0)//Position - 0x31C1
{
	if (Local_213.f_407.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_23);
		return StackVal;
	}
	return 1;
}

int func_601(int iParam0)//Position - 0x3283
{
	if (Local_213.f_407.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_27);
		return StackVal;
	}
	return 0;
}

bool func_602(int iParam0, int iParam1)//Position - 0x35F5
{
	return __LIB_0__::func_316(&(Local_196.f_67.f_1[iParam0 /*15*/]), iParam1);
}

int func_603(int iParam0, int iParam1)//Position - 0x3D23
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
		if (BitTest(Local_196.f_67.f_1[iParam0 /*15*/].f_10, (iVar0 + iVar1)))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

float func_604(int iParam0, int iParam1)//Position - 0x3F08
{
	if (Local_213.f_352.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		default:
	}
	return 0.2f;
}

void func_605(int iParam0, int iParam1)//Position - 0x3F68
{
	if (Local_196.f_67.f_1[iParam0 /*15*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_196.f_67.f_1[iParam0 /*15*/].f_8, Local_196.f_67.f_1[iParam0 /*15*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_196.f_67.f_1[iParam0 /*15*/].f_8, Local_196.f_67.f_1[iParam0 /*15*/].f_8);
	}
}

void func_606(var uParam0)//Position - 0x127DF
{
	if (iLocal_344 < 5)
	{
		switch (iLocal_344)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_344 = 0;
	}
	iLocal_344++;
}

int func_607(int iParam0)//Position - 0x1FE44
{
	if (Local_213.f_352.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_23);
		return StackVal;
	}
	return 1;
}

int func_608()//Position - 0x1FFDC
{
	return Local_196.f_19.f_5[0 /*13*/].f_11;
}

struct<20> func_609(bool bParam0)//Position - 0x20483
{
	struct<20> Var0;
	int iVar1;
	int iVar2;
	Var0 = 18;
	Var0.f_19 = 0;
	if (!__LIB_0__::func_796(bParam0))
	{
		return Var0;
	}
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == bParam0)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] != 0 && !__LIB_10__::func_803(Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2];
						Var0.f_19++;
					}
					iVar2++;
				}
			}
			else
			{
				iVar1++;
			}
		}
	}
	return Var0;
}

bool func_610(int iParam0, int iParam1)//Position - 0x2144B
{
	return __LIB_0__::func_316(&(Local_196.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_611(int iParam0)//Position - 0x21463
{
	if (Local_213.f_114.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_28);
		return StackVal;
	}
	return joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS_UPRIGHT");
}

bool func_612(var uParam0)//Position - 0x2161B
{
	struct<3> Var0;
	if (Local_213.f_114.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_114.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !__LIB_0__::func_86(Var0);
}

int func_613(int iParam0)//Position - 0x21781
{
	if (Local_196.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_196.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_196.f_38));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_196.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_614(int iParam0)//Position - 0x21A57
{
	if (__LIB_1__::func_458(&uLocal_337, iParam0))
	{
	}
}

void func_615()//Position - 0x21A73
{
	int iVar0;
	int iVar1;
	if (Local_196.f_19 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_19)
		{
			if (-1 != Local_196.f_19.f_5[iVar0 /*13*/].f_10)
			{
			}
			iVar0++;
		}
	}
	if (Local_196.f_131 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_131)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (Local_196.f_38 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_38)
		{
			if (-1 != Local_196.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			if (-1 != Local_196.f_38.f_1[iVar0 /*21*/].f_8)
			{
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (Local_196.f_38.f_23[iVar0 /*5*/].f_1[iVar1] != 1)
			{
			}
			iVar1++;
		}
		iVar0++;
	}
	if (Local_196.f_111 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_111)
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_86(Local_196.f_143[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	if (Local_196.f_85 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_85)
		{
			iVar0++;
		}
	}
	if (Local_196.f_120 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_120)
		{
			iVar0++;
		}
	}
	if (Local_196.f_67 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_196.f_67)
		{
			iVar0++;
		}
	}
}

int func_616()//Position - 0x21C8D
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_86(Local_196.f_143[iVar1 /*8*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_617()//Position - 0x21CC1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_196.f_38)
	{
		if (Local_196.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_196.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

int func_618()//Position - 0x22261
{
	if (Local_213.f_515.f_4 != 0)
	{
		Call_Loc(Local_213.f_515.f_4);
		return StackVal;
	}
	return 0;
}

int func_619()//Position - 0x22282
{
	if (Local_213.f_515.f_3 != 0)
	{
		Call_Loc(Local_213.f_515.f_3);
		return StackVal;
	}
	return 0;
}

void func_620(int iParam0, int iParam1)//Position - 0x22953
{
	if (iParam0 == 0)
	{
		VEHICLE::SET_VEHICLE_WEAPON_DAMAGE_SCALE(iParam1, 0.2f);
	}
}

void func_621(int iParam0)//Position - 0x22ACD
{
	if (__LIB_16__::func_758(&uLocal_337, iParam0))
	{
	}
}

int func_622()//Position - 0x22BB8
{
	return 62;
}

void func_623(int iParam0, int iParam1)//Position - 0x22C7C
{
	int iVar0;
	var uVar1;
	iVar0 = Local_217[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*20*/].f_19++;
}

void func_624(int iParam0, int iParam1)//Position - 0x22CB6
{
	Local_217[iParam0 /*20*/] = iParam1;
	iLocal_335++;
}

void func_625(int iParam0, int iParam1, int iParam2)//Position - 0x22CFC
{
	Local_218[iParam0 /*21*/] = iParam1;
	Local_218[iParam0 /*21*/].f_20 = iParam2;
	iLocal_336++;
}

void func_626(int iParam0, int iParam1)//Position - 0x22E18
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*21*/].f_19++;
}

void func_627(int iParam0, var uParam1, int iParam2)//Position - 0x22E52
{
	int iVar0;
	var uVar1;
	iVar0 = Local_218[iParam0 /*21*/].f_19;
	uVar1 = uParam1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_218[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_218[iParam0 /*21*/].f_19++;
}

bool func_628(int iParam0)//Position - 0x24FAB
{
	return __LIB_0__::func_316(&uLocal_337, iParam0);
}

void func_629()//Position - 0x266F0
{
	struct<106> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2789625 = { Var0 };
}

int func_630(int iParam0)//Position - 0x2BE87
{
	if (Local_213.f_114.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_29);
	}
	return 1;
}

void func_631(int iParam0)//Position - 0x2C581
{
	if (HUD::DOES_BLIP_EXIST(Local_290[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_290[iParam0 /*7*/]));
	}
}

int func_632(int iParam0)//Position - 0x2C78F
{
	if (Local_213.f_114.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_18);
		return StackVal;
	}
	return 0;
}

bool func_633(int iParam0)//Position - 0x2D97A
{
	if (Local_213.f_114.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_14);
		return StackVal;
	}
	return Local_196.f_19.f_1.f_3;
}

var func_634()//Position - 0x2DD4D
{
	return Local_196.f_19.f_1.f_2;
}

int func_635()//Position - 0x2DF79
{
	if (Local_213.f_64.f_11 != 0)
	{
		Call_Loc(Local_213.f_64.f_11);
		return StackVal;
	}
	return 1;
}

int func_636()//Position - 0x2DF98
{
	if (Local_213.f_64.f_10 != 0)
	{
		Call_Loc(Local_213.f_64.f_10);
		return StackVal;
	}
	return 0;
}

float func_637(int iParam0)//Position - 0x2E475
{
	if (Local_213.f_114.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_26);
		return StackVal;
	}
	return -1f;
}

int func_638(int iParam0)//Position - 0x2E496
{
	if (Local_213.f_114.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_25);
		return StackVal;
	}
	return 0;
}

float func_639(var uParam0)//Position - 0x2EAE1
{
	if (Local_213.f_114.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_114.f_20);
		return StackVal;
	}
	return 0.3f;
}

bool func_640()//Position - 0x2F6A8
{
	return Local_317.f_0 != -1;
}

bool func_641(int iParam0)//Position - 0xA4790
{
	return Local_196.f_143[iParam0 /*8*/].f_5 != -1;
}

int func_642(int iParam0)//Position - 0xA47F1
{
	int iVar0;
	Stack.Push(Local_213.f_473.f_3 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_473.f_3);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	Stack.Push(Local_213.f_473.f_4 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_473.f_4);
	if (StackVal && StackVal)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_643(int iParam0)//Position - 0xA48BF
{
	if (Local_213.f_473.f_18.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_5);
		return StackVal;
	}
	return 12;
}

int func_644(int iParam0)//Position - 0xA4918
{
	if (Local_213.f_473 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473);
		return StackVal;
	}
	return 1;
}

void func_645(int iParam0)//Position - 0xA4937
{
	if (__LIB_16__::func_758(&(Local_317.f_7), iParam0))
	{
	}
}

int func_646()//Position - 0xA4972
{
	return Local_317.f_1;
}

void func_647(int iParam0)//Position - 0xA4A01
{
	if (__LIB_1__::func_458(&(Local_317.f_7), iParam0))
	{
	}
}

var func_648(int iParam0)//Position - 0xA4A54
{
	var uVar0;
	if (Local_213.f_473.f_13 != 0)
	{
		Stack.Push(Local_196.f_143[iParam0 /*8*/].f_4);
		Stack.Push(&uVar0);
		Call_Loc(Local_213.f_473.f_13);
		if (StackVal)
		{
			return uVar0;
		}
	}
	return Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/].f_3;
}

int func_649(struct<3> Param0)//Position - 0xA4A97
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	Var7 = { Param0 - Vector(0.75f, 0.75f, 0.75f) };
	Var8 = { Param0 + Vector(0.75f, 0.75f, 0.75f) };
	fVar9 = 0.5f;
	if (!bVar6)
	{
		iVar0 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var7, Var8, fVar9, 2, iLocal_326, 4);
		bVar6 = true;
	}
	if (bVar6)
	{
		iVar1 = SHAPETEST::GET_SHAPE_TEST_RESULT(iVar0, &iVar2, &uVar3, &uVar4, &uVar5);
	}
	if (iVar1 == 2)
	{
		if (iVar2 == 1)
		{
			bVar6 = false;
			return 0;
		}
	}
	return 1;
}

Vector3 func_650(int iParam0)//Position - 0xA4B2D
{
	struct<3> Var0;
	if (Local_213.f_473.f_12 != 0)
	{
		Stack.Push(Local_196.f_143[iParam0 /*8*/].f_4);
		Call_Loc(Local_213.f_473.f_12);
		Var0 = { StackVal, StackVal, StackVal };
		if (!__LIB_0__::func_86(Var0))
		{
			return Var0;
		}
	}
	return Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/];
}

bool func_651()//Position - 0xA4B7D
{
	return AUDIO::HAS_SOUND_FINISHED(Local_317.f_2);
}

bool func_652(int iParam0, int iParam1)//Position - 0xA4B8E
{
	return __LIB_0__::func_316(&(Local_196.f_143[iParam0 /*8*/].f_6), iParam1);
}

bool func_653(int iParam0)//Position - 0xA4C89
{
	return __LIB_0__::func_316(&(Local_317.f_7), iParam0);
}

int func_654()//Position - 0xA4C9C
{
	if (Local_213.f_473.f_8 != 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	return 0;
}

int func_655()//Position - 0xA4DF5
{
	return Local_317.f_0;
}

int func_656(int iParam0)//Position - 0xA4F49
{
	if (Local_213.f_473.f_18.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_7);
		return StackVal;
	}
	return 9;
}

int func_657(int iParam0)//Position - 0xA5017
{
	if (Local_213.f_473.f_18.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_14);
		return StackVal;
	}
	return 1;
}

int func_658(int iParam0)//Position - 0xA503E
{
	if (Local_213.f_473.f_18.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_16);
		return StackVal;
	}
	return 0;
}

float func_659(int iParam0)//Position - 0xA5065
{
	if (Local_213.f_473.f_18.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_6);
		return StackVal;
	}
	return 1f;
}

int func_660(int iParam0)//Position - 0xA50C7
{
	if (Local_213.f_473.f_18.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_473.f_18.f_4);
		return StackVal;
	}
	return -1;
}

int func_661(int iParam0)//Position - 0xA5191
{
	if ((!__LIB_0__::func_86(Local_196.f_143[iParam0 /*8*/]) && Local_196.f_143[iParam0 /*8*/].f_4 != -1) && !__LIB_0__::func_86(Local_196.f_143[Local_196.f_143[iParam0 /*8*/].f_4 /*8*/]))
	{
		return 1;
	}
	return 0;
}

void func_662()//Position - 0xA574F
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	if (iLocal_331 != 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	}
}

void func_663()//Position - 0xA5946
{
	int iVar0;
	if (bLocal_321)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_326, &iVar0, true);
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_326, joaat("WEAPON_UNARMED"), true);
		}
	}
}

int func_664()//Position - 0xAEEE6
{
	if (Local_213.f_15.f_18.f_5 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_5);
		return StackVal;
	}
	return 0;
}

int func_665()//Position - 0xAEF09
{
	if (Local_213.f_15.f_18.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_18.f_4);
		return StackVal;
	}
	return 0;
}

int func_666()//Position - 0xAF1C7
{
	if (Local_213.f_15.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_2);
		return StackVal;
	}
	return 3;
}

int func_667()//Position - 0xAF2AF
{
	if (Local_213.f_15.f_13.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_4);
		return StackVal;
	}
	return 0;
}

int func_668()//Position - 0xAF3BE
{
	if (Local_213.f_15.f_13.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_2);
		return StackVal;
	}
	return 0;
}

float func_669()//Position - 0xAF63A
{
	if (Local_213.f_15.f_13.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_13.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_670()//Position - 0xAF739
{
	if (Local_213.f_15.f_6.f_6 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_6);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

int func_671()//Position - 0xAF75E
{
	if (Local_213.f_15.f_6.f_5 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_5);
		return StackVal;
	}
	return 0;
}

float func_672()//Position - 0xAF781
{
	if (Local_213.f_15.f_6.f_4 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_4);
		return StackVal;
	}
	return 0.3f;
}

float func_673()//Position - 0xAF7A8
{
	if (Local_213.f_15.f_6.f_3 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_3);
		return StackVal;
	}
	if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_326) > 1f)
	{
		return 1.85f;
	}
	return -1f;
}

int func_674()//Position - 0xAF7DF
{
	if (Local_213.f_15.f_6.f_2 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_2);
		return StackVal;
	}
	return 0;
}

int func_675()//Position - 0xAF802
{
	if (Local_213.f_15.f_6.f_1 != 0)
	{
		Call_Loc(Local_213.f_15.f_6.f_1);
		return StackVal;
	}
	return 0;
}

int func_676()//Position - 0xAF825
{
	if (Local_213.f_15.f_6 != 0)
	{
		Call_Loc(Local_213.f_15.f_6);
		return StackVal;
	}
	return 0;
}

bool func_677(float fParam0)//Position - 0xB2025
{
	struct<3> Var0;
	Call_Loc(Local_213.f_80);
	Var0 = { StackVal, StackVal, StackVal };
	if (__LIB_0__::func_86(Var0))
	{
		return 0;
	}
	return SYSTEM::VDIST2(Local_329, Var0) <= (fParam0 * fParam0);
}

void func_678(int iParam0, int* iParam1)//Position - 0xB5946
{
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 0);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 0);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_f") != -1)
	{
		MISC::SET_BIT(iParam1, 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 1);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_dside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 2);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 2);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "door_pside_r") != -1)
	{
		MISC::SET_BIT(iParam1, 3);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 3);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "bonnet") != -1)
	{
		MISC::SET_BIT(iParam1, 4);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 4);
	}
	if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "boot") != -1)
	{
		MISC::SET_BIT(iParam1, 5);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 5);
	}
	if (((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mule") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("benson")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("speedo")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("granger")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("barracks3")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("gburrito2"))
	{
		MISC::SET_BIT(iParam1, 8);
	}
	else
	{
		MISC::CLEAR_BIT(iParam1, 8);
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("submersible"))
	{
		*iParam1 = 0;
	}
}

int func_679()//Position - 0xB5ABA
{
	if (Local_213.f_515.f_2 != 0)
	{
		Call_Loc(Local_213.f_515.f_2);
		return StackVal;
	}
	return 28;
}

int func_680()//Position - 0xB5AE9
{
	if (Local_213.f_515.f_1 == 0)
	{
		return 0;
	}
	if (Local_213.f_515 != 0)
	{
		Call_Loc(Local_213.f_515);
		return StackVal;
	}
	return 0;
}

int func_681()//Position - 0xB61FB
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(iLocal_326);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			NETWORK::NETWORK_EXPLODE_HELI(iVar0, true, false, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, -1);
			return 1;
		}
	}
	return 0;
}

bool func_682()//Position - 0xB6CA9
{
	Call_Loc(Local_213.f_47);
	return StackVal;
}

void func_683(int iParam0)//Position - 0xB6DAE
{
	if (!__LIB_3__::func_479(&uLocal_311, iParam0))
	{
		__LIB_7__::func_698(&uLocal_311, iParam0);
	}
}

int func_684(int iParam0)//Position - 0xB6DCC
{
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_456.f_2);
	switch (StackVal)
	{
		case 0:
			if (Local_213.f_456 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456);
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456.f_5);
				__LIB_0__::func_151(StackVal, StackVal);
				return 1;
			}
			break;
		case 3:
			if (Local_213.f_456.f_4 != 0)
			{
				Stack.Push(iParam0);
				Call_Loc(Local_213.f_456.f_4);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_685(int iParam0)//Position - 0xB6E38
{
	return __LIB_3__::func_479(&uLocal_311, iParam0);
}

char* func_686()//Position - 0xB7339
{
	return "TCD_HUD_VAL" /* GXT: PAYMENT */;
}

int func_687()//Position - 0xB78FC
{
	if (Local_213.f_82.f_2 != 0)
	{
		Call_Loc(Local_213.f_82.f_2);
		return StackVal;
	}
	return 300000;
}

int func_688()//Position - 0xB79CD
{
	if (Local_213.f_526.f_1 != 0)
	{
		Call_Loc(Local_213.f_526.f_1);
		return StackVal;
	}
	return 0;
}

float func_689()//Position - 0xB7A05
{
	if (Local_213.f_526.f_2 != 0)
	{
		Call_Loc(Local_213.f_526.f_2);
		return StackVal;
	}
	return 60f;
}

int func_690()//Position - 0xB7A2A
{
	if (bLocal_321 && !PED::IS_PED_IN_ANY_PLANE(iLocal_326))
	{
		if (Local_213.f_526 != 0)
		{
			Call_Loc(Local_213.f_526);
			return StackVal;
		}
	}
	return 0;
}

int func_691()//Position - 0xB8194
{
	if (Local_213.f_64.f_4 != 0)
	{
		Call_Loc(Local_213.f_64.f_4);
		return StackVal;
	}
	return 1;
}

int func_692()//Position - 0xB821E
{
	if (Local_213.f_64.f_9 != 0)
	{
		Call_Loc(Local_213.f_64.f_9);
		return StackVal;
	}
	return 0;
}

int func_693()//Position - 0xB823D
{
	if (Local_213.f_64.f_7 != 0)
	{
		Call_Loc(Local_213.f_64.f_7);
		return StackVal;
	}
	return 0;
}

void func_694()//Position - 0xB8475
{
	Local_304.f_0 = 0;
	Local_304.f_2 = 0;
	Local_304.f_1 = 0;
	__LIB_0__::clearF_1Prop(&(Local_304.f_3));
}

float func_695()//Position - 0xB8873
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
	{
		return 1.5f;
	}
	return 0.5f;
}

void func_696(int iParam0)//Position - 0xB8B04
{
	if (HUD::DOES_BLIP_EXIST(Local_310.f_1[iParam0 /*4*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_310.f_1[iParam0 /*4*/].f_1));
	}
}

int func_697(int iParam0)//Position - 0xB9327
{
	if (Local_213.f_156.f_132.f_1.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_3);
		return StackVal;
	}
	return 0;
}

int func_698(int iParam0, float fParam1, bool bParam2)//Position - 0xB9350
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_329) <= (fParam1 * fParam1))
	{
		if (bParam2)
		{
			if (bLocal_321)
			{
				return ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam0, 287);
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_699(int iParam0)//Position - 0xB9393
{
	if (Local_213.f_156.f_132.f_1.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_2);
		return StackVal;
	}
	return 0;
}

float func_700(int iParam0)//Position - 0xB93BC
{
	if (Local_213.f_156.f_132.f_1.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_1);
		return StackVal;
	}
	return 50f;
}

int func_701(int iParam0)//Position - 0xB9404
{
	if (Local_213.f_156.f_132.f_1.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_132.f_1.f_4);
		return StackVal;
	}
	return 0;
}

int func_702(int iParam0, float fParam1)//Position - 0xB94ED
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(bLocal_324, iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(bLocal_324, iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		if (SYSTEM::VDIST2(Local_329, Var0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_703()//Position - 0xB9637
{
	int iVar0;
	return ((WEAPON::GET_CURRENT_PED_WEAPON(iLocal_326, &iVar0, false) && iVar0 != joaat("WEAPON_UNARMED")) && iVar0 != joaat("OBJECT"));
}

int func_704(var uParam0)//Position - 0xB96B5
{
	if (Local_213.f_156.f_184 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_184);
		return StackVal;
	}
	return 287;
}

int func_705(int iParam0)//Position - 0xB982F
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_14;
}

int func_706(int iParam0)//Position - 0xB9843
{
	return Local_196.f_38.f_23[Local_196.f_38.f_1[iParam0 /*21*/].f_14 /*5*/].f_3;
}

float func_707(int iParam0, var uParam1)//Position - 0xB9B21
{
	switch (iParam0)
	{
		case 1:
			if (Local_213.f_352.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_352.f_22);
				return StackVal;
			}
			break;
		case 0:
			if (Local_213.f_156.f_140.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_156.f_140.f_22);
				return StackVal;
			}
			break;
		case 2:
			if (Local_213.f_407.f_22 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_407.f_22);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_708(int iParam0, var uParam1)//Position - 0xB9B9C
{
	switch (iParam0)
	{
		case 0:
			if (Local_213.f_156.f_140.f_21 != 0)
			{
				Stack.Push(uParam1);
				Call_Loc(Local_213.f_156.f_140.f_21);
				return StackVal;
			}
			break;
	}
	return 0f;
}

float func_709(int iParam0)//Position - 0xB9BD1
{
	if (Local_213.f_156.f_140.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_20);
		return StackVal;
	}
	return 0.5f;
}

bool func_710(int iParam0, int iParam1)//Position - 0xB9D77
{
	return __LIB_0__::func_316(&(Local_219[iParam0 /*19*/]), iParam1);
}

void func_711()//Position - 0xB9D8C
{
	Local_301.f_0++;
}

int func_712(int iParam0)//Position - 0xBA0E8
{
	if (Local_213.f_156.f_140.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_10);
		return StackVal;
	}
	return 0;
}

int func_713(int iParam0)//Position - 0xBA116
{
	if (Local_213.f_156.f_140.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_7);
		return StackVal;
	}
	return 11;
}

int func_714(int iParam0)//Position - 0xBA1C5
{
	if (Local_213.f_156.f_140.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_9);
		return StackVal;
	}
	return 0;
}

int func_715(int iParam0)//Position - 0xBA2B7
{
	if (Local_213.f_156.f_140.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_140.f_16);
		return StackVal;
	}
	return 0;
}

void func_716(int iParam0, int iParam1)//Position - 0xBA823
{
	if (__LIB_16__::func_758(&(Local_219[iParam0 /*19*/]), iParam1))
	{
	}
}

void func_717(int iParam0, int iParam1)//Position - 0xBA83B
{
	if (__LIB_1__::func_458(&(Local_219[iParam0 /*19*/]), iParam1))
	{
	}
}

float func_718()//Position - 0xBA853
{
	if (Local_213.f_156.f_132.f_7 != 0)
	{
		Call_Loc(Local_213.f_156.f_132.f_7);
		return StackVal;
	}
	return 20f;
}

int func_719(int iParam0)//Position - 0xBA996
{
	if (Local_213.f_407.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_28);
		return StackVal;
	}
	return 0;
}

float func_720(var uParam0)//Position - 0xBA9DF
{
	if (Local_213.f_407.f_41 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_41);
		return StackVal;
	}
	return 0.5f;
}

int func_721(var uParam0)//Position - 0xBAA06
{
	if (Local_213.f_407.f_42 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_42);
		return StackVal;
	}
	return 18;
}

int func_722(var uParam0)//Position - 0xBAA2A
{
	if (Local_213.f_407.f_40 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_407.f_40);
		return StackVal;
	}
	return 0;
}

int func_723(int iParam0, float fParam1, int iParam2, int iParam3)//Position - 0xBAC8A
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false), Local_329) > (fParam1 * fParam1))
	{
		return 0;
	}
	if (iParam2 && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_326, iParam0, 287))
	{
		return 0;
	}
	if (iParam3 && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_724(int iParam0)//Position - 0xBACE0
{
	if (Local_213.f_407.f_44 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_44);
		return StackVal;
	}
	return 0;
}

int func_725(int iParam0)//Position - 0xBAD03
{
	if (Local_213.f_407.f_43 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_43);
		return StackVal;
	}
	return 0;
}

float func_726(int iParam0)//Position - 0xBAD26
{
	if (Local_213.f_407.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_39);
		return StackVal;
	}
	return 10f;
}

int func_727(int iParam0)//Position - 0xBAEDC
{
	if (Local_213.f_407.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_9);
		return StackVal;
	}
	return 0;
}

int func_728(int iParam0)//Position - 0xBAF43
{
	if (Local_213.f_407.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_16);
		return StackVal;
	}
	return 0;
}

float func_729(int iParam0)//Position - 0xBB11D
{
	if (Local_213.f_407.f_30.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_30.f_2);
		return StackVal;
	}
	return 1f;
}

int func_730(int iParam0)//Position - 0xBB144
{
	if (Local_213.f_407.f_30.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_407.f_30.f_1);
		return StackVal;
	}
	return 6;
}

void func_731(int iParam0, int iParam1)//Position - 0xBB5B3
{
	if (Local_213.f_352.f_49 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_352.f_49);
	}
}

float func_732(int iParam0)//Position - 0xBB630
{
	if (Local_213.f_352.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_20);
		return StackVal;
	}
	return 0.5f;
}

Vector3 func_733(int iParam0)//Position - 0xBBC80
{
	if (Local_213.f_352.f_50.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_50.f_1);
		return StackVal, StackVal, StackVal;
	}
	return 0f, 0f, 0f;
}

Vector3 func_734(int iParam0)//Position - 0xBBCA9
{
	if (Local_213.f_352.f_50 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_50);
		return StackVal, StackVal, StackVal;
	}
	return 0f, -5.5f, 0.7f;
}

int func_735(int iParam0)//Position - 0xBC14E
{
	if (Local_213.f_352.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_7);
		return StackVal;
	}
	return 12;
}

int func_736(int iParam0)//Position - 0xBC1B7
{
	if (Local_213.f_352.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_9);
		return StackVal;
	}
	return 0;
}

int func_737(int iParam0)//Position - 0xBC1DA
{
	if (Local_213.f_352.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_352.f_16);
		return StackVal;
	}
	return 0;
}

bool func_738(int iParam0)//Position - 0xBC37A
{
	return Local_290[iParam0 /*7*/].f_4 != __LIB_0__::getMinusOneOrNull();
}

int func_739()//Position - 0xBD1B5
{
	if (Local_213.f_92.f_1 != 0)
	{
		Call_Loc(Local_213.f_92.f_1);
		return StackVal;
	}
	return 1;
}

int func_740(int iParam0)//Position - 0xBD1D4
{
	if (Local_213.f_92 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_92);
		return StackVal;
	}
	return 1;
}

char* func_741(var uParam0, var uParam1)//Position - 0xBD66E
{
	if (Local_213.f_47.f_2.f_2 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_213.f_47.f_2.f_2);
		return StackVal;
	}
	return "";
}

char* func_742(var uParam0, var uParam1)//Position - 0xBD696
{
	if (Local_213.f_47.f_2.f_1 != 0)
	{
		Stack.Push(&uParam0);
		Call_Loc(Local_213.f_47.f_2.f_1);
		return StackVal;
	}
	return "";
}

int func_743()//Position - 0xBF5D6
{
	if (Local_213.f_114.f_41 != 0)
	{
		Call_Loc(Local_213.f_114.f_41);
		return StackVal;
	}
	return 1;
}

void func_744()//Position - 0xC25A0
{
	if (Local_301.f_0 > Local_301.f_1)
	{
		Local_301.f_1 = Local_301.f_0;
	}
	Local_301.f_0 = 0;
}

float func_745(int iParam0)//Position - 0xC335D
{
	if (Local_213.f_114.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_8);
		return StackVal;
	}
	return 1.1f;
}

int func_746(int iParam0, bool bParam1, bool bParam2)//Position - 0xC33E0
{
	if (!bParam1)
	{
		return 0;
	}
	if (iParam0 == bLocal_324)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

int func_747()//Position - 0xC366C
{
	int iVar0;
	if (Local_213.f_456 == 0)
	{
		return 0;
	}
	Stack.Push(iVar0);
	Call_Loc(Local_213.f_456);
	while (!MISC::IS_STRING_NULL_OR_EMPTY(StackVal))
	{
		iVar0++;
	}
	return iVar0;
}

char* func_748(int iParam0, int iParam1)//Position - 0xC4D38
{
	int iVar0;
	iVar0 = Local_196.f_131.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/];
	if (iVar0 != -1)
	{
	}
	return "";
}

bool func_749(int iParam0, var uParam1)//Position - 0xC4F20
{
	return (Local_196.f_38.f_1[iParam0 /*21*/].f_8 == -1 && Local_196.f_38.f_1[iParam0 /*21*/].f_10 != -1);
}

void func_750(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC514D
{
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_10 = iParam2;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_11 = iParam3;
}

Vector3 func_751(int iParam0, int iParam1)//Position - 0xC5214
{
	if (Local_213.f_156.f_2.f_52 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_52);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, true);
}

int func_752(int iParam0)//Position - 0xC537B
{
	if (Local_213.f_156.f_2.f_125.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_4);
		return StackVal;
	}
	return 0;
}

int func_753(int iParam0)//Position - 0xC53A4
{
	if (Local_213.f_156.f_2.f_125.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_3);
		return StackVal;
	}
	return 1;
}

int func_754(int iParam0)//Position - 0xC53CD
{
	if (Local_213.f_156.f_2.f_125.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_2);
		return StackVal;
	}
	return 0;
}

float func_755(int iParam0)//Position - 0xC5476
{
	if (Local_213.f_156.f_2.f_125.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_125.f_1);
		return StackVal;
	}
	return -1f;
}

float func_756(int iParam0, int iParam1)//Position - 0xC5548
{
	if (Local_213.f_156.f_2.f_123.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_123.f_1);
		return StackVal;
	}
	return 5f;
}

Vector3 func_757(int iParam0, int iParam1)//Position - 0xC5573
{
	if (Local_213.f_156.f_2.f_123 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_123);
		return StackVal, StackVal, StackVal;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam1, false);
}

float func_758(int iParam0, int iParam1)//Position - 0xC58D4
{
	if (Local_213.f_156.f_2.f_106.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_4);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 1f;
		case 4:
			return 10f;
		default:
	}
	return 1f;
}

int func_759(int iParam0, int iParam1)//Position - 0xC591E
{
	if (Local_213.f_156.f_2.f_106.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_3);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 786469;
		case 4:
			return 262144;
		default:
	}
	return 786469;
}

int func_760(int iParam0, int iParam1)//Position - 0xC596D
{
	if (Local_213.f_156.f_2.f_106.f_7 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_7);
		return StackVal;
	}
	return 100;
}

float func_761(int iParam0, int iParam1)//Position - 0xC5999
{
	if (Local_213.f_156.f_2.f_106.f_5 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_5);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 5f;
		case 4:
			return 0.1f;
		default:
	}
	return 10f;
}

float func_762(int iParam0, int iParam1)//Position - 0xC59E7
{
	if (Local_213.f_156.f_2.f_106.f_6 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_106.f_6);
		return StackVal;
	}
	switch (iParam1)
	{
		case 7:
			return 30f;
		case 4:
			return 30f;
		default:
	}
	return 30f;
}

int func_763(int iParam0)//Position - 0xC5B20
{
	if (Local_213.f_156.f_2.f_102.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_2);
		return StackVal;
	}
	return 0;
}

float func_764(int iParam0)//Position - 0xC5B49
{
	if (Local_213.f_156.f_2.f_102.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_1);
		return StackVal;
	}
	return -1f;
}

float func_765(int iParam0)//Position - 0xC5B72
{
	if (Local_213.f_156.f_2.f_102.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102.f_3);
		return StackVal;
	}
	return 7.5f;
}

Vector3 func_766(int iParam0, int iParam1)//Position - 0xC5B9F
{
	struct<3> Var0;
	float fVar1;
	if (Local_213.f_156.f_2.f_102 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_102);
		return StackVal, StackVal, StackVal;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
	{
		fVar1 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1);
	}
	Var0.f_2 = fVar1;
	return Var0;
}

Vector3 func_767(int iParam0)//Position - 0xC5EEF
{
	struct<3> Var0;
	Var0 = { Local_196.f_67.f_1[Local_196.f_38.f_1[iParam0 /*21*/].f_8 /*15*/].f_4 };
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

int func_768(int iParam0)//Position - 0xC6006
{
	if (Local_213.f_156.f_2.f_91.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_1);
		return StackVal;
	}
	return 0;
}

float func_769(int iParam0)//Position - 0xC6063
{
	if (Local_213.f_156.f_2.f_91.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_2);
		return StackVal;
	}
	return 10f;
}

int func_770(int iParam0, var uParam1)//Position - 0xC6090
{
	if (Local_213.f_156.f_2.f_91.f_10 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_91.f_10);
		return StackVal;
	}
	return 0;
}

void func_771(var uParam0, int iParam1)//Position - 0xC61EC
{
	struct<7> Var0;
	int iVar1;
	Var0.f_0 = 177099551;
	Var0.f_1 = bLocal_324;
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = MISC::GET_FRAME_COUNT();
	Var0.f_5 = Local_334.f_0;
	Var0.f_6 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	iVar1 = __LIB_4__::func_970(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 7, iVar1);
	}
}

float func_772(int iParam0)//Position - 0xC623F
{
	if (Local_213.f_156.f_2.f_91.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_9);
		return StackVal;
	}
	return 20f;
}

int func_773(int iParam0)//Position - 0xC626C
{
	if (Local_213.f_156.f_2.f_91.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_8);
		return StackVal;
	}
	return 25;
}

float func_774(int iParam0)//Position - 0xC6296
{
	if (Local_213.f_156.f_2.f_91.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_7);
		return StackVal;
	}
	return 0f;
}

int func_775(int iParam0)//Position - 0xC62BF
{
	if (Local_213.f_156.f_2.f_91.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_6);
		return StackVal;
	}
	return 1076642364;
}

float func_776(int iParam0)//Position - 0xC637A
{
	if (Local_213.f_156.f_2.f_91.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_91.f_4);
		return StackVal;
	}
	return 2f;
}

float func_777(var uParam0)//Position - 0xC65D6
{
	if (Local_213.f_156.f_2.f_85.f_2 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_85.f_2);
		return StackVal;
	}
	return 7.5f;
}

int func_778(int iParam0)//Position - 0xC6779
{
	if (Local_213.f_156.f_2.f_79.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_5);
		return StackVal;
	}
	return 786468;
}

int func_779(int iParam0)//Position - 0xC67A5
{
	if (Local_213.f_156.f_2.f_79.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_4);
		return StackVal;
	}
	return 80;
}

float func_780(int iParam0)//Position - 0xC67CF
{
	if (Local_213.f_156.f_2.f_79.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_3);
		return StackVal;
	}
	return 80f;
}

float func_781(int iParam0, bool bParam1)//Position - 0xC67FC
{
	if (Local_213.f_156.f_2.f_79.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_79.f_2);
		return StackVal;
	}
	if (bParam1)
	{
		return 20f;
	}
	return 30f;
}

int func_782(int iParam0)//Position - 0xC68C9
{
	if (Local_213.f_156.f_2.f_76.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76.f_2);
		return StackVal;
	}
	return 22713;
}

float func_783(int iParam0)//Position - 0xC68F4
{
	if (Local_213.f_156.f_2.f_76.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_76.f_1);
		return StackVal;
	}
	return 10f;
}

int func_784(int iParam0)//Position - 0xC69E3
{
	if (Local_213.f_156.f_2.f_72.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72.f_2);
		return StackVal;
	}
	return -1;
}

float func_785(int iParam0)//Position - 0xC6A0C
{
	if (Local_213.f_156.f_2.f_72.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_72.f_1);
		return StackVal;
	}
	return 10000f;
}

void func_786(int iParam0, int iParam1)//Position - 0xC6A6F
{
	if (Local_213.f_156.f_2.f_72.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_213.f_156.f_2.f_72.f_3);
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 1024, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 32768, false);
}

int func_787(int iParam0)//Position - 0xC6B1E
{
	if (Local_213.f_156.f_2.f_67.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_3);
		return StackVal;
	}
	return 0;
}

int func_788(int iParam0)//Position - 0xC6B47
{
	if (Local_213.f_156.f_2.f_67.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_2);
		return StackVal;
	}
	return -1;
}

int func_789(int iParam0)//Position - 0xC6B70
{
	if (Local_213.f_156.f_2.f_67.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67.f_1);
		return StackVal;
	}
	return 0;
}

int func_790(int iParam0)//Position - 0xC6B99
{
	if (Local_213.f_156.f_2.f_67 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_67);
		return StackVal;
	}
	return -1;
}

Vector3 func_791(int iParam0, int iParam1)//Position - 0xC6D3F
{
	return Local_196.f_131.f_1[iParam0 /*10*/].f_1[iParam1 /*8*/].f_1;
}

int func_792(int iParam0, var uParam1)//Position - 0xC6E36
{
	if (Local_213.f_156.f_2.f_62.f_4 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_62.f_4);
		return StackVal;
	}
	return 1;
}

int func_793(int iParam0)//Position - 0xC6E61
{
	if (Local_213.f_156.f_2.f_62.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_2);
		return StackVal;
	}
	return 1;
}

int func_794(int iParam0)//Position - 0xC6E8A
{
	if (Local_213.f_156.f_2.f_62.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_1);
		return StackVal;
	}
	return 0;
}

struct<4> func_795(int iParam0)//Position - 0xC6EB3
{
	if (Local_213.f_156.f_2.f_62 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62);
		return StackVal, StackVal, StackVal, StackVal;
	}
	return Local_316[iParam0 /*4*/];
}

int func_796(int iParam0)//Position - 0xC6EE0
{
	if (Local_213.f_156.f_2.f_62.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_62.f_3);
		return StackVal;
	}
	return 0;
}

int func_797(int iParam0)//Position - 0xC6F09
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_131)
	{
		if (Local_196.f_131.f_1[iVar0 /*10*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_798(int iParam0)//Position - 0xC6F72
{
	if (Local_213.f_156.f_2.f_61 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_61);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_178);
	return StackVal;
}

float func_799(int iParam0)//Position - 0xC7096
{
	if (Local_213.f_156.f_2.f_56.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_4);
		return StackVal;
	}
	return 0f;
}

int func_800()//Position - 0xC70BF
{
	if (Local_213.f_156.f_2.f_56.f_3 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_56.f_3);
		return StackVal;
	}
	return 20000;
}

Vector3 func_801(int iParam0)//Position - 0xC70E8
{
	if (Local_213.f_156.f_2.f_56.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_1);
		return StackVal, StackVal, StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

float func_802(int iParam0)//Position - 0xC711A
{
	if (Local_213.f_156.f_2.f_56.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56.f_2);
		return StackVal;
	}
	return 1f;
}

int func_803(int iParam0)//Position - 0xC71EF
{
	if (Local_213.f_156.f_2.f_56 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_56);
		return StackVal;
	}
	return 0;
}

int func_804(var uParam0, var uParam1)//Position - 0xC73C1
{
	if (Local_213.f_156.f_2.f_54 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_54);
		*uParam1 = StackVal;
		return 1;
	}
	return 0;
}

int func_805(int iParam0)//Position - 0xC757C
{
	if (Local_213.f_156.f_2.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25);
		return StackVal;
	}
	return 0;
}

float func_806(int iParam0)//Position - 0xC75FA
{
	if (Local_213.f_156.f_2.f_25.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_4);
		return StackVal;
	}
	return 10f;
}

int func_807(int iParam0, var uParam1)//Position - 0xC7627
{
	if (Local_213.f_156.f_2.f_25.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_25.f_25);
		return StackVal;
	}
	return 0;
}

int func_808(int iParam0)//Position - 0xC7BC9
{
	if (Local_213.f_156.f_2.f_25.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_20);
		return StackVal;
	}
	return 0;
}

float func_809(int iParam0)//Position - 0xC7BF2
{
	if (Local_213.f_156.f_2.f_25.f_15 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_15);
		return StackVal;
	}
	return -1f;
}

int func_810(int iParam0)//Position - 0xC7C1B
{
	if (Local_213.f_156.f_2.f_25.f_7 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_7);
		return StackVal;
	}
	return 0;
}

int func_811(int iParam0)//Position - 0xC7C44
{
	if (Local_213.f_156.f_2.f_25.f_11 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_11);
		return StackVal;
	}
	return 24;
}

int func_812(int iParam0)//Position - 0xC7C6E
{
	if (Local_213.f_156.f_2.f_25.f_8 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_8);
		return StackVal;
	}
	return 2359332;
}

float func_813(int iParam0)//Position - 0xC7C9A
{
	if (Local_213.f_156.f_2.f_25.f_10 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_10);
		return StackVal;
	}
	return 0f;
}

int func_814(int iParam0)//Position - 0xC7CC3
{
	if (Local_213.f_156.f_2.f_25.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_6);
		return StackVal;
	}
	return 0;
}

float func_815(int iParam0)//Position - 0xC7D2E
{
	if (Local_213.f_156.f_2.f_25.f_9 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_9);
		return StackVal;
	}
	return 0f;
}

int func_816(int iParam0)//Position - 0xC7D75
{
	if (Local_213.f_156.f_2.f_25.f_12 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_12);
		return StackVal;
	}
	return 7;
}

float func_817(int iParam0)//Position - 0xC7D9E
{
	if (Local_213.f_156.f_2.f_25.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_3);
		return StackVal;
	}
	return 35f;
}

float func_818(int iParam0)//Position - 0xC7DCB
{
	if (Local_213.f_156.f_2.f_25.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_5);
		return StackVal;
	}
	return 5f;
}

int func_819()//Position - 0xC7DF4
{
	if (Local_213.f_156.f_2.f_25.f_18 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_18);
		return StackVal;
	}
	return 80;
}

float func_820()//Position - 0xC7E1C
{
	if (Local_213.f_156.f_2.f_25.f_17 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_17);
		return StackVal;
	}
	return 80f;
}

float func_821(int iParam0)//Position - 0xC7E47
{
	if (Local_213.f_156.f_2.f_25.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_19);
		return StackVal;
	}
	return -1f;
}

float func_822(int iParam0)//Position - 0xC7E70
{
	if (Local_213.f_156.f_2.f_25.f_16 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_16);
		return StackVal;
	}
	return 30f;
}

int func_823()//Position - 0xC7E9D
{
	if (Local_213.f_156.f_2.f_25.f_14 != 0)
	{
		Call_Loc(Local_213.f_156.f_2.f_25.f_14);
		return StackVal;
	}
	return 0;
}

int func_824(var uParam0)//Position - 0xC7F13
{
	if (Local_213.f_156.f_2.f_25.f_13 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_213.f_156.f_2.f_25.f_13);
		return StackVal;
	}
	return 0;
}

int func_825(int iParam0)//Position - 0xC8218
{
	if (Local_213.f_156.f_2.f_13.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_13.f_1);
		return StackVal;
	}
	return 0;
}

int func_826(int iParam0)//Position - 0xC8241
{
	if (Local_213.f_156.f_2.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_13);
		return StackVal;
	}
	return 0;
}

int func_827(int iParam0)//Position - 0xC85B8
{
	if (Local_213.f_156.f_2.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_156.f_2.f_3);
		return StackVal;
	}
	return 0;
}

bool func_828(var uParam0, char* sParam1)//Position - 0xC85DD
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2.f_4);
	return ((((((StackVal || MISC::ARE_STRINGS_EQUAL(sParam1, "PROP_HUMAN_SEAT_SUNLOUNGER")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_LEDGE_EATING")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_STEPS")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL")) || MISC::ARE_STRINGS_EQUAL(sParam1, "WORLD_HUMAN_SEAT_WALL_EATING"));
}

void func_829(int iParam0, int iParam1)//Position - 0xC87DE
{
	Local_218[iParam0 /*21*/].f_17 = iParam1;
}

void func_830(int iParam0, int iParam1)//Position - 0xC8851
{
	Local_218[iParam0 /*21*/].f_18 = iParam1;
}

void func_831(int iParam0, int iParam1)//Position - 0xC8DE2
{
	Local_217[iParam0 /*20*/].f_17 = iParam1;
}

void func_832(int iParam0, int iParam1)//Position - 0xC8EA7
{
	Local_217[iParam0 /*20*/].f_18 = iParam1;
}

bool func_833()//Position - 0xC9014
{
	return (Local_301.f_0 == 0 && Local_301.f_1 > 0);
}

int func_834()//Position - 0xC989B
{
	if (iLocal_331 == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iLocal_331))
	{
		return 0;
	}
	return 1;
}

bool func_835(var uParam0, struct<3> Param1)//Position - 0xC9A5D
{
	return ENTITY::IS_ENTITY_AT_COORD(iLocal_326, Param1, 1f, 1f, 2f, false, true, 0);
}

void func_836(var uParam0, int iParam1)//Position - 0xC9BBE
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push(MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_PUSH_UPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_BUM_SLUMPED")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SUNBATHE_BACK")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE_EATING")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_STEPS")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	Stack.Push((StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_WALL")));
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_2);
	if (StackVal || MISC::ARE_STRINGS_EQUAL(StackVal, "WORLD_HUMAN_SEAT_LEDGE"))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iParam1);
}

var func_837(int iParam0)//Position - 0xC9D2C
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_9;
}

var func_838(int iParam0)//Position - 0xC9D49
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_8;
}

var func_839(var uParam0)//Position - 0xC9D66
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_178);
	return StackVal;
}

Vector3 func_840(var uParam0)//Position - 0xC9D78
{
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_156.f_177);
	return StackVal, StackVal, StackVal;
}

void func_841(int iParam0, int iParam1)//Position - 0xC9E78
{
	Local_219[iParam0 /*19*/].f_10[Local_219[iParam0 /*19*/].f_16] = iParam1;
	Local_219[iParam0 /*19*/].f_16++;
}

void func_842(int iParam0, int iParam1, int iParam2)//Position - 0xC9F95
{
	int iVar0;
	var uVar1;
	iVar0 = Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/].f_12++;
}

void func_843(int iParam0, int iParam1, int iParam2)//Position - 0xC9FEF
{
	Local_219.f_23[iParam0 /*67*/].f_1[iParam1 /*13*/] = iParam2;
	Local_219.f_23[iParam0 /*67*/]++;
}

var func_844(int iParam0)//Position - 0xCA01C
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_6;
}

Vector3 func_845(int iParam0)//Position - 0xCA030
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_3;
}

var func_846(int iParam0)//Position - 0xCA04F
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_7;
}

var func_847(int iParam0)//Position - 0xCA0DF
{
	return Local_196.f_38.f_1[iParam0 /*21*/].f_2;
}

int func_848()//Position - 0xCA152
{
	return joaat("XPCATEGORY_FM_CONTENT");
}

var func_849()//Position - 0xCA1B3
{
	return Local_196.f_99;
}

void func_850(int iParam0, int iParam1, int iParam2)//Position - 0xCA275
{
	int iVar0;
	var uVar1;
	iVar0 = Local_217[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_217[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_217[iParam0 /*20*/].f_19++;
}

void func_851()//Position - 0xCDB0D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_120)
	{
		__LIB_10__::func_399(&(uLocal_315[iVar0]));
		iVar0++;
	}
}

void func_852()//Position - 0xCDB79
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_196.f_131)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_316[iVar0 /*4*/])))
		{
			TASK::DELETE_PATROL_ROUTE(&(Local_316[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_853()//Position - 0xCDBB0
{
	Stack.Push(iLocal_326);
	Call_Loc(Local_213.f_15.f_18.f_2);
	WEAPON::REMOVE_WEAPON_FROM_PED(StackVal, StackVal);
}

void func_854(int iParam0, int iParam1)//Position - 0xD1312
{
	Local_334.f_0 = iParam0;
	Local_334.f_1 = iParam1;
}

void func_855()//Position - 0xD224E
{
	int iVar0;
	iLocal_330 = iVar0;
	iLocal_331 = 0;
}

void func_856(int iParam0, var uParam1)//Position - 0x227BE
{
	struct<4> Var0;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_0 = 1275205244;
	Var0.f_1 = bLocal_324;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *uParam1 };
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, __LIB_4__::func_970(1));
}

Vector3 func_857(struct<3> Param0)//Position - 0x249FF
{
	int iVar0;
	int iVar1;
	if (__LIB_12__::func_548(0))
	{
		iVar0 = __LIB_10__::func_570(__LIB_0__::func_797());
		if (__LIB_0__::func_121(iVar0))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Param0);
		}
		else
		{
			return __LIB_15__::func_341(757, __LIB_0__::func_797(), 0);
		}
	}
	else
	{
		iVar1 = __LIB_10__::func_570(PLAYER::PLAYER_ID());
		if (__LIB_0__::func_121(iVar1))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

void func_858()//Position - 0x294E6
{
	if (__LIB_0__::func_937(&(Local_290.f_12), 5000, 0) && Local_290.f_14)
	{
		__LIB_0__::clearF_1Prop(&(Local_290.f_12));
		Local_290.f_14 = 0;
	}
}

var func_859(int iParam0)//Position - 0x2D9A2
{
	if (Local_213.f_114.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_213.f_114.f_13);
		return StackVal;
	}
	return __LIB_19__::func_401();
}

int func_860()//Position - 0x2E829
{
	if (Local_213.f_114.f_39.f_1 != 0)
	{
		Call_Loc(Local_213.f_114.f_39.f_1);
		return StackVal;
	}
	return __LIB_19__::func_404();
}

int func_861(int iParam0)//Position - 0xA35CB
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<13> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar0 = __LIB_2__::func_893(iParam0);
	if (iVar0 > -1)
	{
		bVar1 = __LIB_2__::func_699(iParam0);
		if (!bVar1 == __LIB_0__::getMinusOneOrNull())
		{
			if (bVar1 == PLAYER::PLAYER_ID())
			{
				return 1;
			}
			bVar2 = __LIB_3__::func_135(PLAYER::PLAYER_ID(), bVar1);
			Var3 = { __LIB_1__::func_696(bVar1) };
			bVar4 = NETWORK::NETWORK_IS_FRIEND(&Var3);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(bVar1), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(bVar1), false))
				{
					iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar1), false);
					if (!ENTITY::IS_ENTITY_DEAD(iVar6, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar6, false))
						{
							iVar5 = 1;
						}
					}
				}
			}
			bVar7 = __LIB_3__::func_360(PLAYER::PLAYER_ID(), bVar1);
			switch (iVar0)
			{
				case 0:
					return 1;
					break;
				case 1:
					if (bVar2)
					{
						return 1;
					}
					break;
				case 2:
					if (bVar4)
					{
						return 1;
					}
					break;
				case 3:
					if (bVar2 || bVar4)
					{
						return 1;
					}
					break;
				case 4:
					if (bVar7)
					{
						return 1;
					}
					break;
				case 5:
					if (((bVar2 || bVar4) || iVar5) || bVar7)
					{
						return 1;
					}
					break;
				case 6:
					return 0;
					break;
				}
			}
	}
	return 0;
}

int func_862(bool bParam0)//Position - 0xB2066
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_326, false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = __LIB_0__::func_220(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (__LIB_19__::func_462(iVar4))
				{
					if (!bParam0)
					{
						if (iVar3 != iLocal_326)
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
			iVar2++;
		}
	}
	return 0;
}

void func_863()//Position - 0xB2110
{
	if (__LIB_19__::func_462(bLocal_324))
	{
		if (!__LIB_19__::func_409())
		{
			__LIB_3__::func_157(1);
		}
	}
}

int func_864()//Position - 0xB7D8C
{
	if ((((bLocal_321 && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_0__::func_193()) && bLocal_332) && __LIB_19__::func_416())
	{
		return 1;
	}
	return 0;
}

int func_865(var uParam0)//Position - 0xB85EB
{
	Stack.Push(Local_213.f_64.f_13 != 0);
	Stack.Push(uParam0);
	Call_Loc(Local_213.f_64.f_13);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (Local_304.f_2 == 0 || __LIB_0__::func_937(&(Local_304.f_3), Local_304.f_2, 0))
	{
		return 0;
	}
	return 1;
}

bool func_866(int iParam0)//Position - 0xBD864
{
	return ((iParam0 == bLocal_324 && !__LIB_12__::func_548(1)) || __LIB_2__::func_39(iParam0) == bLocal_324);
}

void func_867(var uParam0, int iParam1)//Position - 0xBF426
{
	if (Local_213.f_114.f_31 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(iParam1 == bLocal_324);
		Call_Loc(Local_213.f_114.f_31);
	}
	__LIB_0__::func_467(uParam0, iParam1 == bLocal_324);
}

void func_868(bool bParam0)//Position - 0xC3891
{
	Global_31967 = bParam0;
	if (bParam0)
	{
		__LIB_0__::func_483(7, iLocal_326, 0);
		__LIB_0__::func_483(8, iLocal_326, 0);
		__LIB_0__::func_483(20, iLocal_326, 0);
		__LIB_0__::func_483(21, iLocal_326, 0);
	}
}

void func_869()//Position - 0xC3FEA
{
	Global_2815059.f_6725 = Local_196.f_19.f_5[0 /*13*/].f_2;
	if (__LIB_1__::func_501())
	{
		Global_1892703[bLocal_324 /*599*/].f_10.f_176 = Local_196.f_19.f_5[0 /*13*/].f_2;
	}
}

Vector3 func_870(int iParam0, var uParam1)//Position - 0xC549F
{
	if (Local_213.f_156.f_2.f_125 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(uParam1);
		Call_Loc(Local_213.f_156.f_2.f_125);
		return StackVal, StackVal, StackVal;
	}
	return __LIB_3__::func_554();
}

void func_871(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x1B39
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_196.f_38.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var1, 25, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, Var0, 25, true, joaat("WEAPON_ASSAULTSHOTGUN"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			__LIB_19__::func_455(Var2, &Var3, &Var4, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var4, 300, true, joaat("WEAPON_HEAVYSNIPER"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			__LIB_19__::func_342(iParam0, -1, 0);
		}
	}
}

int func_872(int iParam0)//Position - 0x172AE
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
	if (__LIB_4__::func_946(PLAYER::PLAYER_ID(), 0) || (__LIB_19__::func_541(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (__LIB_4__::func_952(PLAYER::PLAYER_ID()) || (__LIB_19__::func_541(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (__LIB_12__::func_483(PLAYER::PLAYER_ID()) || (__LIB_19__::func_541(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (__LIB_4__::func_968(PLAYER::PLAYER_ID()) || (__LIB_19__::func_541(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (__LIB_4__::func_967(PLAYER::PLAYER_ID()) || (__LIB_19__::func_541(PLAYER::PLAYER_ID()) && __LIB_0__::func_172(__LIB_3__::func_248(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

Vector3 func_873(int iParam0)//Position - 0x2BCDF
{
	struct<3> Var0;
	struct<3> Var1;
	if (bLocal_321 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_326, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_331))
		{
			Var0 = { __LIB_19__::func_464(iParam0) };
			if (!__LIB_0__::func_86(Var0))
			{
				return Var0;
			}
		}
		Var1 = { __LIB_19__::func_397(iParam0) };
		if (!__LIB_0__::func_86(Var1))
		{
			return Var1;
		}
	}
	return __LIB_19__::func_266(iParam0);
}

int func_874(int iParam0, int iParam1)//Position - 0xBB977
{
	Stack.Push(Local_213.f_352.f_32 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_213.f_352.f_32);
	if (StackVal && StackVal)
	{
		return 1;
	}
	if (__LIB_19__::func_474(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_875(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8)//Position - 0x17D3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (__LIB_1__::func_693(iVar1, bParam2, bParam3))
			{
				if (iParam8 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && __LIB_1__::func_908(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam7) && bParam4) && __LIB_8__::func_912(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_1__::func_694(iVar1), Param0, true) < fParam1)
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

void func_876(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0xBBD3
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
		if (!__LIB_19__::func_489(iParam0))
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
		if (((__LIB_19__::func_488() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
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

int func_877(int iParam0)//Position - 0x14CFB
{
	if (__LIB_1__::func_693(iParam0, 0, 1))
	{
		if (!__LIB_3__::func_467(iParam0))
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
						if (!__LIB_8__::func_912(iParam0))
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

int func_878(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x20999
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar5;
	if (iParam1 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (!__LIB_10__::func_803(*uParam4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			*uParam4 = { __LIB_19__::func_275() };
		}
		else
		{
			return 0;
		}
	}
	if (!__LIB_12__::func_309(*uParam4, Global_1952191.f_5479))
	{
		if ((MISC::GET_FRAME_COUNT() - Global_1952191.f_5479.f_4) <= 90 || (__LIB_0__::func_864(&(Global_1952191.f_5302)) && !__LIB_0__::func_937(&(Global_1952191.f_5302), 1500, 0)))
		{
			return 0;
		}
		else
		{
			__LIB_19__::func_459();
			__LIB_19__::func_273(*uParam4);
		}
	}
	if (BitTest(Global_1952191.f_5479.f_3, 31))
	{
		iVar1 = (Global_1952191.f_5479.f_4 - 1);
		if (MISC::GET_FRAME_COUNT() == iVar1)
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1952191.f_5479.f_3), 31);
		}
	}
	if (Global_1952191.f_5479.f_4 == 0)
	{
		Global_1952191.f_5479.f_4 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1952191.f_5484[iVar0] = -1;
			iVar2 = __LIB_19__::func_458(PLAYER::PLAYER_ID(), iVar0);
			if (__LIB_19__::func_271(iVar2))
			{
				MISC::SET_BIT(&(Global_1952191.f_5479.f_3), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = __LIB_19__::func_552(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (__LIB_5__::func_191(*uParam0))
	{
		Var4 = { __LIB_5__::func_948(*uParam0) };
		if ((Global_1952191.f_5479.f_4 == MISC::GET_FRAME_COUNT() || __LIB_5__::func_193(*uParam0) != iParam3) || !__LIB_12__::func_309(*uParam4, Var4))
		{
			if (Global_1952191.f_5479.f_4 != MISC::GET_FRAME_COUNT())
			{
				Global_1952191.f_5479.f_4 = MISC::GET_FRAME_COUNT();
				if (Global_1952191.f_5484[iVar0] == uParam0->f_1)
				{
					Global_1952191.f_5484[iVar0] = -1;
				}
			}
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), iParam2);
			MISC::SET_BIT(&(Global_1952191.f_5479.f_3), 31);
			uParam0->f_1 = -1;
			Global_1952191.f_5479.f_4++;
			return 0;
		}
		else
		{
			__LIB_19__::func_492(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1952191.f_5484[iParam2] == -1)
	{
		Global_1952191.f_5484[iParam2] = uVar3;
	}
	if (!__LIB_0__::func_864(&(Global_1952191.f_5302)) || __LIB_0__::func_937(&(Global_1952191.f_5302), 1500, 0))
	{
		bVar5 = true;
		__LIB_0__::func_627(&(Global_1952191.f_5302), 0, 0);
	}
	if (!bVar5)
	{
		if (MISC::GET_FRAME_COUNT() == Global_1952191.f_5304)
		{
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		__LIB_19__::func_491(*uParam0, iParam3, uParam5, *uParam4, uParam6);
		Global_1952191.f_5304 = MISC::GET_FRAME_COUNT();
	}
	return 0;
}

float func_879(int iParam0, float fParam1, float fParam2)//Position - 0x2C832
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	iVar0 = Global_2703735;
	Var2 = { __LIB_1__::func_722(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1581351 || __LIB_15__::func_360())
	{
		if (__LIB_4__::func_902(iVar0))
		{
			Var3 = { __LIB_19__::func_554(iVar0) };
		}
		else if (__LIB_19__::func_289(iVar0))
		{
			Var3 = { __LIB_19__::func_466(iVar0) };
		}
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false) };
	}
	Var3.f_2 = 0f;
	fVar1 = SYSTEM::VMAG(Var3 - Var2);
	if (fVar1 < fParam1)
	{
		fVar1 = fParam1;
	}
	if (fVar1 > fParam2)
	{
		fVar1 = fParam2;
	}
	fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
	fVar1 = (fVar1 - 1f);
	fVar1 = (fVar1 * -1f);
	return fVar1;
}

void func_880(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xC40AE
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_7__::func_945(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_7__::func_944() != -1)
		{
			__LIB_7__::func_946(-1);
		}
		if (__LIB_7__::func_943() != -1)
		{
			__LIB_9__::func_357(-1);
		}
		__LIB_15__::func_414(iParam2);
		__LIB_15__::func_620(iParam0);
		if (!__LIB_15__::func_413(iParam0))
		{
			fVar0 = __LIB_15__::func_412(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_2__::func_74(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_15__::func_411(iParam0) || iParam3)
		{
			if (__LIB_15__::func_410(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_945())
		{
			__LIB_1__::func_966(27);
		}
		if (bParam1)
		{
			if (!__LIB_12__::func_495())
			{
				__LIB_2__::func_135(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_928(6);
			}
			__LIB_15__::func_302();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_1__::func_15(PLAYER::PLAYER_ID()) && __LIB_0__::func_315(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		__LIB_19__::func_562();
		if (__LIB_15__::func_396(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_881(int iParam0)//Position - 0xCA573
{
	__LIB_19__::func_563(iParam0, -1);
}

void func_882()//Position - 0xCD2D1
{
	struct<3> Var0;
	if (__LIB_1__::func_501())
	{
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1000;
		__LIB_19__::func_564(0, Var0);
	}
}

void func_883(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x22F61
{
	if (__LIB_19__::func_503(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574757 = 19;
		Global_1574757.f_56 = iParam2;
	}
}

int func_884(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xBD455
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar3;
	bool bVar4;
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4718592.f_111249[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_494(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_574(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(__LIB_19__::func_574(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2787505 = { __LIB_1__::func_696(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505))
			{
				bVar3 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2787435.f_22), "Leader") && Global_2787435.f_30 == 0)
				{
					bVar3 = true;
				}
				if (Global_2787435.f_21 > 0)
				{
					bVar4 = false;
				}
				else
				{
					bVar4 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { __LIB_2__::func_828(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, &Var2, Global_1576215, Global_1576216, Global_1576217);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar4, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2787435, 35), &(Global_2787435.f_17), Global_2787435.f_30, bVar3, false, Global_2787435, Global_1576215, Global_1576216, Global_1576217);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		__LIB_2__::func_158(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_885(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xBDE48
{
	var uVar0;
	uVar0 = __LIB_19__::func_508(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_886(bool bParam0)//Position - 0xC91BB
{
	bool bVar0;
	if (!__LIB_12__::func_548(1) && __LIB_1__::func_730() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_1__::func_693(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, 0, 1))
			{
				if ((Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 4 || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 8) || Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (__LIB_1__::func_726(__LIB_0__::func_492(PLAYER::PLAYER_ID())) == 0 || __LIB_1__::func_726(__LIB_0__::func_492(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				__LIB_1__::func_928(31);
				if (__LIB_12__::func_654(__LIB_0__::func_492(PLAYER::PLAYER_ID())))
				{
					__LIB_1__::func_928(81);
				}
				if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57 != __LIB_0__::getMinusOneOrNull() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
				{
					Global_1888322 = __LIB_19__::func_574(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57, -2, 0, 0, 0);
					if (!__LIB_1__::func_802(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_57))
					{
						__LIB_1__::func_928(88);
					}
				}
				else
				{
					Global_1888322 = 1;
				}
				Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

int func_887(struct<3> Param0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x131CE
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam7 == 0)
		{
			if (__LIB_1__::func_693(iVar1, bParam3, bParam4))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && __LIB_1__::func_908(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam8) && bParam5) && __LIB_8__::func_912(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (__LIB_2__::func_857(Param0, fParam1, iParam2, Var5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (__LIB_2__::func_779(__LIB_1__::func_694(iVar1), Param0, fParam1, iParam2, fVar2))
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

void func_888(var uParam0, int iParam1)//Position - 0x26FC8
{
	if (__LIB_1__::func_260(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == __LIB_0__::getMinusOneOrNull() || !__LIB_1__::func_693(iParam1, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_256(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = __LIB_19__::func_574(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_889(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCAD26
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_45), &Global_2671530, 323);
	}
	else
	{
		Global_2667225.f_45 = { Global_2671530 };
		Global_2667225.f_45.f_49 = { Global_2671530.f_49 };
		Global_2667225.f_45.f_52 = Global_2671530.f_52;
		Global_2667225.f_45.f_53 = Global_2671530.f_53;
	}
	if (bParam0)
	{
		__LIB_2__::func_27();
	}
	if (!bParam2)
	{
		__LIB_19__::func_575(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	__LIB_2__::func_25(0);
	__LIB_1__::func_913();
}

void func_890(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0xCC5AA
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	bVar1 = false;
	iVar2 = __LIB_7__::func_555(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		__LIB_12__::func_968(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2787772[iParam0];
		iVar0 = __LIB_13__::func_4(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1946104 = -1;
		}
		__LIB_15__::func_422(iParam0, 0, bParam2);
	}
	else if (__LIB_15__::func_456(iParam0, bParam2))
	{
		iVar0 = __LIB_19__::func_576(iVar2, 0, 0, 0);
		iVar3 = __LIB_7__::func_930(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = __LIB_19__::func_372(iVar2, bParam2);
		iVar5 = __LIB_19__::func_576(iVar2, 0, bParam2, 0);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (__LIB_7__::func_553(iVar2) && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		__LIB_12__::func_968(iParam0, iVar0, bParam2);
	}
	else
	{
		if (__LIB_12__::func_522(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			__LIB_12__::func_948(iParam0, (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_191[iParam0 /*13*/].f_2 - (__LIB_19__::func_372(iVar2, bParam2) / 2)));
		}
		iVar0 = (__LIB_19__::func_576(iVar2, 1, bParam2, bParam3) / __LIB_12__::func_522(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (__LIB_7__::func_553(iVar2) && __LIB_7__::func_934(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	__LIB_12__::func_966(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

int func_891(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x27EFF
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (__LIB_1__::func_727(iVar0, 14))
	{
		return 0;
	}
	if (__LIB_0__::func_979(iVar0, 21))
	{
		return 0;
	}
	if (__LIB_0__::func_979(iVar0, 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_796(iVar0))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (__LIB_1__::func_456(iVar0))
	{
		return 0;
	}
	if (__LIB_1__::func_381())
	{
		return 0;
	}
	if (__LIB_0__::func_975())
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_0__::func_936(iVar0))
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_979(iVar0, 0) || __LIB_0__::func_979(iVar0, 3))
	{
		return 0;
	}
	if ((__LIB_0__::func_979(iVar0, 12) || __LIB_0__::func_979(iVar0, 14)) || __LIB_0__::func_979(iVar0, 13))
	{
		return 0;
	}
	if (__LIB_19__::func_553(iVar0, 0, -1))
	{
		if (!__LIB_19__::func_517())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (__LIB_0__::func_719())
		{
			return 0;
		}
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_3__::func_462(iVar0))
	{
		return 0;
	}
	if (__LIB_1__::func_100())
	{
		return 0;
	}
	if (__LIB_1__::func_510(iVar0))
	{
		return 0;
	}
	if ((__LIB_19__::func_388(iVar0) && __LIB_3__::func_248(iVar0) == 123) && !bParam3)
	{
		return 0;
	}
	if (__LIB_6__::func_594())
	{
		return 0;
	}
	if (BitTest(Global_1853348[iVar0 /*834*/].f_267.f_30, 4))
	{
		if (!__LIB_19__::func_396())
		{
			return 0;
		}
	}
	if (__LIB_1__::func_968(iVar0))
	{
		return 0;
	}
	if (__LIB_0__::func_927(iVar0))
	{
		return 0;
	}
	if (!__LIB_0__::func_428(iVar0))
	{
		if (__LIB_1__::func_830(iVar0))
		{
			return 0;
		}
	}
	if (__LIB_12__::func_542())
	{
		return 0;
	}
	if (__LIB_1__::func_708(iVar0) && !__LIB_5__::func_203(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_892(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xB21C8
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
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
	struct<2> Var23;
	if (__LIB_19__::func_559(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_19__::func_378() || iParam2 == 28)
	{
		if (__LIB_19__::func_383(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_12__::func_553(), sParam7))
		{
			__LIB_1__::func_995(1);
			if ((!__LIB_1__::func_994() && !__LIB_1__::func_993()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_992())
				{
					__LIB_2__::func_63();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_991(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_990(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_2__::func_40(bVar4, 0))
									{
										if (__LIB_12__::func_558(bVar4) || __LIB_12__::func_485(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_0__::func_796(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												__LIB_19__::func_368(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_0__::func_492(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (__LIB_12__::func_490())
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::getMinusOneOrNull();
								}
							}
							else
							{
								bVar4 = (uParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_12__::func_533(bVar4) && __LIB_19__::func_499(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_12__::func_552(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_12__::func_562(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((uParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (uParam0[iVar18 /*42*/])->f_22;
								}
								if ((uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (uParam0[iVar18 /*42*/])->f_31;
								}
								if ((uParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (uParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (uParam0[iVar18 /*42*/])->f_9;
								if (((uParam0[iVar18 /*42*/])->f_9 != -1 || (uParam0[iVar18 /*42*/])->f_22 != -1f) || (uParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!__LIB_12__::func_490())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (uParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (uParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = __LIB_19__::func_471(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_12__::func_486(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((uParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (uParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_982(iParam5))
								{
									__LIB_19__::func_516(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									__LIB_19__::func_516(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (uParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_693(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::getMinusOneOrNull();
							}
							if (__LIB_12__::func_533(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_12__::func_552(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_12__::func_562(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = __LIB_19__::func_471(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_12__::func_486(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_19__::func_518(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_12__::func_532(uParam3, iParam1, iParam2);
						}
						__LIB_0__::clearF_1Prop(&(uParam3->f_21));
						__LIB_1__::func_975();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_974(uParam3, iParam1);
							__LIB_1__::func_824(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_974(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_2__::func_141(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_2__::func_140(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_975();
			__LIB_1__::func_991(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

int func_893()//Position - 0x23E88
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar0++;
		iVar1++;
	}
	return iVar0;
}

char* func_894(int iParam0, int iParam1)//Position - 0x25ED7
{
	switch (iParam1)
	{
		case 1:
			return "BB_FactoryRaid_1";
			break;
		case 2:
			return "BB_FactoryRaid_2";
			break;
		case 3:
			return "BB_FactoryRaid_3";
			break;
		case 0:
			return "BB_AircraftCarrier";
			break;
		case 4:
			return "BB_CapturedUFO";
			break;
	}
	return "";
}

var func_895()//Position - 0x27560
{
	return Global_262145.f_24568 /* Tunable: 265126011 */;
}

int func_896(int iParam0)//Position - 0x2A1D8
{
	if (iParam0 == 2)
	{
		return 0;
	}
	return 1;
}

int func_897(int iParam0)//Position - 0x4C924
{
	switch (iParam0)
	{
		case joaat("WP_WT_RAYPISTOL_t0_v0"):
			return joaat("WEAPON_RAYPISTOL");
		default:
	}
	return 0;
}

bool func_898(int iParam0)//Position - 0x4CC81
{
	return (iParam0 >= 694 && iParam0 <= 703);
}

int func_899()//Position - 0x506BD
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 3042.596f, -4667.9146f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.9146f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_900()//Position - 0x5075E
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.10364f, 14.99213f };
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_901()//Position - 0x50814
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f) };
		if (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_902(var uParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0x54AE3
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, sParam1, iParam2, sParam3, bParam4, iParam5);
		return 1;
	}
	return 0;
}

Vector3 func_903(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x56EC7
{
	if (bParam2)
	{
		return Param0 + Vector(fParam1, fParam1, fParam1);
	}
	return Param0 - Vector(fParam1, fParam1, fParam1);
}

float func_904()//Position - 0x573D6
{
	return Global_262145.f_25363 /* Tunable: BB_BUSINESS_BATTLE_EVENT_CARGO_WEIGHTING */;
}

void func_905(var uParam0, struct<3> Param1, int iParam2)//Position - 0xBA00A
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2678393.f_1868))
	{
		if (!Global_2678393.f_1868 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	else
	{
		Global_2678393.f_1868 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_6 = uParam0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_7 = { Param1 };
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_71.f_10 = iParam2;
}

int func_906()//Position - 0xC4728
{
	if ((((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !HUD::IS_HUD_HIDDEN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_907(int iParam0)//Position - 0xC498F
{
	return Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_4241[iParam0 /*3*/];
}

float func_908()//Position - 0xC56BE
{
	if (!Global_262145.f_32987 /* Tunable: -1195993490 */ || __LIB_0__::func_137(32395, -1))
	{
		return 1f;
	}
	return Global_262145.f_32989 /* Tunable: 1215340565 */;
}

int func_909(int iParam0)//Position - 0xC56F0
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_24591 /* Tunable: 262012663 */;
		case 1:
			return Global_262145.f_24597 /* Tunable: -72645845 */;
		case 2:
			return Global_262145.f_24592 /* Tunable: 1530377906 */;
		case 3:
			return Global_262145.f_24593 /* Tunable: -2041453249 */;
		case 4:
			return Global_262145.f_24594 /* Tunable: 1472626925 */;
		case 5:
			return Global_262145.f_24595 /* Tunable: 844283197 */;
		case 6:
			return Global_262145.f_24596 /* Tunable: 899953586 */;
		default:
	}
	return 1;
}

int func_910(int iParam0, bool bParam1)//Position - 0xC58BB
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			iVar0 = 20;
			break;
		case 3:
			iVar0 = 100;
			break;
		case 4:
			iVar0 = 100;
			break;
		case 5:
			iVar0 = 100;
			break;
		case 6:
			iVar0 = 100;
			break;
	}
	if (bParam1)
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * 0.5f));
	}
	return iVar0;
}

void func_911(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)//Position - 0xDCBD7
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(0, iVar0);
		Global_1649593.f_1177[iVar0] = uParam0;
		Global_1649593.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1649593.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_1177.f_194[iVar0] = uParam3;
		Global_1649593.f_1177.f_183[iVar0] = uParam4;
		Global_1649593.f_1177.f_216[iVar0] = uParam5;
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

void func_912(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xDCE9C
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = uParam3;
		Global_1649593.f_3347.f_216[iVar0] = uParam5;
		Global_1649593.f_3347.f_194[iVar0] = uParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

int func_913(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)//Position - 0xE5153
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_914(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0xE51D4
{
	*fParam1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

float func_915(float fParam0, float fParam1, int iParam2)//Position - 0xE96C8
{
	float fVar0;
	float fVar1;
	fVar0 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

float func_916(float fParam0)//Position - 0xEA86F
{
	return (1.778f / fParam0);
}

void func_917(struct<3> Param0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0xEC37D
{
	GRAPHICS::DRAW_MARKER(2, Param0, 0f, 0f, 0f, 180f, 0f, 0f, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

int func_918(int iParam0)//Position - 0xED1CB
{
	return 615;
}

void func_919(int iParam0)//Position - 0xF76A4
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1892703[iVar0 /*599*/].f_10.f_474 != iParam0)
	{
		Global_1892703[iVar0 /*599*/].f_10.f_474 = iParam0;
	}
}

float func_920(var uParam0)//Position - 0xFD373
{
	return 1.25f;
}

void func_921(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5C0E
{
	int* iVar0;
	int iVar1;
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandOwner", 3))
	{
		iVar0 = __LIB_1__::func_730();
		__LIB_15__::func_533(iParam1, &iVar0);
		DECORATOR::DECOR_SET_INT(iParam0, "ContrabandOwner", iVar0);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ContrabandDeliveryType", 3))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "ContrabandDeliveryType", iParam2);
		}
		__LIB_15__::func_505(iParam2);
		if (iParam2 == -81613951)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				DECORATOR::DECOR_SET_INT(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_922()//Position - 0x22031
{
	__LIB_0__::func_467();
}

int func_923(int iParam0)//Position - 0x4C942
{
	if ((((__LIB_12__::func_928(2) == __LIB_12__::func_937(iParam0, 2) && __LIB_12__::func_928(3) == __LIB_12__::func_937(iParam0, 3)) && __LIB_12__::func_928(4) == __LIB_12__::func_937(iParam0, 4)) && __LIB_12__::func_928(5) == __LIB_12__::func_937(iParam0, 5)) && __LIB_12__::func_928(6) == __LIB_12__::func_937(iParam0, 6))
	{
		return 1;
	}
	return 0;
}

int func_924()//Position - 0x57243
{
	int iVar0;
	int iVar1[10];
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (__LIB_1__::func_394())
		{
			if (Global_262145.f_25352[iVar2] != -1)
			{
				iVar1[iVar0 + 1] = iVar2;
				iVar0++;
			}
		}
		else if (Global_262145.f_25341[iVar2] != -1)
		{
			iVar1[iVar0 + 1] = iVar2;
			iVar0++;
		}
		iVar2++;
	}
	if (iVar0 == -1)
	{
		if (Global_262145.f_25778 /* Tunable: 667407153 */ != -1)
		{
			return 10;
		}
	}
	else if (Global_262145.f_25778 /* Tunable: 667407153 */ != -1)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 2);
		if (iVar3 == iVar0 + 1)
		{
			return 10;
		}
		else
		{
			return iVar1[iVar3];
		}
	}
	else
	{
		return iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1)];
	}
	return -1;
}

int func_925()//Position - 0x573E5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_1__::func_394())
		{
			if (Global_262145.f_25352[iVar0] != -1)
			{
				return 1;
			}
		}
		else if (Global_262145.f_25341[iVar0] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	if (Global_262145.f_25778 /* Tunable: 667407153 */ != -1)
	{
		return 1;
	}
	return 0;
}

int func_926(int iParam0, bool bParam1, bool bParam2)//Position - 0x5C751
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && __LIB_0__::func_941(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && __LIB_0__::func_941(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_927(int iParam0)//Position - 0xC596F
{
	if (iParam0 >= 0)
	{
		if (iParam0 >= 10)
		{
			return Global_262145.f_25778 /* Tunable: 667407153 */;
		}
		else if (__LIB_1__::func_394())
		{
			return Global_262145.f_25352[iParam0];
		}
		else
		{
			return Global_262145.f_25341[iParam0];
		}
	}
	return -1;
}

int func_928(var uParam0)//Position - 0xD757D
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_156(bVar3, 0, 1))
	{
		Var2 = { __LIB_1__::func_696(bVar3) };
		iVar1 = __LIB_1__::func_973(uParam0, uParam0->f_37);
		if (__LIB_0__::func_800(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							__LIB_1__::func_972(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						__LIB_1__::func_972(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							__LIB_1__::func_972(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						__LIB_1__::func_972(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							__LIB_1__::func_972(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						__LIB_1__::func_972(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_929(var uParam0, int* iParam1, int iParam2)//Position - 0xD7751
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != __LIB_0__::getMinusOneOrNull())
		{
			if (__LIB_0__::func_156(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = __LIB_1__::func_977(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					__LIB_1__::func_976(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853348[iVar0 /*834*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

int func_930()//Position - 0xD7AF6
{
	if (__LIB_1__::func_15(PLAYER::PLAYER_ID()) || __LIB_2__::func_119())
	{
		if (!__LIB_2__::func_118(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_931(int iParam0)//Position - 0xD8916
{
	if (!__LIB_0__::func_156(iParam0, 0, 1))
	{
		return 0;
	}
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!__LIB_2__::func_76(iParam0))
	{
		return 0;
	}
	if ((NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iParam0, PLAYER::PLAYER_ID()) || __LIB_0__::func_492(iParam0) == 233) || __LIB_0__::func_492(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

void func_932(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xDC43F
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
		Global_1649593.f_2839.f_205[iVar0] = uParam4;
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

void func_933(int* iParam0)//Position - 0xE2D76
{
	if (__LIB_0__::func_702(iParam0))
	{
		if (!__LIB_0__::func_701(iParam0))
		{
			iParam0->f_2 = (__LIB_0__::func_616(BitTest(*iParam0, 4)) - iParam0->f_1);
			MISC::SET_BIT(iParam0, 2);
		}
	}
}

int func_934(int iParam0)//Position - 0xC4652
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_1__::func_643(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = iVar0;
		iVar3 = __LIB_12__::func_937(iParam0, iVar2);
		iVar1 = (iVar1 + __LIB_13__::func_68(iVar2, iVar3));
		iVar0++;
	}
	return iVar1;
}

int func_935(bool bParam0)//Position - 0xD86F7
{
	int iVar0;
	if (bParam0 == __LIB_0__::getMinusOneOrNull())
	{
		return 0;
	}
	if (__LIB_0__::func_361(bParam0, 0))
	{
		return 0;
	}
	iVar0 = bParam0;
	if (iVar0 != -1)
	{
		if (BitTest(Global_1853348[iVar0 /*834*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_936()//Position - 0xD9E1F
{
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_0__::func_975())
	{
		return 0;
	}
	if (!__LIB_1__::func_755())
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_194(8, -1))
	{
		return 0;
	}
	if (__LIB_2__::func_6() == 2)
	{
		return 0;
	}
	if (Global_2815059.f_4612)
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	else if (!__LIB_1__::func_29(PLAYER::PLAYER_ID(), 1, 0) && Global_1573860[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((__LIB_0__::func_104(1) || __LIB_2__::func_65(1)) || Global_23011.f_124) || Global_23011)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (__LIB_1__::func_11() && Global_1965530 == 2)
	{
		return 0;
	}
	if (__LIB_0__::func_457(PLAYER::PLAYER_ID()) && !__LIB_1__::func_11())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (Global_1931431)
	{
		return 0;
	}
	if (__LIB_1__::func_731(0))
	{
		return 0;
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 4))
	{
		return 0;
	}
	if (Global_1640732)
	{
		return 0;
	}
	if ((Global_1959720.f_718.f_5 || Global_1962546.f_718.f_5) || Global_1958748.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1966534.f_724.f_5 || Global_1966534.f_744.f_724.f_5) || Global_1966534.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1973321.f_726.f_5)
	{
		return 0;
	}
	if (__LIB_2__::func_5(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1640768 || Global_1640769) || Global_1640770)
	{
		return 0;
	}
	return 1;
}

void func_937(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x4F64E
{
	if (__LIB_3__::func_197(sParam0, sParam1, sParam2, bParam5, iParam3))
	{
		Global_1574757 = 13;
		Global_1574757.f_56 = iParam3;
		Global_1574757.f_57 = iParam4;
	}
}

int func_938(char* sParam0, char* sParam1, int iParam2)//Position - 0xC3E09
{
	int iVar0;
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	__LIB_2__::func_794(9, sParam0, 1, sParam1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_939(bool bParam0)//Position - 0xC4186
{
	return __LIB_13__::func_67(bParam0);
}

int func_940(struct<3> Param0)//Position - 0x189D5
{
	var uVar0;
	if (Global_2815059.f_924 && __LIB_10__::func_734(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_941(bool bParam0)//Position - 0xD8308
{
	int iVar0;
	iVar0 = __LIB_3__::func_69(bParam0);
	if (iVar0 == -1)
	{
		__LIB_3__::func_426(bParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

int func_942(int iParam0)//Position - 0x2DD7
{
	switch (iParam0)
	{
		case 3:
			return 16;
		case 1:
			return 10;
		case 2:
			return 34;
		case 0:
			return 36;
		case 4:
			return 42;
		case 14:
			return 14;
		case 24:
			return 9;
		case 25:
			return 1;
		case 45:
			return 0;
		case 35:
			return 17;
		case 37:
			return 24;
		case 49:
			return 25;
		case 50:
			return 6;
		default:
	}
	return -1;
}

void func_943(int* iParam0)//Position - 0x4498
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		MISC::SET_BIT(iParam0, iVar0);
		iVar0++;
	}
}

int func_944(int iParam0)//Position - 0x220FA
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (iVar1 != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_156(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return __LIB_0__::getMinusOneOrNull();
}

char* func_945(int iParam0, int iParam1)//Position - 0x26EAD
{
	switch (iParam1)
	{
		case 0:
			return "Sum2_Auto_Shop_1";
		case 1:
			return "Sum2_Auto_Shop_2";
		case 2:
			return "Sum2_Auto_Shop_3";
		case 3:
			return "Sum2_Underwater_Cargo_1";
		case 4:
			return "Sum2_Underwater_Cargo_2";
		case 5:
			return "Sum2_Underwater_Cargo_3";
		default:
	}
	return "";
}

int func_946(int iParam0)//Position - 0x283D2
{
	if (!iParam0 == __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_12__::func_486(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_0__::func_818(iParam0)];
		}
	}
	return -1;
}

int func_947(int iParam0, int iParam1)//Position - 0x30311
{
	int iVar0;
	if (__LIB_3__::func_36(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/])
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_948(int iParam0)//Position - 0x3165D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1945958[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_949(int iParam0)//Position - 0x31947
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 6)
	{
		if (__LIB_13__::func_508(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_950(int iParam0, int iParam1)//Position - 0x32439
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_951(var uParam0, var uParam1, bool bParam2)//Position - 0x32556
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return -1958;
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							default:
						}
						break;
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						default:
					}
					break;
			}
			break;
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				default:
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						default:
					}
					break;
			}
			break;
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				default:
			}
			break;
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						default:
					}
					break;
			}
			break;
		case 5:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						default:
					}
					break;
			}
			break;
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				default:
			}
			break;
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						default:
					}
					break;
			}
			break;
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						default:
					}
					break;
			}
			break;
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						default:
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						default:
					}
					break;
			}
			break;
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				default:
			}
			break;
	}
	return 0;
}

int func_952(int iParam0, int iParam1)//Position - 0x32A09
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			break;
	}
	return -1;
}

int func_953(int iParam0)//Position - 0x32AD7
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		default:
	}
	return 0;
}

int func_954(int iParam0)//Position - 0x32B0F
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		case 2:
			return joaat("ex_prop_crate_med_sc");
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		case 4:
			return joaat("ex_prop_crate_art_sc");
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		case 13:
			return joaat("ex_prop_crate_med_bc");
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		case 15:
			return joaat("ex_prop_crate_art_bc");
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		case 23:
			return joaat("ex_prop_crate_oegg");
		case 24:
			return joaat("ex_prop_crate_minig");
		case 25:
			return joaat("ex_prop_crate_xldiam");
		case 26:
			return joaat("ex_prop_crate_shide");
		case 27:
			return joaat("ex_prop_crate_freel");
		case 28:
			return joaat("ex_prop_crate_watch");
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		case 43:
			return joaat("ex_prop_crate_money_sc");
		case 44:
			return joaat("ex_prop_crate_money_bc");
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		case 46:
			return -1958;
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		default:
	}
	return 0;
}

int func_955(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32DD4
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			iParam1 += 111;
			break;
		case 2:
			iParam1 += 222;
			break;
		case 3:
			iParam1 += 333;
			break;
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = __LIB_0__::getGlobal_1574918();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (0 != iVar3)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar3, &iVar0, iVar4, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_956(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x32E8B
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	int iVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			iParam1 += 111;
			break;
		case 2:
			iParam1 += 222;
			break;
		case 3:
			iParam1 += 333;
			break;
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = __LIB_0__::getGlobal_1574918();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	iVar4 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar3)
	{
		bVar0 = STATS::STAT_SET_MASKED_INT(iVar3, iParam2, iVar4, 8, bParam3);
	}
	return bVar0;
}

int func_957(int iParam0)//Position - 0x32F44
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		case joaat("ex_prop_crate_oegg"):
			return 23;
		case joaat("ex_prop_crate_minig"):
			return 24;
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		case joaat("ex_prop_crate_shide"):
			return 26;
		case joaat("ex_prop_crate_freel"):
			return 27;
		case joaat("ex_prop_crate_watch"):
			return 28;
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		default:
	}
	return 0;
}

int func_958(int iParam0)//Position - 0x33335
{
	int iVar0;
	if (__LIB_3__::func_36(iParam0))
	{
		iVar0 = __LIB_5__::func_388(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

int func_959(var uParam0, char* sParam1, struct<3> Param2, char* sParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3358E
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(*uParam0, sParam1, Param2, sParam3, bParam4, iParam5, bParam6);
		return 1;
	}
	return 0;
}

void func_960(var uParam0, int iParam1, var uParam2)//Position - 0x34B0D
{
	if (__LIB_1__::func_458(uParam0, uParam2))
	{
	}
}

int func_961(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3543F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 1;
	iVar2 = 0;
	while (iVar0 && iVar2 < 50)
	{
		iVar0 = 0;
		iVar3 = ((MISC::GET_RANDOM_INT_IN_RANGE(0, 50000) % (iParam3 - iParam2)) + iParam2);
		iVar1 = 0;
		while (iVar1 <= (iParam1 - 1))
		{
			if ((*uParam0)[iVar1] == iVar3)
			{
				iVar0 = 1;
				iVar1 = 999999;
			}
			iVar1++;
		}
		iVar2++;
	}
	if (iVar2 == 50)
	{
		return -1;
	}
	return iVar3;
}

int func_962(int iParam0)//Position - 0x414E4
{
	int iVar0;
	if (iParam0 != __LIB_0__::getMinusOneOrNull())
	{
		if (__LIB_0__::func_156(iParam0, 1, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar0, 2056.2039f, 2954.8074f, -70.69892f, 110f, 90f, 15f, false, true, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_963()//Position - 0x426E7
{
	return 478;
}

int func_964()//Position - 0x43013
{
	int iVar0;
	if (BitTest(Global_2815059.f_4630, 2))
	{
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_0__::func_818(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::getMinusOneOrNull())
			{
				if (Global_2689235[iVar0 /*453*/].f_208)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_965(int iParam0)//Position - 0x43D12
{
	int iVar0;
	switch (__LIB_19__::func_608())
	{
		case 2:
			iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
			VEHICLE::SET_DISABLE_SUPERDUMMY(iVar0, true);
			break;
	}
}

int func_966(int iParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4, bool bParam5)//Position - 0x43D3B
{
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iParam1))
	{
		switch (__LIB_19__::func_608())
		{
			case 2:
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam1, "chassis_dummy"), Param2, Param3, bParam4, false, bParam5, false, 2, true, 0);
				break;
			case 1:
				OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_967(int iParam0, int iParam1)//Position - 0x43DA5
{
	switch (__LIB_19__::func_608())
	{
		case 2:
			switch (iParam1)
			{
				case joaat("insurgent3"):
				case joaat("limo2"):
					switch (iParam0)
					{
						case 0:
							return 1f, -2f, -0.1f;
						case 1:
							return -1f, -2f, -0.1f;
						case 2:
							return 1f, -2f, -0.1f;
						case 3:
							return -1f, -2f, -0.1f;
						default:
					}
					break;
				case joaat("issi3"):
				case joaat("panto"):
				case joaat("raptor"):
					switch (iParam0)
					{
						case 0:
							return 0.5f, 0f, -0.1f;
						case 1:
							return -0.5f, 0f, -0.1f;
						case 2:
							return 0.5f, 0f, -0.1f;
						case 3:
							return -0.5f, 0f, -0.1f;
						default:
					}
					break;
				case joaat("faggio"):
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case joaat("deathbike3"):
					return 0f, -0.65f, 0.5f;
					break;
			}
			switch (iParam0)
			{
				case 0:
					return 1f, 0f, -0.1f;
				case 1:
					return -1f, 0f, -0.1f;
				case 2:
					return 1f, 0f, -0.1f;
				case 3:
					return -1f, 0f, -0.1f;
				default:
			}
			return 0f, -1f, -0.1f;
		default:
	}
	return 0f, 0f, 0f;
}

void func_968(bool bParam0, bool bParam1)//Position - 0xB93AF
{
	if (bParam0)
	{
		__LIB_19__::func_436(2);
	}
	else
	{
		__LIB_19__::func_296(2);
	}
	if (bParam1)
	{
		__LIB_19__::func_436(1);
	}
	else
	{
		__LIB_19__::func_296(1);
	}
}

int func_969(int iParam0)//Position - 0xB93DB
{
	switch (iParam0)
	{
		case 9:
		case 21:
		case 19:
		case 20:
			return 1;
		default:
	}
	return 0;
}

char* func_970(int iParam0)//Position - 0xB948C
{
	switch (iParam0)
	{
		case 5:
			return "xm_x17dlc_int_sub";
		case 6:
			return "apa_v_mp_stilts_b";
		case 7:
			return "sm_smugdlc_int_01";
		case 8:
			return "bkr_biker_dlc_int_ware05";
		case 9:
			return "vw_dlc_casino_apart";
		case 10:
			return "v_lesters";
		case 11:
			return "ex_int_office_02b_dlc";
		case 12:
			return "xm_x17dlc_int_01";
		case 13:
			return "ex_int_warehouse_m_dlc";
		case 15:
			return "h4_mpapa_yacht";
		case 16:
			return "h4_mpapa_yacht";
		case 17:
			return "h4_mpapa_yacht";
		case 18:
			return "imp_impexp_int_02";
		case 19:
			return "ch_DLC_Casino_Hotel";
		case 20:
			return "vw_dlc_casino_main";
		case 21:
			return "vw_dlc_casino_carpark";
		case 22:
			return "h4_dlc_island_vault";
		case 23:
			return "ex_int_warehouse_s_dlc";
		case 26:
			return "hei_dlc_apart_high2_new";
		case 27:
			return "hei_dlc_apart_high2_new";
		case 28:
			return "hei_dlc_garage_high_new";
		case 29:
			return "v_apart_midspaz";
		case 30:
			return "bkr_biker_dlc_int_02";
		case 31:
			return "v_fib03";
		case 32:
			return "ba_dlc_int_01_ba";
		case 33:
			return "v_garagem";
		case 35:
			return "v_lab";
		case 36:
			return "v_garages";
		case 37:
			return "v_carshowroom";
		case 38:
			return "bkr_biker_dlc_int_ware03";
		case 39:
			return "imp_impexp_int_01";
		case 40:
			return "imp_impexp_int_01";
		case 41:
			return "imp_impexp_int_01";
		case 42:
			return "ex_int_warehouse_l_dlc";
		case 43:
			return "ch_dlc_plan";
		case 44:
			return "imp_imptexp_mod_int_01";
		case 46:
			return "imp_impexp_intwaremed";
		case 47:
			return "sf_mpapa_yacht";
		case 48:
			return "sf_mpapa_yacht";
		case 51:
			return "apa_v_mp_h_02";
		case 52:
			return "reh_dlc_int_03_sum2";
		case 53:
			return "reh_dlc_int_04_sum2";
		case 54:
			return "v_studio_lo";
		case 55:
			return "tr_tuner_mod_garage";
		default:
	}
	return "";
}

int func_971(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0xB96DB
{
	switch (iParam0)
	{
		case 18:
			*uParam1 = 969.5376f;
			*uParam2 = -3000.4111f;
			*uParam3 = 90;
			return 1;
		case 43:
			*uParam1 = 2697.615f;
			*uParam2 = -376.38916f;
			*uParam3 = -90;
			return 1;
		default:
	}
	return 0;
}

void func_972(int iParam0, int iParam1, char* sParam2, bool bParam3)//Position - 0xBA34B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (bParam3)
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, sParam2))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam1, sParam2);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam1, sParam2))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iParam1, sParam2);
		}
	}
}

void func_973(int iParam0, int iParam1)//Position - 0xBA50D
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 47:
		case 48:
			break;
	}
}

void func_974(bool bParam0)//Position - 0xC289E
{
	if (bParam0)
	{
		if (!BitTest(Global_1310720.f_6, 11))
		{
			MISC::SET_BIT(&(Global_1310720.f_6), 11);
		}
	}
	else if (BitTest(Global_1310720.f_6, 11))
	{
		MISC::CLEAR_BIT(&(Global_1310720.f_6), 11);
	}
}

void func_975(int iParam0)//Position - 0xC28DF
{
	int iVar0;
	int iVar1;
	if (Global_1946250.f_4732 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 == Global_1946250.f_4728[iVar0])
		{
			Global_1946250.f_4728[iVar0] = -1;
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		if (Global_1946250.f_4732 > 0)
		{
			Global_1946250.f_4732 = (Global_1946250.f_4732 - 1);
		}
	}
}

int func_976(int iParam0)//Position - 0xC2ABF
{
	int iVar0;
	if (Global_1946250.f_4732 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946250.f_4732)
		{
			if (iParam0 == Global_1946250.f_4728[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_977(int iParam0)//Position - 0xC2AFF
{
	switch (iParam0)
	{
		case 5:
			return 511.5731f, 4827.4204f, -63.5879f;
		case 6:
			return -762.319f, 609.9635f, 139.3306f;
		case 7:
			return -1266.802f, -3014.8364f, -49.4895f;
		case 8:
			return 1165f, -3196.6f, -38.2f;
		case 9:
			return 976.6364f, 70.29476f, 115.16413f;
		case 10:
			return 1274.3647f, -1711.968f, 53.7715f;
		case 11:
			return -1580.9049f, -561.6155f, 107.5229f;
		case 12:
			return 520.0001f, 4750f, -70f;
		case 13:
			return 1059.9949f, -3100f, -39.9999f;
		case 15:
			return 50.4f, -3281.7f, 5.9f;
		case 16:
			return -3547.4324f, 738.2712f, 7.975f;
		case 17:
			return -1756.1798f, 5331.8774f, 7.975f;
		case 18:
			return 969.5376f, -3000.4111f, -48.647f;
		case 19:
			return 2504.4f, -257.2f, -39.1f;
		case 20:
			return 1100f, 245f, -49f;
		case 21:
			return 1380f, 200f, -50f;
		case 22:
			return 5011.31f, -5757.73f, 14.486f;
		case 23:
			return 1094.9966f, -3100.0117f, -38.2f;
		case 26:
			return -1460.7823f, -541.889f, 72.2441f;
		case 27:
			return -609.5665f, 50.2203f, 98.3998f;
		case 28:
			return 234.0331f, -1005.2032f, -98.4626f;
		case 29:
			return 342.7946f, -997.4225f, -99.7444f;
		case 30:
			return 1004.465f, -3158.8357f, -39.9075f;
		case 31:
			return 135.3226f, -746.3677f, 253.1523f;
		case 32:
			return -1604.6643f, -3012.5828f, -79.9999f;
		case 33:
			return 199.9715f, -999.6678f, -100f;
		case 35:
			return 3522.8452f, 3707.9653f, 19.9918f;
		case 36:
			return 173.1165f, -1003.2804f, -99.9999f;
		case 37:
			return -38.62f, -1099.01f, 27.31f;
		case 38:
			return 1093.6f, -3196.6f, -38.5f;
		case 39:
			return -197.9168f, -580.4352f, 135.0005f;
		case 40:
			return -90.9854f, -821.2017f, 221.0005f;
		case 41:
			return -1385.7458f, -484.8786f, 56.1005f;
		case 42:
			return 1007.1347f, -3102.0793f, -40f;
		case 43:
			return 2697.615f, -376.38916f, -56.461926f;
		case 44:
			return -69.8794f, -820.7496f, 284.0001f;
		case 46:
			return 972f, -2989f, -40.647f;
		case 47:
			return -3262.5208f, -1584.862f, 7.9751f;
		case 48:
			return -848.4805f, -4819.6978f, 7.9751f;
		case 51:
			return -787.7805f, 334.9232f, 215.8384f;
		case 52:
			return 800f, -3000f, -50f;
		case 53:
			return 850f, -3000f, -50f;
		case 54:
			return 264.3838f, -1000.4523f, -100.0086f;
		case 55:
			return -1350f, 160f, -99.2f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_978(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC2FC8
{
	*uParam3 = 1;
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 21:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_carpark", 32);
					return 1;
				default:
			}
			break;
		case 20:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_main", 32);
					return 1;
				default:
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "vw_casino_penthouse", 32);
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "CS1_02_cf_onmission1", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "CS1_02_cf_onmission2", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "CS1_02_cf_onmission3", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "CS1_02_cf_onmission4", 32);
					return 1;
				case 4:
					StringCopy(sParam2, "CS1_02_cf_offmission", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "ex_sm_13_office_02b", 32);
					return 1;
				default:
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "farmint", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "farmint_cap", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_01", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_01_int", 32);
					return 1;
				default:
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_02", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_02_int", 32);
					return 1;
				default:
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "h4_islandx_yacht_03", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "h4_islandx_yacht_03_int", 32);
					return 1;
				default:
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "bkr_bi_hw1_13_int", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "hei_bi_hw1_13_door", 32);
					*uParam3 = 0;
					return 1;
				default:
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_dt1_02_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_dt1_02_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_dt1_02_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_dt1_02_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_dt1_11_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_dt1_11_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_dt1_11_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_dt1_11_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 41:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "hei_sm_15_exshadowmesh", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "ex_sm_15_office_01a", 32);
					return 1;
				case 2:
					StringCopy(sParam2, "imp_sm_15_modgarage", 32);
					return 1;
				case 3:
					StringCopy(sParam2, "imp_sm_15_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "imp_dt1_11_modgarage", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "imp_dt1_11_cargarage_a", 32);
					return 1;
				default:
			}
			break;
		case 37:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "fakeint", 32);
					*uParam3 = 0;
					return 1;
				case 1:
					StringCopy(sParam2, "shr_int", 32);
					return 1;
				default:
			}
			break;
		case 47:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "sf_yacht_01", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "sf_yacht_01_int", 32);
					return 1;
				default:
			}
			break;
		case 48:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "sf_yacht_02", 32);
					return 1;
				case 1:
					StringCopy(sParam2, "sf_yacht_02_int", 32);
					return 1;
				default:
			}
			break;
		case 51:
			switch (iParam1)
			{
				case 0:
					StringCopy(sParam2, "Apa_V_mp_h_02_A", 32);
					return 1;
				default:
			}
			break;
	}
	return 0;
}

int func_979()//Position - 0xC3459
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		return 0;
	}
	return 1;
}

void func_980(struct<3> Param0, var uParam1, int iParam2)//Position - 0xD9D5B
{
	__LIB_2__::func_697(Param0, uParam1, iParam2);
}

int func_981()//Position - 0xDFF2D
{
	int iVar0;
	if (BitTest(Global_2815059.f_4624, 4))
	{
		if (__LIB_12__::func_486(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_0__::func_818(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::getMinusOneOrNull())
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 17))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_982(struct<2> Param0, var uParam1)//Position - 0xE2417
{
	return SYSTEM::SQRT(((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)));
}

Vector3 func_983(struct<3> Param0, struct<3> Param1)//Position - 0xE2432
{
	return (Param0.f_0 - Param1.f_0), (Param0.f_1 - Param1.f_1), (Param0.f_2 - Param1.f_2);
}

int func_984(int iParam0)//Position - 0xE2E62
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if ((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2854.4204f, 3373.5728f, 30.809174f, -1816.8866f, 2786.2144f, 212.4194f, 220f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2477.663f, 2910.3364f, 31.885231f, -2411.8474f, 3022.681f, 211.80995f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2486.4978f, 3362.571f, 31.67714f, -1686.191f, 2873.5325f, 212.65228f, 220f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1705.9786f, 3129.6887f, 29.268982f, -2047.0344f, 3334.4087f, 210.02782f, 210f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1600.4845f, 2806.9873f, 15.480474f, -1707.008f, 2956.7622f, 211.87146f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2300.8777f, 3385.5645f, 29.05954f, -2241.9717f, 3346.3152f, 212.0413f, 30f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1720.183f, 2961.0786f, 30.806297f, -1760.0618f, 3204.2004f, 211.71394f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2000.7423f, 3322.5764f, 30.960247f, -2284.7527f, 3336.5557f, 211.8176f, 100f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -2165.8674f, 3305.2993f, 30.810333f, -2076.54f, 3253.8176f, 211.81033f, 50f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_985(struct<3> Param0)//Position - 0xE30F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	Param0.f_2 = (Param0.f_2 - 0.2f);
	GRAPHICS::DRAW_MARKER(1, Param0, 0f, 0f, 0f, 0f, 0f, 0f, 3f, 3f, 2.5f, iVar0, iVar1, iVar2, 150, false, false, 2, false, 0, 0, false);
}

void func_986(int iParam0, int iParam1, var uParam2)//Position - 0xE5B32
{
	struct<5> Var0;
	int iVar1;
	Var0.f_0 = -2005151571;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_4 = iParam1;
	Var0.f_3 = uParam2;
	iVar1 = __LIB_1__::func_26(1);
	if (iVar1 != 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_987()//Position - 0xF3C7C
{
	switch (__LIB_0__::func_172(__LIB_0__::func_888(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
		case 24:
			return 1;
		default:
	}
	return 0;
}

Vector3 func_988(var uParam0)//Position - 0xF47BD
{
	return 90f, 0f, 0f;
}

float func_989(var uParam0)//Position - 0xF47D5
{
	return -4f;
}

float func_990(var uParam0)//Position - 0xF47E2
{
	return 4f;
}

float func_991(var uParam0)//Position - 0xF480D
{
	return -1.5f;
}

float func_992(var uParam0)//Position - 0xF4867
{
	return 0.99f;
}

char* func_993(var uParam0)//Position - 0xF48DA
{
	return "FMC_HT_INTERACT" /* GXT: Press ~INPUT_CONTEXT~ to use. */;
}

char* func_994(var uParam0)//Position - 0xF491B
{
	return "BLIP_DEST" /* GXT: Destination */;
}

float func_995(var uParam0)//Position - 0xF49A1
{
	return 0.3f;
}

int func_996(var uParam0)//Position - 0xF49C3
{
	return __LIB_0__::getMinusOneOrNull();
}

int func_997(var uParam0)//Position - 0xF49CF
{
	return 30000;
}

int func_998()//Position - 0x1056AB
{
	return __LIB_3__::func_490(PLAYER::PLAYER_ID()) + 1;
}

bool func_999()//Position - 0x106363
{
	return __LIB_19__::func_586() > 0;
}
