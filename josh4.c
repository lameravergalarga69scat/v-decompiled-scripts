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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	var uLocal_40 = 0;
	char* sLocal_41 = NULL;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<12> Local_47 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	struct<3> Local_53 = { 0, 0, 0 } ;
	float fLocal_54 = 0f;
	struct<3> Local_55 = { 0, 0, 0 } ;
	var uLocal_56 = 16;
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
	var uLocal_221 = 16;
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
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
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
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	struct<61> Local_386 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int* iLocal_391 = NULL;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398[2] = { 0, 0 };
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	struct<7> Local_415[5];
	struct<3> Local_416[5];
	struct<4> Local_417[5];
	struct<61> Local_418 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__::func_910(58);
	iLocal_39 = joaat("felon2");
	sLocal_41 = "josh_4_int_concat";
	iLocal_42 = joaat("S_M_Y_Cop_01");
	iLocal_43 = joaat("police3");
	iLocal_50 = 1;
	iLocal_51 = 1;
	Local_53 = { -1102.9056f, 284.731f, 63.0602f };
	fLocal_54 = 9.4866f;
	iLocal_392 = joaat("felon2");
	__LIB_17__::func_35("*** Now in Josh 4 loop ***");
	Local_386 = { ScriptParam_418 };
	__LIB_14__::func_801(&Local_386);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_MISSION_FAIL");
		__LIB_14__::func_872(1);
		func_468();
	}
	if (__LIB_0__::func_323())
	{
		__LIB_17__::func_35("*** Setting up initial scene for replay");
		__LIB_0__::func_427(Local_53, fLocal_54, 1, 0);
		__LIB_17__::func_35("*** Replay setup started");
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_455(&Local_386))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_17__::func_35("*** Josh 4 scene set up");
		__LIB_14__::func_800(&Local_386, 0, 1);
		Global_78564 = 0;
	}
	if (__LIB_0__::func_121(Local_386.f_28[1]))
	{
		AUDIO::STOP_PED_SPEAKING(Local_386.f_28[1], true);
	}
	if (__LIB_0__::func_121(Local_386.f_28[2]))
	{
		AUDIO::STOP_PED_SPEAKING(Local_386.f_28[2], true);
	}
	iLocal_390 = Local_386.f_35[0];
	iLocal_391 = Local_386.f_35[1];
	__LIB_17__::func_35("*** About to set up positions...");
	func_452();
	__LIB_0__::func_712(58, 2, 0);
	if (__LIB_0__::func_323())
	{
		__LIB_17__::func_35("*** Creating replay vehicle and jumping to post-cutscene");
		__LIB_14__::func_865(&iLocal_44, -1100.04f, 280.6f, 63.53f, 267.48f, 0, 0, 1, 1, 0, joaat("asterope"), 0, 145, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_RESTART1");
		func_328();
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_BOC", 0);
		SYSTEM::WAIT(0);
		__LIB_14__::func_863(Local_386.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_45)
		{
			case 0:
				func_302();
				break;
			case 1:
				func_265();
				break;
			case 2:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x233
{
	int iVar0;
	func_264();
	switch (iLocal_46)
	{
		case 0:
			__LIB_14__::func_800(&Local_386, 0, 1);
			if (__LIB_0__::func_121(iLocal_390))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_390, false, false, false, false, false, false, false, false);
			}
			if (__LIB_0__::func_121(iLocal_391))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_391, false, false, false, false, false, false, false, false);
			}
			__LIB_0__::func_229("JOSH4_LOSECOPS", 7500, 1);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::GET_PLAYER_INDEX(), false);
			PED::SET_PED_NON_CREATION_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f);
			PATHFIND::SET_PED_PATHS_IN_AREA(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, false, 0);
			MISC::CLEAR_AREA_OF_PEDS(-1114.7878f, 319.34015f, 66.1226f, 20.5f, 0);
			if (__LIB_0__::func_121(Local_386.f_28[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			iLocal_394 = MISC::GET_GAME_TIMER();
			iLocal_46 = 1;
			break;
		case 1:
			func_262();
			func_242();
			func_240();
			func_234();
			func_212();
			func_210();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) <= 0 && !__LIB_0__::func_75())
			{
				iVar0 = 1;
				while (iVar0 <= (Local_386.f_28 - 1))
				{
					if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
					{
						__LIB_0__::func_124(&(Local_386.f_28[iVar0]), 0, 1, 1);
					}
					iVar0++;
				}
				if (__LIB_0__::func_695(iLocal_390))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_390, false))
					{
						__LIB_0__::func_630(777);
					}
				}
				iLocal_46 = 2;
			}
			break;
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x3D9
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST_RADIO");
			__LIB_17__::func_35("Starting 'JOSH4_COPS_LOST_RADIO'");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST");
			__LIB_17__::func_35("Starting 'JOSH4_COPS_LOST'");
		}
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_COPS_LOST");
		__LIB_17__::func_35("Player is somehow not alive when passing the mission - starting 'JOSH4_COPS_LOST'");
	}
	func_3(91, 1);
	func_468();
}

