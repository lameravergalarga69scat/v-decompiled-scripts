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
	var uLocal_52 = 0;
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
	int iVar2[3];
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
	uLocal_52 = __LIB_11__::func_793(61);
	iLocal_54 = -1;
	iLocal_57 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__::func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_29__::func_777(&Var0);
	Var1 = { ScriptParam_59.f_1[0 /*3*/] };
	iVar2[0] = 21;
	iVar2[1] = 22;
	iVar2[2] = 23;
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
		func_276(&Var0, 1);
	}
	if (!__LIB_37__::func_336(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_264(Var0.f_0))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__::func_329(Var0.f_0))
	{
		__LIB_34__::func_838();
		__LIB_0__::func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_247(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__::func_135("Player out of range [TERMINATING]");
			func_276(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__::func_979(&Var0, 1))
		{
			func_276(&Var0, 1);
		}
		__LIB_37__::func_326(Var0.f_0);
		__LIB_37__::func_333(&iLocal_54, &(Var0.f_9), Var1);
		if (iLocal_55 == 0)
		{
			if (Var0.f_0 == 22)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (__LIB_0__::func_121(Var0.f_28[1]))
					{
						__LIB_0__::func_135("Trying to set Mary Ann boyfriend component variation");
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MaryAnnes_Friend", Var0.f_28[1], 0);
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MaryAnnes_Friend", 0, 0, 0, 0);
						iLocal_55 = 1;
					}
				}
			}
		}
		if (Var0.f_0 == 21)
		{
			func_197(&Var0, Var1, "FAN1AU", "FAN1_AMB", 3, "MARYANN", 1500);
		}
		else if (Var0.f_0 == 22)
		{
			__LIB_34__::func_845(&Var0, Var1, "FAN2AU", "FAN2_AMB", 3, "MARYANN", 5000, 1101004800);
		}
		else if (Var0.f_0 == 23)
		{
			if (iLocal_56 == 0)
			{
				if (func_197(&Var0, Var1, "FAN3AUD", "FAN3_AMB", 3, "MARYANN", 50))
				{
					iLocal_56 = 1;
				}
			}
			else
			{
				func_189(&Var0);
			}
		}
		if (__LIB_41__::func_980(&Var0, 0))
		{
			if (__LIB_29__::func_761(Var0.f_0))
			{
				__LIB_37__::func_324(Var0.f_0, &iLocal_58);
			}
			if (!__LIB_42__::func_851(&Var0))
			{
				func_276(&Var0, 1);
			}
			if (__LIB_29__::func_757(&Var0))
			{
				func_276(&Var0, 0);
			}
		}
	}
}

