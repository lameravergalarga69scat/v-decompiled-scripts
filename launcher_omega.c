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
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<2> Local_60 = { 0, 5 } ;
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
	var uLocal_75 = 0;
	var uLocal_76 = 5;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2[2];
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
	uLocal_52 = __LIB_11__.func_793(69);
	iLocal_53 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__.func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	__LIB_29__.func_777(&Var0);
	Var1 = { ScriptParam_60.f_1[0 /*3*/] };
	iVar2[0] = 44;
	iVar2[1] = 45;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		if (Var0.f_0 != -1)
		{
			if (Global_112473[Var0.f_0 /*10*/].f_9 != -1)
			{
				__LIB_0__.func_135("Relinquishing candidate id...");
				__LIB_0__.func_56(&(Global_112473[Var0.f_0 /*10*/].f_9));
			}
		}
		func_269(&Var0, 1);
	}
	if (!__LIB_37__.func_336(&iVar2, &Var0, Var1, 1f))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_257(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_37__.func_329(Var0.f_0))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_245(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__.func_135("Player out of range [TERMINATING]");
			func_269(&Var0, 1);
		}
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	if (Var0.f_0 == 44)
	{
		func_244();
	}
	else if (Var0.f_0 == 45)
	{
		func_243();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!__LIB_41__.func_981(&Var0, 1))
		{
			func_269(&Var0, 1);
		}
		__LIB_37__.func_326(Var0.f_0);
		__LIB_37__.func_333(&iLocal_53, &(Var0.f_9), Var1);
		if (Var0.f_0 == 44)
		{
			func_189(&Var0, Var1, "SCRAPAU", "SCRAP_1_AMB", 3, "OMEGA", &uLocal_54);
			func_188();
		}
		else if (Var0.f_0 == 45)
		{
			func_189(&Var0, Var1, "SCRAPAU", "SCRAP_2_AMB", 3, "OMEGA", &uLocal_55);
			func_186(&Var0);
		}
		if (__LIB_41__.func_980(&Var0, 0))
		{
			if (!__LIB_42__.func_853(&Var0))
			{
				func_269(&Var0, 1);
			}
			if (__LIB_29__.func_757(&Var0))
			{
				func_269(&Var0, 0);
			}
		}
	}
}

void func_186(int iParam0)//Position - 0xC87E
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	if ((MISC::GET_GAME_TIMER() - iLocal_58) > 1250)
	{
		if (__LIB_0__.func_121(iParam0->f_28[0]) && !ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_28[0]))
		{
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iParam0->f_28[0], 50f, 1))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_28[0], true) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar3 = (Var1.f_0 - Var0.f_0);
				fVar4 = (Var1.f_1 - Var0.f_1);
				if (fVar4 != 0f)
				{
					fVar2 = MISC::ATAN2(fVar3, fVar4);
				}
				else if (fVar3 < 0f)
				{
					fVar2 = -90f;
				}
				else
				{
					fVar2 = 90f;
				}
				fVar2 = (fVar2 * -1f);
				fVar2 = (fVar2 - 180f);
				if (fVar2 < 0f)
				{
					fVar2 = (fVar2 + 360f);
				}
				ENTITY::SET_ENTITY_HEADING(iParam0->f_28[0], fVar2);
			}
		}
		iLocal_58 = MISC::GET_GAME_TIMER();
	}
}

void func_188()//Position - 0xC989
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_56, "SET_COLOUR");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_56, "SET_DISTANCE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(10f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	HUD::SET_TEXT_RENDER_ID(iLocal_57);
	fVar0 = 0.1f;
	fVar1 = 0.24f;
	fVar2 = 0.21f;
	fVar3 = 0.51f;
	if (__LIB_0__.func_52())
	{
		fVar0 = 0.05f;
		fVar1 = 0.12f;
		fVar2 = 0.105f;
		fVar3 = 0.255f;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_56, fVar0, fVar1, fVar2, fVar3, 100, 100, 100, 255, 0);
	if ((MISC::GET_GAME_TIMER() - iLocal_58) > 1250)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_59, "IDLE_BEEP", 2468.51f, 3437.39f, 49.9f, "EPSILONISM_04_SOUNDSET", false, 0, false);
		iLocal_58 = MISC::GET_GAME_TIMER();
	}
}

int func_189(int iParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)//Position - 0xCA7B
{
	var uVar0;
	if (!*uParam6 == 3)
	{
		if (__LIB_37__.func_325(2))
		{
			if (!__LIB_0__.func_75())
			{
				if ((__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__.func_121(iParam0->f_28[0])) && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f)
				{
					__LIB_0__.func_135("start conversation");
					uVar0 = 16;
					if (*uParam6 == 0)
					{
						__LIB_0__.func_203(&uVar0, iParam4, iParam0->f_28[0], sParam5, 0, 1);
						__LIB_10__.func_617(&uVar0, cParam2, sParam3, 7, 0, 0);
						*uParam6 = 2;
					}
					else if (*uParam6 == 2)
					{
						__LIB_0__.func_135("conversation ended");
						*uParam6 = 3;
						return 1;
					}
				}
			}
			else if (__LIB_11__.func_988(sParam3))
			{
				if (!*uParam6 == 1)
				{
					if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 20f)
						{
							__LIB_0__.func_135("pause conversation");
							__LIB_0__.func_488(1);
							*uParam6 = 1;
						}
					}
				}
			}
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Param1, 1) < 20f && *uParam6 == 1)
			{
				__LIB_0__.func_135("unpause conversation");
				__LIB_0__.func_488(0);
				*uParam6 = 2;
			}
		}
	}
	return 0;
}

