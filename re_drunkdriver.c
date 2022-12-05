#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_19 = 0;
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
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61[2] = { 0, 0 };
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	struct<3> Local_66 = { 0, 0, 0 } ;
	float fLocal_67 = 0f;
	int iLocal_68 = 0;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	int iLocal_72 = 0;
	int iLocal_73[2] = { 0, 0 };
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
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	struct<6> Local_117 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_118[24] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	struct<3> Local_125 = { 0, 0, 0 } ;
	var uLocal_126[2] = { 0, 0 };
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<3> Local_129 = { 0, 0, 0 } ;
	int iLocal_130 = 0;
	float fLocal_131 = 0f;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 16;
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
	var uLocal_285 = 0;
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
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	int iLocal_305 = 0;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	bool bLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	struct<2> Local_311 = { 0, 5 } ;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 5;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
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
	iLocal_19 = 3;
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
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_71 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_104 = -1;
	StringCopy(&Local_117, "", 24);
	iLocal_132 = -1;
	Local_306 = { -1017.3451f, -1354.1962f, 4.4568f };
	Local_307 = { 2003.4564f, 3071.1018f, 46.0499f };
	Local_55 = { ScriptParam_311.f_1[0 /*3*/] };
	func_280();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_240();
	}
	if (__LIB_42__.func_565(Local_55, 27, bLocal_308, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_128 = MISC::GET_GAME_TIMER();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_58)
		{
			if (!__LIB_35__.func_175())
			{
				if (__LIB_40__.func_735())
				{
					func_240();
				}
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_DD", 0);
			switch (iLocal_51)
			{
				case 0:
					if (iLocal_54)
					{
						iLocal_139 = 1;
						iLocal_51 = 1;
					}
					else
					{
						if (__LIB_40__.func_738())
						{
							func_240();
						}
						if (!bLocal_56)
						{
							func_180();
						}
						if (bLocal_56)
						{
							func_179();
						}
					}
					break;
				case 1:
					func_172();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						__LIB_0__.func_400();
						func_168();
						if (iLocal_52 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
						{
							func_76();
							if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_73[0], false))
									{
										if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
										{
											PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
										}
										TASK::CLEAR_PED_TASKS(iLocal_73[0]);
										TASK::TASK_SMART_FLEE_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
										__LIB_7__.func_787(iLocal_73[0], 120000, 0);
										PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
										__LIB_6__.func_771();
										SYSTEM::WAIT(0);
										__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
								}
								func_66();
							}
						}
						if (iLocal_52 == 2 || (iLocal_52 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_73[1])))
						{
							func_76();
							if (iLocal_53 != 9)
							{
								if (func_74() || ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
									{
										if (!PED::IS_PED_INJURED(iLocal_73[0]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
											}
											TASK::CLEAR_PED_TASKS(iLocal_73[0]);
											TASK::TASK_SMART_FLEE_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											__LIB_7__.func_787(iLocal_73[0], 120000, 0);
											PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
									{
										if (!PED::IS_PED_INJURED(iLocal_73[1]))
										{
											if (PED::IS_PED_IN_GROUP(iLocal_73[1]))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_73[1]);
											}
											TASK::CLEAR_PED_TASKS(iLocal_73[1]);
											TASK::TASK_SMART_FLEE_PED(iLocal_73[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
											__LIB_7__.func_787(iLocal_73[1], 120000, 0);
											PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
										}
									}
									if (iLocal_52 == 1)
									{
										__LIB_6__.func_771();
										SYSTEM::WAIT(0);
										__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_CRAZY", 4, 0, 0, 0);
									}
									if (iLocal_52 == 2)
									{
										__LIB_6__.func_771();
										SYSTEM::WAIT(0);
										__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_AT", 4, 0, 0, 0);
									}
									func_66();
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_73[0], 1f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_73[1]))
							{
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_73[1], 1f);
							}
						}
					}
					if ((__LIB_30__.func_881() && !__LIB_30__.func_880()) && iLocal_53 != 9)
					{
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_73[0], Local_71, 5f, 5f, 5f, false, true, 0))
							{
								if (iLocal_52 == 2)
								{
									if (!PED::IS_PED_INJURED(iLocal_73[1]))
									{
										if (!PED::IS_PED_IN_GROUP(iLocal_73[0]) && !PED::IS_PED_IN_GROUP(iLocal_73[1]))
										{
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[0], __LIB_0__.func_399());
											PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[1], __LIB_0__.func_399());
										}
									}
								}
								__LIB_0__.func_488(0);
								SYSTEM::WAIT(0);
								__LIB_6__.func_771();
								iLocal_53 = 9;
							}
						}
					}
					if (__LIB_30__.func_896())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
						{
							PED::DELETE_PED(&(iLocal_73[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
						{
							PED::DELETE_PED(&(iLocal_73[1]));
						}
						func_36();
					}
					if ((func_35() || func_34()) || func_3())
					{
						func_66();
					}
					break;
			}
		}
		else
		{
			func_240();
		}
		func_1();
	}
}

void func_1()//Position - 0x4DA
{
	if (((iLocal_52 == 1 && iLocal_53 == 7) && iLocal_60 == 5) && iLocal_90)
	{
		iLocal_128 = MISC::GET_GAME_TIMER();
		if (func_2())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				Local_129 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
			}
		}
	}
}

