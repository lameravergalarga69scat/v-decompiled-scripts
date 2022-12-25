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
	int iLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int* iLocal_39 = NULL;
	var uLocal_40 = 3;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1092616192;
	var uLocal_47 = 1101004800;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 3;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84[2] = { 0, 0 };
	int iLocal_85[2] = { 0, 0 };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = -1;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1000;
	var uLocal_104 = 1000;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
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
	iLocal_20 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_79 = -1;
	sLocal_91 = "PMDL_OBJ";
	sLocal_92 = "PMDL_LOC";
	sLocal_93 = "PMDL_BCK";
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_38__::func_753(2);
		func_114();
	}
	iLocal_36 = func_112();
	while (true)
	{
		switch (iLocal_37)
		{
			case 0:
				if (!iLocal_70)
				{
					func_107();
				}
				else
				{
					func_106();
				}
				if (bLocal_69)
				{
					iLocal_71 = 1;
					iLocal_37 = 1;
				}
				break;
			case 1:
				if (!func_105())
				{
					switch (iLocal_38)
					{
						case 0:
							func_102();
							break;
						case 1:
							if (iLocal_36 == 5 || iLocal_36 == 6)
							{
								func_66();
							}
							else
							{
								func_65();
							}
							break;
						case 2:
							func_9();
							if (iLocal_36 < 3)
							{
								func_7();
							}
							else if (iLocal_36 > 6)
							{
								func_7();
								func_2();
							}
							break;
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x153
{
	__LIB_38__::func_753(2);
	func_114();
}

void func_2()//Position - 0x164
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
		{
			iVar0 = 200;
			iVar1 = (ENTITY::GET_ENTITY_HEALTH(iLocal_86) - 800);
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_86))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_86, (ENTITY::GET_ENTITY_HEALTH(iLocal_86) - 5), 0);
			}
			if (iVar1 <= 0)
			{
				iLocal_38 = 4;
			}
			else if (iVar1 < 75)
			{
				__LIB_32__::func_74(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				__LIB_32__::func_74(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_38 = 4;
		}
	}
	else
	{
		iLocal_38 = 4;
	}
}

void func_7()//Position - 0x4EE
{
	int iVar0;
	iVar0 = (iLocal_74 - MISC::GET_GAME_TIMER());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_78)
	{
		__LIB_1__::func_350(iVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		__LIB_1__::func_350(iVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iLocal_75)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 10000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 9000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 8000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 7000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 6000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 5:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 5000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 6:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 4500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 7:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 4000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 8:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 3500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 9:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 3000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 10:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 2500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 11:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 2000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 12:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 1500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 13:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 1000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 14:
			if (MISC::GET_GAME_TIMER() >= (iLocal_74 - 500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 15:
			if (MISC::GET_GAME_TIMER() >= iLocal_74)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_75++;
			}
			break;
		case 16:
			break;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_74)
	{
		iLocal_38 = 3;
	}
}

void func_9()//Position - 0x93B
{
	int iVar0;
	int iVar1;
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_85)
		{
			if (!iLocal_72)
			{
				if (!PED::IS_PED_INJURED(iLocal_85[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_64, 50f, 50f, 50f, false, true, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						iLocal_72 = 1;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_85[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_85[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_85[iVar0], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_85[iVar0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_87))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_87);
				}
			}
			iVar0++;
		}
	}
	if (__LIB_16__::func_34(&iLocal_39, Local_65, Global_22, 1, iLocal_86, sLocal_92, "", sLocal_93, 1, 0, 1, -1))
	{
		__LIB_0__::func_213(iLocal_86, 10.5f, 2, 1056964608, 0, 1, 0);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_86, false);
		__LIB_13__::func_815(&iLocal_39, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_84)
	{
		if (!PED::IS_PED_INJURED(iLocal_84[iVar1]))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_89[iVar1]))
			{
				uLocal_89[iVar1] = __LIB_0__::func_666(iLocal_84[iVar1], 1, 145);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_108);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_108);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_84[iVar1], iLocal_108);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_108);
				PED::SET_PED_KEEP_TASK(iLocal_84[iVar1], true);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_84[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_89[iVar1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_89[iVar1]));
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_84[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_84[iVar1], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_84[iVar1]));
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_89[iVar1]))
		{
			HUD::REMOVE_BLIP(&(uLocal_89[iVar1]));
		}
		iVar1++;
	}
}

