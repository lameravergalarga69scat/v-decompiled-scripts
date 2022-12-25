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
	var uLocal_21 = 0;
	char* sLocal_22 = NULL;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_45 = 0f;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[2] = { 0, 0 };
	struct<3> Local_51[2];
	float fLocal_52[2] = { 0f, 0f };
	int iLocal_53 = 0;
	struct<3> Local_54 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_63 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	bool bLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	var uLocal_120 = 16;
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
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 5;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_45 = -1f;
	StringCopy(&Local_62, "", 24);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_58))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_58);
			}
		}
		func_212();
	}
	if (__LIB_39__::func_20(ScriptParam_285.f_1[0 /*3*/], -1, 0, 0, 0))
	{
		__LIB_39__::func_9(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_76) || iLocal_103)
		{
			if (!__LIB_39__::func_8())
			{
				if (__LIB_39__::func_15())
				{
					func_212();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_RA", 0);
			switch (iLocal_46)
			{
				case 0:
					if (__LIB_39__::func_25())
					{
						func_212();
					}
					if (!iLocal_71)
					{
						func_152();
					}
					else
					{
						func_151();
					}
					if (bLocal_72)
					{
						iLocal_70 = 1;
						iLocal_46 = 1;
					}
					break;
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_47)
						{
							case 0:
								func_144();
								iLocal_47 = 1;
								break;
							case 1:
								if (!func_143())
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, 75f, 75f, 75f, false, true, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_58)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 15f, 15f, 15f, false, true, 0))
									{
										if (!__LIB_39__::func_8())
										{
											TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, -1, 0, 2);
											PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
											func_142();
											__LIB_39__::func_11(1);
										}
										bLocal_79 = true;
									}
									if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), true))
										{
											func_142();
											bLocal_79 = true;
										}
									}
									if (bLocal_79)
									{
										func_127();
									}
									if (!PED::IS_PED_INJURED(iLocal_58) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_53, false))
										{
											iLocal_103 = 1;
										}
									}
									if (bLocal_104)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_53, 150f, 150f, 150f, false, true, 0))
											{
												iLocal_47 = 9;
											}
										}
									}
								}
								if (func_126())
								{
									func_142();
									iLocal_47 = 3;
								}
								else if (func_143())
								{
									func_142();
									__LIB_0__::func_638();
									iLocal_47 = 2;
								}
								break;
							case 2:
								switch (iLocal_98)
								{
									case 0:
										iLocal_47 = 3;
										break;
									case 1:
										iLocal_47 = 3;
										break;
									case 3:
										iLocal_47 = 3;
										break;
									case 4:
										iLocal_47 = 3;
										break;
									case 5:
										if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
										{
											iLocal_106 = 1;
											iLocal_49 = 9;
										}
										else
										{
											iLocal_49 = 13;
										}
										iLocal_47 = 1;
										break;
								}
								if (func_143())
								{
									switch (iLocal_48)
									{
										case 2:
											func_121();
											break;
										case 4:
											func_122();
											break;
										case 5:
											func_121();
											break;
										}
								}
								break;
							case 3:
								func_118();
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								if (!PED::IS_PED_INJURED(iLocal_58))
								{
									AUDIO::PLAY_PAIN(iLocal_58, 3, 0, 0);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
									{
										if (!iLocal_85)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !PED::IS_PED_RAGDOLL(iLocal_58))
											{
												PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_58, 16);
												TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_knees_girl", 1000f, -8f, -1, 8192, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "knees_loop_girl", 8f, -8f, -1, 8321, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_102);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
												iLocal_85 = 1;
											}
											else
											{
												TASK::TASK_COWER(iLocal_58, -1);
												iLocal_85 = 1;
											}
										}
										else if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "idle_girl", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_58, joaat("SCRIPT_TASK_COWER")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_58, joaat("SCRIPT_TASK_COWER")) != 1)
										{
											iLocal_85 = 0;
										}
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, false))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_88))
											{
												HUD::REMOVE_BLIP(&iLocal_88);
											}
										}
									}
								}
								else
								{
									func_117();
								}
								if (!__LIB_0__::func_75())
								{
									if (iLocal_95 < MISC::GET_GAME_TIMER())
									{
										if (__LIB_0__::func_680())
										{
											if (!PED::IS_PED_INJURED(iLocal_50[0]))
											{
												__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_YELL", 4, 0, 0, 0);
											}
										}
										else if (!PED::IS_PED_INJURED(iLocal_50[1]))
										{
											__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_YELL2", 4, 0, 0, 0);
										}
										iLocal_95 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 5000));
									}
								}
								if (PED::IS_PED_INJURED(iLocal_50[0]))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_89[0]))
									{
										HUD::REMOVE_BLIP(&(iLocal_89[0]));
									}
									__LIB_0__::func_221(&uLocal_120, 5);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(iLocal_89[0]))
								{
									HUD::REMOVE_BLIP(&(iLocal_89[0]));
								}
								if (PED::IS_PED_INJURED(iLocal_50[1]))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_89[1]))
									{
										HUD::REMOVE_BLIP(&(iLocal_89[1]));
									}
									__LIB_0__::func_221(&uLocal_120, 4);
								}
								else if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
								{
								}
								else if (HUD::DOES_BLIP_EXIST(iLocal_89[1]))
								{
									HUD::REMOVE_BLIP(&(iLocal_89[1]));
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_50[1]))
								{
									if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50[0], joaat("WEAPON_STUNGUN"), 0) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_50[1], joaat("WEAPON_STUNGUN"), 0)) || (PED::IS_PED_DEAD_OR_DYING(iLocal_50[0], true) && PED::IS_PED_DEAD_OR_DYING(iLocal_50[1], true))) || func_112())
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_89[0]))
										{
											HUD::REMOVE_BLIP(&(iLocal_89[0]));
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_89[1]))
										{
											HUD::REMOVE_BLIP(&(iLocal_89[1]));
										}
										if (!PED::IS_PED_INJURED(iLocal_58))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 15f, 15f, 15f, false, true, 0))
											{
												if (!__LIB_0__::func_75())
												{
													__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_THNK", 4, 0, 0, 0);
													bLocal_64 = false;
													iLocal_76 = 1;
													PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_58, 16);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_58);
													iLocal_47 = 4;
												}
											}
										}
									}
								}
								break;
							case 4:
								if (!bLocal_64)
								{
									if (!PED::IS_PED_INJURED(iLocal_58))
									{
										if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "idle_to_knees_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "knees_loop_girl", 1)) && !PED::IS_PED_RAGDOLL(iLocal_58))
										{
											TASK::TASK_PLAY_ANIM(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 4f, -4f, -1, 0, 0.3f, false, false, false);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iLocal_58);
										}
										PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_58, 0);
										PED::SET_PED_AS_GROUP_MEMBER(iLocal_58, __LIB_0__::func_495());
										PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_58, true);
										__LIB_39__::func_54();
										bLocal_64 = true;
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_58))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_58, "random@homelandsecurity", "knees_to_stand_girl") > 0.8f)
										{
											TASK::CLEAR_PED_TASKS(iLocal_58);
										}
									}
								}
								if (!iLocal_66)
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_ASK", 4, 0, 0, 0))
										{
											iLocal_66 = 1;
										}
									}
								}
								else if (!iLocal_65)
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_0__::func_683() == 0)
										{
											__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_RES1_M", 4, 0, 0, 0);
										}
										else if (__LIB_0__::func_683() == 1)
										{
											__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_GOGO", 4, 0, 0, 0);
										}
										iLocal_65 = 1;
									}
								}
								if (bLocal_64)
								{
									if (!PED::IS_PED_INJURED(iLocal_58))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_88))
											{
												HUD::REMOVE_BLIP(&iLocal_88);
											}
										}
										else if (!HUD::DOES_BLIP_EXIST(iLocal_88))
										{
											iLocal_88 = __LIB_0__::func_666(iLocal_58, 0, 145);
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_50[0]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (!PED::IS_PED_INJURED(iLocal_50[1]))
								{
									if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()))
									{
										if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
										{
										}
									}
								}
								if (iLocal_65 && func_106())
								{
									if (!__LIB_0__::func_75())
									{
										__LIB_0__::func_429();
										SYSTEM::WAIT(0);
										__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_COME", 4, 0, 0, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[0]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[1]));
										if (!PED::IS_PED_INJURED(iLocal_58))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_58))
											{
												iVar0 = 0;
												while (iVar0 < iLocal_50)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]))
													{
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[iVar0]));
													}
													iVar0++;
												}
												PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
												iLocal_47 = 5;
											}
										}
									}
								}
								break;
							case 5:
								func_98();
								func_93();
								func_92();
								func_89();
								func_88();
								if (__LIB_39__::func_52(Local_67))
								{
									func_68(0);
									__LIB_0__::func_429();
									SYSTEM::WAIT(0);
									__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_WRONG", 4, 0, 0, 0);
								}
								if (__LIB_39__::func_55())
								{
									func_68(0);
									__LIB_0__::func_429();
									SYSTEM::WAIT(0);
									__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_CULT", 4, 0, 0, 0);
								}
								if (!PED::IS_PED_INJURED(iLocal_58))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_58))
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_88))
											{
												HUD::REMOVE_BLIP(&iLocal_88);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_90))
											{
												HUD::REMOVE_BLIP(&iLocal_90);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_91))
											{
												HUD::REMOVE_BLIP(&iLocal_91);
											}
											if (PED::IS_PED_IN_GROUP(iLocal_58))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_58);
											}
											if (func_106())
											{
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, false);
												}
												iLocal_47 = 6;
											}
											else
											{
												__LIB_0__::func_429();
												SYSTEM::WAIT(0);
												__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
												if (!PED::IS_PED_INJURED(iLocal_58))
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
													TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_68, 1f, -1, 0.25f, 0, 38.9844f);
													TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_102);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
													PED::SET_PED_KEEP_TASK(iLocal_58, true);
												}
												__LIB_14__::func_593(__LIB_0__::func_683(), 1, 80, 0, 1);
												iLocal_47 = 7;
											}
										}
									}
								}
								break;
							case 6:
								func_34();
								break;
							case 7:
								func_4();
								break;
							case 9:
								func_117();
								break;
						}
						if (iLocal_116 && !iLocal_117)
						{
							if (iLocal_47 != 6)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_115) > 0.85f)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
										{
											if (!PED::IS_PED_INJURED(iLocal_58))
											{
												if (!PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_53, false))
												{
													if (!PED::IS_PED_RAGDOLL(iLocal_58))
													{
														TASK::CLEAR_PED_TASKS(iLocal_58);
														PED::SET_PED_INTO_VEHICLE(iLocal_58, iLocal_53, 2);
														PED::SET_PED_KEEP_TASK(iLocal_58, true);
														iLocal_117 = 1;
													}
													else
													{
														iLocal_117 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						if (__LIB_39__::func_47())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
							{
								PED::DELETE_PED(&iLocal_58);
							}
							func_4();
						}
						if ((iLocal_47 != 0 && iLocal_47 != 6) && iLocal_47 != 7)
						{
							if (func_1())
							{
								iLocal_47 = 9;
							}
						}
						if (iLocal_47 == 4 || iLocal_47 == 5)
						{
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 150f, 150f, 150f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
									__LIB_0__::func_429();
									func_117();
								}
							}
						}
						if (iLocal_47 < 5)
						{
							PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						}
						if (PED::IS_PED_INJURED(iLocal_50[0]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_89[0]))
							{
								HUD::REMOVE_BLIP(&(iLocal_89[0]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_50[1]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_89[1]))
							{
								HUD::REMOVE_BLIP(&(iLocal_89[1]));
							}
						}
						if (PED::IS_PED_INJURED(iLocal_58))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_88))
							{
								HUD::REMOVE_BLIP(&iLocal_88);
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}
}