void func_3(int iParam0, bool bParam1)//Position - 0x43C
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_0__::func_775();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_14__::func_873(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_14__::func_857(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_330(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_14__::func_792());
	func_31();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_14__::func_860();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_0__::func_716(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_0__::func_716(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_0__::func_716(iParam0, 0, 0);
	}
	__LIB_0__::func_210();
}

void func_31()//Position - 0x15F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_0__::func_216(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_149(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x16B4
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_149(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_32(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_32(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_75(iParam0, iVar0, &iVar7, 0))
	{
		func_35(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_33(iParam0, iVar0, &iVar7))
	{
		func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x1870
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1937
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_78128++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_0__::func_633(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_0__::func_350(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_0__::func_350(iParam0, 9);
			if (iVar10 == joaat("Player_Zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_One"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("Player_Two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = __LIB_0__::func_453(iParam0, 1);
			if (!__LIB_0__::func_234(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_0__::func_453(iParam0, 0);
			if (!__LIB_0__::func_233(iVar10, 14, iVar8, -1) && !__LIB_0__::func_232(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_0__::func_453(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_78173 };
		}
		else
		{
			uVar11 = { __LIB_0__::func_459(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, uVar11[iVar0], -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_78190 };
						}
						else
						{
							uVar12 = { __LIB_0__::func_466(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_0__::func_633(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("Player_One") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							__LIB_0__::func_230(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_0__::func_633(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_14__::func_752(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_41(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_75(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_35(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_798(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_0__::func_466(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_0__::func_633(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_14__::func_752(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_0__::func_633(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_14__::func_752(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_14__::func_635(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_75(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_41(int iParam0, int iParam1, int iParam2)//Position - 0x2974
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_149(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_149(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return __LIB_0__::func_453(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_0__::func_350(iParam0, iParam1);
		}
	}
	return -99;
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x904D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_149(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2)//Position - 0x1F7AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_149(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_149(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_149(iParam0, 14, iVar4))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = __LIB_0__::func_350(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_149(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_210()//Position - 0x26F71
{
	if (iLocal_414 == 0)
	{
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1116.62f, 299.12f, 64.96f, 1) > 50f)
		{
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JOSH_4_01", 0f);
			__LIB_17__::func_35("*** Played special Josh 4 police report ***");
			iLocal_414 = 1;
		}
	}
}

void func_212()//Position - 0x26FF1
{
	if (iLocal_409 == 0)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1208.5807f, 309.8494f, 80.691895f, -1041.6449f, 319.5811f, 60.402634f, 178.5f, false, true, 0))
		{
			while (__LIB_0__::func_75())
			{
				__LIB_0__::func_638();
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_222(&uLocal_221, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_222(&uLocal_221, 4, Local_386.f_28[0], "JOSH", 0, 1);
			iLocal_412 = MISC::GET_GAME_TIMER();
			iLocal_409++;
		}
	}
	else if (iLocal_409 == 1)
	{
		if (iLocal_49 != 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_412) > 6000)
			{
				if (iLocal_49 == 3)
				{
					__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4CAR2", 9, 0, 0, 0);
				}
				else if (iLocal_49 == 1)
				{
					if (__LIB_0__::func_121(Local_386.f_28[0]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 1) < 75f)
						{
							__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4CAR3", 9, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4CAR1", 9, 0, 0, 0);
						}
					}
				}
				else if (iLocal_49 == 2)
				{
					__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4CAR1", 9, 0, 0, 0);
				}
				iLocal_409++;
			}
		}
	}
}

void func_234()//Position - 0x279CD
{
	switch (iLocal_49)
	{
		case 0:
			if (iLocal_48 == 3)
			{
				if (__LIB_0__::func_121(Local_386.f_28[0]))
				{
					TASK::CLEAR_PED_TASKS(Local_386.f_28[0]);
					if (__LIB_0__::func_695(iLocal_391))
					{
						if (MISC::IS_POSITION_OCCUPIED(-1138.4213f, 298.03073f, 65.90032f, 4f, false, true, false, false, false, iLocal_391, false))
						{
							__LIB_17__::func_35("Back gate blocked");
							Local_55 = { -1130.35f, 307.92f, 65.19f };
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 2f, 20000, 1f, 1, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1126.56f, 319.85f, 65.98f, 2f, 20000, 1f, 1, 40000f);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							PED::SET_PED_KEEP_TASK(Local_386.f_28[0], true);
							TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[0], iLocal_389);
						}
						else
						{
							__LIB_17__::func_35("Back gate clear");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							if (__LIB_0__::func_695(iLocal_391))
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_391, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 500f, 0.1f, true);
							}
							else
							{
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							PED::SET_PED_KEEP_TASK(Local_386.f_28[0], true);
							TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[0], iLocal_389);
						}
					}
					else
					{
						__LIB_17__::func_35("Josh car not ok - do Josh flee anyway");
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_55, 2f, 20000, 1f, 1, 40000f);
						if (__LIB_0__::func_695(iLocal_391))
						{
							TASK::TASK_ENTER_VEHICLE(0, iLocal_391, 20000, -1, 2f, 1, 0);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_391, PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 500f, 0.1f, true);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						PED::SET_PED_KEEP_TASK(Local_386.f_28[0], true);
						TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[0], iLocal_389);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(Local_386.f_28[0], 2, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				}
				iLocal_413 = MISC::GET_GAME_TIMER();
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_386.f_28[0], true);
				PED::SET_PED_CONFIG_FLAG(Local_386.f_28[0], 177, true);
				iLocal_49 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_121(Local_386.f_28[0]))
			{
				if (!iLocal_406)
				{
					if (iLocal_398[0] || iLocal_398[1])
					{
						if (__LIB_0__::func_76(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), 0) < 20f)
						{
							__LIB_0__::func_222(&uLocal_221, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
							__LIB_0__::func_222(&uLocal_221, 4, Local_386.f_28[0], "JOSH", 0, 1);
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_325();
								__LIB_14__::func_654(&uLocal_221, "JOSH4AU", "JOSH4COP3", 9, 0, 0);
							}
							else
							{
								__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4COP3", 9, 0, 0, 0);
							}
							__LIB_17__::func_35("Doing Josh comment");
						}
						else
						{
							__LIB_17__::func_35("Too far away to do Josh comment");
						}
						iLocal_406 = 1;
					}
				}
				if (__LIB_0__::func_695(iLocal_391))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_386.f_28[0], iLocal_391, true))
					{
						if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_391) < 20f)
						{
							TASK::CLEAR_PED_TASKS(Local_386.f_28[0]);
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_386.f_28[0], 0, 4416);
							TASK::TASK_SMART_FLEE_PED(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, false, false);
							__LIB_0__::func_106(&iLocal_391);
						}
					}
					if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_391, true))
						{
							TASK::CLEAR_PED_TASKS(Local_386.f_28[0]);
							TASK::TASK_SMART_FLEE_PED(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, false, false);
							__LIB_0__::func_106(&iLocal_391);
						}
					}
					if (PED::IS_PED_BEING_JACKED(Local_386.f_28[0]))
					{
						if (iLocal_407 == 0)
						{
							if (__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4BEGS", 9, 0, 0, 0))
							{
								iLocal_407 = 1;
							}
						}
						TASK::CLEAR_PED_TASKS(Local_386.f_28[0]);
						__LIB_0__::func_106(&iLocal_391);
						TASK::TASK_SMART_FLEE_PED(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), 510f, -1, false, false);
					}
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 1) > 350f)
				{
					__LIB_17__::func_35("Deleting Josh, setting as lost");
					__LIB_0__::func_0(&(Local_386.f_28[0]));
					__LIB_8__::func_397(&iLocal_391);
					iLocal_49 = 2;
				}
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(Local_386.f_28[0]))
				{
					if (iLocal_410 < 3)
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 1) < 10f)
						{
							if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_413) > 8000)
							{
								if (__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4CHASE", 9, 0, 0, 0))
								{
									iLocal_410++;
									iLocal_413 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_386.f_28[0], PLAYER::PLAYER_PED_ID(), true))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 0);
					__LIB_17__::func_35("Player killed Josh!");
					__LIB_0__::func_630(776);
				}
				__LIB_17__::func_35("Josh - DEAD!");
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_325();
				}
				if (__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4KILL", 9, 0, 0, 0))
				{
					iLocal_49 = 3;
				}
			}
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

void func_240()//Position - 0x28052
{
	switch (Local_47.f_11)
	{
		case 0:
			iLocal_393 = 0;
			while (iLocal_393 <= 4)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_415[iLocal_393 /*7*/], Local_415[iLocal_393 /*7*/].f_3, Local_415[iLocal_393 /*7*/].f_6, false, true, 2))
				{
					__LIB_17__::func_34("Player detected inside flee direction trigger: ", iLocal_393);
					STREAMING::REQUEST_MODEL(iLocal_43);
					STREAMING::REQUEST_MODEL(iLocal_42);
					Local_47 = { Local_416[iLocal_393 /*3*/] };
					Local_47.f_3 = Local_417[iLocal_393 /*4*/];
					Local_47.f_4 = Local_417[iLocal_393 /*4*/].f_1;
					Local_47.f_5 = Local_417[iLocal_393 /*4*/].f_2;
					Local_47.f_6 = Local_417[iLocal_393 /*4*/].f_3;
					switch (iLocal_393)
					{
						case 0:
							Local_47.f_9 = 0;
							break;
						case 1:
							Local_47.f_9 = 1;
							break;
						case 2:
							Local_47.f_9 = 2;
							break;
						case 3:
							Local_47.f_9 = 3;
							break;
						case 4:
							Local_47.f_9 = 4;
							break;
					}
					__LIB_17__::func_34("iFlee value is: ", iLocal_393);
					__LIB_17__::func_35("Requesting flee recording: ");
					__LIB_17__::func_34(Local_47.f_10, Local_47.f_9);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_47.f_9, Local_47.f_10);
					while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_47.f_9, Local_47.f_10) || !STREAMING::HAS_MODEL_LOADED(iLocal_43)) || !STREAMING::HAS_MODEL_LOADED(iLocal_42))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_17__::func_35("Flee car has loaded!");
					Local_47.f_11 = 1;
				}
				iLocal_393++;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_47.f_7))
			{
				Local_47.f_7 = VEHICLE::CREATE_VEHICLE(iLocal_43, Local_47, 0f, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_47.f_7, 5f);
				ENTITY::SET_ENTITY_QUATERNION(Local_47.f_7, Local_47.f_3, Local_47.f_4, Local_47.f_5, Local_47.f_6);
				Local_47.f_8 = PED::CREATE_PED_INSIDE_VEHICLE(Local_47.f_7, 6, iLocal_42, -1, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_47.f_8, joaat("WEAPON_PISTOL"), -1, false, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47.f_8, true);
				TASK::CLEAR_PED_TASKS(Local_47.f_8);
				__LIB_17__::func_35("Flee car created!");
				Local_47.f_11 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_695(Local_47.f_7))
			{
				if (__LIB_0__::func_121(Local_47.f_8))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_47.f_8, false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_47.f_7, Local_47.f_9, Local_47.f_10, true);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_47.f_7, true);
						__LIB_17__::func_34("*** m_AI_FleeCar.iRecNum: ", Local_47.f_9);
						switch (Local_47.f_9)
						{
							case 0:
								VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
								break;
							case 1:
								VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1f);
								break;
							case 2:
								VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.4f);
								break;
							case 3:
								VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
								break;
							case 4:
								VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
								break;
						}
						__LIB_17__::func_35("Flee car playing!");
						Local_47.f_11 = 3;
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_695(Local_47.f_7))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_47.f_7))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_47.f_9, Local_47.f_10))
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_47.f_9, Local_47.f_10);
						__LIB_17__::func_35("Flee car recording finished!");
						Local_47.f_11 = 4;
					}
				}
				else
				{
					switch (Local_47.f_9)
					{
						case 0:
							VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
							break;
						case 1:
							VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1f);
							break;
						case 2:
							VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.4f);
							break;
						case 3:
							VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
							break;
						case 4:
							VEHICLE::SET_PLAYBACK_SPEED(Local_47.f_7, 1.5f);
							break;
						}
					}
			}
			break;
		case 4:
			if (__LIB_0__::func_695(Local_47.f_7))
			{
				if (__LIB_0__::func_121(Local_47.f_8))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47.f_8, false);
					__LIB_0__::func_124(&(Local_47.f_8), 1, 0, 1);
				}
				Local_47.f_11 = 5;
				__LIB_0__::func_106(&(Local_47.f_7));
			}
			__LIB_17__::func_35("Flee car & ped released!");
			break;
	}
}