void func_13()//Position - 0xC6A
{
	__LIB_38__::func_753(1);
	func_114();
}

void func_65()//Position - 0x38B9
{
	int iVar0;
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_86, false))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_90))
		{
			HUD::REMOVE_BLIP(&iLocal_90);
		}
		if (iLocal_36 <= 2)
		{
			iLocal_74 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + MISC::GET_GAME_TIMER());
			iLocal_78 = (iLocal_74 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_36 > 6)
		{
			iLocal_74 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_76) + iLocal_77));
			iLocal_74 = (iLocal_74 + MISC::GET_GAME_TIMER());
			iLocal_78 = (iLocal_74 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			iLocal_87 = VEHICLE::CREATE_VEHICLE(iLocal_83, Local_66, fLocal_68, true, true, false);
			iLocal_85[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_87, 6, iLocal_81, -1, true, true);
			iLocal_85[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_87, 6, iLocal_81, 0, true, true);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &iLocal_106);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_106, joaat("PLAYER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_85[0], 39, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_85[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_85)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_85[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
				PED::SET_PED_SEEING_RANGE(iLocal_85[iVar0], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_85[iVar0], iLocal_106);
				iVar0++;
			}
		}
		iLocal_38 = 2;
	}
}

void func_66()//Position - 0x39EB
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, false))
	{
		if (func_101() || PED::IS_PED_INJURED(iLocal_84[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_84)
			{
				if (!PED::IS_PED_INJURED(iLocal_84[iVar0]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_89[iVar0]))
					{
						uLocal_89[iVar0] = __LIB_0__::func_666(iLocal_84[iVar0], 1, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_84[iVar0], 1, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_108);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_108);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_84[iVar0], iLocal_108);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_108);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_89[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_89[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_73)
		{
			if (!PED::IS_PED_INJURED(iLocal_84[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_84[0], 50f, 50f, 50f, false, true, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_84[0], iLocal_86, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, true);
					iLocal_73 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_86, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_90))
			{
				HUD::REMOVE_BLIP(&iLocal_90);
			}
			__LIB_0__::func_345(&uLocal_94, 0, 0);
			iLocal_38 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_86, -1, false) || PED::IS_PED_INJURED(iLocal_84[0]))
		{
			__LIB_0__::func_345(&uLocal_94, 0, 0);
		}
		else
		{
			func_67();
		}
	}
}

void func_67()//Position - 0x3B59
{
	if (!PED::IS_PED_INJURED(iLocal_84[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_86, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_84[0], iLocal_86, false))
		{
			__LIB_17__::func_71(&uLocal_94, iLocal_86, 0, 0, 1, 1, 1);
		}
	}
}

int func_101()//Position - 0x4DA7
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, false))
		{
			if ((((((ENTITY::GET_ENTITY_HEALTH(iLocal_86) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_86) < 200f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_86)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 1, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 5, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 4, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_102()//Position - 0x4E5F
{
	int iVar0;
	int iVar1;
	iLocal_86 = func_104(0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
	{
		iLocal_86 = VEHICLE::CREATE_VEHICLE(iLocal_82, Local_64, fLocal_67, true, true, false);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_86, iVar0, true);
			iVar0++;
		}
		if (iLocal_79 != -1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_86, iLocal_79, false);
		}
	}
	VEHICLE::SET_VEHICLE_IS_WANTED(iLocal_86, true);
	iLocal_90 = __LIB_0__::func_639(iLocal_86, 0, 0);
	if (iLocal_36 != 5 && iLocal_36 != 6)
	{
		if (iLocal_36 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_86, false, false, false, false, true, false, false, false);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_86, 0, false, 0);
		}
		__LIB_0__::func_229(sLocal_91, 7500, 1);
	}
	else
	{
		iLocal_84[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 26, iLocal_80, -1, true, true);
		iLocal_84[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 26, iLocal_80, 0, true, true);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &iLocal_107);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_107, joaat("PLAYER"));
		iVar1 = 0;
		while (iVar1 < iLocal_84)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_84[iVar1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_84[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_84[iVar1], iLocal_107);
			iVar1++;
		}
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_84[0], iLocal_86, 25f, 786599);
		__LIB_0__::func_229("PMDL_REC", 7500, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		iLocal_88 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	iLocal_38 = 1;
}

