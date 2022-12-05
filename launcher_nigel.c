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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<4> Local_49[10];
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<2> Local_71 = { 0, 5 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 5;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	var uVar2;
	struct<2> Var3;
	int iVar4[7];
	bool bVar5;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_52 = __LIB_11__.func_793(64);
	uLocal_53 = __LIB_11__.func_793(63);
	iLocal_54 = joaat("U_M_M_Aldinapoli");
	iLocal_55 = joaat("premier");
	iLocal_68 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	__LIB_29__.func_778();
	Var0.f_17 = 2;
	Var0.f_28 = 6;
	Var0.f_35 = 5;
	Var0.f_41 = 6;
	Var1 = { 0f, 0f, 0f };
	uVar2 = 15;
	__LIB_29__.func_777(&Var0);
	Var1 = { ScriptParam_71.f_1[0 /*3*/] };
	Var3.f_1 = -1;
	iVar4[0] = 37;
	iVar4[1] = 38;
	iVar4[2] = 39;
	iVar4[3] = 40;
	iVar4[4] = 41;
	iVar4[5] = 42;
	iVar4[6] = 43;
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
		func_299(&Var0, &Var3, 1);
	}
	if (!__LIB_37__.func_336(&iVar4, &Var0, Var1, 1f))
	{
		__LIB_34__.func_838();
		__LIB_0__.func_135("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_287(Var0.f_0))
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
	while (!func_252(&Var0, &uVar2))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			__LIB_0__.func_135("Player out of range [TERMINATING]");
			func_299(&Var0, &Var3, 1);
		}
	}
	if (Var0.f_0 == 43)
	{
		Var3.f_0 = 0;
	}
	MISC::CLEAR_AREA(Var1, Var0.f_15, true, false, false, false);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_218(&Var0, 1))
		{
			func_299(&Var0, &Var3, 1);
		}
		__LIB_37__.func_326(Var0.f_0);
		__LIB_37__.func_333(&iLocal_68, &(Var0.f_9), Var1);
		if (Var0.f_0 == 42)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(__LIB_30__.func_423(), 4, 0, 0, __LIB_30__.func_422());
				__LIB_0__.func_135("Nigel 2 : set Di Napoli's cutscene trousers variation in launcher");
			}
		}
		if (__LIB_10__.func_715(&uLocal_56) && Var0.f_0 == 37)
		{
			__LIB_34__.func_843(Var0.f_28[1], &uLocal_56, Var0.f_0);
		}
		if (Var0.f_0 == 37)
		{
			__LIB_37__.func_337(&Var0, Var1, "NIG1AAU", "NIG1A_AMB", 0, "NIGEL", 1, "MRSTHORNHILL", &uLocal_70);
		}
		else if (Var0.f_0 == 42)
		{
			__LIB_34__.func_845(&Var0, Var1, "NIG2AUD", "NIG2_AMB", 4, "NIGEL", 5000, 14f);
		}
		else if (Var0.f_0 == 43)
		{
			func_193(&Var3, &(Var0.f_35[0]), &(Var0.f_28[1]));
			__LIB_34__.func_845(&Var0, -44.75f, -1289.86f, 29.16f, "NIGE3AU", "NIGEL3_AMB", 4, "NIGEL", 8000, 1101004800);
		}
		bVar5 = false;
		if (Var0.f_0 == 41)
		{
			if (func_191(&Var0, &uVar2) || func_190(&Var0))
			{
				bVar5 = true;
			}
		}
		else if (__LIB_41__.func_980(&Var0, 0))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			if (Var0.f_0 == 42)
			{
				__LIB_0__.func_686(1, 0, 1, 0);
			}
			if (__LIB_29__.func_761(Var0.f_0))
			{
				__LIB_37__.func_324(Var0.f_0, &iLocal_69);
			}
			if (!func_2(&Var0))
			{
				func_299(&Var0, &Var3, 1);
			}
			if (__LIB_29__.func_757(&Var0))
			{
				func_299(&Var0, &Var3, 0);
			}
		}
	}
}

