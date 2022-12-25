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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<31> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 16;
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
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	int iLocal_239 = 0;
	char cLocal_240[16] = "";
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	struct<3> Local_243 = { 0, 0, 0 } ;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_60 = 1;
	iLocal_65 = -1;
	iLocal_69 = __LIB_39__::func_766();
	iLocal_70 = __LIB_12__::func_850();
	StringCopy(&cLocal_240, "TAXI_HAIL", 16);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_145();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	Global_113386.f_10049.f_120 = 1;
	while (true)
	{
		switch (iLocal_51)
		{
			case 0:
				if (__LIB_39__::func_762())
				{
					iLocal_51 = 1;
				}
				else
				{
					SYSTEM::WAIT(500);
				}
				break;
			case 1:
				if (__LIB_39__::func_762())
				{
					Local_243 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					func_112();
					if (func_111())
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
						func_110();
						if (!func_108())
						{
							func_65();
							func_31();
							func_15();
						}
					}
					else
					{
						func_4(0);
						iLocal_51 = 1;
						func_1();
						SYSTEM::WAIT(500);
					}
				}
				else
				{
					func_4(1);
					iLocal_51 = 0;
				}
				break;
			case 2:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_239))
				{
					func_4(1);
					iLocal_54 = 3;
					iLocal_51 = 0;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x16C
{
	if (!func_3())
	{
		if (MISC::ARE_STRINGS_EQUAL("NULL", &Global_112442))
		{
			__LIB_0__::func_424(0);
		}
		else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&Global_112442)) == 0)
		{
			__LIB_0__::func_424(0);
		}
	}
}

int func_3()//Position - 0x1D2
{
	if (!Global_112435)
	{
		return 0;
	}
	if (Global_112436)
	{
		return 0;
	}
	return 1;
}

void func_4(bool bParam0)//Position - 0x1F2
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	func_13();
	func_10();
	func_5();
	iLocal_60 = 1;
	iLocal_58 = 0;
	iLocal_52 = 0;
	iLocal_53 = 0;
	iLocal_55 = 0;
	iLocal_54 = 0;
	iLocal_66 = 0;
	if (bParam0)
	{
		iLocal_51 = 0;
	}
}

void func_5()//Position - 0x22D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FP_HAIL_TAXI", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FUCK_U", &cLocal_240, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "FORGET_IT", &cLocal_240, -2f);
		}
		if (iLocal_65 != -1)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
		}
		if (iLocal_62 == 1)
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
			iLocal_62 = 0;
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_240);
	if (iLocal_65 != -1)
	{
		__LIB_3__::func_422(&iLocal_65);
	}
	if (__LIB_0__::func_1("TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */))
	{
		iLocal_64++;
		if (iLocal_64 == 3)
		{
			Global_113386.f_10049.f_120 = 1;
		}
		HUD::CLEAR_HELP(true);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::SET_BLIP_ROUTE(iLocal_63, false);
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (iLocal_58)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_240, "Aknowledge_R", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112418, "Aknowledge_R", &cLocal_240, -4f);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_240, "Aknowledge_L", 3))
			{
				ENTITY::STOP_ENTITY_ANIM(Global_112418, "Aknowledge_L", &cLocal_240, -4f);
			}
		}
	}
	if (iLocal_54 == 0)
	{
		__LIB_39__::func_764();
	}
	iLocal_245 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	Global_112454 = -1;
	iLocal_55 = 0;
}

void func_10()//Position - 0x6CF
{
	if (iLocal_54 == 1)
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		__LIB_39__::func_768();
	}
	else if (iLocal_54 == 2)
	{
		if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
		}
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
		__LIB_39__::func_768();
	}
	__LIB_39__::func_764();
	if (__LIB_0__::func_1("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
	{
		HUD::CLEAR_HELP(true);
	}
	iLocal_66 = 0;
	iLocal_54 = 0;
}

void func_13()//Position - 0x7E9
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_1))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_56.f_1, false))
		{
			if (Local_56.f_1 != Global_112418)
			{
				if (!PED::IS_PED_INJURED(Local_56.f_1))
				{
					PED::SET_PED_CONFIG_FLAG(Local_56.f_1, 251, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_56.f_1, false);
					if (!PED::IS_PED_FLEEING(Local_56.f_1) && !PED::IS_PED_IN_COMBAT(Local_56.f_1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_56.f_1, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_0, false))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_1, Local_56.f_0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if ((!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 1, false) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 2, false)) || !VEHICLE::IS_VEHICLE_SEAT_FREE(Local_56.f_0, 0, false))
										{
											TASK::TASK_PAUSE(0, 2000);
										}
										else
										{
											TASK::TASK_PAUSE(0, 500);
										}
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_56.f_0, 12f, 790699);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(Local_56.f_1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									else
									{
										TASK::TASK_SMART_FLEE_PED(Local_56.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
									}
								}
								else
								{
									TASK::TASK_SMART_FLEE_PED(Local_56.f_1, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
								}
							}
						}
						else
						{
							TASK::TASK_WANDER_STANDARD(Local_56.f_1, 40000f, 0);
						}
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_56.f_1));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_56.f_1));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_56.f_0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_56.f_0, false))
		{
			if (Local_56.f_0 != Global_112417)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_56);
			}
		}
	}
	if (iLocal_53 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
	}
	Local_56.f_0 = 0;
	Local_56.f_1 = 0;
	Local_56.f_2 = 0;
	Local_56.f_3 = 0;
	Local_56.f_5 = 0f;
	Local_56.f_6 = 0f;
	Local_56.f_7 = 45f;
	Local_56.f_8 = 0;
	Local_56.f_10 = 0;
	Local_56.f_9 = 0;
	Local_56.f_11 = { 0f, 0f, 0f };
	Local_56.f_14 = { 0f, 0f, 0f };
	Local_56.f_17 = { 0f, 0f, 0f };
	Local_56.f_20 = { 0f, 0f, 0f };
	Local_56.f_23 = { 0f, 0f, 0f };
	Local_56.f_26 = { 0f, 0f, 0f };
	Local_56.f_29 = 1076367531;
	Local_56.f_30 = __LIB_0__::func_684();
	iLocal_53 = 0;
}

void func_15()//Position - 0xA13
{
	if (iLocal_54 == 0)
	{
		func_27();
	}
	else if (iLocal_54 == 1)
	{
		func_23();
	}
	else if (iLocal_54 == 2)
	{
		func_16();
	}
	else if (iLocal_54 == 3)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_54 = 0;
		}
	}
}

void func_16()//Position - 0xA58
{
	if (__LIB_39__::func_765(&Global_112417, iLocal_70, iLocal_69))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417))
			{
				__LIB_0__::func_189();
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, 1, false) == PLAYER::PLAYER_PED_ID())
				{
					iLocal_246 = 1;
				}
				else
				{
					iLocal_246 = 2;
				}
				__LIB_42__::func_697(&Global_112417, iLocal_246);
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
						}
					}
				}
				func_13();
				func_5();
				if (iLocal_59)
				{
					if (__LIB_0__::func_1("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_59 = 0;
				}
				__LIB_39__::func_763();
				func_17();
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
				SCRIPT::REQUEST_SCRIPT("taxiService");
				if (SCRIPT::HAS_SCRIPT_LOADED("taxiService"))
				{
					iLocal_239 = SYSTEM::START_NEW_SCRIPT("taxiService", 1828);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("taxiService");
					iLocal_51 = 2;
				}
			}
		}
		else
		{
			func_4(1);
		}
	}
	else
	{
		func_10();
	}
}

void func_17()//Position - 0xB6B
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 1.5f, 1.5f, -1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_ON_FOOT(iVar0))
			{
				TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
		}
	}
}

void func_23()//Position - 0xE87
{
	if (__LIB_39__::func_765(&Global_112417, iLocal_70, iLocal_69))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417))
			{
				iLocal_54 = 2;
			}
			__LIB_0__::func_189();
		}
		else
		{
			func_24();
		}
	}
	else
	{
		func_10();
	}
}