void func_242()//Position - 0x28437
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_48)
	{
		case 0:
			if (!iLocal_396)
			{
				if (__LIB_0__::func_121(Local_386.f_28[1]))
				{
					iLocal_396 = 1;
				}
			}
			if (!iLocal_397)
			{
				if (__LIB_0__::func_121(Local_386.f_28[2]))
				{
					iLocal_397 = 1;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_394) > 4000)
			{
				__LIB_17__::func_35("************************************** TIMEOUT - AIM next frame");
				iLocal_48 = 1;
				iLocal_394 = MISC::GET_GAME_TIMER();
			}
			iVar0 = 1;
			while (iVar0 <= (Local_386.f_28 - 1))
			{
				if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
				{
					if (__LIB_0__::func_76(Local_386.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 10f)
					{
						__LIB_17__::func_35("************************************** TOO FAR - AIM next frame");
						iLocal_48 = 1;
						iLocal_394 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		case 1:
			iLocal_48 = 2;
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_394) > 20000)
			{
				__LIB_17__::func_35("************************************** TIMEOUT - ARREST next frame");
				if (__LIB_0__::func_121(Local_386.f_28[1]))
				{
					TASK::CLEAR_PED_TASKS(Local_386.f_28[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_386.f_28[1], false);
					TASK::TASK_ARREST_PED(Local_386.f_28[1], PLAYER::PLAYER_PED_ID());
				}
				iLocal_48 = 4;
				iLocal_394 = MISC::GET_GAME_TIMER();
			}
			iVar0 = 1;
			while (iVar0 <= (Local_386.f_28 - 1))
			{
				if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
				{
					if (__LIB_0__::func_76(Local_386.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 12f)
					{
						__LIB_17__::func_35("************************************** TOO FAR - ATTACK next frame");
						iLocal_48 = 3;
						iLocal_394 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		case 4:
			iVar0 = 1;
			while (iVar0 <= (Local_386.f_28 - 1))
			{
				if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
				{
					if (__LIB_0__::func_76(Local_386.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) > 12f)
					{
						__LIB_17__::func_35("************************************** TOO FAR - ATTACK next frame");
						iLocal_48 = 3;
						iLocal_394 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_17__::func_126(Local_386.f_28[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						__LIB_17__::func_35("************************************** THREAT DURING ARREST - ATTACK next frame");
						iLocal_48 = 3;
						iLocal_394 = MISC::GET_GAME_TIMER();
					}
				}
				iVar0++;
			}
			break;
		case 3:
			iLocal_50 = 3;
			if (!iLocal_399)
			{
				MISC::ENABLE_DISPATCH_SERVICE(1, true);
				MISC::ENABLE_DISPATCH_SERVICE(2, true);
				MISC::ENABLE_DISPATCH_SERVICE(6, true);
				iVar0 = 1;
				while (iVar0 <= (Local_386.f_28 - 1))
				{
					if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(Local_386.f_28[iVar0]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_386.f_28[iVar0], false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[iVar0], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					iVar0++;
				}
				__LIB_0__::func_222(&uLocal_56, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				__LIB_0__::func_222(&uLocal_56, 3, Local_386.f_28[1], "JOSHCOP", 0, 1);
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_325();
					__LIB_14__::func_654(&uLocal_56, "JOSH4AU", "JOSH4COP2", 7, 0, 0);
				}
				else
				{
					__LIB_2__::func_859(&uLocal_56, "JOSH4AU", "JOSH4COP2", 7, 0, 0, 0);
				}
				__LIB_17__::func_35("Doing cop fire warning");
				iLocal_399 = 1;
				iLocal_411 = MISC::GET_GAME_TIMER();
			}
			else
			{
				iVar1 = 1;
				while (iVar1 <= (Local_386.f_28 - 1))
				{
					if (__LIB_0__::func_121(Local_386.f_28[iVar1]))
					{
						if (__LIB_0__::func_76(Local_386.f_28[iVar1], PLAYER::PLAYER_PED_ID(), 1) > 20f)
						{
							PED::SET_PED_ACCURACY(Local_386.f_28[iVar1], 75);
						}
						else
						{
							PED::SET_PED_ACCURACY(Local_386.f_28[iVar1], 1);
						}
					}
					iVar1++;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_411) > 15000)
				{
					iVar1 = 1;
					while (iVar1 <= (Local_386.f_28 - 1))
					{
						if (__LIB_0__::func_121(Local_386.f_28[iVar1]))
						{
							if (__LIB_0__::func_76(Local_386.f_28[iVar1], PLAYER::PLAYER_PED_ID(), 1) >= 50f)
							{
								__LIB_0__::func_124(&(Local_386.f_28[iVar1]), 0, 1, 1);
							}
						}
						iVar1++;
					}
				}
				else
				{
					iVar1 = 1;
					while (iVar1 <= (Local_386.f_28 - 1))
					{
						if (!__LIB_0__::func_121(Local_386.f_28[iVar1]))
						{
							if (iVar1 == 1)
							{
								iLocal_398[0] = 1;
							}
							else if (iVar1 == 2)
							{
								iLocal_398[1] = 1;
							}
						}
						iVar1++;
					}
				}
			}
			break;
	}
	if (iLocal_48 != 3)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_17__::func_35("************************************** VEHICLE - ATTACK now");
				iLocal_48 = 3;
			}
		}
		iVar0 = 1;
		while (iVar0 <= (Local_386.f_28 - 1))
		{
			if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_386.f_28[iVar0]))
				{
					iVar2 = joaat("WEAPON_UNARMED");
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true))
					{
						__LIB_17__::func_35("************************************** AIMED WEAPON - ATTACK now");
						iLocal_48 = 3;
					}
				}
				if (__LIB_17__::func_126(Local_386.f_28[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					__LIB_17__::func_35("************************************** ATTACKED/THREATENED - ATTACK now");
					iLocal_48 = 3;
				}
				if (iLocal_48 != 4)
				{
					if (__LIB_0__::func_76(Local_386.f_28[iVar0], PLAYER::PLAYER_PED_ID(), 0) < 2.3f)
					{
						__LIB_17__::func_35("************************************** TOO CLOSE - ATTACK now");
						iLocal_48 = 3;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_262()//Position - 0x292AF
{
	if (!iLocal_395)
	{
		__LIB_0__::func_222(&uLocal_56, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		__LIB_0__::func_222(&uLocal_56, 3, Local_386.f_28[1], "JOSHCOP", 0, 1);
		__LIB_2__::func_859(&uLocal_56, "JOSH4AU", "JOSH4GIVEUP", 8, 1, 0, 0);
		iLocal_395 = 1;
	}
	else
	{
		switch (iLocal_50)
		{
			case 0:
				if ((MISC::GET_GAME_TIMER() - iLocal_52) > 1000)
				{
					iLocal_50 = 1;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_51)
					{
						__LIB_0__::func_222(&uLocal_56, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__::func_222(&uLocal_56, 3, Local_386.f_28[1], "JOSHCOP", 0, 1);
						if (__LIB_2__::func_859(&uLocal_56, "JOSH4AU", "JOSH4COP1", 8, 0, 0, 0))
						{
							iLocal_50 = 2;
							iLocal_51 = 0;
						}
					}
					else
					{
						__LIB_0__::func_222(&uLocal_221, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__::func_222(&uLocal_221, 4, Local_386.f_28[0], "JOSH", 0, 1);
						if (__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH4JOSH", 6, 0, 0, 0))
						{
							iLocal_50 = 2;
							iLocal_51 = 1;
						}
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					iLocal_52 = MISC::GET_GAME_TIMER();
					iLocal_50 = 0;
				}
				break;
			case 3:
				break;
			}
	}
}

void func_264()//Position - 0x29404
{
	if (iLocal_45 == 1)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (CUTSCENE::GET_CUTSCENE_TIME() > 14000 && !iLocal_403)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
				__LIB_17__::func_35("Starting 'JOSH4_START'");
				iLocal_403 = 1;
			}
		}
	}
	else if (!iLocal_404)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_ACTION");
		__LIB_17__::func_35("Starting 'JOSH4_ACTION'");
		iLocal_404 = 1;
	}
	else if (!iLocal_405)
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_VEHICLE");
				__LIB_17__::func_35("Starting 'JOSH4_VEHICLE'");
				iLocal_405 = 1;
			}
		}
	}
}

void func_265()//Position - 0x29497
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	func_264();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(Local_386.f_28[1]))
		{
			__LIB_17__::func_35("Trying to set Cop 1 component variation (intro loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_standing_idle", Local_386.f_28[1], 0);
		}
		if (__LIB_0__::func_121(Local_386.f_28[2]))
		{
			__LIB_17__::func_35("Trying to set Cop 2 component variation (intro loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_with_notepad", Local_386.f_28[2], 0);
		}
	}
	switch (iLocal_46)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL(sLocal_41, ""))
			{
				if (iLocal_400 == 0)
				{
					__LIB_14__::func_851(sLocal_41, 0);
				}
				iLocal_408 = 0;
				iLocal_46 = 1;
			}
			else
			{
				func_300(0);
				func_299(2);
			}
			break;
		case 1:
			switch (iLocal_408)
			{
				case 0:
					if (__LIB_14__::func_740(1, 1093140480, 0))
					{
						func_292();
						__LIB_14__::func_841();
						RECORDING::REPLAY_START_EVENT(1);
						CUTSCENE::START_CUTSCENE(0);
						SYSTEM::WAIT(0);
						iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (__LIB_0__::func_695(iVar0))
						{
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								Var1 = { -1089.27f, 283.76f, 64.22f };
								fVar2 = 132.53f;
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, false, true, 0))
							{
								Var1 = { -1101.6943f, 280.50192f, 63.383522f };
								fVar2 = 85.45f;
							}
							else
							{
								Var1 = { -1095.2307f, 279.3389f, 62.7919f };
								fVar2 = 84.67f;
							}
						}
						else
						{
							Var1 = { -1095.2307f, 279.3389f, 62.7919f };
							fVar2 = 84.67f;
						}
						if (__LIB_0__::func_695(iVar0))
						{
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
							{
								__LIB_14__::func_614(-1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, Var1, fVar2, 50f, 50f, 50f, 1, 1, 1, 0, 0);
							}
							else
							{
								__LIB_14__::func_614(-1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, Var1, fVar2, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
							}
						}
						else
						{
							__LIB_14__::func_614(-1115.9844f, 285.59244f, 61.942406f, -1097.5992f, 285.1346f, 66.346695f, 33f, Var1, fVar2, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
						}
						func_278(-1104.93f, 291.25f, 64.3f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						if (__LIB_0__::func_695(iLocal_390))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_390, -1107.5f, 280.33f, 64.01f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_390, 97.97f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_390, 5f);
						}
						iLocal_408++;
					}
					break;
				case 1:
					STREAMING::REQUEST_ANIM_DICT("rcmjosh4");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
					STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@glances");
					STREAMING::REQUEST_MODEL(iLocal_392);
					iLocal_408++;
					break;
				case 2:
					if (((STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4") && STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt")) && STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@glances")) && STREAMING::HAS_MODEL_LOADED(iLocal_392))
					{
						iLocal_408++;
					}
					break;
				case 3:
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (func_277())
					{
						RECORDING::REPLAY_STOP_EVENT();
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 5f, 0);
						iLocal_408 = 4;
					}
					func_276();
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						iLocal_402 = 1;
						iLocal_408 = 4;
						if (!iLocal_403)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
							__LIB_17__::func_35("Starting 'JOSH4_START' via cutscene skip");
							iLocal_403 = 1;
						}
					}
					break;
				case 4:
					func_276();
					func_277();
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						iLocal_402 = 1;
						if (!iLocal_403)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JOSH4_START");
							__LIB_17__::func_35("Starting 'JOSH4_START' via cutscene skip");
							iLocal_403 = 1;
						}
					}
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_300(iLocal_402);
						__LIB_14__::func_870(1, 1, 1, 1);
						MISC::ENABLE_DISPATCH_SERVICE(1, false);
						MISC::ENABLE_DISPATCH_SERVICE(2, false);
						MISC::ENABLE_DISPATCH_SERVICE(6, false);
						iLocal_46 = 2;
					}
					break;
				default:
					iLocal_408 = 0;
					break;
			}
			break;
		case 2:
			func_299(2);
			break;
	}
}