void func_189(int iParam0)//Position - 0xCE79
{
	if (iLocal_57 == -1)
	{
		iLocal_57 = MISC::GET_GAME_TIMER();
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_57) >= 900)
	{
		if (__LIB_0__::func_121(iParam0->f_28[0]))
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_5__::func_759(iParam0->f_28[0], "PUSHUP_BREATH", "MARYANN", 6);
				iLocal_57 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

int func_197(int iParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6)//Position - 0xD2C5
{
	var uVar0;
	if (__LIB_37__::func_325(2))
	{
		if (!__LIB_0__::func_75())
		{
			if (((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iParam0->f_28[0])) && (MISC::GET_GAME_TIMER() - iParam0->f_60) > iParam6) && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
			{
				uVar0 = 16;
				__LIB_0__::func_203(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
				__LIB_10__::func_617(&uVar0, cParam2, sParam3, 7, 0, 0);
				iParam0->f_60 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else if (__LIB_11__::func_988(sParam3))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
				{
					__LIB_0__::func_296();
				}
			}
		}
	}
	return 0;
}

int func_247(int iParam0)//Position - 0xF0D9
{
	switch (*iParam0)
	{
		case 21:
			if (!func_262(iParam0))
			{
				return 0;
			}
			break;
		case 22:
			if (!func_256(iParam0))
			{
				return 0;
			}
			break;
		case 23:
			if (!func_249(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 22)
	{
		iLocal_53 = __LIB_29__::func_797();
		MISC::CLEAR_AREA_OF_PEDS(816.3f, 1275.61f, 359.5f, 75f, 0);
	}
	__LIB_0__::func_135("Created initial scene");
	return 1;
}

int func_249(var uParam0)//Position - 0xF18C
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("prop_beach_towel_01");
	iVar0[2] = joaat("prop_energy_drink");
	iVar0[3] = joaat("prop_freeweight_01");
	iVar0[4] = joaat("prop_freeweight_02");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_3_RCM_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__::func_794(&(uParam0->f_48), "rcmfanatic3", "ef_3_rcm_loop_maryann", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_328(&(uParam0->f_28[0]), 61, -915.6f, 6139.192f, 5.525f, 111.24f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -915.6f, 6139.192f, 5.525f, true, false, true);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], 2.52f, 0f, 111.24f, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				Var3 = { -916.6389f, 6137.046f, 4.7157f };
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[0], -916.6389f, 6137.046f, 4.7157f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 1.7f, 19.1067f, 79.515f, 0, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[0], -0.0949f, 0.1369f, 0.6325f, 0.7564f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				Var3 = { -917.7f, 6138.89f, 4.72f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &(Var3.f_2), false, false);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], Var3, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], -6.625818f, 1.30159f, -1.248891f, 0, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
			{
				Var3 = { -915.6122f, 6137.662f, 4.6129f };
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[3], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[2], -915.6122f, 6137.662f, 4.6129f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], -1.6843f, 2.1363f, -0.0913f, 0, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[2], -0.0147f, 0.0187f, -0.0011f, 0.9997f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
			{
				Var3 = { -915.4199f, 6137.8555f, 4.6221f };
				uParam0->f_41[3] = OBJECT::CREATE_OBJECT(iVar0[4], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[3], -915.4199f, 6137.8555f, 4.6221f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -5.793f, 1.496f, -36.333f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[3], -0.0439f, 0.0281f, -0.312f, 0.9487f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
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

int func_256(var uParam0)//Position - 0xF713
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("U_M_Y_Cyclist_01");
	iVar0[2] = joaat("scorcher");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EF_2_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__::func_794(&(uParam0->f_48), "rcm_fanatic2", "ef_2_rcm__maryann_biking_maryann", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__::func_328(&(uParam0->f_28[0]), 61, 809.66f, 1279.76f, 360.49f, 122.53f, "FANATIC LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				__LIB_11__::func_798(&(uParam0->f_28[1]), iVar0[1], 808.43f, 1279.16f, 360.47f, -79.11f, 26);
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
					PED::SET_PED_LOD_MULTIPLIER(uParam0->f_28[1], 3.5f);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__::func_649(&(uParam0->f_35[0]), iVar0[2], 808.35f, 1277.2f, 360.15f, 216.5f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_20__::func_649(&(uParam0->f_35[1]), iVar0[2], 807.89f, 1275.73f, 360.18f, 208.2f);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (__LIB_0__::func_121(uParam0->f_35[iVar1]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[iVar1], iVar1);
				}
				iVar1++;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[2], true);
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_fanatic2"))
			{
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_fanatic2", "ef_2_rcm__maryann_biking_cyclist", 8f, -8f, -1, 1, 0f, false, false, false);
					__LIB_0__::func_135("Playing Mary Ann's friend anim...");
				}
			}
			__LIB_29__::func_798();
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

int func_262(var uParam0)//Position - 0xFB97
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__::func_794(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.51813f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_37__::func_328(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], true);
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

int func_264(int iParam0)//Position - 0xFD43
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__::func_2(1))
	{
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_265(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__::func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__::func_773(iParam0, &sVar0);
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

int func_265(int iParam0)//Position - 0xFDFC
{
	var uVar0;
	__LIB_6__::func_773(iParam0, &uVar0);
	if (!__LIB_6__::func_763(4))
	{
		if (__LIB_34__::func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__::func_569() && !__LIB_0__::func_568())
	{
		return 0;
	}
	if (__LIB_29__::func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__::func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__::func_865(iParam0))
	{
		if (!__LIB_29__::func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__::func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__::func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_266(5))
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

int func_266(int iParam0)//Position - 0xFEBD
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
			if (func_266(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__::func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_276(int iParam0, bool bParam1)//Position - 0x1024C
{
	char* sVar0;
	if (bParam1)
	{
		__LIB_32__::func_757(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_58))
	{
		HUD::REMOVE_BLIP(&iLocal_58);
	}
	__LIB_29__::func_794(&(iParam0->f_48));
	if (*iParam0 == 22)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_53, false);
	}
	if (iLocal_54 != -1)
	{
		__LIB_0__::func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__::func_764(&iLocal_54);
	}
	switch (*iParam0)
	{
		case 21:
			sVar0 = "FAN1_AMB";
			break;
		case 22:
			sVar0 = "FAN2_AMB";
			break;
		case 23:
			sVar0 = "FAN3_AMB";
			break;
	}
	__LIB_37__::func_330(sVar0);
	if (bParam1)
	{
		__LIB_37__::func_326(*iParam0);
	}
	__LIB_34__::func_838();
	__LIB_0__::func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