void func_24()//Position - 0xED2
{
	int iVar0;
	if (func_25(&Global_112417))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				__LIB_0__::func_189();
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
						{
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
						}
					}
				}
			}
			else
			{
				iLocal_54 = 0;
			}
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	else
	{
		iLocal_54 = 0;
	}
}

int func_25(int iParam0)//Position - 0xF61
{
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam0, 5f, 5f, 2f, false, true, 0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SPEED(*iParam0) > 0.5f)
	{
		return 0;
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*iParam0) != INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!func_26(*iParam0))
	{
		return 0;
	}
	return 1;
}

int func_26(int iParam0)//Position - 0xFCC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90f))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0xFF1
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_244))
	{
		if (__LIB_39__::func_765(&iLocal_244, iLocal_70, iLocal_69))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				func_29();
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_244))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, -1, false);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_244, 1, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, 1, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_246 = 1;
						}
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_244, 2, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, 2, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_246 = 2;
						}
					}
					if (iLocal_55 == 4 || iLocal_55 == 2)
					{
						if (iLocal_244 != Global_112417)
						{
							func_5();
						}
					}
					__LIB_0__::func_189();
					if (__LIB_42__::func_700(&iLocal_244, &iVar0, 0))
					{
						iLocal_244 = 0;
						iLocal_54 = 2;
					}
				}
				else
				{
					func_10();
				}
			}
		}
	}
}

void func_29()//Position - 0x120C
{
	int iVar0;
	int iVar1;
	if (func_25(&iLocal_244))
	{
		if (!iLocal_59)
		{
			if (iLocal_244 == Global_112417 && iLocal_55 == 4)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					if (!__LIB_0__::func_1("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
					{
						if (Global_113386.f_10049.f_121 < 5)
						{
							__LIB_0__::func_151("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */, -1);
							Global_113386.f_10049.f_121++;
						}
						iLocal_59 = 1;
					}
				}
			}
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == iLocal_244)
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_244, -1, false);
				if (iLocal_55 == 4 || iLocal_55 == 2)
				{
					if (iLocal_244 != Global_112417)
					{
						func_5();
					}
				}
				__LIB_0__::func_189();
				if (__LIB_42__::func_700(&iLocal_244, &iVar1, 0))
				{
					if (iLocal_58)
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
						iLocal_58 = 0;
					}
					if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
						{
							if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 10000);
							}
						}
					}
					iLocal_59 = 0;
					iLocal_54 = 1;
				}
			}
		}
	}
	else if (__LIB_0__::func_1("TX_H02" /* GXT: Press ~INPUT_ENTER~ to enter a taxi as a passenger. Hold ~INPUT_ENTER~ to jack a taxi. */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_31()//Position - 0x135A
{
	if (iLocal_55 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
		{
			iLocal_55 = 1;
		}
	}
	else if (iLocal_55 == 1)
	{
		func_58();
	}
	else if (iLocal_55 == 2)
	{
		func_49();
	}
	else if (iLocal_55 == 3)
	{
		func_43();
	}
	else if (iLocal_55 == 4)
	{
		func_32();
	}
}

void func_32()//Position - 0x13A9
{
	if (func_42(&Global_112417, &Global_112418, iLocal_70, iLocal_69))
	{
		if (!func_36())
		{
			if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
			}
			PED::SET_PED_CONFIG_FLAG(Global_112418, 251, true);
			func_33();
			if (HUD::DOES_BLIP_EXIST(iLocal_63))
			{
				HUD::SET_BLIP_FLASH_TIMER(iLocal_63, 10000);
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_33()//Position - 0x141D
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (iLocal_58)
		{
			if (func_34())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
		}
	}
}

int func_34()//Position - 0x143D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	if (((iVar0 > 64 || iVar0 < -64) || iVar1 > 64) || iVar1 < -64)
	{
		return 1;
	}
	return 0;
}

int func_36()//Position - 0x1557
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (iLocal_55 == 4)
	{
		if (Global_112454 == -1 || Global_112454 == 0)
		{
			Global_112454 = MISC::GET_GAME_TIMER();
		}
		else if (__LIB_14__::func_684(Global_112454, 30000))
		{
			if (iLocal_54 == 0 || iLocal_54 == 3)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
				{
					return 1;
				}
			}
		}
	}
	if (__LIB_0__::func_695(Global_112417))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_112417, false) };
		if (iLocal_55 == 4)
		{
			if (!__LIB_1__::func_504(Local_243, Var0, 75f))
			{
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112417, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
		{
			return 1;
		}
		if (__LIB_1__::func_504(Local_243, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Global_112417) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Global_112417))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	if (__LIB_39__::func_767(Global_112418))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_112418, PLAYER::PLAYER_PED_ID(), true))
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

int func_42(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x1794
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (!PED::IS_PED_INJURED(*uParam1))
				{
					if (!PED::IS_PED_FLEEING(*uParam1))
					{
						if (!PED::IS_PED_IN_COMBAT(*uParam1, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(*uParam1, *uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(*uParam0) == iParam2)
								{
									if (PED::IS_PED_MODEL(*uParam1, iParam3))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_43()//Position - 0x1807
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
	{
		return;
	}
	else if (__LIB_14__::func_684(iLocal_67, 3000))
	{
		STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
		if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
		{
			if (func_44())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 4f, -2f, -1, 48, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 4f, -2f, -1, 48, 0f, false, false, false);
				}
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 1)
			{
				if (!Global_44237)
				{
					iLocal_57 = 1;
				}
			}
			iLocal_67 = MISC::GET_GAME_TIMER();
			iLocal_68 = MISC::GET_GAME_TIMER();
			if (iLocal_62 == 1)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
				iLocal_62 = 0;
			}
			if (iLocal_65 != -1)
			{
				__LIB_3__::func_422(&iLocal_65);
			}
			iLocal_55 = 0;
		}
	}
}

int func_44()//Position - 0x18F7
{
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!Global_44237 && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 0;
	}
	if (__LIB_0__::func_77(0))
	{
		return 0;
	}
	if (__LIB_0__::func_877())
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (__LIB_0__::func_193())
	{
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

void func_49()//Position - 0x1A2F
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (func_42(&Global_112417, &Global_112418, iLocal_70, iLocal_69))
	{
		bVar0 = false;
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 23 /*INPUT_ENTER*/))
		{
			bVar0 = true;
		}
		if (__LIB_14__::func_684(iLocal_67, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
			{
				if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_62 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_62 = 0;
						}
						bVar0 = true;
					}
				}
			}
		}
		if (bVar0)
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) < 8)
				{
					if (!__LIB_39__::func_772(0, 0))
					{
						bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL", 34);
						if (bVar1)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
					}
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
				if (func_51(Global_112417))
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_240, "Aknowledge_R", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, &cLocal_240, "Aknowledge_L", 8f, -4f, -1, 16785456, 0f, false, false, false);
				}
				TASK::TASK_VEHICLE_MISSION(0, Global_112417, Global_112417, 22, 12f, 262275, 3f, 3f, true);
				TASK::TASK_VEHICLE_MISSION(0, Global_112417, Global_112417, 5, 12f, 262275, 3f, 3f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(Global_112418, iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				func_50();
				iLocal_55 = 4;
			}
		}
	}
	else
	{
		func_5();
	}
}

void func_50()//Position - 0x1C13
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::SET_BLIP_ROUTE(iLocal_63, false);
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (__LIB_0__::func_695(Global_112417))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			iLocal_63 = HUD::ADD_BLIP_FOR_ENTITY(Global_112417);
			HUD::SET_BLIP_SPRITE(iLocal_63, 198);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_63, "TXM_BLIP" /* GXT: Taxi */);
			HUD::SET_BLIP_FLASHES(iLocal_63, true);
			HUD::SET_BLIP_FLASH_TIMER(iLocal_63, 10000);
		}
	}
}

