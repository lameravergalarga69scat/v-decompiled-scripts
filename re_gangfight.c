#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	struct<3> Local_48 = { 0, 0, 0 } ;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_58 = 0;
	int iLocal_59[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	int iLocal_61[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_62 = 0;
	var uLocal_63 = 16;
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
	int iLocal_228 = 0;
	struct<2> Local_229 = { 0, 5 } ;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 5;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_48 = { ScriptParam_229.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_146();
	}
	if (__LIB_42__.func_567(Local_48, -1, 0, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__.func_371();
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (iLocal_55 > MISC::GET_GAME_TIMER())
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
			if (!__LIB_35__.func_175())
			{
				if (!__LIB_35__.func_175())
				{
					if (__LIB_40__.func_735())
					{
						func_146();
					}
				}
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_CGF", 0);
				switch (iLocal_44)
				{
					case 0:
						if (__LIB_41__.func_467())
						{
							func_146();
						}
						if (func_85())
						{
							iLocal_49 = 1;
							iLocal_44 = 1;
						}
						break;
					case 1:
						func_84();
						if (!func_83() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 969.2191f, 3608.6648f, 41.8758f, 100f, 80f, 20f, false, true, 0))
								{
									iLocal_56 = __LIB_6__.func_850(iLocal_58, 0, 145);
									HUD::SET_BLIP_PRIORITY(iLocal_56, 9);
									iLocal_57[0] = __LIB_6__.func_850(iLocal_59[0], 1, 145);
									iLocal_57[1] = __LIB_6__.func_850(iLocal_59[1], 1, 145);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, false);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[0], false);
									HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[1], false);
									__LIB_40__.func_733(1);
								}
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < iLocal_59)
							{
								if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
								}
								iVar0++;
							}
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							}
							func_69();
						}
						break;
				}
			}
			else
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						func_69();
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 150f, 150f, 50f, false, true, 0))
					{
						if (iLocal_46 >= 5 && iLocal_45 == 2)
						{
						}
						else
						{
							func_84();
							func_68();
						}
						switch (iLocal_45)
						{
							case 0:
								func_67();
								if (func_83())
								{
									bLocal_51 = true;
									iLocal_46 = 4;
								}
								break;
							case 1:
								if (iLocal_46 < 7 && !PED::IS_PED_INJURED(iLocal_58))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_58, 90f))
									{
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_58) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_58))
										{
											func_64();
										}
									}
								}
								func_59();
								break;
							case 2:
								func_9();
								break;
							case 3:
								func_1();
								break;
						}
					}
					else
					{
						func_69();
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::REMOVE_BLIP(&iLocal_56);
					}
					if (((!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
					{
						func_69();
					}
					iVar1 = 0;
					iVar2 = 0;
					while (iVar2 < iLocal_59)
					{
						if (!PED::IS_PED_INJURED(iLocal_59[iVar2]))
						{
							TASK::TASK_COMBAT_PED(iLocal_59[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar2], true);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar2], 150f, 150f, 50f, false, true, 0))
							{
								func_69();
							}
							iVar1 = 1;
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar2]))
						{
							HUD::REMOVE_BLIP(&(iLocal_57[iVar2]));
						}
						iVar2++;
					}
					if (iVar1 == 0)
					{
						func_69();
					}
				}
			}
		}
		else
		{
			func_146();
		}
	}
}

void func_1()//Position - 0x431
{
	int iVar0;
	if (iLocal_49 && !iLocal_54)
	{
		if (!__LIB_11__.func_869("RECGF_SHOOT"))
		{
			__LIB_6__.func_771();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, true);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.0017f, 31.176f, 1305.8972f, 3604.3062f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		__LIB_0__.func_202(&uLocal_63, 1);
		__LIB_0__.func_202(&uLocal_63, 2);
		__LIB_0__.func_202(&uLocal_63, 3);
		__LIB_0__.func_202(&uLocal_63, 4);
		iLocal_54 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__.func_85(PLAYER::PLAYER_ID()), Local_48, true) > 50f)
	{
		func_146();
	}
}