int func_2(int iParam0)//Position - 0x39D
{
	struct<4> Var0;
	char* sVar1;
	if (!__LIB_0__.func_294())
	{
		while (!__LIB_39__.func_393(*iParam0))
		{
			if (__LIB_29__.func_760(*iParam0))
			{
				__LIB_24__.func_930();
			}
			if (!func_218(iParam0, *iParam0 != 2))
			{
				__LIB_0__.func_135("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (__LIB_0__.func_75())
	{
		__LIB_0__.func_296();
	}
	if (!func_115(iParam0))
	{
		__LIB_0__.func_135("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	__LIB_6__.func_773(*iParam0, &Var0);
	MemCopy(&sVar1, {__LIB_0__.func_45(*iParam0)}, 4);
	__LIB_6__.func_862(&sVar1, Var0.f_3, 0);
	__LIB_6__.func_861(*iParam0);
	if (!__LIB_0__.func_294())
	{
		if (iParam0->f_16 == 2)
		{
			__LIB_42__.func_785(&(iParam0->f_1), 0);
		}
		else
		{
			__LIB_42__.func_785(&(iParam0->f_1), 1);
		}
	}
	__LIB_35__.func_527(*iParam0, Var0.f_0);
	return 1;
}

int func_115(var* uParam0)//Position - 0xA452
{
	int iVar0;
	if (__LIB_34__.func_834(&(uParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_9)))
		{
			__LIB_26__.func_502(1);
			__LIB_10__.func_700(uParam0, 1, __LIB_29__.func_759(*uParam0));
		}
		if (uParam0->f_27)
		{
			if (__LIB_29__.func_758(*uParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_24__.func_930();
					SYSTEM::WAIT(0);
				}
			}
		}
		__LIB_41__.func_392(*uParam0);
		iVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(uParam0->f_1), uParam0, 61, 51000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			__LIB_0__.func_135("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(iVar0);
		}
		else
		{
			__LIB_0__.func_135("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

int func_190(int iParam0)//Position - 0xCEE0
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (iParam0->f_28 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_28[iVar0]))
			{
				if (__LIB_0__.func_121(iParam0->f_28[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0->f_28[iVar0], true), 7.5f, true))
					{
						if (__LIB_37__.func_325(2))
						{
							__LIB_40__.func_610(iParam0->f_27, *iParam0);
							return 1;
						}
						else
						{
							__LIB_0__.func_135("Player damaged the N1D peds but it's not safe to trigger the mission!");
						}
					}
				}
				else if (__LIB_37__.func_325(2))
				{
					__LIB_40__.func_610(iParam0->f_27, *iParam0);
					return 1;
				}
				else
				{
					__LIB_0__.func_135("Player killed a N1D ped but it's not safe to trigger the mission!");
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_191(int iParam0, var uParam1)//Position - 0xCFA4
{
	if (__LIB_11__.func_325(uParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		if (__LIB_37__.func_325(2))
		{
			if (__LIB_34__.func_841(iParam0->f_27))
			{
				__LIB_40__.func_610(iParam0->f_27, *iParam0);
				return 1;
			}
		}
	}
	return 0;
}

void func_193(int iParam0, var uParam1, var uParam2)//Position - 0xD09D
{
	if (__LIB_0__.func_121(*uParam1))
	{
		switch (*iParam0)
		{
			case 0:
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_TRUNK_THUMPS", false, -1))
				{
					iParam0->f_1 = AUDIO::GET_SOUND_ID();
					iParam0->f_2 = MISC::GET_GAME_TIMER();
					iParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000);
					*iParam0 = 1;
				}
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iParam0->f_2) > iParam0->f_3)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_1, "TRUNK_THUMPS", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, -2.2f, 0.5f), 0, false, 0, false);
					AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(*uParam2, "NIGE3_CXAA", "DINAPOLI", __LIB_0__.func_375(0), false);
					iParam0->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(3, 7);
					iParam0->f_5 = 0;
					iParam0->f_6 = MISC::GET_GAME_TIMER();
					iParam0->f_7 = MISC::GET_RANDOM_INT_IN_RANGE(100, 250);
					*iParam0 = 2;
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iParam0->f_6) > iParam0->f_7)
				{
					iParam0->f_8 = MISC::GET_RANDOM_INT_IN_RANGE(-200, -120);
					iParam0->f_9 = (0.5f * SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-2, 3)));
					ENTITY::APPLY_FORCE_TO_ENTITY(*uParam1, 1, 0f, 0f, IntToFloat(iParam0->f_8), iParam0->f_9, -1.5f, 0f, 0, true, true, false, true, true);
					iParam0->f_5++;
					if (iParam0->f_5 < iParam0->f_4)
					{
						iParam0->f_6 = MISC::GET_GAME_TIMER();
						iParam0->f_7 = MISC::GET_RANDOM_INT_IN_RANGE(150, 280);
					}
					else
					{
						iParam0->f_2 = MISC::GET_GAME_TIMER();
						iParam0->f_3 = MISC::GET_RANDOM_INT_IN_RANGE(6000, 12000);
						*iParam0 = 1;
					}
				}
				break;
			}
	}
}

int func_218(var uParam0, bool bParam1)//Position - 0xDE8C
{
	struct<27> Var0;
	if (Global_78319)
	{
		__LIB_0__.func_135("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	__LIB_6__.func_773(*uParam0, &Var0);
	if ((__LIB_6__.func_865(*uParam0) || __LIB_34__.func_833(*uParam0)) || Global_78564 == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		__LIB_0__.func_135("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (__LIB_37__.func_327(*uParam0))
	{
		if (*uParam0 == 19)
		{
			__LIB_29__.func_771(uParam0->f_28[0]);
		}
		__LIB_0__.func_135("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (uParam0->f_25 == 1)
	{
		if (!func_224(uParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (uParam0->f_16 == 0)
	{
		if (!func_224(uParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*uParam0 == 16 || *uParam0 == 9) || *uParam0 == 18) || *uParam0 == 22) || *uParam0 == 32) || *uParam0 == 51)
	{
		if (!__LIB_34__.func_836(uParam0, 1, 1))
		{
			if (*uParam0 == 16)
			{
				__LIB_34__.func_835(uParam0);
			}
			else
			{
				__LIB_34__.func_844(uParam0);
			}
			return 0;
		}
	}
	else if (*uParam0 == 24)
	{
		if (!__LIB_34__.func_836(uParam0, 0, 1))
		{
			__LIB_34__.func_844(uParam0);
			return 0;
		}
	}
	else if (*uParam0 == 6)
	{
		if (!__LIB_34__.func_836(uParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (uParam0->f_26 == 1)
	{
		if (!__LIB_34__.func_836(uParam0, 1, 0))
		{
			__LIB_34__.func_844(uParam0);
			return 0;
		}
	}
	else if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (!__LIB_34__.func_836(uParam0, 0, 0))
		{
			__LIB_34__.func_844(uParam0);
			return 0;
		}
	}
	if (uParam0->f_16 == 2 || uParam0->f_16 == 1)
	{
		if (__LIB_0__.func_121(uParam0->f_35[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(uParam0->f_35[0], Var0.f_6, 8f, 8f, 8f, false, true, 0))
			{
				return 0;
			}
		}
	}
	if (*uParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, uParam0->f_17[0 /*3*/], 8f))
		{
			__LIB_0__.func_135("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!BitTest(Var0.f_26, __LIB_20__.func_728()))
		{
			__LIB_0__.func_135("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (__LIB_10__.func_715(&(uParam0->f_48)) && bParam1)
	{
		__LIB_34__.func_843(uParam0->f_28[0], &(uParam0->f_48), *uParam0);
	}
	return 1;
}

int func_224(var uParam0, bool bParam1, int iParam2)//Position - 0xE699
{
	int iVar0;
	int iVar1;
	if (bParam1)
	{
		iVar1 = (uParam0->f_28 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[iVar0]))
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							if (__LIB_0__.func_75())
							{
								__LIB_0__.func_296();
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[iVar0]))
					{
						if (iParam2 == 0)
						{
							__LIB_34__.func_844(uParam0);
						}
						else
						{
							__LIB_34__.func_835(uParam0);
						}
						__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (__LIB_29__.func_770(*uParam0))
					{
						if (!__LIB_29__.func_760(*uParam0))
						{
							if (__LIB_32__.func_572(uParam0->f_28[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									__LIB_34__.func_844(uParam0);
								}
								else
								{
									__LIB_34__.func_835(uParam0);
								}
								__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 15f))
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (__LIB_41__.func_465(uParam0->f_28[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!__LIB_29__.func_767(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[iVar0], true), 5f))
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								__LIB_34__.func_844(uParam0);
							}
							else
							{
								__LIB_34__.func_835(uParam0);
							}
							__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					__LIB_0__.func_135("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (__LIB_0__.func_121(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_252(int iParam0, var uParam1)//Position - 0xF48D
{
	switch (*iParam0)
	{
		case 37:
			if (!func_285(iParam0))
			{
				return 0;
			}
			break;
		case 38:
			if (!func_277(iParam0))
			{
				return 0;
			}
			break;
		case 39:
			if (!func_273(iParam0))
			{
				return 0;
			}
			break;
		case 40:
			if (!func_272(iParam0))
			{
				return 0;
			}
			break;
		case 41:
			if (!func_268(iParam0, uParam1))
			{
				return 0;
			}
			break;
		case 42:
			if (!func_263(iParam0))
			{
				return 0;
			}
			break;
		case 43:
			if (!func_253(iParam0))
			{
				return 0;
			}
			break;
	}
	__LIB_0__.func_135("Created initial scene");
	return 1;
}

int func_253(var uParam0)//Position - 0xF549
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_54;
	iVar0[2] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_3_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_10__.func_717(&(uParam0->f_48), "rcmnigel3", "base", 0);
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
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 64, -44.6f, -1289.86f, 29.16f, 22.9f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iLocal_55, -39.9688f, -1285.9615f, 28.3505f, 181.02f);
				if (__LIB_0__.func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 5, false);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
				}
			}
			if (!func_254(&(uParam0->f_28[1]), &(uParam0->f_35[0])))
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

int func_254(var uParam0, var uParam1)//Position - 0xF730
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && STREAMING::HAS_MODEL_LOADED(iLocal_54))
	{
		*uParam0 = PED::CREATE_PED(26, joaat("U_M_M_Aldinapoli"), -59.7094f, -1330.1289f, 32.1963f, 0f, true, true);
		PED::SET_PED_NAME_DEBUG(*uParam0, "NI3_LNCH_CELEB");
		PED::SET_PED_COMPONENT_VARIATION(*uParam0, 4, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, -0.2f, -1.8f, -1f) };
		fVar2 = (-90f + ENTITY::GET_ENTITY_HEADING(*uParam1));
		Var1 = { 0f, 0f, fVar2 };
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, Var0, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, Var1, 2, true);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam0, *uParam1, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
		return 1;
	}
	return 0;
}

int func_263(var uParam0)//Position - 0xFAAA
{
	int iVar0[3];
	int iVar1;
	bool bVar2;
	iVar0[0] = uLocal_52;
	iVar0[1] = iLocal_55;
	iVar0[2] = joaat("dubsta");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 9f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "NMT_2_RCM", 24);
			func_264(42, 1);
			__LIB_10__.func_717(&(uParam0->f_48), "rcmnigel2", "base_nigel", "base_nigel");
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
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
				if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 64, -1310.65f, -640.17f, 26.52f, 153.43f, "RC NIGEL", 1))
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iLocal_55, -1304.01f, -644.58f, 25.91f, 127.67f);
				if (__LIB_0__.func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 5, false);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[1]), iVar0[2], -1290.73f, -634.603f, 26.1004f, 126.961f);
				if (__LIB_0__.func_121(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 10);
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

void func_264(int iParam0, bool bParam1)//Position - 0xFCC5
{
	switch (iParam0)
	{
		case 37:
			if (bParam1)
			{
				iLocal_67 = __LIB_30__.func_418();
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
				__LIB_30__.func_417();
				MISC::CLEAR_AREA_OF_PEDS(-1100.5f, 789.8f, 164.34f, 20f, 0);
				__LIB_30__.func_419(0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				__LIB_30__.func_419(1);
			}
			break;
		case 38:
			if (bParam1)
			{
				iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, false, true, true, true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
				PED::SET_PED_NON_CREATION_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), true);
				MISC::CLEAR_AREA_OF_PEDS(-558.2858f, 284.4073f, 81.1764f, 15f, 0);
				MISC::CLEAR_AREA_OF_PEDS(-573.39404f, 289.3696f, 79.06918f, 15f, 0);
				MISC::CLEAR_AREA(-554.17f, 307.68f, 82.84f, 2f, true, false, false, false);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), true);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_GUARD_STAND", true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_CLIPBOARD", true);
				TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
				PED::CLEAR_PED_NON_CREATION_AREA();
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Doorman_01"), false);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Bouncer_01"), false);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-577.27405f, 270.65054f, 77f, -543.17926f, 315.29727f, 94f, true, true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
			}
			break;
		case 39:
			if (bParam1)
			{
				iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, 0);
				MISC::CLEAR_AREA(-1035.73f, 365.44f, 68.91f, 35f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(-1035.73f, 365.44f, 68.91f, 27f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(-1035.73f, 365.44f, 68.91f, 27f, 0);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1073.19f, 342.05f, 63.328316f, -966.24f, 411.05f, 84.820435f, true, true);
			}
			break;
		case 40:
			break;
		case 41:
			if (bParam1)
			{
				iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-1122.2018f, 48.5724f, 51.4652f, -1076.2333f, 92.1041f, 60.0617f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1122.2018f, 48.5724f, 51.4652f, -1076.2333f, 92.1041f, 60.0617f);
				MISC::CLEAR_AREA(-1096.855f, 67.6858f, 52.952f, 15f, true, false, false, false);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
		case 42:
			if (bParam1)
			{
				iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-1319.5663f, -650.07697f, 23.53715f, -1301.7892f, -634.0721f, 38.18122f, false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(-1319.5663f, -650.07697f, 23.53715f, -1301.7892f, -634.0721f, 38.18122f);
			}
			else
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
				PED::CLEAR_PED_NON_CREATION_AREA();
			}
			break;
	}
}