int func_2()//Position - 0x532
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (iLocal_52 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
						{
							return 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(iLocal_73[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
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

int func_3()//Position - 0x5FF
{
	if (iLocal_52 == 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 200f, 200f, 200f, false, true, 0))
			{
				return 1;
			}
			if (((!__LIB_11__.func_869("REDR2_DC") && !__LIB_11__.func_869("REDR2_AKA")) && !__LIB_11__.func_869("REDR2_OFFR")) && !__LIB_11__.func_869("REDR2_CULT"))
			{
				func_5(1);
			}
			if (((((((((((((((((!__LIB_11__.func_869("REDR2_DC") && !__LIB_11__.func_869("REDR2_AKA")) && !__LIB_11__.func_869("REDR2_AKB")) && !__LIB_11__.func_869("REDR2_TRY")) && !__LIB_11__.func_869("REDR2_JIC")) && !__LIB_11__.func_869("REDR2_CH")) && !__LIB_11__.func_869("REDR2_WH2")) && !__LIB_11__.func_869("REDR2_BCK")) && !__LIB_11__.func_869("REDR2_JIA")) && !__LIB_11__.func_869("REDR2_JIB")) && !__LIB_11__.func_869("REDR2_JIC")) && !__LIB_11__.func_869("REDR2_WHA")) && !__LIB_11__.func_869("REDR2_WHB")) && !__LIB_11__.func_869("REDR2_WHC")) && !__LIB_11__.func_869("REDR2_PSM")) && !__LIB_11__.func_869("REDR2_PSF")) && !__LIB_11__.func_869("REDR2_PST")) && !__LIB_11__.func_869("REDR2_TK"))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_74) && ENTITY::GET_ENTITY_HEALTH(iLocal_74) < iLocal_68)
				{
					iLocal_68 = ENTITY::GET_ENTITY_HEALTH(iLocal_74);
					func_5(0);
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_DC", 4, 0, 0, 0);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false) || VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_74))
			{
				__LIB_6__.func_771();
				SYSTEM::WAIT(0);
				if (!__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_LC", 4, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_73[0], 40000f, 0);
							PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
						}
						if (!PED::IS_PED_INJURED(iLocal_73[1]))
						{
							TASK::TASK_GO_TO_ENTITY(iLocal_73[1], iLocal_73[0], -1, 0f, 1f, 2f, 0);
							PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
						}
						return 1;
					}
				}
			}
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_74, 0, 2) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), false))
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_73[0]);
					TASK::TASK_SMART_FLEE_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				if (!PED::IS_PED_INJURED(iLocal_73[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_73[1]);
					TASK::TASK_SMART_FLEE_PED(iLocal_73[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_5(bool bParam0)//Position - 0x8CB
{
	if (bParam0)
	{
		if (iLocal_116)
		{
			if (__LIB_36__.func_42(&uLocal_140, "REDR2AU", &cLocal_118, &Local_117, 8, 0, 0))
			{
				iLocal_116 = 0;
			}
		}
	}
	else if ((!iLocal_116 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_11__.func_869("REDR1_SWV"))
	{
		cLocal_118 = { __LIB_0__.func_390() };
		Local_117 = { __LIB_9__.func_980() };
		__LIB_6__.func_833();
		iLocal_116 = 1;
	}
}

int func_34()//Position - 0x12E0
{
	if (iLocal_52 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_73[0]) && PED::IS_PED_INJURED(iLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x1323
{
	if (iLocal_52 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
		{
			return 1;
		}
	}
	if (iLocal_52 == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
		{
			return 1;
		}
	}
	return 0;
}

void func_36()//Position - 0x1369
{
	while (!__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_40__.func_741(27, bLocal_308);
	__LIB_20__.func_174();
	func_240();
}

void func_66()//Position - 0x25EA
{
	func_240();
}

int func_74()//Position - 0x27D2
{
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 1;
	}
	if ((MISC::IS_BULLET_IN_AREA(Local_125, 40f, true) || MISC::IS_BULLET_IN_AREA(__LIB_0__.func_85(PLAYER::PLAYER_ID()), 10f, false)) || MISC::IS_PROJECTILE_IN_AREA(Local_125 - Vector(40f, 40f, 40f), Local_125 + Vector(40f, 40f, 40f), false))
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_73[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), true) || ENTITY::IS_ENTITY_IN_WATER(iLocal_73[0]))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73[0], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_73[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_73[0]))
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_73[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_73[1], PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
				{
					return 1;
				}
			}
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_73[1]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_73[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(iLocal_73[1], PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_76()//Position - 0x299A
{
	int iVar0;
	switch (iLocal_53)
	{
		case 0:
			if (iLocal_52 == 1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1017.4605f, -1259.8677f, 3.9183f, -1061.8914f, -1424.029f, 24.4253f, 171.75f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_125, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125, 15f, 15f, 15f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_124))
					{
						HUD::REMOVE_BLIP(&iLocal_124);
					}
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_126[0]))
						{
							uLocal_126[0] = __LIB_6__.func_850(iLocal_73[0], 0, 145);
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_126[0], false);
						}
					}
					if (!__LIB_35__.func_175())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iLocal_75 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						__LIB_42__.func_20(&uLocal_140, "REDR1AU", "REDR1_DCO", 4, 0, 0, 0, 0);
						func_157(1);
						__LIB_0__.func_367(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1011.1443f, -1378.79f, 4.1997f, -1039.6846f, -1337.6096f, 9.7035f, 37.875f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
						{
							__LIB_9__.func_990();
							TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_1", "drunk_argument_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_1", "drunk_argument_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_103 = (MISC::GET_GAME_TIMER() + 60000);
							if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
							{
								HUD::SHOW_HEIGHT_ON_BLIP(uLocal_126[0], true);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1820.2384f, 3671.9485f, 30.8437f, 1957.8176f, 3751.8875f, 55.4436f, 159.9375f, false, true, 0) && CAM::IS_SPHERE_VISIBLE(Local_125, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125, 15f, 15f, 15f, false, true, 0))
				{
					func_154();
					if (!__LIB_35__.func_175())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							iLocal_75 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						}
						func_157(1);
						__LIB_0__.func_367(1);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1877.7609f, 3727.6997f, 31.882f, 1896.9618f, 3693.83f, 34.9925f, 19.1875f, false, true, 0))
					{
						__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_DCA", 4, 0, 0, 0);
						if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_126[0], true);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_126[1]))
						{
							HUD::SHOW_HEIGHT_ON_BLIP(uLocal_126[1], true);
						}
						iLocal_103 = (MISC::GET_GAME_TIMER() + 120000);
						iLocal_53 = 3;
					}
				}
			}
			break;
		case 1:
			if (iLocal_103 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73[1], 7000, 2060, 4);
					TASK::TASK_PAUSE(0, 2500);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				}
				if (!PED::IS_PED_INJURED(iLocal_73[1]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73[0], 7000, 2060, 4);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_53 = 3;
			}
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 8f, 8f, 4f, false, true, 0))
				{
					if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 80f))
					{
						bLocal_101 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
				else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 30f, 30f, 30f, false, true, 0))
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(true);
				}
				else
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
				}
			}
			break;
		case 3:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[1]))
					{
						if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_DCL", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 8f, 8f, 4f, false, true, 0))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 80f))
						{
							bLocal_101 = true;
							SYSTEM::SETTIMERA(0);
							iLocal_53 = 4;
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 30f, 30f, 30f, false, true, 0))
					{
						func_153();
						if (__LIB_0__.func_436())
						{
							__LIB_0__.func_488(0);
						}
					}
					else if (__LIB_0__.func_75())
					{
						__LIB_0__.func_488(1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_62, 15f, 15f, 15f, false, true, 0) && !PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 80f))
						{
							if (PED::CAN_PED_SEE_HATED_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
								}
								if (!PED::IS_PED_INJURED(iLocal_73[1]))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_53 = 4;
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1889.1215f, 3715.0566f, 31.844f, 1895.6075f, 3703.5864f, 34.8272f, 12.4375f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "exit_1", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
						if (!PED::IS_PED_INJURED(iLocal_73[1]))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_53 = 4;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_74, 1.5f, 1.5f, 5f, false, true, 0) && PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__.func_436())
						{
							__LIB_0__.func_488(0);
						}
						__LIB_6__.func_771();
						SYSTEM::WAIT(0);
						if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TRY", 4, 0, 0, 0))
						{
							iLocal_137 = 2;
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_126[iLocal_59]))
								{
									HUD::REMOVE_BLIP(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_127))
							{
								iLocal_127 = __LIB_6__.func_825(iLocal_74, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_73[0]);
							}
							iLocal_53 = 4;
						}
					}
				}
				if (iLocal_103 < MISC::GET_GAME_TIMER())
				{
					if (__LIB_0__.func_436())
					{
						__LIB_0__.func_488(0);
					}
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_DRV", 4, 0, 0, 0))
					{
						if ((!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_74))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73[1], -1, 2060, 4);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, -1, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_73[0], -1, 2060, 4);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_73[0], 0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, 0, 1f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
							iLocal_59 = 0;
							while (iLocal_59 <= 1)
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_126[iLocal_59]))
								{
									HUD::REMOVE_BLIP(&(uLocal_126[iLocal_59]));
								}
								iLocal_59++;
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		case 4:
			if (iLocal_52 == 1)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 8f, 8f, 4f, false, true, 0) || bLocal_101)
							{
								AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], -1, 2060, 4);
								if ((MISC::GET_GAME_TIMER() + 50000) > iLocal_103 || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
								{
									__LIB_6__.func_833();
									if (bLocal_101)
									{
										if (!__LIB_0__.func_75())
										{
											if (__LIB_18__.func_173() == 0)
											{
												if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_HYM", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_137++;
												}
											}
											else if (__LIB_18__.func_173() == 1)
											{
												if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_HYF", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_137++;
												}
											}
											else if (__LIB_18__.func_173() == 2)
											{
												if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_HYT", 4, 0, 0, 0))
												{
													SYSTEM::SETTIMERA(0);
													iLocal_137++;
												}
											}
										}
									}
									else
									{
										iLocal_137++;
									}
								}
							}
						}
						break;
					case 1:
						if (!__LIB_0__.func_75())
						{
							if (func_149())
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
									TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd1", 2f, -2f, -1, 0, 0f, false, false, false);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
									if (!PED::IS_PED_INJURED(iLocal_73[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
										TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_breakout_dd2", 2f, -2f, -1, 0, 0f, false, false, false);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_73[0], 0);
										TASK::TASK_PAUSE(0, 3000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1052.2147f, -1354.9374f, 4.3754f, 1f, -1, 1f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1061.4636f, -1384.9216f, 4.2462f, 1f, -1, 1f, 1, 40000f);
										TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
									}
									func_148();
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 80f))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10000, 2060, 4);
										__LIB_6__.func_833();
										SYSTEM::WAIT(0);
										iLocal_137++;
									}
									else
									{
										func_147(iLocal_73[0], &(uLocal_61[0]));
									}
								}
								if (!__LIB_0__.func_75())
								{
									iLocal_137++;
								}
							}
						}
						break;
					case 2:
						if (func_149())
						{
							iLocal_137 = 6;
						}
						else
						{
							iLocal_137++;
						}
						break;
					case 3:
						if (!iLocal_84)
						{
							if (SYSTEM::TIMERA() > 1500)
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
									SYSTEM::SETTIMERA(0);
									iLocal_84 = 1;
								}
							}
						}
						func_147(iLocal_73[0], &(uLocal_61[0]));
						if (!__LIB_0__.func_75())
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_LFT", 4, 0, 0, 0))
							{
								iLocal_137++;
							}
						}
						break;
					case 4:
						if (!func_149())
						{
							if (!__LIB_0__.func_75())
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_PLS", 4, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
									if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
									{
										HUD::REMOVE_BLIP(&(uLocal_126[0]));
									}
									if (HUD::DOES_BLIP_EXIST(uLocal_126[1]))
									{
										HUD::REMOVE_BLIP(&(uLocal_126[1]));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 1);
										if (!PED::IS_PED_INJURED(iLocal_73[0]))
										{
											TASK::TASK_ENTER_VEHICLE(iLocal_73[0], iLocal_74, -1, 0, 1f, 1, 0);
										}
									}
									iLocal_137++;
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_126[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_126[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_126[1]));
							}
							iLocal_137++;
						}
						break;
					case 5:
						if (func_149())
						{
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_73[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_73[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[0], __LIB_0__.func_399());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_73[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_73[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_80, joaat("PLAYER"));
								__LIB_39__.func_555();
							}
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_74)
								{
									if (!__LIB_0__.func_75())
									{
										if (__LIB_18__.func_173() == 0)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TKM", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (__LIB_18__.func_173() == 1)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TKF", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
										else if (__LIB_18__.func_173() == 2)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TKT", 4, 0, 0, 0))
											{
												iLocal_53 = 7;
											}
										}
									}
								}
								else
								{
									iLocal_53 = 7;
								}
							}
						}
						break;
					case 6:
						func_147(iLocal_73[0], &(uLocal_61[0]));
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_149())
							{
								if (!__LIB_0__.func_75())
								{
									if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_AKB", 4, 0, 0, 0))
									{
										iLocal_137 = 10;
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					case 7:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (func_149())
							{
								if (!__LIB_0__.func_75())
								{
									if (__LIB_18__.func_173() == 0)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_JIA", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_137 = 10;
										}
									}
									else if (__LIB_18__.func_173() == 1)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_JIB", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_137 = 10;
										}
									}
									else if (__LIB_18__.func_173() == 2)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_JIC", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_137 = 10;
										}
									}
								}
							}
							else
							{
								iLocal_137 = 4;
							}
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					case 10:
						if (func_149())
						{
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								if (!PED::IS_PED_IN_GROUP(iLocal_73[0]))
								{
									TASK::CLEAR_PED_TASKS(iLocal_73[0]);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[0], __LIB_0__.func_399());
									PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_73[0], true);
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_73[0], 0);
								}
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_80, joaat("PLAYER"));
								__LIB_39__.func_555();
							}
							iLocal_137++;
						}
						else
						{
							iLocal_137 = 4;
						}
						break;
					case 11:
						iLocal_53 = 7;
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_137)
				{
					case 0:
						if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10f, 10f, 10f, false, true, 0))
							{
								if (PED::IS_PED_FACING_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 50f))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
									if (__LIB_0__.func_436())
									{
										__LIB_0__.func_488(0);
									}
									__LIB_6__.func_833();
									SYSTEM::WAIT(0);
									if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_AKA", 4, 0, 0, 0))
									{
										iLocal_137++;
									}
								}
								else
								{
									func_147(iLocal_73[0], &(uLocal_61[0]));
								}
							}
						}
						break;
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
							TASK::TASK_PAUSE(0, 500);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
							SYSTEM::SETTIMERA(0);
							iLocal_137++;
						}
						break;
					case 2:
						func_147(iLocal_73[0], &(uLocal_61[0]));
						if (!PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 1);
							}
						}
						if (SYSTEM::TIMERA() > 8000)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_126[0]));
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_126[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_126[1]));
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_127))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
								{
									iLocal_127 = __LIB_6__.func_825(iLocal_74, 0, 0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 1);
								}
							}
						}
						if (!__LIB_0__.func_75())
						{
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 20f, 20f, 20f, false, true, 0) && SYSTEM::TIMERA() > 9500)
								{
									iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
									if (iVar0 < 60)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_PLS", 4, 0, 0, 0))
										{
											SYSTEM::SETTIMERA(0);
										}
									}
									else if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_CAR", 4, 0, 0, 0))
									{
										SYSTEM::SETTIMERA(0);
									}
								}
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, true))
							{
								iLocal_53 = 7;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
				{
					if (SYSTEM::TIMERA() > 50000 || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_74, -1, false) == iLocal_73[0])
					{
						if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_FU", 4, 0, 0, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_74))
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_74, -1, false) && PED::IS_PED_IN_VEHICLE(iLocal_73[0], iLocal_74, false))
									{
										TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_73[0], iLocal_74, false);
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_74, -1, false) == iLocal_73[0])
									{
										iLocal_53 = 2;
									}
									else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_74, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										iLocal_53 = 7;
									}
									else
									{
										__LIB_7__.func_787(iLocal_73[0], 120000, 0);
										TASK::TASK_WANDER_STANDARD(iLocal_73[0], 40000f, 0);
										PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
										SYSTEM::WAIT(0);
										func_66();
									}
								}
							}
							else if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								__LIB_7__.func_787(iLocal_73[0], 120000, 0);
								TASK::TASK_WANDER_STANDARD(iLocal_73[0], 40000f, 0);
								PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
								SYSTEM::WAIT(0);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (SYSTEM::TIMERA() > 60000)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_74, -1, false))
							{
								if (!PED::IS_PED_INJURED(iLocal_73[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, -1, 1f, 1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
								}
							}
							if (!PED::IS_PED_INJURED(iLocal_73[1]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, 0, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
							}
							iLocal_53 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], iLocal_74, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT")) != 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_74, 5f);
								VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_74, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_74, -1016.1517f, -1352.8549f, 4.4854f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_74, -1005.7568f, -1353.8058f, 4.4756f, 4, 50f, 262144, -1f, 100f, true);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_74, -989.2302f, -1354.2777f, -7.3581f, 4, 50f, 262144, -1f, 100f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
								PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
								func_66();
							}
						}
					}
				}
			}
			if (iLocal_52 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[0], iLocal_74) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[1], iLocal_74))
						{
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_74, true);
							TASK::CLEAR_PED_TASKS(iLocal_73[1]);
							TASK::TASK_STAND_STILL(iLocal_73[1], -1);
							PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
							iLocal_53 = 5;
						}
						if (!iLocal_81)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[0], iLocal_74) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[1], iLocal_74))
							{
								TASK::CLEAR_PED_TASKS(iLocal_73[0]);
								TASK::TASK_STAND_STILL(iLocal_73[0], -1);
							}
							if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[0], iLocal_74) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_73[1], iLocal_74))
							{
								TASK::CLEAR_PED_TASKS(iLocal_73[1]);
								TASK::TASK_STAND_STILL(iLocal_73[1], -1);
							}
							iLocal_81 = 1;
						}
					}
				}
			}
			break;
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_73[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_74, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_74, 0f, 2f, 0f), 10f, 0, iLocal_78, 262144, 5f, -1f);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_74, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_74, 9, 1500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_74, 24, 500);
					TASK::TASK_VEHICLE_TEMP_ACTION(0, iLocal_74, 11, 1500);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_74, 2185.8171f, 3915.4714f, 27.9257f, 4, 30f, 262144, 0f, 0f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
					PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
				}
			}
			iLocal_53 = 6;
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_73[0]) == 5)
					{
						func_66();
					}
				}
			}
			break;
		case 7:
			if (iLocal_52 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[1], 50f, 50f, 50f, false, true, 0))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_73[1]));
					}
				}
				switch (iLocal_60)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_126[0]))
							{
								uLocal_126[0] = __LIB_6__.func_850(iLocal_73[0], 0, 145);
							}
							iLocal_60++;
							SYSTEM::SETTIMERA(0);
						}
						break;
					case 1:
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!PED::IS_PED_INJURED(iLocal_73[0]))
							{
								if (func_149())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
									{
										fLocal_131 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 1);
										iLocal_60++;
									}
								}
								else if (!iLocal_99)
								{
									if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
									{
										iLocal_99 = 1;
									}
								}
							}
						}
						break;
					case 2:
						func_144();
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							if (func_149())
							{
								if (!iLocal_98)
								{
									if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 1) > (fLocal_131 + 5f))
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_LEA", 4, 0, 0, 0))
										{
											iLocal_98 = 1;
										}
									}
								}
							}
							else if (!iLocal_99)
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_LFC", 4, 0, 0, 0))
								{
									iLocal_99 = 1;
								}
							}
						}
						if (func_2())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 1);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_126[0]));
							}
							if (__LIB_18__.func_173() == 2 && !__LIB_30__.func_880())
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_83))
								{
									iLocal_83 = __LIB_0__.func_392(Local_71, 0);
									HUD::SET_BLIP_SPRITE(iLocal_83, 269);
									__LIB_39__.func_554();
								}
							}
							iLocal_58 = 1;
							iLocal_60++;
						}
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 1) > 50f)
							{
								func_66();
							}
						}
						break;
					case 3:
						if (!__LIB_0__.func_75())
						{
							SYSTEM::WAIT(1500);
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							if (__LIB_18__.func_173() == 0)
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_WHA", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (__LIB_18__.func_173() == 1)
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_WHB", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
							else if (__LIB_18__.func_173() == 2)
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_WHC", 4, 0, 0, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					case 4:
						if (!__LIB_0__.func_75())
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_WH2", 4, 0, 0, 0))
							{
								iLocal_138 = MISC::GET_GAME_TIMER();
								iLocal_60++;
							}
						}
						break;
					case 5:
						func_139();
						func_138();
						func_144();
						if (!iLocal_90)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_138) > 7000)
							{
								if (!__LIB_0__.func_75())
								{
									if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_ILL", 4, 0, 0, 0))
									{
										iLocal_138 = MISC::GET_GAME_TIMER();
										iLocal_90 = 1;
									}
								}
							}
						}
						else if (func_2())
						{
							if (iLocal_89 && !bLocal_88)
							{
								func_137();
							}
							else
							{
								func_134();
								func_133();
								CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							}
						}
						if (__LIB_39__.func_553(Local_69))
						{
							func_5(0);
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_OFFR", 4, 0, 0, 0);
						}
						if (__LIB_40__.func_740())
						{
							func_5(0);
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_CULT", 4, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_73[0], Local_69, Global_22, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_82))
								{
									HUD::REMOVE_BLIP(&iLocal_82);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_83))
								{
									HUD::REMOVE_BLIP(&iLocal_83);
								}
								iLocal_53 = 8;
							}
						}
						break;
					}
			}
			if (iLocal_52 == 2)
			{
				switch (iLocal_60)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, true))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_126[0]))
								{
									uLocal_126[0] = __LIB_6__.func_850(iLocal_73[0], 0, 145);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_126[1]))
								{
									uLocal_126[1] = __LIB_6__.func_850(iLocal_73[1], 0, 145);
								}
								if (!__LIB_0__.func_75())
								{
									SYSTEM::SETTIMERA(0);
									if (__LIB_18__.func_173() == 0)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_JIA", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (__LIB_18__.func_173() == 1)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_JIB", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
									else if (__LIB_18__.func_173() == 2)
									{
										if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_JIC", 4, 0, 0, 0))
										{
											iLocal_60++;
										}
									}
								}
							}
						}
						break;
					case 1:
						if (!PED::IS_PED_INJURED(iLocal_73[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_73[0]);
							TASK::TASK_ENTER_VEHICLE(iLocal_73[0], iLocal_74, 30000, 2, 2f, 1, 0);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_60++;
						break;
					case 2:
						if (!PED::IS_PED_INJURED(iLocal_73[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_74, 1.5f, -3f, 0f, 1f, 4000, 0.1f, true);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_74, 30000, 1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_60++;
						break;
					case 3:
						func_139();
						func_138();
						if (!iLocal_97)
						{
							if (!__LIB_0__.func_75())
							{
								if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_BCK", 4, 0, 0, 0))
								{
									iLocal_97 = 1;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_73[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_73[1], false))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && PED::IS_PED_IN_VEHICLE(iLocal_73[1], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_80, joaat("PLAYER"));
										__LIB_39__.func_555();
										iLocal_59 = 0;
										while (iLocal_59 <= (iLocal_72 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_126[iLocal_59]))
											{
												HUD::REMOVE_BLIP(&(uLocal_126[iLocal_59]));
											}
											iLocal_59++;
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_127))
										{
											HUD::REMOVE_BLIP(&iLocal_127);
										}
										if (__LIB_18__.func_173() == 2 && !__LIB_30__.func_880())
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_83))
											{
												iLocal_83 = __LIB_0__.func_392(Local_71, 0);
												HUD::SET_BLIP_SPRITE(iLocal_83, 269);
												__LIB_39__.func_554();
											}
										}
										if (__LIB_18__.func_173() == 0)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_WHA", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_60++;
											}
										}
										else if (__LIB_18__.func_173() == 1)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_WHB", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_60++;
											}
										}
										else if (__LIB_18__.func_173() == 2)
										{
											if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_WHC", 4, 0, 0, 0))
											{
												SYSTEM::SETTIMERA(0);
												iLocal_60++;
											}
										}
									}
								}
							}
						}
						break;
					case 4:
						func_139();
						func_138();
						if (!__LIB_0__.func_75())
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_WH2", 4, 0, 0, 0))
							{
								iLocal_58 = 1;
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_138 = MISC::GET_GAME_TIMER();
								iLocal_60++;
							}
						}
						break;
					case 5:
						func_139();
						if (iLocal_309 == 0 || iLocal_309 == 9)
						{
							func_138();
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_138) > 9000)
						{
							func_125();
						}
						if (iLocal_309 == 9 && ((MISC::GET_GAME_TIMER() - iLocal_310) > 6000 && (MISC::GET_GAME_TIMER() - iLocal_310) < 6500))
						{
							__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_CHAT", 4, 0, 0, 0);
						}
						if (__LIB_39__.func_553(Local_69))
						{
							func_5(0);
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_OFFR", 4, 0, 0, 0);
						}
						if (__LIB_40__.func_740())
						{
							func_5(0);
							__LIB_6__.func_771();
							SYSTEM::WAIT(0);
							__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_CULT", 4, 0, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
						{
							if ((!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, false))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_73[0], Local_69, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_73[1], Local_69, Global_22, false, true, 0))
								{
									iLocal_60++;
								}
							}
						}
						break;
					case 6:
						if (HUD::DOES_BLIP_EXIST(iLocal_82))
						{
							HUD::REMOVE_BLIP(&iLocal_82);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_83))
						{
							HUD::REMOVE_BLIP(&iLocal_83);
						}
						iLocal_53 = 8;
						break;
					}
			}
			break;
		case 8:
			iLocal_59 = 0;
			while (iLocal_59 <= (iLocal_72 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_73[iLocal_59]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73[iLocal_59], false);
				}
				iLocal_59++;
			}
			if (iLocal_52 == 1)
			{
				if (__LIB_0__.func_398(1, 0, 1) && iLocal_104 == -1)
				{
					__LIB_6__.func_833();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 5f), 2, false);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iLocal_74)
						{
							iLocal_104 = 0;
						}
						else
						{
							iLocal_104 = 1;
						}
					}
					else
					{
						iLocal_104 = 2;
					}
				}
				if (iLocal_104 == 0)
				{
					func_123();
				}
				if (iLocal_104 == 1)
				{
					func_122();
				}
				if (iLocal_104 == 2)
				{
					func_121();
				}
				if (bLocal_110)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
			if (iLocal_52 == 2)
			{
				if (__LIB_0__.func_398(1, 0, 1) && iLocal_104 == -1)
				{
					__LIB_6__.func_771();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (10.5f - 4f), 2, false);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1143.5865f, 2672.2236f, 37.1142f, 70f, 2);
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(930.2788f, 2856.145f, 59.2884f, 70f, 2);
					}
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					while (__LIB_0__.func_75())
					{
						SYSTEM::WAIT(0);
					}
					if (func_2())
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iLocal_74)
						{
							iLocal_104 = 0;
						}
					}
				}
				if (iLocal_104 == 0)
				{
					func_110();
				}
				else if (iLocal_104 == 1)
				{
					func_109();
				}
				else if (iLocal_104 == 2)
				{
					func_77();
				}
				if (bLocal_110)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_36();
				}
			}
			break;
		case 9:
			break;
	}
}