int func_1()//Position - 0xC9F
{
	int iVar0[3];
	iVar0[0] = 0;
	iVar0[1] = 0;
	iVar0[2] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
	{
		if (PED::IS_PED_INJURED(iLocal_50[0]))
		{
			iVar0[0] = 1;
		}
	}
	else
	{
		iVar0[0] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[1]))
	{
		if (PED::IS_PED_INJURED(iLocal_50[1]))
		{
			iVar0[1] = 1;
		}
	}
	else
	{
		iVar0[1] = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
	{
		if (PED::IS_PED_INJURED(iLocal_58))
		{
			iVar0[2] = 1;
		}
	}
	else
	{
		iVar0[2] = 1;
	}
	if ((iVar0[0] && iVar0[1]) && iVar0[2])
	{
		return 1;
	}
	return 0;
}

void func_4()//Position - 0xD74
{
	while (__LIB_0__::func_75())
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_0__::func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_39__::func_24(-1, 0);
	__LIB_14__::func_557();
	func_212();
}

void func_34()//Position - 0x211E
{
	switch (iLocal_118)
	{
		case 0:
			__LIB_0__::func_429();
			SYSTEM::WAIT(0);
			__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_HOME", 4, 0, 0, 0);
			iLocal_118++;
			break;
		case 1:
			iLocal_118++;
			break;
		case 2:
			iLocal_118++;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2052, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_68, 1f, -1, 0.25f, 0, 38.9844f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_58, iLocal_102);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
				PED::SET_PED_KEEP_TASK(iLocal_58, true);
			}
			iLocal_118++;
			break;
		case 4:
			__LIB_14__::func_593(__LIB_0__::func_683(), 1, 80, 0, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_4();
			break;
	}
}

