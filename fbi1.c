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
	int iLocal_48 = 0;
	int iLocal_49[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_50[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51[5] = { 0, 0, 0, 0, 0 };
	int iLocal_52[5] = { 0, 0, 0, 0, 0 };
	struct<28> Local_53[17];
	struct<28> Local_54[7];
	struct<28> Local_55[5];
	struct<28> Local_56[5];
	struct<28> Local_57[2];
	struct<18> Local_58 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<25> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
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
	struct<15> Local_101[2];
	struct<15> Local_102[2];
	struct<7> Local_103 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
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
	struct<3> Local_134 = { 0, 0, 0 } ;
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
	struct<24> Local_156[2];
	struct<24> Local_157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
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
	struct<24> Local_180[1];
	int iLocal_181 = 0;
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
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	bool bLocal_207 = 0;
	bool bLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	bool bLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251[5] = { 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_260 = { 0, 0, 0 } ;
	struct<3> Local_261 = { 0, 0, 0 } ;
	float fLocal_262 = 0f;
	float fLocal_263 = 0f;
	char* sLocal_264 = NULL;
	var uLocal_265 = 16;
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
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<6> Local_430 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_431 = 0;
	var uLocal_432 = 1092616192;
	var uLocal_433 = 1101004800;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 3;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_455[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_456 = 0;
	int iLocal_457[6] = { 0, 0, 0, 0, 0, 0 };
	char cLocal_458[16] = "";
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	struct<2> Local_461 = { 0, 0 } ;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	float fLocal_468 = 0f;
	float fLocal_469 = 0f;
	float fLocal_470 = 0f;
	float fLocal_471 = 0f;
	float fLocal_472 = 0f;
	struct<3> Local_473 = { 0, 0, 0 } ;
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
	iLocal_228 = -1;
	fLocal_468 = 0.5f;
	fLocal_469 = 55f;
	fLocal_470 = 67.4f;
	fLocal_471 = -139f;
	fLocal_472 = -119f;
	Local_473 = { 63.400543f, 0f, -129.38966f };
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_20__.func_514(PLAYER::PLAYER_PED_ID(), __LIB_20__.func_728());
		func_818();
		func_817();
		if (!iLocal_220)
		{
			__LIB_11__.func_994(0);
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Global_95697 = 1;
		}
		func_813();
	}
	func_757();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_205)
		{
			if (func_755())
			{
				func_743();
			}
		}
		__LIB_0__.func_371();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_DeadManWalking", 0);
		switch (iLocal_48)
		{
			case 0:
				func_740();
				break;
			case 1:
				func_732();
				break;
			case 3:
				func_731();
				break;
			case 4:
				func_725();
				break;
			case 5:
				func_666();
				break;
			case 6:
				func_664();
				break;
			case 8:
				func_395();
				break;
			case 10:
				func_389();
				break;
			case 11:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x1A5
{
	int iVar0;
	iVar0 = 0;
	func_387();
	SYSTEM::WAIT(0);
	func_386();
	switch (iLocal_464)
	{
		case 0:
			func_377();
			break;
		case 1:
			func_349();
			break;
		case 2:
			func_348();
			break;
		case 3:
			func_339();
			break;
		case 4:
			STREAMING::REQUEST_MODEL(Local_102[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_102[1 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_55[0 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
			STREAMING::REQUEST_ANIM_DICT("missfbi1");
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
			PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
			__LIB_18__.func_191(69, 1, 0, 1, 0);
			iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_452))
			{
				iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
				SYSTEM::WAIT(0);
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_452);
			while (((((((!STREAMING::HAS_MODEL_LOADED(Local_102[0 /*15*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_102[1 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_55[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cor_windowsmash"))) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1)) || !INTERIOR::IS_INTERIOR_READY(iLocal_452))
			{
				SYSTEM::WAIT(0);
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			}
			MISC::CLEAR_AREA(234.2708f, -1360.3062f, 44.034f, 300f, true, false, false, false);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 239.4876f, -1360.4357f, 38.5342f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 50.2059f);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
			func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
			func_215(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 50);
			ENTITY::CREATE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), true);
			Local_157.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				Local_157.f_23 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_102.f_0 - 1))
			{
				Local_102[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_102[iVar0 /*15*/].f_1, Local_102[iVar0 /*15*/].f_3, Local_102[iVar0 /*15*/].f_6, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_102[iVar0 /*15*/], 7);
				iVar0++;
			}
			Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
			func_213(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_HALFWAY_RT");
			STREAMING::LOAD_SCENE(234.2708f, -1360.3062f, 44.034f);
			func_208(1, 0, 0, 1);
			iLocal_248 = 3;
			iLocal_229 = 3;
			iLocal_245 = 2;
			iLocal_226 = 6;
			iLocal_48 = 5;
			break;
		case 5:
			func_128();
			break;
		case 6:
			func_2();
			break;
	}
}

void func_2()//Position - 0x5C7
{
	if (iLocal_465)
	{
		__LIB_0__.func_370(1612.0714f, -1943.6034f, 100.9448f, 153.72f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_19__.func_811(0));
	STREAMING::REQUEST_MODEL(Local_102[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_103.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_103.f_1, true);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(__LIB_19__.func_811(0)) || !STREAMING::HAS_MODEL_LOADED(Local_102[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_103.f_1)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1612.0714f, -1943.6034f, 100.9448f, 1000f, true, false, false, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1612.0714f, -1943.6034f, 100.9448f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 153.7002f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	Local_102[0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_102[0 /*15*/].f_1, 1616.2025f, -1933.765f, 100.745f, 65.3292f, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_102[0 /*15*/], 5f);
	__LIB_40__.func_983(&Local_103, 1, Local_103.f_3, Local_103.f_6, 1, 2);
	CUTSCENE::REQUEST_CUTSCENE("FBI_1_EXT", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		SYSTEM::WAIT(0);
	}
	if (!iLocal_465)
	{
		STREAMING::NEW_LOAD_SCENE_START(1612.0714f, -1943.6034f, 100.9448f, __LIB_2__.func_162(0f, 0f, 153.7f), 100f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_32__.func_796(1629.403f, -1946.552f, 91.196f, 1571.303f, -1946.552f, 107.096f, 62.1f, 1616.2025f, -1933.765f, 100.745f, 65.3292f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	func_3(1616.2025f, -1933.765f, 100.745f, 65.3292f, 1);
	VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
	iLocal_223 = MISC::GET_GAME_TIMER();
	iLocal_233 = 5;
	iLocal_48 = 8;
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_3(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x905
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam2)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
			}
			__LIB_40__.func_977(iVar0, Param0, fParam1, 24, 0);
		}
	}
}

void func_128()//Position - 0xCBFF
{
	int iVar0;
	iVar0 = 0;
	if (iLocal_465)
	{
		__LIB_0__.func_370(235.5931f, -1354.1631f, 29.5508f, 34.39f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(Local_58.f_1);
	STREAMING::REQUEST_MODEL(Local_55[1 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_55[3 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_102[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_102[1 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_101[0 /*15*/].f_1);
	STREAMING::REQUEST_MODEL(Local_103.f_1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_103.f_1, true);
	STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_101[0 /*15*/].f_13, "lkfbi1");
	STREAMING::REQUEST_PTFX_ASSET();
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_58.f_1) || !STREAMING::HAS_MODEL_LOADED(Local_55[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_55[3 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_102[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_102[1 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_101[0 /*15*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_103.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI1LEADINOUTFBI_1_EXT")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_101[0 /*15*/].f_13, "lkfbi1")) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, true, false, false, false);
	AUDIO::DISTANT_COP_CAR_SIRENS(true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 235.5931f, -1354.1631f, 29.5508f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 34.391f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	__LIB_24__.func_936(PLAYER::PLAYER_PED_ID(), &Global_4541610, 1);
	__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
	iVar0 = 0;
	while (iVar0 <= (Local_102.f_0 - 1))
	{
		Local_102[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_102[iVar0 /*15*/].f_1, Local_102[iVar0 /*15*/].f_3, Local_102[iVar0 /*15*/].f_6, true, true, false);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_102[iVar0 /*15*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_102[iVar0 /*15*/].f_1);
		iVar0++;
	}
	if (!iLocal_465)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	PLAYER::SET_MAX_WANTED_LEVEL(3);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	__LIB_0__.func_403(281, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_248 = 3;
	func_208(1, 0, 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_OUTSIDE_CORONERS_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_LOSE_COPS");
	__LIB_0__.func_210("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
	__LIB_42__.func_872(4, "outside coroners escape police", 1, 0, 0, 1);
	iLocal_48 = 8;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
}

void func_208(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x15EF8
{
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_6__.func_833();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1f);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
	}
	if (bParam3)
	{
		__LIB_11__.func_308();
	}
	else
	{
		__LIB_11__.func_310();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_213(int iParam0)//Position - 0x1600B
{
	if (!iLocal_206)
	{
		if ((((iLocal_210 && __LIB_0__.func_479(&iLocal_222, 2000)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, false, true, 0)) || __LIB_0__.func_479(&iLocal_240, 40000)) || iParam0)
		{
			if (AUDIO::PREPARE_ALARM("FBI_01_MORGUE_ALARMS"))
			{
				AUDIO::START_ALARM("FBI_01_MORGUE_ALARMS", false);
				iLocal_222 = MISC::GET_GAME_TIMER();
				iLocal_206 = 1;
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_ALARM");
			}
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2)//Position - 0x160C3
{
	int iVar0;
	iVar0 = __LIB_11__.func_312(__LIB_20__.func_509(iParam0));
	if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < 10)
		{
			WEAPON::SET_PED_AMMO(iParam0, iVar0, 10, false);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, true);
	}
	else if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, true, true);
	}
	else if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1) < iParam2)
	{
		WEAPON::SET_PED_AMMO(iParam0, iParam1, iParam2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, true);
	}
}

void func_217(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x16176
{
	if (bParam1)
	{
		func_218(iParam0, 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (bParam2)
	{
		func_218(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (bParam3)
	{
		func_218(iParam0, 14, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
}

int func_218(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x161CC
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_218(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_218(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_228(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_227(iParam0, iVar10, &iVar4, 1))
							{
								func_218(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_218(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_218(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_218(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_218(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_218(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_218(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_218(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_218(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_218(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_227(iParam0, iVar10, &iVar4, 0))
		{
			func_218(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_219(iParam0, iVar10, &iVar4))
		{
			func_218(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_219(int iParam0, int iParam1, int iParam2)//Position - 0x169DC
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_220(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_220(int iParam0, int iParam1, int iParam2)//Position - 0x16A68
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_220(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_220(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_220(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_220(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17528
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_220(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0x175BE
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
				if (func_220(iParam0, iParam1, iVar0))
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
				if (func_220(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_339()//Position - 0x38524
{
	int iVar0;
	iVar0 = 0;
	if (iLocal_465)
	{
		__LIB_0__.func_370(248.6566f, -1366.2362f, 23.5377f, 90.17f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_56[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_57[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[0 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_57[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[1 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_53[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_156[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	__LIB_18__.func_191(69, 1, 0, 1, 0);
	iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_452))
	{
		iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_452);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	PED::REQUEST_ACTION_MODE_ASSET("michael_ACTION");
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_56[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_57[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_53[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_156[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_452)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) || !PED::HAS_ACTION_MODE_ASSET_LOADED("michael_action"))
	{
		SYSTEM::WAIT(0);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[8], -1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[8], 4, false, true);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[9], 1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[9], 4, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, false, true, true, true);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, true, false, false, false);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	func_347();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 248.6566f, -1366.2362f, 23.5377f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 90.1748f);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	__LIB_24__.func_936(PLAYER::PLAYER_PED_ID(), &Global_4541610, 1);
	func_215(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 50);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_ActionMode_Idle"), false, 0, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_452, MISC::GET_HASH_KEY("CorridorBottom"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_452, MISC::GET_HASH_KEY("CorridorBottom"));
	func_346(&(Local_57[0 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[0 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[0 /*28*/], true, 1);
	Local_260 = { 291.552f, -1345.871f, 24.57f };
	Local_261 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[0 /*28*/], false, false);
	func_346(&(Local_57[1 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[1 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[1 /*28*/], true, 1);
	Local_260 = { 296.702f, -1349.621f, 24.57f };
	Local_261 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[1 /*28*/], false, false);
	func_343(&(Local_56[3 /*28*/]), 0);
	HUD::REMOVE_BLIP(&(Local_56[3 /*28*/].f_2));
	PED::SET_PED_CAN_BE_TARGETTED(Local_56[3 /*28*/], false);
	__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("D"), Local_56[3 /*28*/], "doctor1", 0, 1);
	TASK::TASK_COWER(Local_56[3 /*28*/], -1);
	iLocal_52[3] = 1;
	iVar0 = 1;
	while (iVar0 <= (Local_156.f_0 - 1))
	{
		Local_156[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_156[iVar0 /*24*/].f_2, Local_156[iVar0 /*24*/].f_3, true, true, false);
		ENTITY::SET_ENTITY_HEADING(Local_156[iVar0 /*24*/], Local_156[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.3568f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
	SYSTEM::WAIT(0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_453 = __LIB_0__.func_392(236.4304f, -1357.7548f, 38.5342f, 0);
	iLocal_248 = 3;
	iLocal_226 = 2;
	iLocal_229 = 3;
	iLocal_245 = 2;
	func_213(1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_HALFWAY_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
	func_208(0, 0f, 0f, 0);
	__LIB_42__.func_872(3, "half way through shootout", 0, 0, 0, 1);
	iLocal_48 = 5;
}

void func_343(var uParam0, bool bParam1)//Position - 0x390AE
{
	MISC::CLEAR_AREA(uParam0->f_11, 1.5f, true, false, false, false);
	if (!bParam1)
	{
		*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, true, true);
	}
	else
	{
		*uParam0 = PED::CREATE_PED(6, uParam0->f_1, uParam0->f_11, uParam0->f_17, true, true);
	}
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_23, -1, true, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_18);
	if (uParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_24));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	func_345(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_19);
	__LIB_0__.func_477(*uParam0, 0);
	uParam0->f_22 = 1;
}

void func_345(int iParam0, bool bParam1)//Position - 0x39273
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_466, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_466);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_467, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_467);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_467);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_466, iLocal_467);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_467, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_467, iLocal_466);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_467);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
	}
}

void func_346(var uParam0)//Position - 0x39331
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, true, false, false, false);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, true, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, false, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 32, false);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, false);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_23, -1, false, true);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
}

void func_347()//Position - 0x393F4
{
	iLocal_457[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 262.471f, -1357.852f, 24.8703f, 0f, 0f, 63f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[0], "Reception");
	iLocal_457[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 240.8327f, -1359.4211f, 38.6342f, 0f, 0f, 27f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[1], "topoff_right");
	iLocal_457[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 254.35f, -1342.04f, 24.61f, 0f, 0f, 50f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[2], "AutopsyLargeA");
	iLocal_457[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 248.13f, -1355.14f, 24.62f, 90f, 0f, -40f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[3], "AutopsyLargeB");
	iLocal_457[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 241.899f, -1364.692f, 24.9978f, 0f, 0f, -39.44f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[4], "CorridorBottom");
	iLocal_457[5] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), 247.6937f, -1374.546f, 38.7342f, 0f, 0f, 20f, 0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_457[5], "topoff_mid");
}

void func_348()//Position - 0x39550
{
	int iVar0;
	if (iLocal_465)
	{
		__LIB_0__.func_370(294.457f, -1351.7913f, 23.5344f, 58.34f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_56[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_56[2 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_57[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[0 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_57[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[1 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_53[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_156[0 /*24*/].f_2);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	STREAMING::REQUEST_ANIM_DICT("dead");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	__LIB_18__.func_191(69, 1, 0, 1, 0);
	iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_452))
	{
		iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_452);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while (((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_56[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_56[2 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_53[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_156[0 /*24*/].f_2)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !STREAMING::HAS_ANIM_DICT_LOADED("dead")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_452)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
	{
		SYSTEM::WAIT(0);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, false, true, true, true);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, true, false, false, false);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	func_347();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 294.457f, -1351.7913f, 23.5344f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 58.341f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
	__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_452, MISC::GET_HASH_KEY("BodyStorage"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_452, MISC::GET_HASH_KEY("BodyStorage"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 50, true, true);
	}
	else
	{
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL")) < 50)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 50, false);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), true);
	}
	iVar0 = 1;
	while (iVar0 <= (Local_156.f_0 - 1))
	{
		Local_156[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_156[iVar0 /*24*/].f_2, Local_156[iVar0 /*24*/].f_3, true, true, false);
		ENTITY::SET_ENTITY_HEADING(Local_156[iVar0 /*24*/], Local_156[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.3568f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
	if (!iLocal_465)
	{
		STREAMING::NEW_LOAD_SCENE_START(294.457f, -1351.7913f, 23.5344f, __LIB_2__.func_162(0f, 0f, 58.34f), 8f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_346(&(Local_57[0 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[0 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[0 /*28*/], true, 1);
	Local_260 = { 291.552f, -1345.871f, 24.57f };
	Local_261 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[0 /*28*/], false, false);
	func_346(&(Local_57[1 /*28*/]));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[1 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[1 /*28*/], true, 1);
	Local_260 = { 296.702f, -1349.621f, 24.57f };
	Local_261 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[1 /*28*/], false, false);
	func_343(&(Local_56[1 /*28*/]), 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_56[1 /*28*/]);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_56[1 /*28*/], true);
	AUDIO::STOP_PED_SPEAKING(Local_56[1 /*28*/], true);
	PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 3, 0, 1, 0);
	HUD::REMOVE_BLIP(&(Local_56[1 /*28*/].f_2));
	PED::SET_PED_CAN_RAGDOLL(Local_56[1 /*28*/], true);
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_56[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	iLocal_229 = 3;
	iLocal_453 = __LIB_0__.func_392(236.4304f, -1357.7548f, 38.5342f, 0);
	func_213(1);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_SHOOTOUT_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
	func_208(0, 0f, 0f, 0);
	__LIB_42__.func_872(2, "Start of shootout", 0, 0, 0, 1);
	iLocal_48 = 5;
}

void func_349()//Position - 0x39E86
{
	int iVar0;
	if (iLocal_465)
	{
		__LIB_0__.func_370(279.0734f, -1337.0759f, 23.5545f, 227.22f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_56[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_57[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[0 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_57[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[1 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_53[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_156[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATPISTOL")));
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_COMBATPISTOL"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	STREAMING::REQUEST_ANIM_DICT("missfbi1ig_7");
	STREAMING::REQUEST_ANIM_DICT("dead");
	PED::REQUEST_STEALTH_MODE_ASSET("MICHAEL_ACTION");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
	STREAMING::REQUEST_PTFX_ASSET();
	__LIB_18__.func_191(69, 1, 0, 1, 0);
	iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_452))
	{
		iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_452);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while ((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_56[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_57[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_53[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_156[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_COMBATPISTOL")))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_COMBATPISTOL"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7")) || !STREAMING::HAS_ANIM_DICT_LOADED("dead")) || !PED::HAS_STEALTH_MODE_ASSET_LOADED("michael_action")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1)) || !PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !INTERIOR::IS_INTERIOR_READY(iLocal_452))
	{
		SYSTEM::WAIT(0);
	}
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, false, true, true, true);
	MISC::CLEAR_AREA(278.58f, -1336.61f, 23.68f, 1000f, true, false, false, false);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(278.58f, -1336.61f, 23.68f, 1000f);
	func_347();
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	__LIB_9__.func_485(4, 1);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
	func_218(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 279.0734f, -1337.0759f, 23.5545f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 227.5366f);
	PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Stealth_Idle"), false, 0, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	INTERIOR::FORCE_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_452, MISC::GET_HASH_KEY("AutopsySmall"));
	INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iLocal_452, MISC::GET_HASH_KEY("AutopsySmall"));
	func_343(&Local_69, 0);
	Local_69.f_2 = __LIB_6__.func_850(Local_69.f_0, 1, 145);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
	WEAPON::SET_CURRENT_PED_WEAPON(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), true);
	AUDIO::STOP_PED_SPEAKING(Local_69.f_0, true);
	__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("6"), Local_69.f_0, "CIA1", 0, 1);
	PED::FORCE_PED_MOTION_STATE(Local_69.f_0, joaat("MotionState_Aiming"), true, 0, false);
	func_350();
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_69.f_0, false, false);
	iVar0 = 0;
	while (iVar0 <= (Local_156.f_0 - 1))
	{
		Local_156[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_156[iVar0 /*24*/].f_2, Local_156[iVar0 /*24*/].f_3, true, true, false);
		ENTITY::SET_ENTITY_HEADING(Local_156[iVar0 /*24*/], Local_156[iVar0 /*24*/].f_18);
		if (iVar0 == 0)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.3568f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
		}
		else if (iVar0 == 1)
		{
			INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
		}
		iVar0++;
	}
	Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
	func_346(&(Local_57[0 /*28*/]));
	HUD::REMOVE_BLIP(&(Local_57[0 /*28*/].f_2));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[0 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[0 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[0 /*28*/], true, 1);
	Local_260 = { 291.552f, -1345.871f, 24.57f };
	Local_261 = { 0f, 0f, 147f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[0 /*28*/], false, false);
	func_346(&(Local_57[1 /*28*/]));
	HUD::REMOVE_BLIP(&(Local_57[1 /*28*/].f_2));
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 11, 0, 0, 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[1 /*28*/]);
	PED::SET_PED_CAN_RAGDOLL(Local_57[1 /*28*/], true);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[1 /*28*/], true, 1);
	Local_260 = { 296.702f, -1349.621f, 24.57f };
	Local_261 = { 0f, 0f, 140f };
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[1 /*28*/], false, false);
	func_343(&(Local_56[1 /*28*/]), 0);
	PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_56[1 /*28*/]);
	AUDIO::DISABLE_PED_PAIN_AUDIO(Local_56[1 /*28*/], true);
	AUDIO::STOP_PED_SPEAKING(Local_56[1 /*28*/], true);
	PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 3, 0, 1, 0);
	HUD::REMOVE_BLIP(&(Local_56[1 /*28*/].f_2));
	PED::SET_PED_CAN_RAGDOLL(Local_56[1 /*28*/], true);
	func_343(&(Local_56[4 /*28*/]), 0);
	HUD::REMOVE_BLIP(&(Local_56[4 /*28*/].f_2));
	PED::SET_PED_CAN_BE_TARGETTED(Local_56[4 /*28*/], false);
	TASK::TASK_PLAY_ANIM_ADVANCED(Local_56[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
	if (!iLocal_465)
	{
		STREAMING::NEW_LOAD_SCENE_START(279.0734f, -1337.0759f, 23.5545f, __LIB_2__.func_162(0f, 0f, 227.5366f), 8f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_WAKE_UP_RT");
	AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
	func_208(0, 0f, 0f, 0);
	iLocal_48 = 3;
	__LIB_42__.func_872(1, "stealth the cia guard", 0, 0, 0, 1);
}

void func_350()//Position - 0x3A837
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(Local_69.f_0))
	{
		PED::SET_PED_RESET_FLAG(Local_69.f_0, 258, true);
		if (iLocal_246 < 22)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_69.f_0, 0f, 0.5f, 0f) - ENTITY::GET_ENTITY_COORDS(Local_69.f_0, true) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_69.f_0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (((((__LIB_0__.func_156(Var0, Var1) < 0f && PED::CAN_PED_SEE_HATED_PED(Local_69.f_0, PLAYER::PLAYER_PED_ID())) || __LIB_11__.func_989(&Local_69, &(Local_69.f_18))) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_69.f_0)) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_69.f_0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 283.228f, -1348.54f, 23.538f, 279.005f, -1344.71f, 26.538f, 2f, false, true, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69.f_0, false);
				TASK::TASK_COMBAT_PED(Local_69.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_246 = 22;
			}
		}
		switch (iLocal_246)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_a", 4f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, "missfbi1ig_7", "idle_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
				TASK::TASK_PERFORM_SEQUENCE(Local_69.f_0, iLocal_450);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
				iLocal_246++;
				break;
			case 1:
				if (func_371(Local_69.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
				{
					PED::FORCE_PED_MOTION_STATE(Local_69.f_0, joaat("MotionState_Aiming"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.9f, -1352.5f, 24f, 4000, true, false);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.3f, -1348.3f, 25f, 4000, false, false);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.9f, -1352.5f, 24f, 4000, false, false);
					TASK::TASK_AIM_GUN_AT_COORD(0, 296.3f, -1348.3f, 25f, 4000, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
					TASK::TASK_PERFORM_SEQUENCE(Local_69.f_0, iLocal_450);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
					iLocal_246++;
				}
				break;
			case 2:
				if (func_371(Local_69.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 288.09836f, -1346.5475f, 23.53782f, 285.4f, -1352f, 25f, 1f, false, 0.1f, 0.1f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 286.7805f, -1348.7582f, 23.5377f, 285.4f, -1352f, 25f, 1f, false, 0.1f, 0.1f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, 284.2f, -1351.1f, 24f, 1500, false, false);
					TASK::TASK_AIM_GUN_AT_COORD(0, 284.1f, -1351.8f, 25.7f, 2000, false, false);
					TASK::TASK_AIM_GUN_AT_COORD(0, 286.9f, -1352f, 25f, 2000, false, false);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 290.86984f, -1348.4497f, 23.53797f, 295.6f, -1352.3f, 25f, 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_COORD(0, 295.6f, -1352.3f, 25f, 4000, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
					TASK::TASK_PERFORM_SEQUENCE(Local_69.f_0, iLocal_450);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
					iLocal_246++;
				}
				break;
			case 3:
				if (!PED::IS_PED_FACING_PED(Local_69.f_0, PLAYER::PLAYER_PED_ID(), 35f) || !func_370(&Local_69, ENTITY::GET_ENTITY_COORDS(Local_69.f_0, true), 1f, 1f, 1.6f))
				{
					if (func_371(Local_69.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, false, 0.1f, 0.1f, true, 512, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
						TASK::TASK_PERFORM_SEQUENCE(Local_69.f_0, iLocal_450);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
					}
				}
				break;
			case 22:
				PED::SET_PED_RESET_FLAG(Local_69.f_0, 187, true);
				if (__LIB_0__.func_479(&iLocal_223, 1500))
				{
					AUDIO::STOP_PED_SPEAKING(Local_69.f_0, false);
					iLocal_246++;
				}
				break;
			case 23:
				PED::SET_PED_RESET_FLAG(Local_69.f_0, 187, true);
				break;
		}
		func_351();
	}
}

void func_351()//Position - 0x3ACAC
{
	switch (iLocal_247)
	{
		case 0:
			if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_look", 7, 0, 0, 0))
			{
				iLocal_247++;
			}
			break;
		case 1:
			if (!__LIB_18__.func_197(&Local_430, 0))
			{
				iLocal_247++;
			}
			break;
		case 2:
			if (__LIB_0__.func_479(&iLocal_223, 7000))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_69.f_0, true), true) < 25f)
				{
					if (!__LIB_18__.func_197(&Local_430, 0))
					{
						if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_look", 7, 0, 0, 0))
						{
							iLocal_223 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

int func_370(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x3B52F
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(*iParam0, Param1, Param2, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2)//Position - 0x3B55C
{
	int iVar0;
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if ((iVar0 == 7 || iVar0 == 2) || TASK::GET_SEQUENCE_PROGRESS(iParam0) == iParam2)
	{
		return 1;
	}
	return 0;
}

void func_377()//Position - 0x3B720
{
	if (iLocal_465)
	{
		__LIB_0__.func_370(280.645f, -1335.833f, 24.5f, -138f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(Local_56[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_56[2 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_57[0 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[0 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_57[1 /*28*/].f_1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(Local_57[1 /*28*/].f_1, true);
	STREAMING::REQUEST_MODEL(Local_53[0 /*28*/].f_1);
	STREAMING::REQUEST_MODEL(Local_112.f_2);
	STREAMING::REQUEST_MODEL(Local_134.f_2);
	STREAMING::REQUEST_MODEL(Local_158.f_2);
	STREAMING::REQUEST_MODEL(Local_156[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(Local_180[0 /*24*/].f_2);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(Local_69.f_23));
	WEAPON::REQUEST_WEAPON_ASSET(Local_69.f_23, 31, 1);
	STREAMING::REQUEST_ANIM_DICT("missfbi1");
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("fbi1", false);
	AUDIO::PREPARE_ALARM("FBI_01_MORGUE_ALARMS");
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("FBI_01_DMW_Autopsy_1", false, -1);
	AUDIO::LOAD_STREAM("FIB1_MORGUE_AMBIENCE_master", 0);
	AUDIO::PREPARE_MUSIC_EVENT("FBI1_WAKE_UP");
	__LIB_18__.func_191(69, 1, 0, 1, 0);
	iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
	while (!INTERIOR::IS_VALID_INTERIOR(iLocal_452))
	{
		iLocal_452 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(279.9322f, -1337.4902f, 23.7419f, "v_coroner");
		SYSTEM::WAIT(0);
	}
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_452);
	STREAMING::REQUEST_PTFX_ASSET();
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("coroner_stairs");
	if (iLocal_465)
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	while (((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(Local_56[0 /*28*/].f_1) || !STREAMING::HAS_MODEL_LOADED(Local_56[2 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_57[1 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_53[0 /*28*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_112.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_134.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_158.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_156[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_180[0 /*24*/].f_2)) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(Local_69.f_23))) || !WEAPON::HAS_WEAPON_ASSET_LOADED(Local_69.f_23)) || !STREAMING::HAS_ANIM_DICT_LOADED("missfbi1")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("fbi1")) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01", false, -1)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\FBI_01_DMW_02", false, -1)) || !AUDIO::REQUEST_AMBIENT_AUDIO_BANK("script\FBI_01_DMW_Autopsy_1", false, -1)) || !AUDIO::LOAD_STREAM("FIB1_MORGUE_AMBIENCE_master", 0)) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !AUDIO::PREPARE_MUSIC_EVENT("FBI1_WAKE_UP")) || !INTERIOR::IS_INTERIOR_READY(iLocal_452)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
	}
	__LIB_8__.func_770(1);
	PED::ADD_SCENARIO_BLOCKING_AREA(278f, -1473.12f, 100f, 222.5f, -1243.38f, -100f, false, true, true, true);
	MISC::CLEAR_AREA(287.9576f, -1345.725f, 23.2416f, 300f, true, false, false, false);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(287.9576f, -1345.725f, 23.2416f, 300f);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	func_347();
	AUDIO::PLAY_STREAM_FRONTEND();
	func_378(1, 1, 0, 0, 0, 3000, 1);
	__LIB_42__.func_872(0, "Start of mission", 0, 0, 0, 1);
	iLocal_48 = 1;
}

void func_378(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x3BAC1
{
	__LIB_26__.func_367(0, 1, 1, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_6__.func_833();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::DESTROY_ALL_CAMS(false);
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, iParam5, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
	}
	if (bParam6)
	{
		__LIB_11__.func_308();
	}
	else
	{
		__LIB_11__.func_310();
	}
}

void func_386()//Position - 0x3BD80
{
	iLocal_259[0] = MISC::GET_HASH_KEY("fbi_1_door_0");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[0], joaat("v_ilev_cor_doorglassa"), 283.59f, -1340.94f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[0], -1.2f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[0], 4, false, true);
	iLocal_259[1] = MISC::GET_HASH_KEY("fbi_1_door_1");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[1], joaat("v_ilev_cor_doorglassb"), 281.93f, -1342.9f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[1], 1.2f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[1], 4, false, true);
	iLocal_259[2] = MISC::GET_HASH_KEY("fbi_1_door_2");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[2], joaat("v_ilev_cor_doorglassb"), 287.23f, -1343.99f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[2], 1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[2], 4, false, true);
	iLocal_259[3] = MISC::GET_HASH_KEY("fbi_1_door_3");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[3], joaat("v_ilev_cor_doorglassa"), 285.57f, -1345.96f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[3], -1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[3], 4, false, true);
	iLocal_259[4] = MISC::GET_HASH_KEY("fbi_1_door_4");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[4], joaat("v_ilev_cor_doorglassb"), 265.77f, -1345.87f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[4], 1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[4], 3, false, true);
	iLocal_259[5] = MISC::GET_HASH_KEY("fbi_1_door_5");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[5], joaat("v_ilev_cor_doorglassa"), 267.42f, -1343.9f, 24.68f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[5], -1.6f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[5], 4, false, true);
	iLocal_259[6] = MISC::GET_HASH_KEY("fbi_1_door_6");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[6], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 24.55f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[6], 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[6], 4, false, true);
	iLocal_259[7] = MISC::GET_HASH_KEY("fbi_1_door_7");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[7], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 24.55f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[7], 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[7], 4, false, true);
	iLocal_259[8] = MISC::GET_HASH_KEY("fbi_1_door_8");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[8], joaat("v_ilev_cor_doorlift01"), 248.86f, -1371.01f, 23.52f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[8], 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[8], 4, false, true);
	iLocal_259[9] = MISC::GET_HASH_KEY("fbi_1_door_9");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[9], joaat("v_ilev_cor_doorlift02"), 247.58f, -1369.94f, 24.52f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[9], 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[9], 4, false, true);
	iLocal_259[10] = MISC::GET_HASH_KEY("fbi_1_door_10");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[10], joaat("v_ilev_cor_firedoorwide"), 243.51f, -1367.83f, 29.66f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[10], 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[10], 3, false, true);
	iLocal_259[11] = MISC::GET_HASH_KEY("fbi_1_door_11");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[11], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 29.67f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[11], 1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[11], 4, false, true);
	iLocal_259[12] = MISC::GET_HASH_KEY("fbi_1_door_12");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[12], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 29.67f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[12], -1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[12], 3, false, true);
	iLocal_259[13] = MISC::GET_HASH_KEY("fbi_1_door_13");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[13], joaat("v_ilev_cor_firedoor"), 252.87f, -1366.76f, 39.55f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[13], -1.2f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[13], 4, false, true);
	iLocal_259[14] = MISC::GET_HASH_KEY("fbi_1_door_14");
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_259[14], joaat("v_ilev_cor_firedoor"), 251.1f, -1365.28f, 39.55f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[14], 1.2f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[14], 4, false, true);
}

void func_387()//Position - 0x3C201
{
	int iVar0;
	iLocal_205 = 0;
	iLocal_206 = 0;
	bLocal_207 = false;
	iLocal_209 = 0;
	iLocal_210 = 0;
	iLocal_211 = 0;
	bLocal_212 = false;
	bLocal_213 = false;
	iLocal_214 = 0;
	iLocal_215 = 0;
	iLocal_216 = 0;
	bLocal_208 = false;
	iLocal_217 = 0;
	iLocal_218 = 0;
	iLocal_219 = 0;
	iLocal_221 = 0;
	iLocal_224 = 0;
	iLocal_225 = 0;
	iLocal_226 = 0;
	iLocal_227 = 0;
	iLocal_228 = -1;
	iLocal_229 = 0;
	iLocal_233 = 0;
	iLocal_238 = 0;
	iLocal_239 = 0;
	iLocal_242 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_246 = 0;
	iLocal_247 = 0;
	iLocal_248 = 0;
	iLocal_249 = 0;
	iLocal_250 = 0;
	iLocal_252 = 0;
	iLocal_253 = 0;
	iLocal_254 = 0;
	iLocal_255 = 0;
	iLocal_256 = 0;
	iLocal_257 = 0;
	iLocal_258 = 0;
	fLocal_262 = 0f;
	fLocal_263 = 0f;
	StringCopy(&cLocal_458, "", 16);
	StringCopy(&Local_461, "", 16);
	func_388();
	iLocal_234 = AUDIO::GET_SOUND_ID();
	iLocal_235 = AUDIO::GET_SOUND_ID();
	Local_112.f_2 = joaat("p_cs_clipboard");
	Local_134.f_2 = joaat("prop_pencil_01");
	Local_158.f_2 = joaat("prop_bonesaw");
	Local_156[0 /*24*/].f_2 = joaat("prop_ld_rub_binbag_01");
	Local_156[0 /*24*/].f_3 = { 274.7f, -1375.76f, 23.81f };
	Local_156[0 /*24*/].f_18 = 0f;
	Local_156[1 /*24*/].f_2 = joaat("prop_ld_rub_binbag_01");
	Local_156[1 /*24*/].f_3 = { 249.2f, -1375.4077f, 38.81f };
	Local_156[1 /*24*/].f_18 = 0f;
	Local_180[0 /*24*/].f_2 = joaat("prop_bin_14b");
	Local_180[0 /*24*/].f_3 = { 233.89f, -1355.93f, 29.56f };
	Local_180[0 /*24*/].f_12 = { 0f, 0f, 318.07f };
	Local_56[0 /*28*/].f_1 = joaat("S_M_Y_Autopsy_01");
	Local_56[0 /*28*/].f_11 = { 278.6999f, -1337.5455f, 23.261f };
	Local_56[0 /*28*/].f_17 = 328f;
	Local_56[0 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_56[0 /*28*/].f_18 = 200;
	StringCopy(&(Local_56[0 /*28*/].f_24), "doctor 0", 16);
	Local_56[1 /*28*/].f_1 = joaat("S_M_Y_Autopsy_01");
	Local_56[1 /*28*/].f_11 = { 280.0447f, -1336.3368f, 23.2419f };
	Local_56[1 /*28*/].f_17 = 148.5733f;
	Local_56[1 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_56[1 /*28*/].f_18 = 200;
	StringCopy(&(Local_56[1 /*28*/].f_24), "doctor 1", 16);
	Local_56[2 /*28*/].f_1 = joaat("S_M_Y_Autopsy_01");
	Local_56[2 /*28*/].f_11 = { 265.6501f, -1360.3425f, 23.2419f };
	Local_56[2 /*28*/].f_17 = 5.1035f;
	Local_56[2 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_56[2 /*28*/].f_18 = 150;
	StringCopy(&(Local_56[2 /*28*/].f_24), "doctor 2", 16);
	Local_56[3 /*28*/].f_1 = joaat("S_M_Y_Autopsy_01");
	Local_56[3 /*28*/].f_11 = { 261.4272f, -1354.8154f, 23.2419f };
	Local_56[3 /*28*/].f_17 = 135.6336f;
	Local_56[3 /*28*/].f_14 = { 253.3714f, -1373.1748f, 23.5377f };
	Local_56[3 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_56[3 /*28*/].f_18 = 150;
	StringCopy(&(Local_56[3 /*28*/].f_24), "doctor 3", 16);
	Local_56[4 /*28*/].f_1 = joaat("S_M_Y_Autopsy_01");
	Local_56[4 /*28*/].f_11 = { 265.6501f, -1360.3425f, 23.2419f };
	Local_56[4 /*28*/].f_17 = 5.1035f;
	Local_56[4 /*28*/].f_14 = { 265.6501f, -1360.3425f, 23.2419f };
	Local_56[4 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_56[4 /*28*/].f_18 = 150;
	StringCopy(&(Local_56[4 /*28*/].f_24), "doctor 4", 16);
	Local_57[0 /*28*/].f_11 = { 292.205f, -1345.025f, 24.27f };
	Local_57[0 /*28*/].f_17 = 142f;
	Local_57[0 /*28*/].f_18 = 200;
	Local_57[0 /*28*/].f_1 = joaat("U_F_Y_corpse_01");
	Local_57[0 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_57[1 /*28*/].f_11 = { 297.302f, -1348.671f, 24.27f };
	Local_57[1 /*28*/].f_17 = 140f;
	Local_57[1 /*28*/].f_18 = 200;
	Local_57[1 /*28*/].f_1 = joaat("U_F_M_Corpse_01");
	Local_57[1 /*28*/].f_23 = joaat("WEAPON_UNARMED");
	Local_69.f_11 = { 284.5221f, -1343.0671f, 23.538f };
	Local_69.f_17 = 231.3517f;
	Local_69.f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_69.f_1 = joaat("S_M_M_CIASec_01");
	Local_69.f_18 = 200;
	Local_69.f_19 = 5;
	StringCopy(&(Local_69.f_24), "cia enemy 0", 16);
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_0 - 1))
	{
		Local_53[iVar0 /*28*/].f_22 = 0;
		iLocal_49[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_54.f_0 - 1))
	{
		Local_54[iVar0 /*28*/].f_22 = 0;
		iLocal_50[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_51 - 1))
	{
		Local_55[iVar0 /*28*/].f_22 = 0;
		iLocal_51[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_56.f_0 - 1))
	{
		iLocal_52[iVar0] = 0;
		iVar0++;
	}
	Local_53[0 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[0 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[0 /*28*/].f_11 = { 269.8f, -1344.5f, 23.538f };
	Local_53[0 /*28*/].f_14 = { 272.15137f, -1343.9138f, 23.53772f };
	Local_53[0 /*28*/].f_17 = 314.0738f;
	Local_53[0 /*28*/].f_18 = 200;
	Local_53[0 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[0 /*28*/].f_24), "cia enemy 0", 16);
	Local_53[1 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[1 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[1 /*28*/].f_11 = { 264.3177f, -1339.1743f, 23.538f };
	Local_53[1 /*28*/].f_17 = 223.5415f;
	Local_53[1 /*28*/].f_14 = { 271.223f, -1342.7653f, 23.538f };
	Local_53[1 /*28*/].f_18 = 150;
	Local_53[1 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[1 /*28*/].f_24), "cia enemy 1", 16);
	Local_53[2 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[2 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[2 /*28*/].f_11 = { 265.7096f, -1354.0114f, 23.2419f };
	Local_53[2 /*28*/].f_17 = 316.8201f;
	Local_53[2 /*28*/].f_14 = { 260.8433f, -1353.216f, 23.2419f };
	Local_53[2 /*28*/].f_18 = 200;
	Local_53[2 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[2 /*28*/].f_24), "cia enemy 2", 16);
	Local_53[3 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[3 /*28*/].f_23 = joaat("WEAPON_PUMPSHOTGUN");
	Local_53[3 /*28*/].f_11 = { 265.5608f, -1354.8715f, 23.538f };
	Local_53[3 /*28*/].f_17 = 349.8424f;
	Local_53[3 /*28*/].f_14 = { 269.4462f, -1345.0549f, 23.538f };
	Local_53[3 /*28*/].f_18 = 200;
	Local_53[3 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[3 /*28*/].f_24), "cia enemy 3", 16);
	Local_53[4 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[4 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[4 /*28*/].f_11 = { 263.1902f, -1359.312f, 23.2419f };
	Local_53[4 /*28*/].f_17 = 351.5096f;
	Local_53[4 /*28*/].f_14 = { 263.1902f, -1359.312f, 23.5377f };
	Local_53[4 /*28*/].f_18 = 125;
	Local_53[4 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[4 /*28*/].f_24), "cia enemy 4", 16);
	Local_53[5 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[5 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[5 /*28*/].f_11 = { 249.5796f, -1365.9684f, 23.2392f };
	Local_53[5 /*28*/].f_17 = 222.9028f;
	Local_53[5 /*28*/].f_14 = { 255.7347f, -1363.1337f, 23.2419f };
	Local_53[5 /*28*/].f_18 = 200;
	Local_53[5 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[5 /*28*/].f_24), "cia enemy 5", 16);
	Local_53[6 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[6 /*28*/].f_23 = joaat("WEAPON_PUMPSHOTGUN");
	Local_53[6 /*28*/].f_11 = { 253.0823f, -1356.303f, 23.2419f };
	Local_53[6 /*28*/].f_17 = 182.8046f;
	Local_53[6 /*28*/].f_14 = { 258.29f, -1361.33f, 23.24f };
	Local_53[6 /*28*/].f_18 = 200;
	Local_53[6 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[6 /*28*/].f_24), "cia enemy 6", 16);
	Local_53[7 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[7 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[7 /*28*/].f_11 = { 261.515f, -1348.8262f, 23.2419f };
	Local_53[7 /*28*/].f_17 = 34.0855f;
	Local_53[7 /*28*/].f_14 = { 254.9045f, -1344.0269f, 23.2419f };
	Local_53[7 /*28*/].f_18 = 200;
	Local_53[7 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[7 /*28*/].f_24), "cia enemy 7", 16);
	Local_53[7 /*28*/].f_22 = 1;
	Local_53[8 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[8 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[8 /*28*/].f_11 = { 255.673f, -1354.5822f, 23.2419f };
	Local_53[8 /*28*/].f_17 = 213.8065f;
	Local_53[8 /*28*/].f_14 = { 250.03f, -1350.03f, 24.25f };
	Local_53[8 /*28*/].f_18 = 200;
	Local_53[8 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[8 /*28*/].f_24), "cia enemy 8", 16);
	Local_53[9 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[9 /*28*/].f_23 = joaat("WEAPON_SMG");
	Local_53[9 /*28*/].f_11 = { 247.1438f, -1371.6957f, 23.2391f };
	Local_53[9 /*28*/].f_17 = 322.0567f;
	Local_53[9 /*28*/].f_14 = { 248.4301f, -1366.5393f, 23.5377f };
	Local_53[9 /*28*/].f_18 = 200;
	Local_53[9 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[9 /*28*/].f_24), "cia enemy 9", 16);
	Local_53[10 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[10 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[10 /*28*/].f_11 = { 248.9279f, -1366.2971f, 23.538f };
	Local_53[10 /*28*/].f_17 = 312.8393f;
	Local_53[10 /*28*/].f_14 = { 265.0469f, -1350.6741f, 23.538f };
	Local_53[10 /*28*/].f_18 = 200;
	Local_53[10 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[10 /*28*/].f_24), "cia enemy 10", 16);
	Local_53[11 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[11 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[11 /*28*/].f_11 = { 244.5939f, -1365.7068f, 28.3555f };
	Local_53[11 /*28*/].f_17 = 143.0724f;
	Local_53[11 /*28*/].f_14 = { 241.339f, -1369.8662f, 28.3555f };
	Local_53[11 /*28*/].f_18 = 200;
	Local_53[11 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[11 /*28*/].f_24), "cia enemy 11", 16);
	Local_53[12 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[12 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[12 /*28*/].f_11 = { 256.1583f, -1357.6641f, 36.0631f };
	Local_53[12 /*28*/].f_17 = 227f;
	Local_53[12 /*28*/].f_14 = { 251.7f, -1362.8f, 33.2999f };
	Local_53[12 /*28*/].f_18 = 200;
	Local_53[12 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[12 /*28*/].f_24), "cia enemy 12", 16);
	Local_53[13 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[13 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[13 /*28*/].f_11 = { 258.8216f, -1361.405f, 31.1218f };
	Local_53[13 /*28*/].f_17 = 169.2f;
	Local_53[13 /*28*/].f_14 = { 250.1255f, -1366.6589f, 28.6482f };
	Local_53[13 /*28*/].f_18 = 200;
	Local_53[13 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[13 /*28*/].f_24), "cia enemy 13", 16);
	Local_53[14 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[14 /*28*/].f_23 = joaat("WEAPON_SMG");
	Local_53[14 /*28*/].f_11 = { 248.9279f, -1366.2971f, 23.538f };
	Local_53[14 /*28*/].f_17 = 312.8393f;
	Local_53[14 /*28*/].f_14 = { 258.1613f, -1360.382f, 23.538f };
	Local_53[14 /*28*/].f_18 = 200;
	Local_53[14 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[14 /*28*/].f_24), "cia enemy 14", 16);
	Local_53[15 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[15 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[15 /*28*/].f_11 = { 266.83777f, -1345.4725f, 23.53782f };
	Local_53[15 /*28*/].f_17 = 315.5344f;
	Local_53[15 /*28*/].f_14 = { 284.2f, -1344.5238f, 23.5344f };
	Local_53[15 /*28*/].f_18 = 200;
	Local_53[15 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[15 /*28*/].f_24), "cia enemy 15", 16);
	Local_53[16 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_53[16 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_53[16 /*28*/].f_11 = { 274.4696f, -1341.7974f, 23.2416f };
	Local_53[16 /*28*/].f_17 = 229.5128f;
	Local_53[16 /*28*/].f_14 = { 279.2521f, -1344.3408f, 23.5344f };
	Local_53[16 /*28*/].f_18 = 200;
	Local_53[16 /*28*/].f_19 = 5;
	StringCopy(&(Local_53[16 /*28*/].f_24), "cia enemy 16", 16);
	Local_53[16 /*28*/].f_22 = 1;
	Local_54[0 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[0 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[0 /*28*/].f_11 = { 242.2337f, -1367.5201f, 38.5343f };
	Local_54[0 /*28*/].f_17 = 332f;
	Local_54[0 /*28*/].f_14 = { 242.5351f, -1374.2463f, 38.5343f };
	Local_54[0 /*28*/].f_18 = 200;
	Local_54[0 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[0 /*28*/].f_24), "top floor 0", 16);
	Local_54[1 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[1 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[1 /*28*/].f_11 = { 236.2051f, -1369.0114f, 38.5344f };
	Local_54[1 /*28*/].f_17 = 239.4541f;
	Local_54[1 /*28*/].f_14 = { 242.2337f, -1367.5201f, 38.5343f };
	Local_54[1 /*28*/].f_18 = 200;
	Local_54[1 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[1 /*28*/].f_24), "top floor 1", 16);
	Local_54[2 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[2 /*28*/].f_23 = joaat("WEAPON_SMG");
	Local_54[2 /*28*/].f_11 = { 239.4661f, -1379.3192f, 38.5342f };
	Local_54[2 /*28*/].f_17 = 11.6926f;
	Local_54[2 /*28*/].f_14 = { 242.9099f, -1375.5717f, 38.5342f };
	Local_54[2 /*28*/].f_18 = 200;
	Local_54[2 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[2 /*28*/].f_24), "top floor 2", 16);
	Local_54[3 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[3 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[3 /*28*/].f_11 = { 254.7773f, -1366.0381f, 33.5921f };
	Local_54[3 /*28*/].f_17 = 323.0041f;
	Local_54[3 /*28*/].f_14 = { 246.0538f, -1364.6686f, 38.5342f };
	Local_54[3 /*28*/].f_18 = 200;
	Local_54[3 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[3 /*28*/].f_24), "top floor 3", 16);
	Local_54[4 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[4 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[4 /*28*/].f_11 = { 252.0599f, -1362.6416f, 33.5921f };
	Local_54[4 /*28*/].f_17 = 193.9636f;
	Local_54[4 /*28*/].f_14 = { 254.2647f, -1371.1111f, 38.5342f };
	Local_54[4 /*28*/].f_18 = 200;
	Local_54[4 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[4 /*28*/].f_24), "top floor 4", 16);
	Local_54[5 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[5 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[5 /*28*/].f_11 = { 245.1608f, -1371.3011f, 38.2413f };
	Local_54[5 /*28*/].f_17 = 252.777f;
	Local_54[5 /*28*/].f_14 = { 245.2636f, -1376.6038f, 38.2673f };
	Local_54[5 /*28*/].f_18 = 200;
	Local_54[5 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[5 /*28*/].f_24), "top floor 5", 16);
	Local_54[6 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_54[6 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_54[6 /*28*/].f_11 = { 238.59f, -1368.96f, 38.24f };
	Local_54[6 /*28*/].f_17 = 50f;
	Local_54[6 /*28*/].f_14 = { 238.59f, -1368.96f, 38.24f };
	Local_54[6 /*28*/].f_18 = 200;
	Local_54[6 /*28*/].f_19 = 5;
	StringCopy(&(Local_54[6 /*28*/].f_24), "top floor 6", 16);
	Local_55[0 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_55[0 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_55[0 /*28*/].f_11 = { 249.5792f, -1342.7684f, 30.8178f };
	Local_55[0 /*28*/].f_17 = 114.22f;
	Local_55[0 /*28*/].f_14 = { 231.9526f, -1348.4601f, 29.4711f };
	Local_55[0 /*28*/].f_18 = 200;
	Local_55[0 /*28*/].f_19 = 2;
	StringCopy(&(Local_55[0 /*28*/].f_24), "out 0", 16);
	Local_55[1 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_55[1 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_55[1 /*28*/].f_11 = { 228.5237f, -1376.5032f, 29.704f };
	Local_55[1 /*28*/].f_17 = 87.4471f;
	Local_55[1 /*28*/].f_14 = { 225.1319f, -1361.1047f, 29.5114f };
	Local_55[1 /*28*/].f_18 = 200;
	Local_55[1 /*28*/].f_19 = 2;
	StringCopy(&(Local_55[1 /*28*/].f_24), "out 1", 16);
	Local_55[2 /*28*/].f_1 = joaat("S_M_M_CIASec_01");
	Local_55[2 /*28*/].f_23 = joaat("WEAPON_COMBATPISTOL");
	Local_55[2 /*28*/].f_11 = { 230.6237f, -1386.9448f, 29.4619f };
	Local_55[2 /*28*/].f_17 = 41.9494f;
	Local_55[2 /*28*/].f_14 = { 222.6815f, -1356.754f, 29.5875f };
	Local_55[2 /*28*/].f_18 = 200;
	Local_55[2 /*28*/].f_19 = 2;
	StringCopy(&(Local_55[2 /*28*/].f_24), "out 2", 16);
	Local_55[3 /*28*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_55[3 /*28*/].f_23 = joaat("WEAPON_PISTOL");
	Local_55[3 /*28*/].f_14 = { 222.4067f, -1363.6194f, 29.5217f };
	Local_55[3 /*28*/].f_18 = 200;
	Local_55[3 /*28*/].f_19 = 2;
	StringCopy(&(Local_55[3 /*28*/].f_24), "out 3 ", 16);
	Local_55[4 /*28*/].f_1 = joaat("S_M_Y_Cop_01");
	Local_55[4 /*28*/].f_23 = joaat("WEAPON_PISTOL");
	Local_55[4 /*28*/].f_14 = { 217.4619f, -1361.3063f, 29.5875f };
	Local_55[4 /*28*/].f_18 = 200;
	Local_55[4 /*28*/].f_19 = 2;
	StringCopy(&(Local_55[4 /*28*/].f_24), "out 4", 16);
	Local_58.f_11 = { 1600.4019f, -1944.4766f, 99.6178f };
	Local_58.f_17 = 16.6913f;
	Local_58.f_1 = __LIB_19__.func_811(1);
	Local_101[0 /*15*/].f_1 = joaat("police3");
	Local_101[0 /*15*/].f_3 = { 230.1168f, -1396.6647f, 29.49f };
	Local_101[0 /*15*/].f_6 = 7.3f;
	Local_101[0 /*15*/].f_13 = 1;
	Local_101[1 /*15*/].f_1 = joaat("police3");
	Local_101[1 /*15*/].f_3 = { 120.5738f, -1449.2554f, 28.2778f };
	Local_101[1 /*15*/].f_6 = 28.9034f;
	Local_102[0 /*15*/].f_3 = { 223.1269f, -1352.6667f, 29.5775f };
	Local_102[0 /*15*/].f_6 = 229.9205f;
	Local_102[0 /*15*/].f_1 = joaat("felon");
	Local_102[1 /*15*/].f_3 = { 225.6844f, -1349.625f, 29.5556f };
	Local_102[1 /*15*/].f_6 = 229.4848f;
	Local_102[1 /*15*/].f_1 = joaat("baller2");
	Local_103.f_3 = { 1604.959f, -1944.817f, 100.693f };
	Local_103.f_6 = 98.9533f;
	Local_103.f_1 = __LIB_11__.func_311(1, 2);
}

void func_388()//Position - 0x3D578
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_236)
	{
		iLocal_236[iVar0] = 0;
		iVar0++;
	}
}

void func_389()//Position - 0x3D59F
{
	if (!PED::IS_PED_INJURED(Local_69.f_0))
	{
		PED::SET_PED_RESET_FLAG(Local_69.f_0, 187, true);
	}
	if (__LIB_0__.func_204())
	{
		if (bLocal_212)
		{
			__LIB_0__.func_428(338.3677f, -1394.1179f, 31.5093f, 61.652f);
		}
		else
		{
			__LIB_0__.func_428(-413.37f, 1168.5259f, 324.8537f, 156.3851f);
		}
		func_390();
	}
}

void func_390()//Position - 0x3D600
{
	__LIB_20__.func_603("FBI1_WPN" /* GXT: Michael, your weapons will be in a black trash bag in the evidence room on the top floor. */);
	func_813();
}

void func_395()//Position - 0x3D772
{
	int iVar0;
	iVar0 = 0;
	__LIB_0__.func_371();
	func_662();
	switch (iLocal_233)
	{
		case 0:
			STREAMING::REQUEST_MODEL(Local_58.f_1);
			STREAMING::REQUEST_MODEL(Local_55[1 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(Local_55[3 /*28*/].f_1);
			STREAMING::REQUEST_MODEL(Local_101[0 /*15*/].f_1);
			STREAMING::REQUEST_MODEL(Local_103.f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_103.f_1, true);
			STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_101[0 /*15*/].f_13, "lkfbi1");
			if (!ENTITY::DOES_ENTITY_EXIST(Local_58.f_0))
			{
				if (iLocal_223 == 0)
				{
					iLocal_223 = MISC::GET_GAME_TIMER();
				}
				if (((((((STREAMING::HAS_MODEL_LOADED(Local_58.f_1) && STREAMING::HAS_MODEL_LOADED(Local_55[1 /*28*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_55[3 /*28*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_101[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_103.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("MISSFBI1LEADINOUTFBI_1_EXT")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_101[0 /*15*/].f_13, "lkfbi1")) && __LIB_0__.func_479(&iLocal_223, 3000))
				{
					iVar0 = 1;
					while (iVar0 <= 2)
					{
						func_343(&(Local_55[iVar0 /*28*/]), 1);
						iVar0++;
					}
					func_469(&Local_58, 1, Local_58.f_11, Local_58.f_17, 1, 0, 0);
					func_468(Local_58.f_0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_58.f_0, true);
					__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("1"), Local_58.f_0, "franklin", 0, 1);
					Local_260 = { 1602.06f, -1944.361f, 100.796f };
					Local_261 = { 0f, 1f, 12f };
					iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_58.f_0, iLocal_230, "MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", 1000f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_230, true);
					__LIB_40__.func_983(&Local_103, 1, Local_103.f_3, Local_103.f_6, 1, 2);
					iVar0 = 0;
					while (iVar0 <= 0)
					{
						MISC::CLEAR_AREA(Local_101[iVar0 /*15*/].f_3, 10f, true, false, false, false);
						Local_101[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_101[iVar0 /*15*/].f_1, Local_101[iVar0 /*15*/].f_3, Local_101[iVar0 /*15*/].f_6, true, true, false);
						if (iVar0 == 0)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_101[iVar0 /*15*/], Local_101[iVar0 /*15*/].f_13, "lkfbi1", true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_101[iVar0 /*15*/], 0f);
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_101[iVar0 /*15*/], true);
							VEHICLE::SET_VEHICLE_SIREN(Local_101[iVar0 /*15*/], true);
						}
						iVar0++;
					}
					func_467(&(Local_55[3 /*28*/]), &(Local_101[0 /*15*/]), -1, 0);
					func_467(&(Local_55[4 /*28*/]), &(Local_101[0 /*15*/]), 0, 0);
				}
			}
			else
			{
				func_465();
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_COPS_LOST");
					}
					else
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_RADIO");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_1_LOSE_COPS");
					}
					__LIB_0__.func_402(0, -1);
					HUD::CLEAR_THIS_PRINT("LOSE_WANTED" /* GXT: Lose the Cops. */);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_233++;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_103.f_0, false))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_103.f_0);
				}
			}
			func_461();
			func_465();
			func_459();
			func_458();
			__LIB_36__.func_14(&Local_430, 1593.3832f, -1934.3777f, 98.6576f, 0.01f, 0.01f, 0.01f, 0, "FBI1_God_6", 1, 1, -1);
			func_414();
			if (HUD::DOES_BLIP_EXIST(Local_430.f_5))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1586.747f, -1943.608f, 90.969f, 1611.747f, -1943.609f, 110.969f, 42f, false, true, 0))
				{
					if (__LIB_11__.func_990(&iLocal_456))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_456))
						{
							__LIB_11__.func_881(&iLocal_456);
							__LIB_6__.func_762(iLocal_456, 7f, 1, 1056964608, 0, 1, 0);
							__LIB_0__.func_296();
							iLocal_233++;
						}
					}
					else if (__LIB_0__.func_90())
					{
						if (func_404(0, 1, 1, 0))
						{
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
							func_403(&Local_58);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_58.f_0, "Franklin", 1, 0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_103.f_0, false))
								{
									VEHICLE::SET_FORCE_HD_VEHICLE(Local_103.f_0, true);
								}
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7.5f, 0f, 3);
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::REPLAY_START_EVENT(4);
							iLocal_233 = 4;
						}
					}
				}
			}
			break;
		case 2:
			func_459();
			if (__LIB_6__.func_762(iLocal_456, 7f, 1, 1056964608, 0, 1, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				iLocal_233++;
			}
			break;
		case 3:
			func_459();
			if (__LIB_0__.func_90())
			{
				if (!__LIB_18__.func_197(&Local_430, 0))
				{
					if (func_404(0, 1, 1, 1))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
						func_403(&Local_58);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_58.f_0, "Franklin", 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_103.f_0, false))
							{
								VEHICLE::SET_FORCE_HD_VEHICLE(Local_103.f_0, true);
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						iLocal_233++;
					}
				}
			}
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_32__.func_796(1629.403f, -1946.552f, 91.196f, 1571.303f, -1946.552f, 107.096f, 62.1f, 1616.2025f, -1933.765f, 100.745f, 65.3292f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_3(1616.2025f, -1933.765f, 100.745f, 65.3292f, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, true, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_103.f_0, false))
					{
						__LIB_11__.func_881(&Local_103);
						ENTITY::SET_ENTITY_HEADING(Local_103.f_0, Local_103.f_6);
						ENTITY::SET_ENTITY_COORDS(Local_103.f_0, Local_103.f_3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_103.f_0, 5f);
						ENTITY::FREEZE_ENTITY_POSITION(Local_103.f_0, true);
					}
				}
				VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_233++;
			}
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_103.f_0, false))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_103.f_0);
				}
			}
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_19__.func_811(0)))
					{
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_233 = 22;
				}
			}
			else
			{
				__LIB_20__.func_719(&iLocal_456);
				if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_103);
				}
				func_378(0, 0, 0, 0, 0, 3000, 1);
				RECORDING::REPLAY_STOP_EVENT();
				func_396();
			}
			break;
		case 22:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_20__.func_719(&iLocal_456);
				if (ENTITY::DOES_ENTITY_EXIST(Local_103.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_103);
				}
				func_208(0, 0, 0, 1);
				RECORDING::REPLAY_STOP_EVENT();
				func_396();
			}
			break;
	}
}

void func_396()//Position - 0x3DE51
{
	__LIB_6__.func_823(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_813();
}

void func_403(int iParam0)//Position - 0x3E072
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(*iParam0, true, true, true, true, true, false, false, false);
		}
	}
}

int func_404(bool bParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3E09E
{
	if (__LIB_0__.func_398(1, 0, 1) || iParam3)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		if (bParam2)
		{
			__LIB_6__.func_771();
		}
		else
		{
			__LIB_0__.func_296();
		}
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
		CAM::SET_WIDESCREEN_BORDERS(true, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		}
		__LIB_11__.func_310();
		return 1;
	}
	return 0;
}

void func_414()//Position - 0x3E4E7
{
	if (HUD::DOES_BLIP_EXIST(Local_430.f_5))
	{
		if (!iLocal_218)
		{
			__LIB_11__.func_181(&(Local_430.f_5), 1610.2008f, -1914.6011f, 99.6843f, 138.8997f);
			iLocal_218 = 1;
		}
	}
	else
	{
		iLocal_218 = 0;
	}
}

void func_458()//Position - 0x40E40
{
	int iVar0;
	iVar0 = 0;
	if (!iLocal_217)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 235.2498f, -1354.1217f, 29.5623f, true) > 100f)
		{
			iVar0 = 0;
			while (iVar0 <= (Local_55.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_55[iVar0 /*28*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_101.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_101[iVar0 /*15*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_101[iVar0 /*15*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_101[iVar0 /*15*/].f_1);
				}
				iVar0++;
			}
			iLocal_217 = 1;
		}
	}
}

void func_459()//Position - 0x40EF4
{
	__LIB_11__.func_820(1593.3832f, -1934.3777f, 97.8f, 100f, 120f, "FBI_1_EXT");
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
	CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("franklin", Local_58.f_0, 0);
}

void func_461()//Position - 0x40F8D
{
	switch (iLocal_253)
	{
		case 0:
			if (__LIB_35__.func_985(&uLocal_265, 1, "fbi1aud", "call2", 9, 1, 0, 0, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 10f, 2);
				iLocal_253++;
			}
			break;
		case 1:
			if (__LIB_10__.func_564())
			{
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("5"), 0, "dave", 0, 1);
				iLocal_254 = MISC::GET_GAME_TIMER();
				iLocal_253++;
			}
			break;
		case 2:
			if (__LIB_0__.func_479(&iLocal_254, 4000))
			{
				if (__LIB_35__.func_985(&uLocal_265, 30, "fbi1aud", "call3", 9, 1, 0, 0, 0))
				{
					iLocal_253++;
				}
			}
			break;
		case 3:
			if (__LIB_10__.func_564())
			{
				iLocal_253++;
			}
			break;
		case 4:
			break;
	}
}

void func_465()//Position - 0x41175
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(Local_58.f_0))
	{
		switch (iLocal_239)
		{
			case 0:
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_58.f_0, Local_58.f_11, 0.7f, 0.7f, 2.5f, false, true, 0))
					{
						if (func_371(Local_58.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_58.f_11, 1f, -1, 0.25f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_58.f_0, iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
						}
					}
				}
				if (__LIB_0__.func_75())
				{
					MemCopy(&cLocal_458, {__LIB_0__.func_390()}, 4);
					if (MISC::ARE_STRINGS_EQUAL(&cLocal_458, "call2"))
					{
						TASK::TASK_USE_MOBILE_PHONE(Local_58.f_0, true, 1);
						iLocal_239++;
					}
				}
				break;
			case 1:
				if (__LIB_10__.func_564() || !__LIB_0__.func_75())
				{
					TASK::TASK_USE_MOBILE_PHONE(Local_58.f_0, false, 1);
					iLocal_239++;
				}
				break;
			case 2:
				Local_260 = { 1602.06f, -1944.361f, 100.796f };
				Local_261 = { 0f, 1f, 12f };
				Local_58.f_11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", Local_260, Local_261, 0f, 2) };
				Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", Local_260, Local_261, 0f, 2) };
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_58.f_0, Local_58.f_11, 1f, 1f, 1.6f, false, true, 0))
				{
					if (func_371(Local_58.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_58.f_11, 1f, -1, 0.1f, 0, Var0.f_2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
						TASK::TASK_PERFORM_SEQUENCE(Local_58.f_0, iLocal_450);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
					}
				}
				else
				{
					Local_260 = { 1602.06f, -1944.361f, 100.796f };
					Local_261 = { 0f, 1f, 12f };
					iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_58.f_0, iLocal_230, "MISSFBI1LEADINOUTFBI_1_EXT", "_LEADIN_FRANKLIN", 4f, -8f, 1, 0, 8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_230, true);
				}
				break;
			}
	}
}

void func_467(int iParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x413C4
{
	MISC::CLEAR_AREA(iParam0->f_11, 2f, true, false, false, false);
	*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam1, 6, iParam0->f_1, iParam2, true, true);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*iParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	PED::SET_PED_AS_ENEMY(*iParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 132, false);
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam0->f_23, -1, true, true);
	PED::SET_PED_ACCURACY(*iParam0, iParam0->f_19);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, iParam0->f_18, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, iParam0->f_18);
	if (iParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
	}
	if (iParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, 100);
	}
	iParam0->f_22 = 1;
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_24));
	PED::SET_PED_HEARING_RANGE(*iParam0, 250f);
	PED::SET_PED_SEEING_RANGE(*iParam0, 250f);
	PED::SET_PED_ID_RANGE(*iParam0, 250f);
	if (bParam3)
	{
		iParam0->f_2 = __LIB_6__.func_850(*iParam0, 1, 145);
		HUD::SET_BLIP_DISPLAY(iParam0->f_2, 2);
	}
	PED::SET_PED_CAN_EVASIVE_DIVE(*iParam0, true);
	func_345(iParam0, 1);
}

void func_468(int iParam0)//Position - 0x414CF
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, false);
}

int func_469(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x41547
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_19__.func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_32__.func_735(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_654(*iParam0);
			__LIB_32__.func_730(*iParam0, 1, 0);
			__LIB_20__.func_721(*iParam0);
			__LIB_20__.func_720(*iParam0);
			func_471(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_471(int iParam0, bool bParam1)//Position - 0x4165F
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_10__.func_3(iVar0))
	{
		__LIB_10__.func_2(iVar0, 0);
		func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_475(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__.func_843(iParam0))
		{
			__LIB_10__.func_2(iVar0, 0);
			func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_475(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_220(iParam0, 3, 169))
					{
						func_218(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_220(iParam0, 12, 6))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 20))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 21))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 22))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 11))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 10))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 50))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 14, 59))
			{
				func_218(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_220(iParam0, 8, 22))
			{
				func_218(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_220(iParam0, 12, 14))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_220(iParam0, 12, 13))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 14))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 15))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 4))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 3))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 14, 82))
			{
				func_218(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_220(iParam0, 8, 76))
			{
				func_218(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_220(iParam0, 12, 1))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_220(iParam0, 12, 12))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 15))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_220(iParam0, 3, 71))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 18))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 19))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_220(iParam0, 12, 7))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 12, 6))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_220(iParam0, 14, 88))
			{
				func_218(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_220(iParam0, 8, 17))
			{
				func_218(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_220(iParam0, 12, 11))
			{
				func_218(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_475(int iParam0, int iParam1)//Position - 0x41DF0
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__.func_509(iParam0);
		if (__LIB_0__.func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_228(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_482(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__.func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__.func_797();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_482(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x4247A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = __LIB_20__.func_509(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (__LIB_0__.func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_227(iParam0, iVar1, &iVar2, 0))
			{
				func_218(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_219(iParam0, iVar1, &iVar2))
			{
				func_218(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_644(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_485(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_485(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_485(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
		}
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					FILES::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						FILES::GET_SHOP_PED_QUERY_PROP(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

int func_485(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x42956
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	float fVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	var uVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1574990 != 4 && Global_1574990 != 5) && Global_1574990 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_78127;
	}
	Global_78128++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = -1;
	iVar11 = -1;
	if (iParam5 == 0)
	{
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_605(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar12 = Global_2883588;
		uVar13 = Global_2883589;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar14 = 15;
		if (iParam5 == 1)
		{
			uVar14 = { Global_78173 };
		}
		else
		{
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_605(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
					if (BitTest(Global_78130[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar15 = 9;
							if (iParam5 == 1)
							{
								uVar15 = { Global_78190 };
							}
							else
							{
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_605(iVar5, iVar0, uVar14[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_485(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_605(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_604(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_485(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_598(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_605(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_485(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_605(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_485(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_39__.func_435(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_485(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_485(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_3 || PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar19) != Global_78130[1 /*14*/].f_4)
		{
			iVar20 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
			iVar21 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
			if (((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 8 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_SPECIAL"), 0))) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 7));
			}
			if ((iParam1 == 11 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_JBIB"), 0)) || (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar20, joaat("REMOVE_WITH_LEGS"), 0)))
			{
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 15, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar22 = -1;
				if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("CREW_COL"), 11))
				{
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 0);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 1);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 2);
					PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam0, Global_1576215, Global_1576216, Global_1576217, 3);
				}
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_589(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
					}
					switch (iVar26)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar27 = 11;
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
							if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("DRESS"), 0))
							{
								iVar27 = -99;
							}
							break;
					}
					if (iVar27 != -99)
					{
						iVar28 = 0;
						while (iVar28 < 18)
						{
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_485(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_485(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_485(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_485(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_485(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_485(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_485(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, func_604(iParam0, 8, -1), iParam2, func_604(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
				}
				PED::SET_PED_HAIR_TINT(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar42 = -99;
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_528(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_589(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
				}
				switch (iVar43)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar46 = 11;
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar47, joaat("DRESS"), 0))
						{
							iVar46 = -99;
						}
						break;
				}
				if (iVar46 != -99)
				{
					iVar48 = 0;
					while (iVar48 < 18)
					{
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
				if (iVar5 == joaat("MP_M_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				else if (iVar5 == joaat("MP_F_Freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar52, iVar53, iVar54, 0f, fVar55, 0f, false);
				}
				iVar56 = 0;
				while (iVar56 < 20)
				{
					PED::SET_PED_MICRO_MORPH(iParam0, iVar56, 0f);
					iVar56++;
				}
			}
			else
			{
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_485(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_485(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_589(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
				}
				switch (iVar59)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar60 = 11;
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
						if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar61, joaat("DRESS"), 0))
						{
							iVar60 = -99;
						}
						break;
				}
				if (iVar60 != -99)
				{
					iVar62 = 0;
					while (iVar62 < 18)
					{
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
						{
							iVar10 = iVar62;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar62++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_485(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2883588)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar10 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_589(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_485(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_505(iParam0, 9, iVar63))
						{
							func_485(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_485(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_485(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_485(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_604(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_604(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_485(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_485(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar68 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar69 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar70 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar68, iVar69);
				iVar71 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar72 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar73 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar71, iVar72);
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_485(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_485(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_485(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_485(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar73);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar73, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_485(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_485(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar70);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_VARIANT_COMPONENT(iVar70, iVar77, &iVar78, &uVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									if (iVar5 == joaat("MP_M_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_485(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_485(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				__LIB_39__.func_435(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_485(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_485(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_486(iParam0, &uVar4))
		{
			func_485(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_485(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_485(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_485(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_604(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_485(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_486(int iParam0, var uParam1)//Position - 0x4481A
{
	int iVar0;
	int iVar1;
	*uParam1 = func_604(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_505(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0, int iParam1, int iParam2)//Position - 0x48AD5
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				case 1:
					iVar4 = 4;
					break;
				case 2:
					iVar4 = 6;
					break;
				case 3:
					iVar4 = 7;
					break;
				case 4:
					iVar4 = 8;
					break;
				case 5:
					iVar4 = 11;
					break;
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_505(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_505(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_505(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
											{
												Global_2883588 = uVar2;
												Global_2883589 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
						{
							Global_2883588 = uVar2;
							Global_2883589 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
			{
				Global_2883588 = uVar2;
				Global_2883589 = uVar3;
				return 0;
			}
		}
		Global_2883588 = uVar2;
		Global_2883589 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_505(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12) == Global_78130[1 /*14*/].f_4 || Global_78130[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_78130[1 /*14*/].f_12 == 0 && BitTest(Global_78130[1 /*14*/].f_6, 6)) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("HELMET"), 1)) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			iVar16 = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != joaat("0"))
				{
					FILES::INIT_SHOP_PED_PROP(&Var17);
					FILES::GET_SHOP_PED_PROP(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_78130[1 /*14*/].f_12) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_78130[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_505(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_505(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_528(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4F7FF
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_529(iParam0, bParam3, 0, -1);
}

void func_529(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4F84D
{
	int iVar0;
	struct<9> Var1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	int iVar10;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_78127;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_569(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_560(iParam0, iParam3);
		if (bParam1)
		{
			bVar4 = true;
		}
		if (bParam2)
		{
			bVar4 = false;
		}
		iVar6 = 0;
		while (iVar6 < 127)
		{
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar8 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar2);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar2, iVar7, &Var9))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var9.f_0))
				{
					iVar10 = (129 + iVar7);
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_560(int iParam0, int iParam1)//Position - 0x5ECF7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_604(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_M_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_M"):
							case joaat("MP_Heist4_Tee_039_M"):
							case joaat("MP_Heist4_Tee_041_M"):
							case joaat("MP_Heist4_Tee_043_M"):
							case joaat("MP_Heist4_Tee_049_M"):
							case joaat("MP_Heist4_Tee_051_M"):
							case joaat("MP_Heist4_Tee_055_M"):
							case joaat("MP_Heist4_Tee_057_M"):
							case joaat("MP_Heist4_Tee_059_M"):
							case joaat("MP_Heist4_Tee_061_M"):
							case joaat("MP_Heist4_Tee_063_M"):
							case joaat("MP_Heist4_Tee_065_M"):
							case joaat("MP_Tuner_Tee_000_M"):
							case joaat("MP_Tuner_Tee_002_M"):
							case joaat("MP_Tuner_Tee_003_M"):
							case joaat("MP_Tuner_Tee_005_M"):
							case joaat("MP_Tuner_Tee_006_M"):
							case joaat("MP_Tuner_Tee_008_M"):
							case joaat("MP_Tuner_Tee_010_M"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return 1;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_604(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						switch (iVar2)
						{
							case joaat("MP_Elite_F_Tshirt_1"):
							case joaat("MP_Battle_Clothing_000_F"):
							case joaat("MP_Heist4_Tee_039_F"):
							case joaat("MP_Heist4_Tee_041_F"):
							case joaat("MP_Heist4_Tee_043_F"):
							case joaat("MP_Heist4_Tee_049_F"):
							case joaat("MP_Heist4_Tee_051_F"):
							case joaat("MP_Heist4_Tee_055_F"):
							case joaat("MP_Heist4_Tee_057_F"):
							case joaat("MP_Heist4_Tee_059_F"):
							case joaat("MP_Heist4_Tee_061_F"):
							case joaat("MP_Heist4_Tee_063_F"):
							case joaat("MP_Heist4_Tee_065_F"):
							case joaat("MP_Tuner_Tee_000_F"):
							case joaat("MP_Tuner_Tee_002_F"):
							case joaat("MP_Tuner_Tee_003_F"):
							case joaat("MP_Tuner_Tee_005_F"):
							case joaat("MP_Tuner_Tee_006_F"):
							case joaat("MP_Tuner_Tee_008_F"):
							case joaat("MP_Tuner_Tee_010_F"):
								return 1;
								break;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("JACKET"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("BIKER_VEST"), 0))
					{
						return 1;
					}
					return 0;
				}
			}
			return 0;
		}
	}
	return 0;
}

int func_569(int iParam0, bool bParam1)//Position - 0x5F155
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
	int iVar11;
	int iVar12;
	int iVar13;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
							break;
						case 1:
						case 7:
						case 12:
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				case 5:
					if (!bParam1)
					{
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_604(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_12"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_604(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar6, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				case 3:
					switch (iVar1)
					{
						case 14:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_604(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
							if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("COMBAT_TOP"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HEIST_DRAW_13"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return 1;
							break;
						case 7:
						case 4:
						case 9:
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return 1;
							}
							break;
					}
					break;
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_604(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
							if (((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("TAT_DECL_NO_SAVE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("COMBAT_TOP"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_589(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x67FE2
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
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("MP_M_Freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 14;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_PYJAMAS"), 0))
			{
				iVar0 = 6;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
			{
				iVar0 = 1;
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_2"), 0))
			{
				iVar0 = 4;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if (iParam1 == 240)
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_589(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 0;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 12;
			}
			else if (((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_24"), 0))) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_9"), 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TUX_JACKET"), 0))
			{
				iVar0 = 12;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_6"), 0))
			{
				iVar0 = 2;
			}
			else if (((iParam2 >= 0 && iParam2 <= 31) || iVar1 == 0) || iVar1 == 1)
			{
				iVar0 = 0;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SHIRT_BRACES"), 0))
				{
					if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("CLOSED_COLLAR"), 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0))
				{
					iVar0 = 4;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("SWEAT_VEST"), 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if ((iParam1 >= 96 && iParam1 <= 111) || iVar3 == 6)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			else if ((iParam2 >= 140 && iParam2 <= 155) || iVar1 == 9)
			{
				iVar0 = 0;
			}
			else if (iParam2 == 236)
			{
				if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		case joaat("MP_F_Freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
				switch (iVar4)
				{
					case joaat("DLC_MP_BEACH_F_ACCS2_0"):
					case joaat("DLC_MP_BEACH_F_ACCS2_1"):
					case joaat("DLC_MP_BEACH_F_ACCS2_2"):
					case joaat("DLC_MP_BEACH_F_ACCS2_3"):
					case joaat("DLC_MP_BEACH_F_ACCS2_4"):
					case joaat("DLC_MP_BEACH_F_ACCS2_5"):
					case joaat("DLC_MP_BEACH_F_ACCS2_6"):
					case joaat("DLC_MP_BEACH_F_ACCS2_7"):
					case joaat("DLC_MP_BEACH_F_ACCS2_8"):
					case joaat("DLC_MP_BEACH_F_ACCS2_9"):
					case joaat("DLC_MP_BEACH_F_ACCS2_10"):
					case joaat("DLC_MP_BEACH_F_ACCS2_11"):
						iVar3 = 15;
						break;
					case joaat("DLC_MP_VAL_F_ACCS2_0"):
					case joaat("DLC_MP_VAL_F_ACCS2_1"):
					case joaat("DLC_MP_VAL_F_ACCS2_2"):
					case joaat("DLC_MP_VAL_F_ACCS2_3"):
					case joaat("DLC_MP_VAL_F_ACCS2_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_0"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_1"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_2"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_3"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_4"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_5"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_6"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_7"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_8"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_9"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_10"):
					case joaat("DLC_MP_VAL2_F_SPECIAL_0_11"):
						iVar3 = 13;
						break;
					}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				iVar0 = 0;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_VEST"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JACKET_ONLY"), 0))
			{
				if ((((((((((((((((((((((((((((iParam1 >= 34 && iParam1 <= 49) || (iParam1 >= 50 && iParam1 <= 65)) || (iParam1 >= 71 && iParam1 <= 86)) || (iParam1 >= 87 && iParam1 <= 102)) || (iParam1 >= 103 && iParam1 <= 118)) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 4) || iVar3 == 5) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 15) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_0")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_1")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_2")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_3")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_4")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_5")) || iVar4 == joaat("DLC_MP_BEACH_F_ACCS0_6")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0))
				{
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_13"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_589(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
					if (iVar0 == -99)
					{
						iVar0 = 14;
					}
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("OPEN_SHORT"), 0))
			{
				if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_5"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0)))
				{
					iVar0 = 9;
				}
				else
				{
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
			{
				if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LONG_SLEEVE"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_0"), 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_2"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("APART_DRAW_3"), 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW_DRAW_1"), 0))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if ((((((((((((((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_0"), 0)) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_4"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_0"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("LOW2_DRAW_3"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_6"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_7"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_8"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_12"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_13"), 0))) || (iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_14"), 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if (((((((((((((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("TAILS_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_16"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE2_DRAW_1"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_15"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("APART_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_0"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0))
				{
					iVar0 = 3;
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HEIST_DRAW_7"), 0))
				{
					iVar0 = 9;
				}
			}
			else if ((((((((iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LUXE_DRAW_0"), 0)) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_6"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_9"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_10"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_12"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_33"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("AIR_DRAW_3"), 0))) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SMUG_DRAW_1"), 0)))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							FILES::GET_FORCED_COMPONENT(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != joaat("0"))
								{
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("LOW2_OPEN_CHECK"), 0))
			{
				if ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("HEIST_DRAW_9"), 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6C609
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_644(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_604(int iParam0, int iParam1, int iParam2)//Position - 0x6C8BA
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
				if (func_505(iParam0, iParam1, iVar0))
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
				if (func_505(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_605(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6C95B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			if (bParam3)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar5 = 0;
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar5 < Global_4538446)
					{
						Global_4538446[iVar5] = -1;
						Global_4538457[iVar5] = -1;
					}
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10 && iVar4 != 9)
					{
						if (iParam1 == 4 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("STOCKINGS"), 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != joaat("0"))
						{
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_605(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_4538445++;
				if (Global_4538445 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar5)
					{
						if (iVar1 < Global_4538446)
						{
							if (Global_4538446[iVar1] != -1)
							{
								if (iParam0 == joaat("MP_M_Freemode_01"))
								{
									func_605(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_605(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_4538445 = (Global_4538445 - 1);
			}
			return;
		}
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && !BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
			}
			if (bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar8 = (75 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
									break;
								}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_605(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_605(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_605(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_644(int iParam0)//Position - 0x855F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_604(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_17"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_18"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_19"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_20"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_21"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_27"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_604(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
					{
						return 1;
					}
					else if ((((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_1"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_2"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_22"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_23"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_24"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_25"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_26"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_28"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_32"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("STUNT_DRAW_1"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("JUGG_SUIT"), 0))
					{
						return 1;
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_654(int iParam0)//Position - 0x85E62
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__.func_509(iParam0);
	if (__LIB_0__.func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_482(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_228(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_655(__LIB_19__.func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_228(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_228(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_655(__LIB_19__.func_811(0), 3, 70, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 3, 71, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 3, 72, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 3, 73, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 3, 74, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 3, 75, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 4, 41, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 4, 42, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 4, 43, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 4, 44, 1, 0, 0, 0);
					func_655(__LIB_19__.func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_228(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_482(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x860BF
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_658(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_658(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8627A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("Player_Zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_658(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_658(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("Player_Zero"):
					break;
				case joaat("Player_One"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				case joaat("Player_Two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_658(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

void func_662()//Position - 0x8685F
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_55.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_55[iVar0 /*28*/]))
		{
			switch (iLocal_51[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*28*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 2f, false, false);
							TASK::TASK_COMBAT_PED(Local_55[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_51[iVar0] = 1;
							break;
						case 3:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101[0 /*15*/], false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_101[0 /*15*/]))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_101[0 /*15*/]) + 500f) > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(Local_101[0 /*15*/].f_13, "lkfbi1")
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_101[0 /*15*/]);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 37, true);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*28*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_55[iVar0 /*28*/], 200f, 0);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
										iLocal_51[iVar0] = 4;
									}
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_55[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
								iLocal_51[iVar0] = 4;
							}
							break;
						case 4:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101[0 /*15*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_101[0 /*15*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
									TASK::TASK_PAUSE(0, 500);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
									TASK::TASK_PERFORM_SEQUENCE(Local_55[iVar0 /*28*/], iLocal_450);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
									iLocal_51[iVar0] = 1;
								}
							}
							else
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_55[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
								iLocal_51[iVar0] = 4;
							}
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
						case 1:
						case 2:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 4f, 4f, 4f, false, true, 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 50, true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
								iLocal_51[iVar0] = 4;
							}
							break;
						case 4:
							if (func_371(Local_55[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_55[iVar0 /*28*/], 37, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_55[iVar0 /*28*/], Local_55[iVar0 /*28*/].f_14, 2f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_55[iVar0 /*28*/], 200f, 0);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_55[iVar0 /*28*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_55[iVar0 /*28*/].f_1);
								iLocal_51[iVar0] = 4;
							}
							break;
					}
					break;
				case 4:
					break;
				}
		}
		iVar0++;
	}
}

void func_664()//Position - 0x86BE7
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_227)
	{
		case 0:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.95f)
				{
					if (func_404(1, 1, 1, 0))
					{
						RECORDING::REPLAY_START_EVENT(4);
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						MISC::SET_FAKE_WANTED_LEVEL(3);
						iVar0 = 0;
						while (iVar0 <= (Local_53.f_0 - 1))
						{
							PED::DELETE_PED(&(Local_53[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_53[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_53[iVar0 /*28*/].f_2));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_54.f_0 - 1))
						{
							PED::DELETE_PED(&(Local_54[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_54[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_54[iVar0 /*28*/].f_2));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_56.f_0 - 1))
						{
							PED::DELETE_PED(&(Local_56[iVar0 /*28*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_56[iVar0 /*28*/].f_1);
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_57.f_0 - 1))
						{
							PED::DELETE_PED(&(Local_57[iVar0 /*28*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_57[iVar0 /*28*/].f_1);
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 <= (Local_156.f_0 - 1))
						{
							OBJECT::DELETE_OBJECT(&(Local_156[iVar0 /*24*/]));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_156[iVar0 /*24*/].f_2);
							iVar0++;
						}
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_112);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_112.f_2);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_134);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_134.f_2);
						MISC::CLEAR_AREA(233.4198f, -1355.4689f, 29.559f, 200f, true, false, false, false);
						AUDIO::PREPARE_MUSIC_EVENT("FBI1_JUMP");
						AUDIO::START_AUDIO_SCENE("FBI_1_JUMP");
						PED::REMOVE_SCENARIO_BLOCKING_AREAS();
						iVar0 = 0;
						while (iVar0 <= (Local_102.f_0 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_102[iVar0 /*15*/]))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_102[iVar0 /*15*/], Local_102[iVar0 /*15*/].f_3, 5f, 5f, 5f, false, true, 0))
								{
									ENTITY::SET_ENTITY_COORDS(Local_102[iVar0 /*15*/], Local_102[iVar0 /*15*/].f_3, false, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_102[iVar0 /*15*/], Local_102[iVar0 /*15*/].f_6);
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_102[iVar0 /*15*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_102[iVar0 /*15*/].f_1);
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
						{
							PHYSICS::BREAK_ENTITY_GLASS(Local_157.f_0, 236.05f, -1357.488f, 40.02953f, 0.3f, -0.6866288f, 0.6827963f, -0.2496601f, 500f, 2, true);
						}
						INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
						Local_260 = { 236.344f, -1356.722f, 39.304f };
						Local_261 = { 0f, 0f, -40.68f };
						iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_230, "missfbi1", "ledge_jump", 1000f, -4f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_180[0 /*24*/], iLocal_230, "ledge_jump_Bin", "missfbi1", 1000f, 8f, 0, 1000f);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_180[0 /*24*/]);
						iLocal_451 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
						CAM::PLAY_CAM_ANIM(iLocal_451, "ledge_jump_cam", "missfbi1", Local_260, Local_261, false, 2);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AGENT_BURSTS_THROUGH_DOOR"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_ESCAPE_BASE_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AIM_AT_WINDOW"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AIM_AT_WINDOW");
						}
						iLocal_227++;
					}
				}
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.09f)
				{
					iLocal_227++;
				}
			}
			break;
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.21f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_01_DMW_GARBAGE_LAND", PLAYER::PLAYER_PED_ID(), "FBI_01_DMW_02_SOUNDS", false, 0);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fbi1_litter", 233.5f, -1355.5f, 31.3f, 0f, 0f, 0f, 1f, false, false, false);
					PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Dumpster", 0f, 1f);
					iLocal_227++;
				}
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.46f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LAND_TRUCK");
					iLocal_227++;
				}
			}
			break;
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.95f)
				{
					STREAMING::REQUEST_MODEL(Local_58.f_1);
					STREAMING::REQUEST_MODEL(Local_55[1 /*28*/].f_1);
					STREAMING::REQUEST_MODEL(Local_55[3 /*28*/].f_1);
					STREAMING::REQUEST_MODEL(Local_101[0 /*15*/].f_1);
					STREAMING::REQUEST_MODEL(Local_103.f_1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_103.f_1, true);
					STREAMING::REQUEST_ANIM_DICT("MISSFBI1LEADINOUTFBI_1_EXT");
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_101[0 /*15*/].f_13, "lkfbi1");
					iLocal_227++;
				}
			}
			break;
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 1f)
				{
					RECORDING::REPLAY_STOP_EVENT();
					STREAMING::NEW_LOAD_SCENE_STOP();
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					STREAMING::REMOVE_ANIM_DICT("missfbi1");
					MISC::SET_TIME_SCALE(1f);
					MISC::SET_FAKE_WANTED_LEVEL(0);
					PLAYER::SET_MAX_WANTED_LEVEL(3);
					PED::SET_CREATE_RANDOM_COPS(false);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					__LIB_0__.func_403(281, 0);
					AUDIO::DISTANT_COP_CAR_SIRENS(false);
					iLocal_223 = 0;
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					func_378(1, 0, 0, 0, 0, 3000, 1);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					__LIB_0__.func_210("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
					__LIB_0__.func_202(&uLocal_265, 3);
					__LIB_0__.func_202(&uLocal_265, 4);
					__LIB_0__.func_202(&uLocal_265, 5);
					__LIB_0__.func_202(&uLocal_265, 6);
					__LIB_0__.func_202(&uLocal_265, 7);
					__LIB_0__.func_202(&uLocal_265, 8);
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_452))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_452);
					}
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FIB_1_01", 0f);
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LOSE_COPS_START");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_JUMPR"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_1_JUMP");
					}
					AUDIO::START_AUDIO_SCENE("FBI_1_LOSE_COPS");
					__LIB_42__.func_872(4, "outside coroners escape police", 1, 0, 0, 1);
					__LIB_19__.func_976(PLAYER::PLAYER_PED_ID(), &Global_4541610);
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_48 = 8;
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				}
			}
			break;
	}
}

int func_666()//Position - 0x8725D
{
	func_724();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (func_701())
	{
		iLocal_48 = 6;
		return 1;
	}
	func_699();
	func_213(0);
	func_697();
	func_695();
	func_693();
	func_691();
	func_688();
	func_686();
	func_684();
	func_682();
	func_674();
	func_672();
	func_671();
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_0__.func_1("FBI1_help4"))
		{
			HUD::CLEAR_HELP(true);
			func_667("FBI1_help4", 1);
			HUD::FLASH_ABILITY_BAR(0);
		}
		if (MISC::IS_PC_VERSION())
		{
			if (__LIB_0__.func_1("FBI1_help4_KM"))
			{
				HUD::CLEAR_HELP(true);
				func_667("FBI1_help4", 1);
				HUD::FLASH_ABILITY_BAR(0);
			}
		}
	}
	return 0;
}

void func_667(char* sParam0, bool bParam1)//Position - 0x87305
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_236)
		{
			if (iLocal_236[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_236[iVar1] == 0)
			{
				iLocal_236[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_669(iVar0);
		if (iVar3 != -1)
		{
			iLocal_236[iVar3] = 0;
			func_668();
		}
	}
}

void func_668()//Position - 0x87380
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_236 - 1))
	{
		if (iLocal_236[iVar0] == 0)
		{
			if (iLocal_236[iVar0 + 1] != 0)
			{
				iLocal_236[iVar0] = iLocal_236[iVar0 + 1];
				iLocal_236[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_669(int iParam0)//Position - 0x873D3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_236)
	{
		if (iLocal_236[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_236[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_671()//Position - 0x87429
{
	switch (iLocal_258)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_53[11 /*28*/]))
			{
				iLocal_258++;
			}
			break;
		case 1:
			if (PED::IS_PED_INJURED(Local_53[11 /*28*/]))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 2);
				iLocal_258++;
			}
			break;
		case 2:
			break;
	}
}

void func_672()//Position - 0x87485
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = 0;
	switch (iLocal_255)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 251.106f, -1365.121f, 28.653f, 253.007f, -1366.745f, 31.153f, 1.5f, false, true, 0))
			{
				iLocal_255++;
			}
			break;
		case 1:
			iVar2 = 0;
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar0 = 0;
			while (iVar0 <= 10)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_53[iVar0 /*28*/]))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_53[iVar0 /*28*/]))
					{
						if (((!__LIB_11__.func_991(Local_53[iVar0 /*28*/], 247.7852f, -1366.4725f, 28.648f, "CorridorTop", "v_coroner") && !__LIB_11__.func_991(Local_53[iVar0 /*28*/], 256.6936f, -1363.8687f, 29.5428f, "MainStairs", "v_coroner")) && !__LIB_11__.func_991(Local_53[iVar0 /*28*/], 250.0518f, -1368.5043f, 38.5342f, "topoff_mid", "v_coroner")) && !ENTITY::IS_ENTITY_AT_COORD(Local_53[iVar0 /*28*/], Var1, 5f, 5f, 2.5f, false, true, 0))
						{
							PED::DELETE_PED(&(Local_53[iVar0 /*28*/]));
							if (HUD::DOES_BLIP_EXIST(Local_53[iVar0 /*28*/].f_2))
							{
								HUD::REMOVE_BLIP(&(Local_53[iVar0 /*28*/].f_2));
							}
							iVar2++;
						}
					}
				}
				else if (Local_53[iVar0 /*28*/].f_22)
				{
					iVar2++;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_56.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_53[iVar0 /*28*/]))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_53[iVar0 /*28*/]))
					{
						PED::DELETE_PED(&(Local_53[iVar0 /*28*/]));
						iVar2++;
					}
				}
				else if (Local_53[iVar0 /*28*/].f_22)
				{
					iVar2++;
				}
				iVar0++;
			}
			if (iVar2 > (11 + Local_56.f_0))
			{
				iLocal_255++;
			}
			break;
		case 2:
			break;
	}
}

void func_674()//Position - 0x876B8
{
	if (!iLocal_215)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false))
		{
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), 80, false);
			__LIB_39__.func_362(0, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"), 1);
			iLocal_215 = 1;
		}
	}
}

void func_682()//Position - 0x89F5B
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_156[1 /*24*/]))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_156[1 /*24*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_156[1 /*24*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_156[1 /*24*/].f_2);
			if (HUD::DOES_BLIP_EXIST(Local_156[1 /*24*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_156[1 /*24*/].f_1));
			}
			__LIB_36__.func_65(PLAYER::PLAYER_PED_ID(), 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PICK_UP_PARACHUTE", PLAYER::PLAYER_PED_ID(), "HUD_FRONTEND_CUSTOM_SOUNDSET", false, 0);
			iLocal_220 = 1;
		}
	}
}

void func_684()//Position - 0x8A031
{
	switch (iLocal_245)
	{
		case 0:
			if (func_685(&Local_53, 5))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_THREE_DEAD");
				iLocal_245++;
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_LIFT_ENEMY"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.686f, -1367.138f, 23.538f, 250.692f, -1365.47f, 26.1f, 1f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LIFT_ENEMY");
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_THREE_DEAD");
					iLocal_245 = 2;
				}
			}
			break;
		case 1:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_LIFT_ENEMY"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.686f, -1367.138f, 23.538f, 250.692f, -1365.47f, 26.1f, 1f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LIFT_ENEMY");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 2);
					iLocal_245++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.591f, -1368.662f, 23.537f, 241.829f, -1367.184f, 26.137f, 1.3f, false, true, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_STAIRWELL");
				iLocal_245++;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 251.106f, -1365.121f, 28.653f, 253.007f, -1366.745f, 31.153f, 1.5f, false, true, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_2ND_STAIRWELL");
				iLocal_245++;
			}
			break;
		case 4:
			if (AUDIO::PREPARE_MUSIC_EVENT("FBI1_TOP_FLOOR"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.445f, -1367.718f, 38.246f, 250.278f, -1365.944f, 41.246f, 7.5f, false, true, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FBI1_TOP_FLOOR");
					iLocal_245++;
				}
			}
			break;
		case 5:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 238.427f, -1362.878f, 38.539f, 240.223f, -1360.73f, 41.746f, 4f, false, true, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_ESCAPE");
				iLocal_245++;
			}
			break;
	}
}

int func_685(int iParam0, int iParam1)//Position - 0x8A24E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*28*/])->f_22)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*28*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_686()//Position - 0x8A29C
{
	switch (iLocal_248)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.212f, -1344.521f, 23.538f, 276.105f, -1341.074f, 26.538f, 2f, false, true, 0))
			{
				PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_19__.func_811(0), 0);
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 1f, true, 0);
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__.func_151("FBI1_help4_KM", 12500);
				}
				else
				{
					__LIB_0__.func_151("FBI1_help4", 12500);
				}
				HUD::FLASH_ABILITY_BAR(10000);
				iLocal_248++;
			}
			break;
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_249 = MISC::GET_GAME_TIMER();
				iLocal_248++;
			}
			break;
		case 2:
			if (__LIB_0__.func_479(&iLocal_249, 2000))
			{
				__LIB_0__.func_151("FBI1_help5", 12000);
				iLocal_248++;
			}
			break;
		case 3:
			break;
	}
}

void func_688()//Position - 0x8A39D
{
	switch (iLocal_238)
	{
		case 0:
			if (func_690("cia_attak0") || (Local_53[15 /*28*/].f_22 && PED::IS_PED_INJURED(Local_53[15 /*28*/])))
			{
				if (!__LIB_18__.func_197(&Local_430, 0))
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__.func_210("FBI1_God_7", 7500, 1);
					iLocal_237 = MISC::GET_GAME_TIMER();
					iLocal_238++;
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (__LIB_0__.func_479(&iLocal_237, 13000))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_18__.func_197(&Local_430, 0))
			{
				if (func_689())
				{
					if (__LIB_35__.func_984(&uLocal_265, "fbi1aud", "mik_attk0", 6, 0, 0, 0))
					{
						iLocal_237 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
	}
}

int func_689()//Position - 0x8A470
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_53[iVar0 /*28*/]))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_54.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_54[iVar0 /*28*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_690(char* sParam0)//Position - 0x8A4CC
{
	return func_669(MISC::GET_HASH_KEY(sParam0)) != -1;
}

int func_691()//Position - 0x8A4E0
{
	if (!func_690("lift0"))
	{
		if (!__LIB_18__.func_197(&Local_430, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 246.014f, -1370.986f, 23.537f, 248.076f, -1372.73f, 26.537f, 3.2f, false, true, 0))
			{
				if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "lift0", 6, 0, 0, 0))
				{
					func_667("lift0", 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_53[9 /*28*/]))
	{
		if (!func_690("cia_attak4"))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_259[8]) < -0.5f && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_259[9]) > 0.5f)
			{
				if (!__LIB_18__.func_197(&Local_430, 0))
				{
					if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak4", 6, 0, 0, 0))
					{
						func_667("cia_attak4", 1);
					}
				}
			}
		}
	}
	if (bLocal_207)
	{
		if (__LIB_12__.func_93(iLocal_259[8], iLocal_259[9], 1, 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_693()//Position - 0x8A6EC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 2;
	while (iVar0 <= (Local_56.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_56[iVar0 /*28*/]))
		{
			switch (iLocal_52[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 2:
						case 4:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							iLocal_52[iVar0] = 1;
							break;
						case 3:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.347f, -1344.646f, 23.247f, 276.306f, -1341.125f, 26.747f, 2f, false, true, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_56[iVar0 /*28*/].f_14, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								__LIB_6__.func_834(Local_56[iVar0 /*28*/], "SCREAM_PANIC", 24);
								iLocal_52[iVar0] = 1;
							}
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 2:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.343f, -1351.262f, 23.543f, 254.703f, -1340.656f, 26f, 6f, false, true, 0))
							{
								if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_56[iVar0 /*28*/], true), 1f))
								{
									iLocal_223 = MISC::GET_GAME_TIMER();
									iLocal_52[iVar0] = 3;
								}
							}
							break;
						case 3:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_56[iVar0 /*28*/], Local_56[iVar0 /*28*/].f_14, 2f, 2f, 2.5f, false, true, 0))
							{
								if (__LIB_11__.func_816(Local_56[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_56[iVar0 /*28*/].f_14, 2f, -1, 0.25f, 0, 40000f);
									TASK::TASK_COWER(0, -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
									TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								}
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_56[iVar0 /*28*/], true), true) < 3f)
							{
								if (__LIB_0__.func_479(&(iLocal_251[iVar0]), 10000))
								{
									__LIB_6__.func_834(Local_56[iVar0 /*28*/], "GENERIC_FRIGHTENED_HIGH", 24);
									iLocal_251[iVar0] = MISC::GET_GAME_TIMER();
								}
							}
							break;
						case 4:
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_56[iVar0 /*28*/], Local_56[iVar0 /*28*/].f_11, 2f, 2f, 2.5f, false, true, 0))
							{
								if (__LIB_11__.func_816(Local_56[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_56[iVar0 /*28*/].f_11, (1f - 1f), 20000, 0.25f, 0, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_HANDS_UP(0, -1, 0, -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
									TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								}
							}
							break;
					}
					break;
				case 3:
					switch (iVar0)
					{
						case 2:
							if (__LIB_0__.func_479(&iLocal_223, 250))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_52[iVar0] = 4;
							}
							break;
						case 4:
							if (__LIB_0__.func_479(&iLocal_241, 2000))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_CLEAR_LOOK_AT(0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_56[0 /*28*/].f_11, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_52[iVar0] = 4;
							}
							break;
					}
					break;
				case 4:
					switch (iVar0)
					{
						case 2:
							if (func_371(Local_56[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_COWER(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_56[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							}
							if (!iLocal_221)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_56[iVar0 /*28*/], true), true) > 15f)
								{
									AUDIO::STOP_PED_SPEAKING(Local_56[iVar0 /*28*/], true);
								}
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_56[iVar0 /*28*/], true), true) < 10f)
							{
								AUDIO::STOP_PED_SPEAKING(Local_56[iVar0 /*28*/], false);
								iLocal_221 = 0;
							}
							break;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_695()//Position - 0x8ABA0
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_54.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_54[iVar0 /*28*/]))
		{
			switch (iLocal_50[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 242.27132f, -1367.464f, 38.53431f, -1, false, 0f, false, false, iLocal_455[0], false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_54[iVar0 /*28*/], iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54[iVar0 /*28*/], false, false);
							iLocal_50[iVar0] = 1;
							break;
						case 1:
							if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 247.127f, -1367.785f, 38.54f, 249.778f, -1364.398f, 42.04f, 5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.069f, -1383.662f, 38.542f, 246.962f, -1380.216f, 42.042f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 247.172f, -1369.088f, 38.537f, 249.7f, -1371.208f, 42.042f, 2f, false, true, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[iVar0 /*28*/], true), true) < 8f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], Local_54[iVar0 /*28*/].f_14, 1f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 57, false);
								TASK::TASK_COMBAT_PED(Local_54[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_50[iVar0] = 4;
							}
							break;
						case 2:
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_54[iVar0 /*28*/], 239.4913f, -1379.2358f, 38.53422f, -1, false, 0f, true, true, iLocal_455[2], false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54[iVar0 /*28*/], true, false);
							iLocal_50[iVar0] = 1;
							break;
						case 3:
						case 4:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[iVar0 /*28*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], Local_54[iVar0 /*28*/].f_14, 2f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 51, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 57, false);
							TASK::TASK_COMBAT_PED(Local_54[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							iLocal_50[iVar0] = 1;
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 250.167f, -1365.738f, 38.539f, 252.706f, -1367.846f, 41.039f, 1.4f, false, true, 0) || __LIB_11__.func_989(&(Local_54[iVar0 /*28*/]), &(Local_54[iVar0 /*28*/].f_18))) || __LIB_11__.func_992(&(Local_54[iVar0 /*28*/]), 15f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], Local_54[iVar0 /*28*/].f_14, 1f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 57, false);
								TASK::TASK_COMBAT_PED(Local_54[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_50[iVar0] = 4;
							}
							break;
						case 1:
							if (!func_690("cia_attak5"))
							{
								if (!__LIB_18__.func_197(&Local_430, 0))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak5", 7, 0, 0, 0))
									{
										func_667("cia_attak5", 1);
									}
								}
							}
							if (__LIB_11__.func_816(Local_54[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], Local_54[iVar0 /*28*/].f_14, 1f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 57, false);
								TASK::TASK_COMBAT_PED(Local_54[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_50[iVar0] = 4;
							}
							break;
						case 2:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.643f, -1367.767f, 38.534f, 250.109f, -1365.654f, 41.534f, 1.3f, false, true, 0) || __LIB_11__.func_989(&(Local_54[iVar0 /*28*/]), &(Local_54[iVar0 /*28*/].f_18))) || __LIB_11__.func_992(&(Local_54[iVar0 /*28*/]), 15f, 1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], Local_54[iVar0 /*28*/].f_14, 1f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 57, false);
								TASK::TASK_COMBAT_PED(Local_54[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_50[iVar0] = 4;
							}
							break;
						case 3:
						case 4:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[iVar0 /*28*/], true), true) < 5f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_54[iVar0 /*28*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_54[iVar0 /*28*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[iVar0 /*28*/], 50, true);
								iLocal_50[iVar0] = 4;
							}
							break;
					}
					break;
				case 3:
					break;
				case 4:
					switch (iVar0)
					{
						case 1:
							if (!func_690("cia_attak5"))
							{
								if (!__LIB_18__.func_197(&Local_430, 0))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak5", 7, 0, 0, 0))
									{
										func_667("cia_attak5", 1);
									}
								}
							}
							break;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_697()//Position - 0x8B20E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_53[iVar0 /*28*/]))
		{
			switch (iLocal_49[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							PED::REGISTER_TARGET(Local_53[iVar0 /*28*/], PLAYER::PLAYER_PED_ID());
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_53[iVar0 /*28*/].f_14, 2000, false, 0.25f, false, false, iLocal_454[0], true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							iLocal_49[iVar0] = 1;
							break;
						case 1:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, false, false);
							iLocal_49[iVar0] = 1;
							break;
						case 2:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, false, false);
							iLocal_49[iVar0] = 1;
							break;
						case 3:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, false, false);
							iLocal_49[iVar0] = 1;
							break;
						case 4:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 262.68463f, -1358.7291f, 23.53772f, -1, false, 0f, false, false, 0, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							iLocal_49[iVar0] = 1;
							break;
						case 5:
							if (PED::IS_PED_INJURED(Local_53[6 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 256.101f, -1364.552f, 23.538f, 252.639f, -1361.677f, 26.538f, 2.2f, false, true, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_PAUSE(0, (50 * MISC::GET_RANDOM_INT_IN_RANGE(1, 2)));
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_49[iVar0] = 1;
							}
							break;
						case 6:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, false, false);
							iLocal_49[iVar0] = 1;
							break;
						case 7:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[7 /*28*/], 268.82f, -1343.19f, 25.13f, -1, false, false);
							iLocal_49[iVar0] = 2;
							break;
						case 8:
							TASK::TASK_AIM_GUN_AT_COORD(Local_53[iVar0 /*28*/], 270.7f, -1343.9f, 25.3f, -1, false, false);
							iLocal_49[iVar0] = 1;
							break;
						case 9:
							AUDIO::STOP_PED_SPEAKING(Local_53[iVar0 /*28*/], true);
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_53[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), -1, false);
							iLocal_49[iVar0] = 1;
							break;
						case 10:
							if ((PED::IS_PED_INJURED(Local_53[2 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.96f, -1350.535f, 23.538f, 264.483f, -1347.523f, 26.538f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.288f, -1353.374f, 23.536f, 250.221f, -1345.979f, 28.536f, 2f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 11:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 236.294f, -1369.881f, 25.801f, 237.938f, -1371.343f, 29.301f, 5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 234.6f, -1371.647f, 26.095f, 238.332f, -1374.823f, 29.095f, 2.2f, false, true, 0))
							{
								PED::SET_PED_CAPSULE(Local_53[iVar0 /*28*/], 0.5f);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 0.8f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								AUDIO::START_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
								iLocal_49[iVar0] = 1;
							}
							break;
						case 12:
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 255.901f, -1363.158f, 28.578f, 257.557f, -1364.607f, 32.078f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 253.856f, -1358.69f, 28.654f, 257.135f, -1361.471f, 31.654f, 2.1f, false, true, 0)) || __LIB_11__.func_989(&(Local_53[iVar0 /*28*/]), &(Local_53[iVar0 /*28*/].f_18)))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 0.8f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_49[iVar0] = 1;
							}
							break;
						case 13:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 244.371f, -1367.501f, 28.648f, 242.762f, -1366.151f, 31.648f, 1.4f, false, true, 0))
							{
								iLocal_49[iVar0] = 1;
							}
							break;
						case 14:
							if ((PED::IS_PED_INJURED(Local_53[2 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 267.96f, -1350.535f, 23.538f, 264.483f, -1347.523f, 26.538f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.288f, -1353.374f, 23.536f, 250.221f, -1345.979f, 28.536f, 2f, false, true, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_PAUSE(0, 2000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_49[iVar0] = 1;
							}
							break;
						case 15:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, false, true, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_PAUSE(0, 500);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							}
							iLocal_49[iVar0] = 1;
							break;
						case 16:
							TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 1.5f, false, 0.5f, 0.8f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 280.03f, -1344.69f, 23.53f, -1, true, 0f, false, false, 0, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
							TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
							PED::SET_COMBAT_FLOAT(Local_53[iVar0 /*28*/], 3, 10f);
							PED::SET_COMBAT_FLOAT(Local_53[iVar0 /*28*/], 4, 5f);
							iLocal_49[iVar0] = 1;
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 0:
							if (((__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || __LIB_11__.func_989(&(Local_53[iVar0 /*28*/]), &(Local_53[iVar0 /*28*/].f_18))) || (__LIB_11__.func_992(&(Local_53[iVar0 /*28*/]), 10f, 1) && PED::IS_PED_IN_COVER(Local_53[iVar0 /*28*/], true))) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 276.603f, -1347.275f, 23.248f, 279.499f, -1343.83f, 26.748f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(Local_53[iVar0 /*28*/], true)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 8f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_PED(Local_53[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 1:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 272.711f, -1344.186f, 23.538f, 275.649f, -1340.646f, 26.538f, 1.6f, false, true, 0))
							{
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_53[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 2:
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 282, true);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 272.293f, -1345.321f, 23.247f, 268.848f, -1342.426f, 26.747f, 2f, false, true, 0) || (PED::IS_PED_INJURED(Local_53[0 /*28*/]) && PED::IS_PED_INJURED(Local_53[1 /*28*/])))
							{
								if (!func_690("cia_attak2"))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak2", 7, 0, 0, 0))
									{
										func_667("cia_attak2", 1);
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 73, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 3:
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 282, true);
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 258, true);
							if (PED::IS_PED_INJURED(Local_53[1 /*28*/]) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 271.829f, -1345.845f, 23.538f, 268.325f, -1342.712f, 26.538f, 1.3f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 73, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 4:
							if (__LIB_11__.func_989(&(Local_53[iVar0 /*28*/]), &(Local_53[iVar0 /*28*/].f_18)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.439f, -1349.881f, 23.247f, 255.876f, -1339.339f, 26.748f, 2f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 4f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 73, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 5:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 6:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.798f, -1358.956f, 23.247f, 252.79f, -1345.52f, 26.72f, 10f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 73, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 8:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.076f, -1359.946f, 23.248f, 256.168f, -1357.5f, 26.748f, 2f, false, true, 0))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 2;
							}
							break;
						case 9:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.429f, -1367.32f, 23.247f, 250.59f, -1365.777f, 26.72f, 7f, false, true, 0))
							{
								AUDIO::STOP_PED_SPEAKING(Local_53[iVar0 /*28*/], false);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_53[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), -1, false);
								AUDIO::PLAY_SOUND_FROM_COORD(iLocal_235, "FBI_01_DMW_LIFT_ARRIVE", Local_53[iVar0 /*28*/].f_11, "FBI_01_SOUNDS", false, 0, false);
								bLocal_207 = true;
								iLocal_49[iVar0] = 2;
							}
							break;
						case 13:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 1.5f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 11:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								TASK::TASK_COMBAT_PED(Local_53[iVar0 /*28*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_49[iVar0] = 2;
							}
							else
							{
								PED::SET_PED_CAPSULE(Local_53[iVar0 /*28*/], 0.5f);
							}
							if (!func_690("cia_attak3"))
							{
								if (!__LIB_18__.func_197(&Local_430, 0))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak3", 7, 0, 0, 0))
									{
										func_667("cia_attak3", 1);
									}
								}
							}
							break;
						case 12:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								if (!func_690("cia_attak1"))
								{
									if (!__LIB_18__.func_197(&Local_430, 0))
									{
										if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak1", 7, 0, 0, 0))
										{
											func_667("cia_attak1", 1);
										}
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 14:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_53[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 15:
							if (ENTITY::IS_ENTITY_AT_COORD(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, 2f, 2f, false, true, 0))
							{
								if (!func_690("cia_attak0"))
								{
									if (!__LIB_18__.func_197(&Local_430, 0))
									{
										if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
										{
											func_667("cia_attak0", 1);
										}
									}
								}
							}
							if ((((((__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || __LIB_11__.func_989(&(Local_53[15 /*28*/]), &(Local_53[15 /*28*/].f_18))) || __LIB_11__.func_989(&(Local_53[16 /*28*/]), &(Local_53[16 /*28*/].f_18))) || func_698(&(Local_53[15 /*28*/]))) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_53[15 /*28*/])) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, false, true, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_53[iVar0 /*28*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 3f))
							{
								if (!func_690("cia_attak0"))
								{
									if (!__LIB_18__.func_197(&Local_430, 0))
									{
										if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
										{
											func_667("cia_attak0", 1);
										}
									}
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 16:
							iVar1 = joaat("WEAPON_UNARMED");
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
							if (((((__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, false, true, 0)) || __LIB_11__.func_989(&(Local_53[15 /*28*/]), &(Local_53[15 /*28*/].f_18))) || __LIB_11__.func_989(&(Local_53[16 /*28*/]), &(Local_53[16 /*28*/].f_18))) || func_698(&(Local_53[iVar0 /*28*/]))) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_COMBAT_FLOAT(Local_53[iVar0 /*28*/], 3, 2.5f);
								PED::SET_COMBAT_FLOAT(Local_53[iVar0 /*28*/], 4, 10f);
								PED::SET_PED_COMBAT_MOVEMENT(Local_53[iVar0 /*28*/], 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 1:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 8f, false, false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], 271.9024f, -1359.9326f, 23.5377f, 8f, false, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 2:
						case 6:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 7:
							if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 260.849f, -1351.601f, 23.255f, 257.326f, -1348.643f, 26.355f, 26.3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 259.076f, -1359.946f, 23.248f, 256.168f, -1357.5f, 26.748f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 273.56f, -1343.79f, 23.538f, 270.113f, -1340.897f, 26.538f, 2f, false, true, 0)) || __LIB_11__.func_989(&(Local_53[iVar0 /*28*/]), &(Local_53[iVar0 /*28*/].f_18))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_53[iVar0 /*28*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_53[iVar0 /*28*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_53[iVar0 /*28*/].f_14, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 0.8f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
								TASK::TASK_PERFORM_SEQUENCE(Local_53[iVar0 /*28*/], iLocal_450);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
								iLocal_49[iVar0] = 3;
							}
							break;
						case 8:
							if (PED::IS_PED_INJURED(Local_53[9 /*28*/]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 9:
							if (func_691())
							{
								PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 282, true);
								WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_53[iVar0 /*28*/], 0.5f, 0.8f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
						case 11:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 236.687f, -1369.182f, 26.866f, 238.485f, -1370.617f, 30.466f, 1.3f, false, true, 0))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_53[iVar0 /*28*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
					}
					break;
				case 3:
					switch (iVar0)
					{
						case 7:
							if (__LIB_11__.func_816(Local_53[iVar0 /*28*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_53[iVar0 /*28*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_53[iVar0 /*28*/], Local_53[iVar0 /*28*/].f_14, 2f, false, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 51, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_53[iVar0 /*28*/], 50, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_53[iVar0 /*28*/], 200f, 0);
								iLocal_49[iVar0] = 4;
							}
							break;
					}
					break;
				case 4:
					switch (iVar0)
					{
						case 2:
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 282, true);
							break;
						case 3:
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 282, true);
							PED::SET_PED_RESET_FLAG(Local_53[iVar0 /*28*/], 258, true);
							break;
						case 6:
							break;
						case 12:
							if (!func_690("cia_attak1"))
							{
								if (!__LIB_18__.func_197(&Local_430, 0))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak1", 7, 0, 0, 0))
									{
										func_667("cia_attak1", 1);
									}
								}
							}
							break;
						case 15:
							if (!func_690("cia_attak0"))
							{
								if (!__LIB_18__.func_197(&Local_430, 0))
								{
									if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "cia_attak0", 7, 0, 0, 0))
									{
										func_667("cia_attak0", 1);
									}
								}
							}
							break;
					}
					break;
			}
		}
		else
		{
			switch (iVar0)
			{
				case 11:
					if (Local_53[iVar0 /*28*/].f_22)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_AGENT_BURSTS_THROUGH_DOOR"))
						{
							AUDIO::STOP_AUDIO_SCENE("FBI_1_AGENT_BURSTS_THROUGH_DOOR");
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_698(var uParam0)//Position - 0x8CA1D
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_699()//Position - 0x8CA43
{
	switch (iLocal_229)
	{
		case 0:
			if (__LIB_35__.func_985(&uLocal_265, 30, "fbi1aud", "call1d", 9, 1, 0, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_CALL_NORTON");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_INSPECT_BODIES"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_INSPECT_BODIES");
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 4);
				iLocal_228 = -1;
				iLocal_229++;
			}
			break;
		case 1:
			if (!__LIB_10__.func_564())
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
				{
					iLocal_228 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
				}
			}
			else if (iLocal_228 != -1)
			{
				if (!__LIB_1__.func_412() || iLocal_228 >= 0)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_453))
					{
						iLocal_453 = __LIB_0__.func_392(236.4304f, -1357.7548f, 38.5342f, 0);
					}
					iLocal_229 = 2;
				}
				else
				{
					iLocal_229 = 0;
				}
			}
			else
			{
				iLocal_229 = 0;
				iLocal_244++;
				if (iLocal_244 > 2)
				{
					iLocal_229 = 2;
				}
			}
			break;
		case 2:
			AUDIO::TRIGGER_MUSIC_EVENT("FBI1_LEAK");
			AUDIO::START_AUDIO_SCENE("FBI_1_ESCAPE_BASE_SCENE");
			iLocal_210 = 1;
			iLocal_222 = MISC::GET_GAME_TIMER();
			iLocal_229++;
			break;
		case 3:
			break;
	}
}

int func_701()//Position - 0x8CB8D
{
	int iVar0;
	iVar0 = 0;
	func_721(&Local_53, 1);
	func_721(&Local_54, 1);
	if (HUD::DOES_BLIP_EXIST(Local_56[3 /*28*/].f_2))
	{
	}
	switch (iLocal_226)
	{
		case 0:
			if ((((iLocal_210 && (CAM::IS_SPHERE_VISIBLE(284.24f, -1343.17f, 25.33f, 4f) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 287.544f, -1354.412f, 23.247f, 294.497f, -1345.887f, 26.247f, 13.4f, false, true, 0))) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, false, true, 0)) || __LIB_0__.func_479(&iLocal_240, 40000)) || iLocal_219)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_56[4 /*28*/]))
				{
					PED::DELETE_PED(&(Local_56[4 /*28*/]));
				}
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
				STREAMING::REMOVE_ANIM_DICT("Dead");
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::REMOVE_STEALTH_MODE_ASSET("MICHAEL_ACTION");
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[6], 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[6], 3, false, true);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_259[7], 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_259[7], 3, false, true);
				if (!HUD::DOES_BLIP_EXIST(iLocal_453))
				{
					iLocal_453 = __LIB_0__.func_392(236.4304f, -1357.7548f, 38.5342f, 0);
				}
				iVar0 = 15;
				while (iVar0 <= 15)
				{
					func_343(&(Local_53[iVar0 /*28*/]), 0);
					AUDIO::STOP_PED_SPEAKING(Local_53[iVar0 /*28*/], true);
					iVar0++;
				}
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("6"), Local_53[15 /*28*/], "CIA1", 0, 1);
				AUDIO::START_AUDIO_SCENE("FBI_1_SHOOTOUT_GROUND_FLOOR");
				__LIB_42__.func_872(2, "Start of shootout", 0, 0, 0, 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 3);
				__LIB_19__.func_976(PLAYER::PLAYER_PED_ID(), &Global_4541610);
				iLocal_226++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.213f, -1347.35f, 23.247f, 280.73f, -1344.5f, 26.747f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 278.582f, -1349.604f, 23.528f, 281.867f, -1345.703f, 26.728f, 6.5f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 <= 10)
				{
					if (iVar0 != 7)
					{
						func_343(&(Local_53[iVar0 /*28*/]), 0);
						if (iVar0 == 3)
						{
							WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_53[iVar0 /*28*/], joaat("WEAPON_PUMPSHOTGUN"), joaat("COMPONENT_AT_AR_FLSH"));
						}
					}
					iVar0++;
				}
				func_343(&(Local_53[14 /*28*/]), 0);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("8"), Local_53[2 /*28*/], "CIA3", 0, 1);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("E"), Local_53[6 /*28*/], "CIA8", 0, 1);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("B"), Local_53[9 /*28*/], "CIA5", 0, 1);
				iVar0 = 2;
				while (iVar0 <= 3)
				{
					func_343(&(Local_56[iVar0 /*28*/]), 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_56[iVar0 /*28*/], false);
					iVar0++;
				}
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("F"), Local_56[2 /*28*/], "doctor2", 0, 1);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("D"), Local_56[3 /*28*/], "doctor1", 0, 1);
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_226++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 243.756f, -1367.919f, 23.537f, 247.835f, -1362.988f, 26.737f, 2.6f, false, true, 0))
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_01_DMW_01");
				iVar0 = 11;
				while (iVar0 <= 13)
				{
					if (!Local_53[iVar0 /*28*/].f_22)
					{
						func_343(&(Local_53[iVar0 /*28*/]), 0);
					}
					iVar0++;
				}
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("A"), Local_53[11 /*28*/], "CIA4", 0, 1);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("7"), Local_53[12 /*28*/], "CIA2", 0, 1);
				__LIB_36__.func_66(30, "FBI1_WPN" /* GXT: Michael, your weapons will be in a black trash bag in the evidence room on the top floor. */, 1, 1, 0, 0, 0, 1, 0, 1);
				Local_156[1 /*24*/].f_1 = __LIB_6__.func_825(Local_156[1 /*24*/], 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_SHOOTOUT_GROUND_FLOOR"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_SHOOTOUT_GROUND_FLOOR");
				}
				AUDIO::START_AUDIO_SCENE("FBI_1_GET_UPSTAIRS");
				__LIB_42__.func_872(3, "half way through shootout", 0, 0, 0, 1);
				__LIB_19__.func_976(PLAYER::PLAYER_PED_ID(), &Global_4541610);
				iLocal_226++;
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_102[0 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_102[0 /*15*/].f_1, true);
			STREAMING::REQUEST_MODEL(Local_102[1 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_102[1 /*15*/].f_1, true);
			iLocal_226++;
			break;
		case 4:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 252.445f, -1367.718f, 38.246f, 250.278f, -1365.944f, 41.246f, 7.5f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 <= (Local_53.f_0 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(Local_53[iVar0 /*28*/].f_2))
					{
						HUD::REMOVE_BLIP(&(Local_53[iVar0 /*28*/].f_2));
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					func_343(&(Local_54[iVar0 /*28*/]), 0);
					iVar0++;
				}
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("C"), Local_54[1 /*28*/], "CIA6", 0, 1);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_GET_UPSTAIRS"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_1_GET_UPSTAIRS");
				}
				AUDIO::START_AUDIO_SCENE("FBI_1_AIM_AT_WINDOW");
				__LIB_0__.func_210("FBI1_God_4", 7500, 1);
				iLocal_226++;
			}
			break;
		case 5:
			func_705();
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cor_windowsmash"));
			STREAMING::REQUEST_MODEL(Local_102[0 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_102[0 /*15*/].f_1, true);
			STREAMING::REQUEST_MODEL(Local_102[1 /*15*/].f_1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_102[1 /*15*/].f_1, true);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(236.03f, -1357.49f, 40.45f, 2f, joaat("v_ilev_cor_windowsolid"), false))
			{
				if ((STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cor_windowsmash")) && STREAMING::HAS_MODEL_LOADED(Local_102[0 /*15*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_102[1 /*15*/].f_1))
				{
					ENTITY::CREATE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), true);
					Local_157.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), true, false, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
					{
						Local_157.f_23 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_102.f_0 - 1))
					{
						Local_102[iVar0 /*15*/] = VEHICLE::CREATE_VEHICLE(Local_102[iVar0 /*15*/].f_1, Local_102[iVar0 /*15*/].f_3, Local_102[iVar0 /*15*/].f_6, true, true, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_102[iVar0 /*15*/], 7);
						iVar0++;
					}
					iLocal_226++;
				}
			}
			break;
		case 6:
			func_705();
			if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_157.f_0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_157.f_0, false);
				}
			}
			else
			{
				Local_157.f_0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsmash"), true, false, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
				{
					Local_157.f_23 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 234.193f, -1364.507f, 38.634f, 240.026f, -1357.653f, 41.534f, 6.05f, false, true, 0) && ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_157.f_0, false);
				if (!OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_157.f_0, false) < 0.7f)
				{
					__LIB_0__.func_210("FBI1_God_12", 7500, 1);
				}
				iLocal_226++;
			}
			break;
		case 7:
			func_705();
			if (OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Local_157.f_0, false) < 0.7f)
			{
				if (!iLocal_211)
				{
					func_704();
				}
				if (!func_690("FBI1_God_14"))
				{
					__LIB_0__.func_210("FBI1_God_14", 7500, 1);
					func_667("FBI1_God_14", 1);
					iLocal_223 = MISC::GET_GAME_TIMER();
				}
				Local_260 = { 236.344f, -1356.722f, 39.304f };
				Local_261 = { 0f, 0f, -40.68f };
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfbi1", "ledge_climbout", Local_260, Local_261, 0f, 2), 0.75f, 0.75f, 1.6f, false, true, 0))
				{
					if (__LIB_11__.func_883(PLAYER::PLAYER_PED_ID(), 48.26f, 45f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_690("FBI1_help6"))
						{
							if (__LIB_0__.func_479(&iLocal_223, 1000))
							{
								__LIB_0__.func_151("FBI1_help6", -1);
								func_667("FBI1_help6", 1);
							}
						}
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/))
						{
							AUDIO::DISTANT_COP_CAR_SIRENS(true);
							STREAMING::NEW_LOAD_SCENE_START(235.1414f, -1357.602f, 29.554f, __LIB_2__.func_162(0f, 0f, 53.2332f), 5f, 0);
							HUD::CLEAR_HELP(true);
							if (__LIB_0__.func_405("FBI1_God_14", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_453))
							{
								HUD::REMOVE_BLIP(&iLocal_453);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_230, "missfbi1", "ledge_climbout", 4f, -8f, 4, 0, 4f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_230, 0.11f);
							ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
							iLocal_226++;
						}
					}
				}
			}
			break;
		case 8:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_230))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_230) >= 0.9f)
				{
					func_664();
					iLocal_226++;
					return 1;
				}
			}
			break;
		case 9:
			return 1;
			break;
	}
	return 0;
}