void func_276()//Position - 0x29C1D
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josh", 0))
	{
		if (__LIB_0__::func_121(Local_386.f_28[0]))
		{
			__LIB_17__::func_35("Playing Josh's leadout");
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2, 2);
			TASK::TASK_PLAY_ANIM(0, "rcmjosh4", "josh_leadout_loop", 4f, -4f, -1, 262153, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[0], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			PED::FORCE_PED_MOTION_STATE(Local_386.f_28[0], joaat("MotionState_DoNothing"), false, 1, false);
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
	{
		if (__LIB_0__::func_121(iLocal_387) && __LIB_0__::func_121(Local_386.f_28[1]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_387, Local_386.f_28[1]);
			__LIB_17__::func_35("*** Gave idle cop gun");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_Agent_1_Gun", 0))
	{
		if (__LIB_0__::func_121(iLocal_388) && __LIB_0__::func_121(Local_386.f_28[2]))
		{
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_388, Local_386.f_28[2]);
			__LIB_17__::func_35("*** Gave notepad cop gun");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cop_standing_idle", 0))
	{
		if (__LIB_0__::func_121(Local_386.f_28[1]))
		{
			PED::FORCE_PED_MOTION_STATE(Local_386.f_28[1], joaat("MotionState_Aiming"), false, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1026, 2);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
			TASK::TASK_PLAY_ANIM(0, "combat@gestures@pistol@glances", "90", 8f, -1000f, -1, 262184, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[1], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			__LIB_17__::func_35("*** Idle cop anim");
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cop_with_notepad", 0))
	{
		if (__LIB_0__::func_121(Local_386.f_28[2]))
		{
			PED::FORCE_PED_MOTION_STATE(Local_386.f_28[2], joaat("MotionState_Aiming"), false, 1, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1026, 2);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1103.72f, 289.46f, 63.23f, PLAYER::PLAYER_PED_ID(), 1f, false, 0.1f, 4f, true, 0, true, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1106.08f, 288.55f, 63.31f, PLAYER::PLAYER_PED_ID(), 1f, false, 0.1f, 4f, true, 0, true, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[2], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			__LIB_17__::func_35("*** Notepad cop anim");
		}
	}
}

int func_277()//Position - 0x29E90
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_278(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x29EB5
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_14__::func_747(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_149(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 1) || func_149(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_149(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_34 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_292()//Position - 0x2AADF
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
		__LIB_17__::func_35("*** Registered Trevor");
	}
	if (__LIB_0__::func_121(Local_386.f_28[0]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_386.f_28[0], "Josh", 0, 0, 0);
		__LIB_17__::func_35("*** Registered Josh");
	}
	if (__LIB_0__::func_121(Local_386.f_28[1]))
	{
		iLocal_387 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_PISTOL"), -1, ENTITY::GET_ENTITY_COORDS(Local_386.f_28[1], true), true, 1f, 0, 0, 1);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_386.f_28[1], "Cop_standing_idle", 0, 0, 0);
		__LIB_17__::func_35("*** Registered Cop standing");
	}
	if (__LIB_0__::func_121(Local_386.f_28[2]))
	{
		iLocal_388 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_PISTOL"), -1, ENTITY::GET_ENTITY_COORDS(Local_386.f_28[2], true), true, 1f, 0, 0, 1);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_386.f_28[2], "Cop_with_notepad", 0, 0, 0);
		__LIB_17__::func_35("*** Registered Cop with notepad");
	}
	if (__LIB_0__::func_121(iLocal_387))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_387, "Security_guard_pistol", 0, 0, 0);
		__LIB_17__::func_35("*** Registered idle cop gun");
	}
	if (__LIB_0__::func_121(iLocal_388))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_388, "FBI_Agent_1_Gun", 0, 0, 0);
		__LIB_17__::func_35("*** Registered notepad cop gun");
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
}

void func_299(int iParam0)//Position - 0x2AF5F
{
	iLocal_45 = iParam0;
	iLocal_46 = 0;
}

void func_300(int iParam0)//Position - 0x2AF6E
{
	STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@halt");
	STREAMING::REQUEST_ANIM_DICT("combat@gestures@pistol@glances");
	STREAMING::REQUEST_MODEL(iLocal_392);
	while ((!STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@halt") || !STREAMING::HAS_ANIM_DICT_LOADED("combat@gestures@pistol@glances")) || !STREAMING::HAS_MODEL_LOADED(iLocal_392))
	{
		SYSTEM::WAIT(0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, false, 0f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.0538f, 295.58557f, 67.18046f, false, 0f, false);
	}
	if (__LIB_0__::func_121(Local_386.f_28[0]))
	{
		if (iParam0 == 1)
		{
			ENTITY::SET_ENTITY_COORDS(Local_386.f_28[0], -1103.962f, 291.3401f, 63.367f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_386.f_28[0], 193.1737f);
			TASK::TASK_PLAY_ANIM(Local_386.f_28[0], "rcmjosh4", "josh_leadout_loop", 8f, -8f, -1, 1, 0f, false, false, false);
		}
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_386.f_28[0], true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_386.f_28[0], true);
	}
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_121(Local_386.f_28[2]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_386.f_28[2], joaat("WEAPON_PISTOL"), -1, true, true);
			ENTITY::SET_ENTITY_COORDS(Local_386.f_28[2], -1106.08f, 288.55f, 63.31f, true, false, false, true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[2], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_386.f_28[2], true);
		}
	}
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_121(Local_386.f_28[1]))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_386.f_28[1], joaat("WEAPON_PISTOL"), -1, true, true);
			ENTITY::SET_ENTITY_COORDS(Local_386.f_28[1], -1102.41f, 289.73f, 63.18f, true, false, false, true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_386.f_28[1], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_386.f_28[1], true);
		}
	}
	if (__LIB_0__::func_121(Local_386.f_28[1]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_386.f_28[1], 23, true);
	}
	if (__LIB_0__::func_121(Local_386.f_28[2]))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_386.f_28[2], 23, true);
	}
	if (__LIB_0__::func_695(Local_386.f_35[1]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_386.f_35[1], 1);
	}
	__LIB_0__::func_222(&uLocal_221, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_395 = 0;
	iLocal_396 = 0;
	iLocal_397 = 0;
	iLocal_406 = 0;
	iLocal_398[0] = 0;
	iLocal_398[1] = 0;
	if (iLocal_398[0])
	{
	}
	iLocal_399 = 0;
	iLocal_48 = 0;
	iLocal_49 = 0;
	__LIB_17__::func_35("*** End of intro set up");
}