int func_51(int iParam0)//Position - 0x1C71
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		Var3 = { Var1 - Var0 };
		Var4 = { Var2 - Var0 };
		if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1) < 90f)
		{
			return 1;
		}
	}
	return 0;
}

void func_58()//Position - 0x2011
{
	int iVar0;
	func_64();
	func_33();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
	{
		if (__LIB_39__::func_765(&iLocal_245, iLocal_70, iLocal_69))
		{
			if (func_44())
			{
				STREAMING::REQUEST_ANIM_DICT(&cLocal_240);
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_240))
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!func_63(&iLocal_245))
						{
							if (!VEHICLE::IS_TAXI_LIGHT_ON(iLocal_245))
							{
								VEHICLE::SET_TAXI_LIGHTS(iLocal_245, true);
							}
						}
						if (iLocal_65 == -1)
						{
							__LIB_7__::func_954(&iLocal_65, 0, "TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */, 1, 0, 0, 0);
						}
						if (__LIB_3__::func_113(iLocal_65, 1))
						{
							if (__LIB_0__::func_1("TXM_H01" /* GXT: Press ~INPUT_CONTEXT~ to hail a taxi. */))
							{
								HUD::CLEAR_HELP(true);
							}
							if (iLocal_62 == 0)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
								iLocal_62 = 1;
							}
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_245, 5000, 0, 2);
							func_60();
							func_59();
							iLocal_67 = MISC::GET_GAME_TIMER();
							__LIB_3__::func_422(&iLocal_65);
							if (func_63(&iLocal_245))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_245, false))
								{
									VEHICLE::SET_TAXI_LIGHTS(iLocal_245, false);
								}
								iLocal_58 = 0;
								iLocal_55 = 3;
							}
							else
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_245, -1, false);
								if (__LIB_42__::func_700(&iLocal_245, &iVar0, 0))
								{
									iLocal_245 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112417, 5000, 0, 2);
									Global_112454 = MISC::GET_GAME_TIMER();
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
									{
										if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
										{
											CAM::SET_GAMEPLAY_VEHICLE_HINT(Global_112417, 0f, 0f, 0f, true, 4000, 2000, 2000);
											iLocal_58 = 1;
										}
									}
									Global_113386.f_10049.f_120 = 1;
									iLocal_55 = 2;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_5();
		}
	}
	else
	{
		func_5();
	}
}

void func_59()//Position - 0x21C6
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
}

void func_60()//Position - 0x2209
{
	int iVar0;
	bool bVar1;
	struct<20> Var2;
	struct<22> Var3;
	int iVar4;
	int iVar5;
	bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (!Global_44237)
	{
		Var2.f_4 = 1065353216;
		Var2.f_5 = 1065353216;
		Var2.f_9 = 1065353216;
		Var2.f_10 = 1065353216;
		Var2.f_14 = 1065353216;
		Var2.f_15 = 1065353216;
		Var2.f_17 = 1040187392;
		Var2.f_18 = 1040187392;
		Var2.f_19 = -1;
		Var3.f_4 = 1065353216;
		Var3.f_5 = 1065353216;
		Var3.f_9 = 1065353216;
		Var3.f_10 = 1065353216;
		Var3.f_14 = 1065353216;
		Var3.f_15 = 1065353216;
		Var3.f_17 = 1040187392;
		Var3.f_18 = 1040187392;
		Var3.f_19 = -1;
		iVar4 = 0;
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			Var3.f_0 = 1;
			Var3.f_2 = "FP_HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = MISC::GET_HASH_KEY("UpperbodyAndIk_filter");
			iVar4 += 16;
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
			Var3.f_21 = 1024;
		}
		else
		{
			Var3.f_0 = 1;
			Var3.f_2 = "HAIL_TAXI";
			Var3.f_1 = "TAXI_HAIL";
			Var3.f_3 = 0f;
			Var3.f_4 = 1f;
			Var3.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
			iVar4 += 32;
			iVar4 += 8192;
			Var3.f_20 = iVar4;
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar5, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (MISC::ARE_STRINGS_EQUAL(Var3.f_2, "FP_HAIL_TAXI") && iVar5 == joaat("WEAPON_PETROLCAN")))
		{
			if (iVar5 != joaat("WEAPON_PETROLCAN") || !MISC::ARE_STRINGS_EQUAL(Var3.f_2, "FP_HAIL_TAXI"))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, true);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SWAP_WEAPON(0, false);
			TASK::TASK_SCRIPTED_ANIMATION(0, &Var3, &Var2, &Var2, 0.25f, 0.25f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var3, &Var2, &Var2, 0.25f, 0.25f);
		}
	}
	else
	{
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "TAXI_HAIL_DRUNK", 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

int func_63(int iParam0)//Position - 0x262C
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 1, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, __LIB_0__::func_495()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 2, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 2, false);
		if (!iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (!PED::IS_PED_GROUP_MEMBER(iVar0, __LIB_0__::func_495()))
			{
				if (VEHICLE::IS_TAXI_LIGHT_ON(*iParam0))
				{
					VEHICLE::SET_TAXI_LIGHTS(*iParam0, false);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_64()//Position - 0x26C3
{
	bool bVar0;
	if (iLocal_57)
	{
		if (__LIB_14__::func_684(iLocal_68, 1000))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FUCK_U", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FORGET_IT", 3))
					{
						if (!Global_44237)
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							}
							__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "TAXI_DRIVES_PAST", 24);
							if (!bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
							}
						}
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 113, false);
						if (iLocal_62 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							iLocal_62 = 0;
						}
						iLocal_57 = 0;
					}
				}
			}
		}
	}
}

void func_65()//Position - 0x27AD
{
	if (iLocal_53 != 0)
	{
		if (func_107())
		{
			func_13();
		}
	}
	if (iLocal_53 == 0)
	{
	}
	else if (iLocal_53 == 1)
	{
		func_99();
	}
	else if (iLocal_53 == 2)
	{
		func_74();
	}
	else if (iLocal_53 == 3)
	{
		func_66();
	}
}

void func_66()//Position - 0x27F3
{
	if (func_67())
	{
		if (iLocal_54 == 0 && iLocal_55 != 4)
		{
			func_5();
			if (__LIB_42__::func_700(&Local_56, &(Local_56.f_1), 0))
			{
				Global_112454 = 0;
				if (__LIB_0__::func_695(Global_112417))
				{
					VEHICLE::START_VEHICLE_HORN(Global_112417, 2500, MISC::GET_HASH_KEY("NORMAL"), false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
				{
					if (!PED::IS_PED_INJURED(Global_112418))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_112418, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_112418, 3000, 0, 2);
					}
				}
				func_50();
				iLocal_55 = 4;
				func_13();
			}
			else
			{
				func_13();
			}
		}
	}
}