void func_243()//Position - 0xEA41
{
	iLocal_58 = MISC::GET_GAME_TIMER();
}

void func_244()//Position - 0xEA4F
{
	iLocal_56 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("digiscanner");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_56))
	{
		SYSTEM::WAIT(0);
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		HUD::REGISTER_NAMED_RENDERTARGET("digiscanner", false);
	}
	HUD::LINK_NAMED_RENDERTARGET(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_DIGISCANNER")));
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("digiscanner"))
	{
		iLocal_57 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("digiscanner");
	}
	iLocal_59 = AUDIO::GET_SOUND_ID();
	iLocal_58 = MISC::GET_GAME_TIMER();
}

int func_245(int iParam0)//Position - 0xEAB7
{
	switch (*iParam0)
	{
		case 44:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		case 45:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__.func_135("Created initial scene");
	return 1;
}

int func_246(var uParam0)//Position - 0xEAFE
{
	int iVar0[2];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = joaat("dune2");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2337.3762f, 2585.722f, 45.110653f };
			uParam0->f_17[1 /*3*/] = { 2302.158f, 2586.5054f, 47.999573f };
			uParam0->f_24 = 26f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_2_RCM", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__.func_794(&(uParam0->f_48), "rcmrc_omega_2", "omega_idle_looking_around", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !__LIB_20__.func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 69, 2319.443f, 2583.5881f, 46.7663f, 220f, "OMEGA LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], 2331.08f, 2573.53f, 46.13f, 358.61f);
			}
			if (bVar2)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.3296f, 44.7f, 2326.4463f, 2579.6082f, 47.6645f, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(2321.2522f, 2578.8513f, 46.7f, 10f, false, false, false, false, false, false, 0);
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

int func_255(var uParam0)//Position - 0xEF72
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_DIGISCANNER"));
	iVar0[2] = joaat("prop_cs_walkie_talkie");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { 2463.2246f, 3444.113f, 48.59399f };
			uParam0->f_17[1 /*3*/] = { 2475.2202f, 3428.0977f, 50.990948f };
			uParam0->f_24 = 17f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "SCRAP_1_RCM", 24);
			uParam0->f_25 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__.func_794(&(uParam0->f_48), "rcmrc_omega_1", "omega_idle_geiger_counter", 0);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !__LIB_20__.func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 69, 2468.51f, 3437.39f, 49.9f, 180f, "OMEGA LAUNCHER RC", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], 2468.51f, 3437.39f, 55f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], 2468.51f, 3437.39f, 57f, true, true, false);
			}
			if ((__LIB_0__.func_121(uParam0->f_28[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0])) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.09f, 0.072f, -0.006f, 298f, 194f, 178f, false, false, false, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 64729), 0.1f, 0.08f, 0f, 162.72f, 5.4f, 1.8f, false, false, false, false, 2, true, 0);
			}
			else
			{
				bVar2 = false;
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

int func_257(int iParam0)//Position - 0xF247
{
	char* sVar0;
	if (Global_78319)
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!Global_113386.f_9085 && !__LIB_0__.func_2(1))
	{
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return 0;
	}
	if (!func_258(iParam0))
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_100441.f_11 == 6)
	{
		if (Global_100441 < 9)
		{
			__LIB_6__.func_773(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100441.f_3), sVar0))
			{
				__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112473[iParam0 /*10*/].f_1 = 1;
		__LIB_0__.func_135("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_258(int iParam0)//Position - 0xF300
{
	var uVar0;
	__LIB_6__.func_773(iParam0, &uVar0);
	if (!__LIB_6__.func_763(4))
	{
		if (__LIB_34__.func_833(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_0__.func_569() && !__LIB_0__.func_568())
	{
		return 0;
	}
	if (__LIB_29__.func_776(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = __LIB_18__.func_205();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!__LIB_6__.func_865(iParam0))
	{
		if (!__LIB_29__.func_775(iParam0))
		{
			return 0;
		}
		if (!__LIB_29__.func_774(iParam0))
		{
			return 0;
		}
		if (__LIB_0__.func_528(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_259(5))
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

int func_259(int iParam0)//Position - 0xF3C1
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
			if (func_259(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_10__.func_605(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)//Position - 0xF750
{
	char* sVar0;
	if (*iParam0 == 45)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2314.546f, 2576.3296f, 44.7f, 2326.4463f, 2579.6082f, 47.6645f, true, true);
	}
	if (bParam1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 44 && ENTITY::DOES_ENTITY_EXIST(iParam0->f_41[1]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_41[1]));
		}
		__LIB_32__.func_757(iParam0, 0, 0, 0);
	}
	__LIB_29__.func_794(&(iParam0->f_48));
	if (iLocal_53 != -1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__.func_764(&iLocal_53);
	}
	switch (*iParam0)
	{
		case 44:
			sVar0 = "SCRAP_1_AMB";
			break;
		case 45:
			sVar0 = "SCRAP_2_AMB";
			break;
	}
	__LIB_37__.func_330(sVar0);
	if (bParam1)
	{
		__LIB_37__.func_326(*iParam0);
	}
	__LIB_34__.func_838();
	__LIB_0__.func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