void func_77()//Position - 0x4A2D
{
	switch (iLocal_106)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10000, 2060, 4);
			}
			if (!PED::IS_PED_INJURED(iLocal_73[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
			}
			__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
			iLocal_106++;
			break;
		case 1:
			iLocal_106++;
			break;
		case 2:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_73[0], Local_70, 1f, -1, 40000f, 0.5f);
					iLocal_105 = MISC::GET_GAME_TIMER() + 500;
					iLocal_106++;
				}
			}
			break;
		case 3:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_73[1]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_73[1], Local_70, 1f, -1, 0.25f, 0, 40000f);
					iLocal_106++;
				}
			}
			break;
		case 4:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				iLocal_106++;
			}
			break;
		case 5:
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_109()//Position - 0x5F02
{
	int iVar0;
	switch (iLocal_106)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_73[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
						}
						if (!PED::IS_PED_INJURED(iLocal_73[1]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_73[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[1]);
						}
					}
					__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					iLocal_106++;
				}
			}
			break;
		case 1:
			iLocal_106++;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_73[1]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70, 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				iLocal_105 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_106++;
			}
			break;
		case 3:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_73[0], Local_70, 1f, -1, 0.25f, 0, 40000f);
					iLocal_106++;
				}
			}
			break;
		case 4:
			if (__LIB_18__.func_173() == 2)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
				{
					iLocal_105 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_106 = 7;
				}
			}
			else if (__LIB_18__.func_173() == 1)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
				{
					iLocal_105 = MISC::GET_GAME_TIMER() + 1500;
					iLocal_106 = 7;
				}
			}
			else if (__LIB_18__.func_173() == 0)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
				{
					iLocal_105 = MISC::GET_GAME_TIMER() + 750;
					iLocal_106 = 7;
				}
			}
			break;
		case 5:
			iLocal_106++;
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				if (__LIB_18__.func_173() == 2)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_73[0], Local_70, 1f, -1, 0.25f, 0, 40000f);
						iLocal_105 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_106++;
					}
				}
				if (__LIB_18__.func_173() == 1 || __LIB_18__.func_173() == 0)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_73[0], Local_70, 1f, -1, 0.25f, 0, 40000f);
						iLocal_105 = MISC::GET_GAME_TIMER() + 3500;
						iLocal_106++;
					}
				}
			}
			break;
		case 7:
			if (!__LIB_0__.func_75())
			{
				iLocal_106++;
			}
			break;
		case 8:
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_110()//Position - 0x61B7
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_106)
	{
		case 0:
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_74))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_73[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_73[0]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 4000, 2060, 4);
						}
						if (!PED::IS_PED_INJURED(iLocal_73[1]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_73[1]);
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[1]);
						}
					}
					StringCopy(&cLocal_118, "", 24);
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TK", 4, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					iLocal_106++;
				}
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
			{
				iLocal_108 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3348f, 2643.9084f, 37.862f, 1.5062f, 0f, 20.274f, 33.0256f, false, 2);
				iLocal_109 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1121.3016f, 2643.9983f, 37.8919f, 1.5062f, 0f, 18.7019f, 33.0256f, false, 2);
				CAM::SHAKE_CAM(iLocal_108, "HAND_SHAKE", 0.3f);
				CAM::SHAKE_CAM(iLocal_109, "HAND_SHAKE", 0.3f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_109, iLocal_108, 2500, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				MISC::CLEAR_AREA(Local_69, 8f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_74, 1120.5507f, 2647.3071f, 36.9963f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_74, 179.7675f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_74, 5f);
				iLocal_105 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_106++;
			}
			break;
		case 2:
			if (iLocal_105 - 500) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_73[1]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[1], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70, 1f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
						PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
					}
				}
			}
			if (iLocal_105 - 1000) < MISC::GET_GAME_TIMER()
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70 - Vector(0f, 0f, 1f), 1f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
						PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
					}
				}
			}
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_108, 1105.8485f, 2664.653f, 38.047f, 3.6983f, 0.0242f, -140.4768f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_109, 1105.9995f, 2664.4695f, 38.0625f, 3.6984f, 0.0242f, -140.4769f, 41.7126f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_109, iLocal_108, 5000, 0, 0);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_105 = MISC::GET_GAME_TIMER() + 6000;
				iLocal_106++;
			}
			break;
		case 3:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				CAM::SET_CAM_PARAMS(iLocal_108, 1122.3701f, 2646.1082f, 38.3339f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_109, 1122.3378f, 2646.1575f, 38.3281f, -5.6746f, -0.1271f, 33.7683f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_109, iLocal_108, 1500, 1, 1);
				if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_73[0], 1141.1556f, 2643.2046f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_73[0], 262.7369f);
					ENTITY::SET_ENTITY_COORDS(iLocal_73[1], 1140.152f, 2644.149f, 37.1487f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_73[1], 262.1522f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (__LIB_18__.func_173() == 2)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKT", 4, 0, 0, 0))
					{
					}
				}
				else if (__LIB_18__.func_173() == 1)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKF", 4, 0, 0, 0))
					{
					}
				}
				else if (__LIB_18__.func_173() == 0)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_TKM", 4, 0, 0, 0))
					{
					}
				}
				iLocal_105 = MISC::GET_GAME_TIMER() + 1700;
				iLocal_106++;
			}
			break;
		case 4:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				iLocal_106++;
			}
			break;
		case 5:
			iLocal_106 = 7;
			break;
		case 6:
			if (!__LIB_0__.func_75())
			{
				if (__LIB_18__.func_173() == 2)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_NOT", 4, 0, 0, 0))
					{
						iLocal_105 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_106++;
					}
				}
				if (__LIB_18__.func_173() == 1 || __LIB_18__.func_173() == 0)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_MIS", 4, 0, 0, 0))
					{
						iLocal_105 = MISC::GET_GAME_TIMER() + 5500;
						iLocal_106++;
					}
				}
			}
			break;
		case 7:
			STREAMING::NEW_LOAD_SCENE_STOP();
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
			PED::DELETE_PED(&(iLocal_73[0]));
			PED::DELETE_PED(&(iLocal_73[1]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 7);
			}
			if (iLocal_111)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_74, false))
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_74, true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			}
			CAM::SET_CAM_ACTIVE(iLocal_108, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 40, 0, 1);
			bLocal_110 = true;
	}
	if (iLocal_106 != 0)
	{
		if (__LIB_6__.func_841(1000))
		{
			__LIB_6__.func_771();
			iLocal_111 = 1;
			iLocal_106 = 7;
		}
	}
}