void func_704()//Position - 0x8D59D
{
	switch (iLocal_257)
	{
		case 0:
			iLocal_257++;
			break;
		case 1:
			PHYSICS::BREAK_ENTITY_GLASS(Local_157.f_0, 236.05f, -1357.488f, 40.02953f, 0.3f, -0.6866288f, 0.6827963f, -0.2496601f, 700f, 3, false);
			PHYSICS::BREAK_ENTITY_GLASS(Local_157.f_0, 235.8064f, -1357.778f, 40.1281f, 0.4f, -0.6795667f, 0.7014526f, -0.2148329f, 500f, 3, false);
			PHYSICS::BREAK_ENTITY_GLASS(Local_157.f_0, 236.3226f, -1357.163f, 39.7619f, 0.5f, -0.376403f, 0.8627338f, -0.3376553f, 500f, 3, false);
			iLocal_257++;
			iLocal_211 = 1;
			break;
	}
}

void func_705()//Position - 0x8D666
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (!Local_54[3 /*28*/].f_22)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_54[iVar1 /*28*/]))
			{
				if (PED::IS_PED_INJURED(Local_54[iVar1 /*28*/]))
				{
					iVar0++;
				}
			}
			else if (Local_54[iVar1 /*28*/].f_22)
			{
				iVar0++;
			}
			iVar1++;
		}
		if (iVar0 >= 2)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (Var2.f_2 > 38f)
			{
				func_343(&(Local_54[3 /*28*/]), 0);
				func_343(&(Local_54[4 /*28*/]), 0);
			}
		}
	}
}