void func_9()//Position - 0x6CF
{
	int iVar0;
	int iVar1;
	switch (iLocal_46)
	{
		case 0:
			if (SYSTEM::TIMERB() > 2000)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
						{
							iLocal_57[iVar0] = __LIB_6__.func_850(iLocal_59[iVar0], 1, 145);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar0], false))
							{
								if (!bLocal_51)
								{
									TASK::TASK_DRIVE_BY(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 150f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_59[iVar0], iLocal_62);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
									PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
								}
							}
						}
					}
					iVar0++;
				}
				if (!__LIB_0__.func_75())
				{
					if (__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_BIKERS", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[iVar1], 904.3153f, 3631.684f, 31.574f, 7f, 7f, 7f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], false))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_61[iVar1], 0f);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_59[iVar1], iLocal_62);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
							PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_59[iVar1], false))
					{
						TASK::TASK_COMBAT_PED(iLocal_59[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar1], true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar1], false))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_61[iVar1]))
						{
						}
					}
				}
				if (PED::IS_PED_INJURED(iLocal_59[iVar1]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar1]));
					}
				}
				iVar1++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
				iLocal_46++;
			}
			break;
		case 2:
			func_41(1500);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				TASK::CLEAR_PED_TASKS(iLocal_58);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2056, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 5f, 5f, 5f, false, true, 0))
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_REWARD", 4, 0, 0, 0);
				}
			}
			iLocal_46++;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 6f, 6f, 6f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (!__LIB_0__.func_75())
						{
							if (__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_END", 4, 0, 0, 0))
							{
								iLocal_46++;
							}
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 120f, 120f, 120f, false, true, 0))
				{
					__LIB_42__.func_21();
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), false))
				{
					func_69();
				}
			}
			break;
		case 4:
			iLocal_46++;
			break;
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1500);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_60, -1, -1, 2f, 8, 0);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_PLAY_ANIM(0, "veh@drivebystd_ds_grenades", "drop_grenade", 2f, -2f, -1, 0, 0f, false, false, false);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_60, 10f, 786603);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				PED::SET_PED_KEEP_TASK(iLocal_58, true);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_60, true);
				iLocal_46++;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_58, "veh@drivebystd_ds_grenades", "drop_grenade") > 0.436f && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
					{
						OBJECT::CREATE_MONEY_PICKUPS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(iLocal_58, false), -1f, 0f, 0f), 1000, 1, 0);
						iLocal_46++;
					}
				}
			}
			break;
		case 7:
			if (!__LIB_0__.func_75())
			{
				__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_END2", 4, 0, 0, 0);
				__LIB_42__.func_21();
			}
			break;
	}
}

void func_41(int iParam0)//Position - 0x1F45
{
	int iVar0;
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		if (iLocal_55 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
	}
}