void func_121()//Position - 0x6A9F
{
	switch (iLocal_106)
	{
		case 0:
			if (!__LIB_0__.func_75())
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10000, 2060, 4);
				}
				if (bLocal_88)
				{
					__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
				}
				else
				{
					__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
				}
				iLocal_106++;
			}
			break;
		case 1:
			iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_106++;
			break;
		case 2:
			if (__LIB_18__.func_173() == 0)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 1)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 2)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
				iLocal_105 = MISC::GET_GAME_TIMER() + 2000;
				iLocal_106++;
			}
			break;
		case 4:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				iLocal_106++;
			}
			break;
		case 5:
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_122()//Position - 0x6C7E
{
	int iVar0;
	switch (iLocal_106)
	{
		case 0:
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0) && !__LIB_0__.func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_73[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		case 1:
			iLocal_106++;
			break;
		case 2:
			iLocal_106++;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
			}
			__LIB_7__.func_787(iLocal_73[0], 120000, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_106++;
			break;
		case 4:
			iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
			if (__LIB_18__.func_173() == 0)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 1)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 2)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		case 5:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				iLocal_106++;
			}
			break;
		case 6:
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_123()//Position - 0x6EB1
{
	switch (iLocal_106)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_74) && !__LIB_0__.func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_73[0]);
						PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 10000, 2060, 4);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 10000, 2060, 4);
					}
					if (bLocal_88)
					{
						__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK", 4, 0, 0, 0);
					}
					else
					{
						__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_TK1", 4, 0, 0, 0);
					}
					iLocal_106++;
				}
			}
			break;
		case 1:
			iLocal_106++;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4194304);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1800);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_70, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_1", "drunk_fall_over", 2f, -2f, -1, 2359304, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
				__LIB_7__.func_787(iLocal_73[0], 120000, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
				iLocal_106++;
			}
			break;
		case 3:
			iLocal_105 = MISC::GET_GAME_TIMER() + 3000;
			if (__LIB_18__.func_173() == 0)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBM", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 1)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBF", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			else if (__LIB_18__.func_173() == 2)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_GBT", 4, 0, 0, 0))
				{
					iLocal_106++;
				}
			}
			break;
		case 4:
			if (iLocal_105 < MISC::GET_GAME_TIMER())
			{
				iLocal_106++;
			}
			break;
		case 5:
			iLocal_106++;
			break;
		case 6:
			iLocal_106++;
			break;
		case 7:
			__LIB_40__.func_942(__LIB_18__.func_173(), 1, 80, 0, 1);
			bLocal_110 = true;
			break;
	}
}