int func_268(var uParam0, var uParam1)//Position - 0x101C6
{
	int iVar0[7];
	char* sVar1;
	int iVar2;
	int iVar3;
	sVar1 = "mini@golf";
	iVar0[0] = joaat("S_M_M_HighSec_01");
	iVar0[1] = joaat("prop_golf_wood_01");
	iVar0[2] = joaat("prop_golf_wood_01");
	iVar0[3] = joaat("U_M_M_MarkFost");
	iVar0[4] = joaat("A_M_Y_Golfer_01");
	iVar0[5] = joaat("caddy");
	iVar0[6] = joaat("prop_golf_bag_01");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1d";
			__LIB_11__.func_329(uParam1);
			__LIB_11__.func_328(uParam1, -1313.7141f, -27.2202f, 48.0314f);
			__LIB_11__.func_328(uParam1, -1294.0658f, -27.0136f, 47.5724f);
			__LIB_11__.func_328(uParam1, -1069.8435f, -143.769f, 39.7493f);
			__LIB_11__.func_328(uParam1, -925.2529f, -89.9079f, 38.3457f);
			__LIB_11__.func_328(uParam1, -1010.9485f, 40.0643f, 49.9277f);
			__LIB_11__.func_328(uParam1, -1122.8375f, 233.7037f, 64.7587f);
			__LIB_11__.func_328(uParam1, -1282.5781f, 188.8798f, 59.2769f);
			__LIB_11__.func_328(uParam1, -1328.1532f, 192.0178f, 57.8136f);
			__LIB_11__.func_328(uParam1, -1386.75f, 167.32f, 57.11f);
			__LIB_11__.func_328(uParam1, -1411.5f, 109.64f, 51.49f);
			__LIB_11__.func_328(uParam1, -1379.52f, 111.05f, 54.28f);
			__LIB_11__.func_328(uParam1, -1371.77f, 24.07f, 52.88f);
			__LIB_11__.func_328(uParam1, -1342.27f, 16.92f, 52.16f);
			__LIB_11__.func_327(uParam1);
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar2]);
				iVar2++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar1);
			iLocal_51 = 1;
			break;
		case 1:
			if ((!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			func_264(41, 1);
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[3], -1096.855f, 67.6858f, 52.952f, 112f, true, true);
			PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_28[0], true, 1);
			PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[0], true);
			uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], -1096.855f, 67.6858f, 52.952f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_a_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, uParam0->f_48, "swing_b_mark", 8f, -2f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar3, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[4], -1096.2576f, 69.723f, 53.0107f, 163f, true, true);
			TASK::TASK_PLAY_ANIM(uParam0->f_28[1], uParam0->f_48, "idle_a_friend_watching", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
			uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], -1096.2576f, 69.723f, 53.0107f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[1], PED::GET_PED_BONE_INDEX(uParam0->f_28[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			uParam0->f_28[2] = PED::CREATE_PED(26, iVar0[0], -1105.6224f, 66.4609f, 53.07f, 118f, true, true);
			uParam0->f_28[3] = PED::CREATE_PED(26, iVar0[0], -1090.0902f, 64.3905f, 52.5607f, 238f, true, true);
			uParam0->f_28[4] = PED::CREATE_PED(26, iVar0[0], -1093.736f, 73.8568f, 53.0388f, 319f, true, true);
			iVar2 = 2;
			while (iVar2 <= 4)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[iVar2], true);
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[iVar2], joaat("WEAPON_PISTOL"), -1, false, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[iVar2], true);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[iVar2], true);
				PED::SET_PED_DIES_WHEN_INJURED(uParam0->f_28[iVar2], true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(uParam0->f_28[iVar2], true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0[0], true);
				iVar2++;
			}
			uParam0->f_35[0] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1099.91f, 61.2608f, 52.8124f, 243f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_35[0], true, true, false);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_35[0], 1200, 0);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[5], true);
			uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[6], -1099.91f, 63.2608f, 52.8124f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[2], uParam0->f_35[0], 0, 0.2f, -1.3f, 0.5f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			uParam0->f_35[1] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1102.3347f, 75.7757f, 53.2591f, 293f, true, true, false);
			uParam0->f_35[2] = VEHICLE::CREATE_VEHICLE(iVar0[5], -1103.0232f, 65.6267f, 53.056f, 203f, true, true, false);
			iVar2 = 1;
			while (iVar2 <= 2)
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[iVar2], 5f);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar2]);
				iVar2++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_272(var uParam0)//Position - 0x108B0
{
	int iVar0[2];
	int iVar1;
	char* sVar2;
	int iVar3;
	sVar2 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("IG_KerryMcIntosh");
	iVar0[1] = joaat("A_C_Rottweiler");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650.55585f, -217.06265f, 35.55435f };
			uParam0->f_17[1 /*3*/] = { -601.40985f, -300.3887f, 64.24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[0], -626.87f, -268.85f, 38f, 121f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
			AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "dexy_stay_there", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "price_tag", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "such_a_good", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "this_looks", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "who_would", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar3, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[1], -627.4f, -267.12f, 38.23f, -59.95f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[1], true);
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