void func_59()//Position - 0x26D8
{
	int iVar0;
	switch (iLocal_46)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				iLocal_46++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 20f, 20f, 20f, false, true, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, 2060, 2);
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_THX", 4, 0, 0, 0);
					iLocal_46++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 916.5764f, 3602.1462f, 31.9262f, 1f, 40000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				iLocal_46++;
			}
			break;
		case 3:
			if (!__LIB_0__.func_75())
			{
				if (__LIB_18__.func_173() == 0)
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_JABM", 4, 0, 0, 0);
				}
				else if (__LIB_18__.func_173() == 1)
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_JABF", 4, 0, 0, 0);
				}
				else if (__LIB_18__.func_173() == 2)
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_JABBER", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_58, 916.5764f, 3602.1462f, 31.9262f, 3.3f, 3.3f, 3.3f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0))
					{
						if (!__LIB_0__.func_75())
						{
							if (__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_STASH", 4, 0, 0, 0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), -1);
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
								}
								iLocal_46++;
							}
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60);
						}
						iLocal_46 = 6;
					}
				}
			}
			break;
		case 5:
			if (!__LIB_0__.func_75())
			{
				if (__LIB_18__.func_173() == 0)
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_STASHM", 4, 0, 0, 0);
				}
				else if (__LIB_18__.func_173() == 1)
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_STASHF", 4, 0, 0, 0);
				}
				iLocal_46++;
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					{
						if (func_62())
						{
							func_41(1000);
							if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2])) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
								TASK::TASK_OPEN_VEHICLE_DOOR(0, iLocal_60, -1, -1, 1f);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_59[2], 2000, 0, 2);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_59[2], 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
								func_41(2000);
								__LIB_6__.func_771();
								func_41(0);
								__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_HIDE", 4, 0, 0, 0);
								if ((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false)) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
								{
									iLocal_46++;
								}
								else
								{
									if (!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
										TASK::TASK_COWER(0, -1);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_62);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
									}
									bLocal_51 = false;
									SYSTEM::SETTIMERB(0);
									iLocal_46++;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), false))
				{
					func_69();
				}
			}
			break;
		case 7:
			if ((((!PED::IS_PED_INJURED(iLocal_58) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, false)) && !PED::IS_PED_IN_COVER(iLocal_58, false)) && !PED::IS_PED_GOING_INTO_COVER(iLocal_58))
			{
			}
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
				{
					if (((((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (916.3351f - 100f), (3602.048f - 100f), (31.9209f - 100f), (916.3351f + 100f), (3602.048f + 100f), (31.9209f + 100f), false, true) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar0], 5f, 5f, 5f, false, true, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_59[iVar0])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61[iVar0]))
					{
						bLocal_51 = true;
						SYSTEM::SETTIMERB(2000);
						iLocal_46 = 0;
						iLocal_45 = 2;
					}
				}
				iVar0++;
			}
			if (((PED::IS_PED_INJURED(iLocal_59[2]) && PED::IS_PED_INJURED(iLocal_59[3])) && PED::IS_PED_INJURED(iLocal_59[4])) && PED::IS_PED_INJURED(iLocal_59[5]))
			{
				iLocal_46 = 2;
				iLocal_45 = 2;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_59[2], 970.3641f, 3629.8865f, 31.3694f, 5f, 5f, 5f, false, true, 0) || SYSTEM::TIMERB() > 13000)
			{
				func_41(2000);
				iVar0 = 0;
				while (iVar0 < iLocal_59)
				{
					if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_59[iVar0], iLocal_61[iVar0], false))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), (iVar0 - 2) + 10, 60f, 786475, 5f, 10f, true);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(iLocal_58))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 15f, 15f, 15f, false, true, 0))
					{
						__LIB_6__.func_833();
						func_41(0);
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_GANG", 4, 0, 0, 0);
					}
				}
				SYSTEM::SETTIMERB(0);
				iLocal_46 = 0;
				iLocal_45 = 2;
			}
			break;
	}
}

int func_62()//Position - 0x2D39
{
	int iVar0;
	if (((((((!ENTITY::DOES_ENTITY_EXIST(iLocal_61[2]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[5])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[2])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[3])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[4])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[5]))
	{
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
		AUDIO::START_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
		{
			iLocal_61[2] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 863.4697f, 3633.4998f, 31.9874f, 290.5797f, true, true, false);
			iLocal_61[3] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.4073f, 3636.0386f, 31.9514f, 270.3649f, true, true, false);
			iLocal_61[4] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 866.3153f, 3631.5867f, 31.9545f, 276.6327f, true, true, false);
			iLocal_61[5] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 868.5937f, 3633.5227f, 31.9622f, 267.0991f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[2], 3);
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_61[4], 3);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
		}
		if ((STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02"))) && AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
		{
			iLocal_59[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[2], 22, joaat("G_M_Y_Lost_01"), -1, true, true);
			iLocal_59[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[3], 22, joaat("G_M_Y_Lost_02"), -1, true, true);
			iLocal_59[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[4], 22, joaat("G_M_Y_Lost_01"), -1, true, true);
			iLocal_59[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_61[5], 22, joaat("G_M_Y_Lost_02"), -1, true, true);
			__LIB_0__.func_203(&uLocal_63, 4, iLocal_59[4], "RECGFLost3", 0, 1);
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_61[iVar0], "RE_COUNTRYSIDE_GANG_BIKES", 0f);
					PED::SET_PED_CONFIG_FLAG(iLocal_59[iVar0], 137, true);
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_ABILITY(iLocal_59[iVar0], 2);
					PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_59[iVar0], 50f, 20);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 1);
					PED::SET_PED_ACCURACY(iLocal_59[iVar0], 13);
					PED::SET_PED_HEARING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_SEEING_RANGE(iLocal_59[iVar0], 100f);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], true);
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_59[iVar0], 3);
					PED::SET_PED_HELMET(iLocal_59[iVar0], false);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_59[iVar0], true, 1000f);
					if (iVar0 > 1 && iVar0 < 5)
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("WEAPON_PISTOL"), -1, true, true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[iVar0], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[2], 966.7098f, 3633.9258f, 31.3974f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[2], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[3], 970.6208f, 3636.743f, 31.3666f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[3], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					PED::SET_PED_KEEP_TASK(iLocal_59[3], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[4], 971.023f, 3631.225f, 31.3807f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[4], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_62);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_61[5], 974.8073f, 3633.7708f, 31.3818f, 10f, 0, joaat("hexer"), 786725, 4f, 100f);
					TASK::TASK_LOOK_AT_COORD(0, Local_48, 5000, 0, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_62);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_59[5], iLocal_62);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_62);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
			return 1;
		}
	}
	return 0;
}