void func_302()//Position - 0x2B273
{
	__LIB_14__::func_862();
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (__LIB_0__::func_121(Local_386.f_28[1]))
		{
			__LIB_17__::func_35("Trying to set Cop 1 component variation (leadin loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_standing_idle", Local_386.f_28[1], 0);
		}
		if (__LIB_0__::func_121(Local_386.f_28[2]))
		{
			__LIB_17__::func_35("Trying to set Cop 2 component variation (leadin loop)");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Cop_with_notepad", Local_386.f_28[2], 0);
		}
	}
	switch (iLocal_46)
	{
		case 0:
			if (!__LIB_0__::func_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.3529f, 281.62604f, 61.46451f, -1099.5205f, 282.50732f, 65.992226f, 16f, false, true, 0))
			{
				__LIB_17__::func_35("Doing setup for leadin");
				__LIB_0__::func_222(&uLocal_221, 4, Local_386.f_28[0], "JOSH", 0, 1);
				__LIB_0__::func_222(&uLocal_221, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				STREAMING::REQUEST_ANIM_DICT("rcmjosh4");
				if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
				{
					iLocal_46 = 1;
				}
			}
			else
			{
				__LIB_17__::func_35("Skipping setup for leadin (repeat play/wrong area)");
				func_299(1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_2(0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1107.3529f, 281.62604f, 61.46451f, -1099.5205f, 282.50732f, 65.992226f, 16f, false, true, 0))
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(Local_386.f_28[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1105.5709f, 290.00803f, 62.871758f, -1100.5774f, 290.42984f, 66.45212f, 4.5f, false, true, 0))
					{
						if (!__LIB_7__::func_691())
						{
							if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 0);
							}
						}
						else
						{
							__LIB_0__::func_91();
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				if (!iLocal_400)
				{
					if (__LIB_0__::func_692(Local_386.f_28[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_386.f_28[0], "rcmjosh4", "beckon_a_josh", 3) && !__LIB_0__::func_75())
						{
							TASK::TASK_PLAY_ANIM(Local_386.f_28[0], "rcmjosh4", "josh_4_leadin_josh", 2f, -8f, -1, 2, 0f, false, false, false);
							__LIB_17__::func_35("Done Josh leadin anim");
							if (__LIB_0__::func_692(Local_386.f_28[2]))
							{
								TASK::TASK_PLAY_ANIM(Local_386.f_28[2], "rcmjosh4", "josh_4_leadin_cop_a", 8f, -8f, -1, 2, 0f, false, false, false);
								__LIB_17__::func_35("Done Notepad cop leadin anim");
							}
							if (__LIB_0__::func_692(Local_386.f_28[1]))
							{
								TASK::TASK_PLAY_ANIM(Local_386.f_28[1], "rcmjosh4", "josh_4_leadin_cop_b", 8f, -8f, -1, 2, 0f, false, false, false);
								__LIB_17__::func_35("Done Speaker cop leadin anim");
							}
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("JOSH_4_INT_CONCAT", 2, 8);
							iLocal_400 = 1;
						}
					}
				}
				else
				{
					if ((__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_692(Local_386.f_28[0])) && !__LIB_7__::func_691())
					{
						if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 0);
						}
					}
					if (__LIB_0__::func_692(Local_386.f_28[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_386.f_28[0], "rcmjosh4", "josh_4_leadin_josh", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_386.f_28[0], "rcmjosh4", "josh_4_leadin_josh") > 0.276f)
							{
								if (iLocal_401 == 0)
								{
									if (__LIB_2__::func_859(&uLocal_221, "JOSH4AU", "JOSH_4_INTLI", 9, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 3f, 1);
										iLocal_401 = 1;
									}
								}
							}
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_386.f_28[0], "rcmjosh4", "josh_4_leadin_josh") > 0.98f)
							{
								func_299(1);
							}
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_386.f_28[0], 1) <= 2f)
							{
								if (__LIB_0__::func_75())
								{
									__LIB_0__::func_638();
								}
								__LIB_17__::func_35("Player too close to Josh, starting cutscene early");
								func_299(1);
							}
						}
						else
						{
							func_299(1);
						}
					}
				}
			}
			else
			{
				func_299(1);
			}
			break;
	}
}