int func_273(var uParam0)//Position - 0x10BDE
{
	int iVar0[6];
	int iVar1;
	char* sVar2;
	float fVar3;
	sVar2 = "rcmnigel1b";
	iVar0[0] = joaat("IG_TylerDix");
	iVar0[1] = joaat("A_F_Y_Beach_01");
	iVar0[2] = joaat("S_M_M_Gardener_01");
	iVar0[3] = joaat("speedo");
	iVar0[4] = joaat("comet2");
	iVar0[5] = joaat("prop_nigel_bag_pickup");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -1065.1202f, 366.34378f, 97.59101f };
			uParam0->f_17[1 /*3*/] = { -1020.77454f, 364.75955f, 65.23878f };
			uParam0->f_24 = 40f;
			uParam0->f_27 = 1;
			uParam0->f_48 = "rcmnigel1bnmt_1b";
			func_264(39, 1);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			iLocal_51 = 1;
			break;
		case 1:
			if ((!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48)) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[3], -1010.97f, 359.91f, 70.65f, 331.46f);
				if (__LIB_0__.func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 97, 97);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 13.5f);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 2, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(uParam0->f_35[0], 2, false, true);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_35[0], 2, 0, 1f);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uParam0->f_35[0]);
					return 0;
				}
			}
			if (__LIB_0__.func_121(uParam0->f_35[0]))
			{
				fVar3 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(uParam0->f_35[0], 2);
				if (!VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(uParam0->f_35[0], 2) && fVar3 < 0.8f)
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(uParam0->f_35[0], 2, 0, 1f);
				}
				else
				{
					iLocal_51 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_0__.func_121(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_35[0], sVar2, "idle_speedo", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
					{
						TASK::TASK_VEHICLE_PLAY_ANIM(uParam0->f_35[0], sVar2, "idle_speedo");
						return 0;
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT(sVar2);
						return 0;
					}
				}
			}
			__LIB_20__.func_649(&(uParam0->f_35[1]), iVar0[4], -1018.26f, 357.76f, 70.2f, 339.52f);
			if (__LIB_0__.func_121(uParam0->f_35[1]))
			{
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 27, 27);
			}
			__LIB_11__.func_798(&(uParam0->f_28[0]), iVar0[0], -1054.7f, 355.94f, 68.35f, 23.67f, 26);
			if (__LIB_1__.func_197(uParam0->f_28[0]))
			{
				PED::SET_PED_DIES_IN_WATER(uParam0->f_28[0], false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -1054.7f, 355.94f, 68.35f, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_28[0], 23.67f);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], sVar2, "Swimming_Idle", 8f, -8f, -1, 0, 0f, false, false, false);
			}
			__LIB_11__.func_798(&(uParam0->f_28[1]), iVar0[1], -1058.43f, 362.78f, 69.86f, 130.45f, 26);
			if (__LIB_1__.func_197(uParam0->f_28[1]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 1, 0);
				PED::SET_PED_DIES_IN_WATER(uParam0->f_28[1], false);
				uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(-1059f, 360.976f, 69f, 0f, 0f, -1.08f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, false);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "base_girl", 1000f, -8f, 592, 0, 1000f, 0);
			}
			__LIB_11__.func_798(&(uParam0->f_28[2]), iVar0[2], -1012.57f, 357.48f, 70.62f, -28.55f, 26);
			if (__LIB_1__.func_197(uParam0->f_28[2]))
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[2]);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[2], -1012.57f, 357.48f, 70.62f, false, false, true);
				ENTITY::SET_ENTITY_HEALTH(uParam0->f_28[2], 160, 0);
				if (STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[2], sVar2, "idle_gardener", 1000f, -8f, -1, 270337, 0f, false, false, false);
				}
			}
			__LIB_10__.func_697(&(uParam0->f_41[0]), iVar0[5], -1050.03f, 368.95f, 69.29f, -11.27f);
			if (__LIB_0__.func_121(uParam0->f_41[0]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 0f, 0f, -11.27f, 2, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_41[0], false);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_41[0], true);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(uParam0->f_41[0], false);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_41[0], false);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_48);
			STREAMING::REMOVE_ANIM_DICT(sVar2);
			return 1;
			break;
	}
	return 0;
}