void func_125()//Position - 0x71CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
	{
		iVar0 = 0;
		iVar1 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
		if (iVar1 != 0)
		{
			iVar2 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1);
			if (iVar2 == 4)
			{
				iVar0 = 1;
			}
		}
		if ((((((((__LIB_30__.func_897(64) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || iVar0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	switch (iLocal_309)
	{
		case 0:
			if (func_129())
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], iLocal_73[1], -1, 2060, 4);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], iLocal_73[0], -1, 2060, 4);
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_HC", 4, 0, 0, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_73[0], iLocal_79);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "cardrunkflirt_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_73[1], iLocal_79);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
					iLocal_310 = MISC::GET_GAME_TIMER();
					iLocal_309++;
				}
			}
			break;
		case 1:
			if (!__LIB_0__.func_75())
			{
				iLocal_310 = MISC::GET_GAME_TIMER();
				iLocal_309++;
			}
			break;
		case 2:
			if (func_129())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_310) > 5000)
				{
					if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_CH", 4, 0, 0, 0))
					{
						iLocal_310 = MISC::GET_GAME_TIMER();
						iLocal_309++;
					}
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_310) > 15000)
			{
				if (func_129())
				{
					TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 2f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_intro_f", 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_309++;
				}
			}
			break;
		case 4:
			if (func_129())
			{
				__LIB_6__.func_842();
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_intro_m") > 0.9f)
					{
						TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
						iLocal_310 = MISC::GET_GAME_TIMER();
						iLocal_309++;
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_73[0]);
				TASK::CLEAR_PED_TASKS(iLocal_73[1]);
				iLocal_309 = 3;
			}
			break;
		case 5:
			if (func_129())
			{
				__LIB_6__.func_842();
				func_126();
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_73[1], false), false))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_310) > 15000)
					{
						bVar3 = false;
						iVar4 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
						if (iVar4 != 0)
						{
							iVar5 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar4);
							if (iVar5 == 4)
							{
								bVar3 = true;
							}
						}
						if (!bVar3)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_enter_m", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "random@drunk_driver_2", "driver_idle_m", 2f, -2f, -1, 1, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_79);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
						}
						if (__LIB_18__.func_173() == 0)
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_PSM", 4, 0, 0, 0))
							{
								iLocal_310 = MISC::GET_GAME_TIMER();
								iLocal_309++;
							}
						}
						else if (__LIB_18__.func_173() == 1)
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_PSF", 4, 0, 0, 0))
							{
								iLocal_310 = MISC::GET_GAME_TIMER();
								iLocal_309++;
							}
						}
						else if (__LIB_18__.func_173() == 2)
						{
							if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_PST", 4, 0, 0, 0))
							{
								iLocal_310 = MISC::GET_GAME_TIMER() + 14000;
								iLocal_309++;
							}
						}
					}
				}
			}
			break;
		case 6:
			__LIB_6__.func_842();
			func_126();
			if ((MISC::GET_GAME_TIMER() - iLocal_310) > 5000 && func_129())
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_73[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m") > 0.9f)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3))
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 2f, -2f, -1, 0, 0f, false, false, false);
							}
							TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 2f, -2f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_outro_f", 2f, -2f, -1, 0, 0f, false, false, false);
							iLocal_309++;
						}
					}
				}
			}
			break;
		case 7:
			__LIB_6__.func_842();
			if (func_129())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.25f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") > 0.2f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), 0, 0f, 0f, 20f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
						iLocal_310 = MISC::GET_GAME_TIMER();
						iLocal_309++;
					}
				}
			}
			break;
		case 8:
			__LIB_6__.func_842();
			if (func_129())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_73[1], false), false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_outro_m") < 0.525f)
						{
							TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_2", "cardrunksex_loop_m", 2f, -2f, -1, 1, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 2f, -2f, -1, 1, 0f, false, false, false);
							iLocal_309 = 6;
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_310) > 10000)
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_73[0]);
					TASK::CLEAR_PED_TASKS(iLocal_73[1]);
					iLocal_310 = MISC::GET_GAME_TIMER();
					iLocal_309++;
				}
			}
			break;
	}
}