void func_328()//Position - 0x2C2D3
{
	if (__LIB_0__::func_121(Local_386.f_28[1]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_386.f_28[1], -1102.48f, 290.2f, 64.22f, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_386.f_28[1], 177.74f);
	}
	else
	{
		Local_386.f_28[1] = PED::CREATE_PED(6, iLocal_42, -1102.92f, 290.12f, -200f, 40.46f, false, false);
	}
	if (__LIB_0__::func_121(Local_386.f_28[2]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_386.f_28[2], -1103.94f, 290.21f, 64.28f, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_386.f_28[2], -167.67f);
	}
	else
	{
		Local_386.f_28[2] = PED::CREATE_PED(6, iLocal_42, -1102.73f, 290.91f, -200f, 92.06f, false, false);
	}
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), Local_53, fLocal_54, 1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	func_300(1);
	STREAMING::REQUEST_MODEL(iLocal_392);
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_392))
	{
		SYSTEM::WAIT(0);
	}
	func_299(2);
	if (!__LIB_0__::func_324())
	{
		__LIB_14__::func_870(1, 1, 1, 1);
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(2, false);
	MISC::ENABLE_DISPATCH_SERVICE(6, false);
	iLocal_395 = 0;
	iLocal_397 = 0;
	iLocal_48 = 0;
	iLocal_410 = 0;
	if (__LIB_0__::func_323())
	{
		if (!__LIB_37__::func_322(0, 1))
		{
		}
		if (!__LIB_37__::func_321(1, 1))
		{
		}
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 1);
		}
		__LIB_14__::func_879(1, 1, 1);
	}
}