int func_721(int iParam0, bool bParam1)//Position - 0x8E777
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*28*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*28*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*28*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*28*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar1 /*28*/])->f_2));
				}
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_0__.func_401(276, 1, 0);
				}
				__LIB_0__.func_401(280, 1, 0);
				iVar0++;
			}
		}
		else if ((iParam0[iVar1 /*28*/])->f_22)
		{
			iVar0++;
		}
		if (!HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*28*/])->f_2))
		{
			__LIB_0__.func_499((*iParam0)[iVar1 /*28*/], &((iParam0[iVar1 /*28*/])->f_3), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		iVar1++;
	}
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_724()//Position - 0x8EAED
{
	Global_32213 = 0;
}

int func_725()//Position - 0x8EAF9
{
	int iVar0;
	if (!HUD::DOES_BLIP_EXIST(Local_57[0 /*28*/].f_2) && !HUD::DOES_BLIP_EXIST(Local_57[1 /*28*/].f_2))
	{
		if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3))
		{
			if (func_690("mr_k_0") && func_690("mr_k_1"))
			{
				if (!__LIB_18__.func_197(&Local_430, 0))
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
					__LIB_9__.func_485(4, 0);
					__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("5"), 0, "dave", 0, 1);
					iLocal_240 = MISC::GET_GAME_TIMER();
					iLocal_48 = 5;
					return 1;
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 277.116f, -1340.988f, 23.537f, 283.48f, -1333.405f, 26.537f, 11f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_57.f_0 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(Local_57[iVar0 /*28*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_57[iVar0 /*28*/].f_2));
			}
			iVar0++;
		}
		iLocal_229 = 3;
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		__LIB_9__.func_485(4, 0);
		iLocal_219 = 1;
		iLocal_48 = 5;
		return 1;
	}
	if (__LIB_11__.func_991(PLAYER::PLAYER_PED_ID(), 288.9353f, -1347.943f, 23.5378f, "BodyStorage", "v_coroner"))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	func_730();
	func_727();
	func_726();
	func_674();
	return 0;
}