int func_67()//Position - 0x2893
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, false) };
	if (!Local_56.f_2)
	{
		if (!Local_56.f_3)
		{
			if (func_68(Var0, Local_56.f_14, Local_56.f_6, &(Local_56.f_17), &(Local_56.f_6)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_56.f_1, false))
				{
					PED::SET_DRIVER_ABILITY(Local_56.f_1, 0.5f);
					if (Local_56.f_4)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_56.f_1, Local_56.f_0, Local_56.f_17, 10f, 0, ENTITY::GET_ENTITY_MODEL(Local_56.f_0), Local_56.f_29, 5f, MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_56.f_17, true));
						Local_56.f_4 = 0;
					}
					else
					{
						TASK::TASK_VEHICLE_PARK(Local_56.f_1, Local_56.f_0, Local_56.f_17, Local_56.f_6, 3, 90f, true);
					}
				}
				Local_56.f_2 = 1;
			}
		}
		else
		{
			PED::SET_DRIVER_ABILITY(Local_56.f_1, 0.5f);
			Local_56.f_17 = { Var0 };
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 6, 15000);
			Local_56.f_2 = 1;
		}
	}
	else if (!__LIB_39__::func_758(Local_56.f_1, joaat("SCRIPT_TASK_VEHICLE_PARK")))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(Local_56.f_0))
		{
			TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 1, 1000000);
			return 1;
		}
	}
	else
	{
		if (__LIB_1__::func_504(Var0, Local_243, 5f))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Local_56.f_0) || VEHICLE::IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Local_56.f_0))
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(Local_56.f_1, Local_56.f_0, 1, 1000000);
				return 1;
			}
		}
		if (!Local_56.f_3)
		{
			if (!__LIB_1__::func_504(Var0, Local_56.f_17, 10f))
			{
				if (__LIB_1__::func_504(Var0, Local_243, 5f))
				{
					Local_56.f_14 = { Local_243 };
					Local_56.f_3 = 1;
					Local_56.f_2 = 0;
				}
			}
		}
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x2A2B
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	iVar4 = 1;
	if (!__LIB_1__::func_509(Param1))
	{
		iVar4 = 9;
	}
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param1, 1, iVar4, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &Var0);
		if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 0, &Var1) && PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, 1, &Var2))
		{
			Var5 = { Var1 - Var0 };
			Var6 = { -Var5.f_1, Var5.f_0, 0f };
			Var7 = { Param0 - Param1 };
			fVar8 = __LIB_0__::func_158(Var6, Var7);
			if (fVar8 < 0f)
			{
				*uParam3 = { Var1 };
				*uParam4 = uParam2;
				if (func_70(uParam3, Var0))
				{
					Local_56.f_4 = 1;
				}
			}
			else
			{
				*uParam3 = { Var2 };
				*uParam4 = (*uParam4 + 180f);
				*uParam4 = __LIB_1__::func_9(*uParam4, 0f, 360f);
				if (func_70(uParam3, Var0))
				{
					Local_56.f_4 = 1;
				}
			}
			return 1;
		}
		else if (PATHFIND::GET_POSITION_BY_SIDE_OF_ROAD(Var0, -1, &Var1))
		{
			*uParam3 = { Var1 };
			*uParam4 = uParam2;
			return 1;
		}
	}
	return 0;
}

int func_70(var uParam0, struct<3> Param1)//Position - 0x2B8A
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, uParam0->f_1, 1000f, &uVar0, false, false))
	{
		*uParam0 = { Param1 };
		return 0;
	}
	Var1 = { *uParam0, uParam0->f_1, uVar0 };
	if (func_71(Var1, Param1))
	{
		Var2 = { Param1 - Var1 / Vector(5f, 5f, 5f) };
		iVar3 = 1;
		while (iVar3 <= 5)
		{
			Var1 = { Var1 + Var2 };
			if (!func_71(Var1, Param1))
			{
				*uParam0 = { Var1 };
				return 1;
			}
			iVar3++;
		}
		*uParam0 = { Param1 };
		return 1;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param1)//Position - 0x2C2A
{
	if ((Param0.f_2 - Param1.f_2) > 0.45f || (Param0.f_2 - Param1.f_2) < -0.45f)
	{
		return 1;
	}
	return 0;
}

void func_74()//Position - 0x2F73
{
	if (func_75())
	{
		Local_56.f_2 = 0;
		iLocal_53 = 3;
	}
}

int func_75()//Position - 0x2F8A
{
	struct<3> Var0;
	if (!Local_56.f_2)
	{
		if (func_76(Local_56.f_20, &(Local_56.f_14), &(Local_56.f_6), &(Local_56.f_8), 250))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_56.f_1, Local_56.f_0, Local_56.f_14, 12f, 0, ENTITY::GET_ENTITY_MODEL(Local_56.f_0), Local_56.f_29, (Local_56.f_7 - 20f), 20f);
			Local_56.f_2 = 1;
		}
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, true) };
		if (__LIB_1__::func_504(Var0, Local_56.f_14, Local_56.f_7))
		{
			return 1;
		}
		else if (__LIB_1__::func_504(Var0, Local_243, 5f))
		{
			Local_56.f_14 = { Local_243 };
			return 1;
		}
		else if (!__LIB_39__::func_758(Local_56.f_1, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")))
		{
			Local_56.f_2 = 0;
			Local_56.f_8 = 0;
		}
	}
	return 0;
}

int func_76(struct<3> Param0, var* uParam1, float* fParam2, var uParam3, int iParam4)//Position - 0x3052
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar3 = 0;
	iVar6 = *uParam3 + 2;
	iVar7 = 50;
	bVar8 = false;
	iVar9 = 1;
	if (!__LIB_1__::func_509(Param0))
	{
		iVar9 = 9;
	}
	__LIB_38__::func_481(Param0, Param0, &(Local_56.f_23), &(Local_56.f_26), iParam4);
	if (__LIB_38__::func_480(Local_56.f_23, Local_56.f_26))
	{
		if (!func_79(Param0, uParam1, fParam2, 1))
		{
			while (!bVar8 && *uParam3 < iVar6)
			{
				if (Param0.f_2 == 1f)
				{
					fVar0 = 0f;
				}
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param0, *uParam3, uParam1, fParam2, &uVar4, iVar9, fVar0, fVar1))
				{
					iVar5 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam1, 1, iVar9, 3f, 0f);
					if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar5))
					{
						fVar2 = (Param0.f_2 - uParam1->f_2);
						if (fVar2 < 0f)
						{
							fVar2 = (fVar2 * -1f);
						}
						if (__LIB_39__::func_770(Param0, *uParam1) || fVar2 < 0.5f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_56.f_0, false))
							{
								iVar3 = Local_56.f_0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam1, 3f, 3f, 3f, iVar3))
							{
								bVar8 = true;
							}
						}
					}
				}
				*uParam3++;
				if (*uParam3 >= iVar7)
				{
					bVar8 = true;
				}
			}
		}
		else
		{
			bVar8 = true;
		}
		if (bVar8)
		{
			Local_56.f_5 = func_77(Param0, *uParam1);
			return 1;
		}
	}
	return 0;
}

float func_77(struct<3> Param0, struct<3> Param1)//Position - 0x31B1
{
	struct<3> Var0;
	Var0 = { Param0 - Param1 };
	Var0.f_2 = 0f;
	return SYSTEM::VMAG(Var0);
}