void func_68(bool bParam0)//Position - 0x35FF
{
	if (bParam0)
	{
		if (iLocal_61)
		{
			if (__LIB_14__::func_782(&uLocal_120, "REHOMAU", &Local_63, &Local_62, 8, 0, 0))
			{
				iLocal_61 = 0;
			}
		}
	}
	else if (!iLocal_61 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		Local_63 = { __LIB_0__::func_486() };
		Local_62 = { __LIB_13__::func_743() };
		__LIB_0__::func_638();
		iLocal_61 = 1;
	}
}

void func_88()//Position - 0x3E97
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (!iLocal_73)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(iLocal_58, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					func_68(0);
					__LIB_0__::func_429();
					SYSTEM::WAIT(0);
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_GETOUT", 4, 0, 0, 0);
					iLocal_73 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(iLocal_58, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				iLocal_73 = 0;
			}
		}
		if (!iLocal_74)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_68(0);
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_JACK", 4, 0, 0, 0);
				iLocal_74 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_74 = 0;
		}
		if (!iLocal_75)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_68(0);
				__LIB_0__::func_429();
				SYSTEM::WAIT(0);
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_SHOOT", 4, 0, 0, 0);
				iLocal_75 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_75 = 0;
		}
	}
}

void func_89()//Position - 0x3FBE
{
	if (!func_90())
	{
		func_68(1);
	}
	if (!__LIB_0__::func_75())
	{
		switch (iLocal_96)
		{
			case 0:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_WTF_M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_WTF_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			case 1:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_CORR", 4, 0, 0, 0);
				iLocal_96++;
				break;
			case 2:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_TALK", 4, 0, 0, 0);
				iLocal_96++;
				break;
			case 3:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_CAR_M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_CAR_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			case 4:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_TALK2", 4, 0, 0, 0);
				iLocal_96++;
				break;
			case 5:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_REJ_M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_REJ_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			case 6:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_TALK2b", 4, 0, 0, 0);
				iLocal_96++;
				break;
			case 7:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_TALK3", 4, 0, 0, 0);
				iLocal_96++;
				break;
			case 8:
				if (__LIB_0__::func_683() == 0)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_INT_M", 4, 0, 0, 0);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_INT_F", 4, 0, 0, 0);
				}
				iLocal_96++;
				break;
			case 9:
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_NOBAN", 4, 0, 0, 0);
				iLocal_96++;
				break;
			}
	}
}