void func_726()//Position - 0x8ECBF
{
	if (!func_690("mr_k_0"))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_57[0 /*28*/].f_2))
		{
			if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "mr_k_0", 6, 0, 0, 0))
			{
				HUD::CLEAR_PRINTS();
				func_667("mr_k_0", 1);
			}
		}
	}
	if (!func_690("mr_k_1"))
	{
		if (!HUD::DOES_BLIP_EXIST(Local_57[1 /*28*/].f_2))
		{
			if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "mr_k_1", 6, 0, 0, 0))
			{
				HUD::CLEAR_PRINTS();
				func_667("mr_k_1", 1);
			}
		}
	}
}

void func_727()//Position - 0x8ED4B
{
	struct<3> Var0;
	struct<3> Var1;
	func_729(Local_57[1 /*28*/]);
	switch (iLocal_243)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_9");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_9"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false), 2f, 2f, 2.5f, false, true, 0))
				{
					if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[1 /*28*/], 60f))
					{
						if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[1 /*28*/], 35f))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else if (func_729(Local_57[1 /*28*/]) < -35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else if (func_729(Local_57[1 /*28*/]) > 35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false) };
							Var0.f_2 = (Var0.f_2 - 1f);
							CAM::SET_GAMEPLAY_COORD_HINT(Var0, 3000, 2500, 2000, 0);
						}
						if (HUD::DOES_BLIP_EXIST(Local_57[1 /*28*/].f_2))
						{
							HUD::REMOVE_BLIP(&(Local_57[1 /*28*/].f_2));
						}
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false), -1, 0, 2);
						iLocal_243 = 2;
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false) };
						Var1.f_2 = (Var1.f_2 - 1f);
						CAM::SET_GAMEPLAY_COORD_HINT(Var1, 3000, 2500, 2000, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_450);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
						iLocal_243++;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[1 /*28*/], 25f))
			{
				if (func_371(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_450);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
				}
			}
			else if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[1 /*28*/], 60f))
			{
				if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[1 /*28*/], 35f))
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				else if (func_729(Local_57[1 /*28*/]) < -35f)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				else if (func_729(Local_57[1 /*28*/]) > 35f)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0f, false, false, false);
				}
				if (HUD::DOES_BLIP_EXIST(Local_57[1 /*28*/].f_2))
				{
					HUD::REMOVE_BLIP(&(Local_57[1 /*28*/].f_2));
				}
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[1 /*28*/], false), -1, 0, 2);
				iLocal_243 = 2;
			}
			break;
		case 2:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				}
			}
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CAM::STOP_GAMEPLAY_HINT(false);
				iLocal_243 = 22;
			}
			break;
		case 22:
			break;
	}
}