int func_79(struct<3> Param0, var uParam1, var uParam2, int iParam3)//Position - 0x3235
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	if (__LIB_37__::func_921(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.5804f, -3332.6846f, 5.4191f };
		*uParam2 = 163.87f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.1599f, 5166.5103f, 19.1864f };
		*uParam2 = 0f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*uParam2 = 355.3355f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.3999f, 29.4244f };
		*uParam2 = 94.6893f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam1 = { 1996.3718f, 3818.8308f, 31.1612f };
		*uParam2 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*uParam2 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*uParam1 = { 416.871f, -1613.0814f, 28.1401f };
		*uParam2 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -1039.5425f, -2574.467f, 12.7566f };
		*uParam2 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -911.1597f, -2676.1316f, 12.7567f };
		*uParam2 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam1 = { -211.8546f, -2030.7715f, 26.6204f };
		*uParam2 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*uParam2 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam1 = { -2294.9446f, 376.2506f, 173.4669f };
		*uParam2 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam1 = { -1897.0765f, -557.3334f, 10.7279f };
		*uParam2 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var2[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var2[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var2[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var2[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var2[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var2[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = SYSTEM::VDIST(Var2[iVar6 /*3*/], Var1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { Var2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*uParam2 = 234.3999f;
			}
			else if (iVar3 == 1)
			{
				*uParam2 = 232.2255f;
			}
			else if (iVar3 == 2)
			{
				*uParam2 = 228.2855f;
			}
			else if (iVar3 == 3)
			{
				*uParam2 = 231.4914f;
			}
			else if (iVar3 == 4)
			{
				*uParam2 = 230.6703f;
			}
			else if (iVar3 == 5)
			{
				*uParam2 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam1 = { -411.3629f, 1174.5865f, 324.6421f };
		*uParam2 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380.1006f, 95.1566f, 53.5054f };
				*uParam2 = 4.555f;
				break;
			case 2:
				*uParam1 = { -1379.1394f, 84.2472f, 53.0592f };
				*uParam2 = 6.9278f;
				break;
			case 3:
				*uParam1 = { -1378.4266f, 74.5077f, 52.6622f };
				*uParam2 = 2.6813f;
				break;
			case 4:
				*uParam1 = { -1384.1774f, 73.9207f, 52.7438f };
				*uParam2 = 5.542f;
				break;
			case 5:
				*uParam1 = { -1381.1179f, 35.7838f, 52.659f };
				*uParam2 = 7.6687f;
				break;
			case 6:
				*uParam1 = { -1383.7413f, 64.1491f, 52.6647f };
				*uParam2 = 2.5572f;
				break;
			case 7:
				*uParam1 = { -1382.6162f, 49.6876f, 52.6585f };
				*uParam2 = 3.0185f;
				break;
			default:
				*uParam1 = { -1383.2987f, 54.4598f, 52.6562f };
				*uParam2 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50.9889f, -1092.5254f, 28.2152f };
					*uParam2 = 150.8833f;
					break;
				case 2:
					*uParam1 = { 46.7725f, -1099.7506f, 28.1639f };
					*uParam2 = 149.4322f;
					break;
				case 3:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*uParam2 = 154.1378f;
					break;
				case 4:
					*uParam1 = { 38.1922f, -1113.3936f, 28.1507f };
					*uParam2 = 146.3778f;
					break;
				case 5:
					*uParam1 = { 13.0436f, -1124.7668f, 27.7359f };
					*uParam2 = 91.163f;
					break;
				case 6:
					*uParam1 = { 1.4336f, -1125.0425f, 27.1705f };
					*uParam2 = 91.0578f;
					break;
				case 7:
					*uParam1 = { -11.1811f, -1125.8105f, 26.3688f };
					*uParam2 = 91.866f;
					break;
				default:
					*uParam1 = { 21.9431f, -1124.5731f, 27.9417f };
					*uParam2 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
					*uParam2 = 148.7004f;
					break;
				case 2:
					*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
					*uParam2 = 148.7144f;
					break;
				case 3:
					*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
					*uParam2 = 150.0955f;
					break;
				case 4:
					*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
					*uParam2 = 149.5649f;
					break;
				case 5:
					*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
					*uParam2 = 150.7363f;
					break;
				case 6:
					*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
					*uParam2 = 147.2113f;
					break;
				case 7:
					*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
					*uParam2 = 150.7597f;
					break;
				default:
					*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
					*uParam2 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044.7413f, -2528.786f, 12.7568f };
					*uParam2 = 150.9439f;
					break;
				case 2:
					*uParam1 = { -1050.7631f, -2539.4978f, 12.7566f };
					*uParam2 = 150.851f;
					break;
				case 3:
					*uParam1 = { -1054.9523f, -2546.8596f, 12.7566f };
					*uParam2 = 149.9285f;
					break;
				case 4:
					*uParam1 = { -1060.3972f, -2556.898f, 12.6066f };
					*uParam2 = 150.8244f;
					break;
				case 5:
					*uParam1 = { -1020.7437f, -2490.0842f, 12.6396f };
					*uParam2 = 148.6134f;
					break;
				case 6:
					*uParam1 = { -1076.9043f, -2589.1794f, 12.6858f };
					*uParam2 = 149.0112f;
					break;
				case 7:
					*uParam1 = { -1026.3866f, -2501.9521f, 12.6923f };
					*uParam2 = 149.7553f;
					break;
				default:
					*uParam1 = { -1070.5065f, -2578.3892f, 12.6932f };
					*uParam2 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067.8463f, -2708.9397f, 19.0588f };
					*uParam2 = 230.9025f;
					break;
				case 2:
					*uParam1 = { -1058.2238f, -2716.2166f, 19.06f };
					*uParam2 = 237.1285f;
					break;
				case 3:
					*uParam1 = { -1004.5667f, -2744.797f, 19.0811f };
					*uParam2 = 255.6885f;
					break;
				case 4:
					*uParam1 = { -1049.5092f, -2721.58f, 19.0546f };
					*uParam2 = 242.3581f;
					break;
				case 5:
					*uParam1 = { -1017.1544f, -2740.1174f, 19.0525f };
					*uParam2 = 243.5798f;
					break;
				case 6:
					*uParam1 = { -1042.0872f, -2726.0767f, 19.0452f };
					*uParam2 = 240.2381f;
					break;
				case 7:
					*uParam1 = { -1027.353f, -2734.4617f, 19.0509f };
					*uParam2 = 239.8703f;
					break;
				default:
					*uParam1 = { -1033.7404f, -2730.7458f, 19.0521f };
					*uParam2 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*uParam2 = 265.8022f;
					break;
				case 2:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*uParam2 = 263.5472f;
					break;
				case 3:
					*uParam1 = { -987.6072f, -2747.2734f, 12.6069f };
					*uParam2 = 257.2886f;
					break;
				case 4:
					*uParam1 = { -1006.8151f, -2739.345f, 12.6334f };
					*uParam2 = 242.1315f;
					break;
				case 5:
					*uParam1 = { -1051.8304f, -2713.5527f, 12.6333f };
					*uParam2 = 239.9312f;
					break;
				case 6:
					*uParam1 = { -1041.0035f, -2719.6467f, 12.6402f };
					*uParam2 = 240.1081f;
					break;
				case 7:
					*uParam1 = { -1023.8323f, -2729.4646f, 12.6445f };
					*uParam2 = 239.6737f;
					break;
				default:
					*uParam1 = { -1012.8478f, -2735.1724f, 12.6656f };
					*uParam2 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*uParam2 = 93.132f;
				break;
			case 2:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*uParam2 = 92.2581f;
				break;
			case 3:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*uParam2 = 92.714f;
				break;
			case 4:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*uParam2 = 92.8628f;
				break;
			case 5:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*uParam2 = 268.6186f;
				break;
			case 6:
				*uParam1 = { 844.6506f, -1010.0903f, 26.9894f };
				*uParam2 = 270.076f;
				break;
			case 7:
				*uParam1 = { 852.2498f, -1010.1324f, 27.8091f };
				*uParam2 = 269.722f;
				break;
			default:
				*uParam1 = { 861.4028f, -1010.0249f, 28.808f };
				*uParam2 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703.2726f, -1067.6997f, 21.4765f };
				*uParam2 = 181.3629f;
				break;
			case 2:
				*uParam1 = { 715.2089f, -1070.3993f, 21.2708f };
				*uParam2 = 175.43623f;
				break;
			case 3:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*uParam2 = 181.0347f;
				break;
			case 4:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*uParam2 = 233.169f;
				break;
			case 5:
				*uParam1 = { 703.807f, -1057.8665f, 21.4152f };
				*uParam2 = 170.1609f;
				break;
			case 6:
				*uParam1 = { 708.1994f, -1048.1937f, 21.216f };
				*uParam2 = 134.2729f;
				break;
			case 7:
				*uParam1 = { 711.1124f, -1069.4229f, 21.3129f };
				*uParam2 = 177.9198f;
				break;
			default:
				*uParam1 = { 703.545f, -1078.7177f, 21.3987f };
				*uParam2 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (__LIB_1__::func_873(3, Var1))
	{
		if (__LIB_0__::func_875(Var1, 3, 0, 0))
		{
			*uParam1 = { -1520.1213f, 2731.511f, 16.6437f };
			*uParam2 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*uParam2 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (__LIB_0__::func_874(Var1, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
			*uParam2 = 275.4274f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.3861f, -1709.7625f, 55.70131f };
			*uParam2 = 275.4411f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.1661f, -1750.6246f, 45.35691f };
			*uParam2 = 301.2981f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.2716f, -1753.0505f, 37.63976f };
			*uParam2 = 209.4354f;
			return 1;
		}
		*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
		*uParam2 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (__LIB_0__::func_874(Var1, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam1 = { -1624.4452f, -976.9755f, 12.0175f };
			*uParam2 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*uParam2 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369.246f, 1147.6527f, 112.7592f };
				*uParam2 = 182.0998f;
				break;
			case 1:
				*uParam1 = { 1360.8483f, 1139.121f, 112.7592f };
				*uParam2 = 83.3356f;
				break;
			case 2:
				*uParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
				*uParam2 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam1 = { 1782.1903f, 3300.076f, 40.4593f };
		*uParam2 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam1 = { -658.2056f, -1388.7886f, 9.499f };
		*uParam2 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*uParam2 = 71.6555f;
		return 1;
	}
	if (!__LIB_39__::func_757())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (__LIB_1__::func_873(7, Var1))
		{
			if (__LIB_0__::func_875(Var1, 7, 0, 0))
			{
				*uParam1 = { -1012.3105f, -465.1634f, 36.1141f };
				*uParam2 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (__LIB_1__::func_873(2, Var1))
	{
		if (__LIB_0__::func_875(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam1 = { -979.95f, -2746.1086f, 12.7091f };
						*uParam2 = 91.4929f;
						break;
					case 1:
						*uParam1 = { -1025.1935f, -2728.2175f, 12.6647f };
						*uParam2 = 239.0041f;
						break;
					case 2:
						*uParam1 = { -1051.315f, -2713.0686f, 12.6676f };
						*uParam2 = 236.4666f;
						break;
					case 3:
						*uParam1 = { -1095.7417f, -2637.8713f, 12.6461f };
						*uParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
						*uParam2 = 148.7004f;
						break;
					case 2:
						*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
						*uParam2 = 148.7144f;
						break;
					case 3:
						*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
						*uParam2 = 150.0955f;
						break;
					case 4:
						*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
						*uParam2 = 149.5649f;
						break;
					case 5:
						*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
						*uParam2 = 150.7363f;
						break;
					case 6:
						*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
						*uParam2 = 147.2113f;
						break;
					case 7:
						*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
						*uParam2 = 150.7597f;
						break;
					default:
						*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
						*uParam2 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var7 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = __LIB_1__::func_503(Param0, Var7);
	Var10 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = __LIB_1__::func_503(Param0, Var10);
	Var1 = { Param0 };
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var7 };
		*uParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*uParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var10 };
		*uParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*uParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (__LIB_1__::func_504(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*uParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.6492f, 5.0031f };
				*uParam2 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*uParam2 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam1 = { 498.185f, -1288.5354f, 28.1923f };
		*uParam2 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam1 = { 504.1738f, -1421.2511f, 28.2065f };
		*uParam2 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*uParam2 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam1 = { 1118.7509f, 262.0209f, 79.8555f };
		*uParam2 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam1 = { 1134.0535f, 53.1835f, 79.7553f };
		*uParam2 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*uParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*uParam2 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*uParam2 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*uParam2 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*uParam2 = 140.7302f;
		return 1;
	}
	return 0;
}

void func_99()//Position - 0x6678
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_14__::func_684(Local_56.f_9, 10000))
		{
			STREAMING::REQUEST_MODEL(iLocal_70);
			STREAMING::REQUEST_MODEL(iLocal_69);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_70))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_69))
				{
					if (__LIB_1__::func_509(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (Local_56.f_10 < 2)
						{
							iVar2 = 0;
						}
						else if (Local_56.f_10 < 5)
						{
							iVar2 = 9;
						}
						else
						{
							iVar2 = 1;
						}
					}
					else if (Local_56.f_10 < 5)
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 9;
					}
					if (func_101(&Var0, &fVar1, &(Local_56.f_8), iVar2, 1103626240))
					{
						MISC::CLEAR_AREA(Var0, 5f, true, false, false, false);
						if (func_100(&Local_56, &(Local_56.f_1), Var0, fVar1))
						{
							Local_56.f_5 = func_77(ENTITY::GET_ENTITY_COORDS(Local_56.f_0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
							Local_56.f_2 = 0;
							Local_56.f_8 = 0;
							iLocal_53 = 2;
						}
					}
					else if (Local_56.f_8 >= 5)
					{
						Local_56.f_10++;
						if (Local_56.f_10 > 10)
						{
							func_13();
						}
						else
						{
							Local_56.f_8 = 0;
							Local_56.f_9 = (MISC::GET_GAME_TIMER() - 9000);
						}
					}
				}
			}
		}
	}
}