int func_277(var uParam0)//Position - 0x111C9
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	iVar0[0] = joaat("U_M_M_WillyFist");
	iVar0[1] = joaat("A_F_Y_BevHills_03");
	iVar0[2] = joaat("A_F_Y_BevHills_03");
	iVar0[3] = joaat("A_F_Y_BevHills_03");
	iVar0[4] = joaat("A_M_Y_Vinewood_04");
	iVar0[5] = joaat("A_M_Y_Gay_01");
	iVar0[6] = joaat("gauntlet");
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -565.5146f, 269.61392f, 81.020805f };
			uParam0->f_17[1 /*3*/] = { -562.2337f, 306.5382f, 94.13258f };
			uParam0->f_24 = 30f;
			uParam0->f_27 = 1;
			__LIB_25__.func_609(4, 0);
			__LIB_0__.func_135(" SetupScene_NIGEL_1A - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, FALSE)	");
			uParam0->f_48 = "rcmnigel1aig_1";
			uParam0->f_59 = -1;
			func_264(38, 1);
			iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-555.5934f, 285.7738f, 81.1763f, "v_rockclub");
			if (INTERIOR::IS_VALID_INTERIOR(iVar2))
			{
				INTERIOR::REFRESH_INTERIOR(iVar2);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_48);
			iLocal_51 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_48))
			{
				return 0;
			}
			iLocal_51 = 2;
			break;
		case 2:
			__LIB_11__.func_798(&(uParam0->f_28[0]), iVar0[0], -552.66f, 287.75f, 82.18f, 123.75f, 26);
			__LIB_11__.func_798(&(uParam0->f_28[1]), iVar0[1], -553.46f, 287.34f, 82.18f, -65.86f, 26);
			if (__LIB_1__.func_197(uParam0->f_28[1]))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_28[1], false);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 2, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 7, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 1, 0, 0);
			}
			uParam0->f_59 = PED::CREATE_SYNCHRONIZED_SCENE(-552.18f, 285.476f, 81.976f, 0f, 0f, 79.5f, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uParam0->f_59, true);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uParam0->f_59, false);
			if (__LIB_1__.func_197(uParam0->f_28[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], uParam0->f_59, uParam0->f_48, "BASE_02_Willie", 1000f, -8f, 17, 0, 1000f, 0);
			}
			if (__LIB_1__.func_197(uParam0->f_28[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], uParam0->f_59, uParam0->f_48, "BASE_02_GIRL", 1000f, -8f, 17, 0, 1000f, 0);
			}
			__LIB_11__.func_798(&(uParam0->f_28[2]), iVar0[2], -559.94f, 285.99f, 85.38f, -59.06f, 26);
			__LIB_11__.func_798(&(uParam0->f_28[3]), iVar0[3], -558.87f, 289.79f, 85.38f, 162.44f, 26);
			__LIB_11__.func_798(&(uParam0->f_28[4]), iVar0[4], -559f, 286.09f, 85.38f, 65.92f, 26);
			__LIB_11__.func_798(&(uParam0->f_28[5]), iVar0[5], -558.84f, 288.97f, 85.38f, -7.72f, 26);
			if (__LIB_1__.func_197(uParam0->f_28[2]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 2, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 1, 0, 0);
			}
			if (__LIB_1__.func_197(uParam0->f_28[3]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			}
			if (__LIB_1__.func_197(uParam0->f_28[4]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 2, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[4], 8, 0, 0, 0);
			}
			if (__LIB_1__.func_197(uParam0->f_28[5]))
			{
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 3, 0, 3, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[5], 8, 0, 2, 0);
			}
			__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[6], -553.55f, 308.61f, 82.81f, 202.78f);
			if (__LIB_0__.func_121(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 1);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(uParam0->f_35[0], false);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REMOVE_ANIM_DICT(uParam0->f_48);
			return 1;
			break;
	}
	return 0;
}