float func_729(int iParam0)//Position - 0x8F171
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -180f)
	{
		fVar1 = (fVar1 + 360f);
	}
	return fVar1;
}

void func_730()//Position - 0x8F1CF
{
	struct<3> Var0;
	struct<3> Var1;
	func_729(Local_57[0 /*28*/]);
	switch (iLocal_242)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_9");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_9"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false), 2f, 2f, 2.5f, false, true, 0))
				{
					if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[0 /*28*/], 60f))
					{
						if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[0 /*28*/], 35f))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else if (func_729(Local_57[0 /*28*/]) < -35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else if (func_729(Local_57[0 /*28*/]) > 35f)
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0f, false, false, false);
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false) };
							Var0.f_2 = (Var0.f_2 - 1f);
							CAM::SET_GAMEPLAY_COORD_HINT(Var0, 3000, 2500, 2000, 0);
						}
						if (HUD::DOES_BLIP_EXIST(Local_57[0 /*28*/].f_2))
						{
							HUD::REMOVE_BLIP(&(Local_57[0 /*28*/].f_2));
						}
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false), -1, 0, 2);
						iLocal_242 = 2;
					}
					else
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false) };
						Var1.f_2 = (Var1.f_2 - 1f);
						CAM::SET_GAMEPLAY_COORD_HINT(Var1, 3000, 2500, 2000, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_450);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
						iLocal_256 = MISC::GET_GAME_TIMER();
						iLocal_242++;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[0 /*28*/], 25f))
			{
				if (func_371(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_450);
					TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_450);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_450);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_450);
				}
			}
			else if (func_371(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), -2))
			{
				iLocal_256 = iLocal_256;
				if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[0 /*28*/], 60f))
				{
					if (__LIB_11__.func_993(PLAYER::PLAYER_PED_ID(), Local_57[0 /*28*/], 35f))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (func_729(Local_57[0 /*28*/]) < -35f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (func_729(Local_57[0 /*28*/]) > 35f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					if (HUD::DOES_BLIP_EXIST(Local_57[0 /*28*/].f_2))
					{
						HUD::REMOVE_BLIP(&(Local_57[0 /*28*/].f_2));
					}
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_57[0 /*28*/], false), -1, 0, 2);
					iLocal_242 = 2;
				}
			}
			break;
		case 2:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				}
			}
			if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_front", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_right", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi1ig_9", "look_left", 3))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CAM::STOP_GAMEPLAY_HINT(false);
				iLocal_242 = 22;
			}
			break;
		case 22:
			break;
	}
}