void func_452()//Position - 0x38FE6
{
	Local_53 = { -1102.9056f, 284.731f, 63.0602f };
	fLocal_54 = 9.4866f;
	Local_55 = { -1140.98f, 297.59f, 65.89f };
	Local_47.f_10 = "Josh4CopRush";
	Local_47.f_11 = 0;
	Local_415[0 /*7*/] = { -1152.5255f, 278.23175f, 65.69334f };
	Local_415[0 /*7*/].f_3 = { -1136.2766f, 239.05513f, 69.44059f };
	Local_415[0 /*7*/].f_6 = 3.25f;
	Local_415[1 /*7*/] = { -1151.9183f, 287.22757f, 66.040184f };
	Local_415[1 /*7*/].f_3 = { -1137.0509f, 290.54535f, 70.0429f };
	Local_415[1 /*7*/].f_6 = 3.25f;
	Local_415[2 /*7*/] = { -1093.0032f, 295.5289f, 63.115368f };
	Local_415[2 /*7*/].f_3 = { -1069.1945f, 293.5286f, 67.535675f };
	Local_415[2 /*7*/].f_6 = 3.25f;
	Local_415[3 /*7*/] = { -1050.7755f, 284.3935f, 63.156693f };
	Local_415[3 /*7*/].f_3 = { -1050.3694f, 244.09451f, 67.86394f };
	Local_415[3 /*7*/].f_6 = 3.25f;
	Local_415[4 /*7*/] = { -1065.411f, 229.62163f, 61.886574f };
	Local_415[4 /*7*/].f_3 = { -1104.0215f, 232.1321f, 68.14975f };
	Local_415[4 /*7*/].f_6 = 3.25f;
	Local_416[0 /*3*/] = { -1357.5698f, 200.1279f, 58.075f };
	Local_417[0 /*4*/] = 0.0072f;
	Local_417[0 /*4*/].f_1 = 0.0163f;
	Local_417[0 /*4*/].f_2 = -0.5901f;
	Local_417[0 /*4*/].f_3 = 0.8071f;
	Local_416[1 /*3*/] = { -1219.0353f, 401.5473f, 74.713f };
	Local_417[1 /*4*/] = -0.0145f;
	Local_417[1 /*4*/].f_1 = 0.0329f;
	Local_417[1 /*4*/].f_2 = -0.6893f;
	Local_417[1 /*4*/].f_3 = 0.7235f;
	Local_416[2 /*3*/] = { -1113.0596f, 397.6948f, 69.1133f };
	Local_417[2 /*4*/] = -0.0155f;
	Local_417[2 /*4*/].f_1 = -0.04f;
	Local_417[2 /*4*/].f_2 = 0.7661f;
	Local_417[2 /*4*/].f_3 = -0.6413f;
	Local_416[3 /*3*/] = { -885.071f, 240.0283f, 71.7539f };
	Local_417[3 /*4*/] = -0.0576f;
	Local_417[3 /*4*/].f_1 = 0f;
	Local_417[3 /*4*/].f_2 = 0.5936f;
	Local_417[3 /*4*/].f_3 = 0.8027f;
	Local_416[4 /*3*/] = { -1020.4949f, 121.0783f, 53.0567f };
	Local_417[4 /*4*/] = 0.0234f;
	Local_417[4 /*4*/].f_1 = 0.0126f;
	Local_417[4 /*4*/].f_2 = 0.2792f;
	Local_417[4 /*4*/].f_3 = 0.9599f;
	HUD::REQUEST_ADDITIONAL_TEXT("JOSH4", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_324())
	{
		if (__LIB_37__::func_322(0, 1))
		{
			__LIB_17__::func_35("*** Opened Josh gate for replay");
		}
	}
	__LIB_17__::func_35("*** Set up coords");
}