void func_126()//Position - 0x78B6
{
	if (!PED::IS_PED_INJURED(iLocal_73[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f", 3))
			{
				if ((((ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.15f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.1f) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.35f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.3f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.65f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.6f)) || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") < 0.9f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[1], "random@drunk_driver_2", "cardrunksex_loop_f") > 0.85f))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), 0, 0f, 0f, 15f, -0.4f, 0f, 0f, 0, true, true, true, false, true);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUSPENSION_SCRIPT_FORCE", PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), 0, false, 0);
				}
			}
		}
	}
}

int func_129()//Position - 0x7A2A
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_73[1]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[1], false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_73[1], false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_73[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], iVar0, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false) == iLocal_73[0] && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false) == iLocal_73[1])
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

void func_133()//Position - 0x7BFF
{
	if (!bLocal_88)
	{
		if ((((((((!__LIB_11__.func_869("REDR1_SWV") && !__LIB_11__.func_869("REDR1_COM")) && !__LIB_11__.func_869("REDR1_BANT1")) && !__LIB_11__.func_869("REDR1_SIK")) && !__LIB_11__.func_869("REDR2_DC")) && !__LIB_11__.func_869("REDR1_OFFR")) && !__LIB_11__.func_869("REDR2_OFFR")) && !__LIB_11__.func_869("REDR1_CULT")) && !__LIB_11__.func_869("REDR2_CULT"))
		{
			func_5(1);
		}
		if ((iLocal_90 && !iLocal_114) && (MISC::GET_GAME_TIMER() - iLocal_138) > 9000)
		{
			if (!__LIB_0__.func_75())
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_BANT1", 4, 0, 0, 0))
				{
					iLocal_114 = 1;
				}
			}
		}
	}
	if (iLocal_114 && !iLocal_115)
	{
		if (!__LIB_0__.func_75())
		{
			if (__LIB_18__.func_173() == 0)
			{
				__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_RESPM", 4, 0, 0, 0);
			}
			else if (__LIB_18__.func_173() == 1)
			{
				__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_RESPF", 4, 0, 0, 0);
			}
			else if (__LIB_18__.func_173() == 2)
			{
				__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_RESPT", 4, 0, 0, 0);
			}
			iLocal_122 = MISC::GET_GAME_TIMER() + 6000;
			iLocal_115 = 1;
		}
	}
	if (!bLocal_88)
	{
		if ((iLocal_114 && !iLocal_113) && iLocal_122 < MISC::GET_GAME_TIMER())
		{
			if (!__LIB_0__.func_75())
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_COM", 4, 0, 0, 0))
				{
					iLocal_115 = 0;
					iLocal_113 = 1;
				}
			}
		}
	}
	else if ((bLocal_88 && !iLocal_112) && iLocal_122 < MISC::GET_GAME_TIMER())
	{
		if (!__LIB_0__.func_75())
		{
			if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_BANT2", 4, 0, 0, 0))
			{
				iLocal_115 = 0;
				iLocal_112 = 1;
			}
		}
	}
}

void func_134()//Position - 0x7DBA
{
	if (func_2() && iLocal_91 < 2)
	{
		if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (!__LIB_11__.func_869("REDR1_SWV"))
			{
				func_5(0);
				__LIB_6__.func_771();
				SYSTEM::WAIT(0);
				__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				iLocal_130 += 6;
			}
		}
		func_135(Local_129, (MISC::GET_GAME_TIMER() - iLocal_128));
	}
	if (iLocal_130 > 17)
	{
		iLocal_89 = 1;
	}
}

void func_135(struct<3> Param0, int iParam1)//Position - 0x7E4B
{
	struct<3> Var0;
	struct<3> Var1;
	if (func_2())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) };
		}
	}
	Var1 = { Var0 - Param0 };
	Var1 = { func_136(Var1, iParam1) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_11__.func_869("REDR1_SWV"))
			{
				if (iLocal_132 == -1)
				{
					iLocal_132 = MISC::GET_GAME_TIMER() + 400;
				}
				else if (iLocal_132 < MISC::GET_GAME_TIMER())
				{
					iLocal_130 += 3;
					func_5(0);
					__LIB_6__.func_771();
					SYSTEM::WAIT(0);
					__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
				}
			}
			else
			{
				iLocal_132 = -1;
			}
		}
	}
	if (Var1.f_1 > 0.025f)
	{
		iLocal_130++;
		if (!__LIB_11__.func_869("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_1 < -0.025f)
	{
		iLocal_130++;
		if (!__LIB_11__.func_869("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_0 > 0.025f)
	{
		iLocal_130++;
		if (!__LIB_11__.func_869("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
	if (Var1.f_0 < -0.025f)
	{
		iLocal_130++;
		if (!__LIB_11__.func_869("REDR1_SWV") && iLocal_91 < 4)
		{
			func_5(0);
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
		}
	}
}

Vector3 func_136(struct<3> Param0, int iParam1)//Position - 0x802F
{
	struct<3> Var0;
	Var0.f_0 = (Param0.f_0 / IntToFloat(iParam1));
	Var0.f_1 = (Param0.f_1 / IntToFloat(iParam1));
	Var0.f_2 = (Param0.f_2 / IntToFloat(iParam1));
	return Var0;
}

void func_137()//Position - 0x805B
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iLocal_73[0]))
	{
		switch (iLocal_91)
		{
			case 0:
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SIK", 4, 0, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						VEHICLE::REMOVE_VEHICLE_WINDOW(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_91++;
				}
				break;
			case 1:
				if (SYSTEM::TIMERB() > 3000 || !__LIB_0__.func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_73[0]);
						TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 8f, -8f, -1, 0, 0f, false, false, false);
						iLocal_91++;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_1", sLocal_94);
					if (fVar0 > 0.243f && fVar0 < 0.28f)
					{
						if (!iLocal_85)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_85 = 1;
						}
					}
					else if (fVar0 > 0.295f && fVar0 < 0.37f)
					{
						if (!iLocal_86)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_86 = 1;
							if (__LIB_18__.func_173() == 0)
							{
								__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SIKM", 4, 0, 0, 0);
							}
							else if (__LIB_18__.func_173() == 1)
							{
								__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SIKF", 4, 0, 0, 0);
							}
							else if (__LIB_18__.func_173() == 2)
							{
								__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_SIKT", 4, 0, 0, 0);
							}
						}
					}
					else if (fVar0 > 0.49f && fVar0 < 0.55f)
					{
						if (!iLocal_87)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_puke_in_car", iLocal_73[0], 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							iLocal_87 = 1;
						}
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_73[0], "random@drunk_driver_1", sLocal_94) > 0.8f)
					{
						iLocal_91++;
					}
				}
				break;
			case 3:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3))
				{
				}
				if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_APO", 4, 0, 0, 0))
				{
					TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 2f, -4f, -1, 1, 0f, false, false, false);
					iLocal_85 = 0;
					iLocal_91++;
				}
				break;
			case 4:
				AUDIO::STOP_SOUND(iLocal_92);
				bLocal_88 = true;
				break;
			}
	}
}

void func_138()//Position - 0x82E5
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_135)
		{
			iLocal_133 = MISC::GET_GAME_TIMER();
			iLocal_135 = 1;
		}
		else
		{
			iLocal_134 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_134 = 0;
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
	if ((iLocal_134 - iLocal_133) > 50000 && !iLocal_136)
	{
		if (iLocal_52 == 1)
		{
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_WLK", 4, 0, 0, 0);
		}
		iLocal_136 = 1;
	}
	if ((iLocal_134 - iLocal_133) > 60000 && iLocal_136)
	{
		if (iLocal_52 == 2)
		{
			__LIB_6__.func_771();
			SYSTEM::WAIT(0);
			__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_FU", 4, 0, 0, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_73[0]) && !PED::IS_PED_INJURED(iLocal_73[1]))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_73[0], 40000f, 0);
			__LIB_7__.func_787(iLocal_73[0], 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
			if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_73[1], iLocal_73[0], 0f, 1f, 0f, 1f, -1, 0.1f, true);
			__LIB_7__.func_787(iLocal_73[1], 120000, 0);
			PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
			if (PED::IS_PED_IN_GROUP(iLocal_73[1]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_73[1]);
			}
		}
		func_66();
	}
}