void func_731()//Position - 0x8F5A3
{
	int iVar0;
	func_724();
	if (__LIB_11__.func_991(PLAYER::PLAYER_PED_ID(), 288.9353f, -1347.943f, 23.5378f, "BodyStorage", "v_coroner"))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (PED::IS_PED_INJURED(Local_69.f_0))
	{
		STREAMING::REMOVE_ANIM_DICT("missfbi1ig_7");
		TASK::REMOVE_WAYPOINT_RECORDING("fbi1_0");
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 2);
		if (HUD::DOES_BLIP_EXIST(Local_69.f_2))
		{
			HUD::REMOVE_BLIP(&(Local_69.f_2));
		}
		Local_57[0 /*28*/].f_2 = HUD::ADD_BLIP_FOR_ENTITY(Local_57[0 /*28*/]);
		HUD::SET_BLIP_COLOUR(Local_57[0 /*28*/].f_2, 2);
		HUD::SET_BLIP_SCALE(Local_57[0 /*28*/].f_2, 0.5f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_57[0 /*28*/].f_2, "FBI1_God_13");
		Local_57[1 /*28*/].f_2 = HUD::ADD_BLIP_FOR_ENTITY(Local_57[1 /*28*/]);
		HUD::SET_BLIP_COLOUR(Local_57[1 /*28*/].f_2, 2);
		HUD::SET_BLIP_SCALE(Local_57[1 /*28*/].f_2, 0.5f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_57[1 /*28*/].f_2, "FBI1_God_13");
		AUDIO::TRIGGER_MUSIC_EVENT("FBI1_FIND_BODY");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_1_STEALTH_KILL_AGENT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
		}
		AUDIO::START_AUDIO_SCENE("FBI_1_INSPECT_BODIES");
		__LIB_0__.func_210("FBI1_God_1", 7500, 1);
		iLocal_223 = MISC::GET_GAME_TIMER();
		iLocal_48 = 4;
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 284.463f, -1354.515f, 23.538f, 294.471f, -1342.418f, 26.538f, 18.6f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 277.116f, -1340.988f, 23.537f, 283.48f, -1333.405f, 26.537f, 11f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_57.f_0 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(Local_57[iVar0 /*28*/].f_2))
			{
				HUD::REMOVE_BLIP(&(Local_57[iVar0 /*28*/].f_2));
			}
			iVar0++;
		}
		iLocal_229 = 3;
		PLAYER::SET_PLAYER_CAN_USE_COVER(PLAYER::PLAYER_ID(), true);
		__LIB_9__.func_485(4, 0);
		iLocal_219 = 1;
		iLocal_48 = 5;
		return;
	}
	func_350();
	func_682();
	func_674();
}