int func_90()//Position - 0x41E6
{
	if (((((((((__LIB_17__::func_160("REHOM_QM") || __LIB_17__::func_160("REHOM_GETOUT")) || __LIB_17__::func_160("REHOM_SHOOT")) || __LIB_17__::func_160("REHOM_JACK")) || __LIB_17__::func_160("REHOM_WRONG")) || __LIB_17__::func_160("REHOM_CULT")) || __LIB_17__::func_160("REHOM_STOP")) || __LIB_17__::func_160("REHOM_NOVEH")) || __LIB_17__::func_160("REHOM_UNS1")) || __LIB_17__::func_160("REHOM_UNS2"))
	{
		return 1;
	}
	return 0;
}

void func_92()//Position - 0x42A2
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (PED::IS_PED_ON_FOOT(iLocal_58))
		{
			if (!iLocal_108)
			{
				iLocal_109 = MISC::GET_GAME_TIMER();
				iLocal_108 = 1;
			}
			else
			{
				iLocal_110 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_108 = 0;
		}
		if ((iLocal_110 - iLocal_109) > 180000)
		{
			if (PED::IS_PED_IN_GROUP(iLocal_58))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_58);
				__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_WK", 4, 0, 0, 0);
				func_117();
			}
		}
	}
}

void func_93()//Position - 0x430C
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_111)
		{
			iLocal_113 = MISC::GET_GAME_TIMER();
			iLocal_111 = 1;
		}
		else
		{
			iLocal_114 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_114 = 0;
		iLocal_111 = 0;
		iLocal_112 = 0;
	}
	if ((iLocal_114 - iLocal_113) > 50000 && !iLocal_112)
	{
		func_68(0);
		__LIB_0__::func_429();
		SYSTEM::WAIT(0);
		__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_QM", 4, 0, 0, 0);
		iLocal_112 = 1;
	}
	if ((iLocal_114 - iLocal_113) > 60000 && iLocal_112)
	{
		if (!PED::IS_PED_INJURED(iLocal_58))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			__LIB_6__::func_359(iLocal_58, 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_58, true);
			if (PED::IS_PED_IN_GROUP(iLocal_58))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_58);
			}
		}
		func_117();
	}
}

void func_98()//Position - 0x452E
{
	if (!PED::IS_PED_INJURED(iLocal_58))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_88))
			{
				HUD::REMOVE_BLIP(&iLocal_88);
			}
			if (!PED::IS_PED_IN_GROUP(iLocal_58))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_58, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_58, 0);
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_90))
				{
					iLocal_90 = __LIB_0__::func_488(Local_67, 1);
				}
				if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_90))
					{
						iLocal_90 = __LIB_0__::func_488(Local_67, 1);
					}
				}
				if (__LIB_0__::func_683() == 2 && !__LIB_39__::func_21())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_91))
					{
						iLocal_91 = __LIB_0__::func_488(Local_69, 0);
						HUD::SET_BLIP_SPRITE(iLocal_91, 269);
						__LIB_39__::func_53();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_88))
			{
				iLocal_88 = __LIB_0__::func_666(iLocal_58, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_90))
			{
				HUD::REMOVE_BLIP(&iLocal_90);
			}
		}
	}
}