int func_455(var uParam0)//Position - 0x39416
{
	int iVar0[4];
	int iVar1;
	float fVar2;
	bool bVar3;
	iVar0[0] = uLocal_38;
	iVar0[1] = iLocal_39;
	iVar0[2] = joaat("S_M_Y_Cop_01");
	iVar0[3] = joaat("police3");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 8f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "JOSH_4_INT_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_17__::func_31(&(uParam0->f_48), "rcmjosh4", "beckon_a_josh", 0);
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0) || !__LIB_14__::func_856(&(uParam0->f_48)))
			{
				return 0;
			}
			if (!__LIB_37__::func_322(0, 1))
			{
			}
			if (!__LIB_37__::func_321(1, 1))
			{
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar3 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_14__::func_842(&(uParam0->f_28[0]), 58, -1103.6f, 290.81f, 64.31f, -99.24f, "JOSH LAUNCHER RC", 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, true);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[1]), iVar0[2], -1102.92f, 290.12f, 64.28f, 40.46f, 6);
				if (__LIB_0__::func_121(uParam0->f_28[1]))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(uParam0->f_28[1]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], true);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("WEAPON_PISTOL"), -1, false, true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[1]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcmjosh4", "BECKON_A_COP_B", 8f, -8f, -1, 1, 0f, false, false, false);
					}
				}
				else
				{
					bVar3 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[2]))
			{
				__LIB_17__::func_42(&(uParam0->f_28[2]), iVar0[2], -1102.73f, 290.91f, 64.28f, 92.06f, 6);
				if (__LIB_0__::func_121(uParam0->f_28[2]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 10, 0, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[2], true);
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("WEAPON_PISTOL"), -1, false, true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh4"))
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_28[2]);
						TASK::TASK_PLAY_ANIM(uParam0->f_28[2], "rcmjosh4", "BECKON_A_COP_A", 8f, -8f, -1, 1, 0f, false, false, false);
					}
				}
				else
				{
					bVar3 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[3], -1107.5f, 280.33f, 64.01f, 97.97f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				func_456(&(uParam0->f_35[1]), 0);
				if (__LIB_0__::func_695(uParam0->f_35[1]))
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_35[1], 900f);
					fVar2 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1]);
					fVar2 = (fVar2 / 2f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_35[1], fVar2);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[1], 5f);
				}
				else
				{
					bVar3 = false;
				}
			}
			if (bVar3)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1138.32f, 299.69f, 65.94f, 5f, joaat("prop_lrggate_01c_l"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_l"), -1138.32f, 299.69f, 65.94f, true, 0f, false);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1137.52f, 297.02f, 65.81f, 5f, joaat("prop_lrggate_01c_r"), false))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_lrggate_01c_r"), -1137.0538f, 295.58557f, 67.18046f, true, 0f, false);
			}
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

void func_456(int* iParam0, bool bParam1)//Position - 0x39810
{
	struct<3> Var0;
	float fVar1;
	if (bParam1)
	{
		Var0 = { -1129.18f, 300.55f, 65.92f };
		fVar1 = 86.97f;
	}
	else
	{
		Var0 = { -1139.759f, 291.483f, 66.327f };
		fVar1 = 6.077003f;
	}
	__LIB_17__::func_25(iParam0, iLocal_39, Var0, fVar1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 4);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 3);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, false, 0);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(*iParam0, true);
}

void func_468()//Position - 0x39B8C
{
	int iVar0;
	__LIB_14__::func_841();
	HUD::CLEAR_PRINTS();
	if (__LIB_14__::func_843())
	{
		__LIB_17__::func_35("...Random Character Script was triggered so additional cleanup required");
	}
	iVar0 = 1;
	while (iVar0 <= (Local_386.f_28 - 1))
	{
		if (__LIB_0__::func_121(Local_386.f_28[iVar0]))
		{
			__LIB_0__::func_124(&(Local_386.f_28[iVar0]), 1, 0, 1);
		}
		iVar0++;
	}
	__LIB_0__::func_124(&(Local_386.f_28[0]), 1, 0, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_386.f_35 - 1))
	{
		__LIB_0__::func_106(&(Local_386.f_35[iVar0]));
		iVar0++;
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-1140.2233f, 271.745f, 50f, -1082.4034f, 344.8568f, 80f, 0);
	__LIB_14__::func_871(&Local_386, 1, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_43);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_42);
	SCRIPT::TERMINATE_THIS_THREAD();
}