void func_732()//Position - 0x8F794
{
	int iVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	iVar0 = 0;
	func_739();
	func_738();
	switch (iLocal_225)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("Dead");
			__LIB_0__.func_686(1, 1, 1, 0);
			if (func_404(1, 1, 1, 0))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
				__LIB_9__.func_485(4, 1);
				MISC::CLEAR_AREA(278.58f, -1336.61f, 23.68f, 300f, true, false, false, false);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(278.58f, -1336.61f, 23.68f, 300f);
				iLocal_451 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", 280.336f, -1335.4619f, 24.55331f, 63.400543f, 0f, -129.38966f, 56f, false, 2);
				CAM::SET_CAM_NEAR_DOF(iLocal_451, 0.01f);
				CAM::SET_CAM_FAR_DOF(iLocal_451, 0.05f);
				CAM::SET_CAM_DOF_STRENGTH(iLocal_451, 0.2f);
				CAM::SET_CAM_USE_SHALLOW_DOF_MODE(iLocal_451, true);
				func_343(&(Local_56[0 /*28*/]), 0);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_56[0 /*28*/]);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_56[0 /*28*/], true);
				PED::SET_PED_COMPONENT_VARIATION(Local_56[0 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_56[0 /*28*/], 3, 0, 0, 0);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("3"), Local_56[0 /*28*/], "doctor1", 0, 1);
				HUD::REMOVE_BLIP(&(Local_56[0 /*28*/].f_2));
				Local_112.f_0 = OBJECT::CREATE_OBJECT(Local_112.f_2, Local_56[0 /*28*/].f_11 + Vector(1f, 0f, 0f), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_112.f_0, Local_56[0 /*28*/], PED::GET_PED_BONE_INDEX(Local_56[0 /*28*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				Local_134.f_0 = OBJECT::CREATE_OBJECT(Local_134.f_2, Local_56[0 /*28*/].f_11 + Vector(1.5f, 0f, 0f), true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_134.f_0, Local_56[0 /*28*/], PED::GET_PED_BONE_INDEX(Local_56[0 /*28*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				Local_260 = { 280.583f, -1335.896f, 23.588f };
				Local_261 = { 0f, 0f, 38f };
				iLocal_231 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_56[0 /*28*/], iLocal_231, "missfbi1", "fbi_1_ig_1_b_clipb", 1000f, -8f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[0 /*28*/], false, false);
				func_343(&(Local_56[1 /*28*/]), 0);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_56[1 /*28*/]);
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_56[1 /*28*/], true);
				AUDIO::STOP_PED_SPEAKING(Local_56[1 /*28*/], true);
				PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_56[1 /*28*/], 3, 0, 1, 0);
				__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("4"), Local_56[1 /*28*/], "doctor2", 0, 1);
				HUD::REMOVE_BLIP(&(Local_56[1 /*28*/].f_2));
				Local_260 = { 281.083f, -1336.146f, 23.638f };
				Local_261 = { 0f, 0f, 44f };
				iLocal_232 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_56[1 /*28*/], iLocal_232, "missfbi1", "fbi_1_ig_1_a", 1000f, -8f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_232, 0.145f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_232, 0f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
				func_343(&(Local_56[4 /*28*/]), 0);
				HUD::REMOVE_BLIP(&(Local_56[4 /*28*/].f_2));
				PED::SET_PED_CAN_BE_TARGETTED(Local_56[4 /*28*/], false);
				func_346(&(Local_57[0 /*28*/]));
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[0 /*28*/], 11, 0, 0, 0);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[0 /*28*/]);
				PED::SET_PED_CAN_RAGDOLL(Local_57[0 /*28*/], true);
				INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[0 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(292.205f, -1345.025f, 24.57f, "V_Coroner"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[0 /*28*/], true, 1);
				Local_260 = { 291.552f, -1345.871f, 24.57f };
				Local_261 = { 0f, 0f, 147f };
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[0 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[0 /*28*/], false, false);
				func_346(&(Local_57[1 /*28*/]));
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_57[1 /*28*/], 11, 0, 0, 0);
				PED::DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Local_57[1 /*28*/]);
				PED::SET_PED_CAN_RAGDOLL(Local_57[1 /*28*/], true);
				INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Local_57[1 /*28*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(297.302f, -1348.671f, 24.57f, "V_Coroner"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_57[1 /*28*/], true, 1);
				Local_260 = { 296.702f, -1349.621f, 24.57f };
				Local_261 = { 0f, 0f, 140f };
				TASK::TASK_PLAY_ANIM_ADVANCED(Local_57[1 /*28*/], "missfbi1", "cpr_pumpchest_idle", Local_260, Local_261, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_57[1 /*28*/], false, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Local_260 = { 280.645f, -1335.833f, 24.5f };
				Local_261 = { 0f, 0f, -138f };
				iLocal_230 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_230, "missfbi1", "cpr_pumpchest_idle", 1000f, -8f, 0, 0, 1000f, 0);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 26, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 18, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 7, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 3);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 4);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 5);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 6);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 7);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 8);
				__LIB_0__.func_203(&uLocal_265, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
				iVar0 = 0;
				while (iVar0 <= (Local_156.f_0 - 1))
				{
					Local_156[iVar0 /*24*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_156[iVar0 /*24*/].f_2, Local_156[iVar0 /*24*/].f_3, true, true, false);
					ENTITY::SET_ENTITY_HEADING(Local_156[iVar0 /*24*/], Local_156[iVar0 /*24*/].f_18);
					if (iVar0 == 0)
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(277.2329f, -1336.3568f, 24f, "V_coroner"), MISC::GET_HASH_KEY("AutopsySmall"));
					}
					else if (iVar0 == 1)
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_156[iVar0 /*24*/], INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(249f, -1372.3f, 39.5f, "V_coroner"), MISC::GET_HASH_KEY("topoff_mid"));
					}
					iVar0++;
				}
				Local_180[0 /*24*/] = OBJECT::CREATE_OBJECT(Local_180[0 /*24*/].f_2, Local_180[0 /*24*/].f_3, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(Local_180[0 /*24*/], Local_180[0 /*24*/].f_12, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_180[0 /*24*/], true);
				fLocal_262 = 0.05f;
				fLocal_263 = -0.5f;
				CAM::SET_CAM_ACTIVE(iLocal_451, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				RECORDING::REPLAY_START_EVENT(3);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_451, true);
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
				SYSTEM::WAIT(0);
				INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("rm_bsmt_AutopsySmall");
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
				CAM::DO_SCREEN_FADE_IN(2000);
				AUDIO::START_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_225++;
			}
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false);
			break;
		case 1:
			GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_263, 1f, 3.1f, 0f, 255, 255, 255, 255, false, 0);
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc1", 7, 0, 0, 0))
				{
					iLocal_225++;
				}
			}
			CAM::SET_USE_HI_DOF();
			break;
		case 2:
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
			if (!__LIB_0__.func_75())
			{
				if (!bLocal_208)
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_234, "UNZIP", PLAYER::PLAYER_PED_ID(), "FBI_01_SOUNDS", false, 0);
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_232))
					{
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_232, 1f);
					}
					bLocal_208 = true;
				}
				if (fLocal_262 < 0.2f)
				{
					fLocal_262 = (fLocal_262 + 0.01f);
				}
				if (fLocal_263 < 2.5f)
				{
					fLocal_263 = (fLocal_263 + fLocal_262);
					GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_263, 1f, 3.1f, 0f, 255, 255, 255, 255, false, 0);
				}
				else
				{
					if (bLocal_208)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_234))
						{
							AUDIO::STOP_SOUND(iLocal_234);
						}
					}
					iLocal_223 = MISC::GET_GAME_TIMER();
					iLocal_225++;
				}
			}
			else
			{
				GRAPHICS::DRAW_SPRITE("fbi1", "zipbig", 0.5f, fLocal_263, 1f, 3.1f, 0f, 255, 255, 255, 255, false, 0);
			}
			CAM::SET_USE_HI_DOF();
			break;
		case 3:
			if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc5", 6, 0, 0, 0))
			{
				iLocal_225++;
			}
			CAM::SET_USE_HI_DOF();
			break;
		case 4:
			if (CAM::GET_CAM_FAR_DOF(iLocal_451) < 4f)
			{
				fVar1 = CAM::GET_CAM_FAR_DOF(iLocal_451);
				fVar1 = (fVar1 + ((fVar1 * 2f) * SYSTEM::TIMESTEP()));
				if (fVar1 > 4f)
				{
					fVar1 = 4f;
				}
				CAM::SET_CAM_FAR_DOF(iLocal_451, fVar1);
				CAM::SET_USE_HI_DOF();
				if (fVar1 == 4f)
				{
					iLocal_225++;
				}
			}
			break;
		case 5:
			if (!func_690("fbi1_doc2"))
			{
				__LIB_0__.func_471(&uVar2, &uVar3, &iVar4, &iVar5, 0);
				if (!PAD::IS_LOOK_INVERTED())
				{
					iVar5 = (iVar5 * -1);
				}
				if (((iVar4 > 28 || iVar4 < -28) || iVar5 > 28) || iVar5 < -28)
				{
					if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc2", 7, 0, 0, 0))
					{
						func_667("fbi1_doc2", 1);
						__LIB_0__.func_187("FBI1_help1");
						iLocal_237 = MISC::GET_GAME_TIMER();
						iLocal_223 = MISC::GET_GAME_TIMER();
						iLocal_225++;
					}
				}
			}
			if (!__LIB_0__.func_75())
			{
				__LIB_0__.func_187("FBI1_help1");
				iLocal_237 = MISC::GET_GAME_TIMER();
				iLocal_223 = MISC::GET_GAME_TIMER();
				iLocal_225++;
			}
			break;
		case 6:
			if (!func_690("fbi1_doc2"))
			{
				if (!func_690("fbi1_doc4"))
				{
					__LIB_0__.func_471(&uVar6, &uVar7, &iVar8, &iVar9, 0);
					if (!PAD::IS_LOOK_INVERTED())
					{
						iVar9 = (iVar9 * -1);
					}
					if (((iVar8 > 28 || iVar8 < -28) || iVar9 > 28) || iVar9 < -28)
					{
						if (__LIB_0__.func_75())
						{
							MemCopy(&cLocal_458, {__LIB_0__.func_390()}, 4);
							if (MISC::ARE_STRINGS_EQUAL(&cLocal_458, "fbi1_doc3"))
							{
								MemCopy(&Local_461, {__LIB_0__.func_389()}, 4);
								iLocal_209 = 1;
							}
						}
						if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc2", 7, 0, 0, 0))
						{
							func_667("fbi1_doc2", 1);
						}
					}
				}
			}
			if (!func_690("fbi1_doc3"))
			{
				if (!__LIB_18__.func_197(&Local_430, 0))
				{
					if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc3", 6, 0, 0, 0))
					{
						func_667("fbi1_doc3", 1);
					}
				}
			}
			else if (!__LIB_18__.func_197(&Local_430, 0))
			{
				if (iLocal_209)
				{
					if (!MISC::IS_STRING_NULL(&Local_461))
					{
						if (__LIB_36__.func_67(&uLocal_265, "FBI1AUD", "fbi1_doc3", &Local_461, 6, 0, 0))
						{
							iLocal_209 = 0;
						}
					}
					else
					{
						iLocal_209 = 0;
					}
				}
			}
			if (!func_690("fbi1_doc4"))
			{
				if (__LIB_0__.func_479(&iLocal_223, 55000))
				{
					if (!__LIB_18__.func_197(&Local_430, 0))
					{
						if (__LIB_35__.func_984(&uLocal_265, "FBI1AUD", "fbi1_doc4", 7, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(Local_56[0 /*28*/]))
							{
								Local_260 = { 280.583f, -1335.896f, 23.588f };
								Local_261 = { 0f, 0f, 38f };
								iLocal_231 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_56[0 /*28*/], iLocal_231, "missfbi1", "fbi_1_ig_3_b_clipb", 1f, -8f, 0, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_231, 0.45f);
							}
							if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
							{
								Local_260 = { 281.083f, -1336.146f, 23.638f };
								Local_261 = { 0f, 0f, 44f };
								iLocal_232 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_56[1 /*28*/], iLocal_232, "missfbi1", "fbi_1_ig_3_a", 1f, -8f, 0, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_232, 0.45f);
							}
							func_667("fbi1_doc4", 1);
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_56[0 /*28*/]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_231))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 1f)
							{
								Local_260 = { 280.583f, -1335.896f, 23.588f };
								Local_261 = { 0f, 0f, 38f };
								iLocal_231 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_56[0 /*28*/], iLocal_231, "missfbi1", "fbi_1_ig_2_b_clipb", 8f, -8f, 0, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[0 /*28*/], false, false);
							}
						}
					}
					if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_232))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_231) >= 1f)
							{
								Local_260 = { 281.083f, -1336.146f, 23.638f };
								Local_261 = { 0f, 0f, 44f };
								iLocal_232 = PED::CREATE_SYNCHRONIZED_SCENE(Local_260, Local_261, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_56[1 /*28*/], iLocal_232, "missfbi1", "fbi_1_ig_2_a", 8f, -8f, 0, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
							}
						}
					}
				}
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_232))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_232) >= 0.6f)
				{
					HUD::CLEAR_HELP(true);
					if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
					{
						Local_158.f_0 = OBJECT::CREATE_OBJECT(Local_158.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_56[1 /*28*/], 0f, 0f, 1f), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158.f_0, Local_56[1 /*28*/], PED::GET_PED_BONE_INDEX(Local_56[1 /*28*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
					iLocal_225 = 30;
				}
			}
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (func_404(0, 1, 1, 0))
					{
						AUDIO::STOP_STREAM();
						AUDIO::TRIGGER_MUSIC_EVENT("FBI1_WAKE_UP");
						if (!PED::IS_PED_INJURED(Local_56[0 /*28*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56[0 /*28*/], "Scientist_with_clipboard", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_56[1 /*28*/], "Scientist_whos_grabbed", 0, 0, 0);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_112.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_112.f_0, true, true);
						}
						if (ENTITY::IS_ENTITY_ATTACHED(Local_134.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_134.f_0, true, true);
						}
						iLocal_181 = WEAPON::CREATE_WEAPON_OBJECT(Local_69.f_23, -1, 282.9f, -1345.1f, 25.3f, true, 1f, 0, 0, 1);
						WEAPON::GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(iLocal_181, joaat("COMPONENT_AT_PI_FLSH"));
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_181, "cia_pistol", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_112.f_0, "FIB_1_clipboard", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_134.f_0, "FIB_1_Pencil", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "cia_guard", 2, Local_69.f_1, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_181, "cia_pistol", 0, 0, 0);
						CUTSCENE::START_CUTSCENE(0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 19, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 5, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 7, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 9, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 10, 0, 0);
						PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 11, 0, 0);
						iLocal_223 = MISC::GET_GAME_TIMER();
						iLocal_225 = 7;
					}
				}
			}
			break;
		case 7:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_6__.func_771();
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_158);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_158.f_2);
				}
				iLocal_225++;
			}
			break;
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missfbi1ig_7");
			PED::REQUEST_STEALTH_MODE_ASSET("MICHAEL_ACTION");
			if (ENTITY::DOES_ENTITY_EXIST(Local_69.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_69.f_0))
				{
					PED::SET_PED_RESET_FLAG(Local_69.f_0, 258, true);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_181))
			{
				OBJECT::SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(iLocal_181, true);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (!bLocal_213)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 17200)
						{
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
							func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
							bLocal_213 = true;
						}
					}
					if (!iLocal_214)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 500)
						{
							CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 6500, 200);
							iLocal_214 = 1;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", Local_69.f_1)))
					{
						Local_69.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", Local_69.f_1));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Scientist_whos_grabbed", 0))
					{
						if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
						{
							PED::SET_PED_CAN_RAGDOLL(Local_56[1 /*28*/], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_56[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
							__LIB_0__.func_202(&uLocal_265, 4);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("cia_guard", 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7"))
						{
							if (!PED::IS_PED_INJURED(Local_69.f_0))
							{
								func_733(&Local_69);
								func_345(&Local_69, 1);
								WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
								WEAPON::SET_CURRENT_PED_WEAPON(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), true);
								AUDIO::STOP_PED_SPEAKING(Local_69.f_0, true);
								__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("6"), Local_69.f_0, "CIA1", 0, 1);
								PED::FORCE_PED_MOTION_STATE(Local_69.f_0, joaat("MotionState_Aiming"), true, 0, false);
								func_350();
							}
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("cia_pistol", 0))
					{
						WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_181, Local_69.f_0);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", 0))
					{
						if (PED::HAS_STEALTH_MODE_ASSET_LOADED("MICHAEL_ACTION"))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, 0);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Stealth_Idle"), false, 0, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
							RECORDING::REPLAY_STOP_EVENT();
						}
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_225 = 22;
				}
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("script\FBI_01_DMW_Autopsy_1");
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				PED::DELETE_PED(&(Local_56[0 /*28*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_56[0 /*28*/].f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_112);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_112.f_2);
				if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_134);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_134.f_2);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				__LIB_8__.func_770(0);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
				__LIB_42__.func_872(1, "stealth_the_cia_officer", 0, 0, 0, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_GET_GUN");
				AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
				func_378(0, 0, 0, 0, 0, 3000, 1);
				iLocal_48 = 3;
			}
			break;
		case 22:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", __LIB_19__.func_811(2))))
				{
					Local_69.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("cia_guard", __LIB_19__.func_811(2)));
				}
			}
			else if ((STREAMING::HAS_ANIM_DICT_LOADED("missfbi1ig_7") && PED::HAS_STEALTH_MODE_ASSET_LOADED("MICHAEL_ACTION")) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_01_DMW_IN_BODY_BAG"))
				{
					AUDIO::STOP_AUDIO_SCENE("FBI_01_DMW_IN_BODY_BAG");
				}
				if (bLocal_208)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_234))
					{
						AUDIO::STOP_SOUND(iLocal_234);
					}
				}
				PED::DELETE_PED(&(Local_56[0 /*28*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_56[0 /*28*/].f_1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_112);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_112.f_2);
				if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_134);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_134.f_2);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("fbi1");
				if (!bLocal_213)
				{
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 3, 19, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 10, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 11, 0, 0, 0);
					func_217(PLAYER::PLAYER_PED_ID(), 1, 1, 1);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 279.0734f, -1337.0759f, 23.5545f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 227.5366f);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Stealth_Idle"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
				if (!PED::IS_PED_INJURED(Local_69.f_0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_69.f_0);
					ENTITY::SET_ENTITY_COORDS(Local_69.f_0, 284.5221f, -1343.0671f, 23.538f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_69.f_0, 231.3517f);
					func_733(&Local_69);
					func_345(&Local_69, 1);
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_181, Local_69.f_0);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
					WEAPON::SET_CURRENT_PED_WEAPON(Local_69.f_0, joaat("WEAPON_COMBATPISTOL"), false);
					AUDIO::STOP_PED_SPEAKING(Local_69.f_0, true);
					__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("6"), Local_69.f_0, "CIA1", 0, 1);
					PED::FORCE_PED_MOTION_STATE(Local_69.f_0, joaat("MotionState_Aiming"), true, 0, false);
					func_350();
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_69.f_0, false, false);
				}
				if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
				{
					PED::SET_PED_CAN_RAGDOLL(Local_56[1 /*28*/], true);
					TASK::TASK_PLAY_ANIM_ADVANCED(Local_56[1 /*28*/], "Dead", "dead_c", 278.835f, -1336.046f, 24.58f, 0f, 0f, 74f, 1000f, -8f, -1, 2102280, 0.99f, 2, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_56[1 /*28*/], false, false);
					__LIB_0__.func_202(&uLocal_265, 4);
				}
				__LIB_8__.func_770(0);
				__LIB_42__.func_872(1, "stealth_the_cia_officer", 0, 0, 0, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("FBI1_GET_GUN");
				AUDIO::START_AUDIO_SCENE("FBI_1_STEALTH_KILL_AGENT");
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
				func_208(1, 0, 0, 1);
				iLocal_48 = 3;
			}
			break;
		case 30:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_232))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_232) >= 0.65f)
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fbi_autopsy_blood", 280.7f, -1335.8f, 24.7f, 0f, 0f, 0f, 1f, false, false, false);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1500, 200);
					iLocal_225++;
				}
			}
			break;
		case 31:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_232))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_232) >= 0.72f)
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						if (!CAM::IS_SCREEN_FADING_OUT())
						{
							HUD::CLEAR_HELP(true);
							CAM::DO_SCREEN_FADE_OUT(2000);
						}
					}
					else
					{
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(280.7f, -1335.8f, 24.7f, 100f);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
						ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 2, 0);
						func_378(1, 1, 0, 0, 0, 3000, 1);
					}
				}
			}
			break;
	}
}