int func_100(var uParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x6799
{
	STREAMING::REQUEST_MODEL(__LIB_39__::func_766());
	STREAMING::REQUEST_MODEL(__LIB_12__::func_850());
	if (STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_850()))
	{
		if (STREAMING::HAS_MODEL_LOADED(__LIB_39__::func_766()))
		{
			*uParam0 = VEHICLE::CREATE_VEHICLE(__LIB_12__::func_850(), Param2, fParam3, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
					VEHICLE::SET_TAXI_LIGHTS(*uParam0, true);
					VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(*uParam0, true);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*uParam0, false, 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*uParam0, true);
					*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 25, __LIB_39__::func_766(), -1, true, true);
					if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
					{
						if (!PED::IS_PED_INJURED(*uParam1))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(*uParam0, 5f);
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam1, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
							PED::SET_PED_CONFIG_FLAG(*uParam1, 251, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 5, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, true);
							PED::SET_PED_FLEE_ATTRIBUTES(*uParam1, 512, false);
							AUDIO::SET_AMBIENT_VOICE_NAME(*uParam1, "A_M_M_EASTSA_02_LATINO_FULL_01");
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__::func_850());
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_39__::func_766());
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_101(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x68C6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	var uVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	int iVar13;
	struct<3> Var14;
	fVar3 = 0f;
	iVar5 = 1;
	if (iParam3 == 0)
	{
		iVar5 = 0;
	}
	bVar6 = false;
	iVar7 = 0;
	fVar8 = 100f;
	fVar9 = 2.5f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		iVar13 = func_106(Var14);
		if (iVar13 != 6)
		{
			if (func_105(Var14, iVar13, uParam0, uParam1))
			{
				return 1;
			}
		}
		else if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var14, *uParam2, &Var0, &fVar3, &uVar4, iParam3, fVar8, fVar9))
		{
			while (!bVar6 && iVar7 < 5)
			{
				if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var0, &Var1, &Var2, 0f, 180f, iParam4, iVar5, 1, 0))
				{
					fVar3 = __LIB_6__::func_252(0f, 0f, 0f, Var2, 1);
					if (__LIB_43__::func_572(Var14, Var1, 1133903872, 1101004800))
					{
						bVar6 = true;
						Var10 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var1, fVar3, 0f, 1f, 0f) };
						Var11 = { Var10 - Var1 };
						Var12 = { Var0 - Var1 };
						if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var11.f_0, Var11.f_1, Var12.f_0, Var12.f_1) > 60f)
						{
							fVar3 = (fVar3 + 180f);
							fVar3 = __LIB_1__::func_9(fVar3, 0f, 360f);
						}
						*uParam0 = { Var1 };
						*uParam1 = fVar3;
						return 1;
					}
					else
					{
						iVar7++;
					}
				}
				else
				{
					iVar7++;
				}
			}
			*uParam2++;
		}
		else
		{
			*uParam2++;
		}
	}
	return 0;
}