int func_285(var uParam0)//Position - 0x14CB4
{
	int iVar0[3];
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0[0] = uLocal_52;
	iVar0[1] = uLocal_53;
	iVar0[2] = iLocal_55;
	switch (iLocal_51)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "NMT_1_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_10__.func_717(&(uParam0->f_48), "rcmnigel1", "base_nigel", "base_nigel");
			__LIB_10__.func_717(&uLocal_56, "rcmnigel1", "base_mrs_thornhill", "base_mrs_thornhill");
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
			bVar3 = true;
			if (!__LIB_37__.func_328(&(uParam0->f_28[0]), 64, -1100.5f, 789.8f, 164.34f, 1.82f, "RC: NIGEL", 1))
			{
				bVar3 = false;
			}
			if (!__LIB_37__.func_328(&(uParam0->f_28[1]), 63, -1099.35f, 789.15f, 164.47f, 0f, "RC: MRS THORNHILL", 1))
			{
				bVar3 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iLocal_55, -1077.959f, 793.9361f, 164.6374f, 172.8563f);
				if (__LIB_0__.func_121(uParam0->f_35[0]))
				{
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 65, 0);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 5, false);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[0], "28BNT310");
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 10);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_35[0], false);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_35[0], false);
				}
			}
			if (bVar3)
			{
				iLocal_51 = 3;
			}
			break;
		case 3:
			if (__LIB_0__.func_121(uParam0->f_28[0]) && __LIB_0__.func_121(uParam0->f_28[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
				iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(-1100.5579f, 789.88617f, 163.32849f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iVar2, "rcmnigel1", "base_nigel", 8f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[1], iVar2, "rcmnigel1", "base_mrs_thornhill", 8f, -8f, 0, 0, 1000f, 0);
			}
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			func_264(37, 1);
			return 1;
			break;
	}
	return 0;
}