void func_733(int iParam0)//Position - 0x91030
{
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	PED::SET_PED_AS_ENEMY(*iParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 132, true);
	PED::SET_PED_MONEY(*iParam0, 0);
	iParam0->f_2 = __LIB_6__.func_850(*iParam0, 1, 145);
	WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam0->f_23, -1, true, true);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, iParam0->f_18, 0);
	PED::SET_PED_MAX_HEALTH(*iParam0, iParam0->f_18);
	if (iParam0->f_20)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
	}
	if (iParam0->f_21)
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*iParam0, &(iParam0->f_24));
	PED::SET_PED_SEEING_RANGE(*iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*iParam0, 250f);
	PED::SET_PED_ID_RANGE(*iParam0, 250f);
	PED::SET_PED_CAN_EVASIVE_DIVE(*iParam0, true);
	PED::SET_PED_ACCURACY(*iParam0, iParam0->f_19);
	__LIB_0__.func_477(*iParam0, 0);
}

void func_738()//Position - 0x912F2
{
	if (iLocal_225 > 0 && !iLocal_225 >= 6)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::REQUEST_CUTSCENE("FBI_1_MCS_1_concat", 8);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			if (!PED::IS_PED_INJURED(Local_56[0 /*28*/]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Scientist_with_clipboard", Local_56[0 /*28*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_56[1 /*28*/]))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Scientist_whos_grabbed", Local_56[1 /*28*/], 0);
			}
		}
	}
}

void func_739()//Position - 0x9136A
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	switch (iLocal_252)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_451))
			{
			}
			CAM::SET_USE_HI_DOF();
			iLocal_252++;
			break;
		case 1:
			if (CAM::DOES_CAM_EXIST(iLocal_451))
			{
				__LIB_0__.func_471(&uVar0, &uVar1, &iVar2, &iVar3, 0);
				if (!PAD::IS_LOOK_INVERTED())
				{
					iVar3 = (iVar3 * -1);
				}
				if (iVar3 > 28 || iVar3 < -28)
				{
					fVar4 = SYSTEM::TO_FLOAT(iVar3);
					fVar4 = (fVar4 * fVar4);
					fVar4 = (fVar4 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
					fVar4 = (fVar4 * fLocal_468);
					if (iVar3 < 0)
					{
						fVar4 = (fVar4 * -1f);
					}
					Local_473.f_0 = (Local_473.f_0 + fVar4);
					if (Local_473.f_0 < fLocal_469)
					{
						Local_473.f_0 = fLocal_469;
					}
					if (Local_473.f_0 > fLocal_470)
					{
						Local_473.f_0 = fLocal_470;
					}
				}
				if (iVar2 > 28 || iVar2 < -28)
				{
					fVar4 = SYSTEM::TO_FLOAT(iVar2);
					fVar4 = (fVar4 * fVar4);
					fVar4 = (fVar4 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
					fVar4 = (fVar4 * fLocal_468);
					if (iVar2 > 0)
					{
						fVar4 = (fVar4 * -1f);
					}
					Local_473.f_2 = (Local_473.f_2 + fVar4);
					if (Local_473.f_2 < fLocal_471)
					{
						Local_473.f_2 = fLocal_471;
					}
					if (Local_473.f_2 > fLocal_472)
					{
						Local_473.f_2 = fLocal_472;
					}
				}
				CAM::SET_CAM_ROT(iLocal_451, Local_473.f_0, 0f, Local_473.f_2, 2);
			}
			break;
	}
}

void func_740()//Position - 0x914C8
{
	switch (iLocal_224)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_1_int", 62, 8);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					iLocal_73 = Global_96938.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_73, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_73, "Dave_FBI", 0, 0, 0);
				}
				__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
				__LIB_0__.func_372(29);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				iLocal_224++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_32__.func_796(-389.924f, 1116.777f, 324.517f, -472.317f, 1138.854f, 340.917f, 148.5f, -410.9237f, 1174.479f, 324.6415f, 253.2136f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
				func_3(-410.9237f, 1174.479f, 324.6415f, 253.2136f, 1);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
				iLocal_224++;
			}
			break;
		case 2:
			if (!iLocal_216)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 133861)
				{
					CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
					iLocal_216 = 1;
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_377();
			}
			break;
	}
}

void func_743()//Position - 0x91661
{
	func_746(sLocal_264);
	func_744();
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_DEAD");
	iLocal_205 = 1;
	iLocal_48 = 10;
}

void func_744()//Position - 0x91686
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_156.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_156[iVar0 /*24*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_156[iVar0 /*24*/].f_1));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_453))
	{
		HUD::REMOVE_BLIP(&iLocal_453);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_57.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_57[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_57[iVar0 /*28*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_53[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_53[iVar0 /*28*/].f_2));
		}
		__LIB_0__.func_489(&(Local_53[iVar0 /*28*/].f_3));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_54.f_0 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_54[iVar0 /*28*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_54[iVar0 /*28*/].f_2));
		}
		__LIB_0__.func_489(&(Local_54[iVar0 /*28*/].f_3));
		iVar0++;
	}
}

void func_746(char* sParam0)//Position - 0x917F6
{
	__LIB_0__.func_324(sParam0);
	func_747(0);
}

void func_747(int iParam0)//Position - 0x91809
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_748(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_748(int iParam0)//Position - 0x9184E
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_546();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_749(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
		{
		}
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (BitTest(Global_91193[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_749(var uParam0, int iParam1)//Position - 0x9195E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_113386.f_18533[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_751(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_97831[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_9 = 0f;
				Global_97831[iVar0 /*29*/].f_12 = 0f;
				Global_97831[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_10 = 0f;
				Global_97831[iVar0 /*29*/].f_13 = 0f;
				Global_97831[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_11 = 0f;
				Global_97831[iVar0 /*29*/].f_14 = 0f;
				Global_97831[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_26 = 0f;
				Global_97831[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_27 = 0f;
				Global_97831[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_97831[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

int func_751(int iParam0, var uParam1, float fParam2)//Position - 0x91B32
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		case 9:
			return func_751(8, uParam1, fParam2);
			break;
		case 10:
			return func_751(8, uParam1, fParam2);
			break;
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.3408f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		default:
			break;
	}
	return 0;
}

int func_755()//Position - 0x92614
{
	switch (iLocal_48)
	{
		case 1:
			if (bLocal_212)
			{
				sLocal_264 = "FBI1_fail_3";
				return 1;
			}
			break;
		case 2:
			break;
		case 3:
			if (!PED::IS_PED_INJURED(Local_69.f_0))
			{
				if (iLocal_246 >= 22)
				{
					if (__LIB_0__.func_479(&iLocal_223, 12000))
					{
						AUDIO::START_ALARM("FBI_01_MORGUE_ALARMS", true);
						sLocal_264 = "FBI1_fail_2";
						return 1;
					}
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 8:
			if (func_756(&Local_58))
			{
				sLocal_264 = "FBI1_fail_0";
				return 1;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_58.f_0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_58.f_0, true), true) < 45f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_58.f_0))
						{
							sLocal_264 = "FBI1_fail_1";
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_756(var uParam0)//Position - 0x9270B
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return PED::IS_PED_INJURED(*uParam0);
	}
	return 0;
}

void func_757()//Position - 0x92728
{
	int iVar0;
	__LIB_11__.func_172();
	__LIB_0__.func_54(0, 1);
	__LIB_0__.func_320(PLAYER::PLAYER_PED_ID(), -1);
	__LIB_18__.func_191(69, 0, 1, 1, 0);
	func_809();
	func_808();
	TASK::ADD_COVER_POINT(267.63803f, -1350.0575f, 23.53772f, 139.1686f, 0, 2, 0, false);
	TASK::ADD_COVER_POINT(281.0947f, -1344.6136f, 23.53772f, 49.3918f, 1, 2, 0, true);
	TASK::ADD_COVER_POINT(245.97498f, -1367.5101f, 23.53797f, 137.184f, 0, 2, 0, false);
	TASK::ADD_COVER_POINT(242.58643f, -1364.728f, 23.53797f, 137.2854f, 1, 2, 0, false);
	TASK::ADD_COVER_POINT(247.167f, -1366.8942f, 38.53422f, 139.2864f, 0, 2, 0, false);
	TASK::ADD_COVER_POINT(237.57045f, -1357.6569f, 38.53421f, 230.8f, 0, 2, 0, false);
	TASK::ADD_COVER_POINT(236.4078f, -1359.0978f, 38.53421f, 230.807f, 1, 2, 0, false);
	TASK::ADD_COVER_POINT(234.05081f, -1361.9021f, 38.53421f, 230.8812f, 0, 2, 0, false);
	iLocal_454[0] = TASK::ADD_COVER_POINT(272.05145f, -1344.0984f, 23.53782f, 232.8f, 1, 2, 0, false);
	iLocal_454[3] = TASK::ADD_COVER_POINT(258.43f, -1355.88f, 23.54f, 324.4275f, 0, 0, 0, false);
	iLocal_454[4] = TASK::ADD_COVER_POINT(262.6538f, -1358.8201f, 23.53772f, 49.0454f, 0, 0, 0, false);
	iLocal_454[6] = TASK::ADD_COVER_POINT(258.29f, -1361.33f, 23.54f, 315.0264f, 1, 2, 0, false);
	iLocal_454[16] = TASK::ADD_COVER_POINT(280.02f, -1344.69f, 23.54f, 322.6696f, 0, 2, 0, false);
	iLocal_454[4] = TASK::ADD_COVER_POINT(260.62198f, -1352.676f, 23.53772f, 322.8431f, 0, 2, 0, false);
	iLocal_455[0] = TASK::ADD_COVER_POINT(242.27132f, -1367.464f, 38.53431f, 234.1995f, 1, 2, 0, false);
	iLocal_455[2] = TASK::ADD_COVER_POINT(239.4913f, -1379.2358f, 38.53422f, 0f, 2, 0, 0, false);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	Local_157.f_23 = 0;
	func_387();
	func_386();
	if (__LIB_0__.func_294())
	{
		iLocal_465 = 1;
		if (!Global_94618)
		{
			switch (__LIB_0__.func_315())
			{
				case 0:
					func_806();
					break;
				case 1:
					func_349();
					break;
				case 2:
					func_348();
					break;
				case 3:
					func_339();
					break;
				case 4:
					func_128();
					break;
			}
		}
		else
		{
			iVar0 = __LIB_0__.func_315() + 1;
			switch (iVar0)
			{
				case 1:
					func_349();
					break;
				case 2:
					func_348();
					break;
				case 3:
					func_339();
					break;
				case 4:
					func_128();
					break;
				case 5:
					func_2();
					break;
				}
		}
		iLocal_465 = 0;
	}
	else
	{
		__LIB_26__.func_549(PLAYER::PLAYER_PED_ID());
		if (!__LIB_0__.func_2(0))
		{
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
		else
		{
			func_758();
		}
	}
}

void func_758()//Position - 0x92A50
{
	STREAMING::REQUEST_MODEL(__LIB_19__.func_811(0));
	while (!STREAMING::HAS_MODEL_LOADED(__LIB_19__.func_811(0)))
	{
		SYSTEM::WAIT(0);
	}
	func_759(0, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -444.1117f, 1060.1145f, 326.6852f, true, false, false, true);
	CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fbi_1_int", 62, 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("michael", PLAYER::PLAYER_PED_ID(), 0);
		SYSTEM::WAIT(0);
	}
	CUTSCENE::START_CUTSCENE(0);
	CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	__LIB_32__.func_796(-411.094f, 1180.761f, 324.342f, -414.034f, 1171.203f, 330.642f, 13f, -410.9237f, 1174.479f, 324.6415f, 253.2136f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	func_3(-410.9237f, 1174.479f, 324.6415f, 253.2136f, 1);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
	iLocal_224 = 1;
	CAM::DO_SCREEN_FADE_IN(800);
	__LIB_42__.func_872(0, "Start of mission", 0, 0, 0, 1);
}

int func_759(int iParam0, bool bParam1)//Position - 0x92B7B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__.func_388(iParam0);
	iVar1 = __LIB_19__.func_811(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_803(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_469(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_41__.func_661(&Global_22965, 0, 0, 0);
	__LIB_6__.func_846(iParam0);
	return 1;
}

int func_803(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9845B
{
	int iVar0;
	if (__LIB_0__.func_317(iParam1))
	{
		iVar0 = __LIB_19__.func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_32__.func_735(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_654(*iParam0);
				__LIB_32__.func_730(*iParam0, 1, 0);
				__LIB_20__.func_721(*iParam0);
				__LIB_20__.func_720(*iParam0);
				func_471(*iParam0, bParam6);
				__LIB_0__.func_349(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_806()//Position - 0x98598
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), true);
	__LIB_9__.func_485(4, 1);
	func_377();
}

void func_808()//Position - 0x985DD
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_466);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_467);
}

void func_809()//Position - 0x985FF
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	__LIB_0__.func_203(&uLocal_265, __LIB_9__.func_612("0"), PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	HUD::REQUEST_ADDITIONAL_TEXT("fbi1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("fbi1aud", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_813()//Position - 0x986E8
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	else
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	CUTSCENE::REMOVE_CUTSCENE();
	__LIB_0__.func_54(1, 1);
	__LIB_0__.func_296();
	__LIB_18__.func_191(69, 0, 1, 1, 0);
	if (!iLocal_220)
	{
		__LIB_36__.func_65(PLAYER::PLAYER_PED_ID(), 0);
	}
	__LIB_9__.func_485(4, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	AUDIO::STOP_ALARM("FBI_01_MORGUE_ALARMS", false);
	AUDIO::TRIGGER_MUSIC_EVENT("FBI1_DEAD");
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::SET_AUDIO_SCRIPT_CLEANUP_TIME(5000);
	__LIB_8__.func_770(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
	__LIB_11__.func_144();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	func_814();
	func_817();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_814()//Position - 0x987E7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_259 - 1))
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_259[iVar0]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_259[iVar0], 0);
		}
		iVar0++;
	}
}

void func_817()//Position - 0x98873
{
	if (Local_157.f_23)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_157);
		ENTITY::REMOVE_MODEL_SWAP(236.03f, -1357.49f, 40.45f, 1f, joaat("v_ilev_cor_windowsolid"), joaat("v_ilev_cor_windowsmash"), false);
		Local_157.f_23 = 0;
	}
}

void func_818()//Position - 0x988AF
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_748(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_546();
		}
	}
}