int func_106()//Position - 0x4704
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_86 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_58, iLocal_86))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_112()//Position - 0x487A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, false) && PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_53, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_50[0], iLocal_53, false)) && !PED::IS_PED_IN_VEHICLE(iLocal_50[1], iLocal_53, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_117()//Position - 0x497B
{
	func_212();
}

void func_118()//Position - 0x4987
{
	if (!iLocal_77)
	{
		if (!PED::IS_PED_INJURED(iLocal_50[0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_50[0], 0);
			TASK::CLEAR_PED_TASKS(iLocal_50[0]);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
			TASK::TASK_CLEAR_LOOK_AT(0);
			TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_102);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
			PED::SET_PED_KEEP_TASK(iLocal_50[0], true);
			if (HUD::DOES_BLIP_EXIST(iLocal_89[0]))
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_89[0], false);
			}
			SYSTEM::SETTIMERB(0);
			iLocal_77 = 1;
		}
		else
		{
			SYSTEM::SETTIMERB(500);
			iLocal_77 = 1;
		}
	}
	if (!iLocal_78)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_89[1]))
		{
			HUD::SET_BLIP_AS_FRIENDLY(iLocal_89[1], false);
		}
		__LIB_0__::func_429();
		SYSTEM::WAIT(0);
		if (!PED::IS_PED_INJURED(iLocal_50[1]))
		{
			__LIB_0__::func_640(iLocal_50[1], "GENERIC_INSULT_HIGH", 24);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_50[1], 2);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115)) && !PED::IS_PED_RAGDOLL(iLocal_50[1]))
			{
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_50[1], 16);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
				TASK::TASK_PLAY_ANIM(0, "random@homelandsecurity", "idle_to_stand_cop_ground", 4f, -2f, 1400, 8192, 0f, false, false, false);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_102);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
				PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
				iLocal_78 = 1;
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
				iLocal_78 = 1;
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_cop_ground", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_50[1], "random@homelandsecurity", "idle_to_stand_cop_ground", 1)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_COMBAT")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_COMBAT")) != 1)
		{
			iLocal_78 = 1;
		}
	}
}

void func_121()//Position - 0x4D84
{
	iLocal_47 = 3;
}

void func_122()//Position - 0x4D8F
{
	__LIB_0__::func_429();
	SYSTEM::WAIT(0);
	__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_AGG", 4, 0, 0, 0);
	iLocal_47 = 3;
}

int func_126()//Position - 0x4DF4
{
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_50[iLocal_92], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[iLocal_92], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iLocal_92++;
	}
	return 0;
}