int func_104(int iParam0)//Position - 0x4FC5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112096.f_222[iParam0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112096.f_222[iParam0], true, true);
		return Global_112096.f_222[iParam0];
	}
	return 0;
}

int func_105()//Position - 0x4FFD
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_INJURED(iLocal_84[0]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_89[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_89[0]));
		}
	}
	return 0;
}

void func_106()//Position - 0x5065
{
	STREAMING::REQUEST_MODEL(iLocal_82);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);
	if (iLocal_36 >= 3 && iLocal_36 <= 4)
	{
		STREAMING::REQUEST_MODEL(iLocal_81);
		STREAMING::REQUEST_MODEL(iLocal_83);
	}
	else if (iLocal_36 == 5 || iLocal_36 == 6)
	{
		STREAMING::REQUEST_MODEL(iLocal_80);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), true);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_82) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (iLocal_36 >= 3 && iLocal_36 <= 4)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_81) && STREAMING::HAS_MODEL_LOADED(iLocal_83))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 == 5 || iLocal_36 == 6)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_80))
			{
				bLocal_69 = true;
			}
		}
		else if (iLocal_36 > 6)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", false, -1))
			{
				bLocal_69 = true;
			}
		}
		else
		{
			bLocal_69 = true;
		}
	}
}

void func_107()//Position - 0x513F
{
	float fVar0;
	Local_64 = { __LIB_42__::func_535(__LIB_38__::func_751(), iLocal_36) };
	fLocal_67 = __LIB_38__::func_750(__LIB_38__::func_751(), iLocal_36);
	if (iLocal_36 > 6)
	{
		sLocal_91 = "PMDL_TRUCK";
		sLocal_92 = "PMDL_BTIM";
		sLocal_93 = "PMDL_BCKT";
		iLocal_82 = joaat("benson");
		iLocal_79 = 2;
	}
	if (__LIB_38__::func_751() == 10)
	{
		Local_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		iLocal_82 = joaat("pony2");
		if (iLocal_36 == 0)
		{
			iLocal_76 = 2;
			iLocal_77 = 15;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 1)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 2)
		{
			iLocal_76 = 1;
			iLocal_77 = 30;
			sLocal_92 = "PMDL_TIM";
		}
		else if (iLocal_36 == 3)
		{
			Local_66 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_68 = 176.4887f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_36 == 4)
		{
			Local_66 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_68 = 45.3499f;
			iLocal_83 = joaat("police4");
			iLocal_81 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_36 >= 5)
		{
			iLocal_80 = joaat("G_M_Y_SalvaGoon_02");
		}
	}
	else if (__LIB_38__::func_751() == 14)
	{
		Local_65 = { -2169.8284f, 4277.365f, 47.9568f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_65, true);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (__LIB_38__::func_751() == 13)
	{
		Local_65 = { -323.356f, 6264.4307f, 30.4463f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_65, true);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (__LIB_38__::func_751() == 12)
	{
		Local_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_65, true);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (__LIB_38__::func_751() == 11)
	{
		Local_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_64, Local_65, true);
		iLocal_77 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_75 = 0;
	iLocal_70 = 1;
}

int func_112()//Position - 0x581F
{
	return __LIB_38__::func_752(Global_112096.f_20, Global_112096.f_29);
}

void func_114()//Position - 0x593F
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (iLocal_71)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_88, false))
		{
			__LIB_17__::func_200(iLocal_88, 0, 145);
		}
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		__LIB_0__::func_345(&uLocal_94, 0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

