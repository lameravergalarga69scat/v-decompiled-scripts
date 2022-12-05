int func_0(int iParam0)//Position - 0x270768
{
	return __LIB_4__.func_738(iParam0);
}

int func_1()//Position - 0x272D90
{
	return __LIB_4__.func_738(PLAYER::PLAYER_ID());
}

int func_2(var uParam0, int iParam1)//Position - 0x2752D7
{
	if (((((__LIB_0__.func_121(*uParam0) && ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)) || uParam0->f_26 == 0) || __LIB_5__.func_622(&(uParam0->f_11), 13)) || __LIB_5__.func_622(&(uParam0->f_11), 0)) || uParam0->f_27 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0, var uParam1)//Position - 0x279A8F
{
	if (!__LIB_5__.func_622(uParam1, 7))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(*uParam0, true, false);
	}
}

int func_4(var uParam0, int iParam1)//Position - 0x281026
{
	if ((((__LIB_0__.func_121(*uParam0) && ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)) || __LIB_5__.func_622(&(uParam0->f_11), 13)) || __LIB_5__.func_622(&(uParam0->f_11), 0)) || uParam0->f_27 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_5(var uParam0, var uParam1)//Position - 0x2810F1
{
	NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(NETWORK::NET_TO_PED(*uParam0), true);
	if (!__LIB_5__.func_622(uParam1, 7))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(*uParam0, true, false);
	}
}

int func_6(int iParam0)//Position - 0x2811CE
{
	return __LIB_3__.func_996(iParam0);
}

int func_7(var uParam0, int iParam1, int iParam2)//Position - 0x293691
{
	if (__LIB_5__.func_622(&(uParam0->f_6251), 4))
	{
		switch (iParam2)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				return 1;
				break;
		}
		return 0;
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam2)
				{
					case 6:
					case 51:
					case 56:
					case 57:
					case 58:
					case 61:
					case 95:
					case 117:
						return 1;
						break;
				}
				break;
			case 1:
				switch (iParam2)
				{
					case 6:
					case 57:
					case 58:
					case 61:
					case 95:
					case 117:
						return 1;
						break;
				}
				break;
		}
		return 0;
	}
	return 1;
}

void func_8(var uParam0, int iParam1, int iParam2)//Position - 0x2AAD6E
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = "mini@strip_club@idles@bouncer@base";
			StringCopy(&(uParam0->f_2), "base", 64);
			uParam0->f_39 = 2f;
			uParam0->f_40 = -2f;
			switch (iParam2)
			{
				case 47:
					if (__LIB_5__.func_622(&Global_1579024, 0))
					{
						*uParam0 = "mini@strip_club@idles@bouncer@go_away";
						StringCopy(&(uParam0->f_2), "go_away", 64);
						uParam0->f_47 = 1;
					}
					break;
				case 13:
					if (__LIB_5__.func_622(&Global_1579024, 2))
					{
						*uParam0 = "mini@strip_club@idles@bouncer@go_away";
						StringCopy(&(uParam0->f_2), "go_away", 64);
						uParam0->f_47 = 1;
					}
					else if (__LIB_5__.func_622(&Global_1579024, 5))
					{
						*uParam0 = "mp_cp_welcome_tutgreet";
						StringCopy(&(uParam0->f_2), "greet", 64);
						uParam0->f_47 = 1;
					}
					break;
				case 70:
					if (__LIB_5__.func_622(&Global_1579024, 1))
					{
						*uParam0 = "mini@strip_club@idles@bouncer@go_away";
						StringCopy(&(uParam0->f_2), "go_away", 64);
						uParam0->f_47 = 1;
					}
					break;
			}
			break;
	}
}

int func_9(int iParam0)//Position - 0x2B9006
{
	return __LIB_4__.func_957(iParam0);
}

int func_10(var uParam0, int iParam1)//Position - 0x2BC08C
{
	if ((((((__LIB_0__.func_121(*uParam0) && ((TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)) || __LIB_5__.func_622(&(uParam0->f_11), 15)) || __LIB_0__.func_3() == 2) || __LIB_5__.func_622(&(uParam0->f_11), 13)) || __LIB_5__.func_622(&(uParam0->f_11), 0)) || uParam0->f_27 > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_11(int iParam0)//Position - 0x2DD0BB
{
	if (iParam0 == __LIB_1__.func_261())
	{
		Global_2671449.f_14 = 0;
	}
}

void func_12()//Position - 0x2DD8E3
{
	if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_121(PLAYER::PLAYER_PED_ID())) && !Global_1957741)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 46, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}
}

bool func_13(int iParam0)//Position - 0x2E0BC2
{
	return iParam0 == 0;
}

void func_14(int iParam0)//Position - 0x9926
{
	Local_114.f_0 = iParam0;
}

int func_15(int iParam0)//Position - 0x31D42
{
	int iVar0;
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return __LIB_4__.func_714(iVar0, 0, 1, 0);
}

int func_16(var uParam0, char* sParam1, bool bParam2, var uParam3)//Position - 0xC83F6
{
	*uParam3 = 1;
	if (bParam2)
	{
		StringCopy(sParam1, "", 64);
	}
	else
	{
		StringCopy(sParam1, "ciPI_TYPE_INVITE_TO_SIMPLE_INTERIOR - ARCADE", 64);
	}
	return __LIB_5__.func_941(PLAYER::PLAYER_ID());
}

bool func_17(int iParam0)//Position - 0x17CEF1
{
	return Local_114.f_0 == iParam0;
}

void func_18()//Position - 0xD35
{
	if (Global_2787784)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_xm_avenger_interior_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_xm_avenger_interior_scene");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_xm_avenger_interior_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_xm_avenger_interior_scene");
	}
}

void func_19(bool bParam0)//Position - 0xDA0
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_284, 3))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_284), 3);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_284, 3))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_284), 3);
	}
}

int func_20(bool bParam0)//Position - 0x47D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (__LIB_1__.func_264(iVar2, 1, 1))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar2))
					{
						MISC::SET_BIT(&iVar0, iVar2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
			}
			iVar1++;
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
	}
	return iVar0;
}

int func_21(var uParam0, bool bParam1)//Position - 0x48E1
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__.func_86(*uParam0) || __LIB_0__.func_86(uParam0->f_3))
	{
		return 1;
	}
	if (bParam1)
	{
		bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), *uParam0, uParam0->f_3, uParam0->f_6, false, true, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_1__.func_264(iVar2, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar2))
			{
				if (iVar2 != PLAYER::PLAYER_ID())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar2), *uParam0, uParam0->f_3, uParam0->f_6, false, true, 0))
					{
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_22()//Position - 0x10D2F
{
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_5__.func_989()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_5__.func_989()) && ENTITY::IS_ENTITY_DEAD(__LIB_5__.func_989(), false))
	{
		return 0;
	}
	return 1;
}

int func_23()//Position - 0x20154
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__.func_264(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true);
					if (fVar2 < 1.8f)
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

int func_24()//Position - 0x20298
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (__LIB_1__.func_264(iVar0, 1, 1) && PLAYER::PLAYER_ID() != iVar0)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar0), 1558.6707f, 386.2656f, -50.68544f, 1558.6095f, 387.88693f, -48.685486f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1558.6707f, 386.2656f, -50.68544f, 1558.6095f, 387.88693f, -48.685486f, 2f, false, true, 0)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar0), 1558.5709f, 389.84616f, -50.685677f, 1558.6495f, 387.987f, -48.685486f, 2f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1558.5709f, 389.84616f, -50.685677f, 1558.6495f, 387.987f, -48.685486f, 2f, false, true, 0)))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_25()//Position - 0x250AA
{
	return __LIB_0__.func_338(PLAYER::PLAYER_ID());
}

int func_26(int iParam0)//Position - 0x4E53D
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_3__.func_996(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(var uParam0)//Position - 0xC477F
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	iVar0 = __LIB_2__.func_689();
	if (__LIB_0__.func_121(iVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
		Var2 = { 0f, 0f, -8f };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var2) };
		fVar6 = 20f;
		WATER::GET_WATER_HEIGHT_NO_WAVES(Var1, &fVar4);
		STREAMING::REQUEST_COLLISION_AT_COORD(Var1);
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar5, false, true))
		{
			if ((Var3.f_2 - fVar5) <= fVar6)
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = -1;
			return 0;
		}
		if (Var3.f_2 > fVar4)
		{
			*uParam0 = 2;
			return 0;
		}
		return 1;
	}
	*uParam0 = 0;
	return 0;
}

char* func_28()//Position - 0x1A3C24
{
	return "xm_x17dlc_int_01";
}

Vector3 func_29()//Position - 0x1A3C31
{
	return 520.0001f, 4750f, -70f;
}

void func_30(bool bParam0)//Position - 0x1A3F28
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 28))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 28);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 28))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 28);
	}
}

void func_31()//Position - 0x713
{
	Global_1946250.f_499 = -1;
}

int func_32(struct<2> Param0, var uParam1, var uParam2)//Position - 0x20D82
{
	if ((!__LIB_6__.func_23() && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !Global_262145.f_24708 /* Tunable: -1148048700 */)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0.f_0, Param0.f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_33(struct<2> Param0, var uParam1, var uParam2)//Position - 0x24552
{
	if (!__LIB_6__.func_23() && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0.f_0, Param0.f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_34(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x5D294
{
	if (*uParam2 != 9)
	{
		return;
	}
	*uParam3 = 8;
	(*uParam2)[0] = "FHQ_E_O_0" /* GXT: Exit to Ground */;
	(*uParam2)[1] = "FHQ_E_O_1" /* GXT: All Exit Agency */;
	(*uParam2)[6] = "FHQ_E_O_4" /* GXT: Exit to Roof */;
	(*uParam2)[7] = "FHQ_E_O_5" /* GXT: Exit via Vehicle */;
	if (__LIB_6__.func_25() == 0)
	{
		StringCopy(sParam1, "FHQ_EXT_T" /* GXT: AGENCY */, 64);
		(*uParam2)[4] = "FHQ_E_O_2" /* GXT: Garage */;
		(*uParam2)[2] = "FHQ_E_O_4" /* GXT: Exit to Roof */;
		(*uParam2)[3] = "FHQ_E_O_5" /* GXT: Exit via Vehicle */;
	}
	else
	{
		StringCopy(sParam1, "FHQ_EXT_T_G" /* GXT: AGENCY GARAGE */, 64);
		(*uParam2)[4] = "FHQ_E_O_3" /* GXT: Agency */;
		(*uParam2)[5] = "FHQ_E_O_0" /* GXT: Exit to Ground */;
	}
}

void func_35(int iParam0, var uParam1, var uParam2)//Position - 0x77164
{
	int iVar0;
	iVar0 = __LIB_6__.func_25();
	if (iVar0 == 0)
	{
		switch (iParam0)
		{
			case 155:
				*uParam1 = { 367.282f, -43.9719f, 101.983284f };
				uParam1->f_3 = { 401.006f, -77.184f, 118.708084f };
				break;
			case 156:
				*uParam1 = { -998.0788f, -442.7532f, 61.4973f };
				uParam1->f_3 = { -1039.9025f, -410.1812f, 79.4577f };
				break;
			case 157:
				*uParam1 = { -605.5399f, -703.9441f, 111.983f };
				uParam1->f_3 = { -571.7914f, -731.5148f, 127.7629f };
				break;
			case 158:
				*uParam1 = { -992.2143f, -744.9536f, 60.9209f };
				uParam1->f_3 = { -1019.6062f, -784.3951f, 80.6254f };
				break;
			default:
				*uParam1 = { -1132.067f, -88.7402f, -100.7912f };
				uParam1->f_3 = { -1108.3256f, -55.8008f, -86.8194f };
				break;
		}
	}
	else
	{
		*uParam1 = { -1083.3885f, -61.6245f, -99.9034f };
		uParam1->f_3 = { -1059.486f, -92.7458f, -85.6241f };
	}
}

void func_36(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x779F3
{
	int iVar0;
	iVar0 = __LIB_6__.func_25();
	switch (iParam0)
	{
		case 155:
		case 156:
		case 157:
		case 158:
			if (iVar0 == 0)
			{
				StringCopy(sParam1, "sf_dlc_office_sec", 64);
			}
			else
			{
				StringCopy(sParam1, "sf_dlc_garage_sec", 64);
			}
			*uParam2 = { __LIB_2__.func_392(iParam0, iVar0) };
			*uParam3 = __LIB_2__.func_391(iParam0, iVar0);
			break;
	}
}

void func_37(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7AE06
{
	if (*uParam2 != 9)
	{
		return;
	}
	if (__LIB_6__.func_25() == 1)
	{
		StringCopy(sParam1, "CAR_TA_EXT_T" /* GXT: Test Track */, 64);
		*uParam3 = 5;
		(*uParam2)[3] = "CAR_MET_E_O_3" /* GXT: Exit LS Car Meet */;
		(*uParam2)[2] = "CAR_MET_E_O_2" /* GXT: Enter LS Car Meet */;
		(*uParam2)[4] = "CAR_MET_E_O_4" /* GXT: Exit to Roof */;
	}
	else
	{
		StringCopy(sParam1, "CAR_MET_EXT_T" /* GXT: LS Car Meet */, 64);
		*uParam3 = 5;
		(*uParam2)[0] = "CAR_MET_E_O_0" /* GXT: Exit LS Car Meet */;
		(*uParam2)[3] = "CAR_MET_E_O_3" /* GXT: Exit LS Car Meet */;
		(*uParam2)[2] = "CAR_MET_E_O_1" /* GXT: Spectate Test Track */;
		(*uParam2)[4] = "CAR_MET_E_O_4" /* GXT: Exit to Roof */;
	}
}

int func_38(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x7DA2A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_2__.func_399();
	iVar1 = __LIB_6__.func_25();
	if (iVar1 == 1)
	{
		switch (iVar0)
		{
			case 12:
			case 14:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -74.9409f, -136.629f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 1:
						*uParam2 = { -74.7415f, -138.202f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 2:
						*uParam2 = { -74.4871f, -134.959f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 3:
						*uParam2 = { -73.4329f, -133.9355f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 4:
						*uParam2 = { -72.9526f, -137.3726f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 5:
						*uParam2 = { -73.1934f, -135.8867f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 6:
						*uParam2 = { -73.9009f, -131.7327f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 7:
						*uParam2 = { -72.0403f, -135.0495f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 8:
						*uParam2 = { -72.177f, -132.9114f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 9:
						*uParam2 = { -72.2642f, -130.8634f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 10:
						*uParam2 = { -72.1841f, -138.3877f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 11:
						*uParam2 = { -70.908f, -136.8272f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 12:
						*uParam2 = { -70.7634f, -135.2233f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 13:
						*uParam2 = { -70.7559f, -132.8754f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 14:
						*uParam2 = { -70.6667f, -130.2917f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 15:
						*uParam2 = { -70.606f, -138.3403f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 16:
						*uParam2 = { -69.4529f, -137.0483f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 17:
						*uParam2 = { -69.0457f, -134.0878f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 18:
						*uParam2 = { -69.165f, -131.7911f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 19:
						*uParam2 = { -67.9487f, -135.5361f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 20:
						*uParam2 = { -68.3657f, -138.4487f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 21:
						*uParam2 = { -68.4468f, -130.2138f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 22:
						*uParam2 = { -66.865f, -137.0259f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 23:
						*uParam2 = { -67.6951f, -132.8005f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 24:
						*uParam2 = { -66.8689f, -134.1073f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 25:
						*uParam2 = { -66.7581f, -131.5089f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 26:
						*uParam2 = { -65.9033f, -138.4684f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 27:
						*uParam2 = { -65.6958f, -135.4698f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 28:
						*uParam2 = { -65.6035f, -132.8423f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 29:
						*uParam2 = { -65.7134f, -130.2062f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
				}
				break;
			case 13:
			case 15:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 16.0238f, 132.6407f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 1:
						*uParam2 = { 16.5048f, 131.0804f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 2:
						*uParam2 = { 16.8285f, 133.8231f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 3:
						*uParam2 = { 16.0671f, 129.7268f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 4:
						*uParam2 = { 16.0729f, 134.4441f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 5:
						*uParam2 = { 18.8665f, 131.4736f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 6:
						*uParam2 = { 18.73f, 129.8971f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 7:
						*uParam2 = { 18.8156f, 133.1007f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 8:
						*uParam2 = { 17.5524f, 128.3871f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 9:
						*uParam2 = { 18.1049f, 134.2371f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 10:
						*uParam2 = { 20.6399f, 128.9615f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 11:
						*uParam2 = { 20.3832f, 126.4756f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 12:
						*uParam2 = { 20.9224f, 131.5304f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 13:
						*uParam2 = { 19.1912f, 127.6083f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 14:
						*uParam2 = { 20.2424f, 134.1106f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 15:
						*uParam2 = { 23.0061f, 131.7479f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 16:
						*uParam2 = { 21.7728f, 130.1f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 17:
						*uParam2 = { 23.2134f, 133.9969f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 18:
						*uParam2 = { 21.752f, 127.9087f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 19:
						*uParam2 = { 21.6515f, 132.8502f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 20:
						*uParam2 = { 24.3945f, 128.505f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 21:
						*uParam2 = { 23.8593f, 126.6527f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 22:
						*uParam2 = { 24.6865f, 130.4885f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 23:
						*uParam2 = { 22.1133f, 125.2145f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 24:
						*uParam2 = { 24.9222f, 132.6591f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 25:
						*uParam2 = { 26.9036f, 129.4221f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 26:
						*uParam2 = { 26.2062f, 127.5656f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 27:
						*uParam2 = { 26.7089f, 131.6686f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 28:
						*uParam2 = { 25.078f, 125.8385f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
					case 29:
						*uParam2 = { 25.8142f, 134.0376f, 0.0002f };
						*uParam3 = 270f;
						return 1;
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { 22.6306f, -1.6057f, -3.0013f };
						*uParam3 = 79.7978f;
						return 1;
						break;
					case 1:
						*uParam2 = { 21.5742f, -3.1031f, -3.0013f };
						*uParam3 = 87.2953f;
						return 1;
						break;
					case 2:
						*uParam2 = { 20.9231f, 0.0216f, -3.0013f };
						*uParam3 = 79.5717f;
						return 1;
						break;
					case 3:
						*uParam2 = { 19.275f, -0.9158f, -3.0013f };
						*uParam3 = 94.8737f;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 11:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -149.9304f, 2.9091f, -0.0042f };
						*uParam3 = 90f;
						return 1;
						break;
					case 1:
						*uParam2 = { -149.9304f, 3.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 2:
						*uParam2 = { -149.9304f, 4.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 3:
						*uParam2 = { -149.9304f, 5.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 4:
						*uParam2 = { -149.9304f, 6.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 5:
						*uParam2 = { -149.9304f, 7.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 6:
						*uParam2 = { -149.9304f, 8.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 7:
						*uParam2 = { -149.9304f, 9.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 8:
						*uParam2 = { -150.9304f, 2.9091f, -0.0042f };
						*uParam3 = 90f;
						return 1;
						break;
					case 9:
						*uParam2 = { -150.9304f, 3.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 10:
						*uParam2 = { -150.9304f, 4.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 11:
						*uParam2 = { -150.9304f, 5.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 12:
						*uParam2 = { -150.9304f, 6.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 13:
						*uParam2 = { -150.9304f, 7.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 14:
						*uParam2 = { -150.9304f, 8.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 15:
						*uParam2 = { -150.9304f, 9.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 16:
						*uParam2 = { -151.9304f, 2.9091f, -0.0042f };
						*uParam3 = 90f;
						return 1;
						break;
					case 17:
						*uParam2 = { -151.9304f, 3.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 18:
						*uParam2 = { -151.9304f, 4.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 19:
						*uParam2 = { -151.9304f, 5.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 20:
						*uParam2 = { -151.9304f, 6.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 21:
						*uParam2 = { -151.9304f, 7.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 22:
						*uParam2 = { -151.9304f, 8.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 23:
						*uParam2 = { -151.9304f, 9.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 24:
						*uParam2 = { -152.9304f, 2.9091f, -0.0042f };
						*uParam3 = 90f;
						return 1;
						break;
					case 25:
						*uParam2 = { -152.9304f, 3.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 26:
						*uParam2 = { -152.9304f, 4.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 27:
						*uParam2 = { -152.9304f, 5.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 28:
						*uParam2 = { -152.9304f, 6.9091f, -0.0043f };
						*uParam3 = 90f;
						return 1;
						break;
					case 29:
						*uParam2 = { -152.9304f, 7.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 30:
						*uParam2 = { -152.9304f, 8.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
					case 31:
						*uParam2 = { -152.9304f, 9.9091f, -0.0044f };
						*uParam3 = 90f;
						return 1;
						break;
				}
				break;
			case 8:
			case 19:
			case 20:
			case 21:
			case 22:
			case 23:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -213.7773f, -40.4664f, 1.1046f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 1:
						*uParam2 = { -213.1855f, -38.8599f, 1.1046f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 2:
						*uParam2 = { -213.8528f, -37.5093f, 1.1045f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 3:
						*uParam2 = { -213.5261f, -36.1973f, 1.1045f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 4:
						*uParam2 = { -213.866f, -34.0895f, 1.1044f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 5:
						*uParam2 = { -212.1887f, -41.6392f, 1.1048f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 6:
						*uParam2 = { -212.0632f, -35.0955f, 1.1045f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 7:
						*uParam2 = { -211.3755f, -39.4233f, 1.1048f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 8:
						*uParam2 = { -211.6853f, -36.7231f, 1.1046f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 9:
						*uParam2 = { -211.5786f, -33.6976f, 1.1045f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 10:
						*uParam2 = { -210.4146f, -40.9725f, 1.1049f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 11:
						*uParam2 = { -210.4429f, -38.1036f, 1.1048f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 12:
						*uParam2 = { -210.0225f, -35.8271f, 1.1047f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 13:
						*uParam2 = { -212.917f, -32.5103f, 1.1044f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 14:
						*uParam2 = { -213.5911f, -30.3539f, 1.1043f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 15:
						*uParam2 = { -209.3652f, -33.7529f, 1.1046f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 16:
						*uParam2 = { -208.7295f, -39.856f, 1.105f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 17:
						*uParam2 = { -208.2148f, -38.3451f, 1.1049f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 18:
						*uParam2 = { -207.8765f, -36.4415f, 1.1048f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 19:
						*uParam2 = { -208.0381f, -34.7589f, 1.1047f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 20:
						*uParam2 = { -207.7007f, -40.8123f, 1.1051f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 21:
						*uParam2 = { -206.6177f, -39.0018f, 1.105f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 22:
						*uParam2 = { -206.405f, -36.8856f, 1.1049f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 23:
						*uParam2 = { -205.4922f, -34.7537f, 1.1049f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 24:
						*uParam2 = { -206.6343f, -33.2906f, 1.1047f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 25:
						*uParam2 = { -205.7886f, -41.2263f, 1.1052f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 26:
						*uParam2 = { -204.2109f, -36.0968f, 1.105f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 27:
						*uParam2 = { -204.821f, -32.3435f, 1.1047f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 28:
						*uParam2 = { -203.0991f, -34.1329f, 1.1049f };
						*uParam3 = 269.49f;
						return 1;
						break;
					case 29:
						*uParam2 = { -202.7334f, -31.0796f, 1.1047f };
						*uParam3 = 269.49f;
						return 1;
						break;
				}
				break;
			case 12:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -141.9111f, -41.5233f, -0.0015f };
						*uParam3 = 7.71f;
						return 1;
						break;
					case 1:
						*uParam2 = { -143.3633f, -40.229f, -0.0008f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 2:
						*uParam2 = { -141.2456f, -40.0485f, -0.0024f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 3:
						*uParam2 = { -145.0818f, -40.5782f, -0.0004f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 4:
						*uParam2 = { -146.3916f, -39.4358f, -0.0002f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 5:
						*uParam2 = { -141.6641f, -37.0923f, -0.002f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 6:
						*uParam2 = { -143.9475f, -38.2288f, -0.001f };
						*uParam3 = 56.1851f;
						return 1;
						break;
					case 7:
						*uParam2 = { -148.1768f, -40.5444f, 0.0005f };
						*uParam3 = 2.9387f;
						return 1;
						break;
					case 8:
						*uParam2 = { -147.6396f, -37.3673f, 0.0001f };
						*uParam3 = 8.4224f;
						return 1;
						break;
					case 9:
						*uParam2 = { -150.0403f, -40.4358f, 0.0006f };
						*uParam3 = 349.745f;
						return 1;
						break;
					case 10:
						*uParam2 = { -149.7422f, -35.4548f, 0.0003f };
						*uParam3 = 11.6931f;
						return 1;
						break;
					case 11:
						*uParam2 = { -152.8591f, -34.6062f, 0.0003f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 12:
						*uParam2 = { -150.5964f, -33.0846f, 0.0002f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 13:
						*uParam2 = { -152.6033f, -32.4905f, 0.0002f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 14:
						*uParam2 = { -154.5559f, -32.0688f, 0.0001f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 15:
						*uParam2 = { -150.4707f, -29.5471f, -0.0001f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 16:
						*uParam2 = { -153.4031f, -29.8134f, -0.0001f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 17:
						*uParam2 = { -149.1528f, -30.8662f, 0f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 18:
						*uParam2 = { -154.666f, -33.9969f, 0.0003f };
						*uParam3 = 89.2799f;
						return 1;
						break;
					case 19:
						*uParam2 = { -156.2725f, -34.9503f, 0.0004f };
						*uParam3 = 78.0267f;
						return 1;
						break;
					case 20:
						*uParam2 = { -157.0073f, -32.8682f, 0.0002f };
						*uParam3 = 87.9267f;
						return 1;
						break;
					case 21:
						*uParam2 = { -148.8381f, -27.3461f, -0.0004f };
						*uParam3 = 7.4468f;
						return 1;
						break;
					case 22:
						*uParam2 = { -154.7168f, -28.6434f, -0.0002f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 23:
						*uParam2 = { -151.8584f, -28.2332f, -0.0003f };
						*uParam3 = 7.5407f;
						return 1;
						break;
					case 24:
						*uParam2 = { -151.4224f, -26.1082f, -0.0005f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 25:
						*uParam2 = { -154.0039f, -26.0687f, -0.0005f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 26:
						*uParam2 = { -149.7544f, -24.8436f, -0.0007f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 27:
						*uParam2 = { -151.0784f, -22.1877f, -0.0009f };
						*uParam3 = 358.56f;
						return 1;
						break;
					case 28:
						*uParam2 = { -154.6038f, -24.1593f, -0.0007f };
						*uParam3 = 322.5204f;
						return 1;
						break;
					case 29:
						*uParam2 = { -153.2585f, -22.2026f, -0.0009f };
						*uParam3 = 358.56f;
						return 1;
						break;
				}
				break;
			case 13:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -142.2827f, 46.7648f, -0.0097f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 1:
						*uParam2 = { -141.3374f, 45.5846f, -0.0093f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 2:
						*uParam2 = { -143.1936f, 44.6675f, -0.0095f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 3:
						*uParam2 = { -141.6091f, 43.9387f, -0.0092f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 4:
						*uParam2 = { -144.0906f, 43.2582f, -0.0094f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 5:
						*uParam2 = { -142.2029f, 42.0902f, -0.0091f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 6:
						*uParam2 = { -144.1626f, 40.4482f, -0.0091f };
						*uParam3 = 183.5762f;
						return 1;
						break;
					case 7:
						*uParam2 = { -142.4331f, 40.6381f, -0.0089f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 8:
						*uParam2 = { -143.7363f, 38.2965f, -0.0087f };
						*uParam3 = 157.3112f;
						return 1;
						break;
					case 9:
						*uParam2 = { -141.9509f, 38.7338f, -0.0086f };
						*uParam3 = 166.1997f;
						return 1;
						break;
					case 10:
						*uParam2 = { -144.0911f, 36.3109f, -0.0086f };
						*uParam3 = 96.154f;
						return 1;
						break;
					case 11:
						*uParam2 = { -145.7261f, 36.0077f, -0.0088f };
						*uParam3 = 90.6674f;
						return 1;
						break;
					case 12:
						*uParam2 = { -147.6279f, 36.1915f, -0.009f };
						*uParam3 = 95.4098f;
						return 1;
						break;
					case 13:
						*uParam2 = { -149.0801f, 37.4729f, -0.0092f };
						*uParam3 = 108.5521f;
						return 1;
						break;
					case 14:
						*uParam2 = { -149.7285f, 35.6951f, -0.0091f };
						*uParam3 = 90.1262f;
						return 1;
						break;
					case 15:
						*uParam2 = { -150.259f, 34.0605f, -0.0091f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 16:
						*uParam2 = { -152.031f, 32.9434f, -0.009f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 17:
						*uParam2 = { -153.5525f, 37.0323f, -0.0091f };
						*uParam3 = 94.9188f;
						return 1;
						break;
					case 18:
						*uParam2 = { -154.564f, 35.3458f, -0.0091f };
						*uParam3 = 86.5533f;
						return 1;
						break;
					case 19:
						*uParam2 = { -153.9033f, 33.4443f, -0.009f };
						*uParam3 = 90.3724f;
						return 1;
						break;
					case 20:
						*uParam2 = { -156.9104f, 34.8608f, -0.0091f };
						*uParam3 = 90.017f;
						return 1;
						break;
					case 21:
						*uParam2 = { -154.4927f, 31.7727f, -0.009f };
						*uParam3 = 92.8562f;
						return 1;
						break;
					case 22:
						*uParam2 = { -156.4392f, 36.6212f, -0.0091f };
						*uParam3 = 98.2789f;
						return 1;
						break;
					case 23:
						*uParam2 = { -156.1924f, 33.0049f, -0.009f };
						*uParam3 = 91.2096f;
						return 1;
						break;
					case 24:
						*uParam2 = { -155.8481f, 30.1204f, -0.0089f };
						*uParam3 = 93.4629f;
						return 1;
						break;
					case 25:
						*uParam2 = { -150.1255f, 30.8984f, -0.009f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 26:
						*uParam2 = { -151.9387f, 28.9717f, -0.0089f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 27:
						*uParam2 = { -150.2256f, 28.0071f, -0.0089f };
						*uParam3 = 179.135f;
						return 1;
						break;
					case 28:
						*uParam2 = { -152.021f, 26.0248f, -0.0088f };
						*uParam3 = 192.2877f;
						return 1;
						break;
					case 29:
						*uParam2 = { -150.5117f, 25.584f, -0.0088f };
						*uParam3 = 179.135f;
						return 1;
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						*uParam2 = { -220.5168f, 45.5537f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 1:
						*uParam2 = { -221.8271f, 46.3054f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 2:
						*uParam2 = { -218.9421f, 46.3717f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 3:
						*uParam2 = { -223.0901f, 45.6908f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 4:
						*uParam2 = { -217.3984f, 45.9736f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 5:
						*uParam2 = { -219.551f, 42.7334f, 1.1033f };
						*uParam3 = 219.4357f;
						return 1;
						break;
					case 6:
						*uParam2 = { -221.7122f, 44.3781f, 1.1033f };
						*uParam3 = 203.0765f;
						return 1;
						break;
					case 7:
						*uParam2 = { -217.8428f, 44.0466f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 8:
						*uParam2 = { -219.4805f, 44.8835f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 9:
						*uParam2 = { -216.4248f, 44.7278f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 10:
						*uParam2 = { -219.8987f, 41.4312f, 1.1033f };
						*uParam3 = 223.5108f;
						return 1;
						break;
					case 11:
						*uParam2 = { -214.2212f, 44.5302f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 12:
						*uParam2 = { -218.0911f, 42.3068f, 1.1033f };
						*uParam3 = 213.1848f;
						return 1;
						break;
					case 13:
						*uParam2 = { -213.1182f, 41.2806f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 14:
						*uParam2 = { -215.6208f, 43.797f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 15:
						*uParam2 = { -216.6499f, 41.7358f, 1.1033f };
						*uParam3 = 211.0605f;
						return 1;
						break;
					case 16:
						*uParam2 = { -218.7979f, 39.6635f, 1.1033f };
						*uParam3 = 250.6838f;
						return 1;
						break;
					case 17:
						*uParam2 = { -217.2378f, 40.1788f, 1.1033f };
						*uParam3 = 234.3442f;
						return 1;
						break;
					case 18:
						*uParam2 = { -218.7019f, 37.6393f, 1.1033f };
						*uParam3 = 267.6759f;
						return 1;
						break;
					case 19:
						*uParam2 = { -214.4907f, 42.1279f, 1.1033f };
						*uParam3 = 178.56f;
						return 1;
						break;
					case 20:
						*uParam2 = { -217.3318f, 38.5756f, 1.1033f };
						*uParam3 = 231.9808f;
						return 1;
						break;
					case 21:
						*uParam2 = { -217.1721f, 37.2782f, 1.1033f };
						*uParam3 = 247.2184f;
						return 1;
						break;
					case 22:
						*uParam2 = { -215.6265f, 40.469f, 1.1033f };
						*uParam3 = 218.4674f;
						return 1;
						break;
					case 23:
						*uParam2 = { -215.6587f, 38.942f, 1.1033f };
						*uParam3 = 231.4083f;
						return 1;
						break;
					case 24:
						*uParam2 = { -214.0815f, 39.6238f, 1.1033f };
						*uParam3 = 221.7833f;
						return 1;
						break;
					case 25:
						*uParam2 = { -213.8577f, 34.2371f, 1.1033f };
						*uParam3 = 223.674f;
						return 1;
						break;
					case 26:
						*uParam2 = { -215.625f, 34.4565f, 1.1033f };
						*uParam3 = 217.5403f;
						return 1;
						break;
					case 27:
						*uParam2 = { -212.8064f, 35.8307f, 1.1033f };
						*uParam3 = 215.5179f;
						return 1;
						break;
					case 28:
						*uParam2 = { -214.9343f, 36.8965f, 1.1033f };
						*uParam3 = 230.9646f;
						return 1;
						break;
					case 29:
						*uParam2 = { -212.5952f, 38.162f, 1.1033f };
						*uParam3 = 212.7623f;
						return 1;
						break;
				}
				break;
			}
	}
	return 0;
}

Vector3 func_39(var uParam0)//Position - 0x7FCB0
{
	if (__LIB_6__.func_25() == 1)
	{
		return -2121.07f, 1103.7826f, 14.6638f;
	}
	return -2172.1316f, 1113.9651f, -35.3706f;
}

void func_40(var uParam0, var uParam1, var uParam2)//Position - 0x8542F
{
	if (__LIB_6__.func_25() == 1)
	{
		*uParam1 = { -1831.333f, 972.858f, 23.183784f };
		uParam1->f_3 = { -2225.468f, 1248.923f, 43.606285f };
	}
	else
	{
		*uParam1 = { -1831.333f, 980.1857f, -29.846f };
		uParam1->f_3 = { -2225.468f, 1241.2166f, -9.4235f };
	}
}

int func_41()//Position - 0x857D7
{
	if (__LIB_6__.func_25() == 1)
	{
		return 2;
	}
	return 4;
}

void func_42(var uParam0, var uParam1)//Position - 0x857EC
{
	if (__LIB_6__.func_25() == 1)
	{
		uParam1->f_21 = "AM_MP_CAR_MEET_SANDBOX";
	}
	else
	{
		uParam1->f_21 = "AM_MP_CAR_MEET_PROPERTY";
	}
	uParam1->f_3 = 0;
	uParam1->f_22.f_241 = "";
	uParam1->f_22.f_243 = "";
}

int func_43(var uParam0, int iParam1)//Position - 0xF7664
{
	if (BitTest(Global_1946250.f_506, 30))
	{
		if (__LIB_6__.func_25() == 1 && iParam1 != 3)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

char* func_44(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xFAE11
{
	if (Global_1946250.f_506 == 0)
	{
		return "";
	}
	else if (__LIB_2__.func_458())
	{
		return "";
	}
	if (Global_1946250.f_506 == 0)
	{
		if (__LIB_6__.func_25() == 1)
		{
			return "CAS_AG_KICK_A" /* GXT: You no longer have access to this Penthouse Garage. */;
		}
		else
		{
			return "CAS_APT_KICK_A" /* GXT: You no longer have access to this Penthouse. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 1))
	{
		if (__LIB_6__.func_25() == 1)
		{
			return "CAS_AG_KICK_B" /* GXT: You no longer have access to the Penthouse Garage as the owner has left the game. */;
		}
		else
		{
			return "CAS_APT_KICK_B" /* GXT: You no longer have access to the Penthouse as the owner has left the game. */;
		}
	}
	if (Global_1946250.f_3366)
	{
		if (__LIB_6__.func_25() == 1)
		{
			return "CAS_AG_KICK_C" /* GXT: Owner has requested all to leave the Penthouse Garage. */;
		}
		else
		{
			return "CAS_APT_KICK_C" /* GXT: Owner has requested all to leave the Penthouse. */;
		}
	}
	if (BitTest(Global_1946250.f_506, 2))
	{
		if (__LIB_6__.func_25() == 1)
		{
			return "CAS_AG_KICK_D" /* GXT: You no longer have access to the Penthouse Garage as you became the Beast. */;
		}
		else
		{
			return "CAS_APT_KICK_D" /* GXT: You no longer have access to the Penthouse as you became the Beast. */;
		}
	}
	return "";
}

void func_45(int iParam0, var uParam1, var uParam2)//Position - 0xFDA1A
{
	switch (iParam0)
	{
		case 124:
			if (__LIB_6__.func_25() == 0)
			{
				*uParam1 = { 932.924f, -3.1865f, 111.397f };
				uParam1->f_3 = { 994.119f, 85.3985f, 120.8919f };
			}
			else
			{
				*uParam1 = { 1248.3405f, 216.46f, -50.1337f };
				uParam1->f_3 = { 1318.9395f, 266.475f, -42.5162f };
			}
			break;
	}
}

Vector3 func_46(var uParam0)//Position - 0x107A21
{
	if (__LIB_6__.func_25() == 0)
	{
		return 168.8694f, 5180.176f, -89.8238f;
	}
	return 171.7976f, 5186.8945f, 10.075f;
}

void func_47(int iParam0, var uParam1, var uParam2)//Position - 0x10DB69
{
	switch (iParam0)
	{
		case 122:
			if (__LIB_6__.func_25() == 0)
			{
				*uParam1 = { 145.8645f, 5154.3896f, -90.0862f };
				uParam1->f_3 = { 234.807f, 5211.9287f, -80.5237f };
			}
			else
			{
				*uParam1 = { 148.9561f, 5161.8555f, 9.8155f };
				uParam1->f_3 = { 194.362f, 5220.0337f, 17.27f };
			}
			break;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10E202
{
	switch (iParam0)
	{
		case 122:
			if (__LIB_6__.func_25() == 0)
			{
				StringCopy(sParam1, "xs_x18_int_mod", 64);
				*uParam2 = { 205f, 5180f, -90f };
				*uParam3 = 0f;
			}
			else
			{
				StringCopy(sParam1, "xs_x18_int_mod2", 64);
				*uParam2 = { 170f, 5190f, 10f };
				*uParam3 = 0f;
			}
			break;
	}
}

int func_49(var uParam0, int iParam1)//Position - 0x128151
{
	if (__LIB_6__.func_25() == 0)
	{
		if ((iParam1 == 3 || iParam1 == 2) || iParam1 == 4)
		{
			return 0;
		}
	}
	else if (iParam1 == 3 || iParam1 == 2)
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_506, 0) || BitTest(Global_1946250.f_506, 30))
	{
		return 1;
	}
	return 0;
}

void func_50(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)//Position - 0x128D73
{
	if (*uParam2 != 9)
	{
		return;
	}
	if (__LIB_6__.func_25() == 0)
	{
		StringCopy(sParam1, "CLUB_TITLE" /* GXT: NIGHTCLUB */, 64);
		(*uParam2)[0] = "CLUB_EXIT" /* GXT: Exit Nightclub */;
		(*uParam2)[1] = "CLUB_AEXIT" /* GXT: All Exit Nightclub */;
		(*uParam2)[2] = "HUB_EXIT_C" /* GXT: Nightclub */;
		(*uParam2)[3] = "HUB_EXIT_F1" /* GXT: Basement Level 1 */;
		(*uParam2)[4] = "HUB_EXIT_F2" /* GXT: Basement Level 2 */;
		(*uParam2)[5] = "HUB_EXIT_F3" /* GXT: Basement Level 3 */;
		(*uParam2)[6] = "HUB_EXIT_F4" /* GXT: Basement Level 4 */;
		(*uParam2)[7] = "HUB_EXIT_F5" /* GXT: Terrorbyte Garage */;
		(*uParam2)[8] = "HUB_EXIT_F5_S" /* GXT: Basement Level 5 */;
		*uParam3 = 9;
	}
	else
	{
		switch (iParam4)
		{
			case 2:
				StringCopy(sParam1, "HUB_WH_S" /* GXT: WAREHOUSE STORAGE */, 64);
				break;
			case 3:
				StringCopy(sParam1, "HUB_WH_G" /* GXT: WAREHOUSE GARAGE */, 64);
				break;
			case 1:
				StringCopy(sParam1, "HUB_WH_G" /* GXT: WAREHOUSE GARAGE */, 64);
				break;
		}
		(*uParam2)[0] = "HUB_EXIT" /* GXT: Exit Warehouse */;
		(*uParam2)[1] = "HUB_AEXIT" /* GXT: All Exit Warehouse */;
		(*uParam2)[2] = "HUB_EXIT_C" /* GXT: Nightclub */;
		(*uParam2)[3] = "HUB_EXIT_F1" /* GXT: Basement Level 1 */;
		(*uParam2)[4] = "HUB_EXIT_F2" /* GXT: Basement Level 2 */;
		(*uParam2)[5] = "HUB_EXIT_F3" /* GXT: Basement Level 3 */;
		(*uParam2)[6] = "HUB_EXIT_F4" /* GXT: Basement Level 4 */;
		(*uParam2)[7] = "HUB_EXIT_F5" /* GXT: Terrorbyte Garage */;
		(*uParam2)[8] = "HUB_EXIT_F5_S" /* GXT: Basement Level 5 */;
		*uParam3 = 9;
	}
}

Vector3 func_51(var uParam0)//Position - 0x128E97
{
	if (__LIB_6__.func_25() == 0)
	{
		return -1627.5669f, -2997.709f, -79.1438f;
	}
	return -1507.7212f, -3011.7004f, -80.2419f;
}

char* func_52(var uParam0, int iParam1)//Position - 0x13303B
{
	switch (iParam1)
	{
		case 0:
			if (__LIB_6__.func_25() == 0)
			{
				return "PIM_INVCLB_HELP" /* GXT: Invite players to your Nightclub. */;
			}
			else
			{
				return "PIM_INVHUB_HELP" /* GXT: Invite players to your Warehouse. */;
			}
			break;
		case 1:
			return "PIM_NIGHTMan" /* GXT: Nightclub Management */;
			break;
		case 3:
			return "PIM_TITLE_NIGHT" /* GXT: INVITE TO NIGHTCLUB */;
			break;
		case 4:
			return "PIM_INVCLUB" /* GXT: Invite to Nightclub has been sent to ~a~. */;
			break;
		case 5:
			return "PIM_INV_A_T_NC" /* GXT: Invite to Nightclub has been sent to all players. */;
			break;
		case 6:
			return "CELL_CLUBINV" /* GXT: Hey, come over to the Nightclub. */;
			break;
	}
	return "";
}

int func_53(int iParam0)//Position - 0x1A4563
{
	if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 0))
	{
		return 2;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 1))
	{
		return 3;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 2))
	{
		return 4;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 3))
	{
		return 5;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 4))
	{
		return 6;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 5))
	{
		return 7;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 6))
	{
		return 8;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 7))
	{
		return 9;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 8))
	{
		return 10;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 9))
	{
		return 11;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 10))
	{
		return 12;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 11))
	{
		return 13;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 12))
	{
		return 14;
	}
	else if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_274, 13))
	{
		return 1;
	}
	return 0;
}

void func_54(var uParam0)//Position - 0x1A48C9
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_4 != uParam0->f_3)
	{
		if (uParam0->f_3 == 0)
		{
			if ((!uParam0->f_17 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_18)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_20))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, uParam0->f_20, ENTITY::GET_ENTITY_COORDS(*uParam0, true), uParam0->f_18, false, 0, false);
				uParam0->f_17 = 1;
			}
			if (uParam0->f_5 < 1f)
			{
				fVar1 = (uParam0->f_5 + (uParam0->f_12 * (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - uParam0->f_22)) / 1000f)));
				uParam0->f_5 = __LIB_0__.func_301(fVar1, 0f, 1f);
				if (uParam0->f_5 == 1f)
				{
					uParam0->f_4 = 0;
				}
				else
				{
					uParam0->f_4 = 2;
				}
				bVar0 = true;
			}
		}
		else
		{
			if ((!uParam0->f_17 && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_21))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, uParam0->f_21, ENTITY::GET_ENTITY_COORDS(*uParam0, true), uParam0->f_19, false, 0, false);
				uParam0->f_17 = 1;
			}
			if (uParam0->f_5 > 0f)
			{
				fVar1 = (uParam0->f_5 - (uParam0->f_12 * (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - uParam0->f_22)) / 1000f)));
				uParam0->f_5 = __LIB_0__.func_301(fVar1, 0f, 1f);
				if (uParam0->f_5 == 0f)
				{
					uParam0->f_4 = 1;
				}
				else
				{
					uParam0->f_4 = 3;
				}
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			ENTITY::SET_ENTITY_COORDS(*uParam0, __LIB_1__.func_163(uParam0->f_9, uParam0->f_6, uParam0->f_5), true, false, false, true);
		}
	}
}

void func_55(var uParam0, int iParam1)//Position - 0x1A4E9B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
		{
			OBJECT::SET_OBJECT_TINT_INDEX((*uParam0)[iVar0], iParam1);
		}
		iVar0++;
	}
}

int func_56(int iParam0, int iParam1)//Position - 0x1A4ED0
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 1;
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				case 11:
				case 12:
				case 13:
				case 14:
					return 3;
				default:
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 5;
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 4;
				case 11:
				case 12:
				case 13:
				case 14:
					return 6;
				default:
			}
			break;
		case 11:
		case 14:
		case 13:
		case 12:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 9;
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
					return 8;
				case 11:
				case 12:
				case 13:
				case 14:
					return 7;
				default:
			}
			break;
	}
	return 1;
}

int func_57(int iParam0, int iParam1)//Position - 0x1A5074
{
	switch (iParam1)
	{
		case 0:
			if (iParam0 <= 2 && iParam0 > 0)
			{
				return (iParam0 - 1);
			}
			break;
		case 1:
			if (iParam0 >= 0 && iParam0 < 2)
			{
				return iParam0 + 1;
			}
			break;
	}
	return -1;
}

int func_58(int* iParam0, int iParam1)//Position - 0x1A50C4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::DELETE_ENTITY(iParam0);
	}
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, iParam0->f_2, false, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
		ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x1A5128
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 1:
					return joaat("gr_prop_inttruck_light_ca_w_lg");
				case 2:
					return joaat("gr_prop_inttruck_light_ca_w_mu");
				case 3:
					return joaat("gr_prop_inttruck_light_ca_w_ol");
				case 4:
					return joaat("gr_prop_inttruck_light_ca_w_br");
				case 5:
					return joaat("gr_prop_inttruck_light_ca_g_dg");
				case 6:
					return joaat("gr_prop_inttruck_light_ca_g_aq");
				case 7:
					return joaat("gr_prop_inttruck_light_ca_g_re");
				case 8:
					return joaat("gr_prop_inttruck_light_ca_g_mu");
				case 9:
					return joaat("gr_prop_inttruck_light_ca_g_ol");
				case 10:
					return joaat("gr_prop_inttruck_light_ca_g_bl");
				case 11:
					return joaat("gr_prop_inttruck_light_ca_b_bk");
				case 14:
					return joaat("gr_prop_inttruck_light_ca_b_re");
				case 13:
					return joaat("gr_prop_inttruck_light_ca_b_ol");
				case 12:
					return joaat("gr_prop_inttruck_light_ca_b_bl");
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 1:
					return joaat("gr_prop_inttruck_light_co_w_lg");
				case 2:
					return joaat("gr_prop_inttruck_light_co_w_mu");
				case 3:
					return joaat("gr_prop_inttruck_light_co_w_ol");
				case 4:
					return joaat("gr_prop_inttruck_light_co_w_br");
				case 5:
					return joaat("gr_prop_inttruck_light_co_g_dg");
				case 6:
					return joaat("gr_prop_inttruck_light_co_g_aq");
				case 7:
					return joaat("gr_prop_inttruck_light_co_g_re");
				case 8:
					return joaat("gr_prop_inttruck_light_co_g_mu");
				case 9:
					return joaat("gr_prop_inttruck_light_co_g_ol");
				case 10:
					return joaat("gr_prop_inttruck_light_co_g_bl");
				case 11:
					return joaat("gr_prop_inttruck_light_co_b_bk");
				case 14:
					return joaat("gr_prop_inttruck_light_co_b_re");
				case 13:
					return joaat("gr_prop_inttruck_light_co_b_ol");
				case 12:
					return joaat("gr_prop_inttruck_light_co_b_bl");
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					return joaat("gr_prop_inttruck_light_gu_w_lg");
				case 2:
					return joaat("gr_prop_inttruck_light_gu_w_mu");
				case 3:
					return joaat("gr_prop_inttruck_light_gu_w_ol");
				case 4:
					return joaat("gr_prop_inttruck_light_gu_w_br");
				case 5:
					return joaat("gr_prop_inttruck_light_gu_g_dg");
				case 6:
					return joaat("gr_prop_inttruck_light_gu_g_aq");
				case 7:
					return joaat("gr_prop_inttruck_light_gu_g_re");
				case 8:
					return joaat("gr_prop_inttruck_light_gu_g_mu");
				case 9:
					return joaat("gr_prop_inttruck_light_gu_g_ol");
				case 10:
					return joaat("gr_prop_inttruck_light_gu_g_bl");
				case 11:
					return joaat("gr_prop_inttruck_light_gu_b_bk");
				case 14:
					return joaat("gr_prop_inttruck_light_gu_b_re");
				case 13:
					return joaat("gr_prop_inttruck_light_gu_b_ol");
				case 12:
					return joaat("gr_prop_inttruck_light_gu_b_bl");
				default:
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					return joaat("gr_prop_inttruck_light_li_w_lg");
				case 2:
					return joaat("gr_prop_inttruck_light_li_w_mu");
				case 3:
					return joaat("gr_prop_inttruck_light_li_w_ol");
				case 4:
					return joaat("gr_prop_inttruck_light_li_w_br");
				case 5:
					return joaat("gr_prop_inttruck_light_li_g_dg");
				case 6:
					return joaat("gr_prop_inttruck_light_li_g_aq");
				case 7:
					return joaat("gr_prop_inttruck_light_li_g_re");
				case 8:
					return joaat("gr_prop_inttruck_light_li_g_mu");
				case 9:
					return joaat("gr_prop_inttruck_light_li_g_ol");
				case 10:
					return joaat("gr_prop_inttruck_light_li_g_bl");
				case 11:
					return joaat("gr_prop_inttruck_light_li_b_bk");
				case 14:
					return joaat("gr_prop_inttruck_light_li_b_re");
				case 13:
					return joaat("gr_prop_inttruck_light_li_b_ol");
				case 12:
					return joaat("gr_prop_inttruck_light_li_b_bl");
				default:
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					return joaat("gr_prop_inttruck_light_ve_w_lg");
				case 2:
					return joaat("gr_prop_inttruck_light_ve_w_mu");
				case 3:
					return joaat("gr_prop_inttruck_light_ve_w_ol");
				case 4:
					return joaat("gr_prop_inttruck_light_ve_w_br");
				case 5:
					return joaat("gr_prop_inttruck_light_ve_g_dg");
				case 6:
					return joaat("gr_prop_inttruck_light_ve_g_aq");
				case 7:
					return joaat("gr_prop_inttruck_light_ve_g_re");
				case 8:
					return joaat("gr_prop_inttruck_light_ve_g_mu");
				case 9:
					return joaat("gr_prop_inttruck_light_ve_g_ol");
				case 10:
					return joaat("gr_prop_inttruck_light_ve_g_bl");
				case 11:
					return joaat("gr_prop_inttruck_light_ve_b_bk");
				case 14:
					return joaat("gr_prop_inttruck_light_ve_b_re");
				case 13:
					return joaat("gr_prop_inttruck_light_ve_b_ol");
				case 12:
					return joaat("gr_prop_inttruck_light_ve_b_bl");
				default:
			}
			break;
		case 6:
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
				case 14:
				case 13:
				case 12:
					return joaat("gr_prop_inttruck_empty_01dummy");
				default:
			}
			break;
		case 5:
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
				case 14:
				case 13:
				case 12:
					return joaat("gr_prop_inttruck_empty_02dummy");
				default:
			}
			break;
		case 8:
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
				case 14:
				case 13:
				case 12:
					return joaat("gr_prop_inttruck_empty_03dummy");
				default:
			}
			break;
	}
	return 0;
}

int func_60(int iParam0, var uParam1)//Position - 0x1A56ED
{
	uParam1->f_6 = iParam0;
	switch (iParam0)
	{
		case 1:
			uParam1->f_1 = joaat("gr_prop_inttruck_command_01");
			return 1;
		case 4:
			uParam1->f_1 = joaat("gr_prop_inttruck_living_01");
			return 1;
		case 3:
			uParam1->f_1 = joaat("gr_prop_inttruck_carmod_01");
			return 1;
		case 2:
			uParam1->f_1 = joaat("gr_prop_inttruck_gunmod_01");
			return 1;
		case 5:
			uParam1->f_1 = joaat("gr_prop_inttruck_empty_02");
			return 1;
		case 6:
			uParam1->f_1 = joaat("gr_prop_inttruck_empty_01");
			return 1;
		case 7:
			uParam1->f_1 = joaat("gr_prop_inttruck_vehicle_01");
			return 1;
		case 8:
			uParam1->f_1 = joaat("gr_prop_inttruck_empty_03");
			return 1;
		default:
	}
	uParam1->f_1 = 0;
	uParam1->f_6 = 0;
	return 0;
	return 0;
}

void func_61(int iParam0)//Position - 0x1A5D0A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		OBJECT::DELETE_OBJECT(&iParam0);
	}
}

int func_62(var uParam0, var uParam1, struct<16> Param2)//Position - 0x1A6264
{
	if (*uParam1 >= *uParam0)
	{
		return 0;
	}
	(uParam0[*uParam1 /*23*/])->f_1 = Param2.f_0;
	(uParam0[*uParam1 /*23*/])->f_6 = { Param2.f_3 };
	(uParam0[*uParam1 /*23*/])->f_9 = { Param2.f_6 };
	(uParam0[*uParam1 /*23*/])->f_13 = Param2.f_1;
	(uParam0[*uParam1 /*23*/])->f_2 = Param2.f_9;
	(uParam0[*uParam1 /*23*/])->f_12 = Param2.f_2;
	(uParam0[*uParam1 /*23*/])->f_14 = Param2.f_10;
	(uParam0[*uParam1 /*23*/])->f_15 = Param2.f_11;
	(uParam0[*uParam1 /*23*/])->f_18 = Param2.f_12;
	(uParam0[*uParam1 /*23*/])->f_19 = Param2.f_13;
	(uParam0[*uParam1 /*23*/])->f_20 = Param2.f_14;
	(uParam0[*uParam1 /*23*/])->f_21 = Param2.f_15;
	*uParam1++;
	return 1;
}

void func_63(var uParam0, var uParam1)//Position - 0x1A63F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		ENTITY::CREATE_MODEL_SWAP((uParam0[iVar0 /*8*/])->f_2, 1f, (uParam0[iVar0 /*8*/])->f_5, (uParam0[iVar0 /*8*/])->f_1, true);
		iVar0++;
	}
}

void func_64(var uParam0, var uParam1)//Position - 0x1A642E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (iVar0 != 0)
		{
		}
		iVar0++;
	}
}

int func_65(var uParam0, var uParam1, var uParam2, int iParam3, struct<8> Param4, int iParam5)//Position - 0x1A6452
{
	if (*uParam1 >= *uParam0)
	{
		return 0;
	}
	if (*uParam1 >= iParam3)
	{
		return 0;
	}
	if (Param4.f_1 == 0)
	{
		return 0;
	}
	if ((uParam2[*uParam1 /*4*/])->f_3 == 0)
	{
		return 0;
	}
	*(uParam0[*uParam1 /*8*/]) = { Param4 };
	(uParam0[*uParam1 /*8*/])->f_2 = { *(uParam2[*uParam1 /*4*/]) };
	(uParam0[*uParam1 /*8*/])->f_5 = (uParam2[*uParam1 /*4*/])->f_3;
	(uParam0[*uParam1 /*8*/])->f_7 = iParam5;
	*uParam1++;
	return 1;
}

void func_66(var uParam0, int iParam1)//Position - 0x1A64D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		iVar0++;
	}
}

int func_67(var uParam0, var uParam1, struct<3> Param2, int iParam3)//Position - 0x1A6568
{
	if (*uParam1 >= *uParam0)
	{
		return 0;
	}
	*(uParam0[*uParam1 /*4*/]) = { Param2 };
	(uParam0[*uParam1 /*4*/])->f_3 = iParam3;
	*uParam1++;
	return 1;
}

void func_68(var uParam0, var uParam1)//Position - 0x1A659E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*(uParam0[iVar0 /*4*/]) = { 0f, 0f, 0f };
		(uParam0[iVar0 /*4*/])->f_3 = 0;
		iVar0++;
	}
	*uParam1 = 0;
}

void func_69(var uParam0, var uParam1)//Position - 0x1A65D2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*23*/]))
		{
			ENTITY::DELETE_ENTITY(uParam0[iVar0 /*23*/]);
		}
		iVar0++;
	}
	*uParam1 = 0;
}

void func_70(var uParam0, var uParam1)//Position - 0x1A6622
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(uParam0[iVar0 /*8*/])->f_1 = 0;
		(uParam0[iVar0 /*8*/])->f_2 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*8*/])->f_5 = 0;
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		iVar0++;
	}
	*uParam1 = 0;
}

void func_71(var uParam0, int iParam1)//Position - 0x1A666C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		ENTITY::REMOVE_MODEL_SWAP((uParam0[iVar0 /*8*/])->f_2, 1f, (uParam0[iVar0 /*8*/])->f_5, (uParam0[iVar0 /*8*/])->f_1, false);
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*8*/]))
		{
			ENTITY::DELETE_ENTITY(uParam0[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

char* func_72(int iParam0)//Position - 0x1A6A6B
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return "Prop_Screen_GR_Turret";
		case 3:
		case 4:
			return "Prop_Screen_GR_Login";
		default:
	}
	return "";
}

void func_73(int iParam0, var uParam1)//Position - 0x1A6B0E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("gr_prop_gr_trailer_monitor_01");
			break;
		case 1:
			*uParam1 = joaat("gr_prop_gr_trailer_monitor_02");
			break;
		case 2:
			*uParam1 = joaat("gr_prop_gr_trailer_monitor_03");
			break;
		case 4:
			*uParam1 = joaat("gr_prop_gr_trailer_tv");
			break;
		case 3:
			*uParam1 = joaat("gr_prop_gr_trailer_tv_02");
			break;
	}
}

char* func_74(int iParam0)//Position - 0x1A6B72
{
	switch (iParam0)
	{
		case 0:
			return "gr_trailer_monitor_01";
		case 1:
			return "gr_trailer_monitor_02";
		case 2:
			return "gr_trailer_monitor_03";
		case 4:
			return "gr_trailerTV_01";
		case 3:
			return "gr_trailerTV_02";
		default:
	}
	return "";
}

int func_75(int iParam0)//Position - 0x1A6C13
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if ((BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 6) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 7)) || BitTest(Global_1853348[iParam0 /*834*/].f_267.f_273, 8))
		{
			return 1;
		}
	}
	return 0;
}

void func_76(bool bParam0)//Position - 0x1B92AF
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 11))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 11);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 11))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 11);
	}
}

void func_77(bool bParam0)//Position - 0x1B9310
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250, 31))
		{
			MISC::SET_BIT(&Global_1946250, 31);
		}
	}
	else if (BitTest(Global_1946250, 31))
	{
		MISC::CLEAR_BIT(&Global_1946250, 31);
	}
}

void func_78(bool bParam0)//Position - 0x1B9349
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250, 13))
		{
			MISC::SET_BIT(&Global_1946250, 13);
		}
	}
	else if (BitTest(Global_1946250, 13))
	{
		MISC::CLEAR_BIT(&Global_1946250, 13);
	}
}

int func_79(int iParam0)//Position - 0x1B9382
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318, 11);
	}
	return 0;
}

void func_80(bool bParam0)//Position - 0x1B93A6
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250, 14))
		{
			MISC::SET_BIT(&Global_1946250, 14);
		}
	}
	else if (BitTest(Global_1946250, 14))
	{
		MISC::CLEAR_BIT(&Global_1946250, 14);
	}
}

int func_81(int iParam0)//Position - 0x1B93DF
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_1, 3);
	}
	return 0;
}

void func_82()//Position - 0x1B9B98
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
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
	}
}

void func_83()//Position - 0x1B9F9D
{
	MISC::CLEAR_BIT(&(Global_1946250.f_503), 3);
	Global_1946250.f_495 = 0;
	Global_1946250.f_496 = 0;
	Global_1946250.f_492 = 0;
}

void func_84(bool bParam0)//Position - 0x1BA5D1
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 12))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 12);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318, 12))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 12);
	}
}

void func_85(char* sParam0)//Position - 0x1BA632
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("GtaMloRoom001"))
	{
	}
	else
	{
		GRAPHICS::ADD_TCMODIFIER_OVERRIDE("mp_gr_int01_black", sParam0);
	}
}

char* func_86(int iParam0)//Position - 0x1BA683
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return "MP_GR_INT01_WHITE";
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			return "MP_GR_INT01_GREY";
		case 11:
		case 14:
		case 13:
		case 12:
			return "MP_GR_INT01_BLACK";
		default:
	}
	return "";
}

void func_87(bool bParam0)//Position - 0x1BA870
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 6))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 6);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 6))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 6);
	}
}

void func_88(bool bParam0)//Position - 0x1BA8D5
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 5))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 5);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 5);
	}
}

void func_89(bool bParam0)//Position - 0x1BA9FE
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 1))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 1);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1, 1))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_1), 1);
	}
}

void func_90(bool bParam0)//Position - 0x1BAA63
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 26))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 26);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366, 26))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_366), 26);
	}
}

void func_91(var uParam0)//Position - 0x1BAAD0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
}

void func_92(var uParam0, var uParam1, var uParam2)//Position - 0x690F
{
	if (*uParam0 > 0)
	{
		if ((*uParam1)[*uParam0] == 0)
		{
			if (__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(*uParam2), 1, 1))
			{
				MISC::SET_BIT(uParam1[*uParam0], *uParam2);
			}
		}
	}
	uParam2->f_1 = 0;
	uParam2->f_1 = 0;
	while (uParam2->f_1 < 206)
	{
		if ((*uParam1)[uParam2->f_1] != 0)
		{
			if (BitTest((*uParam1)[uParam2->f_1], *uParam2))
			{
				if (!__LIB_1__.func_264(PLAYER::INT_TO_PLAYERINDEX(*uParam2), 0, 1))
				{
					MISC::CLEAR_BIT(uParam1[uParam2->f_1], *uParam2);
				}
				else
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(*uParam2)))
					{
						MISC::CLEAR_BIT(uParam1[uParam2->f_1], *uParam2);
					}
					if (*uParam0 != uParam2->f_1)
					{
						MISC::CLEAR_BIT(uParam1[uParam2->f_1], *uParam2);
					}
				}
			}
		}
		uParam2->f_1++;
	}
	*uParam2++;
	if (*uParam2 >= 32)
	{
		*uParam2 = 0;
	}
}

int func_93(int iParam0)//Position - 0x6E0F
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_318.f_2, 5);
	}
	return 0;
}

void func_94(var uParam0)//Position - 0x23343
{
	MISC::CLEAR_BIT(&(uParam0->f_498), 0);
	MISC::CLEAR_BIT(&(uParam0->f_498), 1);
	MISC::CLEAR_BIT(&(uParam0->f_498), 3);
	MISC::CLEAR_BIT(&(uParam0->f_498), 2);
	MISC::CLEAR_BIT(&(uParam0->f_498), 4);
	uParam0->f_498.f_1 = -1;
	uParam0->f_498.f_2 = -1;
	uParam0->f_498.f_3 = -1;
	uParam0->f_498.f_4 = -1;
	uParam0->f_498.f_5 = -1;
	uParam0->f_498.f_6 = -1;
	uParam0->f_498.f_7 = 0;
	uParam0->f_498.f_8 = __LIB_0__.func_160();
}

void func_95(var uParam0)//Position - 0x26593
{
	uParam0->f_429 = NETWORK::GET_NETWORK_TIME();
	uParam0->f_1 = 3;
}

void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x265A9
{
	switch (iParam0)
	{
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI"):
			MONEY::NETWORK_SPENT_PA_SERVICE_HELI(iParam1, iParam2 == 1, iParam3, iParam4);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_VEHICLE"):
			MONEY::NETWORK_SPENT_PA_SERVICE_VEHICLE(iParam1, iParam2, iParam3, iParam4);
			break;
		case joaat("SERVICE_SPEND_PA_SERVICE_IMPOUND"):
			MONEY::NETWORK_SPENT_PA_SERVICE_IMPOUND(iParam1, iParam3, iParam4);
			break;
	}
}

int func_97(int iParam0, var uParam1)//Position - 0x2B301
{
	if (uParam1->f_18 != 0)
	{
	}
	return (iParam0 - uParam1->f_498.f_6);
}

int func_98(int iParam0, int iParam1)//Position - 0x2B509
{
	if (__LIB_2__.func_192(iParam0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_428 == iParam1;
	}
	return 0;
}

bool func_99()//Position - 0x2B992
{
	return __LIB_0__.func_137(32324, -1);
}

void func_100(var uParam0)//Position - 0x2BD1E
{
	int iVar0;
	if (uParam0->f_18 > -1)
	{
		iVar0 = uParam0->f_28[uParam0->f_18];
		if (iVar0 > -1)
		{
			if (!BitTest(Global_1585857[iVar0 /*142*/].f_103, 1))
			{
				if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 6))
				{
					__LIB_1__.func_342("OF_PA_MEN_PV_D2" /* GXT: This Personal Vehicle is impounded. Do you want to remove this vehicle from the impound to exit the office with? */, 100, 0);
				}
				else
				{
					__LIB_1__.func_342("OF_PA_MEN_PV_D1" /* GXT: Select a Personal Vehicle to exit the office with. */, 100, 0);
				}
			}
			else
			{
				__LIB_1__.func_342("OF_PA_MEN_PV_D3" /* GXT: This Personal Vehicle is destroyed. You can call Mors Mutual Insurance to make a claim. */, 100, 0);
			}
		}
	}
}

void func_101(int iParam0, var uParam1, int iParam2, var uParam3)//Position - 0x303C9
{
	*iParam2 = uParam1->f_522[iParam0];
	*uParam3 = uParam1->f_545[iParam0];
}

void func_102(var uParam0)//Position - 0x308EF
{
	uParam0->f_25 = 1;
	uParam0->f_24 = 0;
}

int func_103(var uParam0)//Position - 0x316B0
{
	if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || uParam0->f_7.f_6) && uParam0->f_432)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)//Position - 0x316DD
{
	if (__LIB_1__.func_188(iParam0))
	{
	}
	else if (iParam0 == 117)
	{
		if (!Global_2726984)
		{
			return 0;
		}
	}
	else if (iParam0 == 125)
	{
		if (!Global_2726984)
		{
			return 0;
		}
	}
	return 1;
}

bool func_105(bool bParam0, int iParam1)//Position - 0x38AA3
{
	return BitTest(Global_2689235[bParam0 /*453*/].f_216, iParam1);
}

char* func_106(int iParam0, bool bParam1)//Position - 0x397B0
{
	switch (iParam0)
	{
		case 0:
			if (!bParam1)
			{
				return "OF_PA_MENUI_9" /* GXT: Pegasus Concierge */;
			}
			else
			{
				return "OF_PA_MENUT_9" /* GXT: PEGASUS CONCIERGE */;
			}
			break;
		case 1:
			if (!bParam1)
			{
				return "OF_PA_MENUI_2" /* GXT: Personal Vehicle */;
			}
			else
			{
				return "OF_PA_MENUT_3" /* GXT: PERSONAL VEHICLE */;
			}
			break;
		case 2:
			if (!bParam1)
			{
				return "OF_PA_MENUI_4" /* GXT: Snacks */;
			}
			else
			{
				return "OF_PA_MENUT_5" /* GXT: SNACKS */;
			}
			break;
		case 3:
			if (!bParam1)
			{
				return "OF_PA_MENUI_8" /* GXT: Buzzer */;
			}
			else
			{
				return "OF_PA_MENUT_8" /* GXT: BUZZER */;
			}
			break;
		case 4:
			return "OF_PA_MENUI_10" /* GXT: Export Mixed Goods */;
			break;
	}
	return "";
}

int func_107(int iParam0)//Position - 0x3A1EC
{
	int iVar0;
	__LIB_4__.func_84(Global_4282954, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !__LIB_0__.func_706())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_108()//Position - 0x3C012
{
	int iVar0;
	iVar0 = __LIB_2__.func_191(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != __LIB_0__.func_160()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)//Position - 0x3D6F4
{
	if (__LIB_1__.func_188(iParam1))
	{
		return 1;
	}
	else if (iParam1 == 117)
	{
		if (iParam0 == 18)
		{
			return 1;
		}
		return 0;
	}
	else if (iParam1 == 125)
	{
		if (iParam0 == 18)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)//Position - 0x3DA14
{
	if (__LIB_1__.func_188(iParam1))
	{
		return 1;
	}
	else if (iParam1 == 117)
	{
		return 0;
	}
	else if (iParam1 == 125)
	{
		return 0;
	}
	return 0;
}

int func_111(var uParam0)//Position - 0x3F6B0
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1118.3295f, 258.43817f, -47.074474f, 1120.4491f, 258.43854f, -44.300606f, 2.3f, false, true, 0) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uParam0->f_615, 90f))
	{
		return 1;
	}
	return 0;
}

bool func_112()//Position - 0x3F706
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.3369f, 254.8116f, -47.07599f, 1114.3439f, 257.53973f, -44.841f, 4.25f, false, true, 0);
}

int func_113(float fParam0)//Position - 0x3F73C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (iVar3 != PLAYER::PLAYER_PED_ID())
			{
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iVar3, 0) < fParam0)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_114()//Position - 0x3F79B
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1117.4961f, 251.41977f, -47.091f, 1117.4275f, 257.38733f, -44.341f, 6.75f, false, true, 0);
}

void func_115(var uParam0)//Position - 0x3F7D1
{
	if (BitTest(uParam0->f_519, 0))
	{
		MISC::CLEAR_BIT(&(uParam0->f_519), 0);
	}
	if (BitTest(uParam0->f_519, 1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_519), 1);
	}
	if (BitTest(uParam0->f_519, 2))
	{
		MISC::CLEAR_BIT(&(uParam0->f_519), 2);
	}
	if (BitTest(uParam0->f_519, 3))
	{
		MISC::CLEAR_BIT(&(uParam0->f_519), 3);
	}
	if (BitTest(uParam0->f_519, 4))
	{
		MISC::CLEAR_BIT(&(uParam0->f_519), 4);
	}
	if (BitTest(uParam0->f_518, 11))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 11);
	}
	if (BitTest(uParam0->f_518, 31))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 31);
	}
	if (BitTest(uParam0->f_518, 29))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 29);
	}
	if (BitTest(uParam0->f_518, 30))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 30);
	}
	if (BitTest(uParam0->f_518, 28))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 28);
	}
	if (BitTest(uParam0->f_518, 26))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 26);
	}
	if (BitTest(uParam0->f_518, 27))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 27);
	}
	if (BitTest(uParam0->f_518, 25))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 25);
	}
	if (BitTest(uParam0->f_518, 10))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 10);
	}
	if (BitTest(uParam0->f_518, 14))
	{
		MISC::CLEAR_BIT(&(uParam0->f_518), 14);
	}
}

int func_116(int iParam0)//Position - 0x3F919
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if ((Var1.f_2 - Var0.f_2) > 5f)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0)//Position - 0x3FA1B
{
	if (uParam0->f_577 >= 0)
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577) >= 0.99f)
		{
			MISC::CLEAR_BIT(&(uParam0->f_576), 0);
			uParam0->f_578 = 0;
		}
	}
}

int func_118(var uParam0, char* sParam1, struct<4> Param2, var uParam3, var uParam4)//Position - 0x3FA4E
{
	if (!BitTest(uParam0->f_576, 4))
	{
		uParam0->f_577 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, Param2.f_3, 2);
		StringCopy(&(uParam0->f_510), "IDLE_TO_GREETING_INTRO_B", 32);
		StringCopy(&(uParam0->f_579), "PA_", 64);
		StringConCat(&(uParam0->f_579), &(uParam0->f_510), 64);
		MemCopy(&(uParam0->f_595), {uParam0->f_510}, 16);
		StringConCat(&(uParam0->f_595), "_CHAIR", 64);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577, 0f);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_577, true);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_615, uParam0->f_577, sParam1, &(uParam0->f_579), 2f, -2f, 260, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_616, uParam0->f_577, &(uParam0->f_595), sParam1, 2f, -2f, 4 | 256, 1000f);
		MISC::SET_BIT(&(uParam0->f_576), 4);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_119(var uParam0, char* sParam1, struct<4> Param2, var uParam3, var uParam4)//Position - 0x3FC06
{
	if (!BitTest(uParam0->f_576, 2))
	{
		uParam0->f_577 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, Param2.f_3, 2);
		StringCopy(&(uParam0->f_510), "", 32);
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
		{
			case 0:
				StringCopy(&(uParam0->f_510), "IDLE_A", 32);
				break;
			case 1:
				StringCopy(&(uParam0->f_510), "IDLE_B", 32);
				break;
			case 2:
				StringCopy(&(uParam0->f_510), "IDLE_C", 32);
				break;
			case 3:
				StringCopy(&(uParam0->f_510), "IDLE_D", 32);
				break;
			default:
				return 0;
				break;
		}
		StringCopy(&(uParam0->f_579), "PA_", 64);
		StringConCat(&(uParam0->f_579), &(uParam0->f_510), 64);
		MemCopy(&(uParam0->f_595), {uParam0->f_510}, 16);
		StringConCat(&(uParam0->f_595), "_CHAIR", 64);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577, 0f);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_577, true);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_615, uParam0->f_577, sParam1, &(uParam0->f_579), 2f, -2f, 260, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_616, uParam0->f_577, &(uParam0->f_595), sParam1, 2f, -2f, 4 | 256, 1000f);
		MISC::SET_BIT(&(uParam0->f_576), 2);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0)//Position - 0x3FD42
{
	if (uParam0->f_577 >= 0)
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577) >= 0.99f)
		{
			MISC::CLEAR_BIT(&(uParam0->f_576), 2);
			uParam0->f_578 = 3;
		}
	}
}

int func_121(var uParam0, char* sParam1, struct<4> Param2, var uParam3, var uParam4)//Position - 0x3FD75
{
	if (!BitTest(uParam0->f_576, 1))
	{
		uParam0->f_577 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, Param2.f_3, 2);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577, 0f);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_577, true);
		TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_615, uParam0->f_577, sParam1, "PA_BASE", 1000f, -2f, 260, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_616, uParam0->f_577, "BASE_CHAIR", sParam1, 1000f, -2f, 4 | 256, 1000f);
		MISC::SET_BIT(&(uParam0->f_576), 1);
		return 1;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_122(var uParam0, int iParam1)//Position - 0x3FE17
{
	if (uParam0->f_577 >= 0)
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577) >= 0.99f)
		{
			uParam0->f_578 = 3;
			if (PLAYER::PLAYER_ID() == iParam1)
			{
				if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 9))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131), 9);
				}
			}
		}
	}
}

int func_123(var uParam0, char* sParam1, struct<4> Param2, var uParam3, var uParam4, int iParam5)//Position - 0x3FE76
{
	if (!BitTest(uParam0->f_576, 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam5)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam5)) == joaat("Reception_RM"))
			{
				uParam0->f_577 = PED::CREATE_SYNCHRONIZED_SCENE(Param2, Param2.f_3, 2);
				if (Global_1853348[iParam5 /*834*/].f_267.f_133 == 0)
				{
					StringCopy(&(uParam0->f_510), "GREETING_A", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_510), "GREETING_B", 32);
				}
				StringCopy(&(uParam0->f_579), "PA_", 64);
				StringConCat(&(uParam0->f_579), &(uParam0->f_510), 64);
				MemCopy(&(uParam0->f_595), {uParam0->f_510}, 16);
				StringConCat(&(uParam0->f_595), "_CHAIR", 64);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577, 0f);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_577, true);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_615, uParam0->f_577, sParam1, &(uParam0->f_579), 2f, -2f, 260, 0, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_616, uParam0->f_577, &(uParam0->f_595), sParam1, 2f, -2f, 4 | 256, 1000f);
				MISC::SET_BIT(&(uParam0->f_576), 3);
				if ((((!__LIB_0__.func_137(9421, -1) || BitTest(Global_4282953, 21)) || BitTest(Global_4282953, 22)) || BitTest(Global_4282953, 23)) || BitTest(Global_4282953, 24))
				{
					if (!__LIB_0__.func_137(9421, -1))
					{
						MISC::SET_BIT(&(uParam0->f_518), 24);
						__LIB_0__.func_521(9421, 1, -1);
					}
					else if (BitTest(Global_4282953, 21))
					{
						MISC::CLEAR_BIT(&Global_4282953, 21);
						MISC::SET_BIT(&(uParam0->f_518), 21);
					}
					else if (BitTest(Global_4282953, 22))
					{
						MISC::CLEAR_BIT(&Global_4282953, 22);
						MISC::SET_BIT(&(uParam0->f_518), 22);
					}
					else if (BitTest(Global_4282953, 23))
					{
						MISC::CLEAR_BIT(&Global_4282953, 23);
						MISC::SET_BIT(&(uParam0->f_518), 23);
					}
					else if (BitTest(Global_4282953, 24))
					{
						MISC::CLEAR_BIT(&Global_4282953, 24);
						MISC::SET_BIT(&(uParam0->f_518), 24);
					}
				}
				else
				{
					MISC::SET_BIT(&(uParam0->f_518), 11);
				}
				if (PLAYER::PLAYER_ID() == iParam5)
				{
					if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_133 == 0)
					{
						Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_133 = 1;
					}
					else
					{
						Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_133 = 0;
					}
				}
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
		return 1;
	}
	return 0;
}

void func_124(var uParam0, int iParam1)//Position - 0x400D7
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_577))
	{
		if (uParam0->f_577 >= 0)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577) >= 0.99f)
			{
				if (__LIB_2__.func_246(iParam1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam1)))
					{
						if ((INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam1)) == joaat("Reception_RM") && !BitTest(Global_1853348[iParam1 /*834*/].f_267.f_131, 9)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							uParam0->f_578 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_576), 3);
						}
						else
						{
							uParam0->f_578 = 0;
							MISC::CLEAR_BIT(&(uParam0->f_576), 0);
						}
					}
					else
					{
						uParam0->f_578 = 0;
						MISC::CLEAR_BIT(&(uParam0->f_576), 0);
					}
				}
				else
				{
					uParam0->f_578 = 0;
					MISC::CLEAR_BIT(&(uParam0->f_576), 0);
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_577) >= 0.2f && __LIB_2__.func_246(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam1)))
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::GET_PLAYER_PED(iParam1)) == joaat("Reception_RM") && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						uParam0->f_578 = 1;
						MISC::CLEAR_BIT(&(uParam0->f_576), 3);
					}
				}
			}
		}
	}
}

int func_125()//Position - 0x4152D
{
	return joaat("U_F_M_Debbie_01");
}

int func_126()//Position - 0x4153A
{
	return joaat("A_M_Y_Business_02");
}

int func_127()//Position - 0x41547
{
	return joaat("A_F_Y_Business_04");
}

int func_128()//Position - 0x41554
{
	return joaat("MP_F_ExecPA_01");
}

int func_129()//Position - 0x41561
{
	return joaat("MP_M_ExecPA_01");
}

void func_130(bool bParam0)//Position - 0x43A9C
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 4))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 4);
		}
	}
	else if (BitTest(Global_1946250.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 4);
	}
}

int func_131(bool bParam0)//Position - 0x6DFF3
{
	if (!bParam0 == __LIB_0__.func_160())
	{
		if (__LIB_4__.func_682(bParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_2__.func_191(bParam0)];
		}
	}
	return -1;
}

int func_132(int iParam0)//Position - 0x80039
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (__LIB_1__.func_326(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		return 1;
	}
	return 0;
}

int func_133(bool bParam0)//Position - 0xD78F8
{
	if (__LIB_4__.func_682(bParam0, 1))
	{
		return Global_1892703[bParam0 /*599*/].f_10.f_429;
	}
	return -1;
}

int func_134()//Position - 0xD9B15
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = __LIB_0__.func_160();
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__.func_121(iVar1))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (__LIB_0__.func_121(iVar2) && PED::IS_PED_A_PLAYER(iVar2))
			{
				bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	if (bVar0 == __LIB_0__.func_160() && __LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
	{
		bVar0 = __LIB_0__.func_582();
	}
	if (bVar0 != __LIB_0__.func_160() && PLAYER::PLAYER_ID() != bVar0)
	{
		return Global_2703735.f_402[bVar0];
	}
	return Global_2815059.f_324;
}

int func_135(int iParam0, int iParam1)//Position - 0xE0049
{
	int iVar0;
	bool bVar1;
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (__LIB_4__.func_136(bVar1))
		{
			if (iParam1 == bVar1)
			{
				if (!__LIB_4__.func_682(bVar1, 1) || __LIB_2__.func_192(bVar1))
				{
					if (!__LIB_4__.func_1(bVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_136()//Position - 0x12BA98
{
	if ((__LIB_1__.func_395(2) || __LIB_1__.func_395(1)) || __LIB_1__.func_395(36))
	{
		return 1;
	}
	return 0;
}

int func_137()//Position - 0x13E4B0
{
	int iVar0;
	var uVar1[25];
	int iVar2;
	int iVar3;
	var uVar4[25];
	int iVar5;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
	{
		if (PLAYER::PLAYER_ID() != __LIB_0__.func_582())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
			{
				iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
				iVar0 = 0;
				while (iVar0 < iVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar1[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uVar1[iVar0], false))
						{
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(uVar1[iVar0], joaat("trailerlarge")))
								{
									if (__LIB_4__.func_923(uVar1[iVar0], 1, 0) == __LIB_0__.func_582())
									{
										Global_2815059.f_307 = uVar1[iVar0];
										return uVar1[iVar0];
									}
								}
							}
						}
					}
					iVar0++;
				}
			}
			else
			{
				return Global_2815059.f_307;
			}
		}
	}
	else if (PLAYER::PLAYER_ID() == __LIB_0__.func_582() && !ENTITY::DOES_ENTITY_EXIST(Global_2815059.f_307))
	{
		iVar5 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar4);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar3]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar4[iVar3]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar3], false))
				{
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Creator_Trailer", 3))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(uVar4[iVar3], joaat("trailerlarge")))
						{
							if (__LIB_4__.func_923(uVar4[iVar3], 1, 0) == PLAYER::PLAYER_ID())
							{
								Global_2815059.f_307 = uVar4[iVar3];
								return uVar4[iVar3];
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return Global_2815059.f_307;
}

int func_138(bool bParam0, int iParam1)//Position - 0x154C60
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_274(bParam0, __LIB_0__.func_631(iParam1)) && !__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_139()//Position - 0x17E87F
{
	if ((__LIB_1__.func_402(2) || __LIB_1__.func_402(1)) || __LIB_1__.func_402(36))
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x1B1C05
{
	switch (iParam0)
	{
		case 16:
			return 0;
		case 17:
			return 1;
		case 18:
			return 2;
		case 19:
			return 3;
		case 20:
			return 4;
		case 21:
			return 5;
		case 22:
			return 6;
		case 23:
			return 7;
		case 24:
			return 8;
		case 25:
			return 9;
		case 26:
			return 10;
		case 27:
			return 11;
		case 28:
			return 12;
		case 29:
			return 13;
		default:
	}
	return -1;
}

int func_141(int iParam0)//Position - 0x1B1CA7
{
	switch (iParam0)
	{
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
			return 1;
		default:
	}
	return 0;
}

int func_142(int iParam0)//Position - 0x1B1D0F
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
			return 1;
		default:
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x1B1DBF
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (BitTest(Global_1888862[iParam0 /*120*/].f_38.f_26, 13))
		{
			return 1;
		}
	}
	return 0;
}

int func_144(var uParam0)//Position - 0x1B6964
{
	return uParam0->f_36;
}

void func_145(int iParam0)//Position - 0x1B7097
{
	int iVar0;
	iVar0 = __LIB_0__.func_214();
	Global_1574990 = iParam0;
}

void func_146(int iParam0)//Position - 0x1B7195
{
	Global_2727832 = iParam0;
}

void func_147()//Position - 0x1B71A3
{
	Global_1940311.f_3 = 1;
}

bool func_148()//Position - 0x1B71B2
{
	return Global_1940311.f_3;
}

void func_149()//Position - 0x1B7282
{
	if (!BitTest(Global_2621446, 24))
	{
		MISC::SET_BIT(&Global_2621446, 24);
	}
}

void func_150(int* iParam0, bool bParam1, int iParam2)//Position - 0x1B729F
{
	if (iParam2 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		PED::DISABLE_PED_HEATSCALE_OVERRIDE(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	iParam0->f_13 = { 0f, 0f, 0f };
	if (bParam1)
	{
		MISC::SET_BIT(iParam0, 9);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, 9);
	}
	MISC::CLEAR_BIT(iParam0, 3);
}

void func_151()//Position - 0x1B73CA
{
	if (!BitTest(Global_2815059.f_4660, 12))
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 12);
	}
}

void func_152()//Position - 0x1B7474
{
	MISC::CLEAR_BIT(&Global_2621446, 25);
}

bool func_153(var uParam0)//Position - 0x1B7486
{
	return BitTest(*uParam0, 4);
}

bool func_154()//Position - 0x1B80D9
{
	return __LIB_0__.func_236();
}

bool func_155()//Position - 0x1B815D
{
	return Global_1951107;
}

void func_156(int* iParam0)//Position - 0x1B84D4
{
	int iVar0;
	if (iParam0->f_1008 > 30)
	{
		iParam0->f_1461 = 30;
		iParam0->f_1460 = 0;
		iVar0 = iParam0->f_1008;
		while (iVar0 > -1)
		{
			iVar0 = (iVar0 - iParam0->f_1461);
			iParam0->f_1460++;
		}
		iParam0->f_1460 = (iParam0->f_1460 - 1);
	}
	else if (iParam0->f_1008 == 0)
	{
		iParam0->f_1461 = 0;
		iParam0->f_1460 = 0;
	}
	else
	{
		iParam0->f_1461 = iParam0->f_1008;
		iParam0->f_1460 = 0;
	}
	if (iParam0->f_1460 > 0)
	{
		iParam0->f_1462 = (iParam0->f_1008 - (iParam0->f_1459 * iParam0->f_1461));
		if (iParam0->f_1462 > iParam0->f_1461)
		{
			iParam0->f_1462 = iParam0->f_1461;
		}
	}
	else
	{
		iParam0->f_1462 = iParam0->f_1461;
	}
}

int func_157(int iParam0)//Position - 0x1B873C
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_348, 18);
	}
	return 0;
}

int func_158(int iParam0)//Position - 0x1B8763
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_292, 14);
	}
	return 0;
}

int func_159(int iParam0)//Position - 0x1B879A
{
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)//Position - 0x1B89B5
{
	return iParam0 == 55;
}

bool func_161()//Position - 0x1B8A06
{
	return BitTest(Global_2621446.f_1, 4);
}

bool func_162()//Position - 0x1B8A3C
{
	return BitTest(Global_1048576.f_10, 18);
}

int func_163(int iParam0)//Position - 0x1B8A4D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_199, 0);
}

var func_164()//Position - 0x1B8A6C
{
	return Global_1951108;
}

bool func_165()//Position - 0x1B8A86
{
	return Global_1951105;
}

int func_166(int iParam0)//Position - 0x1B8A92
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1892703[iVar0 /*599*/].f_533, 0);
}

bool func_167()//Position - 0x1B8AB6
{
	return Global_1951106;
}

bool func_168(int iParam0)//Position - 0x1B8D1B
{
	return iParam0 == 43;
}

bool func_169()//Position - 0x1B8D28
{
	return BitTest(Global_1048576.f_10, 13);
}

int func_170(var uParam0, int iParam1)//Position - 0x1B8D86
{
	if (uParam0->f_1002[iParam1] > 0)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)//Position - 0x1B8DA0
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1924338[iVar0 /*199*/].f_198, 1);
	}
	return 0;
}

bool func_172(bool bParam0)//Position - 0x1B943F
{
	return Global_1853348[bParam0 /*834*/].f_192 != 0;
}

bool func_173(int iParam0)//Position - 0x1B9482
{
	return BitTest(Global_1853348[iParam0 /*834*/].f_96.f_32, 11);
}

bool func_174()//Position - 0x1BA78F
{
	return BitTest(Global_2815059.f_4660, 1);
}

bool func_175()//Position - 0x1BA80F
{
	return Global_1836588;
}

bool func_176(int iParam0)//Position - 0x1BA81B
{
	return iParam0 == 36;
}

bool func_177(int iParam0)//Position - 0x1BA828
{
	return iParam0 == 63;
}

bool func_178(int iParam0)//Position - 0x1BA835
{
	return iParam0 == 16;
}

bool func_179(int iParam0)//Position - 0x1BA842
{
	return iParam0 == 42;
}

int func_180(int iParam0)//Position - 0x1BA87B
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return iParam0;
	}
	if (iParam0 == 19)
	{
		return 5;
	}
	return iParam0;
}

int func_181(var uParam0)//Position - 0x1BA8E4
{
	if (uParam0->f_1008 > 0)
	{
		return 1;
	}
	return 0;
}

int func_182()//Position - 0x1BA8FA
{
	if ((((((((Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 1 || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 8) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 2) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 4) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 9) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 7) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 10) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 165) || Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
	{
		if (!Global_2621442)
		{
			return 0;
		}
	}
	return 1;
}

int func_183(int iParam0)//Position - 0x1BA9BB
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return iParam0;
	}
	switch (iParam0)
	{
		case 224:
			return 37;
		case 226:
			return 171;
		case 227:
			return 36;
		case 228:
			return 172;
		case 229:
			return 173;
		case 230:
			return 23;
		case 231:
			return 44;
		case 234:
			return 174;
		case 235:
			return 175;
		case 222:
			return 51;
		default:
	}
	return iParam0;
}

bool func_184()//Position - 0x1BAA48
{
	return Global_1951104;
}

int func_185(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1BABC8
{
	int iVar0;
	int iVar1;
	iVar1 = iParam3;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (iVar0)
		{
			case 0:
			case 2:
			case 4:
				if (iVar1 > (uParam0->f_1002[iVar0] - 1))
				{
					iVar1 = (iVar1 - uParam0->f_1002[iVar0]);
				}
				else
				{
					*iParam2 = iVar1;
					*iParam1 = iVar0;
					return 1;
				}
				break;
			case 1:
			case 3:
				if (iVar1 > 0)
				{
					iVar1 = (iVar1 - 1);
				}
				else
				{
					*iParam2 = iVar1;
					*iParam1 = iVar0;
					return 1;
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_186(var uParam0, int iParam1)//Position - 0x1BAC5E
{
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(iParam1, 84);
	if (iParam1 == 82)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	else if (iParam1 == 76)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.14f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

bool func_187()//Position - 0x1BADE6
{
	return BitTest(Global_2815059.f_4660, 11);
}

int func_188()//Position - 0x1BAEE3
{
	if (Global_1836363 && !BitTest(Global_2621446, 0))
	{
		return 1;
	}
	return 0;
}

bool func_189()//Position - 0x1BAF2B
{
	return BitTest(Global_2815059.f_4660, 10);
}

void func_190()//Position - 0x1BAF4C
{
	if (BitTest(Global_2815059.f_4660, 12))
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 12);
	}
}

bool func_191()//Position - 0x1BAF6E
{
	return BitTest(Global_2815059.f_4660, 12);
}

void func_192(bool bParam0)//Position - 0x1BAF80
{
	if (bParam0)
	{
		if (!Global_1581339)
		{
			Global_1581339 = 1;
		}
	}
	else if (Global_1581339)
	{
		Global_1581339 = 0;
	}
}

void func_193()//Position - 0x1BB1EF
{
	Global_2714762.f_734 = 0;
}

void func_194()//Position - 0x1BB1FF
{
	Global_2714762.f_702 = 0;
}

void func_195()//Position - 0x1BB20F
{
	MISC::CLEAR_BIT(&Global_2714762, 20);
}

void func_196()//Position - 0x1BB221
{
	MISC::CLEAR_BIT(&Global_2714762, 2);
}

int func_197(var uParam0)//Position - 0x1BB246
{
	if (((((!CAM::IS_SCREEN_FADED_IN() || BitTest(uParam0->f_1.f_1, 4)) || BitTest(uParam0->f_47, 2)) || BitTest(uParam0->f_47, 19)) || HUD::IS_PAUSE_MENU_ACTIVE()) || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	return 1;
}

void func_198()//Position - 0x1BB9EE
{
	if (Global_1659931 >= 0 && Global_1659931 < AUDIO::GET_NUM_UNLOCKED_RADIO_STATIONS())
	{
		AUDIO::SET_RADIO_TO_STATION_INDEX(Global_1659931);
	}
	else
	{
		AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
	}
}

void func_199(int iParam0)//Position - 0x1BBB4B
{
	if (iParam0 == 1)
	{
		if (!BitTest(Global_2621446.f_1, 3))
		{
			PLAYER::SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(true);
			AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", true);
			AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
			MISC::SET_BIT(&(Global_2621446.f_1), 3);
		}
	}
	else if (BitTest(Global_2621446.f_1, 3))
	{
		PLAYER::SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(false);
		AUDIO::SET_AUDIO_FLAG("AllowRadioDuringSwitch", false);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(false);
		AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
		MISC::CLEAR_BIT(&(Global_2621446.f_1), 3);
	}
}

void func_200(int iParam0)//Position - 0x1BBC2F
{
	Global_1574529 = iParam0;
}

int func_201()//Position - 0x1BBC83
{
	if (Global_2621446.f_69.f_2 == 1)
	{
		if (Global_2621446.f_69.f_1 == Global_2621446.f_69)
		{
			if (!BitTest(Global_2621446.f_69.f_5, 2))
			{
				if (!BitTest(Global_2621446.f_69.f_5, 3))
				{
					if (BitTest(Global_2621446.f_69.f_5, 4))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_202(bool bParam0)//Position - 0x1BBCD6
{
	if (Global_2727831 == 0 && bParam0 == 1)
	{
		Global_2727831 = bParam0;
		HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(bParam0);
	}
	if (Global_2727831 == 1 && bParam0 == 0)
	{
		Global_2727831 = bParam0;
		HUD::DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(bParam0);
	}
}

void func_203(var uParam0, int iParam1)//Position - 0x1BC4CF
{
	uParam0->f_1463 = (uParam0->f_1463 + iParam1);
}

int func_204()//Position - 0x1BC8A1
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
	}
	return 0;
}

Vector3 func_205(var uParam0, int iParam1, int iParam2)//Position - 0x1BC956
{
	return uParam0->f_24[iParam1 /*97*/][iParam2 /*3*/];
}

int func_206()//Position - 0x1BC96C
{
	if ((!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 231 /*INPUT_SCRIPT_RS*/)) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 44 /*INPUT_COVER*/)))
	{
		return 1;
	}
	return 0;
}

int func_207()//Position - 0x1BC9C0
{
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
	{
		return 1;
	}
	return 0;
}

void func_208(var uParam0, int iParam1)//Position - 0x1BD1EA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_HIGHLIGHT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_209(var uParam0, char* sParam1)//Position - 0x1BD209
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DESCRIPTION");
	__LIB_0__.func_478("");
	__LIB_0__.func_478("");
	__LIB_0__.func_478("");
	__LIB_0__.func_478(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_210(var uParam0, bool bParam1, int iParam2)//Position - 0x1BD24E
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_211(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x1BD288
{
	char* sVar0;
	sVar0 = "ADD_NEW_ORDER_ITEM";
	if (bParam1)
	{
		sVar0 = "UPDATE_SLOT";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sVar0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	if (bParam11)
	{
		__LIB_0__.func_514("");
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	__LIB_0__.func_514(sParam5);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	if (bParam8)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(66);
	}
	else if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(118);
	}
	if (bParam11)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(116);
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("char_default");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING("char_default");
	}
	else
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam7);
	}
	__LIB_0__.func_514(sParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_212(int* iParam0, int iParam1)//Position - 0x1BE627
{
	MISC::SET_BIT(iParam0, 6);
	iParam0->f_23 = iParam1;
}

void func_213(int* iParam0, int iParam1)//Position - 0x1BE63C
{
	iParam0->f_1463 = iParam1;
}

int func_214(int* iParam0)//Position - 0x1BE64B
{
	return iParam0->f_1463;
}

int func_215(var uParam0)//Position - 0x1BE79A
{
	return uParam0->f_23;
}

void func_216(int iParam0)//Position - 0x1BEB31
{
	if (Global_2825122.f_3.f_212 != iParam0)
	{
		Global_2825122.f_3.f_212 = iParam0;
	}
}

int func_217()//Position - 0x1BEB50
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (((Global_4718592.f_111249[0] != -1 || Global_4718592.f_111249[1] != -1) || Global_4718592.f_111249[2] != -1) || Global_4718592.f_111249[3] != -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_218()//Position - 0x1BEBB1
{
	return Global_2825122.f_3.f_212;
}

void func_219()//Position - 0x1BECF2
{
	if (!BitTest(Global_2621446.f_69.f_5, 17))
	{
		MISC::SET_BIT(&(Global_2621446.f_69.f_5), 17);
	}
}

void func_220(int iParam0)//Position - 0x1BEE60
{
	Global_2703735.f_2398 = iParam0;
}

void func_221(int iParam0)//Position - 0x1BEE93
{
	Global_2815059.f_5118 = iParam0;
}

bool func_222()//Position - 0x1BEEBA
{
	return Global_2703735.f_1571.f_702 != 3;
}

bool func_223()//Position - 0x1BF1A5
{
	return Global_1648034.f_1552;
}

void func_224(var uParam0)//Position - 0x1BF941
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "ADD_FEED_TEXT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_1940311.f_5[0 /*53*/].f_8));
	switch (Global_1940311.f_5[0 /*53*/])
	{
		case 2:
		case 8:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			break;
		case 3:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 4:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			break;
		case 5:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[2]);
			break;
		case 6:
			HUD::ADD_TEXT_COMPONENT_FLOAT(Global_1940311.f_5[0 /*53*/].f_7, Global_1940311.f_5[0 /*53*/].f_6);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[2]);
			break;
		case 7:
			HUD::ADD_TEXT_COMPONENT_FLOAT(Global_1940311.f_5[0 /*53*/].f_7, Global_1940311.f_5[0 /*53*/].f_6);
			break;
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			break;
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_FLOAT(Global_1940311.f_5[0 /*53*/].f_7, Global_1940311.f_5[0 /*53*/].f_6);
			break;
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 13:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			break;
		case 14:
		case 15:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			break;
		case 16:
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_1940311.f_5[0 /*53*/].f_2[0], 7);
			break;
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_1940311.f_5[0 /*53*/].f_2[0], 7);
			break;
		case 19:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_1940311.f_5[0 /*53*/].f_2[0], 7);
			break;
		case 20:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_1940311.f_5[0 /*53*/].f_2[0], 7);
			break;
		case 22:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 23:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[1 /*6*/]));
			break;
		case 24:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[1 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[2 /*6*/]));
			break;
		case 25:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 26:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_28[1 /*6*/]));
			break;
		case 27:
		case 29:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 28:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_FLOAT(Global_1940311.f_5[0 /*53*/].f_7, Global_1940311.f_5[0 /*53*/].f_6);
			break;
		case 30:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 31:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1940311.f_5[0 /*53*/].f_12));
			break;
		case 32:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 33:
		case 34:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 35:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1940311.f_5[0 /*53*/].f_12));
			break;
		case 37:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 38:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
		case 39:
		case 40:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			break;
		case 41:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[1]);
			break;
		case 42:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			break;
		case 43:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_12));
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_5[0 /*53*/].f_2[0]);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_5[0 /*53*/].f_28[0 /*6*/]));
			break;
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_225()//Position - 0x1C00AB
{
	if (Global_4718592 == 0)
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 4 || (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 != 6 && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 != 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_226(var uParam0)//Position - 0x1C00FB
{
	int iVar0;
	int iVar1;
	if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_3, NETWORK::GET_NETWORK_TIME())) > 500 || uParam0->f_3 == 0)
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (uParam0->f_5[iVar0 /*8*/] != Global_1940311.f_271[iVar0 /*8*/])
			{
				uParam0->f_5[iVar0 /*8*/] = Global_1940311.f_271[iVar0 /*8*/];
				iVar1 = 1;
			}
			if (uParam0->f_5[iVar0 /*8*/].f_1 != Global_1940311.f_271[iVar0 /*8*/].f_1)
			{
				uParam0->f_5[iVar0 /*8*/].f_1 = Global_1940311.f_271[iVar0 /*8*/].f_1;
				iVar1 = 1;
			}
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_5[iVar0 /*8*/].f_2), &(Global_1940311.f_271[iVar0 /*8*/].f_2)))
			{
				uParam0->f_5[iVar0 /*8*/].f_2 = { Global_1940311.f_271[iVar0 /*8*/].f_2 };
				iVar1 = 1;
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_227(var uParam0, bool bParam1)//Position - 0x1C01DF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_PLAYER_SCORE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0 + 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1940311.f_271[iVar0 /*8*/].f_2)) && bParam1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FMMC_NO" /* GXT: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_271[iVar0 /*8*/]);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1940311.f_271[iVar0 /*8*/].f_2));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			if (Global_4718592 == 2 && !Global_1836601)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				if (Global_1940311.f_271[iVar0 /*8*/].f_1 == 0)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(Global_1940311.f_271[iVar0 /*8*/].f_1, 7);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FMMC_NO" /* GXT: ~1~ */);
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1940311.f_271[iVar0 /*8*/].f_1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FMMC_NO" /* GXT: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(0);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FMMC_NO" /* GXT: ~1~ */);
			HUD::ADD_TEXT_COMPONENT_INTEGER(0);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
	}
}

char* func_228(int iParam0)//Position - 0x1C0435
{
	if (Global_4718592 == 0)
	{
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 6)
		{
			if (BitTest(Global_4718592.f_4, 21))
			{
				return "SCTV_TS_CTFG" /* GXT: GTA – fighting for transport */;
			}
			else if (BitTest(Global_4718592.f_4, 23))
			{
				return "SCTV_TS_CTFR" /* GXT: Raid - protecting their base of operations */;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return "SCTV_TS_CTFC" /* GXT: Contend – bringing it back to base */;
			}
			else if (BitTest(Global_4718592.f_4, 22))
			{
				return "SCTV_TS_CTFH" /* GXT: Hold – holding on for dear life */;
			}
		}
		else if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 5)
		{
			switch (iParam0)
			{
				case 2:
					return "SCTV_TS_LTS2" /* GXT: Two Team LTS – in a two teams enter one leaves situation */;
				case 3:
					return "SCTV_TS_LTS3" /* GXT: Three Team LTS – in a three way... battle for survival */;
				case 4:
					return "SCTV_TS_LTS4" /* GXT: Four Team LTS – unlikely to survive a four team fight */;
				default:
			}
			return "SCTV_TS_LTS2" /* GXT: Two Team LTS – in a two teams enter one leaves situation */;
		}
	}
	return "";
}

char* func_229()//Position - 0x1C0500
{
	switch (Global_4718592)
	{
		case 0:
			if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 6)
			{
				if (BitTest(Global_4718592.f_4, 21))
				{
					return "SCTV_T_CTFG" /* GXT: GTA CTF */;
				}
				else if (BitTest(Global_4718592.f_4, 23))
				{
					return "SCTV_T_CTFR" /* GXT: Raid CTF */;
				}
				else if (BitTest(Global_4718592.f_4, 20))
				{
					return "SCTV_T_CTFC" /* GXT: Contend CTF */;
				}
				else if (BitTest(Global_4718592.f_4, 22))
				{
					return "SCTV_T_CTFH" /* GXT: Hold CTF */;
				}
			}
			else if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 4)
			{
				return "SCTV_T_VS" /* GXT: versus */;
			}
			else if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 5)
			{
				return "SCTV_T_LTS" /* GXT: LTS */;
			}
			else
			{
				return "SCLB_MIS_NN" /* GXT: Mission */;
			}
			break;
		case 1:
			if (Global_1836578)
			{
				return "SCLB_VEHDM_NN" /* GXT: Vehicle Deathmatch */;
			}
			else if (Global_1836576)
			{
				return "SCLB_TDM_NN" /* GXT: Team Deathmatch */;
			}
			else
			{
				return "SCLB_DM_NN" /* GXT: Deathmatch */;
			}
			break;
		case 2:
			if (Global_1836584)
			{
				return "SCLB_RCE_NN" /* GXT: Race */;
			}
			else if (Global_1836594)
			{
				return "SCLB_GRCE_NN" /* GXT: GTA Race */;
			}
			else if (Global_1836589)
			{
				return "SCTV_T_RR" /* GXT: Rally Race */;
			}
			else if (Global_1836596)
			{
				return "SCTV_T_NCR" /* GXT: Non-Contact Race */;
			}
			else
			{
				return "SCLB_RCE_NN" /* GXT: Race */;
			}
			break;
		case 8:
			return "SCLB_BJ_NN" /* GXT: Parachute Jump */;
		case 3:
			return "FMMC_RSTAR_HM" /* GXT: Survival */;
		case 14:
			return "FMMC_MPM_TY11" /* GXT: Darts */;
		case 11:
			return "FMMC_MPM_TY13" /* GXT: Golf */;
		case 13:
			return "FMMC_MPM_TY12" /* GXT: Shooting Range */;
		case 15:
			return "FMMC_MPM_TY10" /* GXT: Arm Wrestling */;
		case 12:
			return "FMMC_MPM_TY9" /* GXT: Tennis */;
	}
	return "";
}

void func_230(var uParam0, bool bParam1)//Position - 0x1C06BB
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SHOW_POSITIONS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_231()//Position - 0x1C06DB
{
	Global_1940311.f_4 = 1;
}

bool func_232()//Position - 0x1C06EA
{
	return BitTest(Global_2621446, 22);
}

void func_233(var uParam0)//Position - 0x1C06F9
{
	if (uParam0->f_1455 != -1)
	{
		AUDIO::STOP_SOUND(uParam0->f_1455);
		AUDIO::RELEASE_SOUND_ID(uParam0->f_1455);
		uParam0->f_1455 = -1;
	}
}

void func_234(var uParam0)//Position - 0x1C0D4F
{
	int iVar0;
	int iVar1;
	PATHFIND::GET_STREET_NAME_AT_COORD(CAM::GET_FINAL_RENDERED_CAM_COORD(), &iVar0, &iVar1);
	if (iVar1 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /* GXT: ~a~ and ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(iVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(iVar1);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /* GXT: ~a~ */);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(iVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		__LIB_0__.func_478(NETWORK::GET_TIME_AS_STRING(NETWORK::GET_NETWORK_TIME()));
	}
	uParam0->f_47.f_2178 = 8000;
	uParam0->f_47.f_2175++;
}

int func_235(int iParam0)//Position - 0x1C0F5F
{
	switch (iParam0)
	{
		case 8:
		case 13:
			return 1;
			break;
	}
	return 0;
}

bool func_236()//Position - 0x1C0F82
{
	return Global_1836590;
}

bool func_237()//Position - 0x1C0F8E
{
	return Global_1836589;
}

void func_238()//Position - 0x1C125B
{
	if (BitTest(Global_2621446, 22))
	{
		MISC::CLEAR_BIT(&Global_2621446, 22);
	}
}

void func_239(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)//Position - 0x1C1277
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

struct<16> func_240(var* uParam0, var uParam1)//Position - 0x1C128F
{
	struct<16> Var0;
	if ((PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
	{
		return uParam1->f_1;
	}
	StringCopy(&Var0, "CLAN_TT", 64);
	return Var0;
}

void func_241(char* sParam0, char* sParam1)//Position - 0x1C12CA
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_242(char* sParam0, char* sParam1)//Position - 0x1C149C
{
	int iVar0;
	int iVar1;
	StringCopy(sParam0, "MPTV_OTICK", 16);
	StringCopy(sParam1, "MPTV_OTICK", 16);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 16);
	if (iVar0 == iVar1)
	{
		if (iVar0 > 8)
		{
			iVar1 = (iVar0 - 1);
		}
		else
		{
			iVar1 = iVar0 + 1;
		}
	}
	StringIntConCat(sParam0, iVar0, 16);
	StringIntConCat(sParam1, iVar1, 16);
}

void func_243(var uParam0)//Position - 0x1C150F
{
	int iVar0;
	struct<8> Var1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_5[iVar0 /*8*/] = { Var1 };
		iVar0++;
	}
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_244(var uParam0)//Position - 0x1C1564
{
	if (uParam0->f_1455 == -1)
	{
		uParam0->f_1455 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_1455, "Change_Cam", "MP_CCTV_SOUNDSET", true);
	}
}

bool func_245()//Position - 0x1C15B0
{
	return Global_2621446.f_69.f_9;
}

void func_246()//Position - 0x1C1605
{
	if (!BitTest(Global_2621446, 21))
	{
		MISC::SET_BIT(&Global_2621446, 21);
		MISC::CLEAR_BIT(&Global_2621446, 31);
		__LIB_0__.func_579(&(Global_2621446.f_5));
	}
}

bool func_247()//Position - 0x1C1696
{
	return BitTest(Global_2714762.f_43.f_4, 9);
}

bool func_248()//Position - 0x1C176D
{
	return BitTest(Global_2715699.f_1.f_2810, 6);
}

void func_249(int iParam0)//Position - 0x1C17F9
{
	Global_31960 = iParam0;
}

void func_250(var uParam0)//Position - 0x1C1806
{
	Global_1575015 = uParam0;
}

void func_251(int iParam0)//Position - 0x1C1814
{
	Global_1574589.f_2 = iParam0;
}

void func_252()//Position - 0x1C1824
{
	MISC::SET_BIT(&Global_1574589, 0);
}

void func_253()//Position - 0x1C21CF
{
	Global_2714762.f_893 = 0;
}

void func_254()//Position - 0x1C23BF
{
	Global_2715699.f_1.f_840 = 0;
}

void func_255()//Position - 0x1C2511
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	struct<13> Var12;
	struct<16> Var13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	iVar5 = -1;
	iVar7 = -1;
	iVar21 = -1;
	Global_2715699.f_5987 = { Var12 };
	iVar23 = 0;
	while (iVar23 <= 31)
	{
		Global_2715699.f_1.f_845[iVar23 /*57*/] = { Var12 };
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_13 = { Var13 };
		StringCopy(&(Global_2715699.f_1.f_845[iVar23 /*57*/].f_29), "", 16);
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_44 = uVar16;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_45 = uVar17;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_46 = 0;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_47 = uVar18;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_50 = uVar19;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_55 = uVar20;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_48 = 0;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_49 = 0;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_54 = 0;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_56 = uVar20;
		Global_2715699.f_1.f_845[iVar23 /*57*/].f_53 = uVar22;
		iVar24 = 0;
		while (iVar24 <= 1)
		{
			Global_2715699.f_1.f_845[iVar23 /*57*/].f_33[iVar24] = uVar14;
			iVar24++;
		}
		iVar24 = 0;
		while (iVar24 <= 6)
		{
			Global_2715699.f_1.f_845[iVar23 /*57*/].f_36[iVar24] = uVar15;
			iVar24++;
		}
		iVar23++;
	}
	iVar23 = 0;
	while (iVar23 <= 1)
	{
		Global_2715699.f_1.f_2670[iVar23 /*57*/] = { Var12 };
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_13 = { Var13 };
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_44 = uVar16;
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_45 = uVar17;
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_47 = uVar18;
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_50 = uVar19;
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_55 = uVar20;
		Global_2715699.f_1.f_2670[iVar23 /*57*/].f_56 = uVar20;
		iVar24 = 0;
		while (iVar24 <= 1)
		{
			Global_2715699.f_1.f_2670[iVar23 /*57*/].f_33[iVar24] = uVar14;
			iVar24++;
		}
		iVar24 = 0;
		while (iVar24 <= 6)
		{
			Global_2715699.f_1.f_2670[iVar23 /*57*/].f_36[iVar24] = uVar15;
			iVar24++;
		}
		iVar23++;
	}
	Global_2715699.f_1.f_2798 = uVar0;
	Global_2715699.f_1.f_2799 = uVar1;
	Global_2715699.f_1.f_2800 = uVar2;
	Global_2715699.f_1.f_2802 = uVar3;
	Global_2715699.f_1.f_2805 = uVar4;
	Global_2715699.f_1.f_2806 = 0;
	Global_2715699.f_1.f_2808 = iVar5;
	Global_2715699.f_1.f_2809 = uVar6;
	Global_2715699.f_1.f_2810 = uVar6;
	Global_2715699.f_1.f_2811 = iVar7;
	Global_2715699.f_1.f_2812 = uVar8;
	iVar25 = 0;
	while (iVar25 < 8)
	{
		Global_2715699.f_1.f_2813[iVar25] = 0;
		iVar25++;
	}
	Global_2715699.f_1.f_2825 = iVar21;
	Global_2715699.f_1.f_2822 = uVar9;
	Global_2715699.f_1.f_2823 = uVar10;
	Global_2715699.f_1.f_2824 = uVar11;
	Global_2714762.f_841 = 0;
}

void func_256()//Position - 0x1C2849
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_2715699.f_1.f_2813[iVar0] = 0;
		iVar0++;
	}
}

void func_257()//Position - 0x1C288D
{
	Global_2714762.f_693 = 0;
}

void func_258()//Position - 0x1C289D
{
	Global_2714762.f_696 = 0;
}

void func_259()//Position - 0x1C28AD
{
	Global_2714762.f_706 = 0;
}

void func_260()//Position - 0x1C28CD
{
	NETWORK::NETWORK_BLOCK_INVITES(false);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(false);
}

void func_261()//Position - 0x1C28DF
{
	Global_2714762.f_698 = 0;
}

void func_262()//Position - 0x1C28EF
{
	struct<9> Var0;
	Global_1931899 = { Var0 };
}

char* func_263()//Position - 0x1C295A
{
	switch (Global_2727899)
	{
		case 0:
			return "freemode_init";
		default:
	}
	return "freemode_init";
}

void func_264()//Position - 0x1C2A6F
{
	Global_1966049 = 0;
	Global_1966049.f_1 = 0;
	Global_1966049.f_2 = 0;
	Global_1966049.f_3 = 0;
	Global_1966049.f_4 = { 0f, 0f, 0f };
	Global_1966049.f_7 = { 0f, 0f, 0f };
}

void func_265()//Position - 0x1C2AA7
{
	struct<12> Var0;
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Global_1941273 = { Var0 };
}

void func_266()//Position - 0x1C2E0B
{
	Global_2714762.f_785.f_5 = 0;
}

bool func_267()//Position - 0x1C2E1D
{
	return Global_2714762.f_785.f_5;
}

void func_268(bool bParam0)//Position - 0x1C2E2E
{
	Global_1963988 = bParam0;
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		Global_1964727 = 1;
	}
	else
	{
		Global_1964727 = 0;
	}
}

void func_269(int iParam0)//Position - 0x1C2EFE
{
	Global_2725361 = iParam0;
}

void func_270(int iParam0)//Position - 0x1C2F0C
{
	Global_1574934 = iParam0;
}

void func_271()//Position - 0x1C2F1A
{
	if (!BitTest(Global_2621446, 31))
	{
		MISC::SET_BIT(&Global_2621446, 31);
		__LIB_0__.func_579(&(Global_2621446.f_5));
	}
}

bool func_272()//Position - 0x1C2F41
{
	return BitTest(Global_2714762, 15);
}

void func_273()//Position - 0x1C33D8
{
	HUD::BUSYSPINNER_OFF();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("GTAOlogo");
}

void func_274(var uParam0, int iParam1)//Position - 0x1C3415
{
	if (uParam0->f_34 != iParam1)
	{
		uParam0->f_34 = iParam1;
	}
}

int func_275(int iParam0)//Position - 0x1C3484
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_276()//Position - 0x1C34BD
{
	if (BitTest(Global_2621446, 21))
	{
		MISC::CLEAR_BIT(&Global_2621446, 21);
		MISC::CLEAR_BIT(&Global_2621446, 31);
		__LIB_0__.func_579(&(Global_2621446.f_5));
	}
}

void func_277(var uParam0)//Position - 0x1C3AAB
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = __LIB_0__.func_160();
}

int func_278(struct<3> Param0, struct<3> Param1)//Position - 0x1C3B1F
{
	if ((Param0.f_0 != Param1.f_0 || Param0.f_1 != Param1.f_1) || Param0.f_2 != Param1.f_2)
	{
		return 1;
	}
	return 0;
}

bool func_279()//Position - 0x1C3F65
{
	return BitTest(Global_2815059.f_5194, 0);
}

bool func_280()//Position - 0x1C4059
{
	return BitTest(Global_2621446, 21);
}

bool func_281(int iParam0)//Position - 0x1C434E
{
	return iParam0 == 40;
}

void func_282(var uParam0, int iParam1)//Position - 0x1C4369
{
	int iVar0;
	if (BitTest(Global_2621446, 6))
	{
		if (iParam1 == 1)
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if ((*uParam0)[iVar0] != 5)
				{
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0, (*uParam0)[iVar0]);
					(*uParam0)[iVar0] = 5;
				}
				iVar0++;
			}
		}
		MISC::CLEAR_BIT(&Global_2621446, 6);
	}
}

void func_283()//Position - 0x1C43C6
{
	if (BitTest(Global_2621446, 27))
	{
		MISC::CLEAR_BIT(&Global_2621446, 27);
	}
}

int func_284()//Position - 0x1C43EF
{
	if (BitTest(Global_4718592.f_23, 23))
	{
		return 1;
	}
	return 0;
}

void func_285(var uParam0)//Position - 0x1C4408
{
	uParam0->f_16 = 0;
	uParam0->f_16.f_1 = { 0f, 0f, 0f };
	uParam0->f_16.f_4 = { 0f, 0f, 0f };
	uParam0->f_16.f_7 = 0f;
}

void func_286()//Position - 0x1C4507
{
	if (!__LIB_0__.func_86(Global_2621446.f_83))
	{
		STREAMING::CLEAR_FOCUS();
		Global_2621446.f_83 = { 0f, 0f, 0f };
		Global_2621443 = 1;
	}
}

void func_287(int iParam0)//Position - 0x1C4533
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_2815059.f_4660), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2815059.f_4660), 8);
	}
}

int func_288()//Position - 0x1C4880
{
	if (Global_1640771.f_66 == 2)
	{
		return 1;
	}
	return 0;
}

void func_289(var uParam0)//Position - 0x1C4901
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_1063[iVar0 /*3*/] = { Var1 };
		uParam0->f_1160[iVar0 /*3*/] = { Var1 };
		uParam0->f_1257[iVar0 /*3*/] = { Var1 };
		uParam0->f_1354[iVar0 /*3*/] = { Var1 };
		iVar0++;
	}
	MISC::SET_BIT(&Global_2621446, 2);
}

bool func_290()//Position - 0x1C4961
{
	return Global_2714762.f_696;
}

int func_291()//Position - 0x1C62F0
{
	if ((__LIB_0__.func_3() == -1 || __LIB_0__.func_3() == 999) && !__LIB_0__.func_63() == 0)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)//Position - 0x1C9CA1
{
	if (__LIB_2__.func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535.f_3), iParam0))
	{
		return 1;
	}
	if (__LIB_2__.func_319(&(Global_1835502.f_389.f_3), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, bool bParam1)//Position - 0x1C9CDD
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if (NETWORK::NETWORK_IS_DOOR_NETWORKED(iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_DOOR(iParam0))
			{
				if (bParam1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0, false, false);
					return 1;
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, false, false);
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= 0.01f)
					{
						return 1;
					}
				}
			}
		}
		else if (bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0, false, false);
			return 1;
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 4, false, false);
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= 0.01f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_294(int iParam0)//Position - 0x1CA0DD
{
	int iVar0;
	iVar0 = iParam0;
	if (Global_1951109[iVar0] == 0)
	{
		Global_1951109[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_3__.func_545(iParam0), __LIB_3__.func_544(iParam0));
	}
}

void func_295(int iParam0, bool bParam1)//Position - 0x1CA232
{
	struct<2> Var0;
	Var0 = { __LIB_4__.func_744(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_38392[Var0.f_1]), Var0.f_0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_38392[Var0.f_1]), Var0.f_0);
	}
}

struct<5> func_296(int iParam0)//Position - 0x1CA29A
{
	struct<5> Var0;
	struct<3> Var1;
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		case 1:
			Var0 = { -1906.7858f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 2:
			Var0 = { 1399.973f, 1148.7559f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		case 3:
			Var0 = { -598.6379f, -1608.3986f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		case 6:
			Var0 = { 1274.9338f, -1714.7256f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		case 7:
			Var0 = { 147.433f, -2201.3704f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		case 9:
			Var0 = { -1425.5645f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		case 12:
			Var0 = { 173.1176f, -1003.2789f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 15:
			Var0 = { 1854.2538f, 3686.7385f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		case 17:
			Var0 = { 3522.8452f, 3707.9653f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		case 20:
			Var0 = { 2449.7852f, 4983.8247f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1087.1952f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 23:
			Var0 = { 982.233f, -2160.3816f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		case 21:
			Var0 = { 479.0568f, -1316.8253f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		case 24:
			Var0 = { -1005.6632f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		case 25:
			Var1 = { __LIB_1__.func_983(1, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		case 26:
			Var1 = { __LIB_1__.func_983(2, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		case 27:
			Var1 = { __LIB_1__.func_983(3, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		case 28:
			Var1 = { __LIB_1__.func_983(4, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		case 29:
			Var1 = { __LIB_1__.func_983(5, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		case 30:
			Var1 = { __LIB_1__.func_983(6, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		case 31:
			Var1 = { __LIB_1__.func_983(7, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		case 32:
			Var0 = { Global_1312193[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		case 33:
			Var1 = { __LIB_1__.func_983(35, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		case 34:
			Var1 = { __LIB_1__.func_983(36, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		case 35:
			Var1 = { __LIB_1__.func_983(37, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		case 36:
			Var1 = { __LIB_1__.func_983(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		case 37:
			Var1 = { __LIB_1__.func_983(39, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		case 38:
			Var1 = { __LIB_1__.func_983(40, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		case 39:
			Var1 = { __LIB_1__.func_983(41, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		case 40:
			Var1 = { __LIB_1__.func_983(42, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		case 41:
			Var1 = { __LIB_1__.func_983(43, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		case 57:
			Var0 = { -1287.6498f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		case 45:
			Var0 = { -16.295849f, -684.0385f, 33.508316f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		case 47:
			Var0 = { 199.97156f, -1018.95416f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		case 48:
			Var0 = { -1388.0013f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		case 83:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 84:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 85:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 86:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 87:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 88:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 89:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 90:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 91:
			Var1 = { __LIB_1__.func_983(87, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 92:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 93:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 94:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 95:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 96:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 97:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 98:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 99:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 100:
			Var1 = { __LIB_1__.func_983(88, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 101:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 102:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 103:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 104:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 105:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 106:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 107:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 108:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 109:
			Var1 = { __LIB_1__.func_983(89, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 110:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 111:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 112:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 113:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 114:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 115:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 116:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 117:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 118:
			Var1 = { __LIB_1__.func_983(90, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 119:
			Var1 = { __LIB_1__.func_983(91, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 120:
			Var1 = { __LIB_1__.func_983(97, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 121:
			Var1 = { __LIB_1__.func_983(103, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 122:
			Var1 = { __LIB_1__.func_983(104, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 123:
			Var1 = { __LIB_1__.func_983(105, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 124:
			Var1 = { __LIB_1__.func_983(106, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 125:
			Var1 = { __LIB_1__.func_983(107, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 126:
			Var1 = { __LIB_1__.func_983(108, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 127:
			Var1 = { __LIB_1__.func_983(109, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 128:
			Var1 = { __LIB_1__.func_983(110, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 129:
			Var1 = { __LIB_1__.func_983(111, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 130:
			Var1 = { __LIB_1__.func_983(112, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 131:
			Var1 = { __LIB_1__.func_983(113, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 132:
			Var1 = { __LIB_1__.func_983(114, 0) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 133:
			Var1 = { __LIB_1__.func_983(103, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 134:
			Var1 = { __LIB_1__.func_983(106, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 135:
			Var1 = { __LIB_1__.func_983(109, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 136:
			Var1 = { __LIB_1__.func_983(112, 1) };
			Var0 = { Var1 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 137:
			Var0 = { 938.3077f, -3196.1116f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		case 140:
			Var0 = { -1047.5997f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 150:
			Var0 = { -1266.8022f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 151:
			Var0 = { 974.9203f, -3000.0647f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		case 152:
			Var0 = { 969.5376f, -3000.4111f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 153:
			Var0 = { 1094.9966f, -3100.0117f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 154:
			Var0 = { 1059.9949f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 155:
			Var0 = { 1010.0083f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		case 164:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		case 165:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		case 166:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		case 167:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		case 168:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 169:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 170:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		case 171:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 172:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 173:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		case 174:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 175:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 176:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		case 177:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 178:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 179:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 180:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 181:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		case 182:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 183:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 184:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 185:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 186:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 187:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		case 188:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		case 189:
			Var0 = { 279.9322f, -1337.4902f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		case 190:
			Var0 = { -1604.6643f, -3012.5828f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 191:
		case 212:
			Var0 = { -1505.783f, -3012.5867f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		case 192:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		case 193:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 194:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
			break;
		case 195:
			Var0 = { 1049.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware02";
			Var0.f_4 = Var0.f_3;
			break;
		case 223:
			Var0 = { 2920f, 4470f, -100f };
			Var0.f_3 = "sf_dlc_warehouse_sec";
			Var0.f_4 = Var0.f_3;
			break;
		case 196:
			Var0 = { 1093.6f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware03";
			Var0.f_4 = Var0.f_3;
			break;
		case 197:
			Var0 = { 1009.5f, -3196.6f, -38.5f };
			Var0.f_3 = "bkr_biker_dlc_int_ware01";
			Var0.f_4 = Var0.f_3;
			break;
		case 198:
			Var0 = { 1100f, 245f, -49f };
			Var0.f_3 = "vw_dlc_casino_main";
			Var0.f_4 = Var0.f_3;
			break;
		case 199:
			Var0 = { 1380f, 200f, -50f };
			Var0.f_3 = "vw_dlc_casino_carpark";
			Var0.f_4 = Var0.f_3;
			break;
		case 200:
			Var0 = { 976.6364f, 70.29476f, 115.16413f };
			Var0.f_3 = "vw_dlc_casino_apart";
			Var0.f_4 = Var0.f_3;
			break;
		case 201:
			Var0 = { 1295f, 230f, -50f };
			Var0.f_3 = "vw_dlc_casino_garage";
			Var0.f_4 = Var0.f_3;
			break;
		case 202:
			Var0 = { 2479.3f, -273.9f, -58f };
			Var0.f_3 = "ch_DLC_Casino_Heist";
			Var0.f_4 = Var0.f_3;
			break;
		case 203:
			Var0 = { 2730f, -380f, -49f };
			Var0.f_3 = "ch_DLC_Arcade";
			Var0.f_4 = Var0.f_3;
			break;
		case 204:
			Var0 = { 2800f, -380f, -48.5f };
			Var0.f_3 = "ch_DLC_Plan";
			Var0.f_4 = Var0.f_3;
			break;
		case 205:
			Var0 = { 2497.7f, -312.8f, -69.9f };
			Var0.f_3 = "ch_DLC_Tunnel";
			Var0.f_4 = Var0.f_3;
			break;
		case 206:
			Var0 = { 2523.4f, -270f, -58.7f };
			Var0.f_3 = "ch_DLC_Casino_Back";
			Var0.f_4 = Var0.f_3;
			break;
		case 207:
			Var0 = { 2504.4f, -257.2f, -39.1f };
			Var0.f_3 = "ch_DLC_Casino_Hotel";
			Var0.f_4 = Var0.f_3;
			break;
		case 208:
			Var0 = { 2554f, -281.4f, -64.7f };
			Var0.f_3 = "ch_DLC_Casino_Loading";
			Var0.f_4 = Var0.f_3;
			break;
		case 209:
			Var0 = { 2488.3f, -267.4f, -70.6f };
			Var0.f_3 = "ch_DLC_Casino_Vault";
			Var0.f_4 = Var0.f_3;
			break;
		case 210:
			Var0 = { 2519.9f, -255.3f, -24.1f };
			Var0.f_3 = "ch_DLC_Casino_Utility";
			Var0.f_4 = Var0.f_3;
			break;
		case 211:
			Var0 = { 2572.9f, -253.4f, -64.7f };
			Var0.f_3 = "ch_dlc_casino_shaft";
			Var0.f_4 = Var0.f_3;
			break;
		case 213:
			Var0 = { 1103.5624f, -3000f, -40f };
			Var0.f_3 = "gr_grdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 214:
			Var0 = { 1210f, 1857f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		case 215:
			Var0 = { 1569f, -2130f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		case 216:
			Var0 = { 839f, 2176f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		case 217:
			Var0 = { 982f, -143f, -50f };
			Var0.f_3 = "tr_Tuner_MethLab_1";
			Var0.f_4 = Var0.f_3;
			break;
		case 218:
			Var0 = { -2000f, 1113.4f, 25.7f };
			Var0.f_3 = "tr_tuner_car_meet";
			Var0.f_4 = Var0.f_3;
			break;
		case 219:
			Var0 = { -1350f, 160f, -99.2f };
			Var0.f_3 = "tr_tuner_mod_garage";
			Var0.f_4 = Var0.f_3;
			break;
		case 220:
			Var0 = { 1.1f, -705.6f, 16.1f };
			Var0.f_3 = "finbank";
			Var0.f_4 = Var0.f_3;
			break;
		case 221:
			Var0 = { -1010f, -70f, -99.4f };
			Var0.f_3 = "sf_dlc_studio_sec";
			Var0.f_4 = Var0.f_3;
			break;
		case 222:
			Var0 = { 1550f, 250f, -50f };
			Var0.f_3 = "h4_dlc_int_02_h4";
			Var0.f_4 = Var0.f_3;
			break;
		case 224:
			Var0 = { -935.7f, -2992.2f, 13.9f };
			Var0.f_3 = "v_hanger";
			Var0.f_4 = Var0.f_3;
			break;
		case 225:
			Var0 = { 730f, -2990f, -39f };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		case 226:
			Var0 = { 152.3f, -1004.4f, -97.8f };
			Var0.f_3 = "v_motel_mp";
			Var0.f_4 = Var0.f_3;
			break;
		case 227:
			Var0 = { 170f, 5190f, 10f };
			Var0.f_3 = "xs_x18_int_mod2";
			Var0.f_4 = Var0.f_3;
			break;
			return Var0;
	}
}

int func_297()//Position - 0x1CD440
{
	if (__LIB_0__.func_791())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				if (__LIB_1__.func_590() >= 1600)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					return 1;
				}
			}
			return 0;
		}
	}
	return 1;
}

void func_298()//Position - 0x1CD4A3
{
	if (__LIB_1__.func_209())
	{
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTrevorIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGTrevorIn");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGMichaelIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGMichaelIn");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGFranklinIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGFranklinIn");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGTrevorOut"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGTrevorOut");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGMichaelOut"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGMichaelOut");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MenuMGFranklinOut"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MenuMGFranklinOut");
	}
}

void func_299()//Position - 0x1E4538
{
	if (!BitTest(Global_2621446, 22))
	{
		MISC::SET_BIT(&Global_2621446, 22);
	}
}

int func_300(int iParam0, bool bParam1)//Position - 0x1E4555
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 1) && !BitTest(Global_1853348[iVar0 /*834*/].f_833, 11))
	{
		if (bParam1)
		{
		}
		return 1;
	}
	if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 3))
	{
		if (bParam1)
		{
		}
		return 1;
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 4))
	{
		if (Global_2689235[iParam0 /*453*/].f_244 == -1)
		{
			if (bParam1)
			{
			}
			return 1;
		}
		else if (__LIB_0__.func_299(Global_2689235[iParam0 /*453*/].f_244) != 4)
		{
			if (bParam1)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__.func_509(iParam0, 13))
	{
		if (bParam1)
		{
		}
		return 1;
	}
	return 0;
}

void func_301(var uParam0)//Position - 0x1E46CA
{
	if (BitTest(uParam0->f_1.f_1, 1))
	{
		if (!BitTest(Global_2621446, 5))
		{
			MISC::SET_BIT(&Global_2621446, 5);
		}
	}
	else if (BitTest(Global_2621446, 5))
	{
		MISC::CLEAR_BIT(&Global_2621446, 5);
	}
}

void func_302(var uParam0, int iParam1)//Position - 0x1E48DD
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_2621446, 6))
	{
		if (iParam1 == 1)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				iVar0 = 3;
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1) != iVar0)
				{
					(*uParam0)[iVar1] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1);
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, iVar0);
				}
				iVar1++;
			}
		}
		MISC::SET_BIT(&Global_2621446, 6);
	}
}

void func_303(int iParam0)//Position - 0x1E4A7E
{
	int iVar0;
	if (BitTest(Global_2621446.f_67, 2))
	{
		if (iParam0 == 1)
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0, 3);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0, Global_2621446.f_58[iVar0]);
				iVar0++;
			}
			MISC::CLEAR_BIT(&(Global_2621446.f_67), 2);
		}
	}
}

bool func_304(var uParam0)//Position - 0x1E4B07
{
	return CAM::DOES_CAM_EXIST(uParam0->f_39);
}

int func_305(int iParam0, bool bParam1)//Position - 0x1E4B17
{
	int iVar0;
	if (iParam0 != __LIB_0__.func_160())
	{
		iVar0 = iParam0;
		if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 5))
		{
			if (bParam1)
			{
			}
			return 1;
		}
		if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 6))
		{
			if (bParam1)
			{
			}
			return 1;
		}
		if (BitTest(Global_2689235[iVar0 /*453*/].f_197, 7))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (bParam1)
				{
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_306()//Position - 0x1E4EE6
{
	return 1;
	if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 99)
	{
		return 0;
	}
	return 1;
}

int func_307(int iParam0)//Position - 0x1E50BE
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.912086f, 3818.2024f, 3654.002f, -26.373154f, 12.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.7842f, 3661.9458f, -15.336578f, 3823.8271f, 3654.6235f, -24.843678f, 13.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.8206f, -0.487321f, 3767.1792f, 3661.7053f, -32.335686f, 115f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_308(int iParam0)//Position - 0x1E516F
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.61975f, 36.637207f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.406733f, 14.144746f, -690.1883f, 38.617584f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.799168f, -15.31378f, -703.7052f, 38.08809f, 54.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.765583f, -693.0358f, 38.08809f, 24.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.704739f, -39.693424f, -690.2305f, 36.588085f, 17.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.588087f, -72.39151f, -683.4483f, 39.483612f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.637825f, -686.18097f, 30.588087f, -39.304077f, -662.2571f, 39.480827f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309()//Position - 0x1E534C
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(__LIB_1__.func_265(PLAYER::PLAYER_ID()), 3042.596f, -4667.9146f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.9146f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310()//Position - 0x1E53ED
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.10364f, 14.99213f };
		if (SYSTEM::VDIST2(__LIB_1__.func_265(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311()//Position - 0x1E54A3
{
	struct<3> Var0;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.8674f, -2016.5997f) + Vector(0f, 7773.9673f, 654.731f) };
		if (SYSTEM::VDIST2(__LIB_1__.func_265(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_312(var uParam0)//Position - 0x1E5525
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_313(int iParam0)//Position - 0x1E582D
{
	Global_2727821 = iParam0;
}

int func_314()//Position - 0x1E5857
{
	return Global_2714762.f_686;
}

bool func_315()//Position - 0x1E5B23
{
	return ((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) && Global_4718592.f_2 == 20);
}

int func_316(int iParam0)//Position - 0x1E5B99
{
	if (iParam0 > -1)
	{
		if (Global_4533364[iParam0 /*19*/].f_3 > -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_317()//Position - 0x1E5BBA
{
	return BitTest(Global_2815059.f_4660, 6);
}

int func_318(var uParam0)//Position - 0x1E5BCB
{
	if (uParam0->f_1.f_42 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(uParam0->f_1.f_42)))
		{
			if (Global_1853348[uParam0->f_1.f_42 /*834*/] == 1 || Global_1853348[uParam0->f_1.f_42 /*834*/] == 2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_319(int* iParam0)//Position - 0x1E5EDA
{
	MISC::CLEAR_BIT(iParam0, 7);
}

void func_320(var uParam0)//Position - 0x1E6013
{
	GRAPHICS::SET_TIMECYCLE_MODIFIER("spectator1");
	uParam0->f_1468 = 0;
	uParam0->f_1467 = 0;
	uParam0->f_1469 = 99;
}

bool func_321()//Position - 0x1E6EDE
{
	return BitTest(Global_2815059.f_4660, 8);
}

int func_322(struct<3> Param0, var uParam1, var uParam2, float fParam3)//Position - 0x1E6F80
{
	*fParam3 = 0f;
	if (SYSTEM::VDIST2(Param0, 368.8175f, -702.3699f, 16.7201f) < 10000f)
	{
		*uParam1 = { 411.5287f, -690.7221f, 34.686f };
		*uParam2 = { -7.6054f, 0.0001f, 153.5167f };
		*fParam3 = 36.7018f;
	}
	if (*fParam3 == 0f && SYSTEM::VDIST2(Param0, 310.2254f, 278.9754f, 90.1912f) < 10000f)
	{
		*uParam1 = { 278.9962f, 170.2905f, 107.3217f };
		*uParam2 = { 5.8711f, 0f, -38.8062f };
		*fParam3 = 35.6667f;
	}
	if (*fParam3 == 0f && SYSTEM::VDIST2(Param0, -1436.233f, -229.583f, 22.9699f) < 10000f)
	{
		*uParam1 = { -1441.5149f, -180.6728f, 51.606f };
		*uParam2 = { 1.151f, 0f, -132.2837f };
		*fParam3 = 40.6889f;
	}
	if (*fParam3 == 0f)
	{
		return 0;
	}
	return 1;
}

void func_323(int iParam0)//Position - 0x1E70DA
{
	Global_2621446.f_69.f_9 = iParam0;
}

void func_324(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)//Position - 0x1E70EC
{
	if (iParam5 == 0)
	{
		*uParam0 = { -481.1f, -660.1f, 33.8f };
		if (bParam6)
		{
			*uParam1 = { 15.2f, 0f, -150.8f };
			*uParam4 = 5300;
		}
		else
		{
			*uParam1 = { 4.1f, 0f, -150.8f };
			*uParam4 = 5500;
		}
		*uParam2 = { -481.1f, -660.1f, 33.8f };
		*uParam3 = { 52.7f, 0f, -150.8f };
	}
	else if (iParam5 == 1)
	{
		*uParam0 = { 290.9075f, -1318.5366f, 31.9878f };
		*uParam1 = { -3.5494f, 0f, 179.512f };
		*uParam2 = { 290.8927f, -1319.6411f, 39.1904f };
		*uParam3 = { -0.6983f, 0f, 171.6488f };
		*uParam4 = 2500;
	}
	else if (iParam5 == 2)
	{
		*uParam0 = { -637.165f, -1618.161f, 24.3726f };
		*uParam1 = { 15.7012f, 0f, -101.9149f };
		*uParam2 = { -636.4396f, -1616.5604f, 33.4539f };
		*uParam3 = { 31.1444f, 0f, -131.5474f };
		*uParam4 = 3000;
	}
}

void func_325(var uParam0)//Position - 0x1E7282
{
	if (!BitTest(uParam0->f_1, 16))
	{
		MISC::SET_BIT(&(uParam0->f_1), 16);
	}
	if (BitTest(uParam0->f_1, 17))
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 17);
	}
}

void func_326(struct<3> Param0)//Position - 0x1E73F7
{
	if (__LIB_0__.func_81())
	{
		Global_2621446.f_83 = { Param0 };
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		Global_2621443 = 1;
	}
}

int func_327(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1E7627
{
	*uParam3 = 0f;
	switch (iParam0)
	{
		case 39:
			*uParam1 = { -1136.7097f, -1964.5654f, 22.8574f };
			*uParam2 = { -6.3999f, 2.677f, 173.2871f };
			*uParam3 = 39.6765f;
			break;
		case 40:
			*uParam1 = { 717.5815f, -1103.5057f, 26.0196f };
			*uParam2 = { -3.2283f, 1.0608f, -8.8086f };
			*uParam3 = 37.1615f;
			break;
		case 41:
			*uParam1 = { -371.4004f, -147.4492f, 47.6023f };
			*uParam2 = { -14.72f, 3.5163f, -34.0187f };
			*uParam3 = 44.1101f;
			break;
		case 42:
			*uParam1 = { 136.2616f, 6628.962f, 39.4024f };
			*uParam2 = { -14.1496f, 4.8889f, 122.6043f };
			*uParam3 = 42.0108f;
			break;
		case 43:
			*uParam1 = { 1162.5962f, 2652.6826f, 46.3299f };
			*uParam2 = { -14.4757f, 8.7634f, -93.4153f };
			*uParam3 = 44.0285f;
			break;
		case 44:
			*uParam1 = { -196.3107f, -1295.0061f, 35.51368f };
			*uParam2 = { -4.539959f, 0f, 142.59618f };
			*uParam3 = 43.437363f;
			break;
	}
	if (*uParam3 == 0f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_328()//Position - 0x1E77B8
{
	return Global_2621446.f_83;
}

bool func_329()//Position - 0x1E77C8
{
	return !__LIB_0__.func_86(Global_2621446.f_83);
}

void func_330(int* iParam0)//Position - 0x1E78A3
{
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM(0);
	MISC::SET_BIT(iParam0, 2);
}

bool func_331(int iParam0)//Position - 0x1E7B40
{
	return iParam0 == 60;
}

bool func_332(int iParam0)//Position - 0x1E7B4D
{
	return iParam0 == 13;
}

int func_333()//Position - 0x1E7B5A
{
	if (__LIB_0__.func_81())
	{
		if (BitTest(Global_2621446, 5))
		{
			return 1;
		}
	}
	return 0;
}

void func_334(int* iParam0)//Position - 0x1E7BD5
{
	if (BitTest(*iParam0, 3))
	{
		MISC::CLEAR_BIT(iParam0, 3);
	}
}

void func_335(int iParam0)//Position - 0x1E7C9E
{
	Global_2621446.f_68 = iParam0;
}

int func_336()//Position - 0x1E7CAE
{
	return Global_2621446.f_68;
}

int func_337()//Position - 0x1E7D26
{
	return Global_2621446.f_69.f_1;
}

int func_338()//Position - 0x1E7D36
{
	return Global_2621446.f_69;
}

void func_339(var uParam0, int iParam1)//Position - 0x1E7D44
{
	if (uParam0->f_1464 != iParam1)
	{
		switch (iParam1)
		{
			case 0:
				__LIB_0__.func_730(4, 0, -1);
				break;
			case 1:
				__LIB_0__.func_730(4, 0, -1);
				break;
			case 2:
				__LIB_0__.func_730(4, 1, -1);
				break;
		}
		uParam0->f_1464 = iParam1;
	}
}

bool func_340(int iParam0)//Position - 0x1E8391
{
	return Global_1853348[iParam0 /*834*/].f_180 != __LIB_0__.func_160();
}

int func_341(int iParam0)//Position - 0x1E8799
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23992 /* Tunable: H2_STRIKE_TEAM_1_PRICE */;
		case 2:
			return Global_262145.f_23993 /* Tunable: H2_STRIKE_TEAM_2_PRICE */;
		case 3:
			return Global_262145.f_23994 /* Tunable: H2_STRIKE_TEAM_3_PRICE */;
		default:
	}
	return 9999999;
}

bool func_342()//Position - 0x1E8DD8
{
	return Global_2703735.f_1571.f_701 != 0;
}

bool func_343()//Position - 0x1E9E56
{
	return STREAMING::HAS_ANIM_DICT_LOADED("anim@amb@warehouse@laptop@");
}

int func_344(int iParam0)//Position - 0x1EB0CD
{
	switch (iParam0)
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

int func_345(int iParam0, bool bParam1)//Position - 0x1F442E
{
	if (__LIB_3__.func_925(PLAYER::PLAYER_ID()) || iParam0)
	{
		if (Global_1853190 != __LIB_0__.func_160())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1963794[Global_1853190]))
			{
				return Global_1640753;
			}
			return Global_1963794[Global_1853190];
		}
	}
	if (bParam1)
	{
		if (Global_1853191 != __LIB_0__.func_160())
		{
			return Global_1963794[Global_1853191];
		}
	}
	return -1;
}

int func_346()//Position - 0x20BD5B
{
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_4__.func_704()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_4__.func_704()) && ENTITY::IS_ENTITY_DEAD(__LIB_4__.func_704(), false))
	{
		return 0;
	}
	return 1;
}

void func_347(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x226D60
{
	(uParam1[(uParam0->f_20 - 1) /*11*/])->f_2[iParam4 /*4*/] = iParam5;
	(uParam1[(uParam0->f_20 - 1) /*11*/])->f_2[iParam4 /*4*/].f_3 = iParam3;
	(uParam1[(uParam0->f_20 - 1) /*11*/])->f_2[iParam4 /*4*/].f_2 = uParam2;
}

int func_348(bool bParam0)//Position - 0x23153F
{
	if (bParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(bParam0, 1, 1))
	{
		if (__LIB_3__.func_998(bParam0) && !__LIB_4__.func_374(bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_349(bool bParam0)//Position - 0x2489A1
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_3__.func_929(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_350()//Position - 0x24EF6F
{
	return Global_2789734;
}

void func_351(bool bParam0, var uParam1)//Position - 0x2673B0
{
	if (bParam0)
	{
		Global_1946250.f_4519 = uParam1;
	}
	else
	{
		Global_1946250.f_4519 = -1;
	}
}

void func_352(var uParam0)//Position - 0x26B5D5
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_353(bool bParam0)//Position - 0x26D468
{
	if (bParam0)
	{
		if (!BitTest(Global_1946250.f_2, 8))
		{
			MISC::SET_BIT(&(Global_1946250.f_2), 8);
		}
	}
	else if (BitTest(Global_1946250.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_2), 8);
	}
}

void func_354()//Position - 0x26DFBB
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
}

void func_355(int iParam0, int iParam1)//Position - 0x26E0AE
{
	int iVar0;
	int iVar1;
	__LIB_2__.func_747(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_1946250.f_2606[iVar0]), iVar1);
			return;
			break;
		case 1:
			MISC::SET_BIT(&(Global_1946250.f_2612[iVar0]), iVar1);
			return;
			break;
		case 2:
			MISC::SET_BIT(&(Global_1946250.f_2618[iVar0]), iVar1);
			return;
			break;
		case 3:
			MISC::SET_BIT(&(Global_1946250.f_3262[iVar0]), iVar1);
			return;
			break;
		case 4:
			MISC::SET_BIT(&(Global_1946250.f_3268[iVar0]), iVar1);
			return;
			break;
		case 5:
			MISC::SET_BIT(&(Global_1946250.f_3548[iVar0]), iVar1);
			return;
			break;
		case 6:
			MISC::SET_BIT(&(Global_1946250.f_3554[iVar0]), iVar1);
			return;
			break;
		case 7:
			MISC::SET_BIT(&(Global_1946250.f_3560[iVar0]), iVar1);
			return;
			break;
		case 8:
			MISC::SET_BIT(&(Global_1946250.f_3580[iVar0]), iVar1);
			return;
			break;
		case 9:
			MISC::SET_BIT(&(Global_1946250.f_3586[iVar0]), iVar1);
			return;
			break;
		case 10:
			MISC::SET_BIT(&(Global_1946250.f_3274[iVar0]), iVar1);
			return;
			break;
		case 11:
			MISC::SET_BIT(&(Global_1946250.f_3566[iVar0]), iVar1);
			return;
			break;
		case 12:
			MISC::SET_BIT(&(Global_1946250.f_3572[iVar0]), iVar1);
			return;
			break;
		case 13:
			MISC::SET_BIT(&(Global_1946250.f_3283[iVar0]), iVar1);
			return;
			break;
	}
}

bool func_356()//Position - 0x26E25D
{
	return BitTest(Global_2714762.f_2, 24);
}

void func_357(int iParam0)//Position - 0x2704C4
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0, 0);
	}
}

void func_358(bool bParam0)//Position - 0x270EB0
{
	if (bParam0)
	{
		if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 29))
		{
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 29);
		}
	}
	else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2, 29))
	{
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_2), 29);
	}
}

void func_359()//Position - 0x240B
{
	Global_1574839 = 1;
}

var func_360()//Position - 0x4E87
{
	return Global_23011.f_135;
}

void func_361(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xADDB
{
	StringCopy(&(Global_8143[iParam0 /*15*/]), sParam1, 16);
	Global_8143[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8143[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8143[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8143[iParam0 /*15*/].f_10 = iParam4;
	Global_8143[iParam0 /*15*/].f_11 = iParam5;
	Global_8143[iParam0 /*15*/].f_12 = iParam6;
	Global_8143[iParam0 /*15*/].f_13 = iParam7;
	Global_8143[iParam0 /*15*/].f_14 = iParam8;
	if (Global_8143[iParam0 /*15*/].f_12 == 0)
	{
		Global_8143[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_13 == 0)
	{
		Global_8143[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_8143[iParam0 /*15*/].f_14 == 0)
	{
		Global_8143[iParam0 /*15*/].f_14 = 0;
	}
}

void func_362(char* sParam0)//Position - 0xAE9F
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

int func_363()//Position - 0xB6A4
{
	if (Global_78319)
	{
		if (Global_1836487 || Global_1836488 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_364()//Position - 0xFC4D
{
	if (((Global_2787943 != 0 && Global_2787943 == Global_2787944) && Global_2787932 != 3) && Global_2787932 != 1)
	{
		return 0;
	}
	return 1;
}

void func_365(bool bParam0)//Position - 0x12145
{
	if (bParam0)
	{
		if (!BitTest(Global_1958711.f_2, 3))
		{
			Global_1958711.f_2 = 0;
			MISC::SET_BIT(&(Global_1958711.f_2), 3);
		}
	}
	else if (BitTest(Global_1958711.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1958711.f_2), 3);
	}
}

int func_366()//Position - 0x7D34
{
	int iVar0;
	char* sVar1;
	iVar0 = 1;
	sVar1 = __LIB_5__.func_810();
	STREAMING::REQUEST_ANIM_DICT(sVar1);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_367()//Position - 0x180D55
{
	return __LIB_4__.func_85(PLAYER::PLAYER_ID());
}

bool func_368(int iParam0)//Position - 0x1814CB
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1360.6123f, 161.89719f, -99.9951f, -1368.3901f, 161.89969f, -97.24433f, 7.25f, false, true, 0);
}

bool func_369(int iParam0)//Position - 0x1814FF
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1352.5779f, 161.77977f, -100.444336f, -1352.4767f, 168.37584f, -97.944336f, 6f, false, true, 0);
}

int func_370(int iParam0)//Position - 0x1815A2
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_480.f_1, 21);
	}
	return 0;
}

void func_371(int iParam0, int iParam1)//Position - 0x18F3D2
{
	struct<4> Var0;
	Var0.f_0 = -1388926377;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9999);
	if (!iParam1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, iParam1);
		}
	}
}

var func_372()//Position - 0x1B681A
{
	return Global_2815059.f_5121;
}

int func_373(int iParam0, bool bParam1)//Position - 0x1B90F0
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { __LIB_1__.func_267(iParam0) };
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

float func_374(bool bParam0, bool bParam1)//Position - 0x1B9420
{
	return SYSTEM::VDIST(__LIB_1__.func_265(bParam0), __LIB_1__.func_265(bParam1));
	return 0f;
}

void func_375(var uParam0)//Position - 0x1C7EEF
{
	uParam0->f_21.f_5 = 0;
	if (uParam0->f_19 != 8)
	{
		if (Global_4539961 > -1)
		{
			if (uParam0->f_21.f_6)
			{
				if (Global_4539961 == uParam0->f_1)
				{
					if (Global_4539961 == uParam0->f_1)
					{
						uParam0->f_21.f_5 = __LIB_3__.func_632(0);
					}
				}
			}
		}
	}
}

void func_376(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x1CA04D
{
	if (!__LIB_3__.func_982())
	{
		return;
	}
	STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_377()//Position - 0x1CB707
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__.func_657(iVar0, 1) && !__LIB_1__.func_104(iVar0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_378()//Position - 0x1CBDBD
{
	if (__LIB_4__.func_602(Global_4718592.f_116524))
	{
		return 1;
	}
	return 0;
}

void func_379()//Position - 0x1CC6CC
{
	MISC::SET_BIT(&Global_2714762, 2);
}

void func_380()//Position - 0x1CC6DD
{
	Global_2714762.f_713 = 1;
}

int func_381(int iParam0)//Position - 0x1CE255
{
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			return 17;
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			return 19;
			break;
		case joaat("WEAPON_APPISTOL"):
			return 23;
			break;
		case joaat("WEAPON_PISTOL50"):
			return 21;
			break;
		case joaat("WEAPON_SMG"):
			return 27;
			break;
		case joaat("WEAPON_MICROSMG"):
			return 25;
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			return 31;
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			return 33;
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			return 35;
			break;
		case joaat("WEAPON_MG"):
			return 37;
			break;
		case joaat("WEAPON_COMBATMG"):
			return 39;
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			return 43;
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			return 45;
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			return 49;
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			return 55;
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			return 53;
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			return 59;
			break;
		case joaat("WEAPON_RPG"):
			return 61;
			break;
		case joaat("WEAPON_MINIGUN"):
			return 63;
			break;
		case joaat("WEAPON_GRENADE"):
			return 65;
			break;
		case joaat("WEAPON_SMOKEGRENADE"):
			return 67;
			break;
		case joaat("WEAPON_STICKYBOMB"):
			return 69;
			break;
		case joaat("WEAPON_MOLOTOV"):
			return 71;
			break;
		case joaat("WEAPON_PETROLCAN"):
			return 74;
			break;
		case joaat("GADGET_PARACHUTE"):
			return 73;
			break;
		case joaat("WEAPON_KNIFE"):
			return 1;
			break;
		case joaat("WEAPON_NIGHTSTICK"):
			return 3;
			break;
		case joaat("WEAPON_HAMMER"):
			return 11;
			break;
		case joaat("WEAPON_BAT"):
			return 13;
			break;
		case joaat("WEAPON_CROWBAR"):
			return 5;
			break;
		case joaat("WEAPON_GOLFCLUB"):
			return 15;
			break;
		case joaat("WEAPON_ASSAULTMG"):
			return 41;
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			return 29;
			break;
		case joaat("WEAPON_ASSAULTSNIPER"):
			return 57;
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			return 47;
			break;
		case joaat("WEAPON_BOTTLE"):
			return 142;
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			return 348;
			break;
		case joaat("WEAPON_SNSPISTOL"):
			return 144;
			break;
		case joaat("WEAPON_HEAVYPISTOL"):
			return 346;
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			return 350;
			break;
		case joaat("WEAPON_GUSENBERG"):
			return 352;
			break;
		case joaat("WEAPON_VINTAGEPISTOL"):
			return 375;
			break;
		case joaat("WEAPON_DAGGER"):
			return 373;
			break;
		case joaat("WEAPON_MUSKET"):
			return 379;
			break;
		case joaat("WEAPON_FIREWORK"):
			return 377;
			break;
		case joaat("WEAPON_FLAREGUN"):
			return 367;
			break;
		case joaat("WEAPON_HEAVYSHOTGUN"):
			return 391;
			break;
		case joaat("WEAPON_MARKSMANRIFLE"):
			return 393;
			break;
		case joaat("WEAPON_PROXMINE"):
			return 397;
			break;
		case joaat("WEAPON_HOMINGLAUNCHER"):
			return 399;
			break;
		case joaat("WEAPON_HATCHET"):
			return 395;
			break;
		case joaat("WEAPON_COMBATPDW"):
			return 401;
			break;
		case joaat("WEAPON_KNUCKLE"):
			return 403;
			break;
		case joaat("WEAPON_MARKSMANPISTOL"):
			return 405;
			break;
		case joaat("WEAPON_MACHETE"):
			return 407;
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			return 409;
			break;
		case joaat("WEAPON_DBSHOTGUN"):
			return 414;
			break;
		case joaat("WEAPON_COMPACTRIFLE"):
			return 412;
			break;
		case joaat("WEAPON_FLASHLIGHT"):
			return 416;
			break;
		case joaat("WEAPON_REVOLVER"):
			return 419;
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			return 421;
			break;
		case joaat("WEAPON_AUTOSHOTGUN"):
			return 426;
			break;
		case joaat("WEAPON_MINISMG"):
			return 432;
			break;
		case joaat("WEAPON_COMPACTLAUNCHER"):
			return 430;
			break;
		case joaat("WEAPON_BATTLEAXE"):
			return 428;
			break;
		case joaat("WEAPON_PIPEBOMB"):
			return 434;
			break;
		case joaat("WEAPON_POOLCUE"):
			return 436;
			break;
		case joaat("WEAPON_WRENCH"):
			return 9;
			break;
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			return 31;
			break;
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			return 33;
			break;
		case joaat("WEAPON_COMBATMG_MK2"):
			return 39;
			break;
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			return 55;
			break;
		case joaat("WEAPON_PISTOL_MK2"):
			return 17;
			break;
		case joaat("WEAPON_SMG_MK2"):
			return 27;
			break;
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			return 47;
			break;
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			return 393;
			break;
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			return 43;
			break;
		case joaat("WEAPON_REVOLVER_MK2"):
			return 419;
			break;
		case joaat("WEAPON_SNSPISTOL_MK2"):
			return 144;
			break;
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			return 348;
			break;
		case joaat("WEAPON_DOUBLEACTION"):
			return 460;
			break;
		case joaat("WEAPON_RAYPISTOL"):
			return 468;
			break;
		case joaat("WEAPON_RAYCARBINE"):
			return 470;
			break;
		case joaat("WEAPON_RAYMINIGUN"):
			return 472;
			break;
		case joaat("WEAPON_STONE_HATCHET"):
			return 466;
			break;
		case joaat("WEAPON_NAVYREVOLVER"):
			return 476;
			break;
		case joaat("WEAPON_CERAMICPISTOL"):
			return 474;
			break;
		case joaat("WEAPON_GADGETPISTOL"):
			return 482;
			break;
		case joaat("WEAPON_MILITARYRIFLE"):
			return 484;
			break;
		case joaat("WEAPON_COMBATSHOTGUN"):
			return 480;
			break;
		case joaat("WEAPON_HEAVYRIFLE"):
			return 488;
			break;
		case joaat("WEAPON_EMPLAUNCHER"):
			return 486;
			break;
		case joaat("WEAPON_FERTILIZERCAN"):
			return 490;
			break;
		case joaat("WEAPON_STUNGUN_MP"):
			return 492;
			break;
		case joaat("WEAPON_METALDETECTOR"):
			return 494;
			break;
		case joaat("WEAPON_TACTICALRIFLE"):
			return 496;
			break;
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 498;
			break;
	}
	return 500;
}

float func_382(var uParam0, int iParam1)//Position - 0x1D2A7C
{
	float fVar0;
	fVar0 = 0f;
	if (!__LIB_5__.func_891(uParam0->f_5))
	{
		switch (uParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.25f;
						break;
					case 3:
						fVar0 = 0.32f;
						break;
					case 2:
						fVar0 = 0.36f;
						break;
					case 1:
						fVar0 = 0.42f;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.25f;
						break;
					case 3:
						fVar0 = 0.29f;
						break;
					case 2:
						fVar0 = 0.32f;
						break;
					case 1:
						fVar0 = 0.34f;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.25f;
						break;
					case 3:
						fVar0 = 0.28f;
						break;
					case 2:
						fVar0 = 0.31f;
						break;
					case 1:
						fVar0 = 0.34f;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.28f;
						break;
					case 3:
						fVar0 = 0.35f;
						break;
					case 2:
						fVar0 = 0.4f;
						break;
					case 1:
						fVar0 = 0.45f;
						break;
				}
				break;
		}
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.3f;
						break;
					case 3:
						fVar0 = 0.36f;
						break;
					case 2:
						fVar0 = 0.41f;
						break;
					case 1:
						fVar0 = 0.44f;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.25f;
						break;
					case 3:
						fVar0 = 0.29f;
						break;
					case 2:
						fVar0 = 0.3f;
						break;
					case 1:
						fVar0 = 0.32f;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.25f;
						break;
					case 3:
						fVar0 = 0.21f;
						break;
					case 2:
						fVar0 = 0.23f;
						break;
					case 1:
						fVar0 = 0.34f;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						fVar0 = 0.24f;
						break;
					case 3:
						fVar0 = 0.28f;
						break;
					case 2:
						fVar0 = 0.31f;
						break;
					case 1:
						fVar0 = 0.35f;
						break;
				}
				break;
			}
	}
	return fVar0;
}

int func_383(int iParam0, var uParam1)//Position - 0x1D4825
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__.func_889(iParam0);
	iVar1 = uParam1->f_16[iVar0];
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar1))
	{
		return 1;
	}
	NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iVar1);
	return 0;
}

bool func_384(int iParam0)//Position - 0x1FF2B4
{
	return (iParam0 != 0 && iParam0 != 1);
}

void func_385(var uParam0)//Position - 0x1FF3EF
{
	int iVar0;
	int iVar1;
	uParam0->f_1 = 0;
	uParam0->f_55 = 0;
	iVar1 = (uParam0->f_3 - 1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_3[iVar0]));
		}
		iVar0++;
	}
}

void func_386(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1FF913
{
	uParam0->f_52 = iParam1;
	uParam0->f_53 = iParam2;
	uParam0->f_54 = iParam3;
	*uParam0 = 1;
}

bool func_387(int iParam0)//Position - 0x20002D
{
	return (iParam0 < 48 && iParam0 >= 0);
}

void func_388(var uParam0)//Position - 0x20022A
{
	uParam0->f_2 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 500);
}

int func_389(var uParam0, int iParam1)//Position - 0x200241
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iParam1]))
	{
		return 1;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_54);
	iVar0 = StackVal;
	STREAMING::REQUEST_MODEL(iVar0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_52);
	Var1 = { StackVal, StackVal, StackVal };
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_53);
	Var2 = { StackVal, StackVal, StackVal };
	uParam0->f_3[iParam1] = OBJECT::CREATE_OBJECT(iVar0, Var1, false, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3[iParam1], true);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_3[iParam1], Var1, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_3[iParam1], Var2, 2, true);
	ENTITY::SET_ENTITY_ALPHA(uParam0->f_3[iParam1], 0, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	return 1;
}

void func_390(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x202509
{
	if (iParam3 == 0)
	{
		iParam3 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(__LIB_4__.func_938(iParam0, iParam2), __LIB_4__.func_937(iParam0, iParam2));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iParam3))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iParam3, sParam1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iParam3, sParam1);
			}
		}
	}
}

int func_391(int iParam0)//Position - 0x2122A1
{
	switch (iParam0)
	{
		case 867:
			return 91;
		case 868:
			return 92;
		case 869:
			return 93;
		case 870:
			return 94;
		case 871:
			return 95;
		case 872:
			return 96;
		case 873:
			return 97;
		case 874:
			return 98;
		case 875:
			return 99;
		case 876:
			return 100;
		case 877:
			return 101;
		case 878:
			return 102;
		default:
	}
	return -1;
}

int func_392(int iParam0, bool bParam1)//Position - 0x213221
{
	switch (iParam0)
	{
		case 145:
			return 882;
			break;
		case 147:
			return 757;
			break;
		case 149:
			return 765;
			break;
		case 150:
			return 766;
			break;
		case 151:
			return 767;
			break;
		case 152:
			return 768;
			break;
		case 153:
			return 769;
			break;
		case 0:
			return 845;
			break;
		case 1:
			return 846;
			break;
		case 2:
			return 847;
			break;
		case 3:
			return 848;
			break;
		case 4:
			return 849;
			break;
		case 5:
			return 850;
			break;
		case 6:
			return 851;
			break;
		case 7:
			return 852;
			break;
		case 8:
			return 853;
			break;
		case 9:
			return 854;
			break;
		case 10:
			return 855;
			break;
		case 11:
			return 856;
			break;
		case 12:
			return 857;
			break;
		case 13:
			return 858;
			break;
		case 14:
			return 859;
			break;
		case 15:
			return 860;
			break;
		case 16:
			return 861;
			break;
		case 17:
			return 862;
			break;
		case 18:
			return 863;
			break;
		case 19:
			return 864;
			break;
		case 20:
			return 865;
			break;
		case 21:
			return 866;
			break;
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
		case 70:
			return 1;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 4;
		case 74:
			return 5;
		case 75:
			return 6;
		case 76:
			return 7;
		case 77:
			return 8;
		case 78:
			return 9;
		case 79:
			return 10;
		case 80:
			return 11;
		case 155:
			if (bParam1)
			{
				return 796;
			}
			else
			{
				return 795;
			}
			break;
		case 156:
			if (bParam1)
			{
				return 798;
			}
			else
			{
				return 797;
			}
			break;
		case 157:
			if (bParam1)
			{
				return 800;
			}
			else
			{
				return 799;
			}
			break;
		case 158:
			if (bParam1)
			{
				return 802;
			}
			else
			{
				return 801;
			}
			break;
	}
	return 0;
}

int func_393()//Position - 0x213A2E
{
	return Global_1973079.f_63;
}

int func_394()//Position - 0x29608E
{
	return joaat("tr_prop_tr_plate_sweets_01a");
}

void func_395()//Position - 0x299810
{
	float fVar0;
	fVar0 = 0.7f;
	Local_225.f_2 = { 0f, 0f, (2.375f * fVar0) };
	Local_225.f_8 = { 1f, 1f, 1f };
	Local_225.f_11 = { ((10f * 0.8f) * fVar0), ((6f * 0.8f) * fVar0), (1f * fVar0) };
	Local_225.f_5 = { 0f, 0f, 0f };
	Local_225.f_1 = 0;
	Local_225.f_0 = 0;
}

int func_396()//Position - 0x7B84A
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!iVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_0__.func_154(iVar1, 0, 0))
			{
				if (__LIB_2__.func_69(iVar1, PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_397(struct<3> Param0, int iParam1, int iParam2)//Position - 0x83F26
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 999999.9f;
	if (__LIB_0__.func_154(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (__LIB_0__.func_154(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1))
					{
						if (!__LIB_2__.func_69(iVar3, iParam1))
						{
							if (Global_2680265.f_261[iVar2])
							{
								fVar1 = SYSTEM::VDIST(Global_2680265.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

void func_398(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x85A44
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			if (__LIB_0__.func_154(iVar1, 0, 1) && __LIB_0__.func_154(iParam2, 0, 1))
			{
				if (Global_2680265.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], *uParam0) < fParam1)
					{
						__LIB_1__.func_120(uParam0, Global_2680265.f_131[iVar0 /*3*/], fParam1, 1036831949, 0, 0);
					}
				}
				else if (SYSTEM::VDIST(__LIB_0__.func_85(iVar1), *uParam0) < fParam1)
				{
					__LIB_1__.func_120(uParam0, __LIB_0__.func_85(iVar1), fParam1, 1036831949, 0, 0);
				}
			}
			else if (Global_2680265.f_261[iVar0])
			{
				if (SYSTEM::VDIST(Global_2680265.f_131[iVar0 /*3*/], *uParam0) < fParam1)
				{
					__LIB_1__.func_120(uParam0, Global_2680265.f_131[iVar0 /*3*/], fParam1, 1036831949, 0, 0);
				}
			}
			else if (__LIB_0__.func_154(iVar1, 0, 1))
			{
				if (SYSTEM::VDIST(__LIB_0__.func_85(iVar1), *uParam0) < fParam1)
				{
					__LIB_1__.func_120(uParam0, __LIB_0__.func_85(iVar1), fParam1, 1036831949, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_399(int iParam0, bool bParam1)//Position - 0x875F0
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	fVar2 = 999999.9f;
	iVar3 = -1;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar4 = iVar0;
		if (!iParam0 == iVar4)
		{
			if (__LIB_0__.func_154(iVar4, bParam1, 1))
			{
				if (__LIB_2__.func_69(iParam0, iVar4))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar4), false) };
					fVar1 = SYSTEM::VDIST(Var5, Var6);
					if (fVar1 < fVar2)
					{
						iVar3 = iVar0;
						fVar2 = fVar1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_400()//Position - 0x8F478
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar3 = iVar2;
		if (__LIB_0__.func_154(iVar3, 1, 1))
		{
			if (!iVar3 == PLAYER::PLAYER_ID())
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar3))
				{
					if (__LIB_0__.func_723(PLAYER::PLAYER_ID(), iVar3, -2, 0))
					{
						Var0 = { Var0 + __LIB_0__.func_85(iVar3) };
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
		Var0 = { __LIB_0__.func_85(PLAYER::PLAYER_ID()) };
	}
	return Var0;
}

bool func_401(bool bParam0)//Position - 0x90FE5
{
	return __LIB_1__.func_113(PLAYER::PLAYER_ID(), bParam0);
}

int func_402()//Position - 0x91461
{
	if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT())
		{
			if (!__LIB_0__.func_695(PLAYER::PLAYER_ID(), 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_403(int iParam0)//Position - 0xA3DE
{
	if (!__LIB_0__.func_114() && func_108(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_404(var uParam0)//Position - 0x1B70E
{
	int iVar0;
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = __LIB_1__.func_184(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_43792[iVar0 /*32*/])
		{
			Global_43792[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_405()//Position - 0x1BA6A
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.5879f, -3013.3743f, -79.99994f, -1421.9183f, -3012.8044f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0)//Position - 0x6E1D1
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
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 276 && func_65(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	return 1;
}

int func_407(int iParam0)//Position - 0x7D086
{
	int iVar0;
	if (!__LIB_0__.func_657(iParam0, 1))
	{
		return __LIB_0__.func_160();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return __LIB_4__.func_714(iVar0, 0, 1, 0);
}

bool func_408(int iParam0)//Position - 0x94E57
{
	return __LIB_1__.func_38(__LIB_3__.func_803(iParam0));
}

int func_409(int iParam0)//Position - 0x9C837
{
	if (!iParam0 == __LIB_0__.func_160())
	{
		if (__LIB_4__.func_682(iParam0, 1))
		{
			return Global_2680265.f_818.f_11[__LIB_2__.func_191(iParam0)];
		}
	}
	return -1;
}

int func_410(int iParam0)//Position - 0x9CA88
{
	if (!__LIB_2__.func_432(PLAYER::PLAYER_ID(), __LIB_2__.func_433(iParam0)) && !__LIB_2__.func_432(__LIB_0__.func_582(), __LIB_2__.func_433(iParam0)))
	{
		return 1;
	}
	if ((__LIB_4__.func_973(0) && __LIB_2__.func_432(PLAYER::PLAYER_ID(), __LIB_2__.func_433(iParam0))) && !__LIB_2__.func_432(__LIB_0__.func_582(), __LIB_2__.func_433(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_411(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBDA8A
{
	StringCopy(sParam1, "CAR_MET_EXT_T" /* GXT: LS Car Meet */, 64);
	switch (__LIB_2__.func_399())
	{
		case 12:
		case 13:
		case 14:
		case 15:
			(*uParam2)[0] = "CAR_MET_E_O_1" /* GXT: Spectate Test Track */;
			break;
		default:
			(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
			break;
	}
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_412(int iParam0)//Position - 0xC2E90
{
	if (!__LIB_2__.func_590(PLAYER::PLAYER_ID(), __LIB_2__.func_591(iParam0)) && !__LIB_2__.func_590(__LIB_0__.func_582(), __LIB_2__.func_591(iParam0)))
	{
		return 1;
	}
	if ((__LIB_4__.func_973(0) && __LIB_2__.func_590(PLAYER::PLAYER_ID(), __LIB_2__.func_591(iParam0))) && !__LIB_2__.func_590(__LIB_0__.func_582(), __LIB_2__.func_591(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_413(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xC75D5
{
	StringCopy(sParam1, "AUTOS_PROP_ET" /* GXT: AUTO SHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_414(int iParam0)//Position - 0xC9E2C
{
	if (__LIB_2__.func_590(PLAYER::PLAYER_ID(), __LIB_2__.func_591(iParam0)) || (__LIB_4__.func_973(0) && __LIB_2__.func_590(__LIB_0__.func_582(), __LIB_2__.func_591(iParam0))))
	{
		return 1;
	}
	return 0;
}

void func_415(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)//Position - 0xCBD41
{
	iParam4 = (iParam4 - 1);
	if (*uParam2 != 9)
	{
		return;
	}
	if (iParam4 == 2 || iParam4 == 3)
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T2" /* GXT: SMOKING ROOM */, 64);
	}
	else
	{
		StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	}
	(*uParam2)[0] = "MUS_STIO__E_O_0" /* GXT: Exit */;
	(*uParam2)[2] = "MUS_STIO__E_O_1" /* GXT: Exit */;
	(*uParam2)[3] = "MUS_STIO__E_O_2" /* GXT: Exit to Roof */;
	(*uParam2)[4] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[5] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[5] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	*uParam3 = 6;
	if (iParam4 == 2)
	{
		(*uParam2)[0] = "MUS_STIO__E_O_3" /* GXT: Enter */;
	}
}

void func_416(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xCDB91
{
	StringCopy(sParam1, "MUS_STIO_EXT_T" /* GXT: RECORD A STUDIOS */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_417(int iParam0)//Position - 0xDCDD8
{
	if (__LIB_4__.func_682(iParam0, 1))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_429;
	}
	return -1;
}

int func_418()//Position - 0xDF034
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__.func_160();
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__.func_121(iVar1))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false);
			if (__LIB_0__.func_121(iVar2) && PED::IS_PED_A_PLAYER(iVar2))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			}
		}
	}
	if (iVar0 == __LIB_0__.func_160() && __LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = __LIB_0__.func_582();
	}
	if (iVar0 != __LIB_0__.func_160() && PLAYER::PLAYER_ID() != iVar0)
	{
		return Global_2703735.f_402[iVar0];
	}
	return Global_2815059.f_324;
}

int func_419(int iParam0, int iParam1)//Position - 0xE5505
{
	int iVar0;
	int iVar1;
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (__LIB_2__.func_730(iVar1))
		{
			if (iParam1 == iVar1)
			{
				if (!__LIB_4__.func_682(iVar1, 1) || __LIB_2__.func_192(iVar1))
				{
					if (!__LIB_4__.func_1(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_420(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xEABFC
{
	StringCopy(sParam1, "CAS_NCLB_EXT_T" /* GXT: THE MUSIC LOCKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_421(int iParam0)//Position - 0xF3E09
{
	if (__LIB_2__.func_851(PLAYER::PLAYER_ID(), __LIB_2__.func_852(iParam0)))
	{
		return 1;
	}
	if (__LIB_4__.func_973(1) && __LIB_2__.func_851(__LIB_0__.func_582(), __LIB_2__.func_852(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_422(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0xFCA9F
{
	StringCopy(sParam1, "ARC_PROP_ET" /* GXT: ARCADE */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_423(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x10AE68
{
	StringCopy(sParam1, "CASINO_APT_ENT_T", 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_424(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x11A849
{
	StringCopy(sParam1, "ARENA_ENT_T" /* GXT: ARENA WORKSHOP */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

void func_425(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x13B48A
{
	if (__LIB_2__.func_399() == 2)
	{
		StringCopy(sParam1, "CLUB_TITLE" /* GXT: NIGHTCLUB */, 64);
	}
	else
	{
		StringCopy(sParam1, "HUB_TITLE_2" /* GXT: NIGHTCLUB GARAGE */, 64);
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_426(int iParam0, int iParam1)//Position - 0x13B628
{
	int iVar0;
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_118(iParam0, __LIB_3__.func_103(iParam1)) && !__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(iParam0, 0))
			{
				iVar0 = __LIB_3__.func_803(iParam0);
				switch (iVar0)
				{
					case 192:
					case 190:
					case 167:
					case 168:
					case 178:
					case 188:
					case 225:
					case 226:
					case 229:
					case 230:
					case 233:
						return 0;
					}
				default:
			}
			return 1;
		}
	}
	return 0;
}

int func_427(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x142EDA
{
	if (__LIB_3__.func_165() || __LIB_3__.func_184())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 6f, 0.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 5f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 5f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 3f, 1.35f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 3f, -0.65f, 1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

void func_428(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x14345B
{
	switch (iParam0)
	{
		case 101:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_429(int iParam0, var uParam1)//Position - 0x1593E2
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__.func_706())
	{
		if (__LIB_0__.func_175() || __LIB_2__.func_500())
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (BitTest(Global_1946250.f_506, 11))
	{
		if (!__LIB_0__.func_706())
		{
			return 1;
		}
		return 0;
	}
	if (!BitTest(Global_1946250.f_4523, 16))
	{
		if (Global_2714762.f_15 > -1)
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 1;
	}
	bVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (Global_1946250.f_506 == 0)
	{
		return 1;
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		bVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	}
	if (bVar0 != __LIB_0__.func_160())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
		{
			return 1;
		}
		if (__LIB_3__.func_282(bVar0) != __LIB_0__.func_631(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
	}
	if (bVar0 != __LIB_0__.func_160())
	{
		if (__LIB_3__.func_803(bVar0) == 233)
		{
			bVar1 = true;
		}
	}
	if (PLAYER::PLAYER_ID() != __LIB_0__.func_160())
	{
		if (__LIB_2__.func_476(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 12);
			return 1;
		}
	}
	if (!BitTest(Global_1946250.f_506, 30))
	{
		if (!__LIB_1__.func_264(bVar0, 0, 1))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 6);
			return 1;
		}
		if (__LIB_3__.func_282(bVar0) != __LIB_0__.func_631(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
		if (bVar1)
		{
			if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_3__.func_898(PLAYER::PLAYER_ID(), bVar0))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 7);
			}
			else
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 8);
			}
			return !BitTest(Global_1946250.f_506, 9);
		}
		else if (__LIB_4__.func_682(bVar0, 0))
		{
			MISC::SET_BIT(&(Global_1946250.f_506), 10);
			return 1;
		}
	}
	else if (bVar1)
	{
		return !BitTest(Global_1946250.f_506, 9);
	}
	else
	{
		if (__LIB_3__.func_282(bVar0) != __LIB_0__.func_631(iParam0))
		{
			MISC::SET_BIT(&Global_1946250, 18);
			return 1;
		}
		if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	if ((BitTest(Global_1946250.f_506, 9) && !bVar1) && bVar0 != __LIB_0__.func_160())
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_506), 9);
	}
	return 0;
}

void func_430(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x159A42
{
	switch (iParam0)
	{
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			StringCopy(sParam1, "BASE_TITLE" /* GXT: FACILITY */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_431(int iParam0, int iParam1)//Position - 0x159BC1
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_274(iParam0, __LIB_0__.func_631(iParam1)) && !__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(iParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_432(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1601C4
{
	switch (iParam0)
	{
		case 88:
			StringCopy(sParam1, "CHR17_TITLE" /* GXT: AVENGER */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_433(int iParam0, var uParam1)//Position - 0x16D2EF
{
	bool bVar0;
	bool bVar1;
	if (iParam0 != -1)
	{
		if (!NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			return 1;
		}
		bVar0 = PLAYER::PLAYER_ID();
		bVar1 = false;
		if (Global_1946250.f_506 == 0)
		{
			return 1;
		}
		if (!BitTest(Global_1946250.f_506, 30))
		{
			bVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
		}
		if (bVar0 != __LIB_0__.func_160())
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar0))
			{
				return 1;
			}
			if (__LIB_3__.func_404(bVar0) != __LIB_0__.func_625(iParam0))
			{
				MISC::SET_BIT(&Global_1946250, 18);
				return 1;
			}
			if (__LIB_3__.func_803(bVar0) == 229 || __LIB_3__.func_803(bVar0) == 230)
			{
				bVar1 = true;
			}
		}
		if (!BitTest(Global_1946250.f_506, 30))
		{
			if (!__LIB_1__.func_264(bVar0, 0, 1))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 6);
				return 1;
			}
			if (__LIB_3__.func_404(bVar0) != __LIB_0__.func_625(iParam0))
			{
				MISC::SET_BIT(&Global_1946250, 18);
				return 1;
			}
			if (bVar1)
			{
				if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_3__.func_898(PLAYER::PLAYER_ID(), bVar0))
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 7);
					if (__LIB_3__.func_803(bVar0) == 230)
					{
						MISC::SET_BIT(&(Global_1946250.f_1), 14);
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1946250.f_506), 8);
				}
				return !BitTest(Global_1946250.f_506, 9);
			}
			else if (__LIB_4__.func_682(bVar0, 0))
			{
				MISC::SET_BIT(&(Global_1946250.f_506), 10);
				return 1;
			}
		}
		else if (bVar1)
		{
			return !BitTest(Global_1946250.f_506, 9);
		}
		else
		{
			if (__LIB_3__.func_404(bVar0) != __LIB_0__.func_625(iParam0))
			{
				MISC::SET_BIT(&Global_1946250, 18);
				return 1;
			}
			if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
		}
		if ((BitTest(Global_1946250.f_506, 9) && !bVar1) && bVar0 != __LIB_0__.func_160())
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_506), 9);
		}
	}
	return 0;
}

void func_434(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x16D73E
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			StringCopy(sParam1, "HANGAR_TITLE" /* GXT: HANGAR */, 64);
			break;
	}
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam3)[1] = 4;
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_435()//Position - 0x16EC72
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 229 && func_65(PLAYER::PLAYER_ID()) == 26)
	{
		return 1;
	}
	return 0;
}

Vector3 func_436(var uParam0)//Position - 0x16F731
{
	if (Global_1853185 != __LIB_0__.func_160())
	{
		if (Global_1853185 != PLAYER::PLAYER_ID())
		{
			return Global_2689235[Global_1853185 /*453*/].f_318.f_11;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_137()) && !ENTITY::IS_ENTITY_DEAD(__LIB_6__.func_137(), false))
		{
			return ENTITY::GET_ENTITY_COORDS(__LIB_6__.func_137(), true);
		}
		else
		{
			return Global_2689235[Global_1853185 /*453*/].f_318.f_11;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_137()) && !ENTITY::IS_ENTITY_DEAD(__LIB_6__.func_137(), false))
	{
		return ENTITY::GET_ENTITY_COORDS(__LIB_6__.func_137(), true);
	}
	else if (__LIB_4__.func_923(__LIB_6__.func_137(), 1, 0) != __LIB_0__.func_160())
	{
		return Global_2689235[__LIB_4__.func_923(__LIB_6__.func_137(), 1, 0) /*453*/].f_318.f_11;
	}
	return 0f, 0f, 0f;
}

Vector3 func_437(int iParam0)//Position - 0x16F81B
{
	switch (iParam0)
	{
		case 82:
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_137()) && !ENTITY::IS_ENTITY_DEAD(__LIB_6__.func_137(), false))
			{
				if (ENTITY::GET_ENTITY_MODEL(__LIB_6__.func_137()) == joaat("trailerlarge"))
				{
					return ENTITY::GET_ENTITY_COORDS(__LIB_6__.func_137(), true);
				}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_438(int iParam0)//Position - 0x171226
{
	if ((MISC::GET_FRAME_COUNT() % 60) == 0 || iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_137()) && !ENTITY::IS_ENTITY_DEAD(__LIB_6__.func_137(), false))
		{
			if (__LIB_4__.func_923(__LIB_6__.func_137(), 1, 0) == PLAYER::PLAYER_ID())
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_11 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__.func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__.func_137()), 2f, -17f, 0f) };
			}
		}
	}
}

void func_439(int iParam0, var uParam1)//Position - 0x1712C0
{
	var uVar0;
	switch (iParam0)
	{
		case 82:
			if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__.func_137()) && !ENTITY::IS_ENTITY_DEAD(__LIB_6__.func_137(), false))
			{
				if (ENTITY::GET_ENTITY_MODEL(__LIB_6__.func_137()) == joaat("trailerlarge"))
				{
					*uParam1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(__LIB_6__.func_137(), true), ENTITY::GET_ENTITY_HEADING(__LIB_6__.func_137()), 0f, -8.9f, -1.5f) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar0, false, false))
					{
						*uParam1 = { *uParam1, uParam1->f_1, uVar0 };
					}
				}
			}
			break;
	}
}

int func_440()//Position - 0x188D24
{
	if (Global_1958740 && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || __LIB_0__.func_155(0)))
	{
		return 0;
	}
	if (__LIB_4__.func_735(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_4__.func_721(PLAYER::PLAYER_ID()) == 124 || __LIB_3__.func_900(__LIB_4__.func_721(PLAYER::PLAYER_ID()), 17)) || __LIB_3__.func_900(__LIB_4__.func_721(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	if ((__LIB_3__.func_870(PLAYER::PLAYER_ID()) || __LIB_5__.func_610(PLAYER::PLAYER_ID())) || __LIB_4__.func_722(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_4__.func_15(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__.func_259(PLAYER::PLAYER_ID()) == 124 || __LIB_3__.func_900(__LIB_1__.func_259(PLAYER::PLAYER_ID()), 23))
		{
			return 0;
		}
	}
	return 1;
}

void func_441(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x18A649
{
	StringCopy(sParam1, "BUNKER_TITLE" /* GXT: BUNKER */, 64);
	(*uParam2)[0] = "IEWHS_ENTR_ALONE" /* GXT: Enter alone */;
	(*uParam3)[0] = 3;
	if (__LIB_4__.func_682(PLAYER::PLAYER_ID(), 1) && __LIB_1__.func_359(PLAYER::PLAYER_ID()))
	{
		(*uParam2)[1] = "BWH_ENTRM_GANG" /* GXT: Enter with nearby MC members */;
	}
	else
	{
		(*uParam2)[1] = "PROP_HEI_E_3" /* GXT: Enter With Nearby Organization Members */;
	}
	(*uParam2)[2] = "PROP_HEI_E_2" /* GXT: Enter With Nearby Friends and Crew */;
	(*uParam3)[1] = 4;
	(*uParam3)[2] = 4;
	*uParam4 = 3;
}

int func_442()//Position - 0x18BA20
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 225 && func_65(PLAYER::PLAYER_ID()) == 0)
	{
		return 1;
	}
	return 0;
}

bool func_443()//Position - 0x1B54AE
{
	return BitTest(Global_1946250.f_3, 19);
}

int func_444(int iParam0)//Position - 0x1B54BF
{
	if (iParam0 != __LIB_0__.func_160())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_293, 22);
	}
	return 0;
}

int func_445(int iParam0)//Position - 0x1B567B
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_1__.func_264(iParam0, 1, 1))
	{
		if (__LIB_3__.func_998(iParam0) && !__LIB_4__.func_735(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446()//Position - 0x1DE854
{
	int iVar0;
	bool bVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_1__.func_264(bVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(bVar1))
		{
			if (bVar1 != PLAYER::PLAYER_ID())
			{
				if ((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter_left", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@male@", "computer_idle", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(bVar1), "anim@scripted@submarine@ig28_submarine_turret_control@heeled@", "computer_idle", 3)) || __LIB_4__.func_465(PLAYER::GET_PLAYER_PED(bVar1), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar1), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true);
					if (fVar2 < 2f)
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

int func_447(int iParam0)//Position - 0x6A41
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_448(int iParam0)//Position - 0x6A87
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_264(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_449(int* iParam0, int* iParam1, bool bParam2)//Position - 0x7258
{
	int iVar0;
	if (bParam2)
	{
		iVar0 = iParam0->f_21;
	}
	else
	{
		iVar0 = iParam0->f_20;
	}
	if (iVar0 == 5)
	{
		if (BitTest(*iParam0, 0))
		{
			MISC::CLEAR_BIT(iParam0, 0);
		}
	}
	if (bParam2)
	{
		iParam1->f_13 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(iParam1, 10);
	}
	else
	{
		iParam1->f_12 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(iParam1, 9);
	}
}

void func_450(var uParam0, int iParam1, bool bParam2)//Position - 0x73E6
{
	if (bParam2)
	{
		uParam0->f_21 = iParam1;
	}
	else
	{
		uParam0->f_20 = iParam1;
	}
}

int func_451(bool bParam0)//Position - 0x8066
{
	if (bParam0 > -1)
	{
		if (Global_1853348[bParam0 /*834*/].f_267.f_32 != -1 || BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 2))
		{
			return 1;
		}
	}
	return 0;
}

bool func_452(bool bParam0)//Position - 0x80EB
{
	return Global_2689235[bParam0 /*453*/].f_436.f_1;
}

bool func_453(bool bParam0)//Position - 0x81C8
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_36.f_18, 14);
}

int func_454(bool bParam0)//Position - 0x828D
{
	int iVar0;
	iVar0 = bParam0;
	if (iVar0 == -1)
	{
		return 0;
	}
	return BitTest(Global_1853348[iVar0 /*834*/].f_36.f_18, 20);
}

int func_455(bool bParam0, bool bParam1)//Position - 0x82B3
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset"))
		{
			if (BitTest(DECORATOR::DECOR_GET_INT(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(bParam0), "MPBitset"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_456(bool bParam0)//Position - 0x837D
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_139, 6);
}

void func_457(int* iParam0, bool bParam1, bool bParam2)//Position - 0x884A
{
	if (bParam2)
	{
		if (bParam1)
		{
			iParam0->f_2 = (iParam0->f_2 + 4f);
		}
		else
		{
			iParam0->f_2 = (iParam0->f_2 - 4f);
		}
		if (iParam0->f_2 >= 0f)
		{
			iParam0->f_2 = 0f;
		}
		if (iParam0->f_2 <= -36f)
		{
			iParam0->f_2 = -36f;
		}
	}
	else
	{
		if (bParam1)
		{
			iParam0->f_1 = (iParam0->f_1 + 4f);
		}
		else
		{
			iParam0->f_1 = (iParam0->f_1 - 4f);
		}
		if (iParam0->f_1 >= 0f)
		{
			iParam0->f_1 = 0f;
		}
		if (iParam0->f_1 <= -36f)
		{
			iParam0->f_1 = -36f;
		}
	}
}

float func_458(int* iParam0, var uParam1)//Position - 0x88DA
{
	if (BitTest(*uParam1, 3))
	{
		return iParam0->f_2;
	}
	else
	{
		return iParam0->f_1;
	}
	return 0f;
}

void func_459(int* iParam0, int iParam1, bool bParam2)//Position - 0x896F
{
	if (bParam2)
	{
		iParam0->f_23 = iParam1;
	}
	else
	{
		iParam0->f_22 = iParam1;
	}
}

int func_460(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8B9E
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1853348[bParam0 /*834*/].f_267.f_30, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_461(bool bParam0)//Position - 0x12BB5
{
	return Global_1853348[bParam0 /*834*/].f_192;
}

char* func_462(int iParam0)//Position - 0x257F4
{
	switch (iParam0)
	{
		case 0:
			return "MP_SETTING_SPAWN_NULL";
		case 1:
			return "MP_SETTING_SPAWN_PROPERTY";
		case 2:
			return "MP_SETTING_SPAWN_LAST_POSITION";
		case 3:
			return "MP_SETTING_SPAWN_GARAGE";
		case 4:
			return "MP_SETTING_SPAWN_RANDOM";
		case 5:
			return "MP_SETTING_SPAWN_PRIVATE_YACHT";
		case 6:
			return "MP_SETTING_SPAWN_OFFICE";
		case 7:
			return "MP_SETTING_SPAWN_CLUBHOUSE";
		case 8:
			return "MP_SETTING_SPAWN_IE_WAREHOUSE";
		case 9:
			return "MP_SETTING_SPAWN_BUNKER";
		case 10:
			return "MP_SETTING_SPAWN_HANGAR";
		case 11:
			return "MP_SETTING_SPAWN_DEFUNCT_BASE";
		case 12:
			return "MP_SETTING_SPAWN_NIGHTCLUB";
		case 13:
			return "MP_SETTING_SPAWN_ARENA_GARAGE";
		case 14:
			return "MP_SETTING_SPAWN_CASINO_APARTMENT";
		case 15:
			return "MP_SETTING_SPAWN_ARCADE";
		case 16:
			return "MP_SETTING_SPAWN_SUBMARINE";
		case 17:
			return "MP_SETTING_SPAWN_CAR_MEET";
		case 18:
			return "MP_SETTING_SPAWN_AUTO_SHOP";
		case 19:
			return "MP_SETTING_SPAWN_FIXER_HQ";
		case 20:
			return "MP_SETTING_SPAWN_MAX";
		default:
	}
	return "";
}

void func_463(int* iParam0, int iParam1)//Position - 0x47136
{
	iParam0->f_8 = iParam1;
}

void func_464(int* iParam0, int iParam1)//Position - 0x47144
{
	iParam0->f_25 = iParam1;
}

int func_465(int iParam0)//Position - 0x4747D
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
	}
	return 0;
}

void func_466(int* iParam0)//Position - 0x477FF
{
	if (BitTest(*iParam0, 5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
		{
			if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(iParam0->f_4)))
			{
				HUD::SET_TEXT_RENDER_ID(iParam0->f_2);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
			}
		}
	}
}

void func_467(int* iParam0, int iParam1)//Position - 0x47BFA
{
	if (BitTest(iParam0->f_2480, 0))
	{
		return;
	}
	CAM::DO_SCREEN_FADE_IN(iParam1);
	MISC::CLEAR_BIT(&(iParam0->f_28), 2);
}

void func_468(int* iParam0)//Position - 0x515F8
{
	if (iParam0->f_9 != -1)
	{
		AUDIO::STOP_SOUND(iParam0->f_9);
		AUDIO::RELEASE_SOUND_ID(iParam0->f_9);
		iParam0->f_9 = -1;
	}
}

void func_469(int* iParam0)//Position - 0x5161D
{
	if (iParam0->f_10 != -1)
	{
		AUDIO::STOP_SOUND(iParam0->f_10);
		AUDIO::RELEASE_SOUND_ID(iParam0->f_10);
		iParam0->f_10 = -1;
	}
}

void func_470(int iParam0, int* iParam1)//Position - 0x51D13
{
	if (iParam0 != iParam1->f_1)
	{
		iParam1->f_1 = iParam0;
	}
}

bool func_471(int iParam0, int* iParam1)//Position - 0x51D3A
{
	return iParam1->f_1 == iParam0;
}

void func_472()//Position - 0x52018
{
	__LIB_0__.func_579(&(Global_1952191.f_5384));
	__LIB_0__.func_580(&(Global_1952191.f_5384), 0, 0);
}

void func_473(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)//Position - 0x521A9
{
	struct<10> Var0;
	Var0.f_3 = -1;
	Var0.f_0 = -1390976345;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (bParam6 < 0)
	{
		Var0.f_2 = PLAYER::PLAYER_ID();
	}
	else
	{
		Var0.f_2 = PLAYER::INT_TO_PLAYERINDEX(bParam6);
	}
	Var0.f_5 = uParam1;
	Var0.f_7 = iParam4;
	Var0.f_8 = iParam5;
	Var0.f_3 = iParam3;
	Var0.f_4 = iParam2;
	Var0.f_6 = iParam8;
	if (bParam7)
	{
		MISC::SET_BIT(&(Var0.f_9), 0);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(Var0.f_9), 1);
	}
	if (!iParam0 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 10, iParam0);
	}
}

bool func_474(int iParam0)//Position - 0x52361
{
	return (iParam0 >= 867 && iParam0 <= 878);
}

bool func_475(int iParam0)//Position - 0x52410
{
	return (*iParam0 >= 675 && *iParam0 <= 683);
}

bool func_476(int iParam0)//Position - 0x5242B
{
	return (iParam0 >= 845 && iParam0 <= 866);
}

bool func_477(int iParam0)//Position - 0x52476
{
	return (*iParam0 >= 377 && *iParam0 <= 381);
}

void func_478(bool bParam0, int iParam1, int iParam2)//Position - 0x525DC
{
	struct<15> Var0;
	Var0.f_5 = 1;
	Var0.f_14 = -1;
	Var0.f_0 = -654484870;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = bParam0;
	Var0.f_2 = iParam1;
	Var0.f_5 = 0;
	Var0.f_13 = 0;
	if (!iParam2 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 15, iParam2);
	}
}

int func_479(int iParam0)//Position - 0x52A9E
{
	switch (*iParam0)
	{
		case 714:
			return 128;
		case 715:
			return 129;
		case 716:
			return 130;
		case 717:
			return 131;
		case 718:
			return 132;
		case 719:
			return 133;
		case 720:
			return 128;
		case 721:
			return 129;
		case 722:
			return 130;
		case 723:
			return 131;
		case 724:
			return 132;
		case 725:
			return 133;
		case 726:
			return 128;
		case 727:
			return 129;
		case 728:
			return 130;
		case 729:
			return 131;
		case 730:
			return 132;
		case 731:
			return 133;
		default:
	}
	return -1;
}

int func_480(int iParam0)//Position - 0x52B75
{
	switch (*iParam0)
	{
		case 704:
			return 123;
		case 705:
			return 123;
		case 710:
			return 123;
		case 711:
			return 123;
		case 712:
			return 123;
		case 713:
			return 124;
		default:
	}
	return -1;
}

int func_481(int iParam0)//Position - 0x52BC8
{
	switch (*iParam0)
	{
		case 684:
			return 102;
		case 685:
			return 103;
		case 686:
			return 104;
		case 687:
			return 105;
		case 688:
			return 106;
		case 689:
			return 107;
		case 690:
			return 108;
		case 691:
			return 109;
		case 692:
			return 110;
		case 693:
			return 111;
		default:
	}
	return -1;
}

int func_482(int iParam0)//Position - 0x52C47
{
	switch (*iParam0)
	{
		case 675:
			return 89;
		case 676:
			return 90;
		case 677:
			return 91;
		case 678:
			return 92;
		case 679:
			return 93;
		case 680:
			return 94;
		case 681:
			return 95;
		case 682:
			return 96;
		case 683:
			return 97;
		default:
	}
	return -1;
}

int func_483(int iParam0)//Position - 0x52CBB
{
	switch (*iParam0)
	{
		case 377:
			return 83;
		case 378:
			return 84;
		case 379:
			return 85;
		case 380:
			return 86;
		case 381:
			return 87;
		case 761:
			return 83;
		case 762:
			return 84;
		default:
	}
	return -1;
}

int func_484(int iParam0)//Position - 0x52D19
{
	switch (*iParam0)
	{
		case 1:
			return 70;
		case 2:
			return 71;
		case 3:
			return 72;
		case 4:
			return 73;
		case 5:
			return 74;
		case 6:
			return 75;
		case 7:
			return 76;
		case 8:
			return 77;
		case 9:
			return 78;
		case 10:
			return 79;
		case 11:
			return 80;
		default:
	}
	return -1;
}

int func_485(int iParam0)//Position - 0x52DA3
{
	if (iParam0 >= 1 && iParam0 <= 376)
	{
		return 0;
	}
	if (iParam0 >= 377 && iParam0 <= 674)
	{
		return 1;
	}
	if (iParam0 >= 675 && iParam0 <= 683)
	{
		return 2;
	}
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 3;
	}
	if (iParam0 >= 704 && iParam0 <= 713)
	{
		return 4;
	}
	if (iParam0 >= 714 && iParam0 <= 746)
	{
		return 5;
	}
	if (iParam0 >= 747 && iParam0 <= 882)
	{
		return 6;
	}
	return -1;
}

bool func_486(int iParam0)//Position - 0x530FE
{
	return (iParam0 >= 714 && iParam0 <= 725);
}

bool func_487(int iParam0)//Position - 0x53117
{
	return (iParam0 >= 765 && iParam0 <= 769);
}

bool func_488(int iParam0)//Position - 0x53130
{
	return (*iParam0 >= 1 && *iParam0 <= 11);
}

int func_489(struct<3> Param0)//Position - 0x531A6
{
	if (Param0.f_0 == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

int func_490(int iParam0)//Position - 0x535E9
{
	if ((iParam0 >= 684 && iParam0 <= 703) || iParam0 == 747)
	{
		return 1;
	}
	return 0;
}

int func_491(struct<2> Param0)//Position - 0x53675
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && __LIB_2__.func_466(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681762.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

bool func_492(int iParam0, bool bParam1)//Position - 0x537C8
{
	if (bParam1)
	{
		return (iParam0 >= 714 && iParam0 <= 731);
	}
	return (iParam0 >= 714 && iParam0 <= 719);
}

bool func_493(int iParam0)//Position - 0x537FA
{
	if (iParam0 == 704 || iParam0 == 705)
	{
		return 1;
	}
	return (iParam0 >= 710 && iParam0 <= 713);
}

int func_494(struct<2> Param0, int iParam1)//Position - 0x5382C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && __LIB_2__.func_466(Global_2681762.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2681762.f_199.f_1[iVar0 /*15*/].f_5[iVar1] != 0 && Global_2681762.f_199.f_1[iVar0 /*15*/].f_5[iVar1] == iParam1)
				{
					return 1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_495(int iParam0)//Position - 0x538C1
{
	int iVar0;
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1952191.f_5365[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

Vector3 func_496(int iParam0, int iParam1)//Position - 0x53C23
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	if (iParam0 != 0)
	{
		if (Global_1952191.f_5470.f_3 == iParam0)
		{
			return Global_1952191.f_5470;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2681762.f_199.f_962[iVar1 /*75*/] == iParam1)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2681762.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
					{
						return Global_2681762.f_199.f_962[iVar1 /*75*/].f_20[iVar2 /*3*/];
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	return Var0;
}

int func_497(int iParam0)//Position - 0x53CDC
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_2__.func_467(Global_1892703[iParam0 /*599*/].f_556.f_12) || BitTest(Global_1892703[iParam0 /*599*/].f_556, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_498(var uParam0)//Position - 0x55A50
{
	__LIB_1__.func_58(uParam0);
	uParam0->f_692 = 1;
}

bool func_499(int iParam0)//Position - 0x620A3
{
	int iVar0;
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return __LIB_4__.func_333(iVar0, 0, 1, 0);
}

void func_500()//Position - 0x63702
{
	if ((!__LIB_0__.func_706() && !__LIB_0__.func_739()) && Global_2715698)
	{
		Global_4718592.f_116524 = 0;
	}
}

void func_501(bool bParam0)//Position - 0x7D33E
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return;
	}
	__LIB_4__.func_114(bParam0);
	MISC::SET_BIT(&(Global_1946250.f_8), 6);
}

int func_502(var uParam0, var uParam1, char* sParam2)//Position - 0x917E9
{
	*uParam1 = 1;
	StringCopy(sParam2, "PIM_AUTO_MAN_M" /* GXT: Auto Shop Management */, 16);
	return __LIB_6__.func_26(PLAYER::PLAYER_ID());
}

int func_503(bool bParam0)//Position - 0xF9801
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (__LIB_4__.func_360(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_504()//Position - 0x13F280
{
	if (__LIB_3__.func_254() != -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_505(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, var uParam5)//Position - 0x152E8E
{
	if ((__LIB_3__.func_165() || func_4190()) || __LIB_3__.func_184())
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { -12f, 0.3f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
			case 1:
				*uParam2 = { -11f, 1.35f, 1f };
				*uParam3 = 270f;
				return 1;
				break;
		}
	}
	else if ((!bParam4 || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("hakuchou2"))) && __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0) != -1)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_TURRET_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), __LIB_0__.func_306(PLAYER::PLAYER_PED_ID(), 0))))
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 7.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 1:
				*uParam2 = { 7.6212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 2:
				*uParam2 = { 6.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 3:
				*uParam2 = { 6.1212f, -1.2358f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 4:
				*uParam2 = { 4.6212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 5:
				*uParam2 = { 3.6212f, -1.3359f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 6:
				*uParam2 = { 3.1212f, 2.3638f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 7:
				*uParam2 = { 1.4212f, -1.1362f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 8:
				*uParam2 = { 1.4212f, 2.2642f, 0.004f };
				*uParam3 = 90f;
				return 1;
				break;
			case 9:
				*uParam2 = { 0.5212f, 1.2642f, 0.8149f };
				*uParam3 = 90f;
				return 1;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				*uParam2 = { 5.251f, 0.4458f, 0.1f };
				*uParam3 = 90f;
				return 1;
				break;
			}
	}
	return 0;
}

int func_506()//Position - 0x1629D2
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 229 && __LIB_2__.func_234(PLAYER::PLAYER_ID()) == 26)
	{
		return 1;
	}
	return 0;
}

int func_507(bool bParam0)//Position - 0x17FE36
{
	if (__LIB_3__.func_803(bParam0) == 225 || __LIB_3__.func_803(bParam0) == 226)
	{
		return __LIB_2__.func_234(bParam0);
	}
	return -1;
}

int func_508()//Position - 0x17FE63
{
	if (__LIB_3__.func_803(PLAYER::PLAYER_ID()) == 225 && __LIB_2__.func_234(PLAYER::PLAYER_ID()) == 0)
	{
		return 1;
	}
	return 0;
}

int func_509(struct<3> Param0, float fParam1, var uParam2, bool bParam3)//Position - 0x1BA770
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!bVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_1__.func_264(bVar1, 0, 0))
			{
				if (__LIB_2__.func_235(bVar1, PLAYER::PLAYER_ID()))
				{
					if ((!__LIB_2__.func_214(bVar1, 0, 0) && !__LIB_2__.func_202(bVar1)) && __LIB_1__.func_264(bVar1, 1, 1))
					{
						Var2 = { __LIB_1__.func_265(bVar1) };
					}
					else if (Global_2680265.f_261[iVar0])
					{
						if (bParam3)
						{
							if (Global_2680265.f_327[iVar0] < Global_2680265.f_327[PLAYER::PLAYER_ID()])
							{
								Var2 = { Global_2680265.f_131[iVar0 /*3*/] };
							}
						}
						else
						{
							Var2 = { Global_2680265.f_131[iVar0 /*3*/] };
						}
					}
					if (SYSTEM::VMAG(Var2) > 0f)
					{
						if (SYSTEM::VDIST(Var2, Param0) < fParam1)
						{
							*uParam2 = { Var2 };
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_510()//Position - 0x1BA861
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (!bVar1 == PLAYER::PLAYER_ID())
		{
			if (__LIB_1__.func_264(bVar1, 0, 0))
			{
				if (__LIB_2__.func_235(bVar1, PLAYER::PLAYER_ID()))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_511(struct<3> Param0, bool bParam1, int iParam2)//Position - 0x1C2FDE
{
	float fVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	fVar0 = 999999.9f;
	if (__LIB_1__.func_264(bParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!bParam1 == iVar2 || iParam2 == 1)
			{
				bVar3 = iVar2;
				if (__LIB_1__.func_264(bVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar3) != PLAYER::GET_PLAYER_TEAM(bParam1) || (PLAYER::GET_PLAYER_TEAM(bVar3) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1))
					{
						if (!__LIB_2__.func_235(bVar3, bParam1))
						{
							if (Global_2680265.f_261[iVar2])
							{
								fVar1 = SYSTEM::VDIST(Global_2680265.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

bool func_512(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x1C3DEF
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && PLAYER::GET_PLAYER_TEAM(bParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(bParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(bParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(bParam0) == iParam2;
}

int func_513(bool bParam0, bool bParam1)//Position - 0x1C6659
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	fVar2 = 999999.9f;
	iVar3 = -1;
	Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bParam0), false) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar4 = iVar0;
		if (!bParam0 == bVar4)
		{
			if (__LIB_1__.func_264(bVar4, bParam1, 1))
			{
				if (__LIB_2__.func_235(bParam0, bVar4))
				{
					Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(bVar4), false) };
					fVar1 = SYSTEM::VDIST(Var5, Var6);
					if (fVar1 < fVar2)
					{
						iVar3 = iVar0;
						fVar2 = fVar1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_514(bool bParam0)//Position - 0x1C78A0
{
	if (bParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_3__.func_930(bParam0) && Global_2689235[bParam0 /*453*/].f_318.f_9 == bParam0)
	{
		return 1;
	}
	return 0;
}

int func_515()//Position - 0x1CC865
{
	if (Global_1946250.f_499 != 0)
	{
		return 0;
	}
	return 1;
}

bool func_516()//Position - 0x1CD083
{
	return BitTest(Global_1946250, 27);
}

int func_517()//Position - 0x1E194A
{
	if (__LIB_1__.func_357())
	{
		return 1;
	}
	return Global_2714762.f_744;
}

int func_518()//Position - 0x1E392E
{
	if (!Global_262145.f_28866 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_2__.func_308(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_519(var uParam0)//Position - 0x1E5734
{
	if ((__LIB_4__.func_488() || __LIB_2__.func_861()) || __LIB_4__.func_331())
	{
		return 1;
	}
	if (!__LIB_2__.func_192(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if ((__LIB_2__.func_192(PLAYER::PLAYER_ID()) && !__LIB_4__.func_116(PLAYER::PLAYER_ID())) && (__LIB_1__.func_188(uParam0->f_318) || uParam0->f_444 == 1))
	{
		return 1;
	}
	else if (__LIB_4__.func_116(PLAYER::PLAYER_ID()) && __LIB_0__.func_630(uParam0->f_318, -1))
	{
		return 1;
	}
	return 0;
}

Vector3 func_520(int iParam0, bool bParam1)//Position - 0x1E7FF0
{
	struct<3> Var0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, 270f };
				break;
			case 1:
				Var0 = { 0f, 0f, 270f };
				break;
			case 2:
				Var0 = { 0f, 0f, 180f };
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 959.1672f, -3001.8235f, -40.6349f };
				break;
			case 1:
				Var0 = { 959.0532f, -3000.6353f, -40.6349f };
				break;
			case 2:
				Var0 = { 962.481f, -3003.0217f, -40.6349f };
				break;
			}
	}
	return Var0;
}

int func_521(var uParam0)//Position - 0x1E80A6
{
	int iVar0;
	int iVar1;
	iVar1 = 3;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	while (iVar0 == uParam0->f_469 || iVar0 == uParam0->f_468)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	}
	uParam0->f_468 = uParam0->f_469;
	uParam0->f_469 = iVar0;
	return iVar0;
}

char* func_522(int iParam0, bool bParam1)//Position - 0x1E8111
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_A@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_A@BASE@";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_B@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_B@BASE@";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_C@BASE@";
			}
			else
			{
				sVar0 = "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_C@BASE@";
			}
			break;
	}
	return sVar0;
}

bool func_523()//Position - 0x1E817D
{
	return BitTest(Global_2787701, 4);
}

int func_524(var uParam0)//Position - 0x1E918D
{
	int iVar0;
	if (uParam0->f_3)
	{
		iVar0 = 7;
	}
	return iVar0;
}

int func_525(int iParam0, bool bParam1, var uParam2)//Position - 0x1E95FC
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_526(int iParam0)//Position - 0x1E9707
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
			break;
		case 2:
			return 0;
			break;
	}
	return 1;
}

int func_527(var uParam0)//Position - 0x1E97A3
{
	uParam0 = uParam0;
	return 1;
}

void func_528(var uParam0)//Position - 0x1E9958
{
	switch (*uParam0)
	{
		case 4:
		case 5:
			PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.15f);
			break;
		case 6:
		case 7:
		case 9:
		case 10:
		case 16:
		case 17:
		case 18:
		case 12:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_529(var uParam0)//Position - 0x1E99BF
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_9.f_133[uParam0->f_4 /*6*/], uParam0->f_9.f_260[uParam0->f_4 /*6*/], 0.75f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.15f);
	}
}

bool func_530(int iParam0)//Position - 0x1E9F85
{
	return __LIB_3__.func_853(0, iParam0);
}

int func_531(int* iParam0)//Position - 0x1EB739
{
	if (!BitTest(*iParam0, 7))
	{
		return 1;
	}
	else
	{
		if (BitTest(*iParam0, 1))
		{
			STREAMING::CLEAR_FOCUS();
			NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(false);
			MISC::CLEAR_BIT(iParam0, 1);
		}
		if (CAM::DOES_CAM_EXIST(iParam0->f_6))
		{
			CAM::SET_CAM_ACTIVE(iParam0->f_6, false);
			CAM::DESTROY_CAM(iParam0->f_6, false);
		}
		AUDIO::STOP_AUDIO_SCENE("WATCHING_SAFEHOUSE_TV");
		MISC::CLEAR_BIT(iParam0, 7);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		MISC::SET_BIT(iParam0, 0);
	}
	return 0;
}

int func_532(var uParam0, var uParam1)//Position - 0x1EBD10
{
	if (BitTest(*uParam1, 3))
	{
		return uParam0->f_21;
	}
	return uParam0->f_20;
}

int func_533(var uParam0, int* iParam1)//Position - 0x1EBD2E
{
	if (BitTest(*iParam1, 3))
	{
		return uParam0->f_23;
	}
	return uParam0->f_22;
}

void func_534(int* iParam0)//Position - 0x1ED0FB
{
	if (iParam0->f_9 == -1)
	{
		iParam0->f_9 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_9, "Background", "MP_CCTV_SOUNDSET", true);
	}
}

int func_535(int iParam0)//Position - 0x1ED3FE
{
	switch (iParam0)
	{
		case 6:
			return 0;
			break;
		case 7:
			return 1;
			break;
		case 4:
		case 5:
		case 0:
		case 1:
		case 2:
		case 3:
			return 2;
			break;
		case 8:
			return 4;
			break;
	}
	return -1;
}

void func_536(int* iParam0, bool bParam1)//Position - 0x1ED460
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_4))
	{
		if (bParam1)
		{
			if (!BitTest(*iParam0, 16))
			{
				ENTITY::SET_ENTITY_VISIBLE(iParam0->f_4, true, false);
				MISC::SET_BIT(iParam0, 16);
			}
		}
		else if (BitTest(*iParam0, 16))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_4, false, false);
			MISC::CLEAR_BIT(iParam0, 16);
		}
	}
}

void func_537(var uParam0)//Position - 0x1EEFDC
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_47.f_996[iVar0] = 0;
		iVar0++;
	}
	MISC::CLEAR_BIT(&Global_2621446, 20);
	Global_2621446.f_82 = 0;
	if (Global_1574963)
	{
		MISC::SET_BIT(&Global_2621446, 20);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (__LIB_1__.func_264(bVar1, 1, 1))
			{
				if (!BitTest(Global_1853348[bVar1 /*834*/].f_199, 0))
				{
					if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (bVar1 != PLAYER::PLAYER_ID())
						{
							MISC::CLEAR_BIT(&Global_2621446, 20);
							iVar0 = 32;
						}
					}
					else if (__LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(bVar1), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
					{
						if (bVar1 != PLAYER::PLAYER_ID())
						{
							Global_2621446.f_82 = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	Global_2727749 = 1;
	MISC::CLEAR_BIT(&(uParam0->f_1), 8);
}

void func_538(int iParam0)//Position - 0x1EF7F4
{
	var uVar0;
	uVar0 = __LIB_0__.func_214();
	Global_1574990 = iParam0;
}

void func_539()//Position - 0x1EF9D4
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = iVar0;
		if (bVar1 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_264(bVar1, 0, 1))
			{
				NETWORK::NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(iVar0, false);
			}
		}
		iVar0++;
	}
}

void func_540(int* iParam0)//Position - 0x1EFA1B
{
	if (iParam0->f_10 == -1)
	{
		iParam0->f_10 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iParam0->f_10, "Change_Cam", "MP_CCTV_SOUNDSET", true);
	}
}

void func_541(int* iParam0, int iParam1)//Position - 0x1EFA44
{
	CAM::DO_SCREEN_FADE_OUT(iParam1);
	MISC::SET_BIT(&(iParam0->f_28), 2);
}

void func_542()//Position - 0x1EFA5B
{
	MISC::SET_BIT(&Global_2621446, 25);
}

int func_543(int* iParam0)//Position - 0x1EFA6D
{
	return iParam0->f_25;
}

int func_544()//Position - 0x1F3453
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_1__.func_282()))
	{
		return __LIB_1__.func_282();
	}
	return __LIB_0__.func_727();
}

void func_545(var uParam0)//Position - 0x1F35E6
{
	if (Global_2621440 && !__LIB_6__.func_175())
	{
		if (uParam0->f_47.f_2179 == 0)
		{
			MISC::SET_BIT(&(uParam0->f_47), 1);
			uParam0->f_47.f_2179 = 1;
			Global_2621441 = 1;
		}
	}
	else if (Global_2621441 == 1)
	{
		if (uParam0->f_47.f_2180 == 0)
		{
			MISC::SET_BIT(&(uParam0->f_47), 1);
			uParam0->f_47.f_2180 = 1;
		}
		else if (uParam0->f_47.f_2179 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_47), 1);
			uParam0->f_47.f_2179 = 0;
		}
	}
}

void func_546(int iParam0)//Position - 0x1F44EC
{
	if (Global_2621446.f_69.f_1 != iParam0)
	{
		if (iParam0 != 2 || __LIB_6__.func_154())
		{
			Global_2621446.f_69.f_1 = iParam0;
			Global_2621446.f_69.f_3 = 0;
			MISC::CLEAR_BIT(&(Global_2621446.f_69.f_5), 4);
		}
	}
}

Vector3 func_547(var uParam0, int iParam1)//Position - 0x1F6A41
{
	int iVar0;
	int iVar1;
	__LIB_6__.func_185(uParam0, &iVar0, &iVar1, iParam1);
	return uParam0->f_24[iVar0 /*97*/][iVar1 /*3*/];
}

int func_548(bool bParam0)//Position - 0x1F6DE4
{
	switch (__LIB_0__.func_3())
	{
		case 0:
			if (!__LIB_6__.func_172(bParam0))
			{
				if (Global_1853348[bParam0 /*834*/] == 2 || Global_1853348[bParam0 /*834*/] == 8)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_549(var uParam0)//Position - 0x1F735F
{
	switch (uParam0->f_1467)
	{
		case 10:
		case 11:
			if ((__LIB_6__.func_215(uParam0) != 3 && !__LIB_6__.func_161()) && !Global_1931426)
			{
				if (uParam0->f_1469 == 99)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1471))
					{
						HUD::SET_TEXT_RENDER_ID(uParam0->f_1472);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1471, 255, 255, 255, 0, 0);
						if (!HUD::IS_RADAR_HIDDEN())
						{
							HUD::DISPLAY_RADAR(false);
						}
					}
				}
			}
			break;
	}
}

void func_550(var uParam0, int iParam1)//Position - 0x2128F4
{
	if (__LIB_6__.func_275(Global_2621446.f_2))
	{
		uParam0->f_2260 = Global_2621446.f_2;
	}
	Global_2621446.f_2 = iParam1;
	if (__LIB_6__.func_174())
	{
		Global_2815059.f_299 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1);
	}
}

bool func_551(int iParam0)//Position - 0x212AAE
{
	return BitTest(Global_1888862[iParam0 /*120*/].f_29, 0);
}

int func_552()//Position - 0x212F32
{
	if (__LIB_6__.func_161() || __LIB_6__.func_171(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__.func_212())
	{
		return 0;
	}
	return 1;
}

int func_553(int iParam0)//Position - 0x214267
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
			if (__LIB_1__.func_264(bVar2, 0, 0))
			{
				if (bVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, bVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_554(var uParam0)//Position - 0x21436A
{
	if (__LIB_6__.func_153(&(uParam0->f_1)))
	{
		if (*uParam0 == 2 || __LIB_6__.func_306())
		{
			if (!BitTest(uParam0->f_1, 13))
			{
				__LIB_4__.func_741(&(uParam0->f_1), 1);
			}
		}
	}
}

int func_555(var uParam0, bool bParam1)//Position - 0x215270
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam1))
	{
		if (bParam1 > -1)
		{
			if (!BitTest(Global_1853348[bParam1 /*834*/].f_267.f_30, 2))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_CONCEALED(bParam1))
				{
					if (!BitTest(Global_2689235[bParam1 /*453*/].f_197, 4))
					{
						if (BitTest(uParam0->f_1, 16))
						{
							if (BitTest(uParam0->f_1, 17))
							{
								if (MISC::GET_GAME_TIMER() > uParam0->f_1.f_40)
								{
									return 1;
								}
							}
							else
							{
								uParam0->f_1.f_40 = MISC::GET_GAME_TIMER() + 3000;
								MISC::SET_BIT(&(uParam0->f_1), 17);
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
	}
	return 0;
}

int func_556(bool bParam0)//Position - 0x21540F
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__.func_264(bParam0, 0, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			if (Var1.f_2 > -145f)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_557(bool bParam0)//Position - 0x215587
{
	return BitTest(Global_1853348[bParam0 /*834*/].f_143, 30);
}

void func_558(int* iParam0)//Position - 0x215BBC
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (__LIB_0__.func_706())
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__.func_727()))
	{
		if (ENTITY::IS_ENTITY_DEAD(__LIB_0__.func_727(), false))
		{
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(__LIB_0__.func_727(), false) };
		Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
		iVar3 = SYSTEM::ROUND(Var2.f_2);
		if (iVar3 < 0)
		{
			iVar3 += 360;
		}
		HUD::LOCK_MINIMAP_ANGLE(iVar3);
		HUD::LOCK_MINIMAP_POSITION(Var1.f_0, Var1.f_1);
		if (PED::IS_PED_IN_ANY_VEHICLE(__LIB_0__.func_727(), false))
		{
			HUD::SET_RADAR_ZOOM(900);
			bVar0 = true;
		}
		MISC::SET_BIT(iParam0, 2);
	}
	if (!bVar0)
	{
		HUD::SET_RADAR_ZOOM(0);
	}
}

void func_559()//Position - 0x215F2F
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
	}
	else
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
	}
}

int func_560(int iParam0)//Position - 0x216BB9
{
	if (__LIB_2__.func_106(iParam0) == 6)
	{
		return 1;
	}
	return 0;
}

bool func_561(int iParam0)//Position - 0x216DD0
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_3, 4);
}

void func_562()//Position - 0x21B1CD
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("LineArcadeMinigame");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM");
	HUD::CLEAR_ADDITIONAL_TEXT(3, false);
	MISC::CLEAR_BIT(&Global_1931419, 6);
	MISC::CLEAR_BIT(&Global_1931419, 7);
}

int func_563()//Position - 0x21B1FF
{
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_EXEC1/OFFICE_BOARDROOM", false, -1))
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("LineArcadeMinigame", false);
		HUD::REQUEST_ADDITIONAL_TEXT("DCTL", 3);
		MISC::SET_BIT(&Global_1931419, 6);
		return 1;
	}
	return 0;
}

void func_564(bool bParam0)//Position - 0x21B260
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 1);
	}
}

void func_565(bool bParam0)//Position - 0x21B294
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 4);
	}
}

void func_566(bool bParam0, bool bParam1)//Position - 0x21B2C8
{
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3, 0))
		{
			MISC::SET_BIT(&Global_1931419, 7);
		}
		MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (BitTest(Global_1931419, 4))
			{
				MISC::CLEAR_BIT(&Global_1931419, 4);
			}
			if (BitTest(Global_1931419, 0))
			{
				MISC::SET_BIT(&Global_1931419, 1);
				MISC::CLEAR_BIT(&Global_1931419, 0);
			}
		}
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_3), 0);
	}
}

bool func_567()//Position - 0x21B455
{
	return Global_2725436;
}

int func_568()//Position - 0x21B461
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2737.951f, -379.39902f, -49.399834f, 2737.9478f, -380.35925f, -47.399834f, 1.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2737.9304f, -382.8514f, -49.399834f, 2737.9143f, -383.8369f, -47.399834f, 1.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2737.0745f, -379.52518f, -49.399834f, 2737.12f, -383.65125f, -47.399834f, 1.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_569()//Position - 0x21D28F
{
	if (((((((((((((((((!__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) || __LIB_3__.func_633()) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GOING_INTO_COVER(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FATALLY_INJURED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	return 1;
}

bool func_570(int* iParam0)//Position - 0x222B25
{
	if (!__LIB_0__.func_121(iParam0->f_2))
	{
		return 0;
	}
	if (iParam0->f_10 == -1)
	{
		return 0;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_2, iParam0->f_10);
}

void func_571(int* iParam0)//Position - 0x222B55
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_76))
	{
		MISC::SET_BIT(iParam0, 17);
		AUDIO::START_AUDIO_SCENE(iParam0->f_76);
	}
}

void func_572(int* iParam0)//Position - 0x222B7A
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_11))
	{
		CAM::DESTROY_CAM(iParam0->f_11, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_12))
	{
		CAM::DESTROY_CAM(iParam0->f_12, false);
	}
	iParam0->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	iParam0->f_12 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_573(int* iParam0)//Position - 0x222BD2
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_11))
	{
		CAM::DESTROY_CAM(iParam0->f_11, false);
	}
	iParam0->f_11 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
	CAM::SET_CAM_PARAMS(iParam0->f_11, iParam0->f_13, iParam0->f_16, iParam0->f_19, 0, 1, 1, 2);
	CAM::SET_CAM_FAR_CLIP(iParam0->f_11, 1000f);
	CAM::SHAKE_CAM(iParam0->f_11, "HAND_SHAKE", iParam0->f_40);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_574(int* iParam0)//Position - 0x222C41
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_76))
	{
		AUDIO::STOP_AUDIO_SCENE(iParam0->f_76);
	}
	MISC::CLEAR_BIT(iParam0, 17);
}

void func_575(var uParam0)//Position - 0x2248A2
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_50))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_50));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_58))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_58));
	}
}

int func_576(bool bParam0, var uParam1)//Position - 0x145F64
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_330(bParam0) && !func_26(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 31))
		{
			if (__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_577(bool bParam0, int iParam1)//Position - 0x1539D0
{
	if (Global_1946250.f_3280 == -1)
	{
		if ((__LIB_3__.func_397(bParam0, __LIB_0__.func_625(iParam1)) && !func_26(PLAYER::PLAYER_ID(), 0)) || BitTest(Global_1946250.f_506, 30))
		{
			if (__LIB_1__.func_425(bParam0, 0))
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

void func_578(var* uParam0, int iParam1)//Position - 0x19BA6B
{
	if (uParam0->f_9 != iParam1)
	{
		uParam0->f_9 = iParam1;
	}
}

int func_579(var uParam0)//Position - 0x1A69DA
{
	if ((__LIB_4__.func_488() || __LIB_2__.func_861()) || __LIB_4__.func_331())
	{
		return 1;
	}
	if (!__LIB_2__.func_192(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	else if ((__LIB_2__.func_192(PLAYER::PLAYER_ID()) && !__LIB_1__.func_359(PLAYER::PLAYER_ID())) && (__LIB_1__.func_188(uParam0->f_318) || uParam0->f_444 == 1))
	{
		return 1;
	}
	else if (__LIB_1__.func_359(PLAYER::PLAYER_ID()) && __LIB_0__.func_630(uParam0->f_318, -1))
	{
		return 1;
	}
	return 0;
}

void func_580(int* iParam0)//Position - 0x1AA726
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (iParam0->f_9 == 1 || iParam0->f_9 == 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_2);
	}
	if (iParam0->f_9 == 4)
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(iParam0->f_8);
	}
}

char* func_581(int iParam0)//Position - 0x1AAF86
{
	switch (iParam0)
	{
		case joaat("prop_vend_soda_01"):
			return "ob_vend1";
			break;
		case joaat("prop_vend_soda_02"):
			return "ob_vend2";
			break;
		case joaat("sf_prop_sf_vend_drink_01a"):
			return "ob_vend1";
			break;
	}
	return "";
}

int func_582(int iParam0, char* sParam1)//Position - 0x2ECA
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "dj_solomun", 64);
			return 1;
		case 4:
			StringCopy(sParam1, "dj_Keinemusik_night", 64);
			return 1;
		case 5:
			StringCopy(sParam1, "dj_Keinemusik_party", 64);
			return 1;
		case 6:
			StringCopy(sParam1, "dj_palms_trax", 64);
			return 1;
		case 7:
			StringCopy(sParam1, "dj_moodymann", 64);
			return 1;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			StringCopy(sParam1, "dj_dr_dre", 64);
			return 1;
		default:
	}
	return 0;
}

char* func_583(int iParam0)//Position - 0x2F7C
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "se_sf_dlc_studio_sec_studio_01";
			break;
		case 1:
			sVar0 = "se_sf_dlc_studio_sec_studio_02";
			break;
		case 2:
			sVar0 = "se_sf_dlc_studio_sec_lobby_01";
			break;
	}
	return sVar0;
}

int func_584(int iParam0)//Position - 0x3141
{
	switch (iParam0)
	{
		case 9:
			return 4;
		case 8:
			return 4;
		case 10:
			return 3;
		case 11:
			return 4;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 16:
			return 1;
		case 17:
			return 1;
		default:
	}
	return 0;
}

char* func_585(int iParam0, var uParam1)//Position - 0x31B5
{
	switch (iParam0)
	{
		case 12:
			return "HIDDEN_RADIO_ASTU_SILENCE_TRACK";
		case 14:
			return "CUTSCENES_FIX_ASTU_TRANS_01_WITH_VOCALS";
		case 13:
			return "CUTSCENES_FIX_ASTU_MIXING_TRANS_01_NO_VOCALS";
		case 15:
			return "CUTSCENES_FIX_ASTU_DRUMS_WITH_VOCALS";
		case 16:
			return "CUTSCENES_FIX_ASTU_VOCALS_WITH_VOCALS";
		case 17:
			return "CUTSCENES_FIX_ASTU_MIXING_TRANS_02_WITH_VOCALS";
		default:
	}
	return "[CLUB_MUSIC] _GET_MUSIC_STUDIO_DJ_RADIO_STATION_TRACK_NAME INVALID_DJ / track";
}

char* func_586(int iParam0)//Position - 0x3216
{
	switch (iParam0)
	{
		case 12:
			return "HIDDEN_RADIO_ASTU_SILENCE";
		case 14:
			return "HIDDEN_RADIO_ASTU_TRANS_01_VOX";
		case 13:
			return "HIDDEN_RADIO_ASTU_TRANS_01";
		case 15:
			return "HIDDEN_RADIO_ASTU_DRUMS_VOX";
		case 16:
			return "HIDDEN_RADIO_ASTU_VOX";
		case 17:
			return "HIDDEN_RADIO_ASTU_TRANS_02_VOX";
		default:
	}
	return "[CLUB_MUSIC] _GET_MUSIC_STUDIO_DJ_RADIO_STATION_NAME INVALID_DJ";
}

int func_587(int iParam0, bool bParam1)//Position - 0x3277
{
	int iVar0;
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 4;
				break;
			case 2:
				iVar0 = 5;
				break;
			case 1:
				iVar0 = 6;
				break;
			case 3:
				iVar0 = 7;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				break;
			case 2:
				iVar0 = 1;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 3:
				iVar0 = 3;
				break;
			}
	}
	switch (iParam0)
	{
		case 4:
			iVar0 = 8;
			break;
		case 5:
			iVar0 = 9;
			break;
		case 6:
			iVar0 = 10;
			break;
		case 7:
			iVar0 = 11;
			break;
		case 8:
			iVar0 = 12;
			break;
		case 9:
			iVar0 = 13;
			break;
		case 10:
			iVar0 = 14;
			break;
		case 11:
			iVar0 = 15;
			break;
		case 12:
			iVar0 = 16;
			break;
		case 13:
			iVar0 = 17;
			break;
	}
	return iVar0;
}

void func_588(int iParam0, char* sParam1)//Position - 0x3500
{
	var uVar0;
	NETWORK::CONVERT_POSIX_TIME(iParam0, &uVar0);
}

int func_589(int iParam0, var uParam1)//Position - 0x3510
{
	switch (iParam0)
	{
		case 9:
		case 10:
			return SYSTEM::FLOOR((IntToFloat(Global_262145.f_31889 /* Tunable: -1709828988 */) / 1000f));
			break;
		case 11:
			return SYSTEM::FLOOR((IntToFloat((Global_262145.f_31889 /* Tunable: -1709828988 */ + Global_262145.f_31890 /* Tunable: -1650306614 */)) / 1000f));
			break;
		case 12:
			return SYSTEM::FLOOR((IntToFloat((Global_262145.f_31889 /* Tunable: -1709828988 */ + Global_262145.f_31891 /* Tunable: 1201748713 */)) / 1000f));
			break;
		case 13:
			if (BitTest(uParam1->f_6, 3))
			{
				return SYSTEM::FLOOR((IntToFloat(((Global_262145.f_31889 /* Tunable: -1709828988 */ + Global_262145.f_31890 /* Tunable: -1650306614 */) + Global_262145.f_31892 /* Tunable: -25286083 */)) / 1000f));
			}
			return SYSTEM::FLOOR((IntToFloat(((Global_262145.f_31889 /* Tunable: -1709828988 */ + Global_262145.f_31891 /* Tunable: 1201748713 */) + Global_262145.f_31892 /* Tunable: -25286083 */)) / 1000f));
			break;
	}
	return -1;
}

int func_590(int iParam0)//Position - 0x3823
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_31906 /* Tunable: -502176940 */;
		case 1:
			return Global_262145.f_31907 /* Tunable: 1162029526 */;
		case 2:
			return Global_262145.f_31908 /* Tunable: 1460260195 */;
		case 3:
			return Global_262145.f_31909 /* Tunable: 1618534465 */;
		case 4:
			return Global_262145.f_31910 /* Tunable: 2119441399 */;
		case 5:
			return Global_262145.f_31911 /* Tunable: -1990900 */;
		case 6:
			return Global_262145.f_31912 /* Tunable: 164344544 */;
		case 7:
			return Global_262145.f_31913 /* Tunable: 459626003 */;
		case 8:
			return Global_262145.f_31914 /* Tunable: 890800513 */;
		case 9:
			return Global_262145.f_31915 /* Tunable: -688763598 */;
		case 10:
			return Global_262145.f_31916 /* Tunable: 1464254291 */;
		case 11:
			return Global_262145.f_31917 /* Tunable: 940277981 */;
		case 12:
			return Global_262145.f_31918 /* Tunable: 67442897 */;
		case 13:
			return Global_262145.f_31919 /* Tunable: -172065724 */;
		case 14:
			return Global_262145.f_31920 /* Tunable: 545378762 */;
		case 15:
			return Global_262145.f_31921 /* Tunable: 306459983 */;
		case 16:
			return Global_262145.f_31922 /* Tunable: -1129084369 */;
		case 17:
			return Global_262145.f_31923 /* Tunable: -1352470646 */;
		case 18:
			return Global_262145.f_31924 /* Tunable: -650755276 */;
		case 19:
			return Global_262145.f_31925 /* Tunable: -908286847 */;
		case 20:
			return Global_262145.f_31926 /* Tunable: 804680787 */;
		case 21:
			return Global_262145.f_31927 /* Tunable: 437405835 */;
		case 22:
			return Global_262145.f_31928 /* Tunable: 257110797 */;
		case 23:
			return Global_262145.f_31929 /* Tunable: 27629490 */;
		case 24:
			return Global_262145.f_31930 /* Tunable: -375461979 */;
		case 25:
			return Global_262145.f_31931 /* Tunable: -1828046215 */;
		case 26:
			return Global_262145.f_31932 /* Tunable: -851104014 */;
		case 27:
			return Global_262145.f_31933 /* Tunable: -1235615460 */;
		case 28:
			return Global_262145.f_31934 /* Tunable: 977078500 */;
		case 29:
			return Global_262145.f_31935 /* Tunable: 1810820167 */;
		case 30:
			return Global_262145.f_31936 /* Tunable: -1590897282 */;
		case 31:
			return Global_262145.f_31937 /* Tunable: -740738342 */;
		case 32:
			return Global_262145.f_31938 /* Tunable: 1195778482 */;
		case 33:
			return Global_262145.f_31939 /* Tunable: 957646159 */;
		case 34:
			return Global_262145.f_31940 /* Tunable: 1795156261 */;
		default:
	}
	return -1;
}

int func_591()//Position - 0x3B29
{
	int iVar0;
	int iVar1;
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1977017);
	iVar1 = (iVar0 / 86400);
	return (iVar1 % 7);
}

char* func_592()//Position - 0x3C3E
{
	return "DLC_H4_NightClub_Scene";
}

char* func_593(int iParam0)//Position - 0x3C4A
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "SE_h4_dlc_int_02_h4_main_front_02";
			break;
		case 1:
			sVar0 = "SE_h4_dlc_int_02_h4_main_front_01";
			break;
		case 2:
			sVar0 = "SE_h4_dlc_int_02_h4_main_bar";
			break;
		case 3:
			sVar0 = "SE_h4_dlc_int_02_h4_lobby";
			break;
		case 4:
			sVar0 = "SE_h4_dlc_int_02_h4_Entrance_Doorway";
			break;
		case 5:
			sVar0 = "SE_h4_dlc_int_02_h4_Bogs";
			break;
	}
	return sVar0;
}

int func_594(var* uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3D52
{
	if (iParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

char* func_595()//Position - 0x3DCA
{
	return "audio";
}

bool func_596(int iParam0)//Position - 0x3DF8
{
	return (iParam0 > -1 && iParam0 < 18);
}

int func_597(int iParam0, char* sParam1, int iParam2)//Position - 0x3F08
{
	if (__LIB_4__.func_664(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

char* func_598(int iParam0, int iParam1)//Position - 0x3FC5
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_01";
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_02";
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_03";
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_04";
				default:
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P1";
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P2";
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P3";
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P4";
				default:
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P1";
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P2";
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P3";
				default:
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P1";
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P2";
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P3";
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P4";
				default:
			}
			break;
	}
	return "";
}

int func_599()//Position - 0x45C8
{
	if (Global_262145.f_24745 /* Tunable: -2064797647 */)
	{
		return 0;
	}
	if (Global_262145.f_24746 /* Tunable: 1419194420 */)
	{
		return 0;
	}
	if (Global_262145.f_24747 /* Tunable: -2084724801 */)
	{
		return 0;
	}
	return 1;
}

char* func_600()//Position - 0x46DF
{
	return "AZ_DLC_Hei4_Island_Beach_Party";
}

char* func_601(int iParam0)//Position - 0x46F7
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "SE_DLC_Hei4_Island_Beach_Party_Music_New_01_Left";
			break;
		case 1:
			sVar0 = "SE_DLC_Hei4_Island_Beach_Party_Music_New_02_Right";
			break;
		case 2:
			sVar0 = "SE_DLC_Hei4_Island_Beach_Party_Music_New_03_Reverb";
			break;
		case 3:
			sVar0 = "SE_DLC_Hei4_Island_Beach_Party_Music_New_04_Reverb";
			break;
	}
	return sVar0;
}

void func_602()//Position - 0x4788
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(0);
	}
}

void func_603()//Position - 0x47DF
{
	Global_1579020 = -1;
	Global_1578997 = -1;
	Global_1578997.f_1 = -1;
	Global_1578997.f_3 = -1;
	Global_1578997.f_2 = -1;
}

void func_604(var uParam0, bool bParam1)//Position - 0x4ACD
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (BitTest(uParam0->f_6, bParam1))
	{
		MISC::CLEAR_BIT(&(uParam0->f_6), bParam1);
	}
}

int func_605(int iParam0)//Position - 0x4AF4
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		default:
	}
	return 0;
}

void func_606(var uParam0, int iParam1)//Position - 0x4E29
{
	uParam0->f_2 = iParam1;
	uParam0->f_4[uParam0->f_949 /*12*/].f_11 = uParam0->f_2;
	__LIB_0__.func_579(&(uParam0->f_657));
}

var func_607(var uParam0, int iParam1, bool bParam2)//Position - 0x4E94
{
	struct<34> Var0;
	if (uParam0->f_915.f_13 == 0)
	{
		*bParam2 = 0;
		return "";
	}
	Var0.f_17 = 5;
	Var0.f_17.f_1.f_1 = 1069547520;
	Var0.f_17.f_1.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_33 = 5;
	Var0.f_33.f_1.f_1 = 1069547520;
	Var0.f_33.f_1.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	Stack.Push(iParam1);
	Stack.Push(&Var0);
	Call_Loc(uParam0->f_915.f_13);
	*bParam2 = StackVal;
	return Var0.f_16;
}

void func_608(var uParam0, int iParam1)//Position - 0x5065
{
	uParam0->f_4[uParam0->f_949 /*12*/].f_3 = iParam1;
}

void func_609(var uParam0, int iParam1)//Position - 0x507C
{
	uParam0->f_4[uParam0->f_949 /*12*/].f_1 = iParam1;
}

void func_610(var uParam0, int iParam1)//Position - 0x5093
{
	uParam0->f_4[uParam0->f_949 /*12*/] = iParam1;
}

void func_611(var uParam0, int iParam1)//Position - 0x50A8
{
	uParam0->f_4[uParam0->f_949 /*12*/].f_2 = iParam1;
}

var func_612(var uParam0, int iParam1)//Position - 0x5115
{
	return uParam0->f_4[iParam1 /*12*/].f_3;
}

int func_613(var uParam0, int iParam1)//Position - 0x514D
{
	return uParam0->f_4[iParam1 /*12*/].f_2;
}

int func_614(var uParam0, int iParam1)//Position - 0x5185
{
	if (iParam1 == __LIB_0__.func_160())
	{
		return 0;
	}
	return uParam0->f_4[iParam1 /*12*/];
}

bool func_615(int iParam0)//Position - 0x5261
{
	int iVar0;
	iVar0 = iParam0;
	return (((((((((((((((iVar0 == 29 || iVar0 == 30) || iVar0 == 31) || iVar0 == 33) || iVar0 == 35) || iVar0 == 37) || iVar0 == 32) || iVar0 == 34) || iVar0 == 36) || iVar0 == 38) || iVar0 == 52) || iVar0 == 53) || iVar0 == 54) || iVar0 == 55) || iVar0 == 56) || iVar0 == 57);
}

bool func_616(var uParam0, int iParam1, var uParam2)//Position - 0x536A
{
	Stack.Push(iParam1);
	Stack.Push(uParam2);
	Call_Loc(uParam0->f_915.f_2);
	return StackVal;
}

bool func_617(char* sParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0x568E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_618(var uParam0)//Position - 0x56B3
{
	if (uParam0->f_931)
	{
		return "DANCE_LOCK" /* GXT: Locked */;
	}
	return "DANCE_UNLOCK" /* GXT: Unlocked */;
}

char* func_619(int iParam0, int iParam1)//Position - 0x56ED
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "IAP_NONE" /* GXT: None */;
				case 1:
					return "IAPS_SMOK" /* GXT: Smoke */;
				case 2:
					return "IAPS_FING" /* GXT: The Bird */;
				case 3:
					return "IAPS_DANCE" /* GXT: Dance */;
				case 4:
					return "IAPS_ROCK" /* GXT: Rock */;
				case 5:
					return "IAPS_WANK" /* GXT: Jerk */;
				case 7:
					return "IAP_DLC37" /* GXT: Air Thrusting */;
				case 8:
					return "IAP_DLC12" /* GXT: Dock */;
				case 9:
					return "IAP_DLC18" /* GXT: Knuckle Crunch */;
				case 10:
					return "IAP_DLC23" /* GXT: Salute */;
				case 6:
					return "IAP_DLC1" /* GXT: Blow Kiss */;
				case 11:
					return "IAP_DLC42" /* GXT: Slow Clap */;
				case 12:
					return "IAP_DLC5" /* GXT: Face Palm */;
				case 13:
					return "IAP_DLC4" /* GXT: Thumbs Up */;
				case 14:
					return "IAP_DLC35" /* GXT: Jazz Hands */;
				case 15:
					return "IAP_DLC2" /* GXT: Nose Pick */;
				case 17:
					return "D_IAP_DLC44" /* GXT: Wave */;
				case 16:
					return "D_IAP_DLC29" /* GXT: Air Guitar */;
				case 18:
					return "D_IAP_DLC45" /* GXT: Surrender */;
				case 19:
					return "D_IAP_DLC46" /* GXT: Shush */;
				case 20:
					return "D_IAP_DLC47" /* GXT: Photography */;
				case 21:
					return "D_IAP_DLC48" /* GXT: DJ */;
				case 22:
					return "D_IAP_DLC49" /* GXT: Air Synth */;
				case 23:
					return "D_IAP_DLC20" /* GXT: No Way */;
				case 25:
					return "D_IAP_DLC9" /* GXT: Chin Brush */;
				case 24:
					return "D_IAP_DLC30" /* GXT: Chicken Taunt */;
				case 28:
					return "D_IAP_DLC28" /* GXT: You Loco */;
				case 27:
					return "D_IAP_DLC21" /* GXT: Peace */;
				case 26:
					return "D_IAP_DLC32" /* GXT: Finger Kiss */;
				case 29:
					return "D_IAP_DLC34" /* GXT: Freakout */;
				case 30:
					return "D_IAP_DLC3" /* GXT: Thumb on Ears */;
				case 31:
					return "D_IAP_CAS_2" /* GXT: Cry Baby */;
				case 32:
					return "D_IAP_CAS_3" /* GXT: Cut Throat */;
				case 33:
					return "D_IAP_CAS_4" /* GXT: Karate Chop */;
				case 34:
					return "D_IAP_CAS_6" /* GXT: Shadow Boxing */;
				case 35:
					return "D_IAP_CAS_7" /* GXT: The Woogie */;
				case 36:
					return "D_IAP_CAS_5" /* GXT: Stinker */;
				case 37:
					return "IAP_CAS_H_1" /* GXT: Air Drums */;
				case 38:
					return "IAP_CAS_H_2" /* GXT: Call Me */;
				case 39:
					return "IAP_CAS_H_3" /* GXT: Coin Roll and Toss */;
				case 40:
					return "IAP_CAS_H_4" /* GXT: Bang Bang */;
				case 41:
					return "IAP_CAS_H_5" /* GXT: Respect */;
				case 42:
					return "IAP_CAS_H_6" /* GXT: Mind Blown */;
				default:
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "IAC_BROL" /* GXT: Crew: Bro Love */;
				case 1:
					return "IAC_FING" /* GXT: Crew: The Bird */;
				case 2:
					return "IAC_WANK" /* GXT: Crew: Jerk */;
				case 3:
					return "IAC_UPYO" /* GXT: Crew: Up Yours */;
				default:
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "IAP_NONE" /* GXT: None */;
				case 1:
					return "IAP_FING" /* GXT: The Bird */;
				case 2:
					return "IAP_ROCK" /* GXT: Rock */;
				case 3:
					return "IAP_SALU" /* GXT: Salute */;
				case 4:
					return "IAP_WANK" /* GXT: Jerk */;
				case 59:
					return "IAP_SMOKE" /* GXT: Smoke */;
				case 60:
					return "IAP_DRINK1" /* GXT: Drink eCola */;
				case 61:
					return "IAP_DRINK2" /* GXT: Drink Pisswasser */;
				case 62:
					return "IAP_DRINK3" /* GXT: Drink Blêuter'd Champagne */;
				case 63:
					return "IAP_DRINK4" /* GXT: Drink Sprunk */;
				case 64:
					return "IAP_EAT1" /* GXT: Eat Snack */;
				case 65:
					return "IAP_EAT2" /* GXT: Eat EgoChaser */;
				case 66:
					return "IAP_EAT3" /* GXT: Eat Meteorite */;
				case 6:
					return "IAP_DLC37" /* GXT: Air Thrusting */;
				case 7:
					return "IAP_DLC12" /* GXT: Dock */;
				case 8:
					return "IAP_DLC18" /* GXT: Knuckle Crunch */;
				case 5:
					return "IAP_DLC1" /* GXT: Blow Kiss */;
				case 9:
					return "IAP_DLC42" /* GXT: Slow Clap */;
				case 10:
					return "IAP_DLC5" /* GXT: Face Palm */;
				case 11:
					return "IAP_DLC4" /* GXT: Thumbs Up */;
				case 12:
					return "IAP_DLC35" /* GXT: Jazz Hands */;
				case 13:
					return "IAP_DLC2" /* GXT: Nose Pick */;
				case 15:
					return "D_IAP_DLC44" /* GXT: Wave */;
				case 14:
					return "D_IAP_DLC29" /* GXT: Air Guitar */;
				case 16:
					return "D_IAP_DLC45" /* GXT: Surrender */;
				case 17:
					return "D_IAP_DLC46" /* GXT: Shush */;
				case 18:
					return "D_IAP_DLC47" /* GXT: Photography */;
				case 19:
					return "D_IAP_DLC48" /* GXT: DJ */;
				case 20:
					return "D_IAP_DLC49" /* GXT: Air Synth */;
				case 21:
					return "D_IAP_DLC20" /* GXT: No Way */;
				case 23:
					return "D_IAP_DLC9" /* GXT: Chin Brush */;
				case 22:
					return "D_IAP_DLC30" /* GXT: Chicken Taunt */;
				case 24:
					return "D_IAP_DLC32" /* GXT: Finger Kiss */;
				case 25:
					return "D_IAP_DLC21" /* GXT: Peace */;
				case 26:
					return "D_IAP_DLC28" /* GXT: You Loco */;
				case 27:
					return "D_IAP_DLC34" /* GXT: Freakout */;
				case 28:
					return "D_IAP_DLC3" /* GXT: Thumb on Ears */;
				case 30:
					return "D_IAP_BB_1" /* GXT: Banging Tunes */;
				case 29:
					return "D_IAP_BB_1L" /* GXT: Banging Tunes Left */;
				case 31:
					return "D_IAP_BB_1R" /* GXT: Banging Tunes Right */;
				case 32:
					return "D_IAP_BB_2" /* GXT: Oh Snap */;
				case 33:
					return "D_IAP_BB_3" /* GXT: Cats Cradle */;
				case 34:
					return "D_IAP_BB_4" /* GXT: Raise the Roof */;
				case 35:
					return "D_IAP_BB_5" /* GXT: Find the Fish */;
				case 36:
					return "D_IAP_BB_6" /* GXT: Salsa Roll */;
				case 37:
					return "D_IAP_BB_7" /* GXT: Heart Pumping */;
				case 38:
					return "D_IAP_BB_8" /* GXT: Uncle Disco */;
				case 40:
					return "D_IAP_CAS_2" /* GXT: Cry Baby */;
				case 41:
					return "D_IAP_CAS_3" /* GXT: Cut Throat */;
				case 42:
					return "D_IAP_CAS_4" /* GXT: Karate Chop */;
				case 43:
					return "D_IAP_CAS_6" /* GXT: Shadow Boxing */;
				case 44:
					return "D_IAP_CAS_7" /* GXT: The Woogie */;
				case 45:
					return "D_IAP_CAS_5" /* GXT: Stinker */;
				case 46:
					return "IAP_CAS_H_1" /* GXT: Air Drums */;
				case 47:
					return "IAP_CAS_H_2" /* GXT: Call Me */;
				case 48:
					return "IAP_CAS_H_3" /* GXT: Coin Roll and Toss */;
				case 49:
					return "IAP_CAS_H_4" /* GXT: Bang Bang */;
				case 50:
					return "IAP_CAS_H_5" /* GXT: Respect */;
				case 51:
					return "IAP_CAS_H_6" /* GXT: Mind Blown */;
				case 39:
					return "D_IAP_AW_1" /* GXT: Make It Rain */;
				case 58:
					return "PIM_MASK_SFX_T" /* GXT: Mask Audio */;
				case 52:
					return "D_IAP_HI_1" /* GXT: Crowd Invitation */;
				case 53:
					return "D_IAP_HI_2" /* GXT: Driver */;
				case 54:
					return "D_IAP_HI_3" /* GXT: Runner */;
				case 55:
					return "D_IAP_HI_4" /* GXT: Shooting */;
				case 56:
					return "D_IAP_HI_5" /* GXT: Suck It */;
				case 57:
					return "D_IAP_HI_6" /* GXT: Take Selfie */;
				default:
			}
			break;
	}
	return "";
}

void func_620(var uParam0)//Position - 0x5D67
{
	uParam0->f_668 = 0;
}

int func_621(var uParam0)//Position - 0x5EFB
{
	switch (uParam0->f_2)
	{
		case 5:
		case 8:
		case 6:
		case 7:
		case 4:
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

void func_622(var uParam0)//Position - 0x5F47
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = uParam0->f_950;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return;
	}
	iVar1 = joaat("SCRIPT_TASK_INVALID");
	switch (uParam0->f_2)
	{
		case 1:
		case 2:
		case 3:
			break;
		case 4:
		case 6:
			iVar1 = joaat("SCRIPT_TASK_PERFORM_SEQUENCE");
			break;
		case 5:
			iVar1 = joaat("SCRIPT_TASK_MOVE_NETWORK");
			break;
		case 8:
			iVar1 = joaat("SCRIPT_TASK_ACHIEVE_HEADING");
			break;
	}
	if (iVar1 != joaat("SCRIPT_TASK_INVALID"))
	{
		iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, iVar1);
		if (iVar2 == 0 || iVar2 == 1)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
		}
	}
}

float func_623(struct<3> Param0, struct<3> Param1)//Position - 0x98CE5
{
	return SYSTEM::VDIST2(Param0, Param1);
}

bool func_624()//Position - 0x98FC2
{
	return BitTest(Global_1946250.f_3, 7);
}

bool func_625(var uParam0)//Position - 0x99098
{
	return uParam0->f_22 > -1;
}

float func_626(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x9911D
{
	return ((((fParam0 - fParam1) / (fParam2 - fParam1)) * (fParam4 - fParam3)) + fParam3);
}

bool func_627(var uParam0)//Position - 0x99165
{
	if (uParam0->f_16 <= 0)
	{
		return 1;
	}
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_17, NETWORK::GET_NETWORK_TIME())) > uParam0->f_16;
}

void func_628(var uParam0, var uParam1, struct<3> Param2)//Position - 0x991E4
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	uParam0->f_58 = (uParam0->f_58 + ((MISC::GET_FRAME_TIME() * uParam0->f_55) * IntToFloat(uParam0->f_59)));
	fVar0 = (SYSTEM::COS(uParam0->f_58) * uParam0->f_56);
	fVar1 = (SYSTEM::SIN(uParam0->f_58) * uParam0->f_56);
	Var2 = { fVar0, fVar1, 0f };
	Var3 = { Param2 + Var2 };
	CAM::SET_CAM_COORD(*uParam1, Var3);
}

void func_629(var uParam0)//Position - 0x9929B
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_7))
	{
		uParam0->f_7 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 0f, 0f, 0f, 0f, 0f, 0f, 65f, false, 2);
	}
}

void func_630(var uParam0, var uParam1)//Position - 0x99596
{
	if (__LIB_0__.func_492(uParam1, 0))
	{
		CAM::SET_CAM_PARAMS(*uParam0, uParam1->f_9, uParam1->f_12, uParam1->f_7, uParam1->f_15, uParam1->f_18, 1, 2);
	}
}

void func_631(var uParam0, var uParam1)//Position - 0x995C9
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (__LIB_0__.func_492(uParam1, 3))
	{
		uParam1->f_58 = uParam1->f_57;
		fVar0 = (SYSTEM::COS(uParam1->f_58) * uParam1->f_56);
		fVar1 = (SYSTEM::SIN(uParam1->f_58) * uParam1->f_56);
		Var2 = { fVar0, fVar1, 0f };
		Var3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_54, true) + Var2 + uParam1->f_51 };
		CAM::SET_CAM_PARAMS(*uParam0, Var3, uParam1->f_4, uParam1->f_7, 0, 1, 1, 2);
	}
}

void func_632(var uParam0, var uParam1)//Position - 0x9963C
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (__LIB_0__.func_492(uParam1, 2))
	{
		uParam1->f_58 = uParam1->f_57;
		fVar0 = (SYSTEM::COS(uParam1->f_58) * uParam1->f_56);
		fVar1 = (SYSTEM::SIN(uParam1->f_58) * uParam1->f_56);
		Var2 = { fVar0, fVar1, 0f };
		Var3 = { uParam1->f_48 + Var2 };
		CAM::SET_CAM_PARAMS(*uParam0, Var3, uParam1->f_4, uParam1->f_7, 0, 1, 1, 2);
	}
}

void func_633(var uParam0, var uParam1)//Position - 0x996A5
{
	if (__LIB_0__.func_492(uParam1, 1))
	{
		CAM::SHAKE_CAM(*uParam0, &(uParam1->f_31), uParam1->f_47);
	}
	else
	{
		CAM::STOP_CAM_SHAKING(*uParam0, true);
	}
}

void func_634(var uParam0, var uParam1)//Position - 0x996D1
{
	if (__LIB_0__.func_492(uParam1, 4))
	{
		CAM::POINT_CAM_AT_ENTITY(*uParam0, uParam1->f_24, uParam1->f_25, true);
	}
	else if (__LIB_0__.func_492(uParam1, 5))
	{
		CAM::POINT_CAM_AT_COORD(*uParam0, uParam1->f_28);
	}
	else
	{
		CAM::STOP_CAM_POINTING(*uParam0);
	}
}

void func_635(var uParam0, var uParam1)//Position - 0x99719
{
	if (__LIB_0__.func_492(uParam1, 6))
	{
		uParam1->f_21 = 0f;
		CAM::SET_CAM_FOV(*uParam0, uParam1->f_7);
	}
}

void func_636(var uParam0)//Position - 0x9973B
{
	if (uParam0->f_22 > 0)
	{
		uParam0->f_23 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_637(var uParam0)//Position - 0x99753
{
	if (*uParam0 <= 0f)
	{
		*uParam0 = 65f;
	}
}

void func_638(var* uParam0)//Position - 0x9976B
{
	struct<23> Var0;
	Var0.f_7 = 1115815936;
	Var0.f_8 = 1120403456;
	Var0.f_16 = -1;
	Var0.f_20 = 1115815936;
	Var0.f_22 = -1;
	MISC::COPY_SCRIPT_STRUCT(uParam0, &Var0, 60);
}

float func_639(var uParam0, int iParam1)//Position - 0x99887
{
	struct<60> Var0;
	Var0.f_7 = 1115815936;
	Var0.f_8 = 1120403456;
	Var0.f_16 = -1;
	Var0.f_20 = 1115815936;
	Var0.f_22 = -1;
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_5);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return Var0.f_8;
}

void func_640(var uParam0, bool bParam1)//Position - 0x998D8
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_72))
	{
		return;
	}
	CAM::SET_CAM_ACTIVE(uParam0->f_72, bParam1);
	CAM::RENDER_SCRIPT_CAMS(bParam1, false, 3000, true, false, 0);
}

int func_641(var uParam0)//Position - 0x99906
{
	float fVar0;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_72))
	{
		return 0;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/));
	}
	fVar0 = PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/);
	if (MISC::ABSF(fVar0) < 0.12f)
	{
		uParam0->f_73 = 1;
		return 0;
	}
	if (!uParam0->f_73)
	{
		return 0;
	}
	if (MISC::ABSF(fVar0) > 0.8f)
	{
		uParam0->f_73 = 0;
		return 1;
	}
	return 0;
}

void func_642(var uParam0)//Position - 0x999CA
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (uParam0->f_7 != 0)
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_7, false);
	}
	CAM::DESTROY_CAM(uParam0->f_7, false);
	uParam0->f_7 = 0;
	uParam0->f_4 = 0;
}

int func_643()//Position - 0x99A48
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	return 0;
}

void func_644(int iParam0)//Position - 0x9AFA6
{
	int iVar0;
	Global_1978963.f_2 = (Global_1978963.f_2 + iParam0);
	if (Global_1978963.f_1 == 0)
	{
		Global_1978963.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (Global_1978963.f_2 >= Global_262145.f_32740 /* Tunable: 80137816 */ && !BitTest(Global_1978963, 0))
	{
		iVar0 = (((Global_1978963.f_1 % 86400) / 60) / 10);
		__LIB_1__.func_39(34120, iVar0, -1);
		MISC::SET_BIT(&Global_1978963, 0);
	}
	if (Global_1978963.f_1 != 0 && (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1978963.f_1) >= Global_262145.f_32741 /* Tunable: -1315133797 */ * 60)
	{
		Global_1978963.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1978963.f_2 = iParam0;
	}
}

int func_645(var uParam0)//Position - 0x9B12B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (BitTest(Global_1978963, 0))
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1978963.f_1);
		if (iVar0 >= Global_262145.f_32741 /* Tunable: -1315133797 */ * 60)
		{
			MISC::CLEAR_BIT(&Global_1978963, 0);
			__LIB_0__.func_579(uParam0);
			__LIB_0__.func_580(uParam0, 0, 0);
			Global_1978963.f_1 = 0;
			Global_1978963.f_2 = 0;
			return 1;
		}
		return 0;
	}
	else if (!BitTest(Global_1978963, 1))
	{
		if (Global_1978963.f_1 == 0)
		{
			iVar1 = __LIB_0__.func_228(34120, -1) * 10;
			iVar2 = ((NETWORK::GET_CLOUD_TIME_AS_INT() % 86400) / 60);
			if (iVar1 != 0)
			{
				iVar3 = (iVar2 - iVar1);
				if (iVar3 < Global_262145.f_32741 /* Tunable: -1315133797 */)
				{
					MISC::SET_BIT(&Global_1978963, 0);
					Global_1978963.f_1 = (NETWORK::GET_CLOUD_TIME_AS_INT() - iVar3 * 60);
					MISC::SET_BIT(&Global_1978963, 1);
					return 0;
				}
			}
		}
		MISC::SET_BIT(&Global_1978963, 1);
	}
	return 1;
}

void func_646(var uParam0)//Position - 0x9B2F9
{
	Call_Loc(uParam0->f_915.f_4);
}

void func_647(var uParam0, bool bParam1)//Position - 0x9B373
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_IS_MOUSE_CONTROL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_648(struct<3> Param0, struct<3> Param1)//Position - 0x9B508
{
	return ((Param0.f_0 == Param1.f_0 && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

Vector3 func_649()//Position - 0x9B531
{
	struct<3> Var0;
	Var0.f_0 = 255;
	Var0.f_1 = 255;
	Var0.f_2 = 255;
	return Var0;
}

void func_650()//Position - 0x9B665
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
}

int func_651(var uParam0)//Position - 0x9B836
{
	switch (uParam0->f_2)
	{
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
		default:
	}
	return 0;
}

void func_652(var uParam0)//Position - 0x9B987
{
	if (__LIB_0__.func_492(&(uParam0->f_390), 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			__LIB_0__.func_151("DM_AREA_BLOCK" /* GXT: You cannot dance here. */, -1);
		}
		__LIB_1__.func_846(&(uParam0->f_390), 15);
	}
	if (__LIB_0__.func_492(&(uParam0->f_390), 30))
	{
		__LIB_0__.func_151("DUAL_DANCE_BLOCK" /* GXT: No room to dance with another player here. Find an open space. */, 5000);
		__LIB_1__.func_846(&(uParam0->f_390), 30);
	}
}

void func_653(var uParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x9BA02
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (!bParam3)
		{
			if (uParam1->f_1 == 0)
			{
				*uParam1 = NETWORK::GET_NETWORK_TIME();
				uParam1->f_1 = 1;
			}
			*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(*uParam1, NETWORK::GET_NETWORK_TIME())));
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, NETWORK::GET_TIME_DIFFERENCE(*uParam1, NETWORK::GET_NETWORK_TIME_ACCURATE()));
			*uParam1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(*uParam0, NETWORK::GET_TIME_DIFFERENCE(*uParam1, MISC::GET_GAME_TIMER()));
		*uParam1 = MISC::GET_GAME_TIMER();
	}
}

int func_654(var uParam0, int iParam1)//Position - 0x9BBE5
{
	if (uParam0->f_915.f_14 == 0)
	{
		return 0;
	}
	Stack.Push(iParam1);
	Call_Loc(uParam0->f_915.f_14);
	return StackVal;
}

bool func_655(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9BC06
{
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(uParam3);
	Call_Loc(uParam0->f_915);
	return StackVal;
}

int func_656(var uParam0)//Position - 0x9BD10
{
	int iVar0;
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 14:
			return 1060019396;
		case 6:
			return -1634861626;
		case 20:
			return -472594519;
		case 5:
			return -281304430;
		case 22:
			return -1909664924;
		case 23:
			return -725759222;
		case 19:
			return 326146422;
		case 7:
			return 189415987;
		case 10:
			return -147599498;
		case 1:
			return -655101763;
		case 24:
			return 2144708692;
		case 27:
			return -1488336297;
		case 12:
			return -1984713080;
		case 8:
			return 1306164992;
		case 13:
			return -1843340746;
		case 21:
			return 548721497;
		case 25:
			return 1154643404;
		case 18:
			return -1241736324;
		case 2:
			return 1646704259;
		case 3:
			return 1598686825;
		case 17:
			return 330295684;
		case 9:
			return 1592731892;
		case 16:
			return -868747565;
		case 11:
			return -1989705673;
		case 28:
			return -1404453406;
		case 4:
			return -670631191;
		case 26:
			return -168777489;
		case 30:
			return 899434210;
		case 29:
			return 1991789120;
		case 31:
			return 1881076244;
		case 33:
			return 722615145;
		case 35:
			return -1287152806;
		case 37:
			return 1754505287;
		case 32:
			return -1563474555;
		case 34:
			return -791029090;
		case 36:
			return 1142722224;
		case 38:
			return 915215317;
		case 52:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@CROWD_INVITATION");
		case 53:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@DRIVER");
		case 54:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@RUNNER");
		case 55:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@SHOOTING");
		case 56:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@SUCK_IT");
		case 57:
			return joaat("NIGHTCLUB@DANCE_MINIGAME@UPPERBODY@TAKE_SELFIE");
		default:
	}
	return 0;
}

void func_657(var uParam0, int iParam1)//Position - 0x9BFB7
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_LEVEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_658(var uParam0, bool bParam1)//Position - 0x9C017
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_METER_IS_RED");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_659(var uParam0)//Position - 0x9C043
{
	if (!__LIB_0__.func_492(&(uParam0->f_390), 11))
	{
		uParam0->f_675 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("DANCER");
		__LIB_1__.func_845(&(uParam0->f_390), 11);
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_675);
}

void func_660(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x9C07B
{
	uParam0->f_395.f_1 = uParam2;
	uParam0->f_395 = uParam1;
	uParam0->f_394 = uParam3;
	uParam0->f_628 = uParam3;
	uParam0->f_667 = 0;
}

bool func_661()//Position - 0x9C1A4
{
	struct<3> Var0;
	Var0 = { PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/), PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/), 0f };
	return (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("break_out")) && SYSTEM::VMAG(Var0) >= 0.24f);
}

bool func_662(var uParam0, int iParam1)//Position - 0x9C2D1
{
	return uParam0->f_4[iParam1 /*12*/].f_1;
}

int func_663(int iParam0)//Position - 0x9C2E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!__LIB_0__.func_121(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
	{
		return 0;
	}
	if (NETWORK::IS_PLAYER_IN_CUTSCENE(iParam0))
	{
		return 0;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(iParam0);
	if (ENTITY::IS_ENTITY_IN_WATER(iVar2) || PED::IS_PED_SWIMMING(iVar2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iVar2))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iVar2))
	{
		return 1;
	}
	return 1;
}

int func_664(var uParam0, int iParam1)//Position - 0x9C508
{
	return uParam0->f_4[iParam1 /*12*/].f_11;
}

struct<6> func_665(var uParam0, int iParam1)//Position - 0x9C62F
{
	return uParam0->f_4[iParam1 /*12*/].f_5;
}

float func_666(char* sParam0, char* sParam1)//Position - 0x9C643
{
	var uVar0;
	var uVar1;
	if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, "ENTER", &uVar0, &uVar1))
	{
		return uVar0;
	}
	return 0f;
}

struct<49> func_667(var uParam0, var uParam1, var uParam2)//Position - 0x9C676
{
	struct<49> Var0;
	Var0.f_17 = 5;
	Var0.f_17.f_1.f_1 = 1069547520;
	Var0.f_17.f_1.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_17.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_17.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_33 = 5;
	Var0.f_33.f_1.f_1 = 1069547520;
	Var0.f_33.f_1.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var0.f_33.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var0.f_33.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	if (uParam0->f_915.f_13 == 0)
	{
		*uParam2 = 0;
		return Var0;
	}
	Stack.Push(uParam1);
	Stack.Push(&Var0);
	Call_Loc(uParam0->f_915.f_13);
	*uParam2 = StackVal;
	return Var0;
}

var func_668(var uParam0, int iParam1)//Position - 0x9C7C6
{
	return uParam0->f_4[iParam1 /*12*/].f_4;
}

var func_669(var uParam0)//Position - 0x9C7D8
{
	return uParam0->f_4[uParam0->f_949 /*12*/].f_4;
}

int func_670()//Position - 0x9D1BB
{
	if (Global_2787730)
	{
		return 1;
	}
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 10:
			return 1;
		case 7:
			return 1;
		case 1:
			return 1;
		default:
	}
	return 0;
}

bool func_671(var uParam0)//Position - 0x9D1F6
{
	return __LIB_0__.func_492(&(uParam0->f_390), 20);
}

float func_672(char* sParam0, char* sParam1)//Position - 0x9D904
{
	var uVar0;
	var uVar1;
	if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, "EXIT", &uVar0, &uVar1))
	{
		return uVar0;
	}
	return 1f;
}

float func_673(var uParam0)//Position - 0x9DB57
{
	return __LIB_0__.func_408(0.3f, 1f, uParam0->f_394);
}

int func_674(var uParam0)//Position - 0x9DB6E
{
	int iVar0;
	int iVar1;
	struct<34> Var2;
	if (uParam0->f_915.f_13 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = 0;
	Var2.f_17 = 5;
	Var2.f_17.f_1.f_1 = 1069547520;
	Var2.f_17.f_1.f_2 = -1077936128;
	Var2.f_17.f_1.f_3.f_1 = 1069547520;
	Var2.f_17.f_1.f_3.f_2 = -1077936128;
	Var2.f_17.f_1.f_3.f_3.f_1 = 1069547520;
	Var2.f_17.f_1.f_3.f_3.f_2 = -1077936128;
	Var2.f_17.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var2.f_17.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var2.f_17.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var2.f_17.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	Var2.f_33 = 5;
	Var2.f_33.f_1.f_1 = 1069547520;
	Var2.f_33.f_1.f_2 = -1077936128;
	Var2.f_33.f_1.f_3.f_1 = 1069547520;
	Var2.f_33.f_1.f_3.f_2 = -1077936128;
	Var2.f_33.f_1.f_3.f_3.f_1 = 1069547520;
	Var2.f_33.f_1.f_3.f_3.f_2 = -1077936128;
	Var2.f_33.f_1.f_3.f_3.f_3.f_1 = 1069547520;
	Var2.f_33.f_1.f_3.f_3.f_3.f_2 = -1077936128;
	Var2.f_33.f_1.f_3.f_3.f_3.f_3.f_1 = 1069547520;
	Var2.f_33.f_1.f_3.f_3.f_3.f_3.f_2 = -1077936128;
	Stack.Push(iVar1);
	Stack.Push(&Var2);
	Call_Loc(uParam0->f_915.f_13);
	while (StackVal)
	{
		iVar1++;
		iVar0++;
	}
	return iVar0;
}

void func_675(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3)//Position - 0x9DDEF
{
	int iVar0;
	iVar0 = uParam1;
	uParam0->f_4[iVar0 /*12*/].f_5 = { Param2 };
	uParam0->f_4[iVar0 /*12*/].f_5.f_3 = { Param3 };
}

void func_676(var uParam0, int iParam1, bool bParam2)//Position - 0x9E532
{
	uParam0->f_665 = (uParam0->f_785.f_2 + iParam1);
	uParam0->f_666 = bParam2;
}

int func_677()//Position - 0x9E664
{
	return 1251925678;
}

int func_678(int iParam0, int iParam1)//Position - 0x9E722
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 62:
					if (__LIB_0__.func_649(&Global_2788055))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_679(int iParam0, int iParam1)//Position - 0x9E75A
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
				case 2:
				case 3:
					return 0;
					break;
				default:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_680(int iParam0, int iParam1)//Position - 0x9E7FF
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1098;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 59:
					return 1098;
					break;
				case 60:
					return 62;
					break;
				case 61:
					return 63;
					break;
				case 62:
					return 7870;
					break;
				case 63:
					return 10404;
					break;
				case 64:
					return 1276;
					break;
				case 65:
					return 1277;
					break;
				case 66:
					return 1278;
					break;
			}
			break;
	}
	return 0;
}

int func_681(var uParam0)//Position - 0x9E8B4
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 64 || uParam0->f_1 == 65) || uParam0->f_1 == 66)
		{
			return 1;
		}
	}
	return 0;
}

void func_682(var uParam0, var uParam1)//Position - 0x9E8EC
{
	Global_4521801 = uParam0;
	Global_4521801.f_1 = uParam1;
}

void func_683(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x9E923
{
	*uParam2 = { Global_4522782 };
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					break;
				case 1:
					StringCopy(uParam2[1 /*16*/], "amb@code_human_in_car_mp_actions@smoke@low@ps@base", 64);
					StringCopy(uParam2[4 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@rds@base", 64);
					StringCopy(uParam2[5 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@rps@base", 64);
					StringCopy(uParam2[3 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ps@base", 64);
					StringCopy(uParam2[8 /*16*/], "amb@code_human_in_car_mp_actions@smoke@bodhi@rps@base", 64);
					StringCopy(uParam2[9 /*16*/], "amb@code_human_in_car_mp_actions@smoke@bodhi@rps@base", 64);
					StringCopy(uParam2[6 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ds@base", 64);
					StringCopy(uParam2[7 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ps@base", 64);
					StringCopy(uParam2[2 /*16*/], "amb@code_human_in_car_mp_actions@smoke@std@ds@base", 64);
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@smoke@low@ds@base", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke_car", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth_car", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse_car", 64);
					uParam2->f_430 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					break;
				case 2:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfingerlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfingerstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfingerstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfingerstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfingerbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfingerbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfingerbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfingerbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfingerstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfingerlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 3:
					StringCopy(uParam2[1 /*16*/], "amb@code_human_in_car_mp_actions@dance@low@ps@base", 64);
					StringCopy(uParam2[4 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@rds@base", 64);
					StringCopy(uParam2[5 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@rps@base", 64);
					StringCopy(uParam2[3 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ps@base", 64);
					StringCopy(uParam2[8 /*16*/], "amb@code_human_in_car_mp_actions@dance@bodhi@rds@base", 64);
					StringCopy(uParam2[9 /*16*/], "amb@code_human_in_car_mp_actions@dance@bodhi@rds@base", 64);
					StringCopy(uParam2[6 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ps@base", 64);
					StringCopy(uParam2[7 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ds@base", 64);
					StringCopy(uParam2[2 /*16*/], "amb@code_human_in_car_mp_actions@dance@std@ds@base", 64);
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@dance@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					break;
				case 4:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarrocklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarrockstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarrockstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarrockstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarrockbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarrockbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarrockbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarrockbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarrockstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarrocklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 5:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarwanklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarwankstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarwankstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarwankstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarwankbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarwankbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarwankbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarwankbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarwankstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarwanklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 7:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_shagginglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_shaggingstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_shaggingstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_shaggingstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_shaggingbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_shaggingstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_shagginglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					break;
				case 8:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincardocklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincardockstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincardockstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincardockstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincardockbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincardockbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincardockbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincardockbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincardockstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincardocklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 9:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarknuckle_crunchlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarknuckle_crunchbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarknuckle_crunchstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarknuckle_crunchlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_490 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 10:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarsalutelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarsalutestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarsalutestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarsalutestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarsalutebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarsalutebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarsalutebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarsalutebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarsalutestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarsalutelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 6:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarblow_kisslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarblow_kissstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarblow_kissstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarblow_kissstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarblow_kissbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarblow_kissbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarblow_kissbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarblow_kissbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarblow_kissstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarblow_kisslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					break;
				case 11:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarslow_claplow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarslow_clapstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarslow_clapstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarslow_clapstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarslow_clapbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarslow_clapbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarslow_clapbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarslow_clapbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarslow_clapstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarslow_claplow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_490 = 1;
					break;
				case 12:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarface_palmlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarface_palmstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarface_palmstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarface_palmstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarface_palmbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarface_palmbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarface_palmbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarface_palmbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarface_palmstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarface_palmlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 13:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarthumbs_uplow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarthumbs_upstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarthumbs_upstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarthumbs_upstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarthumbs_upbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarthumbs_upstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarthumbs_uplow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 14:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarjazz_handslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarjazz_handsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarjazz_handsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarjazz_handsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarjazz_handsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarjazz_handsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarjazz_handslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 15:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarnose_picklow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarnose_pickstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarnose_pickstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarnose_pickstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarnose_pickbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarnose_pickbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarnose_pickbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarnose_pickbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarnose_pickstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarnose_picklow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 17:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarwavelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarwavestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarwavestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarwavestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarwavebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarwavebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarwavebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarwavebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarwavestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarwavelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 16:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_guitarlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_guitarstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_guitarstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_guitarstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_guitarbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_guitarbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_guitarbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_guitarbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_guitarstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_guitarlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 18:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarsurrenderlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarsurrenderstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarsurrenderstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarsurrenderstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarsurrenderbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarsurrenderbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarsurrenderbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarsurrenderbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarsurrenderstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarsurrenderlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 19:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarshushlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarshushstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarshushstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarshushstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarshushbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarshushbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarshushbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarshushbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarshushstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarshushlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 20:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarphotographylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarphotographystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarphotographystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarphotographystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarphotographybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarphotographybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarphotographybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarphotographybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarphotographystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarphotographylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 21:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincardjlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincardjstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincardjstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincardjstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincardjbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincardjbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincardjbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincardjbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincardjstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincardjlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 22:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_synthlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_synthstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_synthstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_synthstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_synthbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_synthbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_synthbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_synthbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_synthstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_synthlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 23:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarno_waylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarno_waystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarno_waystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarno_waystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarno_waybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarno_waybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarno_waybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarno_waybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarno_waystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarno_waylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 25:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarchin_brushlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarchin_brushstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarchin_brushstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarchin_brushstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarchin_brushbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarchin_brushbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarchin_brushbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarchin_brushbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarchin_brushstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarchin_brushlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 24:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarchicken_tauntlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarchicken_tauntstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarchicken_tauntstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarchicken_tauntstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarchicken_tauntbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarchicken_tauntstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarchicken_tauntlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 26:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfinger_kisslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfinger_kissstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfinger_kissstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfinger_kissstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfinger_kissbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfinger_kissstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfinger_kisslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 27:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarpeacelow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarpeacestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarpeacestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarpeacestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarpeacebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarpeacebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarpeacebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarpeacebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarpeacestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarpeacelow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 28:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincaryou_locolow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincaryou_locostd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincaryou_locostd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincaryou_locostd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincaryou_locobodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincaryou_locobodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincaryou_locobodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincaryou_locobodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincaryou_locostd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincaryou_locolow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 29:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarfreakoutlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarfreakoutstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarfreakoutstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarfreakoutstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarfreakoutbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarfreakoutbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarfreakoutbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarfreakoutbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarfreakoutstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarfreakoutlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 30:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarthumb_on_earslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarthumb_on_earsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarthumb_on_earsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarthumb_on_earslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 31:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carcry_babylow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carcry_babystd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carcry_babystd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carcry_babystd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carcry_babybodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carcry_babybodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carcry_babybodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carcry_babybodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carcry_babystd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carcry_babylow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 32:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carcut_throatlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carcut_throatstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carcut_throatstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carcut_throatstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carcut_throatbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carcut_throatstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carcut_throatlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 33:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carkarate_chopslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carkarate_chopsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carkarate_chopsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carkarate_chopslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 34:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carshadow_boxinglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carshadow_boxingbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carshadow_boxingstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carshadow_boxinglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 35:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carthe_woogielow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carthe_woogiestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carthe_woogiestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carthe_woogiestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carthe_woogiebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carthe_woogiestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carthe_woogielow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 36:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intin_carstinkerlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intin_carstinkerstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intin_carstinkerstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intin_carstinkerstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intin_carstinkerbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intin_carstinkerbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intin_carstinkerbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intin_carstinkerbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intin_carstinkerstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intin_carstinkerlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 37:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarair_drumslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarair_drumsstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarair_drumsstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarair_drumsstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarair_drumsbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarair_drumsbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarair_drumsbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarair_drumsbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarair_drumsstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarair_drumslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 38:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarcall_melow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarcall_mestd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarcall_mestd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarcall_mestd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarcall_mebodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarcall_mebodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarcall_mebodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarcall_mebodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarcall_mestd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarcall_melow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 39:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarcoin_roll_and_tosslow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarcoin_roll_and_tossstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarcoin_roll_and_tosslow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("vw_prop_vw_coin_01a");
					uParam2->f_424 = 1;
					break;
				case 40:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarbang_banglow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarbang_bangstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarbang_bangstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarbang_bangstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarbang_bangbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarbang_bangbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarbang_bangbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarbang_bangbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarbang_bangstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarbang_banglow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 41:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarrespectlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarrespectstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarrespectstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarrespectstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarrespectbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarrespectbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarrespectbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarrespectbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarrespectstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarrespectlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 42:
					StringCopy(uParam2[1 /*16*/], "anim@mp_player_intincarmind_blownlow@ps@", 64);
					StringCopy(uParam2[4 /*16*/], "anim@mp_player_intincarmind_blownstd@rds@", 64);
					StringCopy(uParam2[5 /*16*/], "anim@mp_player_intincarmind_blownstd@rps@", 64);
					StringCopy(uParam2[3 /*16*/], "anim@mp_player_intincarmind_blownstd@ps@", 64);
					StringCopy(uParam2[8 /*16*/], "anim@mp_player_intincarmind_blownbodhi@rds@", 64);
					StringCopy(uParam2[9 /*16*/], "anim@mp_player_intincarmind_blownbodhi@rps@", 64);
					StringCopy(uParam2[6 /*16*/], "anim@mp_player_intincarmind_blownbodhi@ds@", 64);
					StringCopy(uParam2[7 /*16*/], "anim@mp_player_intincarmind_blownbodhi@ps@", 64);
					StringCopy(uParam2[2 /*16*/], "anim@mp_player_intincarmind_blownstd@ds@", 64);
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intincarmind_blownlow@ds@", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_209), "ENTER", 64);
					StringCopy(&(uParam2->f_225), "IDLE_A", 64);
					StringCopy(&(uParam2->f_241), "EXIT", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperbro_love", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_bro_love_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_bro_love", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_bro_love_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@bro_love", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@bro_love", 64);
					StringCopy(&(uParam2->f_257), "bro_love", 64);
					uParam2->f_418 = 1;
					uParam2->f_489 = 2;
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "mp_player_int_upperbro_love", 64);
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperfinger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_finger_02_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_finger_02", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_finger_02_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger", 64);
					StringCopy(&(uParam2->f_257), "finger", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperwank", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_wank_02_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_wank_02", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_wank_02_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(&(uParam2->f_257), "wank", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upperup_yours", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_up_yours_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_up_yours", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_up_yours_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@up_yours", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@up_yours", 64);
					StringCopy(&(uParam2->f_257), "up_yours", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfinger", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger", 64);
					StringCopy(&(uParam2->f_257), "finger", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiethe_bird", 64);
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrock", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperrock", 64);
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersalute", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@salute", 64);
					StringCopy(&(uParam2->f_257), "salute", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppersalute", 64);
					break;
				case 4:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperwank", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@wank", 64);
					StringCopy(&(uParam2->f_257), "wank", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiewank", 64);
					break;
				case 59:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_uppersmoke", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_smoke_ENTER", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_smoke", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_smoke_EXIT", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@smoke_flick", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@smoke_flick", 64);
					StringCopy(&(uParam2->f_257), "smoke_flick", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					uParam2->f_430 = 1;
					break;
				case 60:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro", 64);
					StringCopy(&(uParam2->f_225), "Loop", 64);
					StringCopy(&(uParam2->f_241), "Outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ecola_can");
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 61:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro_bottle", 64);
					StringCopy(&(uParam2->f_225), "Loop_bottle", 64);
					StringCopy(&(uParam2->f_241), "Outro_bottle", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_amb_beer_bottle");
					uParam2->f_488 = 3;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 62:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperspray_champagne", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@spray_champagne", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@spray_champagne", 64);
					StringCopy(&(uParam2->f_257), "spray_champagne", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_429 = joaat("xs_prop_arena_champ_closed");
					uParam2->f_428 = 1;
					uParam2->f_424 = 1;
					uParam2->f_488 = 3;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					uParam2->f_422 = 1;
					break;
				case 63:
					StringCopy(uParam2[0 /*16*/], "mp_player_intdrink", 64);
					StringCopy(&(uParam2->f_209), "Intro", 64);
					StringCopy(&(uParam2->f_225), "Loop", 64);
					StringCopy(&(uParam2->f_241), "Outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ld_can_01b");
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 39:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperraining_cash", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@raining_cash", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@raining_cash", 64);
					StringCopy(&(uParam2->f_257), "raining_cash", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_421 = 1;
					uParam2->f_423 = 1;
					uParam2->f_429 = joaat("xs_prop_arena_cash_pile_l");
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperraining_cash", 64);
					uParam2->f_422 = 1;
					break;
				case 58:
					StringCopy(&(uParam2->f_369), "HLWN_22", 64);
					StringCopy(&(uParam2->f_385), "Mask_SFX", 64);
					StringCopy(&(uParam2->f_401), "SPEECH_PARAMS_FORCE_NORMAL", 64);
					uParam2->f_417 = 1;
					break;
				case 64:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@pnq", 64);
					StringCopy(&(uParam2->f_209), "intro", 64);
					StringCopy(&(uParam2->f_225), "loop", 64);
					StringCopy(&(uParam2->f_241), "outro", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_pq");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 65:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@burger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_eat_burger_enter", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_eat_burger", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_eat_exit_burger", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_ego");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 66:
					StringCopy(uParam2[0 /*16*/], "mp_player_inteat@burger", 64);
					StringCopy(&(uParam2->f_209), "mp_player_int_eat_burger_enter", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_eat_burger", 64);
					StringCopy(&(uParam2->f_241), "mp_player_int_eat_exit_burger", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationmale@rock", 64);
					StringCopy(&(uParam2->f_257), "rock", 64);
					uParam2->f_418 = 1;
					uParam2->f_425 = 1;
					uParam2->f_426 = 0;
					uParam2->f_427 = 0;
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_choc_meto");
					uParam2->f_489 = 2;
					uParam2->f_430 = 1;
					uParam2->f_490 = 1;
					break;
				case 6:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_shagging", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_shagging", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_shagging", 64);
					StringCopy(&(uParam2->f_257), "air_shagging", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 7:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdock", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@dock", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@dock", 64);
					StringCopy(&(uParam2->f_257), "dock", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiedock", 64);
					break;
				case 8:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperknuckle_crunch", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@knuckle_crunch", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@knuckle_crunch", 64);
					StringCopy(&(uParam2->f_257), "knuckle_crunch", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_490 = 1;
					break;
				case 5:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperblow_kiss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@blow_kiss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@blow_kiss", 64);
					StringCopy(&(uParam2->f_257), "blow_kiss", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfieblow_kiss", 64);
					break;
				case 9:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperslow_clap", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@slow_clap", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@slow_clap", 64);
					StringCopy(&(uParam2->f_257), "slow_clap", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_490 = 1;
					break;
				case 10:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperface_palm", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@face_palm", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@face_palm", 64);
					StringCopy(&(uParam2->f_257), "face_palm", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperface_palm", 64);
					break;
				case 11:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthumbs_up", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@thumbs_up", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@thumbs_up", 64);
					StringCopy(&(uParam2->f_257), "thumbs_up", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intselfiethumbs_up", 64);
					break;
				case 12:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperjazz_hands", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@jazz_hands", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@jazz_hands", 64);
					StringCopy(&(uParam2->f_257), "jazz_hands", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperjazz_hands", 64);
					break;
				case 13:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppernose_pick", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@nose_pick", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@nose_pick", 64);
					StringCopy(&(uParam2->f_257), "nose_pick", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppernose_pick", 64);
					break;
				case 15:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperwave", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@wave", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@wave", 64);
					StringCopy(&(uParam2->f_257), "wave", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperwave", 64);
					break;
				case 14:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_guitar", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_guitar", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_guitar", 64);
					StringCopy(&(uParam2->f_257), "air_guitar", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_guitar", 64);
					break;
				case 16:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersurrender", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@surrender", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@surrender", 64);
					StringCopy(&(uParam2->f_257), "surrender", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppersurrender", 64);
					break;
				case 17:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershush", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shush", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shush", 64);
					StringCopy(&(uParam2->f_257), "shush", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_418 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppershush", 64);
					break;
				case 18:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperphotography", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@photography", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@photography", 64);
					StringCopy(&(uParam2->f_257), "photography", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperphotography", 64);
					break;
				case 19:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdj", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@dj", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@dj", 64);
					StringCopy(&(uParam2->f_257), "dj", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperdj", 64);
					break;
				case 20:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_synth", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_synth", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_synth", 64);
					StringCopy(&(uParam2->f_257), "air_synth", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_synth", 64);
					break;
				case 21:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperno_way", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@no_way", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@no_way", 64);
					StringCopy(&(uParam2->f_257), "no_way", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperno_way", 64);
					break;
				case 23:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperchin_brush", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@chin_brush", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@chin_brush", 64);
					StringCopy(&(uParam2->f_257), "chin_brush", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperchin_brush", 64);
					break;
				case 22:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperchicken_taunt", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@chicken_taunt", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@chicken_taunt", 64);
					StringCopy(&(uParam2->f_257), "chicken_taunt", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperchicken_taunt", 64);
					break;
				case 25:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperpeace", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@peace", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@peace", 64);
					StringCopy(&(uParam2->f_257), "peace", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperpeace", 64);
					break;
				case 24:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfinger_kiss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@finger_kiss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@finger_kiss", 64);
					StringCopy(&(uParam2->f_257), "finger_kiss", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperfinger_kiss", 64);
					break;
				case 26:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperyou_loco", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@you_loco", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@you_loco", 64);
					StringCopy(&(uParam2->f_257), "you_loco", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperyou_loco", 64);
					break;
				case 27:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfreakout", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@freakout", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@freakout", 64);
					StringCopy(&(uParam2->f_257), "freakout", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					break;
				case 28:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthumb_on_ears", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@thumb_on_ears", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@thumb_on_ears", 64);
					StringCopy(&(uParam2->f_257), "thumb_on_ears", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 1;
					break;
				case 30:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 29:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes_left", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes_left", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes_left", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 31:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbanging_tunes_right", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@banging_tunes_right", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@banging_tunes_right", 64);
					StringCopy(&(uParam2->f_257), "banging_tunes", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 32:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperoh_snap", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@oh_snap", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@oh_snap", 64);
					StringCopy(&(uParam2->f_257), "oh_snap", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 33:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercats_cradle", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cats_cradle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cats_cradle", 64);
					StringCopy(&(uParam2->f_257), "cats_cradle", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 34:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperraise_the_roof", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@raise_the_roof", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@raise_the_roof", 64);
					StringCopy(&(uParam2->f_257), "raise_the_roof", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 35:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperfind_the_fish", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@find_the_fish", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@find_the_fish", 64);
					StringCopy(&(uParam2->f_257), "find_the_fish", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 36:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersalsa_roll", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@salsa_roll", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@salsa_roll", 64);
					StringCopy(&(uParam2->f_257), "salsa_roll", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 37:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperheart_pumping", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@heart_pumping", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@heart_pumping", 64);
					StringCopy(&(uParam2->f_257), "heart_pumping", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 38:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperuncle_disco", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@uncle_disco", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@uncle_disco", 64);
					StringCopy(&(uParam2->f_257), "uncle_disco", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					*(uParam2[12 /*16*/]) = { *(uParam2[0 /*16*/]) };
					break;
				case 40:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercry_baby", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cry_baby", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cry_baby", 64);
					StringCopy(&(uParam2->f_257), "cry_baby", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercry_baby", 64);
					break;
				case 41:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercut_throat", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@cut_throat", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@cut_throat", 64);
					StringCopy(&(uParam2->f_257), "cut_throat", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercut_throat", 64);
					break;
				case 42:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperkarate_chops", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@karate_chops", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@karate_chops", 64);
					StringCopy(&(uParam2->f_257), "karate_chops", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperkarate_chops", 64);
					break;
				case 43:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershadow_boxing", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shadow_boxing", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shadow_boxing", 64);
					StringCopy(&(uParam2->f_257), "shadow_boxing", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppershadow_boxing", 64);
					break;
				case 44:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperthe_woogie", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@the_woogie", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@the_woogie", 64);
					StringCopy(&(uParam2->f_257), "the_woogie", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperthe_woogie", 64);
					break;
				case 45:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperstinker", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@stinker", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@stinker", 64);
					StringCopy(&(uParam2->f_257), "stinker", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperstinker", 64);
					break;
				case 46:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperair_drums", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@air_drums", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@air_drums", 64);
					StringCopy(&(uParam2->f_257), "air_drums", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperair_drums", 64);
					break;
				case 47:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercall_me", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@call_me", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@call_me", 64);
					StringCopy(&(uParam2->f_257), "call_me", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercall_me", 64);
					break;
				case 48:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercoin_roll_and_toss", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@coin_roll_and_toss", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@coin_roll_and_toss", 64);
					StringCopy(&(uParam2->f_257), "coin_roll_and_toss", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppercoin_roll_and_toss", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("vw_prop_vw_coin_01a");
					uParam2->f_424 = 1;
					break;
				case 49:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperbang_bang", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@bang_bang", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@bang_bang", 64);
					StringCopy(&(uParam2->f_257), "bang_bang", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperbang_bang", 64);
					break;
				case 50:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrespect", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@respect", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@respect", 64);
					StringCopy(&(uParam2->f_257), "respect", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intupperrespect", 64);
					break;
				case 51:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppermind_blown", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@mind_blown", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@mind_blown", 64);
					StringCopy(&(uParam2->f_257), "mind_blown", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 1;
					uParam2->f_426 = 1;
					uParam2->f_489 = -3;
					StringCopy(uParam2[12 /*16*/], "anim@mp_player_intuppermind_blown", 64);
					break;
				case 52:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppercrowd_invitation", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@crowd_invitation", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@crowd_invitation", 64);
					StringCopy(&(uParam2->f_257), "crowd_invitation", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 53:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperdriver", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@driver", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@driver", 64);
					StringCopy(&(uParam2->f_257), "driver", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 54:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intupperrunner", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@runner", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@runner", 64);
					StringCopy(&(uParam2->f_257), "runner", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 55:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppershooting", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@shooting", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@shooting", 64);
					StringCopy(&(uParam2->f_257), "shooting", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 56:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppersuck_it", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@suck_it", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@suck_it", 64);
					StringCopy(&(uParam2->f_257), "suck_it", 64);
					uParam2->f_425 = 1;
					uParam2->f_426 = 1;
					uParam2->f_427 = 0;
					uParam2->f_489 = -3;
					break;
				case 57:
					StringCopy(uParam2[0 /*16*/], "anim@mp_player_intuppertake_selfie", 64);
					StringCopy(&(uParam2->f_209), "enter", 64);
					StringCopy(&(uParam2->f_225), "idle_a", 64);
					StringCopy(&(uParam2->f_241), "exit", 64);
					StringCopy(uParam2[10 /*16*/], "anim@mp_player_intcelebrationmale@take_selfie", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_player_intcelebrationfemale@take_selfie", 64);
					StringCopy(&(uParam2->f_257), "take_selfie", 64);
					uParam2->f_425 = 1;
					uParam2->f_427 = 0;
					uParam2->f_426 = 0;
					uParam2->f_489 = -1;
					uParam2->f_419 = 1;
					uParam2->f_420 = 1;
					uParam2->f_421 = 1;
					uParam2->f_424 = 0;
					uParam2->f_423 = 1;
					uParam2->f_429 = joaat("prop_phone_ing_02");
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					StringCopy(uParam2[0 /*16*/], "mp_player_int_upper_nod", 64);
					StringCopy(&(uParam2->f_225), "mp_player_int_nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 2;
					StringCopy(uParam2[12 /*16*/], "mp_player_int_upper_nod", 64);
					break;
				case 1:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 1;
					break;
				case 2:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@low@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 0;
					break;
				case 3:
					StringCopy(uParam2[0 /*16*/], "amb@code_human_in_car_mp_actions@nod@std@ds@base", 64);
					StringCopy(&(uParam2->f_225), "nod_no", 64);
					uParam2->f_425 = 0;
					uParam2->f_418 = 0;
					uParam2->f_489 = 1;
					break;
				case 4:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_a", 64);
					break;
				case 5:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_b", 64);
					break;
				case 6:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@idle", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@idle", 64);
					StringCopy(&(uParam2->f_257), "idle_c", 64);
					if (iParam3 && bParam4)
					{
					}
					else
					{
						uParam2->f_419 = 1;
						uParam2->f_421 = 1;
						uParam2->f_429 = joaat("prop_npc_phone");
					}
					break;
				case 7:
					StringCopy(uParam2[10 /*16*/], "anim@mp_freemode_return@m@fail", 64);
					StringCopy(uParam2[11 /*16*/], "anim@mp_freemode_return@f@fail", 64);
					StringCopy(&(uParam2->f_257), "fail_a", 64);
					break;
				case 8:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_a", 64);
					break;
				case 9:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_b_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 10:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_c", 64);
					break;
				case 11:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_a", 64);
					StringCopy(&(uParam2->f_257), "respawn_a_ped_d_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 12:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_a", 64);
					break;
				case 13:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_b_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 14:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_c", 64);
					break;
				case 15:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_b", 64);
					StringCopy(&(uParam2->f_257), "respawn_b_ped_d_smoke", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 16:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_a", 64);
					break;
				case 17:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_b", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 18:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_c", 64);
					break;
				case 19:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_c", 64);
					StringCopy(&(uParam2->f_257), "respawn_c_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 20:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_a", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 21:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_b", 64);
					break;
				case 22:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 23:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_d", 64);
					StringCopy(&(uParam2->f_257), "respawn_d_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 24:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_a", 64);
					break;
				case 25:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_b", 64);
					break;
				case 26:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 27:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_e", 64);
					StringCopy(&(uParam2->f_257), "respawn_e_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 28:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_a", 64);
					break;
				case 29:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_b", 64);
					break;
				case 30:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 31:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_f", 64);
					StringCopy(&(uParam2->f_257), "respawn_f_ped_d", 64);
					uParam2->f_419 = 1;
					uParam2->f_421 = 1;
					uParam2->f_429 = joaat("prop_npc_phone");
					break;
				case 32:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_a", 64);
					uParam2->f_419 = 1;
					uParam2->f_429 = joaat("prop_ecola_can");
					break;
				case 33:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_b", 64);
					break;
				case 34:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_c", 64);
					uParam2->f_419 = 1;
					uParam2->f_422 = 1;
					uParam2->f_429 = joaat("prop_cs_ciggy_01");
					uParam2->f_431 = 1;
					StringCopy(&(uParam2->f_432), "ent_anim_cig_smoke", 64);
					uParam2->f_448 = { -0.08f, 0f, 0f };
					uParam2->f_451 = { 0f, 0f, 0f };
					uParam2->f_454 = 1;
					StringCopy(&(uParam2->f_455), "ent_anim_cig_exhale_mth", 64);
					uParam2->f_471 = 1;
					StringCopy(&(uParam2->f_472), "ent_anim_cig_exhale_nse", 64);
					break;
				case 35:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@variations@variation_g", 64);
					StringCopy(&(uParam2->f_257), "respawn_g_ped_d", 64);
					break;
				case 36:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_a", 64);
					break;
				case 37:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_b", 64);
					break;
				case 38:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_c", 64);
					break;
				case 39:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@pacific", 64);
					StringCopy(&(uParam2->f_257), "post_pacific_finale_respawn_ped_d", 64);
					break;
				case 40:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(&(uParam2->f_257), "post_fleeca_finale_respawn_ped_a", 64);
					break;
				case 41:
					StringCopy(uParam2[10 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(uParam2[11 /*16*/], "anim@heists@team_respawn@fleeca", 64);
					StringCopy(&(uParam2->f_257), "post_fleeca_finale_respawn_ped_b", 64);
					break;
			}
			break;
	}
}

void func_684(var uParam0, bool bParam1)//Position - 0xA3842
{
	if (bParam1)
	{
		uParam0->f_67 = 0;
		uParam0->f_33 = 0;
	}
	else
	{
		uParam0->f_67 = 1;
		uParam0->f_33 = 1;
	}
}

int func_685(var uParam0)//Position - 0xA3866
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && uParam0->f_930 == 3)
	{
		return 223;
	}
	switch (uParam0->f_930)
	{
		case 0:
			return 229;
		case 1:
			return 229;
		case 2:
			return 229;
		case 3:
			return 227;
		case 4:
			return 227;
		case 5:
			return 227;
		default:
	}
	return 229;
}

int func_686(int iParam0, int iParam1, int iParam2)//Position - 0xA3A4E
{
	return (iParam0 + (3 * (iParam1 + (3 * iParam2))));
}

void func_687(var uParam0, bool bParam1)//Position - 0xA3A79
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "PLAYER_BEAT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_688(var uParam0, bool bParam1)//Position - 0xA3BA8
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_IS_LT_CONTROL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_689(float fParam0)//Position - 0xA3CB4
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (fParam0 / 60f);
	fVar1 = (1f / fVar0);
	fVar2 = (fVar1 * 1000f);
	return SYSTEM::ROUND(__LIB_0__.func_301((0.5f * fVar2), 0f, 10000f));
}

float func_690(int iParam0)//Position - 0xA3DB8
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 0.25f;
		case 2:
			return 0.75f;
		case 3:
			return 1f;
		default:
	}
	return 0f;
}

float func_691(int iParam0)//Position - 0xA3DF8
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 0f;
		case 2:
			return 0.25f;
		case 3:
			return 0.75f;
		default:
	}
	return 0f;
}

bool func_692(var uParam0)//Position - 0xA3E99
{
	return uParam0->f_394 > ((uParam0->f_672 + 0f) - 0.01f);
}

void func_693(var uParam0)//Position - 0xA3FE4
{
	uParam0->f_665 = 0;
}

void func_694(var uParam0)//Position - 0xA3FF2
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "PULSE_ICON");
}

bool func_695(var uParam0)//Position - 0xA4007
{
	return (uParam0->f_665 - uParam0->f_785.f_2) >= 0;
}

void func_696(var uParam0)//Position - 0xA401E
{
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "MUSIC_BEAT");
}

void func_697(var uParam0)//Position - 0xA4074
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "FLASH_ICON");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_698(float fParam0, bool bParam1)//Position - 0xA4563
{
	if (bParam1)
	{
		if (fParam0 >= 0.75f)
		{
			return 3;
		}
		else if (fParam0 >= 0.25f)
		{
			return 2;
		}
		else if (fParam0 > 0f)
		{
			return 1;
		}
		return 0;
	}
	if (fParam0 > 0.75f)
	{
		return 3;
	}
	else if (fParam0 > 0.25f)
	{
		return 2;
	}
	else if (fParam0 > 0f)
	{
		return 1;
	}
	return 0;
}

bool func_699(int iParam0)//Position - 0xA4668
{
	int iVar0;
	iVar0 = iParam0;
	return (((((((((iVar0 == 20 || iVar0 == 19) || iVar0 == 59) || iVar0 == 64) || iVar0 == 65) || iVar0 == 66) || iVar0 == 60) || iVar0 == 61) || iVar0 == 63) || iVar0 == 0);
}

int func_700(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA46DB
{
	if (bParam3)
	{
		iParam0++;
		if (iParam0 >= iParam2)
		{
			iParam0 = iParam1;
		}
	}
	else
	{
		if (iParam0 <= iParam1)
		{
			iParam0 = iParam2;
		}
		iParam0 = (iParam0 - 1);
	}
	return iParam0;
}

float func_701(var uParam0)//Position - 0xA4798
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - uParam0->f_785.f_3)) / 1000f);
	fVar1 = (fVar0 + uParam0->f_785);
	fVar2 = (fVar1 - uParam0->f_785);
	fVar3 = ((360f * fVar2) / fVar1);
	fVar4 = ((SYSTEM::COS(fVar3) + 1f) / 2f);
	return ((MISC::GET_FRAME_TIME() * 75f) * fVar4);
}

void func_702(var uParam0, bool bParam1)//Position - 0xA4D73
{
	if (uParam0->f_71 == 0)
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_71, bParam1, false);
}

int func_703(char* sParam0, char* sParam1, int iParam2)//Position - 0xA4D91
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam0, sParam1, 3))
	{
		if (ENTITY::FIND_ANIM_EVENT_PHASE(sParam0, sParam1, "EXIT", &uVar1, &uVar2))
		{
			return ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, joaat("exit"));
		}
		fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam0, sParam1);
		fVar4 = ENTITY::GET_ENTITY_ANIM_TOTAL_TIME(iVar0, sParam0, sParam1);
		if (fVar3 > 0f)
		{
			return SYSTEM::ROUND((fVar4 - (fVar4 * fVar3))) < iParam2;
		}
	}
	return 0;
}

void func_704(var uParam0, var uParam1)//Position - 0xA5B8A
{
	Stack.Push(uParam1);
	Call_Loc(uParam0->f_915.f_5);
}

int func_705(int iParam0)//Position - 0xA5B9C
{
	if (iParam0 < 1)
	{
		return 0;
	}
	if (iParam0 < 4)
	{
		return Global_262145.f_24362 /* Tunable: -1356133324 */;
	}
	if (iParam0 < 7)
	{
		return Global_262145.f_24363 /* Tunable: -531331339 */;
	}
	if (iParam0 < 10)
	{
		return Global_262145.f_24364 /* Tunable: 1343282654 */;
	}
	return Global_262145.f_24365 /* Tunable: -1189513336 */;
}

int func_706(var uParam0)//Position - 0xA5BF2
{
	if (uParam0->f_773 == 0)
	{
		return 0;
	}
	return __LIB_1__.func_295(&(uParam0->f_773.f_2), 0, 0);
}

Vector3 func_707()//Position - 0xA62FC
{
	struct<3> Var0;
	Var0.f_0 = 0;
	Var0.f_1 = 0;
	Var0.f_2 = 255;
	return Var0;
}

Vector3 func_708()//Position - 0xA6316
{
	struct<3> Var0;
	Var0.f_0 = 255;
	Var0.f_1 = 0;
	Var0.f_2 = 200;
	return Var0;
}

Vector3 func_709()//Position - 0xA63BD
{
	struct<3> Var0;
	Var0.f_0 = 0;
	Var0.f_1 = 255;
	Var0.f_2 = 0;
	return Var0;
}

void func_710(var uParam0)//Position - 0xA63D7
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = (uParam0->f_628 - uParam0->f_394);
	if (fVar0 > 0f)
	{
		fVar1 = (0.9f * MISC::GET_FRAME_TIME());
		if (uParam0->f_667)
		{
			fVar1 = (fVar1 * 2.2f);
		}
		if (fVar0 <= 0.15f)
		{
			fVar1 = (fVar1 * __LIB_0__.func_301(((fVar0 / 0.15f) * 0.6f), (0.1f * fVar1), 1f));
		}
		uParam0->f_394 = __LIB_0__.func_301((uParam0->f_394 + fVar1), 0f, uParam0->f_628);
		if (uParam0->f_667 && (uParam0->f_628 - uParam0->f_394) <= 0.001f)
		{
			uParam0->f_667 = 0;
		}
	}
	else
	{
		uParam0->f_667 = 0;
		fVar1 = (-0.65f * MISC::GET_FRAME_TIME());
		fVar2 = (uParam0->f_394 - uParam0->f_628);
		if (fVar2 <= 0.15f)
		{
			fVar1 = (fVar1 * __LIB_0__.func_301(((fVar2 / 0.15f) * 0.6f), (0.1f * fVar1), 1f));
		}
		uParam0->f_394 = __LIB_0__.func_301((uParam0->f_394 + fVar1), uParam0->f_628, (1f + 0f));
	}
}

float func_711(int iParam0)//Position - 0xA655B
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return ((-1f / 16f) * (0.25f - 0f));
		case 2:
			return ((-1f / 16f) * (0.75f - 0.25f));
		case 3:
			return ((-1f / 16f) * (1f - 0.75f));
		default:
	}
	return 0f;
}

float func_712(int iParam0)//Position - 0xA65BD
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return ((-1f / 8f) * (0.25f - 0f));
		case 2:
			return ((-1f / 8f) * (0.75f - 0.25f));
		case 3:
			return ((-1f / 8f) * (1f - 0.75f));
		default:
	}
	return 0f;
}

float func_713(int iParam0)//Position - 0xA661F
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return ((1f / 8f) * (0.25f - 0f));
		case 2:
			return ((1f / 8f) * (0.75f - 0.25f));
		case 3:
			return ((1f / 8f) * (1f - 0.75f));
		default:
	}
	return 0f;
}

struct<2> func_714(struct<2> Param0, var uParam1)//Position - 0xA672F
{
	struct<2> Var0;
	Var0.f_0 = Param0.f_0;
	Var0.f_1 = Param0.f_1;
	return Var0;
}

Vector3 func_715(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0xA6747
{
	Param0.f_0 = __LIB_0__.func_301(Param0.f_0, Param1.f_0, Param2.f_0);
	Param0.f_1 = __LIB_0__.func_301(Param0.f_1, Param1.f_1, Param2.f_1);
	Param0.f_2 = __LIB_0__.func_301(Param0.f_2, Param1.f_2, Param2.f_2);
	return Param0;
}

Vector3 func_716(struct<2> Param0)//Position - 0xA67A5
{
	return Param0.f_0, Param0.f_1, 0f;
}

void func_717(float fParam0, float fParam1, var uParam2, var uParam3)//Position - 0xA68DB
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::ATAN2(fParam1, fParam0);
	fVar1 = (1f + MISC::ABSF((SYSTEM::SIN((fVar0 * 2f)) * 0.41214f)));
	*uParam2 = __LIB_0__.func_301((fParam0 * fVar1), -1f, 1f);
	*uParam3 = __LIB_0__.func_301((fParam1 * fVar1), -1f, 1f);
}

int func_718(var uParam0)//Position - 0xA6D20
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar1 /*16*/]))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0[iVar1 /*16*/]);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0[iVar1 /*16*/]))
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (uParam0->f_72 != 0)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_72);
			if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_72))
			{
				iVar0 = 0;
			}
		}
		iVar1++;
	}
	uParam0->f_70 = 1;
	return iVar0;
}

char* func_719()//Position - 0xA6DF1
{
	return "Dance_Mini_Game";
}

int func_720()//Position - 0xA6DFE
{
	return -2093173432;
}

void func_721(var uParam0)//Position - 0xA6E0B
{
	int iVar0;
	iVar0 = 51;
	if (((uParam0->f_930 == 2 || uParam0->f_930 == 3) || uParam0->f_930 == 4) || uParam0->f_930 == 5)
	{
		iVar0 = 222;
	}
	if (uParam0->f_931 && PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/))
	{
		uParam0->f_931 = 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, iVar0))
	{
		__LIB_0__.func_579(&(uParam0->f_643));
		if (uParam0->f_931)
		{
			uParam0->f_931 = 0;
		}
		else
		{
			uParam0->f_931 = 1;
		}
	}
}

bool func_722(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0xA6F46
{
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Stack.Push(iParam3);
	Call_Loc(uParam0->f_915.f_1);
	return StackVal;
}

void func_723(var uParam0)//Position - 0xA7238
{
	struct<2> Var0;
	int iVar1;
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	iVar1 = 0;
	while (iVar1 < 75)
	{
		*(uParam0[iVar1 /*2*/]) = { Var0 };
		uParam0->f_151[iVar1] = 0;
		iVar1++;
	}
	uParam0->f_227 = 74;
	uParam0->f_228 = 0;
	__LIB_0__.func_579(&(uParam0->f_229));
}

void func_724(var uParam0)//Position - 0xA728B
{
	struct<12> Var0;
	uParam0->f_773 = { Var0 };
}

int func_725(var uParam0)//Position - 0xA73C1
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		return 51;
	}
	switch (uParam0->f_930)
	{
		case 0:
			return 51;
		case 1:
			return 207;
		case 2:
			return 207;
		case 3:
			return 207;
		case 4:
			return 207;
		case 5:
			return 207;
		default:
	}
	return 51;
}

int func_726(var uParam0, int iParam1)//Position - 0xA76AC
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_659, &iVar0, &uVar2, &uVar3, &uVar1);
	if (iVar4 == 2)
	{
		*iParam1 = iVar0 != 0;
		uParam0->f_659 = 0;
		return iVar4;
	}
	return iVar4;
}

void func_727(var uParam0, int iParam1)//Position - 0xA76E1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	if (uParam0->f_659 != 0)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam1), true) };
	Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::GET_PLAYER_PED(iParam1)) };
	Var2 = { Var0 + Var1 * Vector(0.5f, 0.5f, 0.5f) + Vector(0.15f, 0f, 0f) };
	Var3 = { Var0 + Var1 * Vector(1f, 1f, 1f) + Vector(0.15f, 0f, 0f) };
	iVar4 = 467;
	uParam0->f_659 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var2, Var3, 0.5f, iVar4, PLAYER::GET_PLAYER_PED(iParam1), 4);
}

float func_728(int iParam0)//Position - 0xA7916
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	return __LIB_0__.func_156(ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), Var0);
}

bool func_729(int iParam0)//Position - 0xA7BA6
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
	Var2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar0) };
	Var3 = { Var1 + Var2 * Vector(0.5f, 0.5f, 0.5f) };
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar5 = SYSTEM::VMAG2(Var4 - Var3);
	return fVar5 <= (1f * 1f);
}

bool func_730(var uParam0, int iParam1)//Position - 0xA7C01
{
	return (uParam0->f_4[iParam1 /*12*/].f_2 != 0 && uParam0->f_4[iParam1 /*12*/].f_2 != __LIB_0__.func_160());
}

char* func_731(int iParam0)//Position - 0xA7DD6
{
	switch (iParam0)
	{
		case 0:
			return "HIGH_CENTER";
		case 1:
			return "HIGH_CENTER_DOWN";
		case 2:
			return "HIGH_CENTER_UP";
		case 3:
			return "HIGH_LEFT";
		case 4:
			return "HIGH_LEFT_DOWN";
		case 5:
			return "HIGH_LEFT_UP";
		case 6:
			return "HIGH_RIGHT";
		case 7:
			return "HIGH_RIGHT_DOWN";
		case 8:
			return "HIGH_RIGHT_UP";
		case 9:
			return "MED_CENTER";
		case 10:
			return "MED_CENTER_DOWN";
		case 11:
			return "MED_CENTER_UP";
		case 12:
			return "MED_LEFT";
		case 13:
			return "MED_LEFT_DOWN";
		case 14:
			return "MED_LEFT_UP";
		case 15:
			return "MED_RIGHT";
		case 16:
			return "MED_RIGHT_DOWN";
		case 17:
			return "MED_RIGHT_UP";
		case 18:
			return "LOW_CENTER";
		case 19:
			return "LOW_CENTER_DOWN";
		case 20:
			return "LOW_CENTER_UP";
		case 21:
			return "LOW_LEFT";
		case 22:
			return "LOW_LEFT_DOWN";
		case 23:
			return "LOW_LEFT_UP";
		case 24:
			return "LOW_RIGHT";
		case 25:
			return "LOW_RIGHT_DOWN";
		case 26:
			return "LOW_RIGHT_UP";
		default:
	}
	return "UNDEFINED";
}

void func_732(var uParam0, bool bParam1)//Position - 0xA7FF4
{
	if (bParam1)
	{
		__LIB_1__.func_845(&(uParam0->f_390), 4);
	}
	else
	{
		__LIB_1__.func_846(&(uParam0->f_390), 4);
	}
}

void func_733(float* fParam0)//Position - 0xA801A
{
	int iVar0;
	AUDIO::GET_NEXT_AUDIBLE_BEAT(fParam0, &(fParam0->f_1), &iVar0);
	if (fParam0->f_4 != iVar0)
	{
		fParam0->f_4 = iVar0;
		fParam0->f_5 = 1;
		fParam0->f_3 = MISC::GET_GAME_TIMER();
		fParam0->f_2++;
	}
	else
	{
		fParam0->f_5 = 0;
	}
}

bool func_734(var uParam0)//Position - 0xA81C3
{
	return *uParam0 > 1;
}

int func_735(int iParam0)//Position - 0xA81D0
{
	switch (iParam0)
	{
		case -1:
			return 0;
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 3;
		case 3:
			return 4;
		case 4:
			return 1;
		default:
	}
	return 0;
}

int func_736(int iParam0)//Position - 0xC1297
{
	if (iParam0 != __LIB_0__.func_160())
	{
		if (__LIB_0__.func_154(iParam0, 1, 1))
		{
			if (Global_2689235[iParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[iParam0 /*453*/].f_318.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_737(int iParam0)//Position - 0xC1C4F
{
	if (iParam0 != __LIB_0__.func_160() && __LIB_0__.func_154(iParam0, 1, 1))
	{
		return BitTest(Global_1892703[iParam0 /*599*/].f_533, 0);
	}
	return 0;
}

void func_738(var uParam0, int iParam1)//Position - 0x130AD6
{
	if (uParam0->f_6 != iParam1)
	{
		uParam0->f_6 = iParam1;
	}
}

bool func_739(var uParam0, int iParam1)//Position - 0x130C56
{
	return BitTest(uParam0->f_6, iParam1);
}

void func_740(var uParam0, bool bParam1)//Position - 0x130C65
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!BitTest(uParam0->f_6, bParam1))
	{
		MISC::SET_BIT(&(uParam0->f_6), bParam1);
	}
}

int func_741()//Position - 0x1314DA
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(1, 101) <= Global_262145.f_31761 /* Tunable: 2138021228 */)
	{
		return 1;
	}
	return 0;
}

bool func_742(int iParam0)//Position - 0x1316C1
{
	return (iParam0 > -1 && iParam0 < 14);
}

int func_743()//Position - 0x1322A1
{
	return 18;
}

float func_744(var uParam0)//Position - 0x1331BE
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<60> Var3;
	if (uParam0->f_5 == 0)
	{
		return 0f;
	}
	iVar0 = 0;
	fVar1 = 0f;
	iVar2 = uParam0->f_6;
	Var3.f_7 = 1115815936;
	Var3.f_8 = 1120403456;
	Var3.f_16 = -1;
	Var3.f_20 = 1115815936;
	Var3.f_22 = -1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		Stack.Push(iVar0);
		Call_Loc(uParam0->f_5);
		Var3 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
		fVar1 = (fVar1 + Var3.f_8);
		iVar0++;
	}
	return fVar1;
}

bool func_745(var uParam0)//Position - 0x133235
{
	return __LIB_0__.func_348(uParam0) > 0;
}

float func_746(int iParam0)//Position - 0x133C7C
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 0.8f;
		case 1:
			return 0.7f;
		case 2:
		case 3:
			return 0.4f;
		default:
	}
	return 1f;
}

bool func_747(var uParam0, int iParam1)//Position - 0x133D1E
{
	return __LIB_0__.func_492(uParam0, iParam1);
}

void func_748(int* iParam0, struct<3> Param1)//Position - 0x133D2E
{
	__LIB_1__.func_845(iParam0, 5);
	__LIB_1__.func_846(iParam0, 4);
	iParam0->f_28 = { Param1 };
}

void func_749(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, int iParam5, int iParam6, int iParam7)//Position - 0x133D4E
{
	__LIB_1__.func_845(iParam0, 0);
	__LIB_1__.func_846(iParam0, 2);
	iParam0->f_1 = { Param1 };
	iParam0->f_9 = { Param3 };
	iParam0->f_4 = { Param2 };
	iParam0->f_12 = { Param4 };
	iParam0->f_15 = iParam5;
	iParam0->f_18 = iParam6;
	iParam0->f_16 = iParam7;
}

void func_750(int* iParam0, float fParam1, char* sParam2)//Position - 0x133D9E
{
	__LIB_1__.func_845(iParam0, 1);
	iParam0->f_47 = fParam1;
	StringCopy(&(iParam0->f_31), sParam2, 64);
}

int func_751(int iParam0)//Position - 0x133E04
{
	return __LIB_0__.func_138(iParam0 >= 0, 1, -1);
}

void func_752(int* iParam0, int iParam1, struct<3> Param2)//Position - 0x133E16
{
	if (*iParam1 != 0)
	{
		__LIB_1__.func_845(iParam0, 4);
		__LIB_1__.func_846(iParam0, 5);
		iParam0->f_24 = *iParam1;
		iParam0->f_25 = { Param2 };
	}
}

void func_753(int* iParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x133E44
{
	*iParam0 = 0;
	iParam0->f_1 = { Param1 };
	iParam0->f_4 = { Param2 };
	iParam0->f_7 = fParam3;
	iParam0->f_22 = iParam4;
}

int func_754(int iParam0, var uParam1)//Position - 0x133F15
{
	uParam1->f_17[0 /*3*/] = "PED_A_DANCE_INTRO";
	uParam1->f_17[0 /*3*/].f_1 = 1.5f;
	uParam1->f_17[0 /*3*/].f_2 = -1000f;
	uParam1->f_17[1 /*3*/] = "PED_A_STANDING_INTRO";
	uParam1->f_17[1 /*3*/].f_1 = 1.5f;
	uParam1->f_17[1 /*3*/].f_2 = -1000f;
	uParam1->f_17[2 /*3*/] = "PED_A_DANCE_IDLE";
	uParam1->f_17[2 /*3*/].f_1 = 1000f;
	uParam1->f_17[2 /*3*/].f_2 = -4f;
	uParam1->f_17[3 /*3*/] = "PED_A_DANCE_EXIT";
	uParam1->f_17[2 /*3*/].f_1 = 4f;
	uParam1->f_17[2 /*3*/].f_2 = -1.5f;
	uParam1->f_17[4 /*3*/] = "PED_A_STANDING_EXIT";
	uParam1->f_17[4 /*3*/].f_1 = 4f;
	uParam1->f_17[4 /*3*/].f_2 = -1.5f;
	uParam1->f_33[0 /*3*/] = "PED_B_DANCE_INTRO";
	uParam1->f_33[0 /*3*/].f_1 = 1.5f;
	uParam1->f_33[0 /*3*/].f_2 = -1000f;
	uParam1->f_33[1 /*3*/] = "PED_B_STANDING_INTRO";
	uParam1->f_33[1 /*3*/].f_1 = 1.5f;
	uParam1->f_33[1 /*3*/].f_2 = -1000f;
	uParam1->f_33[2 /*3*/] = "PED_B_DANCE_IDLE";
	uParam1->f_33[2 /*3*/].f_1 = 1000f;
	uParam1->f_33[2 /*3*/].f_2 = -4f;
	uParam1->f_33[3 /*3*/] = "PED_B_DANCE_EXIT";
	uParam1->f_33[2 /*3*/].f_1 = 4f;
	uParam1->f_33[2 /*3*/].f_2 = -1.5f;
	uParam1->f_33[4 /*3*/] = "PED_B_STANDING_EXIT";
	uParam1->f_33[4 /*3*/].f_1 = 4f;
	uParam1->f_33[4 /*3*/].f_2 = -1.5f;
	switch (iParam0)
	{
		case 0:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_A@";
			return 1;
		case 1:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_B@";
			return 1;
		case 2:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_D@";
			return 1;
		case 3:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_E@";
			return 1;
		case 4:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_F@";
			return 1;
		case 5:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_H@";
			return 1;
		case 6:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_J@";
			return 1;
		case 7:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_K@";
			return 1;
		case 8:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_L@";
			return 1;
		case 9:
			uParam1->f_16 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_PAIRED@DANCE_M@";
			return 1;
		default:
	}
	return 0;
}

int func_755(int iParam0, var uParam1)//Position - 0x1341E3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = "PIMNCLDANSTY0" /* GXT: Getting Down */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@FEMALE@VAR_A";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@FEMALE@VAR_A@";
			break;
		case 1:
			*uParam1 = "PIMNCLDANSTY1" /* GXT: Break It Up */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@FEMALE@VAR_B";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@FEMALE@VAR_B@";
			break;
		case 2:
			*uParam1 = "PIMNCLDANSTY2" /* GXT: Give It Some */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@MALE@VAR_B";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@MALE@VAR_B@";
			break;
		case 3:
			*uParam1 = "PIMNCLDANSTY3" /* GXT: Zoned In */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@MALE@VAR_A";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@MALE@VAR_A@";
			break;
		case 4:
			*uParam1 = "PIMNCLDANSTY4" /* GXT: Slide */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@JUMPER";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@JUMPER@";
			break;
		case 5:
			*uParam1 = "PIMNCLDANSTY5" /* GXT: Loose */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@TECHNO_MONKEY";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@TECHNO_MONKEY@";
			break;
		case 6:
			*uParam1 = "PIMNCLDANSTY6" /* GXT: Shuffle */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@SHUFFLE";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@SHUFFLE@";
			break;
		case 7:
			*uParam1 = "PIMNCLDANSTY7" /* GXT: Into It */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@TECHNO_KARATE";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@TECHNO_KARATE@";
			break;
		case 8:
			*uParam1 = "PIMNCLDANSTY8" /* GXT: Sway */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@BEACH_BOXING";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@BEACH_BOXING@";
			break;
		case 9:
			*uParam1 = "PIMNCLDANSTY9" /* GXT: Tight */;
			uParam1->f_1 = "NIGHTCLUB@DANCE_MINIGAME@DANCE_SOLO@SAND_TRIP";
			uParam1->f_2 = "ANIM@AMB@NIGHTCLUB@MINI@DANCE@DANCE_SOLO@SAND_TRIP@";
			break;
		default:
			return 0;
	}
	return 1;
}

void func_756(var uParam0)//Position - 0x13451A
{
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(uParam0->f_4), 385, 0);
}

int func_757(int iParam0)//Position - 0xA613
{
	if (__LIB_0__.func_43(iParam0))
	{
		return __LIB_0__.func_42(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_758(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8250
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iParam2 == 12)
	{
		iVar2 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar1, &Var0);
			if (Var0.f_1 == iParam1)
			{
				return (__LIB_0__.func_28(iParam0) + iVar1);
			}
			iVar1++;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		iVar3 = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
		if (iVar3 != -1)
		{
			return (__LIB_0__.func_26(iParam0) + iVar3);
		}
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, __LIB_0__.func_33(iParam2));
		iVar4 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
		if (iVar4 != -1)
		{
			return (__LIB_0__.func_25(iParam0, __LIB_0__.func_33(iParam2)) + iVar4);
		}
	}
	return -99;
}

int func_759(int iParam0, int iParam1, int iParam2)//Position - 0x679C6
{
	if (!__LIB_0__.func_114() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(iParam0, iParam1, iParam2))
	{
		return 1;
	}
	return 0;
}

void func_760(int iParam0, var uParam1)//Position - 0x798A7
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		__LIB_0__.func_14(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !__LIB_0__.func_111(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		__LIB_0__.func_107(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__.func_110(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

void func_761(var uParam0)//Position - 0x93650
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_0__.func_152(uParam0, iVar0);
		iVar0++;
	}
	__LIB_0__.func_148(uParam0, (Global_4541528 - 0.5f));
}

int func_762(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9D6F9
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
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
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	__LIB_0__.func_92(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_763(int iParam0)//Position - 0x9EC54
{
	return __LIB_0__.func_105(iParam0, Global_43052);
}

void func_764(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x28C
{
	int iVar0;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		__LIB_0__.func_66();
	}
}

void func_765(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21DF3
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var2;
	struct<2> Var3;
	int iVar4;
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("Player_Zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_One"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("Player_Two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("MP_F_Freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar4, &Var2))
			{
				if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
				{
					if (Var2.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var3);
						FILES::GET_SHOP_PED_COMPONENT(Var2.f_0, &Var3);
						if (Var2.f_0 != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var2.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = Var2.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = __LIB_6__.func_758(iParam1, Var2.f_0, __LIB_0__.func_33(Var2.f_2), iVar0);
					}
				}
				else if (Var2.f_1 != -1)
				{
					(*uParam0)[__LIB_0__.func_33(Var2.f_2)] = Var2.f_1;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_766(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x253E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam1 == -1)
	{
		return __LIB_0__.func_29(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("MP_M_Freemode_01"))
		{
			return __LIB_6__.func_758(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("MP_F_Freemode_01"))
		{
			return __LIB_6__.func_758(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + __LIB_0__.func_27(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return __LIB_0__.func_29(iParam3);
}

int func_767(int iParam0)//Position - 0x6A2DA
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_0_0"), 2, 3);
	}
	else if (iParam0 == 7)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_1_0"), 2, 3);
	}
	else if (iParam0 == 13)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_2_0"), 2, 3);
	}
	else if (iParam0 == 19)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_3_0"), 2, 3);
	}
	else if (iParam0 == 26)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_4_0"), 2, 3);
	}
	else if (iParam0 == 32)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_5_0"), 2, 3);
	}
	else if (iParam0 == 38)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_6_0"), 2, 3);
	}
	else if (iParam0 == 45)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_7_0"), 2, 3);
	}
	else if (iParam0 == 50)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_8_0"), 2, 3);
	}
	else if (iParam0 == 57)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_9_0"), 2, 3);
	}
	else if (iParam0 == 63)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_10_0"), 2, 3);
	}
	else if (iParam0 == 69)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_11_0"), 2, 3);
	}
	else if (iParam0 == 74)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_12_0"), 2, 3);
	}
	else if (iParam0 == 80)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_13_0"), 2, 3);
	}
	else if (iParam0 == 85)
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_14_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BEACH_M_HAIR00"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_15_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BEACH_M_HAIR05"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_16_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BUSI_M_HAIR0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_17_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BUSI_M_HAIR1_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_18_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_HIPS_M_HAIR0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_19_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_HIPS_M_HAIR1_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_20_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_IND_M_HAIR0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_21_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW_M_HAIR0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_22_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW_M_HAIR1_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_23_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW_M_HAIR2_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_24_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW_M_HAIR3_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_25_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW2_M_HAIR0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_26_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW2_M_HAIR1_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_27_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_LOW2_M_HAIR2_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_28_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_0_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_29_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_1_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_30_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_2_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_31_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_3_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_32_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_4_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_33_0"), 2, 3);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_BIKER_M_HAIR_5_0"), 2, 3))
	{
		return __LIB_6__.func_758(joaat("MP_M_Freemode_01"), joaat("DLC_MP_GR_M_HAIR_34_0"), 2, 3);
	}
	return iParam0;
}

bool func_768(int iParam0, int iParam1)//Position - 0x6DB6D
{
	bool bVar0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = __LIB_0__.func_192(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_769(int iParam0, int iParam1, bool bParam2)//Position - 0x76A6C
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (__LIB_0__.func_87(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_770(int iParam0, bool bParam1)//Position - 0x77F86
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!__LIB_0__.func_61(iParam0, 0))
		{
			__LIB_0__.func_60(iParam0, 1, 0);
			__LIB_0__.func_60(iParam0, 2, 0);
			__LIB_0__.func_60(iParam0, 3, 0);
			__LIB_0__.func_60(iParam0, 4, 0);
			__LIB_0__.func_60(iParam0, 0, 1);
			Global_77137[iParam0] = 1;
		}
	}
	else
	{
		__LIB_0__.func_60(iParam0, 0, 0);
	}
}

void func_771()//Position - 0x331A
{
	Global_20471 = 0;
	__LIB_0__.func_205();
}

int func_772(int iParam0, bool bParam1)//Position - 0xD4E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (bParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = __LIB_0__.func_260(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!__LIB_0__.func_259(Var5.f_3))
							{
								if (iVar3 == bParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

void func_773(int iParam0, var uParam1)//Position - 0x11947
{
	switch (iParam0)
	{
		case 0:
			__LIB_0__.func_48(uParam1, "Abigail1", __LIB_0__.func_339(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 1:
			__LIB_0__.func_48(uParam1, "Abigail2", __LIB_0__.func_339(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 2:
			__LIB_0__.func_48(uParam1, "Barry1", __LIB_0__.func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 3:
			__LIB_0__.func_48(uParam1, "Barry2", __LIB_0__.func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 4:
			__LIB_0__.func_48(uParam1, "Barry3", __LIB_0__.func_339(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 5:
			__LIB_0__.func_48(uParam1, "Barry3A", __LIB_0__.func_339(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 6:
			__LIB_0__.func_48(uParam1, "Barry3C", __LIB_0__.func_339(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 7:
			__LIB_0__.func_48(uParam1, "Barry4", __LIB_0__.func_339(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 8:
			__LIB_0__.func_48(uParam1, "Dreyfuss1", __LIB_0__.func_339(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 9:
			__LIB_0__.func_48(uParam1, "Epsilon1", __LIB_0__.func_339(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 10:
			__LIB_0__.func_48(uParam1, "Epsilon2", __LIB_0__.func_339(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 11:
			__LIB_0__.func_48(uParam1, "Epsilon3", __LIB_0__.func_339(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 12:
			__LIB_0__.func_48(uParam1, "Epsilon4", __LIB_0__.func_339(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 13:
			__LIB_0__.func_48(uParam1, "Epsilon5", __LIB_0__.func_339(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 14:
			__LIB_0__.func_48(uParam1, "Epsilon6", __LIB_0__.func_339(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 15:
			__LIB_0__.func_48(uParam1, "Epsilon7", __LIB_0__.func_339(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 16:
			__LIB_0__.func_48(uParam1, "Epsilon8", __LIB_0__.func_339(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 17:
			__LIB_0__.func_48(uParam1, "Extreme1", __LIB_0__.func_339(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 18:
			__LIB_0__.func_48(uParam1, "Extreme2", __LIB_0__.func_339(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 19:
			__LIB_0__.func_48(uParam1, "Extreme3", __LIB_0__.func_339(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 20:
			__LIB_0__.func_48(uParam1, "Extreme4", __LIB_0__.func_339(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 21:
			__LIB_0__.func_48(uParam1, "Fanatic1", __LIB_0__.func_339(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 22:
			__LIB_0__.func_48(uParam1, "Fanatic2", __LIB_0__.func_339(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 23:
			__LIB_0__.func_48(uParam1, "Fanatic3", __LIB_0__.func_339(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 24:
			__LIB_0__.func_48(uParam1, "Hao1", __LIB_0__.func_339(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 25:
			__LIB_0__.func_48(uParam1, "Hunting1", __LIB_0__.func_339(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 26:
			__LIB_0__.func_48(uParam1, "Hunting2", __LIB_0__.func_339(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 27:
			__LIB_0__.func_48(uParam1, "Josh1", __LIB_0__.func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 28:
			__LIB_0__.func_48(uParam1, "Josh2", __LIB_0__.func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 29:
			__LIB_0__.func_48(uParam1, "Josh3", __LIB_0__.func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 30:
			__LIB_0__.func_48(uParam1, "Josh4", __LIB_0__.func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 31:
			__LIB_0__.func_48(uParam1, "Maude1", __LIB_0__.func_339(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 32:
			__LIB_0__.func_48(uParam1, "Minute1", __LIB_0__.func_339(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 33:
			__LIB_0__.func_48(uParam1, "Minute2", __LIB_0__.func_339(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 34:
			__LIB_0__.func_48(uParam1, "Minute3", __LIB_0__.func_339(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 35:
			__LIB_0__.func_48(uParam1, "MrsPhilips1", __LIB_0__.func_339(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 36:
			__LIB_0__.func_48(uParam1, "MrsPhilips2", __LIB_0__.func_339(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 37:
			__LIB_0__.func_48(uParam1, "Nigel1", __LIB_0__.func_339(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 38:
			__LIB_0__.func_48(uParam1, "Nigel1A", __LIB_0__.func_339(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 39:
			__LIB_0__.func_48(uParam1, "Nigel1B", __LIB_0__.func_339(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 40:
			__LIB_0__.func_48(uParam1, "Nigel1C", __LIB_0__.func_339(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 41:
			__LIB_0__.func_48(uParam1, "Nigel1D", __LIB_0__.func_339(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 42:
			__LIB_0__.func_48(uParam1, "Nigel2", __LIB_0__.func_339(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 43:
			__LIB_0__.func_48(uParam1, "Nigel3", __LIB_0__.func_339(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 1);
			break;
		case 44:
			__LIB_0__.func_48(uParam1, "Omega1", __LIB_0__.func_339(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 45:
			__LIB_0__.func_48(uParam1, "Omega2", __LIB_0__.func_339(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 46:
			__LIB_0__.func_48(uParam1, "Paparazzo1", __LIB_0__.func_339(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 47:
			__LIB_0__.func_48(uParam1, "Paparazzo2", __LIB_0__.func_339(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 48:
			__LIB_0__.func_48(uParam1, "Paparazzo3", __LIB_0__.func_339(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 49:
			__LIB_0__.func_48(uParam1, "Paparazzo3A", __LIB_0__.func_339(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 50:
			__LIB_0__.func_48(uParam1, "Paparazzo3B", __LIB_0__.func_339(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 51:
			__LIB_0__.func_48(uParam1, "Paparazzo4", __LIB_0__.func_339(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 52:
			__LIB_0__.func_48(uParam1, "Rampage1", __LIB_0__.func_339(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 54:
			__LIB_0__.func_48(uParam1, "Rampage3", __LIB_0__.func_339(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 55:
			__LIB_0__.func_48(uParam1, "Rampage4", __LIB_0__.func_339(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 56:
			__LIB_0__.func_48(uParam1, "Rampage5", __LIB_0__.func_339(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 0, 0);
			break;
		case 53:
			__LIB_0__.func_48(uParam1, "Rampage2", __LIB_0__.func_339(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, __LIB_0__.func_49(iParam0), 1, 0);
			break;
		case 57:
			__LIB_0__.func_48(uParam1, "TheLastOne", __LIB_0__.func_339(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 58:
			__LIB_0__.func_48(uParam1, "Tonya1", __LIB_0__.func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 59:
			__LIB_0__.func_48(uParam1, "Tonya2", __LIB_0__.func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 60:
			__LIB_0__.func_48(uParam1, "Tonya3", __LIB_0__.func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 61:
			__LIB_0__.func_48(uParam1, "Tonya4", __LIB_0__.func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		case 62:
			__LIB_0__.func_48(uParam1, "Tonya5", __LIB_0__.func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, __LIB_0__.func_49(iParam0), 0, 1);
			break;
		default:
			break;
	}
}

int func_774(char* sParam0, bool bParam1)//Position - 0x130AD
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = __LIB_0__.func_126(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

void func_775(int iParam0, int iParam1, int iParam2)//Position - 0x1338F
{
	if (__LIB_0__.func_294() && __LIB_0__.func_295())
	{
		while (Global_100436 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		__LIB_0__.func_6(0);
	}
}

int func_776(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)//Position - 0x14F69
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (__LIB_0__.func_264(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
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

int func_777(int iParam0, int iParam1)//Position - 0x16FD6
{
	if (iParam1 == 0)
	{
		if (__LIB_0__.func_174(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return __LIB_0__.func_277();
			break;
		case joaat("sabregt"):
			if (Global_262145.f_14731 /* Tunable: ENABLE_LOWRIDER2_SABREGT */)
			{
				return __LIB_0__.func_276();
			}
			break;
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14732 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */)
			{
				return __LIB_0__.func_276();
			}
			break;
		case joaat("virgo3"):
			if (Global_262145.f_14730 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */)
			{
				return __LIB_0__.func_276();
			}
			break;
		case joaat("minivan"):
			if (Global_262145.f_14733 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */)
			{
				return __LIB_0__.func_276();
			}
			break;
		case joaat("slamvan"):
			if (Global_262145.f_14735 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */)
			{
				return __LIB_0__.func_276();
			}
			break;
		case joaat("sultan"):
		case joaat("banshee"):
			return __LIB_0__.func_275();
			break;
		case joaat("comet2"):
			if (Global_262145.f_19186 /* Tunable: ENABLE_IE_COMET3 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("diablous"):
			if (Global_262145.f_19188 /* Tunable: ENABLE_IE_DIABLOUS2 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("fcr"):
			if (Global_262145.f_19192 /* Tunable: ENABLE_IE_FCR2 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("elegy2"):
			if (Global_262145.f_19189 /* Tunable: ENABLE_IE_ELEGY */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("nero"):
			if (Global_262145.f_19196 /* Tunable: ENABLE_IE_NERO2 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("italigtb"):
			if (Global_262145.f_19194 /* Tunable: ENABLE_IE_ITALIGTB2 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("specter"):
			if (Global_262145.f_19199 /* Tunable: ENABLE_IE_SPECTER2 */)
			{
				return __LIB_0__.func_274();
			}
			break;
		case joaat("technical"):
			if (Global_262145.f_21144 /* Tunable: ENABLE_TECHNICAL_MODSHOP */)
			{
				return __LIB_0__.func_273();
			}
			break;
		case joaat("insurgent"):
			if (Global_262145.f_21145 /* Tunable: ENABLE_INSURGENT_MODSHOP */)
			{
				return __LIB_0__.func_273();
			}
			break;
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return __LIB_0__.func_272();
			break;
		case joaat("glendale"):
			if (__LIB_0__.func_272() || __LIB_0__.func_271())
			{
				return 1;
			}
			break;
		case joaat("impaler"):
			return __LIB_0__.func_272();
			break;
		case joaat("issi3"):
			return __LIB_0__.func_272();
			break;
		case joaat("gargoyle"):
			return __LIB_0__.func_272();
			break;
		case joaat("dominator"):
			return __LIB_0__.func_272();
			break;
		case joaat("dominator2"):
			return __LIB_0__.func_272();
			break;
		case joaat("imperator"):
			return __LIB_0__.func_272();
			break;
		case joaat("imperator2"):
			return __LIB_0__.func_272();
			break;
		case joaat("imperator3"):
			return __LIB_0__.func_272();
			break;
		case joaat("deathbike"):
			return __LIB_0__.func_272();
			break;
		case joaat("deathbike2"):
			return __LIB_0__.func_272();
			break;
		case joaat("deathbike3"):
			return __LIB_0__.func_272();
			break;
		case joaat("impaler2"):
		case joaat("brutus"):
		case joaat("bruiser"):
		case joaat("slamvan4"):
		case joaat("issi4"):
		case joaat("monster3"):
		case joaat("scarab"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("zr380"):
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
			return __LIB_0__.func_272();
			break;
		case joaat("youga2"):
			if (Global_262145.f_29320 /* Tunable: ENABLE_VEH_YOUGA3 */)
			{
				return __LIB_0__.func_271();
			}
			break;
		case joaat("gauntlet3"):
			if (Global_262145.f_29670 /* Tunable: ENABLE_VEH_GAUNTLET5 */)
			{
				return __LIB_0__.func_271();
			}
			break;
		case joaat("manana"):
			if (Global_262145.f_29319 /* Tunable: ENABLE_VEH_MANANA2 */)
			{
				return __LIB_0__.func_271();
			}
			break;
		case joaat("peyote"):
			if (Global_262145.f_29669 /* Tunable: ENABLE_VEH_PEYOTE3 */)
			{
				return __LIB_0__.func_271();
			}
			break;
		case joaat("yosemite"):
			if (Global_262145.f_29668 /* Tunable: ENABLE_VEH_YOSEMITE3 */)
			{
				return __LIB_0__.func_271();
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("tenf"):
			if (Global_262145.f_33045 /* Tunable: ENABLE_VEHICLE_TENF2 */)
			{
				return __LIB_0__.func_270();
			}
			break;
		case joaat("weevil"):
			if (Global_262145.f_33044 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */)
			{
				return __LIB_0__.func_270();
			}
			break;
		case joaat("brioso2"):
			if (Global_262145.f_33037 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */)
			{
				return __LIB_0__.func_270();
			}
			break;
		case joaat("sentinel3"):
			if (Global_262145.f_33046 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */)
			{
				return __LIB_0__.func_270();
			}
			break;
	}
	return 0;
}

int func_778(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x275A9
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (__LIB_0__.func_30(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = __LIB_0__.func_534(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

int func_779(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C49B
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
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
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
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
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
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
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
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_420(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
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
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_420(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_780(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3C8C0
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_One"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		case joaat("Player_Two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		case joaat("MP_M_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 3);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 4);
					}
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_781()//Position - 0x400B0
{
	if (__LIB_0__.func_213() && __LIB_0__.func_157(0))
	{
		return 1;
	}
	return 0;
}

void func_782(int iParam0, int iParam1)//Position - 0x43320
{
	int iVar0;
	iVar0 = __LIB_0__.func_216(iParam1);
	if (iVar0 != joaat("p_parachute_s"))
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, iVar0);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_783(int iParam0, int iParam1)//Position - 0x4388E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("MP_M_Freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_0"), 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("H4_DRAW_1"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		return __LIB_0__.func_221(iParam0, iParam1, 9);
	}
	if (__LIB_0__.func_220(iParam0))
	{
		if (bVar1)
		{
			return __LIB_0__.func_221(iParam0, iParam1, 7);
		}
		else
		{
			return __LIB_0__.func_221(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT01"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 0);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT02"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT03"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 2);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT04"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 3);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT05"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 4);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT06"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 5);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT07"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 6);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT08"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 7);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT09"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT10"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 9);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PARA_ALT11"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 10);
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MINI_DRESS"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 1);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 5);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 8);
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = __LIB_0__.func_219(iVar4, 0);
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return __LIB_0__.func_221(iParam0, iParam1, 1);
						break;
					case 2:
						return __LIB_0__.func_221(iParam0, iParam1, 8);
						break;
					default:
						iVar0 = __LIB_0__.func_252(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return __LIB_0__.func_221(iParam0, iParam1, 6);
						break;
					default:
						iVar0 = __LIB_0__.func_252(iVar4);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = __LIB_0__.func_218(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return __LIB_0__.func_221(iParam0, iParam1, 7);
					break;
				case 5:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 7);
					}
					break;
				case 6:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 7);
					}
					break;
				case 7:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 7);
					}
					break;
				case 11:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 7);
					}
					break;
				case 12:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return __LIB_0__.func_221(iParam0, iParam1, 9);
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 7);
					}
					break;
				case 13:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
						return __LIB_0__.func_221(iParam0, iParam1, 9);
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 9);
					}
					break;
				case 14:
					if (iVar2 == joaat("MP_M_Freemode_01"))
					{
					}
					else
					{
						return __LIB_0__.func_221(iParam0, iParam1, 9);
					}
					break;
				default:
					iVar0 = __LIB_0__.func_252(iVar4);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 8);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_3"), 0))
				{
					return __LIB_0__.func_221(iParam0, iParam1, 10);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("XMAS2_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 5);
				}
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 8);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_F_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 9);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 5);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 5);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 6);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 0);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("MP_M_Freemode_01"))
				{
					return __LIB_0__.func_221(iParam0, iParam1, 10);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 10);
				}
			}
			else if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 3);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 10);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 9);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 0);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("MP_F_Freemode_01"))
		{
			if (bVar1)
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("MP_M_Freemode_01"))
			{
				return __LIB_0__.func_221(iParam0, iParam1, 2);
			}
			else
			{
				return __LIB_0__.func_221(iParam0, iParam1, 7);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
		{
			return __LIB_0__.func_221(iParam0, iParam1, 6);
		}
		else
		{
			iVar7 = iVar0;
			iVar0 = __LIB_0__.func_252(iVar4);
		}
	}
	if (iVar2 == joaat("MP_M_Freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 1:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 2:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 3:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				break;
			case 4:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				break;
			case 5:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 6:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				break;
			case 7:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				break;
			case 8:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 9:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 10:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				break;
			case 11:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				break;
			case 12:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 13:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				break;
			case 14:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 5);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 5);
				}
				break;
			case 15:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 4);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 1:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 2:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 3);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 2);
				}
				break;
			case 3:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 5);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 4);
				}
				break;
			case 4:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 5:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 6:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 7:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 8:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 9:
				return __LIB_0__.func_221(iParam0, iParam1, 1);
				break;
			case 10:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 6);
				}
				break;
			case 11:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 12:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 13:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			case 14:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 7);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 3);
				}
				break;
			case 15:
				if (bVar1)
				{
					return __LIB_0__.func_221(iParam0, iParam1, 1);
				}
				else
				{
					return __LIB_0__.func_221(iParam0, iParam1, 0);
				}
				break;
			}
	}
	return __LIB_0__.func_221(iParam0, iParam1, 0);
	return 0;
}

bool func_784(int iParam0, int iParam1)//Position - 0x56F26
{
	return __LIB_0__.func_137(__LIB_0__.func_239(iParam0), iParam1);
}

bool func_785(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5900B
{
	int iVar0;
	int iVar1;
	__LIB_0__.func_244(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && !PED::IS_PED_INJURED(iParam3))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				case 1:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				case 2:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				case 3:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				case 4:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				case 5:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				case 6:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				case 7:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				case 8:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				case 9:
					if (__LIB_0__.func_109() || __LIB_0__.func_109())
					{
						iVar1 = 400;
						if (__LIB_0__.func_116() && (__LIB_0__.func_162() || __LIB_0__.func_161()))
						{
							iVar1 = 0;
						}
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				case 10:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				case 11:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				case 12:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				case 13:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				case 14:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				case 15:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				case 16:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				case 17:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				case 18:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				case 19:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				case 20:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				default:
					__LIB_0__.func_243(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					if (__LIB_0__.func_109() || __LIB_0__.func_109())
					{
						iVar1 = 450;
						if (__LIB_0__.func_116() && (__LIB_0__.func_162() || __LIB_0__.func_161()))
						{
							iVar1 = 0;
						}
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				case 1:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				case 2:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				case 3:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				case 4:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				case 5:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				case 6:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				case 7:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				case 8:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				case 9:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				case 10:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				case 11:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				case 12:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				case 13:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				case 14:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				case 15:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				case 16:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				case 17:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				case 18:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				case 19:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				case 20:
					break;
				case 21:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				case 22:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				case 23:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				case 24:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				case 25:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				case 26:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				case 27:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				case 28:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				case 29:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				case 30:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				case 31:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				case 32:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				case 33:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				case 34:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				case 35:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				case 36:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				case 37:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				case 38:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				case 39:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				default:
					__LIB_0__.func_243(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				case 1:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				case 2:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				case 3:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				case 4:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				case 5:
					if (__LIB_0__.func_109() || __LIB_0__.func_109())
					{
						iVar1 = 380;
						if (__LIB_0__.func_116() && (__LIB_0__.func_162() || __LIB_0__.func_161()))
						{
							iVar1 = 0;
						}
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				case 6:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				case 7:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				case 8:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				case 9:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				case 10:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				case 11:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				case 12:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				case 13:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				case 14:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				case 15:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				case 16:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				case 17:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				case 18:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				case 19:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				case 20:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				case 21:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				case 22:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				case 23:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				case 24:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				case 25:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				case 26:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				case 27:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				case 28:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				case 29:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				case 30:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				case 31:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				case 32:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				case 33:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				default:
					__LIB_0__.func_243(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(20000) * Global_262145.f_2916 /* Tunable: TATTOO_MP_FM_HEAD_BANGER_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 1:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1400) * Global_262145.f_2917 /* Tunable: TATTOO_MP_FM_SLAYER_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 2:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(9750) * Global_262145.f_2918 /* Tunable: TATTOO_MP_FM_GANGHIDEOUT_CLEAR_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 3:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2150) * Global_262145.f_2919 /* Tunable: TATTOO_MP_FM_ARMOURED_VAN_TAKEDOWN_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 4:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2920 /* Tunable: TATTOO_MP_FM_HUSTLER_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 54:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12400) * Global_262145.f_2921 /* Tunable: TATTOO_MP_FM_WIN_EVER_MODE_ONCE_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 5:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2922 /* Tunable: TATTOO_MP_FM_BOUNTY_KILLER_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 6:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2923 /* Tunable: TATTOO_MP_FM_HOLD_WORLD_RECORD_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 55:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1350) * Global_262145.f_2924 /* Tunable: TATTOO_MP_FM_FULL_MODDED_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 7:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1450) * Global_262145.f_2925 /* Tunable: TATTOO_MP_FM_REVENGE_KILL_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 8:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2700) * Global_262145.f_2926 /* Tunable: TATTOO_MP_FM_KILL_3_RACERS_EXPENDITURE_TUNABLE */)), 7);
					break;
				case 9:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1200) * Global_262145.f_2927 /* Tunable: TATTOO_MP_FM_REACH_RANK_1_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 10:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1500) * Global_262145.f_2928 /* Tunable: TATTOO_MP_FM_REACH_RANK_2_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 11:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2650) * Global_262145.f_2929 /* Tunable: TATTOO_MP_FM_REACH_RANK_3_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 56:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2930 /* Tunable: TATTOO_MP_FM_FMKILLCHEATER_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 12:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2931 /* Tunable: TATTOO_MP_FM_RACES_WON_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 57:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2932 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_1_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 58:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2933 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_2_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 59:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7400) * Global_262145.f_2934 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_3_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 60:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2935 /* Tunable: TATTOO_MP_FM_HOLD_UP_SHOPS_4_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 17:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2400) * Global_262145.f_2940 /* Tunable: TATTOO_MP_FM_01_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 18:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2941 /* Tunable: TATTOO_MP_FM_02_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 19:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3600) * Global_262145.f_2942 /* Tunable: TATTOO_MP_FM_03_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 20:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2943 /* Tunable: TATTOO_MP_FM_04_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 21:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12500) * Global_262145.f_2944 /* Tunable: TATTOO_MP_FM_05_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 22:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2945 /* Tunable: TATTOO_MP_FM_06_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 23:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2946 /* Tunable: TATTOO_MP_FM_07_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 24:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2947 /* Tunable: TATTOO_MP_FM_08_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 25:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2948 /* Tunable: TATTOO_MP_FM_09_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 26:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3750) * Global_262145.f_2949 /* Tunable: TATTOO_MP_FM_10_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 27:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4800) * Global_262145.f_2950 /* Tunable: TATTOO_MP_FM_11_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 28:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3500) * Global_262145.f_2951 /* Tunable: TATTOO_MP_FM_12_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 61:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12350) * Global_262145.f_2952 /* Tunable: TATTOO_MP_FM_13_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 62:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1900) * Global_262145.f_2953 /* Tunable: TATTOO_MP_FM_14_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 63:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4500) * Global_262145.f_2954 /* Tunable: TATTOO_MP_FM_15_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 64:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2955 /* Tunable: TATTOO_MP_FM_16_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 65:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12300) * Global_262145.f_2956 /* Tunable: TATTOO_MP_FM_17_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 29:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2957 /* Tunable: TATTOO_MP_FM_18_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 30:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2958 /* Tunable: TATTOO_MP_FM_19_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 31:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2959 /* Tunable: TATTOO_MP_FM_20_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 66:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2960 /* Tunable: TATTOO_MP_FM_21_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 32:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2961 /* Tunable: TATTOO_MP_FM_22_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 33:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2962 /* Tunable: TATTOO_MP_FM_23_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 34:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7250) * Global_262145.f_2963 /* Tunable: TATTOO_MP_FM_24_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 35:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(11900) * Global_262145.f_2964 /* Tunable: TATTOO_MP_FM_25_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 36:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2750) * Global_262145.f_2965 /* Tunable: TATTOO_MP_FM_26_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 37:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1750) * Global_262145.f_2966 /* Tunable: TATTOO_MP_FM_27_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 38:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7300) * Global_262145.f_2967 /* Tunable: TATTOO_MP_FM_28_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 39:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(3250) * Global_262145.f_2968 /* Tunable: TATTOO_MP_FM_29_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 40:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1000) * Global_262145.f_2969 /* Tunable: TATTOO_MP_FM_30_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 67:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2970 /* Tunable: TATTOO_MP_FM_31_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 41:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2971 /* Tunable: TATTOO_MP_FM_32_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 68:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2972 /* Tunable: TATTOO_MP_FM_33_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 42:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5050) * Global_262145.f_2973 /* Tunable: TATTOO_MP_FM_34_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 43:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2450) * Global_262145.f_2974 /* Tunable: TATTOO_MP_FM_35_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 44:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(4950) * Global_262145.f_2975 /* Tunable: TATTOO_MP_FM_36_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 45:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5100) * Global_262145.f_2976 /* Tunable: TATTOO_MP_FM_37_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 46:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(12250) * Global_262145.f_2977 /* Tunable: TATTOO_MP_FM_38_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 47:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(1150) * Global_262145.f_2978 /* Tunable: TATTOO_MP_FM_39_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 48:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2979 /* Tunable: TATTOO_MP_FM_40_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 49:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7600) * Global_262145.f_2980 /* Tunable: TATTOO_MP_FM_41_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 50:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2600) * Global_262145.f_2981 /* Tunable: TATTOO_MP_FM_42_EXPENDITURE_TUNABLE */)), 2);
					break;
				case 51:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2982 /* Tunable: TATTOO_MP_FM_43_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 52:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7450) * Global_262145.f_2983 /* Tunable: TATTOO_MP_FM_44_EXPENDITURE_TUNABLE */)), 3);
					break;
				case 53:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(7500) * Global_262145.f_2984 /* Tunable: TATTOO_MP_FM_45_EXPENDITURE_TUNABLE */)), 0);
					break;
				case 69:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2985 /* Tunable: TATTOO_MP_FM_46_EXPENDITURE_TUNABLE */)), 1);
					break;
				case 70:
					__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(2500) * Global_262145.f_2986 /* Tunable: TATTOO_MP_FM_47_EXPENDITURE_TUNABLE */)), 2);
					break;
			}
			if (iVar0 == joaat("MP_M_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					case 74:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					case 75:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					case 76:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					case 77:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					case 78:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					case 79:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					case 80:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					case 81:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					case 82:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					case 83:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					case 84:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					case 85:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					case 86:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					case 90:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					case 91:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					case 124:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					case 125:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					case 87:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 88:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 89:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 93:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 94:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					case 95:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					case 96:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					case 97:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					case 98:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					case 99:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					case 100:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					case 101:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					case 102:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					case 103:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					case 104:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					case 105:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					case 106:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					case 107:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					case 108:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 109:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 110:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 111:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 112:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 113:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 114:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 115:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 116:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 117:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 123:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					case 13:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2936 /* Tunable: TATTOO_MP_FM_CREW_A_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 14:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2937 /* Tunable: TATTOO_MP_FM_CREW_B_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 15:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2938 /* Tunable: TATTOO_MP_FM_CREW_C_EXPENDITURE_TUNABLE */)), 2);
						break;
					case 16:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2939 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 71:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 72:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FMM_CLB" /* GXT: Crew Emblem Back */, "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
				}
			}
			else if (iVar0 == joaat("MP_F_Freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					case 74:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					case 75:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					case 76:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					case 77:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					case 78:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					case 79:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					case 80:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					case 81:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					case 82:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					case 83:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					case 84:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					case 85:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					case 92:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					case 87:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2987 /* Tunable: TSHIRT_TRANS_MP_FM_REDSKULL_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 88:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2988 /* Tunable: TSHIRT_TRANS_MP_FM_LSBELLE_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 89:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(100) * Global_262145.f_2989 /* Tunable: TSHIRT_TRANS_MP_FM_ROCKSTAR_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 93:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 94:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					case 95:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					case 96:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					case 97:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					case 98:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					case 99:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					case 100:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					case 101:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					case 102:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					case 103:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					case 104:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					case 105:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					case 106:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					case 107:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					case 108:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 109:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 110:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 111:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 112:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 113:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					case 114:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					case 115:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 116:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 117:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 118:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 119:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 120:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 121:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 122:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					case 123:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					case 13:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2936 /* Tunable: TATTOO_MP_FM_CREW_A_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 14:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_100" /* GXT: Crew Emblem Small */, "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937 /* Tunable: TATTOO_MP_FM_CREW_B_EXPENDITURE_TUNABLE */)), 0);
						break;
					case 15:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2938 /* Tunable: TATTOO_MP_FM_CREW_C_EXPENDITURE_TUNABLE */)), 2);
						break;
					case 16:
						__LIB_0__.func_244(sParam0, iParam1, iParam3, "TAT_FM_101" /* GXT: Crew Emblem Large */, "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND((SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939 /* Tunable: TATTOO_MP_FM_CREW_D_EXPENDITURE_TUNABLE */)), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		__LIB_0__.func_243(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		sParam0->f_7 *= 2;
	}
	return sParam0->f_11 != -1;
}

var func_786(bool bParam0)//Position - 0x5D07C
{
	if (bParam0)
	{
		return (BitTest(Global_4718592.f_162497, 12) && __LIB_0__.func_248());
	}
	return BitTest(Global_4718592.f_162497, 12);
}

int func_787(int iParam0, bool bParam1, int iParam2)//Position - 0x5D92B
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (__LIB_0__.func_249(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != __LIB_0__.func_160() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_788(int iParam0, int iParam1)//Position - 0x6AA60
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return __LIB_0__.func_29(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return __LIB_6__.func_766(iParam0, iVar0, iVar1, iParam1);
}

int func_789(int iParam0)//Position - 0x82BA4
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_0_0"), 2, 4);
	}
	else if (iParam0 == 7)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_1_0"), 2, 4);
	}
	else if (iParam0 == 13)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_2_0"), 2, 4);
	}
	else if (iParam0 == 18)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_3_0"), 2, 4);
	}
	else if (iParam0 == 24)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_4_0"), 2, 4);
	}
	else if (iParam0 == 30)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_5_0"), 2, 4);
	}
	else if (iParam0 == 35)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_6_0"), 2, 4);
	}
	else if (iParam0 == 41)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_7_0"), 2, 4);
	}
	else if (iParam0 == 47)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_8_0"), 2, 4);
	}
	else if (iParam0 == 53)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_9_0"), 2, 4);
	}
	else if (iParam0 == 60)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_10_0"), 2, 4);
	}
	else if (iParam0 == 67)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_11_0"), 2, 4);
	}
	else if (iParam0 == 73)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_12_0"), 2, 4);
	}
	else if (iParam0 == 79)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_13_0"), 2, 4);
	}
	else if (iParam0 == 85)
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_14_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BEACH_F_HAIR00"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_15_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BEACH_F_HAIR05"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_16_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BUSI_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_18_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BUSI_F_HAIR1_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_19_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_VAL_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_17_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_HIPS_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_20_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_HIPS_F_HAIR1_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_21_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_IND_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_22_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_23_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW_F_HAIR1_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_24_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW_F_HAIR2_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_25_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW_F_HAIR3_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_26_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW2_F_HAIR0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_27_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW2_F_HAIR1_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_28_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_LOW2_F_HAIR2_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_29_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_0_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_30_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_1_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_31_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_2_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_32_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_3_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_33_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_4_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_34_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_35_0"), 2, 4);
	}
	else if (iParam0 == __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4))
	{
		return __LIB_6__.func_758(joaat("MP_F_Freemode_01"), joaat("DLC_MP_GR_F_HAIR_36_0"), 2, 4);
	}
	return iParam0;
}

int func_790(bool bParam0, bool bParam1)//Position - 0x875B4
{
	if (bParam0)
	{
		if (BitTest(Global_113386.f_668.f_1317, 2))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !__LIB_0__.func_52())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		return 1;
	}
	return 0;
}

void func_791(int iParam0, int iParam1)//Position - 0x8A8D7
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
			}
			break;
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
			}
			break;
		case 65:
			if (iParam1 == 1)
			{
				__LIB_0__.func_62(0, 0);
			}
			else
			{
				__LIB_0__.func_62(0, 1);
			}
			break;
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
			}
			break;
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
			}
			break;
	}
}

bool func_792(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x8A9F4
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	Global_1922024 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	__LIB_0__.func_64(&Var3, iParam0);
	if (__LIB_6__.func_291())
	{
		iVar1 = Global_113386.f_7261.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_42586.f_227[iParam0];
	}
	iVar2 = Global_39990[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1922024 = 1;
	}
	else
	{
		bVar5 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_39592[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1922024 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar5 = false;
						Global_1922024 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar5 = false;
			Global_1922024 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
						}
						Global_41186[iParam0] = 1;
					}
					bVar0 = true;
					break;
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1922024 = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1922024 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_34)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_40987[iParam0] = 1;
					Global_41186[iParam0] = 1;
					bVar0 = true;
					break;
				case 2:
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_50)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_50)))
							{
								INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar6);
						}
					}
					Global_41186[iParam0] = 1;
					Global_40987[iParam0] = 1;
					bVar0 = true;
					break;
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f)
					{
						iVar4 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar4))
						{
							if (iVar1 == 0)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar4, 3);
								Global_41186[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar4) != 6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar4) != 7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar4) != 8)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar4, 10);
									Global_41186[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
						MISC::CLEAR_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
						MISC::SET_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_39791[iParam0] = 0;
				Global_39990[iParam0] = iVar1;
				if (!__LIB_6__.func_291())
				{
					if (!Global_40587[iParam0])
					{
						Global_40587[iParam0] = 1;
						Global_40786++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_793(bool bParam0, int iParam1)//Position - 0x698A
{
	struct<82> Var0;
	if (__LIB_0__.func_317(bParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_0__.func_321(bParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

int func_794(int iParam0)//Position - 0xE144
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return __LIB_0__.func_340(Global_113386.f_9085.f_99.f_205[10]);
			break;
		case 74:
		case 75:
			return __LIB_0__.func_340(Global_113386.f_9085.f_99.f_205[8]);
			break;
		case 84:
		case 85:
			return __LIB_0__.func_340(Global_113386.f_9085.f_99.f_205[11]);
			break;
		case 90:
			return __LIB_0__.func_340(Global_113386.f_9085.f_99.f_205[7]);
			break;
		case 93:
			return __LIB_0__.func_340(Global_113386.f_9085.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_795(int iParam0, int iParam1)//Position - 0x298BB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = __LIB_0__.func_33(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return __LIB_0__.func_350(iParam0, iVar1, iVar2, iParam1);
}

void func_796(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x2E806
{
	int iVar0;
	if (__LIB_0__.func_354())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][__LIB_0__.func_330(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_797(int iParam0, int iParam1, int iParam2)//Position - 0x30AD0
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_420(iParam0, iParam1, 6, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_420(iParam0, iParam1, 6, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, 1137160120, 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("PILOT_SUIT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_798(int iParam0, int iParam1, int iParam2)//Position - 0x30D4D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_420(iParam0, iParam1, 4, 3);
				iVar1 = __LIB_0__.func_252(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SKINNY"), 0)) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SHORTS"), 0))
				{
					iVar2 = 0;
				}
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = __LIB_0__.func_420(iParam0, iParam1, 4, 4);
				iVar1 = __LIB_0__.func_252(iVar0);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, 1137160120, 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GUN_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("COWBOY_BOOTS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("DUNGAREES"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_799(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x313A0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = __LIB_0__.func_420(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = __LIB_6__.func_758(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_800(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x31449
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = __LIB_0__.func_420(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = __LIB_6__.func_758(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_801(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x314F1
{
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 4, 4);
						}
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_802(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x31547
{
	switch (iParam0)
	{
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
						}
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_803(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x350C6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (__LIB_0__.func_220(iParam0))
	{
		return -99;
	}
	if (__LIB_0__.func_222(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("MP_M_Freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = __LIB_0__.func_420(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILES::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return __LIB_6__.func_758(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("MP_F_Freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = __LIB_0__.func_420(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILES::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return __LIB_6__.func_758(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_804(int iParam0, bool bParam1)//Position - 0x425AA
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (20 - 1);
	if (bParam1)
	{
		iVar0 = 13;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = iVar1;
		if (!__LIB_0__.func_237(iVar2) || iParam0)
		{
			if (!__LIB_0__.func_355(PLAYER::PLAYER_ID(), iVar2, 0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_805(int iParam0, int iParam1)//Position - 0x4C4FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = __LIB_0__.func_420(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case joaat("DLC_MP_BEACH_M_HAIR00"):
					case joaat("DLC_MP_BEACH_M_HAIR01"):
					case joaat("DLC_MP_BEACH_M_HAIR02"):
					case joaat("DLC_MP_BEACH_M_HAIR03"):
					case joaat("DLC_MP_BEACH_M_HAIR04"):
					case joaat("DLC_MP_GR_M_HAIR_15_0"):
						return 108;
						break;
					case joaat("DLC_MP_BEACH_M_HAIR05"):
					case joaat("DLC_MP_BEACH_M_HAIR06"):
					case joaat("DLC_MP_BEACH_M_HAIR07"):
					case joaat("DLC_MP_BEACH_M_HAIR08"):
					case joaat("DLC_MP_BEACH_M_HAIR09"):
					case joaat("DLC_MP_GR_M_HAIR_16_0"):
						return 109;
						break;
					case joaat("DLC_MP_BUSI_M_HAIR0_0"):
					case joaat("DLC_MP_BUSI_M_HAIR0_1"):
					case joaat("DLC_MP_BUSI_M_HAIR0_2"):
					case joaat("DLC_MP_BUSI_M_HAIR0_3"):
					case joaat("DLC_MP_BUSI_M_HAIR0_4"):
						return 110;
						break;
					case joaat("DLC_MP_BUSI_M_HAIR1_0"):
					case joaat("DLC_MP_BUSI_M_HAIR1_1"):
					case joaat("DLC_MP_BUSI_M_HAIR1_2"):
					case joaat("DLC_MP_BUSI_M_HAIR1_3"):
					case joaat("DLC_MP_BUSI_M_HAIR1_4"):
						return 111;
						break;
					case joaat("DLC_MP_HIPS_M_HAIR0_0"):
					case joaat("DLC_MP_HIPS_M_HAIR0_1"):
					case joaat("DLC_MP_HIPS_M_HAIR0_2"):
					case joaat("DLC_MP_HIPS_M_HAIR0_3"):
					case joaat("DLC_MP_HIPS_M_HAIR0_4"):
						return 112;
						break;
					case joaat("DLC_MP_HIPS_M_HAIR1_0"):
					case joaat("DLC_MP_HIPS_M_HAIR1_1"):
					case joaat("DLC_MP_HIPS_M_HAIR1_2"):
					case joaat("DLC_MP_HIPS_M_HAIR1_3"):
					case joaat("DLC_MP_HIPS_M_HAIR1_4"):
						return 113;
						break;
					case joaat("CLO_IND_H_0_0"):
					case joaat("CLO_IND_H_0_1"):
					case joaat("CLO_IND_H_0_2"):
					case joaat("CLO_IND_H_0_3"):
					case joaat("CLO_IND_H_0_4"):
						return 114;
						break;
				}
				iVar1 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					FILES::GET_FORCED_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != joaat("0"))
						{
							return __LIB_0__.func_240(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 80)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 81)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 82)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 83)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 84)
		{
			return __LIB_0__.func_240(joaat("MP_Hair_014_Fix"), 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = __LIB_0__.func_420(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case joaat("DLC_MP_BEACH_F_HAIR00"):
					case joaat("DLC_MP_BEACH_F_HAIR01"):
					case joaat("DLC_MP_BEACH_F_HAIR02"):
					case joaat("DLC_MP_BEACH_F_HAIR03"):
					case joaat("DLC_MP_BEACH_F_HAIR04"):
					case joaat("DLC_MP_GR_F_HAIR_16_0"):
						return 108;
						break;
					case joaat("DLC_MP_BEACH_F_HAIR05"):
					case joaat("DLC_MP_BEACH_F_HAIR06"):
					case joaat("DLC_MP_BEACH_F_HAIR07"):
					case joaat("DLC_MP_BEACH_F_HAIR08"):
					case joaat("DLC_MP_BEACH_F_HAIR09"):
					case joaat("DLC_MP_GR_F_HAIR_15_0"):
						return 109;
						break;
					case joaat("DLC_MP_BUSI_F_HAIR0_0"):
					case joaat("DLC_MP_BUSI_F_HAIR0_1"):
					case joaat("DLC_MP_BUSI_F_HAIR0_2"):
					case joaat("DLC_MP_BUSI_F_HAIR0_3"):
					case joaat("DLC_MP_BUSI_F_HAIR0_4"):
						return 110;
						break;
					case joaat("DLC_MP_BUSI_F_HAIR1_0"):
					case joaat("DLC_MP_BUSI_F_HAIR1_1"):
					case joaat("DLC_MP_BUSI_F_HAIR1_2"):
					case joaat("DLC_MP_BUSI_F_HAIR1_3"):
					case joaat("DLC_MP_BUSI_F_HAIR1_4"):
						return 111;
						break;
					case joaat("DLC_MP_HIPS_F_HAIR0_0"):
					case joaat("DLC_MP_HIPS_F_HAIR0_1"):
					case joaat("DLC_MP_HIPS_F_HAIR0_2"):
					case joaat("DLC_MP_HIPS_F_HAIR0_3"):
					case joaat("DLC_MP_HIPS_F_HAIR0_4"):
						return 112;
						break;
					case joaat("DLC_MP_HIPS_F_HAIR1_0"):
					case joaat("DLC_MP_HIPS_F_HAIR1_1"):
					case joaat("DLC_MP_HIPS_F_HAIR1_2"):
					case joaat("DLC_MP_HIPS_F_HAIR1_3"):
					case joaat("DLC_MP_HIPS_F_HAIR1_4"):
						return 112;
						break;
					case joaat("CLO_INDF_H_0_0"):
					case joaat("CLO_INDF_H_0_1"):
					case joaat("CLO_INDF_H_0_2"):
					case joaat("CLO_INDF_H_0_3"):
					case joaat("CLO_INDF_H_0_4"):
						return 114;
						break;
				}
				iVar7 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					FILES::GET_FORCED_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != joaat("0"))
						{
							return __LIB_0__.func_240(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

int func_806(int iParam0, int iParam1, int iParam2)//Position - 0x4DDF8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = __LIB_0__.func_420(iParam0, iParam1, 4, 3);
			iVar1 = __LIB_0__.func_252(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
			iVar3 = __LIB_0__.func_252(iVar2);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				if (iVar0 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
			{
				return 1;
			}
		}
		else if (iVar0 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("TUX_PANTS"), 0))
			{
				return 1;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SANTA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("MORPH_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("GORKA_SUIT"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_ROBE"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("HEIST_DRAW_4"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_VAL_M_LEGS1_0"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_0"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_1"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_2"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_3"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_4"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_5"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_6"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_7"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_8"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_9"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_10"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_11"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_12"):
			case joaat("DLC_MP_VAL2_M_LEGS_1_13"):
				if ((((((((((((((((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_0")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_1")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_2")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_3")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_4")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_5")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_6")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_7")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_8")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_9")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_10")) || iVar2 == joaat("DLC_MP_SMUG_M_JBIB_4_11")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUCKED"), 0))
				{
					return 0;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SCRUFFY_JACKET"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("LOW2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar0, joaat("STUNT_DRAW_3"), 0))
			{
				return 0;
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = __LIB_0__.func_420(iParam0, iParam1, 4, 4);
			iVar5 = __LIB_0__.func_252(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0))
				{
					if ((((((((((((((((((((((((((((((((iParam1 >= 240 && iParam1 <= 255) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11")) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("VEST_SHIRT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("XMAS2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("XMAS2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TUCKED"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRAW_0"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SMUG_DRAW_5"), 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
				{
					return 0;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SANTA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SANTA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MORPH_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MORPH_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CAT_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("CAT_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("GORKA_SUIT"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_ROBE"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_ROBE"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SILK_PYJAMAS"), 0))
			{
				if (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("SILK_PYJAMAS"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("DRESS"), 0))
			{
				if (((iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("DRESS"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MINI_DRESS"), 0)) || (iVar6 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("STOCKINGS"), 0)))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIGH_WAIST"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_7"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("LOW2_DRAW_7"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HIGH_WAIST"), 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_3"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAILS_JACKET"), 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_22"), 0))
		{
			if (((((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_GEAR"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("GUN_DRAW_1"), 0))
			{
				return 0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("APART_DRAW_25"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_DRAW_33"), 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STOCKINGS"), 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR100")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR101")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR102")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR103")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR104")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR105")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR106")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR107")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR108")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR109")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR110")) || iVar4 == joaat("DLC_MP_BEACH_F_LOWR111")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_0")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_1")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_2")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_3")) || iVar4 == joaat("DLC_MP_VAL_F_LEGS0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_0")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_1")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_2")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_3")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_4")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_5")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_6")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_7")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_8")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_9")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_10")) || iVar4 == joaat("DLC_MP_VAL2_F_LEGS_0_11"))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_807(int iParam0, int iParam1, int iParam2)//Position - 0x4F421
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
	iVar0 = -99;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_808(int iParam0, int iParam1, int iParam2)//Position - 0x4FC04
{
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 237)
			{
				iParam2 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("JACKET"), 0))
			{
				return 1;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176))
			{
				return 1;
			}
			if (iParam2 == -1 && iParam1 >= 256)
			{
				iParam2 = __LIB_0__.func_420(iParam0, iParam1, 11, 4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("JACKET"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_809(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4FD5D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
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
	bool bVar29;
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
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
			iVar3 = __LIB_0__.func_252(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
			iVar5 = __LIB_0__.func_252(iVar4);
		}
		if (iVar2 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JAN_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_BOMB"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
				if (((((((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_5"), 0))
					{
						return -99;
					}
				}
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JAN_DRAW_1"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_3"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
			{
				return -99;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		bVar7 = false;
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
		{
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_0_8"), 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_2_8"), 8, 3);
							break;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
				{
					switch (iParam1)
					{
						case 0:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_0"), 8, 3);
							break;
						case 1:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_1"), 8, 3);
							break;
						case 2:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_2"), 8, 3);
							break;
						case 3:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_3"), 8, 3);
							break;
						case 4:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_4"), 8, 3);
							break;
						case 5:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_5"), 8, 3);
							break;
						case 7:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_6"), 8, 3);
							break;
						case 8:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_7"), 8, 3);
							break;
						case 11:
							iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_SPECIAL_4_8"), 8, 3);
							break;
						}
				}
				return iVar0;
			}
			else if (iParam1 >= 236 && iParam1 <= 236)
			{
				iVar0 = 240;
				return iVar0;
			}
			else if (iParam1 >= 237)
			{
				bVar7 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
				{
					iVar6 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
				{
					iVar6 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
				{
					iVar6 = 6;
				}
				else
				{
					iVar6 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0))
		{
			bVar7 = true;
			iVar6 = 1;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_20"), 0))
		{
			bVar7 = true;
			if (((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
			{
				iVar6 = 1;
			}
			else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_21"), 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (bVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (((((((iVar6 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_6"), 0)) || (iVar6 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_5"), 0))) || (iVar6 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0))) || (iVar6 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0))) || (iVar6 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_2"), 0))) || (iVar6 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL"), 0))) || ((((((iVar6 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar10, joaat("ALT_SPECIAL_6"), 0)))
						{
							if (iVar10 != 0 && iVar10 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
		{
			if ((iParam1 >= 80 && iParam1 <= 95) || iVar5 == 5)
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_3"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
		{
			if ((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 140 && iParam1 <= 155)) || iVar5 == 5) || iVar5 == 9)
			{
				return -99;
			}
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if (((iParam1 >= 220 && iParam1 <= 235) && __LIB_0__.func_253()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0))
			{
				FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 10, -1, false, -1, 8);
				iVar13 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(joaat("DLC_MP_BUSI_M_ACCS5_0"));
				iVar0 = (__LIB_0__.func_25(iParam0, __LIB_0__.func_33(8)) + iVar13);
				iVar1 = 1;
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar14 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
					if ((iVar14 != -1 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_12"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar14, joaat("DRAW_8"), 0))
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_VARIANT_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 8)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_4"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar17, joaat("ALT_SPECIAL_6"), 0))
									{
										iVar0 = __LIB_6__.func_758(iParam0, iVar17, 8, 3);
									}
								}
								else
								{
									iVar0 = iVar18;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar20 = 0;
				if (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0))
				{
					iVar20 = 1;
				}
				iVar21 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
				if (iVar21 != -1)
				{
					iVar22 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar21);
					iVar23 = 0;
					while (iVar23 < iVar22)
					{
						FILES::GET_VARIANT_COMPONENT(iVar21, iVar23, &iVar24, &iVar25, &iVar26);
						if (iVar26 == 8 && iVar20 == FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar24, joaat("TAILS_VERSION"), 0))
						{
							if (iVar24 != 0 && iVar24 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar24, 8, 3);
							}
							else
							{
								iVar0 = iVar25;
							}
							iVar23 = iVar22 + 1;
							iVar1 = 0;
						}
						iVar23++;
					}
				}
				else
				{
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_0"), 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (__LIB_0__.func_253())
			{
				iVar27 = joaat("DLC_MP_BUSI_M_ACCS4_0");
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)))
				{
					iVar27 = joaat("DLC_MP_BUSI_M_ACCS5_0");
				}
				FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(3, 10, -1, false, -1, 8);
				iVar28 = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iVar27);
				iVar0 = (__LIB_0__.func_25(iParam0, __LIB_0__.func_33(8)) + iVar28);
				iVar1 = 1;
			}
			if ((((iParam2 >= 237 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
			iVar1 = 0;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			bVar29 = false;
			iVar30 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_21"), 0))
			{
				bVar29 = true;
			}
			if (iVar30 != -1)
			{
				iVar31 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar30);
				iVar32 = 0;
				while (iVar32 < iVar31)
				{
					FILES::GET_VARIANT_COMPONENT(iVar30, iVar32, &iVar33, &iVar34, &iVar35);
					if (iVar35 == 8)
					{
						if (iVar33 != 0 && iVar33 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar33, 8, 3);
							iVar1 = 0;
							if (!bVar29 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("ALT_SPECIAL"), 0))
							{
								iVar32 = iVar31 + 1;
							}
						}
						else
						{
							iVar0 = iVar34;
							iVar32 = iVar31 + 1;
							iVar1 = 0;
						}
					}
					iVar32++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		iVar36 = -1;
		iVar37 = -1;
		if (iParam2 >= 256)
		{
			iVar36 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
			iVar37 = __LIB_0__.func_252(iVar36);
		}
		iVar38 = -1;
		iVar39 = -1;
		if (iParam1 >= 256)
		{
			iVar38 = __LIB_0__.func_420(iParam0, iParam1, 11, 4);
			iVar39 = __LIB_0__.func_252(iVar38);
		}
		if (iVar36 != -1)
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("JACKET_ONLY"), 0))
			{
				return -99;
			}
		}
		if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("STUNT_DRAW_5"), 0))
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LOW2_OPEN_CHECK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("OPEN_SHORT"), 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 0) || iVar39 == 2) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_0")) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_1")) || iVar38 == joaat("DLC_MP_BUS2_F_JBIB0_2")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_0")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_1")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_2")) || iVar38 == joaat("DLC_MP_HIPS_F_JBIB7_3")) || iVar38 == joaat("DLC_MP_IND_F_JBIB_1_0")) || iVar38 == joaat("DLC_MP_LUXE_F_JBIB_3_0"))
			{
			}
			else
			{
				return -99;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_3"), 0))
		{
			return -99;
		}
		iVar40 = 0;
		bVar41 = false;
		if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("HEIST_DRAW_3"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LUXE_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("EXEC_DRAW_14"), 0))
		{
			bVar41 = true;
			if (((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("OPEN_SHORT"), 0))
			{
				iVar40 = 2;
			}
			else if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
			{
				iVar40 = 0;
			}
			else if (((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_13"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_2"), 0))
				{
					iVar40 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0))
				{
					iVar40 = 1;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				iVar40 = 1;
			}
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("APART_DRAW_21"), 0))
		{
			bVar41 = true;
			if ((((((((((iParam2 >= 112 && iParam2 <= 127) || iVar37 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0))
			{
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = 1;
				}
			}
			else if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_12"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_22"), 0))
			{
				iVar40 = 0;
			}
			else
			{
				iVar40 = -1;
			}
		}
		switch (iVar38)
		{
			case joaat("DLC_MP_BUS2_F_JBIB0_0"):
			case joaat("DLC_MP_BUS2_F_JBIB0_1"):
			case joaat("DLC_MP_BUS2_F_JBIB0_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_0"):
			case joaat("DLC_MP_HIPS_F_JBIB7_1"):
			case joaat("DLC_MP_HIPS_F_JBIB7_2"):
			case joaat("DLC_MP_HIPS_F_JBIB7_3"):
			case joaat("DLC_MP_IND_F_JBIB_1_0"):
			case joaat("DLC_MP_LUXE_F_JBIB_3_0"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_0"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_1"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_2"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_3"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_4"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_5"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_6"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_7"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_8"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_9"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_10"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_11"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_12"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_13"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_14"):
			case joaat("DLC_MP_STUNT_F_JBIB_5_15"):
				bVar41 = true;
				if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
				{
					iVar40 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_1"), 0))
				{
					iVar40 = 2;
				}
				else if ((((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
				{
					iVar40 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 1) || iVar37 == 7) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
			case joaat("DLC_MP_IND_F_JBIB_1_1"):
				bVar41 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar37 == 1) || iVar37 == 8)
				{
					iVar40 = 0;
				}
				else
				{
					iVar40 = -1;
				}
				break;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_5"), 0))
		{
			if ((iParam1 >= 240 && iParam1 <= 255) || iVar39 == 15)
			{
				iVar0 = 120;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("LOW2_DRAW_1"), 0))
			{
				bVar41 = true;
				iVar40 = 0;
			}
			else
			{
				return iVar0;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("JACKET_ONLY"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("X17_DRAW_6"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12)
				{
					return -99;
				}
			}
			if ((((((((((((iParam1 >= 64 && iParam1 <= 79) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar39 == 4) || iVar39 == 5) || iVar39 == 11) || iVar39 == 12) || iVar39 == 13) || iVar39 == 15)
			{
				bVar41 = false;
			}
			else if (iParam1 >= 256)
			{
				bVar41 = true;
				if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_13"), 0))
				{
					iVar40 = 4;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_1"), 0))
				{
					iVar40 = 5;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("X17_DRAW_6"), 0))
				{
					iVar40 = 6;
				}
				else
				{
					iVar40 = -1;
				}
			}
			else
			{
				return iVar0;
			}
		}
		if (bVar41)
		{
			if (iVar40 != -1)
			{
				iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar38);
				iVar43 = 0;
				while (iVar43 < iVar42)
				{
					FILES::GET_VARIANT_COMPONENT(iVar38, iVar43, &iVar44, &iVar45, &iVar46);
					if (iVar46 == 8)
					{
						if (((((((iVar40 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_6"), 0)) || (iVar40 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_5"), 0))) || (iVar40 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_2"), 0))) || (iVar40 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL"), 0))) || ((((((iVar40 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar44, joaat("ALT_SPECIAL_6"), 0)))
						{
							if (iVar44 != 0 && iVar44 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar44, 8, 4);
							}
							else
							{
								iVar0 = iVar45;
							}
							iVar43 = iVar42 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar43++;
				}
			}
			return -99;
		}
		if ((((((((iParam1 >= 192 && iParam1 <= 207) || iVar39 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar37 == 6) || iVar37 == 7)) && __LIB_0__.func_253()) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_15"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("APART_DRAW_25"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("STUNT_DRAW_9"), 0))
		{
			if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_6"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_1"), 0))
			{
				return -99;
			}
			iVar47 = iVar38;
			if (iParam1 == 199)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_0"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_3"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_1"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_4"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_2"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_5"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_3"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_6"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_4"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_7"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_5"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_8"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_6"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_9"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_7"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_10"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_8"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_11"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_9"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_12"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_10"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_13"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_11"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_14"), 8, 4);
			}
			else if (iVar47 == joaat("DLC_MP_BUSI_F_JBIB2_12"))
			{
				iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_15"), 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((((iParam2 >= 160 && iParam2 <= 175) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("SMUG_DRAW_0"), 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				case 200:
					iVar0 = 95;
					break;
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar37 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar38 != -1)
			{
				bVar48 = true;
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar38, joaat("VEST_SHIRT"), 0))
				{
					bVar48 = false;
					if (iParam2 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar36, joaat("VEST"), 0))
					{
						bVar48 = true;
					}
				}
				if (bVar48)
				{
					iVar40 = 0;
					if (iParam2 >= 160 && iParam2 <= 175)
					{
						if (iVar39 == 12)
						{
							iVar40 = 1;
						}
					}
					iVar49 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar38);
					iVar50 = 0;
					while (iVar50 < iVar49)
					{
						FILES::GET_VARIANT_COMPONENT(iVar38, iVar50, &iVar51, &iVar52, &iVar53);
						if (iVar53 == 8 && ((((((((iVar51 == 0 || iVar51 == joaat("0")) || (iVar40 == 6 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_6"), 0))) || (iVar40 == 5 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_5"), 0))) || (iVar40 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_4"), 0))) || (iVar40 == 3 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_3"), 0))) || (iVar40 == 2 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_2"), 0))) || (iVar40 == 1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL"), 0))) || ((((((iVar40 == 0 && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_2"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_3"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_4"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_5"), 0)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar51, joaat("ALT_SPECIAL_6"), 0))))
						{
							if (iVar51 != 0 && iVar51 != joaat("0"))
							{
								iVar0 = __LIB_6__.func_758(iParam0, iVar51, 8, 4);
							}
							else
							{
								iVar0 = iVar52;
							}
							iVar50 = iVar49 + 1;
							iVar1 = 0;
						}
						iVar50++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam3);
	}
	return iVar0;
}

void func_810(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x58C94
{
	int iVar0;
	if (iParam2 == -1)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
		if (iParam1 == 0)
		{
			iVar0 = __LIB_6__.func_766(iParam0, iParam2, iParam3, iParam1);
			if (__LIB_0__.func_709(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

int func_811(int iParam0, int iParam1, int iParam2)//Position - 0x59D4D
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
	iVar0 = -99;
	if (iParam0 == joaat("MP_M_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = __LIB_0__.func_420(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					FILES::GET_VARIANT_COMPONENT(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("MP_F_Freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = __LIB_0__.func_420(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					FILES::GET_VARIANT_COMPONENT(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != joaat("0"))
						{
							iVar0 = __LIB_6__.func_758(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

void func_812(int iParam0, int iParam1, int iParam2)//Position - 0x72EE9
{
	int iVar0;
	iVar0 = __LIB_0__.func_362(iParam2);
	if (iVar0 != 0)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iVar0))
		{
			WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iParam1, iVar0);
		}
	}
}

int func_813(int iParam0)//Position - 0x77945
{
	int iVar0;
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(__LIB_0__.func_346(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

bool func_814(int iParam0)//Position - 0x78355
{
	struct<7> Var0;
	int iVar1;
	Var0 = { __LIB_0__.func_347(iParam0) };
	iVar1 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_815(struct<3> Param0, int iParam1, int iParam2)//Position - 0x7AFA5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_95479[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_95479[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (__LIB_0__.func_369(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_95479[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_816(bool bParam0)//Position - 0x7C09F
{
	if (__LIB_0__.func_317(bParam0))
	{
		return __LIB_0__.func_318(bParam0);
	}
	else if (bParam0 != 145)
	{
	}
	return 0;
}

int func_817(int iParam0)//Position - 0x87E20
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("halftrack"):
		case joaat("phantom3"):
		case joaat("hauler2"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("bruiser"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			return 1;
			break;
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (__LIB_0__.func_267(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		case joaat("minitank"):
		case joaat("burrito2"):
			return 1;
	}
	return 0;
}

int func_818(int iParam0, bool bParam1, var uParam2)//Position - 0x88B4E
{
	bool bVar0;
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == joaat("firetruk")) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (__LIB_0__.func_341(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer2")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != joaat("trailerlarge")) && iParam0 != joaat("trailersmall2")) && iParam0 != joaat("rrocket")) && iParam0 != joaat("stryder")) && iParam0 != joaat("verus")) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_281(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

void func_819(int iParam0)//Position - 0x8CBF5
{
	if (!__LIB_0__.func_282(*iParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, 5, !Global_113386.f_9085.f_99.f_58[119]);
	}
}

int func_820(int iParam0)//Position - 0x8E365
{
	if (!__LIB_0__.func_114() && __LIB_0__.func_290(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_821(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x8E660
{
	int iVar0;
	if (!__LIB_0__.func_317(bParam1))
	{
		iVar0 = __LIB_0__.func_397(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			__LIB_0__.func_366(*iParam0, bParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

bool func_822(var uParam0, int iParam1)//Position - 0x957C7
{
	return __LIB_0__.func_150(uParam0, iParam1) != -1;
}

void func_823(bool bParam0, int iParam1)//Position - 0x95864
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (!Global_63156)
	{
		Global_63156 = iParam1;
	}
	if (bParam0)
	{
		if ((__LIB_0__.func_2(0) && Global_78565.f_1 == 1) && __LIB_0__.func_326(Global_78565))
		{
		}
		else
		{
			Global_63154 = 1;
		}
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		iVar1 = Global_91193[iVar0 /*5*/];
		uVar2 = Global_78588.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_113386.f_9085)
			{
			}
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (BitTest(Global_91193[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78567, 1);
		Global_78583 = uVar2;
		Global_78584 = MISC::GET_GAME_TIMER();
	}
}

int func_824(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x964CD
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { __LIB_0__.func_79(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.f_0 = -Var1.f_1;
		Var0.f_1 = Var1.f_0;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7.f_0, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7.f_0, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8.f_0, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8.f_0, Var8.f_1, 0f) };
		if (((((((((((((((__LIB_0__.func_88(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || __LIB_0__.func_88(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || __LIB_0__.func_88(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || __LIB_0__.func_88(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || __LIB_0__.func_88(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || __LIB_0__.func_88(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || __LIB_0__.func_88(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || __LIB_0__.func_88(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || __LIB_0__.func_88(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || __LIB_0__.func_88(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || __LIB_0__.func_88(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || __LIB_0__.func_88(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || __LIB_0__.func_88(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || __LIB_0__.func_88(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || __LIB_0__.func_88(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || __LIB_0__.func_88(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_825(int iParam0, bool bParam1, bool bParam2)//Position - 0x99B36
{
	return __LIB_0__.func_519(iParam0, !bParam1, bParam2);
}

void func_826(int iParam0, int iParam1)//Position - 0xC0185
{
	int iVar0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			__LIB_0__.func_169(iParam0, iVar0, 0);
			__LIB_0__.func_168(iParam0, iVar0, 0);
		}
	}
}

int func_827(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2BAED
{
	switch (iParam0)
	{
		case joaat("Player_Zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("Player_One"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("Player_Two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		case joaat("MP_M_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam2, 14, 3), joaat("HAT_MENU"), 1));
					}
					break;
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 1, 3);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam2, 1, 3), joaat("HAT_MENU"), 0));
					}
					break;
			}
			break;
		case joaat("MP_F_Freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 14, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam2, 14, 4), joaat("HAT_MENU"), 1));
					}
					break;
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = __LIB_0__.func_420(iParam0, iParam2, 1, 4);
						}
						return (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAT"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam2, 1, 4), joaat("HAT_MENU"), 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_828(int iParam0, int iParam1)//Position - 0x4520A
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_245(iParam0);
	if (iVar0 == 13122)
	{
		if (__LIB_0__.func_3() == 2 && __LIB_0__.func_63() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	iVar1 = __LIB_0__.func_534(iVar0, iParam1, 0);
	return iVar1;
}

int func_829(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6E345
{
	int iVar0;
	iVar0 = __LIB_6__.func_795(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_830(int iParam0, int iParam1)//Position - 0x6FA0F
{
	struct<82> Var0;
	if (__LIB_0__.func_317(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_0__.func_321(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_831(bool bParam0, int iParam1)//Position - 0x7204A
{
	switch (bParam0)
	{
		case 0:
			__LIB_0__.func_387(4, *iParam1, 0);
			__LIB_0__.func_387(7, *iParam1, 0);
			__LIB_0__.func_387(8, *iParam1, 0);
			__LIB_0__.func_387(11, *iParam1, 0);
			break;
		case 1:
			__LIB_0__.func_387(4, *iParam1, 0);
			__LIB_0__.func_387(7, *iParam1, 0);
			__LIB_0__.func_387(8, *iParam1, 0);
			__LIB_0__.func_387(11, *iParam1, 0);
			if (Global_113386.f_9085.f_99.f_58[126])
			{
				__LIB_0__.func_387(12, *iParam1, 0);
			}
			break;
		case 2:
			__LIB_0__.func_387(4, *iParam1, 0);
			__LIB_0__.func_387(7, *iParam1, 0);
			__LIB_0__.func_387(8, *iParam1, 0);
			__LIB_0__.func_387(11, *iParam1, 0);
			break;
	}
}

int func_832(int iParam0)//Position - 0x72A5A
{
	if ((Global_113386.f_9085 || Global_3) || __LIB_0__.func_2(0))
	{
		if (!Global_78319 || (Global_78319 && iParam0 != __LIB_0__.func_386(__LIB_0__.func_430())))
		{
			if (((iParam0 == 0 && !__LIB_0__.func_368(115)) || (iParam0 == 1 && !__LIB_0__.func_368(116))) || (iParam0 == 2 && !__LIB_0__.func_368(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_833()//Position - 0x74E51
{
	Global_20471 = 0;
	__LIB_0__.func_374();
}

void func_834(int iParam0, char* sParam1, int iParam2)//Position - 0x7661F
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, __LIB_0__.func_375(iParam2), 1);
}

int func_835(var uParam0)//Position - 0x77E7B
{
	int iVar0;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (__LIB_0__.func_443(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_836(int iParam0, bool bParam1, bool bParam2)//Position - 0x7AA70
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (__LIB_0__.func_87(bParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_837(int iParam0, int iParam1, bool bParam2)//Position - 0x7B955
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
		if (__LIB_0__.func_3() == 0)
		{
			return BitTest(__LIB_0__.func_534(__LIB_0__.func_297(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

struct<6> func_838(int iParam0)//Position - 0x7C868
{
	return __LIB_0__.func_335(iParam0);
}

int func_839()//Position - 0x85B26
{
	if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_0__.func_416()))
	{
		return 1;
	}
	return 0;
}

int func_840(int iParam0)//Position - 0x92318
{
	return __LIB_0__.func_519(iParam0, 1, 0);
}

int func_841(int iParam0)//Position - 0x979DD
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (__LIB_0__.func_404())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

void func_842()//Position - 0x97CF1
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	__LIB_0__.func_406();
}

bool func_843(int iParam0)//Position - 0x9B397
{
	int iVar0;
	int iVar1;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = __LIB_6__.func_795(iParam0, 4);
	return __LIB_0__.func_351(iVar1, 4, iVar0);
}

int func_844(int iParam0)//Position - 0x9FDF3
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((VEHICLE::IS_BIG_VEHICLE(iParam0) && !__LIB_6__.func_817(iParam0)) || __LIB_0__.func_268(iVar0))
		{
			return 1;
		}
		switch (iVar0)
		{
			case joaat("slamtruck"):
			case joaat("patriot2"):
			case joaat("caracara"):
			case joaat("caracara2"):
			case joaat("mule4"):
			case joaat("pounder2"):
			case joaat("speedo4"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_845(var uParam0)//Position - 0xA4A79
{
	if (!__LIB_0__.func_282(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113386.f_9085.f_99.f_58[119]);
	}
}

void func_846(int iParam0)//Position - 0xBA9CB
{
	return;
	Global_23011.f_126 = 1;
	Global_23011.f_127 = __LIB_0__.func_380(iParam0);
	Global_23011.f_129 = MISC::GET_GAME_TIMER();
}

var func_847(int iParam0)//Position - 0xBE524
{
	return __LIB_0__.func_461(iParam0);
}

void func_848(bool bParam0)//Position - 0x8133
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (!__LIB_0__.func_43(bParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_7688.f_136)
	{
		if (BitTest(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0))
		{
			if (Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_113386.f_7688[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_113386.f_7688.f_764)
	{
		if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0))
		{
			if (Global_113386.f_7688.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_113386.f_7688.f_919[bParam0] = iVar1;
}

void func_849(int iParam0)//Position - 0xB2A0
{
	if (__LIB_0__.func_94())
	{
		return;
	}
	if (Global_20464)
	{
		if (__LIB_0__.func_93())
		{
			__LIB_0__.func_312(1, 1);
		}
		else
		{
			__LIB_0__.func_312(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!__LIB_0__.func_73())
	{
		Global_20266.f_1 = 3;
	}
}

int func_850(int iParam0, bool bParam1, int iParam2)//Position - 0x4976
{
	int iVar0;
	iVar0 = __LIB_0__.func_519(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_851(int iParam0, int iParam1)//Position - 0x4FA4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var* uVar4;
	struct<4> Var5;
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_SMG_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 9:
					iVar0 = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_SR_SUPP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_PI_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_AR_FLSH");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
				case 4:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
				case 5:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
				case 6:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
				case 7:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
				case 8:
					iVar0 = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
				case 3:
					iVar0 = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
				case 2:
					iVar0 = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		default:
			if (iParam0 != 0)
			{
				iVar1 = __LIB_0__.func_260(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!__LIB_0__.func_259(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

void func_852(int iParam0)//Position - 0x754E
{
	__LIB_0__.func_181(93, iParam0);
	__LIB_0__.func_181(29, iParam0);
	__LIB_0__.func_181(30, iParam0);
}

int func_853(int iParam0, int iParam1)//Position - 0x2A4F
{
	struct<82> Var0;
	if (__LIB_0__.func_43(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_0__.func_120(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_854(int iParam0)//Position - 0xAC50
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (__LIB_6__.func_763(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_855()//Position - 0x17BB
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	iVar0 = 0;
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		__LIB_0__.func_4(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (__LIB_0__.func_3() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					__LIB_0__.func_533();
				}
			}
		}
	}
}

int func_856(int iParam0)//Position - 0x3F91
{
	int iVar0;
	int iVar1;
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iParam0)) < (5f * 5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), OBJECT::GET_PICKUP_OBJECT(iParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_857(int* iParam0, var uParam1, var uParam2)//Position - 0x46E9
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	*iParam0 = 0;
	iParam0->f_1 = 0;
	iParam0->f_2 = uParam1;
	iParam0->f_3 = uParam2;
	if (bLocal_40)
	{
	}
	iVar0 = 0;
	while (iVar0 < iParam0->f_3)
	{
		if (__LIB_0__.func_137((iParam0->f_2 + iVar0), -1))
		{
			iVar1++;
			__LIB_0__.func_543(iParam0, iVar0, 1);
			if (bLocal_40)
			{
			}
		}
		iVar0++;
	}
	iParam0->f_4 = iVar1;
	if (bLocal_40)
	{
	}
}

void func_858(int iParam0)//Position - 0x8F9
{
	Global_63147 = 1;
	Global_63150 = 1;
	if (Global_75249 > 15)
	{
		return;
	}
	__LIB_0__.func_550(Global_75249);
	Global_75250[Global_75249 /*9*/] = iParam0;
	Global_75249++;
	if (Global_63379[iParam0 /*13*/] == 16)
	{
		Global_75401 = 1;
	}
}

void func_859()//Position - 0xA74
{
	Global_63173 = 0;
	Global_63177 = __LIB_0__.func_554(joaat("SP0_SHOTS"));
	Global_63176 = __LIB_0__.func_554(joaat("SP0_HITS"));
	Global_63179 = __LIB_0__.func_554(joaat("SP1_SHOTS"));
	Global_63178 = __LIB_0__.func_554(joaat("SP1_HITS"));
	Global_63181 = __LIB_0__.func_554(joaat("SP2_SHOTS"));
	Global_63180 = __LIB_0__.func_554(joaat("SP2_HITS"));
}

void func_860()//Position - 0xB53
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (__LIB_0__.func_557())
		{
			if (Global_63149 && !Global_63148)
			{
				Global_63149 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

void func_861(int iParam0)//Position - 0x86D5
{
	var uVar0;
	char cVar1[24];
	if (MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || __LIB_0__.func_52())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

void func_862(char* sParam0, int iParam1, int iParam2)//Position - 0x875A
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97511))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_97511, 0, 0, false, true, false);
		StringCopy(&Global_97511, "", 64);
	}
	StringCopy(&Global_97511, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, __LIB_0__.func_2(0));
}

void func_863(int iParam0)//Position - 0xA25E
{
	if (iParam0 < 63)
	{
		__LIB_0__.func_55();
		Global_78574 = iParam0;
		Global_78573 = 0;
		Global_78576 = 7;
	}
}

int func_864(char* sParam0, int iParam1)//Position - 0xA7AC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		__LIB_6__.func_773(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_865(int iParam0)//Position - 0xAA25
{
	if (__LIB_0__.func_2(0))
	{
		if (Global_78565.f_1 == 7)
		{
			if (Global_78565 == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_866()//Position - 0xE6C
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	PED::GET_CLOSEST_PED(Var0, fLocal_41, true, true, &iVar1, false, true, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (iVar2 == joaat("IG_Tonya"))
		{
			iLocal_38 = iVar1;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_38, true, false);
			PED::SET_PED_MONEY(iLocal_38, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_38, false);
			PED::SET_PED_NAME_DEBUG(iLocal_38, "TONYA");
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_38, joaat("PLAYER"));
			__LIB_0__.func_203(&uLocal_53, 3, iLocal_38, "TONYA", 1, 1);
			__LIB_0__.func_576();
			if (!__LIB_0__.func_86(Local_49))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_38, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_38, Local_49, 1f, -1, 0.25f, 0, fLocal_50);
					PED::SET_PED_KEEP_TASK(iLocal_38, true);
				}
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_867(int iParam0)//Position - 0xFC9B
{
	int iVar0;
	iVar0 = iParam0;
	if ((__LIB_0__.func_175() && Global_1853348[iVar0 /*834*/].f_804) && !__LIB_0__.func_86(Global_1853348[iVar0 /*834*/].f_805))
	{
		return Global_1853348[iVar0 /*834*/].f_805;
	}
	return __LIB_0__.func_85(iParam0);
}

void func_868(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1E82A
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var2;
	int iVar3;
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("Player_Zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("Player_One"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("Player_Two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("MP_M_Freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("MP_F_Freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar3, &Var2) && Var2.f_2 != -1)
				{
					if ((Var2.f_0 != 0 && Var2.f_0 != -1) && Var2.f_0 != joaat("0"))
					{
						(*iParam0)[Var2.f_2] = __LIB_6__.func_758(iParam1, Var2.f_0, 14, iVar0);
					}
					else if (Var2.f_1 != -1)
					{
						(*iParam0)[Var2.f_2] = Var2.f_1;
					}
				}
				iVar3++;
			}
		}
	}
}

bool func_869(int iParam0)//Position - 0x321
{
	return __LIB_0__.func_611(iParam0);
}

void func_870(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x27D6
{
	int iVar0;
	if (__LIB_0__.func_597(PLAYER::PLAYER_ID(), Param0, iParam2) > -1)
	{
		if ((Global_2667225.f_2921[1 /*6*/].f_5 == iParam3 && Global_2667225.f_2921[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_2667225.f_2921[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667225.f_2921[iVar0 /*6*/] = { Global_2667225.f_2921[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667225.f_2921[1 /*6*/] = { Param0 };
		Global_2667225.f_2921[1 /*6*/].f_3 = fParam1;
		Global_2667225.f_2921[1 /*6*/].f_4 = iParam2;
		Global_2667225.f_2921[1 /*6*/].f_5 = iParam3;
	}
}

int func_871()//Position - 0x34B3
{
	switch (__LIB_0__.func_3())
	{
		case 0:
			return __LIB_0__.func_662();
			break;
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_872()//Position - 0x209D
{
	if (!Global_262145.f_28866 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_0__.func_431(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_873(var uParam0)//Position - 0x41E
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = joaat("NET_SHOP_TTYPE_INVALID");
	uParam0->f_66.f_4 = joaat("SERVICE_INVALID");
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = joaat("NET_SHOP_ACTION_INVALID");
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	__LIB_0__.func_675(&(uParam0->f_14));
	__LIB_0__.func_675(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_874(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x32DD8
{
	struct<3> Var0;
	int iVar1;
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = __LIB_0__.func_679(Var0.f_1);
	if ((Global_262145.f_24104 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24105 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24106 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		__LIB_0__.func_678();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

int func_875(int iParam0)//Position - 0x94DDB
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
	switch (__LIB_0__.func_684(__LIB_0__.func_685(iParam0, 1)))
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

void func_876(var uParam0, int iParam1)//Position - 0x3E95
{
	struct<3> Var0;
	Var0.f_0 = 219130657;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_0__.func_679(iParam1));
}

void func_877(int* iParam0)//Position - 0x3F4B
{
	if (__LIB_0__.func_736(&(iParam0->f_2)))
	{
		__LIB_0__.func_735(&(iParam0->f_2));
	}
}

void func_878(int* iParam0, float fParam1)//Position - 0x403A
{
	if (!__LIB_0__.func_736(iParam0))
	{
		__LIB_2__.func_186(iParam0, fParam1);
	}
}

bool func_879(int* iParam0)//Position - 0x4054
{
	return __LIB_0__.func_736(&(iParam0->f_2));
}

void func_880(var uParam0, float fParam1)//Position - 0x648F
{
	if (__LIB_0__.func_493())
	{
		return;
	}
	CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam1);
}

void func_881(int iParam0, int iParam1, int iParam2)//Position - 0x750F
{
	int iVar0;
	if (__LIB_0__.func_691(iParam1, iParam2))
	{
		iVar0 = __LIB_0__.func_690();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

void func_882(int* iParam0)//Position - 0xA532
{
	iParam0->f_436 = 0;
	iParam0->f_419 = 0;
	iParam0->f_420 = 0;
	iParam0->f_437 = 0;
	iParam0->f_426 = 0;
	iParam0->f_427 = 0;
	iParam0->f_1209 = 0;
	__LIB_0__.func_579(&(iParam0->f_430));
	__LIB_0__.func_579(&(iParam0->f_432));
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_20))
	{
		PED::DELETE_PED(&(iParam0->f_20));
	}
}

void func_883()//Position - 0x2FA6B
{
	if (!__LIB_0__.func_695(PLAYER::PLAYER_ID(), 0, 0))
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

int func_884()//Position - 0x3BAF6
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
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_1__.func_443(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2815059.f_1794), 23);
		return 1;
	}
	return 0;
}

void func_885(var uParam0, var uParam1)//Position - 0x3C545
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("MP_Celeb_Preload_Fade"))
	{
		if (!*uParam0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MP_Celeb_Preload_Fade", 0, true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Pre_Screen_Stinger", "DLC_HEISTS_PREP_SCREEN_SOUNDS", false);
			*uParam0 = 1;
			if (!__LIB_0__.func_649(uParam1))
			{
				__LIB_0__.func_580(uParam1, 0, 0);
			}
		}
	}
}

bool func_886(int* iParam0)//Position - 0x3D190
{
	return __LIB_0__.func_736(iParam0);
}

int func_887()//Position - 0x3D19E
{
	if (__LIB_0__.func_517(uLocal_46, 1) || SCRIPT::IS_THREAD_ACTIVE(iLocal_47))
	{
		return 1;
	}
	return 0;
}

void func_888(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x3D1D0
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_786(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(3, iVar0);
		Global_1649593.f_2839[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_2839.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_2839.f_183[iVar0] = iParam3;
		Global_1649593.f_2839.f_172[iVar0] = iParam2;
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

void func_889(var uParam0, int iParam1)//Position - 0x3F37E
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
				if (CAM::IS_SCREEN_FADED_OUT() && !__LIB_0__.func_2(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	__LIB_0__.func_518(0);
}

int func_890(int iParam0)//Position - 0x3FEB9
{
	int iVar0;
	if (iParam0 > -1)
	{
		iVar0 = __LIB_0__.func_724(iParam0);
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

float func_891(int* iParam0)//Position - 0x40B54
{
	if (__LIB_0__.func_736(iParam0))
	{
		if (__LIB_0__.func_515(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (__LIB_0__.func_484(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_892(int* iParam0)//Position - 0x41B7B
{
	__LIB_2__.func_186(iParam0, 0f);
}

void func_893()//Position - 0x42CD2
{
	int iVar0;
	iVar0 = __LIB_0__.func_716(27);
	Global_2676732[iVar0 /*83*/] = 27;
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[0 /*16*/]), "-FromLiveArea", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[1 /*16*/]), "-LiveAreaContentType=UGC_TYPE_GTA5_MISSION", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[2 /*16*/]), "-LiveAreaLoadContent=", 64);
	StringCopy(&(Global_2676732[iVar0 /*83*/].f_18[3 /*16*/]), "15", 64);
}

void func_894(var uParam0, int iParam1)//Position - 0x42E97
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__.func_197(*uParam0);
	iVar1 = __LIB_1__.func_26(*uParam0);
	if (iParam1 < 1 || iParam1 > __LIB_0__.func_139(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_895()//Position - 0x453F3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	fVar3 = -1f;
	iVar5 = 0;
	while (iVar5 < 12)
	{
		__LIB_1__.func_34(&Var1, &uVar6, iVar5 + 1, 1);
		fVar2 = SYSTEM::VDIST2(Var0, Var1);
		if (fVar3 < 0f || fVar3 > fVar2)
		{
			fVar3 = fVar2;
			uVar4 = iVar5 + 1;
		}
		iVar5++;
	}
	return uVar4;
}

void func_896(var uParam0, int iParam1)//Position - 0x44EF
{
	__LIB_0__.func_687(uParam0, iParam1);
}

int func_897(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	if (!BitTest(Global_1661006, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (__LIB_1__.func_45(iParam0) - __LIB_1__.func_44(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - __LIB_1__.func_44(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (__LIB_1__.func_45(iParam0) - __LIB_1__.func_43(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - __LIB_1__.func_44(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (__LIB_1__.func_45(iParam0) - __LIB_1__.func_44(iParam0, 1));
		}
		if (!bParam4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 3)
		{
			iVar1 = (iVar1 - __LIB_1__.func_42(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

void func_898(int iParam0, bool bParam1)//Position - 0x2DC9
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
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_19 = iVar0;
			break;
		case 19:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_18 = iVar0;
			break;
		case 74:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_12 = iVar0;
			break;
		case 29:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_14 = iVar0;
			break;
		case 8:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_15 = iVar0;
			break;
		case 31:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_16 = iVar0;
			break;
		case 3:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_20 = iVar0;
			break;
		case 6:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_17 = iVar0;
			break;
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_23 = iVar0;
			break;
		case 76:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_24 = iVar0;
			break;
		case 93:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_25 = iVar0;
			break;
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_26 = iVar0;
			break;
		case 65:
		case 75:
		case 95:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_27 = iVar0;
			break;
			break;
		case 97:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_29 = iVar0;
			break;
		case 88:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_28 = iVar0;
			break;
		case 100:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_31 = iVar0;
			break;
		case 106:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_32 = iVar0;
			break;
		case 99:
			Global_2359296[__LIB_0__.func_153() /*5567*/].f_681.f_30 = iVar0;
			break;
	}
}

Vector3 func_899(struct<3> Param0, float fParam1, float fParam2, float fParam3)//Position - 0x3074
{
	struct<3> Var0;
	float fVar1;
	Var0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	Var0 = { __LIB_0__.func_681(Var0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	Var0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return Param0 + Var0;
}

int func_900(int iParam0, bool bParam1)//Position - 0x5A63
{
	var uVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__.func_154(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!__LIB_6__.func_768(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_901(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3357
{
	int iVar0;
	__LIB_0__.func_600(iParam0, &Global_1577992);
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

int func_902(int iParam0)//Position - 0x35E4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (__LIB_0__.func_601(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_903(struct<3> Param0, struct<3> Param1, struct<3> Param2, bool bParam3, bool bParam4)//Position - 0x3BBC
{
	__LIB_0__.func_612(&Param1, &Param2);
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

void func_904(struct<3> Param0)//Position - 0x9BEF
{
	float fVar0;
	var uVar1;
	int iVar2;
	fVar0 = -1f;
	while (iVar2 < Global_2667225.f_1754)
	{
		uVar1 = __LIB_0__.func_624(Param0, fVar0, &fVar0);
		Global_2667225.f_2160[iVar2] = uVar1;
		iVar2++;
	}
}

void func_905(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x12A2
{
	int iVar0;
	if (__LIB_0__.func_354())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][__LIB_1__.func_443(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_906(int iParam0, int iParam1)//Position - 0x1094
{
	if (__LIB_0__.func_581(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1892703[iParam0 /*599*/].f_10.f_11[iParam1];
		}
	}
	return __LIB_0__.func_160();
}

int func_907(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x148D
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (__LIB_0__.func_154(iVar3, 1, 0))
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

int func_908()//Position - 0x1541
{
	return PLAYER::GET_PLAYER_PED(__LIB_1__.func_110());
}

bool func_909(int iParam0)//Position - 0x1EAC
{
	return __LIB_0__.func_596(iParam0);
}

int func_910(int iParam0)//Position - 0x8143
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || __LIB_0__.func_590(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_911()//Position - 0x9255
{
	struct<13> Var0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { __LIB_0__.func_593() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_912(bool bParam0)//Position - 0xB71C
{
	Global_2667225.f_676 = 0;
	__LIB_0__.func_636();
	__LIB_0__.func_639();
	if (bParam0)
	{
		__LIB_0__.func_599();
	}
}

void func_913(int iParam0)//Position - 0x14FA1
{
	switch (iParam0)
	{
		case 83:
			__LIB_0__.func_634(-1133.454f, -3371.672f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1119.748f, -3379.991f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1147.602f, -3363.505f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1161.988f, -3354.852f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1116.563f, -3358.99f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1131.23f, -3350.104f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1145.252f, -3341.608f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1115.202f, -3339.265f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1129.559f, -3330.697f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1114.664f, -3320.954f, 12.945f, 329.799f);
			__LIB_0__.func_634(-1199.923f, -3369.502f, 12.945f, 350.399f);
			__LIB_0__.func_634(-1212.069f, -3363.568f, 12.945f, 350.399f);
			__LIB_0__.func_634(-1223.637f, -3356.694f, 12.945f, 350.399f);
			__LIB_0__.func_634(-1102.284f, -3420.613f, 12.945f, 354.599f);
			__LIB_0__.func_634(-1091.131f, -3427.396f, 12.945f, 354.599f);
			__LIB_0__.func_634(-1079.372f, -3434.306f, 12.945f, 354.599f);
			__LIB_0__.func_634(-1067.498f, -3441.878f, 13.114f, 354.599f);
			__LIB_0__.func_634(-1055.714f, -3448.819f, 12.977f, 354.599f);
			__LIB_0__.func_634(-1043.37f, -3455.796f, 13.146f, 354.599f);
			__LIB_0__.func_634(-1017.023f, -3382.7773f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1010.6078f, -3386.1028f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1004.6581f, -3389.8232f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-998.3798f, -3393.6443f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-985.0826f, -3401.2468f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-978.2733f, -3405.0312f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-971.724f, -3409.109f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-964.4719f, -3413.2021f, 13.1463f, 330.6f);
			__LIB_0__.func_634(-1022.9401f, -3392.3716f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1016.2192f, -3395.8198f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1003.4357f, -3402.9822f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-990.2305f, -3410.5476f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-983.4429f, -3414.0933f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-976.8809f, -3417.8457f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-969.4039f, -3421.7268f, 13.1463f, 330.6f);
			__LIB_0__.func_634(-1028.2509f, -3401.834f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1021.6307f, -3405.433f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1015.2093f, -3408.5625f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1008.8096f, -3412.4836f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-1002.2773f, -3415.9873f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-995.7023f, -3419.9705f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-989.1453f, -3423.9883f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-982.6298f, -3427.9812f, 12.8401f, 330.6f);
			__LIB_0__.func_634(-974.9305f, -3431.8328f, 13.1463f, 330.6f);
			break;
		case 84:
			__LIB_0__.func_634(-1356.991f, -3242.228f, 12.945f, 330f);
			__LIB_0__.func_634(-1369.313f, -3234.758f, 12.945f, 330f);
			__LIB_0__.func_634(-1381.751f, -3227.408f, 12.945f, 330f);
			__LIB_0__.func_634(-1394.302f, -3220.021f, 12.945f, 330f);
			__LIB_0__.func_634(-1354.339f, -3223.129f, 12.945f, 330f);
			__LIB_0__.func_634(-1366.302f, -3215.809f, 12.945f, 330f);
			__LIB_0__.func_634(-1378.492f, -3208.645f, 12.945f, 330f);
			__LIB_0__.func_634(-1350.322f, -3203.405f, 12.945f, 330f);
			__LIB_0__.func_634(-1362.684f, -3196.451f, 12.945f, 330f);
			__LIB_0__.func_634(-1347.089f, -3182.69f, 12.945f, 330f);
			__LIB_0__.func_634(-1452.642f, -3222.367f, 12.945f, 347.799f);
			__LIB_0__.func_634(-1464.229f, -3215.108f, 12.945f, 347.799f);
			__LIB_0__.func_634(-1476.133f, -3207.652f, 12.945f, 347.799f);
			__LIB_0__.func_634(-1488.295f, -3200.033f, 12.945f, 347.799f);
			__LIB_0__.func_634(-1336.877f, -3272.344f, 12.945f, 8.199f);
			__LIB_0__.func_634(-1323.381f, -3279.614f, 12.945f, 8.199f);
			__LIB_0__.func_634(-1309.671f, -3287.749f, 12.945f, 8.199f);
			__LIB_0__.func_634(-1296.963f, -3294.511f, 12.945f, 8.199f);
			__LIB_0__.func_634(-1501.978f, -3193.849f, 12.945f, 350.599f);
			__LIB_0__.func_634(-1344.7162f, -3288.3333f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1338.1412f, -3290.3352f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1331.473f, -3294.1785f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1324.9207f, -3297.9976f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1318.1293f, -3301.9568f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1350.4662f, -3294.226f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1343.482f, -3297.5762f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1336.3976f, -3302.4556f, 12.9445f, 331.2f);
			__LIB_0__.func_634(-1329.8203f, -3306.8196f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1322.7612f, -3310.3525f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1316.5869f, -3314.5557f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1326.5376f, -3318.499f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1335.7401f, -3313.6777f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1350.8479f, -3302.6187f, 12.9446f, 331.2f);
			__LIB_0__.func_634(-1357.9606f, -3306.8862f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1335.2017f, -3322.4285f, 12.9452f, 331.2f);
			__LIB_0__.func_634(-1351.4011f, -3311.566f, 12.9452f, 331.2f);
			__LIB_0__.func_634(-1344.2549f, -3305.965f, 12.9451f, 331.2f);
			__LIB_0__.func_634(-1299.8324f, -3305.5732f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1293.4141f, -3309.4128f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1286.8353f, -3313.1567f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1303.9878f, -3313.0999f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1297.4025f, -3316.699f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1290.9685f, -3320.5193f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1308.2695f, -3320.6118f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1301.9681f, -3324.7139f, 12.945f, 331.2f);
			__LIB_0__.func_634(-1295.4827f, -3328.4216f, 12.945f, 331.2f);
			break;
		case 85:
			__LIB_0__.func_634(-2039.992f, 3132.191f, 31.81f, 149.399f);
			__LIB_0__.func_634(-2025.075f, 3128.63f, 31.81f, 197.599f);
			__LIB_0__.func_634(-2049.589f, 3142.464f, 31.81f, 109.199f);
			__LIB_0__.func_634(-2088.648f, 3081.327f, 31.81f, 150.599f);
			__LIB_0__.func_634(-2070.669f, 3111.575f, 31.81f, 123.399f);
			__LIB_0__.func_634(-2053.385f, 3109.703f, 31.81f, 150.599f);
			__LIB_0__.func_634(-2044.448f, 3094.012f, 31.81f, 181.799f);
			__LIB_0__.func_634(-2071.825f, 3093.477f, 31.81f, 150.599f);
			__LIB_0__.func_634(-2060.579f, 3085.924f, 31.81f, 150.599f);
			__LIB_0__.func_634(-2062.712f, 3066.073f, 31.81f, 150.599f);
			__LIB_0__.func_634(-2094.385f, 3190.445f, 31.81f, 117.799f);
			__LIB_0__.func_634(-2083.056f, 3182.885f, 31.81f, 117.799f);
			__LIB_0__.func_634(-2071.578f, 3175.554f, 31.81f, 117.799f);
			__LIB_0__.func_634(-2120.249f, 3173.97f, 31.81f, 25.199f);
			__LIB_0__.func_634(-2067.547f, 3146.325f, 31.81f, 14.998f);
			__LIB_0__.func_634(-2080.506f, 3154.591f, 31.81f, 15.798f);
			__LIB_0__.func_634(-2093.278f, 3159.793f, 31.81f, 14.798f);
			__LIB_0__.func_634(-2106.614f, 3167.605f, 31.81f, 21.198f);
			__LIB_0__.func_634(-2106.347f, 3196.902f, 31.81f, 117.799f);
			__LIB_0__.func_634(-2024.4253f, 3102.7073f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2018.0736f, 3099.056f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2009.0316f, 3094.1711f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2002.9235f, 3090.6692f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1996.5417f, 3087.2014f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1990.2324f, 3083.5342f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1983.5184f, 3080.0334f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2029.1602f, 3094.3572f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2022.4309f, 3090.7034f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2013.7017f, 3086.0151f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2007.6703f, 3082.42f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2001.2112f, 3078.5693f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1994.6436f, 3074.6538f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1987.9342f, 3070.6543f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2033.7764f, 3086.0315f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2026.9293f, 3082.094f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2018.663f, 3077.3406f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2012.3446f, 3073.7073f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2006.0515f, 3070.0894f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1999.1693f, 3066.1316f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1992.5424f, 3062.2566f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2038.5449f, 3077.3445f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2031.5873f, 3073.3438f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2012.8864f, 3063.2188f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-2003.4811f, 3057.141f, 31.8103f, 150.7997f);
			__LIB_0__.func_634(-1996.6183f, 3053.1948f, 31.8103f, 150.7997f);
			break;
		case 86:
			__LIB_0__.func_634(-1885.1868f, 3095.3445f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1898.637f, 3072.816f, 31.811f, 150.2f);
			__LIB_0__.func_634(-1886.469f, 3065.78f, 31.811f, 150.2f);
			__LIB_0__.func_634(-1874.621f, 3058.437f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1862.818f, 3051.244f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1915.317f, 3041.652f, 31.811f, 150.2f);
			__LIB_0__.func_634(-1896.724f, 2997.848f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1932.975f, 3011.781f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1875.668f, 3034.438f, 31.811f, 150.2f);
			__LIB_0__.func_634(-1886.144f, 3016.285f, 31.81f, 150.2f);
			__LIB_0__.func_634(-1913.706f, 3104.196f, 31.81f, 118.599f);
			__LIB_0__.func_634(-1925.44f, 3112.236f, 31.81f, 118.599f);
			__LIB_0__.func_634(-1938.08f, 3119.383f, 31.81f, 118.599f);
			__LIB_0__.func_634(-1927.822f, 3072.679f, 31.81f, 13.399f);
			__LIB_0__.func_634(-1940.575f, 3079.031f, 31.81f, 13.399f);
			__LIB_0__.func_634(-1953.344f, 3084.888f, 31.81f, 13.399f);
			__LIB_0__.func_634(-1965.91f, 3091.929f, 31.81f, 13.399f);
			__LIB_0__.func_634(-1978.86f, 3100.029f, 31.81f, 13.399f);
			__LIB_0__.func_634(-1950.928f, 3126.457f, 31.81f, 118.999f);
			__LIB_0__.func_634(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1969.3618f, 3079.9094f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1963.6726f, 3076.8867f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1958.5238f, 3073.8992f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1979.8282f, 3074.704f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1973.9005f, 3071.4185f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1967.9165f, 3068.089f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1949.9164f, 3068.72f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1961.9336f, 3064.5999f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1984.3324f, 3067.03f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1978.182f, 3063.2861f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1972.0605f, 3060.1907f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1952.6101f, 3059.5513f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1956.9585f, 3051.5894f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1988.7778f, 3059.1355f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1982.174f, 3055.5908f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1975.5795f, 3051.8984f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1969.1392f, 3048.2803f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1962.2495f, 3044.2559f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1989.4796f, 3050.4673f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1977.3248f, 3043.7864f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1971.0696f, 3040.306f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1964.4087f, 3037.1184f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1998.3752f, 3042.3486f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1991.7688f, 3038.47f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1978.7179f, 3035.164f, 31.8103f, 150.1997f);
			__LIB_0__.func_634(-1971.4832f, 3031.3157f, 31.8103f, 150.1997f);
			break;
		case 87:
			__LIB_0__.func_634(-2484.323f, 3249.294f, 31.828f, 151f);
			__LIB_0__.func_634(-2495.313f, 3255.746f, 31.828f, 151f);
			__LIB_0__.func_634(-2472.644f, 3242.684f, 31.828f, 151f);
			__LIB_0__.func_634(-2506.313f, 3262.27f, 31.823f, 151f);
			__LIB_0__.func_634(-2461.494f, 3235.93f, 31.828f, 151f);
			__LIB_0__.func_634(-2505.602f, 3238.049f, 31.828f, 151f);
			__LIB_0__.func_634(-2481.937f, 3224.8f, 31.828f, 151f);
			__LIB_0__.func_634(-2516.813f, 3244.266f, 31.823f, 151f);
			__LIB_0__.func_634(-2470.03f, 3217.899f, 31.828f, 151f);
			__LIB_0__.func_634(-2493.933f, 3231.308f, 31.828f, 151f);
			__LIB_0__.func_634(-2443.467f, 3227.753f, 31.828f, 175.8f);
			__LIB_0__.func_634(-2431.365f, 3220.9f, 31.828f, 175.8f);
			__LIB_0__.func_634(-2419.883f, 3214.708f, 31.828f, 175.8f);
			__LIB_0__.func_634(-2501.903f, 3272.865f, 31.822f, 123.999f);
			__LIB_0__.func_634(-2513.555f, 3280.176f, 31.817f, 123.999f);
			__LIB_0__.func_634(-2524.776f, 3287.276f, 31.973f, 123.999f);
			__LIB_0__.func_634(-2407.718f, 3208.055f, 31.827f, 176.199f);
			__LIB_0__.func_634(-2395.689f, 3201.125f, 31.827f, 176.199f);
			__LIB_0__.func_634(-2383.498f, 3194.211f, 31.833f, 176.199f);
			__LIB_0__.func_634(-2426.2195f, 3238.211f, 31.8616f, 150.5996f);
			__LIB_0__.func_634(-2419.0515f, 3233.8662f, 31.8726f, 150.5996f);
			__LIB_0__.func_634(-2412.0686f, 3229.8538f, 31.8859f, 150.5996f);
			__LIB_0__.func_634(-2405.2817f, 3225.8093f, 31.8841f, 150.5996f);
			__LIB_0__.func_634(-2398.6238f, 3222.135f, 31.9249f, 150.5996f);
			__LIB_0__.func_634(-2391.7288f, 3218.2295f, 31.9354f, 150.5996f);
			__LIB_0__.func_634(-2384.7268f, 3214.5242f, 31.9585f, 150.5996f);
			__LIB_0__.func_634(-2377.55f, 3210.4607f, 31.9192f, 150.5996f);
			__LIB_0__.func_634(-2369.9604f, 3205.8352f, 31.8267f, 150.5996f);
			__LIB_0__.func_634(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			__LIB_0__.func_634(-2397.4807f, 3232.3745f, 31.9879f, 150.5996f);
			__LIB_0__.func_634(-2390.5237f, 3228.1255f, 31.9758f, 150.5996f);
			__LIB_0__.func_634(-2383.9856f, 3223.9946f, 31.986f, 150.5996f);
			__LIB_0__.func_634(-2377.176f, 3219.6948f, 31.9615f, 150.5996f);
			__LIB_0__.func_634(-2370.5244f, 3215.946f, 32.002f, 150.5996f);
			__LIB_0__.func_634(-2400.2302f, 3243.846f, 31.8311f, 150.5996f);
			__LIB_0__.func_634(-2393.2798f, 3240.281f, 32.0164f, 150.5996f);
			__LIB_0__.func_634(-2386.3555f, 3236.8193f, 32.0616f, 150.5996f);
			__LIB_0__.func_634(-2379.3818f, 3232.7395f, 32.0318f, 150.5996f);
			__LIB_0__.func_634(-2372.314f, 3229.1956f, 32.0177f, 150.5996f);
			__LIB_0__.func_634(-2365.1528f, 3225.7322f, 32.0145f, 150.5996f);
			__LIB_0__.func_634(-2395.04f, 3252.6436f, 31.8557f, 150.5996f);
			__LIB_0__.func_634(-2388.6838f, 3249.0916f, 32.0198f, 150.5996f);
			__LIB_0__.func_634(-2382.1272f, 3245.0447f, 32.0086f, 150.5996f);
			__LIB_0__.func_634(-2374.9053f, 3240.9375f, 32.0085f, 150.5996f);
			__LIB_0__.func_634(-2368.1396f, 3237.3276f, 32.0177f, 150.5996f);
			__LIB_0__.func_634(-2361.068f, 3233.3955f, 31.9573f, 150.5996f);
			break;
		default:
			break;
	}
}

void func_914(int iParam0)//Position - 0x1661A
{
	switch (iParam0)
	{
		case 83:
		case 84:
			__LIB_0__.func_634(-947.712f, -3367.704f, 12.944f, 60f);
			__LIB_0__.func_634(-904.692f, -3293.072f, 12.944f, 60f);
			__LIB_0__.func_634(-863.71f, -3221.978f, 12.944f, 60f);
			__LIB_0__.func_634(-966.418f, -3162.773f, 12.944f, 60f);
			__LIB_0__.func_634(-1007.435f, -3233.93f, 12.944f, 60f);
			__LIB_0__.func_634(-1050.455f, -3308.559f, 12.944f, 60f);
			__LIB_0__.func_634(-1145.673f, -3253.456f, 12.944f, 60f);
			__LIB_0__.func_634(-1098.386f, -3181.428f, 12.944f, 60f);
			__LIB_0__.func_634(-1060.474f, -3108.903f, 12.944f, 60f);
			__LIB_0__.func_634(-1155.391f, -3053.632f, 12.944f, 60f);
			__LIB_0__.func_634(-1196.114f, -3125.146f, 12.948f, 60f);
			__LIB_0__.func_634(-1235.552f, -3201.86f, 12.944f, 60f);
			__LIB_0__.func_634(-1344.446f, -3139.177f, 12.944f, 60f);
			__LIB_0__.func_634(-1301.308f, -3064.341f, 12.944f, 60f);
			__LIB_0__.func_634(-1260.135f, -2992.912f, 12.944f, 60f);
			__LIB_0__.func_634(-1364.244f, -2932.9f, 12.98f, 60f);
			__LIB_0__.func_634(-1405.284f, -3004.108f, 12.96f, 60f);
			__LIB_0__.func_634(-1448.29f, -3078.72f, 12.95f, 60f);
			__LIB_0__.func_634(-1535.732f, -3028.318f, 12.945f, 60f);
			__LIB_0__.func_634(-1492.639f, -2953.558f, 12.945f, 60f);
			__LIB_0__.func_634(-1451.506f, -2882.2f, 12.944f, 60f);
			__LIB_0__.func_634(-1553.927f, -2823.12f, 13.002f, 60f);
			__LIB_0__.func_634(-1595.097f, -2894.571f, 12.944f, 60f);
			__LIB_0__.func_634(-1637.836f, -2968.714f, 12.945f, 60f);
			__LIB_0__.func_634(-1740.971f, -2911.484f, 12.944f, 330f);
			__LIB_0__.func_634(-1696.293f, -2833.978f, 12.944f, 330f);
			__LIB_0__.func_634(-1651.502f, -2756.273f, 12.945f, 330f);
			__LIB_0__.func_634(-1588.258f, -2647.575f, 12.944f, 330f);
			__LIB_0__.func_634(-1536.862f, -2681.378f, 12.945f, 330f);
			__LIB_0__.func_634(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		case 85:
		case 86:
		case 87:
			__LIB_0__.func_634(-1970.422f, 2825.696f, 31.81f, 60.4f);
			__LIB_0__.func_634(-2033.307f, 2855.526f, 31.83f, 60.4f);
			__LIB_0__.func_634(-2091.018f, 2888.691f, 31.81f, 60.4f);
			__LIB_0__.func_634(-2206.717f, 2955.363f, 31.81f, 60.4f);
			__LIB_0__.func_634(-2268.817f, 2990.846f, 31.81f, 60.4f);
			__LIB_0__.func_634(-2324.039f, 3023.154f, 31.811f, 60.4f);
			__LIB_0__.func_634(-2435.806f, 3087.705f, 31.824f, 60.4f);
			__LIB_0__.func_634(-2543.753f, 3149.909f, 31.821f, 60.4f);
			__LIB_0__.func_634(-1944.848f, 2898.798f, 31.81f, 125.398f);
			__LIB_0__.func_634(-1978.705f, 2924.367f, 31.846f, 151.999f);
			__LIB_0__.func_634(-2064.849f, 2955.153f, 31.867f, 151.199f);
			__LIB_0__.func_634(-2106.165f, 2980.687f, 31.81f, 104.599f);
			__LIB_0__.func_634(-2302.367f, 3088.676f, 31.814f, 150.598f);
			__LIB_0__.func_634(-2152.113f, 2924.162f, 31.81f, 60.198f);
			__LIB_0__.func_634(-2488.232f, 3118.146f, 31.822f, 59.798f);
			__LIB_0__.func_634(-2277.922f, 3133.756f, 31.811f, 120.598f);
			__LIB_0__.func_634(-2604.776f, 3185.186f, 31.812f, 59.998f);
			__LIB_0__.func_634(-2608.107f, 3305.049f, 31.812f, 60.198f);
			__LIB_0__.func_634(-2718.936f, 3323.203f, 31.81f, 201.198f);
			__LIB_0__.func_634(-2658.718f, 3216.499f, 31.812f, 59.998f);
			__LIB_0__.func_634(-2380.372f, 3055.341f, 31.826f, 60.4f);
			__LIB_0__.func_634(-2790.616f, 3286.24f, 31.812f, 240.397f);
			__LIB_0__.func_634(-2770.946f, 3322.605f, 31.812f, 240.397f);
			__LIB_0__.func_634(-2678.805f, 3339.186f, 31.812f, 199.597f);
			__LIB_0__.func_634(-2743.882f, 3224.094f, 31.81f, 303.397f);
			__LIB_0__.func_634(-2701.354f, 3203.092f, 31.994f, 328.397f);
			__LIB_0__.func_634(-2249.816f, 2944.609f, 31.937f, 330.196f);
			__LIB_0__.func_634(-2586.579f, 3137.286f, 31.935f, 330.196f);
			__LIB_0__.func_634(-2134.76f, 2878.728f, 31.81f, 330.196f);
			__LIB_0__.func_634(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		default:
			break;
	}
}

float func_915()//Position - 0x18C56
{
	switch (__LIB_1__.func_108())
	{
		case 1:
			return 0f;
		default:
	}
	return 10f;
}

void func_916()//Position - 0x1AA68
{
	if (!Global_1574747)
	{
		return;
	}
	__LIB_0__.func_650();
}

int func_917()//Position - 0x404F1
{
	if (__LIB_1__.func_108() == 0 && func_12())
	{
		return 1;
	}
	return 0;
}

void func_918(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x40817
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
		__LIB_1__.func_56(uParam2);
	}
	if (Global_1577896 < 2)
	{
		__LIB_0__.func_733(1);
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
						__LIB_0__.func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 363)
						{
							__LIB_0__.func_514(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						__LIB_0__.func_514(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
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
						__LIB_0__.func_478(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
					__LIB_0__.func_514(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						__LIB_0__.func_514(&(uParam2->f_1[bVar0 /*57*/].f_16));
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
						__LIB_0__.func_478(&(uParam2->f_1[bVar0 /*57*/].f_32));
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
		__LIB_1__.func_55(*iParam0, uParam1);
	}
	__LIB_0__.func_707();
}

void func_919(int iParam0, int iParam1)//Position - 0x4118A
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = __LIB_1__.func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_920(int iParam0)//Position - 0x1652
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
				__LIB_0__.func_587(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_921(int iParam0, int iParam1)//Position - 0x796B
{
	int iVar0;
	int iVar1;
	iVar1 = __LIB_0__.func_592(iParam1);
	__LIB_0__.func_591(iVar1, &iVar0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, iVar0);
}

int func_922(struct<3> Param0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0xD265
{
	switch (uParam1->f_10)
	{
		case 0:
			return __LIB_0__.func_613(Param0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_2667225.f_2735) * uParam1->f_8)), bParam3, bParam4);
			break;
		case 1:
			return __LIB_6__.func_903(Param0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
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

void func_923(int iParam0)//Position - 0x15ED9
{
	switch (iParam0)
	{
		case 78:
			__LIB_0__.func_634(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			__LIB_0__.func_634(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			__LIB_0__.func_634(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			__LIB_0__.func_634(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		case 79:
			__LIB_0__.func_634(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			__LIB_0__.func_634(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__.func_634(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__.func_634(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 82:
			__LIB_0__.func_634(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			__LIB_0__.func_634(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			__LIB_0__.func_634(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			__LIB_0__.func_634(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		case 81:
			__LIB_0__.func_634(-1294.6403f, 468.1975f, 96.4245f, 141.8551f);
			__LIB_0__.func_634(-1300.5077f, 468.0167f, 96.8298f, 139.6287f);
			__LIB_0__.func_634(-1283.8943f, 467.2136f, 95.4036f, 95.058f);
			__LIB_0__.func_634(-1273.5837f, 454.4406f, 94.2269f, 30.8724f);
			break;
		case 73:
			__LIB_0__.func_634(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			__LIB_0__.func_634(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			__LIB_0__.func_634(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			__LIB_0__.func_634(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		case 75:
			__LIB_0__.func_634(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			__LIB_0__.func_634(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__.func_634(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__.func_634(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		case 76:
			__LIB_0__.func_634(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			__LIB_0__.func_634(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			__LIB_0__.func_634(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			__LIB_0__.func_634(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		case 77:
			__LIB_0__.func_634(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			__LIB_0__.func_634(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			__LIB_0__.func_634(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			__LIB_0__.func_634(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		case 80:
			__LIB_0__.func_634(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			__LIB_0__.func_634(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			__LIB_0__.func_634(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			__LIB_0__.func_634(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		case 87:
			if (__LIB_0__.func_633())
			{
				__LIB_0__.func_634(-1608.297f, -556.875f, 33.406f, 310f);
				__LIB_0__.func_634(-1616.095f, -563.402f, 33.049f, 309.4f);
				__LIB_0__.func_634(-1560.29f, -531.69f, 34.576f, 35.3994f);
				__LIB_0__.func_634(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				__LIB_0__.func_634(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				__LIB_0__.func_634(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				__LIB_0__.func_634(-1582.6805f, -534.1682f, 34.4171f, 307.8589f);
				__LIB_0__.func_634(-1619.6575f, -531.5862f, 33.4254f, 128.9132f);
				__LIB_0__.func_634(-1560.2571f, -532.3268f, 34.5436f, 216.0882f);
				__LIB_0__.func_634(-1553.6981f, -541.3412f, 33.8662f, 215.8465f);
				__LIB_0__.func_634(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				__LIB_0__.func_634(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		case 88:
			if (__LIB_0__.func_633())
			{
				__LIB_0__.func_634(-1402.362f, -511.396f, 30.888f, 35.4f);
				__LIB_0__.func_634(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				__LIB_0__.func_634(-1407.634f, -503.839f, 31.35f, 35.4f);
				__LIB_0__.func_634(-1346.0068f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				__LIB_0__.func_634(-1390.6045f, -528.6405f, 29.8387f, 35.4572f);
				__LIB_0__.func_634(-1357.0851f, -531.4611f, 29.7218f, 125.0906f);
				__LIB_0__.func_634(-1346.2356f, -523.9114f, 30.6f, 124.7302f);
				__LIB_0__.func_634(-1337.8523f, -518.1096f, 31.2329f, 124.6998f);
				__LIB_0__.func_634(-1336.3901f, -556.0637f, 29.7514f, 33.8088f);
				__LIB_0__.func_634(-1340.2145f, -508.9828f, 31.4089f, 98.7714f);
				__LIB_0__.func_634(-1348.6066f, -510.3536f, 30.9263f, 99.2425f);
				__LIB_0__.func_634(-1380.7642f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		case 89:
			if (__LIB_0__.func_633())
			{
				__LIB_0__.func_634(-102.737f, -597.379f, 35.053f, 160.999f);
				__LIB_0__.func_634(-97.793f, -589.568f, 35.082f, 134.799f);
				__LIB_0__.func_634(-110.357f, -619.402f, 35.055f, 160.599f);
				__LIB_0__.func_634(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				__LIB_0__.func_634(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				__LIB_0__.func_634(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				__LIB_0__.func_634(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				__LIB_0__.func_634(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				__LIB_0__.func_634(-98.3748f, -612.642f, 35.137f, 161.1124f);
				__LIB_0__.func_634(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				__LIB_0__.func_634(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				__LIB_0__.func_634(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		case 90:
			if (__LIB_0__.func_633())
			{
				__LIB_0__.func_634(-59.349f, -779.238f, 43.134f, 228.398f);
				__LIB_0__.func_634(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				__LIB_0__.func_634(-65.212f, -772.66f, 43.151f, 219.398f);
				__LIB_0__.func_634(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				__LIB_0__.func_634(-59.684f, -779.4568f, 43.114f, 228.7591f);
				__LIB_0__.func_634(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				__LIB_0__.func_634(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				__LIB_0__.func_634(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				__LIB_0__.func_634(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				__LIB_0__.func_634(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				__LIB_0__.func_634(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				__LIB_0__.func_634(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		case 91:
			__LIB_0__.func_634(246.5035f, -1798.7494f, 26.1131f, 212.5996f);
			__LIB_0__.func_634(247.8968f, -1797.0166f, 26.1131f, 212.5996f);
			__LIB_0__.func_634(249.3848f, -1795.3737f, 26.1131f, 212.5996f);
			__LIB_0__.func_634(250.8498f, -1793.6952f, 26.1131f, 212.5996f);
			__LIB_0__.func_634(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			__LIB_0__.func_634(266.8129f, -1787.4761f, 26.1131f, 164.5991f);
			__LIB_0__.func_634(264.814f, -1785.8008f, 26.1131f, 164.5991f);
			__LIB_0__.func_634(269.0069f, -1789.1599f, 26.1131f, 164.5991f);
			break;
		case 92:
			__LIB_0__.func_634(-1464.5f, -927.9f, 9f, 296.7991f);
			__LIB_0__.func_634(-1466f, -926.1f, 9f, 296.7991f);
			__LIB_0__.func_634(-1467.9f, -924.7f, 9f, 296.7991f);
			__LIB_0__.func_634(-1469.7f, -923.7f, 9f, 296.7991f);
			__LIB_0__.func_634(-1462.4808f, -931.2933f, 9.1294f, 296.5982f);
			__LIB_0__.func_634(-1460.6387f, -932.9284f, 9.1315f, 296.5982f);
			__LIB_0__.func_634(-1454.9226f, -931.1019f, 9.0872f, 237.1973f);
			__LIB_0__.func_634(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		case 93:
			__LIB_0__.func_634(30.0784f, -1024.1604f, 28.4469f, 234.5994f);
			__LIB_0__.func_634(29.1695f, -1026.7191f, 28.4453f, 234.5994f);
			__LIB_0__.func_634(28.2538f, -1029.2955f, 28.4421f, 234.5994f);
			__LIB_0__.func_634(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			__LIB_0__.func_634(32.6932f, -1017.0634f, 28.4531f, 234.5994f);
			__LIB_0__.func_634(33.672f, -1014.3994f, 28.4552f, 234.5994f);
			__LIB_0__.func_634(37.488f, -1014.344f, 28.4781f, 175.5986f);
			__LIB_0__.func_634(39.4909f, -1015.0972f, 28.484f, 175.5986f);
			break;
		case 94:
			__LIB_0__.func_634(45.0033f, 2784.3918f, 56.8782f, 103.5999f);
			__LIB_0__.func_634(43.316f, 2785.9026f, 56.8782f, 103.5999f);
			__LIB_0__.func_634(41.6126f, 2787.3599f, 56.8782f, 103.5999f);
			__LIB_0__.func_634(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			__LIB_0__.func_634(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			__LIB_0__.func_634(33.7771f, 2790.3794f, 56.8781f, 208.7997f);
			__LIB_0__.func_634(30.7578f, 2786.8003f, 56.8781f, 208.7997f);
			__LIB_0__.func_634(29.3121f, 2785.0447f, 56.8745f, 208.7997f);
			break;
		case 95:
			__LIB_0__.func_634(-332.5679f, 6069.1445f, 30.2175f, 152.9999f);
			__LIB_0__.func_634(-334.2811f, 6070.7866f, 30.2212f, 152.9999f);
			__LIB_0__.func_634(-335.9948f, 6072.4536f, 30.2455f, 152.9999f);
			__LIB_0__.func_634(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			__LIB_0__.func_634(-339.3682f, 6075.9043f, 30.3074f, 152.9999f);
			__LIB_0__.func_634(-341.0913f, 6077.7285f, 30.3114f, 152.9999f);
			__LIB_0__.func_634(-342.9239f, 6079.5225f, 30.3122f, 152.9999f);
			__LIB_0__.func_634(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		case 96:
			__LIB_0__.func_634(1738.4215f, 3716.7786f, 33.0787f, 6.9999f);
			__LIB_0__.func_634(1736.2074f, 3715.9885f, 33.094f, 6.9999f);
			__LIB_0__.func_634(1748.4423f, 3714.1697f, 33.0889f, 39.399f);
			__LIB_0__.func_634(1750.4752f, 3715.007f, 33.1067f, 39.399f);
			__LIB_0__.func_634(1747.1798f, 3721.1023f, 33.007f, 95.199f);
			__LIB_0__.func_634(1746.4128f, 3723.2554f, 32.9738f, 95.199f);
			__LIB_0__.func_634(1740.67f, 3717.6128f, 33.0616f, 8.199f);
			__LIB_0__.func_634(1733.937f, 3715.0796f, 33.1236f, 8.199f);
			break;
		case 97:
			__LIB_0__.func_634(947.9371f, -1452.7367f, 30.143f, 331.5991f);
			__LIB_0__.func_634(950.2141f, -1452.8257f, 30.1364f, 331.5991f);
			__LIB_0__.func_634(952.4588f, -1452.8821f, 30.129f, 331.5991f);
			__LIB_0__.func_634(954.6608f, -1452.8694f, 30.1303f, 331.5991f);
			__LIB_0__.func_634(935.1006f, -1452.7012f, 30.1907f, 316.999f);
			__LIB_0__.func_634(932.5459f, -1452.5793f, 30.2194f, 316.999f);
			__LIB_0__.func_634(929.9319f, -1452.5665f, 30.2647f, 316.999f);
			__LIB_0__.func_634(927.4857f, -1452.4463f, 30.3167f, 316.999f);
			break;
		case 98:
			__LIB_0__.func_634(186.6051f, 306.8702f, 104.389f, 162.3999f);
			__LIB_0__.func_634(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			__LIB_0__.func_634(182.1681f, 306.6823f, 104.375f, 162.3999f);
			__LIB_0__.func_634(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			__LIB_0__.func_634(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			__LIB_0__.func_634(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			__LIB_0__.func_634(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			__LIB_0__.func_634(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		case 99:
			__LIB_0__.func_634(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			__LIB_0__.func_634(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			__LIB_0__.func_634(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			__LIB_0__.func_634(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			__LIB_0__.func_634(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			__LIB_0__.func_634(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			__LIB_0__.func_634(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			__LIB_0__.func_634(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		case 100:
			__LIB_0__.func_634(2478.5203f, 4082.1372f, 36.8208f, 227.5999f);
			__LIB_0__.func_634(2477.5574f, 4079.9456f, 36.8014f, 227.5999f);
			__LIB_0__.func_634(2465.1226f, 4081.35f, 37.0655f, 167.4f);
			__LIB_0__.func_634(2463.017f, 4082.271f, 37.0653f, 167.4f);
			__LIB_0__.func_634(2467.7002f, 4080.332f, 37.0649f, 167.4f);
			__LIB_0__.func_634(2469.5867f, 4079.5378f, 37.061f, 167.4f);
			__LIB_0__.func_634(2481.3542f, 4088.5535f, 36.9131f, 209.4f);
			__LIB_0__.func_634(2482.4421f, 4091.0234f, 36.9472f, 209.4f);
			break;
		case 101:
			__LIB_0__.func_634(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			__LIB_0__.func_634(-29.4917f, 6404.5776f, 30.4903f, 291.1999f);
			__LIB_0__.func_634(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			__LIB_0__.func_634(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			__LIB_0__.func_634(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			__LIB_0__.func_634(-23.7283f, 6412.8384f, 30.4904f, 176.5999f);
			__LIB_0__.func_634(-20.5405f, 6409.8047f, 30.4905f, 176.5999f);
			__LIB_0__.func_634(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		case 102:
			__LIB_0__.func_634(-1138.0574f, -1572.1804f, 3.4157f, 125.9996f);
			__LIB_0__.func_634(-1142.0298f, -1574.9825f, 3.4133f, 125.9996f);
			__LIB_0__.func_634(-1145.05f, -1592.8104f, 3.3855f, 306.5991f);
			__LIB_0__.func_634(-1139.9331f, -1589.211f, 3.3978f, 306.5991f);
			__LIB_0__.func_634(-1124.2949f, -1578.7758f, 3.3854f, 306.5991f);
			__LIB_0__.func_634(-1119.9537f, -1575.5509f, 3.3852f, 306.5991f);
			__LIB_0__.func_634(-1124.9417f, -1562.9855f, 3.2916f, 168.9988f);
			__LIB_0__.func_634(-1127.0386f, -1564.395f, 3.292f, 168.9988f);
			break;
		default:
			break;
	}
}

int func_924(int iParam0)//Position - 0x17E59
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (__LIB_0__.func_682(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_925()//Position - 0x752C8
{
	return __LIB_0__.func_308(PLAYER::PLAYER_ID());
}

int func_926()//Position - 0xB8AB9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_0__.func_633();
	}
	return __LIB_0__.func_907(Global_4718592.f_116524);
}

void func_927(var uParam0)//Position - 0x204E
{
	__LIB_0__.func_967(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_928(var uParam0)//Position - 0x221D
{
	if (__LIB_0__.func_970(uParam0->f_1))
	{
		uParam0->f_72 = __LIB_0__.func_969();
	}
}

void func_929(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x5034
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(7, iVar0);
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

void func_930(int iParam0)//Position - 0x6280
{
	if (__LIB_0__.func_109())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		__LIB_0__.func_779(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

bool func_931()//Position - 0x7C14
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_0__.func_175();
	}
	return __LIB_0__.func_788(Global_4718592.f_116524);
}

int func_932(int iParam0)//Position - 0x1540E
{
	int iVar0;
	if (iParam0 != __LIB_0__.func_160())
	{
		iVar0 = __LIB_1__.func_230(iParam0);
		if (iVar0 != 0)
		{
			return __LIB_1__.func_231(iVar0);
		}
	}
	return -1;
}

int func_933(int iParam0)//Position - 0x158E7
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return -1;
	}
	iVar0 = __LIB_1__.func_244(iParam0);
	if (!iVar0 == 0)
	{
		return __LIB_1__.func_243(iVar0);
	}
	return -1;
}

int func_934(int iParam0, bool bParam1)//Position - 0xD2B4
{
	if (Global_1853184 != __LIB_0__.func_160())
	{
		if (!__LIB_1__.func_189(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || __LIB_1__.func_174(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_935()//Position - 0xFAD3
{
	if (__LIB_0__.func_718(6))
	{
		return 0;
	}
	return 1;
}

int func_936(int iParam0)//Position - 0x10362
{
	switch (__LIB_0__.func_3())
	{
		case 0:
			if (!__LIB_0__.func_743(iParam0))
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

bool func_937(int iParam0)//Position - 0x13BEA
{
	return __LIB_1__.func_112(iParam0, 17);
}

bool func_938(int iParam0)//Position - 0x13C12
{
	return __LIB_1__.func_112(iParam0, 16);
}

bool func_939(int iParam0)//Position - 0x14115
{
	return __LIB_1__.func_112(iParam0, 19);
}

int func_940(int iParam0)//Position - 0x162B7
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return iParam0;
	}
	if (__LIB_1__.func_18(iParam0) != -1)
	{
		iVar0 = __LIB_0__.func_170(__LIB_1__.func_18(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (__LIB_1__.func_113(iParam0, 0))
			{
				return __LIB_0__.func_603(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return __LIB_0__.func_160();
		}
		return Global_2689235[iParam0 /*453*/].f_318.f_9;
	}
	return __LIB_0__.func_160();
}

int func_941(int iParam0, int iParam1, bool bParam2)//Position - 0x19E37
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (!bParam2)
		{
			if (__LIB_1__.func_144(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[iParam0 /*599*/].f_10 != __LIB_0__.func_160())
		{
			return iParam1 == Global_1892703[iParam0 /*599*/].f_10;
		}
	}
	return 0;
}

int func_942(int iParam0, int iParam1)//Position - 0x233E9
{
	if (iParam0 != -1)
	{
		return __LIB_0__.func_878(iParam0, __LIB_0__.func_879(iParam1));
	}
	return 0;
}

bool func_943(int iParam0)//Position - 0x23ADB
{
	return __LIB_0__.func_137(__LIB_0__.func_868(iParam0), -1);
}

struct<35> func_944(int iParam0)//Position - 0x45B6B
{
	struct<13> Var0;
	struct<35> Var1;
	if (__LIB_0__.func_796(iParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { __LIB_0__.func_604(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

bool func_945(int iParam0)//Position - 0x46FB2
{
	return __LIB_0__.func_710(iParam0) == joaat("WEAPON_MINIGUN");
}

int func_946(int iParam0, int iParam1)//Position - 0x4C4D1
{
	if (__LIB_0__.func_292(iParam0, 0))
	{
		return __LIB_1__.func_297(Global_1892703[iParam0 /*599*/].f_10.f_33) == iParam1;
	}
	return 0;
}

int func_947(int iParam0, bool bParam1, int iParam2)//Position - 0x58997
{
	int iVar0;
	if (!__LIB_0__.func_656(iParam0, 1))
	{
		return __LIB_0__.func_160();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return __LIB_1__.func_408(iVar0, 0, bParam1, iParam2);
	}
	return __LIB_0__.func_160();
}

int func_948(int iParam0)//Position - 0x5B242
{
	if (__LIB_6__.func_768(iParam0, 0))
	{
		return 1;
	}
	if (__LIB_0__.func_81())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

int func_949()//Position - 0x5B4AA
{
	if (Global_1575033 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (__LIB_0__.func_194())
	{
		return 1;
	}
	if (Global_2727795)
	{
		return 1;
	}
	if (__LIB_0__.func_664())
	{
		return 1;
	}
	if (__LIB_0__.func_193(159))
	{
		if (!__LIB_0__.func_663())
		{
			return 1;
		}
	}
	if (__LIB_0__.func_193(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (__LIB_6__.func_871() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(__LIB_6__.func_871()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_950(int iParam0)//Position - 0x8B0
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - __LIB_1__.func_403(iParam0) * 31);
}

int func_951(int iParam0)//Position - 0x2B92
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
	return __LIB_1__.func_266(iParam0, 0);
	return 0;
}

void func_952()//Position - 0xBC80
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 != 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_953(int iParam0)//Position - 0xC51B
{
	struct<13> Var0;
	int iVar1;
	Var0 = { __LIB_1__.func_267(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = __LIB_0__.func_782(__LIB_0__.func_783(&Var0));
			if (iVar1 == 0)
			{
				__LIB_0__.func_781(&Global_1659614, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				__LIB_0__.func_781(&Global_1659615, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				__LIB_0__.func_781(&Global_1659616, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				__LIB_0__.func_781(&Global_1659617, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				__LIB_0__.func_781(&Global_1659618, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1659618);
			}
		}
	}
}

void func_954(int iParam0)//Position - 0xD9CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			bVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(bVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(bVar5) == iVar1 || __LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(bVar5), iVar1, 0))
				{
					iVar2++;
					if (bVar5 != PLAYER::PLAYER_ID())
					{
						if (__LIB_1__.func_427(PLAYER::PLAYER_ID(), bVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((__LIB_0__.func_785(*iParam0, 100) * (10f * Global_262145.f_4227 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((__LIB_0__.func_785(*iParam0, 100) * (20f * Global_262145.f_4220 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

void func_955(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xEC1A
{
	struct<3> Var0;
	int iVar1;
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = __LIB_1__.func_276(Var0.f_1);
	if ((Global_262145.f_24104 /* Tunable: BLOCK_NS_TRANS */ && !Global_262145.f_24105 /* Tunable: SC_RUN_TRANS */) && !Global_262145.f_24106 /* Tunable: BG_RUN_TRANS */)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		__LIB_0__.func_678();
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 36, iVar1);
	}
}

int func_956(int iParam0)//Position - 0xEFD8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			__LIB_1__.func_95(iVar0);
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

var func_957(char* sParam0)//Position - 0xF084
{
	char cVar0[64];
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return __LIB_0__.func_688(&cVar0);
}

void func_958(var uParam0, int iParam1)//Position - 0x114A3
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = __LIB_1__.func_48(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_959()//Position - 0x135B0
{
	switch (__LIB_2__.func_194())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		default:
	}
	return 0;
}

void func_960(bool bParam0)//Position - 0x135F2
{
	int iVar0;
	if (bParam0)
	{
		Global_100493.f_8 = 1;
	}
	else
	{
		Global_100493.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 58)
	{
		__LIB_1__.func_285(iVar0);
		iVar0++;
	}
}

void func_961(int iParam0)//Position - 0x168A5
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	if (iParam0 >= Global_1660944)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1660783[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1660783[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1660783[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1660783[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1660944)
	{
		Global_1660783[iVar2 /*5*/] = { Global_1660783[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	__LIB_1__.func_384(&(Global_1660783[iVar2 /*5*/]));
	Global_1660944 = (Global_1660944 - 1);
}

struct<35> func_962(bool bParam0)//Position - 0x16A1B
{
	struct<13> Var0;
	struct<35> Var1;
	if (__LIB_0__.func_796(bParam0))
	{
		return Global_1575090[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { __LIB_1__.func_267(bParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_963(int iParam0)//Position - 0x172E4
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_1__.func_300())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
		case 42:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 6;
			break;
		case 3:
			iVar0 = 5;
			break;
		case 26:
			iVar0 = 21;
			break;
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		case 7:
			iVar0 = 10;
			break;
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		case 15:
			iVar0 = 17;
			break;
		case 16:
			iVar0 = 18;
			break;
		case 18:
			if (__LIB_0__.func_693(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (__LIB_0__.func_694(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (__LIB_1__.func_299(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (__LIB_6__.func_931())
	{
		iVar0 = 20;
	}
	return iVar0;
}

int func_964(bool bParam0)//Position - 0x1849D
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_1__.func_303(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))
				{
					return 0;
				}
			}
		}
	}
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_965()//Position - 0x18646
{
	if (__LIB_0__.func_822())
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

void func_966(int iParam0)//Position - 0x190C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			__LIB_6__.func_896(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_967()//Position - 0x1A3E0
{
	if (__LIB_1__.func_310() && !__LIB_1__.func_309())
	{
		__LIB_1__.func_543();
	}
	__LIB_1__.func_225();
	Global_2667225.f_714 = 0;
}

bool func_968(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x7358
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	fVar2 = (fParam3 * 0.70710677f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return __LIB_1__.func_463(Param0, Param1, Var0, Var1);
}

Vector3 func_969(int iParam0, bool bParam1)//Position - 0x78C1
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == __LIB_0__.func_346(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

void func_970(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x798F
{
	int iVar0;
	int iVar1;
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703735.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703735.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703735.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar1 /*30*/].f_4 = __LIB_1__.func_442(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam2;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = __LIB_1__.func_441();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = __LIB_1__.func_440();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

void func_971(int iParam0)//Position - 0x7DC8
{
	struct<13> Var0;
	int iVar1;
	Var0 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = __LIB_0__.func_782(__LIB_0__.func_783(&Var0));
			if (iVar1 == 0)
			{
				__LIB_0__.func_781(&Global_1659614, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				__LIB_0__.func_781(&Global_1659615, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				__LIB_0__.func_781(&Global_1659616, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				__LIB_0__.func_781(&Global_1659617, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				__LIB_0__.func_781(&Global_1659618, iParam0);
				__LIB_0__.func_780(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1659618);
			}
		}
	}
}

void func_972(int iParam0)//Position - 0x927D
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || __LIB_0__.func_610(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (__LIB_0__.func_669(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((__LIB_0__.func_785(*iParam0, 100) * (10f * Global_262145.f_4227 /* Tunable: XP_TUNABLE_ALL_RP_WHILE_PLAYING_IN_A_CREW */)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((__LIB_0__.func_785(*iParam0, 100) * (20f * Global_262145.f_4220 /* Tunable: XP_TUNABLE_PERFORMING_JOBS_WITH_OTHER_PLAYERS */)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

int func_973(int iParam0)//Position - 0x969F
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > __LIB_1__.func_555(PLAYER::PLAYER_ID()))
		{
			iParam0 = -__LIB_1__.func_555(PLAYER::PLAYER_ID());
		}
	}
	if (__LIB_0__.func_778(8000, 0, 0) > 0)
	{
		if (__LIB_0__.func_778(8000, 0, 0) < (iParam0 + __LIB_1__.func_555(PLAYER::PLAYER_ID())))
		{
			iParam0 = (__LIB_0__.func_778(8000, 0, 0) - __LIB_1__.func_555(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_974(int iParam0)//Position - 0x9804
{
	return __LIB_0__.func_787(__LIB_0__.func_396(iParam0));
}

int func_975(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x30A75
{
	int iVar0;
	iVar0 = __LIB_0__.func_971(iParam0, iParam1, iParam3);
	if (__LIB_0__.func_719(Global_4718592.f_116524, 1))
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

void func_976(int iParam0, bool bParam1)//Position - 0x314C0
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		iVar1 = __LIB_1__.func_448(1);
	}
	else
	{
		iVar1 = __LIB_1__.func_448(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_977(int iParam0, bool bParam1, bool bParam2)//Position - 0x3218A
{
	return __LIB_6__.func_897(1, iParam0, 1, bParam1, bParam2);
}

bool func_978(bool bParam0, int iParam1)//Position - 0x207F
{
	bool bVar0;
	if (bParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = __LIB_0__.func_192(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[bParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(bParam0) == 8;
		}
	}
	return bVar0;
}

int func_979(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x661B6
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	iVar0 = Global_78127;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (__LIB_0__.func_30(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3))
	{
		uVar3 = __LIB_1__.func_556(iVar2, iVar0, 0);
		return BitTest(uVar3, uVar1);
	}
	return 0;
}

int func_980(bool bParam0)//Position - 0x84405
{
	if (bParam0 > -1)
	{
		if (__LIB_1__.func_264(bParam0, 0, 1))
		{
			if (bParam0 == PLAYER::PLAYER_ID())
			{
				return __LIB_0__.func_714(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1853348[bParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return __LIB_0__.func_714(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_981(int iParam0, int iParam1, int iParam2)//Position - 0x855C0
{
	int iVar0;
	iVar0 = __LIB_1__.func_556(iParam0, __LIB_1__.func_443(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!__LIB_0__.func_692(iParam0))
	{
		__LIB_1__.func_597(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		__LIB_1__.func_603(iParam0, iVar0, iParam2, 1);
	}
}

void func_982(bool bParam0, int iParam1, int iParam2)//Position - 0x86E4D
{
	struct<8> Var0;
	if (__LIB_1__.func_264(bParam0, 0, 1))
	{
		Var0.f_0 = 1146470621;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = __LIB_1__.func_446(bParam0);
		__LIB_1__.func_277(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 8, __LIB_1__.func_276(bParam0));
	}
}

int func_983(int iParam0, bool bParam1, int iParam2)//Position - 0x87213
{
	int iVar0;
	if (iParam0 == __LIB_0__.func_160())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (__LIB_1__.func_436(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1892703[iParam0 /*599*/].f_10;
	if (iVar0 != __LIB_0__.func_160() && Global_1892703[iVar0 /*599*/].f_10.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_984(bool bParam0)//Position - 0x87C2D
{
	if (bParam0 != __LIB_0__.func_160())
	{
		if (__LIB_1__.func_264(bParam0, 1, 1))
		{
			if (Global_2689235[bParam0 /*453*/].f_318.f_6 != -1)
			{
				return __LIB_0__.func_170(Global_2689235[bParam0 /*453*/].f_318.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_985(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x888AE
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__.func_667(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(7, iVar0);
		Global_1649593.f_4659[iVar0] = uParam0;
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

void func_986(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x88A3A
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
			if (__LIB_0__.func_667(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__.func_666(6, iVar0);
		Global_1649593.f_4041[iVar0] = iParam0;
		StringCopy(&(Global_1649593.f_4041.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1649593.f_4041.f_183[iVar0] = iParam3;
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
		if (iParam15 == 5 && __LIB_1__.func_281())
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
			if (__LIB_1__.func_280())
			{
				Global_1649593.f_1176 = 1;
			}
		}
	}
}

int func_987(bool bParam0)//Position - 0x88DD2
{
	if (__LIB_1__.func_452())
	{
		return 0;
	}
	if (__LIB_0__.func_706())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (__LIB_1__.func_264(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_988()//Position - 0x8983D
{
	if (__LIB_1__.func_456())
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 17);
	}
}

bool func_989(var uParam0)//Position - 0x8996F
{
	var uVar0;
	uVar0 = __LIB_1__.func_556(2483, -1, 0);
	return BitTest(uVar0, uParam0);
}

void func_990(int iParam0)//Position - 0x92DDB
{
	if (__LIB_1__.func_470() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2653189)
	{
		return;
	}
	Global_2653189 = iParam0;
	Global_2653191 = 0;
	Global_2653192 = 0;
}

int func_991(int iParam0)//Position - 0x93BDE
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((__LIB_0__.func_674() && !__LIB_1__.func_459()) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 21)) || __LIB_0__.func_702(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (__LIB_0__.func_649(&(Global_1836844.f_13)))
		{
			if (!__LIB_2__.func_47(&(Global_1836844.f_13), Global_262145.f_14 /* Tunable: FM_EVENT_PASSIVE_COOL_DOWN */, 0))
			{
				return 1;
			}
			__LIB_0__.func_579(&(Global_1836844.f_13));
		}
	}
	else if (BitTest(Global_1892703[iParam0 /*599*/].f_1, 10))
	{
		return 1;
	}
	return BitTest(Global_1892703[iParam0 /*599*/].f_1, 9);
}

void func_992(var uParam0)//Position - 0x942C9
{
	if (!__LIB_0__.func_649(&(uParam0->f_21)))
	{
		__LIB_0__.func_580(&(uParam0->f_21), 0, 0);
	}
	else if (__LIB_2__.func_47(&(uParam0->f_21), 250, 0))
	{
		__LIB_0__.func_579(&(uParam0->f_21));
		__LIB_1__.func_488(0);
	}
}

int func_993(var uParam0)//Position - 0x9434B
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	bVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (bVar3 != __LIB_0__.func_160() && __LIB_1__.func_264(bVar3, 0, 1))
	{
		Var2 = { __LIB_1__.func_267(bVar3) };
		iVar1 = __LIB_1__.func_490(uParam0, uParam0->f_37);
		if (__LIB_0__.func_585(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							__LIB_1__.func_489(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						__LIB_1__.func_489(uParam0, iVar0, 1);
					}
					break;
				case 2:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							__LIB_1__.func_489(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						__LIB_1__.func_489(uParam0, iVar0, 0);
					}
					break;
				case 1:
					if (NETWORK::NETWORK_CAN_COMMUNICATE_WITH_GAMER(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							__LIB_1__.func_489(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						__LIB_1__.func_489(uParam0, iVar0, 0);
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

void func_994(var uParam0, int* iParam1, int iParam2)//Position - 0x9452C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (bVar2 != __LIB_0__.func_160())
		{
			if (__LIB_1__.func_264(bVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = __LIB_1__.func_494(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					__LIB_1__.func_493(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1853348[iVar0 /*834*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

float func_995(int iParam0, int iParam1)//Position - 0x94F8B
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
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return __LIB_1__.func_502(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return __LIB_1__.func_501(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

int func_996(bool bParam0, int iParam1, bool bParam2)//Position - 0x9568D
{
	if (iParam1 != __LIB_0__.func_160())
	{
		if (!bParam2)
		{
			if (__LIB_1__.func_144(bParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1892703[bParam0 /*599*/].f_10 != __LIB_0__.func_160())
		{
			return iParam1 == Global_1892703[bParam0 /*599*/].f_10;
		}
	}
	return 0;
}

void func_997()//Position - 0x95887
{
	if (BitTest(Global_2815059.f_4657, 1))
	{
		if (__LIB_1__.func_159())
		{
			__LIB_6__.func_952();
		}
	}
}

char* func_998(var uParam0)//Position - 0x963E1
{
	int iVar0;
	iVar0 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
	if (__LIB_1__.func_516())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		case 132:
			return "FM_AE_SORT_5" /* GXT: Points */;
		case 133:
			switch (__LIB_2__.func_194())
			{
				case 0:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 1:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 2:
					return "FM_AE_SORT_3" /* GXT: Speed */;
				case 3:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 4:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 5:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 6:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 7:
					return "FM_AE_SORT_13" /* GXT: Vehicles */;
				case 8:
					return "FM_AE_SORT_4" /* GXT: Misses */;
				case 9:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 10:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 11:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 12:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 13:
					return "FM_AE_SORT_2" /* GXT: Distance */;
				case 14:
					return "FM_AE_SORT_5" /* GXT: Points */;
				case 15:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 16:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 17:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				case 18:
					return "FM_AE_SORT_9" /* GXT: Kills */;
				default:
			}
			break;
		case 136:
			return "";
		case 138:
			return "";
		case 139:
			return "FM_AE_SORT_10" /* GXT: Possession Time */;
		case 140:
			return "";
		case 141:
			return "FM_AE_SORT_5" /* GXT: Points */;
		case 144:
			return "FM_AE_SORT_1" /* GXT: Destruction Value */;
		case 129:
			return "FM_AE_SORT_9" /* GXT: Kills */;
	}
	return "";
}

char* func_999(var uParam0)//Position - 0x96598
{
	int iVar0;
	iVar0 = __LIB_1__.func_182(PLAYER::PLAYER_ID());
	if (__LIB_1__.func_516())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9" /* GXT: Moving Target */;
		case 132:
			if (__LIB_1__.func_518() == 0)
			{
				return "CPC_TILEL" /* GXT: Checkpoints */;
			}
			else if (__LIB_1__.func_518() == 1)
			{
				return "CPC_TILELA" /* GXT: Air Checkpoints */;
			}
			return "PIM_TA0" /* GXT: Checkpoints */;
			break;
		case 133:
			switch (__LIB_2__.func_194())
			{
				case 0:
					return "AMCH_0SLC" /* GXT: Longest Jump */;
				case 1:
					return "AMCH_1SLC" /* GXT: Longest Freefall */;
				case 2:
					return "AMCH_2SLC" /* GXT: Highest Speed */;
				case 3:
					return "AMCH_3SLC" /* GXT: Longest Stoppie */;
				case 4:
					return "AMCH_4SLC" /* GXT: Longest Wheelie */;
				case 5:
					return "AMCH_5SLC" /* GXT: No Crashes */;
				case 6:
					return "AMCH_6SLC" /* GXT: Lowest Parachute */;
				case 7:
					return "AMCH_7SLC" /* GXT: Vehicles Stolen */;
				case 8:
					return "AMCH_8SLC" /* GXT: Near Misses */;
				case 9:
					return "AMCH_12SLC" /* GXT: Reverse Driving */;
				case 10:
					return "AMCH_13SLC" /* GXT: Longest Fall Survived */;
				case 11:
					return "AMCH_15SLC" /* GXT: Low Flying */;
				case 12:
					return "AMCH_16SLC" /* GXT: Inverted Flying */;
				case 13:
					return "AMCH_23SLC" /* GXT: Longest Bail */;
				case 14:
					return "AMCH_9SLC" /* GXT: Fly Under Bridges */;
				case 15:
					return "AMCH_19SLC" /* GXT: Headshot Kills */;
				case 16:
					return "AMCH_20SLC" /* GXT: Driveby */;
				case 17:
					return "AMCH_21SLC" /* GXT: Melee */;
				case 18:
					return "AMCH_22SLC" /* GXT: Sniper Kills */;
				default:
			}
			break;
		case 136:
			return "PIM_TA10" /* GXT: Penned In */;
		case 138:
			return "PIM_TA4" /* GXT: Hold the Wheel */;
		case 139:
			return "PIM_TA5" /* GXT: Hot Property */;
		case 140:
			return "PIM_TA3" /* GXT: Dead Drop */;
		case 141:
			return "PIM_TA8" /* GXT: King of the Castle */;
		case 144:
			return "PIM_TA2" /* GXT: Criminal Damage */;
		case 129:
			if (__LIB_1__.func_517() == 1)
			{
				return "FM_AE_TITL_12" /* GXT: Kill List Competitive */;
			}
			else
			{
				return "PIM_TA7" /* GXT: Kill List */;
			}
			break;
		case 146:
			return "PIM_TA6" /* GXT: Hunt the Beast */;
	}
	return "";
}