void func_64()//Position - 0x32AB
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_58, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], false))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_58, 101, 0);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_59[0], iLocal_58, 1000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(iLocal_59[1], iLocal_58, 1000, 0);
		}
		else
		{
			__LIB_6__.func_771();
			func_41(0);
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				__LIB_6__.func_834(iLocal_58, "GENERIC_FRIGHTENED_HIGH", 24);
			}
		}
		func_41(1000);
		func_69();
	}
}

void func_67()//Position - 0x355B
{
	int iVar0;
	switch (iLocal_46)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 45f, 45f, 20f, false, true, 0))
			{
				if (!__LIB_0__.func_75())
				{
					if (__LIB_18__.func_173() == 0)
					{
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_COMM", 4, 0, 0, 0);
					}
					else if (__LIB_18__.func_173() == 1)
					{
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_COMF", 4, 0, 0, 0);
					}
					else if (__LIB_18__.func_173() == 2)
					{
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_COMT", 4, 0, 0, 0);
					}
					iLocal_46++;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 40f, 40f, 20f, false, true, 0))
				{
					if (__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_HELP", 4, 0, 0, 0))
					{
						iLocal_46++;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_0__.func_75())
			{
				__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_SHUTUP", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_46++;
			}
			break;
		case 3:
			if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
			{
				if ((SYSTEM::TIMERA() > 5000 && !iLocal_52) && !__LIB_0__.func_75())
				{
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_PAYUP", 4, 0, 0, 0);
					iLocal_52 = 1;
				}
				if (SYSTEM::TIMERA() < 28000)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 2.5f, false, true, 0))
					{
						if (((PED::CAN_PED_SEE_HATED_PED(iLocal_59[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_59[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), 4000, 2056, 4);
							if (!iLocal_53)
							{
								__LIB_6__.func_771();
								func_41(0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_GETLOS", 4, 0, 0, 0);
								}
								else
								{
									__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_BEGONE", 4, 0, 0, 0);
								}
								iLocal_53 = 1;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 3))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_59[0], iLocal_58, 10f))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], iLocal_58, -1, false);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
				{
					__LIB_6__.func_771();
					func_41(0);
					__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_SHOOT", 4, 0, 0, 0);
					func_41(2000);
					func_64();
				}
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (!PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					PED::SET_PED_RESET_FLAG(iLocal_59[iVar0], 156, true);
					TASK::TASK_COMBAT_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				TASK::TASK_COWER(iLocal_58, -1);
			}
			iLocal_46++;
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (PED::IS_PED_INJURED(iLocal_59[iVar0]))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
						__LIB_0__.func_202(&uLocal_63, 2);
						__LIB_0__.func_202(&uLocal_63, 3);
					}
				}
				iVar0++;
			}
			if (PED::IS_PED_INJURED(iLocal_59[0]) && PED::IS_PED_INJURED(iLocal_59[1]))
			{
				iLocal_46 = 0;
				iLocal_45 = 1;
			}
			break;
	}
}

void func_68()//Position - 0x3908
{
	if (!CAM::IS_SPHERE_VISIBLE(916.4631f, 3601.2615f, 31.9327f, 3f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 916.4631f, 3601.2615f, 31.9327f, 2f, 2f, 2f, false, true, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 915.6531f, 3595.061f, 32.0774f, true, false, false, true);
			}
		}
	}
}

void func_69()//Position - 0x3970
{
	iLocal_45 = 3;
}