void func_127()//Position - 0x4E33
{
	iLocal_94 = MISC::GET_GAME_TIMER();
	if (!bLocal_104)
	{
		switch (iLocal_49)
		{
			case 0:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
				{
					iLocal_93 = MISC::GET_GAME_TIMER();
					iLocal_49 = 1;
				}
				break;
			case 1:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_COM", 4, 0, 0, 0))
				{
					iLocal_93 = MISC::GET_GAME_TIMER();
					iLocal_49 = 2;
				}
				break;
			case 2:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 6000)
				{
					if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = MISC::GET_GAME_TIMER();
						iLocal_49 = 3;
					}
				}
				break;
			case 3:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_COM2", 4, 0, 0, 0))
				{
					iLocal_93 = MISC::GET_GAME_TIMER();
					iLocal_49 = 4;
				}
				break;
			case 4:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if ((iLocal_94 - iLocal_93) > 5500)
				{
					if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_PLEA", 4, 0, 0, 0))
					{
						iLocal_93 = MISC::GET_GAME_TIMER();
						iLocal_49 = 5;
					}
				}
				break;
			case 5:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_131() && !iLocal_82)
				{
					iLocal_49 = 13;
				}
				if (!iLocal_83 && SYSTEM::TIMERA() > 5000)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_58, -1, 2054, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_58, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_102);
					PED::SET_PED_KEEP_TASK(iLocal_50[0], true);
					iLocal_83 = 1;
				}
				if ((iLocal_94 - iLocal_93) > 3000 || iLocal_82)
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_58))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_115) > 0.98f)
							{
								if (!__LIB_0__::func_75())
								{
									if (PED::IS_PED_FACING_PED(iLocal_50[0], iLocal_58, 10f))
									{
										if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
										{
											TASK::TASK_CLEAR_LOOK_AT(iLocal_50[0]);
											iLocal_115 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_115, iLocal_53, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
											ENTITY::PLAY_ENTITY_ANIM(iLocal_53, "exit_car", "random@homelandsecurity", 4f, false, false, false, 0f, 0);
											iLocal_116 = 1;
											iLocal_93 = MISC::GET_GAME_TIMER();
											iLocal_49 = 6;
										}
									}
								}
							}
						}
					}
				}
				if (func_130())
				{
					iLocal_49 = 15;
				}
				break;
			case 15:
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_58))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
					{
						if (!__LIB_0__::func_75())
						{
							if (PED::IS_PED_FACING_PED(iLocal_50[0], iLocal_58, 10f))
							{
								if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_ARR", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_50[0]);
									iLocal_115 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_115, iLocal_53, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_58, iLocal_115, "random@homelandsecurity", "exit_girl", 2f, -4f, 1, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_115, "random@homelandsecurity", "exit_cop_gun", 2f, -4f, 1, 0, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_115, "random@homelandsecurity", "exit_cop_ground", 2f, -4f, 1, 0, 1000f, 0);
									ENTITY::PLAY_ENTITY_ANIM(iLocal_53, "exit_car", "random@homelandsecurity", 2f, false, false, false, 0f, 0);
									iLocal_116 = 1;
									iLocal_93 = MISC::GET_GAME_TIMER();
									iLocal_49 = 6;
								}
							}
						}
					}
				}
				break;
			case 6:
				func_128();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_115) > 0.45f)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_58)) && !PED::IS_PED_INJURED(iLocal_50[0]))
						{
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_115) > 0.9f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_50[0]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_50[0], iLocal_53, -1, -1, 1f, 9, 0);
								iLocal_49 = 7;
							}
						}
					}
				}
				break;
			case 7:
				func_128();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_115) > 0.95f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_50[1]))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_50[1], iLocal_53, -1, 0, 1f, 9, 0);
								PED::SET_PED_KEEP_TASK(iLocal_50[1], true);
								iLocal_49 = 8;
							}
						}
					}
				}
				break;
			case 8:
				func_128();
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false) && !PED::IS_PED_INJURED(iLocal_50[0])) && !PED::IS_PED_INJURED(iLocal_50[1]))
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_58, iLocal_53) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_50[0], iLocal_53)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_50[1], iLocal_53))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_50[0], iLocal_53, 15f, 786468);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_53, true);
						bLocal_104 = true;
					}
				}
				break;
			case 9:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_102);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
				if (!iLocal_80)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
					{
						__LIB_0__::func_429();
						SYSTEM::WAIT(0);
						__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_GUN", 4, 0, 0, 0);
					}
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
					{
						__LIB_0__::func_429();
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_50[0]))
						{
							__LIB_0__::func_640(iLocal_50[0], "GUN_COOL", 24);
						}
					}
					iLocal_80 = 1;
					iLocal_100 = MISC::GET_GAME_TIMER();
				}
				iLocal_49 = 10;
				break;
			case 10:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 6000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && !iLocal_81)
				{
					if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_STAY3", 4, 0, 0, 0))
					{
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_81 = 1;
					}
					iLocal_49 = 11;
				}
				break;
			case 11:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 15f, 15f, 15f, false, true, 0))
				{
					iLocal_101 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if (((iLocal_101 - iLocal_100) > 9000 && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) || iLocal_106)
				{
					if (__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_SHOO", 4, 0, 0, 0))
					{
						iLocal_49 = 12;
					}
				}
				break;
			case 12:
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_101 = MISC::GET_GAME_TIMER();
				}
				else
				{
					iLocal_49 = 13;
				}
				if ((iLocal_101 - iLocal_100) > 13000)
				{
					iLocal_47 = 3;
				}
				break;
			case 13:
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2052, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[0], iLocal_102);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
				}
				if (iLocal_107)
				{
					if (!PED::IS_PED_INJURED(iLocal_50[1]))
					{
						if (!PED::IS_PED_INJURED(iLocal_58))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_58, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_58, 20000, 0, 2);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_58, -1f, 0f, 0f, 1f, -1, 0.1f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_102);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_50[1], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_102);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 20000, 0, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_102);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[1], iLocal_102);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_102);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_58))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_58, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
						{
							TASK::TASK_SEEK_COVER_FROM_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, false);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
					}
				}
				iLocal_49 = 14;
				break;
			case 14:
				if (func_132())
				{
					iLocal_49 = 9;
				}
				if (func_130())
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_115))
					{
						if (!iLocal_107)
						{
							if (!PED::IS_PED_INJURED(iLocal_50[1]))
							{
							}
							if (!PED::IS_PED_INJURED(iLocal_58))
							{
								TASK::TASK_SEEK_COVER_FROM_PED(iLocal_58, PLAYER::PLAYER_PED_ID(), -1, false);
								PED::SET_PED_KEEP_TASK(iLocal_58, true);
							}
							iLocal_107 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_50[0]))
				{
					if (!__LIB_0__::func_75() && !iLocal_82)
					{
						if (__LIB_0__::func_680())
						{
							__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_AWAY1", 4, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_AWAY2", 4, 0, 0, 0);
						}
						iLocal_82 = 1;
					}
					iLocal_83 = 0;
					SYSTEM::SETTIMERA(0);
					iLocal_93 = (MISC::GET_GAME_TIMER() - 4500);
					iLocal_49 = 5;
				}
			}
	}
}