void func_139()//Position - 0x842E
{
	if (iLocal_52 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_73[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 150f, 150f, 150f, false, true, 0))
			{
				func_66();
			}
			if (func_149() || PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_73[0]))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[0], __LIB_0__.func_399());
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_73[0], true);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_73[0], 0);
				}
			}
			else if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_94, 3)) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_73[0]))
					{
						TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 2f, -4f, -1, 1, 0f, false, false, false);
					}
					if (__LIB_0__.func_436())
					{
						__LIB_0__.func_488(0);
						iLocal_100 = 0;
					}
				}
				else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3))
				{
					TASK::STOP_ANIM_PLAYBACK(iLocal_73[0], 0, false);
				}
			}
			else
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_73[0], "random@drunk_driver_1", sLocal_93, 3))
					{
						TASK::STOP_ANIM_PLAYBACK(iLocal_73[0], 0, false);
					}
				}
				if (__LIB_0__.func_75() && !iLocal_100)
				{
					__LIB_0__.func_488(1);
					iLocal_100 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_126[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_126[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_82))
				{
					iLocal_82 = __LIB_0__.func_392(Local_69, 1);
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_126[0]))
				{
					uLocal_126[0] = __LIB_6__.func_850(iLocal_73[0], 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_82))
				{
					HUD::REMOVE_BLIP(&iLocal_82);
				}
			}
		}
	}
	if (iLocal_52 == 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_74, false) && !PED::IS_PED_INJURED(iLocal_73[0])) && !PED::IS_PED_INJURED(iLocal_73[1]))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 150f, 150f, 150f, false, true, 0) || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[1], 150f, 150f, 150f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[0]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
						}
						TASK::CLEAR_PED_TASKS(iLocal_73[0]);
						TASK::TASK_SMART_FLEE_PED(iLocal_73[0], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						__LIB_7__.func_787(iLocal_73[0], 120000, 0);
						PED::SET_PED_KEEP_TASK(iLocal_73[0], true);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_73[1]))
					{
						if (PED::IS_PED_IN_GROUP(iLocal_73[1]))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_73[1]);
						}
						TASK::CLEAR_PED_TASKS(iLocal_73[1]);
						TASK::TASK_SMART_FLEE_PED(iLocal_73[1], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						__LIB_7__.func_787(iLocal_73[1], 120000, 0);
						PED::SET_PED_KEEP_TASK(iLocal_73[1], true);
					}
				}
				func_66();
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_73[0], iLocal_74, false) && PED::IS_PED_IN_VEHICLE(iLocal_73[1], iLocal_74, false))
				{
					if (__LIB_0__.func_436())
					{
						__LIB_0__.func_488(0);
						iLocal_100 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_82))
					{
						iLocal_82 = __LIB_0__.func_392(Local_69, 1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_127))
				{
					HUD::REMOVE_BLIP(&iLocal_127);
				}
			}
			else
			{
				if ((__LIB_0__.func_75() && !iLocal_100) && iLocal_60 > 3)
				{
					__LIB_0__.func_488(1);
					iLocal_100 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_127))
				{
					iLocal_127 = __LIB_6__.func_825(iLocal_74, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_82))
				{
					HUD::REMOVE_BLIP(&iLocal_82);
				}
			}
		}
	}
}

void func_144()//Position - 0x88AB
{
	if (!PED::IS_PED_INJURED(iLocal_73[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_149())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_73[0], PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 2f, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_73[0], 0, 0);
				}
				if (!iLocal_102)
				{
					if (!__LIB_0__.func_75())
					{
						__LIB_35__.func_536(&uLocal_140, "REHH1AU", "REDR1_NO", 4, 0, 0, 0);
						iLocal_102 = 1;
					}
				}
			}
			else
			{
				iLocal_102 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_73[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_73[0]);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_73[0]))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_73[0], __LIB_0__.func_399());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_73[0], true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_73[0], 0);
		}
	}
}

void func_147(int iParam0, var uParam1)//Position - 0x8A49
{
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2060, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_79);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_79);
				*uParam1++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 45f))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_148()//Position - 0x8B02
{
	if (__LIB_18__.func_173() == 0)
	{
		if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_OFFA", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_137++;
		}
	}
	else if (__LIB_18__.func_173() == 1)
	{
		if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_OFFB", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_137++;
		}
	}
	else if (__LIB_18__.func_173() == 2)
	{
		if (__LIB_35__.func_536(&uLocal_140, "REDR1AU", "REDR1_OFFC", 4, 0, 0, 0))
		{
			SYSTEM::SETTIMERA(0);
			iLocal_137++;
		}
	}
}

int func_149()//Position - 0x8B85
{
	int iVar0;
	if (iLocal_52 == 1)
	{
		iVar0 = 1;
	}
	if (iLocal_52 == 2)
	{
		iVar0 = 2;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if ((((((!PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= iVar0)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
		{
			if (((((!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()//Position - 0x8DAC
{
	if (!PED::IS_PED_INJURED(iLocal_73[0]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_73[0], 30f, 30f, 30f, false, true, 0))
		{
			if (!iLocal_95)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_DCB", 4, 0, 0, 0))
				{
					iLocal_95 = 1;
				}
			}
			if (!iLocal_96)
			{
				if (__LIB_35__.func_536(&uLocal_140, "REDR2AU", "REDR2_DCC", 4, 0, 0, 0))
				{
					iLocal_96 = 1;
				}
			}
		}
	}
}

void func_154()//Position - 0x8E1D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_124))
	{
		HUD::REMOVE_BLIP(&iLocal_124);
	}
	iLocal_59 = 0;
	while (iLocal_59 <= (iLocal_72 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_126[iLocal_59]))
		{
			uLocal_126[iLocal_59] = __LIB_6__.func_850(iLocal_73[iLocal_59], 0, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_126[iLocal_59], false);
		}
		iLocal_59++;
	}
}

int func_157(int iParam0)//Position - 0x8EB1
{
	if (__LIB_39__.func_548())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (__LIB_30__.func_859(Global_113375))
		{
			__LIB_30__.func_898(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE" /* GXT: Random Event */);
		if (iParam0 && __LIB_30__.func_859(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_168()//Position - 0x948E
{
	if (func_170())
	{
		sLocal_93 = "drunk_idle_van";
		sLocal_94 = "vomit_van";
	}
	else if (func_169())
	{
		sLocal_93 = "drunk_idle_low";
		sLocal_94 = "vomit_low";
	}
	else
	{
		sLocal_93 = "drunk_idle";
		sLocal_94 = "vomit_outside";
	}
}

int func_169()//Position - 0x94CE
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), false))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false));
			if ((((((((((iVar0 == joaat("LAYOUT_LOW") || iVar0 == joaat("LAYOUT_LOW_BFINJECTION")) || iVar0 == joaat("LAYOUT_LOW_CHEETAH")) || iVar0 == joaat("LAYOUT_LOW_DUNE")) || iVar0 == joaat("LAYOUT_LOW_INFERNUS")) || iVar0 == joaat("LAYOUT_LOW_RESTRICTED")) || iVar0 == joaat("LAYOUT_LOW_SENTINEL2")) || iVar0 == joaat("LAYOUT_LOW_BLADE")) || iVar0 == joaat("LAYOUT_LOW_TURISMOR")) || iVar0 == joaat("LAYOUT_LOW_FURORE")) || iVar0 == joaat("LAYOUT_LOW_OSIRIS"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_170()//Position - 0x95A2
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false), false))
		{
			iVar0 = VEHICLE::GET_VEHICLE_LAYOUT_HASH(PED::GET_VEHICLE_PED_IS_IN(iLocal_73[0], false));
			if (((((((((((iVar0 == joaat("LAYOUT_VAN") || iVar0 == joaat("LAYOUT_VAN_BODHI")) || iVar0 == joaat("LAYOUT_VAN_BOXVILLE")) || iVar0 == joaat("LAYOUT_VAN_CADDY")) || iVar0 == joaat("LAYOUT_VAN_JOURNEY")) || iVar0 == joaat("LAYOUT_VAN_MULE")) || iVar0 == joaat("LAYOUT_VAN_POLICE")) || iVar0 == joaat("LAYOUT_VAN_TRASH")) || iVar0 == joaat("LAYOUT_4X4")) || iVar0 == joaat("LAYOUT_BISON")) || iVar0 == joaat("LAYOUT_RANGER")) || iVar0 == joaat("LAYOUT_RANGER_SWAT"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_172()//Position - 0x96F1
{
	if (!iLocal_57)
	{
		__LIB_26__.func_264(39, 1);
		__LIB_26__.func_264(40, 1);
		__LIB_26__.func_264(41, 1);
		__LIB_26__.func_264(42, 1);
		__LIB_26__.func_264(43, 1);
		__LIB_26__.func_264(44, 1);
		MISC::CLEAR_AREA(Local_62, 8f, true, false, false, false);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_62 - Vector(8f, 8f, 8f), Local_62 + Vector(8f, 8f, 8f), false, true, true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_66 - Vector(10f, 15f, 15f), Local_66 + Vector(10f, 15f, 15f), false, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_69 - Vector(10f, 15f, 15f), Local_69 + Vector(10f, 15f, 15f), false, true);
		MISC::SET_BIT(&uLocal_123, 5);
		if (__LIB_18__.func_173() == 0)
		{
			__LIB_0__.func_203(&uLocal_140, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			__LIB_0__.func_203(&uLocal_140, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			__LIB_0__.func_203(&uLocal_140, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		PED::ADD_RELATIONSHIP_GROUP("rghDrunkPeds", &iLocal_80);
		iLocal_74 = VEHICLE::CREATE_VEHICLE(iLocal_78, Local_66, fLocal_67, true, true, false);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_74);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_74, 5f);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_78, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_74, 3);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_74, true);
		iLocal_68 = ENTITY::GET_ENTITY_HEALTH(iLocal_74);
		iLocal_73[0] = PED::CREATE_PED(26, iLocal_76, Local_62, fLocal_63, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_73[0], iLocal_80);
		PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_73[0], 65536, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
		AUDIO::STOP_PED_SPEAKING(iLocal_73[0], true);
		iLocal_73[1] = PED::CREATE_PED(26, iLocal_77, Local_64, fLocal_65, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73[1], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_73[1], iLocal_80);
		PED::SET_PED_CONFIG_FLAG(iLocal_73[1], 185, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_73[1], 65536, true);
		AUDIO::STOP_PED_SPEAKING(iLocal_73[1], true);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_80, joaat("PLAYER"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
		if (iLocal_52 == 1)
		{
			TASK::TASK_PLAY_ANIM(iLocal_73[0], "random@drunk_driver_1", "drunk_driver_stand_loop_dd1", 8f, -2f, -1, 1, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(iLocal_73[1], "random@drunk_driver_1", "drunk_driver_stand_loop_dd2", 8f, -2f, -1, 1, 0f, false, false, false);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_73[0], "MOVE_M@DRUNK@VERYDRUNK", 0.25f);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_73[1], "MOVE_M@DRUNK@MODERATEDRUNK", 0.25f);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[0], 0, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 4, 0, 1, 0);
			VEHICLE::REMOVE_VEHICLE_WINDOW(iLocal_74, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 299, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_73[0], false);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_73[0], "REDR1Drunk1_AI_Drunk");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_73[1], "A_M_Y_VINEWOOD_01_BLACK_MINI_01");
			__LIB_0__.func_203(&uLocal_140, 3, iLocal_73[0], "REDR1Drunk1", 0, 1);
			__LIB_0__.func_203(&uLocal_140, 4, iLocal_73[1], "REDR1Drunk2", 0, 1);
		}
		if (iLocal_52 == 2)
		{
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_69 - Vector(10f, 50f, 30f), Local_69 + Vector(10f, 50f, 30f), false, true, true, true);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_74, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 4, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_73[1], 8, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[1], 134, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[1], 26, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 206, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_73[1], 206, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_73[0], false);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_73[1], false);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_73[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_73[0], iLocal_73[1], -1, 2060, 4);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_73[1], "WORLD_HUMAN_BUM_STANDING", 0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_73[1], false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_73[1], iLocal_73[0], -1, 2060, 4);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_73[0], "MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP", 0.25f);
			PED::SET_PED_MOVEMENT_CLIPSET(iLocal_73[1], "MOVE_M@DRUNK@SLIGHTLYDRUNK", 0.25f);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_73[0], "A_M_Y_BeachVesp_01_White_Mini_01");
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_73[1], "A_F_Y_EastSA_03_Latino_FULL_01");
			__LIB_0__.func_203(&uLocal_140, 3, iLocal_73[0], "REDR2DrunkM", 0, 1);
			__LIB_0__.func_203(&uLocal_140, 4, iLocal_73[1], "REDR2DrunkF", 0, 1);
		}
		iLocal_57 = 1;
	}
}

