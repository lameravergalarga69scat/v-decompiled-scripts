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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<2> Local_59 = { 0, 5 } ;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 5;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2[4];
	struct<3> Var3;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_52 = __LIB_17__::func_29(52);
	iLocal_53 = joaat("A_C_Retriever");
	iLocal_54 = -1;
	iLocal_56 = AUDIO::GET_SOUND_ID();
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_37__::func_256();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_37__::func_255(&Var0);
	Var1 = { ScriptParam_59.f_1[0 /*3*/] };
	iVar2[0] = 17;
	iVar2[1] = 18;
	iVar2[2] = 19;
	iVar2[3] = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__::func_135("Relinquishing candidate id...");
				__LIB_0__::func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_274(&Var0, 1);
	}
	if (!__LIB_37__::func_305(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_262(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_268(Var0.f_0))
	{
		__LIB_37__::func_262();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_245(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_274(&Var0, 1);
		}
	}
	if (Var0.f_0 == 17)
	{
		iLocal_57 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1 - Vector(40f, 40f, 40f), Var1 + Vector(40f, 40f, 40f), false, true, true, true);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", false);
	}
	else if (Var0.f_0 == 18)
	{
		iLocal_57 = PED::ADD_SCENARIO_BLOCKING_AREA(-1040f, -2870f, 0f, -910f, -2740f, 50f, false, false, true, true);
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_37__::func_318(&Var0, 1))
		{
			func_274(&Var0, 1);
		}
		__LIB_37__::func_266(Var0.f_0);
		__LIB_37__::func_297(&iLocal_54, &(Var0.f_9), Var1);
		if (Var0.f_0 == 18)
		{
			func_198(&Var0);
			__LIB_37__::func_296(&Var0, Var1, "EXT2AU", "EXT2_AMB", 3, "DOM", 5000, 1101004800);
		}
		else if (Var0.f_0 == 19)
		{
			func_198(&Var0);
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_56))
			{
				__LIB_37__::func_296(&Var0, Var1, "EXT3AUD", "EXT_AMB", 3, "DOM", 8000, 1101004800);
			}
			if ((((((!__LIB_0__::func_75() && __LIB_0__::func_121(Var0.f_28[0])) && !AUDIO::IS_ANY_SPEECH_PLAYING(Var0.f_28[0])) && AUDIO::HAS_SOUND_FINISHED(iLocal_56)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_A", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_B", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXTREME_04_DOM_C", false, -1))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_56, "DOM_BREATHING", Var0.f_28[0], "EXTREME_03_SOUNDSET", false, 0);
			}
			if ((iLocal_55 == 0 && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var1, Var0.f_15, Var0.f_15, Var0.f_15, false, false, 0))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (Var3.f_2 < 100f)
				{
					iLocal_55 = 1;
					__LIB_0__::func_151("TOPMAZE_HELP" /* GXT: Get to the top of the Maze Tower to start this mission. */, -1);
					__LIB_0__::func_135("Player below mission start location so displaying help text TOPMAZE_HELP");
				}
			}
		}
		if (__LIB_37__::func_311(&Var0, 0) || func_173(&Var0))
		{
			if (__LIB_37__::func_240(Var0.f_0))
			{
				__LIB_37__::func_264(Var0.f_0, &iLocal_58);
			}
			if (!__LIB_37__::func_327(&Var0))
			{
				func_274(&Var0, 1);
			}
			else if (Var0.f_0 == 19)
			{
				AUDIO::STOP_SOUND(iLocal_56);
			}
			if (__LIB_37__::func_236(&Var0))
			{
				func_274(&Var0, 0);
			}
		}
	}
}

int func_173(var uParam0)//Position - 0xBD51
{
	if (*uParam0 == 18)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -954.5357f, -2760.5532f, 11.916363f, -947.6847f, -2749.719f, 15.631608f, 26f, false, true, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_135("Special launching Extreme 2");
				return 1;
			}
			else if ((!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && __LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && __LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 3f, 1, 1056964608, 0, 1, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	return 0;
}

void func_198(int iParam0)//Position - 0xD22C
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(iParam0->f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iParam0->f_28[0], 0);
		}
	}
}