int func_105(struct<3> Param0, int iParam1, var uParam2, var uParam3)//Position - 0x7185
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (iParam1 == 0)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -883.8992f, 76.3237f, 50.9372f };
				fVar1 = 271.8234f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -838.2045f, 88.1067f, 51.3396f };
				fVar1 = 102.3721f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -884.0715f, 217.2857f, 71.7633f };
				fVar1 = 254.5437f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -834.0018f, 217.2782f, 73.154f };
				fVar1 = 80.7037f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -830.9222f, 135.3548f, 58.1352f };
				fVar1 = 92.957f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 1)
	{
		iVar2 = 0;
		iVar3 = 6;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1587.0962f, -928.5875f, 14.3046f };
				fVar1 = 139.9023f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1532.4579f, -863.667f, 21.6188f };
				fVar1 = 139.9028f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1472.8877f, -733.0396f, 24.0746f };
				fVar1 = 236.3756f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1397.3027f, -781.1235f, 19.3347f };
				fVar1 = 48.1876f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -1605.4087f, -1012.5778f, 12.0175f };
				fVar1 = 51.1191f;
			}
			else if (iVar2 == 5)
			{
				Var0 = { -1572.4573f, -1007.1061f, 12.0184f };
				fVar1 = 141.2024f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1126.5519f, -1530.5911f, 3.294f };
				fVar1 = 214.5477f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1043.0194f, -1644.1719f, 3.4894f };
				fVar1 = 35.3163f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1039.3455f, -1532.5812f, 4.1467f };
				fVar1 = 32.1734f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1067.5765f, -1501.944f, 4.0327f };
				fVar1 = 216.1659f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 3)
	{
		iVar2 = 0;
		iVar3 = 4;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1247.2906f, 2549.53f, 16.4214f };
				fVar1 = 137.1185f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1314.11f, 2470.677f, 23.3185f };
				fVar1 = 309.2187f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1095.3818f, 2686.4868f, 18.5919f };
				fVar1 = 130.0954f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1373.5143f, 2429.944f, 26.7492f };
				fVar1 = 298.9626f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 4)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { 1299.198f, 1164.3418f, 105.3728f };
				fVar1 = 3.1765f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { 1304.8314f, 1084.5979f, 104.6453f };
				fVar1 = 8.2195f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { 1290.8727f, 1237.6844f, 107.4217f };
				fVar1 = 186.5802f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { 1310.9749f, 1001.1377f, 104.9354f };
				fVar1 = 359.3654f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { 1284.9357f, 1355.7482f, 103.4301f };
				fVar1 = 182.4582f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	else if (iParam1 == 5)
	{
		iVar2 = 0;
		iVar3 = 5;
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			if (iVar2 == 0)
			{
				Var0 = { -1208.6174f, -1410.7325f, 3.1853f };
				fVar1 = 215.8772f;
			}
			else if (iVar2 == 1)
			{
				Var0 = { -1172.9f, -1412.3802f, 3.6078f };
				fVar1 = 126.9322f;
			}
			else if (iVar2 == 2)
			{
				Var0 = { -1112.8418f, -1437.8954f, 4.031f };
				fVar1 = 211.4814f;
			}
			else if (iVar2 == 3)
			{
				Var0 = { -1079.8854f, -1472.8779f, 4.0784f };
				fVar1 = 32.9476f;
			}
			else if (iVar2 == 4)
			{
				Var0 = { -1086.7677f, -1540.7067f, 3.5549f };
				fVar1 = 128.3527f;
			}
			if (__LIB_43__::func_572(Param0, Var0, 1133903872, 1101004800))
			{
				*uParam2 = { Var0 };
				*uParam3 = fVar1;
				return 1;
			}
			iVar2++;
		}
	}
	return 0;
}

int func_106(struct<3> Param0)//Position - 0x7738
{
	if (__LIB_37__::func_921(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		return 0;
	}
	if (__LIB_0__::func_874(Param0, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true))
		{
			return 1;
		}
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			return 1;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		return 2;
	}
	if (__LIB_1__::func_873(3, Param0))
	{
		if (__LIB_0__::func_875(Param0, 3, 0, 0))
		{
			return 3;
		}
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		return 4;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1171.7086f, -1524.6598f, 23.379686f, -1139.7214f, -1573.589f, -1.585432f, 55f, false, true))
	{
		return 5;
	}
	return 6;
}

int func_107()//Position - 0x78E3
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (!__LIB_1__::func_504(Local_243, Local_56.f_20, 100f))
	{
		return 1;
	}
	if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) != Local_56.f_30)
	{
		return 1;
	}
	if (iLocal_55 == 4)
	{
		return 1;
	}
	if (iLocal_53 == 2 || iLocal_53 == 3)
	{
		if (!__LIB_39__::func_767(Local_56.f_1))
		{
			return 1;
		}
		if (!__LIB_0__::func_695(Local_56.f_0))
		{
			return 1;
		}
		if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_56.f_1, Local_56.f_0))
		{
			return 1;
		}
		if (PED::IS_PED_FLEEING(Local_56.f_1))
		{
			return 1;
		}
		if (PED::IS_PED_IN_COMBAT(Local_56.f_1, 0))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_56.f_1, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_56.f_0, false) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
		{
			return 1;
		}
		if (__LIB_1__::func_504(Local_243, Var0, 20f))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_56.f_0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_56.f_0))
			{
				return 1;
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_108()//Position - 0x7A71
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	float fVar10;
	struct<3> Var11;
	struct<3> Var12;
	var uVar13[12];
	if (iLocal_54 == 0)
	{
		if (__LIB_14__::func_684(iLocal_66, 500))
		{
			iVar1 = -1;
			iVar2 = -1;
			iVar5 = 0;
			fVar7 = -99999f;
			if (iLocal_55 != 0 && iLocal_55 != 1)
			{
				iLocal_60 = 0;
			}
			if (iLocal_60)
			{
				iVar0 = 3;
				fVar8 = 35f;
			}
			else
			{
				iVar0 = 1;
				fVar8 = 10f;
			}
			iVar3 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar13);
			if (iVar3 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= (iVar3 - 1))
				{
					if (iVar5 < iVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uVar13[iVar4]))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar13[iVar4]) == iLocal_70)
							{
								Var9 = { ENTITY::GET_ENTITY_COORDS(uVar13[iVar4], false) };
								fVar10 = SYSTEM::VDIST2(Local_243, Var9);
								if (fVar10 <= (fVar8 * fVar8))
								{
									if (__LIB_39__::func_765(&(uVar13[iVar4]), iLocal_70, iLocal_69))
									{
										if (iVar2 == -1)
										{
											iVar2 = iVar4;
										}
										if (iLocal_60)
										{
											if (uVar13[iVar4] != Global_112417)
											{
												if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar13[iVar4]) == INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))
												{
													fVar6 = 1f;
													fVar10 = (fVar10 / fVar10);
													fVar10 = (fVar10 - 35f);
													fVar10 = (fVar10 * -1f);
													fVar10 = (fVar10 / 35f);
													fVar10 = (fVar10 * 0.5f);
													fVar10 = (fVar10 + 0.5f);
													fVar6 = (fVar6 * fVar10);
													fVar10 = (Local_243.f_2 - Var9.f_2);
													if (fVar10 < 0f)
													{
														fVar10 = (fVar10 * -1f);
													}
													if (fVar10 < 4f)
													{
														Var11 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
														Var12 = { Var9 - Local_243 };
														if (((Var11.f_0 * Var12.f_0) + (Var11.f_1 * Var12.f_1)) / SYSTEM::VDIST(Var12, 0f, 0f, 0f)) > SYSTEM::COS(120f)
														{
															if (CAM::IS_SPHERE_VISIBLE(Var9, 2f))
															{
																fVar6 = (fVar6 * 0.5f);
															}
															if (func_63(&(uVar13[iVar4])))
															{
																fVar6 = (fVar6 * 0.2f);
															}
															if (!ENTITY::IS_ENTITY_UPRIGHT(uVar13[iVar4], 90f) || ENTITY::IS_ENTITY_IN_WATER(uVar13[iVar4]))
															{
																fVar6 = 0f;
															}
															if (fVar6 > fVar7)
															{
																fVar7 = fVar6;
																iVar1 = iVar4;
															}
														}
													}
												}
											}
										}
										iVar5++;
									}
								}
								else
								{
									iVar4 = iVar3;
								}
							}
						}
						else
						{
							iVar4 = iVar3;
						}
					}
					else
					{
						iVar4 = iVar3;
					}
					iVar4++;
				}
			}
			if (iVar2 == -1)
			{
				func_109(&iLocal_244, 0);
				iLocal_244 = 0;
			}
			else if (iLocal_244 != uVar13[iVar2])
			{
				func_109(&iLocal_244, 0);
				iLocal_244 = uVar13[iVar2];
				func_109(&iLocal_244, 1);
			}
			if (iLocal_60)
			{
				if (iVar1 == -1)
				{
					iLocal_245 = 0;
				}
				else
				{
					iLocal_245 = uVar13[iVar1];
				}
				iLocal_60 = 0;
			}
			else
			{
				iLocal_60 = 1;
			}
			iLocal_66 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