void func_128()//Position - 0x57E6
{
	if (!__LIB_0__::func_75())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_53, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_58, iLocal_53, false))
				{
					if (__LIB_0__::func_336(iLocal_58, 0) == 2)
					{
						if (iLocal_95 < MISC::GET_GAME_TIMER())
						{
							__LIB_2__::func_859(&uLocal_120, "REHOMAU", "REHOM_FOLL", 4, 0, 0, 0);
							iLocal_95 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 4000));
						}
					}
				}
			}
		}
	}
}

int func_130()//Position - 0x58D2
{
	if ((!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1])) && !PED::IS_PED_INJURED(iLocal_58))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 1.5f, 1.5f, 5f, false, true, 2) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 2.5f, 2.5f, 5f, false, true, 2)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 1.5f, 1.5f, 5f, false, true, 2))
			{
				return 1;
			}
		}
		else if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 0.5f, 0.5f, 5f, false, true, 1) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 0.5f, 0.5f, 5f, false, true, 1)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58, 0.5f, 0.5f, 5f, false, true, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_131()//Position - 0x59D4
{
	if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 6f, 6f, 6f, false, true, 0))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 6f, 6f, 6f, false, true, 0))
		{
			if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_132()//Position - 0x5A5A
{
	if (!PED::IS_PED_INJURED(iLocal_50[1]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1], 6f, 6f, 6f, false, true, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_50[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0], 6f, 6f, 6f, false, true, 1))
		{
			if (PED::IS_PED_FACING_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 120f))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_142()//Position - 0x6033
{
	if (HUD::DOES_BLIP_EXIST(iLocal_87))
	{
		HUD::REMOVE_BLIP(&iLocal_87);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_88))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, false))
		{
			iLocal_88 = __LIB_0__::func_666(iLocal_58, 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_88, false);
		}
	}
	else
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_88, true);
	}
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_89[iLocal_92]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iLocal_92], false))
			{
				iLocal_89[iLocal_92] = __LIB_0__::func_666(iLocal_50[iLocal_92], 0, 145);
				HUD::SHOW_HEIGHT_ON_BLIP(iLocal_89[iLocal_92], false);
			}
		}
		else
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_89[iLocal_92], true);
		}
		iLocal_92++;
	}
}

int func_143()//Position - 0x60D6
{
	int iVar0;
	int iVar1;
	if (!bLocal_99)
	{
		if (MISC::IS_PROJECTILE_IN_AREA(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true) || MISC::IS_BULLET_IN_BOX(Local_54 - Vector(30f, 30f, 30f), Local_54 + Vector(30f, 30f, 30f), true))
		{
			iLocal_48 = 2;
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) && !PED::IS_PED_INJURED(iLocal_50[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), 6f, 6f, 6f, false, true, 0)))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[0])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[1])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_50[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_50[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_50[1], PLAYER::PLAYER_PED_ID()))
						{
							iLocal_48 = 2;
							return 1;
						}
					}
				}
			}
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
				{
					iLocal_48 = 2;
					return 1;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_53, false))
				{
					iLocal_48 = 2;
					return 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, iVar0, true))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_53, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 2;
				return 1;
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_53, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar1, iLocal_53))
					{
						iLocal_48 = 2;
						return 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[0]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_50[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_50[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 5;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_50[1]) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 0.1f)
			{
				iLocal_48 = 5;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], iVar0, true))
				{
					iLocal_48 = 5;
					return 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58, false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_58))
			{
				iLocal_48 = 4;
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, iVar0, true))
				{
					iLocal_48 = 4;
					return 1;
				}
			}
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_58, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_48 = 4;
			return 1;
		}
	}
	return 0;
}