void func_179()//Position - 0xA161
{
	STREAMING::REQUEST_MODEL(iLocal_76);
	STREAMING::REQUEST_MODEL(iLocal_78);
	STREAMING::REQUEST_MODEL(iLocal_77);
	if (iLocal_52 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
	}
	else if (iLocal_52 == 2)
	{
		STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
		STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
	}
	STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_76) && STREAMING::HAS_MODEL_LOADED(iLocal_78)) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@MODERATEDRUNK")) && STREAMING::HAS_MODEL_LOADED(iLocal_77))
	{
		if (iLocal_52 == 1)
		{
			if (((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_1")) && STREAMING::HAS_ANIM_SET_LOADED("MOVE_M@DRUNK@VERYDRUNK")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CONSTRUCTION_ACCIDENT_1", false, -1))
			{
				iLocal_54 = 1;
			}
		}
		else if (iLocal_52 == 2)
		{
			if ((STREAMING::HAS_ANIM_DICT_LOADED("random@drunk_driver_2") && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@SLIGHTLYDRUNK")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP"))
			{
				iLocal_54 = 1;
			}
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_76);
		STREAMING::REQUEST_MODEL(iLocal_78);
		STREAMING::REQUEST_MODEL(iLocal_77);
		if (iLocal_52 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_1");
			STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@VERYDRUNK");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Taxi_Vomit", false, -1);
		}
		else if (iLocal_52 == 2)
		{
			STREAMING::REQUEST_ANIM_DICT("random@drunk_driver_2");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@SLIGHTLYDRUNK");
			STREAMING::REQUEST_ANIM_DICT("MOVE_M@DRUNK@MODERATEDRUNK_HEAD_UP");
		}
		STREAMING::REQUEST_ANIM_SET("MOVE_M@DRUNK@MODERATEDRUNK");
	}
}

void func_180()//Position - 0xA2C2
{
	if (iLocal_52 == 1)
	{
		Local_125 = { -1018.2382f, -1350.1014f, 4.475f };
		iLocal_72 = 2;
		iLocal_76 = joaat("A_M_Y_BeachVesp_01");
		iLocal_77 = joaat("A_M_Y_BeachVesp_02");
		Local_62 = { -1016.7623f, -1356.459f, 4.5531f };
		fLocal_63 = 247.8087f;
		Local_64 = { -1015.572f, -1357.081f, 4.552f };
		fLocal_65 = 66.3861f;
		Local_66 = { -1027.7618f, -1341.6439f, 4.4614f };
		fLocal_67 = 76.9418f;
		iLocal_78 = joaat("baller2");
		Local_69 = { 160.8892f, -111.4167f, 61.2999f };
		Local_70 = { 159.2191f, -117.0664f, 61.2999f };
		bLocal_56 = true;
	}
	if (iLocal_52 == 2)
	{
		Local_125 = { 1893.8561f, 3714.3457f, 31.7771f };
		iLocal_72 = 2;
		iLocal_76 = joaat("A_M_Y_GenStreet_01");
		iLocal_77 = joaat("A_F_Y_Hipster_03");
		Local_62 = { 1893.8561f, 3714.3457f, 31.7771f };
		fLocal_63 = 252.0142f;
		Local_64 = { 1894.7627f, 3714.1604f, 31.7605f };
		fLocal_65 = 86.1102f;
		Local_66 = { 1888.2565f, 3717.1892f, 31.8394f };
		fLocal_67 = 299.4672f;
		iLocal_78 = joaat("emperor");
		Local_69 = { 1120.5507f, 2647.3071f, 36.9963f };
		Local_70 = { 1121.8657f, 2641.7068f, 37.1487f };
		bLocal_56 = true;
	}
}

void func_240()//Position - 0xD735
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_enter_m", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_idle_m", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@drunk_driver_2", "driver_exit_m", 3))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (iLocal_139)
	{
		__LIB_32__.func_762(0);
		if (Global_32201)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		__LIB_30__.func_883();
		__LIB_6__.func_833();
		AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(false);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_66 - Vector(10f, 15f, 15f), Local_66 + Vector(10f, 15f, 15f), true, true);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_69 - Vector(10f, 15f, 15f), Local_69 + Vector(10f, 15f, 15f), true, true);
		__LIB_0__.func_367(0);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_75, false) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_75, 1) > 50f)
			{
				func_252(iLocal_75, 0, 145);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_73[0]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_73[0], 317, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[0], false))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_73[0]);
				}
				if (PED::IS_PED_IN_GROUP(iLocal_73[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_73[0]);
				}
			}
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[iLocal_59]))
			{
				if (!PED::IS_PED_INJURED(iLocal_73[iLocal_59]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_73[iLocal_59], 317, true);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_73[iLocal_59], false))
					{
						PED::RESET_PED_LAST_VEHICLE(iLocal_73[iLocal_59]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_73[iLocal_59], true);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_80, joaat("PLAYER"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73[iLocal_59], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_73[iLocal_59]));
			}
			iLocal_59++;
		}
		iLocal_59 = 0;
		while (iLocal_59 <= (iLocal_72 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_126[iLocal_59]))
			{
				HUD::REMOVE_BLIP(&(uLocal_126[iLocal_59]));
			}
			iLocal_59++;
		}
		if (iLocal_52 == 1)
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(42.7808f, -1324.4054f, -10f, 98.245f, -1277.174f, 10f, 1);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_107))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_107))
			{
				CAM::SET_CAM_ACTIVE(iLocal_107, false);
			}
		}
	}
	__LIB_41__.func_466(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_252(int iParam0, int iParam1, int iParam2)//Position - 0xE19B
{
	var uVar0;
	char* sVar1;
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_253(iParam0, iParam2);
	return 1;
}

void func_253(int iParam0, int iParam1)//Position - 0xE1DB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_39__.func_556(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = iParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_6__.func_760(iParam0, &(Global_113386.f_32749.f_5510));
}

Vector3 func_280()//Position - 0x125E9
{
	float fVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_306, true);
		iLocal_305 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_307, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_307, true);
			iLocal_305 = 2;
		}
		if (iLocal_305 == 1)
		{
			bLocal_308 = true;
			iLocal_52 = 1;
			return Local_306;
		}
		if (iLocal_305 == 2)
		{
			bLocal_308 = 2;
			iLocal_52 = 2;
			return Local_307;
		}
	}
	return 0f, 0f, 0f;
}