void func_109(int iParam0, bool bParam1)//Position - 0x7D0D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_MODEL(iVar0, __LIB_39__::func_766()))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						PED::SET_PED_CONFIG_FLAG(iVar0, 251, bParam1);
					}
				}
			}
		}
	}
}

void func_110()//Position - 0x7D5F
{
	if (iLocal_55 == 2 || iLocal_55 == 3)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "HAIL_TAXI", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_240, "FP_HAIL_TAXI", 3))
		{
			func_59();
		}
	}
}

int func_111()//Position - 0x7DA3
{
	if (!func_3())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

void func_112()//Position - 0x7DD8
{
	if (iLocal_52 == 0)
	{
		if (__LIB_0__::func_769(131))
		{
			if (func_141(__LIB_0__::func_683()))
			{
				func_140();
				__LIB_0__::func_222(&uLocal_71, 0, PLAYER::PLAYER_PED_ID(), sLocal_236, 0, 1);
				__LIB_0__::func_222(&uLocal_71, 1, 0, "TaxiDispatch", 0, 1);
				if (func_133())
				{
					if (func_132(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2", "TX_2", sLocal_238, sLocal_238, 2, 1, 0, 0, 0))
					{
						iLocal_61 = 0;
						iLocal_52 = 2;
					}
				}
				else if (func_118(&uLocal_71, 131, "TAXISAU", sLocal_237, sLocal_237, "TX_2A", "TX_2A", 2, 1, 0, 0, 0))
				{
					iLocal_52 = 1;
				}
			}
		}
	}
	else if (iLocal_52 == 1)
	{
		if (__LIB_14__::func_521())
		{
			iLocal_52 = 0;
		}
	}
	else if (iLocal_52 == 2)
	{
		if (__LIB_14__::func_521())
		{
			if (__LIB_1__::func_859())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			else if (__LIB_16__::func_599())
			{
				if (!iLocal_61)
				{
					iLocal_52 = 0;
				}
			}
			if (iLocal_52 != 0)
			{
				if (!__LIB_0__::func_67(19))
				{
					__LIB_0__::func_592(19);
				}
				func_13();
				Local_56.f_9 = MISC::GET_GAME_TIMER();
				Local_56.f_20 = { Local_243 };
				Local_56.f_30 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
				Local_56.f_8 = 0;
				Local_56.f_10 = 0;
				iLocal_53 = 1;
				iLocal_52 = 0;
			}
		}
		else if (!iLocal_61)
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
			{
				iLocal_61 = 1;
			}
		}
	}
}

bool func_118(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x7FEE
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_770(uParam0, iParam1, sParam2, iParam9, iParam10, 0);
	__LIB_15__::func_999();
	if (iParam8 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_30__::func_375(2, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_610(&uVar0, &uVar1, iParam7, bParam11);
}

bool func_132(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13)//Position - 0x87EF
{
	var uVar0;
	var uVar1;
	__LIB_0__::func_770(uParam0, iParam1, sParam2, iParam11, iParam12, 0);
	__LIB_15__::func_999();
	if (iParam10 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	uVar0 = 10;
	uVar1 = 10;
	__LIB_30__::func_375(3, &uVar0, &uVar1, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, 0, 0, 0, 0, 0, 0, 0, 0);
	return __LIB_16__::func_610(&uVar0, &uVar1, iParam9, bParam13);
}

int func_133()//Position - 0x8850
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (iLocal_53 != 0)
	{
		return 0;
	}
	if (iLocal_55 == 4 || iLocal_55 == 2)
	{
		return 0;
	}
	if (iLocal_54 != 0)
	{
		return 0;
	}
	if (SCRIPT::IS_THREAD_ACTIVE(iLocal_239))
	{
		return 0;
	}
	if (!func_111())
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			return 0;
		}
	}
	func_134();
	fVar1 = 50f;
	iVar2 = 1;
	if (!__LIB_1__::func_509(Local_243))
	{
		iVar2 = 9;
	}
	if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE(Local_243, &Var0, iVar2, 100f, 2.5f))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, fVar1, fVar1, 20f, false, true, 0))
	{
		return 0;
	}
	if (__LIB_42__::func_695(Local_243, 1))
	{
		return 0;
	}
	return 1;
}

int func_134()//Position - 0x892C
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar0 = __LIB_0__::func_683();
		if (__LIB_0__::func_43(bVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_136)
			{
				if (BitTest(Global_113386.f_7688[iVar2 /*15*/].f_2, bVar0))
				{
					if (func_137(Var1, __LIB_38__::func_700(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_764)
			{
				if (BitTest(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bVar0))
				{
					if (func_137(Var1, __LIB_38__::func_699(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_113386.f_7688.f_866)
			{
				if (BitTest(Global_113386.f_7688.f_765[iVar2 /*10*/].f_2, bVar0))
				{
					if (func_137(Var1, __LIB_38__::func_698(iVar2)))
					{
						return 1;
					}
				}
				iVar2++;
			}
		}
	}
	return 0;
}

int func_137(struct<3> Param0, int iParam1)//Position - 0x8A5C
{
	if (iParam1 != -1)
	{
		if (iParam1 >= Global_43053)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_43053[iParam1 /*5*/]) <= (Global_43053[iParam1 /*5*/].f_3 * Global_43053[iParam1 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_43053[iParam1 /*5*/].f_4 != -1)
		{
			return func_137(Param0, Global_43053[iParam1 /*5*/].f_4);
		}
	}
	return 0;
}

void func_140()//Position - 0x8B77
{
	int iVar0;
	iVar0 = __LIB_0__::func_683();
	if (iVar0 == 0)
	{
		sLocal_236 = "MICHAEL";
		sLocal_237 = "TX_1M";
		sLocal_238 = "TX_3M";
	}
	else if (iVar0 == 1)
	{
		sLocal_236 = "FRANKLIN";
		sLocal_237 = "TX_1F";
		sLocal_238 = "TX_3F";
	}
	else if (iVar0 == 2)
	{
		sLocal_236 = "TREVOR";
		sLocal_237 = "TX_1T";
		sLocal_238 = "TX_3T";
	}
}

int func_141(int iParam0)//Position - 0x8BDC
{
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 2)
	{
		if (__LIB_0__::func_169(131, iParam0) == 1)
		{
			return 1;
		}
	}
	else if (iParam0 == __LIB_0__::func_684())
	{
		if ((__LIB_0__::func_169(131, 0) == 1 || __LIB_0__::func_169(131, 1) == 1) || __LIB_0__::func_169(131, 2) == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_145()//Position - 0x8D27
{
	__LIB_39__::func_764();
	func_4(1);
	STREAMING::REMOVE_ANIM_DICT(&cLocal_240);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_70);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_69);
	if (iLocal_58)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