void func_144()//Position - 0x6490
{
	__LIB_13__::func_824(39, 1);
	__LIB_13__::func_824(40, 1);
	__LIB_13__::func_824(41, 1);
	__LIB_13__::func_824(42, 1);
	__LIB_13__::func_824(43, 1);
	__LIB_13__::func_824(44, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(374.869f, -1358.043f, 25.667f, 452.41f, -1423.882f, 38.337f, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_68 - Vector(20f, 20f, 20f), Local_68 + Vector(20f, 20f, 20f), false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(Local_59, 50f, 0);
	PATHFIND::SET_PED_PATHS_IN_AREA(419f, -1387f, 28f, 427f, -1370f, 29f, false, 0);
	MISC::SET_BIT(&uLocal_97, 5);
	iLocal_58 = PED::CREATE_PED(26, iLocal_60, Local_59, 0f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_60);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_58, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_58, 185, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_58, 206, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_58, 2, false);
	AUDIO::STOP_PED_SPEAKING(iLocal_58, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_58, "REHOMGirl");
	PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 0, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 3, 1, 4, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 4, 0, 5, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_58, 6, 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("OFFICERS", &iLocal_119);
	iLocal_92 = 0;
	while (iLocal_92 <= 1)
	{
		iLocal_50[iLocal_92] = PED::CREATE_PED(6, iLocal_56, Local_51[iLocal_92 /*3*/], fLocal_52[iLocal_92], true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iLocal_92], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_56);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50[iLocal_92], iLocal_119);
		PED::SET_PED_CONFIG_FLAG(iLocal_50[iLocal_92], 42, true);
		iLocal_92++;
	}
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_50[0], joaat("WEAPON_PISTOL"), -1, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_50[1], joaat("WEAPON_PISTOL"), -1, false, true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_119, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_119, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_119);
	iLocal_53 = VEHICLE::CREATE_VEHICLE(iLocal_57, Local_54, fLocal_55, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_57, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_53, 5f);
	VEHICLE::SET_VEHICLE_SIREN(iLocal_53, true);
	__LIB_0__::func_222(&uLocal_120, 5, iLocal_50[0], "ACULTMember1", 0, 1);
	__LIB_0__::func_222(&uLocal_120, 4, iLocal_50[1], "ACULTMember2", 0, 1);
	__LIB_0__::func_222(&uLocal_120, 3, iLocal_58, "REHOMGirl", 0, 1);
	if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_120, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_120, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_115 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_115, iLocal_53, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_58, iLocal_115, "random@homelandsecurity", "idle_girl", 4f, -2f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[0], iLocal_115, "random@homelandsecurity", "idle_cop_gun", 4f, -2f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(iLocal_50[1], iLocal_115, "random@homelandsecurity", "idle_cop_ground", 4f, -2f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_115, true);
}

void func_151()//Position - 0x6D1D
{
	STREAMING::REQUEST_MODEL(iLocal_60);
	STREAMING::REQUEST_MODEL(iLocal_56);
	STREAMING::REQUEST_MODEL(iLocal_57);
	STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_60) && STREAMING::HAS_MODEL_LOADED(iLocal_56)) && STREAMING::HAS_MODEL_LOADED(iLocal_57)) && STREAMING::HAS_ANIM_DICT_LOADED("random@homelandsecurity"))
	{
		bLocal_72 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_60);
		STREAMING::REQUEST_MODEL(iLocal_56);
		STREAMING::REQUEST_MODEL(iLocal_57);
		STREAMING::REQUEST_ANIM_DICT("random@homelandsecurity");
	}
}

void func_152()//Position - 0x6D88
{
	iLocal_60 = joaat("A_F_Y_Tourist_01");
	iLocal_56 = joaat("A_M_O_ACult_01");
	iLocal_57 = joaat("fugitive");
	Local_59 = { -174.0522f, 1905.6106f, 197.0466f };
	Local_51[0 /*3*/] = { -174.3279f, 1903.9724f, 197.0502f };
	fLocal_52[0] = 147.8596f;
	Local_51[1 /*3*/] = { -174.3233f, 1906.3843f, 197.0145f };
	fLocal_52[1] = 164.5974f;
	Local_54 = { -172.4207f, 1905.183f, 197.1163f };
	fLocal_55 = 187.3899f;
	Local_67 = { 469.8768f, 2617.5325f, 42.2566f };
	Local_68 = { 472.2393f, 2611.6108f, 42.2676f };
	Local_69 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_71 = 1;
}

void func_212()//Position - 0xA169
{
	int iVar0;
	if (iLocal_70)
	{
		__LIB_14__::func_804(0);
		if (Global_32201)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		__LIB_39__::func_23();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(420.5f, -1387f, 28f, 427f, -1379f, 29f, 0);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		__LIB_0__::func_429();
		if (iLocal_71)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_60);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_56);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_57);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_57, false);
		}
		iVar0 = 0;
		while (iVar0 < iLocal_50)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_50[iVar0]))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_50[iVar0], __LIB_0__::func_85(PLAYER::PLAYER_ID()), -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_50[iVar0], true);
						if (!PED::IS_PED_INJURED(iLocal_58))
						{
							TASK::TASK_COWER(iLocal_58, -1);
							PED::SET_PED_KEEP_TASK(iLocal_58, true);
						}
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_50[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_58))
		{
			if (!PED::IS_PED_INJURED(iLocal_58))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_58, 317, true);
				if (PED::IS_PED_IN_GROUP(iLocal_58))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_58);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_58, false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_58);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_58);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_53))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_53);
		}
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
	__LIB_39__::func_19(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