int func_287(int iParam0)//Position - 0x14FA6
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
	if (!func_288(iParam0))
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

int func_288(int iParam0)//Position - 0x1505F
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
		if (func_289(5))
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

int func_289(int iParam0)//Position - 0x15120
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
			if (func_289(iVar0))
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

void func_299(int iParam0, int iParam1, bool bParam2)//Position - 0x154AF
{
	char* sVar0;
	if (*iParam0 == 43)
	{
		__LIB_0__.func_0(&(iParam0->f_28[1]));
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_69))
	{
		HUD::REMOVE_BLIP(&iLocal_69);
	}
	if (bParam2)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		if (*iParam0 == 38)
		{
			__LIB_25__.func_609(4, 1);
			func_316(iParam0);
			__LIB_0__.func_135(" Script_Cleanup - SET_INTERIOR_CAPPED(INTERIOR_V_ROCKCLUB, TRUE)");
		}
		else if (*iParam0 == 39)
		{
			func_314(iParam0);
		}
		__LIB_32__.func_757(iParam0, 0, 0, 0);
	}
	func_264(*iParam0, 0);
	switch (*iParam0)
	{
		case 43:
			if (iParam1->f_1 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(iParam1->f_1);
			}
			break;
	}
	__LIB_29__.func_794(&(iParam0->f_48));
	if (iLocal_68 != -1)
	{
		__LIB_0__.func_135("SCRIPT TERMINATING: Ending off-mission cutscene request");
		__LIB_29__.func_764(&iLocal_68);
	}
	switch (*iParam0)
	{
		case 37:
			sVar0 = "NIG1A_AMB";
			break;
	}
	__LIB_37__.func_330(sVar0);
	if (bParam2)
	{
		__LIB_37__.func_326(*iParam0);
	}
	__LIB_34__.func_838();
	__LIB_0__.func_135("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_314(var uParam0)//Position - 0x157F4
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		if (__LIB_1__.func_197(uParam0->f_28[1]))
		{
			if (__LIB_4__.func_465(uParam0->f_28[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[1], -1000f, true);
		}
	}
}

void func_316(var uParam0)//Position - 0x15878
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_59))
	{
		if (__LIB_1__.func_197(uParam0->f_28[0]))
		{
			if (__LIB_4__.func_465(uParam0->f_28[0], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[0]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[0], -1000f, true);
		}
		if (__LIB_1__.func_197(uParam0->f_28[1]))
		{
			if (__LIB_4__.func_465(uParam0->f_28[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")))
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
			}
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_28[1], -1000f, true);
		}
	}
}