int func_83()//Position - 0x3FD8
{
	struct<3> Var0;
	struct<3> Var1;
	if (!bLocal_51)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_228, joaat("PLAYER"));
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_59[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_59[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), true))
			{
				__LIB_6__.func_771();
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					__LIB_6__.func_771();
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_61[1], false))
		{
			if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_61[0], false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_61[1], false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[0], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61[1], PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(iLocal_59[0]) && !PED::IS_PED_INJURED(iLocal_59[1]))
				{
					if (__LIB_35__.func_175())
					{
						__LIB_6__.func_771();
						func_41(0);
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_BIKES", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_59[0]) || PED::IS_PED_INJURED(iLocal_59[1]))
		{
			__LIB_6__.func_771();
			return 1;
		}
		Var0 = { 15f, 15f, 15f };
		Var1 = { -15f, -15f, -15f };
		if (!PED::IS_PED_INJURED(iLocal_59[0]))
		{
			if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 5f, true))
			{
				__LIB_6__.func_771();
				return 1;
			}
			Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f) };
			if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADELAUNCHER"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_STICKYBOMB"), true))
			{
				__LIB_6__.func_771();
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_59[0], 31086, 0f, 0f, 0f), 3f))
			{
				__LIB_6__.func_771();
				return 1;
			}
		}
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), (973.053f - 30f), (3616.7375f - 30f), (32.6181f - 30f), (973.053f + 30f), (3616.7375f + 30f), (32.6181f + 30f), false, true))
		{
			__LIB_6__.func_771();
			return 1;
		}
		if ((!PED::IS_PED_INJURED(iLocal_58) && !PED::IS_PED_INJURED(iLocal_59[0])) && !PED::IS_PED_INJURED(iLocal_59[1]))
		{
			if (iLocal_47 != -1)
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_59[1]))
				{
					__LIB_6__.func_771();
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 12f, 12f, 2.5f, false, true, 0))
			{
				if (((PED::CAN_PED_SEE_HATED_PED(iLocal_59[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_59[1], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[0], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_59[1], PLAYER::PLAYER_PED_ID()))
				{
					if (!iLocal_50)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), -1, false);
						iLocal_50 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_56))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_56, true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[0], true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_57[1]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_57[1], true);
					}
					if ((!__LIB_0__.func_75() || __LIB_11__.func_869("RECGF_SHUTUP")) || __LIB_11__.func_869("RECGF_PAYUP"))
					{
						if (iLocal_47 == -1)
						{
							iLocal_47 = MISC::GET_GAME_TIMER();
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								__LIB_6__.func_771();
								func_41(0);
								__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
							else
							{
								__LIB_6__.func_771();
								func_41(0);
								__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_REPEAT", 4, 0, 0, 0);
							}
						}
					}
				}
			}
			else
			{
				iLocal_50 = 0;
				iLocal_47 = -1;
			}
			if (iLocal_47 != -1 && MISC::GET_GAME_TIMER() > iLocal_47 + 10000)
			{
				__LIB_6__.func_771();
				func_41(0);
				__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_WARNED", 4, 0, 0, 0);
				return 1;
			}
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[0], PLAYER::PLAYER_PED_ID(), true) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_59[1], PLAYER::PLAYER_PED_ID(), true))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_35__.func_175())
					{
						__LIB_6__.func_771();
						func_41(0);
						__LIB_37__.func_799(&uLocal_63, "RECGFAU", "RECGF_DEALER", 4, 0, 0, 0);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()//Position - 0x44F0
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_60, false))
	{
		if ((!ENTITY::IS_ENTITY_AT_COORD(iLocal_60, 915.7905f, 3603.449f, 31.9111f, 5f, 5f, 5f, false, true, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_60, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_60, true))
		{
			func_64();
		}
	}
	else
	{
		func_64();
	}
}