int func_245(int iParam0)//Position - 0xEF46
{
	switch (*iParam0)
	{
		case 17:
			if (!func_260(iParam0))
			{
				return 0;
			}
			break;
		case 18:
			if (!func_257(iParam0))
			{
				return 0;
			}
			break;
		case 19:
			if (!func_253(iParam0))
			{
				return 0;
			}
			break;
		case 20:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_246(var uParam0)//Position - 0xEFBB
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 12f;
			StringCopy(&(uParam0->f_9), "ES_4_RCM_P1", 24);
			uParam0->f_27 = 0;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcmextreme4", "idle_a", "idle_c");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			func_247(&(uParam0->f_28[0]), 1732.27f, 96.36f, 170.29f, -98.56f);
			PED::SET_PED_CAN_LEG_IK(uParam0->f_28[0], true);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_247(int* iParam0, struct<3> Param1, float fParam2)//Position - 0xF0BF
{
	__LIB_17__::func_42(iParam0, iLocal_53, Param1, fParam2, 26);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_PED_NAME_DEBUG(*iParam0, "EXTREME LAUNCHER RC");
}

int func_253(var uParam0)//Position - 0xF1EA
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	iVar0[0] = iLocal_52;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -63.191788f, -808.91675f, 320.24774f };
			uParam0->f_17[1 /*3*/] = { -68.8908f, -813.6761f, 324.29004f };
			uParam0->f_24 = 10f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "ES_3_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcmextreme3", "idle_calm", "fidget_02");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 52, -63.8f, -809.5f, 321.8f, -62f, "EXTREME LAUNCHER RC", 1))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("GADGET_PARACHUTE"), 1, false, false);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_257(var uParam0)//Position - 0xF4AD
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = joaat("blazer");
	iVar0[1] = joaat("flatbed");
	iVar0[2] = iLocal_52;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "es_2_rcm_concat", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcmextreme2", "sitting_idle", "loop_punching");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_267(&(uParam0->f_28[0]), 52, -954.19f, -2760.05f, 14.64f, -31.79f, "EXTREME LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -954.2f, -2760.05f, 14.04f, true, false, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 118, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 208, true);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[0], false, false);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
					TASK::TASK_PLAY_ANIM(uParam0->f_28[0], uParam0->f_48, uParam0->f_48.f_1, 8f, -8f, -1, 33281, 0f, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
					}
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], -950.8f, -2751.98f, 13.21f, 199.05f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[1]), iVar0[0], -950.192f, -2755.96f, 13.3639f, -178.182f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 1);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[1], 0f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[2]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[2]), iVar0[1], -957.23f, -2764.89f, 14.04f, 147.61f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[2], 2);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[2], 2);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[2], 0f);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_35[2], false);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(uParam0->f_35[2], false, 0);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_260(var uParam0)//Position - 0xF88F
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = iLocal_53;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			StringCopy(&(uParam0->f_9), "ES_1_RCM_P1", 24);
			uParam0->f_15 = 15f;
			uParam0->f_27 = 0;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_14__::func_825(&(uParam0->f_48), "rcm_extreme1", "idle_a", "idle_c");
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			func_247(&(uParam0->f_28[0]), -188.22f, 1296.1f, 302.86f, 43.7f);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_262(int iParam0)//Position - 0xF9CC
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085_FLOW_STRUCT_isGameflowActive && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_263(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_0__::func_432(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_263(int iParam0)//Position - 0xFA85
{
	var uVar0;
	__LIB_0__::func_432(iParam0, &uVar0);
	if (!__LIB_0__::func_215(4))
	{
		if (__LIB_0__::func_781(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_767() && !__LIB_0__::func_766())
	{
		return 0;
	}
	if (__LIB_37__::func_254(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__::func_775();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_0__::func_774(iParam0))
	{
		if (!__LIB_37__::func_253(iParam0))
		{
			return 0;
		}
		if (!__LIB_37__::func_252(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_720(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_264(5))
		{
			Global_112473[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_112473[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_264(int iParam0)//Position - 0xFB46
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_264(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_274(int iParam0, bool bParam1)//Position - 0xFED5
{
	if (*iParam0 == 18)
	{
		if (__LIB_0__::func_121(iParam0->f_35[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_35[0], 1);
		}
		if (__LIB_0__::func_121(iParam0->f_35[1]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0->f_35[1], 1);
		}
	}
	if (bParam1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		__LIB_14__::func_871(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_58))
	{
		HUD::REMOVE_BLIP(&iLocal_58);
	}
	__LIB_37__::func_293(&(iParam0->f_48));
	if (*iParam0 == 17)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, false);
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", true);
	}
	else if (*iParam0 == 18)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_57, false);
	}
	else if (*iParam0 == 19)
	{
		AUDIO::STOP_SOUND(iLocal_56);
		STREAMING::REMOVE_ANIM_DICT("rcmextreme3");
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	if (iLocal_54 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_37__::func_5(&iLocal_54);
	}
	if (bParam1)
	{
	}
	__LIB_37__::func_262();
	__LIB_0__::func_135(" SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

