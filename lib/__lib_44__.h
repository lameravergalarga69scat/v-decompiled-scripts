void func_0(var uParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x12D87E
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	if (__LIB_22__::func_234())
	{
		if (bParam3)
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
		else
		{
			sVar0 = "CELEB_LOSER" /* GXT: Loser */;
		}
		if (__LIB_1__::func_153())
		{
			sVar1 = "CELEB_MATCH" /* GXT: MATCH */;
		}
		else
		{
			sVar1 = "CELEB_ROUND" /* GXT: ROUND */;
		}
	}
	else
	{
		if (iParam2 == 8)
		{
			sVar0 = "CELEB_OUT_OF_LIVES" /* GXT: OUT OF LIVES */;
		}
		else if ((((((iParam2 == 2 || iParam2 == 0) || iParam2 == 9) || iParam2 == 4) || iParam2 == 6) || iParam2 == 7) || iParam2 == 3)
		{
			if (bParam3)
			{
				sVar0 = "CELEB_PASSED" /* GXT: PASSED */;
			}
			else
			{
				sVar0 = "CELEB_FAILED" /* GXT: FAILED */;
			}
		}
		else if (bParam3)
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
		else
		{
			sVar0 = "CELEB_LOSER" /* GXT: Loser */;
		}
		if (iParam2 == 9)
		{
			sVar1 = "CELEB_OBJECTIVE" /* GXT: OBJECTIVE */;
		}
		else if (iParam2 == 2)
		{
			sVar1 = "CELEB_SURVIVAL" /* GXT: SURVIVAL */;
		}
		else if (iParam2 == 4)
		{
			sVar1 = "CELEB_GANG_ATTACK" /* GXT: GANG ATTACK */;
		}
		else if (iParam2 == 6)
		{
			if (__LIB_0__::func_177())
			{
				switch (__LIB_16__::func_272())
				{
					case 3:
						sVar1 = "CELEB_ACT_1" /* GXT: ACT I: THE DATA BREACHES */;
						break;
					case 8:
						sVar1 = "CELEB_ACT_2" /* GXT: ACT II: THE BOGDAN PROBLEM */;
						break;
					case 15:
					case 14:
						sVar1 = "CELEB_ACT_3" /* GXT: ACT III: THE DOOMSDAY SCENARIO */;
						break;
				}
			}
			else
			{
				sVar1 = "CELEB_HEIST" /* GXT: HEIST */;
			}
		}
		else if (iParam2 == 7)
		{
			sVar1 = "FMMC_RSTAR_HP" /* GXT: Setup */;
		}
		else if ((iParam2 == 5 || iParam2 == 8) || iParam2 == 1)
		{
			sVar1 = "";
		}
		else if (iParam2 == 3)
		{
			sVar1 = "CELEB_LESSON" /* GXT: LESSON */;
		}
		else if (Global_4718592.f_162946 == 6)
		{
			sVar1 = "CELEB_ROBBERY" /* GXT: CONTRACT */;
		}
		else
		{
			sVar1 = "CELEB_MISSION" /* GXT: MISSION */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_MISSION_RESULT_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_700(sVar1);
	}
	__LIB_0__::func_700(sVar0);
	if (!bParam3 || iParam2 == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	if (__LIB_10__::func_231(Global_4718592.f_168757) || __LIB_10__::func_232(Global_4718592.f_168757))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_43__::func_761(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_MISSION_RESULT_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_700(sVar1);
	}
	__LIB_0__::func_700(sVar0);
	if (!bParam3 || iParam2 == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	if (__LIB_10__::func_231(Global_4718592.f_168757) || __LIB_10__::func_232(Global_4718592.f_168757))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_43__::func_761(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_MISSION_RESULT_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sVar1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__::func_700(sVar1);
	}
	__LIB_0__::func_700(sVar0);
	if (!bParam3 || iParam2 == 9)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam6);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam4);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			bVar2 = true;
		}
	}
	else
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	if (__LIB_10__::func_231(Global_4718592.f_168757) || __LIB_10__::func_232(Global_4718592.f_168757))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(__LIB_43__::func_761(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), PLAYER::PLAYER_ID(), 0));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_1(int iParam0)//Position - 0x2DFFC1
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false))
	{
		__LIB_43__::func_766(iParam0);
		if (__LIB_12__::func_312(iParam0, -1) == 0)
		{
			__LIB_18__::func_498(iParam0, 1, -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iParam0, true))
			{
				__LIB_18__::func_506(iParam0);
				__LIB_18__::func_237(iParam0);
			}
		}
	}
	else if (__LIB_12__::func_312(iParam0, -1) == 1)
	{
		if (__LIB_18__::func_236(iParam0))
		{
			iVar0 = __LIB_18__::func_235(iParam0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_18__::func_498(iParam0, 0, -1);
			}
		}
		else if (__LIB_6__::func_152(iParam0))
		{
			iVar0 = __LIB_6__::func_151(iParam0);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, false) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_18__::func_498(iParam0, 0, -1);
			}
		}
		else
		{
			__LIB_18__::func_498(iParam0, 0, -1);
		}
	}
}

int func_2(int iParam0, int iParam1)//Position - 0x302173
{
	if (__LIB_16__::func_803())
	{
		return 1;
	}
	if (__LIB_16__::func_802())
	{
		return 1;
	}
	if (((((((((((((((((((((((((((PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()) && iParam0 == 1) || iParam0 == 0) && __LIB_43__::func_767(iParam1)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) == 0 || __LIB_7__::func_691())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GOING_INTO_COVER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && (TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()) == 0 || __LIB_7__::func_691())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_OPENING_DOOR(PLAYER::PLAYER_PED_ID())) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 58)) && !__LIB_16__::func_799()) && !__LIB_16__::func_829()) && !Global_2715699.f_3479.f_26) && !PED::IS_PED_TAKING_OFF_HELMET(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_832(PLAYER::PLAYER_ID())) && !Global_2788198)
	{
		return 1;
	}
	return 0;
}

int func_3()//Position - 0x302DAE
{
	if (((((((((__LIB_16__::func_805() || __LIB_16__::func_804()) && __LIB_43__::func_767(0)) && !PED::IS_PED_DOING_DRIVEBY(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 363)) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373)) && !PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 359, true)) && !__LIB_18__::func_449())
	{
		return 1;
	}
	return 0;
}

void func_4(var uParam0, int iParam1)//Position - 0x4358D9
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_35__::func_106(uParam0);
	if (__LIB_5__::func_135(iParam1))
	{
		iVar0 = 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (__LIB_43__::func_768(uParam0, iParam1))
	{
		if (!BitTest(Global_1853348[iVar1 /*834*/].f_6, (iParam1 + iVar0)))
		{
			MISC::SET_BIT(&(Global_1853348[iVar1 /*834*/].f_833), 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			MISC::SET_BIT(&(Global_1853348[iVar1 /*834*/].f_6), (iParam1 + iVar0));
			__LIB_24__::func_294((iParam1 + iVar0), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1853348[iVar1 /*834*/].f_833), 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			MISC::CLEAR_BIT(&(Global_1853348[iVar1 /*834*/].f_6), (iParam1 + iVar0));
			__LIB_24__::func_294((iParam1 + iVar0), 0);
		}
	}
}

int func_5(int iParam0, int iParam1)//Position - 0x445C58
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_186(iParam0);
	iVar1 = __LIB_43__::func_206(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return __LIB_43__::func_759(iVar1);
	}
	return 0;
}

void func_6()//Position - 0x469710
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = iVar0;
			bVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			iVar3 = PLAYER::GET_PLAYER_TEAM(bVar2);
			if (iVar3 < 4 && iVar3 >= 0)
			{
				if (Global_4718592.f_111249[iVar3] != -1)
				{
					iVar4 = __LIB_1__::func_389(__LIB_43__::func_761(iVar3, bVar2, 0));
				}
			}
			if (iVar4 != 0)
			{
				__LIB_12__::func_554(bVar2, iVar4, 1, 0);
			}
		}
		iVar0++;
	}
}

int func_7(var uParam0)//Position - 0x49E382
{
	if (*uParam0 == __LIB_1__::func_577())
	{
		return __LIB_43__::func_772(uParam0);
	}
	else if (*uParam0 == __LIB_11__::func_219())
	{
		return __LIB_43__::func_771(uParam0);
	}
	else if (*uParam0 == __LIB_3__::func_969())
	{
		return __LIB_43__::func_770(uParam0);
	}
	return 0;
}

void func_8(var uParam0, var uParam1, var uParam2)//Position - 0x1B325
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	float fVar17;
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
	struct<3> Var29;
	struct<3> Var30;
	struct<3> Var31;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	char* sVar48;
	int iVar49;
	bool bVar50;
	int iVar51;
	float fVar52;
	int iVar53;
	iVar1 = 1;
	iVar2 = 1;
	iVar3 = 1;
	iVar4 = 1;
	iVar5 = 1;
	iVar6 = 1;
	iVar18 = -1;
	iVar19 = -1;
	iVar20 = 99;
	iVar21 = 0;
	iVar22 = 2147483647;
	iVar23 = __LIB_0__::func_162();
	iVar25 = 1;
	iVar34 = 2147483647;
	iVar35 = -2147483647;
	iVar36 = -1;
	iVar37 = 0;
	iVar38 = 2147483647;
	iVar39 = 0;
	bVar40 = false;
	bVar41 = __LIB_26__::func_666(Global_4456449.f_5);
	bVar42 = __LIB_26__::func_664(uParam0->f_572);
	bVar43 = __LIB_35__::func_160(uParam0);
	bVar44 = __LIB_2__::func_581();
	bVar45 = __LIB_27__::func_52(uParam0);
	bVar46 = __LIB_18__::func_692();
	bVar47 = __LIB_26__::func_665(uParam0);
	__LIB_43__::func_774(uParam0, uParam1);
	uParam0->f_839 = 0;
	uParam0->f_841 = 0;
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (bVar41)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
			{
				if ((uParam1[bVar0 /*303*/])->f_252 > -1)
				{
					if ((uParam1[bVar0 /*303*/])->f_250 > 0)
					{
						if ((uParam1[bVar0 /*303*/])->f_250 > uParam2->f_17)
						{
							uParam2->f_17 = (uParam1[bVar0 /*303*/])->f_250;
							iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
						}
					}
				}
			}
		}
		if (bVar43)
		{
			iVar21 = 1;
			if (__LIB_26__::func_680(uParam0))
			{
				if (uParam0->f_832 == -1)
				{
					uParam0->f_832 = uParam0->f_543;
				}
			}
			if (__LIB_26__::func_680(uParam0))
			{
				if ((uParam1[bVar0 /*303*/])->f_225)
				{
					if (__LIB_26__::func_679((uParam1[bVar0 /*303*/])->f_252))
					{
						if (uParam0->f_833 > (uParam1[bVar0 /*303*/])->f_252)
						{
							iVar25++;
						}
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
				{
					iVar26 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
					iVar27 = PLAYER::GET_PLAYER_PED(iVar26);
				}
				iVar28 = NETWORK::NET_TO_PED(uParam0->f_836);
				if (!ENTITY::IS_ENTITY_DEAD(iVar27, false))
				{
					Var30 = { ENTITY::GET_ENTITY_COORDS(iVar27, false) };
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar28, false))
				{
					Var31 = { ENTITY::GET_ENTITY_COORDS(iVar28, true) };
				}
				if ((uParam1[bVar0 /*303*/])->f_252 > 0)
				{
					iVar25++;
				}
				else if ((uParam1[bVar0 /*303*/])->f_234 > uParam0->f_829)
				{
					iVar25++;
				}
				else if ((uParam1[bVar0 /*303*/])->f_234 == uParam0->f_829)
				{
					if ((uParam1[bVar0 /*303*/])->f_235 > uParam0->f_826)
					{
						iVar25++;
					}
					else if ((uParam1[bVar0 /*303*/])->f_235 == uParam0->f_826)
					{
						Var29 = { Global_4718592.f_95507[(uParam1[bVar0 /*303*/])->f_235 /*58*/] };
						fVar32 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var30, Var29, false);
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var31, Var29, false);
						if (fVar32 < fVar33)
						{
							iVar25++;
						}
					}
				}
			}
		}
		if (uParam0->f_883[bVar0 /*42*/].f_1 != __LIB_0__::func_162())
		{
			if (uParam0->f_883[bVar0 /*42*/].f_32 > 0)
			{
				if (uParam0->f_883[bVar0 /*42*/].f_32 < iVar22)
				{
					iVar22 = uParam0->f_883[bVar0 /*42*/].f_32;
					iVar19 = uParam0->f_883[bVar0 /*42*/].f_1;
				}
			}
			if (__LIB_35__::func_411(uParam0))
			{
				if (uParam0->f_883[bVar0 /*42*/].f_30 == uParam0->f_764)
				{
					if (uParam0->f_883[bVar0 /*42*/].f_14 < iVar20)
					{
						iVar20 = uParam0->f_883[bVar0 /*42*/].f_14;
						iVar18 = uParam0->f_883[bVar0 /*42*/].f_1;
					}
				}
			}
		}
		if (BitTest(uParam0->f_883[bVar0 /*42*/].f_28, 3))
		{
			iVar12++;
		}
		else
		{
			if (__LIB_26__::func_679(uParam0->f_883[bVar0 /*42*/].f_31))
			{
				if (!BitTest(uParam0->f_823, 28))
				{
					MISC::SET_BIT(&(uParam0->f_823), 28);
				}
			}
			if (__LIB_26__::func_679(uParam0->f_883[bVar0 /*42*/].f_31) || (bVar41 && uParam0->f_883[bVar0 /*42*/].f_31 == -1))
			{
				if (!BitTest(uParam0->f_823, 17))
				{
					MISC::SET_BIT(&(uParam0->f_823), 17);
				}
				iVar16++;
				if (uParam0->f_883[bVar0 /*42*/] != -1)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0->f_883[bVar0 /*42*/])))
					{
						if (uParam0->f_883[bVar0 /*42*/].f_1 != __LIB_0__::func_162())
						{
							iVar8++;
						}
					}
				}
			}
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0)))
		{
			iVar49 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(bVar0));
			if (__LIB_1__::func_693(iVar49, 0, 1))
			{
				if (((((__LIB_26__::func_678(uParam1, bVar0) && !__LIB_27__::func_92(uParam1, iVar49, bVar0)) && !__LIB_21__::func_895(iVar49)) && !__LIB_10__::func_226(iVar49)) && !__LIB_1__::func_201(iVar49)) && !__LIB_18__::func_691(iVar49))
				{
					iVar24++;
				}
				if (bVar47)
				{
					if (!__LIB_27__::func_92(uParam1, iVar49, bVar0))
					{
						if (!__LIB_26__::func_679((uParam1[bVar0 /*303*/])->f_252) && !__LIB_35__::func_159(uParam0))
						{
							iVar4 = 0;
						}
					}
				}
				if (!BitTest(uParam0->f_824, 6))
				{
					if (bVar44)
					{
						if (__LIB_26__::func_679((uParam1[bVar0 /*303*/])->f_252) && (uParam1[bVar0 /*303*/])->f_217 == __LIB_26__::func_677())
						{
							MISC::SET_BIT(&(uParam0->f_824), 6);
						}
					}
				}
				if (!BitTest(uParam0->f_824, 2))
				{
					if (!__LIB_0__::func_361(iVar49, 0))
					{
						if ((uParam1[bVar0 /*303*/])->f_4 != 8 && (uParam1[bVar0 /*303*/])->f_4 != 6)
						{
							iVar6 = 0;
						}
					}
				}
				if (!BitTest(uParam0->f_823, 5))
				{
					if ((uParam1[bVar0 /*303*/])->f_4 >= 3 && !__LIB_0__::func_361(iVar49, 0))
					{
						MISC::SET_BIT(&(uParam0->f_823), 5);
					}
				}
				if (__LIB_27__::func_92(uParam1, iVar49, bVar0))
				{
					iVar14++;
					if (__LIB_0__::func_361(iVar49, 0))
					{
						iVar15++;
						if (!BitTest(uParam0->f_824, 1))
						{
							MISC::SET_BIT(&(uParam0->f_824), 1);
						}
					}
				}
				else
				{
					if (bVar45)
					{
						if (BitTest((uParam1[bVar0 /*303*/])->f_228, 25))
						{
							if (uParam0->f_718 != bVar0)
							{
								uParam0->f_718 = bVar0;
							}
						}
						if (BitTest((uParam1[bVar0 /*303*/])->f_228, 26))
						{
							iVar37++;
						}
						if (__LIB_26__::func_676(uParam0))
						{
							if (((uParam1[bVar0 /*303*/])->f_234 < iVar34 && !(uParam1[bVar0 /*303*/])->f_225) && ((uParam1[bVar0 /*303*/])->f_4 == 3 || (uParam1[bVar0 /*303*/])->f_4 == 11))
							{
								iVar36 = bVar0;
								iVar34 = (uParam1[bVar0 /*303*/])->f_234;
							}
							if ((uParam1[bVar0 /*303*/])->f_4 == 3 || (uParam1[bVar0 /*303*/])->f_4 == 11)
							{
								if ((uParam1[bVar0 /*303*/])->f_234 < iVar38)
								{
									iVar38 = (uParam1[bVar0 /*303*/])->f_234;
								}
							}
						}
						else
						{
							__LIB_35__::func_168(uParam0);
							if (((uParam1[bVar0 /*303*/])->f_257 > iVar35 && !(uParam1[bVar0 /*303*/])->f_225) && ((uParam1[bVar0 /*303*/])->f_4 == 3 || (uParam1[bVar0 /*303*/])->f_4 == 11))
							{
								iVar36 = bVar0;
								iVar35 = (uParam1[bVar0 /*303*/])->f_257;
							}
						}
						if (uParam0->f_619[bVar0] != (uParam1[bVar0 /*303*/])->f_236)
						{
							uParam0->f_619[bVar0] = (uParam1[bVar0 /*303*/])->f_236;
						}
						if (uParam0->f_586[bVar0] != (uParam1[bVar0 /*303*/])->f_234 || (!BitTest(uParam0->f_2278, bVar0) && (uParam1[bVar0 /*303*/])->f_225))
						{
							if (__LIB_26__::func_676(uParam0))
							{
								iVar39 = 1;
							}
							uParam0->f_586[bVar0] = (uParam1[bVar0 /*303*/])->f_234;
						}
						if (!BitTest(uParam0->f_2278, bVar0))
						{
							if ((uParam1[bVar0 /*303*/])->f_225)
							{
								MISC::SET_BIT(&(uParam0->f_2278), bVar0);
							}
						}
						if (!bVar42 && !bVar41)
						{
							if (uParam0->f_652[bVar0] == __LIB_0__::func_162())
							{
								if (bVar0 != uParam2->f_8573)
								{
									if (uParam0->f_586[bVar0] < uParam0->f_586[uParam2->f_8573])
									{
										if (uParam0->f_619[bVar0] < uParam0->f_619[uParam2->f_8573])
										{
											if ((uParam0->f_619[uParam2->f_8573] - uParam0->f_619[bVar0]) > Global_4718592.f_107224)
											{
												if (uParam0->f_652[bVar0] != PLAYER::INT_TO_PLAYERINDEX(bVar0))
												{
													uParam0->f_652[bVar0] = PLAYER::INT_TO_PLAYERINDEX(bVar0);
												}
												if (uParam0->f_685[bVar0] != PLAYER::INT_TO_PLAYERINDEX(uParam2->f_8573))
												{
													uParam0->f_685[bVar0] = PLAYER::INT_TO_PLAYERINDEX(uParam2->f_8573);
												}
											}
										}
									}
								}
							}
						}
					}
					sVar48 = PLAYER::GET_PLAYER_NAME(iVar49);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_15[bVar0 /*16*/])) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar48))
					{
						StringCopy(&(uParam0->f_15[bVar0 /*16*/]), sVar48, 64);
					}
					if (!BitTest(uParam0->f_823, 20))
					{
						if ((uParam1[bVar0 /*303*/])->f_266 != 4)
						{
							iVar2 = 0;
						}
					}
					if (BitTest((uParam1[bVar0 /*303*/])->f_7, 0))
					{
						uParam0->f_841++;
					}
					if (!BitTest(uParam0->f_538, bVar0))
					{
						if (BitTest(uParam0->f_537, bVar0))
						{
							if (BitTest(uParam0->f_823, 26))
							{
								MISC::SET_BIT(&(uParam0->f_538), bVar0);
							}
						}
					}
					if (!BitTest(uParam0->f_539, bVar0))
					{
						if (BitTest(uParam0->f_538, bVar0))
						{
							if (BitTest(uParam0->f_823, 25))
							{
								MISC::SET_BIT(&(uParam0->f_539), bVar0);
							}
						}
					}
					if (bVar45)
					{
						if (!BitTest((uParam1[bVar0 /*303*/])->f_228, 13) && (uParam1[bVar0 /*303*/])->f_4 > 2)
						{
							uParam0->f_839++;
						}
						bVar10 = PLAYER::GET_PLAYER_TEAM(iVar49);
						if (bVar10 != -1)
						{
							if (!BitTest(uVar11, bVar10))
							{
								iVar9++;
								MISC::SET_BIT(&uVar11, bVar10);
							}
						}
					}
					else if (BitTest(uParam0->f_823, 10))
					{
						if (uParam0->f_848[bVar0] == -1)
						{
							uParam0->f_848[bVar0] = uParam0->f_882;
							uParam0->f_882++;
							MISC::SET_BIT(&(uParam0->f_881), bVar0);
						}
					}
					if (!BitTest(uParam0->f_823, 14))
					{
						if ((uParam1[bVar0 /*303*/])->f_264 != 1)
						{
							iVar1 = 0;
						}
					}
					if (!BitTest(uParam0->f_823, 4))
					{
						if ((uParam1[bVar0 /*303*/])->f_264 != 6)
						{
							iVar3 = 0;
						}
					}
					if (bVar46)
					{
						if (__LIB_23__::func_672())
						{
							if (!BitTest(uParam0->f_824, 0))
							{
								iVar3 = 0;
							}
						}
					}
					if (!BitTest(uParam0->f_823, 6))
					{
						if ((uParam1[bVar0 /*303*/])->f_235 >= 1)
						{
							MISC::SET_BIT(&(uParam0->f_823), 6);
						}
					}
					if (BitTest((uParam1[bVar0 /*303*/])->f_228, 4))
					{
						uParam0->f_828 = bVar0;
					}
					if (bVar43)
					{
						if (!__LIB_26__::func_680(uParam0))
						{
							if (BitTest((uParam1[bVar0 /*303*/])->f_228, 9))
							{
								uParam0->f_833 = __LIB_35__::func_167(uParam0, uParam2);
								if ((uParam0->f_833 - uParam0->f_834) < uParam0->f_834)
								{
									uParam0->f_834 = (uParam0->f_833 - uParam0->f_834);
								}
								MISC::SET_BIT(&(uParam0->f_823), 18);
							}
						}
						if (!BitTest(uParam0->f_823, 19))
						{
							if (BitTest((uParam1[bVar0 /*303*/])->f_228, 10))
							{
								uParam0->f_834 = __LIB_35__::func_167(uParam0, uParam2);
								MISC::SET_BIT(&(uParam0->f_823), 19);
							}
						}
					}
				}
			}
		}
		bVar0++;
	}
	if (bVar45)
	{
		if (__LIB_35__::func_168(uParam0))
		{
			if (__LIB_0__::func_864(&(uParam0->f_815)))
			{
				if (!__LIB_0__::func_864(&(uParam0->f_719)))
				{
					__LIB_0__::func_795(&(uParam0->f_719), 0, 0);
				}
				else if (__LIB_0__::func_937(&(uParam0->f_719), __LIB_35__::func_166(uParam0), 0))
				{
					iVar39 = 1;
					if (uParam0->f_844 > 2)
					{
						__LIB_0__::func_627(&(uParam0->f_719), 0, 0);
					}
				}
			}
		}
		else if (__LIB_26__::func_676(uParam0))
		{
			if (iVar38 > uParam0->f_722)
			{
				bVar40 = true;
			}
		}
		if (iVar39 == 1 || bVar40 == 1)
		{
			__LIB_35__::func_165(uParam0, uParam1, iVar36, bVar40);
		}
		if (uParam0->f_540 != iVar37)
		{
			uParam0->f_540 = iVar37;
		}
	}
	if (bVar41)
	{
		if (uParam0->f_2275 != uParam2->f_17)
		{
			if (uParam2->f_17 != 2147483647)
			{
				uParam0->f_2275 = uParam2->f_17;
			}
		}
		if (uParam0->f_2276 != iVar23)
		{
			if (iVar23 != __LIB_0__::func_162())
			{
				uParam0->f_2276 = iVar23;
			}
		}
	}
	if (uParam0->f_544 != iVar18)
	{
		if (iVar18 != -1)
		{
			uParam0->f_544 = iVar18;
		}
	}
	if (uParam0->f_2230 != iVar19)
	{
		if (iVar19 != -1)
		{
			uParam0->f_2230 = iVar19;
		}
	}
	if (bVar45)
	{
		if (bVar43)
		{
			if (!__LIB_43__::func_308(uParam0, 0))
			{
				if (uParam0->f_543 != iVar25)
				{
					uParam0->f_543 = iVar25;
				}
			}
		}
	}
	if (__LIB_41__::func_710(uParam0))
	{
		if (!__LIB_1__::func_693(uParam0->f_2228, 0, 1))
		{
			bVar50 = false;
		}
		else
		{
			iVar51 = PLAYER::GET_PLAYER_PED(uParam0->f_2228);
			if (uParam0->f_2229 != iVar51)
			{
				uParam0->f_2229 = iVar51;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2229) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2229, false))
			{
				if (__LIB_0__::func_86(uParam0->f_845))
				{
					uParam0->f_845 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2229, true) };
				}
				else
				{
					bVar50 = true;
				}
			}
		}
		if (__LIB_0__::func_86(uParam0->f_845))
		{
			bVar50 = true;
			__LIB_33__::func_717(&(uParam0->f_5), uParam0->f_2229, Global_4980736.f_78578[0 /*450*/], bVar50, 1114636288, 1103626240, 35, 256);
		}
		else
		{
			__LIB_33__::func_717(&(uParam0->f_5), uParam0->f_2229, uParam0->f_845, bVar50, 1114636288, 1103626240, 35, 256);
		}
	}
	else if (uParam0->f_5.f_5 != 0)
	{
		uParam0->f_5.f_5 = 0;
		uParam0->f_845 = { 0f, 0f, 0f };
		__LIB_27__::func_179(&(uParam0->f_5), 0, 1, 1);
	}
	if (!BitTest(uParam0->f_823, 2))
	{
		fVar52 = SYSTEM::TO_FLOAT(uParam0->f_839);
		if (__LIB_0__::func_625())
		{
			fVar52 = SYSTEM::TO_FLOAT(uParam0->f_840);
		}
		fVar17 = SYSTEM::TO_FLOAT(iVar16);
		if (bVar43)
		{
			fVar52 = (fVar52 + 1f);
		}
		if (__LIB_26__::func_680(uParam0))
		{
			fVar17 = (fVar17 + 1f);
		}
		if ((fVar17 / fVar52) >= 0.5f)
		{
			MISC::SET_BIT(&(uParam0->f_823), 2);
		}
	}
	if (!BitTest(uParam0->f_823, 3))
	{
		if (bVar45)
		{
			if (uParam0->f_838 == 0)
			{
				iVar5 = 0;
			}
			else
			{
				if (!BitTest(uParam0->f_823, 27))
				{
					if (iVar16 > 0)
					{
						MISC::SET_BIT(&(uParam0->f_823), 27);
					}
				}
				if (iVar16 < uParam0->f_838)
				{
					iVar5 = 0;
				}
			}
		}
		else
		{
			iVar5 = 0;
		}
	}
	else if (!BitTest(uParam0->f_823, 27))
	{
		MISC::SET_BIT(&(uParam0->f_823), 27);
	}
	if (!BitTest(uParam0->f_823, 14))
	{
		if (iVar1 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_823), 14);
		}
	}
	if (!BitTest(uParam0->f_823, 4))
	{
		if (iVar3 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_823), 4);
		}
	}
	if (!BitTest(uParam0->f_823, 20))
	{
		if (iVar2 == 1)
		{
			uParam0->f_556.f_4 = 1;
			MISC::SET_BIT(&(uParam0->f_823), 20);
		}
	}
	if (!BitTest(uParam0->f_824, 2))
	{
		if (iVar6 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_824), 2);
		}
	}
	if (bVar45)
	{
		if (!BitTest(uParam0->f_823, 3))
		{
			if (iVar5 == 1)
			{
				MISC::SET_BIT(&(uParam0->f_823), 3);
			}
		}
	}
	if (bVar45)
	{
		if (!BitTest(uParam0->f_824, 8))
		{
			if (iVar4 == 1)
			{
				MISC::SET_BIT(&(uParam0->f_824), 8);
			}
		}
	}
	iVar7 = (((uParam0->f_839 + iVar8) + iVar21) + iVar12);
	iVar13 = ((uParam0->f_839 + iVar8) + iVar21);
	if (bVar45)
	{
		iVar13 = (iVar13 - uParam0->f_540);
	}
	uParam2->f_8573++;
	if (uParam2->f_8573 >= 32)
	{
		uParam2->f_8573 = 0;
	}
	if (uParam0->f_840 != iVar24)
	{
		uParam0->f_840 = iVar24;
	}
	iVar53 = iVar16;
	if (uParam0->f_2279 != iVar53)
	{
		uParam0->f_2279 = iVar53;
	}
	if (uParam0->f_838 != iVar7)
	{
		uParam0->f_838 = iVar7;
	}
	if (uParam0->f_844 != iVar13)
	{
		uParam0->f_844 = iVar13;
	}
	if (uParam0->f_837 != iVar9)
	{
		uParam0->f_837 = iVar9;
	}
	if (bVar45)
	{
		if (uParam0->f_837 <= 1 && !BitTest(uParam0->f_824, 17))
		{
			MISC::SET_BIT(&(uParam0->f_824), 17);
		}
		else if (uParam0->f_837 > 1)
		{
			MISC::CLEAR_BIT(&(uParam0->f_824), 17);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_824), 17);
	}
	if (uParam0->f_842 != iVar14)
	{
		uParam0->f_842 = iVar14;
	}
	if (uParam0->f_843 != iVar15)
	{
		uParam0->f_843 = iVar15;
	}
	__LIB_35__::func_163(uParam0);
}

void func_9(var uParam0, var uParam1)//Position - 0x36CCB
{
	int iVar0;
	float fVar1;
	float fVar2;
	*uParam0 = NETWORK::GET_CLOUD_TIME_AS_INT();
	__LIB_35__::func_175(uParam0);
	STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(uParam0->f_547), &(uParam0->f_548));
	__LIB_26__::func_695(uParam0);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_586[iVar0] = 1;
		iVar0++;
	}
	if (__LIB_1__::func_202())
	{
		MISC::SET_BIT(&(uParam0->f_823), 23);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_823), 23);
	}
	uParam0->f_528 = Global_4718592.f_142645;
	uParam0->f_530 = Global_4718592.f_116976;
	uParam0->f_529 = Global_4718592.f_116975;
	uParam0->f_571 = Global_4456449.f_34;
	uParam0->f_572 = Global_4456449.f_5;
	uParam0->f_573 = Global_4456449.f_6;
	uParam0->f_2474 = Global_4718592.f_169022;
	uParam0->f_2276 = __LIB_0__::func_162();
	uParam0->f_728 = __LIB_0__::func_162();
	if (__LIB_26__::func_666(Global_4456449.f_5) || __LIB_41__::func_709(uParam0, 1))
	{
		uParam0->f_574 = 0;
	}
	else
	{
		uParam0->f_574 = 2;
	}
	if (__LIB_26__::func_694(uParam0) || __LIB_26__::func_693(uParam0))
	{
		uParam0->f_575 = 1;
	}
	else
	{
		uParam0->f_575 = 0;
	}
	if (__LIB_18__::func_690())
	{
		uParam0->f_576 = Global_4718592.f_116938;
	}
	else
	{
		uParam0->f_576 = Global_4456449.f_15;
	}
	uParam0->f_577 = Global_4456449.f_21;
	uParam0->f_578 = Global_4456449.f_14;
	uParam0->f_579 = Global_4456449.f_10;
	uParam0->f_580 = Global_4456449.f_24;
	uParam0->f_582 = Global_4456449.f_27;
	uParam0->f_583 = Global_4456449.f_23;
	uParam0->f_531 = -1;
	uParam0->f_532 = -1;
	if (!__LIB_26__::func_694(uParam0))
	{
		Global_4456449.f_18 = 0;
	}
	if (__LIB_35__::func_411(uParam0))
	{
		fVar1 = SYSTEM::TO_FLOAT(uParam0->f_546);
		fVar2 = (fVar1 / 2f);
		uParam0->f_536 = SYSTEM::ROUND(fVar2);
		if (uParam0->f_536 > uParam0->f_546)
		{
			uParam0->f_536 = uParam0->f_546;
		}
		if (__LIB_26__::func_694(uParam0))
		{
			if (uParam0->f_546 <= 2)
			{
				uParam0->f_582 = 0;
			}
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_823), 21);
		MISC::SET_BIT(&(uParam0->f_823), 22);
	}
	if (!BitTest(uParam0->f_824, 9))
	{
		if (__LIB_2__::func_264())
		{
			MISC::SET_BIT(&(uParam0->f_824), 9);
		}
	}
	if (!BitTest(uParam0->f_824, 15) && BitTest(Global_4718592.f_28, 18))
	{
		MISC::SET_BIT(&(uParam0->f_824), 15);
	}
	if (!__LIB_26__::func_666(uParam0->f_572))
	{
		if (__LIB_43__::func_775(uParam0->f_573, 0) == joaat("rcbandito") || (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_254 == joaat("rcbandito"))
		{
			uParam0->f_2472 = 1;
		}
	}
	if (__LIB_18__::func_689() && uParam0->f_2473 == -1)
	{
		uParam0->f_2473 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 5001);
	}
	__LIB_21__::func_740(&(uParam0->f_2427));
}

int func_10(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x393A5
{
	return __LIB_43__::func_776(uParam0, uParam1, iParam2, 1, iParam3, 0);
}

void func_11(var uParam0, var uParam1, var uParam2)//Position - 0x3C543
{
	if (!__LIB_43__::func_777(uParam1, uParam2, uParam0))
	{
		__LIB_26__::func_707(0);
		if ((__LIB_0__::func_864(&(Local_66.f_3)) && __LIB_2__::func_815(Local_66.f_3, 2000, 0)) && Local_66.f_2 != -1)
		{
			AUDIO::STOP_SOUND(Local_66.f_2);
			AUDIO::RELEASE_SOUND_ID(Local_66.f_2);
			Local_66.f_2 = -1;
			__LIB_0__::func_794(&(Local_66.f_3));
		}
	}
	if (BitTest(uParam0->f_10232, 3) && BitTest(uParam0->f_5514, 9))
	{
		if (__LIB_35__::func_180(uParam0->f_5441))
		{
			if (uParam0->f_10226 != 0)
			{
				uParam0->f_10226 = 0;
				__LIB_35__::func_423(uParam0->f_10232);
			}
			__LIB_41__::func_719(uParam0->f_5441, &(uParam0->f_10232));
			MISC::CLEAR_BIT(&(uParam0->f_10232), 3);
			MISC::CLEAR_BIT(&(uParam0->f_5514), 9);
		}
	}
	if ((__LIB_8__::func_355(Local_66.f_3, 2000, 0) && HUD::IS_PAUSE_MENU_ACTIVE()) && Local_66.f_2 != -1)
	{
		AUDIO::STOP_SOUND(Local_66.f_2);
		AUDIO::RELEASE_SOUND_ID(Local_66.f_2);
		Local_66.f_2 = -1;
		__LIB_0__::func_794(&(Local_66.f_3));
	}
}

void func_12(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x6FF7A
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam4))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam4))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam3);
	if (BitTest((uParam2[iParam3 /*303*/])->f_228, 22) || !__LIB_26__::func_949(uParam0))
	{
		if (((!__LIB_27__::func_100(uParam0, iVar0) && !__LIB_10__::func_365()) && !__LIB_26__::func_717(iVar0)) || ((__LIB_10__::func_365() && !uParam1->f_9082) && bParam5))
		{
			__LIB_35__::func_188(iVar0, iParam4, __LIB_18__::func_710(iVar0, bParam5), Global_1659911, Global_1659912, __LIB_26__::func_716(iVar0, bParam5), bParam5);
			__LIB_18__::func_703(iParam4, __LIB_43__::func_775(uParam0->f_573, 0));
			if (__LIB_10__::func_365())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam4))
				{
					if (__LIB_19__::func_159(PLAYER::INT_TO_PLAYERINDEX(iParam3), 0) != ENTITY::GET_ENTITY_MODEL(iParam4))
					{
						if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam4, 48) > 0)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam4, 48);
						}
						else if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam4) > 0)
						{
							VEHICLE::SET_VEHICLE_LIVERY(iParam4, (iParam3 % VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam4)));
						}
					}
				}
			}
		}
	}
}

void func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x71601
{
	int iVar0;
	float fVar1;
	if (!__LIB_0__::func_121(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (BitTest(Global_4718592.f_33, 6) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
	}
	if (BitTest(Global_4718592.f_33, 11))
	{
		VEHICLE::SET_VEHICLE_DAMAGE_SCALES(iParam0, 1f, 0f, 0f, 1065353216);
		VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(iParam0, true);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(iParam0, true);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iParam0, true);
	}
	if (BitTest(Global_4718592.f_29, 26))
	{
		VEHICLE::SET_VEHICLE_DETONATION_MODE(true);
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
	}
	PHYSICS::SET_IN_STUNT_MODE(true);
	if (!bParam1)
	{
		__LIB_43__::func_780(iParam0);
	}
	if (__LIB_22__::func_261(iVar0) != joaat("WEAPON_UNARMED") && bParam2)
	{
		WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_22__::func_261(iVar0));
		VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 0, -1);
		VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(iParam0, 1, -1);
		__LIB_2__::func_967(iParam0, 1);
	}
	if (__LIB_18__::func_711(iVar0))
	{
		fVar1 = 5f;
		VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (1f / fVar1));
		VEHICLE::SET_VEHICLE_DAMAGE_SCALES(iParam0, (1f / fVar1), 0f, 0f, 1065353216);
		VEHICLE::SET_VEHICLE_WEAPON_DAMAGE_SCALE(iParam0, (1f * fVar1));
	}
	VEHICLE::SET_VEHICLE_BOMB_AMMO(iParam0, Global_4718592.f_162582);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
	{
		NETWORK::SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(iParam0, true);
	}
	if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 42) != 0)
	{
		VEHICLE::VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(iParam0, false);
	}
}

int func_14(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xAD497
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam7);
	}
	return __LIB_43__::func_783(&Var0);
}

int func_15(int iParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0xD813F
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam1, sParam3, sParam7);
	Var0.f_4 = uParam2;
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_72 = iParam6;
	StringCopy(&(Var0.f_57), sParam8, 16);
	return __LIB_43__::func_783(&Var0);
}

int func_16(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xDA05F
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, uParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_43__::func_783(&Var0);
}

int func_17(int iParam0, bool bParam1, int iParam2)//Position - 0xDB9D7
{
	int iVar0;
	iVar0 = __LIB_43__::func_784(iParam0, bParam1);
	if (iVar0 == joaat("prop_cs_dildo_01"))
	{
		return 64;
	}
	else if (iVar0 == joaat("v_res_d_dildo_b"))
	{
		return 55;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
	{
		return 57;
	}
	else if (iVar0 == joaat("thruster"))
	{
		return 65;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return 58;
	}
	else if (((((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(iVar0)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(iVar0)) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
	{
		return 59;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar0))
	{
		return 62;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0))
	{
		return 61;
	}
	else if (__LIB_26__::func_772(iVar0))
	{
		return 63;
	}
	else
	{
		if (__LIB_26__::func_771(iParam0, bParam1))
		{
			switch (iParam2)
			{
				case 8:
					return 61;
				case 13:
					return 62;
				}
			default:
		}
		return 60;
	}
	return 56;
}

int func_18(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDC90C
{
	if ((__LIB_43__::func_775(uParam0->f_573, 0) == joaat("ruiner2") && __LIB_26__::func_769(iParam1, bParam3)) && (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)))
	{
		if (VEHICLE::GET_VEHICLE_HAS_PARACHUTE(iParam2))
		{
			if (VEHICLE::IS_VEHICLE_PARACHUTE_DEPLOYED(iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_19(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE7C32
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_18__::func_701())
	{
		return;
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	if (!__LIB_26__::func_796())
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	}
	else
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(6);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
	if (((iParam0 > 0 && iParam0 < 5000) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !__LIB_1__::func_11())
	{
		bVar0 = true;
	}
	__LIB_43__::func_801(uParam3, uParam1, uParam2, bVar0);
	if (__LIB_27__::func_153(uParam1) || (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225)
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 1;
	if (iParam0 <= 10000)
	{
		iVar3 = 6;
	}
	if (BitTest(uParam2->f_5513, 26))
	{
		iVar1 = 1000;
		iVar2 = 1;
		iVar3 = 18;
		if (BitTest(uParam2->f_5514, 7))
		{
			iVar3 = 6;
		}
		if (__LIB_0__::func_864(&(uParam2->f_9227)))
		{
			if (__LIB_0__::func_937(&(uParam2->f_9227), 1000, 0))
			{
				MISC::CLEAR_BIT(&(uParam2->f_5513), 26);
				MISC::CLEAR_BIT(&(uParam2->f_5514), 7);
				__LIB_0__::func_794(&(uParam2->f_9227));
			}
		}
		else
		{
			__LIB_0__::func_627(&(uParam2->f_9227), 0, 0);
		}
	}
	__LIB_18__::func_733(iParam0, "TIMER_TIME_RCE" /* GXT: TIME */, 0, 1, -1, 0, 3, 0, iVar3, iVar2, iVar1, 0, 0, 0, 0, 0, 0, -1);
}

int func_20(var uParam0, var uParam1, var uParam2)//Position - 0xFD631
{
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_43__::func_788(uParam0, uParam2, 15000))
		{
			if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
			{
				return 1;
			}
			if (__LIB_27__::func_124())
			{
				return 1;
			}
		}
	}
	if (__LIB_27__::func_92(uParam1, PLAYER::PLAYER_ID(), NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		if (__LIB_26__::func_850(uParam1))
		{
			if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()) || !__LIB_41__::func_720(uParam0, uParam1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_21(int* iParam0)//Position - 0x100F7F
{
	bool bVar0;
	bool bVar1;
	bVar0 = true;
	bVar1 = true;
	if (MISC::IS_PC_VERSION())
	{
		if (__LIB_0__::func_112())
		{
			bVar0 = false;
		}
	}
	if (__LIB_21__::func_760(iParam0))
	{
		if (!BitTest(*iParam0, 2))
		{
			__LIB_35__::func_425(iParam0);
			MISC::SET_BIT(iParam0, 2);
		}
		else
		{
			if (!__LIB_21__::func_759(iParam0))
			{
				MISC::SET_BIT(iParam0, 1);
			}
			if (__LIB_21__::func_758(iParam0))
			{
				if (__LIB_10__::func_260())
				{
					__LIB_43__::func_789(iParam0, bVar0, bVar1);
					__LIB_18__::func_753(iParam0, 0);
					MISC::SET_BIT(iParam0, 1);
				}
				else if (__LIB_21__::func_745())
				{
					__LIB_18__::func_753(iParam0, 0);
				}
				HUD::SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS("FM_CSC_QUIT" /* GXT: Confirm */, "FM_COR_PWAR" /* GXT: Are you sure you want to purchase all ammo for $~1~? */, 36, "", true, iParam0->f_1, 0, 0, 0, true, 0);
			}
			else if (__LIB_21__::func_757())
			{
				if (__LIB_21__::func_756(iParam0))
				{
					__LIB_18__::func_753(iParam0, 1);
				}
				else
				{
					__LIB_43__::func_789(iParam0, bVar0, bVar1);
				}
			}
		}
	}
}

void func_22(var uParam0, var uParam1, int iParam2, int iParam3, char[4] cParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11E190
{
	char* sVar0;
	int iVar1;
	if (((__LIB_7__::func_827(iParam3) || !__LIB_23__::func_698(0)) || Global_1931426) || __LIB_18__::func_774(uParam0))
	{
		return;
	}
	iVar1 = __LIB_12__::func_926(iParam3);
	if (iVar1 != 0)
	{
		sVar0 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar1);
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("mphud", false);
	if (iParam6 >= 0 && iParam6 < 16)
	{
		__LIB_19__::func_6(uParam1, iParam6, sVar0);
		__LIB_43__::func_793(uParam1, iParam2, 1, __LIB_0__::func_162(), iParam6, -1, -1, -1, -1);
		__LIB_24__::func_326(uParam1, iParam3, iParam6, iParam5);
		__LIB_23__::func_641(uParam1, iParam2, cParam4, iParam6, iParam7, 1);
		(*uParam1)[11 /*9*/] = 0.358f;
		(uParam1[11 /*9*/])->f_1 = (0.231f + (SYSTEM::TO_FLOAT(iParam6) * 0.03749976f));
		(uParam1[11 /*9*/])->f_2 = 0.022f;
		(uParam1[11 /*9*/])->f_3 = 0.042f;
		(uParam1[11 /*9*/])->f_4 = 255;
		(uParam1[11 /*9*/])->f_5 = 255;
		(uParam1[11 /*9*/])->f_6 = 255;
		(uParam1[11 /*9*/])->f_7 = 255;
		if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("mphud"))
		{
			__LIB_6__::func_24("mphud", "spectating", uParam1[11 /*9*/], 0, 0, 7, 0);
		}
	}
}

void func_23(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9, bool bParam10)//Position - 0x125E1D
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam7 - Global_1836355);
	iVar1 = (iParam8 - Global_1836355);
	if (bParam10)
	{
		if (!*uParam9)
		{
			if (iVar0 >= 0 && iVar0 <= 16)
			{
				__LIB_24__::func_207(iParam2, uParam1, __LIB_18__::func_748(iParam2), iParam3, iVar0, iParam4, uParam0->f_483);
				__LIB_43__::func_795(uParam1, iParam2, iVar0, iParam5, iParam6);
			}
			if (iVar1 >= 0 && iVar1 <= 16)
			{
				__LIB_24__::func_206(uParam0, uParam1, iVar1, uParam0->f_483);
			}
			uParam0->f_483++;
			*uParam9 = 1;
		}
	}
}

void func_24(var uParam0, var uParam1, var uParam2)//Position - 0x163321
{
	int iVar0;
	bool bVar1;
	iVar0 = (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253;
	bVar1 = __LIB_41__::func_709(uParam0, 1);
	if (__LIB_26__::func_757(iVar0))
	{
		if (__LIB_26__::func_760(uParam0))
		{
			if ((iVar0 < __LIB_26__::func_759(uParam1) || __LIB_26__::func_759(uParam1) == 0) && (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 > 1)
			{
				if (__LIB_35__::func_204(uParam2, uParam0) && !__LIB_35__::func_245(uParam0, uParam2))
				{
					__LIB_26__::func_755(uParam2, uParam1, iVar0);
					uParam1->f_5352.f_2 = -1394652000;
					if (!bVar1)
					{
						uParam1->f_3720 = 1;
					}
					uParam1->f_5352.f_2 = -1394652000;
					__LIB_26__::func_754(uParam1->f_5242);
					if (!bVar1)
					{
						__LIB_2__::func_428(38, 1, -1);
					}
					__LIB_43__::func_785(uParam0, 12, uParam1, 1);
					__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
					__LIB_2__::func_183(11, 1, -1);
				}
				else if (iVar0 < __LIB_26__::func_753(uParam1) || __LIB_26__::func_753(uParam1) == 0)
				{
					uParam1->f_3725 = iVar0;
					uParam1->f_3721 = 1;
					if (!bVar1)
					{
						__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
						if (__LIB_35__::func_204(uParam2, uParam0))
						{
							__LIB_2__::func_428(38, 1, -1);
						}
					}
					__LIB_43__::func_785(uParam0, 10, uParam1, 1);
				}
			}
			else if (iVar0 < __LIB_26__::func_753(uParam1) || __LIB_26__::func_753(uParam1) == 0)
			{
				uParam1->f_3725 = iVar0;
				uParam1->f_3721 = 1;
				if (!bVar1)
				{
					__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
					if (__LIB_35__::func_204(uParam2, uParam0))
					{
						__LIB_2__::func_428(38, 1, -1);
					}
				}
				__LIB_43__::func_785(uParam0, 10, uParam1, 1);
			}
			else if (!bVar1)
			{
				if (__LIB_35__::func_204(uParam2, uParam0))
				{
					__LIB_2__::func_428(38, 1, -1);
					__LIB_43__::func_785(uParam0, 9, uParam1, 1);
				}
			}
		}
		else if (!bVar1)
		{
			if (__LIB_35__::func_204(uParam2, uParam0))
			{
				__LIB_2__::func_428(38, 1, -1);
				__LIB_43__::func_785(uParam0, 9, uParam1, 1);
			}
		}
	}
}

void func_25(var uParam0, var uParam1, var uParam2)//Position - 0x166DFD
{
	if (uParam0->f_2230 != -1 && uParam0->f_2230 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
		if (!__LIB_41__::func_709(uParam0, 1))
		{
			if (__LIB_35__::func_204(uParam1, uParam0))
			{
				__LIB_2__::func_428(38, 1, -1);
			}
			__LIB_43__::func_785(uParam0, 9, uParam2, 1);
		}
	}
}

void func_26(int iParam0)//Position - 0x1670BA
{
	int iVar0;
	iVar0 = iParam0;
	if (__LIB_1__::func_693(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			Global_2678393.f_1504[iVar0] = __LIB_43__::func_799(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2678393[iVar0], Global_2678393.f_1504[iVar0]);
		}
	}
}

int func_27(var uParam0, var uParam1, var uParam2)//Position - 0x167B62
{
	if (__LIB_26__::func_852(uParam1) || __LIB_26__::func_835(uParam1))
	{
		return 1;
	}
	if (BitTest(uParam2->f_5511, 21) && !__LIB_0__::func_86(Global_4718592.f_646))
	{
		if ((__LIB_41__::func_781(uParam1, uParam2) || __LIB_26__::func_850(uParam1)) || __LIB_27__::func_153(uParam1))
		{
			return 1;
		}
	}
	else if (__LIB_41__::func_780(uParam0, uParam2))
	{
		if (__LIB_41__::func_779(uParam0, uParam1, uParam2))
		{
			return 1;
		}
	}
	else if (__LIB_43__::func_800(uParam2, uParam0, uParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_28(var uParam0, var uParam1, var uParam2)//Position - 0x1772AD
{
	if (BitTest(uParam2->f_5511, 23))
	{
		return 0;
	}
	if (__LIB_26__::func_977(uParam2) == 0)
	{
		return 0;
	}
	if (__LIB_26__::func_850(uParam1))
	{
		if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			__LIB_2__::func_408(0);
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			return 1;
		}
	}
	if (__LIB_35__::func_269(uParam0))
	{
		return 1;
	}
	if (__LIB_35__::func_218(uParam1, uParam2))
	{
		return 1;
	}
	if (__LIB_35__::func_159(uParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndNeutral", 0, false);
		return 1;
	}
	if (__LIB_41__::func_720(uParam0, uParam1, 0))
	{
		if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(uParam2->f_5517, 20))
			{
				__LIB_43__::func_809(uParam0, uParam1, uParam2);
				MISC::SET_BIT(&(uParam2->f_5517), 20);
				__LIB_26__::func_915(uParam2, 0);
				__LIB_26__::func_966(uParam1, 8);
			}
		}
		else
		{
			if (!BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 12))
			{
				MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 12);
			}
			return 1;
		}
	}
	if (__LIB_26__::func_852(uParam1))
	{
		return 1;
	}
	if (__LIB_43__::func_261(uParam0, uParam1, uParam2))
	{
		__LIB_26__::func_788(uParam1);
		return 1;
	}
	if (__LIB_43__::func_803(uParam0, uParam1, uParam2))
	{
		return 1;
	}
	if (__LIB_43__::func_308(uParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0, var uParam1)//Position - 0x177A37
{
	switch (uParam1->f_5342)
	{
		case 0:
			uParam1->f_5340 = MISC::GET_GAME_TIMER();
			uParam1->f_5342 = 1;
			break;
		case 1:
			uParam1->f_5341 = MISC::GET_GAME_TIMER();
			if ((uParam1->f_5341 - uParam1->f_5340) > 5000)
			{
				if (!BitTest(uParam1->f_5515, 5))
				{
					__LIB_43__::func_785(uParam0, 6, uParam1, 0);
					MISC::SET_BIT(&(uParam1->f_5515), 5);
				}
				__LIB_2__::func_69(162, -1);
				uParam1->f_5342 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_30(var uParam0, var uParam1, var uParam2)//Position - 0x179BD8
{
	if (__LIB_26__::func_670(uParam1) != 11)
	{
		if (__LIB_43__::func_804(uParam0, uParam1, uParam2) && !BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 15))
		{
			MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 15);
			uParam2->f_5329 = MISC::GET_GAME_TIMER();
			GRAPHICS::ANIMPOSTFX_PLAY("MP_race_crash", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit", "RESPAWN_ONLINE_SOUNDSET", true);
			Global_1648034.f_1132[0] = 1;
			if (__LIB_0__::func_864(&(uParam2->f_5366)))
			{
				__LIB_0__::func_794(&(uParam2->f_5366));
			}
			if (__LIB_18__::func_689())
			{
				__LIB_26__::func_890(uParam2);
			}
		}
		if (BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 15))
		{
			__LIB_1__::func_498();
			uParam2->f_5328 = MISC::GET_GAME_TIMER();
			if (((((uParam2->f_5328 - uParam2->f_5329) > 1500 || __LIB_2__::func_644()) || BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 21)) || __LIB_26__::func_949(uParam0)) || __LIB_26__::func_661(uParam0))
			{
				uParam2->f_5327 = 0;
				MISC::CLEAR_BIT(&(uParam2->f_5515), 4);
				Global_1836356 = 0;
				__LIB_26__::func_948();
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				__LIB_0__::func_794(&(uParam2->f_5390));
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(true);
				}
				MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 15);
				__LIB_26__::func_966(uParam1, 11);
			}
		}
	}
	else if (BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 15))
	{
		MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 15);
	}
}

void func_31(var uParam0, var uParam1)//Position - 0x17C044
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	sVar1 = "";
	if (!BitTest(Global_4718592.f_27, 8))
	{
		if (!BitTest(uParam1->f_5512, 31))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					bVar2 = true;
					if (__LIB_10__::func_365())
					{
						iVar0 = Global_1659902;
					}
					else
					{
						iVar0 = __LIB_43__::func_775(uParam0->f_573, 0);
					}
					if (iVar0 == joaat("blazer5"))
					{
						sVar1 = "RCE_BLAZER5" /* GXT: Press ~INPUT_VEH_HORN~ to raise and lower the Blazer Aqua's wheels. Raising the wheels in water will reduce drag and increase speed. */;
					}
					else if (iVar0 == joaat("ruiner2"))
					{
						sVar1 = "RCE_RUIN_1" /* GXT: Press ~INPUT_VEH_HORN~ to activate the jump.~n~Press ~INPUT_VEH_PARACHUTE~ to deploy the vehicle parachute.~n~ */;
					}
					else if (iVar0 == joaat("voltic2"))
					{
						if (uParam1->f_8941)
						{
							sVar1 = "SVM_VOLTIC2_HELP1" /* GXT: Press ~INPUT_VEH_HORN~ to use the rocket burst when the power bar is full. */;
						}
						else
						{
							bVar2 = false;
						}
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						__LIB_0__::func_151(sVar1, -1);
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(uParam1->f_5512), 31);
					}
				}
			}
		}
	}
}

void func_32(var uParam0, var uParam1)//Position - 0x17C15C
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = -1;
	if (__LIB_10__::func_365())
	{
		iVar2 = 11000;
	}
	if (!BitTest(uParam1->f_5512, 30))
	{
		if (BitTest(uParam1->f_5517, 4))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
				{
					iVar0 = __LIB_43__::func_775(uParam0->f_573, 0);
					if (iVar0 != joaat("ruiner2") || Global_1574492)
					{
						if (iVar0 == joaat("blazer5"))
						{
							sVar1 = "SVM_BLAZER5_GUN" /* GXT: Press ~INPUT_VEH_AIM~ to fire the machine guns. */;
						}
						else if (iVar0 == joaat("ruiner2"))
						{
							sVar1 = "SVM_RUINER2_HELP3" /* GXT: Press ~INPUT_VEH_AIM~ to use the vehicle weapons. */;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
						{
							if (__LIB_10__::func_365())
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "INFO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							}
							__LIB_0__::func_151(sVar1, iVar2);
						}
						MISC::SET_BIT(&(uParam1->f_5512), 30);
					}
				}
			}
		}
	}
}

int func_33(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x17CD83
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_26__::func_949(uParam0))
	{
		if (__LIB_26__::func_938(uParam2, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (__LIB_26__::func_661(uParam0))
			{
				iVar3 = __LIB_35__::func_191(uParam0, !__LIB_26__::func_937(uParam2, NETWORK::PARTICIPANT_ID_TO_INT()), iVar0, __LIB_43__::func_775(uParam0->f_573, 0));
			}
			else
			{
				iVar3 = __LIB_35__::func_190(__LIB_43__::func_775(uParam0->f_573, 0), uParam1->f_5441, __LIB_26__::func_694(uParam0));
			}
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) || iParam3 == 0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_34(var uParam0, var uParam1, var uParam2)//Position - 0x17EE86
{
	if (!BitTest(uParam2->f_5510, 2))
	{
		if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_43__::func_807(uParam0, uParam2);
		}
		if (!__LIB_0__::func_864(&(uParam2->f_5386)))
		{
			__LIB_0__::func_795(&(uParam2->f_5386), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam2->f_5386), 1000, 0))
		{
			uParam2->f_5317.f_1 = 0;
			__LIB_25__::func_576(&(uParam2->f_5317));
			__LIB_1__::func_330(&(uParam1->f_1), 8);
			MISC::SET_BIT(&(uParam2->f_5510), 2);
			__LIB_1__::func_310(0);
		}
	}
}

int func_35(var uParam0)//Position - 0x17FC13
{
	if (__LIB_26__::func_710(0, 0))
	{
		if (__LIB_43__::func_775(uParam0->f_573, 1) == joaat("blazer5"))
		{
			return 1;
		}
	}
	return 0;
}

int func_36(var uParam0, var uParam1)//Position - 0x18A04F
{
	int iVar0;
	if (uParam1->f_8937 == 0)
	{
		iVar0 = __LIB_43__::func_775(uParam0->f_573, 0);
		switch (iVar0)
		{
			case joaat("ruiner2"):
				uParam1->f_8937 = 2;
				break;
			case joaat("blazer5"):
				uParam1->f_8937 = 3;
				break;
			default:
				uParam1->f_8937 = 1;
				break;
			}
	}
	return uParam1->f_8937;
}

void func_37(var uParam0, var uParam1)//Position - 0x1A16BB
{
	struct<3> Var0[32];
	int iVar1;
	int iVar2;
	__LIB_26__::func_948();
	__LIB_19__::func_78(uParam1->f_5410, uParam1->f_5413, 1120403456, 1, 0, 0, 1, 1115815936, 1, 0, 0, 1, -1082130432);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		Var0[iVar1 /*3*/] = { Global_4980736.f_78578[iVar1 /*450*/] };
		iVar1++;
	}
	__LIB_26__::func_734(&Var0);
	__LIB_26__::func_746(400f, Global_4718592.f_95507[0 /*58*/]);
	if ((__LIB_26__::func_666(Global_4456449.f_5) || __LIB_26__::func_693(uParam0)) || uParam1->f_9080)
	{
		__LIB_15__::func_448(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
	}
	else
	{
		iVar2 = __LIB_43__::func_775(uParam0->f_573, 1);
		if (__LIB_26__::func_694(uParam0))
		{
			__LIB_15__::func_448(1, iVar2, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
		}
		else
		{
			__LIB_15__::func_448(1, iVar2, __LIB_26__::func_955(iVar2, uParam1->f_5441), 0, 0, 0, -1, 0, 0, 0, 0, 0);
		}
	}
	__LIB_11__::func_824(16, 1, 1, 0, 0);
}

int func_38(var uParam0, var uParam1)//Position - 0x1A1CDD
{
	if (!__LIB_26__::func_666(Global_4456449.f_5))
	{
		if (__LIB_43__::func_775(uParam0->f_573, 0) == joaat("mower") || __LIB_43__::func_775(uParam0->f_573, 0) == joaat("cyclone"))
		{
			return 0;
		}
	}
	if (__LIB_1__::func_187(uParam0->f_572))
	{
		return 0;
	}
	if (uParam0->f_572 == 13)
	{
		return 0;
	}
	if (__LIB_26__::func_928(uParam0, uParam1))
	{
		return 0;
	}
	return 1;
}

int func_39(var uParam0)//Position - 0x1A1D4E
{
	if (__LIB_26__::func_666(uParam0->f_572))
	{
		return 1;
	}
	switch (__LIB_43__::func_775(uParam0->f_573, 0))
	{
		case joaat("technical"):
		case joaat("technical2"):
		case joaat("technical3"):
			return 0;
			break;
	}
	return 1;
}

int func_40(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x1A30E9
{
	if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (bParam3)
		{
			__LIB_43__::func_809(uParam0, uParam1, uParam2);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
		__LIB_16__::func_726(1, -1, 0);
		return 1;
	}
	return 0;
}

bool func_41(var uParam0, var uParam1, var uParam2)//Position - 0x1A54A8
{
	bool bVar0;
	int iVar1;
	if (BitTest((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 14))
	{
		return 1;
	}
	if (__LIB_27__::func_153(uParam2))
	{
		return 1;
	}
	bVar0 = true;
	if (!__LIB_0__::func_448(0) || __LIB_18__::func_699())
	{
		AUDIO::LOAD_STREAM(__LIB_41__::func_820(uParam0), 0);
	}
	if ((!__LIB_26__::func_666(Global_4456449.f_5) && !__LIB_26__::func_693(uParam0)) && !__LIB_0__::func_448(0))
	{
		if (!BitTest(uParam1->f_5516, 2))
		{
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
			__LIB_10__::func_251();
			MISC::SET_BIT(&(uParam1->f_5516), 2);
		}
	}
	__LIB_26__::func_969();
	if (__LIB_26__::func_694(uParam0))
	{
		STREAMING::REQUEST_MODEL(__LIB_19__::func_96());
		STREAMING::REQUEST_MODEL(__LIB_19__::func_97());
		STREAMING::REQUEST_MODEL(__LIB_19__::func_95());
		STREAMING::REQUEST_MODEL(__LIB_19__::func_94());
		STREAMING::REQUEST_MODEL(__LIB_19__::func_205(-2));
	}
	if (__LIB_26__::func_660(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("MP_INTRO_SEQ@MCS_7_RACE_TAUNT");
		if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_INTRO_SEQ@MCS_7_RACE_TAUNT"))
		{
			bVar0 = false;
		}
		iVar1 = __LIB_26__::func_687();
		STREAMING::REQUEST_MODEL(iVar1);
		STREAMING::REQUEST_MODEL(__LIB_2__::func_910(19));
	}
	if (__LIB_26__::func_694(uParam0))
	{
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_RPG"), 31, 0);
		WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_VEHICLE_ROCKET"), 31, 0);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	}
	if ((((__LIB_35__::func_164(uParam0, 0) || __LIB_8__::func_333(Global_4718592.f_116524)) && !__LIB_0__::func_625()) && !__LIB_18__::func_689()) && !__LIB_19__::func_172())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_01", false, -1))
		{
			bVar0 = false;
		}
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_02", false, -1))
		{
			bVar0 = false;
		}
		if (!__LIB_10__::func_365() && !__LIB_1__::func_188(uParam0->f_572))
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_STUNT/STUNT_RACE_03", false, -1))
			{
				bVar0 = false;
			}
		}
	}
	if (__LIB_10__::func_365() || __LIB_1__::func_188(uParam0->f_572))
	{
		if (!__LIB_0__::func_864(&(uParam1->f_9110)))
		{
			__LIB_0__::func_627(&(uParam1->f_9110), 0, 0);
		}
		if (!__LIB_0__::func_937(&(uParam1->f_9110), 15000, 0))
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AIRRACES/AIR_RACE_01", false, -1))
			{
				bVar0 = false;
			}
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_AIRRACES/AIR_RACE_02", false, -1))
			{
				bVar0 = false;
			}
		}
	}
	if (__LIB_18__::func_689())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEIST3/Circuit_Racing", false, -1))
		{
			bVar0 = false;
		}
	}
	if (!__LIB_26__::func_666(Global_4456449.f_5))
	{
		if (__LIB_1__::func_19() > 24)
		{
			if (!__LIB_0__::func_799(__LIB_43__::func_775(uParam0->f_573, 1)))
			{
				bVar0 = false;
			}
		}
	}
	if (__LIB_1__::func_54())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPSUM2/Island_Races", false, -1))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (!BitTest((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 14))
		{
			__LIB_21__::func_932(&(uParam1->f_5317));
			MISC::SET_BIT(&((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 14);
		}
	}
	return bVar0;
}

int func_42(int iParam0, bool bParam1, int iParam2)//Position - 0x1A696D
{
	int iVar0;
	if (iParam0 < 0 || iParam0 >= __LIB_16__::func_696())
	{
		return 0;
	}
	if (bParam1)
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_39;
	}
	else
	{
		iVar0 = Global_4718592.f_95507[iParam0 /*58*/].f_38;
	}
	if (iVar0 > -1)
	{
		if (iParam2 != 0)
		{
			if (iParam2 == __LIB_43__::func_784(iParam0, bParam1))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_43(var uParam0, var uParam1)//Position - 0x1A7478
{
	if (!__LIB_18__::func_699())
	{
		return;
	}
	if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (__LIB_26__::func_666(uParam0->f_572))
	{
		return;
	}
	if (__LIB_15__::func_289(__LIB_43__::func_775(uParam0->f_573, 0)) || __LIB_43__::func_775(uParam0->f_573, 0) == joaat("dune3"))
	{
		if (!__LIB_2__::func_836(uParam1->f_5441))
		{
			VEHICLE::SET_DISABLE_TURRET_MOVEMENT(uParam1->f_5441, 0);
		}
	}
}

void func_44(var uParam0, var uParam1, var uParam2)//Position - 0x1A7611
{
	bool bVar0;
	if ((BitTest(uParam2->f_5511, 25) || __LIB_43__::func_308(uParam0, 0)) || __LIB_0__::func_625())
	{
		return;
	}
	if (__LIB_27__::func_155(BitTest(uParam2->f_5514, 19), 0))
	{
		MISC::SET_BIT(&(uParam2->f_5514), 19);
		return;
	}
	if (!__LIB_43__::func_811(uParam0, uParam1, uParam2))
	{
		if (BitTest(Global_4718592.f_168795, 0))
		{
			MISC::CLEAR_BIT(&(Global_4718592.f_168795), 0);
			if (__LIB_2__::func_19())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SMG_MP_MUSIC_STOP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_STOP");
			}
		}
		return;
	}
	bVar0 = true;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && AUDIO::IS_VEHICLE_RADIO_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO() && AUDIO::IS_PLAYER_VEH_RADIO_ENABLE()))
	{
		bVar0 = false;
	}
	if (((AUDIO::GET_PLAYER_RADIO_STATION_INDEX() > 0 || AUDIO::GET_PLAYER_RADIO_STATION_INDEX() <= 255) || !MISC::ARE_STRINGS_EQUAL(AUDIO::GET_PLAYER_RADIO_STATION_NAME(), "OFF")) && AUDIO::IS_MOBILE_PHONE_RADIO_ACTIVE())
	{
		bVar0 = false;
	}
	if ((__LIB_26__::func_670(uParam1) == 11 || __LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0)) && (Global_2667225.f_2688 != -1 && Global_2667225.f_2688 < 255))
	{
		bVar0 = false;
		MISC::CLEAR_BIT(&(Global_4718592.f_168795), 0);
	}
	if (!BitTest(Global_4718592.f_168795, 0))
	{
		if (bVar0)
		{
			AUDIO::START_AUDIO_SCENE("MP_POSITIONED_RADIO_MUTE_SCENE");
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (__LIB_2__::func_19())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("SMG_MP_INFERNO_START_MUSIC");
			}
			else if (__LIB_26__::func_981(uParam0) > -1)
			{
				__LIB_35__::func_348(__LIB_26__::func_981(uParam0), 4, uParam2, 0);
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT(__LIB_26__::func_980());
				AUDIO::TRIGGER_MUSIC_EVENT(__LIB_35__::func_347(uParam0));
			}
			MISC::SET_BIT(&(Global_4718592.f_168795), 0);
		}
	}
	__LIB_41__::func_842(uParam0, uParam1, uParam2);
}

int func_45(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1B2C59
{
	int iVar0;
	if (iParam5 && iParam4 > -1)
	{
		return __LIB_43__::func_776(uParam0, uParam1, iParam4, 0, 0, 0);
	}
	switch (iParam3)
	{
		case 15:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_773)
			{
				iVar0 = 10;
			}
			else if (iParam2 == uParam0->f_774)
			{
				iVar0 = 11;
			}
			else if (iParam2 == uParam0->f_775)
			{
				iVar0 = 12;
			}
			else if (iParam2 == uParam0->f_776)
			{
				iVar0 = 13;
			}
			else if (iParam2 == uParam0->f_777)
			{
				iVar0 = 14;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 15;
			}
			else
			{
				iVar0 = 15;
			}
			break;
		case 14:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_773)
			{
				iVar0 = 10;
			}
			else if (iParam2 == uParam0->f_774)
			{
				iVar0 = 11;
			}
			else if (iParam2 == uParam0->f_775)
			{
				iVar0 = 12;
			}
			else if (iParam2 == uParam0->f_776)
			{
				iVar0 = 13;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 14;
			}
			else
			{
				iVar0 = 14;
			}
			break;
		case 13:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_773)
			{
				iVar0 = 10;
			}
			else if (iParam2 == uParam0->f_774)
			{
				iVar0 = 11;
			}
			else if (iParam2 == uParam0->f_775)
			{
				iVar0 = 12;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 13;
			}
			else
			{
				iVar0 = 13;
			}
			break;
		case 12:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_773)
			{
				iVar0 = 10;
			}
			else if (iParam2 == uParam0->f_774)
			{
				iVar0 = 11;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 12;
			}
			else
			{
				iVar0 = 12;
			}
			break;
		case 11:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_773)
			{
				iVar0 = 10;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 11;
			}
			else
			{
				iVar0 = 11;
			}
			break;
		case 10:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_772)
			{
				iVar0 = 9;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 10;
			}
			else
			{
				iVar0 = 10;
			}
			break;
		case 9:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_771)
			{
				iVar0 = 8;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 9;
			}
			else
			{
				iVar0 = 9;
			}
			break;
		case 8:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_770)
			{
				iVar0 = 7;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 8;
			}
			else
			{
				iVar0 = 8;
			}
			break;
		case 7:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_769)
			{
				iVar0 = 6;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 7;
			}
			else
			{
				iVar0 = 7;
			}
			break;
		case 6:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_768)
			{
				iVar0 = 5;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 6;
			}
			else
			{
				iVar0 = 6;
			}
			break;
		case 5:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_767)
			{
				iVar0 = 4;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 5;
			}
			else
			{
				iVar0 = 5;
			}
			break;
		case 4:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_766)
			{
				iVar0 = 3;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = 4;
			}
			break;
		case 3:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_765)
			{
				iVar0 = 2;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 3;
			}
			break;
		case 2:
			if (iParam2 == uParam0->f_764)
			{
				iVar0 = 1;
			}
			else if (iParam2 == uParam0->f_778)
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_46(var uParam0)//Position - 0x1B4BB2
{
	if ((((!__LIB_0__::func_194(8, -1) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_10__::func_298()) && !__LIB_0__::func_983())
	{
		if (BitTest(uParam0->f_47, 0) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (uParam0->f_1.f_36 != 6)
			{
				__LIB_23__::func_719(uParam0);
				__LIB_10__::func_857(&(uParam0->f_47));
				__LIB_15__::func_182(uParam0);
			}
		}
		if (BitTest(uParam0->f_47, 0) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_10__::func_271() && __LIB_10__::func_270())
			{
				__LIB_10__::func_269(1);
			}
			if (!__LIB_10__::func_207())
			{
				__LIB_1__::func_733();
			}
			HUD::DISPLAY_AMMO_THIS_FRAME(false);
			HUD::HUD_FORCE_WEAPON_WHEEL(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			__LIB_15__::func_167(uParam0);
			__LIB_0__::func_189();
			HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0.466664f);
			if ((__LIB_5__::func_839(&(uParam0->f_1)) != 3 && __LIB_5__::func_839(&(uParam0->f_1)) != 5) && __LIB_5__::func_839(&(uParam0->f_1)) != 4)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
				__LIB_1__::func_33(0);
			}
			HUD::DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME();
			if ((!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || __LIB_10__::func_388() == 1) || __LIB_10__::func_388() == 2)
			{
				if (__LIB_10__::func_268(&(uParam0->f_47)) != 5)
				{
					if (__LIB_10__::func_268(&(uParam0->f_47)) != 3)
					{
						uParam0->f_47.f_1456 = __LIB_10__::func_268(&(uParam0->f_47));
					}
					uParam0->f_47.f_1457 = __LIB_10__::func_268(&(uParam0->f_47));
				}
				if (__LIB_10__::func_268(&(uParam0->f_47)) == 0)
				{
					if (__LIB_2__::func_4(0, &(uParam0->f_47.f_1473), 1))
					{
						if (__LIB_43__::func_290(uParam0))
						{
							if (__LIB_10__::func_267(&(uParam0->f_47)) >= uParam0->f_47.f_1460 || __LIB_10__::func_267(&(uParam0->f_47)) > uParam0->f_47.f_1461)
							{
								__LIB_10__::func_266(&(uParam0->f_47), 0);
							}
							__LIB_10__::func_265(&(uParam0->f_47), 1);
						}
					}
				}
				else if ((Global_2824886 || Global_4718592 != 0) || !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (BitTest(uParam0->f_47, 0) || (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) && (__LIB_10__::func_388() == 2 || __LIB_10__::func_388() == 1)))
					{
						if (!__LIB_13__::func_578())
						{
							__LIB_43__::func_289(uParam0, __LIB_10__::func_268(&(uParam0->f_47)));
						}
						switch (__LIB_10__::func_268(&(uParam0->f_47)))
						{
							case 1:
							case 4:
								if (__LIB_15__::func_172())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 6);
								}
								__LIB_43__::func_815(uParam0);
								break;
							case 2:
								__LIB_17__::func_839(uParam0);
								break;
							case 3:
								__LIB_17__::func_844(uParam0);
								break;
							case 5:
								__LIB_27__::func_262(uParam0);
								break;
							case 6:
								if (__LIB_15__::func_172())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 1);
								}
								if (!__LIB_13__::func_577())
								{
									__LIB_10__::func_265(&(uParam0->f_47), 1);
								}
								break;
						}
						__LIB_10__::func_245(__LIB_10__::func_268(&(uParam0->f_47)) == 6);
						if ((uParam0->f_1.f_4 || uParam0->f_1.f_3 > 2) && !BitTest(Global_2621446, 28))
						{
							__LIB_41__::func_848(uParam0, __LIB_10__::func_268(&(uParam0->f_47)));
						}
						if (BitTest(uParam0->f_47, 15))
						{
							if (BitTest(Global_1965451, 1) || !__LIB_0__::func_625())
							{
								if (__LIB_0__::func_937(&(uParam0->f_47.f_2186), 500, 0))
								{
									if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0) || !__LIB_0__::func_625())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
										GRAPHICS::ANIMPOSTFX_STOP_ALL();
										__LIB_2__::func_66(1);
									}
									MISC::CLEAR_BIT(&(uParam0->f_47), 15);
								}
							}
						}
					}
				}
				__LIB_10__::func_915(uParam0);
			}
		}
	}
	else
	{
		if (__LIB_10__::func_298())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
		if (uParam0->f_47.f_1469 > 0 && uParam0->f_47.f_1469 < 99)
		{
			__LIB_23__::func_719(uParam0);
		}
	}
}

void func_47(var uParam0, var uParam1, int iParam2)//Position - 0x2DAC8E
{
	if (__LIB_0__::func_864(&(uParam1->f_774)))
	{
		if (__LIB_43__::func_818(uParam0, uParam1) || iParam2)
		{
			if (!__LIB_0__::func_864(&(uParam1->f_776)))
			{
				__LIB_0__::func_795(&(uParam1->f_776), 0, 0);
			}
		}
	}
}

void func_48(var uParam0, var uParam1, var uParam2)//Position - 0x2DB970
{
	if (!BitTest(uParam2->f_5511, 8))
	{
		__LIB_43__::func_820(uParam0, uParam1, uParam2);
		MISC::SET_BIT(&(uParam2->f_5511), 8);
	}
}

int func_49(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2E9006
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = uParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam8);
	}
	return __LIB_43__::func_783(&Var0);
}

int func_50(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x2E9087
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = uParam1;
	Var0.f_18 = uParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return __LIB_43__::func_783(&Var0);
}

int func_51(var uParam0)//Position - 0x2EB07E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_4980736.f_202534 - 1))
	{
		if (__LIB_27__::func_20(uParam0->f_1[iVar0 /*26*/].f_1))
		{
			if (!__LIB_27__::func_19(uParam0, iVar0))
			{
				return 0;
			}
			__LIB_43__::func_823(uParam0, iVar0);
			if (!__LIB_27__::func_683(&(uParam0->f_1[iVar0 /*26*/]), iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_52(var uParam0)//Position - 0x2EE1A5
{
	switch (uParam0->f_898)
	{
		case 0:
			if (GRAPHICS::GET_TOGGLE_PAUSED_RENDERPHASES_STATUS())
			{
				if (HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
				{
					if (Global_1836369)
					{
						__LIB_35__::func_397(uParam0);
					}
				}
			}
			break;
		case 1:
			if (Global_1836369)
			{
				__LIB_35__::func_396(uParam0);
				__LIB_35__::func_395(uParam0);
				__LIB_43__::func_825(uParam0);
				__LIB_27__::func_33(uParam0);
				uParam0->f_898 = 2;
			}
			else
			{
				__LIB_35__::func_394(uParam0);
			}
			break;
		case 2:
			if (Global_1836369)
			{
				__LIB_35__::func_393(uParam0);
				__LIB_35__::func_395(uParam0);
				__LIB_27__::func_33(uParam0);
				__LIB_43__::func_824(uParam0);
				__LIB_35__::func_392(uParam0);
			}
			else
			{
				if (__LIB_0__::func_1("JOBINTOH_1" /* GXT: Press ~INPUT_FRONTEND_Y~ to view player names during the Race intro. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_35__::func_394(uParam0);
			}
			break;
		case 3:
			break;
	}
}

void func_53(var uParam0, var uParam1, var uParam2)//Position - 0x2F856A
{
	if (!BitTest(uParam2->f_5511, 18))
	{
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
		{
			if (BitTest(uParam0->f_823, 6))
			{
				__LIB_43__::func_785(uParam0, 4, uParam2, 0);
				MISC::SET_BIT(&(uParam2->f_5511), 18);
			}
		}
	}
}

int func_54(var uParam0, int iParam1, int iParam2)//Position - 0x119652
{
	__LIB_3__::func_93(1);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (__LIB_25__::func_715(uParam0))
	{
		__LIB_43__::func_319(uParam0);
		__LIB_23__::func_611();
		iParam1 = iParam1;
		switch (*uParam0)
		{
			case 0:
				MISC::SET_BIT(&Global_1574942, 3);
				__LIB_0__::func_130();
				if (!CAM::DOES_CAM_EXIST(uParam0->f_3))
				{
					uParam0->f_3 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					uParam0->f_48 = -1;
				}
				if (!CAM::DOES_CAM_EXIST(uParam0->f_4))
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				}
				if (uParam0->f_48 != -1)
				{
					if (__LIB_0__::func_937(&(uParam0->f_10), uParam0->f_48, 0))
					{
						__LIB_23__::func_609(uParam0);
						__LIB_0__::func_794(&(uParam0->f_10));
						__LIB_0__::func_795(&(uParam0->f_10), 0, 0);
						__LIB_1__::func_289(uParam0, 6);
					}
				}
				else
				{
					uParam0->f_48 = MISC::GET_RANDOM_INT_IN_RANGE(0, 500);
					__LIB_0__::func_794(&(uParam0->f_10));
					__LIB_0__::func_795(&(uParam0->f_10), 0, 0);
				}
				break;
			case 6:
				if (__LIB_0__::func_937(&(uParam0->f_10), uParam0->f_47, 0))
				{
					if (__LIB_27__::func_878(uParam0, iParam2))
					{
						if (__LIB_5__::func_839(uParam0))
						{
							__LIB_27__::func_864(uParam0, iParam2);
							uParam0->f_27 = 6000;
							if (__LIB_0__::func_448(0))
							{
								if (__LIB_1__::func_126())
								{
									uParam0->f_27 = 10000;
								}
								else
								{
									uParam0->f_27 = 8000;
								}
							}
							__LIB_1__::func_289(uParam0, 3);
						}
						else
						{
							__LIB_27__::func_877(uParam0, iParam2);
							uParam0->f_27 = 6000;
							__LIB_1__::func_289(uParam0, 3);
						}
						Global_1836369 = 1;
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::ANIMPOSTFX_STOP("MP_job_load");
						__LIB_7__::func_12(0, 0);
						__LIB_2__::func_448(0, 0, 1);
						__LIB_0__::func_794(&(uParam0->f_10));
						__LIB_0__::func_795(&(uParam0->f_10), 0, 0);
						HUD::CLEAR_HELP(true);
					}
				}
				break;
			case 3:
				uParam0->f_50 = 0;
				if (Global_2727747 == 0)
				{
					if (__LIB_0__::func_937(&(uParam0->f_10), uParam0->f_27, 0))
					{
						uParam0->f_50 = 1;
						if (!Global_2727748)
						{
							__LIB_1__::func_289(uParam0, 0);
							return 1;
						}
					}
					else
					{
						__LIB_24__::func_391(uParam0, iParam2, 0, 0, 0, 0, 0, 0, 0, __LIB_0__::func_448(1));
					}
				}
				else
				{
					__LIB_0__::func_794(&(uParam0->f_10));
				}
				break;
			case 1:
				uParam0->f_50 = 0;
				if (Global_2727747 == 0)
				{
					if (!CAM::IS_CAM_INTERPOLATING(uParam0->f_3) || __LIB_0__::func_937(&(uParam0->f_10), 7000, 0))
					{
						uParam0->f_50 = 1;
						if (!Global_2727748)
						{
							__LIB_21__::func_904(0);
							__LIB_1__::func_289(uParam0, 5);
						}
					}
				}
				else
				{
					__LIB_0__::func_794(&(uParam0->f_10));
				}
				break;
			case 5:
				__LIB_19__::func_234(uParam0, 0, 1, 1);
				return 1;
				break;
		}
	}
	else if (BitTest(uParam0->f_51.f_7, 0))
	{
		if (__LIB_43__::func_831(uParam0, 0, iParam2, 0f, 0f, 0f))
		{
			return 1;
		}
	}
	return 0;
}

void func_55(struct<3> Param0)//Position - 0x16074
{
	Global_2667225.f_45.f_302 = 1;
	Global_2667225.f_45.f_299 = { Param0 };
	Global_2667225.f_45.f_318 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
	__LIB_43__::func_832(1);
}

int func_56(int iParam0, bool bParam1)//Position - 0x6BA64
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < __LIB_43__::func_833(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x6C43E
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < __LIB_43__::func_833(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x6C6A2
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < __LIB_43__::func_833(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x6C906
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < __LIB_43__::func_833(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_60(int iParam0)//Position - 0x6CB6A
{
	int iVar0;
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < __LIB_43__::func_833(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x1AC403
{
	int iVar0;
	if (iParam0 < 363)
	{
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if (iParam0 >= __LIB_43__::func_836(iVar0) && iParam0 < __LIB_43__::func_833(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_62()//Position - 0x1D30BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar1 = (iVar2 + __LIB_43__::func_836(11));
		__LIB_1__::func_775(iVar1, &iVar0, 0);
		if (iVar0 >= 0)
		{
			if (__LIB_0__::func_371(Global_1585857[iVar0 /*142*/].f_66, 1))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_63(int iParam0, bool bParam1)//Position - 0x251F96
{
	int iVar0;
	int iVar1;
	struct<24> Var2;
	int iVar3;
	struct<24> Var4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	float fVar12;
	if (iParam0 == -1)
	{
		return 1;
	}
	if (!Global_1951261)
	{
		__LIB_43__::func_837(iParam0);
	}
	else
	{
		__LIB_35__::func_648();
		if (Global_1951261.f_522)
		{
			if (!Global_1951261.f_521)
			{
				Var2.f_10 = 8;
				Var2.f_20 = 1069547520;
				Var2 = { __LIB_28__::func_369(iParam0) };
				iVar3 = __LIB_3__::func_778((Var2.f_8 * Var2.f_9), 256);
				__LIB_35__::func_647(&(Global_1951261.f_7), &(Global_1951261.f_264), iVar3);
				Global_1951261.f_521 = 1;
				return 0;
			}
		}
		if (Global_2683918.f_1485[iParam0] == PLAYER::PLAYER_ID())
		{
			Var4.f_10 = 8;
			Var4.f_20 = 1069547520;
			Var4 = { __LIB_28__::func_369(iParam0) };
			if (!Global_1951261.f_524 && Global_1951261.f_5 == 0)
			{
				if (!Global_1951261.f_6)
				{
					if (Global_1951261.f_522)
					{
						Global_1951261.f_4 = __LIB_35__::func_646(&Var4);
					}
					else
					{
						Global_1951261.f_4 = __LIB_43__::func_335(&Var4);
					}
					if (Global_1951261.f_4 > -1)
					{
						Global_1951261.f_525 = { __LIB_41__::func_959(&Var4, Global_1951261.f_4) };
						Global_1951261.f_6 = 1;
					}
					else
					{
						__LIB_43__::func_334(&Var4);
						return 0;
					}
				}
				if (Global_1951261.f_6)
				{
					if (!__LIB_28__::func_366(Global_1951261.f_525, Var4.f_6, Var4.f_20))
					{
						Global_1951261.f_5 = __LIB_28__::func_365(Global_1951261.f_525, Var4.f_6, Var4.f_20);
						if (Global_1951261.f_5 != 0)
						{
							__LIB_27__::func_373(Global_1951261.f_4, &iVar0, &iVar1);
							MISC::SET_BIT(&(Global_1951261.f_530[iVar0]), iVar1);
						}
					}
					else
					{
						Global_1951261.f_5 = 0;
						Global_1951261.f_6 = 0;
					}
				}
			}
			if (!Global_1951261.f_524)
			{
				if (Global_1951261.f_5 != 0)
				{
					iVar9 = SHAPETEST::GET_SHAPE_TEST_RESULT(Global_1951261.f_5, &iVar5, &uVar6, &uVar7, &uVar8);
					if (iVar9 == 2)
					{
						if (iVar5 > 0)
						{
							Global_1951261.f_5 = 0;
							Global_1951261.f_6 = 0;
							return 0;
						}
						else
						{
							Global_1951261.f_524 = 1;
						}
					}
					else if (iVar9 == 0)
					{
						Global_1951261.f_5 = 0;
					}
				}
			}
			if (Global_1951261.f_524)
			{
				Var10 = { Global_1951261.f_525 };
				fVar12 = __LIB_35__::func_644(Global_1951261.f_1, &Var4, &(Global_1951261.f_525));
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1951261.f_525, &uVar11, false, false))
				{
					Var10.f_2 = uVar11;
				}
				if (__LIB_3__::func_276(Var10, fVar12, 0, 0, 0, 0, 1, bParam1, 1, 1, 0))
				{
					__LIB_35__::func_643();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_64(bool bParam0, bool bParam1, int iParam2)//Position - 0x498F74
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_371), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_372), iVar0);
			__LIB_43__::func_840(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_372), iVar0);
			}
			else
			{
				Global_2678393.f_234[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_371), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_372), iVar0);
		__LIB_43__::func_840(bParam0);
	}
}

void func_65(bool bParam0, bool bParam1, int iParam2)//Position - 0x4994B3
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703735)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[iVar0], 250);
			__LIB_43__::func_840(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			__LIB_43__::func_840(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], false);
		}
	}
}

void func_66(bool bParam0)//Position - 0x4999A0
{
	int iVar0;
	int iVar1;
	iVar1 = bParam0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar1]))
		{
			iVar0 = __LIB_43__::func_343(bParam0);
			if (!iVar0 == Global_2678393.f_1504[iVar1])
			{
				__LIB_43__::func_840(bParam0);
			}
		}
	}
}

void func_67()//Position - 0x4C803D
{
	Global_2667225.f_45.f_302 = 1;
	Global_2667225.f_45.f_299 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Global_2667225.f_45.f_318 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
	__LIB_43__::func_832(1);
}

void func_68(int iParam0)//Position - 0x5FCAF6
{
	struct<25> Var0;
	bool bVar1;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_2 = -1;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_16 = -1;
	Var0.f_2.f_19 = -1;
	Var0.f_2.f_20 = -1;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 25))
	{
		return;
	}
	if (!__LIB_29__::func_267(Var0.f_24))
	{
		return;
	}
	if (BitTest(Var0.f_23, 0))
	{
		__LIB_43__::func_847(Var0.f_2, Var0.f_23);
	}
	else
	{
		bVar1 = BitTest(Var0.f_23, 1);
		__LIB_43__::func_372(Var0.f_2, bVar1, 1);
	}
}

void func_69(int iParam0)//Position - 0x5FCEF8
{
	struct<24> Var0;
	Var0.f_2.f_1 = -1;
	Var0.f_2.f_2 = -1;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_16 = -1;
	Var0.f_2.f_19 = -1;
	Var0.f_2.f_20 = -1;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 24))
	{
		return;
	}
	__LIB_43__::func_848(Var0.f_2, Var0.f_23);
}

void func_70(int iParam0)//Position - 0x60165F
{
	struct<13> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 14))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!__LIB_43__::func_854(Var0.f_10, Var0.f_11, Var0.f_2, Var0.f_5, Var0.f_8, Var0.f_9, Var0.f_12))
			{
			}
		}
	}
}

void func_71()//Position - 0x619F4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + __LIB_43__::func_836(12));
		__LIB_1__::func_775(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1585857[iVar1 /*142*/].f_66 != 0 && __LIB_0__::func_371(Global_1585857[iVar1 /*142*/].f_66, 1))
			{
				if (Global_2815059.f_958 != iVar1)
				{
					if (__LIB_1__::func_587(Global_1585857[iVar1 /*142*/].f_66))
					{
						if (Global_1585857[iVar1 /*142*/].f_66 != 0)
						{
							iVar3 = Global_1585857[iVar1 /*142*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1944113.f_38 = iVar3;
								break;
							case 1:
								Global_1944113.f_39 = iVar3;
								break;
							case 2:
								Global_1944113.f_40 = iVar3;
								break;
							case 3:
								Global_1944113.f_41 = iVar3;
								break;
							case 4:
								Global_1944113.f_42 = iVar3;
								break;
							case 5:
								Global_1944113.f_43 = iVar3;
								break;
							case 6:
								Global_1944113.f_44 = iVar3;
								break;
							case 7:
								Global_1944113.f_45 = iVar3;
								break;
							case 8:
								Global_1944113.f_46 = iVar3;
								break;
							case 9:
								Global_1944113.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_72(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x45485
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_43__::func_855(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == joaat("XPCATEGORY_COMPLETED_SHOWER") || iParam4 == joaat("XPCATEGORY_COMPLETED_ROLLERCOASTER"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				__LIB_2__::func_93(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		__LIB_2__::func_775(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_73(struct<3> Param0)//Position - 0x1F2838
{
	Global_2667225.f_45.f_302 = 1;
	Global_2667225.f_45.f_299 = { Param0 };
	Global_2667225.f_45.f_318 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME_ACCURATE(), -9999);
	__LIB_43__::func_868(1);
}

int func_74(var uParam0, var uParam1)//Position - 0x101607
{
	int iVar0;
	struct<101> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 1;
	}
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam0, &iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (__LIB_43__::func_871(uParam1, iVar0, 10f, 10f, 15f, ENTITY::GET_ENTITY_HEADING(iVar0), 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
				{
					Var1.f_9 = 49;
					Var1.f_59 = 2;
					Var1.f_78 = -1;
					Var1.f_79 = -1;
					Var1.f_96 = -1;
					Var1.f_97 = 1;
					Var1.f_99 = 132;
					Var1.f_100 = -1;
					__LIB_6__::func_29(iVar0, &Var1);
					__LIB_43__::func_417(*uParam1, &Var1, 1, 1, 0);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_75(var uParam0, var uParam1, var uParam2)//Position - 0x2D6120
{
	bool bVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	float fVar5;
	char* sVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bVar0 = false;
	if (!BitTest(uParam0->f_745, 4) && !__LIB_0__::func_864(&(uParam0->f_1511)))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_121(iVar1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_USING(iVar1);
		}
	}
	if (!BitTest(uParam2->f_19, 5))
	{
		__LIB_43__::func_883(uParam0, uParam1, uParam2, iVar1, iVar2);
		MISC::SET_BIT(&(uParam2->f_19), 5);
	}
	uParam2->f_6791 = iVar2;
	__LIB_31__::func_815(uParam0);
	if (uParam0->f_1505 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		uParam2->f_6777 = (uParam2->f_6777 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
		Global_1944345.f_36 = uParam2->f_6777;
		sVar3 = "PTB_TGD_PTB";
		if (!__LIB_2__::func_704(sVar3, __LIB_23__::func_961(uParam1)) && !__LIB_23__::func_752(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			__LIB_3__::func_219(sVar3, __LIB_23__::func_961(uParam1), 0, 1);
			uParam2->f_6776 = -1;
		}
		if (!BitTest(uParam2->f_19, 15))
		{
			__LIB_43__::func_437(uParam0, uParam2, iVar1, iVar2);
		}
		if (!bVar0)
		{
			if (__LIB_0__::func_864(&(uParam0->f_1511)))
			{
				if ((__LIB_31__::func_737(uParam0) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && !BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_18, 12))
				{
					ENTITY::SET_ENTITY_HEALTH(iVar1, 0, iVar1);
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iVar1, true), 6, 1f, true, false, 1f, true);
					if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
					{
						NETWORK::NETWORK_EXPLODE_VEHICLE(iVar2, false, false, -1);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
					}
					__LIB_24__::func_291();
					(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_26 = uParam2->f_6777;
					if (!__LIB_18__::func_921())
					{
						__LIB_25__::func_722(2, 2, 0, 0, 0, 1, 1);
					}
					Global_1836378 = 1;
					MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_18), 12);
				}
				else
				{
					Global_1836378 = 0;
				}
			}
		}
		if (!__LIB_0__::func_864(&Global_1888196))
		{
			__LIB_0__::func_627(&Global_1888196, 0, 0);
		}
		if ((!BitTest(Global_4718592.f_31, 20) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && __LIB_0__::func_864(&(uParam0->f_1511)))
		{
			if (uParam2->f_6775 == -1)
			{
				uParam2->f_6775 = AUDIO::GET_SOUND_ID();
				if (uParam2->f_6775 > -1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_6775, "Bomb_Countdown", "DLC_AW_PTB_Sounds", true);
				}
			}
			else
			{
				if (AUDIO::HAS_SOUND_FINISHED(uParam2->f_6775))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_6775, "Bomb_Countdown", "DLC_AW_PTB_Sounds", true);
				}
				if (__LIB_1__::func_724(&(uParam0->f_1511), 0, 0) > 0)
				{
					iVar4 = __LIB_23__::func_868(__LIB_23__::func_960(uParam0)) * 1000;
					fVar5 = (SYSTEM::TO_FLOAT(__LIB_1__::func_724(&(uParam0->f_1511), 0, 0)) / SYSTEM::TO_FLOAT(iVar4));
					AUDIO::SET_VARIABLE_ON_SOUND(uParam2->f_6775, "Ctrl", fVar5);
				}
			}
		}
		else
		{
			__LIB_23__::func_954(&(uParam2->f_6775));
		}
	}
	else
	{
		if (!BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_18, 11))
		{
			if ((uParam0->f_1505 > -1 && uParam2->f_6776 != uParam0->f_1505) && !__LIB_23__::func_752(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if ((uParam1[uParam0->f_1505 /*74*/])->f_19 == (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_19 && __LIB_18__::func_921())
				{
					if (!__LIB_22__::func_289("PTB_HLPPLYR", PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1505)))
					{
						sVar6 = "PTB_HLPPLYR_0";
						if ((uParam1[uParam0->f_1505 /*74*/])->f_19 == 1)
						{
							sVar6 = "PTB_HLPPLYR_1";
						}
						__LIB_24__::func_382(sVar6, PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1505), __LIB_23__::func_959(uParam1), 0);
					}
				}
				else if (!__LIB_22__::func_289("PTB_AVDPLYR", PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1505)))
				{
					__LIB_24__::func_382("PTB_AVDPLYR", PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1505), __LIB_23__::func_958(uParam1), 0);
				}
				uParam2->f_6776 = uParam0->f_1505;
			}
		}
		else if ((__LIB_2__::func_755("PTB_HLPPLYR") || __LIB_2__::func_755("PTB_AVDPLYR")) || __LIB_2__::func_755("I_AM_TAGGED"))
		{
			__LIB_3__::func_0();
		}
		if (__LIB_0__::func_864(&Global_1888196))
		{
			__LIB_0__::func_794(&Global_1888196);
		}
		if (BitTest(uParam2->f_19, 15))
		{
			__LIB_31__::func_736(uParam2, uParam1, iVar1, iVar2, 0);
		}
		if (__LIB_0__::func_121(iVar2))
		{
		}
		__LIB_23__::func_954(&(uParam2->f_6775));
	}
	__LIB_34__::func_790(uParam0, uParam1, bVar0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true) || __LIB_23__::func_752(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		__LIB_3__::func_0();
	}
	Global_1836379 = __LIB_31__::func_813(uParam0);
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		iVar8 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
		{
			iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
			iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
			iVar11 = HUD::GET_BLIP_FROM_ENTITY(iVar10);
			if (uParam0->f_1505 == NETWORK::PARTICIPANT_ID_TO_INT() && iVar10 != iVar1)
			{
				if (__LIB_31__::func_903(iVar7, uParam0, uParam1))
				{
					__LIB_36__::func_329(iVar7, iVar2, uParam2);
				}
			}
			if (iVar11 != 0)
			{
				if (uParam2->f_6778 == -1 && iVar10 != iVar1)
				{
					uParam2->f_6778 = HUD::GET_BLIP_SPRITE(iVar11);
				}
				if ((uParam0->f_1505 == iVar7 && uParam0->f_1505 != NETWORK::PARTICIPANT_ID_TO_INT()) && HUD::GET_BLIP_SPRITE(iVar11) != 486)
				{
					HUD::SET_BLIP_SPRITE(iVar11, 486);
					if (__LIB_18__::func_921())
					{
						if ((uParam1[iVar7 /*74*/])->f_19 == 0)
						{
							HUD::SET_BLIP_COLOUR(iVar11, 51);
						}
						else
						{
							HUD::SET_BLIP_COLOUR(iVar11, 50);
						}
					}
					else
					{
						HUD::SET_BLIP_COLOUR(iVar11, 1);
					}
					HUD::SET_BLIP_NAME_TO_PLAYER_NAME(iVar11, iVar9);
					HUD::SET_BLIP_SCALE(iVar11, 1.5f);
					HUD::SHOW_HEADING_INDICATOR_ON_BLIP(iVar11, false);
					HUD::SET_BLIP_PRIORITY(iVar11, 12);
				}
				if (uParam0->f_1505 != iVar7)
				{
					if (HUD::GET_BLIP_SPRITE(iVar11) == 486)
					{
						HUD::SET_BLIP_SPRITE(iVar11, uParam2->f_6778);
						HUD::SET_BLIP_SCALE(iVar11, 1f);
						if (__LIB_18__::func_921())
						{
							if ((uParam1[iVar7 /*74*/])->f_19 == 0)
							{
								HUD::SET_BLIP_COLOUR(iVar11, 51);
							}
							else
							{
								HUD::SET_BLIP_COLOUR(iVar11, 50);
							}
						}
						else
						{
							HUD::SET_BLIP_COLOUR(iVar11, 1);
						}
						HUD::SHOW_HEADING_INDICATOR_ON_BLIP(iVar11, true);
						HUD::SET_BLIP_PRIORITY(iVar11, 10);
					}
				}
				HUD::SHOW_HEIGHT_ON_BLIP(iVar11, true);
				HUD::SET_BLIP_SHORT_HEIGHT_THRESHOLD(iVar11, 1);
			}
		}
		iVar7++;
	}
}

void func_76(var uParam0, var uParam1, bool bParam2)//Position - 0x2D76AB
{
	__LIB_43__::func_884(uParam0, uParam1, 1, bParam2);
}

void func_77(var uParam0, var uParam1, bool bParam2)//Position - 0x2DB131
{
	if (uParam1->f_128 != uParam0->f_5)
	{
		if (!BitTest(uParam1->f_129, 0))
		{
			MISC::SET_BIT(&(uParam1->f_129), 0);
		}
		__LIB_43__::func_884(uParam0, uParam1, 0, bParam2);
		uParam1->f_128 = uParam0->f_5;
	}
	else if (BitTest(uParam1->f_129, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_129), 0);
	}
}

void func_78(int* iParam0, int iParam1)//Position - 0x2E2641
{
	int iVar0;
	if (iParam1 == -1)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (BitTest(Global_4718592.f_180134[iParam1 /*256*/], 1))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 457, true);
		PED::SET_PED_RESET_FLAG(iVar0, 187, true);
	}
	__LIB_31__::func_818(iParam1);
	__LIB_24__::func_178(iParam1);
	if (__LIB_0__::func_864(&(iParam0->f_87)))
	{
		__LIB_31__::func_866(iParam0);
	}
	__LIB_43__::func_885(iParam0);
}

int func_79(int iParam0)//Position - 0x8E520
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		if (!__LIB_43__::func_891(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam0), PED::GET_VEHICLE_PED_IS_IN(*iParam0, true)))
		{
			return 4;
		}
		else if (PED::IS_PED_IN_ANY_BOAT(*iParam0))
		{
			return 2;
		}
		else if (PED::IS_PED_IN_ANY_HELI(*iParam0))
		{
			return 3;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			return 1;
		}
		return 0;
	}
	return 4;
}

void func_80(bool bParam0, bool bParam1, bool bParam2)//Position - 0x367C0
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
		__LIB_43__::func_893(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	__LIB_2__::func_25(0);
	__LIB_1__::func_913();
}

void func_81(var uParam0)//Position - 0x489A5
{
	int iVar0;
	float fVar1;
	if (uParam0->f_8 < __LIB_36__::func_679(uParam0, 1))
	{
		if (!__LIB_0__::func_864(&(uParam0->f_4)))
		{
			if (__LIB_43__::func_896(uParam0, 0))
			{
				__LIB_0__::func_795(&(uParam0->f_4), 0, 0);
			}
		}
		else if (__LIB_0__::func_937(&(uParam0->f_4), uParam0->f_7, 0))
		{
			__LIB_43__::func_894(uParam0);
		}
		if (uParam0->f_20 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_20);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_20);
			uParam0->f_20 = -1;
		}
		if (uParam0->f_18 == -1)
		{
			uParam0->f_18 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_18, "Count_Start", __LIB_42__::func_305(uParam0), __LIB_36__::func_686(), false, 25);
		}
		if (uParam0->f_19 == -1)
		{
			uParam0->f_19 = AUDIO::GET_SOUND_ID();
			iVar0 = (uParam0->f_7 - __LIB_1__::func_724(&(uParam0->f_4), 0, 0));
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_19, "Countdown_Loop", __LIB_42__::func_305(uParam0), __LIB_36__::func_686(), false, 25);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_19, "Time", SYSTEM::TO_FLOAT((iVar0 / 1000)));
		}
		else
		{
			fVar1 = __LIB_36__::func_680(uParam0);
			AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_19, "Ctrl", fVar1);
		}
	}
	else
	{
		if (uParam0->f_20 == -1)
		{
			uParam0->f_20 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_20, "Count_Stop", __LIB_42__::func_305(uParam0), __LIB_36__::func_686(), false, 25);
		}
		if (uParam0->f_18 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_18);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_18);
			uParam0->f_18 = -1;
		}
		if (uParam0->f_19 != -1)
		{
			AUDIO::STOP_SOUND(uParam0->f_19);
			AUDIO::RELEASE_SOUND_ID(uParam0->f_19);
			uParam0->f_19 = -1;
		}
		if (__LIB_0__::func_864(&(uParam0->f_4)))
		{
			__LIB_0__::func_794(&(uParam0->f_4));
		}
	}
}

void func_82(var uParam0)//Position - 0x48C92
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_43__::func_896(uParam0, 0))
	{
		if (!__LIB_22__::func_731(uParam0))
		{
			iVar0 = (uParam0->f_6 - __LIB_1__::func_724(&(uParam0->f_2), 0, 0));
			if (uParam0->f_15 == -1)
			{
				uParam0->f_15 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_15, "Arming_Countdown", __LIB_42__::func_305(uParam0), __LIB_36__::func_686(), false, 25);
				AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_15, "Time", SYSTEM::TO_FLOAT((iVar0 / 1000)));
			}
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			if (iVar0 >= 0 && iVar0 < uParam0->f_6)
			{
				__LIB_1__::func_350(iVar0, "IE_VEL_BOMB" /* GXT: BOMB ACTIVATION */, 0, 0, -1, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
		else
		{
			if (uParam0->f_17 == 0)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bomb_Armed", __LIB_42__::func_305(uParam0), __LIB_36__::func_686(), false, 25);
				uParam0->f_17 = 1;
			}
			if (uParam0->f_15 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(uParam0->f_15);
				uParam0->f_15 = -1;
			}
			if (__LIB_0__::func_864(&(uParam0->f_4)))
			{
				__LIB_7__::func_603(__LIB_1__::func_724(&(uParam0->f_4), 0, 0), uParam0->f_7, "IE_VEL_EXPL" /* GXT: DETONATION */, 6, -1, 5, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
			}
		}
		iVar1 = SYSTEM::CEIL((IntToFloat(uParam0->f_11) * 1.6f));
		iVar2 = 6;
		iVar3 = 6;
		if (uParam0->f_8 > __LIB_36__::func_679(uParam0, 1))
		{
			iVar3 = 18;
		}
		__LIB_7__::func_603(uParam0->f_8, iVar1, "IE_VEL_SPEED" /* GXT: SPEED */, iVar3, -1, 4, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, iVar2, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
}

void func_83(var uParam0, var uParam1, var uParam2)//Position - 0x5F1C
{
	if (__LIB_36__::func_736(uParam1, 1048576) || __LIB_0__::func_404(uParam1) == 5)
	{
		return;
	}
	switch (__LIB_1__::func_44(uParam1))
	{
		case 0:
		case 1:
		case 3:
		case 2:
			__LIB_43__::func_898(uParam0, uParam1, uParam2);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			__LIB_43__::func_898(uParam0, uParam1, uParam2);
			break;
	}
}

void func_84(int iParam0, var uParam1, var uParam2, int iParam3, struct<4> Param4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, float fParam13, int iParam14, int iParam15)//Position - 0x144B1
{
	char* sVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (iParam8 == 194)
	{
		iParam8 = 12;
	}
	if (iParam3 >= __LIB_1__::func_981() && iParam3 < __LIB_1__::func_980())
	{
		iParam3 = (iParam3 % 16);
		if (__LIB_2__::func_8(iParam0))
		{
			__LIB_43__::func_899(iParam0, uParam1, uParam2, iParam3, Param4, sParam5, iParam6, iParam7, iParam8, iParam9, fParam13, iParam14, iParam15);
		}
		else
		{
			sVar0 = "SET_DATA_SLOT";
			if (Global_1836580 == 1)
			{
				sVar0 = "UPDATE_SLOT";
			}
			bVar1 = iParam0 == 20;
			bVar2 = iParam0 == 21;
			bVar3 = __LIB_18__::func_748(iParam0);
			bVar4 = __LIB_18__::func_747(iParam0);
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar0))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				if (BitTest(uParam2->f_33, 8))
				{
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				__LIB_0__::func_700(&(uParam2->f_1));
				if (BitTest(uParam2->f_33, 1))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(28);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam8);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_115);
				if (BitTest(uParam2->f_33, 8))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(116);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam9 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				__LIB_23__::func_678(iParam0, uParam2, iParam3, iParam7, sParam5, sParam11, bParam12, iParam10);
				if (bVar1 || bVar2)
				{
					if (!BitTest(Global_4718592.f_27, 15))
					{
						__LIB_0__::func_700(&Param4);
					}
					else
					{
						__LIB_0__::func_700("");
					}
				}
				else if (!bVar3)
				{
					__LIB_0__::func_610("");
				}
				if (!bVar3 && !bVar4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL((bVar1 || bVar2));
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					if (iParam9 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
					{
						__LIB_0__::func_700("");
						__LIB_0__::func_700("");
					}
					else
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam5);
					}
					if (bVar1 || bVar2)
					{
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
					}
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

void func_85(var uParam0, int* iParam1, float fParam2, struct<3> Param3, bool bParam4, int iParam5)//Position - 0x86A2A
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	Var2 = { __LIB_7__::func_85(uParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(__LIB_9__::func_550(uParam0), true) };
	Var5 = { 6f, 0f, 3.5f };
	Var6 = { 0f, 1.5f, 0f };
	fVar9 = (1f + (MISC::ABSF((MISC::ABSF(iParam1->f_568) - 1f)) * 25f));
	Var6 = { Vector(0f, 1.5f, 0f) * Vector(fVar9, fVar9, fVar9) };
	if (!__LIB_36__::func_768(uParam0))
	{
		if (bParam4)
		{
			__LIB_43__::func_901(uParam0, iParam1, &(iParam1->f_538), fParam2);
		}
		else
		{
			Var2 = { GRAPHICS::GOLF_TRAIL_GET_VISUAL_CONTROL_POINT((iParam1->f_124.f_26 - 1)) };
			if ((1.85f * __LIB_36__::func_915(SYSTEM::VDIST2(__LIB_7__::func_147(uParam0), Var2))) < 2500f)
			{
				Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fParam2, Var5 + Var6) };
				Var1 = { 0f, 0f, 0.75f };
			}
			else
			{
				fVar4 = ((1.85f * __LIB_36__::func_915(SYSTEM::VDIST2(__LIB_7__::func_147(uParam0), Var2))) / 2500f);
				if (fVar4 < 3f)
				{
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fParam2, Var5 * Vector(fVar4, fVar4, fVar4) + Var6) };
					Var1 = { Vector(0.75f, 0f, 0f) * Vector(fVar4, fVar4, fVar4) };
				}
				else
				{
					Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fParam2, Var5 * Vector(3f, 3f, 3f) + Var6) };
					Var1 = { Vector(0.75f, 0f, 0f) * Vector(3f, 3f, 3f) };
				}
			}
		}
	}
	else
	{
		fVar4 = (SYSTEM::VDIST2(Var2, Var3) / __LIB_36__::func_933(25f));
		if (fVar4 < 1f)
		{
			Var5.f_0 = (Var5.f_0 - ((1f - fVar4) * 6f));
		}
		if (SYSTEM::VDIST2(Var2, Param3) < (0.15f * 0.15f))
		{
			Var2.f_2 = (Param3.f_2 + 0.0875f);
		}
		Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fParam2, Var5) };
		Var1 = { 0f, 0f, 0.75f };
	}
	if (!bParam4 || __LIB_36__::func_768(uParam0))
	{
		if (!CAM::DOES_CAM_EXIST(iParam1->f_537))
		{
			iParam1->f_537 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, 0f, 0f, 0f, 60f, true, 2);
			CAM::SET_CAM_COORD(iParam1->f_537, Var0);
			CAM::POINT_CAM_AT_COORD(iParam1->f_537, Var2 + Var1);
		}
		else if (__LIB_36__::func_768(uParam0) || iParam5)
		{
			CAM::SET_CAM_COORD(iParam1->f_537, Var0);
			CAM::POINT_CAM_AT_COORD(iParam1->f_537, Var2 + Var1);
			CAM::SET_CAM_ACTIVE(iParam1->f_537, true);
		}
		else
		{
			Var7 = { Vector(0.3f, 0.3f, 0.3f) * Var0 - CAM::GET_CAM_COORD(iParam1->f_537) };
			if (SYSTEM::VMAG2(Var7) < 1000000f)
			{
				CAM::STOP_CAM_POINTING(iParam1->f_537);
				CAM::SET_CAM_COORD(iParam1->f_537, CAM::GET_CAM_COORD(iParam1->f_537) + Var7);
				Var8 = { CAM::GET_CAM_ROT(iParam1->f_537, 2) };
				Var7 = { Var2 + Var1 - Var0 };
				fVar10 = Var7.f_2;
				Var7.f_2 = 0f;
				fVar11 = SYSTEM::VMAG(Var7);
				Var7 = { MISC::ATAN((fVar10 / fVar11)), 0f, __LIB_0__::func_932(Var0, Var2 + Var1) };
				Var7 = { Var7 - CAM::GET_CAM_ROT(iParam1->f_537, 2) };
				Var7.f_2 = __LIB_1__::func_9(Var7.f_2, -180f, 180f);
				Var7 = { Var7 * Vector(0.3f, 0.3f, 0.3f) };
				CAM::SET_CAM_ROT(iParam1->f_537, Var8 + Var7, 2);
			}
		}
		CAM::SET_CAM_ACTIVE(iParam1->f_537, true);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iParam1->f_535))
	{
		CAM::DESTROY_CAM(iParam1->f_535, false);
	}
}

void func_86(var uParam0)//Position - 0x25C6
{
	if (BitTest(uParam0->f_449, 1))
	{
		__LIB_43__::func_903(uParam0);
	}
}

void func_87(var uParam0)//Position - 0x25A0
{
	if (BitTest(uParam0->f_449, 1))
	{
		__LIB_43__::func_904(uParam0);
	}
}

int func_88(int iParam0)//Position - 0x1D172
{
	if (((__LIB_35__::func_693(iParam0) && __LIB_37__::func_366(iParam0)) && __LIB_37__::func_365(iParam0)) && __LIB_43__::func_905(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_89(bool bParam0, bool bParam1, int iParam2)//Position - 0x35D4
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	if (!__LIB_0__::func_438())
	{
		return;
	}
	iVar2 = 1;
	if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			STATS::START_BEING_BOSS(iVar2);
			__LIB_42__::func_489(0);
			__LIB_37__::func_551(0);
			__LIB_1__::func_967(21);
			__LIB_1__::func_967(22);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_466 = iVar2;
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 = PLAYER::PLAYER_ID();
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 = iParam2;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_465 = iParam2;
		STATS::GET_BOSS_GOON_UUID(__LIB_0__::func_5(), &uVar3, &uVar4);
		__LIB_4__::func_865(uVar3, uVar4);
		sVar5 = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		__LIB_4__::func_864(Var6);
		__LIB_9__::func_763();
		if (__LIB_0__::func_369(11392, -1, 0) <= 0)
		{
			iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			iVar1 = (__LIB_0__::func_369(11392, -1, 0) - 43200);
		}
		__LIB_37__::func_554(iVar1);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 = -1;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_25 = -1;
		Global_2815059.f_5195.f_223 = -1;
		__LIB_41__::func_268();
		__LIB_2__::func_822(12, 0, 1);
		if (bParam0)
		{
			__LIB_1__::func_928(0);
		}
		if (Global_2815059.f_5195.f_259 != __LIB_0__::func_162())
		{
			Global_2815059.f_5195.f_259 = __LIB_0__::func_162();
		}
		if (BitTest(Global_2815059.f_1801, 15))
		{
			MISC::CLEAR_BIT(&(Global_2815059.f_1801), 15);
		}
		if (__LIB_4__::func_862(15))
		{
			__LIB_4__::func_861(15);
		}
		if (!__LIB_4__::func_860() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			__LIB_4__::func_859();
			__LIB_4__::func_858(2);
		}
		__LIB_0__::func_413(11432, 2, -1, 1, 0);
		__LIB_1__::func_967(31);
		__LIB_43__::func_906();
		__LIB_43__::func_538();
		__LIB_43__::func_537();
		__LIB_4__::func_855();
		if (iParam2 != 1)
		{
			if (!__LIB_4__::func_854(82, 3))
			{
				bVar7 = false;
				iVar8 = __LIB_0__::func_369(11389, -1, 0);
				if (!BitTest(iVar8, 11))
				{
					MISC::SET_BIT(&iVar8, 11);
					__LIB_0__::func_413(11389, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				__LIB_0__::func_712(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			STATS::PLAYSTATS_CHANGE_MC_ROLE(__LIB_2__::func_477(__LIB_0__::func_797()), __LIB_2__::func_552(__LIB_0__::func_797()), __LIB_2__::func_476(), __LIB_2__::func_475(), Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429, 4, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_467);
		}
	}
}

void func_90(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF4FC
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
		__LIB_43__::func_908(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_91(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x9D8BB
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(&uParam0);
	iVar0 = 0;
	while (iVar0 < Global_1573885)
	{
		if (Global_2621865[iVar0 /*26*/].f_25 == iVar1)
		{
			__LIB_43__::func_909(iVar0, bParam6);
			return;
		}
		iVar0++;
	}
}

void func_92(var uParam0)//Position - 0x2CE
{
	char* sVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	__LIB_38__::func_708(uParam0);
	__LIB_38__::func_707(uParam0);
	switch (uParam0->f_141.f_4)
	{
		case 0:
			__LIB_2__::func_487(&(uParam0->f_141), 11);
			__LIB_38__::func_698(uParam0, 1);
			break;
		case 1:
			Global_1946234 = 0;
			if (__LIB_38__::func_697(uParam0))
			{
				uParam0->f_141.f_6 = MISC::GET_GAME_TIMER();
				__LIB_38__::func_698(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_13__::func_598(PLAYER::PLAYER_PED_ID(), uParam0[uParam0->f_141.f_2 /*14*/]) && __LIB_15__::func_800(PLAYER::PLAYER_PED_ID(), (uParam0[uParam0->f_141.f_2 /*14*/])->f_8.f_3, (*uParam0)[uParam0->f_141.f_2 /*14*/]))
			{
				if ((__LIB_38__::func_706(uParam0) || __LIB_42__::func_623(uParam0)) || !__LIB_38__::func_696(uParam0))
				{
					__LIB_38__::func_709(uParam0, 1);
					__LIB_38__::func_698(uParam0, 1);
				}
				else
				{
					Global_1946234 = 1;
					if (uParam0->f_141.f_5 == -1)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_141.f_6) > 150)
						{
							__LIB_5__::func_569(&(uParam0->f_141.f_5), 4, "MPJAC_SIT" /* GXT: Press ~INPUT_CONTEXT~ to sit down. */, 0, 0, 0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						__LIB_3__::func_122(&(uParam0->f_141.f_5));
						__LIB_42__::func_622(uParam0);
						__LIB_38__::func_698(uParam0, 3);
					}
				}
			}
			else
			{
				__LIB_38__::func_709(uParam0, 1);
				__LIB_38__::func_698(uParam0, 1);
			}
			break;
		case 3:
			__LIB_38__::func_703(uParam0, &sVar0);
			STREAMING::REQUEST_ANIM_DICT(&sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				__LIB_38__::func_698(uParam0, 4);
			}
			break;
		case 4:
			__LIB_38__::func_703(uParam0, &sVar0);
			__LIB_38__::func_702(uParam0, &sVar1);
			Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&sVar0, &sVar1, __LIB_38__::func_695(uParam0), __LIB_38__::func_701(uParam0), 0f, 2) };
			Var3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, __LIB_38__::func_695(uParam0), __LIB_38__::func_701(uParam0), 0f, 2) };
			fVar4 = Var3.f_2;
			fVar5 = 0.05f;
			if (uParam0->f_141.f_8 == 1)
			{
				fVar5 = 0.15f;
			}
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var2, 1f, 500, fVar4, fVar5);
			__LIB_5__::func_848(uParam0->f_141.f_2);
			__LIB_38__::func_698(uParam0, 5);
			break;
		case 5:
			__LIB_38__::func_711(uParam0);
			__LIB_38__::func_703(uParam0, &sVar0);
			__LIB_38__::func_702(uParam0, &sVar1);
			iVar6 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
			Var7 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&sVar0, &sVar1, __LIB_38__::func_695(uParam0), __LIB_38__::func_701(uParam0), 0f, 2) };
			fVar8 = Var7.f_2;
			if ((iVar6 != 1 && iVar6 != 0) || __LIB_3__::func_526(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar8, 5f))
			{
				uParam0->f_141.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(__LIB_38__::func_695(uParam0), __LIB_38__::func_701(uParam0), 2, true, false, 1f, 0f, 1.12f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_141.f_1, &sVar0, &sVar1, 2f, -1000f, 13, 16, 1000f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_141.f_1);
				uParam0->f_141.f_8.f_4 = MISC::GET_GAME_TIMER();
				__LIB_2__::func_486(&(uParam0->f_141), 8);
				__LIB_38__::func_698(uParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_624(&(uParam0->f_141), 10) || __LIB_6__::func_518())
			{
				__LIB_2__::func_487(&(uParam0->f_141), 10);
				__LIB_42__::func_621(uParam0);
			}
			__LIB_38__::func_711(uParam0);
			__LIB_43__::func_911(uParam0);
			iVar9 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_141.f_1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar9))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar9) >= 1f)
				{
					__LIB_42__::func_620(uParam0, 0);
					__LIB_38__::func_703(uParam0, &sVar0);
					__LIB_38__::func_702(uParam0, &sVar1);
					uParam0->f_141.f_1 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(__LIB_38__::func_695(uParam0), __LIB_38__::func_701(uParam0), 2, true, false, 1f, 0f, 1.12f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_141.f_1, &sVar0, &sVar1, 4f, -1.5f, 13, 16, 1000f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_141.f_1);
					__LIB_2__::func_486(&(uParam0->f_141), 8);
					__LIB_2__::func_486(&(uParam0->f_141), 11);
				}
				else
				{
					__LIB_2__::func_487(&(uParam0->f_141), 8);
				}
			}
			else if (!__LIB_0__::func_624(&(uParam0->f_141), 8))
			{
				__LIB_38__::func_698(uParam0, 8);
			}
			break;
		case 7:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_141.f_1);
			__LIB_38__::func_698(uParam0, 8);
			break;
		case 8:
			iVar10 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_141.f_1);
			iVar11 = TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
			if (iVar11 == 0 || iVar11 == 1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar10))
				{
					if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar10) >= 0.7f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_141.f_1);
						__LIB_5__::func_848(-1);
						__LIB_38__::func_709(uParam0, 1);
						__LIB_38__::func_698(uParam0, 0);
					}
				}
			}
			else
			{
				__LIB_5__::func_848(-1);
				__LIB_38__::func_709(uParam0, 1);
				__LIB_38__::func_698(uParam0, 0);
			}
			break;
	}
}

void func_93(bool bParam0, bool bParam1)//Position - 0x60473
{
	struct<2> Var0;
	var uVar1;
	int iVar2;
	bool bVar3;
	if (bParam1)
	{
		if (Local_630.f_33)
		{
			__LIB_39__::func_118(1);
		}
		else
		{
			__LIB_39__::func_118(0);
		}
	}
	Var0 = { __LIB_42__::func_679() };
	Local_630.f_40 = (((Local_630.f_40 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f))) % 1000) / 500);
	__LIB_36__::func_716(__LIB_42__::func_678(), __LIB_42__::func_677(), __LIB_42__::func_676(), __LIB_42__::func_675(), 0f, __LIB_42__::func_674());
	uVar1 = 4;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		bVar3 = (Local_630[iVar2 /*3*/].f_2 && Local_630.f_33);
		if ((Local_630[iVar2 /*3*/].f_2 && (Local_630.f_37 < 3 || SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_630.f_39))) && Local_630.f_33)
		{
			__LIB_16__::func_774(Local_630.f_38, &uVar1);
		}
		else
		{
			__LIB_16__::func_774(Local_630[iVar2 /*3*/], &uVar1);
		}
		__LIB_43__::func_591(iVar2 + 1, __LIB_5__::func_402(__LIB_42__::func_673(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_42__::func_674(), __LIB_42__::func_672(bParam0), bVar3);
		__LIB_43__::func_590(&uVar1, __LIB_5__::func_402(__LIB_42__::func_671(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_42__::func_674(), __LIB_42__::func_672(bParam0), bVar3);
		__LIB_43__::func_914(Local_630[iVar2 /*3*/].f_1, __LIB_5__::func_402(__LIB_42__::func_670(), __LIB_5__::func_403(0f, (Var0.f_1 * IntToFloat(iVar2)))), __LIB_42__::func_674(), __LIB_42__::func_672(bParam0), bVar3);
		iVar2++;
	}
}

void func_94(int* iParam0)//Position - 0x1F57F
{
	if (!__LIB_39__::func_490(iParam0))
	{
		__LIB_43__::func_915(iParam0);
	}
	else
	{
		__LIB_43__::func_594(iParam0);
	}
}

void func_95(bool bParam0)//Position - 0xBF5C0
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (!bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_1946187[iVar0] != 0)
			{
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_142.f_1 < 32)
				{
					if (__LIB_42__::func_743(Global_1946187[iVar0]))
					{
						Global_1946187[iVar0] = 0;
					}
				}
				else if (__LIB_36__::func_660(PLAYER::PLAYER_ID(), Global_1946187[iVar0]))
				{
					Global_1946187[iVar0] = 0;
				}
			}
			else
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	if (iVar1 == 32)
	{
		__LIB_43__::func_602();
	}
	else if (Global_1946187[Global_1946186] == 0)
	{
		__LIB_43__::func_917();
	}
}

void func_96(int iParam0, bool bParam1)//Position - 0x4CBC0
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
			__LIB_40__::func_60(bVar3);
			if (bParam1)
			{
				sVar2 = __LIB_13__::func_686(iParam0, bVar1, iVar4, 0);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
				{
					__LIB_13__::func_711("CCR_UNL_VD" /* GXT: LS Car Meet Vehicle Discount Unlocked: ~a~ */, sVar2, 0, 0, 0);
				}
			}
			break;
		case 1:
			iVar5 = 0;
			if (__LIB_43__::func_920(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = __LIB_13__::func_686(iParam0, bVar1, -1, iVar5);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
					{
						__LIB_13__::func_711("CCR_UNL_TP" /* GXT: LS Car Meet Trade Price Unlocked: ~a~ */, sVar2, 0, 0, 0);
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

void func_97(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)//Position - 0xE68
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	char* sVar18;
	float fVar19;
	struct<3> Var20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	Var1 = { 0f, 0f, 0f };
	bVar7 = (uParam0->f_1657 == 1 && __LIB_15__::func_243(uParam1) == 20);
	__LIB_42__::func_865(uParam0, __LIB_15__::func_243(uParam1), *iParam2, iParam3, iParam4, bVar7);
	if (uParam0->f_1657 == 1 && !bParam6)
	{
		__LIB_40__::func_465(uParam0);
	}
	if (__LIB_40__::func_464(&(uParam0->f_247), 16))
	{
		__LIB_40__::func_486(&(uParam0->f_247), 16);
	}
	iVar8 = __LIB_0__::func_864(&(uParam0->f_247));
	if (__LIB_40__::func_597(uParam0, iVar8, *iParam2, __LIB_15__::func_243(uParam1)))
	{
		bVar9 = (__LIB_15__::func_243(uParam1) != 8 && __LIB_15__::func_243(uParam1) < 16);
		Var6 = { __LIB_7__::func_147(&(uParam0->f_247)) };
		iVar10 = __LIB_40__::func_532(&(uParam0->f_189), &Var6, &(uParam0->f_247.f_10), &(uParam0->f_1658), &(uParam0->f_247.f_4), &(uParam0->f_247.f_22), &(uParam0->f_247.f_5), &iVar8, bVar9, -1f, __LIB_40__::func_464(&(uParam0->f_247), 32), 0, 0);
		if (iVar10 == 1)
		{
			__LIB_40__::func_485(&(uParam0->f_247), 16);
		}
		else if (iVar10 == 3 || iVar10 == 2)
		{
			__LIB_40__::func_484(uParam0[0 /*94*/], 32768);
			__LIB_40__::func_484(uParam0[1 /*94*/], 32768);
		}
		__LIB_36__::func_741(&(uParam0->f_247), Var6);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_247, __LIB_7__::func_147(&(uParam0->f_247)), true, false, false, false);
		ENTITY::SET_ENTITY_VELOCITY(uParam0->f_247, uParam0->f_247.f_10);
		Var6 = { __LIB_7__::func_147(&(uParam0->f_247)) };
	}
	else if (__LIB_15__::func_243(uParam1) > 5)
	{
		if (__LIB_40__::func_460(&(uParam0->f_247)))
		{
			__LIB_40__::func_546(&(uParam0->f_247));
		}
	}
	__LIB_40__::func_545(uParam0, uParam1, &iVar11, &iVar12);
	switch (__LIB_15__::func_243(uParam1))
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				HUD::CLEAR_PRINTS();
				ENTITY::SET_ENTITY_COORDS((uParam0[iParam3 /*94*/])->f_32, __LIB_40__::func_459(&(uParam0->f_189), __LIB_1__::func_286(uParam1), uParam0->f_1661, uParam0->f_1658, iParam3 == __LIB_0__::func_404(uParam1), iParam3), true, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), MISC::GET_HEADING_FROM_VECTOR_2D((uParam0[iParam3 /*94*/])->f_40, (uParam0[iParam3 /*94*/])->f_40.f_1));
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(uParam0->f_189.f_29, 50f, 0);
				__LIB_40__::func_483(uParam1, 1);
			}
			break;
		case 1:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				CAM::DO_SCREEN_FADE_IN(250);
				if (uParam0->f_1657 != 1)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				__LIB_40__::func_483(uParam1, 4);
			}
			break;
		case 4:
			if (__LIB_40__::func_458(uParam0))
			{
				if (uParam0->f_1657 == 1)
				{
					__LIB_40__::func_606(uParam0, 1);
					Var13 = { __LIB_40__::func_459(&(uParam0->f_189), 1, uParam0->f_1661, uParam0->f_1658, 1, (uParam0[iParam3 /*94*/])->f_1) };
					__LIB_40__::func_457(uParam0[iParam3 /*94*/], PED::CREATE_PED(1, uParam0->f_1669, Var13, MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1), false, false));
					TASK::TASK_STAND_STILL((uParam0[iParam3 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(__LIB_38__::func_713(uParam0[iParam3 /*94*/]), (MISC::GET_HEADING_FROM_VECTOR_2D(uParam0->f_1658, uParam0->f_1658.f_1) + 180f));
					Var1 = { __LIB_40__::func_459(&(uParam0->f_189), __LIB_1__::func_286(uParam1), uParam0->f_1661, uParam0->f_1658, iParam4 == __LIB_0__::func_404(uParam1), iParam4) };
					__LIB_40__::func_457(uParam0[iParam4 /*94*/], PED::CREATE_PED(1, uParam0->f_1668, Var1, MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1), false, false));
					TASK::TASK_STAND_STILL((uParam0[iParam4 /*94*/])->f_32, -1);
					ENTITY::SET_ENTITY_HEADING(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), MISC::GET_HEADING_FROM_VECTOR_2D(-uParam0->f_1658, -uParam0->f_1658.f_1));
					Var1 = { 0f, 0f, 0f };
					__LIB_40__::func_483(uParam1, 8);
					__LIB_36__::func_724(uParam1, 0);
					__LIB_1__::func_289(uParam1, iParam3);
					(uParam0[iParam3 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[3 /*3*/], false, false, false);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, false, false);
					(uParam0[iParam4 /*94*/])->f_33 = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[2 /*3*/], false, false, false);
					__LIB_40__::func_531(uParam0, iParam3, iParam4, 0, 0);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, false, false);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, false);
					OBJECT::SET_ENTITY_FLAG_RENDER_SMALL_SHADOW((uParam0[iParam3 /*94*/])->f_33, true);
					ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, false);
					OBJECT::SET_ENTITY_FLAG_RENDER_SMALL_SHADOW((uParam0[iParam4 /*94*/])->f_33, true);
					__LIB_40__::func_502(__LIB_38__::func_713(uParam0[iParam3 /*94*/]), 1);
					__LIB_40__::func_502(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 1);
					if (uParam0->f_189 == 0)
					{
						__LIB_40__::func_482(uParam0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), 7, 0, 0, 0);
					}
				}
			}
			break;
		case 8:
			__LIB_0__::func_794(&(uParam0->f_247));
			if (__LIB_0__::func_703(*iParam2, 1))
			{
				__LIB_40__::func_531(uParam0, iParam3, iParam4, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam3 /*94*/])->f_33, true, false);
				ENTITY::SET_ENTITY_VISIBLE((uParam0[iParam4 /*94*/])->f_33, true, false);
				__LIB_2__::func_712(iParam2, 1);
			}
			bVar14 = (MISC::GET_GAME_TIMER() > __LIB_40__::func_356(uParam0[iParam3 /*94*/]) && MISC::GET_GAME_TIMER() > __LIB_40__::func_356(uParam0[iParam4 /*94*/]));
			if ((((uParam0->f_1657 != 1 && !__LIB_0__::func_703(*iParam2, 4194304)) && bVar14) || ((uParam0->f_1657 == 1 && __LIB_40__::func_456(uParam0) > __LIB_40__::func_530(uParam0, iParam3, iParam4)) && !bParam6)) || (uParam0->f_1657 == 1 && bParam6))
			{
				__LIB_42__::func_861(uParam0[iParam3 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam3, 0, 0);
				__LIB_42__::func_861(uParam0[iParam4 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam4, 0, 0);
				__LIB_6__::func_205(&((uParam0[iParam3 /*94*/])->f_4), 0);
				__LIB_6__::func_205(&((uParam0[iParam4 /*94*/])->f_4), 0);
				__LIB_40__::func_543(uParam0[iParam3 /*94*/], 75);
				__LIB_40__::func_543(uParam0[iParam4 /*94*/], 75);
				__LIB_40__::func_542(uParam0[iParam3 /*94*/]);
				__LIB_40__::func_542(uParam0[iParam4 /*94*/]);
				__LIB_40__::func_486(&(uParam0->f_247), 32);
				__LIB_40__::func_484(uParam0[iParam3 /*94*/], 1024);
				__LIB_40__::func_484(uParam0[iParam4 /*94*/], 1024);
				__LIB_40__::func_484(uParam0[iParam3 /*94*/], 8192);
				__LIB_40__::func_484(uParam0[iParam4 /*94*/], 8192);
				__LIB_40__::func_448(uParam0->f_1657, 1);
				__LIB_2__::func_712(iParam2, 268435456);
				__LIB_2__::func_712(iParam2, 1024);
				__LIB_2__::func_712(iParam2, 64);
				__LIB_2__::func_712(iParam2, 32);
				__LIB_2__::func_712(iParam2, 512);
				__LIB_2__::func_712(iParam2, 256);
				__LIB_2__::func_712(iParam2, 8);
				__LIB_40__::func_447(uParam0, 2);
				__LIB_40__::func_447(uParam0, 32);
				__LIB_40__::func_486(&(uParam0->f_247), 64);
				if (uParam1->f_5 != 10)
				{
					__LIB_36__::func_724(uParam1, 0);
				}
				__LIB_40__::func_446(uParam0[iParam3 /*94*/], 0);
				__LIB_40__::func_446(uParam0[iParam4 /*94*/], 0);
				if (uParam0->f_1657 != 1 && !__LIB_40__::func_445(uParam0, 1))
				{
					__LIB_40__::func_606(uParam0, 1);
				}
				bVar15 = (uParam0->f_1657 == 1 || __LIB_40__::func_445(uParam0, 1));
				if (!__LIB_40__::func_480(&((uParam0[__LIB_0__::func_404(uParam1) /*94*/])->f_4), 256))
				{
					__LIB_42__::func_858(uParam0[__LIB_0__::func_404(uParam1) /*94*/], uParam0, __LIB_1__::func_286(uParam1), __LIB_0__::func_404(uParam1), uParam0->f_1657 != 1, __LIB_0__::func_703(*iParam2, 1), (uParam0->f_1657 != 1 && !__LIB_40__::func_445(uParam0, 1)), bVar15, 0, 0);
				}
				if (!__LIB_40__::func_480(&((uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/])->f_4), 256))
				{
					__LIB_42__::func_857(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], uParam0, __LIB_1__::func_286(uParam1), (1 - __LIB_0__::func_404(uParam1)), uParam0->f_1657 != 1, bVar15, 0, !__LIB_40__::func_480(&((uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/])->f_4), 16), 0);
				}
				__LIB_40__::func_447(uParam0, 8);
				__LIB_40__::func_483(uParam1, 20);
				__LIB_40__::func_501(&((uParam0[iParam3 /*94*/])->f_4), 256);
				__LIB_40__::func_501(&((uParam0[iParam4 /*94*/])->f_4), 256);
				__LIB_40__::func_358(&(uParam0->f_247));
				__LIB_40__::func_442(uParam0, 0);
				__LIB_40__::func_448(uParam0->f_1657, 0);
			}
			else
			{
				__LIB_40__::func_448(uParam0->f_1657, 0);
			}
			break;
		case 9:
			__LIB_40__::func_552(uParam0, iParam4, __LIB_0__::func_404(uParam1), uParam0->f_1657, __LIB_40__::func_480(&((uParam0[iParam4 /*94*/])->f_4), 256));
			if (__LIB_40__::func_445(uParam0, 4))
			{
				__LIB_40__::func_447(uParam0, 4);
			}
			if (!__LIB_0__::func_703(*iParam2, 4194304))
			{
				__LIB_42__::func_861(uParam0[__LIB_0__::func_404(uParam1) /*94*/], uParam0, __LIB_1__::func_286(uParam1), __LIB_0__::func_404(uParam1), 1, 0);
				__LIB_42__::func_861(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], uParam0, __LIB_1__::func_286(uParam1), (1 - __LIB_0__::func_404(uParam1)), 0, 0);
			}
			__LIB_40__::func_598(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], &(uParam0->f_247));
			if ((uParam0[__LIB_0__::func_404(uParam1) /*94*/])->f_31 != 4)
			{
				if (__LIB_42__::func_864(uParam0[__LIB_0__::func_404(uParam1) /*94*/], uParam0, __LIB_1__::func_286(uParam1), &uVar17, 0))
				{
					bVar16 = true;
				}
			}
			else
			{
				sVar18 = __LIB_1__::func_295(__LIB_40__::func_500(uParam0[__LIB_0__::func_404(uParam1) /*94*/]), "mini@tennis", "mini@tennis@female");
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(__LIB_38__::func_713(uParam0[__LIB_0__::func_404(uParam1) /*94*/]), sVar18, "serve", 3))
				{
					if (uParam0->f_1657 == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247))
					{
						fVar19 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(__LIB_38__::func_713(uParam0[__LIB_0__::func_404(uParam1) /*94*/]), sVar18, "serve");
						if (fVar19 > 0.015f && fVar19 < (0.015f * 10f))
						{
							__LIB_40__::func_527(uParam0[__LIB_0__::func_404(uParam1) /*94*/], &(uParam0->f_247));
						}
					}
				}
				if (!__LIB_2__::func_274(1))
				{
					__LIB_40__::func_361(1);
				}
				if (__LIB_42__::func_860(uParam0, uParam1, uParam0[__LIB_0__::func_404(uParam1) /*94*/], bParam6))
				{
					bVar16 = true;
				}
			}
			if (bVar16)
			{
				__LIB_1__::func_330(iParam2, 128);
				__LIB_40__::func_483(uParam1, 11);
				__LIB_0__::func_604(uParam1, __LIB_0__::func_404(uParam1));
				__LIB_40__::func_478(uParam0[iParam3 /*94*/], &(uParam0->f_247), 1);
				__LIB_40__::func_478(uParam0[iParam4 /*94*/], &(uParam0->f_247), 1);
			}
			break;
		case 10:
			__LIB_42__::func_861(uParam0[__LIB_0__::func_404(uParam1) /*94*/], uParam0, __LIB_1__::func_286(uParam1), __LIB_0__::func_404(uParam1), 0, 0);
			__LIB_42__::func_861(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], uParam0, __LIB_1__::func_286(uParam1), (1 - __LIB_0__::func_404(uParam1)), 0, 0);
			__LIB_40__::func_598(uParam0[__LIB_0__::func_404(uParam1) /*94*/], &(uParam0->f_247));
			if (__LIB_43__::func_928(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], uParam0, &(uParam1->f_7), __LIB_0__::func_864(uParam1), (1 - __LIB_0__::func_404(uParam1)), __LIB_0__::func_404(uParam1), __LIB_1__::func_286(uParam1), __LIB_40__::func_439(uParam1)))
			{
				__LIB_0__::func_604(uParam1, (1 - __LIB_0__::func_404(uParam1)));
				__LIB_2__::func_712(iParam2, 128);
			}
			if (MISC::GET_FRAME_COUNT() > __LIB_1__::func_286(&(uParam0->f_247)) && __LIB_40__::func_475(uParam0[(1 - __LIB_0__::func_404(uParam1)) /*94*/], 256))
			{
				__LIB_4__::func_896(uParam1, __LIB_0__::func_864(uParam1));
				__LIB_40__::func_483(uParam1, 14);
				__LIB_40__::func_497(iParam2);
				__LIB_2__::func_712(iParam2, 128);
			}
			if (__LIB_40__::func_535(&(uParam0->f_247), __LIB_40__::func_357(uParam0), &(uParam0->f_189.f_29)))
			{
				if (__LIB_40__::func_521(&(uParam0->f_189), uParam0, (uParam0[__LIB_0__::func_404(uParam1) /*94*/])->f_1, __LIB_1__::func_286(uParam1)))
				{
					__LIB_40__::func_402(&(uParam0->f_247));
					__LIB_40__::func_483(uParam1, 12);
				}
				else
				{
					__LIB_40__::func_497(iParam2);
					if (__LIB_36__::func_913(uParam1) == 0)
					{
						if (iParam3 == __LIB_0__::func_404(uParam1))
						{
							__LIB_40__::func_496(iParam2, 134217728);
						}
						else
						{
							__LIB_40__::func_496(iParam2, 33554432);
						}
						__LIB_36__::func_724(uParam1, 1);
						__LIB_40__::func_483(uParam1, 8);
						__LIB_1__::func_330(iParam2, 8192);
						__LIB_1__::func_330(iParam2, 32);
					}
					else
					{
						__LIB_36__::func_724(uParam1, 2);
						__LIB_4__::func_896(uParam1, (1 - __LIB_0__::func_404(uParam1)));
						__LIB_40__::func_483(uParam1, 14);
					}
				}
			}
			else if (__LIB_0__::func_864(uParam1) != __LIB_0__::func_404(uParam1))
			{
				if (iParam3 == __LIB_0__::func_404(uParam1))
				{
					__LIB_40__::func_496(iParam2, 67108864);
				}
				else
				{
					__LIB_40__::func_496(iParam2, 16777216);
				}
				__LIB_4__::func_896(uParam1, __LIB_0__::func_404(uParam1));
				__LIB_40__::func_483(uParam1, 14);
				__LIB_40__::func_497(iParam2);
			}
			Var6 = { __LIB_7__::func_147(&(uParam0->f_247)) };
			if (Var6.f_2 < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, __LIB_7__::func_147(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				__LIB_4__::func_896(uParam1, (1 - __LIB_0__::func_404(uParam1)));
				__LIB_40__::func_483(uParam1, 14);
			}
			break;
		case 11:
			iVar4 = (1 - __LIB_0__::func_404(uParam1));
			__LIB_40__::func_484(uParam0[iVar4 /*94*/], 32768);
			Var3 = { __LIB_40__::func_591(&(uParam0->f_189), __LIB_7__::func_147(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, __LIB_15__::func_243(&(uParam0->f_247)), __LIB_1__::func_45(&(uParam0->f_247)), __LIB_9__::func_818(&(uParam0->f_247))) };
			__LIB_40__::func_401(uParam0[iVar4 /*94*/], &Var3);
			Var2 = { __LIB_40__::func_590((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), __LIB_7__::func_147(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, __LIB_15__::func_243(&(uParam0->f_247)), __LIB_1__::func_45(&(uParam0->f_247)), __LIB_9__::func_818(&(uParam0->f_247)), &fVar5) };
			__LIB_40__::func_396(&((uParam0[iVar4 /*94*/])->f_4), __LIB_40__::func_520(uParam0[iVar4 /*94*/], &(uParam0->f_303), Var2, uParam0->f_189.f_29.f_2, fVar5));
			if (!__LIB_40__::func_480(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				__LIB_40__::func_495(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (bParam6)
			{
				__LIB_40__::func_395(&((uParam0[iVar4 /*94*/])->f_4), 0f);
			}
			else
			{
				__LIB_40__::func_394(&((uParam0[iVar4 /*94*/])->f_4));
				if ((!__LIB_40__::func_480(&((uParam0[iVar4 /*94*/])->f_4), 32) && __LIB_0__::func_864(&(uParam0->f_247)) < 1) && !__LIB_40__::func_393(Var3, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), __LIB_0__::func_864(&(uParam0->f_189))))
				{
					if (__LIB_10__::func_197(uParam0[iVar4 /*94*/]) == 75)
					{
						__LIB_40__::func_495(&((uParam0[iVar4 /*94*/])->f_4), 32);
					}
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				__LIB_6__::func_205(&((uParam0[iVar4 /*94*/])->f_4), 6);
			}
			else
			{
				__LIB_6__::func_205(&((uParam0[iVar4 /*94*/])->f_4), 1);
			}
			__LIB_6__::func_205(&((uParam0[__LIB_0__::func_404(uParam1) /*94*/])->f_4), 5);
			__LIB_40__::func_483(uParam1, 10);
			if ((uParam0[iVar4 /*94*/])->f_31 != 4)
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				__LIB_1__::func_330(iParam2, 536870912);
			}
			if ((uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/])->f_1 == 0)
			{
				iVar0 = 0;
			}
			else if ((uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/])->f_1 == 1)
			{
				iVar0 = 2;
			}
			__LIB_40__::func_519(uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			__LIB_40__::func_518(uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/], __LIB_1__::func_286(uParam1));
			break;
		case 12:
			Var6 = { __LIB_7__::func_147(&(uParam0->f_247)) };
			if (!__LIB_42__::func_854(uParam0, __LIB_0__::func_864(uParam1)))
			{
				if (__LIB_0__::func_864(&(uParam0->f_247)) > 1)
				{
					__LIB_4__::func_896(uParam1, __LIB_0__::func_864(uParam1));
					__LIB_40__::func_497(iParam2);
				}
				else
				{
					__LIB_4__::func_896(uParam1, (1 - __LIB_0__::func_864(uParam1)));
					__LIB_40__::func_497(iParam2);
					if (__LIB_9__::func_550(uParam1) != iParam3 && uParam0->f_1657 == 1)
					{
						Global_113386.f_20021.f_10++;
						__LIB_42__::func_863(10, 1);
					}
					if (__LIB_40__::func_516(uParam0->f_247.f_13, &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
					{
						__LIB_40__::func_494(uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/], 2);
					}
				}
				__LIB_40__::func_483(uParam1, 14);
			}
			else if (Var6.f_2 < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && SYSTEM::VDIST2(uParam0->f_189.f_29, __LIB_7__::func_147(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				__LIB_4__::func_896(uParam1, (1 - __LIB_0__::func_864(uParam1)));
				__LIB_40__::func_483(uParam1, 14);
				if (__LIB_9__::func_550(uParam1) != iParam3 && uParam0->f_1657 != 1)
				{
					Global_113386.f_20021.f_10++;
					__LIB_42__::func_863(10, 1);
				}
			}
			__LIB_40__::func_598(uParam0[__LIB_0__::func_864(uParam1) /*94*/], &(uParam0->f_247));
			if (__LIB_43__::func_928(uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/], uParam0, &(uParam1->f_7), __LIB_0__::func_864(uParam1), (1 - __LIB_0__::func_864(uParam1)), __LIB_0__::func_404(uParam1), __LIB_1__::func_286(uParam1), __LIB_40__::func_439(uParam1)))
			{
				__LIB_0__::func_794(&(uParam0->f_247));
				__LIB_0__::func_604(uParam1, (1 - __LIB_0__::func_864(uParam1)));
				if ((uParam0[__LIB_0__::func_864(uParam1) /*94*/])->f_31 == 4)
				{
					__LIB_6__::func_205(&((uParam0[__LIB_0__::func_864(uParam1) /*94*/])->f_4), 5);
					__LIB_40__::func_515(uParam0[__LIB_0__::func_864(uParam1) /*94*/], &(uParam0->f_189), uParam0->f_1661);
				}
				else
				{
					__LIB_2__::func_712(iParam2, 536870912);
				}
				__LIB_2__::func_712(iParam2, 128);
				__LIB_40__::func_483(uParam1, 13);
				__LIB_40__::func_387(uParam0[iParam3 /*94*/]);
				__LIB_40__::func_387(uParam0[iParam4 /*94*/]);
			}
			else if (MISC::GET_FRAME_COUNT() > __LIB_1__::func_286(&(uParam0->f_247)) && __LIB_40__::func_475(uParam0[(1 - __LIB_0__::func_864(uParam1)) /*94*/], 256))
			{
				__LIB_4__::func_896(uParam1, __LIB_0__::func_864(uParam1));
				__LIB_40__::func_483(uParam1, 14);
				__LIB_40__::func_497(iParam2);
				__LIB_2__::func_712(iParam2, 128);
			}
			__LIB_42__::func_861(uParam0[iParam3 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam3, 0, 0);
			__LIB_42__::func_861(uParam0[iParam4 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam4, 0, 0);
			if (uParam0->f_1657 != 1)
			{
				__LIB_40__::func_607(uParam0[iParam3 /*94*/], &(uParam0->f_189));
			}
			if ((__LIB_40__::func_480(&((uParam0[iParam3 /*94*/])->f_4), 16) && !__LIB_40__::func_480(&((uParam0[iParam4 /*94*/])->f_4), 16)) && !__LIB_40__::func_480(&((uParam0[iParam4 /*94*/])->f_4), 256))
			{
				TASK::TASK_STAND_STILL(__LIB_38__::func_713(uParam0[iParam4 /*94*/]), -1);
			}
			break;
		case 13:
			iVar4 = (1 - __LIB_0__::func_864(uParam1));
			__LIB_40__::func_484(uParam0[iVar4 /*94*/], 32768);
			Var20 = { __LIB_40__::func_591(&(uParam0->f_189), __LIB_7__::func_147(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, __LIB_15__::func_243(&(uParam0->f_247)), __LIB_1__::func_45(&(uParam0->f_247)), __LIB_9__::func_818(&(uParam0->f_247))) };
			__LIB_40__::func_401(uParam0[iVar4 /*94*/], &Var20);
			if (!__LIB_40__::func_480(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				__LIB_40__::func_495(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (__LIB_40__::func_386(uParam0[__LIB_0__::func_864(uParam1) /*94*/]) == 2)
			{
				__LIB_40__::func_396(&((uParam0[iVar4 /*94*/])->f_4), Var20);
			}
			else
			{
				Var2 = { __LIB_40__::func_590((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), __LIB_7__::func_147(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, __LIB_15__::func_243(&(uParam0->f_247)), __LIB_1__::func_45(&(uParam0->f_247)), __LIB_9__::func_818(&(uParam0->f_247)), &fVar5) };
				__LIB_40__::func_396(&((uParam0[iVar4 /*94*/])->f_4), __LIB_40__::func_520(uParam0[iVar4 /*94*/], &(uParam0->f_303), Var2, uParam0->f_189.f_29.f_2, fVar5));
			}
			if ((!__LIB_40__::func_480(&((uParam0[iVar4 /*94*/])->f_4), 32) && __LIB_0__::func_864(&(uParam0->f_247)) < 1) && !__LIB_40__::func_393(Var20, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), __LIB_0__::func_864(&(uParam0->f_189))))
			{
				if (__LIB_10__::func_197(uParam0[iVar4 /*94*/]) == 75)
				{
					__LIB_40__::func_495(&((uParam0[iVar4 /*94*/])->f_4), 32);
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				if ((uParam0[iVar4 /*94*/])->f_1 == 0)
				{
					iVar0 = 0;
				}
				else if ((uParam0[iVar4 /*94*/])->f_1 == 1)
				{
					iVar0 = 2;
				}
				__LIB_40__::func_519(uParam0[iVar4 /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			}
			else
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				__LIB_1__::func_330(iParam2, 536870912);
			}
			__LIB_40__::func_501(&((uParam0[iVar4 /*94*/])->f_4), 4);
			__LIB_6__::func_205(&((uParam0[iVar4 /*94*/])->f_4), 1);
			__LIB_40__::func_483(uParam1, 12);
			break;
		case 14:
			__LIB_40__::func_478(uParam0[iParam3 /*94*/], &(uParam0->f_247), 0);
			__LIB_40__::func_478(uParam0[iParam4 /*94*/], &(uParam0->f_247), 0);
			__LIB_6__::func_205(&((uParam0[iParam3 /*94*/])->f_4), 0);
			__LIB_6__::func_205(&((uParam0[iParam4 /*94*/])->f_4), 0);
			__LIB_40__::func_493(&(uParam1->f_7[__LIB_9__::func_550(uParam1) /*8*/]), iParam2);
			if (uParam1->f_7[__LIB_9__::func_550(uParam1) /*8*/] >= __LIB_0__::func_138(__LIB_40__::func_439(uParam1), 7, 4) && (uParam1->f_7[__LIB_9__::func_550(uParam1) /*8*/] - uParam1->f_7[(1 - __LIB_9__::func_550(uParam1)) /*8*/]) >= 2)
			{
				__LIB_40__::func_492(&(uParam1->f_7), __LIB_40__::func_352(uParam1), __LIB_9__::func_550(uParam1), (1 - __LIB_9__::func_550(uParam1)), iParam2, __LIB_40__::func_439(uParam1));
				__LIB_40__::func_483(uParam1, 18);
				__LIB_1__::func_330(iParam2, 8388608);
				__LIB_40__::func_385(uParam1, 0);
				if (uParam0->f_1657 == 1)
				{
					__LIB_40__::func_442(uParam0, 0);
				}
				if (__LIB_9__::func_550(uParam1) == iParam3)
				{
					__LIB_1__::func_330(iParam2, 1048576);
					__LIB_40__::func_496(iParam2, 67108864);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						__LIB_40__::func_504(2, 3);
						__LIB_1__::func_330(iParam2, 256);
					}
					if (__LIB_11__::func_576(&((uParam0[iParam4 /*94*/])->f_4)) == 2)
					{
						__LIB_40__::func_384(&((uParam0[iParam4 /*94*/])->f_4));
					}
				}
				else
				{
					__LIB_1__::func_330(iParam2, 2097152);
					__LIB_40__::func_496(iParam2, 16777216);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						__LIB_1__::func_330(iParam2, 512);
					}
				}
			}
			else
			{
				iVar23 = __LIB_9__::func_550(uParam1);
				iVar24 = (1 - iVar23);
				iVar22 = __LIB_40__::func_352(uParam1);
				iVar21 = __LIB_0__::func_138(__LIB_40__::func_439(uParam1), 6, 3);
				if (__LIB_40__::func_439(uParam1))
				{
					__LIB_40__::func_383(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if (uParam1->f_7[iVar23 /*8*/] >= iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/])
				{
					__LIB_1__::func_330(iParam2, 65536);
					__LIB_40__::func_550(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] > iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/] + 1)
				{
					if (((((__LIB_36__::func_748(uParam1) == 0 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 5) && (uParam1->f_7[iVar23 /*8*/].f_1[iVar22] + 1 - uParam1->f_7[iVar24 /*8*/].f_1[iVar22]) >= 2) || __LIB_36__::func_748(uParam1) == 1) || (__LIB_36__::func_748(uParam1) == 2 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 1)) || (__LIB_36__::func_748(uParam1) == 3 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 2))
					{
						__LIB_1__::func_330(iParam2, 32768);
					}
					else
					{
						__LIB_1__::func_330(iParam2, 131072);
					}
					__LIB_40__::func_550(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] == iVar21 && uParam1->f_7[iVar24 /*8*/] < iVar21)
				{
					__LIB_1__::func_330(iParam2, 32768);
					__LIB_40__::func_550(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_5 == 10)
				{
					if (uParam1->f_2 != __LIB_0__::func_404(uParam1))
					{
						__LIB_1__::func_330(iParam2, 8192);
						__LIB_1__::func_330(iParam2, 32);
						if (__LIB_9__::func_550(uParam1) == iParam3)
						{
							__LIB_40__::func_496(iParam2, 33554432);
						}
						else
						{
							__LIB_40__::func_496(iParam2, 134217728);
						}
					}
					else if (iVar23 == iParam3)
					{
						__LIB_40__::func_496(iParam2, 67108864);
						__LIB_1__::func_330(iParam2, 262144);
						__LIB_1__::func_330(iParam2, 64);
					}
					else
					{
						__LIB_40__::func_496(iParam2, 16777216);
						__LIB_1__::func_330(iParam2, 1024);
						__LIB_1__::func_330(iParam2, 524288);
					}
				}
				else if (uParam1->f_5 == 12)
				{
					if (iVar23 == iParam3)
					{
						__LIB_1__::func_330(iParam2, 262144);
					}
					else
					{
						__LIB_1__::func_330(iParam2, 524288);
					}
					__LIB_40__::func_550(iVar23, iParam3, uParam0, iParam2);
				}
				if (uParam1->f_5 == 10 && uParam1->f_2 != __LIB_0__::func_404(uParam1))
				{
					__LIB_2__::func_712(iParam2, 128);
					if (!__LIB_0__::func_703(*iParam2, 8192))
					{
					}
				}
				if (__LIB_40__::func_439(uParam1))
				{
					if (BitTest((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]), 0))
					{
						__LIB_40__::func_483(uParam1, 18);
					}
					else if (((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]) % 6) == 0)
					{
						__LIB_40__::func_483(uParam1, 17);
					}
					else
					{
						__LIB_9__::func_819(uParam1, (1 - __LIB_1__::func_286(uParam1)));
						__LIB_40__::func_483(uParam1, 8);
					}
				}
				else
				{
					__LIB_9__::func_819(uParam1, (1 - __LIB_1__::func_286(uParam1)));
					__LIB_40__::func_483(uParam1, 8);
					if (uParam0->f_1657 == 1)
					{
						__LIB_40__::func_442(uParam0, 0);
					}
				}
			}
			if (__LIB_40__::func_480(&((uParam0[iParam3 /*94*/])->f_4), 16) || __LIB_40__::func_480(&((uParam0[iParam4 /*94*/])->f_4), 16))
			{
				__LIB_1__::func_330(iParam2, 268435456);
			}
			__LIB_40__::func_542(uParam0[iParam3 /*94*/]);
			__LIB_40__::func_542(uParam0[iParam4 /*94*/]);
			break;
		case 20:
			if (__LIB_40__::func_549(uParam0, iParam3, iParam4, __LIB_0__::func_404(uParam1), uParam0->f_1657, __LIB_40__::func_445(uParam0, 1), iVar12))
			{
				__LIB_40__::func_448(uParam0->f_1657, 1);
				__LIB_40__::func_483(uParam1, 9);
				__LIB_40__::func_382(&((uParam0[iParam3 /*94*/])->f_4));
				__LIB_40__::func_382(&((uParam0[iParam4 /*94*/])->f_4));
				if (__LIB_40__::func_445(uParam0, 1))
				{
					__LIB_40__::func_447(uParam0, 1);
				}
				if (__LIB_40__::func_445(uParam0, 256))
				{
					__LIB_40__::func_447(uParam0, 256);
				}
			}
			if ((__LIB_40__::func_445(uParam0, 1) && !__LIB_40__::func_445(uParam0, 4)) && iVar11 >= 2)
			{
				__LIB_40__::func_381(uParam0, 4);
				__LIB_40__::func_380(uParam0, MISC::GET_GAME_TIMER() + 580);
			}
			else if (((MISC::GET_GAME_TIMER() > __LIB_40__::func_379(uParam0) && __LIB_40__::func_445(uParam0, 4)) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_247)) && !ENTITY::IS_ENTITY_ATTACHED(uParam0->f_247))
			{
				__LIB_40__::func_606(uParam0, 1);
				__LIB_40__::func_527(uParam0[__LIB_0__::func_404(uParam1) /*94*/], &(uParam0->f_247));
				__LIB_40__::func_486(&(uParam0->f_247), 4);
			}
			if (__LIB_0__::func_404(uParam1) != iParam3 && TASK::GET_SCRIPT_TASK_STATUS(__LIB_38__::func_713(uParam0[iParam3 /*94*/]), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
			{
				__LIB_40__::func_448(uParam0->f_1657, 1);
				__LIB_42__::func_861(uParam0[iParam3 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam3, 0, 0);
				__LIB_40__::func_513(20, uParam0[iParam3 /*94*/], *iParam2, 1);
				__LIB_40__::func_598(uParam0[iParam3 /*94*/], &(uParam0->f_247));
			}
			break;
		case 18:
			if (!__LIB_40__::func_439(uParam1))
			{
				if (uParam0->f_1657 != 1 && (((((uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] > 5 && (uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] - uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)]) >= 2) && uParam1->f_7[iParam3 /*8*/] >= 3) || ((uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] > 5 && (uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] - uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)]) >= 2) && uParam1->f_7[iParam4 /*8*/] >= 3)) || uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] == 7) || uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] == 7))
				{
					if (__LIB_36__::func_744(uParam1) > 1)
					{
						__LIB_40__::func_491(&(uParam1->f_7), &(uParam1->f_30), iParam2, __LIB_36__::func_744(uParam1));
					}
				}
				else if ((uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] == 6 && uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] == 6) && uParam0->f_1657 != 1)
				{
					__LIB_40__::func_385(uParam1, 1);
					__LIB_1__::func_330(iParam2, 4);
					__LIB_40__::func_383(uParam0, MISC::GET_GAME_TIMER() + 1500);
				}
				if ((uParam0->f_1657 != 1 && !__LIB_40__::func_439(uParam1)) && ((((((((__LIB_36__::func_748(uParam1) == 0 && uParam1->f_7[iParam3 /*8*/].f_7 > (__LIB_36__::func_744(uParam1) / 2)) || (__LIB_36__::func_748(uParam1) == 0 && uParam1->f_7[iParam4 /*8*/].f_7 > (__LIB_36__::func_744(uParam1) / 2))) || (__LIB_36__::func_748(uParam1) == 1 && uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 1)) || (__LIB_36__::func_748(uParam1) == 1 && uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 1)) || (__LIB_36__::func_748(uParam1) == 2 && uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 2)) || (__LIB_36__::func_748(uParam1) == 2 && uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 2)) || (__LIB_36__::func_748(uParam1) == 3 && uParam1->f_7[iParam3 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 3)) || (__LIB_36__::func_748(uParam1) == 3 && uParam1->f_7[iParam4 /*8*/].f_1[__LIB_40__::func_352(uParam1)] >= 3)))
				{
					if (__LIB_36__::func_744(uParam1) > 1)
					{
						uParam1->f_30 = (uParam1->f_30 - 1);
					}
					__LIB_40__::func_502(PLAYER::PLAYER_PED_ID(), 0);
					__LIB_40__::func_483(uParam1, 22);
					__LIB_1__::func_330(iParam2, 2);
				}
				else
				{
					__LIB_40__::func_490(&(uParam1->f_7), iParam2);
					if (__LIB_0__::func_404(uParam1) == iParam3)
					{
						__LIB_1__::func_289(uParam1, iParam4);
					}
					else if (__LIB_0__::func_404(uParam1) == iParam4)
					{
						__LIB_1__::func_289(uParam1, iParam3);
					}
					__LIB_40__::func_483(uParam1, 8);
					__LIB_9__::func_819(uParam1, 1);
					if (__LIB_40__::func_378(&(uParam1->f_7), __LIB_40__::func_352(uParam1)) && uParam0->f_1657 != 1)
					{
						__LIB_40__::func_483(uParam1, 17);
					}
				}
			}
			else if (__LIB_40__::func_439(uParam1))
			{
				if (__LIB_0__::func_404(uParam1) == iParam3)
				{
					__LIB_1__::func_289(uParam1, iParam4);
				}
				else if (__LIB_0__::func_404(uParam1) == iParam4)
				{
					__LIB_1__::func_289(uParam1, iParam3);
				}
				__LIB_40__::func_483(uParam1, 8);
				__LIB_9__::func_819(uParam1, 1);
			}
			break;
		case 16:
			__LIB_42__::func_861(uParam0[iParam4 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam4, 0, 0);
			__LIB_42__::func_861(uParam0[iParam3 /*94*/], uParam0, __LIB_1__::func_286(uParam1), iParam3, 0, 0);
			if ((uParam0->f_1657 != 1 && !__LIB_0__::func_703(*iParam2, 4194304)) || uParam0->f_1657 == 1)
			{
				__LIB_40__::func_483(uParam1, 8);
			}
			break;
		case 28:
			break;
	}
	if ((!__LIB_0__::func_703(*iParam2, 4194304) && __LIB_15__::func_243(uParam1) > 6) && __LIB_15__::func_243(uParam1) < 21)
	{
		__LIB_43__::func_631(uParam0[iParam3 /*94*/], &(uParam0->f_535), uParam0->f_1657);
		__LIB_43__::func_631(uParam0[iParam4 /*94*/], &(uParam0->f_535), uParam0->f_1657);
	}
	__LIB_40__::func_372(uParam0);
}

int func_98(var uParam0, var uParam1)//Position - 0x26A44
{
	int iVar0;
	int iVar1;
	if (uParam0->f_6)
	{
		uParam0->f_6 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		__LIB_40__::func_675(&Local_434);
		__LIB_40__::func_674(&Local_435);
		__LIB_40__::func_748();
		iVar0 = 0;
		__LIB_1__::func_362(&iLocal_672);
		switch (uParam0->f_2)
		{
			case 1:
				if (uParam0->f_4)
				{
					iLocal_211 = uParam0->f_3;
					if (iVar0 > 0)
					{
						iLocal_491 = iVar0;
					}
					else
					{
						iLocal_491 = __LIB_40__::func_757(100000f, iLocal_211, Global_113386.f_19973.f_9);
					}
				}
				else
				{
					iLocal_211 = uParam0->f_3;
				}
				iLocal_602 = 0;
				break;
		}
		if (!bLocal_545)
		{
			__LIB_0__::func_222(&Local_437, 4, 0, "TOWDISPATCH", 0, 1);
		}
		if (iLocal_211 == 0)
		{
		}
		else if (iLocal_211 == 2)
		{
			bLocal_549 = true;
		}
		if (iLocal_211 == 3 || iLocal_211 == 1)
		{
			iLocal_546 = 1;
			iLocal_635 = 1;
		}
		else if (iLocal_211 == 4)
		{
			iLocal_635 = Local_435[__LIB_40__::func_747() /*28*/].f_27;
		}
		__LIB_40__::func_746();
		bLocal_534 = false;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_714 = uParam0->f_1;
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck2"))
					{
						iLocal_714 = iVar1;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_714, true, false);
					}
				}
			}
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_714))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_714, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_714, true, true);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_714);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_714, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_714, true);
			}
		}
		if ((SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya1")) == 1 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya2")) == 1) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("tonya5")) == 1)
		{
			__LIB_40__::func_670(&(Local_742[1 /*8*/]), 0, 1120390349, 0);
			__LIB_40__::func_670(&(Local_742[0 /*8*/]), 0, 1120390349, 0);
			__LIB_40__::func_669(&(Local_742[1 /*8*/]));
			__LIB_40__::func_669(&(Local_742[0 /*8*/]));
			bLocal_574 = true;
		}
	}
	if (((iLocal_721 < 15 && iLocal_721 != 13) && iLocal_721 != 12) && iLocal_721 != 11)
	{
		__LIB_40__::func_756(&iLocal_714, &iLocal_597, &Local_605, &Local_500, &cLocal_655, &iLocal_636, iLocal_630, bLocal_544, &iLocal_550, iLocal_537, bLocal_528, bLocal_250, iLocal_721, 1);
		if (bLocal_256)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_599))
			{
				HUD::REMOVE_BLIP(&iLocal_599);
			}
			if ((iLocal_211 == 2 || iLocal_211 == 0) || iLocal_211 == 4)
			{
				if (__LIB_0__::func_75())
				{
					if (!iLocal_580)
					{
						Local_664 = { __LIB_0__::func_485() };
						if (!iLocal_586)
						{
							__LIB_0__::func_638();
							iLocal_580 = 1;
						}
					}
				}
				else if (!iLocal_586)
				{
					if (__LIB_2__::func_859(&uLocal_268, "TOWAUD", "TONYA_GETOUT", 9, 1, 0, 0))
					{
						iLocal_586 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_580 = 0;
			iLocal_586 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_602)
		{
			case 0:
				if (iLocal_721 > 2 && iLocal_721 < 15)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false))
					{
					}
					if (iLocal_211 != 2 && iLocal_211 != 4)
					{
						if (!__LIB_40__::func_785(&uLocal_728, Local_605[0 /*20*/].f_6, iLocal_714, &uLocal_625, &uLocal_626, bLocal_534))
						{
							iLocal_665 = 15;
							__LIB_40__::func_745();
						}
					}
					if (bLocal_574)
					{
						__LIB_40__::func_782(&uLocal_729, iLocal_714, &uLocal_628, &uLocal_629, bLocal_534);
					}
				}
				if (bLocal_545)
				{
					if (iLocal_721 >= 7)
					{
						if (!bLocal_250)
						{
							__LIB_42__::func_904(iLocal_714, Local_605[0 /*20*/].f_6, Local_606, &(Local_605[0 /*20*/].f_8), &Local_500, &cLocal_655, &Local_228, bLocal_545, &iLocal_596);
						}
					}
				}
				bLocal_536 = false;
				if (((iLocal_211 == 0 || iLocal_211 == 2) && iLocal_721 > 4) && iLocal_721 < 17)
				{
					if (!bLocal_545)
					{
						if (__LIB_42__::func_903())
						{
						}
					}
				}
				else if ((iLocal_211 == 1 && iLocal_721 > 4) && iLocal_721 < 17)
				{
					if (__LIB_42__::func_902())
					{
						__LIB_42__::func_906(uParam1, 1);
					}
					if (iLocal_725 > 0)
					{
						__LIB_43__::func_642();
					}
				}
				else if (iLocal_211 == 3)
				{
					if ((iLocal_721 == 5 && iLocal_723 < 1) && !iLocal_521)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_605[0 /*20*/].f_6))
							{
								iLocal_521 = 1;
								if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
								{
									TASK::CLEAR_PED_TASKS(Local_605[0 /*20*/]);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_605[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0);
								}
							}
						}
					}
				}
				if (iLocal_538 && !bLocal_231)
				{
					__LIB_42__::func_901(&(Local_435[__LIB_40__::func_747() /*28*/]), &(Local_435[__LIB_40__::func_747() /*28*/].f_10), Local_434[iLocal_491 /*23*/].f_1, &(Local_605[0 /*20*/]), &(Local_605[0 /*20*/].f_2), &uLocal_601, fLocal_653, cLocal_497, &sLocal_498, iLocal_635);
				}
				if (iLocal_211 == 4)
				{
					__LIB_43__::func_641(&uLocal_722, iLocal_715, iLocal_716, iLocal_714, &(Local_605[0 /*20*/].f_2), iLocal_635, cLocal_497, &sLocal_498, &iLocal_596, bLocal_534, &(Local_605[0 /*20*/].f_6));
				}
				if (bLocal_231 && !bLocal_548)
				{
					if (__LIB_42__::func_900(Local_605[0 /*20*/], Local_605[0 /*20*/].f_6, &uLocal_203, &iLocal_210, 0, 1, 1, 1, 0))
					{
						__LIB_0__::func_325();
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
						{
							TASK::CLEAR_PED_TASKS(Local_605[0 /*20*/]);
							PED::SET_PED_KEEP_TASK(Local_605[0 /*20*/], true);
							TASK::TASK_SMART_FLEE_PED(Local_605[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							if (iLocal_210 == 4)
							{
								iLocal_665 = 19;
							}
							else if (iLocal_210 == 1)
							{
								iLocal_665 = 20;
							}
							else
							{
								iLocal_665 = 18;
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_1, false))
						{
							TASK::CLEAR_PED_TASKS(Local_605[0 /*20*/].f_1);
							PED::SET_PED_KEEP_TASK(Local_605[0 /*20*/].f_1, true);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_212);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_212);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 1, 256);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_212);
							if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_1, false))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_605[0 /*20*/].f_1, iLocal_212);
							}
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_212);
							if (iLocal_210 == 4)
							{
								iLocal_665 = 19;
							}
							else
							{
								iLocal_665 = 18;
							}
						}
						if (!bLocal_545)
						{
							switch (iLocal_210)
							{
								case 16:
									if (iLocal_211 == 2)
									{
										iLocal_665 = 17;
										__LIB_40__::func_745();
									}
									else
									{
										iLocal_665 = 16;
										__LIB_40__::func_745();
									}
									break;
							}
						}
						else
						{
							iLocal_665 = 21;
							__LIB_40__::func_745();
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/], false))
						{
							__LIB_40__::func_745();
						}
					}
					if (__LIB_42__::func_900(Local_605[0 /*20*/].f_1, Local_605[0 /*20*/].f_6, &uLocal_203, &iLocal_210, 0, 1, 0, 1, 0))
					{
						__LIB_0__::func_325();
						if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_1, false))
						{
							TASK::CLEAR_PED_TASKS(Local_605[0 /*20*/].f_1);
							PED::SET_PED_KEEP_TASK(Local_605[0 /*20*/].f_1, true);
							TASK::TASK_SMART_FLEE_PED(Local_605[0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							if (iLocal_210 == 4)
							{
								iLocal_665 = 19;
							}
							else
							{
								iLocal_665 = 18;
							}
						}
					}
				}
				else if (bLocal_548)
				{
				}
				if (!bLocal_536 && __LIB_40__::func_739(0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_714, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_714, false))
					{
						if (!bLocal_257)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_605[0 /*20*/].f_6))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_605[0 /*20*/].f_6, false))
								{
									__LIB_40__::func_705(&uLocal_190, ENTITY::GET_ENTITY_COORDS(Local_605[0 /*20*/].f_6, true), 0, 0, 1, 1, 1);
									if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_FOCUS_CAM_ON_CAR"))
										{
											AUDIO::START_AUDIO_SCENE("TOWING_FOCUS_CAM_ON_CAR");
										}
									}
									else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_FOCUS_CAM_ON_CAR"))
									{
										AUDIO::STOP_AUDIO_SCENE("TOWING_FOCUS_CAM_ON_CAR");
									}
								}
							}
						}
						else
						{
							__LIB_40__::func_634(&uLocal_190, Local_501, 0, 0, 1, 1, 1);
						}
					}
					else
					{
						__LIB_0__::func_345(&uLocal_190, 0, 0);
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
					}
				}
				if (!__LIB_40__::func_739(0))
				{
					__LIB_0__::func_345(&uLocal_190, 0, 0);
				}
				__LIB_40__::func_765(&iLocal_675, 7f, 1);
				__LIB_40__::func_778();
				__LIB_40__::func_752();
				if ((!bLocal_256 || iLocal_721 >= 15) || uLocal_533)
				{
					if (__LIB_43__::func_931(*uParam0, uParam1))
					{
						return 1;
					}
				}
				if (iLocal_721 == 9)
				{
					__LIB_40__::func_770();
				}
				if (iLocal_211 == 1)
				{
					if (iLocal_721 == 9)
					{
						__LIB_42__::func_891(Local_437, &Local_605, &iLocal_714);
					}
				}
				else if (iLocal_211 == 3)
				{
					if (iLocal_721 == 7 || iLocal_721 == 9)
					{
						__LIB_42__::func_891(Local_437, &Local_605, &iLocal_714);
					}
				}
				break;
		}
		PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(1.5f);
		if (__LIB_43__::func_638(*uParam0))
		{
			__LIB_40__::func_745();
		}
		if (bLocal_520)
		{
		}
	}
	return 0;
}

void func_99()//Position - 0xFB6F
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_26), &Global_2671511, 19);
	__LIB_2__::func_68();
	__LIB_43__::func_933(1, 1, 0);
	__LIB_2__::func_152();
}

int func_100(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4)//Position - 0x223347
{
	if ((Global_262145.f_31063 /* Tunable: CAR_MEET_PRIZE_VEHICLE_DISABLE_VEHICLE */ || __LIB_1__::func_342(301, -1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_7__::func_780())
	{
		if (!bParam4)
		{
			return 1;
		}
	}
	if (!__LIB_0__::func_799(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, Param3.f_2, false, false, false);
		__LIB_9__::func_101(uParam0);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		__LIB_43__::func_934(uParam0, iParam1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		return 0;
	}
	return 1;
}

int func_101(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3, bool bParam4)//Position - 0x22D1E7
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (__LIB_7__::func_780())
	{
		if (!bParam4)
		{
			return 1;
		}
	}
	if (!__LIB_0__::func_799(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, Param3.f_2, false, false, false);
		__LIB_9__::func_101(uParam0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
		__LIB_43__::func_935(uParam0, iParam1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		return 0;
	}
	return 1;
}

void func_102(var uParam0)//Position - 0x1AF9B5
{
	if (!uParam0->f_32)
	{
		switch (uParam0->f_19)
		{
			case 8:
				__LIB_11__::func_544(uParam0);
				break;
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				__LIB_43__::func_936(uParam0);
				break;
		}
		uParam0->f_32 = 1;
	}
}

void func_103(var uParam0, var uParam1)//Position - 0x1A3A17
{
	int iVar0;
	iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_278);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0) && uParam1->f_277 > -1)
	{
		__LIB_43__::func_940(uParam1, uParam0);
	}
}

void func_104(var uParam0)//Position - 0x9926E
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
	{
		__LIB_11__::func_105(uParam0);
		__LIB_43__::func_941(uParam0);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

bool func_105(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1C31B1
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return __LIB_43__::func_945(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_106(var uParam0, float fParam1)//Position - 0x17DE2A
{
	char* sVar0;
	sVar0 = __LIB_33__::func_354(33, 0);
	__LIB_41__::func_301(uParam0);
	return __LIB_43__::func_950(uParam0, sVar0, 1, 0, fParam1);
}

int func_107(var uParam0, int iParam1, float fParam2)//Position - 0x17E61C
{
	char* sVar0;
	sVar0 = __LIB_33__::func_354(34, iParam1);
	__LIB_33__::func_357(uParam0);
	__LIB_41__::func_304(uParam0, iParam1);
	return __LIB_43__::func_950(uParam0, sVar0, 0, 1, fParam2);
}

int func_108(var uParam0, float fParam1)//Position - 0x17F1FE
{
	char* sVar0;
	sVar0 = __LIB_33__::func_354(32, 0);
	return __LIB_43__::func_950(uParam0, sVar0, 0, 1, fParam1);
}

struct<5> func_109(var uParam0)//Position - 0x210C1A
{
	struct<5> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	Var0.f_4 = 16777215;
	__LIB_28__::func_732(&Var0);
	iVar1 = 3;
	iVar2 = 3;
	iVar3 = 0;
	fVar4 = 0f;
	iVar5 = 16777215;
	__LIB_43__::func_956(uParam0, &iVar1, &iVar2, &iVar3, &fVar4, &iVar5);
	Var0.f_0 = iVar1;
	Var0.f_1 = iVar2;
	Var0.f_2 = fVar4;
	Var0.f_3 = iVar3;
	Var0.f_4 = iVar5;
	return Var0;
}

void func_110()//Position - 0xBA8F2
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	bVar5 = __LIB_21__::func_493();
	fVar6 = __LIB_20__::func_972();
	fVar6 = (fVar6 * fVar6);
	iVar7 = 0;
	while (iVar7 < Local_197.f_38)
	{
		bVar2 = false;
		bVar3 = false;
		__LIB_33__::func_960(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
		if (bVar2)
		{
			if (!bVar3)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
				{
					__LIB_20__::func_971(iVar7, 1);
				}
				else
				{
					__LIB_20__::func_970(iVar7, 1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					__LIB_20__::func_971(iVar7, 0);
				}
				else
				{
					__LIB_20__::func_970(iVar7, 0);
				}
			}
			if (Local_214.f_156.f_181 != 0)
			{
				Stack.Push(iVar7);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_214.f_156.f_181);
			}
			__LIB_43__::func_965(iVar7, iVar0, bVar3);
		}
		switch (iVar1)
		{
			case 1:
				if (bVar2)
				{
				}
				break;
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						if (__LIB_21__::func_409(iVar7, 20))
						{
							__LIB_21__::func_172();
						}
						__LIB_43__::func_728(iVar7, iVar0);
						__LIB_41__::func_493(iVar7, iVar0);
						__LIB_34__::func_53(iVar7, iVar0, 1);
						if (!__LIB_41__::func_492(iVar7, 0))
						{
							__LIB_43__::func_125(iVar7, iVar0, bVar5);
							__LIB_43__::func_124(iVar7, iVar0, &bVar4);
							__LIB_41__::func_489(iVar7, iVar0, fVar6);
							__LIB_41__::func_488(iVar7, iVar0);
						}
						__LIB_41__::func_487(iVar7, iVar0);
						__LIB_34__::func_45(iVar7, iVar0);
					}
				}
				break;
			case 4:
				__LIB_21__::func_486(iVar7, iVar0);
				break;
			case 6:
				if (bVar2)
				{
					if (!bVar3)
					{
					}
				}
				if (!__LIB_20__::func_901(7))
				{
					__LIB_34__::func_44(iVar7, 1);
				}
				break;
			case 5:
				if (bVar2)
				{
					if (__LIB_20__::func_897(iVar7, 12) && __LIB_1__::func_561(Local_360.f_22[iVar7 /*24*/]))
					{
						__LIB_6__::func_843(&(Local_360.f_22[iVar7 /*24*/]));
					}
				}
				break;
		}
		iVar7++;
	}
	if (!bVar4)
	{
		if (__LIB_0__::func_864(&(Local_220.f_20)))
		{
			__LIB_0__::func_794(&(Local_220.f_20));
		}
	}
	iVar7 = Local_220.f_22;
	__LIB_33__::func_960(iVar7, &bVar2, &bVar3, &iVar0, &iVar1);
	switch (iVar1)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					__LIB_34__::func_53(iVar7, iVar0, 0);
				}
			}
			break;
	}
}

int func_111(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xCCC15
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<13> Var5;
	char[] cVar6[8];
	char* sVar7;
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
	bool bVar18;
	if (__LIB_23__::func_799(uParam2))
	{
		uParam1->f_5533.f_436 = 5;
		return 1;
	}
	if (__LIB_24__::func_261(uParam2) && !__LIB_1__::func_11())
	{
		uParam1->f_5533.f_436 = 5;
		__LIB_19__::func_21(1);
		return 1;
	}
	__LIB_2__::func_466(0);
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 0, 0);
	}
	if (__LIB_1__::func_212() == 1)
	{
		PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	}
	if (__LIB_1__::func_140())
	{
		iVar0 = (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_15;
	}
	else
	{
		iVar0 = (uParam1->f_2959 + uParam1->f_2960);
	}
	if (__LIB_0__::func_448(1))
	{
		bVar2 = true;
	}
	switch (uParam1->f_5533.f_436)
	{
		case 0:
			__LIB_18__::func_915(&(uParam1->f_5533), 0);
			__LIB_18__::func_517(1);
			if ((*uParam3)[0 /*42*/] > -1)
			{
				Var5 = { uParam1->f_2438.f_17[(*uParam3)[0 /*42*/] /*13*/] };
			}
			bVar4 = __LIB_23__::func_774(&Var5, &bVar3);
			if (((__LIB_18__::func_857(&(uParam1->f_5533)) && bVar3) && CAM::IS_SCREEN_FADED_IN()) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
			{
				cVar6 = "SUMMARY";
				sVar7 = "HUD_COLOUR_BLACK" /* GXT: Black */;
				if (__LIB_23__::func_727(uParam0) && !__LIB_23__::func_738())
				{
					iVar8 = __LIB_23__::func_749(uParam0, (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_19, uParam0->f_797);
				}
				else if (__LIB_0__::func_625())
				{
					iVar8 = __LIB_23__::func_766(uParam3);
				}
				else
				{
					iVar8 = __LIB_23__::func_782(uParam0, PLAYER::NETWORK_PLAYER_ID_TO_INT());
				}
				iVar9 = (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_16;
				iVar11 = (__LIB_1__::func_335(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::PARTICIPANT_ID())) - iVar0);
				iVar12 = __LIB_0__::func_966(iVar11, 0);
				iVar13 = iVar12 + 1;
				iVar14 = __LIB_1__::func_68(iVar12, 0, 0);
				iVar15 = __LIB_1__::func_68(iVar13, 0, 0);
				iVar16 = Global_1048576.f_70;
				iVar17 = Global_1048576.f_67;
				uParam1->f_5533.f_419 = 666;
				if (__LIB_23__::func_727(uParam0) && !__LIB_23__::func_738())
				{
					iVar10 = __LIB_36__::func_287(uParam0, (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_19, 0);
				}
				else
				{
					iVar10 = __LIB_36__::func_314(uParam0, PLAYER::PLAYER_ID(), uParam3);
				}
				__LIB_18__::func_841(&(uParam1->f_5533), cVar6, sVar7, 1, 0);
				if (__LIB_18__::func_921() && !__LIB_23__::func_738())
				{
					if (iVar8 == 1)
					{
						__LIB_34__::func_755(&(uParam1->f_5533), cVar6, 1, 1, "", "", "");
					}
					else
					{
						__LIB_34__::func_755(&(uParam1->f_5533), cVar6, 1, 0, "", "", "");
					}
				}
				else
				{
					__LIB_21__::func_829(&(uParam1->f_5533), cVar6, iVar8, 0);
				}
				uParam1->f_5533.f_419 += 2333;
				if (__LIB_1__::func_144())
				{
					__LIB_21__::func_828(&(uParam1->f_5533), cVar6, 1, iVar16, iVar17, bVar4);
					uParam1->f_5533.f_419 += 2333;
				}
				else if (__LIB_1__::func_142())
				{
					if (iVar10 >= Global_1048576.f_74[Global_1048576.f_69 /*69*/].f_62 && iVar8 == 1)
					{
						bVar18 = true;
					}
					__LIB_21__::func_828(&(uParam1->f_5533), cVar6, 0, iVar16, iVar17, bVar18);
					uParam1->f_5533.f_419 += 2333;
				}
				if (bVar2)
				{
					__LIB_43__::func_968(uParam0, uParam2, uParam1, cVar6, iVar8);
				}
				else if (!__LIB_1__::func_140() || __LIB_1__::func_153())
				{
					if (__LIB_1__::func_140())
					{
						iVar1 = Global_2715699.f_3813.f_8;
					}
					else
					{
						iVar1 = (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_55.f_6;
					}
					if (iVar9 != 0)
					{
						__LIB_18__::func_873(&(uParam1->f_5533), cVar6, iVar1, 0, 0);
					}
					else
					{
						__LIB_18__::func_873(&(uParam1->f_5533), cVar6, iVar1, 1, 0);
					}
				}
				if (!__LIB_1__::func_140() || __LIB_1__::func_153())
				{
					if (iVar9 != 0)
					{
						__LIB_18__::func_872(&(uParam1->f_5533), cVar6, iVar9, 0, 0);
						uParam1->f_5533.f_419 += 2333;
						if (bVar2)
						{
							__LIB_22__::func_356(iVar9);
						}
					}
					if (!bVar2)
					{
						__LIB_18__::func_516(&(uParam1->f_5533), cVar6, iVar0, iVar11, iVar14, iVar15, iVar12, iVar13);
					}
				}
				uParam1->f_5533.f_419 += 4666;
				if ((iVar11 + iVar0) > iVar15)
				{
					uParam1->f_5533.f_419 += 1749;
				}
				__LIB_18__::func_584(&(uParam1->f_5533), cVar6, -1, 0);
				__LIB_18__::func_511(&(uParam1->f_5533), cVar6);
				if (!CAM::DOES_CAM_EXIST(uParam1->f_6761))
				{
					if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
					{
						GRAPHICS::ANIMPOSTFX_STOP_ALL();
					}
					if (__LIB_31__::func_708(uParam2, uParam0))
					{
						__LIB_1__::func_222();
					}
					else
					{
						__LIB_1__::func_220();
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					if (!__LIB_0__::func_975() && !__LIB_0__::func_974())
					{
						if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), 0);
						}
						else
						{
							__LIB_2__::func_408(0);
							if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
							{
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
							}
						}
					}
				}
				if (__LIB_0__::func_625())
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_CELEB_SCREEN_ARENA_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_ARENA_SCENE");
					}
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_CELEB_SCREEN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("MP_CELEB_SCREEN_SCENE");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_LEADERBOARD_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_LEADERBOARD_SCENE");
				}
				AUDIO::START_AUDIO_SCENE("MP_JOB_CHANGE_RADIO_MUTE");
				__LIB_0__::func_794(&(uParam1->f_5533.f_430));
				__LIB_0__::func_795(&(uParam1->f_5533.f_430), 0, 0);
				HUD::CLEAR_HELP(true);
				__LIB_19__::func_21(1);
				__LIB_18__::func_836(&(uParam1->f_5533));
				uParam1->f_5533.f_436 = 3;
			}
			else
			{
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
				{
					if (!__LIB_0__::func_864(&(uParam1->f_5533.f_456)))
					{
						__LIB_0__::func_795(&(uParam1->f_5533.f_456), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam1->f_5533.f_456), 1000, 0))
					{
						__LIB_2__::func_418();
					}
				}
				if (!__LIB_18__::func_857(&(uParam1->f_5533)))
				{
				}
				if (!bVar3)
				{
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DeathFailMPIn"))
				{
				}
			}
			break;
		case 3:
			__LIB_18__::func_731(&(uParam1->f_5533), 0);
			if (!uParam1->f_5533.f_427)
			{
				if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && CAM::DOES_CAM_EXIST(uParam1->f_6761))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 0.1f)
					{
						CAM::DETACH_CAM(uParam1->f_6761);
						CAM::STOP_CAM_POINTING(uParam1->f_6761);
					}
				}
				if (__LIB_18__::func_515())
				{
					if (__LIB_31__::func_708(uParam2, uParam0))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Win_Out", 0, false);
					}
					else
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Lose_Out", 0, false);
					}
					__LIB_2__::func_416(&(uParam1->f_6761));
					uParam1->f_5533.f_427 = 1;
				}
			}
			if (__LIB_0__::func_937(&(uParam1->f_5533.f_430), uParam1->f_5533.f_419, 0))
			{
				uParam1->f_5533.f_436 = 5;
				return 1;
			}
			break;
		case 5:
			return 1;
			break;
	}
	return 0;
}

void func_112(int iParam0)//Position - 0x13C963
{
	int iVar0;
	int iVar1;
	struct<101> Var2;
	if (__LIB_0__::func_625())
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 1;
		if (!Global_1659935)
		{
			if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) != 0 && __LIB_18__::func_720(iVar0) > 0)
			{
				__LIB_43__::func_970(&iParam0, iVar0, iVar1, -1);
			}
		}
		else
		{
			Var2.f_9 = 49;
			Var2.f_59 = 2;
			Var2.f_78 = -1;
			Var2.f_79 = -1;
			Var2.f_96 = -1;
			Var2.f_97 = 1;
			Var2.f_99 = 132;
			Var2.f_100 = -1;
			StringCopy(&(Var2.f_1), "AR3NA", 16);
			Var2.f_5 = 131;
			Var2.f_6 = 117;
			Var2.f_8 = 160;
			Var2.f_97 = 1;
			Var2.f_99 = 132;
			Var2.f_98 = 0;
			Var2.f_65 = 1;
			Var2.f_62 = 255;
			Var2.f_63 = 255;
			Var2.f_64 = 255;
			MISC::SET_BIT(&(Var2.f_77), 9);
			Var2.f_9[4] = 6;
			Var2.f_9[5] = 3;
			Var2.f_9[6] = 3;
			Var2.f_9[7] = 3;
			Var2.f_9[9] = 1;
			Var2.f_9[10] = 1;
			Var2.f_9[11] = 4;
			Var2.f_9[12] = 3;
			Var2.f_9[13] = 3;
			Var2.f_9[16] = 5;
			Var2.f_9[18] = 1;
			Var2.f_9[22] = 10;
			Var2.f_9[35] = 4;
			Var2.f_9[40] = 4;
			Var2.f_9[41] = 3;
			Var2.f_9[42] = 4;
			Var2.f_9[43] = 1;
			Var2.f_9[44] = 1;
			Var2.f_9[45] = 1;
			Var2.f_9[48] = 1;
			__LIB_43__::func_151(iParam0, &Var2, 0, 1, 1);
		}
	}
}

bool func_113(var uParam0, var uParam1, int iParam2, struct<3> Param3, float fParam4)//Position - 0x187321
{
	if ((!BitTest(Global_4718592.f_19, 26) || __LIB_18__::func_941(Global_1659903) == 0) || !BitTest((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*74*/])->f_18, 10))
	{
		return __LIB_0__::func_957(uParam1, iParam2, Param3, fParam4, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0);
	}
	return __LIB_43__::func_971(uParam1, Param3, fParam4, 1, 1);
}

void func_114(var uParam0)//Position - 0x19A3F3
{
	int iVar0;
	iVar0 = 1000;
	ENTITY::SET_ENTITY_HEALTH(uParam0->f_22.f_26, iVar0, 0);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
	VEHICLE::SET_VEHICLE_BODY_HEALTH(uParam0->f_22.f_26, SYSTEM::TO_FLOAT(iVar0));
	VEHICLE::SET_INCREASE_WHEEL_CRUSH_DAMAGE(uParam0->f_22.f_26, true);
	__LIB_43__::func_970(&(uParam0->f_22.f_26), uParam0->f_57, 2, -1);
}

void func_115(var uParam0)//Position - 0x19E355
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bVar0 = false;
	if (!__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || __LIB_10__::func_388() == 1)
	{
		if (!BitTest(uParam0->f_1, 6))
		{
			if (!uParam0->f_1.f_34)
			{
				if (!__LIB_34__::func_691(uParam0, __LIB_1__::func_4(), 1))
				{
					if (!__LIB_10__::func_224(PLAYER::PLAYER_ID()))
					{
						if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()) && !__LIB_10__::func_224(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())))
						{
							if (!__LIB_0__::func_983())
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!__LIB_24__::func_265(uParam0, 0))
		{
			bVar0 = false;
		}
		else
		{
			bVar1 = true;
		}
	}
	if (!bVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
		{
			if (!__LIB_10__::func_220())
			{
				if (PED::IS_PED_A_PLAYER(__LIB_1__::func_4()) && __LIB_10__::func_219(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4())))
				{
					bVar0 = true;
				}
			}
			if (!__LIB_10__::func_218())
			{
				if (ENTITY::IS_ENTITY_DEAD(__LIB_1__::func_4(), false))
				{
					bVar0 = true;
				}
			}
		}
	}
	if (bVar0)
	{
		MISC::SET_BIT(&(uParam0->f_47), 1);
		__LIB_43__::func_972(uParam0);
		bVar4 = false;
		if (bVar1)
		{
			if (__LIB_1__::func_711() != __LIB_1__::func_4() && __LIB_34__::func_691(uParam0, __LIB_1__::func_711(), 1))
			{
				bVar4 = true;
			}
			if (!bVar4)
			{
				if (__LIB_1__::func_693(Global_2815059.f_299, 0, 1))
				{
					bVar5 = __LIB_11__::func_680(Global_2815059.f_299, 9);
					bVar6 = __LIB_10__::func_224(Global_2815059.f_299);
				}
				if (((((((((((((((uParam0->f_47.f_2181 == 0 && __LIB_10__::func_217()) && !__LIB_10__::func_216(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_775)) && !__LIB_10__::func_215()) && !__LIB_11__::func_679(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4()))) && !__LIB_10__::func_216(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(__LIB_1__::func_4()))) && Global_1574964 == 0) && Global_1836598 == 0) && bVar5 == 0) && bVar6 == 0) && !__LIB_10__::func_214()) && !__LIB_10__::func_224(PLAYER::PLAYER_ID())) && !__LIB_6__::func_239()) && !BitTest(Global_2815059.f_4660, 31)) && !__LIB_8__::func_875(Global_4718592.f_168757)) && !__LIB_10__::func_213(Global_4718592.f_168757))
				{
					iVar7 = __LIB_13__::func_575();
					if (iVar7 == 1)
					{
						uParam0->f_47.f_2181 = 1;
					}
					else
					{
						__LIB_10__::func_209(&(uParam0->f_47));
						return;
					}
				}
				else
				{
					__LIB_10__::func_209(&(uParam0->f_47));
					if (__LIB_43__::func_165(uParam0, &iVar2, &iVar3, 1, 0, 1))
					{
						__LIB_31__::func_917(uParam0, iVar2, iVar3);
						bVar4 = true;
						uParam0->f_47.f_2181 = 0;
					}
				}
			}
		}
		if (!bVar4)
		{
			if (!__LIB_10__::func_208())
			{
				if (!BitTest(uParam0->f_47, 20))
				{
					MISC::SET_BIT(&(uParam0->f_47), 20);
				}
			}
			else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
			{
				if (__LIB_13__::func_569())
				{
					if (!__LIB_0__::func_864(&(uParam0->f_2247)))
					{
						__LIB_0__::func_795(&(uParam0->f_2247), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam0->f_2247), 5000, 0))
					{
						__LIB_11__::func_780(0);
						Global_2621446.f_81 = 3;
					}
				}
				else if (__LIB_4__::func_934(PLAYER::PLAYER_ID(), 0))
				{
					if (!BitTest(uParam0->f_47, 13))
					{
						MISC::SET_BIT(&(uParam0->f_47), 13);
					}
				}
			}
		}
		else if (BitTest(uParam0->f_47, 13))
		{
			MISC::SET_BIT(&(uParam0->f_47), 14);
		}
	}
	else if (!__LIB_10__::func_208())
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__::func_4()))
		{
			if (BitTest(uParam0->f_47, 20))
			{
				MISC::CLEAR_BIT(&(uParam0->f_47), 20);
			}
		}
	}
	__LIB_10__::func_209(&(uParam0->f_47));
	__LIB_22__::func_385(uParam0);
	__LIB_15__::func_190();
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		__LIB_0__::func_646();
		__LIB_11__::func_828(uParam0);
	}
}

void func_116(var uParam0, bool bParam1, int iParam2)//Position - 0x1A72CA
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0) || (__LIB_10__::func_206(&(uParam0->f_1)) && __LIB_7__::func_700(&(uParam0->f_1))))
	{
		if (bParam1)
		{
			__LIB_43__::func_972(uParam0);
		}
		if (__LIB_24__::func_265(uParam0, 0) && __LIB_43__::func_165(uParam0, &iVar0, &iVar1, 0, 0, 0))
		{
			__LIB_10__::func_909(uParam0, __LIB_10__::func_925(&(uParam0->f_47), iVar0, iVar1));
			__LIB_11__::func_781(&(uParam0->f_1), CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1);
			if ((iParam2 && !__LIB_5__::func_133()) && __LIB_10__::func_388() != 2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	else
	{
		__LIB_11__::func_781(&(uParam0->f_1), CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1);
	}
}

void func_117(var uParam0)//Position - 0x1B27B9
{
	uParam0->f_47.f_1467 = 0;
	if (BitTest(uParam0->f_1.f_2, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 11);
		__LIB_7__::func_694(&(uParam0->f_1), 5);
	}
	else if (BitTest(uParam0->f_1.f_2, 0))
	{
		__LIB_43__::func_972(uParam0);
		__LIB_9__::func_819(&(uParam0->f_1), 0);
		__LIB_10__::func_327(&(uParam0->f_1), 1);
		__LIB_7__::func_694(&(uParam0->f_1), 4);
	}
	else
	{
		__LIB_7__::func_694(&(uParam0->f_1), 6);
	}
}

int func_118(var uParam0)//Position - 0x1C48EF
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_975(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_119(var uParam0, int iParam1, bool bParam2)//Position - 0x1C4D57
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if ((__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1)) && !__LIB_3__::func_601(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 128, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_120(var uParam0)//Position - 0x1DA017
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_977(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_121(var uParam0, int iParam1, bool bParam2)//Position - 0x1DA61A
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CAR_M_EXT_V_T" /* GXT: LS CAR MEET */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_122(var uParam0)//Position - 0x1E3BE2
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_978(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_123(var uParam0, int iParam1, bool bParam2)//Position - 0x1E3DA4
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 127, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_124(var uParam0)//Position - 0x2103C1
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_982(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_125(var uParam0, int iParam1, bool bParam2)//Position - 0x210583
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARC_GARAGE_T"))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 126, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_126(var uParam0)//Position - 0x21E26F
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_984(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_127(var uParam0, int iParam1, bool bParam2)//Position - 0x21E453
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "CASINO_ENT_T" /* GXT: THE DIAMOND CASINO & RESORT */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 125, &Var0, 0, 1, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_128(var uParam0)//Position - 0x22DB40
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_987(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_129(var uParam0, int iParam1, bool bParam2)//Position - 0x22DD24
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 122, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_130(var uParam0, int iParam1, bool bParam2)//Position - 0x2438B0
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_131(var uParam0)//Position - 0x24ED31
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_989(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(var uParam0, int iParam1, bool bParam2)//Position - 0x24F27B
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193() && !MISC::ARE_STRINGS_EQUAL(&(Global_23150.f_1), "HUB_VEH_TITLE" /* GXT: NIGHTCLUB GARAGE */))
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_0__::func_870(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 119, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_133(var uParam0)//Position - 0x26D34C
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_990(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0, int iParam1, bool bParam2)//Position - 0x26DC48
{
	struct<2> Var0;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 16f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1) && !__LIB_2__::func_116(iParam1, 1))
		{
			if (!__LIB_43__::func_974(iParam1, 117, &Var0, 0, 0, 0, 0, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_135(var uParam0)//Position - 0x280E4B
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_991(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x28646B
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	Var0.f_1 = 29;
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1, false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		return 0;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_UPSIDEDOWN(iParam1))
	{
		return 0;
	}
	if (((!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1) && !BitTest(uParam0->f_22, 1)) && ENTITY::GET_ENTITY_MODEL(iParam1) != joaat("oppressor2")) && !__LIB_5__::func_808(PLAYER::PLAYER_ID(), 81))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 1f && !BitTest(uParam0->f_22, 1))
	{
		return 0;
	}
	if (__LIB_3__::func_695())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (__LIB_4__::func_954(PLAYER::PLAYER_ID()))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam1);
		if (((iVar1 == joaat("caddy2") || iVar1 == joaat("caddy3")) || iVar1 == joaat("hauler2")) || iVar1 == joaat("phantom3"))
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_545())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (__LIB_1__::func_512())
	{
		return 0;
	}
	if (Global_2815059.f_28.f_82)
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (!__LIB_3__::func_958())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!__LIB_5__::func_353())
		{
			return 0;
		}
		bVar2 = __LIB_4__::func_633(PLAYER::PLAYER_ID());
		bVar3 = __LIB_0__::func_389(PLAYER::PLAYER_ID());
		if (__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_43__::func_974(iParam1, 1234, &Var0, 0, 0, bVar2, bVar3, iParam2))
			{
				return 0;
			}
		}
	}
	if (__LIB_4__::func_662(ENTITY::GET_ENTITY_MODEL(iParam1)))
	{
		return 0;
	}
	if (__LIB_4__::func_306(PLAYER::PLAYER_ID()) || __LIB_4__::func_305(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_8__::func_937() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if ((!__LIB_1__::func_461(iParam1, 1) && !__LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_2815059.f_303 != iParam1 && __LIB_0__::func_541(iParam1, 0)) && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_541(iParam1, 0) && Global_2703735.f_501[PLAYER::PLAYER_ID()] == iParam1)
	{
		return 0;
	}
	if (Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_0__::func_389(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_262145.f_21126 /* Tunable: DISABLE_STORE_PV */ && __LIB_0__::func_872(iParam1, 1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if ((Global_262145.f_21127 /* Tunable: -210511076 */ && __LIB_4__::func_633(PLAYER::PLAYER_ID())) && __LIB_5__::func_440(iParam1))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
		}
		return 0;
	}
	if (Global_262145.f_21137 /* Tunable: -1117138206 */)
	{
		__LIB_1__::func_775(156, &iVar4, 1);
		__LIB_1__::func_660(__LIB_1__::func_463(), &iVar5);
		if (iVar5 == 156 && __LIB_1__::func_461(iParam1, 1))
		{
		}
		else if (iVar4 > 0)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				__LIB_1__::func_707("PROP_NO_PVTUN" /* GXT: Unable to enter the Mobile Operations Center in this vehicle at this time.  Please enter on foot. */, -1);
			}
			return 0;
		}
	}
	if (__LIB_3__::func_531(iParam1, 0) || __LIB_3__::func_531(iParam1, 1))
	{
		return 0;
	}
	return 1;
}

int func_137(int iParam0)//Position - 0x286A9D
{
	if (HUD::IS_WARNING_MESSAGE_ACTIVE() || __LIB_43__::func_992(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!__LIB_5__::func_187(PLAYER::PLAYER_ID(), -1))
		{
			if (!__LIB_0__::func_893())
			{
				return 1;
			}
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				return 1;
			}
			if (NETWORK::IS_COMMERCE_STORE_OPEN())
			{
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_1946250.f_3630 != __LIB_0__::func_162())
				{
					if ((!__LIB_3__::func_171(Global_1946250.f_3630) && !__LIB_4__::func_902(Global_1946250.f_3630)) && !BitTest(Global_2689235[Global_1946250.f_3630 /*453*/].f_318, 5))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x2A9F8F
{
	if (__LIB_4__::func_976(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (__LIB_3__::func_648() == iParam0)
	{
		return 0;
	}
	if (__LIB_6__::func_775(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		if (!__LIB_43__::func_993(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_139(var uParam0)//Position - 0x2C36B9
{
	if (BitTest(Global_2621446, 2))
	{
		__LIB_43__::func_972(uParam0);
		MISC::CLEAR_BIT(&Global_2621446, 2);
	}
	else
	{
		if (uParam0->f_1.f_29 < 0 || uParam0->f_1.f_29 >= 32)
		{
			uParam0->f_1.f_29 = 0;
		}
		__LIB_43__::func_747(uParam0, uParam0->f_1.f_29);
		uParam0->f_1.f_29++;
	}
}

int func_140(int iParam0)//Position - 0x302D5E
{
	if (__LIB_18__::func_257())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return __LIB_44__::func_3();
			break;
		case 1:
		case 2:
			return __LIB_44__::func_2(0, 0);
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x306623
{
	if (__LIB_18__::func_257())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			return __LIB_44__::func_3();
			break;
		case 1:
		case 2:
			return __LIB_44__::func_2(1, 0);
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_142(var uParam0, var uParam1)//Position - 0x49E2CC
{
	if (__LIB_25__::func_552(195) && __LIB_19__::func_211(uParam1, 13))
	{
		__LIB_35__::func_132(uParam0, __LIB_1__::func_577());
		if (__LIB_44__::func_7(uParam0))
		{
			__LIB_22__::func_564(uParam1, 13);
		}
	}
	if (__LIB_25__::func_552(196) && __LIB_19__::func_211(uParam1, 14))
	{
		__LIB_35__::func_132(&(uParam0->f_112), __LIB_11__::func_219());
		if (__LIB_44__::func_7(&(uParam0->f_112)))
		{
			__LIB_22__::func_564(uParam1, 14);
		}
	}
	if (__LIB_25__::func_552(197) && __LIB_19__::func_211(uParam1, 15))
	{
		__LIB_35__::func_132(&(uParam0->f_224), __LIB_3__::func_969());
		if (__LIB_44__::func_7(&(uParam0->f_224)))
		{
			__LIB_22__::func_564(uParam1, 15);
		}
	}
}

int func_143(var uParam0, var uParam1, int iParam2, var uParam3)//Position - 0x3845C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	if (__LIB_26__::func_666(Global_4456449.f_5))
	{
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if ((uParam0[iVar0 /*303*/])->f_226 && (uParam0[iParam2 /*303*/])->f_226)
			{
				if (!iVar0 == iParam2)
				{
					if ((uParam0[iVar0 /*303*/])->f_250 > (uParam0[iParam2 /*303*/])->f_250)
					{
						iVar1++;
					}
					else if ((uParam0[iVar0 /*303*/])->f_250 == (uParam0[iParam2 /*303*/])->f_250)
					{
						if (__LIB_26__::func_679((uParam0[iVar0 /*303*/])->f_252) && (uParam0[iParam2 /*303*/])->f_252 == -1)
						{
							iVar1++;
						}
						else if ((__LIB_26__::func_679((uParam0[iVar0 /*303*/])->f_252) && __LIB_26__::func_679((uParam0[iParam2 /*303*/])->f_252)) && (uParam0[iVar0 /*303*/])->f_252 < (uParam0[iParam2 /*303*/])->f_252)
						{
							iVar1++;
						}
						else if ((uParam0[iVar0 /*303*/])->f_252 == (uParam0[iParam2 /*303*/])->f_252)
						{
							if ((uParam0[iVar0 /*303*/])->f_241 > (uParam0[iParam2 /*303*/])->f_241)
							{
								iVar1++;
							}
							else if ((uParam0[iVar0 /*303*/])->f_241 == (uParam0[iParam2 /*303*/])->f_241)
							{
								if ((uParam0[iVar0 /*303*/])->f_242 > (uParam0[iParam2 /*303*/])->f_242)
								{
									iVar1++;
								}
								else if ((uParam0[iVar0 /*303*/])->f_242 == (uParam0[iParam2 /*303*/])->f_242)
								{
									if (iVar0 < iParam2)
									{
										iVar1++;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	else if (__LIB_26__::func_665(uParam3) && __LIB_43__::func_308(uParam3, 0))
	{
		iVar1 = __LIB_26__::func_703(&(uParam1->f_8774), iParam2) + 1;
	}
	else if (__LIB_26__::func_661(uParam3))
	{
		iVar1 = __LIB_44__::func_10(uParam3, uParam0, iParam2, 1);
	}
	else if (__LIB_26__::func_702())
	{
		iVar1 = __LIB_43__::func_776(uParam3, uParam0, iParam2, 1, 0, 1);
	}
	else
	{
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if ((uParam0[iVar0 /*303*/])->f_226 && (uParam0[iParam2 /*303*/])->f_226)
			{
				if (iVar0 != iParam2)
				{
					if (iVar0 == (uParam0[iParam2 /*303*/])->f_9)
					{
						if (iParam2 < iVar0)
						{
							iVar1++;
						}
					}
					else if ((uParam0[iVar0 /*303*/])->f_225)
					{
						if (((!BitTest((uParam0[iVar0 /*303*/])->f_228, 13) && !(uParam0[iParam2 /*303*/])->f_225) && !BitTest((uParam0[iVar0 /*303*/])->f_228, 26)) && !__LIB_26__::func_699(uParam0, iVar0))
						{
							iVar1++;
						}
						else if ((uParam0[iParam2 /*303*/])->f_252 == -1)
						{
							if ((uParam0[iVar0 /*303*/])->f_252 > -1)
							{
								iVar1++;
							}
							else if (((uParam0[iParam2 /*303*/])->f_1 < (uParam0[iVar0 /*303*/])->f_1 && __LIB_26__::func_672(uParam3)) && __LIB_26__::func_679((uParam0[iParam2 /*303*/])->f_1))
							{
								iVar1++;
							}
							else if ((uParam0[iParam2 /*303*/])->f_234 < (uParam0[iVar0 /*303*/])->f_234)
							{
								iVar1++;
							}
							else if ((uParam0[iParam2 /*303*/])->f_234 == (uParam0[iVar0 /*303*/])->f_234)
							{
								if ((uParam0[iParam2 /*303*/])->f_235 < (uParam0[iVar0 /*303*/])->f_235)
								{
									iVar1++;
								}
								else if ((uParam0[iParam2 /*303*/])->f_235 == (uParam0[iVar0 /*303*/])->f_235)
								{
									if (iParam2 < iVar0)
									{
										iVar1++;
									}
								}
							}
						}
						else if ((uParam0[iParam2 /*303*/])->f_252 > (uParam0[iVar0 /*303*/])->f_252 && (uParam0[iVar0 /*303*/])->f_252 > -1)
						{
							iVar1++;
						}
						else if ((uParam0[iParam2 /*303*/])->f_252 == (uParam0[iVar0 /*303*/])->f_252)
						{
							if ((uParam0[iParam2 /*303*/])->f_241 > (uParam0[iVar0 /*303*/])->f_241)
							{
								iVar1++;
							}
							else if ((uParam0[iParam2 /*303*/])->f_241 == (uParam0[iVar0 /*303*/])->f_241)
							{
								if ((uParam0[iParam2 /*303*/])->f_242 > (uParam0[iVar0 /*303*/])->f_242)
								{
									iVar1++;
								}
								else if ((uParam0[iParam2 /*303*/])->f_242 == (uParam0[iVar0 /*303*/])->f_242)
								{
									if (iParam2 < iVar0)
									{
										iVar1++;
									}
								}
							}
						}
					}
					else if ((!(uParam0[iParam2 /*303*/])->f_225 && !BitTest((uParam0[iVar0 /*303*/])->f_228, 26)) && !__LIB_26__::func_699(uParam0, iVar0))
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2)))
						{
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
								iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
								iVar5 = PLAYER::GET_PLAYER_PED(iVar2);
								iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
								if (!ENTITY::IS_ENTITY_DEAD(iVar4, false))
								{
									Var9 = { ENTITY::GET_ENTITY_COORDS(iVar4, false) };
								}
								if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
								{
									Var8 = { ENTITY::GET_ENTITY_COORDS(iVar5, false) };
								}
								if ((uParam0[iParam2 /*303*/])->f_234 < (uParam0[iVar0 /*303*/])->f_234)
								{
									iVar1++;
								}
								else if ((uParam0[iParam2 /*303*/])->f_234 == (uParam0[iVar0 /*303*/])->f_234)
								{
									if ((uParam0[iParam2 /*303*/])->f_235 < (uParam0[iVar0 /*303*/])->f_235)
									{
										iVar1++;
									}
									else if ((uParam0[iParam2 /*303*/])->f_235 == (uParam0[iVar0 /*303*/])->f_235)
									{
										if ((uParam0[iParam2 /*303*/])->f_2 && !__LIB_0__::func_86(Global_4718592.f_95507[(uParam0[iParam2 /*303*/])->f_235 /*58*/].f_3))
										{
											Var11 = { Global_4718592.f_95507[(uParam0[iParam2 /*303*/])->f_235 /*58*/].f_3 };
										}
										else
										{
											Var11 = { Global_4718592.f_95507[(uParam0[iParam2 /*303*/])->f_235 /*58*/] };
										}
										if ((uParam0[iVar0 /*303*/])->f_2 && !__LIB_0__::func_86(Global_4718592.f_95507[(uParam0[iVar0 /*303*/])->f_235 /*58*/].f_3))
										{
											Var12 = { Global_4718592.f_95507[(uParam0[iVar0 /*303*/])->f_235 /*58*/].f_3 };
										}
										else
										{
											Var12 = { Global_4718592.f_95507[(uParam0[iVar0 /*303*/])->f_235 /*58*/] };
										}
										fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var8, Var11, __LIB_10__::func_365());
										fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var9, Var12, __LIB_10__::func_365());
										if (fVar6 > fVar7)
										{
											iVar1++;
										}
									}
								}
							}
						}
						else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
						{
							if (iParam2 < iVar0)
							{
								iVar1++;
							}
						}
						else
						{
							iVar1++;
						}
					}
					else if ((uParam0[iParam2 /*303*/])->f_252 == -1)
					{
						if ((uParam0[iVar0 /*303*/])->f_252 > -1)
						{
							iVar1++;
						}
						else if (((uParam0[iParam2 /*303*/])->f_1 < (uParam0[iVar0 /*303*/])->f_1 && __LIB_26__::func_672(uParam3)) && __LIB_26__::func_679((uParam0[iParam2 /*303*/])->f_1))
						{
							iVar1++;
						}
						else if ((uParam0[iParam2 /*303*/])->f_234 < (uParam0[iVar0 /*303*/])->f_234)
						{
							iVar1++;
						}
						else if ((uParam0[iParam2 /*303*/])->f_234 == (uParam0[iVar0 /*303*/])->f_234)
						{
							if ((uParam0[iParam2 /*303*/])->f_235 < (uParam0[iVar0 /*303*/])->f_235)
							{
								iVar1++;
							}
							else if ((uParam0[iParam2 /*303*/])->f_235 == (uParam0[iVar0 /*303*/])->f_235)
							{
								if (iParam2 < iVar0)
								{
									iVar1++;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_26__::func_660(uParam3))
	{
		if ((uParam0[iParam2 /*303*/])->f_226)
		{
			if ((uParam0[iParam2 /*303*/])->f_225)
			{
				if (__LIB_26__::func_680(uParam3))
				{
					if (uParam3->f_833 > 0)
					{
						if (!__LIB_26__::func_679((uParam0[iParam2 /*303*/])->f_252))
						{
							iVar1++;
						}
						else if ((uParam0[iParam2 /*303*/])->f_252 > uParam3->f_833)
						{
							iVar1++;
						}
					}
				}
			}
			else if (__LIB_26__::func_680(uParam3))
			{
				iVar1++;
			}
			else if ((uParam0[iParam2 /*303*/])->f_235 < uParam3->f_826)
			{
				iVar1++;
			}
			else if ((uParam0[iParam2 /*303*/])->f_235 == uParam3->f_826)
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				Var10 = { Global_4718592.f_95507[(uParam0[iParam2 /*303*/])->f_235 /*58*/] };
				iVar5 = PLAYER::GET_PLAYER_PED(iVar2);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(uParam3->f_836), false))
					{
						fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar5, false), Var10, false);
						fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(uParam3->f_836), true), Var10, false);
						if (fVar6 > fVar13)
						{
							iVar1++;
						}
					}
				}
			}
		}
	}
	return iVar1;
}

void func_144(var uParam0, var uParam1, var uParam2)//Position - 0x6FF5E
{
	__LIB_44__::func_12(uParam0, uParam1, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), uParam1->f_5441, 1);
}

void func_145(var uParam0, var uParam1)//Position - 0xAC5ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	struct<3> Var9;
	float fVar10;
	struct<3> Var11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	if (__LIB_0__::func_625())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar3 = -1;
	if (__LIB_35__::func_327(uParam0) != __LIB_0__::func_162())
	{
		iVar1 = PLAYER::GET_PLAYER_PED(__LIB_35__::func_327(uParam0));
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(__LIB_35__::func_327(uParam0));
	}
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
	}
	if (((iVar2 == -1 || iVar3 == -1) || __LIB_27__::func_153(uParam0)) || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if ((uParam0[iVar3 /*303*/])->f_286 == 0)
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (!__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0) && (uParam0[iVar2 /*303*/])->f_4 != 11)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_5441, false)))
				{
					uParam1->f_5441 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
				}
			}
		}
	}
	if ((BitTest((uParam0[iVar2 /*303*/])->f_228, 28) || BitTest((uParam0[iVar2 /*303*/])->f_228, 27)) || ENTITY::GET_ENTITY_ALPHA(iVar0) == 0)
	{
		if (__LIB_2__::func_644())
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		}
		else
		{
			__LIB_26__::func_744();
		}
	}
	if ((uParam0[iVar2 /*303*/])->f_286 != 4)
	{
		if ((((PED::IS_PED_INJURED(iVar0) || PED::IS_PED_INJURED(iVar1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_5441, false)) || __LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0)) || ((uParam0[iVar2 /*303*/])->f_4 == 11 || (uParam0[iVar3 /*303*/])->f_4 == 11))
		{
			if (((uParam0[iVar2 /*303*/])->f_4 == 11 || (uParam0[iVar3 /*303*/])->f_4 == 11) && ((uParam0[iVar2 /*303*/])->f_286 > 0 && (uParam0[iVar2 /*303*/])->f_286 < 5))
			{
				__LIB_26__::func_743(4, uParam0);
			}
			if ((uParam0[iVar2 /*303*/])->f_286 != 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441))
				{
				}
				return;
			}
		}
		if ((((!BitTest((uParam0[iVar2 /*303*/])->f_228, 27) && !BitTest((uParam0[iVar2 /*303*/])->f_228, 28)) && BitTest((uParam0[iVar3 /*303*/])->f_228, 27)) && (uParam0[iVar2 /*303*/])->f_286 == 0) && (uParam0[iVar3 /*303*/])->f_286 > 0)
		{
			MISC::SET_BIT(&((uParam0[iVar2 /*303*/])->f_228), 27);
			MISC::SET_BIT(&((uParam0[iVar2 /*303*/])->f_228), 28);
			__LIB_26__::func_743(1, uParam0);
		}
		if ((((!BitTest((uParam0[iVar2 /*303*/])->f_228, 27) && !BitTest((uParam0[iVar3 /*303*/])->f_228, 27)) && (uParam0[iVar2 /*303*/])->f_286 == 0) && (uParam0[iVar3 /*303*/])->f_286 == 0) && BitTest((uParam0[iVar2 /*303*/])->f_228, 28))
		{
			MISC::CLEAR_BIT(&((uParam0[iVar2 /*303*/])->f_228), 28);
		}
		if (__LIB_0__::func_864(&(uParam1->f_9118)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441) && !__LIB_7__::func_691())
			{
				CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(uParam1->f_5441, 1);
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam1->f_5441);
			}
			if (__LIB_2__::func_815(uParam1->f_9118, 5000, 0))
			{
				__LIB_0__::func_794(&(uParam1->f_9118));
			}
		}
		if ((uParam0[iVar2 /*303*/])->f_286 > 1 && (uParam0[iVar2 /*303*/])->f_286 < 4)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar0))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_5441, true) };
				Var4.f_2 = (Var4.f_2 + 4f);
				ENTITY::SET_ENTITY_COORDS(iVar0, Var4, true, false, false, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::SET_ENTITY_ALPHA(iVar0, 0, false);
				ENTITY::SET_ENTITY_ALPHA(iVar1, 0, false);
			}
		}
	}
	switch ((uParam0[iVar2 /*303*/])->f_286)
	{
		case 0:
			break;
		case 1:
			__LIB_24__::func_264(&fVar5, &fVar6, &fVar7, uParam1->f_5441);
			iVar8 = ENTITY::GET_ENTITY_MODEL(uParam1->f_5441);
			Var9 = { uParam1->f_9123 };
			Var9.f_2 = (Var9.f_2 + 4f);
			fVar10 = 1f;
			if (__LIB_22__::func_267(iVar8))
			{
				fVar10 = 2f;
			}
			if (__LIB_26__::func_742(iVar8))
			{
				fVar10 = 1.55f;
			}
			Var11 = { 0f, 0f, 0f };
			if (((iVar8 == joaat("molotok") || iVar8 == joaat("lazer")) || iVar8 == joaat("hydra")) || iVar8 == joaat("akula"))
			{
				Var11.f_1 = -2f;
			}
			if (iVar8 == joaat("speeder"))
			{
				Var11.f_0 = 0.5f;
				fVar10 = 2f;
				Var11.f_2 = -0.7f;
			}
			if (iVar8 == joaat("dodo"))
			{
				fVar10 = 1.75f;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && PED::GET_VEHICLE_PED_IS_IN(iVar0, false) == uParam1->f_5441)
			{
				if (VEHICLE::IS_TURRET_SEAT(uParam1->f_5441, __LIB_0__::func_336(iVar0, 0)))
				{
					bVar12 = true;
				}
				uParam1->f_9120 = { ENTITY::GET_ENTITY_SPEED_VECTOR(uParam1->f_5441, true) };
				uParam1->f_9123 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_5441, true) };
				uParam1->f_9126 = ENTITY::GET_ENTITY_HEADING(uParam1->f_5441);
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_10__::func_289()) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_9127))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_as_trans");
					uParam1->f_9127 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_as_trans_smoke", uParam1->f_5441, Var11, 0f, 0f, 0f, fVar10, false, false, false, fVar5, fVar6, fVar7, 0f);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_9127))
					{
						__LIB_21__::func_956(&(uParam1->f_9127), iVar8);
					}
				}
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::SET_ENTITY_ALPHA(iVar0, 0, false);
				ENTITY::SET_ENTITY_ALPHA(iVar1, 0, false);
				if (bVar12)
				{
					if (__LIB_15__::func_289(ENTITY::GET_ENTITY_MODEL(uParam1->f_5441)))
					{
						if (__LIB_26__::func_741(uParam1->f_5441, &iVar13))
						{
						}
					}
					else
					{
						iVar13 = 0;
					}
					CAM::SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(iVar13);
				}
				if (!__LIB_0__::func_864(&(uParam1->f_9116)))
				{
					__LIB_0__::func_795(&(uParam1->f_9116), 0, 0);
				}
				if (((ENTITY::GET_ENTITY_ALPHA(iVar0) == 0 && ENTITY::GET_ENTITY_ALPHA(iVar1) == 0) && __LIB_0__::func_864(&(uParam1->f_9116))) && __LIB_2__::func_815(uParam1->f_9116, 2500, 0))
				{
					VEHICLE::GET_VEHICLE_COLOURS(uParam1->f_5441, &(Global_2667225.f_45.f_69.f_5), &(Global_2667225.f_45.f_69.f_6));
					VEHICLE::GET_VEHICLE_EXTRA_COLOURS(uParam1->f_5441, &(Global_2667225.f_45.f_69.f_7), &(Global_2667225.f_45.f_69.f_8));
					Global_2667225.f_45.f_69.f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(uParam1->f_5441);
					VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(uParam1->f_5441, &(Global_2667225.f_45.f_69.f_97));
					VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(uParam1->f_5441, &(Global_2667225.f_45.f_69.f_99));
					Global_2667225.f_45.f_69.f_98 = VEHICLE::GET_VEHICLE_LIVERY2(uParam1->f_5441);
					Global_2667225.f_45.f_69.f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(uParam1->f_5441);
					if (VEHICLE::IS_TURRET_SEAT(uParam1->f_5441, __LIB_0__::func_336(iVar0, 0)))
					{
						bVar12 = true;
					}
					if (AUDIO::IS_VEHICLE_RADIO_ON(uParam1->f_5441))
					{
						uParam1->f_9129 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
						AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
						AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
					}
					else
					{
						uParam1->f_9129 = 255;
					}
					if (__LIB_10__::func_289())
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam1->f_5441, 4, false);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam1->f_5441, 5, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam1->f_5441, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_TEAMS(uParam1->f_5441, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uParam1->f_5441, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != __LIB_0__::func_162())
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(uParam1->f_5441, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), false);
							}
						}
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
					ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
					ENTITY::SET_ENTITY_COORDS(iVar0, Var9, true, false, false, true);
					if (__LIB_7__::func_691())
					{
						MISC::SET_BIT(&(uParam1->f_5513), 18);
						if (bVar12)
						{
							MISC::SET_BIT(&(uParam1->f_5513), 19);
						}
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, 1);
					}
					CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(uParam1->f_5441, 1);
					CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam1->f_5441);
					__LIB_0__::func_795(&(uParam1->f_9118), 0, 0);
					__LIB_0__::func_794(&(uParam1->f_9114));
					__LIB_2__::func_66(20);
					__LIB_2__::func_66(21);
					__LIB_44__::func_14(51, "RC_SETSWP", 0, 1, -1, 2, 1, 0);
					__LIB_26__::func_743(2, uParam0);
				}
			}
			else
			{
				if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_10__::func_289()) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_9127))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_as_trans");
					uParam1->f_9127 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY("scr_as_trans_smoke", uParam1->f_5441, Var11, 0f, 0f, 0f, fVar10, false, false, false, fVar5, fVar6, fVar7, 0f);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_9127))
					{
						__LIB_21__::func_956(&(uParam1->f_9127), iVar8);
					}
				}
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				ENTITY::SET_ENTITY_ALPHA(iVar0, 0, false);
				ENTITY::SET_ENTITY_ALPHA(iVar1, 0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_COORDS(iVar0, Var9, true, false, false, true);
				__LIB_0__::func_795(&(uParam1->f_9118), 0, 0);
				__LIB_0__::func_794(&(uParam1->f_9114));
				__LIB_2__::func_66(20);
				__LIB_2__::func_66(21);
				__LIB_44__::func_14(51, "RC_SETSWP", 0, 1, -1, 2, 1, 0);
				__LIB_26__::func_743(2, uParam0);
			}
			break;
		case 2:
			if (!__LIB_0__::func_864(&(uParam1->f_9114)))
			{
				__LIB_0__::func_795(&(uParam1->f_9114), 0, 0);
			}
			else if (__LIB_2__::func_815(uParam1->f_9114, Global_1964159, 0))
			{
				__LIB_26__::func_743(5, uParam0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && !PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				__LIB_0__::func_794(&(uParam1->f_9114));
				__LIB_26__::func_743(3, uParam0);
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_864(&(uParam1->f_9114)))
			{
				__LIB_0__::func_795(&(uParam1->f_9114), 0, 0);
			}
			else if (__LIB_2__::func_815(uParam1->f_9114, Global_1964159, 0))
			{
				__LIB_26__::func_743(5, uParam0);
			}
			if ((uParam0[iVar3 /*303*/])->f_286 != 2 || (uParam0[iVar3 /*303*/])->f_286 != 1)
			{
				if (!BitTest(uParam1->f_5513, 17))
				{
					iVar15 = PLAYER::PLAYER_ID();
					if (__LIB_26__::func_938(uParam0, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						MISC::CLEAR_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_7), 0);
						__LIB_25__::func_157(0);
						Global_1853348[iVar15 /*834*/].f_96.f_27 = 1;
						__LIB_35__::func_195(uParam0);
					}
					else if (__LIB_26__::func_937(uParam0, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						MISC::CLEAR_BIT(&((uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_7), 1);
						__LIB_25__::func_417(0);
						Global_1853348[iVar15 /*834*/].f_96.f_27 = 0;
						__LIB_35__::func_194(uParam0);
					}
					MISC::SET_BIT(&(uParam1->f_5513), 17);
				}
				if (__LIB_2__::func_644())
				{
					iVar14 = -2;
					if (__LIB_15__::func_289(ENTITY::GET_ENTITY_MODEL(uParam1->f_5441)))
					{
						if (__LIB_26__::func_740(uParam1->f_5441, &iVar14))
						{
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
						{
							return;
						}
						else
						{
							iVar14 = __LIB_0__::func_336(iVar0, 0);
						}
					}
					else
					{
						iVar14 = 0;
					}
				}
				else if (__LIB_10__::func_289())
				{
					iVar14 = -1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_5441, false) && iVar14 != -2)
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam1->f_5441, iVar14, false) == 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam1->f_5441, iVar14, false) == iVar0)
					{
						if ((__LIB_2__::func_644() && PED::IS_PED_IN_ANY_VEHICLE(iVar1, false)) || __LIB_10__::func_289())
						{
							if (__LIB_10__::func_289())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5441))
								{
									bVar16 = true;
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam1->f_5441);
								}
							}
							if ((!BitTest(uParam1->f_5513, 12) && (bVar16 || __LIB_2__::func_644())) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5441))
								{
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
								ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
								ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
								PED::SET_PED_RESET_FLAG(iVar0, 150, true);
								TASK::TASK_ENTER_VEHICLE(iVar0, uParam1->f_5441, -1, iVar14, 2f, 16, 0);
								__LIB_27__::func_102(uParam1->f_5441);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
								PED::SET_PED_RESET_FLAG(iVar0, 150, true);
								MISC::SET_BIT(&(uParam1->f_5513), 12);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5441))
								{
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
							{
								__LIB_0__::func_794(&(uParam1->f_9114));
								__LIB_26__::func_743(5, uParam0);
							}
							else
							{
								if (!bVar16)
								{
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
								{
								}
								if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
								{
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									MISC::CLEAR_BIT(&(uParam1->f_5513), 12);
								}
							}
						}
						else if (__LIB_2__::func_644() && !PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
						{
						}
					}
				}
			}
			break;
		case 4:
			if ((uParam0[iVar2 /*303*/])->f_4 != 11 && (uParam0[iVar3 /*303*/])->f_4 != 11)
			{
				__LIB_26__::func_743(1, uParam0);
			}
			break;
		case 5:
			if (AUDIO::IS_MOBILE_PHONE_RADIO_ACTIVE())
			{
				AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(false);
				AUDIO::SET_MOBILE_PHONE_RADIO_STATE(false);
				AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5441) && uParam1->f_9129 != 255)
				{
					AUDIO::SET_VEH_RADIO_STATION(uParam1->f_5441, AUDIO::GET_RADIO_STATION_NAME(uParam1->f_9129));
				}
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam1->f_9127))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam1->f_9127, false);
			}
			uParam1->f_9120 = { 0f, 0f, 0f };
			uParam1->f_9123 = { 0f, 0f, 0f };
			uParam1->f_9126 = 0f;
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			}
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
			ENTITY::SET_ENTITY_ALPHA(iVar0, 255, false);
			ENTITY::SET_ENTITY_ALPHA(iVar1, 255, false);
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441))
			{
				CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam1->f_5441);
			}
			if (__LIB_10__::func_289())
			{
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam1->f_5441, 4, true);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam1->f_5441, 5, true);
			}
			if (BitTest(uParam1->f_5513, 18))
			{
				if (BitTest(uParam1->f_5513, 19))
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, 4);
				}
				else
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(7, 4);
				}
				MISC::CLEAR_BIT(&(uParam1->f_5513), 18);
				MISC::CLEAR_BIT(&(uParam1->f_5513), 19);
			}
			MISC::CLEAR_BIT(&(uParam1->f_5513), 12);
			MISC::CLEAR_BIT(&((uParam0[iVar2 /*303*/])->f_228), 27);
			MISC::CLEAR_BIT(&(uParam1->f_5513), 17);
			__LIB_0__::func_794(&(uParam1->f_9114));
			__LIB_0__::func_794(&(uParam1->f_9116));
			__LIB_26__::func_743(0, uParam0);
			if (Global_1964158)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) || !PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					MISC::SET_BIT(&(uParam1->f_5513), 25);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false) && PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
					{
						MISC::SET_BIT(&(uParam1->f_5513), 25);
					}
				}
			}
			break;
	}
}

void func_146(var uParam0, var uParam1, bool bParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0xD81C5
{
	int iVar0;
	int iVar1;
	if (!bParam6)
	{
		if (*uParam3 == 0 || *uParam3 == -1)
		{
			return;
		}
	}
	if (!__LIB_26__::func_760(uParam0))
	{
		return;
	}
	iVar0 = __LIB_26__::func_759(uParam1);
	iVar1 = __LIB_26__::func_753(uParam1);
	if (*bParam2)
	{
		if (__LIB_26__::func_666(Global_4456449.f_5) && __LIB_26__::func_758(uParam5, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (*uParam3 < iVar1)
			{
				__LIB_44__::func_16(22, *uParam3, "BM_PBi" /* GXT: Personal Best: ~1~ */, 0, 1, -1, -1082130432, 2, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
			}
		}
		else if (__LIB_26__::func_757(*uParam3))
		{
			if (*uParam3 < iVar0 || __LIB_17__::func_512(iVar0))
			{
				if (__LIB_35__::func_204(uParam5, uParam0))
				{
					__LIB_26__::func_755(uParam5, uParam1, *uParam3);
					__LIB_44__::func_16(21, *uParam3, "BM_WR" /* GXT: World Record: ~a~ */, 0, 1, -1, -1082130432, 2, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
					uParam1->f_5352.f_2 = -1394652000;
					__LIB_26__::func_754(*uParam3);
					__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
					if (!__LIB_41__::func_709(uParam0, 1))
					{
						__LIB_2__::func_428(38, 1, -1);
					}
					__LIB_2__::func_183(11, 1, -1);
					__LIB_43__::func_785(uParam0, 12, uParam1, 0);
				}
			}
			else if (*uParam3 < iVar1 || __LIB_17__::func_512(iVar1))
			{
				__LIB_44__::func_16(21, *uParam3, "BM_PB" /* GXT: Personal Best: ~a~ */, 0, 1, -1, -1082130432, 2, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
				if (!bParam6)
				{
					uParam1->f_5352.f_2 = 1212517035;
				}
				__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
				if (!__LIB_41__::func_709(uParam0, 1))
				{
					__LIB_2__::func_428(38, 1, -1);
				}
				__LIB_43__::func_785(uParam0, 10, uParam1, 0);
			}
		}
		uParam1->f_5352.f_3 = *uParam3;
		if (uParam1->f_5352.f_2 == -1394652000)
		{
			__LIB_1__::func_634(uParam1->f_5352, __LIB_27__::func_183(1));
		}
		else
		{
			__LIB_1__::func_634(uParam1->f_5352, __LIB_4__::func_970(1));
		}
	}
	else if (*uParam4 > 0)
	{
		if (__LIB_26__::func_757(*uParam3))
		{
			if (*uParam3 < iVar0 || __LIB_17__::func_512(iVar0))
			{
				if (__LIB_35__::func_204(uParam5, uParam0))
				{
					__LIB_26__::func_755(uParam5, uParam1, *uParam3);
					__LIB_44__::func_16(20, *uParam3, "BM_WR" /* GXT: World Record: ~a~ */, 0, 1, -1, -1082130432, 2, 0);
					if (!__LIB_35__::func_164(uParam0, 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
					}
					uParam1->f_5352.f_2 = -1394652000;
					__LIB_26__::func_754(*uParam3);
					__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
					if (!__LIB_41__::func_709(uParam0, 1))
					{
						__LIB_2__::func_428(38, 1, -1);
					}
					__LIB_2__::func_183(11, 1, -1);
					__LIB_43__::func_785(uParam0, 12, uParam1, 0);
				}
			}
			else if (*uParam3 < iVar1 || __LIB_17__::func_512(iVar1))
			{
				__LIB_44__::func_16(20, *uParam3, "BM_PB" /* GXT: Personal Best: ~a~ */, 0, 1, -1, -1082130432, 2, 0);
				if (!bParam6)
				{
					uParam1->f_5352.f_2 = 1212517035;
				}
				if (!__LIB_35__::func_164(uParam0, 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
				}
				__LIB_2__::func_553(joaat("MPPLY_TIMES_RACE_BEST_LAP"), 1);
				if (!__LIB_41__::func_709(uParam0, 1))
				{
					__LIB_2__::func_428(38, 1, -1);
				}
				__LIB_43__::func_785(uParam0, 10, uParam1, 0);
			}
			uParam1->f_5352.f_3 = *uParam3;
			if (uParam1->f_5352.f_2 == -1394652000)
			{
				__LIB_1__::func_634(uParam1->f_5352, __LIB_27__::func_183(1));
			}
			else
			{
				__LIB_1__::func_634(uParam1->f_5352, __LIB_4__::func_970(1));
			}
		}
	}
}

void func_147(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xDA3C8
{
	int iVar0;
	(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_12[iParam3] = (MISC::GET_GAME_TIMER() - uParam2->f_3955);
	iVar0 = __LIB_26__::func_765(iParam3, uParam2);
	if (iVar0 == 0)
	{
		uParam2->f_3949 = (iVar0 - uParam2->f_5242);
	}
	else
	{
		uParam2->f_3949 = (uParam2->f_5242 - iVar0);
	}
	if ((!__LIB_44__::func_42(iParam3, BitTest(uParam2->f_5512, 16), Global_1659902) && !__LIB_19__::func_179(iParam3, BitTest(uParam2->f_5512, 16))) && !__LIB_19__::func_179((iParam3 - 1), BitTest(uParam2->f_5512, 16)))
	{
		if (bParam5)
		{
			if (uParam2->f_3949 < 0)
			{
				if (bParam4)
				{
					__LIB_41__::func_743(uParam0, uParam1, 1, __LIB_27__::func_533(iParam3, BitTest(uParam2->f_5512, 16), uParam0->f_572, uParam0->f_729));
				}
				else
				{
					__LIB_41__::func_743(uParam0, uParam1, 0, __LIB_27__::func_533(iParam3, BitTest(uParam2->f_5512, 16), uParam0->f_572, uParam0->f_729));
				}
			}
			else if (bParam4)
			{
				__LIB_41__::func_743(uParam0, uParam1, 2, __LIB_27__::func_533(iParam3, BitTest(uParam2->f_5512, 16), uParam0->f_572, uParam0->f_729));
			}
			else
			{
				__LIB_41__::func_743(uParam0, uParam1, 0, __LIB_27__::func_533(iParam3, BitTest(uParam2->f_5512, 16), uParam0->f_572, uParam0->f_729));
			}
		}
	}
	uParam2->f_3955 = MISC::GET_GAME_TIMER();
}

int func_148(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0xDAEBB
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (Global_4718592.f_107224 > 0)
	{
		if (BitTest(Global_4718592.f_30, 5))
		{
			return 16;
		}
		if (__LIB_44__::func_42(iParam0, bParam4, iParam5))
		{
			return __LIB_44__::func_17(iParam0, bParam4, iParam1);
		}
		if (__LIB_27__::func_533(iParam0, bParam4, Global_4718592.f_107227, Global_4718592.f_107224))
		{
			return __LIB_27__::func_534(iParam0, bParam4);
		}
		if (__LIB_19__::func_179(iParam0, bParam4))
		{
			return 66;
		}
		if (__LIB_26__::func_770(iParam0, bParam4))
		{
			return 11;
		}
		if (__LIB_26__::func_769(iParam0, bParam4))
		{
			return 12;
		}
		Var0 = { Global_4718592.f_95507[iParam0 /*58*/] };
		if (__LIB_26__::func_664(Global_4718592.f_107227))
		{
			iVar5 = (Global_4718592.f_107224 - 1);
		}
		else
		{
			iVar5 = Global_4718592.f_107224;
		}
		if (!bParam3)
		{
			if (iParam0 + 1 == iVar5)
			{
				if (__LIB_26__::func_664(Global_4718592.f_107227))
				{
					Var1 = { Global_4718592.f_95507[(Global_4718592.f_107224 - 1) /*58*/] };
				}
				else
				{
					Var1 = { Global_4718592.f_95507[0 /*58*/] };
				}
			}
			else
			{
				Var1 = { Global_4718592.f_95507[iParam0 + 1 /*58*/] };
			}
			if ((iParam0 - 1) >= 0)
			{
				Var2 = { Global_4718592.f_95507[(iParam0 - 1) /*58*/] };
			}
			else if (__LIB_26__::func_664(Global_4718592.f_107227))
			{
				Var2 = { Global_4718592.f_94880 };
			}
			else
			{
				Var2 = { Global_4718592.f_95507[(Global_4718592.f_107224 - 1) /*58*/] };
			}
		}
		Var3 = { Var2 - Var0 };
		Var4 = { Var1 - Var0 };
		fLocal_22 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
		if (fLocal_22 > 180f)
		{
			fLocal_22 = (360f - fLocal_22);
		}
		if (fLocal_22 < fLocal_23)
		{
			if ((Global_4718592.f_107227 == 3 || Global_4718592.f_107227 == 2) || iParam2 == 0)
			{
				return 8;
			}
			else if ((((Global_4718592.f_107227 == 4 || Global_4718592.f_107227 == 5) || iParam2 == 1) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9)
			{
				return 14;
			}
			else if ((((((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 6) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 0) || Global_4718592.f_107227 == 12) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 20) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 22) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 24) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || Global_4718592.f_107227 == 27) || iParam2 == 2)
			{
				if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 15) && bParam4))
				{
					return 8;
				}
				else
				{
					return 8;
				}
			}
		}
		else if (fLocal_22 < fLocal_24)
		{
			if ((Global_4718592.f_107227 == 3 || Global_4718592.f_107227 == 2) || iParam2 == 0)
			{
				return 7;
			}
			else if ((((Global_4718592.f_107227 == 4 || Global_4718592.f_107227 == 5) || iParam2 == 1) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9)
			{
				return 13;
			}
			else if ((((((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 6) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 0) || Global_4718592.f_107227 == 12) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 20) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 22) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 24) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || Global_4718592.f_107227 == 27) || iParam2 == 2)
			{
				if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 15) && bParam4))
				{
					return 7;
				}
				else
				{
					return 7;
				}
			}
		}
		else if (fLocal_22 < fLocal_25)
		{
			if ((Global_4718592.f_107227 == 3 || Global_4718592.f_107227 == 2) || iParam2 == 0)
			{
				return 6;
			}
			else if ((((Global_4718592.f_107227 == 4 || Global_4718592.f_107227 == 5) || iParam2 == 1) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9)
			{
				return 12;
			}
			else if ((((((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 0) || Global_4718592.f_107227 == 6) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 12) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 20) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 22) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 24) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || Global_4718592.f_107227 == 27) || iParam2 == 2)
			{
				if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 15) && bParam4))
				{
					return 6;
				}
				else
				{
					return 6;
				}
			}
		}
		else if ((Global_4718592.f_107227 == 3 || Global_4718592.f_107227 == 2) || iParam2 == 0)
		{
			return 6;
		}
		else if ((((Global_4718592.f_107227 == 4 || Global_4718592.f_107227 == 5) || iParam2 == 1) || Global_4718592.f_107227 == 8) || Global_4718592.f_107227 == 9)
		{
			return 12;
		}
		else if ((((((((((((((((Global_4718592.f_107227 == 1 || Global_4718592.f_107227 == 0) || Global_4718592.f_107227 == 6) || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) || Global_4718592.f_107227 == 12) || Global_4718592.f_107227 == 13) || Global_4718592.f_107227 == 20) || Global_4718592.f_107227 == 21) || Global_4718592.f_107227 == 22) || Global_4718592.f_107227 == 23) || Global_4718592.f_107227 == 24) || Global_4718592.f_107227 == 25) || Global_4718592.f_107227 == 26) || Global_4718592.f_107227 == 27) || iParam2 == 2)
		{
			if (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[iParam0 /*58*/].f_29, 15) && bParam4))
			{
				return 6;
			}
			else
			{
				return 6;
			}
		}
	}
	return 6;
}

int func_149(var uParam0, var uParam1, struct<3> Param2, bool bParam3, var uParam4, bool bParam5)//Position - 0xDC27F
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	float fVar7;
	var uVar8;
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_86(Param2))
	{
		if (bParam3 > -1 && bParam3 < __LIB_16__::func_696())
		{
			Param2 = { Global_4718592.f_95507[bParam3 /*58*/] };
		}
	}
	if (__LIB_26__::func_949(uParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				Var3 = { __LIB_1__::func_694(iVar2) };
				if (iVar1 == PLAYER::PLAYER_PED_ID() || PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param2, true) <= 18f)
					{
						if ((Var3.f_2 - Param2.f_2) < 28f)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	else if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || __LIB_26__::func_694(uParam0)) || __LIB_26__::func_693(uParam0)) || uParam4->f_9080) || __LIB_26__::func_661(uParam0))
	{
		iVar5 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar5 = 1;
		}
		else if (__LIB_26__::func_661(uParam0))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(__LIB_35__::func_327(uParam1));
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, false);
				iVar5 = 1;
			}
		}
		if (__LIB_26__::func_661(uParam0) && iVar5)
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar1 = PLAYER::PLAYER_PED_ID();
			}
		}
		if (__LIB_44__::func_18(uParam0, bParam3, iVar0, bParam5))
		{
			Param2.f_2 = (Param2.f_2 + 10f);
		}
		if (__LIB_35__::func_207(bParam3, bParam5, 0))
		{
			fVar4 = __LIB_15__::func_569(uParam0);
		}
		else
		{
			fVar4 = __LIB_35__::func_210(uParam0->f_572);
		}
		if (__LIB_1__::func_188(uParam0->f_572))
		{
			__LIB_41__::func_747(&fVar4, bParam3, bParam5);
			Param2 = { Param2 + Vector(15f, 0f, 0f) };
		}
		else if (__LIB_35__::func_207(bParam3, bParam5, 1))
		{
			__LIB_41__::func_747(&fVar4, bParam3, bParam5);
			Param2 = { Param2 + Vector(5f, 0f, 0f) };
		}
		else if (__LIB_44__::func_42(bParam3, bParam5, 0))
		{
			__LIB_41__::func_747(&fVar4, bParam3, bParam5);
			Param2 = { Param2 + Vector(2f, 0f, 0f) };
		}
		else if (__LIB_26__::func_928(uParam0, uParam1))
		{
			fVar4 = (5f * 1.5f);
			__LIB_41__::func_747(&fVar4, bParam3, bParam5);
		}
		else if ((__LIB_35__::func_164(uParam0, 0) || __LIB_18__::func_689()) || __LIB_35__::func_208(bParam3, bParam5) != 1f)
		{
			__LIB_41__::func_747(&fVar4, bParam3, bParam5);
		}
		if ((__LIB_26__::func_769(bParam3, bParam5) && !__LIB_44__::func_18(uParam0, bParam3, iVar0, bParam5)) && !__LIB_35__::func_207(bParam3, bParam5, 0))
		{
			fVar4 = (fVar4 + Global_262145.f_7080 /* Tunable: -1266240950 */);
			fVar4 = (fVar4 + 0.5f);
		}
		Var3 = { __LIB_1__::func_694(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1)) };
		Var6 = { 0f, 0f, 0f };
		if (BitTest(Global_4718592.f_95507[bParam3 /*58*/].f_28, 12) && __LIB_26__::func_769(bParam3, bParam5))
		{
			Var6.f_2 = 11f;
			if (!__LIB_35__::func_207(bParam3, bParam5, 0))
			{
				fVar4 = (fVar4 / 2f);
			}
		}
		fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Param2 + Var6, true);
		uVar8 = __LIB_26__::func_780(bParam3, bParam5);
		if (__LIB_35__::func_207(bParam3, bParam5, 0))
		{
			if (fVar4 == __LIB_15__::func_569(uParam0))
			{
				fVar4 = (fVar4 + 2f);
			}
			if (fVar7 <= fVar4)
			{
				return 1;
			}
		}
		else if ((BitTest(Global_4718592.f_95507[bParam3 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[bParam3 /*58*/].f_29, 15) && bParam5)) || ((BitTest(uParam4->f_11207[__LIB_13__::func_437(bParam3)], __LIB_18__::func_400(bParam3)) && !__LIB_26__::func_769(bParam3, bParam5)) && !__LIB_1__::func_130()))
		{
			if (fVar7 <= fVar4)
			{
				if ((Var3.f_2 - Param2.f_2) < 6f || uVar8)
				{
					if (((Var3.f_2 + 2f) >= Param2.f_2 || (__LIB_35__::func_164(uParam0, 0) && (Var3.f_0 + 1f) >= Param2.f_0)) || uVar8)
					{
						return 1;
					}
				}
			}
		}
		else if (fVar7 <= fVar4)
		{
			if (__LIB_35__::func_209(bParam3, Param2, bParam5) || uVar8)
			{
				if (((Var3.f_2 + 3f) >= Param2.f_2 || (__LIB_35__::func_164(uParam0, 0) && (Var3.f_0 + 1f) >= Param2.f_0)) || uVar8)
				{
					return 1;
				}
			}
		}
	}
	if (__LIB_26__::func_666(Global_4456449.f_5))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param2, true) <= __LIB_35__::func_210(uParam0->f_572))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_150(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0xDC963
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	int iVar3;
	if (((((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_972(PLAYER::PLAYER_ID(), 0, 0)) && __LIB_26__::func_670(uParam2) == 3) && (!__LIB_26__::func_661(uParam0) || !__LIB_2__::func_644())) && !BitTest(Global_4718592.f_32, 19)) && !BitTest(uParam3->f_5513, 30))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (__LIB_26__::func_783(uParam2) && __LIB_35__::func_212(bParam4))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam3->f_5283, Var2, true);
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam3->f_5283, uParam3->f_5422[0 /*3*/], true);
		}
		else
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, Var2, true);
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, uParam3->f_5414, true);
		}
		switch (uParam3->f_5327)
		{
			case 0:
				if (__LIB_1__::func_962(13))
				{
					__LIB_2__::func_66(13);
				}
				if (__LIB_1__::func_962(53))
				{
					__LIB_2__::func_66(53);
				}
				uParam3->f_5325 = 0;
				uParam3->f_5326 = 0;
				bParam4 = bParam4;
				if (fVar0 < fVar1 || fVar0 > (fVar1 + 5f))
				{
					uParam3->f_5331 = fVar0;
					uParam3->f_5332 = (uParam3->f_5331 + 3f);
					uParam3->f_5327 = 1;
				}
				break;
			case 1:
				uParam3->f_5330 = fVar0;
				if (__LIB_1__::func_962(13))
				{
					__LIB_2__::func_66(13);
				}
				if (__LIB_1__::func_962(53))
				{
					__LIB_2__::func_66(53);
				}
				MISC::CLEAR_BIT(&(uParam3->f_5517), 1);
				if (uParam3->f_5330 < uParam3->f_5331)
				{
					uParam3->f_5331 = uParam3->f_5330;
					uParam3->f_5332 = (uParam3->f_5331 + 3f);
				}
				if (uParam3->f_5330 > uParam3->f_5332)
				{
					uParam3->f_5333 = uParam3->f_5330;
					uParam3->f_5325 = MISC::GET_GAME_TIMER();
					uParam3->f_5327 = 2;
				}
				break;
			case 2:
				if (__LIB_1__::func_962(53))
				{
					MISC::SET_BIT(&(uParam3->f_5517), 1);
				}
				uParam3->f_5330 = fVar0;
				if (uParam3->f_5330 > uParam3->f_5333)
				{
					uParam3->f_5333 = uParam3->f_5330;
					uParam3->f_5331 = (uParam3->f_5333 - 2f);
				}
				if (uParam3->f_5330 < uParam3->f_5331)
				{
					uParam3->f_5331 = uParam3->f_5330;
					uParam3->f_5332 = (uParam3->f_5331 + 3f);
					uParam3->f_5327 = 1;
				}
				uParam3->f_5326 = MISC::GET_GAME_TIMER();
				iVar3 = (uParam3->f_5326 - uParam3->f_5325);
				if (iVar3 >= __LIB_26__::func_782(bParam4))
				{
					if (!HUD::IS_PAUSE_MENU_ACTIVE() && !__LIB_0__::func_194(12, -1))
					{
						MISC::SET_BIT(&(uParam3->f_5517), 1);
						__LIB_44__::func_14(53, "BM_WRONG_W" /* GXT: WRONG WAY */, 0, 1, -1, 2, 1, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
						uParam3->f_5331 = (uParam3->f_5330 - 2f);
						uParam3->f_5327 = 3;
					}
				}
				break;
			case 3:
				uParam3->f_5330 = fVar0;
				if (uParam3->f_5330 > uParam3->f_5333)
				{
					uParam3->f_5333 = uParam3->f_5330;
					uParam3->f_5331 = (uParam3->f_5333 - 2f);
				}
				if (((uParam3->f_5330 < uParam3->f_5331 || __LIB_27__::func_105(uParam1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || __LIB_0__::func_194(12, -1))
				{
					if (__LIB_1__::func_962(13))
					{
						__LIB_2__::func_66(13);
					}
					if (__LIB_1__::func_962(53))
					{
						__LIB_2__::func_66(53);
					}
					uParam3->f_5331 = fVar0;
					uParam3->f_5332 = (uParam3->f_5331 + 3f);
					uParam3->f_5325 = 0;
					uParam3->f_5326 = 0;
					uParam3->f_5327 = 1;
				}
				break;
		}
	}
	else
	{
		uParam3->f_5327 = 0;
		if (__LIB_1__::func_962(13))
		{
			__LIB_2__::func_66(13);
		}
		if (__LIB_1__::func_962(53))
		{
			__LIB_2__::func_66(53);
		}
	}
}

void func_151(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xE7D5B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<16> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	if (!__LIB_26__::func_796())
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	}
	else
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(6);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
	if (__LIB_27__::func_153(uParam1) || (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225)
	{
		return;
	}
	bVar0 = __LIB_35__::func_411(uParam2);
	if (iParam4 == 0)
	{
		iParam4 = 1;
	}
	if (bVar0)
	{
		iVar1 = uParam2->f_837;
		iVar2 = uParam2->f_795[(iParam4 - 1)];
		iVar3 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_258;
	}
	else
	{
		iVar1 = iParam5;
		iVar2 = uParam2->f_883[(iParam4 - 1) /*42*/].f_9;
		iVar3 = __LIB_44__::func_10(uParam2, uParam1, NETWORK::PARTICIPANT_ID_TO_INT(), 0);
	}
	if (iVar1 == 0)
	{
		iVar1 = 1;
	}
	iVar5 = 1;
	iVar6 = 3;
	iVar7 = 2;
	if (iVar6 > iVar1)
	{
		iVar6 = iVar1;
		iVar7 = (iVar1 - 1);
	}
	iVar4 = 0;
	while (iVar4 < iVar6)
	{
		StringCopy(&Var8, "", 64);
		if (bVar0)
		{
			if (iVar4 + 1 == iParam4)
			{
				iVar11 = -1;
			}
			else
			{
				iVar11 = uParam2->f_779[iVar4];
			}
			MemCopy(&Var8, {__LIB_26__::func_802(uParam2, uParam1, iVar11)}, 16);
			iVar10 = uParam2->f_795[iVar4];
		}
		else
		{
			iVar9 = uParam2->f_883[iVar4 /*42*/];
			if (iVar9 > -1)
			{
				Var8 = { uParam2->f_15[iVar9 /*16*/] };
			}
			iVar10 = uParam2->f_883[iVar4 /*42*/].f_9;
		}
		__LIB_27__::func_116(iVar10, Var8, iVar5, iVar7 == iVar4, __LIB_26__::func_751(iVar4 + 1));
		iVar5++;
		iVar4++;
	}
	__LIB_16__::func_620(iVar2, "MP_SR_SCORE" /* GXT: YOUR SCORE */, -1, 1, 3 + 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	__LIB_26__::func_801(iVar3, iVar1, "RACE_POSIT" /* GXT: TRACK POSITION */, 1, -1, 3 + 1, 0, 0, 0, 1, 0, 0, 0);
	__LIB_24__::func_355(&(uParam0->f_9130));
}

void func_152(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE98D1
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
	int iVar20[15];
	int iVar21;
	char* sVar22;
	struct<4> Var23;
	int iVar24;
	bool bVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	char* sVar31;
	bool bVar32;
	bVar25 = false;
	iVar26 = -1;
	__LIB_0__::func_467(uParam3->f_3660);
	if (__LIB_35__::func_411(uParam1))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			iVar20[iVar0] = 0;
			iVar0++;
		}
		__LIB_26__::func_809(uParam1, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &iVar13, &iVar14, &iVar15, &iVar16, &iVar17, &iVar18, &iVar19);
	}
	iVar27 = uParam3->f_773;
	Global_1836357 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar25 = false;
		if ((__LIB_35__::func_160(uParam1) && iVar0 == uParam1->f_542) && uParam1->f_542 != -1)
		{
			bVar25 = true;
		}
		if (__LIB_41__::func_760(iVar0, uParam1, uParam2) || bVar25)
		{
			iVar21 = uParam1->f_883[iVar0 /*42*/].f_1;
			iVar4 = iVar21;
			if (__LIB_35__::func_231(uParam2, iVar21, uParam1->f_883[iVar0 /*42*/]))
			{
				MISC::SET_BIT(&(uParam3->f_1706.f_33), 8);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 8);
			}
			if (iVar4 != -1)
			{
				iVar3 = Global_1853348[iVar4 /*834*/].f_205.f_6;
			}
			if (uParam1->f_883[iVar0 /*42*/] == NETWORK::PARTICIPANT_ID_TO_INT() || (uParam1->f_883[iVar0 /*42*/] != -1 && (BitTest((uParam2[uParam1->f_883[iVar0 /*42*/] /*303*/])->f_228, 26) || __LIB_26__::func_699(uParam2, uParam1->f_883[iVar0 /*42*/]))))
			{
				MISC::SET_BIT(&(uParam3->f_1706.f_33), 9);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 9);
				uParam3->f_1706.f_26 = 0;
			}
			uParam3->f_1706.f_115 = 0;
			if (__LIB_27__::func_120(uParam2, uParam1->f_883[iVar0 /*42*/]))
			{
				MISC::SET_BIT(&(uParam3->f_1706.f_33), 9);
				uParam3->f_1706.f_115 = 66;
			}
			else
			{
				uParam3->f_1706.f_115 = 0;
			}
			if (__LIB_35__::func_411(uParam1))
			{
				iVar28 = uParam1->f_837;
				if (__LIB_26__::func_949(uParam1) || __LIB_26__::func_661(uParam1))
				{
					iVar29 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
					iVar29 = (iVar29 / 2);
					if (iVar28 > iVar29)
					{
						iVar28 = iVar29;
					}
				}
				MISC::SET_BIT(&(uParam3->f_1706.f_33), 2);
				uParam3->f_1706.f_1 = { uParam1->f_15[uParam1->f_883[iVar0 /*42*/] /*16*/] };
				iVar1 = uParam1->f_883[iVar0 /*42*/].f_30;
				if (iVar1 != -1)
				{
					iVar2 = __LIB_23__::func_761(iVar1, iVar28, iVar20[iVar1], iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, uParam1->f_764, uParam1->f_765, uParam1->f_766, uParam1->f_767, uParam1->f_768, uParam1->f_769, uParam1->f_770, uParam1->f_778, 1, 1, uParam1->f_771, uParam1->f_772, uParam1->f_773, uParam1->f_774, uParam1->f_775, uParam1->f_776, uParam1->f_777, iVar12, iVar13, iVar14, iVar15, iVar16, iVar17, iVar18);
					uParam3->f_1706.f_31 = __LIB_23__::func_760(iVar1, iVar28, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, iVar11, iVar12, uParam1->f_764, uParam1->f_765, uParam1->f_766, uParam1->f_767, uParam1->f_768, uParam1->f_769, uParam1->f_770, uParam1->f_778, 1, iVar13, iVar14, iVar15, iVar16, iVar17, iVar18, iVar19, uParam1->f_771, uParam1->f_772, uParam1->f_773, uParam1->f_774, uParam1->f_775, uParam1->f_776, uParam1->f_777);
					if (iVar21 == PLAYER::PLAYER_ID())
					{
						uParam3->f_1706.f_35 = (iVar20[iVar1] + uParam3->f_1706.f_31);
					}
					__LIB_43__::func_252(uParam1, uParam2, uParam3, iVar4, (uParam2[uParam1->f_883[iVar0 /*42*/] /*303*/])->f_252);
					uParam3->f_1706.f_25 = __LIB_31__::func_831((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_10, iVar1, 1, 16);
					if ((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_10 == iVar1)
					{
						MISC::SET_BIT(&(uParam3->f_1706.f_33), 9);
					}
					else
					{
						bVar30 = BitTest(uParam3->f_1706.f_33, 4);
						uParam3->f_1706.f_26 = __LIB_26__::func_807(iVar0, uParam3->f_1706.f_29, bVar30, iVar27);
					}
					if (iVar2 == uParam3->f_1706.f_31)
					{
						iVar26 = __LIB_44__::func_45(uParam1, uParam2, iVar1, iVar28, -1, 0);
					}
					else
					{
						iVar26 = -2;
					}
					if (__LIB_26__::func_661(uParam1))
					{
						MemCopy(&sVar31, {__LIB_26__::func_802(uParam1, uParam2, iVar1)}, 16);
					}
					__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, iVar3, uParam3->f_1706.f_29, uParam3->f_1706.f_25, 1, iVar26, &sVar31, 0, -1082130432, -1, -1);
					uParam3->f_1706.f_38[iVar4 /*2*/].f_1 = iVar2;
					Global_1836357++;
					iVar20[iVar1]++;
				}
			}
			else
			{
				if (iVar21 == PLAYER::PLAYER_ID())
				{
					uParam3->f_1706.f_25 = __LIB_0__::func_997(1);
					uParam3->f_1706.f_35 = iVar2;
				}
				else
				{
					uParam3->f_1706.f_25 = 28;
				}
				if (!bVar25)
				{
					if (__LIB_41__::func_709(uParam1, 1))
					{
						uParam3->f_1706.f_29 = uParam3->f_3949;
					}
					else
					{
						__LIB_43__::func_252(uParam1, uParam2, uParam3, iVar4, (uParam2[uParam1->f_883[iVar0 /*42*/] /*303*/])->f_252);
					}
				}
				if (__LIB_26__::func_666(Global_4456449.f_5))
				{
					uParam3->f_1706.f_28 = (uParam2[uParam1->f_883[iVar0 /*42*/] /*303*/])->f_250;
					iVar24 = uParam3->f_1706.f_28;
				}
				else
				{
					iVar24 = uParam3->f_1706.f_29;
					uParam3->f_1706.f_26 = 0;
					if (!bVar25)
					{
						if (!__LIB_41__::func_709(uParam1, 1))
						{
							bVar32 = BitTest(uParam3->f_1706.f_33, 4);
							uParam3->f_1706.f_26 = __LIB_26__::func_807(iVar0, iVar24, bVar32, iVar27);
						}
					}
				}
				if (!__LIB_35__::func_160(uParam1))
				{
					uParam3->f_1706.f_1 = { uParam1->f_15[uParam1->f_883[iVar0 /*42*/] /*16*/] };
					__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, iVar3, iVar24, uParam3->f_1706.f_25, 1, iVar2 + 1, 0, 0, -1082130432, -1, -1);
					uParam3->f_1706.f_38[iVar4 /*2*/].f_1 = iVar2;
					Global_1836357++;
					iVar2++;
				}
				else if (uParam1->f_543 == 1)
				{
					if (iVar2 == (uParam1->f_543 - 1))
					{
						StringCopy(&(uParam3->f_1706.f_1), __LIB_18__::func_521(), 64);
						MISC::SET_BIT(&(uParam3->f_1706.f_33), 1);
						__LIB_41__::func_759(uParam1, uParam2, uParam3);
						__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, 99, iVar24, uParam3->f_1706.f_25, 1, iVar2 + 1, 0, 0, -1082130432, -1, -1);
						Global_1836357++;
						iVar2++;
					}
					if (iVar0 != 0)
					{
						if (uParam1->f_883[iVar0 /*42*/] != -1)
						{
							uParam3->f_1706.f_1 = { uParam1->f_15[uParam1->f_883[iVar0 /*42*/] /*16*/] };
						}
						MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 1);
						__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, iVar3, iVar24, uParam3->f_1706.f_25, 1, iVar2 + 1, 0, 0, -1082130432, -1, -1);
						Global_1836357++;
						iVar2++;
					}
				}
				else
				{
					if (iVar0 != uParam1->f_542)
					{
						if (uParam1->f_883[iVar0 /*42*/] != -1)
						{
							uParam3->f_1706.f_1 = { uParam1->f_15[uParam1->f_883[iVar0 /*42*/] /*16*/] };
						}
						MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 1);
						__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, iVar3, iVar24, uParam3->f_1706.f_25, 1, iVar2 + 1, 0, 0, -1082130432, -1, -1);
						Global_1836357++;
						iVar2++;
					}
					if (iVar2 == (uParam1->f_543 - 1))
					{
						StringCopy(&(uParam3->f_1706.f_1), __LIB_18__::func_521(), 64);
						MISC::SET_BIT(&(uParam3->f_1706.f_33), 1);
						__LIB_41__::func_759(uParam1, uParam2, uParam3);
						__LIB_34__::func_667(iParam0, &(uParam3->f_3660), &(uParam3->f_1706), iVar2, Var23, sVar22, 99, iVar24, uParam3->f_1706.f_25, 1, iVar2 + 1, 0, 0, -1082130432, -1, -1);
						Global_1836357++;
						iVar2++;
					}
				}
			}
		}
		iVar0++;
	}
	__LIB_1__::func_975();
	MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 7);
}

void func_153(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, bool bParam20, var uParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29)//Position - 0x11F996
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_23__::func_698(1))
	{
		return;
	}
	bVar0 = false;
	iVar2 = iParam19;
	if (iParam17 != -1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam4[iParam17 /*16*/]))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam17)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam17));
				StringCopy(uParam4[iParam17 /*16*/], PLAYER::GET_PLAYER_NAME(iVar3), 64);
				__LIB_21__::func_782(uParam0, iVar3, iParam17);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam4[iParam17 /*16*/]))
		{
			StringCopy(uParam4[iParam17 /*16*/], "Unknown Player", 64);
		}
		iVar1 = (iParam15 - Global_1836355);
		if (bParam20)
		{
			iParam16 = iParam24;
		}
		else if (uParam0->f_473)
		{
			if (iParam16 >= uParam0->f_479)
			{
				iVar1++;
			}
		}
		else
		{
			iParam16 = iParam15 + 1;
		}
		__LIB_44__::func_23(uParam0, uParam1, iParam2, iParam22, iParam5, iParam13, iParam14, iParam23, iParam26, uParam21, bParam20);
		if (iVar1 >= 0 && iVar1 <= 16)
		{
			__LIB_43__::func_794(uParam1, iParam2, bVar0, iParam19, iVar1, bParam20, iParam13, iParam14);
			__LIB_43__::func_793(uParam1, iParam2, bVar0, iParam19, iVar1, iParam13, iParam14, iParam27, iParam29);
			__LIB_22__::func_348(uParam0, uParam1, iVar1);
			__LIB_19__::func_6(uParam1, iVar1, &(Global_1836159[iVar2 /*6*/]));
			__LIB_24__::func_205(uParam0, uParam1, iParam17, iParam16, iVar1, bParam20);
			__LIB_23__::func_675(uParam1, iParam2, uParam4, iVar1, iParam17, 0);
			__LIB_41__::func_768(&(uParam0->f_17), iParam2, uParam1, uParam4, iParam17, iVar1);
			__LIB_34__::func_666(uParam0, uParam1, iParam2, iParam3, iParam5, fParam6, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam17, iVar1, iParam25, iParam28, iParam27);
			__LIB_22__::func_346(uParam0, uParam1, iParam2, iVar1);
			__LIB_24__::func_326(uParam1, iParam19, iVar1, iParam18);
			__LIB_24__::func_325(uParam1, iParam2, iParam19, iParam16);
			__LIB_19__::func_7(uParam1, uParam0->f_500, uParam0->f_501, iVar1);
		}
	}
}

void func_154(bool bParam0, bool bParam1, int iParam2)//Position - 0x166F85
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703735)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[iVar0], 250);
			__LIB_44__::func_26(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			__LIB_44__::func_26(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], false);
		}
	}
}

void func_155(var uParam0, var uParam1, var uParam2)//Position - 0x16C4B3
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (!__LIB_41__::func_789(uParam0, uParam1))
	{
		return;
	}
	iVar0 = (uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_235;
	iVar1 = (iVar0 - 1);
	if (iVar1 < 0)
	{
		iVar1 = (uParam0->f_729 - 1);
	}
	fVar2 = 1f;
	if (__LIB_10__::func_365())
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441))
		{
			iVar3 = ENTITY::GET_ENTITY_MODEL(uParam1->f_5441);
			bVar4 = ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar3) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar3)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(iVar3)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar3));
			fVar2 = __LIB_0__::func_373(bVar4, 1.1f, 1f);
		}
	}
	iVar5 = uParam1->f_4657;
	if (__LIB_26__::func_661(uParam0))
	{
		if (__LIB_35__::func_411(uParam0))
		{
			iVar5 = __LIB_43__::func_776(uParam0, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), 0, 0, 0);
		}
		else
		{
			iVar5 = __LIB_44__::func_10(uParam0, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), 0);
		}
	}
	switch (iVar5)
	{
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_5216), 1);
			MISC::CLEAR_BIT(&(uParam1->f_5216), 2);
			if (BitTest(uParam1->f_5216, 0))
			{
				if (BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
				{
					__LIB_26__::func_776(uParam1, 0);
				}
			}
			else if (!BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
			{
				if (uParam0->f_2231 < 1f)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), (uParam0->f_2231 * fVar2));
				}
				MISC::SET_BIT(&(uParam1->f_5216), 0);
			}
			break;
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_5216), 0);
			MISC::CLEAR_BIT(&(uParam1->f_5216), 2);
			if (BitTest(uParam1->f_5216, 1))
			{
				if (BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
				{
					__LIB_26__::func_776(uParam1, 1);
				}
			}
			else if (!BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
			{
				if (uParam0->f_2232 < 1f)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), (uParam0->f_2232 * fVar2));
				}
				MISC::SET_BIT(&(uParam1->f_5216), 1);
			}
			break;
		case 3:
			MISC::CLEAR_BIT(&(uParam1->f_5216), 0);
			MISC::CLEAR_BIT(&(uParam1->f_5216), 1);
			if (BitTest(uParam1->f_5216, 2))
			{
				if (BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
				{
					__LIB_26__::func_776(uParam1, 2);
				}
			}
			else if (!BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_28, 3))
			{
				if (uParam0->f_2233 < 1f)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), (uParam0->f_2233 * fVar2));
				}
				MISC::SET_BIT(&(uParam1->f_5216), 2);
			}
			break;
		default:
			if ((BitTest(uParam1->f_5216, 0) || BitTest(uParam1->f_5216, 1)) || BitTest(uParam1->f_5216, 2))
			{
				if (1f < 1f)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				}
				MISC::CLEAR_BIT(&(uParam1->f_5216), 0);
				MISC::CLEAR_BIT(&(uParam1->f_5216), 1);
				MISC::CLEAR_BIT(&(uParam1->f_5216), 2);
			}
			break;
	}
}

void func_156(var uParam0, float fParam1, int iParam2)//Position - 0x16EEA9
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	iVar0 = PLAYER::PLAYER_PED_ID();
	fVar1 = ENTITY::GET_ENTITY_HEADING(iVar0);
	Var2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
	fVar3 = 0f;
	if (__LIB_0__::func_864(uParam0))
	{
		if (__LIB_0__::func_937(uParam0, SYSTEM::ROUND((fParam1 * 1000f)), 0))
		{
		}
		else
		{
			__LIB_44__::func_14(27, "ARENA_RSTC1", "ARENA_RSTC2", 1, 10000, 6, 1, 0);
			return;
		}
	}
	else
	{
		__LIB_0__::func_627(uParam0, 0, 0);
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iVar0, false)))
	{
		iVar4 = 1;
		iVar5 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
		fVar1 = ENTITY::GET_ENTITY_HEADING(iVar5);
		Var2 = { ENTITY::GET_ENTITY_COORDS(iVar5, true) };
		if (BitTest(Global_4718592.f_16, 1) || BitTest(Global_4718592.f_21, 18))
		{
			ENTITY::SET_ENTITY_PROOFS(iVar5, false, false, false, false, false, false, false, false);
		}
		if (!__LIB_0__::func_157(0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
		}
		__LIB_1__::func_751();
		ENTITY::SET_ENTITY_INVINCIBLE(iVar5, false);
		ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			NETWORK::NETWORK_EXPLODE_VEHICLE(iVar5, true, false, NETWORK::PARTICIPANT_ID_TO_INT());
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, PLAYER::PLAYER_PED_ID());
		}
	}
	else
	{
		iVar4 = 1;
		if (!__LIB_0__::func_157(0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
		}
		ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, false, false);
		__LIB_1__::func_751();
		if (!PED::IS_PED_SWIMMING(iVar0))
		{
			FIRE::ADD_EXPLOSION(Var2, 1, 1f, true, false, 1f, false);
			PED::SET_PED_TO_RAGDOLL(iVar0, 5000, 10000, 0, true, true, false);
			Var6 = { ENTITY::GET_ENTITY_VELOCITY(iVar0) };
			ENTITY::SET_ENTITY_VELOCITY(iVar0, Var6 + Vector(15f, 0f, 0f));
		}
		else
		{
			ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
		}
	}
	if (iVar4 && iParam2)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var2, &fVar3, false, false))
		{
			Var2.f_2 = fVar3;
			Var7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar1, 3f, 0f, 0f) };
			Var8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar1, 0f, 3f, 0f) };
			Var9 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar1, 0f, -3f, 0f) };
			Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var2, fVar1, -3f, 0f, 0f) };
			FIRE::ADD_EXPLOSION(Var7, 1, 0.8f, false, false, 1f, false);
			FIRE::ADD_EXPLOSION(Var8, 1, 0.8f, false, false, 1f, false);
			FIRE::ADD_EXPLOSION(Var9, 1, 0.8f, false, false, 1f, false);
			FIRE::ADD_EXPLOSION(Var10, 1, 0.8f, false, false, 1f, false);
		}
	}
}

void func_157(var uParam0, var uParam1, var uParam2)//Position - 0x176CC7
{
	int iVar0;
	switch (__LIB_26__::func_882(uParam2))
	{
		case 0:
			if (__LIB_44__::func_28(uParam0, uParam1, uParam2))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
				__LIB_26__::func_974();
				__LIB_26__::func_857();
				if (!__LIB_26__::func_666(Global_4456449.f_5))
				{
					if (__LIB_43__::func_308(uParam0, 0))
					{
						__LIB_26__::func_910(1);
					}
					if (!__LIB_26__::func_721(uParam0) || __LIB_26__::func_661(uParam0))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_448(1)) && !__LIB_26__::func_928(uParam0, uParam1))
						{
							uParam2->f_5441 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							__LIB_26__::func_832(uParam2);
						}
					}
				}
				if (__LIB_26__::func_828(uParam1))
				{
					__LIB_41__::func_763(uParam0, uParam1, uParam2, __LIB_35__::func_167(uParam0, uParam2));
				}
				else if (__LIB_26__::func_665(uParam0) || (__LIB_0__::func_625() && !__LIB_26__::func_853(uParam1)))
				{
					if (uParam2->f_3956 == 0)
					{
						if (__LIB_35__::func_159(uParam0))
						{
							iVar0 = uParam0->f_1;
						}
						else
						{
							iVar0 = uParam0->f_2;
						}
					}
					else
					{
						iVar0 = uParam2->f_3956;
					}
					__LIB_41__::func_763(uParam0, uParam1, uParam2, iVar0);
				}
				else if (BitTest(uParam2->f_5511, 21) || __LIB_26__::func_666(Global_4456449.f_5))
				{
					__LIB_41__::func_763(uParam0, uParam1, uParam2, uParam2->f_3956);
				}
				if ((!__LIB_26__::func_852(uParam1) && !__LIB_26__::func_835(uParam1)) && (!__LIB_1__::func_129() || BitTest(uParam2->f_5511, 21)))
				{
					__LIB_26__::func_788(uParam1);
				}
				__LIB_2__::func_215();
				Global_1836361 = 0;
				Global_1836360 = 0;
				PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
				AUDIO::STOP_STREAM();
				__LIB_23__::func_639(uParam2->f_774, __LIB_27__::func_153(uParam1), __LIB_26__::func_850(uParam1));
				__LIB_26__::func_881(uParam2, 2);
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
			__LIB_35__::func_268(uParam0, uParam1, uParam2);
			__LIB_26__::func_857();
			__LIB_26__::func_881(uParam2, 3);
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
			__LIB_26__::func_857();
			Global_1836361 = 0;
			MISC::SET_BIT(&(uParam2->f_5245.f_1), 4);
			if (__LIB_41__::func_793(uParam0, uParam1, uParam2))
			{
				MISC::SET_BIT(&(uParam2->f_5517), 29);
				__LIB_22__::func_393(&(uParam2->f_2353), 0);
			}
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			__LIB_26__::func_966(uParam1, 4);
			break;
	}
}

void func_158(var uParam0, var uParam1, var uParam2)//Position - 0x17755C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_26__::func_660(uParam0) && !__LIB_26__::func_666(Global_4456449.f_5))
	{
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5441))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(uParam2->f_5441);
				if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
				{
					iVar0 = 1;
				}
			}
			if (__LIB_1__::func_188(uParam0->f_572) || (__LIB_10__::func_365() && iVar0))
			{
				__LIB_41__::func_794(1, 0, 1);
				if (__LIB_26__::func_886())
				{
					__LIB_43__::func_785(uParam0, 11, uParam2, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_THE_BRIDGE", "HUD_AWARDS", true);
				}
			}
		}
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
		{
			if (__LIB_26__::func_885(uParam2, &iVar2))
			{
				__LIB_43__::func_785(uParam0, iVar2, uParam2, 0);
			}
		}
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
		{
			if (!BitTest(uParam2->f_5515, 4))
			{
				if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_235 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							uParam2->f_5339 = ENTITY::GET_ENTITY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							MISC::SET_BIT(&(uParam2->f_5515), 4);
						}
					}
				}
			}
			else if (BitTest(uParam2->f_5515, 4))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::GET_ENTITY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < uParam2->f_5339)
						{
							MISC::CLEAR_BIT(&(uParam2->f_5515), 4);
						}
					}
				}
				else
				{
					MISC::CLEAR_BIT(&(uParam2->f_5515), 4);
				}
				if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 > uParam2->f_4660 || BitTest(uParam2->f_5511, 21))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (uParam2->f_5339 == ENTITY::GET_ENTITY_HEALTH(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								__LIB_2__::func_69(1501, -1);
								iVar3 = __LIB_1__::func_360(1501, -1, 0);
								if ((iVar3 % 5) == 0)
								{
									if (__LIB_1__::func_188(uParam0->f_572))
									{
										__LIB_2__::func_424(3, 5, 1);
									}
									else
									{
										__LIB_2__::func_424(3, 4, 1);
									}
								}
								if (!__LIB_26__::func_702())
								{
									if (!BitTest(uParam2->f_5515, 9))
									{
										__LIB_43__::func_785(uParam0, 5, uParam2, 0);
										MISC::SET_BIT(&(uParam2->f_5515), 9);
									}
								}
							}
						}
					}
					MISC::CLEAR_BIT(&(uParam2->f_5515), 4);
				}
			}
		}
		if (!BitTest(uParam2->f_5515, 10) && !__LIB_26__::func_702())
		{
			if (!__LIB_26__::func_666(Global_4456449.f_5))
			{
				if (uParam0->f_839 > 1)
				{
					if (BitTest(uParam2->f_5515, 3))
					{
						if (__LIB_26__::func_762(uParam2))
						{
							if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 > uParam2->f_4660)
							{
								__LIB_43__::func_785(uParam0, 3, uParam2, 0);
								MISC::SET_BIT(&(uParam2->f_5515), 10);
								MISC::CLEAR_BIT(&(uParam2->f_5515), 3);
							}
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam2->f_5515), 3);
						}
					}
				}
			}
		}
		if (__LIB_35__::func_329(uParam0))
		{
			if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (BitTest(Global_4718592.f_14, 11))
							{
								if (VEHICLE::IS_VEHICLE_PRODUCING_SLIP_STREAM(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0f)
								{
									if (!BitTest(uParam2->f_5516, 3))
									{
										AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_5344, "Slipstream_Leader", "DLC_Biker_SL_Sounds", true);
										MISC::SET_BIT(&(uParam2->f_5516), 3);
									}
								}
								else
								{
									__LIB_26__::func_884(uParam2);
								}
							}
							if (VEHICLE::GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 0f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0f)
							{
								if (!BitTest(uParam2->f_5516, 0))
								{
									AUDIO::START_AUDIO_SCENE("RACES_SLIPSTREAM_SCENE");
									if (BitTest(Global_4718592.f_14, 11))
									{
										AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_5343, "Slipstream_Follower", "DLC_Biker_SL_Sounds", true);
									}
									else if (__LIB_35__::func_164(uParam0, 0))
									{
										AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_5343, "Slipstream", "DLC_Stunt_Race_Frontend_Sounds", true);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(uParam2->f_5343, "SLIPSTREAM_MASTER", 0, true);
									}
									MISC::SET_BIT(&(uParam2->f_5516), 0);
								}
								__LIB_44__::func_29(uParam0, uParam2);
							}
							else
							{
								if (BitTest(uParam2->f_5516, 0))
								{
									AUDIO::STOP_SOUND(uParam2->f_5343);
									AUDIO::STOP_AUDIO_SCENE("RACES_SLIPSTREAM_SCENE");
									MISC::CLEAR_BIT(&(uParam2->f_5516), 0);
								}
								uParam2->f_5342 = 0;
							}
						}
						else if (__LIB_10__::func_289())
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
						}
					}
				}
			}
			else if (BitTest(uParam2->f_5516, 0))
			{
				AUDIO::STOP_SOUND(uParam2->f_5343);
				AUDIO::STOP_AUDIO_SCENE("RACES_SLIPSTREAM_SCENE");
				MISC::CLEAR_BIT(&(uParam2->f_5516), 0);
			}
		}
		else if (__LIB_10__::func_365())
		{
			if (BitTest(uParam2->f_5516, 0))
			{
				AUDIO::STOP_SOUND(uParam2->f_5343);
				AUDIO::STOP_AUDIO_SCENE("RACES_SLIPSTREAM_SCENE");
				MISC::CLEAR_BIT(&(uParam2->f_5516), 0);
			}
		}
		if (!__LIB_41__::func_709(uParam0, 1))
		{
			if (__LIB_35__::func_205(uParam2, uParam0))
			{
				MISC::SET_BIT(&(uParam2->f_5515), 8);
			}
		}
		if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234 > uParam2->f_4660)
		{
			uParam2->f_4660 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_234;
			MISC::SET_BIT(&(uParam2->f_5515), 3);
		}
	}
}

void func_159(var uParam0, var uParam1, var uParam2)//Position - 0x17B0A0
{
	int iVar0;
	bool bVar1;
	if (__LIB_26__::func_661(uParam0) && BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 27))
	{
		return;
	}
	if (__LIB_35__::func_411(uParam0) && !__LIB_10__::func_289())
	{
		if (__LIB_26__::func_661(uParam0) && (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_9 != -1)
		{
			if (BitTest((uParam1[(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_9 /*303*/])->f_228, 29))
			{
				MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 29);
				MISC::SET_BIT(&(uParam2->f_5511), 9);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_5511), 9);
				MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 29);
			}
			__LIB_0__::func_794(&(uParam2->f_782));
			__LIB_0__::func_794(&(uParam2->f_784));
		}
		return;
	}
	if (__LIB_26__::func_666(Global_4456449.f_5) || (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 1)
	{
		return;
	}
	if (BitTest(uParam2->f_5512, 4))
	{
		return;
	}
	bVar1 = false;
	if (__LIB_26__::func_665(uParam0))
	{
		if (__LIB_26__::func_803(&(uParam2->f_8774)) == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			iVar0 = 1;
			bVar1 = true;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		if (__LIB_35__::func_411(uParam0))
		{
			iVar0 = __LIB_44__::func_45(uParam0, uParam1, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_10, uParam0->f_536, NETWORK::PARTICIPANT_ID_TO_INT(), 1);
		}
		else
		{
			iVar0 = uParam2->f_773 + 1;
		}
		if (iVar0 == 1 && (__LIB_26__::func_661(uParam0) || uParam2->f_4657 == 1))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		__LIB_0__::func_794(&(uParam2->f_784));
		if (!__LIB_0__::func_864(&(uParam2->f_782)))
		{
			__LIB_0__::func_795(&(uParam2->f_782), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam2->f_782), 500, 0))
		{
			if (!BitTest(uParam2->f_5511, 9))
			{
				__LIB_27__::func_198(iVar0, 0);
				MISC::SET_BIT(&(uParam2->f_5511), 9);
				MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 29);
			}
		}
	}
	else if (iVar0 > 1)
	{
		__LIB_0__::func_794(&(uParam2->f_782));
		if (!__LIB_0__::func_864(&(uParam2->f_784)))
		{
			__LIB_0__::func_795(&(uParam2->f_784), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam2->f_784), 500, 0))
		{
			if (BitTest(uParam2->f_5511, 9))
			{
				MISC::CLEAR_BIT(&(uParam2->f_5511), 9);
				MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 29);
			}
		}
	}
}

void func_160(var uParam0, var uParam1, var uParam2)//Position - 0x17CBA3
{
	if (__LIB_26__::func_661(uParam0))
	{
		return;
	}
	if ((((!__LIB_35__::func_411(uParam0) || __LIB_26__::func_670(uParam1) == 11) || !__LIB_27__::func_52(uParam0)) || BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 27)) || BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 28))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_26__::func_694(uParam0))
		{
			if (!__LIB_26__::func_728())
			{
				if ((__LIB_2__::func_644() && __LIB_41__::func_796(uParam1)) && BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 15))
				{
				}
				else
				{
					__LIB_26__::func_903(1);
					__LIB_25__::func_157(0);
					__LIB_25__::func_417(0);
				}
			}
		}
		else
		{
			if (__LIB_26__::func_728())
			{
				__LIB_26__::func_903(0);
			}
			if (__LIB_44__::func_33(uParam0, uParam2, uParam1, 0))
			{
				if (!__LIB_10__::func_289())
				{
					__LIB_25__::func_157(1);
					__LIB_25__::func_417(0);
				}
			}
			else if (__LIB_10__::func_289())
			{
				__LIB_25__::func_157(0);
			}
			if (__LIB_41__::func_805(uParam0, uParam1, __LIB_26__::func_694(uParam0)))
			{
				if (!__LIB_2__::func_644())
				{
					__LIB_25__::func_417(1);
					__LIB_25__::func_157(0);
					__LIB_26__::func_915(uParam2, 0);
				}
			}
			else if (__LIB_2__::func_644())
			{
				__LIB_25__::func_417(0);
			}
		}
	}
}

void func_161(var uParam0, var uParam1, var uParam2)//Position - 0x17DF60
{
	int iVar0;
	if (!__LIB_26__::func_666(Global_4456449.f_5) && !__LIB_41__::func_709(uParam0, 1))
	{
		if (__LIB_35__::func_411(uParam0))
		{
			iVar0 = __LIB_44__::func_45(uParam0, uParam1, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_10, uParam0->f_536, -1, 0);
		}
		else if (__LIB_35__::func_218(uParam1, uParam2))
		{
			iVar0 = uParam2->f_773 + 1;
		}
		else
		{
			iVar0 = uParam2->f_4657;
		}
		if (__LIB_35__::func_228(uParam0, uParam1, uParam2))
		{
			return;
		}
		else
		{
			__LIB_35__::func_288(iVar0);
		}
	}
}

void func_162(var uParam0, var uParam1)//Position - 0x17ED83
{
	if (!__LIB_26__::func_666(Global_4456449.f_5))
	{
		if (__LIB_0__::func_864(&(uParam1->f_780)) && __LIB_0__::func_937(&(uParam1->f_780), 2000, 0))
		{
			if (__LIB_26__::func_672(uParam0))
			{
				__LIB_44__::func_14(51, __LIB_35__::func_296(uParam0), 0, 1, -1, 2, 1, 0);
			}
			else if (!__LIB_26__::func_664(uParam0->f_572))
			{
				if (__LIB_3__::func_833(uParam0->f_585))
				{
					if (!__LIB_26__::func_665(uParam0))
					{
						__LIB_44__::func_14(51, "BM_ONE_LAP" /* GXT: One Lap */, 0, 1, -1, 2, 1, 0);
					}
				}
				else if (__LIB_26__::func_665(uParam0) || __LIB_26__::func_702())
				{
				}
				else
				{
					__LIB_44__::func_15(37, 1, uParam0->f_585, 0, 1, -1, 2, 0, 0);
				}
			}
			__LIB_0__::func_794(&(uParam1->f_780));
		}
	}
}

int func_163(var uParam0)//Position - 0x17FB8C
{
	int iVar0;
	if (__LIB_1__::func_187(uParam0->f_572))
	{
		return 1;
	}
	if (__LIB_10__::func_365())
	{
		if (__LIB_26__::func_710(0, 0))
		{
			iVar0 = __LIB_43__::func_775(uParam0->f_573, 1);
			if (((((VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) || VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(iVar0)) || VEHICLE::IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(iVar0)) || iVar0 == joaat("submersible")) || iVar0 == joaat("submersible2"))
			{
				return 1;
			}
		}
	}
	return __LIB_44__::func_35(uParam0);
}

void func_164(var uParam0, var uParam1, var uParam2)//Position - 0x180090
{
	int iVar0;
	PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, true);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_PLAYER_LASER"), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), PLAYER::PLAYER_PED_ID());
			iVar0 = 0;
			while (iVar0 < 4)
			{
				VEHICLE::SET_VEHICLE_WEAPON_RESTRICTED_AMMO(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar0, -1);
				iVar0++;
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!((BitTest((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 28) && BitTest((uParam2[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 27)) && ENTITY::GET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID()) == 0))
		{
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 230 /*INPUT_SCRIPT_LS*/, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 422, false);
	if (!__LIB_26__::func_661(uParam1))
	{
		__LIB_44__::func_14(51, "BM_WEP_JETS" /* GXT: Weapons enabled */, 0, 1, -1, 2, 1, 0);
		if (__LIB_1__::func_130())
		{
			if (!__LIB_0__::func_1("ARCRACE_HELP_2"))
			{
				__LIB_0__::func_151("ARCRACE_HELP_2", 8000);
			}
		}
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", true);
	MISC::SET_BIT(&(uParam0->f_5517), 4);
	__LIB_35__::func_301(uParam1, uParam0);
}

void func_165(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x181809
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	if (!HUD::DOES_BLIP_EXIST(uParam1->f_4))
	{
		uParam1->f_4 = HUD::ADD_BLIP_FOR_COORD(*uParam1);
		iVar0 = (uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_235 + 1;
		iVar1 = 5;
		if (__LIB_44__::func_42(iVar0, bParam3, Global_1659902))
		{
			HUD::SET_BLIP_SPRITE(uParam1->f_4, 570);
			iVar1 = 1;
		}
		if (!bParam2 || BitTest(Global_4718592.f_38, 12))
		{
			HUD::SET_BLIP_PRIORITY(uParam1->f_4, 7);
			HUD::SET_BLIP_COLOUR(uParam1->f_4, iVar1);
			HUD::SET_BLIP_SCALE(uParam1->f_4, 0.5f);
			if (!__LIB_44__::func_42(iVar0, bParam3, Global_1659902))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_4, "FMMC_B_6");
			}
			if ((!bParam3 && BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_29, 24)) || (bParam3 && BitTest(Global_4718592.f_95507[iVar0 /*58*/].f_29, 25)))
			{
				HUD::SET_BLIP_ALPHA(uParam1->f_4, 125);
			}
		}
		else
		{
			HUD::SET_BLIP_PRIORITY(uParam1->f_4, 5);
			HUD::SET_BLIP_SPRITE(uParam1->f_4, 38);
			HUD::SET_BLIP_SCALE(uParam1->f_4, 1.2f);
		}
		if (__LIB_26__::func_710(iVar0, bParam3))
		{
			HUD::GET_HUD_COLOUR(11, &iVar2, &iVar3, &iVar4, &uVar5);
			__LIB_26__::func_439(&(uParam1->f_4), iVar2, iVar3, iVar4);
		}
	}
}

void func_166(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x1A1BA1
{
	bool bVar0;
	bVar0 = __LIB_26__::func_666(Global_4456449.f_5);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	if (__LIB_26__::func_928(uParam0, uParam1))
	{
		bParam3 = true;
	}
	if (bParam3)
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
	if (__LIB_44__::func_39(uParam0))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	if (!bVar0 && __LIB_43__::func_775(uParam0->f_573, 0) != joaat("stromberg"))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
	}
	if (bParam5)
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	}
	if (iParam4 && __LIB_44__::func_38(uParam0, uParam1))
	{
		PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	}
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	if (!bVar0)
	{
		switch (__LIB_43__::func_775(uParam0->f_573, 0))
		{
			case joaat("blazer5"):
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
				break;
			case joaat("deluxo"):
			case joaat("stromberg"):
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 357 /*INPUT_VEH_TRANSFORM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
				break;
			}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
	__LIB_41__::func_823(uParam0, uParam1, uParam2, 1);
}

void func_167(var uParam0, var uParam1, var uParam2)//Position - 0x2DA9DB
{
	int iVar0;
	if (((NETWORK::PARTICIPANT_ID_TO_INT() == -1 || !__LIB_26__::func_988(uParam0)) || !BitTest(uParam0->f_823, 6)) || __LIB_26__::func_665(uParam0))
	{
		return;
	}
	if (__LIB_35__::func_411(uParam0))
	{
		iVar0 = __LIB_44__::func_45(uParam0, uParam1, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_10, uParam0->f_536, NETWORK::PARTICIPANT_ID_TO_INT(), 1);
	}
	else
	{
		iVar0 = uParam2->f_773 + 1;
	}
	if (!BitTest(uParam2->f_5515, 2))
	{
		if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1) && __LIB_26__::func_670(uParam1) == 3)
		{
			if (iVar0 > (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_5)
			{
				if (__LIB_0__::func_864(&(uParam2->f_786)))
				{
					__LIB_0__::func_794(&(uParam2->f_786));
				}
				if (!__LIB_0__::func_864(&(uParam2->f_788)))
				{
					__LIB_0__::func_795(&(uParam2->f_788), 0, 0);
				}
				else if (__LIB_0__::func_937(&(uParam2->f_788), 500, 0))
				{
					__LIB_43__::func_298(uParam0, uParam2);
					(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_5 = iVar0;
				}
			}
			if (iVar0 < (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_5)
			{
				if (__LIB_0__::func_864(&(uParam2->f_788)))
				{
					__LIB_0__::func_794(&(uParam2->f_788));
				}
				if (!__LIB_0__::func_864(&(uParam2->f_786)))
				{
					__LIB_0__::func_795(&(uParam2->f_786), 0, 0);
				}
				else if (__LIB_0__::func_937(&(uParam2->f_786), 500, 0))
				{
					(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_5 = iVar0;
					uParam2->f_4658++;
					__LIB_43__::func_297(uParam0, uParam2);
				}
			}
		}
		else
		{
			if (__LIB_0__::func_864(&(uParam2->f_786)))
			{
				__LIB_0__::func_794(&(uParam2->f_786));
			}
			if (__LIB_0__::func_864(&(uParam2->f_788)))
			{
				__LIB_0__::func_794(&(uParam2->f_788));
			}
		}
	}
}

int func_168(var uParam0, var uParam1, var uParam2)//Position - 0x2DB059
{
	int iVar0;
	if (__LIB_26__::func_693(uParam0))
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = uParam0->f_571;
	}
	if (!__LIB_26__::func_760(uParam0))
	{
		return 1;
	}
	__LIB_15__::func_250(&(uParam2->f_8001), Global_1853348[PLAYER::PLAYER_ID() /*834*/], &(Global_4718592.f_116811), &(Global_4718592.f_116531), iVar0, uParam0->f_585, __LIB_26__::func_937(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()), 0);
	if (__LIB_8__::func_312(uParam2->f_8001.f_44))
	{
		if (__LIB_26__::func_938(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_355), ""))
			{
				StringCopy(&(Global_2097157.f_355), NETWORK::NETWORK_PLAYER_GET_NAME(PLAYER::PLAYER_ID()), 24);
				Global_2097157.f_361 = { __LIB_1__::func_696(PLAYER::PLAYER_ID()) };
				StringCopy(&(Global_2097157.f_349), NETWORK::NETWORK_PLAYER_GET_NAME(__LIB_35__::func_327(uParam1)), 24);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(&(Global_2097157.f_355), ""))
		{
			StringCopy(&(Global_2097157.f_355), NETWORK::NETWORK_PLAYER_GET_NAME(__LIB_35__::func_327(uParam1)), 24);
			Global_2097157.f_361 = { __LIB_1__::func_696(__LIB_35__::func_327(uParam1)) };
			StringCopy(&(Global_2097157.f_349), NETWORK::NETWORK_PLAYER_GET_NAME(PLAYER::PLAYER_ID()), 24);
		}
	}
	if (uParam0->f_571 == 2)
	{
		uParam2->f_3669.f_16 = 1;
	}
	else
	{
		uParam2->f_3669.f_16 = 0;
	}
	if (!__LIB_0__::func_864(&(uParam2->f_5227)))
	{
		__LIB_0__::func_795(&(uParam2->f_5227), 0, 0);
	}
	else if (__LIB_0__::func_937(&(uParam2->f_5227), 25000, 0))
	{
		__LIB_44__::func_48(uParam0, uParam1, uParam2);
		return 1;
	}
	if (Global_2097157.f_1 && !Global_2097157.f_2)
	{
		__LIB_44__::func_48(uParam0, uParam1, uParam2);
		Global_2097157.f_2 = 1;
	}
	if (__LIB_22__::func_425(&(uParam2->f_8001)))
	{
		Global_2097532 = 1;
		return 1;
	}
	return 0;
}

void func_169(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x2E7D4F
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_936(PLAYER::PLAYER_ID()) || __LIB_1__::func_202())
	{
		if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			__LIB_18__::func_960(1);
		}
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!__LIB_27__::func_92(uParam1, uParam0->f_883[iVar0 /*42*/].f_1, uParam0->f_883[iVar0 /*42*/]))
			{
				if (__LIB_35__::func_373(uParam0, uParam0->f_883[iVar0 /*42*/].f_31))
				{
					if (__LIB_35__::func_411(uParam0))
					{
						iVar1 = __LIB_44__::func_45(uParam0, uParam1, uParam0->f_883[iVar0 /*42*/].f_30, uParam0->f_536, -1, 0);
					}
					else
					{
						iVar1 = uParam0->f_883[iVar0 /*42*/].f_14;
						if (uParam0->f_883[iVar0 /*42*/].f_1 != __LIB_0__::func_162())
						{
							if (__LIB_1__::func_693(uParam0->f_883[iVar0 /*42*/].f_1, 0, 1))
							{
							}
						}
					}
				}
				else
				{
					iVar1 = 32;
				}
				iVar2 = 0;
				if (__LIB_26__::func_666(Global_4456449.f_5))
				{
					iVar2 = uParam0->f_883[iVar0 /*42*/].f_9;
				}
				else if (__LIB_26__::func_661(uParam0))
				{
					iVar2 = uParam0->f_883[iVar0 /*42*/].f_9;
				}
				__LIB_27__::func_159(uParam0->f_883[iVar0 /*42*/].f_1, uParam0->f_883[iVar0 /*42*/].f_30, iVar1, -1, uParam0->f_883[iVar0 /*42*/].f_31, uParam0->f_883[iVar0 /*42*/].f_7, uParam0->f_883[iVar0 /*42*/].f_11, uParam0->f_883[iVar0 /*42*/].f_10, uParam2, uParam3, uParam4, iVar2);
			}
			iVar0++;
		}
	}
}

void func_170(var uParam0, var uParam1)//Position - 0x2E8F34
{
	bool bVar0;
	int iVar1;
	var uVar2;
	if (__LIB_26__::func_702())
	{
		return;
	}
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar1 != -1)
	{
		if (uParam0->f_652[iVar1] == PLAYER::PLAYER_ID())
		{
			if (__LIB_1__::func_693(uParam0->f_685[iVar1], 0, 1))
			{
				bVar0 = uParam0->f_685[iVar1];
				if (bVar0 != -1)
				{
					if (!BitTest((*uParam1)[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/], bVar0))
					{
						if (__LIB_26__::func_670(uParam1) == 3)
						{
							if (__LIB_26__::func_661(uParam0))
							{
								uVar2 = __LIB_26__::func_808(bVar0, uParam1);
								__LIB_44__::func_50(27, uParam0->f_685[iVar1], uVar2, -1, "STRAP_LAPP2" /* GXT: You have been lapped by ~a~ ~s~and ~a~ */, "BM_LAPPED" /* GXT: LAPPED */, 6, -1, 2, 0, 0, 0);
							}
							else
							{
								__LIB_44__::func_49(27, uParam0->f_685[iVar1], -1, "STRAP_LAPP" /* GXT: You have been lapped by ~a~ */, "BM_LAPPED" /* GXT: LAPPED */, 6, -1, 2, 0);
							}
							MISC::SET_BIT(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/], bVar0);
						}
					}
				}
			}
		}
	}
}

void func_171(var uParam0)//Position - 0x2EA70A
{
	if (!BitTest(uParam0->f_834, 0))
	{
		return;
	}
	if (!BitTest(uParam0->f_834, 4))
	{
		if (__LIB_44__::func_51(uParam0))
		{
			MISC::SET_BIT(&(uParam0->f_834), 4);
		}
		return;
	}
	if (__LIB_27__::func_19(uParam0, *uParam0))
	{
		__LIB_43__::func_823(uParam0, *uParam0);
	}
	*uParam0++;
	if (*uParam0 >= Global_4980736.f_202534)
	{
		*uParam0 = 0;
	}
}

int func_172(var uParam0, var uParam1, int iParam2)//Position - 0x2EB5F5
{
	int iVar0;
	iVar0 = uParam0->f_4660;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (BitTest(Global_4718592.f_17, 23))
	{
		if (uParam0->f_8941)
		{
			return 1;
		}
		else if (Global_4718592.f_169006 == 0 && Global_4718592.f_169007 == 1)
		{
			uParam0->f_8941 = 1;
			return 1;
		}
		else if ((Global_4718592.f_169007 <= iVar0 || __LIB_16__::func_695()) && __LIB_27__::func_52(uParam1))
		{
			if (__LIB_0__::func_864(&(uParam0->f_8939)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_8939), Global_4718592.f_169006 * 1000, 0))
				{
					uParam0->f_8941 = 1;
					if (__LIB_18__::func_689())
					{
						if (Global_4718592.f_169006 != 0)
						{
							__LIB_44__::func_14(51, "OW_KER_SHRD" /* GXT: ~y~KERS Boost~s~ enabled */, 0, 1, -1, 2, 1, 0);
						}
					}
					else
					{
						__LIB_44__::func_14(51, "SPR_BOO_SHRD" /* GXT: Boost enabled */, 0, 1, -1, 2, 1, 0);
					}
					return 1;
				}
			}
			else
			{
				__LIB_0__::func_795(&(uParam0->f_8939), 0, 0);
			}
		}
	}
	return 0;
}

void func_173(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2F81C5
{
	struct<2> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_26__::func_661(uParam0))
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam3, &Var0, 2))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1);
		bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == iVar1 || iVar1 == (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_9);
		if (__LIB_27__::func_53())
		{
			iVar3 = -1;
			if (__LIB_35__::func_411(uParam0))
			{
				iVar3 = __LIB_43__::func_776(uParam0, uParam1, iVar1, 0, 0, 0);
			}
			else
			{
				iVar3 = __LIB_44__::func_10(uParam0, uParam1, iVar1, 0);
			}
			bVar2 = iVar3 == true;
		}
		if (bVar2)
		{
			iVar4 = 0;
			while (iVar4 < 200)
			{
				__LIB_35__::func_234(iVar4, NETWORK::PARTICIPANT_ID_TO_INT(), uParam2, uParam1, 1);
				iVar4++;
			}
		}
	}
}

void func_174(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2F83B3
{
	struct<4> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	if (SCRIPT::GET_EVENT_DATA(1, iParam3, &Var0, 4))
	{
		if (Var0.f_3)
		{
			bVar2 = Var0.f_1;
			if (bVar2 < 0)
			{
				return;
			}
			if (__LIB_1__::func_146() < 0)
			{
				return;
			}
			if (!BitTest(Global_1659950[__LIB_1__::func_146() /*26*/].f_25, bVar2))
			{
				if (Var0.f_1 != PLAYER::PLAYER_ID())
				{
					__LIB_43__::func_251("TCK_ELM" /* GXT: ~a~~HUD_COLOUR_WHITE~ was eliminated. */, Var0.f_1, 0, 0, 0, 1, 0);
				}
				MISC::SET_BIT(&(Global_1659950[__LIB_1__::func_146() /*26*/].f_25), bVar2);
			}
		}
		else if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
		{
			switch (Var0.f_2)
			{
				case 0:
				case 1:
					if (uParam2->f_808 != -1)
					{
						HUD::THEFEED_REMOVE_ITEM(uParam2->f_808);
						uParam2->f_808 = -1;
					}
					if ((__LIB_35__::func_411(uParam0) && __LIB_35__::func_327(uParam1) != __LIB_0__::func_162()) && __LIB_1__::func_693(__LIB_35__::func_327(uParam1), 0, 1))
					{
						if (__LIB_10__::func_289() || __LIB_26__::func_661(uParam0))
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.f_1);
							iVar1 = __LIB_26__::func_808(iVar3, uParam1);
							if (iVar1 != __LIB_0__::func_162())
							{
								uParam2->f_808 = __LIB_43__::func_310("RAL_1ST", Var0.f_1, iVar1, 0, 0);
							}
						}
						else if (Var0.f_1 == __LIB_35__::func_327(uParam1))
						{
							uParam2->f_808 = __LIB_43__::func_310("RAL_1ST", Var0.f_1, PLAYER::PLAYER_ID(), 0, 0);
						}
					}
					else
					{
						uParam2->f_808 = __LIB_43__::func_251("RACE_1ST", Var0.f_1, 0, 0, 0, 1, 0);
					}
					if (Var0.f_1 == PLAYER::PLAYER_ID())
					{
						if (!__LIB_35__::func_164(uParam0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "FIRST_PLACE", "HUD_MINI_GAME_SOUNDSET", true);
						}
						__LIB_44__::func_53(uParam0, uParam1, uParam2);
					}
					break;
				default:
					if (uParam2->f_808 != -1)
					{
						HUD::THEFEED_REMOVE_ITEM(uParam2->f_808);
						uParam2->f_808 = -1;
					}
					break;
				}
			}
	}
}

void func_175(bool bParam0)//Position - 0x498F2C
{
	bool bVar0;
	bVar0 = bParam0;
	if (BitTest(Global_2678393.f_371, bVar0))
	{
		if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_234[bVar0]) && !BitTest(Global_2678393.f_372, bVar0))
		{
			__LIB_44__::func_64(bParam0, 0, 7000);
		}
	}
}

void func_176(bool bParam0)//Position - 0x499010
{
	bool bVar0;
	int iVar1;
	bVar0 = bParam0;
	if (((BitTest(Global_2689235[bVar0 /*453*/].f_71.f_2, 3) && !BitTest(Global_2678393.f_395, bVar0)) || BitTest(Global_2703735.f_872, bVar0)) || BitTest(Global_2678393.f_425, bVar0))
	{
		if (!BitTest(Global_2678393.f_380, bVar0))
		{
			__LIB_44__::func_65(bParam0, 1, -1);
			MISC::SET_BIT(&(Global_2678393.f_380), bVar0);
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[bVar0]))
		{
			if (!HUD::IS_BLIP_FLASHING(Global_2678393[bVar0]))
			{
				__LIB_44__::func_65(bParam0, 0, 7000);
				MISC::CLEAR_BIT(&(Global_2678393.f_380), bVar0);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2678393.f_380), bVar0);
		}
	}
	else
	{
		if (BitTest(Global_2678393.f_380, bVar0))
		{
			__LIB_44__::func_65(bParam0, 0, 7000);
			MISC::CLEAR_BIT(&(Global_2678393.f_380), bVar0);
		}
		if (BitTest(Global_2678393.f_395, bVar0))
		{
			if (!BitTest(Global_2689235[bVar0 /*453*/].f_71.f_2, 3))
			{
				MISC::CLEAR_BIT(&(Global_2678393.f_395), bVar0);
			}
		}
	}
	if (BitTest(Global_2678393.f_370, bVar0))
	{
		if (NETWORK::IS_TIME_MORE_THAN(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_201[bVar0]) && !BitTest(Global_2678393.f_375, bVar0))
		{
			__LIB_44__::func_65(bParam0, 0, 7000);
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[bVar0]))
		{
			if (!HUD::IS_BLIP_FLASHING(Global_2678393[bVar0]))
			{
				HUD::SET_BLIP_FLASHES(Global_2678393[bVar0], true);
				HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[bVar0], 250);
				__LIB_43__::func_840(bParam0);
				if (!BitTest(Global_2678393.f_375, bVar0))
				{
					if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_201[bVar0]))
					{
						iVar1 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2678393.f_201[bVar0]));
						if (iVar1 > 200000)
						{
							Global_2678393.f_201[bVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
						}
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393[bVar0]))
	{
		if (HUD::IS_BLIP_FLASHING(Global_2678393[bVar0]))
		{
			__LIB_43__::func_840(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[bVar0], false);
		}
	}
}

int func_177(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x45463
{
	return __LIB_44__::func_72(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

void func_178(var uParam0, var uParam1, bool bParam2)//Position - 0x2D7688
{
	__LIB_22__::func_13(uParam1, 0);
	__LIB_44__::func_76(uParam0, uParam1, bParam2);
	__LIB_44__::func_77(uParam0, uParam1, bParam2);
}

void func_179(var uParam0, var uParam1, int iParam2)//Position - 0x2D7C2D
{
	bool bVar0;
	bVar0 = false;
	uParam1->f_126 = iParam2;
	__LIB_34__::func_791(uParam0, uParam1);
	__LIB_44__::func_77(uParam0, uParam1, bVar0);
}

void func_180()//Position - 0x36764
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_26), &Global_2671511, 19);
	__LIB_2__::func_68();
	__LIB_44__::func_80(1, 1, 0);
	__LIB_2__::func_152();
}

void func_181(var uParam0)//Position - 0x488BA
{
	if (!__LIB_36__::func_684(uParam0) && !__LIB_28__::func_655(uParam0))
	{
		if (!__LIB_22__::func_731(uParam0))
		{
			if (__LIB_36__::func_683(uParam0) && __LIB_43__::func_488(uParam0))
			{
				if (!__LIB_0__::func_864(&(uParam0->f_2)))
				{
					if (__LIB_43__::func_896(uParam0, 0))
					{
						__LIB_0__::func_795(&(uParam0->f_2), 0, 0);
					}
				}
				else if (__LIB_43__::func_896(uParam0, 0))
				{
					__LIB_43__::func_895(uParam0);
					__LIB_44__::func_82(uParam0);
					if (__LIB_0__::func_937(&(uParam0->f_2), uParam0->f_6, 0))
					{
						__LIB_36__::func_682(uParam0);
					}
				}
				else
				{
					__LIB_43__::func_894(uParam0);
				}
			}
			else
			{
				__LIB_36__::func_681(uParam0);
			}
		}
		else if (__LIB_36__::func_683(uParam0) && __LIB_43__::func_488(uParam0))
		{
			if (__LIB_43__::func_896(uParam0, 0))
			{
				__LIB_43__::func_895(uParam0);
				__LIB_44__::func_81(uParam0);
				__LIB_44__::func_82(uParam0);
			}
			else
			{
				__LIB_43__::func_894(uParam0);
			}
		}
		else
		{
			__LIB_36__::func_681(uParam0);
		}
	}
	else
	{
		__LIB_36__::func_681(uParam0);
	}
}

void func_182(var uParam0)//Position - 0x14110
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	uParam0->f_36 = 0;
	if (__LIB_37__::func_39(uParam0))
	{
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		if (uParam0->f_27 == 0)
		{
			iVar8 = 0;
			while (iVar8 < 32)
			{
				if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar8), 0, 1))
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
					if (!__LIB_0__::func_361(iVar0, 0))
					{
						if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(iVar0, PLAYER::PLAYER_ID()))
						{
							iVar6 = iVar0;
							iVar4 = Global_1853348[iVar6 /*834*/].f_205.f_6;
							iVar5 = -1;
							Var3 = { __LIB_37__::func_38(iVar0) };
							StringCopy(&(uParam0->f_1), PLAYER::GET_PLAYER_NAME(iVar0), 64);
							iVar2 = __LIB_3__::func_586(iVar0);
							sVar1 = "";
							if (iVar2 != 0)
							{
								sVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
							}
							__LIB_44__::func_84(20, &(uParam0->f_17), uParam0, iVar9, Var3, sVar1, iVar4, iVar5, 116, 0, -1, 0, 0, -1082130432, -1, -1);
							iVar7 = __LIB_1__::func_977(uParam0->f_38[iVar8 /*2*/], 0, 43);
							__LIB_1__::func_976(&(uParam0->f_17), iVar9, iVar7, iVar4);
							iVar9++;
						}
					}
				}
				iVar8++;
			}
			uParam0->f_27 = 2;
		}
		if (uParam0->f_27 == 2)
		{
			if (!BitTest(uParam0->f_33, 1))
			{
				__LIB_10__::func_263(&(uParam0->f_17), 0, 1);
				MISC::SET_BIT(&(uParam0->f_33), 1);
			}
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_17))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
				GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam0->f_17, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			}
			if (__LIB_37__::func_28(uParam0))
			{
				uParam0->f_27 = 0;
			}
		}
	}
	else
	{
		uParam0->f_27 = 0;
		__LIB_1__::func_975();
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_183(bool bParam0, int iParam1)//Position - 0x1462
{
	struct<14> Var0;
	__LIB_44__::func_89(1, 1, iParam1);
	if (bParam0)
	{
		if (__LIB_1__::func_962(91) || __LIB_1__::func_962(98))
		{
			__LIB_1__::func_751();
		}
		__LIB_43__::func_906();
		__LIB_1__::func_928(17);
		Var0.f_2 = 1535844061;
		Var0.f_3 = iParam1;
		if (__LIB_3__::func_39(PLAYER::PLAYER_ID()) && iParam1 == 0)
		{
			Var0.f_3 = 100;
		}
		__LIB_1__::func_634(Var0, __LIB_0__::func_943(0, 1));
		__LIB_43__::func_54();
		if (!__LIB_3__::func_39(PLAYER::PLAYER_ID()) && iParam1 != 1)
		{
			__LIB_3__::func_589(82, "GB_TXTMSG_INIT2" /* GXT: Thank you for registering with SecuroServ as a VIP. Recruit your Protection Detail immediately to start feeling the benefits of having a troop of armed Bodyguards at your beck and call. But what now? Take your operation to the next level by getting an office on dynasty8realestate.com, of course! You'll become a CEO with access to Special Cargo, Vehicle Cargo, Special Vehicle Work and many other benefits. */, 2, 0, 0, 0, 0, 1, 0, 1);
		}
	}
}

void func_184(var uParam0)//Position - 0x1A6E3F
{
	if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 33024, 0);
		}
	}
	__LIB_6__::func_355(&(uParam0->f_21), &(uParam0->f_1));
	__LIB_6__::func_354(uParam0);
	if (__LIB_3__::func_67(0, -1, 0))
	{
		if (uParam0->f_33)
		{
			__LIB_44__::func_102(uParam0);
			uParam0->f_33 = 0;
		}
		else
		{
			__LIB_3__::func_781(uParam0->f_1, 1, 1);
		}
		__LIB_43__::func_664(uParam0);
		__LIB_6__::func_696(uParam0);
		__LIB_9__::func_761(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (uParam0->f_20 != 5)
		{
			__LIB_1__::func_895(1, -1);
		}
	}
}

void func_185(var uParam0, var uParam1)//Position - 0x19DCE9
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	int iVar18;
	__LIB_44__::func_103(uParam1, uParam0);
	__LIB_11__::func_36(uParam0);
	__LIB_8__::func_8(uParam0);
	__LIB_11__::func_35(uParam0);
	if (Global_75489)
	{
		if (!__LIB_0__::func_864(&(uParam0->f_323)))
		{
			__LIB_0__::func_795(&(uParam0->f_323), 0, 0);
		}
		else if (__LIB_0__::func_937(&(uParam0->f_323), 500, 0))
		{
			__LIB_0__::func_794(&(uParam0->f_323));
			Global_75489 = 0;
		}
	}
	if (uParam0->f_444 || __LIB_11__::func_34())
	{
		if (*uParam0 >= 4)
		{
			if (!__LIB_3__::func_241())
			{
				__LIB_1__::func_92();
			}
		}
		else if ((((((__LIB_3__::func_241() && !Global_1640732) && !__LIB_4__::func_358(PLAYER::PLAYER_ID())) && !BitTest(uParam0->f_331, 20)) && !BitTest(Global_1946250.f_5, 29)) && !BitTest(Global_1946250.f_5, 28)) && !BitTest(Global_1946250.f_6, 11))
		{
			__LIB_1__::func_91();
		}
	}
	switch (*uParam0)
	{
		case 0:
			__LIB_7__::func_916(uParam0, uParam1);
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			__LIB_1__::func_289(uParam0, 1);
			break;
		case 1:
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			if (uParam0->f_444 == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.0366f, -3002.6072f, -40.580494f, 965.1981f, -3002.6099f, -39.146614f, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					uParam0->f_316 = 0;
					uParam0->f_445 = 1;
					__LIB_1__::func_289(uParam0, 2);
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.20575f, -3004.4807f, -40.634876f, 965.1243f, -3004.43f, -39.134876f, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					uParam0->f_316 = 0;
					uParam0->f_445 = 0;
					__LIB_1__::func_289(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 1);
				}
			}
			else if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				if (__LIB_9__::func_684(uParam0, uParam1))
				{
					__LIB_1__::func_289(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 3);
				}
			}
			else if (__LIB_11__::func_33())
			{
				Stack.Push(uParam0->f_316);
				Stack.Push(&(uParam0->f_445));
				Call_Loc(uParam0->f_447);
				if (StackVal)
				{
					uParam0->f_316 = 0;
					__LIB_1__::func_289(uParam0, 2);
				}
				else
				{
					uParam0->f_316 = (uParam0->f_316 + 1 % 1);
				}
			}
			else
			{
				Var3 = { __LIB_7__::func_888(uParam0->f_316, &(uParam0->f_279)) };
				Var4 = { __LIB_7__::func_887(uParam0->f_316, &(uParam0->f_279)) };
				uParam0->f_279.f_31 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, (Var4.f_2 - 0.617f), __LIB_6__::func_832(1)) };
				uParam0->f_279.f_34 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var3, (Var4.f_2 - 0.617f), __LIB_6__::func_832(0)) };
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_279.f_31, uParam0->f_279.f_34, 1f, false, true, 0) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_1__::func_289(uParam0, 2);
				}
				else
				{
					uParam0->f_279.f_31 = { 0f, 0f, 0f };
					uParam0->f_279.f_34 = { 0f, 0f, 0f };
					uParam0->f_316 = (uParam0->f_316 + 1 % 13);
				}
			}
			break;
		case 2:
			uParam0->f_435 = (56 + uParam0->f_316);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_334))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			}
			else
			{
				uParam0->f_334 = __LIB_32__::func_726(uParam0, uParam0->f_277, __LIB_1__::func_394(), 0);
			}
			if ((((((((((((!__LIB_11__::func_32(uParam0, uParam0->f_279.f_31, uParam0->f_279.f_34, 1.15f) && uParam1->f_274[uParam0->f_435] == 0) && !__LIB_4__::func_849()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_7__::func_913()) && __LIB_32__::func_900(uParam0, uParam0->f_316, PLAYER::PLAYER_ID())) && !BitTest(uParam0->f_331, 18)) && __LIB_9__::func_682()) && !BitTest(Global_1946250.f_4, 2)) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
				{
					__LIB_3__::func_422(&(uParam0->f_320));
					uParam0->f_320 = -1;
				}
				MISC::CLEAR_BIT(&(uParam0->f_331), 19);
				if ((((BitTest(uParam0->f_331, 12) || BitTest(uParam0->f_331, 13)) || BitTest(uParam0->f_331, 14)) || BitTest(uParam0->f_331, 15)) || BitTest(uParam0->f_331, 16))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
				}
				if (!__LIB_0__::func_77(0) && !__LIB_6__::func_831())
				{
					if (!__LIB_6__::func_830())
					{
						__LIB_32__::func_886(uParam0, 0);
					}
				}
				else if (uParam0->f_320 != -1)
				{
					__LIB_3__::func_422(&(uParam0->f_320));
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/) && !__LIB_6__::func_831())
				{
					uParam0->f_277 = uParam0->f_316;
					__LIB_5__::func_848(uParam0->f_277);
					uParam0->f_436 = uParam0->f_435;
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					if (__LIB_11__::func_31(uParam0, uParam0->f_277))
					{
						__LIB_7__::func_912(uParam0, 0);
					}
					uParam0->f_1 = 1;
					uParam0->f_2 = -1;
					MISC::SET_BIT(&(uParam0->f_331), 19);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					if (__LIB_9__::func_626(uParam0, uParam0->f_277))
					{
						__LIB_32__::func_724(uParam0, uParam1);
						__LIB_1__::func_289(uParam0, 3);
					}
					else
					{
						uParam0->f_334 = __LIB_32__::func_726(uParam0, uParam0->f_277, __LIB_1__::func_394(), 0);
						__LIB_1__::func_289(uParam0, 4);
					}
				}
			}
			else if (BitTest(Global_1946250.f_4, 2))
			{
				if (uParam0->f_320 != -1)
				{
					__LIB_3__::func_422(&(uParam0->f_320));
				}
			}
			else if (!__LIB_4__::func_849() && !__LIB_4__::func_899(PLAYER::PLAYER_ID()))
			{
				if (__LIB_11__::func_34())
				{
					if (__LIB_11__::func_50(uParam0))
					{
						if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 13))
						{
							__LIB_3__::func_422(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(2), 0, 0, 0, 0);
							MISC::SET_BIT(&(uParam0->f_331), 13);
						}
					}
					else if (!__LIB_1__::func_744(PLAYER::PLAYER_ID()))
					{
						if (__LIB_7__::func_911() >= __LIB_7__::func_910())
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 14))
							{
								__LIB_3__::func_422(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(3), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 14);
							}
						}
						else if (__LIB_11__::func_796(PLAYER::PLAYER_ID()))
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 15))
							{
								__LIB_3__::func_422(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(4), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 15);
							}
						}
						else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 16))
							{
								__LIB_3__::func_422(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(0), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 16);
							}
						}
						else
						{
							if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 12))
							{
								__LIB_3__::func_422(&(uParam0->f_320));
							}
							if (uParam0->f_320 == -1)
							{
								__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(1), 0, 0, 0, 0);
								MISC::SET_BIT(&(uParam0->f_331), 12);
							}
						}
					}
					else if (__LIB_4__::func_897(PLAYER::PLAYER_ID()))
					{
						if (uParam0->f_320 != -1 && !BitTest(uParam0->f_331, 16))
						{
							__LIB_3__::func_422(&(uParam0->f_320));
						}
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_954(&(uParam0->f_320), 4, __LIB_11__::func_30(0), 0, 0, 0, 0);
							MISC::SET_BIT(&(uParam0->f_331), 16);
						}
					}
				}
				else
				{
					if (__LIB_7__::func_908(uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_954(&(uParam0->f_320), 4, "MPJAC_NO_SIT" /* GXT: Only the owner can sit at the head of the table. */, 0, 0, 0, 0);
						}
					}
					else if (__LIB_11__::func_31(uParam0, uParam0->f_316))
					{
						if (uParam0->f_320 == -1)
						{
							__LIB_7__::func_954(&(uParam0->f_320), 4, "MPOFFCH_NO_SIT" /* GXT: Only the owner can sit at the desk. */, 0, 0, 0, 0);
						}
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				}
			}
			else if (__LIB_4__::func_899(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_9__::func_682())
				{
					if (!__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						__LIB_3__::func_422(&(uParam0->f_320));
						uParam0->f_320 = -1;
					}
					if (uParam0->f_320 == -1)
					{
						__LIB_7__::func_954(&(uParam0->f_320), 4, "POD_TOO_MANY" /* GXT: Too many players near activity. */, 0, 0, 0, 0);
					}
				}
			}
			if (uParam0->f_316 == 6 && (__LIB_1__::func_597(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32) || __LIB_0__::func_845(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32, -1)))
			{
				fVar7 = __LIB_8__::func_7(uParam0);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var5, Var6, 1.4f, false, true, 0) || fVar7 > 120f)
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_289(uParam0, 1);
				}
			}
			else if (uParam0->f_444 == 1)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 964.432f, -3004.828f, -40.63492f, 964.42f, -3002.0542f, -39.13492f, 1.5f, false, true, 0))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_289(uParam0, 1);
				}
			}
			else if (__LIB_5__::func_409(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_9__::func_684(uParam0, uParam1))
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
					__LIB_1__::func_289(uParam0, 1);
				}
			}
			else if (__LIB_11__::func_33())
			{
				Stack.Push(uParam0->f_316);
				Stack.Push(&(uParam0->f_445));
				Call_Loc(uParam0->f_447);
				if (!StackVal)
				{
					if (uParam0->f_320 != -1)
					{
						__LIB_3__::func_422(&(uParam0->f_320));
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 12);
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					MISC::CLEAR_BIT(&(uParam0->f_331), 13);
					MISC::CLEAR_BIT(&(uParam0->f_331), 14);
					MISC::CLEAR_BIT(&(uParam0->f_331), 15);
					MISC::CLEAR_BIT(&(uParam0->f_331), 16);
					__LIB_1__::func_289(uParam0, 1);
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_279.f_31, uParam0->f_279.f_34, 1f, false, true, 0))
			{
				if (uParam0->f_320 != -1)
				{
					__LIB_3__::func_422(&(uParam0->f_320));
				}
				MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				__LIB_1__::func_289(uParam0, 1);
			}
			break;
		case 3:
			if (__LIB_4__::func_926(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, false);
			}
			uParam0->f_334 = __LIB_32__::func_726(uParam0, uParam0->f_277, __LIB_1__::func_394(), 0);
			__LIB_1__::func_289(uParam0, 4);
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			__LIB_32__::func_724(uParam0, uParam1);
			break;
		case 4:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_334))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
				return;
			}
			if (!__LIB_32__::func_724(uParam0, uParam1))
			{
				return;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_319))
			{
				__LIB_1__::func_289(uParam0, 12);
			}
			if (__LIB_7__::func_907(uParam0->f_277))
			{
				if (!__LIB_7__::func_906(uParam1, uParam0, uParam0->f_277))
				{
					return;
				}
				else
				{
					uParam0->f_434 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_432, uParam0->f_433);
					if (((uParam1[uParam0->f_277 /*21*/])->f_3 && (uParam1[uParam0->f_277 /*21*/])->f_4 == 0) || (uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						if (!__LIB_0__::func_864(&(uParam0->f_325)))
						{
							__LIB_0__::func_795(&(uParam0->f_325), 1, 0);
						}
					}
				}
			}
			if (__LIB_7__::func_908(uParam0->f_277))
			{
				WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_REVOLVER"), 31, 0);
				if (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_REVOLVER")))
				{
					WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_REVOLVER"), 31, 0);
					return;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
				{
					uParam0->f_437 = NETWORK::OBJ_TO_NET(__LIB_8__::func_6(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), 1, 0, 0, 0, 0, 1, 0));
					NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), true);
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), false, false);
				}
			}
			__LIB_32__::func_885(uParam0, &Var0, &fVar1);
			if (__LIB_11__::func_31(uParam0, uParam0->f_277))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Var8, 5000, 0, 2);
					__LIB_9__::func_625(Var0, fVar1);
				}
				else
				{
					__LIB_9__::func_625(Var0, fVar1);
				}
			}
			else
			{
				__LIB_9__::func_625(Var0, fVar1);
			}
			PED::SET_FORCE_STEP_TYPE(PLAYER::PLAYER_PED_ID(), true, 20, 0);
			__LIB_1__::func_289(uParam0, 5);
			break;
		case 5:
			__LIB_32__::func_885(uParam0, &Var0, &fVar1);
			if ((__LIB_0__::func_490(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, 0.05f, 0) && __LIB_6__::func_177(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), fVar1, 5f)) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1)
			{
				if (__LIB_4__::func_947(PLAYER::PLAYER_ID()))
				{
					fVar9 = 1.3f;
				}
				else
				{
					fVar9 = 1f;
				}
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, fVar9);
				if ((__LIB_7__::func_908(uParam0->f_277) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_597(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_B", 1.5f, -1.5f, 5, 16, 1.5f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_b_chair", 4f, -4f, 32773);
				}
				else if (!__LIB_32__::func_723(uParam0))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter", 1.5f, -1.5f, 5, 16, 1.5f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_chair", 4f, -4f, 32773);
				}
				else
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_left", 1.5f, -1.5f, 5, 16, 1.5f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_left_chair", 4f, -4f, 32773);
				}
				if ((__LIB_7__::func_908(uParam0->f_277) && __LIB_1__::func_597(uParam0->f_277)) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
				{
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, "enter_weapon", 4f, -4f, 32773);
				}
				if (__LIB_7__::func_907(uParam0->f_277))
				{
					if ((uParam1[uParam0->f_277 /*21*/])->f_2)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, "enter_cigar", 4f, -4f, 32773);
					}
					if ((uParam1[uParam0->f_277 /*21*/])->f_3)
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, "enter_glass", 4f, -4f, 32773);
					}
				}
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				__LIB_1__::func_289(uParam0, 6);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_319);
			iVar2 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("create_weapon")))
				{
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), true, false);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= 1f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_319))
				{
					if (__LIB_11__::func_31(uParam0, uParam0->f_277))
					{
						if (ENTITY::GET_ENTITY_PITCH(uParam0->f_319) != 0f)
						{
							Var10 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, 0f, 0f, Var10.f_2, 2, true);
						}
						if (ENTITY::GET_ENTITY_ROLL(uParam0->f_319) != 0f)
						{
							Var11 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_319, 0f, 0f, Var11.f_2, 2, true);
						}
					}
					if (uParam0->f_439 == 1)
					{
						uParam0->f_439 = 0;
						__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), false, false);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_8), true, false);
					}
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					if (uParam0->f_440)
					{
						uParam0->f_440 = 0;
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "base", 4f, -1.5f, 5, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "base_chair", 4f, -4f, 32773);
					if ((__LIB_7__::func_908(uParam0->f_277) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_597(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, "base_weapon", 4f, -4f, 32773);
					}
					if (__LIB_7__::func_907(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, "base_cigar", 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, "base_glass", 4f, -4f, 32773);
						}
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					if (((__LIB_7__::func_908(uParam0->f_277) || __LIB_11__::func_31(uParam0, uParam0->f_277)) || __LIB_7__::func_907(uParam0->f_277)) || __LIB_9__::func_681(uParam0->f_277))
					{
						__LIB_1__::func_289(uParam0, 7);
					}
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_319))
				{
					if (__LIB_0__::func_121(uParam0->f_319))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_319);
					}
				}
			}
			if (((!__LIB_7__::func_913() && !__LIB_7__::func_905(uParam0)) && __LIB_9__::func_681(uParam0->f_277)) && __LIB_7__::func_904())
			{
				__LIB_1__::func_289(uParam0, 18);
			}
			break;
		case 7:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_0__::func_864(&(uParam0->f_325)))
				{
					if ((__LIB_0__::func_937(&(uParam0->f_325), uParam0->f_434, 1) && uParam0->f_1 == 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
					{
						iVar13 = 1;
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || iVar13)
				{
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					uParam0->f_336 = __LIB_32__::func_722(uParam1, uParam0);
					if (__LIB_9__::func_679(uParam0, uParam0->f_277, uParam0->f_336))
					{
						(uParam1[uParam0->f_277 /*21*/])->f_4 = 1;
						uParam0->f_439 = 1;
					}
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, __LIB_6__::func_829(uParam0->f_336), 4f, -1.5f, 5, 16, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, __LIB_7__::func_902(uParam0->f_336), 4f, -4f, 32773);
					if (__LIB_7__::func_907(uParam0->f_277))
					{
						if ((uParam1[uParam0->f_277 /*21*/])->f_2)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_5), uParam0->f_278, uParam0->f_334, __LIB_7__::func_901(uParam0->f_336), 4f, -4f, 32773);
						}
						if ((uParam1[uParam0->f_277 /*21*/])->f_3)
						{
							NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT((uParam1[uParam0->f_277 /*21*/])->f_7), uParam0->f_278, uParam0->f_334, __LIB_7__::func_900(uParam0->f_336), 4f, -4f, 32773);
						}
					}
					if ((__LIB_7__::func_908(uParam0->f_277) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false)) && __LIB_1__::func_597(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
					{
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(uParam0->f_437), uParam0->f_278, uParam0->f_334, __LIB_7__::func_899(uParam0->f_336), 4f, -4f, 32773);
					}
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					__LIB_1__::func_289(uParam0, 6);
				}
			}
			if (((!__LIB_7__::func_913() && !__LIB_7__::func_905(uParam0)) && __LIB_9__::func_681(uParam0->f_277)) && __LIB_7__::func_904())
			{
				__LIB_1__::func_289(uParam0, 18);
			}
			else if (__LIB_7__::func_904())
			{
			}
			break;
		case 16:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_ENTER", 4f, -1.5f, 5, 16, 1000f, 4);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_ENTER_CHAIR", 4f, -4f, 32773);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				uParam0->f_446 = 0;
				__LIB_1__::func_289(uParam0, 17);
			}
			break;
		case 22:
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_334);
			if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_334))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "ENTER", 4f, -4f, 5, 16, 1000f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "ENTER_CHAIR", 4f, -4f, 32773);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				MISC::CLEAR_BIT(&(uParam0->f_331), 1);
				__LIB_1__::func_289(uParam0, 6);
			}
			break;
		case 17:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()))
				{
					fVar14 = 0.53f;
				}
				else
				{
					fVar14 = 0.22f;
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= fVar14 && ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "COMPUTER_ENTER", 3)) && !uParam0->f_446)
				{
					if (__LIB_11__::func_31(uParam0, uParam0->f_277))
					{
						if ((!__LIB_7__::func_905(uParam0) && !__LIB_7__::func_913()) && (!__LIB_7__::func_726(PLAYER::PLAYER_ID()) || !__LIB_4__::func_801(PLAYER::PLAYER_ID())))
						{
							if (!uParam0->f_330)
							{
								__LIB_7__::func_912(uParam0, 1);
							}
							uParam0->f_446 = 1;
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f)
				{
					uParam0->f_446 = 0;
					Var15 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2) };
					Var16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true) };
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_IDLE", 4f, -1.5f, 5, 16, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_IDLE_CHAIR", 4f, -4f, 32773);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				}
			}
			bVar17 = ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), uParam0->f_334, "COMPUTER_IDLE", 3);
			if ((uParam0->f_330 && Global_2789734) && BitTest(uParam0->f_331, 21))
			{
				iVar18 = 1;
			}
			if (((!__LIB_7__::func_913() && !uParam0->f_330) && bVar17) || iVar18)
			{
				uParam0->f_330 = 0;
				ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_319, true);
				__LIB_1__::func_289(uParam0, 18);
			}
			break;
		case 18:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
				if (!__LIB_9__::func_681(uParam0->f_277) || __LIB_4__::func_899(PLAYER::PLAYER_ID()))
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT", 1000f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
				}
				else
				{
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "EXIT", 4f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "EXIT_CHAIR", 4f, -4f, 32773);
				}
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
				if (Global_75490 == 1)
				{
					__LIB_1__::func_289(uParam0, 11);
				}
				else
				{
					if (__LIB_9__::func_681(uParam0->f_277) && !__LIB_4__::func_899(PLAYER::PLAYER_ID()))
					{
						uParam0->f_334 = __LIB_32__::func_726(uParam0, uParam0->f_277, __LIB_1__::func_394(), 0);
					}
					__LIB_1__::func_289(uParam0, 6);
				}
			}
			break;
		case 9:
			uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
			NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "exit", 4f, -4f, 5, 16, 1000f, 0);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "exit_chair", 4f, -4f, 5);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
			MISC::CLEAR_BIT(&(uParam0->f_331), 1);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				__LIB_7__::func_898(uParam0);
				uParam0->f_334 = __LIB_32__::func_899(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				__LIB_7__::func_897(uParam0);
				uParam0->f_334 = __LIB_32__::func_899(uParam0);
			}
			uParam0->f_440 = 1;
			__LIB_1__::func_289(uParam0, 6);
			break;
		case 10:
			uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
			if (!__LIB_32__::func_723(uParam0))
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter", 1.5f, -1.5f, 5, 16, 1.5f, 0);
			}
			else
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "enter_LEFT", 1.5f, -1.5f, 5, 16, 1.5f, 0);
			}
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "enter_chair", 4f, -4f, 32773);
			NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
			if (uParam0->f_328)
			{
				uParam0->f_328 = 0;
				__LIB_7__::func_898(uParam0);
			}
			if (uParam0->f_327)
			{
				uParam0->f_327 = 0;
				__LIB_7__::func_897(uParam0);
			}
			__LIB_1__::func_289(uParam0, 6);
			break;
		case 11:
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || !ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
				{
					if (!ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("block_interrupt")))
					{
					}
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, __LIB_32__::func_899(uParam0), "exit", 4f, -4f, 5, 0, 1000f, 0);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, __LIB_32__::func_899(uParam0), "exit_chair", 4f, -4f, 5);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					if (__LIB_6__::func_828() || __LIB_6__::func_827())
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&(uParam0->f_331), 1);
					__LIB_1__::func_289(uParam0, 12);
				}
			}
			break;
		case 13:
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_278);
			__LIB_1__::func_289(uParam0, 15);
			__LIB_32__::func_884(uParam0, __LIB_4__::func_902(PLAYER::PLAYER_ID()));
			break;
		case 12:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam0->f_319);
			iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
			{
				if (__LIB_1__::func_597(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("destroy_weapon")))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REVOLVER"), false))
						{
							ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(uParam0->f_437), false, false);
						}
					}
				}
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 1f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("breakout_finish"))) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")))
				{
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					__LIB_1__::func_289(uParam0, 15);
					__LIB_32__::func_884(uParam0, __LIB_4__::func_902(PLAYER::PLAYER_ID()));
				}
			}
			MISC::CLEAR_BIT(&(uParam0->f_331), 19);
			break;
		case 15:
			__LIB_1__::func_289(uParam0, 1);
			break;
		case 26:
			if (!__LIB_32__::func_724(uParam0, uParam1))
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_319))
			{
				if (!uParam0->f_443)
				{
					__LIB_8__::func_41(uParam0);
					uParam0->f_278 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_ENTITY_COORDS(uParam0->f_319, true), ENTITY::GET_ENTITY_ROTATION(uParam0->f_319, 2), 2, true, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT", 1000f, -1.5f, 5, 0, 1000f, 4);
					NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_319, uParam0->f_278, uParam0->f_334, "COMPUTER_EXIT_CHAIR", 1000f, -4f, 32773);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_278);
					uParam0->f_443 = 1;
				}
			}
			if (uParam0->f_443)
			{
				iVar12 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam0->f_278);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar12))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar12) >= 0.1f)
					{
						uParam0->f_443 = 0;
						CAM::DO_SCREEN_FADE_IN(750);
						__LIB_1__::func_289(uParam0, 7);
					}
				}
			}
			break;
	}
}

int func_186(var uParam0, bool bParam1)//Position - 0x98FDF
{
	__LIB_0__::func_187();
	__LIB_1__::func_33(0);
	if (!*uParam0)
	{
		return 0;
	}
	__LIB_44__::func_104(uParam0);
	if (bParam1)
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_7, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	if (__LIB_43__::func_676(uParam0))
	{
		if (!__LIB_43__::func_941(uParam0))
		{
			return 0;
		}
	}
	return 1;
}

void func_187(var uParam0, int iParam1, float fParam2)//Position - 0x17E576
{
	__LIB_44__::func_107(uParam0, iParam1, fParam2);
	__LIB_41__::func_303(uParam0, iParam1, fParam2);
}

var func_188(var uParam0)//Position - 0x17EE4B
{
	return (__LIB_44__::func_108(uParam0, 0) && __LIB_41__::func_310(uParam0, 0));
}

void func_189(var uParam0)//Position - 0x1B2771
{
	if (__LIB_5__::func_839(&(uParam0->f_1)) != 2 && !__LIB_10__::func_356())
	{
		__LIB_44__::func_117(uParam0);
	}
}

int func_190(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, var uParam6)//Position - 0x38338
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if ((*uParam0)[iParam4 /*42*/] == -1)
	{
		return 0;
	}
	iVar1 = __LIB_44__::func_143(uParam1, uParam2, (*uParam0)[iParam4 /*42*/], uParam6);
	if (iVar1 != 0)
	{
		if (iParam5 == 0)
		{
			iVar0 = 0;
		}
		else if (iVar1 < iParam4 + 1)
		{
			iVar0 = 0;
		}
		else if (iVar1 == iParam4 + 1)
		{
			if (((uParam1[(*uParam0)[iParam4 /*42*/] /*303*/])->f_252 < (uParam1[iParam3 /*303*/])->f_252 && !__LIB_1__::func_130()) || (__LIB_1__::func_130() && (uParam1[(*uParam0)[iParam4 /*42*/] /*303*/])->f_252 > (uParam1[iParam3 /*303*/])->f_252))
			{
				iVar0 = 0;
			}
			else if ((uParam1[(*uParam0)[iParam4 /*42*/] /*303*/])->f_252 == (uParam1[iParam3 /*303*/])->f_252)
			{
				if ((*uParam0)[iParam4 /*42*/] < iParam3)
				{
					iVar0 = 0;
				}
			}
			else if (!__LIB_26__::func_666(Global_4456449.f_5))
			{
				if ((*uParam0)[iParam4 /*42*/] < iParam3)
				{
					iVar0 = 0;
				}
			}
		}
	}
	else if (iParam5 == 0)
	{
		if ((*uParam0)[iParam4 /*42*/] < iParam3)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_191(var uParam0, var uParam1, var uParam2, struct<3> Param3)//Position - 0x6FBBE
{
	int iVar0;
	int iVar1;
	if (__LIB_35__::func_411(uParam0))
	{
		if (__LIB_26__::func_937(uParam1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5442))
	{
		if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			iVar0 = __LIB_0__::func_402(uParam2->f_5442);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iVar0), true);
				uParam2->f_5441 = uParam2->f_5442;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam2->f_5441, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(uParam2->f_5441, true, true, false);
					__LIB_26__::func_718(uParam2);
				}
				if (BitTest(Global_4718592.f_31, 12))
				{
					VEHICLE::SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(true);
				}
				if (BitTest(Global_4718592.f_32, 18))
				{
					if (__LIB_21__::func_854(ENTITY::GET_ENTITY_MODEL(uParam2->f_5441)))
					{
						VEHICLE::SET_INCREASE_WHEEL_CRUSH_DAMAGE(uParam2->f_5441, true);
					}
				}
				if (__LIB_18__::func_689())
				{
					__LIB_26__::func_708(uParam2->f_5441);
				}
				if (__LIB_0__::func_625())
				{
					__LIB_44__::func_13(uParam2->f_5441, __LIB_35__::func_189(uParam0), __LIB_26__::func_694(uParam0));
				}
				if (BitTest(Global_4718592.f_33, 13))
				{
					VEHICLE::SET_VEHICLE_CAUSES_SWERVING(uParam2->f_5441, false);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				iVar1 = ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_235 - 1);
				if (iVar1 < 0)
				{
					iVar1 = (uParam0->f_729 - 1);
				}
				if ((!__LIB_27__::func_101(uParam0) && !__LIB_10__::func_365()) || (__LIB_10__::func_365() && !uParam2->f_9082))
				{
					__LIB_44__::func_144(uParam0, uParam2, uParam1);
				}
				MISC::CLEAR_AREA(Param3, 5f, false, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (__LIB_27__::func_6(uParam0))
					{
						if (__LIB_35__::func_187(uParam0, uParam1, uParam2))
						{
							if (__LIB_35__::func_189(uParam0) && ((__LIB_10__::func_365() && uParam2->f_9082) || !__LIB_10__::func_365()))
							{
								if (__LIB_41__::func_724(&(uParam2->f_5441), &(Global_2667225.f_45.f_69), Global_2667225.f_45.f_69.f_81))
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
					}
					else
					{
						NETWORK::SET_NETWORK_VEHICLE_RESPOT_TIMER(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iVar0), 3000, 1, 1);
						if (__LIB_35__::func_189(uParam0) && ((__LIB_10__::func_365() && uParam2->f_9082) || !__LIB_10__::func_365()))
						{
							if (__LIB_41__::func_724(&(uParam2->f_5441), &(Global_2667225.f_45.f_69), Global_2667225.f_45.f_69.f_81))
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
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
			}
		}
	}
	else if ((__LIB_26__::func_666(Global_4456449.f_5) || __LIB_26__::func_693(uParam0)) || uParam2->f_9080)
	{
		return 1;
	}
	else if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			uParam2->f_5442 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_5443))
		{
			uParam2->f_5442 = uParam2->f_5443;
		}
	}
	return 0;
}

void func_192(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xE946C
{
	if (__LIB_27__::func_247(&(uParam3->f_3660), iParam0, &(uParam3->f_1706), uParam1->f_839, 0, 0, 0))
	{
		MISC::SET_BIT(&(uParam3->f_5511), 4);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
		switch (uParam3->f_1706.f_27)
		{
			case 0:
				__LIB_44__::func_152(iParam0, uParam1, uParam2, uParam3);
				if (!BitTest(uParam3->f_1706.f_33, 7))
				{
					__LIB_21__::func_884(&(uParam3->f_1706), &(uParam3->f_3660));
					__LIB_10__::func_263(&(uParam3->f_3660), 0, 1);
					MISC::SET_BIT(&(uParam3->f_1706.f_33), 7);
				}
				__LIB_27__::func_119(uParam3);
				if (BitTest(uParam3->f_1706.f_33, 10))
				{
					MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 10);
				}
				uParam3->f_1706.f_27 = 1;
				break;
			case 1:
				__LIB_44__::func_152(iParam0, uParam1, uParam2, uParam3);
				uParam3->f_1706.f_27 = 2;
				break;
			case 2:
				if (__LIB_21__::func_883())
				{
					__LIB_44__::func_152(iParam0, uParam1, uParam2, uParam3);
				}
				if (!BitTest(uParam3->f_1706.f_33, 7))
				{
					__LIB_10__::func_263(&(uParam3->f_3660), 0, 1);
					MISC::SET_BIT(&(uParam3->f_1706.f_33), 7);
				}
				__LIB_21__::func_884(&(uParam3->f_1706), &(uParam3->f_3660));
				if (__LIB_22__::func_230(&(uParam3->f_1706)))
				{
					__LIB_27__::func_119(uParam3);
				}
				break;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam3->f_3660))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uParam3->f_3660, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
		}
	}
	else
	{
		__LIB_1__::func_975();
		if (BitTest(uParam3->f_1706.f_33, 10))
		{
			MISC::CLEAR_BIT(&(uParam3->f_1706.f_33), 10);
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_193(var uParam0)//Position - 0x166F39
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__::func_693(bVar1, 0, 1))
		{
			__LIB_12__::func_554(bVar1, 1, 0, 0);
			__LIB_44__::func_154(bVar1, 0, 7000);
		}
		MISC::CLEAR_BIT(&(uParam0->f_8566), iVar0);
		iVar0++;
	}
}

void func_194(var uParam0, var uParam1, var uParam2)//Position - 0x16C841
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!BitTest(uParam2->f_5511, 21))
	{
		if (__LIB_35__::func_411(uParam0))
		{
			iVar0 = __LIB_44__::func_143(uParam1, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), uParam0);
			if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_257 != iVar0)
			{
				(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_257 = iVar0;
			}
			if (__LIB_26__::func_661(uParam0))
			{
				iVar1 = __LIB_43__::func_776(uParam0, uParam1, NETWORK::PARTICIPANT_ID_TO_INT(), 0, 0, 0);
				if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_258 != iVar1)
				{
					(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_258 = iVar1;
				}
			}
			uParam2->f_4657 = iVar0;
		}
		else
		{
			iVar2 = __LIB_44__::func_143(uParam1, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), uParam0);
			if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_257 != iVar2)
			{
				(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_257 = iVar2;
			}
			uParam2->f_4657 = iVar2;
		}
		if (uParam2->f_3659 != uParam2->f_4657)
		{
			uParam2->f_3659 = uParam2->f_4657;
		}
		uParam2->f_4659 = __LIB_41__::func_758(uParam0);
	}
	if (!BitTest(uParam2->f_5512, 26))
	{
		MISC::SET_BIT(&(uParam2->f_5512), 26);
	}
}

void func_195(var uParam0, var uParam1, var uParam2)//Position - 0x16DFCA
{
	if (!BitTest(Global_4718592.f_32, 22))
	{
		return;
	}
	if (__LIB_27__::func_6(uParam0))
	{
		return;
	}
	if (__LIB_27__::func_52(uParam0))
	{
		if (NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(uParam2->f_5514, 4))
			{
				if (__LIB_44__::func_149(uParam0, uParam1, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_237, 0, uParam2, 0))
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, true);
					MISC::SET_BIT(&(uParam2->f_5514), 4);
				}
				else if ((__LIB_0__::func_864(&(uParam0->f_815)) && __LIB_35__::func_167(uParam0, uParam2) >= 30000) && !__LIB_27__::func_6(uParam0))
				{
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, true);
					__LIB_26__::func_761(uParam2);
					MISC::SET_BIT(&(uParam2->f_5514), 4);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
			}
		}
		else if (!BitTest(uParam2->f_5514, 2))
		{
			__LIB_26__::func_865();
			MISC::SET_BIT(&(uParam2->f_5514), 2);
		}
	}
}

void func_196(var uParam0, var uParam1)//Position - 0x16E19C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (uParam0->f_8632[0] > 0 || uParam0->f_8632[1] > 0)
	{
		if (__LIB_0__::func_625())
		{
			if (uParam0->f_8635 >= 32)
			{
				uParam0->f_8635 = 0;
			}
		}
		else if (uParam0->f_8635 >= Global_4980736.f_195933)
		{
			uParam0->f_8635 = 0;
		}
		switch (Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_10)
		{
			case 9:
				iVar0 = __LIB_1__::func_4();
				if (iVar0 == 0)
				{
					iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
				}
				if (__LIB_35__::func_265(iVar0, uParam0->f_8635, 1, 0))
				{
					if (!BitTest(uParam0->f_8628, uParam0->f_8635))
					{
						if (WATER::GET_DEEP_OCEAN_SCALER() != Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_25)
						{
							WATER::SET_DEEP_OCEAN_SCALER(Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_25);
						}
						GRAPHICS::DISABLE_IN_WATER_PTFX(true);
						MISC::SET_BIT(&(uParam0->f_8628), uParam0->f_8635);
					}
				}
				else if (BitTest(uParam0->f_8628, uParam0->f_8635))
				{
					MISC::CLEAR_BIT(&(uParam0->f_8628), uParam0->f_8635);
					if (uParam0->f_8628 == 0)
					{
						GRAPHICS::DISABLE_IN_WATER_PTFX(false);
					}
					if (uParam0->f_8628 > 0)
					{
						if (WATER::GET_DEEP_OCEAN_SCALER() == Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_25)
						{
							__LIB_26__::func_871(uParam0, iVar0);
						}
					}
					else if (WATER::GET_DEEP_OCEAN_SCALER() != 1f)
					{
						WATER::RESET_DEEP_OCEAN_SCALER();
					}
				}
				break;
			case 37:
				iVar0 = __LIB_1__::func_4();
				if (iVar0 == 0)
				{
					iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !__LIB_2__::func_836(iVar1))
					{
						if (__LIB_35__::func_265(iVar0, uParam0->f_8635, 1, 0))
						{
							if (uParam0->f_10242 == -1)
							{
								uParam0->f_10242 = uParam0->f_8635;
							}
							__LIB_41__::func_792(iVar1, Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_24, &(uParam0->f_9229), uParam0->f_9231, uParam0->f_8635, &(uParam0->f_10232), BitTest(uParam0->f_5514, 5));
							bVar2 = true;
							if (__LIB_26__::func_870())
							{
								bVar2 = VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar1) < 1000f;
							}
							if (BitTest(Global_4718592.f_37, 19) || BitTest(Global_4718592.f_40, 5))
							{
								__LIB_26__::func_761(uParam0);
							}
							if (!NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()) && bVar2)
							{
								if ((BitTest(Global_4718592.f_32, 26) || BitTest(Global_4718592.f_37, 19)) || BitTest(Global_4718592.f_40, 5))
								{
									if (!BitTest(uParam0->f_8637, uParam0->f_8635))
									{
										__LIB_26__::func_761(uParam0);
									}
								}
								if (!BitTest(uParam0->f_5514, 5) && !NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
								{
									NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, true);
								}
							}
							else if (((BitTest(uParam0->f_8637, uParam0->f_8635) && VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar1) >= 1000f) && !BitTest(uParam0->f_5514, 3)) && __LIB_26__::func_870())
							{
								if (NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
								{
									if (!__LIB_27__::func_6(uParam1))
									{
										NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
									}
									__LIB_26__::func_761(uParam0);
								}
							}
							else if (VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar1) < 1000f)
							{
								if (!BitTest(uParam0->f_8637, uParam0->f_8635))
								{
									__LIB_26__::func_761(uParam0);
									MISC::CLEAR_BIT(&(uParam0->f_5514), 3);
								}
								if (__LIB_27__::func_6(uParam1))
								{
									ENTITY::SET_ENTITY_ALPHA(iVar1, 125, false);
									ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 125, false);
								}
							}
							if (!BitTest(uParam0->f_8637, uParam0->f_8635))
							{
								if (__LIB_18__::func_689())
								{
									__LIB_0__::func_151("RCE_PIT_STOP2" /* GXT: Remain stationary to regain vehicle and tire health. */, -1);
								}
								else
								{
									__LIB_0__::func_151("RCE_PIT_STOP", -1);
								}
							}
							MISC::SET_BIT(&(uParam0->f_8637), uParam0->f_8635);
						}
						else
						{
							if (uParam0->f_10242 == uParam0->f_8635)
							{
								uParam0->f_10242 = -1;
							}
							if (BitTest(uParam0->f_8637, uParam0->f_8635))
							{
								if (NETWORK::IS_ENTITY_A_GHOST(PLAYER::PLAYER_PED_ID()))
								{
									if (!__LIB_27__::func_6(uParam1))
									{
										NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
									}
									else
									{
										ENTITY::RESET_ENTITY_ALPHA(iVar1);
										ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
									}
								}
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								MISC::CLEAR_BIT(&(uParam0->f_8637), uParam0->f_8635);
							}
						}
					}
				}
				break;
			case 23:
				if (__LIB_35__::func_265(PLAYER::PLAYER_PED_ID(), uParam0->f_8635, 1, 0))
				{
					if (!BitTest(uParam0->f_8636, uParam0->f_8635))
					{
						PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_24);
						MISC::SET_BIT(&(uParam0->f_8636), uParam0->f_8635);
					}
				}
				else if (BitTest(uParam0->f_8636, uParam0->f_8635))
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
					MISC::CLEAR_BIT(&(uParam0->f_8636), uParam0->f_8635);
				}
				break;
			case 40:
				if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_35__::func_265(PLAYER::PLAYER_PED_ID(), uParam0->f_8635, 1, 1)) && !__LIB_1__::func_11()) && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_44__::func_156(&(uParam0->f_10126[uParam0->f_8635 /*2*/]), Global_4980736.f_195934[uParam0->f_8635 /*111*/].f_24, 1);
				}
				else if (__LIB_0__::func_864(&(uParam0->f_10126[uParam0->f_8635 /*2*/])))
				{
					__LIB_1__::func_751();
					__LIB_0__::func_794(&(uParam0->f_10126[uParam0->f_8635 /*2*/]));
				}
				break;
			}
	}
	uParam0->f_8635++;
	__LIB_43__::func_269(uParam0);
}

void func_197(var uParam0, var uParam1, bool bParam2)//Position - 0x17FA27
{
	int iVar0;
	if (__LIB_35__::func_164(uParam0, 0))
	{
		if (bParam2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam1->f_5444))
			{
				iVar0 = NETWORK::NET_TO_ENT(uParam1->f_5444);
			}
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (!__LIB_44__::func_163(uParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam2);
			}
			if (bParam2 == 0)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		if (!BitTest(uParam1->f_5512, 28))
		{
			__LIB_27__::func_147(uParam1);
			if (__LIB_26__::func_810(uParam0))
			{
				__LIB_26__::func_732(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0));
				PHYSICS::SET_IN_STUNT_MODE(true);
			}
			MISC::SET_BIT(&(uParam1->f_5512), 28);
		}
	}
}

void func_198(var uParam0, var uParam1, bool bParam2)//Position - 0x17FDA8
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	bool bVar5;
	float fVar6;
	bVar0 = true;
	if (__LIB_44__::func_163(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5441) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_5441, false))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_5441, true) };
			Var2 = { Var1 + Vector(2f, 0f, 0f) };
			Var3 = { Var1 };
			Var3.f_2 = -1f;
			bVar5 = __LIB_44__::func_35(uParam0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam1->f_5441))
			{
				if (bParam2)
				{
					if (WATER::TEST_PROBE_AGAINST_ALL_WATER(Var2, Var3, 1, &Var4) == 1)
					{
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar6, false, false))
						{
							if ((Var4.f_2 - fVar6) < 0.5f)
							{
								bVar0 = false;
							}
						}
					}
					if (bVar0)
					{
						VEHICLE::SET_BOAT_ANCHOR(uParam1->f_5441, true);
						if (!bVar5)
						{
							VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(uParam1->f_5441, 0f);
						}
						VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(uParam1->f_5441, true);
						if (!bVar5)
						{
							VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(uParam1->f_5441, true);
						}
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_5441, true);
					}
				}
				else
				{
					VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(uParam1->f_5441, false);
					if (!bVar5)
					{
						VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(uParam1->f_5441, false);
					}
					VEHICLE::SET_BOAT_ANCHOR(uParam1->f_5441, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_5441, false);
					PHYSICS::ACTIVATE_PHYSICS(uParam1->f_5441);
				}
			}
		}
	}
}

void func_199(var uParam0, int iParam1, int iParam2, var uParam3, struct<3> Param4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, bool bParam20)//Position - 0x18290F
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var1 = { Global_4718592.f_95507[iParam1 + 2 /*58*/] };
	iVar8 = 150;
	iVar9 = 150;
	if (iParam1 + 1 != (uParam3->f_729 - 1))
	{
		iVar0 = __LIB_44__::func_148(iParam1 + 1, uParam3->f_573, -1, 0, 0, Global_1659902);
	}
	else if (iParam2 != uParam3->f_585)
	{
		if (__LIB_1__::func_188(uParam3->f_572))
		{
			iVar0 = 15;
		}
		else if (__LIB_1__::func_187(uParam3->f_572))
		{
			iVar0 = 20;
		}
		else
		{
			iVar0 = 9;
		}
	}
	else if (__LIB_1__::func_187(uParam3->f_572))
	{
		iVar0 = 21;
	}
	else if (__LIB_1__::func_188(uParam3->f_572))
	{
		iVar0 = 16;
	}
	else
	{
		iVar0 = 10;
	}
	HUD::GET_HUD_COLOUR(13, &iVar2, &iVar3, &iVar4, &iVar8);
	iVar8 = __LIB_43__::func_276(uParam3, uParam19, iParam1, 0, bParam20);
	HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar9);
	iVar9 = __LIB_43__::func_276(uParam3, uParam19, iParam1, 1, bParam20);
	if (!__LIB_1__::func_188(uParam3->f_572) && (BitTest(Global_4718592.f_95507[iParam1 + 1 /*58*/].f_28, 5) || (BitTest(Global_4718592.f_95507[iParam1 + 1 /*58*/].f_29, 15) && bParam20)))
	{
		uParam19->f_5351 = GRAPHICS::CREATE_CHECKPOINT(iVar0, Param4 + Vector(2f, 0f, 0f), Var1 + Vector(5f, 0f, 0f), ((7.5f * 1f) * 0.66f), iVar2, iVar3, iVar4, 150, 0);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam19->f_5351, iVar5, iVar6, iVar7, iVar9);
	}
	else
	{
		uParam19->f_5351 = GRAPHICS::CREATE_CHECKPOINT(iVar0, Param4 + Vector(4f, 0f, 0f), Var1 + Vector(5f, 0f, 0f), 6f, iVar2, iVar3, iVar4, 150, 0);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam19->f_5351, iVar5, iVar6, iVar7, iVar9);
		if (!__LIB_35__::func_207(iParam1, bParam20, 0))
		{
			__LIB_41__::func_814(uParam3, uParam0, uParam19->f_5351, Param4, uParam19, 0);
		}
	}
}

void func_200(var uParam0, var uParam1, var uParam2)//Position - 0x189F6D
{
	int iVar0;
	if (__LIB_26__::func_661(uParam1))
	{
		__LIB_4__::func_563(1);
		if (__LIB_10__::func_289())
		{
			MISC::CLEAR_BIT(&(uParam0->f_5517), 4);
			__LIB_35__::func_317(uParam1);
			return;
		}
	}
	if (BitTest(uParam0->f_5511, 21))
	{
		return;
	}
	if (!__LIB_26__::func_694(uParam1) && !__LIB_26__::func_661(uParam1))
	{
		return;
	}
	if (__LIB_44__::func_36(uParam1, uParam0) != 1)
	{
		return;
	}
	if (!BitTest(uParam0->f_5517, 4))
	{
		if (!__LIB_27__::func_52(uParam1))
		{
			__LIB_35__::func_317(uParam1);
		}
		else if (!__LIB_0__::func_864(&(uParam0->f_5221)))
		{
			__LIB_0__::func_795(&(uParam0->f_5221), 0, 0);
			__LIB_4__::func_563(1);
		}
		else
		{
			iVar0 = 10000;
			if (__LIB_26__::func_661(uParam1))
			{
				iVar0 = 1;
			}
			if (!__LIB_0__::func_937(&(uParam0->f_5221), iVar0, 0))
			{
				__LIB_35__::func_317(uParam1);
				__LIB_4__::func_563(1);
			}
			else
			{
				__LIB_44__::func_164(uParam0, uParam1, uParam2);
				__LIB_4__::func_563(0);
			}
		}
	}
}

int func_201(var uParam0, var uParam1, var uParam2)//Position - 0x1A9A2C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (__LIB_44__::func_143(uParam0, uParam2, NETWORK::PARTICIPANT_ID_TO_INT(), uParam1) == uParam1->f_546)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_202(var uParam0, var uParam1, var uParam2)//Position - 0x2DAD34
{
	if (!BitTest(uParam2->f_5517, 23))
	{
		if (BitTest(uParam2->f_5517, 21))
		{
			if (__LIB_26__::func_760(uParam0))
			{
				if (__LIB_44__::func_168(uParam0, uParam1, uParam2))
				{
					__LIB_43__::func_262(uParam0, uParam1, uParam2);
					__LIB_43__::func_299(uParam0, uParam1, uParam2);
					MISC::SET_BIT(&(uParam2->f_5517), 23);
				}
			}
			__LIB_43__::func_819(uParam0, uParam1, uParam2);
		}
	}
}

void func_203(var uParam0, var uParam1, var uParam2)//Position - 0x2E7D14
{
	if (!BitTest(uParam2->f_5512, 0))
	{
		if (__LIB_26__::func_670(uParam1) == 7)
		{
			__LIB_44__::func_169(uParam0, uParam1, Global_1659902, Global_1659910, Global_1659909);
			MISC::SET_BIT(&(uParam2->f_5512), 0);
		}
	}
}

void func_204(var uParam0, var uParam1, var uParam2)//Position - 0x2E811B
{
	if (!BitTest(uParam2->f_5512, 6))
	{
		if (BitTest(uParam2->f_5512, 5))
		{
			if (!BitTest(uParam2->f_5511, 24))
			{
				if (!BitTest(uParam2->f_5511, 21))
				{
					MISC::SET_BIT(&(uParam2->f_5511), 24);
					__LIB_8__::func_944(&(uParam2->f_8001), 0);
				}
				else if (!__LIB_0__::func_864(&(uParam2->f_778)))
				{
					__LIB_0__::func_795(&(uParam2->f_778), 0, 0);
				}
				else if (__LIB_41__::func_858(&(uParam2->f_8001), &(uParam2->f_8442), uParam2->f_8502, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253, &(uParam2->f_8501), __LIB_35__::func_335(), &(Global_4718592.f_116811), &(Global_4718592.f_116531), uParam0->f_571, 1, 0, &(uParam2->f_1822.f_17)) || __LIB_0__::func_937(&(uParam2->f_778), 15000, 0))
				{
					MISC::SET_BIT(&(uParam2->f_5511), 24);
					__LIB_8__::func_944(&(uParam2->f_8001), 0);
				}
			}
			else if (__LIB_26__::func_666(Global_4456449.f_5) || __LIB_44__::func_168(uParam0, uParam1, uParam2))
			{
				MISC::SET_BIT(&(uParam2->f_5512), 6);
			}
		}
	}
}

void func_205(var uParam0, var uParam1)//Position - 0x2EB485
{
	bool bVar0;
	int iVar1;
	if (!BitTest(uParam0->f_5513, 3))
	{
		bVar0 = __LIB_44__::func_172(uParam0, uParam1, -1);
		iVar1 = uParam0->f_5441;
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_HAS_KERS(iVar1))
					{
						VEHICLE::SET_VEHICLE_KERS_ALLOWED(iVar1, bVar0);
						if (bVar0 && !BitTest(uParam0->f_5513, 28))
						{
							HUD::SET_ALLOW_ABILITY_BAR(true);
							HUD::SET_ABILITY_BAR_VISIBILITY(true);
							HUD::SET_ABILITY_BAR_VALUE(-1f, 100f);
							HUD::FLASH_ABILITY_BAR(3000);
							MISC::SET_BIT(&(uParam0->f_5513), 28);
						}
					}
					else if ((VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("voltic2")) || VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("oppressor"))) || VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("vigilante")))
					{
						if (bVar0)
						{
							if (uParam0->f_8942)
							{
								PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
								uParam0->f_8942 = 0;
							}
						}
						else
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
							uParam0->f_8942 = 1;
						}
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_5513), 3);
					}
				}
			}
		}
	}
	if (__LIB_18__::func_689())
	{
		if ((BitTest(uParam0->f_5513, 28) && !BitTest(uParam0->f_5514, 14)) && __LIB_27__::func_52(uParam1))
		{
			if (!__LIB_0__::func_864(&(uParam0->f_8943)))
			{
				__LIB_0__::func_627(&(uParam0->f_8943), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam0->f_8943), 1000, 0))
			{
				__LIB_0__::func_151("OW_KER_HELP" /* GXT: Press ~INPUT_VEH_ROCKET_BOOST~ to use ~y~KERS Boost~s~. */, 6000);
				MISC::SET_BIT(&(uParam0->f_5514), 14);
			}
		}
	}
}

void func_206(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x2F88A8
{
	struct<11> Var0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	if (SCRIPT::GET_EVENT_DATA(1, iParam3, &Var0, 11))
	{
		iVar1 = Var0.f_1;
		__LIB_35__::func_408(uParam1, iVar1, Var0.f_3, Var0.f_5, Var0.f_4, __LIB_26__::func_664(uParam0->f_572));
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (uParam0->f_724 != Var0.f_5)
			{
				if (uParam0->f_724 < Var0.f_5)
				{
					uParam0->f_724 = Var0.f_5;
				}
			}
			if (!BitTest(uParam0->f_823, 29) && !__LIB_26__::func_766())
			{
				if (Var0.f_5 == uParam0->f_585)
				{
					if (Var0.f_3 == (uParam0->f_729 - 1))
					{
						MISC::SET_BIT(&(uParam0->f_823), 29);
					}
				}
			}
		}
		if (!BitTest(uParam2->f_5512, 4))
		{
			if (Var0.f_9 == 1)
			{
				MISC::SET_BIT(&(uParam2->f_5512), 4);
			}
		}
		if (Var0.f_1 != PLAYER::PLAYER_ID())
		{
			if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_225 == 0)
			{
				if (__LIB_35__::func_411(uParam0))
				{
					if (Var0.f_1 != __LIB_35__::func_327(uParam1))
					{
						if (Var0.f_9 == 1 && Var0.f_10)
						{
							if ((uParam1[iVar1 /*303*/])->f_9 != -1)
							{
								if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE((uParam1[iVar1 /*303*/])->f_9))
								{
									StringCopy(&Var2, "RAL_F_", 16);
									StringIntConCat(&Var2, Var0.f_6, 16);
									iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX((uParam1[iVar1 /*303*/])->f_9);
									bVar4 = true;
									if (__LIB_10__::func_289())
									{
										iVar5 = Var0.f_1;
										iVar6 = iVar3;
									}
									else
									{
										iVar5 = iVar3;
										iVar6 = Var0.f_1;
									}
									if (__LIB_26__::func_661(uParam0))
									{
										bVar4 = false;
									}
									if (bVar4)
									{
										__LIB_43__::func_310(&Var2, iVar5, iVar6, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (Var0.f_9 == 1)
				{
					if (__LIB_26__::func_666(Global_4456449.f_5))
					{
						__LIB_43__::func_311("RACE_F_PTS", Var0.f_1, Var0.f_8, 0, 0, 0);
					}
					else if (!__LIB_26__::func_665(uParam0))
					{
						StringCopy(&Var2, "RACE_F_", 16);
						StringIntConCat(&Var2, uParam2->f_9076, 16);
						if (uParam2->f_9076 > 0)
						{
							__LIB_43__::func_251(&Var2, Var0.f_1, 0, 0, 0, 1, 0);
							uParam2->f_9076++;
						}
					}
				}
			}
			if (__LIB_35__::func_411(uParam0))
			{
				if (Var0.f_1 == __LIB_35__::func_327(uParam1))
				{
					if ((__LIB_26__::func_721(uParam0) && !__LIB_14__::func_315(PLAYER::PLAYER_ID(), Var0.f_1)) || (__LIB_26__::func_661(uParam0) && __LIB_2__::func_644()))
					{
						MISC::SET_BIT(&(uParam2->f_5517), 18);
					}
					if (Var0.f_7 != 0)
					{
						if (Var0.f_7 < (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 || (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 <= 0)
						{
							(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_253 = Var0.f_7;
							bVar7 = __LIB_26__::func_664(uParam0->f_572);
							__LIB_44__::func_146(uParam0, uParam2, &bVar7, &(Var0.f_7), &(Var0.f_5), uParam1, 1);
						}
					}
					if (Var0.f_9 == 1)
					{
						__LIB_43__::func_786(uParam2, uParam0, uParam1);
						(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_252 = Var0.f_4;
						uParam2->f_3956 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_252;
					}
				}
			}
		}
		else if (!__LIB_27__::func_56(uParam1))
		{
			__LIB_35__::func_407(uParam1, uParam2);
		}
		__LIB_27__::func_54(&(uParam2->f_10243), __LIB_26__::func_783(uParam1), Var0.f_3);
	}
}

int func_207(var uParam0, var uParam1)//Position - 0x2D7963
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (MISC::IS_PC_VERSION() && NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_106) && HUD::GET_MOUSE_EVENT(uParam1->f_106, &iVar0, &iVar1, &uVar2))
		{
			if (iVar1 > -1 && iVar1 < 9)
			{
				if (iVar0 == 5)
				{
					if (iVar1 == 6)
					{
						if (__LIB_42__::func_181())
						{
							if (__LIB_22__::func_18(uParam1) == 18)
							{
								return 1;
							}
							else
							{
								__LIB_44__::func_179(uParam0, uParam1, 18);
							}
						}
					}
					else if (iVar1 == 7)
					{
						if ((!__LIB_21__::func_690(uParam0) && !__LIB_27__::func_177(uParam0)) && !__LIB_23__::func_634(uParam0))
						{
							if (__LIB_22__::func_18(uParam1) == 19)
							{
								return 1;
							}
							else
							{
								__LIB_44__::func_179(uParam0, uParam1, 19);
							}
						}
					}
					else if (iVar1 == 8)
					{
						if (__LIB_22__::func_18(uParam1) == 20)
						{
							return 1;
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
					}
					else if (__LIB_22__::func_18(uParam1) == iVar1)
					{
						return 1;
					}
					else
					{
						__LIB_44__::func_179(uParam0, uParam1, iVar1);
					}
				}
			}
		}
	}
	return 0;
}

void func_208(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2D92FA
{
	if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (iParam3 == 0)
	{
		switch (iParam2)
		{
			case 0:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 3);
						}
						break;
					case 1:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 4);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 3:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
					case 4:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 5:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
					case 18:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 19:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 20:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
				}
				break;
			case 1:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 1:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
					case 3:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 0);
						}
						break;
					case 4:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 1);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
					case 5:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 18:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
					case 19:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 20:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
				}
				break;
			case 2:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
					case 1:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 3:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
					case 4:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 5:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 18:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 19:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
						break;
					case 20:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							if (__LIB_42__::func_181())
							{
								__LIB_44__::func_179(uParam0, uParam1, 18);
							}
							else
							{
								__LIB_44__::func_179(uParam0, uParam1, 20);
							}
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
				}
				break;
			case 3:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 1:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
					case 3:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 4:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
					case 5:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 18:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
					case 19:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 20:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 2:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 1:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 3:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
					case 4:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 5:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 18:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
					case 19:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 5);
						}
						break;
					case 20:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							if (__LIB_42__::func_181())
							{
								__LIB_44__::func_179(uParam0, uParam1, 18);
							}
							else
							{
								__LIB_44__::func_179(uParam0, uParam1, 5);
							}
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
				}
				break;
			case 3:
				switch (__LIB_22__::func_18(uParam1))
				{
					case 0:
						__LIB_44__::func_179(uParam0, uParam1, 1);
						break;
					case 1:
						__LIB_44__::func_179(uParam0, uParam1, 2);
						break;
					case 2:
						__LIB_44__::func_179(uParam0, uParam1, 3);
						break;
					case 3:
						__LIB_44__::func_179(uParam0, uParam1, 4);
						break;
					case 4:
						__LIB_44__::func_179(uParam0, uParam1, 5);
						break;
					case 5:
						if (__LIB_42__::func_181())
						{
							__LIB_44__::func_179(uParam0, uParam1, 18);
						}
						else if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
					case 18:
						if ((__LIB_21__::func_690(uParam0) || __LIB_27__::func_177(uParam0)) || __LIB_23__::func_634(uParam0))
						{
							__LIB_44__::func_179(uParam0, uParam1, 20);
						}
						else
						{
							__LIB_44__::func_179(uParam0, uParam1, 19);
						}
						break;
					case 19:
						__LIB_44__::func_179(uParam0, uParam1, 20);
						break;
					case 20:
						__LIB_44__::func_179(uParam0, uParam1, 0);
						break;
				}
				break;
			}
	}
}

void func_209(var uParam0)//Position - 0x98EFA
{
	if (__LIB_11__::func_117(uParam0))
	{
		__LIB_11__::func_116(uParam0, 0);
		__LIB_43__::func_941(&(uParam0->f_1));
		__LIB_44__::func_186(&(uParam0->f_1), 1);
		__LIB_1__::func_289(uParam0, 2);
		return;
	}
	if (__LIB_32__::func_904(uParam0))
	{
		__LIB_11__::func_116(uParam0, 0);
		__LIB_1__::func_289(uParam0, 1);
		return;
	}
}

void func_210(var uParam0)//Position - 0x99983
{
	if (__LIB_32__::func_904(uParam0))
	{
		__LIB_11__::func_118(&(uParam0->f_1));
		__LIB_1__::func_289(uParam0, 1);
		return;
	}
	if (__LIB_11__::func_117(uParam0))
	{
		__LIB_11__::func_116(uParam0, 1);
		__LIB_1__::func_289(uParam0, 3);
		return;
	}
	__LIB_44__::func_186(&(uParam0->f_1), 0);
}

int func_211(var uParam0)//Position - 0x17DD9F
{
	int iVar0;
	if (uParam0->f_10.f_5 == 33)
	{
		__LIB_43__::func_951(uParam0);
	}
	if (__LIB_43__::func_701(uParam0))
	{
		iVar0 = __LIB_16__::func_163(uParam0->f_10.f_1);
		__LIB_44__::func_187(uParam0, iVar0, 0);
		uParam0->f_10.f_3 = iVar0;
		uParam0->f_10.f_4 = 31;
		uParam0->f_10.f_5 = 34;
		return 1;
	}
	if (__LIB_41__::func_302(uParam0, 1065353216))
	{
		if (uParam0->f_10.f_5 == 32)
		{
			uParam0->f_10.f_7 = SYSTEM::ROUND(uParam0->f_10);
			__LIB_44__::func_106(uParam0, 0);
			uParam0->f_10.f_5 = 33;
		}
	}
	return 0;
}

int func_212(var uParam0, int iParam1, int iParam2)//Position - 0x17EDDD
{
	if (!__LIB_16__::func_153(uParam0))
	{
		return 0;
	}
	__LIB_43__::func_700(uParam0);
	uParam0->f_10.f_2 = __LIB_1__::func_723(iParam1, 0);
	iParam2 = __LIB_0__::func_340(iParam2, 0, 37);
	uParam0->f_10.f_1 = iParam2;
	__LIB_44__::func_188(uParam0);
	uParam0->f_10.f_4 = 29;
	uParam0->f_10.f_5 = 32;
	uParam0->f_10.f_6 = 0;
	uParam0->f_10.f_7 = 0;
	uParam0->f_10.f_8 = 0f;
	uParam0->f_10 = 0f;
	return 1;
}

void func_213(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)//Position - 0x37C43
{
	int iVar0;
	struct<42> Var1;
	struct<42> Var2;
	struct<42> Var3;
	struct<42> Var4;
	int iVar5;
	var uVar6[15];
	bool bVar7;
	bool bVar8;
	int iVar9[15];
	bool bVar10;
	bool bVar11;
	int iVar12;
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	Var2 = -1;
	Var2.f_22 = -1082130432;
	Var2.f_23 = 3;
	Var2.f_39 = -1;
	Var2.f_41 = -1;
	Var3 = -1;
	Var3.f_22 = -1082130432;
	Var3.f_23 = 3;
	Var3.f_39 = -1;
	Var3.f_41 = -1;
	Var4 = -1;
	Var4.f_22 = -1082130432;
	Var4.f_23 = 3;
	Var4.f_39 = -1;
	Var4.f_41 = -1;
	if (__LIB_0__::func_625())
	{
		bVar7 = true;
	}
	if (__LIB_35__::func_176(uParam0))
	{
		if (iParam4 == 0)
		{
			if (!BitTest(uParam0->f_823, 26))
			{
				MISC::SET_BIT(&(uParam0->f_823), 26);
				if (!BitTest(uParam0->f_823, 31))
				{
					MISC::SET_BIT(&(uParam0->f_823), 31);
				}
			}
		}
		else if (BitTest(uParam0->f_823, 26))
		{
			MISC::CLEAR_BIT(&(uParam0->f_823), 26);
		}
		iVar5 = __LIB_44__::func_143(uParam2, uParam3, iParam4, uParam0);
		bVar8 = false;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!BitTest((uParam1[iVar0 /*42*/])->f_28, 0))
			{
				(uParam1[iVar0 /*42*/])->f_1 = __LIB_0__::func_162();
				(*uParam1)[iVar0 /*42*/] = -1;
				MISC::SET_BIT(&((uParam1[iVar0 /*42*/])->f_28), 0);
			}
			if ((*uParam1)[iVar0 /*42*/] != -1)
			{
				if ((uParam1[iVar0 /*42*/])->f_30 != -1 && (uParam1[iVar0 /*42*/])->f_30 < 15)
				{
					uVar6[(uParam1[iVar0 /*42*/])->f_30]++;
				}
			}
			if (!bVar8)
			{
				if ((*uParam1)[iVar0 /*42*/] == iParam4)
				{
					Var4 = { *(uParam1[iVar0 /*42*/]) };
					if ((!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(Var4.f_0) && (uParam2[Var4.f_0 /*303*/])->f_226) && !(uParam2[Var4.f_0 /*303*/])->f_225)
					{
						Var4.f_0 = -1;
					}
					*(uParam1[iVar0 /*42*/]) = { Var1 };
					bVar8 = true;
				}
			}
			else
			{
				Var3 = { *(uParam1[iVar0 /*42*/]) };
				*(uParam1[(iVar0 - 1) /*42*/]) = { Var3 };
				*(uParam1[iVar0 /*42*/]) = { Var1 };
			}
			iVar0++;
		}
		uParam0->f_748[0] = uVar6[0];
		uParam0->f_748[1] = uVar6[1];
		uParam0->f_748[2] = uVar6[2];
		uParam0->f_748[3] = uVar6[3];
		uParam0->f_748[4] = uVar6[4];
		uParam0->f_748[5] = uVar6[5];
		uParam0->f_748[6] = uVar6[6];
		uParam0->f_748[7] = uVar6[7];
		if (__LIB_35__::func_411(uParam0))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				iVar9[iVar0] = 0;
				iVar0++;
			}
		}
		bVar10 = false;
		bVar11 = false;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!bVar10)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam4) || (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam4) && Var4.f_0 > -1))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam4))
					{
						iVar12 = NETWORK::NETWORK_GET_PLAYER_INDEX(iParam4);
					}
					else
					{
						iVar12 = Var4.f_1;
					}
					if (__LIB_27__::func_96(iVar12))
					{
						if ((uParam2[iParam4 /*303*/])->f_226)
						{
							if (__LIB_1__::func_693(iVar12, 0, 0) || (iVar12 != __LIB_0__::func_162() && (uParam2[iParam4 /*303*/])->f_225))
							{
								if (iVar5 <= iVar0 + 1)
								{
									bVar11 = true;
									if ((uParam1[iVar0 /*42*/])->f_1 != iVar12 && (uParam1[iVar0 /*42*/])->f_1 != __LIB_0__::func_162())
									{
										bVar11 = __LIB_44__::func_190(uParam1, uParam2, uParam3, iParam4, iVar0, iVar5, uParam0);
									}
									if (bVar11)
									{
										Var2 = { *(uParam1[iVar0 /*42*/]) };
										(uParam1[iVar0 /*42*/])->f_1 = iVar12;
										(*uParam1)[iVar0 /*42*/] = iParam4;
										(uParam1[iVar0 /*42*/])->f_30 = (uParam2[iParam4 /*303*/])->f_10;
										(uParam1[iVar0 /*42*/])->f_31 = (uParam2[iParam4 /*303*/])->f_252;
										(uParam1[iVar0 /*42*/])->f_32 = (uParam2[iParam4 /*303*/])->f_253;
										if (bVar7)
										{
											(uParam1[iVar0 /*42*/])->f_13 = (uParam2[iParam4 /*303*/])->f_290;
										}
										(uParam1[iVar0 /*42*/])->f_16 = (uParam2[iParam4 /*303*/])->f_241;
										(uParam1[iVar0 /*42*/])->f_17 = (uParam2[iParam4 /*303*/])->f_242;
										(uParam1[iVar0 /*42*/])->f_15 = (uParam2[iParam4 /*303*/])->f_243;
										(uParam1[iVar0 /*42*/])->f_12 = Global_1853348[iVar12 /*834*/].f_205.f_6;
										(uParam1[iVar0 /*42*/])->f_37 = (uParam2[iParam4 /*303*/])->f_254;
										(uParam1[iVar0 /*42*/])->f_34 = (uParam2[iParam4 /*303*/])->f_231;
										(uParam1[iVar0 /*42*/])->f_35 = (uParam2[iParam4 /*303*/])->f_232;
										(uParam1[iVar0 /*42*/])->f_36 = (uParam2[iParam4 /*303*/])->f_233;
										(uParam1[iVar0 /*42*/])->f_7 = (uParam2[iParam4 /*303*/])->f_246;
										(uParam1[iVar0 /*42*/])->f_11 = (uParam2[iParam4 /*303*/])->f_247;
										if (__LIB_26__::func_665(uParam0))
										{
											(uParam1[iVar0 /*42*/])->f_5 = __LIB_26__::func_698((uParam2[iParam4 /*303*/])->f_269);
										}
										if (__LIB_35__::func_411(uParam0))
										{
											(uParam1[iVar0 /*42*/])->f_29 = (uParam2[iParam4 /*303*/])->f_9;
										}
										(uParam1[iVar0 /*42*/])->f_14 = iVar5;
										(uParam1[iVar0 /*42*/])->f_10 = (uParam2[iParam4 /*303*/])->f_227;
										(uParam1[iVar0 /*42*/])->f_9 = (uParam2[iParam4 /*303*/])->f_250;
										if (__LIB_26__::func_661(uParam0))
										{
											(uParam1[iVar0 /*42*/])->f_9 = __LIB_26__::func_663(uParam2, iParam4);
											(uParam1[iVar0 /*42*/])->f_4 = __LIB_26__::func_663(uParam2, iParam4);
										}
										if (BitTest((uParam2[iParam4 /*303*/])->f_228, 13))
										{
											MISC::SET_BIT(&((uParam1[iVar0 /*42*/])->f_28), 3);
										}
										else
										{
											MISC::CLEAR_BIT(&((uParam1[iVar0 /*42*/])->f_28), 3);
										}
										bVar10 = true;
									}
								}
							}
						}
					}
				}
			}
			else
			{
				Var3 = { *(uParam1[iVar0 /*42*/]) };
				*(uParam1[iVar0 /*42*/]) = { Var2 };
				Var2 = { Var3 };
			}
			iVar0++;
		}
		if (__LIB_35__::func_411(uParam0))
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (((*uParam1)[iVar0 /*42*/] != -1 && (uParam1[iVar0 /*42*/])->f_30 != -1) && (uParam1[iVar0 /*42*/])->f_30 < 15)
				{
					iVar9[(uParam1[iVar0 /*42*/])->f_30] = __LIB_26__::func_697(uParam2, (*uParam1)[iVar0 /*42*/]);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 15)
			{
				uParam0->f_732[iVar0] = iVar9[iVar0];
				iVar0++;
			}
		}
		if (!BitTest(uParam0->f_823, 30))
		{
			if (BitTest(uParam0->f_823, 31))
			{
				if (iParam4 == (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
				{
					MISC::SET_BIT(&(uParam0->f_823), 30);
				}
			}
		}
		if (iParam4 == (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (!BitTest(uParam0->f_823, 25))
			{
				MISC::SET_BIT(&(uParam0->f_823), 25);
				MISC::CLEAR_BIT(&(uParam0->f_823), 26);
			}
		}
		else if (BitTest(uParam0->f_823, 25))
		{
			MISC::CLEAR_BIT(&(uParam0->f_823), 25);
		}
	}
}

int func_214(var uParam0, var uParam1, var uParam2, int iParam3, struct<3> Param4, float fParam5)//Position - 0x19FC4E
{
	bool bVar0;
	if (__LIB_1__::func_188(uParam0->f_572))
	{
		if (!__LIB_26__::func_892(uParam0->f_572, uParam0->f_573))
		{
			__LIB_35__::func_324(&Param4);
		}
	}
	if (__LIB_26__::func_669(uParam2, Param4) || NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_5444))
	{
		if (__LIB_35__::func_189(uParam0) && !((__LIB_26__::func_945(uParam2) == 1 && __LIB_10__::func_365()) && Global_4718592.f_94883 > 0))
		{
			if (!__LIB_35__::func_164(uParam0, 0))
			{
				bVar0 = true;
			}
			if (__LIB_43__::func_283(&(uParam2->f_5444), Param4, fParam5, 1, bVar0))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam2->f_5444))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam2->f_5444);
					return 0;
				}
				uParam2->f_5441 = NETWORK::NET_TO_VEH(uParam2->f_5444);
				__LIB_44__::func_197(uParam0, uParam2, 1);
				if (__LIB_43__::func_808(uParam0, &(uParam2->f_5441)))
				{
					VEHICLE::SET_VEHICLE_IS_STOLEN(uParam2->f_5441, false);
					MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 0);
					if (__LIB_26__::func_722())
					{
						VEHICLE::SET_BIKE_EASY_TO_LAND(NETWORK::NET_TO_VEH(uParam2->f_5444), true);
					}
					return 1;
				}
			}
		}
		else if (__LIB_0__::func_957(&(uParam2->f_5444), *iParam3, Param4, fParam5, 0, 1, 1, 0, 1, 1, 0, 0, __LIB_35__::func_320(uParam0), 0))
		{
			VEHICLE::SET_VEHICLE_IS_STOLEN(NETWORK::NET_TO_VEH(uParam2->f_5444), false);
			__LIB_2__::func_654(NETWORK::NET_TO_VEH(uParam2->f_5444));
			__LIB_44__::func_197(uParam0, uParam2, 1);
			if (__LIB_26__::func_722())
			{
				VEHICLE::SET_BIKE_EASY_TO_LAND(NETWORK::NET_TO_VEH(uParam2->f_5444), true);
			}
			return 1;
		}
	}
	return 0;
}

void func_215(var uParam0, var uParam1, var uParam2)//Position - 0x1A957C
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var12;
	fVar1 = 30f;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("multirace0_route3", &iVar0);
	iVar0 = (iVar0 - 1);
	switch ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_223)
	{
		case 0:
			if (((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 < (uParam1[__LIB_44__::func_201(uParam1, uParam0, uParam2) /*303*/])->f_235 && (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 != 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(NETWORK::NET_TO_VEH(uParam0->f_831)))
			{
				iVar4 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(NETWORK::NET_TO_VEH(uParam0->f_831));
				if (iVar4 < 1)
				{
					iVar4 = 1;
				}
				if (iVar4 < iVar0)
				{
					iVar6 = iVar4 + 1;
				}
				else
				{
					iVar6 = 1;
				}
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(__LIB_44__::func_201(uParam1, uParam0, uParam2)));
				iVar2 = PLAYER::GET_PLAYER_PED(iVar3);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(uParam0->f_831), false))
				{
					if ((TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("multirace0_route3", ENTITY::GET_ENTITY_COORDS(iVar2, true), &iVar5) && TASK::WAYPOINT_RECORDING_GET_COORD("multirace0_route3", iVar6, &Var8)) && TASK::WAYPOINT_RECORDING_GET_COORD("multirace0_route3", iVar5, &Var9))
					{
						fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var9, Var8, true);
						if (((((fVar7 > 30f || uParam0->f_829 < (uParam1[__LIB_44__::func_201(uParam1, uParam0, uParam2) /*303*/])->f_234) && !__LIB_0__::func_687(iVar2, NETWORK::NET_TO_VEH(uParam0->f_831), fVar1, 1)) && !__LIB_0__::func_725(iVar2, Var8, fVar1, 1)) && !__LIB_9__::func_257(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uParam0->f_831), true), 20f, 1, 1, 1123024896, 0, -1, 0, 0)) && !__LIB_9__::func_257(Var8, 20f, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_224 = iVar6;
							(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_223 = 1;
						}
					}
				}
			}
			break;
		case 1:
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(__LIB_44__::func_201(uParam1, uParam0, uParam2)));
			iVar2 = PLAYER::GET_PLAYER_PED(iVar3);
			if ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_224 < iVar0)
			{
				iVar10 = (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_224 + 1;
			}
			else
			{
				iVar10 = 1;
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD("multirace0_route3", (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_224, &Var11))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(uParam0->f_831), false))
				{
					if ((((__LIB_0__::func_687(iVar2, NETWORK::NET_TO_VEH(uParam0->f_831), fVar1, 1) || __LIB_0__::func_725(iVar2, Var11, fVar1, 1)) || __LIB_9__::func_257(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uParam0->f_831), true), 20f, 1, 1, 1123024896, 0, -1, 0, 0)) || __LIB_9__::func_257(Var11, 20f, 1, 1, 1123024896, 0, -1, 0, 0)) || ((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 >= (uParam1[__LIB_44__::func_201(uParam1, uParam0, uParam2) /*303*/])->f_235 && (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221 != 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(uParam0->f_836), joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(uParam0->f_836), joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 0)
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(NETWORK::NET_TO_PED(uParam0->f_836), NETWORK::NET_TO_VEH(uParam0->f_831), "multirace0_route3", 786468, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_220, 24, -1, 50f, true, 2f);
						}
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(uParam0->f_831), 20f);
						(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_223 = 0;
					}
					else if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var11, 5f) || __LIB_0__::func_725(NETWORK::NET_TO_VEH(uParam0->f_831), Var11, 5f, 1))
					{
						if (TASK::WAYPOINT_RECORDING_GET_COORD("multirace0_route3", iVar10, &Var12))
						{
							ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_VEH(uParam0->f_831), Var11, true, false, false, true);
							__LIB_17__::func_413(NETWORK::NET_TO_VEH(uParam0->f_831), Var12);
							(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_224 = iVar10;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_216(var uParam0, var uParam1, var uParam2)//Position - 0x2E87F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = 130;
	iVar1 = 130;
	if (!__LIB_43__::func_308(uParam0, 0))
	{
		if (__LIB_26__::func_670(uParam1) == 3)
		{
			if (__LIB_26__::func_672(uParam0))
			{
				__LIB_43__::func_302(uParam2, uParam0, uParam1);
				__LIB_43__::func_801(uParam0, uParam1, uParam2, __LIB_35__::func_228(uParam0, uParam1, uParam2));
				if (uParam0->f_718 != -1)
				{
					if (uParam2->f_8565 != uParam0->f_718)
					{
						__LIB_44__::func_193(uParam2);
						uParam2->f_8565 = uParam0->f_718;
					}
					else if (!BitTest(uParam2->f_8566, uParam0->f_718))
					{
						bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_718);
						__LIB_12__::func_554(bVar3, 1, 1, 0);
						if (bVar3 != PLAYER::PLAYER_ID())
						{
							__LIB_44__::func_154(bVar3, 1, -1);
						}
						MISC::SET_BIT(&(uParam2->f_8566), uParam0->f_718);
					}
				}
				__LIB_41__::func_859(uParam0, uParam1, uParam2);
			}
			if (__LIB_35__::func_228(uParam0, uParam1, uParam2))
			{
				if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
				{
					iVar4 = __LIB_1__::func_4();
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar4);
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
						if (iVar2 != -1)
						{
							if (!BitTest((uParam1[iVar2 /*303*/])->f_228, 25))
							{
								__LIB_22__::func_106(1, -1, 500, 500, 0);
								MISC::SET_BIT(&((uParam1[iVar2 /*303*/])->f_228), 25);
							}
						}
					}
				}
				else if (!BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 25))
				{
					__LIB_22__::func_106(1, -1, 500, 500, 0);
					MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 25);
				}
				if (__LIB_27__::func_0(uParam2))
				{
					PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0 /*PLAYER_CONTROL*/, 255, 0, 0);
				}
				else
				{
					PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0 /*PLAYER_CONTROL*/, 255, 255, 255);
				}
				if (__LIB_27__::func_0(uParam2))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar0, iVar1);
				}
			}
			else
			{
				if (__LIB_4__::func_972(PLAYER::PLAYER_ID()))
				{
					iVar6 = __LIB_1__::func_4();
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar6);
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar7);
						if (iVar2 != -1)
						{
							if (BitTest((uParam1[iVar2 /*303*/])->f_228, 25))
							{
								__LIB_22__::func_106(0, -1, 500, 500, 0);
								MISC::CLEAR_BIT(&((uParam1[iVar2 /*303*/])->f_228), 25);
							}
						}
					}
				}
				else if (BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 25))
				{
					__LIB_22__::func_106(0, -1, 500, 500, 0);
					MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 25);
				}
				if (__LIB_0__::func_864(&(uParam2->f_804)))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
					__LIB_0__::func_794(&(uParam2->f_804));
				}
			}
		}
		else if (__LIB_26__::func_670(uParam1) == 8 || __LIB_26__::func_670(uParam1) == 10)
		{
			__LIB_43__::func_801(uParam0, uParam1, uParam2, __LIB_35__::func_228(uParam0, uParam1, uParam2));
			__LIB_41__::func_859(uParam0, uParam1, uParam2);
		}
	}
}

void func_217(var uParam0, var uParam1, var uParam2)//Position - 0x2F7637
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<5> Var3;
	int iVar4;
	struct<18> Var5;
	struct<2> Var6;
	struct<3> Var7;
	struct<2> Var8;
	int iVar9;
	iVar9 = -1;
	if (__LIB_26__::func_977(uParam2) == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 160:
				if (!uParam2->f_8945)
				{
					uParam2->f_8945 = 1;
				}
				break;
			case 161:
				if (!uParam2->f_8945)
				{
					uParam2->f_8945 = 1;
				}
				break;
			case 162:
				__LIB_27__::func_63(uParam2, iVar0);
				break;
			case 206:
				__LIB_27__::func_62(uParam2, iVar0);
				break;
			case 186:
				__LIB_43__::func_828(uParam0, uParam1, uParam2, iVar0);
				break;
			case 238:
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var6, 2))
				{
					if (__LIB_43__::func_827(uParam0, uParam2))
					{
						__LIB_43__::func_312(uParam2, Var6.f_0, Var6.f_1, uParam1);
					}
				}
				break;
			case 201:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &Var5, 36);
				if (__LIB_27__::func_58(Var5.f_1))
				{
					switch (Var5.f_0)
					{
						case joaat("MP0_CHAR_FM_RACE_RECORD_TIMES"):
						case joaat("MP1_CHAR_FM_RACE_RECORD_TIMES"):
							uParam2->f_3724 = Var5.f_17;
							__LIB_41__::func_874(uParam0, uParam1, uParam2, Var2.f_1);
							break;
						}
				}
				break;
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 2);
				if (__LIB_1__::func_693(Var2.f_1, 0, 1))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var2.f_1))
					{
						switch (Var2.f_0)
						{
							case 772702996:
								if (Global_1663509.f_59)
								{
									break;
								}
								__LIB_27__::func_57(uParam0);
								break;
							case 1523231083:
								if (Global_1663509.f_58)
								{
									break;
								}
								if (__LIB_26__::func_949(uParam0) || __LIB_26__::func_661(uParam0))
								{
									__LIB_35__::func_409(uParam2, iVar0);
								}
								break;
							case 1003610484:
								if (Global_1663509.f_37)
								{
									break;
								}
								__LIB_44__::func_206(uParam0, uParam1, uParam2, iVar0);
								break;
							case 362970257:
								if (Global_1663509.f_242)
								{
									break;
								}
								__LIB_26__::func_518(iVar0);
								break;
							case -2030303615:
								if (Global_1663509.f_38)
								{
									break;
								}
								__LIB_41__::func_873(uParam0, uParam1, iVar0);
								break;
							case -1951825868:
								if (Global_1663509.f_40)
								{
									break;
								}
								if (BitTest(uParam0->f_823, 6))
								{
									if (!__LIB_41__::func_709(uParam0, 1))
									{
										if (!__LIB_26__::func_666(Global_4456449.f_5))
										{
											__LIB_44__::func_174(uParam0, uParam1, uParam2, iVar0);
										}
									}
								}
								break;
							case 461320895:
								if (Global_1663509.f_48)
								{
									break;
								}
								__LIB_41__::func_872(uParam0, iVar0);
								break;
							case -996925742:
								if (Global_1663509.f_49)
								{
									break;
								}
								__LIB_43__::func_309(uParam0, uParam1, uParam2, iVar0);
								break;
							case -391151893:
								if (Global_1663509.f_50)
								{
									break;
								}
								__LIB_44__::func_173(uParam0, uParam1, uParam2, iVar0);
								break;
							case -498654637:
								if (Global_1663509.f_39)
								{
									break;
								}
								if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var7, 3))
								{
									if (Var7.f_2 != *uParam0)
									{
									}
									else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										MISC::SET_BIT(&(uParam0->f_824), 10);
										if (uParam0->f_2 == -1)
										{
											uParam0->f_2 = __LIB_35__::func_167(uParam0, uParam2);
										}
									}
								}
								break;
							case 1210723500:
								if (Global_1663509.f_233)
								{
									break;
								}
								__LIB_22__::func_118(iVar0);
								break;
							case 1466307086:
								__LIB_22__::func_121(iVar0, &(uParam0->f_2313), &(uParam2->f_9232));
								break;
							case 921411241:
								__LIB_22__::func_120(iVar0, &(uParam0->f_2313), &(uParam2->f_9232));
								break;
							case -407754957:
								__LIB_22__::func_119(iVar0, &(uParam0->f_2313));
								break;
							case 662103497:
								__LIB_35__::func_404(iVar0, &(uParam2->f_10252));
								break;
							}
						}
				}
				break;
			case 200:
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar4, 3))
				{
					__LIB_35__::func_403(uParam2, uParam0->f_730, iVar4);
				}
				break;
			case 165:
				if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var3, 6))
				{
					if ((__LIB_1__::func_693(Var3.f_1, 1, 1) && !__LIB_43__::func_308(uParam0, 0)) && !__LIB_35__::func_218(uParam1, uParam2))
					{
						if (Var3.f_1 == PLAYER::PLAYER_ID())
						{
							if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var3.f_1))
							{
								if (Var3.f_2 != joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT") && Var3.f_2 != joaat("PICKUP_VEHICLE_CUSTOM_SCRIPT_LOW_GLOW"))
								{
									StringCopy(&Var8, __LIB_20__::func_859(Var3.f_2, Var3.f_3, -1), 16);
									__LIB_27__::func_222(&Var8);
								}
								else
								{
									if (Var3.f_4 == __LIB_19__::func_97())
									{
										iVar9 = 2;
									}
									else if (Var3.f_4 == __LIB_19__::func_95())
									{
										iVar9 = 3;
									}
									else if (Var3.f_4 == __LIB_19__::func_94())
									{
										iVar9 = 4;
									}
									else if (Var3.f_4 == __LIB_19__::func_205(-2))
									{
										iVar9 = 5;
									}
									else if (Var3.f_4 == __LIB_19__::func_96())
									{
										iVar9 = 0;
									}
									StringCopy(&Var8, __LIB_20__::func_859(Var3.f_2, iVar9, -1), 16);
									__LIB_27__::func_222(&Var8);
								}
								__LIB_35__::func_402(uParam0, &(Var3.f_2));
							}
						}
					}
					__LIB_22__::func_117(&(uParam2->f_4591), &(uParam2->f_5448), uParam0->f_730);
				}
				break;
		}
		iVar0++;
	}
}

void func_218(var uParam0, var uParam1)//Position - 0x2D78EA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_22__::func_18(uParam1);
	iVar2 = __LIB_23__::func_616(uParam0);
	if (__LIB_5__::func_135(iVar1))
	{
		iVar2 = 0;
	}
	if (__LIB_44__::func_207(uParam0, uParam1))
	{
		__LIB_36__::func_358(uParam0, iVar1);
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iVar0 != (iVar1 + iVar2))
			{
				__LIB_22__::func_17(iVar0);
			}
			iVar0++;
		}
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x2D9168
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	iVar3 = uParam1->f_856;
	bVar4 = __LIB_22__::func_36(uParam1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && bVar4 == 0)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_106) && HUD::GET_MOUSE_EVENT(uParam1->f_106, &iVar5, &iVar6, &uVar7))
		{
			if (iVar6 > -1 && iVar6 < 9)
			{
				if (iVar5 == 9)
				{
					uParam1->f_857 = iVar6;
					__LIB_22__::func_15(uParam1, uParam1->f_857, 1);
				}
				else if (iVar5 == 8)
				{
					uParam1->f_857 = -1;
					__LIB_22__::func_15(uParam1, iVar6, 0);
				}
			}
		}
	}
	if (__LIB_19__::func_65(&(uParam1->f_151), &iVar0, &uVar1, 0, 0, 175, 1, 0, 0))
	{
		if ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/) || PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))) && bVar4 == 0)
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 3;
			}
			__LIB_44__::func_208(uParam0, uParam1, iVar2, 1);
		}
		else
		{
			if (iVar0 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			if (bVar4)
			{
				if (iVar2 == 0)
				{
					if (uParam1->f_855 > 0)
					{
						uParam1->f_855 = (uParam1->f_855 - 1);
					}
					else
					{
						uParam1->f_855 = (iVar3 - 1);
					}
				}
				else if (uParam1->f_855 < (iVar3 - 1))
				{
					uParam1->f_855++;
				}
				else
				{
					uParam1->f_855 = 0;
				}
			}
			else
			{
				__LIB_44__::func_208(uParam0, uParam1, iVar2, 0);
			}
		}
	}
	if (!bVar4)
	{
		if (__LIB_19__::func_65(&(uParam1->f_151), &iVar0, &uVar1, 1, 0, 175, 1, 0, 0))
		{
			if (iVar0 > 0)
			{
				iVar2 = 3;
			}
			else
			{
				iVar2 = 2;
			}
			__LIB_44__::func_208(uParam0, uParam1, iVar2, 0);
		}
	}
}

void func_220(var uParam0)//Position - 0x98E9E
{
	if (__LIB_11__::func_119())
	{
		return;
	}
	switch (__LIB_0__::func_404(uParam0))
	{
		case 0:
			break;
		case 1:
			__LIB_32__::func_910(uParam0);
			break;
		case 2:
			__LIB_44__::func_210(uParam0);
			break;
		case 3:
			__LIB_44__::func_209(uParam0);
			break;
		case -1:
			break;
	}
}

int func_221(var uParam0)//Position - 0x17DB5B
{
	if (!__LIB_16__::func_153(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_10.f_4)
	{
		case 29:
			uParam0->f_10 = (uParam0->f_10 + (MISC::GET_FRAME_TIME() * 1000f));
			__LIB_43__::func_72(uParam0);
			break;
		case 30:
			uParam0->f_10 = (uParam0->f_10 + (MISC::GET_FRAME_TIME() * 1000f));
			__LIB_44__::func_211(uParam0);
			break;
		case 31:
			uParam0->f_10 = (uParam0->f_10 + (MISC::GET_FRAME_TIME() * 1000f));
			return __LIB_43__::func_68(uParam0);
		default:
			__LIB_41__::func_297(uParam0);
			break;
	}
	return 0;
}

void func_222(var uParam0, var uParam1, var uParam2)//Position - 0x1A92D5
{
	int iVar0;
	if (__LIB_27__::func_52(uParam0))
	{
		if (__LIB_35__::func_160(uParam0))
		{
			iVar0 = NETWORK::NET_TO_PED(uParam0->f_836);
			if (!__LIB_43__::func_308(uParam0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					__LIB_18__::func_948(&(uParam2->f_5345), iVar0, 1, 1092616192, 1);
				}
			}
			if (!__LIB_26__::func_680(uParam0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_836))
				{
					if (!BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 4))
					{
						MISC::SET_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 4);
						__LIB_26__::func_987(uParam0, uParam1);
					}
					if (!__LIB_0__::func_951(uParam0->f_836))
					{
						if (__LIB_0__::func_939(uParam0->f_831))
						{
							if (!BitTest(uParam0->f_823, 24))
							{
								__LIB_26__::func_986(uParam2, uParam0);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 0)
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, NETWORK::NET_TO_VEH(uParam0->f_831), "multirace0_route3", 786468, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_219, 16, -1, 50f, false, 2f);
							}
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(NETWORK::NET_TO_VEH(uParam0->f_831)))
							{
								(uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_219 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(NETWORK::NET_TO_VEH(uParam0->f_831));
							}
							__LIB_35__::func_353(uParam0, uParam2);
							if (__LIB_26__::func_985(uParam0, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221))
							{
								__LIB_18__::func_814(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221));
								__LIB_27__::func_208(__LIB_35__::func_167(uParam0, uParam2), (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_222);
							}
							else if (__LIB_26__::func_984((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_219))
							{
								__LIB_18__::func_814(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221));
								__LIB_27__::func_208(__LIB_35__::func_167(uParam0, uParam2), (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221, (uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_222);
							}
							__LIB_35__::func_352(uParam0, uParam1, &((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_221), &((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_222));
							if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(uParam0->f_831), 0, 8000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(uParam0->f_831), 3, 8000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(uParam0->f_831), 2, 8000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(uParam0->f_831), 1, 8000))
							{
								__LIB_35__::func_351(uParam0, uParam1, uParam2);
							}
							if (uParam0->f_543 == uParam0->f_546 + 1)
							{
								if (__LIB_44__::func_201(uParam1, uParam0, uParam2) != -1)
								{
									__LIB_44__::func_215(uParam0, uParam1, uParam2);
								}
							}
						}
						else
						{
							__LIB_35__::func_351(uParam0, uParam1, uParam2);
						}
					}
				}
				else if (BitTest((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228, 4))
				{
					MISC::CLEAR_BIT(&((uParam1[NETWORK::PARTICIPANT_ID_TO_INT() /*303*/])->f_228), 4);
				}
			}
		}
	}
}