int func_85()//Position - 0x454C
{
	int iVar0;
	if (((((!ENTITY::DOES_ENTITY_EXIST(iLocal_58) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_59[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_60)) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[0])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_61[1]))
	{
		STREAMING::REQUEST_MODEL(joaat("A_M_M_Skidrow_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
		STREAMING::REQUEST_MODEL(joaat("picador"));
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		STREAMING::REQUEST_ANIM_DICT("random@countryside_gang_fight");
		STREAMING::REQUEST_ANIM_DICT("veh@drivebystd_ds_grenades");
		STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_i");
		if (((((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Skidrow_01")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("picador"))) && STREAMING::HAS_MODEL_LOADED(joaat("hexer"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@countryside_gang_fight")) && STREAMING::HAS_ANIM_DICT_LOADED("veh@drivebystd_ds_grenades")) && STREAMING::HAS_ANIM_SET_LOADED("move_m@gangster@var_i"))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("picador"), true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(417.901f, 3578.0017f, 31.176f, 1305.8972f, 3604.3062f, 40.1064f, 100.0625f, false, false, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_48 - Vector(20f, 50f, 80f), Local_48 + Vector(20f, 50f, 70f), false, true, true, true);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			PED::ADD_RELATIONSHIP_GROUP("rghLost", &iLocal_228);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_228, joaat("PLAYER"));
			iLocal_58 = PED::CREATE_PED(26, joaat("A_M_M_Skidrow_01"), 973.053f, 3616.7375f, 31.6181f, 110.275276f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Skidrow_01"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_58, 17, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 185, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_58, 16);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "A_M_M_TRAMP_01_BLACK_MINI_01");
			__LIB_0__.func_203(&uLocal_63, 1, iLocal_58, "RECGFDealer", 0, 1);
			AUDIO::STOP_PED_SPEAKING(iLocal_58, true);
			TASK::TASK_PLAY_ANIM(iLocal_58, "random@countryside_gang_fight", "gangmember_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_58, "move_m@gangster@var_i", 0.25f);
			iLocal_60 = VEHICLE::CREATE_VEHICLE(joaat("picador"), 915.7905f, 3603.449f, 31.9111f, 111.9593f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_60, 37, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_60, 4, 0);
			VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_60, true);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_60, "WDU 696");
			iLocal_59[0] = PED::CREATE_PED(22, joaat("G_M_Y_Lost_01"), 970.2217f, 3614.821f, 31.6909f, 297.4345f, true, true);
			__LIB_0__.func_203(&uLocal_63, 3, iLocal_59[0], "RECGFLost2", 0, 1);
			iLocal_59[1] = PED::CREATE_PED(22, joaat("G_M_Y_Lost_02"), 971.504f, 3618.054f, 31.5565f, 216.9967f, true, true);
			__LIB_0__.func_203(&uLocal_63, 2, iLocal_59[1], "RECGFLost1", 0, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
			iLocal_61[0] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 968.2626f, 3611.7173f, 31.7874f, 296.8978f, true, true, false);
			iLocal_61[1] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 970.8362f, 3625.563f, 31.3415f, 212.3456f, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			TASK::TASK_PLAY_ANIM(iLocal_59[0], "random@countryside_gang_fight", "biker_02_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(iLocal_59[1], "random@countryside_gang_fight", "biker_01_stickup_loop", 1000f, -2f, -1, 1, 0f, false, false, false);
			iVar0 = 0;
			while (iVar0 < iLocal_59)
			{
				if (iVar0 < 2)
				{
					PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_59[iVar0], 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_59[iVar0], iLocal_228);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_59[iVar0], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_59[iVar0], 50, true);
					PED::SET_PED_COMBAT_RANGE(iLocal_59[iVar0], 0);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[0], joaat("WEAPON_PISTOL"), -1, true, true);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_59[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, true, true);
					PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_59[iVar0], true, 1);
				}
				iVar0++;
			}
			iLocal_55 = MISC::GET_GAME_TIMER() + 1500;
			if (__LIB_18__.func_173() == 0)
			{
				__LIB_0__.func_203(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (__LIB_18__.func_173() == 1)
			{
				__LIB_0__.func_203(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			else if (__LIB_18__.func_173() == 2)
			{
				__LIB_0__.func_203(&uLocal_63, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_146()//Position - 0x7D6B
{
	int iVar0;
	if (iLocal_49 && !iLocal_54)
	{
		if (!__LIB_11__.func_869("RECGF_SHOOT"))
		{
			__LIB_6__.func_771();
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::REMOVE_BLIP(&iLocal_56);
		}
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_58, 317, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_58, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_59)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_57[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_57[iVar0]));
			}
			if (!PED::IS_PED_INJURED(iLocal_59[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_59[iVar0], iLocal_61[iVar0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, 150f, 10f, true);
						PED::SET_PED_KEEP_TASK(iLocal_59[iVar0], true);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					}
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_59[iVar0], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_59[iVar0], false);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_61)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_61[iVar0], false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_61[iVar0]));
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE"))
				{
				}
			}
			iVar0++;
		}
		AUDIO::STOP_AUDIO_SCENE("RE_COUNTRYSIDE_GANG_FIGHT_SCENE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(417.901f, 3578.0017f, 31.176f, 1305.8972f, 3604.3062f, 40.1064f, 100.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		__LIB_0__.func_202(&uLocal_63, 1);
		__LIB_0__.func_202(&uLocal_63, 2);
		__LIB_0__.func_202(&uLocal_63, 3);
		__LIB_0__.func_202(&uLocal_63, 4);
	}
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

