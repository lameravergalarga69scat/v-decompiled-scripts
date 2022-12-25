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
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	char* sLocal_47 = NULL;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = 0;
	int iLocal_72[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_73 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char[] cLocal_229[8] = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	bool bLocal_233 = 0;
	int iLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	bool bLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	struct<6> Local_246[19];
	struct<4> Local_247[5];
	struct<10> Local_248[33];
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	struct<6> Local_251[34];
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	struct<9> Local_254[10];
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	float fLocal_258 = 0f;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	struct<10> Local_267[11];
	int iLocal_268[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269[4] = { 0, 0, 0, 0 };
	int iLocal_270 = 0;
	struct<24> Local_271[11];
	struct<3> Local_272 = { 0, 0, 0 } ;
	struct<3> Local_273 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_275 = { 0, 0, 0 } ;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	struct<3> Local_278 = { 0, 0, 0 } ;
	struct<3> Local_279 = { 0, 0, 0 } ;
	struct<3> Local_280 = { 0, 0, 0 } ;
	struct<3> Local_281 = { 0, 0, 0 } ;
	struct<3> Local_282[44];
	int iLocal_283 = 0;
	int iLocal_284[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	struct<17> Local_297[5];
	struct<5> Local_298 = { 0, 0, 0, 0, 0 } ;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 21;
	var uLocal_302 = 6;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 16;
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
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	char[] cLocal_471[8] = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	struct<3> Local_474[4];
	int iLocal_475 = 0;
	char cLocal_476[24] = "";
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	char cLocal_480[24] = "";
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	struct<3> Local_484 = { 0, 0, 0 } ;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	struct<7> Local_493 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_494 = 1092616192;
	var uLocal_495 = 1101004800;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 3;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	struct<3> Local_515 = { 0, 0, 0 } ;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	struct<3> Local_522 = { 0, 0, 0 } ;
	struct<3> Local_523 = { 0, 0, 0 } ;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	char* sLocal_527 = NULL;
	char* sLocal_528 = NULL;
	int iLocal_529[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_530 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_57 = -1;
	iLocal_58 = -1;
	bLocal_71 = true;
	iLocal_238 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_239 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_289 = 20f;
	fLocal_290 = 120f;
	cLocal_471 = "TRV3AUD";
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_630();
		func_629(1);
	}
	while (true)
	{
		func_628();
		func_627();
		func_145();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("m_trevor3", 0);
		switch (iLocal_256)
		{
			case 4:
			case 5:
				func_100(&Local_271, &Local_282, Local_275, Local_276, Local_277, Local_278, Local_274, Local_281, Local_272, Local_273, Local_279, Local_280);
				break;
			case 7:
				if (!func_99(3, 68))
				{
					func_100(&Local_271, &Local_282, Local_275, Local_276, Local_277, Local_278, Local_274, Local_281, Local_272, Local_273, Local_279, Local_280);
				}
				break;
		}
		if (iLocal_252 == 1)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_252 = 0;
				PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 4096);
			}
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x19D
{
	int iVar0;
	switch (iLocal_530)
	{
		case 0:
			if (iLocal_256 >= 4)
			{
				__LIB_43__::func_924(1, "Destroy trailers", 0, 0, 0, 1);
				iLocal_530++;
			}
			break;
		case 1:
			if (iLocal_256 > 5)
			{
				__LIB_43__::func_924(2, "TRailers Destroyed", 0, 0, 0, 1);
				Global_96878 = 0;
				iVar0 = 0;
				while (iVar0 < Local_267.f_0)
				{
					if (!func_3(Local_267[iVar0 /*10*/]))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_267[iVar0 /*10*/]) != iLocal_288)
						{
							Global_96878++;
						}
					}
					iVar0++;
				}
				iLocal_530++;
			}
			break;
		case 2:
			if (iLocal_256 > 7)
			{
				__LIB_43__::func_924(3, "Drive to Los Santos", 0, 0, 0, 1);
				iLocal_530++;
			}
			if (iLocal_530 == 2)
			{
				if (iLocal_256 == 7)
				{
					if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) < 5f)
						{
							__LIB_43__::func_924(3, "Drive to Los Santos", 0, 0, 0, 1);
							iLocal_530++;
						}
					}
				}
			}
			break;
		case 3:
			if (iLocal_256 >= 9)
			{
				__LIB_43__::func_924(4, "Drive to Wade's cousin", 1, 0, 0, 1);
				iLocal_530++;
			}
			break;
	}
}

int func_3(int iParam0)//Position - 0x325
{
	if (PED::IS_PED_INJURED(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0, int iParam1)//Position - 0x917B
{
	if (Local_248[iParam0 /*10*/] == iParam1)
	{
		if (Local_248[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_100(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8, struct<3> Param9, struct<3> Param10, struct<3> Param11)//Position - 0x91A1
{
	if (iLocal_48 > 0)
	{
		func_143(uParam0, Param8, Param9, Param6, Param7);
		func_129(uParam0, uParam1, Param2, Param3, Param4);
		func_101(uParam0, Param5, Param6, Param7, Param8, Param9, Param10, Param11);
	}
}

void func_101(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)//Position - 0x91FB
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if (bLocal_71)
		{
			if (((iLocal_56 > iLocal_64 || iLocal_65 != iLocal_57) || (iLocal_56 < iLocal_64 && iLocal_56 == 8)) || (iLocal_56 == 10 && bLocal_49 == 0))
			{
				iLocal_63 = 1;
				iLocal_64 = iLocal_56;
				iLocal_65 = iLocal_57;
			}
			switch (iLocal_63)
			{
				case 1:
					if (iLocal_57 > -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_57 /*24*/], true))
						{
							switch (iLocal_56)
							{
								case 8:
									if (!bLocal_49)
									{
										if (!bLocal_52)
										{
											if (!iLocal_70)
											{
												if (!__LIB_15__::func_965(Param5.f_1))
												{
													__LIB_0__::func_429();
													if (func_103(Param5.f_1, Param5.f_2, (*uParam0)[iLocal_57 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_63 = 2;
													}
												}
											}
											else
											{
												iLocal_63 = 2;
											}
										}
										else if (!__LIB_15__::func_965(Param4.f_1))
										{
											__LIB_0__::func_429();
											if (func_103(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_57 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_63 = 2;
											}
										}
									}
									else
									{
										iLocal_63 = 2;
									}
									break;
								case 7:
									iLocal_70 = 0;
									__LIB_0__::func_429();
									if (func_103(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_57 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_63 = 2;
									}
									break;
								case 5:
									iLocal_70 = 0;
									__LIB_0__::func_429();
									if (func_103(Param6.f_1, Param6.f_2, (*uParam0)[iLocal_57 /*24*/], Param6.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_63 = 2;
									}
									break;
								case 3:
									if (!bLocal_49 && !iLocal_70)
									{
										__LIB_0__::func_429();
										if (func_103(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_57 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_63 = 2;
										}
									}
									else
									{
										iLocal_63 = 2;
									}
									break;
								case 6:
									if (!bLocal_52)
									{
										if (((!__LIB_15__::func_965(Param2.f_1) && !__LIB_15__::func_965(Param3.f_1)) && !__LIB_15__::func_965(Param4.f_1)) && !__LIB_15__::func_965(Param5.f_1))
										{
											iLocal_70 = 0;
											__LIB_0__::func_429();
											if (func_103(Param2.f_1, Param2.f_2, (*uParam0)[iLocal_57 /*24*/], Param2.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_63 = 2;
											}
										}
									}
									else
									{
										iLocal_63 = 2;
									}
									break;
								case 10:
								case 9:
									if (!bLocal_52)
									{
										if (((!__LIB_15__::func_965(Param2.f_1) && !__LIB_15__::func_965(Param3.f_1)) && !__LIB_15__::func_965(Param4.f_1)) && !__LIB_15__::func_965(Param5.f_1))
										{
											iLocal_70 = 0;
											__LIB_0__::func_429();
											if (func_103(Param3.f_1, Param3.f_2, (*uParam0)[iLocal_57 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_63 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_49)
										{
											if (func_103(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_57 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_70 = 0;
												iLocal_63 = 2;
											}
										}
										iLocal_63 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_63 = 2;
						}
					}
					else
					{
						iLocal_63 = 2;
					}
					break;
				case 2:
					if (!__LIB_0__::func_75())
					{
						iLocal_63 = 0;
					}
					break;
				}
			}
	}
}

int func_103(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x952A
{
	func_124(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_121(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_121(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_121(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_121(iParam10, iParam11, sParam12);
	}
	if (!__LIB_3__::func_63())
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_16__::func_7(&Local_73, cLocal_229, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_231 = 0;
				return 1;
			}
			else if (iLocal_230 != MISC::GET_GAME_TIMER())
			{
				iLocal_231++;
				iLocal_230 = MISC::GET_GAME_TIMER();
				if (iLocal_231 >= 10)
				{
					iLocal_231 = 0;
					return 1;
				}
			}
		}
		else
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

void func_121(int iParam0, int iParam1, char* sParam2)//Position - 0x9DA2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		if (iLocal_72[iVar0] == iParam1)
		{
			__LIB_0__::func_221(&Local_73, iVar0);
			iLocal_72[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_72[iParam0] != 0)
	{
		__LIB_0__::func_221(&Local_73, iParam0);
	}
	__LIB_0__::func_222(&Local_73, iParam0, iParam1, sParam2, 0, 1);
	iLocal_72[iParam0] = iParam1;
}

void func_124(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x9EB7
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_47) || !MISC::ARE_STRINGS_EQUAL(sLocal_47, sParam0))
	{
		sLocal_47 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_73[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					__LIB_0__::func_221(&Local_73, iVar0);
				}
			}
			iVar0++;
		}
	}
}

void func_129(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0x9F9C
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true) && !PED::IS_PED_BEING_STEALTH_KILLED((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
							if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
									{
										PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									}
									if (!PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											iVar2 = PED::GET_VEHICLE_PED_IS_USING((*uParam0)[iVar0 /*24*/]);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar2))
												{
													Var3 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar2);
													ENTITY::SET_ENTITY_VELOCITY(iVar2, Var3);
													TASK::TASK_LEAVE_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = __LIB_16__::func_325((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														case 1:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_140();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_139(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 2:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_140();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_139(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 3:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_140();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_139(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 4:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_140();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_139(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_59;
														iLocal_59++;
														if (iLocal_59 == 2)
														{
															iLocal_59 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
															func_140();
															if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
															{
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_139(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 3000;
															break;
														case 1:
															func_140();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															iVar4 = __LIB_40__::func_501();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_139(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + iVar4);
															break;
														default:
															if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	ENTITY::SET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_60;
														iLocal_60++;
														if (iLocal_60 == 2)
														{
															iLocal_60 = 0;
														}
													}
													if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0f, false, false, false);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															case 1:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0f, false, false, false);
																WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															case 3:
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (__LIB_40__::func_509(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (__LIB_40__::func_509(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															case 4:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															case 5:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															case 6:
																if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												case 1:
													iLocal_58 = iVar0;
													if (func_131(iVar0, uParam0, "", Param2, Param3, Param4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_61 == 0)
															{
																if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
																{
																	Var5 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
																	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
																	fVar7 = MISC::ATAN(((Var6.f_2 - Var5.f_2) / __LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_61++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														case 1:
															func_140();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_139(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 2:
															func_140();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_139(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 3:
															func_140();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_139(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 4:
															if (bLocal_52)
															{
																if (MISC::ABSF(__LIB_16__::func_325((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID())) < 20f)
																{
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > __LIB_40__::func_500(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > __LIB_40__::func_500(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > __LIB_40__::func_500(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 2000;
											TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
											PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								case 2:
									if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					case 5:
					case 6:
						if (PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_ANY_SCENARIO((*uParam0)[iVar0 /*24*/]))
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], false);
									PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 50, true);
									PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_62 = iLocal_62;
										uLocal_66 = uLocal_66;
										TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_131(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, bool bParam6)//Position - 0xB0CC
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if (__LIB_0__::func_75())
				{
					if (!__LIB_15__::func_965(Param3.f_1))
					{
						__LIB_0__::func_638();
					}
				}
				if (func_103(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		case 2:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if ((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iParam0 /*24*/]) || iLocal_69 == 1) && __LIB_0__::func_724((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (MISC::GET_GAME_TIMER() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 0.1f, 0, 40000f);
						(uParam1[iParam0 /*24*/])->f_15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_103(Param5.f_1, Param5.f_2, (*uParam1)[iParam0 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_ACHIEVE_HEADING((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		case 3:
			func_140();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_139(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1) && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) == 7))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam2, ""))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE((*uParam1)[iParam0 /*24*/], sParam2, 0, true);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_58 = -1;
			}
			break;
		case 5:
			if (func_103(Param3.f_1, Param4.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		case 6:
			if (__LIB_0__::func_724((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
			{
				if (!PED::IS_PED_INJURED((*uParam1)[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iParam0 /*24*/]);
					func_140();
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_139(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

void func_139(var uParam0, bool bParam1)//Position - 0xB919
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_232, true);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_232);
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_232);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_232);
}

void func_140()//Position - 0xB94E
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_232);
}

void func_143(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)//Position - 0xB9C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	if (!bLocal_49 == 1)
	{
		bLocal_233 = false;
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_234 == 0)
			{
				iLocal_234 = iVar1;
			}
			if (iVar1 < iLocal_234)
			{
				iLocal_234 = iVar1;
				bLocal_233 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_54 /*24*/], true))
			{
				if ((uParam0[iLocal_54 /*24*/])->f_3 > 3 && (uParam0[iLocal_54 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
						{
							if (iVar0 != iLocal_54)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_54 /*24*/], 1) < 8f)
									{
										if ((INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_54 /*24*/]) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) != 0) || (INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_54 /*24*/]) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
											Var4 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iLocal_54 /*24*/], false) };
											if (MISC::ABSF((Var3.f_2 - Var4.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_54;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_54 /*24*/])->f_22 = -1;
					(uParam0[iLocal_54 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_54)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = __LIB_0__::func_76((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_54 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = __LIB_16__::func_325((*uParam0)[iLocal_54 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_54 /*24*/])->f_23 = (uParam0[iLocal_54 /*24*/])->f_22;
											(uParam0[iLocal_54 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_54 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_54++;
			if (iLocal_54 >= *uParam0)
			{
				iLocal_54 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_67, fLocal_68))
	{
		bLocal_50 = true;
	}
	if (!iLocal_51)
	{
		if (__LIB_15__::func_965(Param1.f_1) || __LIB_15__::func_965(Param3.f_1))
		{
			iLocal_55 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_51 = 1;
		}
		if (__LIB_15__::func_965(Param5.f_1) || __LIB_15__::func_965(Param7.f_1))
		{
			iLocal_55 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_51 = 1;
		}
	}
	else if (((!__LIB_15__::func_965(Param1.f_1) && !__LIB_15__::func_965(Param3.f_1)) && !__LIB_15__::func_965(Param5.f_1)) && !__LIB_15__::func_965(Param7.f_1))
	{
		iLocal_51 = 0;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_55)
	{
		if (__LIB_15__::func_965(Param1.f_1) || __LIB_15__::func_965(Param3.f_1))
		{
			bLocal_49 = true;
		}
		if (__LIB_15__::func_965(Param5.f_1) || __LIB_15__::func_965(Param7.f_1))
		{
			bLocal_52 = true;
		}
	}
	iLocal_56 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_53 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar13 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_58 == -1)
	{
		iLocal_69 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_58 == -1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13))
							{
								iLocal_69 = 1;
								fVar12 = 20f;
							}
							if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar13))
							{
								iLocal_69 = 1;
								fVar12 = 50f;
							}
						}
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam0)[iVar0 /*24*/]) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false) && VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13)))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_50)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_49)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_233)
					{
					}
					if (!bLocal_233 && !PED::IS_PED_RAGDOLL((*uParam0)[iVar0 /*24*/]))
					{
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 4f, true, true))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 6f, true, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 1f, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 1) || PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)) || (PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0) && PED::CAN_PED_IN_COMBAT_SEE_TARGET((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID()))) || (__LIB_40__::func_502((*uParam0)[iVar0 /*24*/]) && PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_52)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_56)
				{
					iLocal_56 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_57 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_53 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_58 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_58 = iVar11;
			}
		}
	}
	else if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_58 /*24*/], true))
	{
		iLocal_58 = -1;
	}
}

void func_145()//Position - 0xC2BC
{
	switch (iLocal_256)
	{
		case 0:
			if (func_497())
			{
				func_492(14);
			}
			break;
		case 1:
			if (func_491())
			{
				func_492(14);
			}
			break;
		case 2:
			if (func_489())
			{
				func_492(14);
			}
			break;
		case 3:
			if (func_487())
			{
				func_492(14);
			}
			break;
		case 4:
			if (func_486(&bLocal_255))
			{
				if (bLocal_255)
				{
					func_492(14);
				}
				else
				{
					func_492(7);
				}
			}
			break;
		case 5:
			if (func_484())
			{
				func_492(7);
			}
			break;
		case 7:
			if (func_392())
			{
				func_492(10);
			}
			break;
		case 8:
			if (func_392())
			{
				func_492(10);
			}
			break;
		case 9:
			if (func_392())
			{
				func_492(10);
			}
			break;
		case 10:
			if (func_391())
			{
				func_492(14);
			}
			break;
		case 11:
			if (func_151())
			{
				func_492(14);
			}
			break;
		case 12:
			func_146();
			break;
	}
}

void func_146()//Position - 0xC3DB
{
	__LIB_0__::func_526(0, 0);
	func_629(0);
}

int func_151()//Position - 0xC556
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_152(0, 91, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 92, 0, 0, 0, 1, 0, 1, 0);
	func_152(4, 96, 0, 0, 0, 1, 0, 1, 0);
	if (func_99(0, 91) || func_99(4, 96))
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		func_146();
	}
	return 0;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xC5AF
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	struct<3> Var18;
	float fVar19;
	struct<3> Var20;
	float fVar21;
	float fVar22;
	if (Local_248[iParam0 /*10*/] != iParam1 || Local_248[iParam0 /*10*/].f_1 == 0)
	{
		Local_248[iParam0 /*10*/] = iParam1;
		Local_248[iParam0 /*10*/].f_1 = 1;
		Local_248[iParam0 /*10*/].f_2 = 0;
		Local_248[iParam0 /*10*/].f_3 = 0;
		Local_248[iParam0 /*10*/].f_6 = 0;
		Local_248[iParam0 /*10*/].f_4 = 0;
		Local_248[iParam0 /*10*/].f_7 = 0;
		Local_248[iParam0 /*10*/].f_8 = 0;
		Local_248[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_248[iParam0 /*10*/].f_3)
	{
		return 1;
	}
	if (Local_248[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_387(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, 1, 0, 1, 0);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_248[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_248[iParam0 /*10*/].f_3 == 0 || Local_248[iParam0 /*10*/].f_6 == 99)
	{
		if (bVar0 == 1)
		{
			if (!Local_248[iParam0 /*10*/].f_2)
			{
				Local_248[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_248[iParam0 /*10*/])
			{
				case 1:
					CUTSCENE::REQUEST_CUTSCENE("trevor_drive_int", 8);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 2:
					__LIB_15__::func_789(52, 6);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						if (!func_3(Global_96938.f_9[0]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Global_96938.f_9[0], 0);
						}
					}
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							if (__LIB_0__::func_90())
							{
								__LIB_0__::func_468(64);
								if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
								{
									if (!func_3(Global_96938.f_9[0]))
									{
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_9[0], "Wade", 0, __LIB_15__::func_957(24), 0);
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
										Local_267[10 /*10*/] = Global_96938.f_9[0];
									}
								}
								else
								{
									CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_267[10 /*10*/], "Wade", 2, __LIB_15__::func_957(24), 0);
								}
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
								__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
								CUTSCENE::START_CUTSCENE(0);
								RECORDING::REPLAY_START_EVENT(4);
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(1000);
							}
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 2:
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
								func_365(3, 1);
								RECORDING::REPLAY_STOP_EVENT();
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 3:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							__LIB_16__::func_937(1970.2734f, 3810.5825f, 30.559752f, 1982.7518f, 3817.504f, 34.61814f, 6.925f, 1983.947f, 3823.9656f, 31.3549f, 25.7606f, 10f, 10f, 9f, 1, 1, 1, 0, 0);
							__LIB_16__::func_937(1970.0692f, 3813.558f, 30.769392f, 1971.1711f, 3811.6204f, 33.250465f, 1f, 1965.8198f, 3797.846f, 31.2019f, 123.9023f, 7f, 20f, 15f, 1, 1, 1, 0, 0);
							MISC::CLEAR_AREA(1970.7434f, 3812.1272f, 31.3808f, 1f, true, false, false, false);
							MISC::CLEAR_AREA_OF_PEDS(1985.7507f, 3825.215f, 31.339054f, 15.8f, 0);
							iLocal_268[0] = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
							{
								if (__LIB_40__::func_503(iLocal_268[0]))
								{
									if (__LIB_0__::func_724(iLocal_268[0], 1985.8885f, 3813.372f, 31.1577f, 1) > 30f)
									{
										iLocal_268[0] = 0;
									}
								}
							}
							iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uLocal_264);
							iVar2 = 0;
							while (iVar2 <= (iVar1 - 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_264[iVar2]))
								{
									if (__LIB_40__::func_503(uLocal_264[iVar2]))
									{
										fVar3 = __LIB_0__::func_724(uLocal_264[iVar2], 1982.7443f, 3821.2297f, 31.4748f, 1);
										if (fVar3 < 20f)
										{
											if (ENTITY::GET_ENTITY_SPEED(uLocal_264[iVar2]) < 0.5f)
											{
												Local_248[iParam0 /*10*/].f_3 = 1;
											}
										}
									}
								}
								iVar2++;
							}
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							STREAMING::REQUEST_MODEL(joaat("blazer"));
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 2:
							if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
							{
								iVar4 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 1987.1693f, 3825.6538f, 31.4259f, 25f, true, true, false);
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 4:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_267[10 /*10*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0)))
						{
							Local_267[10 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0));
							func_357();
						}
					}
					break;
				case 5:
					if (!func_3(Local_267[10 /*10*/]))
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 0:
								PED::SET_PED_RESET_FLAG(Local_267[10 /*10*/], 190, true);
								Local_248[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false))
								{
									PED::SET_PED_RESET_FLAG(Local_267[10 /*10*/], 190, false);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				case 6:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (__LIB_2__::func_837(PLAYER::PLAYER_PED_ID(), iVar5) == -1)
						{
							if (iVar5 != iLocal_268[0])
							{
								if (__LIB_40__::func_503(iLocal_268[9]))
								{
									if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_268[9], true))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[9]));
									}
								}
								iLocal_268[9] = iLocal_268[0];
								iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_268[0], true))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[0], true, true);
								}
							}
						}
					}
					if (__LIB_40__::func_503(iLocal_268[9]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_268[9], 1) > 60f)
						{
							if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_268[9], true))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[9]));
								iLocal_268[9] = 0;
							}
						}
					}
					break;
				case 7:
					if (!func_3(Local_267[10 /*10*/]))
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 0:
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
								Local_248[iParam0 /*10*/].f_6++;
								break;
							case 1:
								if (PED::IS_PED_IN_GROUP(Local_267[10 /*10*/]))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_267[10 /*10*/], 0);
									Local_248[iParam0 /*10*/].f_6++;
								}
								break;
							case 2:
								if (!PED::IS_PED_IN_GROUP(Local_267[10 /*10*/]))
								{
									Local_248[iParam0 /*10*/].f_6 = 1;
								}
								break;
							}
					}
					break;
				case 8:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 30f);
							Local_248[iParam0 /*10*/].f_6++;
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 30000;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 40f);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 9:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38f, 3694f, 61f) - Vector(130f, 130f, 130f), Vector(38f, 3694f, 61f) + Vector(130f, 130f, 130f), false, true, true, true);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
							PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
							MISC::CLEAR_AREA(61f, 3694f, 38f, 130f, true, false, false, false);
							VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.7275f, 36.7299f, 105.6982f, 3747.7275f, 40.7299f, false, true);
							VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), false, true);
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(41.2529f, 3709.4043f, 38.7345f, 100f, 0);
							PATHFIND::SET_ROADS_IN_ANGLED_AREA(53.943714f, 3620.4744f, 28.627594f, 64.89907f, 3764.617f, 50.328354f, 106.5f, false, false, true);
							STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
								Local_248[iParam0 /*10*/].f_6 = 101;
							}
							break;
						case 101:
							if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02")))
							{
								STREAMING::REQUEST_MODEL(joaat("dloader"));
								Local_248[iParam0 /*10*/].f_6 = 102;
							}
							break;
						case 102:
							if (STREAMING::HAS_MODEL_LOADED(joaat("dloader")))
							{
								STREAMING::REQUEST_MODEL(joaat("hexer"));
								Local_248[iParam0 /*10*/].f_6 = 2;
							}
							break;
						case 2:
							if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
							{
								STREAMING::REQUEST_MODEL(joaat("prop_coffin_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 3:
							if (STREAMING::HAS_MODEL_LOADED(joaat("prop_coffin_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
							{
								Local_248[iParam0 /*10*/].f_6++;
								STREAMING::REQUEST_PTFX_ASSET();
								STREAMING::REQUEST_ANIM_DICT("misstrevor3");
							}
							break;
						case 4:
							if (STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3"))
							{
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("misstrevor3_beatup");
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 5:
							if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3_beatup"))
							{
								Local_248[iParam0 /*10*/].f_6++;
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
							}
							break;
						case 6:
							if (STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left"))
							{
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 7:
							if (STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward"))
							{
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 8:
							iLocal_268[6] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 43.4235f, 3653.8823f, 38.7234f, 0.5785f, true, true, false);
							iLocal_268[7] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 42.7094f, 3659.628f, 38.8113f, 235.4671f, true, true, false);
							func_355(4, 10, 0, 0);
							func_354(4, 10, 0);
							Local_248[iParam0 /*10*/].f_3 = 1;
							break;
					}
					break;
				case 10:
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
					STREAMING::REMOVE_ANIM_DICT("misstrevor3");
					STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
					STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
					STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
					STREAMING::REMOVE_PTFX_ASSET();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_268[6]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_268[7]));
					}
					func_355(3, 9, 0, 0);
					func_354(3, 9, 0);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 11:
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					break;
				case 14:
					func_353(4, 3);
					func_353(3, 6);
					__LIB_0__::func_638();
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 12:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 13:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_6++;
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								MISC::FORCE_LIGHTNING_FLASH();
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 16:
					if (!iLocal_253)
					{
						iVar7 = 0;
						while (iVar7 < Local_267.f_0)
						{
							if (!func_3(Local_267[iVar7 /*10*/]))
							{
								if (iVar7 != 10 && iVar7 != 7)
								{
									iVar6++;
								}
							}
							iVar7++;
						}
						if (iVar6 > 2)
						{
							if (AUDIO::LOAD_STREAM("TREVOR3_FIGHT_COMMOTION_MASTER", 0))
							{
								iLocal_253 = 1;
								AUDIO::PLAY_STREAM_FROM_POSITION(70.2011f, 3712.8398f, 40.5056f);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
				case 17:
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 61:
					MISC::SET_INSTANCE_PRIORITY_HINT(1);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 15:
					if (!func_3(Local_267[1 /*10*/]) || !ENTITY::DOES_ENTITY_EXIST(Local_267[1 /*10*/]))
					{
						if (((Local_271[1 /*24*/].f_3 <= 3 && !func_3(Local_267[1 /*10*/])) && !PED::IS_PED_IN_COMBAT(Local_267[1 /*10*/], 0)) || !ENTITY::DOES_ENTITY_EXIST(Local_267[1 /*10*/]))
						{
							switch (Local_248[iParam0 /*10*/].f_6)
							{
								case 0:
									if (!ENTITY::DOES_ENTITY_EXIST(Local_267[1 /*10*/]))
									{
										func_351(1, joaat("G_M_Y_Lost_02"), joaat("WEAPON_PUMPSHOTGUN"), 59.1969f, 3635.664f, 38.7018f, 105.727f);
										func_350(&Local_271, 1, Local_267[1 /*10*/], 1, 0, 0);
										iLocal_257 = func_349(Local_267[1 /*10*/], &Local_271);
										iLocal_268[8] = VEHICLE::CREATE_VEHICLE(joaat("dloader"), 58.083f, 3638.1704f, 38.4957f, 205.5108f, true, true, false);
										VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_268[8], 4, false, false);
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DAMAGED_TRUCK_IDLE", iLocal_268[8], 0, false, 0);
										Local_248[iParam0 /*10*/].f_6++;
									}
									else
									{
										Local_248[iParam0 /*10*/].f_6++;
									}
									break;
								case 1:
								case 2:
									if (Local_248[iParam0 /*10*/].f_6 == 1)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[8], false))
										{
											if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_268[8], 4) > 0.9f)
											{
												VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_268[8], 0f);
												Local_248[iParam0 /*10*/].f_6++;
											}
											else
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_268[8], 4, false, false);
											}
										}
									}
									if (Local_271[iLocal_257 /*24*/].f_3 == 3 || Local_271[iLocal_257 /*24*/].f_3 == 2)
									{
										Local_271[iLocal_257 /*24*/].f_3 = 3;
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_8) == 1f) || (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8)))
										{
											Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_267[1 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "brokendown_longlook", 1f, -4f, 1, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_7, true);
											Local_248[iParam0 /*10*/].f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
										}
									}
									break;
								default:
									if (Local_271[iLocal_257 /*24*/].f_3 == 3 || Local_271[iLocal_257 /*24*/].f_3 == 2)
									{
										Local_271[iLocal_257 /*24*/].f_3 = 3;
										if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_6)
										{
											Local_248[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_248[iParam0 /*10*/].f_8, true);
											if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[1 /*10*/], 1) > 10f)
											{
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_267[1 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_wrongwithyou", 1f, -4f, 1, 0, 1f, 0);
												}
												else
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_267[1 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_suchabitch", 1f, -4f, 1, 0, 1f, 0);
												}
											}
											else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_267[1 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3", "brokendown_wrongwithyou", 1f, -4f, 1, 0, 1f, 0);
											}
											else
											{
												Local_248[iParam0 /*10*/].f_6 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
											}
											Local_248[iParam0 /*10*/].f_6 = 2;
										}
									}
									break;
								}
							}
					}
					break;
				case 18:
					func_351(2, joaat("G_M_Y_Lost_01"), joaat("WEAPON_ASSAULTRIFLE"), 64.1751f, 3690.5498f, 38.7544f, 285f);
					func_350(&Local_271, 2, Local_267[2 /*10*/], 1, 0, 0);
					iLocal_291 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[2 /*10*/], iLocal_291, "misstrevor3", "horny_biker_loop", 1000f, -4f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_291, true);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 19:
					iLocal_268[2] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 51.6001f, 3701.1587f, 38.7542f, 331.9564f, true, true, false);
					iLocal_268[3] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 53.2583f, 3699.8926f, 39.2443f, 331.9564f, true, true, false);
					func_351(3, joaat("G_M_Y_Lost_01"), joaat("WEAPON_ASSAULTRIFLE"), 49.3678f, 3697.281f, 38.7542f, 277.198f);
					func_351(4, joaat("G_M_Y_Lost_02"), joaat("WEAPON_PUMPSHOTGUN"), 51.1357f, 3696.6035f, 38.7542f, 332.8487f);
					func_350(&Local_271, 3, Local_267[3 /*10*/], 0, 0, 1);
					func_350(&Local_271, 4, Local_267[4 /*10*/], 0, 0, 1);
					iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_293, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[3 /*10*/], iLocal_293, "misstrevor3", "bike_chat_b_loop_1", 1000f, -4f, 29, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[4 /*10*/], iLocal_293, "misstrevor3", "bike_chat_b_loop_2", 1000f, -4f, 29, 0, 1000f, 0);
					if (__LIB_40__::func_503(iLocal_268[2]))
					{
						func_348(iLocal_268[2], iLocal_293, "bike_chat_b_loop_bike_a", "misstrevor3", 1000f, -4f);
					}
					if (__LIB_40__::func_503(iLocal_268[3]))
					{
						func_348(iLocal_268[3], iLocal_293, "bike_chat_b_loop_bike_b", "misstrevor3", 1000f, -4f);
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 20:
					iLocal_268[4] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 88.463f, 3698.4883f, 38.6126f, 162.4861f, true, true, false);
					iLocal_268[5] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 91.437f, 3697.3845f, 38.7356f, 161.4624f, true, true, false);
					func_351(8, joaat("G_M_Y_Lost_01"), joaat("WEAPON_ASSAULTRIFLE"), 92.7466f, 3715.842f, 38.6797f, 32.199f);
					func_351(9, joaat("G_M_Y_Lost_02"), joaat("WEAPON_PUMPSHOTGUN"), 93.6988f, 3717.6482f, 38.6765f, 151.3154f);
					func_350(&Local_271, 8, Local_267[8 /*10*/], 0, 0, 1);
					func_350(&Local_271, 9, Local_267[9 /*10*/], 0, 0, 1);
					Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_7, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[8 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_a_1", 1000f, -4f, 9, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[9 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_a_2", 1000f, -4f, 9, 0, 1000f, 0);
					if (__LIB_40__::func_503(iLocal_268[4]))
					{
						func_348(iLocal_268[4], Local_248[iParam0 /*10*/].f_7, "bike_chat_a_bike_b", "misstrevor3", 1000f, -1000f);
					}
					if (__LIB_40__::func_503(iLocal_268[5]))
					{
						func_348(iLocal_268[5], Local_248[iParam0 /*10*/].f_7, "bike_chat_a_bike_a", "misstrevor3", 1000f, -1000f);
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 21:
					MISC::CLEAR_AREA(65.51f, 3744.23f, 38.83f, 3f, true, false, false, false);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.83f, 3744.23f, 65.51f) - Vector(2.5625f, 2f, 2f), Vector(38.83f, 3744.23f, 65.51f) + Vector(2.5625f, 2f, 2f), false, true);
					func_351(5, joaat("G_M_Y_Lost_01"), joaat("WEAPON_PUMPSHOTGUN"), 77.6549f, 3717.1753f, 38.7655f, 312.9244f);
					func_351(6, joaat("G_M_Y_Lost_01"), joaat("WEAPON_ASSAULTRIFLE"), 79.7052f, 3719.2146f, 38.7656f, 314.3887f);
					func_351(7, joaat("G_M_Y_Lost_02"), joaat("WEAPON_UNARMED"), 77.3499f, 3719.5664f, 38.7655f, 254.4565f);
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_267[7 /*10*/], true);
					func_350(&Local_271, 5, Local_267[5 /*10*/], 0, 0, 0);
					func_350(&Local_271, 6, Local_267[6 /*10*/], 0, 0, 0);
					Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[7 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_dockworker", 1000f, -4f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[5 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_guard1", 1000f, -4f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[6 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_startidle_guard2", 1000f, -4f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_7, true);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 22:
					func_351(0, joaat("G_M_Y_Lost_02"), joaat("WEAPON_ASSAULTRIFLE"), 101.0579f, 3745.6917f, 38.746f, 130.9023f);
					func_350(&Local_271, 0, Local_267[0 /*10*/], 1, 0, 0);
					iLocal_269[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 99.41f, 3744.35f, 40f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_269[0], 0f, 0f, -25.210142f, 2, true);
					iLocal_269[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 98.8646f, 3747.87f, 39.2f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_269[1], -0.65f, 0f, -0.75f, 2, true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_269[1], true);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_269[1], 0f, 0f, 0.1f);
					iLocal_269[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_coffin_01"), 99.5847f, 3749.75f, 39.2f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_269[2], 3.4f, -0.1f, -104.4f, 2, true);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_269[2], true);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_269[2], 0f, 0f, 0.1f);
					iLocal_269[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_beer_bot_01"), 99.5847f, 3749.75f, 41f, true, true, false);
					iLocal_292 = PED::CREATE_SYNCHRONIZED_SCENE(98.488f, 3742.822f, 39.538f, 0f, 0f, 153.25f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_267[0 /*10*/], iLocal_292, "misstrevor3", "biker_mourns", 1000f, -4f, 17, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_292, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_269[3], Local_267[0 /*10*/], PED::GET_PED_BONE_INDEX(Local_267[0 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_268[1] = VEHICLE::CREATE_VEHICLE(joaat("dloader"), 98.6982f, 3742.7275f, 38.7299f, 155.2052f, true, true, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_268[1], 2, true);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_268[1], 3, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_268[1], 5f);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_269[0], iLocal_268[1], 0, 0f, -1.793f, 0.703f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_268[1]);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_269[0]);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 23:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_8 = func_349(Local_267[0 /*10*/], &Local_271);
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292))
							{
								if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									iLocal_292 = PED::CREATE_SYNCHRONIZED_SCENE(98.488f, 3742.822f, 39.538f, 0f, 0f, 153.25f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_267[0 /*10*/], iLocal_292, "misstrevor3", "biker_mourns", 4f, -4f, 17, 0, 4f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_292, true);
									Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
								}
							}
							break;
					}
					break;
				case 24:
					break;
				case 25:
					__LIB_0__::func_630(516);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 26:
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false))
						{
							iVar8 = PED::GET_VEHICLE_PED_IS_IN(Local_267[10 /*10*/], false);
							if (__LIB_40__::func_503(iVar8))
							{
								if (FIRE::IS_ENTITY_ON_FIRE(iVar8))
								{
									func_140();
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 63.0295f, 3603.9556f, 38.821f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_COWER(0, -1);
									func_139(&(Local_267[10 /*10*/]), 0);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						else if (__LIB_0__::func_724(Local_267[10 /*10*/], 68.21001f, 3701.656f, 38.75489f, 1) < 79.5f)
						{
							func_140();
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 63.0295f, 3603.9556f, 38.821f, 2f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_COWER(0, -1);
							func_139(&(Local_267[10 /*10*/]), 0);
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
					}
					break;
				case 27:
					__LIB_0__::func_630(518);
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 28:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
							{
								Local_248[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"));
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
							{
								Local_248[iParam0 /*10*/].f_8 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"));
								if (Local_248[iParam0 /*10*/].f_8 < Local_248[iParam0 /*10*/].f_7)
								{
									Local_248[iParam0 /*10*/].f_7 = Local_248[iParam0 /*10*/].f_8;
									__LIB_0__::func_497(525, 1, 0);
								}
							}
							else
							{
								__LIB_0__::func_497(525, 1, 0);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 29:
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_267[10 /*10*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) == 7)
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) < 20f)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_267[10 /*10*/], PLAYER::PLAYER_PED_ID(), 3000, 2052, 2);
							}
						}
					}
					break;
				case 30:
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
					break;
				case 31:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::START_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (func_345(53))
							{
								AUDIO::START_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
								AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
								Local_248[iParam0 /*10*/].f_6++;
							}
							if (Local_248[iParam0 /*10*/].f_6 == 1)
							{
								if (func_345(67))
								{
									AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
						case 2:
							if (func_345(67))
							{
								AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 32:
					if (AUDIO::LOAD_STREAM("TREVOR3_BLOW_UP_TRAILERS_MASTER", 0))
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 33:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_7 = 0;
							while (Local_248[iParam0 /*10*/].f_7 < Local_267.f_0)
							{
								if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
								{
									Local_248[iParam0 /*10*/].f_9 = PED::GET_COMBAT_FLOAT(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 2);
									PED::SET_COMBAT_FLOAT(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 2, 1f);
								}
								Local_248[iParam0 /*10*/].f_7++;
							}
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								Local_248[iParam0 /*10*/].f_7 = 0;
								while (Local_248[iParam0 /*10*/].f_7 < Local_267.f_0)
								{
									if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
									{
										PED::SET_COMBAT_FLOAT(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 2, Local_248[iParam0 /*10*/].f_9);
									}
									Local_248[iParam0 /*10*/].f_7++;
								}
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 34:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::PREFETCH_SRL("TREV3_TRAILER_ARRIVAL_CUTSCENE");
							STREAMING::SET_SRL_READAHEAD_TIMES(8, 8, 8, 8);
							STREAMING::SET_SRL_FORCE_PRESTREAM(1);
							TASK::REQUEST_WAYPOINT_RECORDING("trev3_trL");
							TASK::REQUEST_WAYPOINT_RECORDING("trev3_trR");
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							STREAMING::BEGIN_SRL();
							Local_248[iParam0 /*10*/].f_3 = 1;
							break;
					}
					break;
				case 35:
					if (func_344(7))
					{
						Local_248[iParam0 /*10*/].f_2 = 0;
						STREAMING::END_SRL();
						func_354(20, 34, 0);
						Local_248[20 /*10*/].f_3 = 0;
						Local_248[iParam0 /*10*/].f_7 = 0;
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false))
						{
							iVar11 = ENTITY::GET_ENTITY_MODEL(iLocal_268[0]);
							if ((VEHICLE::IS_THIS_MODEL_A_HELI(iVar11) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar11)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar11))
							{
								iVar9 = 1;
							}
							else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
							{
								iVar9 = 1;
							}
						}
						else
						{
							iVar9 = 1;
						}
						if (iVar9 == 1)
						{
							if (Local_248[iParam0 /*10*/].f_7 == 0)
							{
								Local_248[iParam0 /*10*/].f_7 = 1;
								fVar12 = __LIB_6__::func_252(59.12711f, 3707.5361f, 38.75499f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1);
								if (fVar12 < 97f || fVar12 > 330f)
								{
									iLocal_261 = 2;
								}
								else if (fVar12 > 97f && fVar12 < 217f)
								{
									iLocal_261 = 0;
								}
								else
								{
									iLocal_261 = 1;
								}
								switch (iLocal_261)
								{
									case 0:
										iVar10 = 12000;
										break;
									case 1:
										iVar10 = 19000;
										break;
									case 2:
										iVar10 = 24000;
										break;
									}
							}
						}
						else
						{
							Local_248[iParam0 /*10*/].f_7 = 0;
							iLocal_261 = -1;
							if (__LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 59.2455f, 3609.4214f, 40.7427f, 1) > 180f)
							{
								iVar10 = 6000;
							}
							else
							{
								iVar10 = 0;
							}
						}
						SYSTEM::SETTIMERA(iVar10);
						STREAMING::SET_SRL_TIME((IntToFloat(iVar10) * 1f));
					}
					break;
				case 36:
					fVar13 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 59.2455f, 3609.4214f, 40.7427f, 1);
					if (fVar13 < 1100f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar16 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar16, false))
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar16)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar16)))
								{
									fVar14 = (1100f - fVar13);
									if (fVar14 < 0f)
									{
										fVar14 = 0f;
									}
									fVar14 = (fVar14 / 1100f);
									fVar14 = (fVar14 * 10000f);
									fVar15 = ENTITY::GET_ENTITY_SPEED(iVar16);
									fVar14 = (fVar14 * (fVar15 / 50f));
									if (fVar15 > 50f)
									{
										ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar16, 1, 0f, -fVar14, 0f, false, true, false, false);
									}
								}
							}
						}
					}
					break;
				case 38:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1500;
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 37:
					func_315(&(Local_248[iParam0 /*10*/]));
					break;
				case 39:
					if (func_99(0, 37))
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 1:
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4000;
								Local_248[iParam0 /*10*/].f_6++;
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
								{
									MISC::FORCE_LIGHTNING_FLASH();
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				case 40:
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 20, false, true);
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 20, false, true);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_SUPP_02"));
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					MISC::ENABLE_DISPATCH_SERVICE(3, false);
					MISC::ENABLE_DISPATCH_SERVICE(5, false);
					MISC::ENABLE_DISPATCH_SERVICE(1, false);
					MISC::ENABLE_DISPATCH_SERVICE(7, false);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_268[0], 4);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_268[0], "OFF");
					}
					if (!func_3(Local_267[10 /*10*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[10 /*10*/], true);
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 41:
					Local_248[iParam0 /*10*/].f_7 = 0;
					while (Local_248[iParam0 /*10*/].f_7 < Local_267.f_0)
					{
						if (Local_248[iParam0 /*10*/].f_7 != 10 && Local_248[iParam0 /*10*/].f_7 != 7)
						{
							if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
							{
								func_140();
								if (__LIB_0__::func_76(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 20f)
								{
									fVar17 = __LIB_16__::func_867(PLAYER::PLAYER_PED_ID(), Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 1);
									Var18 = { ENTITY::GET_ENTITY_COORDS(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], true) };
									Var18.f_0 = (Var18.f_0 + (SYSTEM::SIN(fVar17) * 20f));
									Var18.f_1 = (Var18.f_1 + (SYSTEM::COS(fVar17) * 20f));
									if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var18, false, &Var18, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var18, 2f, 20000, 0.25f, 0, 40000f);
									}
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_139(&(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]), 0);
								PED::SET_PED_TARGET_LOSS_RESPONSE(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], ENTITY::GET_ENTITY_COORDS(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], true), 25f, false, false);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], iLocal_286);
								PED::SET_PED_SEEING_RANGE(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 60f);
							}
						}
						else if (Local_248[iParam0 /*10*/].f_7 == 7)
						{
							if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], 0, 0);
							}
						}
						Local_248[iParam0 /*10*/].f_7++;
					}
					if (__LIB_40__::func_503(iLocal_268[2]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[2]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_268[2]);
						}
					}
					if (__LIB_40__::func_503(iLocal_268[3]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[3]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_268[3]);
						}
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 42:
					Local_248[iParam0 /*10*/].f_7 = func_314(57);
					if (Local_248[iParam0 /*10*/].f_7 >= 0)
					{
						if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
						{
							if (!__LIB_0__::func_86(Local_515))
							{
								func_140();
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
								TASK::TASK_AIM_GUN_AT_COORD(0, Local_515, 2000, false, false);
								TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
								fVar19 = __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_515, 1);
								Var20 = { ENTITY::GET_ENTITY_COORDS(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], true) };
								Var20.f_0 = (Var20.f_0 + (SYSTEM::SIN(fVar19) * 20f));
								Var20.f_1 = (Var20.f_1 + (SYSTEM::COS(fVar19) * 20f));
								if (PATHFIND::GET_SAFE_COORD_FOR_PED(Var20, false, &Var20, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var20, 2f, 20000, 0.25f, 0, 40000f);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								func_139(&(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]), 0);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
						}
						else
						{
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
					}
					else
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 43:
					iLocal_513 = 0;
					while (iLocal_513 < Local_267.f_0)
					{
						if (iLocal_513 != 10 && iLocal_513 != 7)
						{
							if ((iLocal_256 == 4 && func_345(53)) || iLocal_256 == 7)
							{
								__LIB_0__::func_631(Local_267[iLocal_513 /*10*/], &(Local_267[iLocal_513 /*10*/].f_1), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
							}
							else
							{
								__LIB_0__::func_631(Local_267[iLocal_513 /*10*/], &(Local_267[iLocal_513 /*10*/].f_1), -1, 0, 0, 1, -1082130432, 0, -1, -1, 1, 0);
							}
							if (!Local_267[iLocal_513 /*10*/].f_9)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_267[iLocal_513 /*10*/]))
								{
									if (func_3(Local_267[iLocal_513 /*10*/]))
									{
										Local_267[iLocal_513 /*10*/].f_9 = 1;
										if (PED::WAS_PED_KILLED_BY_STEALTH(Local_267[iLocal_513 /*10*/]))
										{
											__LIB_0__::func_497(519, 1, 0);
										}
										__LIB_0__::func_497(520, 1, 0);
									}
								}
							}
						}
						iLocal_513++;
					}
					break;
				case 46:
					if (!func_3(Local_267[7 /*10*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[7 /*10*/], iLocal_288);
						if (func_345(76))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_267[7 /*10*/], 0, 0);
						}
						else
						{
							TASK::TASK_SMART_FLEE_PED(Local_267[7 /*10*/], PLAYER::PLAYER_PED_ID(), 1000f, 9999, false, false);
							PED::SET_PED_KEEP_TASK(Local_267[7 /*10*/], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[7 /*10*/]));
						}
					}
					if (!func_3(Local_267[5 /*10*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_267[5 /*10*/], 0))
						{
							func_140();
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_139(&(Local_267[5 /*10*/]), 0);
						}
					}
					if (!func_3(Local_267[6 /*10*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_267[6 /*10*/], 0))
						{
							func_140();
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							func_139(&(Local_267[6 /*10*/]), 0);
						}
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 44:
					if (__LIB_40__::func_503(iLocal_268[2]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[2], -4f, true);
					}
					if (__LIB_40__::func_503(iLocal_268[3]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[3], -4f, true);
					}
					if (__LIB_40__::func_503(iLocal_268[4]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[4], -4f, true);
					}
					if (__LIB_40__::func_503(iLocal_268[5]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[5], -4f, true);
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 45:
					if (!func_3(Local_267[1 /*10*/]))
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 0:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_267[1 /*10*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
								{
									Local_248[iParam0 /*10*/].f_8 = func_349(Local_267[1 /*10*/], &Local_271);
									Local_248[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(58.162f, 3638.364f, 39.438f, 0f, 0f, -157.25f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_267[1 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "brokendown_longlook", 4f, -4f, 1, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_7, true);
									Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
								}
								break;
							}
					}
					break;
				case 47:
					Local_248[iParam0 /*10*/].f_7 = -1;
					fVar21 = 5000f;
					if (!func_345(59))
					{
						fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 58.668655f, 3634.2815f, 35.984818f, true);
						if (fVar22 < 13.5625f)
						{
							if (fVar22 < fVar21)
							{
								fVar21 = fVar22;
								Local_248[iParam0 /*10*/].f_7 = 0;
							}
						}
					}
					if (!func_345(60))
					{
						fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 67.4124f, 3697.4224f, 38.765015f, true);
						if (fVar22 < 27.25f)
						{
							if (fVar22 < fVar21)
							{
								fVar21 = fVar22;
								Local_248[iParam0 /*10*/].f_7 = 1;
							}
						}
					}
					if (!func_345(61))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 93.893196f, 3706.5374f, 38.69593f, 69.3175f, 3670.8313f, 40.400547f, 20.125f, false, true, 0))
						{
							fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 51.407944f, 3696.9011f, 38.754974f, true);
							if (fVar22 < 46.0625f)
							{
								if (fVar22 < fVar21)
								{
									fVar21 = fVar22;
									Local_248[iParam0 /*10*/].f_7 = 2;
								}
							}
						}
					}
					if (!func_345(62))
					{
						fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 93.4057f, 3692.2004f, 34.614063f, true);
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 51.15165f, 3681.861f, 34.784412f, 87.65079f, 3735.441f, 44.137173f, 20.8125f, false, true, 0))
						{
							if (fVar22 < 25f)
							{
								if (fVar22 < fVar21)
								{
									fVar21 = fVar22;
									Local_248[iParam0 /*10*/].f_7 = 3;
								}
							}
						}
					}
					if (!func_345(63))
					{
						fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 67.602f, 3743.562f, 38.932f, true);
						if (fVar22 < 50f)
						{
							if (fVar22 < fVar21)
							{
								fVar21 = fVar22;
								Local_248[iParam0 /*10*/].f_7 = 4;
							}
						}
					}
					if (!func_345(64))
					{
						fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100.7147f, 3745.9731f, 38.747395f, true);
						if (fVar22 < 31.8f)
						{
							if (fVar22 < fVar21)
							{
								fVar21 = fVar22;
								Local_248[iParam0 /*10*/].f_7 = 5;
							}
						}
					}
					break;
				case 50:
					if (!PED::IS_PED_INJURED(Local_267[2 /*10*/]))
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_248[iParam0 /*10*/].f_8 = func_349(Local_267[2 /*10*/], &Local_271);
								if (Local_248[iParam0 /*10*/].f_8 != -1)
								{
									Local_248[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 != 3)
								{
									Local_248[iParam0 /*10*/].f_6 = 3;
									Local_248[iParam0 /*10*/].f_9 = 0.03f;
								}
								else if (func_311(5, 47) == 1)
								{
									iLocal_291 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_267[2 /*10*/], iLocal_291, "misstrevor3", "horny_biker", 4f, -4f, 1, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_291, true);
									Local_248[iParam0 /*10*/].f_6 = 2;
								}
								break;
							case 3:
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_291))
								{
									Local_248[iParam0 /*10*/].f_6 = 2;
								}
								break;
							default:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_291))
								{
									Local_248[iParam0 /*10*/].f_9 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291);
								}
								if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 4 || Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
								{
									if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 2)
									{
										Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 = 3;
										if (Local_248[iParam0 /*10*/].f_9 > 0.8f || Local_248[iParam0 /*10*/].f_9 < 0.04f)
										{
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 65.95f, 3694.187f, 38.7549f, 1f, 20000, 0.2f, 4096, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_139(&(Local_267[2 /*10*/]), 0);
											Local_248[iParam0 /*10*/].f_6 = 4;
										}
										else if (Local_248[iParam0 /*10*/].f_9 >= 0.04f && Local_248[iParam0 /*10*/].f_9 < 0.188f)
										{
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 65.3946f, 3691.2192f, 38.7496f, 1f, 20000, 0.2f, 4096, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_139(&(Local_267[2 /*10*/]), 0);
											Local_248[iParam0 /*10*/].f_6 = 5;
										}
										else if (Local_248[iParam0 /*10*/].f_9 > 0.188f && Local_248[iParam0 /*10*/].f_9 < 0.475f)
										{
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 69.3267f, 3698.3433f, 38.7549f, 1f, 20000, 0.2f, 4096, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_139(&(Local_267[2 /*10*/]), 0);
											Local_248[iParam0 /*10*/].f_6 = 6;
										}
										else
										{
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 71.0567f, 3701.3481f, 38.7549f, 1f, 20000, 0.2f, 4096, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 241f, 0);
											func_139(&(Local_267[2 /*10*/]), 0);
											Local_248[iParam0 /*10*/].f_6 = 7;
										}
									}
								}
								else if (Local_271[Local_248[iParam0 /*10*/].f_8 /*24*/].f_3 == 3)
								{
									if (Local_248[iParam0 /*10*/].f_6 >= 4 && Local_248[iParam0 /*10*/].f_6 <= 7)
									{
										if (!func_3(Local_267[2 /*10*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_267[2 /*10*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
											{
												iLocal_291 = PED::CREATE_SYNCHRONIZED_SCENE(67.817f, 3694.449f, 38.766f, 0f, 0f, -35.19f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_267[2 /*10*/], iLocal_291, "misstrevor3", "horny_biker", 0.5f, -4f, 1, 0, 4f, 0);
												switch (Local_248[iParam0 /*10*/].f_6)
												{
													case 4:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_291, 0.04f);
														break;
													case 5:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_291, 0.188f);
														break;
													case 6:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_291, 0.475f);
														break;
													case 7:
														PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_291, 0.8f);
														break;
												}
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_291, true);
												Local_248[iParam0 /*10*/].f_6 = 3;
											}
										}
									}
								}
								break;
							}
					}
					break;
				case 63:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (Local_271[8 /*24*/].f_3 == 4 || Local_271[9 /*24*/].f_3 == 4)
							{
								Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
								Local_248[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(88.368f, 3701.228f, 38.535f, 0f, 0f, -7.92f, 2);
								if (!PED::IS_PED_INJURED(Local_267[8 /*10*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[8 /*10*/], true);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_267[8 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "biker_exit_1", 4f, -4f, 5, 0, 1000f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_267[9 /*10*/]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[9 /*10*/], true);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_267[9 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3", "biker_exit_2", 4f, -4f, 5, 0, 1000f, 0);
								}
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_8) > 0.378f)
								{
									if (!PED::IS_PED_INJURED(Local_267[9 /*10*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_267[9 /*10*/]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[9 /*10*/], false);
										PED::SET_PED_HELMET(Local_267[9 /*10*/], false);
										Local_271[9 /*24*/].f_21 = 0;
									}
									Local_248[iParam0 /*10*/].f_6++;
								}
							}
							else
							{
								if (__LIB_40__::func_503(iLocal_268[4]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[4], -4f, true);
								}
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 2:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7) > 0.56f)
								{
									if (!PED::IS_PED_INJURED(Local_267[8 /*10*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_267[8 /*10*/]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[8 /*10*/], false);
										PED::SET_PED_HELMET(Local_267[8 /*10*/], false);
										Local_271[8 /*24*/].f_21 = 0;
									}
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
							else
							{
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 64:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(30.9745f, 3665.2126f, 40.9901f, 5f, 0))
							{
								ENTITY::CREATE_FORCED_OBJECT(32.3311f, 3667.6604f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"), true);
								ENTITY::CREATE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"), true);
								Local_248[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				case 62:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (Local_271[3 /*24*/].f_3 == 4 || Local_271[4 /*24*/].f_3 == 4)
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
								{
									if (!PED::IS_PED_INJURED(Local_267[3 /*10*/]))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) < 0.23f || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.96f)
										{
											Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[3 /*10*/], true);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_267[3 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3", "bike_chat_b_loop_1", 8f, -8f, 5, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7, 0.23f);
											if (__LIB_40__::func_503(iLocal_268[2]))
											{
												func_348(iLocal_268[2], Local_248[iParam0 /*10*/].f_7, "bike_chat_b_loop_bike_a", "misstrevor3", 8f, -4f);
											}
										}
										else
										{
											TASK::CLEAR_PED_TASKS(Local_267[3 /*10*/]);
											Local_271[3 /*24*/].f_21 = 0;
										}
									}
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
									{
										PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_294, 2f);
									}
									if (!PED::IS_PED_INJURED(Local_267[4 /*10*/]))
									{
										Local_248[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[4 /*10*/], true);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[4 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3", "bike_chat_b_outro_2", 8f, -8f, 5, 0, 1000f, 0);
										if (__LIB_40__::func_503(iLocal_268[3]))
										{
											func_348(iLocal_268[3], Local_248[iParam0 /*10*/].f_8, "bike_chat_b_outro_bike_b", "misstrevor3", 8f, -4f);
										}
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_8, 0.373f);
										PED::SET_SYNCHRONIZED_SCENE_RATE(Local_248[iParam0 /*10*/].f_8, 2f);
									}
									Local_248[iParam0 /*10*/].f_6++;
								}
								else
								{
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7) > 0.28f)
							{
								if (!PED::IS_PED_INJURED(Local_267[3 /*10*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_267[3 /*10*/]);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[3 /*10*/], false);
									PED::SET_PED_HELMET(Local_267[3 /*10*/], false);
									Local_271[3 /*24*/].f_21 = 0;
								}
								if (__LIB_40__::func_503(iLocal_268[2]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[2], -4f, true);
								}
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) > 0.41f)
							{
								if (!PED::IS_PED_INJURED(Local_267[3 /*10*/]))
								{
									if (ENTITY::GET_ENTITY_HEALTH(Local_267[3 /*10*/]) >= 200)
									{
										TASK::CLEAR_PED_TASKS(Local_267[3 /*10*/]);
										if (__LIB_40__::func_503(iLocal_268[2]))
										{
											PED::SET_PED_INTO_VEHICLE(Local_267[3 /*10*/], iLocal_268[2], -1);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[3 /*10*/], false);
										PED::SET_PED_HELMET(Local_267[3 /*10*/], false);
									}
								}
								if (__LIB_40__::func_503(iLocal_268[2]))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[2], -4f, true);
								}
								Local_271[3 /*24*/].f_21 = 0;
							}
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_8) > 0.731f)
								{
									if (!PED::IS_PED_INJURED(Local_267[4 /*10*/]))
									{
										if (ENTITY::GET_ENTITY_HEALTH(Local_267[4 /*10*/]) >= 200)
										{
											TASK::CLEAR_PED_TASKS(Local_267[4 /*10*/]);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[4 /*10*/], false);
											PED::SET_PED_HELMET(Local_267[4 /*10*/], false);
											Local_271[4 /*24*/].f_21 = 0;
											if (__LIB_40__::func_503(iLocal_268[3]))
											{
												PED::SET_PED_INTO_VEHICLE(Local_267[4 /*10*/], iLocal_268[3], -1);
											}
										}
									}
									if (__LIB_40__::func_503(iLocal_268[3]))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[3], -4f, true);
									}
								}
							}
							if ((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8)) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
							{
								Local_271[4 /*24*/].f_21 = 0;
								Local_271[3 /*24*/].f_21 = 0;
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 49:
					if (func_310(29, 62) > 0)
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					else if (((Local_248[iParam0 /*10*/].f_6 < 4 && !func_3(Local_267[3 /*10*/])) && !func_3(Local_267[4 /*10*/])) || (Local_248[iParam0 /*10*/].f_6 > 3 && !func_3(Local_267[4 /*10*/])))
					{
						switch (Local_248[iParam0 /*10*/].f_6)
						{
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) < 0.23f || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.98f)
									{
										iLocal_294 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										iLocal_295 = PED::CREATE_SYNCHRONIZED_SCENE(51.367f, 3697.315f, 38.756f, 0f, 0f, -28.44f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[3 /*10*/], iLocal_294, "misstrevor3", "bike_chat_b_outro_1", 4f, -4f, 13, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[4 /*10*/], iLocal_295, "misstrevor3", "bike_chat_b_outro_2", 4f, -4f, 13, 0, 1000f, 0);
										if (__LIB_40__::func_503(iLocal_268[2]))
										{
											func_348(iLocal_268[2], iLocal_294, "bike_chat_b_outro_bike_a", "misstrevor3", 1000f, -4f);
										}
										if (__LIB_40__::func_503(iLocal_268[3]))
										{
											func_348(iLocal_268[3], iLocal_295, "bike_chat_b_outro_bike_b", "misstrevor3", 1000f, -4f);
										}
										PED::SET_PED_HELMET(Local_267[3 /*10*/], false);
										PED::SET_PED_HELMET(Local_267[4 /*10*/], false);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_294, 0f);
										VEHICLE::REQUEST_VEHICLE_RECORDING(2, "trev3");
										VEHICLE::REQUEST_VEHICLE_RECORDING(3, "trev3");
										Local_248[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 1:
								if (__LIB_40__::func_503(iLocal_268[2]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_294))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_294) >= 0.9f)
										{
											if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "trev3"))
											{
												if (!func_3(Local_267[3 /*10*/]))
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[2], -4f, true);
													TASK::CLEAR_PED_TASKS(Local_267[3 /*10*/]);
													PED::SET_PED_INTO_VEHICLE(Local_267[3 /*10*/], iLocal_268[2], -1);
													PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_267[3 /*10*/], 1);
													ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[2], false);
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_268[2], 2, "trev3", true);
													Local_248[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
								}
								break;
							case 2:
								if (__LIB_40__::func_503(iLocal_268[3]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_295))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_295) >= 1f)
										{
											if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "trev3"))
											{
												if (!func_3(Local_267[4 /*10*/]))
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_268[3], -4f, true);
													TASK::CLEAR_PED_TASKS(Local_267[4 /*10*/]);
													PED::SET_PED_INTO_VEHICLE(Local_267[4 /*10*/], iLocal_268[3], -1);
													PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_267[4 /*10*/], 1);
													ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[3], false);
													VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_268[3], 3, "trev3", true);
													Local_248[iParam0 /*10*/].f_6++;
												}
											}
										}
									}
								}
								break;
							case 3:
								if (!func_3(Local_267[3 /*10*/]))
								{
									if (__LIB_40__::func_503(iLocal_268[2]))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[2]))
										{
											func_140();
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_268[2], 185.8774f, 3393.5964f, 37.0011f, 18f, 0, joaat("hexer"), 786603, 10f, 10f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_268[2], 15f, 786599);
											func_139(&(Local_267[3 /*10*/]), 0);
											PED::SET_PED_KEEP_TASK(Local_267[3 /*10*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[3 /*10*/]));
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[2]));
											Local_248[iParam0 /*10*/].f_6++;
										}
									}
								}
								else if (__LIB_40__::func_503(iLocal_268[2]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[2]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_268[2]);
										Local_248[iParam0 /*10*/].f_6++;
									}
								}
								break;
							case 4:
								if (!func_3(Local_267[4 /*10*/]))
								{
									if (__LIB_40__::func_503(iLocal_268[3]))
									{
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[3]))
										{
											func_140();
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_268[3], 185.8774f, 3393.5964f, 37.0011f, 18f, 0, joaat("hexer"), 786603, 10f, 10f);
											TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_268[3], 15f, 786599);
											func_139(&(Local_267[4 /*10*/]), 0);
											PED::SET_PED_KEEP_TASK(Local_267[4 /*10*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[4 /*10*/]));
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[3]));
											Local_248[iParam0 /*10*/].f_6++;
										}
									}
								}
								else if (__LIB_40__::func_503(iLocal_268[3]))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_268[3]))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_268[3]);
										Local_248[iParam0 /*10*/].f_6++;
									}
								}
								break;
							}
					}
					break;
				case 48:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/])) && !func_3(Local_267[7 /*10*/]))
							{
								Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_267[7 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_dockworker", 4f, -4f, 1, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_267[5 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_guard1", 4f, -4f, 1, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_267[6 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_mainaction_guard2", 4f, -4f, 1, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_7, false);
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7) > 0.877f)
								{
									func_365(76, 1);
									func_309(&Local_271, 7);
								}
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7) > 0.99f)
								{
									if ((!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/])) && !func_3(Local_267[7 /*10*/]))
									{
										Local_248[iParam0 /*10*/].f_8 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[7 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_dockworker", 4f, -4f, 1, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[5 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_guard1", 4f, -4f, 1, 0, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_267[6 /*10*/], Local_248[iParam0 /*10*/].f_8, "misstrevor3_beatup", "guard_beatup_kickidle_guard2", 4f, -4f, 1, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_248[iParam0 /*10*/].f_8, true);
										Local_248[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 100;
										Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 15000;
									}
								}
							}
							else if ((!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/])) && !func_3(Local_267[7 /*10*/]))
							{
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
						case 2:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_7))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_248[iParam0 /*10*/].f_7) > 0.97f)
								{
									if ((!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/])) && !func_3(Local_267[7 /*10*/]))
									{
										ENTITY::SET_ENTITY_HEALTH(Local_267[7 /*10*/], 0, 0);
										if (!func_3(Local_267[5 /*10*/]))
										{
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 71.1857f, 3744.877f, 38.8392f, 1f, 20000, 0.25f, 0, 210f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, true);
											func_139(&(Local_267[5 /*10*/]), 0);
										}
										if (!func_3(Local_267[6 /*10*/]))
										{
											func_140();
											TASK::TASK_LOOK_AT_ENTITY(0, Local_267[5 /*10*/], 2000, 0, 2);
											TASK::TASK_PAUSE(0, 2000);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 69.5081f, 3744.3945f, 38.8998f, 1f, 20000, 0.25f, 0, 243f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, true);
											func_139(&(Local_267[6 /*10*/]), 0);
										}
										Local_248[iParam0 /*10*/].f_3 = 1;
									}
								}
							}
							break;
						default:
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_248[iParam0 /*10*/].f_8))
							{
								if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_6)
								{
									if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
									{
										if ((!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/])) && !func_3(Local_267[7 /*10*/]))
										{
											Local_248[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(67.711f, 3743.775f, 38.915f, 0f, 0f, -29.88f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_267[7 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_dockworker", 4f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_267[5 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_guard1", 4f, -4f, 1, 0, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_267[6 /*10*/], Local_248[iParam0 /*10*/].f_7, "misstrevor3_beatup", "guard_beatup_exit_guard2", 4f, -4f, 1, 0, 1000f, 0);
										}
										Local_248[iParam0 /*10*/].f_6 = 2;
									}
									else
									{
										HUD::TRIGGER_SONAR_BLIP(67.602f, 3743.562f, 38.932f, 30f, 6);
										__LIB_0__::func_631(Local_267[5 /*10*/], &(Local_267[5 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
										__LIB_0__::func_631(Local_267[6 /*10*/], &(Local_267[5 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
										Local_248[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 2000;
									}
								}
							}
							else
							{
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 51:
					if (ENTITY::DOES_ENTITY_EXIST(Local_267[0 /*10*/]))
					{
						if (func_3(Local_267[0 /*10*/]) || func_345(53))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_269[3]))
							{
								ENTITY::DETACH_ENTITY(iLocal_269[3], true, true);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_267[0 /*10*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_269[0]))
								{
									PHYSICS::ACTIVATE_PHYSICS(iLocal_269[0]);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
					}
					break;
				case 52:
					if (__LIB_40__::func_503(iLocal_268[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_269[0], false))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_268[1]) > 1f)
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_269[0]))
								{
									ENTITY::DETACH_ENTITY(iLocal_269[0], true, false);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
					}
					break;
				case 53:
					iLocal_514 = 0;
					while (iLocal_514 < Local_297.f_0)
					{
						if (Local_297[iLocal_514 /*17*/] == 2)
						{
							if ((((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(4, Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], Local_297[iLocal_514 /*17*/].f_7[1 /*3*/], Local_297[iLocal_514 /*17*/].f_14) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], Local_297[iLocal_514 /*17*/].f_7[1 /*3*/], Local_297[iLocal_514 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(16, Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], Local_297[iLocal_514 /*17*/].f_7[1 /*3*/], Local_297[iLocal_514 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], Local_297[iLocal_514 /*17*/].f_7[1 /*3*/], Local_297[iLocal_514 /*17*/].f_14)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], Local_297[iLocal_514 /*17*/].f_7[1 /*3*/], Local_297[iLocal_514 /*17*/].f_14))
							{
								Local_297[iLocal_514 /*17*/] = 3;
								bLocal_296 = true;
								if (HUD::DOES_BLIP_EXIST(Local_297[iLocal_514 /*17*/].f_16))
								{
									HUD::REMOVE_BLIP(&(Local_297[iLocal_514 /*17*/].f_16));
								}
							}
						}
						iLocal_514++;
					}
					iLocal_514 = 0;
					while (iLocal_514 < Local_297.f_0)
					{
						if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
						{
							if (((Local_297[iLocal_514 /*17*/] == 3 || Local_297[iLocal_514 /*17*/] == 5) || Local_297[iLocal_514 /*17*/] == 6) || ((Local_297[iLocal_514 /*17*/] == 7 && OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Local_297[iLocal_514 /*17*/].f_1) < 0.05f) && OBJECT::GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Local_297[iLocal_514 /*17*/].f_1) != 0f))
							{
								if (MISC::GET_GAME_TIMER() > Local_297[iLocal_514 /*17*/].f_2)
								{
									func_306(iLocal_514);
									Local_297[iLocal_514 /*17*/].f_2 = MISC::GET_GAME_TIMER() + 200;
								}
							}
						}
						switch (Local_297[iLocal_514 /*17*/])
						{
							case 0:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									Local_297[iLocal_514 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_297[iLocal_514 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 3)
								{
									if (iLocal_256 > 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 4);
										__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 0, 0, 1, 0);
										Local_297[iLocal_514 /*17*/] = 2;
									}
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 5)
								{
									Local_297[iLocal_514 /*17*/] = 2;
								}
								break;
							case 1:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									Local_297[iLocal_514 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_297[iLocal_514 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) != 3 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) != 2)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 2);
									__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 0, 0, 1, 0);
									Local_297[iLocal_514 /*17*/].f_2 = 0;
									Local_297[iLocal_514 /*17*/] = 0;
								}
								else
								{
									Local_297[iLocal_514 /*17*/].f_2 = 0;
									Local_297[iLocal_514 /*17*/] = 0;
								}
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_297[iLocal_514 /*17*/].f_15))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_297[iLocal_514 /*17*/].f_15, false);
								}
								break;
							case 3:
								if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									Local_297[iLocal_514 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_297[iLocal_514 /*17*/].f_3);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 5)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 6);
									__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 1, 0, 1, 0);
									Local_297[iLocal_514 /*17*/] = 7;
									Local_297[iLocal_514 /*17*/].f_2 = MISC::GET_GAME_TIMER() + 100;
									AUDIO::SET_AMBIENT_ZONE_STATE(Local_297[iLocal_514 /*17*/].f_4, false, true);
									Local_297[iLocal_514 /*17*/].f_15 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev3_trailer_plume", Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 0f, 0f, 0f, 1f, false, false, false, false);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 3)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 4);
								}
								else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) != 2 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) != 4)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 2);
									__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 1, 0, 1, 0);
								}
								break;
							case 8:
								__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 1, 0, 1, 0);
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 9);
									Local_297[iLocal_514 /*17*/].f_15 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_trev3_trailer_plume", Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 0f, 0f, 0f, 1f, false, false, false, false);
									Local_297[iLocal_514 /*17*/] = 4;
								}
								else
								{
									Local_297[iLocal_514 /*17*/].f_1 = OBJECT::GET_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 10f, Local_297[iLocal_514 /*17*/].f_3);
								}
								break;
							case 5:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 3)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 4);
										Local_297[iLocal_514 /*17*/] = 6;
									}
								}
								break;
							case 6:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 5)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 6);
										__LIB_0__::func_544(Local_297[iLocal_514 /*17*/].f_6, 1, 0, 1, 0);
										Local_297[iLocal_514 /*17*/] = 7;
									}
								}
								break;
							case 7:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 10)
									{
										Local_297[iLocal_514 /*17*/] = 4;
									}
								}
								break;
							case 9:
								if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(Local_297[iLocal_514 /*17*/].f_1))
								{
									if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1) == 7)
									{
										OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(Local_297[iLocal_514 /*17*/].f_1, 10);
										Local_297[iLocal_514 /*17*/] = 4;
									}
								}
								break;
							case 4:
								if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_297[iLocal_514 /*17*/].f_7[0 /*3*/] + Local_297[iLocal_514 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 1) < 2.3f)
								{
									if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
									{
										FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
									}
								}
								break;
						}
						iLocal_514++;
					}
					break;
				case 54:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_7 = Local_297.f_0;
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							iLocal_513 = 0;
							while (iLocal_513 < Local_297.f_0)
							{
								if (HUD::DOES_BLIP_EXIST(Local_297[iLocal_513 /*17*/].f_16))
								{
									if (Local_297[iLocal_513 /*17*/] == 7 || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_297[iLocal_513 /*17*/].f_7[0 /*3*/], Local_297[iLocal_513 /*17*/].f_7[1 /*3*/], Local_297[iLocal_513 /*17*/].f_14, joaat("WEAPON_STICKYBOMB"), true))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
										HUD::REMOVE_BLIP(&(Local_297[iLocal_513 /*17*/].f_16));
										Local_248[iParam0 /*10*/].f_7 = (Local_248[iParam0 /*10*/].f_7 - 1);
									}
								}
								else if (!MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_297[iLocal_513 /*17*/].f_7[0 /*3*/], Local_297[iLocal_513 /*17*/].f_7[1 /*3*/], Local_297[iLocal_513 /*17*/].f_14, joaat("WEAPON_STICKYBOMB"), true) && Local_297[iLocal_513 /*17*/] == 2)
								{
									Local_248[iParam0 /*10*/].f_7++;
									Local_297[iLocal_513 /*17*/].f_16 = __LIB_0__::func_488(func_298(iLocal_513), 0);
								}
								iLocal_513++;
							}
							if (Local_248[iParam0 /*10*/].f_7 == 0)
							{
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 55:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_RANDOM_INT_IN_RANGE(1, (Local_267.f_0 - 1));
							if (!func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]) && Local_248[iParam0 /*10*/].f_7 != 7)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/], false);
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (func_3(Local_267[Local_248[iParam0 /*10*/].f_7 /*10*/]))
							{
								Local_248[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					break;
				case 56:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							func_295("TRV3_GAMEPLAY_ST", 0, "TRV3_ALERTED");
							Local_248[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (func_345(53))
							{
								func_295("TRV3_ALERTED", 1, "TRV3_EXPLOSIONS");
								Local_248[iParam0 /*10*/].f_6 = 3;
							}
							else if (func_345(66))
							{
								func_295("TRV3_3_PLANTED", 0, "TRV3_EXPLOSIONS");
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 2:
							if (func_345(53))
							{
								func_295("TRV3_ALERTED", 1, "TRV3_EXPLOSIONS");
								Local_248[iParam0 /*10*/].f_6 = 3;
							}
							else if (func_345(67))
							{
								func_295("TRV3_BOMBS_PLANTED", 0, "TRV3_EXPLOSIONS");
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
						case 3:
							if (func_345(67))
							{
								func_295("TRV3_BOMBS_PLANTED_ALERTED", 0, "TRV3_EXPLOSIONS");
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 57:
					if (__LIB_40__::func_503(iLocal_268[8]))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_268[8], 200f);
					}
					break;
				case 58:
					if (!func_3(Local_267[7 /*10*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[7 /*10*/], iLocal_288);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[7 /*10*/], true);
					}
					Local_248[iParam0 /*10*/].f_3 = 1;
					break;
				case 59:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (__LIB_15__::func_965("TRV3_GIRL1"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", true);
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (func_3(Local_267[2 /*10*/]))
							{
								if (__LIB_38__::func_301() != 7)
								{
									func_292(5);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
								else
								{
									Local_248[iParam0 /*10*/].f_6++;
								}
							}
							if (!__LIB_15__::func_965("TRV3_GIRL1"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", false);
								Local_248[iParam0 /*10*/].f_6 = 0;
							}
							break;
						case 2:
							if (__LIB_15__::func_965("TRV3_GIRL1"))
							{
								if (__LIB_38__::func_301() != 7)
								{
									func_292(6);
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", false);
									Local_248[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				case 60:
					if (!func_3(Local_267[2 /*10*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[2 /*10*/], 1) < 40f)
						{
							__LIB_0__::func_631(Local_267[2 /*10*/], &(Local_267[2 /*10*/].f_1), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
						}
					}
					break;
				case 66:
					switch (Local_248[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_310(1, 65) > 0)
							{
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER();
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_297[3 /*17*/].f_7[0 /*3*/] + Local_297[3 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, false, true, 1f, false);
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 500;
								AUDIO::START_AUDIO_SCENE("TREVOR_3_RAYFIRE");
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 2:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_297[0 /*17*/].f_7[0 /*3*/] + Local_297[0 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, false, true, 1f, false);
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 700;
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_297[2 /*17*/].f_7[0 /*3*/] + Local_297[2 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, false, true, 1f, false);
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 600;
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 4:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_297[4 /*17*/].f_7[0 /*3*/] + Local_297[4 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, false, true, 1f, false);
								Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 700;
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
						case 5:
							if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
							{
								FIRE::ADD_EXPLOSION(Local_297[1 /*17*/].f_7[0 /*3*/] + Local_297[1 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f), 16, 3f, false, true, 1f, false);
								Local_248[iParam0 /*10*/].f_6++;
							}
							break;
					}
					break;
				default:
					func_153(iParam0);
					break;
			}
			if (Local_248[iParam0 /*10*/].f_6 == 99)
			{
				Local_248[iParam0 /*10*/].f_3 = 1;
				Local_248[iParam0 /*10*/].f_6 = 0;
				Local_248[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x11750
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	switch (Local_248[iParam0 /*10*/])
	{
		case 65:
			if (__LIB_0__::func_645(1000))
			{
				AUDIO::STOP_STREAM();
				bLocal_240 = true;
				Local_248[iParam0 /*10*/].f_6 = 2;
			}
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DETONATE_BOMBS"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DETONATE_BOMBS");
					}
					if (AUDIO::LOAD_STREAM("TREVOR3_BLOW_UP_TRAILERS_MASTER", 0) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3"))
					{
						bLocal_240 = false;
						Local_298.f_4 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(iLocal_283);
						}
						iLocal_283 = STREAMING::STREAMVOL_CREATE_FRUSTUM(63.6975f, 3630.1255f, 49.8993f, __LIB_3__::func_80(-4.2671f, 0.6115f, 13.5931f), 150f, 12, 33);
						iLocal_270 = PED::CREATE_SYNCHRONIZED_SCENE(68.185f, 3653.15f, 45.796f, 0f, 0f, 6.38f, 2);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(Local_298.f_4, iLocal_270, "ALL_TRAILERS_EXPLOSION_CAM", "misstrevor3");
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						AUDIO::PLAY_STREAM_FRONTEND();
						MISC::CLEAR_AREA_OF_PROJECTILES(64.2897f, 3711.5496f, 40.422f, 100f, 0);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						GRAPHICS::SET_TIMECYCLE_MODIFIER("trailer_explosion_optimise");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_292(7);
						if (iLocal_53 || bLocal_52)
						{
							func_295("TRV3_EXPLOSIONS_ALERTED", 0, "TRV3_EXPLOSIONS");
						}
						else
						{
							func_295("TRV3_EXPLOSIONS", 1, "TRV3_EXPLOSIONS");
						}
						iVar0 = 0;
						while (iVar0 < Local_297.f_0)
						{
							if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), func_298(iVar0), 1) < 15f)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								}
								switch (iVar0)
								{
									case 0:
										if (__LIB_40__::func_503(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 67.7464f, 3738.6018f, 38.7134f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 289.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 48.8548f, 3763.275f, 38.6019f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 171.1065f);
										}
										break;
									case 1:
										if (__LIB_40__::func_503(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 100.3786f, 3709.596f, 38.7631f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 150.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 125.3921f, 3730.3071f, 38.7241f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 96.0804f);
										}
										break;
									case 2:
										if (__LIB_40__::func_503(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 85.5019f, 3687.4158f, 38.7033f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 150.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 66.9316f, 3673.0535f, 38.8189f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 334.269f);
										}
										break;
									case 3:
										if (__LIB_40__::func_503(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 31.3841f, 3688.9363f, 38.6971f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 45.2714f, 3682.5688f, 38.7484f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 213.2737f);
										}
										break;
									case 4:
										if (__LIB_40__::func_503(iVar1))
										{
											ENTITY::SET_ENTITY_COORDS(iVar1, 31.3841f, 3688.9363f, 38.6971f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.8005f);
										}
										else
										{
											ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 19.7921f, 3646.6829f, 39.0559f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 316.946f);
										}
										break;
									}
							}
							iVar0++;
						}
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_270))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_270) == 1f)
						{
							Local_248[iParam0 /*10*/].f_6++;
						}
					}
					else
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
			}
			if (Local_248[iParam0 /*10*/].f_6 == 2)
			{
				if (__LIB_7__::func_691() && !bLocal_240)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				CAM::DESTROY_CAM(iLocal_492, false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1f);
				if (STREAMING::IS_STREAMVOL_ACTIVE())
				{
					STREAMING::STREAMVOL_DELETE(iLocal_283);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				Local_297[0 /*17*/] = 8;
				Local_297[1 /*17*/] = 8;
				Local_297[2 /*17*/] = 8;
				Local_297[3 /*17*/] = 8;
				Local_297[4 /*17*/] = 8;
				Local_248[iParam0 /*10*/].f_3 = 1;
				func_295("TRV3_GET_TO_CAR", 0, "TRV3_EXPLOSIONS");
			}
			break;
		case 67:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("CLEARING", 45f);
					Local_248[iParam0 /*10*/].f_6++;
					Local_248[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + 45000);
					break;
				case 1:
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 50f);
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 68:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
			STREAMING::REMOVE_ANIM_DICT("misstrevor3");
			STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[6]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[6]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[7]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[7]));
			}
			iLocal_514 = 0;
			while (iLocal_514 < Local_267.f_0)
			{
				if (iLocal_514 != 10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_267[iLocal_514 /*10*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[iLocal_514 /*10*/]));
					}
				}
				iLocal_514++;
			}
			iLocal_514 = 0;
			while (iLocal_514 < iLocal_268)
			{
				if (iLocal_514 != 0 && iLocal_514 != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[iLocal_514]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[iLocal_514]));
					}
				}
				iLocal_514++;
			}
			iLocal_514 = 0;
			while (iLocal_514 < iLocal_269)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_269[iLocal_514]))
				{
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_269[iLocal_514]));
				}
				iLocal_514++;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			MISC::ENABLE_DISPATCH_SERVICE(3, true);
			MISC::ENABLE_DISPATCH_SERVICE(5, true);
			MISC::ENABLE_DISPATCH_SERVICE(1, true);
			MISC::ENABLE_DISPATCH_SERVICE(7, true);
			iLocal_514 = 0;
			while (iLocal_514 < Local_297.f_0)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_297[iLocal_514 /*17*/].f_15))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_297[iLocal_514 /*17*/].f_15, false);
				}
				iLocal_514++;
			}
			func_355(25, 89, 1, 1);
			iLocal_514 = 0;
			while (iLocal_514 < Local_254.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/]))
				{
					if (!PED::IS_PED_INJURED(Local_254[iLocal_514 /*9*/]))
					{
						PED::SET_PED_KEEP_TASK(Local_254[iLocal_514 /*9*/], true);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_254[iLocal_514 /*9*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/].f_1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_254[iLocal_514 /*9*/].f_1));
				}
				iLocal_514++;
			}
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_Salton_01"));
			STREAMING::REMOVE_ANIM_SET("move_f@flee@a");
			Local_248[iParam0 /*10*/].f_3 = 1;
			break;
		case 69:
			if (__LIB_40__::func_503(iLocal_268[0]))
			{
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_268[0], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_268[0], true);
			}
			Local_248[iParam0 /*10*/].f_3 = 1;
			break;
		case 70:
			bVar2 = false;
			iVar3 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
			if (iVar3 != 0)
			{
				iVar4 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar3);
				if (iVar4 == 4)
				{
					bVar2 = true;
				}
			}
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("misstrevor3ig_7");
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3ig_7"))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (__LIB_15__::func_965("TRV3_DR3") || __LIB_15__::func_965("TRV3_DR4"))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 3:
					if (func_345(30))
					{
						if (!func_3(Local_267[10 /*10*/]))
						{
							if (__LIB_40__::func_503(iLocal_268[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_268[0], false))
								{
									if (__LIB_2__::func_837(Local_267[10 /*10*/], iLocal_268[0]) == 0)
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_268[0]) == joaat("bodhi2"))
										{
											if (!bVar2)
											{
												TASK::TASK_PLAY_ANIM(Local_267[10 /*10*/], "misstrevor3ig_7", "shove_wade", 8f, -8f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 8f, -8f, -1, 32, 0f, false, false, false);
											}
											else
											{
												Local_248[iParam0 /*10*/].f_3 = 1;
											}
										}
										else
										{
											Local_248[iParam0 /*10*/].f_3 = 1;
										}
									}
									else
									{
										Local_248[iParam0 /*10*/].f_3 = 1;
									}
								}
							}
							Local_248[iParam0 /*10*/].f_6++;
						}
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 3))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 5:
					if (bVar2 || !func_345(30))
					{
						if (!func_3(Local_267[10 /*10*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_267[10 /*10*/]);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misstrevor3ig_7", "shove_trev", 3))
					{
						STREAMING::REMOVE_ANIM_DICT("misstrevor3ig_7");
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 71:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 2, 8);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) > (100f + 100f))
					{
						CUTSCENE::REMOVE_CUTSCENE();
						Local_248[iParam0 /*10*/].f_6 = 0;
					}
					break;
			}
			break;
		case 72:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_268[0] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[0], true, true);
						Local_248[iParam0 /*10*/].f_6++;
					}
					else
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 6f, 2, 1056964608, 0, 1, 0))
						{
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
					}
					else
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 2:
					break;
			}
			break;
		case 73:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_268[0] = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[0], true, true);
						Local_248[iParam0 /*10*/].f_6++;
					}
					else
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 2, 1056964608, 0, 1, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							Local_248[iParam0 /*10*/].f_6++;
						}
					}
					else
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 2:
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 74:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Local_248[iParam0 /*10*/].f_6 = 1000;
					}
					else
					{
						STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1350.1467f, 725.3141f, 185.3831f, 1) < 12f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 3:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1350.1467f, 725.3141f, 185.3831f, 1) > 14f)
					{
						Local_248[iParam0 /*10*/].f_6 = 0;
					}
					else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1350.1467f, 725.3141f, 185.3831f, 1) < 6f)
					{
						Local_248[iParam0 /*10*/].f_6++;
						Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1350.1467f, 725.3141f, 185.3831f, 1f, -1, 0.25f, 0, 219f);
					}
					break;
				case 4:
					if (CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
							}
						}
					}
					fVar5 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					if (fVar5 > 214f && fVar5 < 294f)
					{
						Local_522 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, (1000f * SYSTEM::COS(250f)), (-1000f * SYSTEM::SIN(250f))) };
						Local_523 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, (1000f * SYSTEM::COS(210f)), (-1000f * SYSTEM::SIN(210f))) };
						iLocal_521 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_522, true, true, false);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.78f);
						func_365(47, 1);
					}
					else if (fVar5 < 214f && fVar5 > 125f)
					{
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.15f);
						Local_522 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, (1000f * SYSTEM::COS(184f)), (-1000f * SYSTEM::SIN(184f))) };
						Local_523 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, (1000f * SYSTEM::COS(224f)), (-1000f * SYSTEM::SIN(224f))) };
						iLocal_521 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_522, true, true, false);
						func_365(47, 1);
					}
					else
					{
						Local_248[iParam0 /*10*/].f_6 = 1000;
					}
					if (Local_248[iParam0 /*10*/].f_6 != 1000)
					{
						CAM::STOP_GAMEPLAY_HINT(true);
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_521, 0f, 0f, 0f, true, -1, 5500, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.375f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.113f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_521, -1, 0, 2);
						Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 8000;
						Local_248[iParam0 /*10*/].f_9 = 0f;
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 5:
					Local_248[iParam0 /*10*/].f_9 = (Local_248[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() / 8f));
					if (Local_248[iParam0 /*10*/].f_9 > 1f)
					{
						Local_248[iParam0 /*10*/].f_9 = 1f;
					}
					Var6 = { Local_522 + Local_523 - Local_522 * Vector(Local_248[iParam0 /*10*/].f_9, Local_248[iParam0 /*10*/].f_9, Local_248[iParam0 /*10*/].f_9) };
					ENTITY::SET_ENTITY_COORDS(iLocal_521, Var6, true, false, false, true);
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						OBJECT::DELETE_OBJECT(&iLocal_521);
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 1000:
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 3, 8);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1001:
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1002:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 75:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(2f);
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Paper_Car", 0)))
				{
					iLocal_265 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Paper_Car", 0));
					iLocal_266 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_265, 26, joaat("IG_Wade"), -1, true, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_265, true, true, false);
					VEHICLE::SET_VEHICLE_SEARCHLIGHT(iLocal_265, true, true);
					TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_266, -1115f, 168f, 60f);
					Local_248[iParam0 /*10*/].f_8 = MISC::GET_GAME_TIMER() + 10000;
				}
			}
			else if (Local_248[iParam0 /*10*/].f_8 != 0)
			{
				if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_8)
				{
					if (!PED::IS_PED_INJURED(iLocal_266))
					{
						TASK::TASK_VEHICLE_AIM_AT_COORD(iLocal_266, -815f, 68f, 60f);
					}
					Local_248[iParam0 /*10*/].f_8 = 0;
				}
			}
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_LS_DIALOGUE"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
					}
					if (__LIB_0__::func_90())
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_265, "Paper_Car", 2, joaat("maverick"), 0);
						func_292(8);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						StringCopy(&cLocal_480, "", 24);
						StringCopy(&Local_484, "", 24);
						iLocal_475 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 3);
						RECORDING::REPLAY_START_EVENT(4);
						CUTSCENE::START_CUTSCENE(0);
						iLocal_256 = 8;
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					if (__LIB_40__::func_503(iLocal_268[0]))
					{
						if (__LIB_0__::func_724(iLocal_268[0], -1349.9064f, 740.0016f, 183.4498f, 1) < 25f)
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_268[0]) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iLocal_268[0]) == joaat("towtruck2"))
							{
								if (VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_268[0]) != 0)
								{
									VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_268[0], ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_268[0])));
									VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_268[0], 1f);
								}
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_268[0], -1349.9064f, 740.0016f, 183.4498f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 101f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_268[0], 1000f);
						}
					}
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					MISC::CLEAR_AREA(-1349.4404f, 738.9042f, 183.5858f, 6f, true, false, false, false);
					MISC::CLEAR_AREA(-1345.9774f, 729.113f, 184.8326f, 7f, true, false, false, false);
					CAM::STOP_GAMEPLAY_HINT(true);
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 0);
					__LIB_16__::func_21(&Local_493, 0);
					__LIB_13__::func_815(&Local_493, 1, 0);
					HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
					Local_248[iParam0 /*10*/].f_6++;
					Local_248[iParam0 /*10*/].f_7 = 0;
					break;
				case 2:
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						if (!BitTest(Local_248[iParam0 /*10*/].f_7, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1f);
							func_280(3, 4, 0, 0);
							RECORDING::REPLAY_STOP_EVENT();
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
							iLocal_256 = 9;
							MISC::SET_BIT(&(Local_248[iParam0 /*10*/].f_7), 0);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
						if (!BitTest(Local_248[iParam0 /*10*/].f_7, 1))
						{
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
							if (__LIB_7__::func_691())
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 1, false);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0f, true, false);
							}
							MISC::SET_BIT(&(Local_248[iParam0 /*10*/].f_7), 1);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Paper_Car", 0))
					{
						if (!BitTest(Local_248[iParam0 /*10*/].f_7, 2))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_265, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_266))
								{
									PED::DELETE_PED(&iLocal_266);
								}
								VEHICLE::DELETE_VEHICLE(&iLocal_265);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
								__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
			}
			if (!func_3(Local_267[10 /*10*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_267[10 /*10*/]))
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_267[10 /*10*/], true), 5f);
				}
				if (__LIB_40__::func_503(iLocal_268[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_267[10 /*10*/], iLocal_268[0], false))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_268[0], -1, false) && __LIB_0__::func_76(iLocal_268[0], Local_267[10 /*10*/], 1) < 10f)
						{
							PED::SET_PED_INTO_VEHICLE(Local_267[10 /*10*/], iLocal_268[0], 0);
						}
					}
				}
			}
			break;
		case 77:
			if (iLocal_256 == 2)
			{
				if (Local_248[iParam0 /*10*/].f_6 == 0)
				{
					Local_248[iParam0 /*10*/].f_6 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
			{
				switch (Local_248[iParam0 /*10*/].f_6)
				{
					case 0:
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							Local_248[iParam0 /*10*/].f_6++;
						}
						break;
					case 1:
						if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), false))
								{
									Var7 = { ENTITY::GET_ENTITY_COORDS(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), true) };
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", ENTITY::GET_ENTITY_MODEL(Local_267[10 /*10*/])) || !CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!__LIB_0__::func_86(Var7))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, 1963.9277f, 3789.891f, 30.252787f, 2002.2701f, 3813.0166f, 36.09295f, 19.5625f, false, true))
								{
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260f);
								}
							}
							PED::FORCE_PED_MOTION_STATE(Local_267[10 /*10*/], joaat("MotionState_Walk"), false, 0, false);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_267[10 /*10*/], 1f);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_267[10 /*10*/], true, false);
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 1000;
							Local_248[iParam0 /*10*/].f_8++;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())) || !CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!__LIB_0__::func_86(Var7))
							{
								if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var7, 1963.9277f, 3789.891f, 30.252787f, 2002.2701f, 3813.0166f, 36.09295f, 19.5625f, false, true))
								{
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 260f);
								}
							}
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
							if (__LIB_7__::func_691())
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
							}
							else
							{
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
							}
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
						break;
					}
			}
			break;
		case 76:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1152.7819f, -1523.988f, 3.5198f, 1) > (100f + 100f) && iLocal_256 != 10)
			{
				if (Local_248[iParam0 /*10*/].f_6 < 5 && Local_248[iParam0 /*10*/].f_6 > 0)
				{
					Local_248[iParam0 /*10*/].f_6 = 5;
				}
			}
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1152.7819f, -1523.988f, 3.5198f, 1) < 100f)
					{
						CUTSCENE::REQUEST_CUTSCENE("TRV_DRI_EXT", 8);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					iLocal_516 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.8173f, -1518.3027f, 9.6345f);
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_516))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_516);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (INTERIOR::IS_INTERIOR_READY(iLocal_516))
					{
						STREAMING::SET_INTERIOR_ACTIVE(iLocal_516, true);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 3:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 4:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 5:
					CUTSCENE::REMOVE_CUTSCENE();
					if (INTERIOR::IS_INTERIOR_READY(iLocal_516))
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_516);
					}
					Local_248[iParam0 /*10*/].f_6 = 0;
					break;
			}
			if (Local_248[iParam0 /*10*/].f_6 >= 0 && Local_248[iParam0 /*10*/].f_6 <= 4)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!func_3(Local_267[10 /*10*/]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Local_267[10 /*10*/], 0);
					}
				}
			}
			break;
		case 78:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_268[0])
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[0], true, true);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[0]));
					}
					iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_268[0], 0, false);
				}
			}
			break;
		case 79:
			if (!func_3(Local_267[10 /*10*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_267[10 /*10*/], 116, false);
				ENTITY::SET_ENTITY_PROOFS(Local_267[10 /*10*/], false, true, false, false, false, false, false, false);
				Local_248[iParam0 /*10*/].f_3 = 1;
			}
			break;
		case 80:
			if (!func_3(Local_267[10 /*10*/]))
			{
				switch (Local_248[iParam0 /*10*/].f_6)
				{
					case 0:
						if (func_99(10, 72) && !__LIB_15__::func_965("TRV3_END"))
						{
							func_280(7, 34, 1, 0);
							STREAMING::REQUEST_ANIM_DICT("misstrevor3leadinout");
							__LIB_1__::func_33(0);
							MISC::CLEAR_AREA_OF_VEHICLES(-1134.3741f, -1513.4758f, 3.4483f, 15f, false, false, false, false, false, false, 0);
							ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], -1148.0438f, -1520.9515f, 4.1386f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 300f);
							PED::FORCE_PED_MOTION_STATE(Local_267[10 /*10*/], joaat("MotionState_Walk"), false, 0, false);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_267[10 /*10*/], -1149.8651f, -1523.0471f, 9.6329f, 1f, -1, 0.2f, 0, 41f);
							if (CAM::DOES_CAM_EXIST(iLocal_492))
							{
								CAM::DESTROY_CAM(iLocal_492, false);
							}
							iLocal_492 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1133.8f, -1514.9f, 6.2f, 11.4f, 0f, 113.5f, 6500, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1133.7f, -1514.8f, 6.9f, 11.2f, 0f, 114.5f, 8500, 3, 2);
							MISC::CLEAR_AREA_OF_VEHICLES(-1133.8f, -1514.9f, 6.2f, 15f, false, false, false, false, false, false, 0);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_492, 0);
							CAM::SET_CAM_FOV(iLocal_492, 40f);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							func_292(9);
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
							Local_248[iParam0 /*10*/].f_6++;
							Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 6000;
						}
						break;
					case 1:
						CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						__LIB_1__::func_33(0);
						if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7 && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3leadinout"))
						{
							if (__LIB_7__::func_691())
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							}
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_492))
							{
								CAM::DESTROY_CAM(iLocal_492, false);
							}
							if (!func_3(Local_267[10 /*10*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], -1149.8651f, -1523.0471f, 9.6329f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 41f);
								TASK::TASK_PLAY_ANIM(Local_267[10 /*10*/], "misstrevor3leadinout", "trv_drive_ext_leadin_door_loop", 8f, -8f, -1, 1, 0f, false, false, false);
								PED::REMOVE_PED_HELMET(Local_267[10 /*10*/], true);
							}
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
						break;
					}
			}
			break;
		case 81:
			if (__LIB_15__::func_965("TRV3_DRI"))
			{
				TASK::TASK_PLAY_ANIM(Local_267[10 /*10*/], "misstrevor3leadinout", "trv_drive_ext_leadin_door_shout", 8f, -8f, -1, 1, 0f, false, false, false);
				Local_248[iParam0 /*10*/].f_3 = 1;
			}
			break;
		case 83:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					__LIB_17__::func_468(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1149.2781f, -1522.2864f, 9.6331f, 1f, 20000, 0.25f, 1, 40000f);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					__LIB_16__::func_309(0, 0);
					break;
			}
			break;
		case 84:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false))
						{
							Local_248[iParam0 /*10*/].f_6++;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Local_248[iParam0 /*10*/].f_6++;
						}
						else
						{
							func_295("TRV3_MUSIC_END", 0, "");
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
					}
					break;
				case 1:
					if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_295("TRV3_MUSIC_END", 0, "");
							Local_248[iParam0 /*10*/].f_3 = 1;
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
							{
								iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar8))
								{
									Local_248[iParam0 /*10*/].f_6++;
									Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
								}
							}
							else
							{
								func_295("TRV3_MUSIC_END", 0, "");
								Local_248[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					break;
				case 2:
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						func_295("TRV3_RADIO_TRUCK", 1, "");
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 85:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 86:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (func_345(41))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_FLOYDS"))
						{
							AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
						}
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 87:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1152.7819f, -1523.988f, 3.5198f, 1) < 80f)
			{
				if (!STREAMING::IS_STREAMVOL_ACTIVE())
				{
					iLocal_283 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1133.8f, -1514.9f, 6.2f, __LIB_3__::func_80(11.4f, 0f, 113.5f), 20f, 12, 33);
				}
			}
			else if (STREAMING::IS_STREAMVOL_ACTIVE())
			{
				STREAMING::STREAMVOL_DELETE(iLocal_283);
			}
			break;
		case 88:
			if (func_99(8, 75))
			{
				Local_248[iParam0 /*10*/].f_3 = 1;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar9)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar9)))
				{
					fVar10 = __LIB_0__::func_724(iVar9, -1350.115f, 729.2382f, 184.7668f, 1);
					fVar11 = (250f - fVar10);
					if (fVar11 < 0f)
					{
						fVar11 = 0f;
					}
					fVar11 = (fVar11 / 250f);
					fVar11 = (fVar11 * 1000f);
					fVar12 = ENTITY::GET_ENTITY_SPEED(iVar9);
					if (fVar12 > 22f)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar9, 1, 0f, -fVar11, 0f, false, true, false, false);
					}
				}
			}
			break;
		case 89:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
					STREAMING::REQUEST_MODEL(joaat("A_F_M_Salton_01"));
					STREAMING::REQUEST_MODEL(joaat("hexer"));
					STREAMING::REQUEST_ANIM_SET("move_f@flee@a");
					Local_254[0 /*9*/].f_2 = { 100.1487f, 3668.9001f, 38.7549f };
					Local_254[0 /*9*/].f_5 = { 71.9131f, 3695.3372f, 39.6061f };
					Local_254[0 /*9*/].f_8 = 1;
					Local_254[1 /*9*/].f_2 = { 18.9311f, 3661.2852f, 38.8146f };
					Local_254[1 /*9*/].f_5 = { 91.447f, 3590.4426f, 38.755f };
					Local_254[1 /*9*/].f_8 = 4;
					Local_254[2 /*9*/].f_2 = { 65.1302f, 3681.3906f, 38.8345f };
					Local_254[2 /*9*/].f_5 = { 58.3865f, 3583.418f, 38.678f };
					Local_254[2 /*9*/].f_8 = 4;
					Local_254[3 /*9*/].f_2 = { 6.81f, 3701.0938f, 38.5752f };
					Local_254[3 /*9*/].f_5 = { 39.2396f, 3703.714f, 39.5151f };
					Local_254[3 /*9*/].f_8 = 2;
					Local_254[4 /*9*/].f_2 = { 95.5319f, 3742.6921f, 38.6829f };
					Local_254[4 /*9*/].f_5 = { 107.2796f, 3519.943f, 38.7924f };
					Local_254[4 /*9*/].f_8 = 6;
					Local_254[5 /*9*/].f_2 = { 11.4552f, 3702.3096f, 38.6405f };
					Local_254[5 /*9*/].f_5 = { -32.4513f, 3605.8613f, 42.4539f };
					Local_254[5 /*9*/].f_8 = 6;
					Local_254[6 /*9*/].f_2 = { 99.4489f, 3636.078f, 38.7549f };
					Local_254[6 /*9*/].f_5 = { 31.4033f, 3667.5022f, 39.4457f };
					Local_254[6 /*9*/].f_8 = 3;
					Local_254[7 /*9*/].f_2 = { 28.5668f, 3730.8567f, 38.6138f };
					Local_254[7 /*9*/].f_5 = { 45.4471f, 3588.1135f, 38.6882f };
					Local_254[7 /*9*/].f_8 = 4;
					Local_254[8 /*9*/].f_2 = { 93.1663f, 3726.8423f, 38.5199f };
					Local_254[8 /*9*/].f_5 = { 85.9274f, 3607.3198f, 38.8282f };
					Local_254[8 /*9*/].f_8 = 4;
					Local_254[9 /*9*/].f_2 = { 36.5757f, 3639.2393f, 38.8501f };
					Local_254[9 /*9*/].f_5 = { 46.3355f, 3744.589f, 39.0855f };
					Local_254[9 /*9*/].f_8 = 0;
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					if ((STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@idle_c") && STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_Salton_01"))) && STREAMING::HAS_ANIM_SET_LOADED("move_f@flee@a"))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					iVar13 = 0;
					while (iVar13 < Local_254.f_0)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_254[iVar13 /*9*/]))
						{
							if (Local_248[iParam0 /*10*/].f_7 < 20)
							{
								if (!__LIB_13__::func_784(Local_254[iVar13 /*9*/].f_2, 10f, 1120403456))
								{
									Local_254[iVar13 /*9*/] = PED::CREATE_PED(26, joaat("A_F_M_Salton_01"), Local_254[iVar13 /*9*/].f_2, 0f, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_254[iVar13 /*9*/], iLocal_288);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_254[iVar13 /*9*/], "move_f@flee@a", 0.25f);
									PED::SET_PED_HEARING_RANGE(Local_254[iVar13 /*9*/], 20f);
									switch (iVar13)
									{
										case 0:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 0, 1, 0);
											break;
										case 1:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 1, 1, 0);
											break;
										case 2:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 0, 0, 0);
											break;
										case 3:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 0, 0, 0);
											break;
										case 4:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 2, 0, 0);
											break;
										case 5:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 1, 0, 0);
											break;
										case 6:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 0, 1, 0);
											break;
										case 7:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 0, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 0, 0, 0);
											break;
										case 8:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 2, 0, 0);
											break;
										case 9:
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 0, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 2, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 3, 1, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 4, 1, 1, 0);
											PED::SET_PED_COMPONENT_VARIATION(Local_254[iVar13 /*9*/], 6, 1, 0, 0);
											break;
									}
									Local_248[iParam0 /*10*/].f_7++;
									switch (Local_254[iVar13 /*9*/].f_8)
									{
										case 0:
										case 1:
										case 2:
										case 3:
											switch (Local_254[iVar13 /*9*/].f_8)
											{
												case 0:
													iVar14 = 1;
													break;
												case 1:
													iVar14 = 2;
													break;
												case 2:
													iVar14 = 3;
													break;
												case 3:
													iVar14 = 4;
													break;
											}
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_254[iVar13 /*9*/].f_5, 2f, -1, 7f, 0, 40000f);
											if (!HUD::DOES_BLIP_EXIST(Local_297[iVar14 /*17*/].f_16))
											{
												TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_254[iVar13 /*9*/].f_5, 2000);
												TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@idle_c", "react_big_variations_s", 8f, -8f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, "reaction@male_stand@big_variations@idle_c", "react_big_variations_p", 8f, -8f, -1, 0, 0f, false, false, false);
											}
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1500f, -1, false, false);
											func_139(&(Local_254[iVar13 /*9*/]), 0);
											break;
										case 4:
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_254[iVar13 /*9*/].f_5, 2f, -1, 15f, 0, 40000f);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
											TASK::TASK_COWER(0, -1);
											func_139(&(Local_254[iVar13 /*9*/]), 0);
											break;
										case 5:
											func_140();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_254[iVar13 /*9*/].f_5, 2f, -1, 2f, 0, 40000f);
											TASK::TASK_COWER(0, -1);
											func_139(&(Local_254[iVar13 /*9*/]), 0);
											break;
										case 6:
											Local_254[iVar13 /*9*/].f_1 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), Local_254[iVar13 /*9*/].f_2, 180f, true, true, false);
											PED::SET_PED_INTO_VEHICLE(Local_254[iVar13 /*9*/], Local_254[iVar13 /*9*/].f_1, -1);
											func_140();
											TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_254[iVar13 /*9*/].f_1, Local_254[iVar13 /*9*/].f_5, 15f, 0, 0, 786468, 10f, 5f);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1500f, -1, false, false);
											func_139(&(Local_254[iVar13 /*9*/]), 0);
											break;
										case 7:
											break;
										}
									}
							}
						}
						else if (!PED::IS_PED_INJURED(Local_254[iVar13 /*9*/]))
						{
							if ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_254[iVar13 /*9*/], 1) > 120f && Local_254[iVar13 /*9*/].f_8 != 6) || (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_254[iVar13 /*9*/], 1) > 200f && Local_254[iVar13 /*9*/].f_8 == 6))
							{
								PED::SET_PED_KEEP_TASK(Local_254[iVar13 /*9*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_254[iVar13 /*9*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_254[iVar13 /*9*/].f_1))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_254[iVar13 /*9*/].f_1));
								}
							}
						}
						iVar13++;
					}
					break;
			}
			break;
		case 90:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!func_3(Local_267[10 /*10*/]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", Local_267[10 /*10*/], 0);
				}
			}
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (__LIB_0__::func_90())
					{
						func_292(10);
						__LIB_0__::func_325();
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						if (!func_3(Local_267[10 /*10*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_267[10 /*10*/], "Wade", 0, 0, 0);
						}
						MISC::CLEAR_AREA(-1155.3761f, -1518.0754f, 3.5626f, 10f, true, false, false, false);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						CUTSCENE::START_CUTSCENE(0);
						if (STREAMING::IS_STREAMVOL_ACTIVE())
						{
							STREAMING::STREAMVOL_DELETE(iLocal_283);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 3);
						RECORDING::REPLAY_START_EVENT(4);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (__LIB_40__::func_503(iLocal_268[0]))
						{
							if (!VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
							{
								if (__LIB_0__::func_724(iLocal_268[0], -1156.9592f, -1521.3325f, 3.3315f, 1) < 7f)
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_268[0], -1156.9592f, -1521.3325f, 3.3315f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 216f);
								}
							}
						}
						RECORDING::REPLAY_STOP_EVENT();
						__LIB_16__::func_937(-1158.0652f, -1517.1478f, 2.732938f, -1146.635f, -1532.795f, 6.208485f, 8.75f, -1151.1544f, -1530.3187f, 3.2486f, 214.5216f, 4.5f, 20f, 2.5f, 1, 1, 1, 1, 0);
						iLocal_492 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
						CAM::SET_CAM_COORD(iLocal_492, -1157.1849f, -1524.2987f, 4.493604f);
						CAM::SET_CAM_ROT(iLocal_492, 8.201474f, -0.184709f, -78.422516f, 2);
						CAM::SET_CAM_FOV(iLocal_492, 40f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 91:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(iLocal_492))
					{
						CAM::DESTROY_CAM(iLocal_492, false);
					}
					iLocal_492 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1157.1849f, -1524.2987f, 4.493604f, 8.201474f, -0.184709f, -78.422516f, 7500, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1157.1849f, -1524.2987f, 4.493604f, -0.144409f, -0.184709f, -129.1692f, 7500, 3, 2);
					__LIB_16__::func_937(-1158.0652f, -1517.1478f, 2.732938f, -1146.635f, -1532.795f, 6.208485f, 8.75f, -1151.1544f, -1530.3187f, 3.2486f, 214.5216f, 4.5f, 20f, 2.5f, 1, 1, 1, 1, 0);
					CAM::SET_CAM_FOV(iLocal_492, 40f);
					CAM::SHAKE_CAM(iLocal_492, "Hand_shake", 0.3f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_492, 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					__LIB_0__::func_151("TRV3_END1", -1);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 92:
			if (STREAMING::NEW_LOAD_SCENE_START(-1159.687f, -1519.1455f, 11.5989f, __LIB_3__::func_80(-15.0004f, 0f, -161.4299f), 8f, 0))
			{
				Local_248[iParam0 /*10*/].f_3 = 1;
			}
			break;
		case 93:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(iLocal_492))
					{
						CAM::DESTROY_CAM(iLocal_492, false);
					}
					iLocal_492 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1149.8f, -1515.2f, 11.7f, -19.4f, 0f, -23.2f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1149.9f, -1515.3f, 11.6f, -19.4f, 0f, -23.2f, 7500, 3, 2);
					CAM::SET_CAM_FOV(iLocal_492, 50f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_492, 0);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					__LIB_0__::func_151("TRV3_END2", -1);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 94:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(iLocal_492))
					{
						CAM::DESTROY_CAM(iLocal_492, false);
					}
					iLocal_492 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1145.5f, -1515.9f, 11.5f, -2.8f, 0f, -52.1f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1145.5f, -1516f, 11.1f, -3.3f, 0f, 8.5f, 7500, 3, 2);
					CAM::SET_CAM_FOV(iLocal_492, 38f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_492, 3);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_155(PLAYER::PLAYER_PED_ID(), 12, 45, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1150.5624f, -1513.6116f, 9.6327f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256f);
					Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					__LIB_0__::func_151("TRV3_END3", -1);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 95:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (CAM::DOES_CAM_EXIST(iLocal_492))
					{
						CAM::DESTROY_CAM(iLocal_492, false);
					}
					iLocal_492 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1148.1903f, -1512.6702f, 11.3973f, -11.8298f, 0f, 101.1389f, 4000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_492, -1149.6112f, -1511.7377f, 11.5468f, -13.2912f, 0f, 142.1143f, 7500, 3, 2);
					CAM::SET_CAM_FOV(iLocal_492, 50f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_492, 3);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 7500;
					__LIB_0__::func_151("TRV3_END4", -1);
					Local_248[iParam0 /*10*/].f_6++;
					break;
				case 1:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						Local_248[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 3000;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-114f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
						TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), -1150.348f, -1514.8767f, 11.0266f, 2000);
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 2:
					if (MISC::GET_GAME_TIMER() > Local_248[iParam0 /*10*/].f_7)
					{
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
		case 96:
			switch (Local_248[iParam0 /*10*/].f_6)
			{
				case 0:
					if (func_99(1, 92))
					{
						Local_248[iParam0 /*10*/].f_6++;
					}
					break;
				case 1:
					if (__LIB_0__::func_500())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_ALL_CAMS(false);
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_248[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			break;
	}
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x14AF3
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
										func_155(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_155(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_165(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_164(iParam0, iVar10, &iVar4, 1))
							{
								func_155(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_155(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_155(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_155(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_155(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_155(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_155(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_155(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_155(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_155(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_164(iParam0, iVar10, &iVar4, 0))
		{
			func_155(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_156(iParam0, iVar10, &iVar4))
		{
			func_155(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_156(int iParam0, int iParam1, int iParam2)//Position - 0x15303
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_157(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2)//Position - 0x1538F
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
				if (!func_157(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_157(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_157(iParam0, 14, iVar4))
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
			if (!func_157(iParam0, 14, uVar8[iVar7]))
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

int func_164(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x15E4F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_157(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0x15EE5
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
				if (func_157(iParam0, iParam1, iVar0))
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
				if (func_157(iParam0, iParam1, iVar1))
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

void func_280(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32F0A
{
	Local_246[iParam0 /*6*/] = iParam1;
	Local_246[iParam0 /*6*/].f_1 = iParam2;
	Local_246[iParam0 /*6*/].f_2 = 1;
	Local_246[iParam0 /*6*/].f_3 = iParam3;
	Local_246[iParam0 /*6*/].f_4 = 0;
}

void func_292(int iParam0)//Position - 0x33410
{
	iParam0 = iParam0;
	__LIB_0__::func_429();
}

void func_295(char* sParam0, int iParam1, char* sParam2)//Position - 0x33732
{
	iLocal_524 = 1;
	iLocal_525 = iParam1;
	sLocal_527 = sParam0;
	sLocal_528 = sParam2;
}

Vector3 func_298(int iParam0)//Position - 0x33790
{
	return Local_297[iParam0 /*17*/].f_7[0 /*3*/] + Local_297[iParam0 /*17*/].f_7[1 /*3*/] / Vector(2f, 2f, 2f);
}

void func_306(int iParam0)//Position - 0x37A76
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.2f, 0.8f);
	Var1 = { Local_297[iParam0 /*17*/].f_7[0 /*3*/] + Local_297[iParam0 /*17*/].f_7[1 /*3*/] - Local_297[iParam0 /*17*/].f_7[0 /*3*/] * Vector(fVar0, fVar0, fVar0) };
	switch (iParam0)
	{
		case 0:
			Var1.f_2 = (42.78f - 2f);
			break;
		case 1:
			Var1.f_2 = (42.64144f - 2f);
			break;
		case 2:
			Var1.f_2 = (42.99f - 2f);
			break;
		case 3:
			Var1.f_2 = (42.9f - 2f);
			break;
		case 4:
			Var1.f_2 = (42.77f - 2f);
			break;
	}
	Var2 = { __LIB_26__::func_475(Var1, 1.7f) };
	Var2 = { Var2.f_0, Var2.f_1, Var1.f_2 };
	FIRE::ADD_EXPLOSION_WITH_USER_VFX(Var2, 0, MISC::GET_HASH_KEY("EXP_VFXTAG_TREV3_TRAILER"), 0.5f, true, false, 1f);
}

void func_309(var uParam0, int iParam1)//Position - 0x37BD3
{
	(uParam0[iParam1 /*24*/])->f_1 = 0;
	(uParam0[iParam1 /*24*/])->f_2 = 0;
	(uParam0[iParam1 /*24*/])->f_3 = 0;
	(uParam0[iParam1 /*24*/])->f_4 = 0;
	(uParam0[iParam1 /*24*/])->f_5 = 0;
	(uParam0[iParam1 /*24*/])->f_7 = 0;
	(uParam0[iParam1 /*24*/])->f_8 = 0;
	(uParam0[iParam1 /*24*/])->f_10 = 0;
	(uParam0[iParam1 /*24*/])->f_11 = 0;
	(uParam0[iParam1 /*24*/])->f_12 = { 0f, 0f, 0f };
	(uParam0[iParam1 /*24*/])->f_15 = { 0f, 0f, 0f };
	(uParam0[iParam1 /*24*/])->f_18 = 0f;
	(*uParam0)[iParam1 /*24*/] = 0;
}

int func_310(int iParam0, int iParam1)//Position - 0x37C56
{
	if (Local_248[iParam0 /*10*/] == iParam1)
	{
		return Local_248[iParam0 /*10*/].f_6;
	}
	else if (Local_248[iParam0 /*10*/] != 0)
	{
	}
	return 0;
}

int func_311(int iParam0, int iParam1)//Position - 0x37C85
{
	char cVar0[64];
	if (Local_248[iParam0 /*10*/] == iParam1)
	{
		return Local_248[iParam0 /*10*/].f_7;
	}
	else if (Local_248[iParam0 /*10*/] != 0)
	{
		StringCopy(&cVar0, "Fail: GET_ACTION_INTA() ", 64);
		StringIntConCat(&cVar0, iParam1, 64);
		StringConCat(&cVar0, " ", 64);
		StringIntConCat(&cVar0, Local_248[iParam0 /*10*/], 64);
	}
	return 0;
}

int func_314(int iParam0)//Position - 0x37EEF
{
	int iVar0;
	iVar0 = (iParam0 - Local_251[0 /*6*/]);
	if (Local_251[iVar0 /*6*/] == iParam0)
	{
		return Local_251[iVar0 /*6*/].f_5;
	}
	return 0;
}

void func_315(var uParam0)//Position - 0x37F1E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_0__::func_645(1000))
	{
		bLocal_240 = true;
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && bLocal_240 == 1)
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		CLOCK::SET_CLOCK_TIME(22, 0, 0);
		func_292(0);
		if (func_345(50))
		{
			if (__LIB_40__::func_503(iLocal_268[0]))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[0], false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_268[0], true, false);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_268[0], uParam0->f_9);
				}
				else if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[0], false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_268[0], true, false);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_268[0], 59.1493f, 3605.3535f, 38.8528f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 358.6649f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_268[0], 5f);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_268[0], 4);
				}
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.6824f, 38.8624f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
				if (!func_3(Local_267[10 /*10*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 0.8571f);
				}
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.6824f, 38.8624f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
			if (!func_3(Local_267[10 /*10*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 0.8571f);
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1f);
		uParam0->f_6 = 6;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_1__::func_33(0);
	if (uParam0->f_6 == 0)
	{
		if (iLocal_261 == 0 || iLocal_261 == -1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_268[0]);
				if ((VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
					uParam0->f_6 = 1;
				}
				else if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
					uParam0->f_6 = 1;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
				uParam0->f_6 = 1;
			}
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			uParam0->f_6 = 1;
		}
	}
	STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	switch (uParam0->f_6)
	{
		case 0:
			bLocal_240 = false;
			Local_298.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(25.25779f, 3600.882f, 28.990997f, 113.032845f, 3570.9792f, 52.484802f, 61.25f, false, false, false, false, false, 0, 0);
			if (__LIB_6__::func_252(59.2455f, 3609.4214f, 40.7427f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1) > 180f)
			{
				SYSTEM::SETTIMERA(0);
				STREAMING::SET_SRL_TIME(0f);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 52.9476f, 3616.5872f, 39.7652f, 7.6593f, 0.0986f, -144.2271f, 6000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 56.0832f, 3615.251f, 39.9863f, 2.4213f, 0.0595f, -149.8007f, 6000, 3, 2);
				CAM::SET_CAM_FOV(Local_298.f_4, 30f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("trev3_trL", 0, &Var1);
					ENTITY::SET_ENTITY_COORDS(iLocal_268[0], Var1, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 73f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_268[0], 12f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_268[0], "trev3_trL", 786468, 0, 0, -1, -1f, false, 2f);
				}
			}
			else
			{
				SYSTEM::SETTIMERA(6000);
				STREAMING::SET_SRL_TIME(6000f);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 64.0716f, 3612.8428f, 41.0038f, -1.3547f, 0f, 147.7515f, 6000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 60.8387f, 3613.255f, 39.9549f, 3.0742f, 0f, 155.9106f, 6000, 3, 2);
				CAM::SET_CAM_FOV(Local_298.f_4, 40f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD("trev3_trR", 0, &Var2);
					ENTITY::SET_ENTITY_COORDS(iLocal_268[0], Var2, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 254f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_268[0], 12f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iLocal_268[0], "trev3_trR", 786468, 0, 0, -1, -1f, false, 2f);
				}
			}
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_298.f_4, 2);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
			CAM::SHAKE_CAM(Local_298.f_4, "Hand_shake", 0.3f);
			CAM::SET_CAM_ACTIVE(Local_298.f_4, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			RECORDING::REPLAY_START_EVENT(4);
			if (CAM::IS_SCREEN_FADED_OUT() && bLocal_240 == 0)
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			func_295("TRV3_START", 1, "TRV3_ALERTED");
			AUDIO::START_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			uParam0->f_7 = SYSTEM::TIMERA() + 6000;
			uParam0->f_6 = 1;
			break;
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1) && SYSTEM::TIMERA() > uParam0->f_7)
			{
				CAM::DESTROY_ALL_CAMS(false);
				if (!CAM::DOES_CAM_EXIST(Local_298.f_4))
				{
					Local_298.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if ((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0]))) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
					{
						uParam0->f_9 = ENTITY::GET_ENTITY_SPEED(iLocal_268[0]);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[0], true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_268[0], false, false);
					}
				}
				if (iLocal_261 == -1)
				{
					iLocal_261 = 0;
				}
				switch (iLocal_261)
				{
					case 0:
						SYSTEM::SETTIMERA(12000);
						STREAMING::SET_SRL_TIME(12000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 67.9004f, 3636.959f, 43.3989f, -1.8034f, 0f, 9.4512f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 64.805f, 3638.78f, 45.6303f, -3.6109f, 0f, 12.5594f, 6000, 3, 2);
						CAM::SET_CAM_FOV(Local_298.f_4, 47.8f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_298.f_4, 3);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if ((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0]))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_268[0], 59.0078f, 3604.284f, 38.8316f, 10f, 0, 0, 786469, 3f, 3f);
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_268[0], 4);
								VEHICLE::SET_VEHICLE_SIREN(iLocal_268[0], false);
							}
						}
						uParam0->f_7 = SYSTEM::TIMERA() + 7000;
						break;
					case 1:
						SYSTEM::SETTIMERA(19000);
						STREAMING::SET_SRL_TIME(19000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 142.7424f, 3728.2502f, 44.4219f, -1.2115f, 0f, 105.4402f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 142.0027f, 3728.046f, 47.1392f, -1.2115f, 0f, 107.902f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_298.f_4, 50f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_298.f_4, 3);
						uParam0->f_7 = SYSTEM::TIMERA() + 5000;
						break;
					case 2:
						SYSTEM::SETTIMERA(24000);
						STREAMING::SET_SRL_TIME(24000f);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 83.0859f, 3796.3843f, 45.6352f, -3.6228f, 0f, 178.2066f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 83.9047f, 3795.4473f, 49.5695f, -3.6228f, 0f, 173.1413f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_298.f_4, 50f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_298.f_4, 3);
						uParam0->f_7 = SYSTEM::TIMERA() + 5000;
						break;
				}
				CAM::SET_CAM_ACTIVE(Local_298.f_4, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				Local_298.f_0 = __LIB_11__::func_762();
				if (iLocal_244 == 1 || ((iLocal_244 == 0 && CLOCK::GET_CLOCK_HOURS() < 21) && CLOCK::GET_CLOCK_HOURS() > 6))
				{
					iLocal_244 = 1;
					iLocal_245 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_245, "TIME_LAPSE_MASTER", 0, true);
					AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
				}
				func_354(2, 39, 1);
				uParam0->f_6 = 2;
			}
			break;
		case 2:
			if ((uParam0->f_7 - SYSTEM::TIMERA()) < 7000)
			{
				if (iLocal_244 == 1 || ((iLocal_244 == 0 && CLOCK::GET_CLOCK_HOURS() < 21) && CLOCK::GET_CLOCK_HOURS() > 6))
				{
					iLocal_244 = 1;
					__LIB_16__::func_624(22, 0, "", "", &Local_298, -1082130432, 0, 1, 1065353216);
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (SYSTEM::TIMERA() > uParam0->f_7)
			{
				SYSTEM::SETTIMERA(29000);
				STREAMING::SET_SRL_TIME(29000f);
				AUDIO::STOP_SOUND(iLocal_245);
				AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				CAM::DESTROY_ALL_CAMS(false);
				Local_298.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 52.5215f, 3704.1267f, 39.5312f, 2.4381f, 0f, 172.2686f, 5700, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 52.6653f, 3703.8884f, 39.5404f, 3.6794f, 0f, 172.1825f, 5700, 3, 2);
				CAM::SET_CAM_FOV(Local_298.f_4, 29.66f);
				CAM::SHAKE_CAM(Local_298.f_4, "Hand_shake", 0.8f);
				uParam0->f_6++;
			}
			break;
		case 3:
			if (func_318("TRV3_CHAT", "TRV3_CHAT_1", 3, Local_267[3 /*10*/], "TREV3BIKER2", 4, Local_267[4 /*10*/], "TRV3BIKER3", -1, 0, 0, 8))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_292))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_292, 0f);
				}
				uParam0->f_6++;
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (CAM::GET_CAM_SPLINE_PHASE(Local_298.f_4) >= 0.93f && !__LIB_15__::func_965("TRV3_CHAT"))
			{
				SYSTEM::SETTIMERA(32295);
				STREAMING::SET_SRL_TIME(32295f);
				HUD::CLEAR_PRINTS();
				CAM::DESTROY_CAM(Local_298.f_4, false);
				Local_298.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 99.6278f, 3750.408f, 39.9449f, 1.9937f, 0f, 176.8776f, 6500, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 99.6649f, 3751.0872f, 39.9212f, 1.9937f, 0f, 176.8776f, 6500, 3, 2);
				CAM::SET_CAM_FOV(Local_298.f_4, 37.16f);
				CAM::SHAKE_CAM(Local_298.f_4, "Hand_shake", 0.8f);
				func_292(2);
				uParam0->f_6++;
			}
			break;
		case 5:
			if (func_318("TRV3_ST5", "TRV3_ST5_9", 4, Local_267[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, 8))
			{
				uParam0->f_6 = 41;
			}
			break;
		case 41:
			if (func_318("TRV3_ST5", "TRV3_ST5_11", 4, Local_267[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, 8))
			{
				uParam0->f_6 = 42;
			}
			break;
		case 42:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (CAM::GET_CAM_SPLINE_PHASE(Local_298.f_4) >= 0.95f && !__LIB_0__::func_75())
			{
				uParam0->f_7 = 0;
				HUD::CLEAR_PRINTS();
				if (func_345(50))
				{
					if (__LIB_40__::func_503(iLocal_268[0]))
					{
						if ((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0]))) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_268[0], false);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_268[0], true, false);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_268[0], uParam0->f_9);
						}
						else
						{
							SYSTEM::SETTIMERA(37500);
							STREAMING::SET_SRL_TIME(37500f);
							CAM::DESTROY_CAM(Local_298.f_4, false);
							Local_298.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 57.3634f, 3603.9126f, 42.2868f, 3.9263f, 0f, -3.3426f, 6500, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(Local_298.f_4, 57.11f, 3602.3652f, 40.878f, 2.4529f, 0f, -13.2129f, 3500, 3, 2);
							CAM::SET_CAM_FOV(Local_298.f_4, 50f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_298.f_4, 2);
							uParam0->f_7 = SYSTEM::TIMERA() + 3500;
							ENTITY::SET_ENTITY_COORDS(iLocal_268[0], 59.1493f, 3605.3535f, 38.8528f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 358.6649f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_268[0], 5f);
							uParam0->f_6 = 50;
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.6824f, 38.8624f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
						if (!func_3(Local_267[10 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 0.8571f);
						}
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 59.8307f, 3605.6824f, 38.8624f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 348.9076f);
					if (!func_3(Local_267[10 /*10*/]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], 60.9103f, 3602.312f, 38.7845f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 0.8571f);
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1f);
				if (uParam0->f_6 != 50)
				{
					uParam0->f_6 = 6;
				}
			}
			break;
		case 50:
			if (SYSTEM::TIMERA() > uParam0->f_7)
			{
				CAM::DESTROY_CAM(Local_298.f_4, false);
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (STREAMING::IS_STREAMVOL_ACTIVE())
				{
					STREAMING::STREAMVOL_DELETE(iLocal_283);
				}
				func_292(3);
				CAM::DO_SCREEN_FADE_IN(1000);
				AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				__LIB_15__::func_228(&Local_298, 0, 0, 2000, 1, 0, 0, 0);
				STREAMING::END_SRL();
				RECORDING::REPLAY_STOP_EVENT();
				uParam0->f_3 = 1;
			}
			break;
		case 6:
			if (__LIB_7__::func_691() && !bLocal_240)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			}
			AUDIO::STOP_SOUND(iLocal_245);
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			CAM::DESTROY_CAM(Local_298.f_4, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, 0);
			func_292(4);
			CAM::DO_SCREEN_FADE_IN(1000);
			AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
			__LIB_15__::func_228(&Local_298, 0, 0, 2000, 1, 0, 0, 0);
			STREAMING::END_SRL();
			RECORDING::REPLAY_STOP_EVENT();
			STREAMING::SET_SRL_FORCE_PRESTREAM(0);
			uParam0->f_3 = 1;
			break;
	}
}

int func_318(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11)//Position - 0x39037
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && func_3(iParam3))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam6) && func_3(iParam6))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam9) && func_3(iParam9))
	{
		return 1;
	}
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!__LIB_0__::func_75())
		{
			func_124(sParam0, iParam2, iParam5, iParam8, -1);
			func_320(iParam2, iParam3, sParam4);
			if (iParam5 != -1)
			{
				func_320(iParam5, iParam6, sParam7);
			}
			if (iParam8 != -1)
			{
				func_320(iParam8, iParam9, sParam10);
			}
			if (__LIB_16__::func_9(&uLocal_306, cLocal_471, sParam0, sParam1, iParam11, 0, 0))
			{
				iLocal_472 = 0;
				return 1;
			}
			else if (iLocal_473 != MISC::GET_GAME_TIMER())
			{
				iLocal_472++;
				iLocal_473 = MISC::GET_GAME_TIMER();
				if (iLocal_472 >= 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_320(int iParam0, int iParam1, char* sParam2)//Position - 0x39173
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_529)
	{
		if (iLocal_529[iVar0] == iParam1)
		{
			__LIB_0__::func_221(&uLocal_306, iVar0);
			iLocal_529[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_529[iParam0] != 0)
	{
		__LIB_0__::func_221(&uLocal_306, iParam0);
	}
	__LIB_0__::func_222(&uLocal_306, iParam0, iParam1, sParam2, 0, 1);
	if (MISC::ARE_STRINGS_EQUAL(sParam2, "WomanInTrailer"))
	{
		__LIB_5__::func_395(&uLocal_306, 7, 70.8631f, 3692.8467f, 41.6392f);
	}
	iLocal_529[iParam0] = iParam1;
}

int func_344(int iParam0)//Position - 0x39CFD
{
	int iVar0;
	iVar0 = (iParam0 - Local_251[0 /*6*/]);
	if (Local_251[iVar0 /*6*/] == iParam0)
	{
		if (Local_251[iVar0 /*6*/].f_1 && !Local_251[iVar0 /*6*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0)//Position - 0x39D3F
{
	int iVar0;
	iVar0 = (iParam0 - Local_251[0 /*6*/]);
	if (iVar0 < 34 && iVar0 >= 0)
	{
		if (Local_251[iVar0 /*6*/] == iParam0)
		{
			if (Local_251[iVar0 /*6*/].f_1 && Local_251[iVar0 /*6*/].f_2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_348(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5)//Position - 0x39EA9
{
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, 4112, 1000f);
}

int func_349(int iParam0, var uParam1)//Position - 0x39ECA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0 /*24*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_350(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x39EF7
{
	(*uParam0)[iParam1 /*24*/] = uParam2;
	(uParam0[iParam1 /*24*/])->f_8 = iParam3;
	(uParam0[iParam1 /*24*/])->f_20 = iParam4;
	(uParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_48)
	{
		iLocal_48 = iParam1 + 1;
	}
}

void func_351(int iParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4)//Position - 0x39F32
{
	Local_267[iParam0 /*10*/] = PED::CREATE_PED(26, iParam1, Param3, fParam4, true, true);
	if (iParam0 == 7)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[iParam0 /*10*/], iLocal_285);
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[iParam0 /*10*/], iLocal_284[iParam0]);
	}
	PED::SET_PED_AS_ENEMY(Local_267[iParam0 /*10*/], true);
	PED::SET_PED_SEEING_RANGE(Local_267[iParam0 /*10*/], fLocal_289);
	PED::SET_PED_HEARING_RANGE(Local_267[iParam0 /*10*/], fLocal_290);
	PED::SET_COMBAT_FLOAT(Local_267[iParam0 /*10*/], 14, 3f);
	PED::SET_PED_ACCURACY(Local_267[iParam0 /*10*/], 30);
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_267[iParam0 /*10*/]);
	__LIB_0__::func_609(Local_267[iParam0 /*10*/], 0);
	if (iParam2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_267[iParam0 /*10*/], iParam2, -1, false, true);
	}
}

void func_353(int iParam0, int iParam1)//Position - 0x3A089
{
	if (Local_246[iParam0 /*6*/] == iParam1)
	{
		Local_246[iParam0 /*6*/].f_1 = 1;
	}
}

void func_354(int iParam0, int iParam1, int iParam2)//Position - 0x3A0A7
{
	char cVar0[64];
	if (Local_248[iParam0 /*10*/] == iParam1)
	{
		Local_248[iParam0 /*10*/].f_6 = iParam2;
	}
	else if (Local_248[iParam0 /*10*/] != 0)
	{
		StringCopy(&cVar0, "Fail: SET_ACTION_FLAG() ", 64);
		StringIntConCat(&cVar0, iParam1, 64);
		StringConCat(&cVar0, " ", 64);
		StringIntConCat(&cVar0, Local_248[iParam0 /*10*/], 64);
	}
}

void func_355(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3A0F7
{
	Local_248[iParam0 /*10*/] = iParam1;
	Local_248[iParam0 /*10*/].f_1 = 1;
	Local_248[iParam0 /*10*/].f_2 = iParam3;
	Local_248[iParam0 /*10*/].f_3 = iParam2;
	Local_248[iParam0 /*10*/].f_6 = 0;
	Local_248[iParam0 /*10*/].f_4 = 0;
	Local_248[iParam0 /*10*/].f_7 = 0;
	Local_248[iParam0 /*10*/].f_8 = 0;
	Local_248[iParam0 /*10*/].f_9 = 0f;
}

void func_357()//Position - 0x3A1CC
{
	if (!func_3(Local_267[10 /*10*/]))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_267[10 /*10*/], true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_267[10 /*10*/], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[10 /*10*/], iLocal_287);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_267[10 /*10*/], false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_267[10 /*10*/], true);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_267[10 /*10*/], 0);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Local_267[10 /*10*/], 0);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_267[10 /*10*/]);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 3, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 4, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 8, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 9, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 10, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_267[10 /*10*/], 11, 0, 0, 0);
	}
}

int func_365(int iParam0, int iParam1)//Position - 0x3AB7B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_251.f_0)
	{
		if (iParam0 == Local_251[iVar0 /*6*/])
		{
			if (iParam1 == 1)
			{
				Local_251[iVar0 /*6*/].f_2 = 1;
			}
			else
			{
				Local_251[iVar0 /*6*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x3EDB0
{
	bLocal_249 = false;
	iLocal_250 = 0;
	if (func_388(&bLocal_249, &iLocal_250, iParam0, iParam1))
	{
		if (func_388(&bLocal_249, &iLocal_250, iParam2, iParam3))
		{
			if (func_388(&bLocal_249, &iLocal_250, iParam4, iParam5))
			{
				if (func_388(&bLocal_249, &iLocal_250, iParam6, iParam7))
				{
					if (func_388(&bLocal_249, &iLocal_250, iParam8, iParam9))
					{
					}
				}
			}
		}
	}
	if (bLocal_249)
	{
		return 1;
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3EE20
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_345(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_344(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_345(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_345(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		case 4:
			if (iParam3 != 0 && func_344(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 5:
			if (iParam3 != 0 && func_345(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 7:
			if (func_390(iParam3))
			{
				if (func_344(iParam3))
				{
					*iParam0 = 1;
				}
			}
			else if (func_345(iParam3))
			{
				func_389(iParam3);
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_389(int iParam0)//Position - 0x3EF72
{
	int iVar0;
	iVar0 = (iParam0 - Local_251[0 /*6*/]);
	if (Local_251[iVar0 /*6*/] == iParam0)
	{
		Local_251[iVar0 /*6*/].f_3 = 1;
	}
}

int func_390(int iParam0)//Position - 0x3EF9E
{
	int iVar0;
	iVar0 = (iParam0 - Local_251[0 /*6*/]);
	if (Local_251[iVar0 /*6*/] == iParam0)
	{
		if (Local_251[iVar0 /*6*/].f_1 && Local_251[iVar0 /*6*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_391()//Position - 0x3EFDF
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_152(0, 90, 0, 0, 0, 1, 0, 1, 0);
	if (func_99(0, 90))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_267[10 /*10*/]))
		{
			PED::DELETE_PED(&(Local_267[10 /*10*/]));
		}
		return 1;
	}
	return 0;
}

int func_392()//Position - 0x3F022
{
	func_478(16, 48);
	func_428(0, 8, 0, 0, 1, 0, 1, 0);
	func_428(1, 9, 2, 37, 1, 0, 1, 0);
	func_428(2, 10, 2, 41, 4, 42, 1, 0);
	func_152(0, 43, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 53, 0, 0, 0, 1, 0, 1, 0);
	func_152(2, 67, 0, 2, 27, 1, 0, 1, 0);
	func_152(3, 68, 0, 2, 28, 1, 0, 1, 0);
	func_152(4, 69, 0, 0, 0, 1, 0, 1, 0);
	func_152(5, 70, 0, 0, 0, 1, 0, 1, 0);
	func_152(6, 71, 0, 0, 0, 1, 0, 1, 0);
	func_152(7, 73, 0, 2, 34, 5, 37, 1, 0);
	func_427(27, 74, 0, 8);
	func_426(8, 75, 27, 74, 0, 0);
	func_152(9, 76, 0, 2, 41, 4, 35, 1, 0);
	if (func_99(8, 75))
	{
		func_152(10, 72, 0, 2, 41, 1, 0, 1, 0);
		func_152(14, 80, 0, 2, 41, 4, 35, 1, 0);
		func_152(15, 81, 0, 2, 42, 1, 0, 1, 0);
		func_152(19, 83, 0, 2, 43, 4, 42, 1, 0);
		func_152(23, 87, 0, 0, 0, 1, 0, 1, 0);
	}
	func_152(11, 78, 0, 0, 0, 1, 0, 1, 0);
	func_152(12, 79, 0, 0, 0, 1, 0, 1, 0);
	func_152(13, 6, 0, 0, 0, 1, 0, 1, 0);
	func_152(16, 29, 1, 2, 35, 5, 41, 1, 0);
	func_152(17, 33, 0, 0, 0, 1, 0, 1, 0);
	func_152(18, 82, 0, 2, 29, 1, 0, 1, 0);
	func_152(20, 84, 0, 2, 29, 1, 0, 1, 0);
	func_152(21, 85, 0, 0, 0, 1, 0, 1, 0);
	func_152(22, 86, 0, 2, 37, 1, 0, 1, 0);
	func_152(25, 89, 0, 0, 0, 1, 0, 1, 0);
	func_152(26, 16, 0, 0, 0, 1, 0, 1, 0);
	func_152(28, 17, 0, 0, 0, 1, 0, 1, 0);
	func_410(0, 30, 2, 29, 1, 0, 1, 0, 1, 0, 1, 0);
	func_409(1, 31, 0, 30, 2, 18, 5, 31, 1, 0, 1, 0);
	func_410(3, 4, 2, 22, 5, 36, 5, 39, 1, 0, 1, 0);
	func_410(2, 5, 2, 23, 5, 36, 5, 41, 1, 0, 1, 0);
	func_410(4, 37, 2, 47, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(5, 32, 2, 37, 4, 18, 4, 19, 5, 41, 1, 0);
	func_410(6, 33, 2, 43, 4, 42, 1, 0, 1, 0, 1, 0);
	func_410(7, 34, 2, 40, 5, 20, 1, 0, 1, 0, 1, 0);
	func_410(8, 38, 2, 31, 6, 32, 1, 0, 1, 0, 1, 0);
	func_410(9, 35, 2, 41, 4, 35, 5, 20, 1, 0, 1, 0);
	func_408(10, 36, 14, 80, 3, 43);
	func_410(11, 21, 3, 28, 5, 29, 1, 0, 1, 0, 1, 0);
	func_410(12, 24, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	if (func_99(14, 80))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
		{
			CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		}
		if (func_407(6, 33) || func_345(44))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_512))
			{
				HUD::REMOVE_BLIP(&iLocal_512);
			}
			__LIB_13__::func_789();
			return 1;
		}
	}
	func_393(2, 0, 0, 1, 0);
	func_393(3, 0, 0, 1, 0);
	return 0;
}

void func_393(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3F364
{
	int iVar0;
	int iVar1;
	if (func_387(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 1:
				func_394(1);
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Local_267[10 /*10*/]))
				{
					if (func_3(Local_267[10 /*10*/]))
					{
						func_394(2);
					}
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_267[10 /*10*/]))
				{
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (!CUTSCENE::IS_CUTSCENE_PLAYING() && !CUTSCENE::IS_CUTSCENE_ACTIVE())
						{
							if (!__LIB_0__::func_329())
							{
								if (iLocal_256 == 2)
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) > 100f)
									{
										func_394(3);
									}
								}
								else if (iLocal_256 >= 7)
								{
									if (func_345(29))
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) > 100f)
										{
											func_394(3);
										}
									}
									else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) > 350f)
									{
										func_394(3);
									}
								}
							}
						}
					}
				}
				break;
			case 5:
				iVar0 = 0;
				while (iVar0 < Local_267.f_0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_267[iVar0 /*10*/]))
					{
						if (PED::IS_PED_INJURED(Local_267[iVar0 /*10*/]))
						{
							if (Local_267[iVar0 /*10*/] != Local_267[10 /*10*/])
							{
								func_394(4);
							}
						}
						else if (PED::IS_PED_IN_COMBAT(Local_267[iVar0 /*10*/], 0))
						{
							func_394(4);
						}
					}
					iVar0++;
				}
				break;
			case 6:
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) == 0)
					{
						func_394(6);
					}
				}
				else
				{
					func_394(6);
				}
				break;
			case 7:
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
				{
					iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"));
					if (iVar1 < func_311(11, 54))
					{
						func_394(7);
					}
				}
				else if (func_311(11, 54) > 0)
				{
					func_394(6);
				}
				break;
			case 8:
				func_394(8);
				break;
			}
	}
}

void func_394(int iParam0)//Position - 0x3F571
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "TRV3_F01";
			break;
		case 1:
			sVar0 = "TRV3_F03";
			break;
		case 2:
			sVar0 = "TRV3_15";
			break;
		case 3:
			sVar0 = "TRV3_F05";
			break;
		case 6:
			sVar0 = "TRV3_16";
			break;
		case 7:
			sVar0 = "TRV3_F06";
			break;
		case 8:
			sVar0 = "TRV3_F04";
			break;
		case 4:
			sVar0 = "TRV3_F07";
			break;
		default:
			sVar0 = "TRV3_F01";
			break;
	}
	func_397(sVar0);
	func_292(12);
	while (!AUDIO::TRIGGER_MUSIC_EVENT("TRV3_FAIL"))
	{
		__LIB_15__::func_962(0);
	}
	while (!__LIB_0__::func_223())
	{
		__LIB_15__::func_962(0);
	}
	func_629(2);
}

void func_397(char* sParam0)//Position - 0x3F67B
{
	__LIB_0__::func_381(sParam0);
	func_398(0);
}

void func_398(int iParam0)//Position - 0x3F68E
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_399(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_399(int iParam0)//Position - 0x3F6D3
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_6();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_400(&(Global_113386.f_2363.f_539), iVar1);
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

void func_400(var uParam0, int iParam1)//Position - 0x3F7E3
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
			if (!func_402(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__::func_17(&(uParam0->f_2296[iVar0]));
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

int func_402(int iParam0, var uParam1, float fParam2)//Position - 0x3F9B7
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
			return func_402(8, uParam1, fParam2);
			break;
		case 10:
			return func_402(8, uParam1, fParam2);
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

int func_407(int iParam0, int iParam1)//Position - 0x4054C
{
	if (Local_246[iParam0 /*6*/] == iParam1)
	{
		if (Local_246[iParam0 /*6*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_246[iParam0 /*6*/] != 0)
	{
	}
	return 0;
}

void func_408(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x4057F
{
	char cVar0[64];
	if (Local_246[iParam0 /*6*/] != iParam1)
	{
		Local_246[iParam0 /*6*/].f_1 = 0;
		Local_246[iParam0 /*6*/] = iParam1;
	}
	if (Local_248[iParam2 /*10*/] == iParam3)
	{
		if (!Local_246[iParam0 /*6*/].f_1)
		{
			if (Local_248[iParam2 /*10*/].f_3)
			{
				func_410(iParam0, iParam1, iParam4, iParam5, 1, 0, 1, 0, 1, 0, 1, 0);
			}
		}
	}
	else if (Local_248[iParam2 /*10*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "DIALOGUE_ON_ACTION():", 64);
		StringIntConCat(&cVar0, iParam2, 64);
	}
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x40603
{
	if (!Local_246[iParam0 /*6*/].f_1)
	{
		if (func_407(iParam2, iParam3))
		{
			func_410(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1, 0);
		}
	}
}

void func_410(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4063D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	if (Local_246[iParam0 /*6*/] != iParam1)
	{
		Local_246[iParam0 /*6*/].f_1 = 0;
		Local_246[iParam0 /*6*/] = iParam1;
	}
	if (!Local_246[iParam0 /*6*/].f_1)
	{
		if (func_387(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11))
		{
			if (!Local_246[iParam0 /*6*/].f_2)
			{
				Local_246[iParam0 /*6*/].f_2 = 1;
			}
			switch (Local_246[iParam0 /*6*/])
			{
				case 0:
					break;
				case 1:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_425("TRV3_INT", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1000;
							}
							break;
						case 1:
							if (__LIB_15__::func_965("TRV3_INT") || (!__LIB_15__::func_965("TRV3_INT") && MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (!__LIB_15__::func_965("TRV3_INT"))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 2:
					if (__LIB_0__::func_501("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0, 0))
					{
						if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
						{
							__LIB_0__::func_640(Local_267[10 /*10*/], "NEED_A_VEHICLE", 3);
							Local_246[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				case 3:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_407(5, 8))
							{
								if (func_425("TRV3_DRV", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
									Local_246[iParam0 /*6*/].f_3 = 3;
								}
							}
							break;
						case 3:
							if (!__LIB_15__::func_965("TRV3_DRV"))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
									if ((((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar1) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar1)) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar1)) || iVar1 == joaat("bodhi2")) || iVar1 == joaat("dune")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("peyote")) || iVar1 == joaat("tornado4")) || iVar1 == joaat("voltic")) || (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false) && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iVar0) == 2))
									{
										Local_246[iParam0 /*6*/].f_3 = 4;
									}
									else
									{
										Local_246[iParam0 /*6*/].f_3 = 5;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3 = 5;
								}
							}
							break;
						case 4:
							if (func_425("TRV3_WET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3 = 6;
							}
							break;
						case 5:
							if (func_425("TRV3_NWET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3 = 6;
							}
							break;
						case 6:
							if (!__LIB_15__::func_965("TRV3_WET") && !__LIB_15__::func_965("TRV3_NWET"))
							{
								if (func_425("TRV3_DRVb", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									func_422(2, 5, -1, -1, 1);
									Local_246[iParam0 /*6*/].f_3 = 7;
								}
							}
							break;
						case 7:
							if (!__LIB_0__::func_75())
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 4:
					if (!iLocal_241 && !iLocal_242)
					{
						if (Local_246[iParam0 /*6*/].f_4 < 3)
						{
							switch (iLocal_256)
							{
								case 2:
									AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_DMAA", "Wade");
									__LIB_0__::func_620(1);
									iLocal_241 = 1;
									Local_246[iParam0 /*6*/].f_4++;
									break;
								case 7:
									AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_DNAA", "Wade");
									__LIB_0__::func_620(1);
									iLocal_241 = 1;
									Local_246[iParam0 /*6*/].f_4++;
									break;
								case 9:
									AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_DOAA", "Wade");
									__LIB_0__::func_620(1);
									iLocal_241 = 1;
									Local_246[iParam0 /*6*/].f_4++;
									break;
							}
						}
						else if (Local_246[iParam0 /*6*/].f_4 < 7)
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_FUAA", "Wade");
							__LIB_0__::func_620(1);
							iLocal_241 = 1;
							Local_246[iParam0 /*6*/].f_4++;
							if (Local_246[iParam0 /*6*/].f_4 == 7)
							{
								Local_246[iParam0 /*6*/].f_4 = 0;
							}
						}
					}
					break;
				case 5:
					if (!iLocal_241 && !iLocal_242)
					{
						if (Local_246[iParam0 /*6*/].f_5 == 1)
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_DLAA", "Wade");
						}
						else
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_FVAA", "Wade");
						}
						__LIB_0__::func_620(1);
						iLocal_242 = 1;
					}
					break;
				case 6:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_246[iParam0 /*6*/].f_4 < 3)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
									if (iVar3 == joaat("bodhi2"))
									{
										AUDIO::INTERRUPT_CONVERSATION(Local_267[10 /*10*/], "TRV3_DPAA", "Wade");
										Local_246[iParam0 /*6*/].f_4++;
										Local_246[iParam0 /*6*/].f_3++;
									}
									else
									{
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							else
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
						case 1:
							if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[10 /*10*/]))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[10 /*10*/]))
							{
								AUDIO::INTERRUPT_CONVERSATION(PLAYER::PLAYER_PED_ID(), "TRV3_DKAA", "Trevor");
								func_365(21, 0);
								func_420(21, 0);
								Local_246[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				case 7:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (__LIB_0__::func_75())
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							else
							{
								Local_246[iParam0 /*6*/].f_3 = 2;
							}
							iLocal_241 = 0;
							iLocal_242 = 0;
							__LIB_0__::func_620(0);
							__LIB_0__::func_638();
							func_353(0, 3);
							func_353(1, 4);
							func_353(2, 5);
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (func_425("TRV3_stpcnv", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							fVar4 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 57.512672f, 3688.2483f, 42.261204f, 1);
							if (fVar4 < (117.25f + (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 5f)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 300.5994f, 3574.6003f, 19.14899f, 723.4376f, 3619.607f, 58.07334f, 150.5f, false, true, 0) || __LIB_14__::func_552())
								{
									if (CLOCK::GET_CLOCK_HOURS() < 21 && CLOCK::GET_CLOCK_HOURS() > 6)
									{
										iLocal_244 = 1;
									}
									else
									{
										iLocal_244 = 2;
									}
									Local_246[iParam0 /*6*/].f_3++;
								}
							}
							break;
						case 3:
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								if (iLocal_244 == 1)
								{
									if (func_425("TRV3_attr", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
								else if (func_425("TRV3_nowait", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
							}
							break;
						case 4:
							if (__LIB_15__::func_965("TRV3_attr") || __LIB_15__::func_965("TRV3_nowait"))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 5:
							if (!__LIB_15__::func_965("TRV3_attr") && !__LIB_15__::func_965("TRV3_nowait"))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 8:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!__LIB_0__::func_501("TRV3_1", 0, 0))
							{
								Local_246[iParam0 /*6*/].f_3 = 2;
							}
							break;
						case 2:
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								Local_246[iParam0 /*6*/].f_3 = 4;
							}
							else if (!__LIB_40__::func_503(iLocal_268[0]))
							{
								if (func_425("TRV3_gocar", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
							}
							break;
						case 3:
							if (func_425("TRV3_GONO", 3, PLAYER::PLAYER_PED_ID(), "Trevor", 2, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
						case 4:
							if (func_425("TRV3_thisone", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 10:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							func_292(13);
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 1:
							Local_246[iParam0 /*6*/].f_4 = func_314(57);
							if (Local_246[iParam0 /*6*/].f_4 >= 0)
							{
								if (!func_3(Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_425("TRV3_BOMB2", 4, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
							}
							else
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 12:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							func_292(14);
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (func_318("TRV3_SEES2", "TRV3_SEES2_1", 4, Local_267[7 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1500;
							}
							break;
						case 2:
							if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 13:
					if (iLocal_56 >= 9)
					{
						bLocal_71 = true;
						Local_246[iParam0 /*6*/].f_1 = 1;
					}
					else
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								bLocal_71 = false;
								iLocal_70 = 1;
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
									{
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
								}
								else if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
								{
									Local_246[iParam0 /*6*/].f_3 = 2;
								}
								break;
							case 1:
								if (!func_3(Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_425("TRV3_RE1", 4, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "Lost1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										bLocal_71 = true;
										Local_246[iParam0 /*6*/].f_3 = 3;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3 = 0;
								}
								break;
							case 2:
								if (!func_3(Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_425("TRV3_RE2", 5, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "Lost2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										bLocal_71 = true;
										Local_246[iParam0 /*6*/].f_3 = 3;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3 = 0;
								}
								break;
							case 3:
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
									{
										Local_246[iParam0 /*6*/].f_3 = 4;
									}
								}
								else if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
								{
									Local_246[iParam0 /*6*/].f_3 = 5;
								}
								break;
							case 4:
								if (!func_3(Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_425("TRV3_RE3", 6, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "Lost3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3 = 6;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3 = 3;
								}
								break;
							case 5:
								if (!func_3(Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/]))
								{
									if (func_425("TRV3_RE4", 7, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "Lost4", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3 = 3;
								}
								break;
							case 6:
								if (__LIB_15__::func_965("TRV3_RE3") || __LIB_15__::func_965("TRV3_RE4"))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 7:
								if (!__LIB_15__::func_965("TRV3_RE4"))
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
									iLocal_70 = 0;
								}
								break;
							}
					}
					break;
				case 29:
					if (Local_246[iParam0 /*6*/].f_4 == 0)
					{
						if (func_425("TRV3_TRK", 3, Local_267[10 /*10*/], "WADE", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, 8))
						{
							func_365(81, 0);
							func_420(81, 5);
							Local_246[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				case 25:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_246[iParam0 /*6*/].f_4 < 4)
							{
								if (func_425("TRV3_WAD", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_365(81, 0);
									func_420(81, 5);
									Local_246[iParam0 /*6*/].f_4++;
								}
							}
							else
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 26:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_425("TRV3_FLEE", 3, Local_267[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
							{
								func_365(81, 0);
								func_420(81, 0);
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (__LIB_15__::func_965("TRV3_FLEE"))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (!__LIB_15__::func_965("TRV3_FLEE"))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 27:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (Local_246[iParam0 /*6*/].f_4 == 0)
							{
								if (func_425("TRV3_G", 3, Local_267[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									func_365(81, 0);
									func_420(81, 0);
									Local_246[iParam0 /*6*/].f_4++;
								}
							}
							else if (Local_246[iParam0 /*6*/].f_4 == 1)
							{
								if (func_425("TRV3_GONE", 3, Local_267[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									func_365(81, 0);
									func_420(81, 0);
									Local_246[iParam0 /*6*/].f_4++;
								}
							}
							else if (Local_246[iParam0 /*6*/].f_4 < 6)
							{
								if (func_425("TRV3_FLEEB", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_365(81, 0);
									func_420(81, 0);
									Local_246[iParam0 /*6*/].f_4++;
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 28:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "TRV3_CHAA", "Trevor", 4);
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 2:
							if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								Local_246[iParam0 /*6*/].f_3 = 0;
							}
							break;
					}
					break;
				case 14:
					if (func_311(5, 47) == 0)
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								Local_246[iParam0 /*6*/].f_3++;
								break;
							case 1:
								if (func_425("TRV3_BIKE", 3, Local_267[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									if (func_425("TRV3_BIKE", 3, Local_267[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
										Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
									}
								}
								break;
							case 3:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									if (func_425("TRV3_BIKE", 3, Local_267[1 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										func_365(59, 1);
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							}
					}
					break;
				case 15:
					if (func_311(5, 47) == 1)
					{
						if (!func_3(Local_267[2 /*10*/]))
						{
							switch (Local_246[iParam0 /*6*/].f_3)
							{
								case 0:
									if (func_425("TRV3_GIRL1", 8, Local_267[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3 = 100;
										Local_246[iParam0 /*6*/].f_4 = 0;
									}
									break;
								case 100:
									if (__LIB_15__::func_965("TRV3_GIRL1"))
									{
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
									break;
								case 1:
									if ((BitTest(Local_246[iParam0 /*6*/].f_4, 0) && BitTest(Local_246[iParam0 /*6*/].f_4, 1)) && BitTest(Local_246[iParam0 /*6*/].f_4, 2))
									{
										func_365(60, 1);
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_291))
									{
										if (!BitTest(Local_246[iParam0 /*6*/].f_4, 0))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) > 0.226f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) < 0.26f)
											{
												Local_246[iParam0 /*6*/].f_3 = 2;
											}
										}
										if (!BitTest(Local_246[iParam0 /*6*/].f_4, 1))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) > 0.487f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) < 0.52f)
											{
												Local_246[iParam0 /*6*/].f_3 = 3;
											}
										}
										if (!BitTest(Local_246[iParam0 /*6*/].f_4, 2))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) > 0.677f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_291) < 0.71f)
											{
												Local_246[iParam0 /*6*/].f_3 = 4;
											}
										}
									}
									break;
								case 2:
									if (func_425("TRV3_GIRL2", 8, Local_267[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_246[iParam0 /*6*/].f_4), 0);
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
									break;
								case 3:
									if (func_425("TRV3_GIRL3", 8, Local_267[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_246[iParam0 /*6*/].f_4), 1);
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
									break;
								case 4:
									if (func_425("TRV3_GIRL4", 8, Local_267[2 /*10*/], "TRV3_BIKER6", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, 8))
									{
										MISC::SET_BIT(&(Local_246[iParam0 /*6*/].f_4), 2);
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
									break;
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if (Local_246[iParam0 /*6*/].f_3 < 100)
							{
								Local_246[iParam0 /*6*/].f_3 = 100;
								Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 1500;
							}
							if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
							{
								if (func_425("TRV3_WMN", 7, 0, "WomanInTrailer", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
									func_365(60, 1);
								}
							}
						}
					}
					break;
				case 16:
					if (func_311(5, 47) == 2)
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_414("TRV3_CHAT", "TRV3_CHAT_3", 3, Local_267[3 /*10*/], "TREV3BIKER2", 4, Local_267[4 /*10*/], "TRV3BIKER3", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 1:
								if (func_425("TRV3_DV1", 6, Local_267[3 /*10*/], "TRV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_365(61, 1);
								}
								break;
							case 2:
								if (!__LIB_15__::func_965("TRV3_DV1"))
								{
									func_365(61, 1);
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				case 17:
					if (func_311(5, 47) == 3)
					{
						if (func_425("TRV3_IG4", 3, Local_267[8 /*10*/], "TREV3BIKER3", 4, Local_267[9 /*10*/], "TRV3_BIKER4", -1, 0, 0, -1, 0, 0, 8))
						{
							func_365(62, 1);
							Local_246[iParam0 /*6*/].f_1 = 1;
						}
					}
					break;
				case 18:
					if (func_311(5, 47) == 4)
					{
						if (!func_3(Local_267[5 /*10*/]) && !func_3(Local_267[6 /*10*/]))
						{
							switch (Local_246[iParam0 /*6*/].f_3)
							{
								case 0:
									if (func_425("TRV3_IG5", 1, Local_267[5 /*10*/], "TRV3_BIKER1", 2, Local_267[6 /*10*/], "TREV3BIKER2", 3, Local_267[7 /*10*/], "TREV3BIKER3", -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_267[5 /*10*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_267[6 /*10*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_267[5 /*10*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
												Local_246[iParam0 /*6*/].f_3 = 2;
											}
											else
											{
												AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_267[6 /*10*/], "CHAT_STATE", "SPEECH_PARAMS_FORCE", 1);
												Local_246[iParam0 /*6*/].f_3 = 3;
											}
										}
									}
									break;
								case 2:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[5 /*10*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_267[6 /*10*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
										Local_246[iParam0 /*6*/].f_3 = 4;
									}
									break;
								case 3:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[6 /*10*/]))
									{
										AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_267[5 /*10*/], "CHAT_RESP", "SPEECH_PARAMS_FORCE", 1);
										Local_246[iParam0 /*6*/].f_3 = 4;
									}
									break;
								case 4:
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[5 /*10*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_267[6 /*10*/]))
									{
										Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 9000;
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
									break;
								}
							}
					}
					break;
				case 19:
					if (func_311(5, 47) == 5)
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_425("TRV3_ST5", 4, Local_267[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 1:
								if (__LIB_15__::func_965("TRV3_ST5"))
								{
									cLocal_476 = { __LIB_0__::func_485() };
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 2:
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_476))
								{
									if (func_414("TRV3_ST5", &cLocal_476, 4, Local_267[0 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										StringCopy(&cLocal_476, "", 24);
										Local_246[iParam0 /*6*/].f_3 = 1;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
									func_365(64, 1);
								}
								break;
							}
					}
					break;
				case 20:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
							{
								if (HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (func_425("TRV3_GUN", 2, Local_267[10 /*10*/], "WADE", 3, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
							}
							break;
						case 2:
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) < 6f)
								{
									if (func_425("TRV3_WAI", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
						case 3:
							if (func_425("TRV3_WAIW", 3, Local_267[10 /*10*/], "WADE", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 21:
					if (iLocal_256 == 4 || iLocal_256 == 7)
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								iLocal_488 = 9;
								iLocal_489 = 6;
								iLocal_490 = 5;
								iLocal_491 = 5;
								Local_246[iParam0 /*6*/].f_3++;
								break;
							case 1:
								if ((((iLocal_488 + iLocal_489) + iLocal_490) + iLocal_491) > 0)
								{
									iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, (((iLocal_488 + iLocal_489) + iLocal_490) + iLocal_491));
									if (iVar5 < iLocal_488)
									{
										iLocal_488 = (iLocal_488 - 1);
										Local_246[iParam0 /*6*/].f_3 = 2;
									}
									else if (iVar5 < (iLocal_488 + iLocal_489))
									{
										iLocal_489 = (iLocal_489 - 1);
										Local_246[iParam0 /*6*/].f_3 = 3;
									}
									else if (iVar5 < ((iLocal_488 + iLocal_489) + iLocal_490))
									{
										iLocal_490 = (iLocal_490 - 1);
										Local_246[iParam0 /*6*/].f_3 = 4;
									}
									else
									{
										iLocal_491 = (iLocal_491 - 1);
										Local_246[iParam0 /*6*/].f_3 = 5;
									}
									if (iLocal_488 < 0)
									{
										iLocal_488 = 0;
									}
									if (iLocal_489 < 0)
									{
										iLocal_489 = 0;
									}
									if (iLocal_490 < 0)
									{
										iLocal_490 = 0;
									}
									if (iLocal_491 < 0)
									{
										iLocal_491 = 0;
									}
								}
								break;
							case 2:
								if (func_425("TRV3_ATT2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3 = 6;
								}
								break;
							case 3:
								if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
								{
									if (func_425("TRV3_ATTACK", 3, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER3", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							case 4:
								if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
								{
									if (func_425("TRV3_ATTACK2", 4, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "TREV3BIKER2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							case 5:
								if (func_418(&(Local_246[iParam0 /*6*/].f_4)))
								{
									if (func_425("TRV3_ATTACK3", 5, Local_267[Local_246[iParam0 /*6*/].f_4 /*10*/], "TRV3_BIKER1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3 = 6;
									}
								}
								break;
							case 6:
								Local_246[iParam0 /*6*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
								Local_246[iParam0 /*6*/].f_3 = 7;
								break;
							case 7:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									Local_246[iParam0 /*6*/].f_3 = 1;
								}
								break;
							}
					}
					break;
				case 22:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_425("TRV3_BM1", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								func_365(70, 0);
							}
							break;
						case 1:
							if (func_425("TRV3_BM2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								func_365(70, 0);
							}
							break;
						case 2:
							if (func_425("TRV3_BM3", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								func_365(70, 0);
							}
							break;
						case 3:
							if (func_425("TRV3_BM4", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								func_365(70, 0);
							}
							break;
						case 4:
							if (func_425("TRV3_BM5", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
								func_365(70, 0);
							}
							break;
					}
					break;
				case 23:
					if (func_425("TRV3_GUN", 3, PLAYER::PLAYER_PED_ID(), "TREVOR", 2, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
					{
						Local_246[iParam0 /*6*/].f_1 = 1;
					}
					break;
				case 24:
					if (iLocal_256 == 7 && func_345(18))
					{
						Local_246[iParam0 /*6*/].f_1 = 1;
					}
					if (bLocal_296)
					{
						if (iLocal_256 == 4 || (iLocal_256 == 7 && bLocal_255 == 1))
						{
							if (func_425("TRV3_CNT", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
						}
					}
					break;
				case 30:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							bLocal_71 = false;
							if (func_425("TRV3_RTN", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(9f, 6f, 4);
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_425("TRV3_DEALT", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 31:
					if (func_345(36))
					{
						Local_246[iParam0 /*6*/].f_1 = 1;
					}
					else
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								if (func_425("TRV3_DR2", 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3 = 102;
								}
								break;
							case 102:
								if (!__LIB_0__::func_75())
								{
									Local_246[iParam0 /*6*/].f_3 = 1;
								}
								break;
							case 1:
								if (func_345(30))
								{
									iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar6)))
									{
										if (func_425("TRV3_DR3", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_246[iParam0 /*6*/].f_3++;
											Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
										}
									}
									else if (func_425("TRV3_DR4", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
										Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
									}
								}
								else
								{
									Local_246[iParam0 /*6*/].f_3++;
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								}
								break;
							case 2:
								if (!__LIB_0__::func_75())
								{
									Local_246[iParam0 /*6*/].f_3++;
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							case 3:
								if (__LIB_15__::func_965("TRV3_DR3") || __LIB_15__::func_965("TRV3_DR2"))
								{
									Local_246[iParam0 /*6*/].f_3 = 2;
								}
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									if (func_425("TRV3_GET", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
								break;
							case 4:
								if (!__LIB_0__::func_75())
								{
									if (func_425("TRV3_GET2", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										func_365(45, 1);
										Local_246[iParam0 /*6*/].f_3++;
									}
								}
								break;
							}
					}
					break;
				case 32:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (__LIB_0__::func_501("TRV3_2", 0, 0))
							{
								iLocal_241 = 0;
								iLocal_242 = 0;
								__LIB_0__::func_620(0);
								__LIB_0__::func_638();
								if (iLocal_256 == 2)
								{
									func_353(0, 3);
								}
								Local_246[iParam0 /*6*/].f_3 = 1000;
							}
							break;
						case 1000:
							if (func_425("TRV3_AR2", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3 = 1001;
							}
							break;
						case 1001:
							if (func_425("TRV3_GO", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
								Local_246[iParam0 /*6*/].f_3 = 2;
							}
							break;
						case 2:
							if (func_344(45))
							{
								if (func_425("TRV3_BAN3c", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
							}
							else if (func_425("TRV3_BAN3", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 3:
							if (func_425("TRV3_BAN3b", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
					}
					break;
				case 33:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_414("TRV3_DRI", "TRV3_DRI_2", 4, Local_267[10 /*10*/], "Wade", 3, 0, "FLOYD", -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (__LIB_15__::func_965("TRV3_DRI"))
							{
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 2:
							if (!__LIB_15__::func_965("TRV3_DRI"))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 38:
					if (!func_3(Local_267[10 /*10*/]))
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								iLocal_241 = 0;
								iLocal_242 = 0;
								__LIB_0__::func_620(0);
								__LIB_0__::func_638();
								func_353(1, 31);
								Local_246[iParam0 /*6*/].f_3 = 2;
								break;
							case 1:
								if (func_425("TRV3_stpcnv", 3, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 2:
								if (!func_3(Local_267[10 /*10*/]))
								{
									if (__LIB_0__::func_724(Local_267[10 /*10*/], -1157.8527f, 934.0715f, 197.0163f, 1) > 150f)
									{
										Local_246[iParam0 /*6*/].f_3 = 3;
									}
									else
									{
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							case 3:
								if (func_425("TRV3_here", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3 = 4;
								}
								break;
							case 4:
								if (func_425("TRV3_there", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									func_280(3, 4, 1, 0);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
									Local_246[iParam0 /*6*/].f_3 = 5;
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
								}
								break;
							case 5:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									if (func_425("TRV3_BAN3a", 2, PLAYER::PLAYER_PED_ID(), "Trevor", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, 8))
									{
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
								break;
							}
					}
					break;
				case 35:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (!__LIB_15__::func_965("TRV3_END"))
							{
								func_292(0);
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 1:
							if (func_310(14, 80) > 0)
							{
								if (func_425("TRV3_runs", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 36:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							if (func_425("TRV3_calls", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
						case 2:
							if (!__LIB_0__::func_75())
							{
								Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								Local_246[iParam0 /*6*/].f_3++;
							}
							break;
						case 3:
							if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
							{
								if (func_425("TRV3_LI", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 5000;
									Local_246[iParam0 /*6*/].f_5++;
									if (Local_246[iParam0 /*6*/].f_5 >= 3)
									{
										Local_246[iParam0 /*6*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				case 37:
					switch (Local_246[iParam0 /*6*/].f_3)
					{
						case 0:
							func_292(188);
							__LIB_0__::func_620(0);
							Local_246[iParam0 /*6*/].f_3++;
							break;
						case 1:
							if (func_425("TRV3_DRI_LI", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_246[iParam0 /*6*/].f_1 = 1;
							}
							break;
					}
					break;
				case 34:
					if (!func_3(Local_267[10 /*10*/]))
					{
						switch (Local_246[iParam0 /*6*/].f_3)
						{
							case 0:
								__LIB_0__::func_638();
								func_353(5, 32);
								Local_246[iParam0 /*6*/].f_3++;
								break;
							case 1:
								if (func_425("TRV3_nerF", 3, Local_267[10 /*10*/], "Wade", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, 8))
								{
									Local_246[iParam0 /*6*/].f_3++;
									Local_246[iParam0 /*6*/].f_4 = 1000;
								}
								break;
							case 2:
								if (!__LIB_0__::func_75())
								{
									func_320(2, Local_267[10 /*10*/], "Wade");
									Local_246[iParam0 /*6*/].f_3++;
								}
								break;
							case 3:
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (__LIB_0__::func_724(Local_267[10 /*10*/], -1152.7819f, -1523.988f, 3.5198f, 1) < 40f)
									{
										__LIB_0__::func_638();
										Local_246[iParam0 /*6*/].f_3++;
									}
									else
									{
										PATHFIND::GENERATE_DIRECTIONS_TO_COORD(-1152.7819f, -1523.988f, 3.5198f, false, &iVar8, &uVar7, &fVar9);
										fLocal_258 = fLocal_258;
										iLocal_259 = iLocal_259;
										switch (iVar8)
										{
											case 0:
												iLocal_263 = 0;
												break;
											case 1:
												if (iLocal_263 != 1)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 1;
												}
												break;
											case 2:
												iLocal_263 = 0;
												break;
											case 3:
												if (iLocal_263 != 3)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirL", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 3;
												}
												break;
											case 4:
												if (iLocal_263 != 4)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirR", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 4;
												}
												break;
											case 6:
												if (iLocal_263 != 1)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 1;
												}
												break;
											case 7:
												if (iLocal_263 != 1)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 1;
												}
												break;
											case 8:
												if (iLocal_263 != 1)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirW", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 1;
												}
												break;
											case 5:
												if (iLocal_263 != 5)
												{
													__LIB_0__::func_638();
												}
												if (__LIB_17__::func_155(&uLocal_306, cLocal_471, "TRV3_dirS", 7, 0, 0, 0, 0))
												{
													iLocal_263 = 5;
												}
												break;
										}
										if (__LIB_40__::func_503(iLocal_268[0]))
										{
											if (iVar8 != 0)
											{
												if (((((MISC::ABSF((fVar9 - fLocal_258)) > MISC::ABSF((ENTITY::GET_ENTITY_SPEED(iLocal_268[0]) + 3f)) || iVar8 != iLocal_260) || iVar8 == 1) || iVar8 == 8) || iVar8 == 6) || iVar8 == 7)
												{
													iLocal_259 = 1;
												}
												if (iLocal_259)
												{
													if (((fVar9 < 50f || (fVar9 / ENTITY::GET_ENTITY_SPEED(iLocal_268[0])) < 5f) && (fVar9 / ENTITY::GET_ENTITY_SPEED(iLocal_268[0])) > 1f) || iVar8 == 1)
													{
														switch (iVar8)
														{
															case 0:
																break;
															case 1:
																break;
															case 2:
																break;
															case 3:
																break;
															case 4:
																break;
															case 6:
																break;
															case 7:
																break;
															case 8:
																break;
															case 5:
																break;
														}
														if (((iVar8 == 1 || iVar8 == 8) || iVar8 == 6) || iVar8 == 7)
														{
															if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
															{
																if (iLocal_263 == 1)
																{
																	__LIB_13__::func_783();
																	iLocal_263 = 0;
																	iLocal_259 = 0;
																	Local_246[iParam0 /*6*/].f_3 = 11;
																	Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
																}
															}
															else
															{
																iLocal_259 = 0;
															}
														}
														else if (iLocal_263 != 0)
														{
															if (iLocal_263 == iVar8)
															{
																__LIB_13__::func_783();
																iLocal_263 = 0;
																iLocal_259 = 0;
																Local_246[iParam0 /*6*/].f_3 = 10;
																Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 500;
															}
														}
													}
												}
												fLocal_258 = fVar9;
												iLocal_260 = iVar8;
											}
										}
									}
								}
								break;
							case 10:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									Local_246[iParam0 /*6*/].f_3 = 3;
								}
								break;
							case 11:
								if (MISC::GET_GAME_TIMER() > Local_246[iParam0 /*6*/].f_4)
								{
									Local_246[iParam0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 7500;
									Local_246[iParam0 /*6*/].f_3 = 3;
								}
								break;
								break;
							case 4:
								if (func_425("TRV3_end", 3, Local_267[10 /*10*/], "Wade", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
									Local_246[iParam0 /*6*/].f_1 = 1;
								}
								break;
							}
					}
					break;
				}
			}
	}
}

int func_414(char* sParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, char* sParam13, int iParam14)//Position - 0x4351A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3) && func_3(iParam3))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam6) && func_3(iParam6))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam9) && func_3(iParam9))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam12) && func_3(iParam12))
	{
		return 1;
	}
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!__LIB_0__::func_75())
		{
			func_124(sParam0, iParam2, iParam5, iParam8, iParam11);
			func_320(iParam2, iParam3, sParam4);
			if (iParam5 != -1)
			{
				func_320(iParam5, iParam6, sParam7);
			}
			if (iParam8 != -1)
			{
				func_320(iParam8, iParam9, sParam10);
			}
			if (iParam11 != -1)
			{
				func_320(iParam11, iParam12, sParam13);
			}
			if (__LIB_16__::func_936(&uLocal_306, cLocal_471, sParam0, sParam1, iParam14, 0, 0))
			{
				iLocal_472 = 0;
				return 1;
			}
			else if (iLocal_473 != MISC::GET_GAME_TIMER())
			{
				iLocal_472++;
				iLocal_473 = MISC::GET_GAME_TIMER();
				if (iLocal_472 >= 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_418(var uParam0)//Position - 0x438B2
{
	int iVar0;
	float fVar1;
	float fVar2;
	*uParam0 = -1;
	fVar2 = 150f;
	iVar0 = 0;
	while (iVar0 < Local_267.f_0)
	{
		if (!func_3(Local_267[iVar0 /*10*/]))
		{
			if (iVar0 != 10 && iVar0 != 7)
			{
				fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[iVar0 /*10*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*uParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*uParam0 != -1 && *uParam0 != 0)
	{
		return 1;
	}
	return 0;
}

int func_420(int iParam0, int iParam1)//Position - 0x43977
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_251.f_0)
	{
		if (iParam0 == Local_251[iVar0 /*6*/])
		{
			Local_251[iVar0 /*6*/].f_4 = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_422(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x439BC
{
	iParam1 = iParam1;
	if (iParam2 != -1)
	{
		Local_246[iParam0 /*6*/].f_3 = iParam2;
	}
	if (iParam3 != -1)
	{
		Local_246[iParam0 /*6*/].f_4 = iParam3;
	}
	if (iParam4 != -1)
	{
		Local_246[iParam0 /*6*/].f_5 = iParam4;
	}
}

int func_425(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x43A30
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && func_3(iParam2))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && func_3(iParam5))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam8) && func_3(iParam8))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam11) && func_3(iParam11))
	{
		return 1;
	}
	if (!__LIB_0__::func_75())
	{
		Local_474[0 /*3*/] = iParam1;
		Local_474[0 /*3*/].f_1 = iParam2;
		Local_474[0 /*3*/].f_2 = sParam3;
		Local_474[1 /*3*/] = iParam4;
		Local_474[1 /*3*/].f_1 = iParam5;
		Local_474[1 /*3*/].f_2 = sParam6;
		Local_474[2 /*3*/] = iParam7;
		Local_474[2 /*3*/].f_1 = iParam8;
		Local_474[2 /*3*/].f_2 = sParam9;
		Local_474[3 /*3*/] = iParam10;
		Local_474[3 /*3*/].f_1 = iParam11;
		Local_474[3 /*3*/].f_2 = sParam12;
		func_124(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_320(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_320(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_320(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_320(iParam10, iParam11, sParam12);
		}
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (__LIB_16__::func_7(&uLocal_306, cLocal_471, sParam0, iParam13, 1, 0, 0))
			{
				iLocal_475 = 1;
				iLocal_472 = 0;
				return 1;
			}
			else if (iLocal_473 != MISC::GET_GAME_TIMER())
			{
				iLocal_472++;
				iLocal_473 = MISC::GET_GAME_TIMER();
				if (iLocal_472 >= 10)
				{
					return 1;
				}
			}
		}
		else if (__LIB_16__::func_7(&uLocal_306, cLocal_471, sParam0, iParam13, 0, 0, 0))
		{
			iLocal_475 = 0;
			iLocal_472 = 0;
			return 1;
		}
		else if (iLocal_473 != MISC::GET_GAME_TIMER())
		{
			iLocal_472++;
			iLocal_473 = MISC::GET_GAME_TIMER();
			if (iLocal_472 >= 10)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_426(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x43BFC
{
	if (Local_248[iParam0 /*10*/] != iParam1 || Local_248[iParam0 /*10*/].f_1 == 0)
	{
		Local_248[iParam0 /*10*/] = iParam1;
		Local_248[iParam0 /*10*/].f_1 = 1;
		Local_248[iParam0 /*10*/].f_2 = 0;
		Local_248[iParam0 /*10*/].f_3 = 0;
		Local_248[iParam0 /*10*/].f_6 = 0;
		Local_248[iParam0 /*10*/].f_4 = 0;
		Local_248[iParam0 /*10*/].f_7 = 0;
		Local_248[iParam0 /*10*/].f_8 = 0;
		Local_248[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_248[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_248[iParam2 /*10*/].f_3)
		{
			iParam3 = iParam3;
			func_152(iParam0, iParam1, 0, iParam4, iParam5, 1, 0, 1, 0);
		}
	}
}

void func_427(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x43CAA
{
	if (Local_248[iParam0 /*10*/] != iParam1 || Local_248[iParam0 /*10*/].f_1 == 0)
	{
		Local_248[iParam0 /*10*/] = iParam1;
		Local_248[iParam0 /*10*/].f_1 = 1;
		Local_248[iParam0 /*10*/].f_2 = 0;
		Local_248[iParam0 /*10*/].f_3 = 0;
		Local_248[iParam0 /*10*/].f_6 = 0;
		Local_248[iParam0 /*10*/].f_4 = 0;
		Local_248[iParam0 /*10*/].f_7 = 0;
		Local_248[iParam0 /*10*/].f_8 = 0;
		Local_248[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_248[iParam0 /*10*/].f_3 == 0)
	{
		if (Local_247[iParam2 /*4*/].f_1)
		{
			iParam3 = iParam3;
			func_152(iParam0, iParam1, 0, 0, 0, 1, 0, 1, 0);
		}
	}
}

void func_428(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x43D56
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	if (Local_247[iParam0 /*4*/] != iParam1)
	{
		Local_247[iParam0 /*4*/].f_1 = 0;
		Local_247[iParam0 /*4*/] = iParam1;
	}
	if (!Local_247[iParam0 /*4*/].f_1)
	{
		if (func_387(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0, 1, 0))
		{
			switch (Local_247[iParam0 /*4*/])
			{
				case 1:
					switch (Local_247[iParam0 /*4*/].f_2)
					{
						case 0:
							if (!BitTest(Local_247[iParam0 /*4*/].f_3, 0))
							{
								if (__LIB_40__::func_503(iLocal_268[0]))
								{
									func_477(&Local_493, iLocal_268[0]);
								}
								MISC::SET_BIT(&(Local_247[iParam0 /*4*/].f_3), 0);
							}
							if (__LIB_37__::func_923(&Local_493, 59.1994f, 3603.538f, 38.8157f, Global_19, 1, Local_267[10 /*10*/], 0, 0, "TRV3_1", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								func_365(14, 1);
							}
							if (HUD::DOES_BLIP_EXIST(Local_493.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_493.f_5, 0);
								HUD::SET_BLIP_ROUTE(Local_493.f_6, false);
							}
							if (HUD::DOES_BLIP_EXIST(Local_493.f_1[0]))
							{
								HUD::SET_BLIP_ALPHA(Local_493.f_1[0], 0);
							}
							if (func_407(6, 1))
							{
								if (HUD::DOES_BLIP_EXIST(Local_493.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_493.f_5, 255);
									HUD::SET_BLIP_ROUTE(Local_493.f_6, true);
								}
								if (HUD::DOES_BLIP_EXIST(Local_493.f_1[0]))
								{
									HUD::SET_BLIP_ALPHA(Local_493.f_1[0], 255);
								}
								Local_247[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (__LIB_37__::func_923(&Local_493, 59.1994f, 3603.538f, 38.8157f, Global_19, 1, Local_267[10 /*10*/], 0, 0, "TRV3_1", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
							}
							break;
					}
					break;
				case 4:
					__LIB_0__::func_382("TRV3_3", 7500, 1);
					iLocal_513 = 0;
					while (iLocal_513 < Local_297.f_0)
					{
						Local_297[iLocal_513 /*17*/].f_16 = __LIB_0__::func_488(func_298(iLocal_513), 0);
						iLocal_513++;
					}
					Local_247[iParam0 /*4*/].f_1 = 1;
					break;
				case 2:
					if (__LIB_0__::func_75())
					{
						iLocal_475 = 1;
						__LIB_0__::func_638();
					}
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_382("TRV3_12", 7500, 1);
						Local_247[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 3:
					switch (Local_247[iParam0 /*4*/].f_2)
					{
						case 0:
							__LIB_0__::func_151("TRV3_STAT1", -1);
							Local_247[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (!__LIB_0__::func_1("TRV3_STAT1"))
							{
								__LIB_0__::func_151("TRV3_SNEAK", -1);
								Local_247[iParam0 /*4*/].f_2++;
							}
							break;
						default:
							iVar0 = joaat("WEAPON_UNARMED");
							iLocal_514 = 0;
							while (iLocal_514 < Local_267.f_0)
							{
								if (iLocal_514 == 1)
								{
									if (((((iLocal_514 != 8 && iLocal_514 != 9) && iLocal_514 != 3) && iLocal_514 != 4) && iLocal_514 != 5) && iLocal_514 != 6)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_267[iLocal_514 /*10*/]))
										{
											if (!func_3(Local_267[iLocal_514 /*10*/]))
											{
												if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[iLocal_514 /*10*/], 1) < 24f)
												{
													if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_514 /*10*/], true), 1f))
													{
														if (((!__LIB_42__::func_789(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_514 /*10*/], true), 65.2641f, 3679.68f, 38.9542f, 91.683f, 3725.06f, 38.6181f, 93.1412f, 3724.69f, 42.8097f, 65.3335f, 3679.76f, 41.6201f) && !__LIB_42__::func_789(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_514 /*10*/], true), 65.2641f, 3679.68f, 38.9542f, 91.683f, 3725.06f, 38.6181f, 93.1412f, 3724.69f, 42.8097f, 65.3335f, 3679.76f, 41.6201f)) && !__LIB_42__::func_789(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_514 /*10*/], true), 96.6733f, 3757.29f, 38.5727f, 97.1655f, 3758.33f, 42.81f, 90.7861f, 3740.87f, 42.8855f, 90.6463f, 3741.27f, 38.5212f)) && !__LIB_42__::func_789(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_514 /*10*/], true), 55.5018f, 3699.92f, 38.7549f, 55.9722f, 3700.12f, 42.8396f, 57.5317f, 3688.18f, 42.249f, 57.6211f, 3687.91f, 38.7549f))
														{
															switch (Local_247[iParam0 /*4*/].f_2)
															{
																case 2:
																	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
																	{
																		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
																		{
																			if (iVar0 != joaat("WEAPON_UNARMED"))
																			{
																				HUD::CLEAR_HELP(true);
																				__LIB_0__::func_151("TRV3_6a", -1);
																				Local_247[iParam0 /*4*/].f_2 = 3;
																				Local_247[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2500;
																			}
																			else
																			{
																				HUD::CLEAR_HELP(true);
																				__LIB_0__::func_151("TRV3_6", -1);
																				Local_247[iParam0 /*4*/].f_2 = 4;
																			}
																		}
																		else
																		{
																			HUD::CLEAR_HELP(true);
																			__LIB_0__::func_151("TRV3_6", -1);
																			Local_247[iParam0 /*4*/].f_2 = 4;
																		}
																	}
																	break;
																case 3:
																	if (__LIB_0__::func_1("TRV3_6a"))
																	{
																		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
																		{
																			if (iVar0 == joaat("WEAPON_UNARMED"))
																			{
																				if (MISC::GET_GAME_TIMER() > Local_247[iParam0 /*4*/].f_3)
																				{
																					HUD::CLEAR_HELP(true);
																				}
																			}
																		}
																	}
																	if (!__LIB_0__::func_1("TRV3_6a"))
																	{
																		__LIB_0__::func_151("TRV3_6", -1);
																		Local_247[iParam0 /*4*/].f_2 = 4;
																	}
																	break;
																}
															}
														}
												}
												if (PED::WAS_PED_KILLED_BY_STEALTH(Local_267[iLocal_514 /*10*/]))
												{
													if (__LIB_0__::func_1("TRV3_6") || __LIB_0__::func_1("TRV3_6a"))
													{
														HUD::CLEAR_HELP(true);
													}
													Local_247[iParam0 /*4*/].f_1 = 1;
												}
											}
										}
									}
								}
								iLocal_514++;
							}
							break;
					}
					break;
				case 5:
					iLocal_514 = 0;
					while (iLocal_514 < Local_297.f_0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_297[iLocal_514 /*17*/].f_7[0 /*3*/], true) < 25f)
						{
							iVar1 = joaat("WEAPON_UNARMED");
							switch (Local_247[iParam0 /*4*/].f_2)
							{
								case 0:
									if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
									{
										WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
										if (iVar1 == joaat("WEAPON_STICKYBOMB"))
										{
											Local_247[iParam0 /*4*/].f_2++;
										}
										else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), joaat("SLOT_STICKYBOMB"));
											if (iVar2 != joaat("WEAPON_STICKYBOMB"))
											{
												__LIB_0__::func_151("AM_H_MULTWEP" /* GXT: Weapon slots can contain multiple weapons. Use ~INPUTGROUP_WEAPON_WHEEL_CYCLE~ to cycle through the different weapons in a highlighted slot. */, -1);
												Local_247[iParam0 /*4*/].f_2 = 100;
											}
											else
											{
												__LIB_0__::func_151("TRV3_5a", -1);
												Local_247[iParam0 /*4*/].f_2++;
												Local_247[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
									}
									break;
								case 100:
									iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), joaat("SLOT_STICKYBOMB"));
									if (iVar3 == joaat("WEAPON_STICKYBOMB"))
									{
										HUD::CLEAR_HELP(true);
										__LIB_0__::func_151("TRV3_5a", -1);
										Local_247[iParam0 /*4*/].f_2 = 1;
										Local_247[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 2000;
									}
									break;
								case 1:
									WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
									if (iVar1 == joaat("WEAPON_STICKYBOMB") && MISC::GET_GAME_TIMER() > Local_247[iParam0 /*4*/].f_3)
									{
										HUD::CLEAR_HELP(true);
										__LIB_0__::func_151("TRV3_5b", -1);
										Local_247[iParam0 /*4*/].f_2++;
									}
									break;
								case 2:
									if (func_345(70))
									{
										HUD::CLEAR_HELP(true);
									}
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("TRV3_7", -1);
										Local_247[iParam0 /*4*/].f_1 = 1;
									}
									break;
								}
						}
						iLocal_514++;
					}
					break;
				case 6:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_151("TRV3_21", -1);
						Local_247[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 7:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_151("TRV3_4", -1);
						Local_247[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 8:
					switch (Local_247[iParam0 /*4*/].f_2)
					{
						case 0:
							HUD::CLEAR_PRINTS();
							if (!func_345(29))
							{
								iLocal_512 = __LIB_0__::func_639(Local_267[10 /*10*/], 0, 0);
								__LIB_0__::func_382("TRV3_19", 7500, 1);
								if (!MISC::ARE_STRINGS_EQUAL(sLocal_527, "TRV3_GET_TO_CAR_RT"))
								{
									func_295("TRV3_GET_TO_CAR", 0, "TRV3_EXPLOSIONS");
								}
							}
							Local_247[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (func_345(29))
							{
								HUD::CLEAR_PRINTS();
								Local_247[iParam0 /*4*/].f_2++;
							}
							break;
						case 2:
						case 3:
						case 4:
						case 5:
							if (HUD::DOES_BLIP_EXIST(iLocal_512))
							{
								HUD::REMOVE_BLIP(&iLocal_512);
							}
							if (func_99(7, 73))
							{
								if (__LIB_37__::func_923(&Local_493, -1350.1467f, 725.3141f, 185.3831f, 4f, 4f, 2f, 1, Local_267[10 /*10*/], 0, 0, "TRV3_9", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
									Local_247[iParam0 /*4*/].f_2 = 8;
									Local_247[iParam0 /*4*/].f_1 = 1;
								}
							}
							else if (__LIB_37__::func_923(&Local_493, -1350.1467f, 725.3141f, 185.3831f, 6f, 6f, 2f, 1, Local_267[10 /*10*/], 0, 0, "TRV3_9", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								Local_247[iParam0 /*4*/].f_1 = 1;
							}
							if (Local_247[iParam0 /*4*/].f_2 == 2)
							{
								if (HUD::DOES_BLIP_EXIST(Local_493.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_493.f_5, 255);
									HUD::SET_BLIP_ROUTE(Local_493.f_6, false);
									HUD::CLEAR_GPS_MULTI_ROUTE();
									HUD::START_GPS_MULTI_ROUTE(156, true, false);
									HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1161.3927f, 968.5089f, 199.3427f);
									HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(-1350.1467f, 725.3141f, 185.3831f);
									HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
									Local_247[iParam0 /*4*/].f_2 = 3;
								}
							}
							else if (Local_247[iParam0 /*4*/].f_2 == 3)
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								if (Var4.f_0 < -957f && Var4.f_1 > 1939f)
								{
									HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
									HUD::SET_BLIP_ROUTE(Local_493.f_6, true);
									Local_247[iParam0 /*4*/].f_2 = 4;
								}
								if (!HUD::DOES_BLIP_EXIST(Local_493.f_5))
								{
									if (Local_247[iParam0 /*4*/].f_3 == 0)
									{
										HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
										Local_247[iParam0 /*4*/].f_3 = 1;
									}
								}
								else if (Local_247[iParam0 /*4*/].f_3 == 1)
								{
									HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
									Local_247[iParam0 /*4*/].f_3 = 0;
								}
							}
							else if (Local_247[iParam0 /*4*/].f_2 == 4)
							{
								if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_493.f_6))
								{
									HUD::CLEAR_GPS_MULTI_ROUTE();
									Local_247[iParam0 /*4*/].f_2 = 5;
								}
							}
							break;
					}
					break;
				case 9:
					switch (Local_247[iParam0 /*4*/].f_2)
					{
						case 0:
							fVar5 = 3f;
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar6 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (__LIB_40__::func_503(iVar6))
								{
									fVar5 = (ENTITY::GET_ENTITY_SPEED(iVar6) * 0.4f);
									if (fVar5 < 5f)
									{
										fVar5 = 5f;
									}
								}
							}
							if (__LIB_37__::func_923(&Local_493, -1154.8898f, -1521.2936f, 3.3201f, fVar5, fVar5, 2f, 1, Local_267[10 /*10*/], 0, 0, "TRV3_2", "TRV3_BDY1", "", "", "", 0, 1, 1, -1))
							{
								if (!BitTest(Local_247[iParam0 /*4*/].f_3, 0))
								{
									MISC::SET_BIT(&(Local_247[iParam0 /*4*/].f_3), 0);
								}
								func_420(22, 100);
								func_365(22, 0);
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									func_365(46, 1);
								}
								Local_247[iParam0 /*4*/].f_1 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_512))
							{
								HUD::REMOVE_BLIP(&iLocal_512);
							}
							break;
					}
					break;
				case 10:
					if (HUD::DOES_BLIP_EXIST(iLocal_512))
					{
						HUD::REMOVE_BLIP(&iLocal_512);
					}
					iLocal_512 = __LIB_0__::func_639(Local_267[10 /*10*/], 0, 0);
					__LIB_0__::func_382("TRV3_20", 7500, 1);
					Local_247[iParam0 /*4*/].f_1 = 1;
					break;
				}
			}
	}
}

void func_477(var uParam0, var uParam1)//Position - 0x472E5
{
	uParam0->f_21 = uParam1;
	if (!BitTest(uParam0->f_13, 26))
	{
		MISC::SET_BIT(&(uParam0->f_13), 26);
	}
}

void func_478(int iParam0, int iParam1)//Position - 0x47308
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<3> Var6;
	iVar1 = (iParam1 - iParam0);
	if (Local_251[0 /*6*/] != iParam0 && Local_251[iVar1 /*6*/] != iParam1)
	{
		iVar3 = 0;
		iVar2 = 0;
		while (iVar2 < Local_251.f_0)
		{
			if (iVar2 <= iVar1)
			{
				Local_251[iVar2 /*6*/] = (iParam0 + iVar3);
				Local_251[iVar2 /*6*/].f_1 = 1;
				Local_251[iVar2 /*6*/].f_2 = 0;
				Local_251[iVar2 /*6*/].f_3 = 0;
				iVar3++;
			}
			else
			{
				Local_251[iVar2 /*6*/].f_1 = 0;
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_251.f_0)
	{
		if (Local_251[iVar0 /*6*/].f_1)
		{
			switch (Local_251[iVar0 /*6*/])
			{
				case 2:
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 3:
					break;
				case 18:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (__LIB_40__::func_503(iVar4) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_267[10 /*10*/], iVar4, true))
								{
									Local_251[iVar0 /*6*/].f_2 = 1;
								}
							}
						}
					}
					break;
				case 19:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) < 12f)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
						if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1155.9855f, 929.5417f, 197.1024f, 1) < 10f)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 20:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								Local_251[iVar0 /*6*/].f_2 = 0;
								Local_251[iVar0 /*6*/].f_4 = 0;
							}
							break;
					}
					break;
				case 22:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_345(19) && func_345(18))
							{
								if (iLocal_241)
								{
									iLocal_241 = 0;
									if (!iLocal_242)
									{
										__LIB_0__::func_620(0);
									}
								}
								Local_251[iVar0 /*6*/].f_2 = 0;
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (func_344(19) || func_344(18))
							{
								Local_251[iVar0 /*6*/].f_4 = 0;
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 23:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_345(20))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (func_344(20))
							{
								if (iLocal_242)
								{
									iLocal_242 = 0;
									if (!iLocal_241)
									{
										__LIB_0__::func_620(0);
									}
								}
								Local_251[iVar0 /*6*/].f_4 = 0;
								Local_251[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				case 21:
					if (__LIB_40__::func_503(iLocal_268[0]) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_268[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_268[0], false) && PED::IS_PED_IN_VEHICLE(Local_267[10 /*10*/], iLocal_268[0], false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_268[0]) == joaat("bodhi2"))
							{
								switch (Local_251[iVar0 /*6*/].f_4)
								{
									case 0:
										Local_251[iVar0 /*6*/].f_5 = ENTITY::GET_ENTITY_HEALTH(iLocal_268[0]);
										Local_251[iVar0 /*6*/].f_4++;
										break;
									case 1:
										if ((Local_251[iVar0 /*6*/].f_5 - ENTITY::GET_ENTITY_HEALTH(iLocal_268[0])) > 250)
										{
											Local_251[iVar0 /*6*/].f_2 = 1;
											Local_251[iVar0 /*6*/].f_4++;
										}
										break;
									case 2:
										if (!Local_251[iVar0 /*6*/].f_2)
										{
											Local_251[iVar0 /*6*/].f_5 = ENTITY::GET_ENTITY_HEALTH(iLocal_268[0]);
											Local_251[iVar0 /*6*/].f_4++;
										}
										break;
									case 3:
										if ((Local_251[iVar0 /*6*/].f_5 - ENTITY::GET_ENTITY_HEALTH(iLocal_268[0])) > 250)
										{
											Local_251[iVar0 /*6*/].f_2 = 1;
											Local_251[iVar0 /*6*/].f_4++;
										}
										break;
									}
								}
							}
					}
					break;
				case 24:
					break;
				case 6:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 61.6662f, 3694.2466f, 38.764908f, true) < 155.375f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 7:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 1) < 250f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 8:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 0) < 500f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 11:
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 51.8f, 3672.1f, 38.88f, 1) < 170f)
					{
						if ((((((((func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 143.76f, 3778.86f, 30.0781f, 108.956f, 3797.19f, 30.105f, 72.0823f, 3695.32f, 42.9907f) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), -51.7138f, 3748.37f, 30.412f, 72.0823f, 3695.32f, 42.9907f, -71.9234f, 3660.4f, 42.9586f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), -71.9234f, 3660.4f, 42.9586f, 72.0823f, 3695.32f, 42.9907f, -45.1569f, 3593.76f, 43.059f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), -45.1569f, 3593.76f, 43.059f, 72.0823f, 3695.32f, 42.9907f, -23.654f, 3575.95f, 52.4504f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), -23.654f, 3575.95f, 52.4504f, 72.0823f, 3695.32f, 42.9907f, 35.1416f, 3553.26f, 48.4446f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 72.0823f, 3695.32f, 42.9907f, 35.1416f, 3553.26f, 48.4446f, 88.2876f, 3541.29f, 44.1914f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 88.2876f, 3541.29f, 44.1914f, 72.0823f, 3695.32f, 42.9907f, 125.963f, 3540.97f, 38.0976f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 125.963f, 3540.97f, 38.0976f, 72.0823f, 3695.32f, 42.9907f, 144.039f, 3577.55f, 36.6136f)) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 144.039f, 3577.55f, 36.6136f, 72.0823f, 3695.32f, 42.9907f, 156.052f, 3619.7f, 32.0503f))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
						else if (func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 156.052f, 3619.7f, 32.0503f, 72.0823f, 3695.32f, 42.9907f, 168.361f, 3681.88f, 30.4938f) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 168.361f, 3681.88f, 30.4938f, 72.0823f, 3695.32f, 42.9907f, 143.76f, 3778.86f, 30.0781f))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
						else if (func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 108.956f, 3797.19f, 30.105f, 72.0823f, 3695.32f, 42.9907f, 38.4375f, 3806.55f, 30.4227f) || func_483(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(15f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Vector(20f, 0f, 0f), 38.4375f, 3806.55f, 30.4227f, 72.0823f, 3695.32f, 42.9907f, -51.7138f, 3748.37f, 30.412f))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 12:
					if (func_99(19, 13))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 13:
					if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
					{
						switch (Local_251[iVar0 /*6*/].f_4)
						{
							case 0:
								if (__LIB_14__::func_552() && func_481(Local_267[10 /*10*/]))
								{
									Local_251[iVar0 /*6*/].f_4++;
									Local_251[iVar0 /*6*/].f_2 = 1;
									func_422(4, 7, 2, -1, -1);
								}
								break;
							case 1:
								if (CAM::IS_SCREEN_FADED_OUT() || (CAM::IS_SCREEN_FADING_IN() && func_345(10)))
								{
									if (Local_251[iVar0 /*6*/].f_5 == 0)
									{
										func_292(432);
										func_280(0, 3, 1, 0);
										func_280(1, 4, 1, 0);
										func_280(2, 5, 1, 0);
										func_280(5, 8, 1, 0);
										func_280(6, 1, 1, 0);
										Local_251[iVar0 /*6*/].f_5 = 1;
									}
								}
								if ((func_345(10) && func_407(4, 7)) || func_344(10))
								{
									if (!func_481(Local_267[10 /*10*/]))
									{
										if (func_344(10))
										{
											func_422(4, 7, 0, -1, -1);
										}
										Local_251[iVar0 /*6*/].f_2 = 0;
										Local_251[iVar0 /*6*/].f_4 = 0;
									}
								}
								break;
							}
					}
					break;
				case 9:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (func_99(3, 9))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					else if (func_99(4, 10))
					{
						Local_251[iVar0 /*6*/].f_2 = 0;
					}
					break;
				case 10:
					fVar5 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 57.512672f, 3688.2483f, 42.261204f, 1);
					if (fVar5 < (117.25f + (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 10f)))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 300.5994f, 3574.6003f, 19.14899f, 723.4376f, 3619.607f, 58.07334f, 150.5f, false, true, 0))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 15:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (__LIB_15__::func_965("TRV3_attr"))
							{
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (!__LIB_15__::func_965("TRV3_attr"))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 17:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!HUD::DOES_BLIP_EXIST(Local_493.f_1[0]))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 50:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_268[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 55:
					if (iLocal_53)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					else
					{
						Local_251[iVar0 /*6*/].f_2 = 0;
					}
					break;
				case 56:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (!func_3(Local_267[7 /*10*/]))
						{
							if (PED::IS_PED_RESPONDING_TO_EVENT(Local_267[7 /*10*/], 1))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_267[7 /*10*/], iLocal_288);
							}
						}
					}
					break;
				case 53:
					if (bLocal_49 || bLocal_52)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 77:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), false))
							{
								if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB")) == 0)
								{
									Local_251[iVar0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 3000;
								}
							}
							break;
						default:
							if (MISC::GET_GAME_TIMER() > Local_251[iVar0 /*6*/].f_4)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 78:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_267[10 /*10*/], 1) < 10f)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 79:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 61.61f, 3685.7f, 38.86f, 1) > 183f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 80:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 61.61f, 3685.7f, 38.86f, 1) > 250f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 81:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (!func_345(78))
							{
								Local_251[iVar0 /*6*/].f_4++;
								Local_251[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 15000;
							}
							break;
						case 1:
							if (func_345(78))
							{
								if (MISC::GET_GAME_TIMER() > Local_251[iVar0 /*6*/].f_5 || func_345(53))
								{
									Local_251[iVar0 /*6*/].f_4++;
									Local_251[iVar0 /*6*/].f_2 = 1;
								}
							}
							break;
						case 5:
							if (!func_345(78))
							{
								Local_251[iVar0 /*6*/].f_4 = 0;
							}
							else if (func_345(74))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 54:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (func_407(0, 12))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
						if (bLocal_52 || bLocal_49)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_267[5 /*10*/]))
						{
							if (func_3(Local_267[5 /*10*/]))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_267[6 /*10*/]))
						{
							if (func_3(Local_267[6 /*10*/]))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				case 57:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						iLocal_513 = 0;
						while (iLocal_513 < Local_267.f_0)
						{
							if (!func_3(Local_267[iLocal_513 /*10*/]))
							{
								if (iLocal_513 != 10 && iLocal_513 != 7)
								{
									if (PED::IS_PED_RESPONDING_TO_EVENT(Local_267[iLocal_513 /*10*/], 125) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) - Vector(-1.5f, 1f, 1f), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) + Vector(-1.5f, 1f, 1f), joaat("WEAPON_STICKYBOMB"), false))
									{
										if (MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) - Vector(-1.5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) + Vector(-1.5f, 10f, 10f), joaat("WEAPON_STICKYBOMB"), false))
										{
											MISC::GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) - Vector(-1.5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(Local_267[iLocal_513 /*10*/], true) + Vector(-1.5f, 10f, 10f), joaat("WEAPON_STICKYBOMB"), &Local_515, false);
											Local_251[iVar0 /*6*/].f_5 = iLocal_513;
											Local_251[iVar0 /*6*/].f_2 = 1;
										}
									}
								}
							}
							iLocal_513++;
						}
					}
					break;
				case 58:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (__LIB_15__::func_965("TRV3_IG5"))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 65:
					Local_251[iVar0 /*6*/].f_2 = 1;
					if (Local_251[iVar0 /*6*/].f_4 == 0)
					{
						if (!func_418(&(Local_251[iVar0 /*6*/].f_5)))
						{
							Local_251[iVar0 /*6*/].f_2 = 0;
							Local_251[iVar0 /*6*/].f_4++;
						}
					}
					break;
				case 66:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (func_311(11, 54) == 5)
							{
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (func_311(11, 54) <= 2)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 67:
					if (func_99(11, 54))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 68:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (func_345(67) && func_344(73))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 69:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/))
					{
						if (!__LIB_0__::func_193())
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 70:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							Local_251[iVar0 /*6*/].f_4++;
							break;
						case 1:
							if (func_311(11, 54) == Local_297.f_0)
							{
								Local_251[iVar0 /*6*/].f_5 = func_311(11, 54);
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 2:
							if (func_311(11, 54) < Local_251[iVar0 /*6*/].f_5)
							{
								Local_251[iVar0 /*6*/].f_5 = func_311(11, 54);
								Local_251[iVar0 /*6*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
						default:
							if (MISC::GET_GAME_TIMER() > Local_251[iVar0 /*6*/].f_4)
							{
								Local_251[iVar0 /*6*/].f_4 = 2;
								Local_251[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				case 71:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (func_345(70))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 72:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							Local_251[iVar0 /*6*/].f_5 = 0;
							iLocal_514 = 0;
							while (iLocal_514 < Local_297.f_0)
							{
								if ((Local_297[iLocal_514 /*17*/] != 7 && Local_297[iLocal_514 /*17*/] != 4) && Local_297[iLocal_514 /*17*/] != 3)
								{
									Local_251[iVar0 /*6*/].f_5++;
								}
								iLocal_514++;
							}
							if (Local_251[iVar0 /*6*/].f_5 == 0)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 73:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						iLocal_514 = 0;
						while (iLocal_514 < Local_297.f_0)
						{
							if (Local_297[iLocal_514 /*17*/] == 7)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							iLocal_514++;
						}
					}
					break;
				case 74:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 27:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 61.6662f, 3694.2466f, 38.764908f, true) > 155.375f)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 28:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 61.6662f, 3694.2466f, 38.764908f, true) > 300f)
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 29:
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(Local_267[10 /*10*/]) == PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							else if (__LIB_0__::func_76(Local_267[10 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 15f)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_267[10 /*10*/], false))
						{
							if (__LIB_0__::func_76(Local_267[10 /*10*/], PLAYER::PLAYER_PED_ID(), 1) < 6f)
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				case 31:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 300f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 32:
					if (!Local_251[iVar0 /*6*/].f_2)
					{
						switch (Local_251[iVar0 /*6*/].f_4)
						{
							case 0:
								Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								if (Var6.f_1 < 2055f)
								{
									iLocal_518 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_518, -291.3503f, -540.2892f, 160.9588f, 25f);
									iLocal_519 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_519, -1271.1735f, -1046.4539f, 106.8815f, 25f);
									iLocal_517 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_517, -549.4528f, -754.2225f, 160.541f, 25f);
									Local_251[iVar0 /*6*/].f_4++;
									iLocal_520 = 1;
								}
								break;
							case 1:
								if ((GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_517) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_518)) || GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_519))
								{
									GRAPHICS::DESTROY_TRACKED_POINT(iLocal_517);
									GRAPHICS::DESTROY_TRACKED_POINT(iLocal_518);
									GRAPHICS::DESTROY_TRACKED_POINT(iLocal_519);
									iLocal_520 = 0;
									Local_251[iVar0 /*6*/].f_4++;
									Local_251[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
								}
								break;
							case 2:
								if (MISC::GET_GAME_TIMER() > Local_251[iVar0 /*6*/].f_5)
								{
									Local_251[iVar0 /*6*/].f_2 = 1;
								}
								break;
							}
					}
					break;
				case 33:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1351.1f, 727.5f, 187.5f, 1) < 350f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 30:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!func_3(Local_267[10 /*10*/]))
					{
						if (__LIB_40__::func_503(iLocal_268[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_267[10 /*10*/], iLocal_268[0], false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_268[0], false))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				case 34:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1373.5438f, 728.59595f, 182.16005f, -1337.6146f, 738.5504f, 187.76003f, 12.125f, false, true, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false))
						{
							if ((!ENTITY::IS_ENTITY_IN_AIR(iLocal_268[0]) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_268[0]))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				case 35:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_99(10, 72))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					else
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 36:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 37:
					switch (Local_251[iVar0 /*6*/].f_4)
					{
						case 0:
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								Local_251[iVar0 /*6*/].f_4++;
							}
							break;
						case 1:
							if (CUTSCENE::HAS_CUTSCENE_FINISHED())
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 38:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!func_345(21))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 39:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1152.7819f, -1523.988f, 3.5198f, 1) < 50f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 40:
					if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1152.7819f, -1523.988f, 3.5198f, 1) < 550f)
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 41:
					if (func_479(1, 9))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 42:
					if (func_99(14, 80))
					{
						Local_251[iVar0 /*6*/].f_2 = 1;
					}
					break;
				case 43:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!func_345(20))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.794f, -1522.3022f, 6.086947f, -1143.0336f, -1518.1082f, 15.913942f, 7.625f, false, true, 0))
						{
							Local_251[iVar0 /*6*/].f_2 = 1;
						}
					}
					break;
				case 44:
					Local_251[iVar0 /*6*/].f_2 = 0;
					if (!__LIB_0__::func_75())
					{
						if (!func_345(20))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.0293f, -1521.4716f, 11.882867f, -1148.1669f, -1524.1693f, 9.454223f, 2.4375f, false, true, 0))
							{
								Local_251[iVar0 /*6*/].f_2 = 1;
							}
						}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_479(int iParam0, int iParam1)//Position - 0x48DF3
{
	if (Local_247[iParam0 /*4*/] == iParam1)
	{
		if (Local_247[iParam0 /*4*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_481(int iParam0)//Position - 0x48E2E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (__LIB_40__::func_504(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) == 3)
					{
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 1, false))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false) == iParam0)
							{
								return 1;
							}
						}
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 2, false))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false) == iParam0)
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_483(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0x48EC6
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var1 = { __LIB_0__::func_79(Param1 - Param0) };
	Var1 = { Var1 * Vector(300f, 300f, 300f) };
	Var1 = { Var1 + Param0 };
	Var2 = { __LIB_0__::func_835(Param3 - Param2, Param4 - Param2) };
	if (!__LIB_0__::func_86(Var2))
	{
		Var2 = { __LIB_0__::func_79(Var2) };
		if (__LIB_14__::func_797(&Var0, Param0, Var1, Var2, Param2))
		{
			if (__LIB_40__::func_508(Var0, Param2, Param3, Param4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_484()//Position - 0x48F6B
{
	func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 65, 0, 0, 0, 1, 0, 1, 0);
	func_152(2, 66, 0, 0, 0, 1, 0, 1, 0);
	__LIB_1__::func_33(0);
	if (func_99(1, 65))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_RAYFIRE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_3_RAYFIRE");
		}
		__LIB_0__::func_424(1);
		__LIB_0__::func_630(518);
		return 1;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x48FFF
{
	func_478(52, 82);
	func_428(0, 4, 0, 0, 1, 0, 1, 0);
	func_428(1, 2, 2, 67, 1, 0, 1, 0);
	func_428(2, 6, 2, 79, 1, 0, 1, 0);
	func_428(3, 5, 3, 74, 1, 0, 1, 0);
	func_428(4, 7, 2, 67, 1, 0, 1, 0);
	func_152(0, 40, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 44, 0, 2, 53, 1, 0, 1, 0);
	func_152(2, 60, 0, 0, 0, 1, 0, 1, 0);
	func_152(3, 43, 0, 0, 0, 1, 0, 1, 0);
	func_152(4, 46, 0, 2, 54, 1, 0, 1, 0);
	func_152(5, 47, 0, 0, 0, 1, 0, 1, 0);
	func_152(6, 50, 0, 3, 53, 1, 0, 1, 0);
	func_152(7, 49, 1, 2, 61, 5, 53, 1, 0);
	func_152(8, 48, 0, 2, 58, 5, 53, 5, 54);
	func_152(9, 51, 0, 0, 0, 1, 0, 1, 0);
	func_152(10, 53, 0, 0, 0, 1, 0, 1, 0);
	func_152(11, 54, 0, 0, 0, 1, 0, 1, 0);
	func_152(12, 23, 0, 0, 0, 1, 0, 1, 0);
	func_152(13, 25, 0, 2, 67, 5, 53, 1, 0);
	func_152(14, 26, 0, 0, 0, 1, 0, 1, 0);
	func_152(15, 78, 0, 0, 0, 1, 0, 1, 0);
	func_152(16, 56, 0, 0, 0, 1, 0, 1, 0);
	func_152(17, 28, 0, 0, 0, 1, 0, 1, 0);
	func_152(18, 29, 0, 0, 0, 1, 0, 1, 0);
	func_152(19, 30, 0, 2, 68, 1, 0, 1, 0);
	func_152(20, 31, 0, 0, 0, 1, 0, 1, 0);
	func_152(21, 32, 0, 2, 66, 1, 0, 1, 0);
	func_152(22, 57, 0, 0, 0, 1, 0, 1, 0);
	func_152(23, 58, 0, 2, 76, 1, 0, 1, 0);
	func_152(24, 59, 0, 0, 0, 1, 0, 1, 0);
	func_152(25, 52, 0, 0, 0, 1, 0, 1, 0);
	func_152(26, 15, 0, 0, 0, 1, 0, 1, 0);
	func_152(27, 16, 0, 2, 73, 1, 0, 1, 0);
	func_152(28, 61, 0, 2, 53, 1, 0, 1, 0);
	func_152(29, 62, 0, 0, 0, 1, 0, 1, 0);
	func_152(30, 89, 0, 2, 73, 1, 0, 1, 0);
	func_152(31, 63, 0, 0, 0, 1, 0, 1, 0);
	func_152(32, 64, 0, 0, 0, 1, 0, 1, 0);
	func_410(0, 12, 3, 55, 4, 56, 1, 0, 1, 0, 1, 0);
	func_410(1, 13, 3, 53, 4, 73, 1, 0, 1, 0, 1, 0);
	func_410(3, 14, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(4, 15, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(5, 16, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(6, 17, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(7, 18, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(8, 19, 3, 53, 5, 55, 1, 0, 1, 0, 1, 0);
	func_410(9, 20, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(10, 21, 2, 53, 4, 65, 1, 0, 1, 0, 1, 0);
	func_410(11, 22, 2, 70, 5, 53, 1, 0, 1, 0, 1, 0);
	func_410(12, 25, 2, 81, 4, 53, 1, 0, 1, 0, 1, 0);
	func_410(13, 24, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(14, 29, 2, 81, 5, 53, 8, 81, 5, 65, 1, 0);
	func_410(15, 26, 2, 81, 4, 74, 4, 53, 4, 65, 1, 0);
	func_410(17, 27, 2, 81, 4, 74, 5, 53, 1, 0, 1, 0);
	func_410(16, 28, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_393(2, 0, 0, 1, 0);
	func_393(6, 3, 67, 4, 77);
	func_393(7, 0, 0, 1, 0);
	func_393(8, 2, 80, 1, 0);
	if (func_345(68) && func_345(69))
	{
		AUDIO::START_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.6604f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
		ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
		*iParam0 = 1;
		return 1;
	}
	else if (func_345(72))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.6604f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
		ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
		HUD::CLEAR_PRINTS();
		AUDIO::START_AUDIO_SCENE("TREVOR_3_ESCAPE_TO_CAR");
		return 1;
	}
	return 0;
}

int func_487()//Position - 0x49473
{
	func_478(49, 51);
	func_152(0, 37, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 38, 0, 0, 0, 1, 0, 1, 0);
	func_152(2, 39, 0, 0, 0, 1, 0, 1, 0);
	if (func_99(0, 37))
	{
		StringCopy(&cLocal_476, "", 24);
		StringCopy(&cLocal_480, "", 24);
		StringCopy(&Local_484, "", 24);
		iLocal_475 = 0;
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 517);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

int func_489()//Position - 0x4955A
{
	func_490();
	func_478(5, 26);
	func_428(0, 1, 0, 0, 1, 0, 1, 0);
	func_410(0, 3, 2, 18, 4, 19, 1, 0, 1, 0, 1, 0);
	func_410(1, 4, 2, 22, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(2, 5, 2, 23, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(3, 6, 2, 21, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(4, 7, 2, 10, 4, 17, 1, 0, 1, 0, 1, 0);
	func_409(5, 8, 6, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_410(6, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_410(7, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0);
	func_152(0, 5, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 7, 0, 0, 0, 1, 0, 1, 0);
	func_152(2, 8, 0, 0, 0, 1, 0, 1, 0);
	func_152(3, 9, 0, 2, 8, 5, 9, 1, 0);
	func_152(4, 10, 0, 3, 8, 4, 9, 1, 0);
	func_152(6, 15, 0, 2, 9, 1, 0, 1, 0);
	func_152(7, 18, 0, 2, 9, 1, 0, 1, 0);
	func_152(8, 19, 0, 2, 9, 1, 0, 1, 0);
	func_152(9, 20, 0, 2, 9, 1, 0, 1, 0);
	func_152(10, 21, 0, 2, 9, 1, 0, 1, 0);
	func_152(11, 22, 0, 2, 9, 1, 0, 1, 0);
	func_152(12, 24, 0, 0, 0, 1, 0, 1, 0);
	func_152(13, 78, 0, 0, 0, 1, 0, 1, 0);
	func_152(14, 79, 0, 0, 0, 1, 0, 1, 0);
	func_152(15, 53, 0, 0, 0, 1, 0, 1, 0);
	func_152(16, 6, 0, 0, 0, 1, 0, 1, 0);
	func_152(17, 11, 1, 2, 7, 1, 0, 1, 0);
	func_152(18, 12, 0, 0, 0, 1, 0, 1, 0);
	func_152(19, 13, 0, 2, 11, 1, 0, 1, 0);
	func_152(20, 34, 0, 2, 7, 1, 0, 1, 0);
	func_426(21, 35, 20, 34, 0, 0);
	func_152(22, 36, 0, 0, 0, 1, 0, 1, 0);
	func_393(2, 0, 0, 1, 0);
	func_393(3, 0, 0, 1, 0);
	func_393(5, 0, 0, 1, 0);
	if ((((func_345(9) && func_345(17)) && func_345(12)) && func_344(13)) && func_99(20, 34))
	{
		MISC::FORCE_LIGHTNING_FLASH();
		__LIB_13__::func_815(&Local_493, 1, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_512))
		{
			HUD::REMOVE_BLIP(&iLocal_512);
		}
		if (__LIB_40__::func_503(iLocal_268[0]))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_268[0], 1000, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_268[0], 1000f);
			if (!func_3(Local_267[10 /*10*/]))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(Local_267[10 /*10*/]))
				{
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_267[10 /*10*/], true), 5f);
				}
			}
		}
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		return 1;
	}
	return 0;
}

void func_490()//Position - 0x4982A
{
	struct<3> Var0;
	if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), false))
			{
				if (__LIB_0__::func_86(Var0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), true) };
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0)))
	{
		Local_267[10 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0));
		func_357();
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
	{
		if (!PED::IS_PED_INJURED(Local_267[10 /*10*/]))
		{
			ENTITY::SET_ENTITY_COORDS(Local_267[10 /*10*/], 1981.472f, 3815.6523f, 31.3564f, true, false, false, true);
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1963.9277f, 3789.891f, 30.252787f, 2002.2701f, 3813.0166f, 36.09295f, 19.5625f, false, true))
			{
				ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 260f);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_267[10 /*10*/], 303.0639f);
			}
			PED::FORCE_PED_MOTION_STATE(Local_267[10 /*10*/], joaat("MotionState_Walk"), false, 0, false);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_267[10 /*10*/], 1f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_267[10 /*10*/], true, false);
			func_357();
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1982.0884f, 3817.2808f, 31.267f, true, false, false, true);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var0, 1963.9277f, 3789.891f, 30.252787f, 2002.2701f, 3813.0166f, 36.09295f, 19.5625f, false, true))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 233f);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 308.0639f);
		}
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		if (__LIB_7__::func_691())
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1200, 0f, true, false);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 600, 0f, true, false);
		}
	}
}

int func_491()//Position - 0x49A21
{
	func_478(1, 4);
	func_152(0, 1, 0, 0, 0, 1, 0, 1, 0);
	func_152(1, 2, 0, 0, 0, 1, 0, 1, 0);
	func_152(2, 3, 0, 2, 2, 1, 0, 1, 0);
	func_152(3, 4, 0, 2, 2, 1, 0, 1, 0);
	func_490();
	if (func_345(3) && func_345(2))
	{
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

void func_492(int iParam0)//Position - 0x49A97
{
	int iVar0;
	func_496();
	func_495();
	func_494();
	func_493();
	HUD::CLEAR_HELP(true);
	iVar0 = iLocal_256 + 1;
	if (iParam0 == 14)
	{
		iLocal_256 = iVar0;
	}
	else
	{
		iLocal_256 = iParam0;
	}
}

void func_493()//Position - 0x49ACF
{
	iLocal_514 = 0;
	while (iLocal_514 < Local_246.f_0)
	{
		Local_246[iLocal_514 /*6*/] = 0;
		Local_246[iLocal_514 /*6*/].f_1 = 0;
		Local_246[iLocal_514 /*6*/].f_3 = 0;
		Local_246[iLocal_514 /*6*/].f_4 = 0;
		Local_246[iLocal_514 /*6*/].f_2 = 0;
		iLocal_514++;
	}
}

void func_494()//Position - 0x49B24
{
	iLocal_514 = 0;
	while (iLocal_514 < Local_247.f_0)
	{
		Local_247[iLocal_514 /*4*/] = 0;
		Local_247[iLocal_514 /*4*/].f_1 = 0;
		Local_247[iLocal_514 /*4*/].f_2 = 0;
		Local_247[iLocal_514 /*4*/].f_3 = 0;
		iLocal_514++;
	}
}

void func_495()//Position - 0x49B6E
{
	iLocal_514 = 0;
	while (iLocal_514 < Local_248.f_0)
	{
		if (Local_248[iLocal_514 /*10*/].f_4)
		{
			Local_248[iLocal_514 /*10*/].f_1 = 1;
			Local_248[iLocal_514 /*10*/].f_6 = 99;
			func_152(iLocal_514, Local_248[iLocal_514 /*10*/], 0, 0, 0, 1, 0, 1, 0);
		}
		Local_248[iLocal_514 /*10*/] = 0;
		Local_248[iLocal_514 /*10*/].f_1 = 0;
		Local_248[iLocal_514 /*10*/].f_2 = 0;
		Local_248[iLocal_514 /*10*/].f_3 = 0;
		Local_248[iLocal_514 /*10*/].f_6 = 0;
		Local_248[iLocal_514 /*10*/].f_4 = 0;
		Local_248[iLocal_514 /*10*/].f_5 = 0;
		Local_248[iLocal_514 /*10*/].f_7 = 0;
		Local_248[iLocal_514 /*10*/].f_8 = 0;
		Local_248[iLocal_514 /*10*/].f_9 = 0f;
		iLocal_514++;
	}
}

void func_496()//Position - 0x49C35
{
	iLocal_514 = 0;
	while (iLocal_514 < Local_251.f_0)
	{
		Local_251[iLocal_514 /*6*/] = 0;
		Local_251[iLocal_514 /*6*/].f_1 = 0;
		Local_251[iLocal_514 /*6*/].f_2 = 0;
		Local_251[iLocal_514 /*6*/].f_3 = 0;
		Local_251[iLocal_514 /*6*/].f_4 = 0;
		Local_251[iLocal_514 /*6*/].f_5 = 0;
		iLocal_514++;
	}
}

int func_497()//Position - 0x49C95
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	__LIB_0__::func_424(1);
	Global_113330 = 1;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
	AUDIO::SET_VEHICLE_CONVERSATIONS_PERSIST(true, true);
	HUD::REQUEST_ADDITIONAL_TEXT("TREV3", 0);
	PED::ADD_RELATIONSHIP_GROUP("relGroupDislike", &iLocal_285);
	PED::ADD_RELATIONSHIP_GROUP("Gangb", &iLocal_286);
	PED::ADD_RELATIONSHIP_GROUP("Wade", &iLocal_287);
	PED::ADD_RELATIONSHIP_GROUP("fought ped", &iLocal_288);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_287, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_287);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_286, iLocal_287);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_287, iLocal_286);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_286, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_285, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_286, iLocal_288);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_288, iLocal_286);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_288, joaat("PLAYER"));
	iVar0 = 0;
	while (iVar0 < iLocal_284)
	{
		StringCopy(&cVar2, "nGang", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		PED::ADD_RELATIONSHIP_GROUP(&cVar2, &(iLocal_284[iVar0]));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_284[iVar0], joaat("PLAYER"));
		iVar1 = 0;
		while (iVar1 < iLocal_284)
		{
			if (iVar1 < iVar0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_284[iVar0], iLocal_284[iVar1]);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_284[iVar1], iLocal_284[iVar0]);
			}
			iVar1++;
		}
		iVar0++;
	}
	func_626(&Local_271, &uLocal_306, cLocal_471, 9f, 80.601524f, 3685.0378f, 38.712517f, 121f, 3);
	Local_282[0 /*3*/] = { 52.65201f, 3635.9055f, 38.70047f };
	Local_282[1 /*3*/] = { 37.014786f, 3621.633f, 39.000427f };
	Local_282[2 /*3*/] = { 24.249683f, 3624.625f, 39.11548f };
	Local_282[3 /*3*/] = { 29.514772f, 3637.2024f, 38.772064f };
	Local_282[4 /*3*/] = { 31.043964f, 3647.6926f, 38.755215f };
	Local_282[5 /*3*/] = { 15.603708f, 3650.3894f, 42.12028f };
	Local_282[6 /*3*/] = { 7.077183f, 3664.04f, 41.797867f };
	Local_282[7 /*3*/] = { 24.638447f, 3663.9744f, 42.407444f };
	Local_282[8 /*3*/] = { 9.000495f, 3687.044f, 39.331165f };
	Local_282[9 /*3*/] = { 18.983698f, 3704.9133f, 38.769413f };
	Local_282[10 /*3*/] = { -3.218173f, 3715.2256f, 42.921997f };
	Local_282[11 /*3*/] = { 21.879295f, 3721.2441f, 38.56995f };
	Local_282[12 /*3*/] = { 13.994083f, 3734.2014f, 38.674572f };
	Local_282[13 /*3*/] = { 35.858707f, 3733.5454f, 38.669376f };
	Local_282[14 /*3*/] = { 24.373564f, 3744.3525f, 38.665215f };
	Local_282[15 /*3*/] = { 42.977978f, 3745.6035f, 38.665215f };
	Local_282[16 /*3*/] = { 57.979008f, 3743.6614f, 38.679287f };
	Local_282[17 /*3*/] = { 70.274704f, 3762.1729f, 38.740314f };
	Local_282[18 /*3*/] = { 92.8259f, 3743.2776f, 38.633743f };
	Local_282[19 /*3*/] = { 106.78014f, 3737.3347f, 38.73051f };
	Local_282[20 /*3*/] = { 114.09594f, 3724.4944f, 38.727863f };
	Local_282[21 /*3*/] = { 121.97108f, 3712.556f, 38.754875f };
	Local_282[22 /*3*/] = { 114.71806f, 3701.484f, 38.754875f };
	Local_282[23 /*3*/] = { 108.03722f, 3686.2957f, 38.754875f };
	Local_282[24 /*3*/] = { 91.71163f, 3679.0151f, 38.666607f };
	Local_282[25 /*3*/] = { 96.87774f, 3656.8044f, 38.754875f };
	Local_282[26 /*3*/] = { 95.055305f, 3641.0142f, 38.754875f };
	Local_282[27 /*3*/] = { 74.32508f, 3609.529f, 38.62163f };
	Local_282[28 /*3*/] = { 95.68222f, 3609.1753f, 38.795425f };
	Local_282[29 /*3*/] = { 69.808815f, 3646.9326f, 44.825924f };
	Local_282[30 /*3*/] = { 62.494877f, 3670.042f, 41.572426f };
	Local_282[31 /*3*/] = { 51.63249f, 3680.5437f, 38.73888f };
	Local_282[32 /*3*/] = { 62.5936f, 3684.6633f, 38.83427f };
	Local_282[33 /*3*/] = { 49.683342f, 3694.6426f, 38.755215f };
	Local_282[34 /*3*/] = { 34.955578f, 3704.2136f, 38.622513f };
	Local_282[35 /*3*/] = { 45.19976f, 3718.1868f, 38.711952f };
	Local_282[36 /*3*/] = { 62.71311f, 3726.7852f, 38.708153f };
	Local_282[37 /*3*/] = { 71.145996f, 3699.5095f, 38.754875f };
	Local_282[38 /*3*/] = { 66.005035f, 3707.481f, 38.754875f };
	Local_282[39 /*3*/] = { 75.5512f, 3717.8247f, 38.754875f };
	Local_282[40 /*3*/] = { 72.45716f, 3734.9365f, 38.58567f };
	Local_282[41 /*3*/] = { 88.49079f, 3723.996f, 38.718147f };
	Local_282[42 /*3*/] = { 89.73351f, 3707.401f, 38.614914f };
	Local_282[43 /*3*/] = { 78.29477f, 3685.643f, 38.52933f };
	__LIB_40__::func_507(&Local_272, "TRV3_ATTACK", 3, "TREV3BIKER3");
	__LIB_40__::func_507(&Local_273, "TRV3_reac3", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_277, "TRV3_giveup", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_274, "TRV3_reac2", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_275, "TRV3_reac4", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_276, "TRV3_reac5", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_278, "TRV3_reac1", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_279, "TRV3_reac3", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_280, "TRV3_reac1", 5, "TRV3BIKER2");
	__LIB_40__::func_507(&Local_281, "TRV3_ATTACK2", 4, "TREV3BIKER2");
	func_624(3);
	func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
	if (__LIB_0__::func_323())
	{
		iVar3 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar3++;
		}
		switch (iVar3)
		{
			case 0:
				func_498(2, Global_94618, 1);
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			case 1:
				if (Global_94618 == 1)
				{
					func_498(3, Global_94618, 0);
				}
				else
				{
					func_498(4, Global_94618, 1);
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				return 0;
				break;
			case 2:
				if (Global_94618)
				{
					func_498(6, Global_94618, 0);
				}
				else
				{
					func_498(6, Global_94618, 1);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			case 3:
				if (Global_94618)
				{
					func_498(7, Global_94618, 0);
				}
				else
				{
					func_498(7, Global_94618, 1);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				return 0;
				break;
			case 4:
				if (Global_94618 == 1)
				{
					func_498(8, Global_94618, 0);
				}
				else
				{
					func_498(9, Global_94618, 1);
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				return 0;
				break;
			case 5:
				if (Global_94618 == 1)
				{
					func_498(10, Global_94618, 0);
				}
				else
				{
					func_498(10, Global_94618, 1);
				}
				return 0;
				break;
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.1765f, 3817.0603f, 31.3805f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 329.2307f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else if (__LIB_0__::func_2(0))
	{
		func_498(1, 0, 0);
		return 0;
	}
	return 1;
}

void func_498(int iParam0, bool bParam1, bool bParam2)//Position - 0x4A487
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	int iVar4;
	func_619(3);
	iLocal_256 = iParam0;
	PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	PED::SET_PED_HELMET_FLAG(PLAYER::PLAYER_PED_ID(), 0);
	iLocal_252 = 1;
	__LIB_0__::func_424(1);
	switch (iParam0)
	{
		case 1:
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			STREAMING::REQUEST_MODEL(joaat("IG_Wade"));
			func_618(0);
			break;
		case 2:
			if (bParam2)
			{
				__LIB_0__::func_427(1981.5444f, 3816.7107f, 31.3087f, 308.0639f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(20, 0, 0);
			}
			func_503(1, 0, 0, 1981.5444f, 3816.7107f, 31.3087f, 308.0639f, 1980.6555f, 3818.641f, 31.4477f, 197.5902f, 1993.611f, 3813.4626f, 31.1612f, 115.7467f, 0, 0, bParam2);
			func_357();
			func_355(0, 5, 1, 1);
			func_355(5, 77, 1, 1);
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 3:
			if (bParam2)
			{
				__LIB_0__::func_427(59.9711f, 3605.2766f, 38.8392f, 351.7204f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(22, 0, 0);
			}
			func_618(4);
			TASK::REQUEST_WAYPOINT_RECORDING("trev3_trL");
			TASK::REQUEST_WAYPOINT_RECORDING("trev3_trR");
			STREAMING::PREFETCH_SRL("TREV3_TRAILER_ARRIVAL_CUTSCENE");
			while (((!func_152(0, 9, 0, 0, 0, 1, 0, 1, 0) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trev3_trL")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trev3_trR")) || !STREAMING::IS_SRL_LOADED())
			{
				__LIB_15__::func_962(0);
			}
			STREAMING::BEGIN_SRL();
			SYSTEM::SETTIMERA(12000);
			STREAMING::SET_SRL_TIME(12000f);
			STREAMING::SET_SRL_FORCE_PRESTREAM(1);
			iLocal_261 = 0;
			func_152(1, 15, 0, 0, 0, 1, 0, 1, 0);
			func_152(2, 18, 0, 0, 0, 1, 0, 1, 0);
			func_152(3, 19, 0, 0, 0, 1, 0, 1, 0);
			func_152(4, 20, 0, 0, 0, 1, 0, 1, 0);
			func_152(5, 21, 0, 0, 0, 1, 0, 1, 0);
			func_152(6, 22, 0, 0, 0, 1, 0, 1, 0);
			func_503(0, 1, 1, 59.9711f, 3605.2766f, 38.8392f, 351.7204f, 60.5616f, 3605.4238f, 38.862f, 4f, 59.7026f, 3602.7822f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_357();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_268[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_268[0], -1);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 4:
			if (bParam2)
			{
				__LIB_0__::func_427(59.9711f, 3605.2766f, 38.8392f, 351.7204f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(23, 0, 0);
			}
			MISC::CLEAR_AREA(59.9711f, 3605.2766f, 38.8392f, 200f, true, false, false, false);
			func_618(4);
			while (!func_152(0, 9, 0, 0, 0, 1, 0, 1, 0))
			{
				__LIB_15__::func_962(0);
			}
			func_152(1, 15, 0, 0, 0, 1, 0, 1, 0);
			func_152(2, 18, 0, 0, 0, 1, 0, 1, 0);
			func_152(3, 19, 0, 0, 0, 1, 0, 1, 0);
			func_152(4, 20, 0, 0, 0, 1, 0, 1, 0);
			func_152(5, 21, 0, 0, 0, 1, 0, 1, 0);
			func_152(6, 22, 0, 0, 0, 1, 0, 1, 0);
			func_503(0, 1, 1, 59.9711f, 3605.2766f, 38.8392f, 351.7204f, 60.5616f, 3605.4238f, 38.862f, 4f, 59.7026f, 3602.7822f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_357();
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			func_495();
			func_295("TRV3_PLANTING_RT", 0, "TRV3_ALERTED");
			func_355(16, 56, 0, 1);
			func_354(16, 56, 1);
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 5:
			if (bParam2)
			{
				__LIB_0__::func_427(54.6849f, 3700.9927f, 38.755f, 325f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			STREAMING::REQUEST_PTFX_ASSET();
			func_503(0, 0, 1, 54.6849f, 3700.9927f, 38.755f, 325f, 60.5616f, 3605.4238f, 38.862f, 4f, 59.7026f, 3602.7822f, 38.8023f, 3.2394f, 0, 0, bParam2);
			func_357();
			Local_297[0 /*17*/] = 1;
			Local_297[1 /*17*/] = 1;
			Local_297[2 /*17*/] = 1;
			Local_297[3 /*17*/] = 1;
			Local_297[4 /*17*/] = 1;
			while ((((Local_297[0 /*17*/] != 2 || Local_297[1 /*17*/] != 2) || Local_297[2 /*17*/] != 2) || Local_297[3 /*17*/] != 2) || Local_297[4 /*17*/] != 2)
			{
				func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
				__LIB_15__::func_962(0);
			}
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				__LIB_15__::func_962(0);
			}
			func_295("TRV3_PLANTING_RT", 0, "TRV3_ALERTED");
			if (!bParam2)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 58.9388f, 3617.554f, 38.6921f, true, false, false, true);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 6:
			if (bParam2)
			{
				__LIB_0__::func_427(74.9264f, 3640.3555f, 38.6059f, 189f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			func_618(7);
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38f, 3694f, 61f) - Vector(300f, 300f, 300f), Vector(38f, 3694f, 61f) + Vector(300f, 300f, 300f), false, true, true, true);
			MISC::CLEAR_AREA(61f, 3694f, 38f, 130f, true, false, false, false);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.7275f, 36.7299f, 105.6982f, 3747.7275f, 40.7299f, false, true);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), false, true);
			PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(41.2529f, 3709.4043f, 38.7345f, 100f, 0);
			func_503(0, 0, 1, 74.9264f, 3640.3555f, 38.6059f, 189f, 60.5616f, 3605.4238f, 38.862f, 4f, 59.7026f, 3602.7822f, 38.8023f, 3.2394f, 0, 0, bParam2);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::ENABLE_DISPATCH_SERVICE(1, false);
			MISC::ENABLE_DISPATCH_SERVICE(7, false);
			func_357();
			if (Global_94618)
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STICKYBOMB"), 5, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 10, false, true);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			Local_297[0 /*17*/] = 8;
			Local_297[1 /*17*/] = 8;
			Local_297[2 /*17*/] = 8;
			Local_297[3 /*17*/] = 8;
			Local_297[4 /*17*/] = 8;
			while ((((Local_297[0 /*17*/] != 4 || Local_297[1 /*17*/] != 4) || Local_297[2 /*17*/] != 4) || Local_297[3 /*17*/] != 4) || Local_297[4 /*17*/] != 4)
			{
				func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
				__LIB_15__::func_962(0);
			}
			while (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02")))
			{
				__LIB_15__::func_962(0);
			}
			iVar0 = 0;
			iVar1 = 0;
			bVar2 = false;
			Var3 = { 0f, 0f, 0f };
			if (Global_94618)
			{
				Global_96878 = 6;
			}
			iVar0 = 0;
			while (iVar0 <= (Global_96878 - 1))
			{
				bVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 14);
				while (BitTest(iVar1, bVar2))
				{
					bVar2++;
					if (bVar2 > 13)
					{
						bVar2 = false;
					}
				}
				MISC::SET_BIT(&iVar1, bVar2);
				switch (bVar2)
				{
					case 0:
						Var3 = { 66.2449f, 3651.4382f, 38.4262f };
						break;
					case 1:
						Var3 = { 46.1153f, 3656.806f, 38.7626f };
						break;
					case 2:
						Var3 = { 49.4054f, 3679.3884f, 38.7261f };
						break;
					case 3:
						Var3 = { 63.3289f, 3680.807f, 38.8364f };
						break;
					case 4:
						Var3 = { 77.0489f, 3683.1292f, 38.6059f };
						break;
					case 5:
						Var3 = { 92.5827f, 3686.6082f, 38.5058f };
						break;
					case 6:
						Var3 = { 97.4204f, 3714.321f, 38.5429f };
						break;
					case 7:
						Var3 = { 104.7229f, 3722.617f, 38.7102f };
						break;
					case 8:
						Var3 = { 84.3981f, 3731.788f, 38.5611f };
						break;
					case 9:
						Var3 = { 79.5456f, 3745.7966f, 38.585f };
						break;
					case 10:
						Var3 = { 61.7966f, 3746.0532f, 38.7113f };
						break;
					case 11:
						Var3 = { 59.7046f, 3727.3372f, 38.6582f };
						break;
					case 12:
						Var3 = { 73.2938f, 3714.7551f, 38.7549f };
						break;
					case 13:
						Var3 = { 27.7165f, 3720.0862f, 38.6902f };
						break;
					case 14:
						Var3 = { 25.3776f, 3685.6108f, 38.5597f };
						break;
				}
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var3, 1) > 32f && iVar0 + 1 != 10)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
						{
							func_351(iVar0 + 1, joaat("G_M_Y_Lost_01"), joaat("WEAPON_PUMPSHOTGUN"), Var3, 267f);
							TASK::TASK_COMBAT_PED(Local_267[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						else
						{
							func_351(iVar0 + 1, joaat("G_M_Y_Lost_01"), joaat("WEAPON_ASSAULTRIFLE"), Var3, 267f);
							TASK::TASK_COMBAT_PED(Local_267[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
					{
						func_351(iVar0 + 1, joaat("G_M_Y_Lost_02"), joaat("WEAPON_PUMPSHOTGUN"), Var3, 267f);
						TASK::TASK_COMBAT_PED(Local_267[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else
					{
						func_351(iVar0 + 1, joaat("G_M_Y_Lost_02"), joaat("WEAPON_ASSAULTRIFLE"), Var3, 267f);
						TASK::TASK_COMBAT_PED(Local_267[iVar0 + 1 /*10*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				else if (iVar4 < 3)
				{
					iVar4++;
					iVar0 = (iVar0 - 1);
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
			func_295("TRV3_GET_TO_CAR_RT", 0, "TRV3_ALERTED");
			iLocal_256 = 7;
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 7:
			if (bParam2)
			{
				__LIB_0__::func_427(59.534f, 3603.4272f, 38.812f, 232f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(3, 0, 0);
			}
			func_618(7);
			func_503(0, 1, 1, 59.534f, 3603.4272f, 38.812f, 232f, 61.8752f, 3603.8555f, 38.7897f, 122.5206f, 59.7026f, 3602.7822f, 38.8023f, 3.2394f, bParam1, 0, bParam2);
			func_357();
			__LIB_0__::func_424(1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
			Local_297[0 /*17*/] = 8;
			Local_297[1 /*17*/] = 8;
			Local_297[2 /*17*/] = 8;
			Local_297[3 /*17*/] = 8;
			Local_297[4 /*17*/] = 8;
			while ((((Local_297[0 /*17*/] != 4 || Local_297[1 /*17*/] != 4) || Local_297[2 /*17*/] != 4) || Local_297[3 /*17*/] != 4) || Local_297[4 /*17*/] != 4)
			{
				func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
				__LIB_15__::func_962(0);
			}
			if (bParam2)
			{
				__LIB_0__::func_433(iLocal_268[0], -1, 1);
			}
			break;
		case 8:
			if (bParam2)
			{
				__LIB_0__::func_427(-1343.5785f, 737.7505f, 184.1437f, 184f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
			}
			func_503(0, 1, 1, -1343.5785f, 737.7505f, 184.1437f, 48.3414f, -1341.783f, 740.1107f, 184.1154f, 96f, -1344.5879f, 742.2039f, 183.726f, 112.1451f, bParam1, 0, bParam2);
			func_357();
			__LIB_0__::func_424(1);
			func_355(0, 43, 1, 1);
			func_355(1, 53, 1, 1);
			func_355(2, 67, 1, 1);
			func_355(3, 68, 1, 1);
			func_355(4, 69, 1, 1);
			func_355(5, 70, 1, 1);
			func_355(6, 71, 1, 1);
			func_355(7, 73, 1, 1);
			func_355(27, 74, 1, 1);
			func_355(25, 89, 1, 1);
			func_280(0, 30, 1, 0);
			func_280(1, 31, 1, 0);
			func_280(8, 38, 1, 0);
			func_499(0, 8, 1);
			func_478(16, 48);
			func_389(37);
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("trv_dri_mcs_concat", 3, 8);
			while (!CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_15__::func_962(0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
			while (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_15__::func_962(0);
			}
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 9:
			if (bParam2)
			{
				__LIB_0__::func_427(-1343.5785f, 737.7505f, 184.1437f, 124.3414f, 1, 0);
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1343.5785f, 737.7505f, 184.1437f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 48.8313f);
				}
			}
			func_503(0, 1, 1, -1343.5785f, 737.7505f, 184.1437f, 48.3414f, -1341.783f, 740.1107f, 184.1154f, 96f, -1344.5879f, 742.2039f, 183.726f, 112.1451f, bParam1, 0, bParam2);
			func_357();
			__LIB_0__::func_424(1);
			func_355(0, 43, 1, 1);
			func_355(1, 53, 1, 1);
			func_355(2, 67, 1, 1);
			func_355(3, 68, 1, 1);
			func_355(4, 69, 1, 1);
			func_355(5, 70, 1, 1);
			func_355(6, 71, 1, 1);
			func_355(7, 73, 1, 1);
			func_355(8, 75, 1, 1);
			func_355(25, 89, 1, 1);
			func_355(27, 74, 1, 1);
			func_280(0, 30, 1, 0);
			func_280(1, 31, 1, 0);
			func_280(8, 38, 1, 0);
			func_499(0, 8, 1);
			func_478(16, 48);
			func_365(37, 1);
			func_365(45, 1);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
			if (bParam2)
			{
				__LIB_0__::func_433(iLocal_268[0], -1, 1);
			}
			break;
		case 10:
			if (bParam2)
			{
				__LIB_0__::func_427(-1156.1613f, -1521.3652f, 3.3237f, 227f, 1, 0);
			}
			func_503(0, 0, 0, -1157.7205f, -1520.5835f, 9.6327f, 295.1327f, -1153.7759f, -1521.1268f, 3.3193f, 241.2621f, -1154.5667f, -1519.4229f, 3.3617f, 218.817f, bParam1, 0, bParam2);
			func_357();
			func_152(0, 76, 0, 0, 0, 1, 0, 1, 0);
			while (func_310(0, 76) < 4)
			{
				CUTSCENE::REQUEST_CUTSCENE("TRV_DRI_EXT", 8);
				func_152(0, 76, 0, 0, 0, 1, 0, 1, 0);
				__LIB_15__::func_962(0);
			}
			func_495();
			if (bParam2)
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			break;
		case 11:
			func_503(0, 0, 0, -1157.7205f, -1520.5835f, 9.6327f, 295.1327f, -1153.7759f, -1521.1268f, 3.3193f, 241.2621f, -1154.5667f, -1519.4229f, 3.3617f, 218.817f, bParam1, 0, bParam2);
			STREAMING::LOAD_SCENE(-1157.7205f, -1520.5835f, 9.6327f);
			if (ENTITY::DOES_ENTITY_EXIST(Local_267[10 /*10*/]))
			{
				PED::DELETE_PED(&(Local_267[10 /*10*/]));
			}
			iLocal_516 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.8173f, -1518.3027f, 9.6345f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_516))
			{
				iLocal_516 = INTERIOR::GET_INTERIOR_AT_COORDS(-1154.8173f, -1518.3027f, 9.6345f);
				__LIB_15__::func_962(0);
			}
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_516);
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_516))
			{
				__LIB_15__::func_962(0);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_516, true);
			func_495();
			break;
	}
}

void func_499(int iParam0, int iParam1, int iParam2)//Position - 0x4B4CB
{
	Local_247[iParam0 /*4*/] = iParam1;
	Local_247[iParam0 /*4*/].f_1 = iParam2;
	Local_247[iParam0 /*4*/].f_2 = 0;
	Local_247[iParam0 /*4*/].f_3 = 0;
}

void func_503(bool bParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, struct<3> Param5, float fParam6, struct<3> Param7, float fParam8, bool bParam9, bool bParam10, bool bParam11)//Position - 0x4B5F9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	fParam8 = fParam8;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
	{
		if (!bParam11)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
		}
		VEHICLE::DELETE_VEHICLE(&(iLocal_268[0]));
	}
	if (bParam0)
	{
		if (__LIB_16__::func_327())
		{
			__LIB_16__::func_872();
			while (!__LIB_16__::func_871())
			{
				__LIB_15__::func_962(0);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(Param7, 4f, false, false, false, false, false, false, 0);
			iLocal_268[0] = __LIB_32__::func_33(0f, 0f, 0f, 0f);
			ENTITY::SET_ENTITY_HEALTH(iLocal_268[0], 1800, 0);
		}
		if (!__LIB_38__::func_169(2, 1, 1981.3942f, 3808.1733f, 31.1383f, 15f))
		{
			__LIB_16__::func_850(2, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268[0]))
			{
				if (!MISC::IS_AREA_OCCUPIED(Vector(31.1383f, 3808.1733f, 1981.3942f) - Vector(10f, 10f, 10f), Vector(31.1383f, 3808.1733f, 1981.3942f) + Vector(10f, 10f, 10f), false, true, false, false, false, 0, false))
				{
					while (!__LIB_17__::func_478(&(iLocal_268[0]), 2, 1981.3942f, 3808.1733f, 31.1383f, 117.1702f, 1, 0))
					{
						__LIB_15__::func_962(0);
					}
				}
				else if (!MISC::IS_AREA_OCCUPIED(Vector(31.1684f, 3799.5142f, 1967.9039f) - Vector(10f, 10f, 10f), Vector(31.1684f, 3799.5142f, 1967.9039f) + Vector(10f, 10f, 10f), false, true, false, false, false, 0, false))
				{
					while (!__LIB_17__::func_478(&(iLocal_268[0]), 2, 1967.9039f, 3799.5142f, 31.1684f, 117.1702f, 1, 0))
					{
						__LIB_15__::func_962(0);
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false) && __LIB_0__::func_724(iLocal_268[0], 1981.3942f, 3808.1733f, 31.1383f, 1) > 10f)
				{
					while (!__LIB_17__::func_478(&iVar0, 2, 1981.3942f, 3808.1733f, 31.1383f, 117.1702f, 1, 0))
					{
						__LIB_15__::func_962(0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[0], false) && __LIB_0__::func_724(iLocal_268[0], 1967.9039f, 3799.5142f, 31.1684f, 1) > 10f)
				{
					while (!__LIB_17__::func_478(&iVar0, 2, 1967.9039f, 3799.5142f, 31.1684f, 117.1702f, 1, 0))
					{
						__LIB_15__::func_962(0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
		}
	}
	else if (__LIB_13__::func_791() != 0)
	{
		if (VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(__LIB_13__::func_791()) > 1)
		{
			if (((__LIB_13__::func_821() && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791())) && !VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791())) && !VEHICLE::IS_THIS_MODEL_A_BOAT(__LIB_13__::func_791()))
			{
				__LIB_14__::func_532();
				while (!__LIB_14__::func_531())
				{
					__LIB_15__::func_962(0);
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Param7, 4f, false, false, false, false, false, false, 0);
				if (Global_94618)
				{
					iLocal_268[0] = __LIB_31__::func_966(Param7, fParam8);
				}
				else
				{
					iLocal_268[0] = __LIB_31__::func_966(0f, 0f, 0f, 0f);
				}
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_268[0], true) };
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1157.7128f, -1517.214f, 2.749372f, -1147.2194f, -1532.7303f, 12.125776f, 10.6875f, false, true))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_268[0], Var1.f_0, Var1.f_1, 3.3483f, true, false, false, true);
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_268[0]), &Var2, &Var3);
					Var3 = { Var3 - Var2 };
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_268[0])))
					{
						Var3.f_0 = (Var3.f_0 - 3f);
						Var3.f_1 = (Var3.f_1 - 3f);
					}
					if ((Var3.f_0 > 4.5f || Var3.f_1 > 20f) || Var3.f_2 > 2.5f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_268[0], -1161.3878f, -1507.9048f, 3.4094f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_268[0], 304f);
					}
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_268[0], 1800, 0);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("bodhi2"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")))
				{
					__LIB_15__::func_962(0);
				}
				iLocal_268[0] = VEHICLE::CREATE_VEHICLE(joaat("bodhi2"), Param7, fParam8, true, true, false);
				ENTITY::SET_ENTITY_HEALTH(iLocal_268[0], 1800, 0);
			}
		}
	}
	if (bParam9)
	{
		while (!__LIB_17__::func_478(&(iLocal_268[0]), 2, Param7, fParam8, 1, 0))
		{
			__LIB_15__::func_962(0);
		}
	}
	if ((__LIB_40__::func_503(iLocal_268[0]) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_268[0]) > 0) && iParam2)
	{
		while (!__LIB_16__::func_317(&(Local_267[10 /*10*/]), 24, iLocal_268[0], 0, 1))
		{
			__LIB_15__::func_962(0);
		}
	}
	else
	{
		while (!__LIB_16__::func_930(&(Local_267[10 /*10*/]), 24, Param5, fParam6, 1))
		{
			__LIB_15__::func_962(0);
		}
	}
	if ((iParam1 || bParam9) && __LIB_40__::func_503(iLocal_268[0]))
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_268[0], -1);
	}
	else if (!bParam11)
	{
		if (bParam10)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), __LIB_37__::func_879(), true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_40__::func_505());
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param3, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam4);
		}
	}
	if (!bParam11)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-4f, 1f);
		STREAMING::LOAD_SCENE(Param3);
	}
	__LIB_15__::func_962(2);
}

void func_618(int iParam0)//Position - 0x576D8
{
	switch (iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("IG_Wade"));
			break;
		case 3:
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
			STREAMING::REQUEST_MODEL(joaat("dloader"));
			STREAMING::REQUEST_MODEL(joaat("hexer"));
			STREAMING::REQUEST_MODEL(joaat("prop_coffin_01"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("misstrevor3");
			STREAMING::REQUEST_ANIM_DICT("misstrevor3_beatup");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
			STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
			while (((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("bodhi2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("dloader"))) || !STREAMING::HAS_MODEL_LOADED(joaat("hexer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_coffin_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3")) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3_beatup")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right")) || !STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward"))
			{
				__LIB_15__::func_962(0);
			}
			break;
		case 5:
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				__LIB_15__::func_962(0);
			}
			break;
		case 7:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			STREAMING::REQUEST_PTFX_ASSET();
			while (!STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				__LIB_15__::func_962(0);
			}
			break;
	}
}

void func_619(int iParam0)//Position - 0x578A8
{
	int iVar0;
	int iVar1;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(true);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		__LIB_15__::func_962(0);
	}
	ENTITY::REMOVE_FORCED_OBJECT(32.3311f, 3667.6604f, 40.4431f, 3f, joaat("prop_cs4_05_tdoor"));
	ENTITY::REMOVE_FORCED_OBJECT(29.1f, 3661.49f, 40.85f, 3f, joaat("prop_magenta_door"));
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_243))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_243);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_TRAILER_PARK"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_TRAILER_PARK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_TRAILER_PARK_OVERVIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_TRAILER_PARK_OVERVIEW");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_PLANT_BOMBS_STEALTH"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_STEALTH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_PLANT_BOMBS_SHOOTOUT"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_PLANT_BOMBS_SHOOTOUT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DETONATE_BOMBS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DETONATE_BOMBS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_LS_DIALOGUE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_LS_DIALOGUE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_3_DRIVE_TO_FLOYDS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_3_DRIVE_TO_FLOYDS");
	}
	iLocal_244 = 0;
	__LIB_0__::func_424(0);
	PED::STOP_ANY_PED_MODEL_BEING_SUPPRESSED();
	iLocal_524 = 0;
	iLocal_525 = 0;
	sLocal_527 = "";
	sLocal_528 = "";
	iLocal_241 = 0;
	iLocal_242 = 0;
	bLocal_240 = false;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
	}
	func_292(11);
	__LIB_0__::func_325();
	if (CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	if (iParam0 != 3 && iParam0 != 4)
	{
		__LIB_40__::func_506();
	}
	else
	{
		func_626(&Local_271, &uLocal_306, cLocal_471, 9f, 80.601524f, 3685.0378f, 38.712517f, 121f, 3);
	}
	if (!func_3(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (STREAMING::IS_STREAMVOL_ACTIVE())
	{
		STREAMING::STREAMVOL_DELETE(iLocal_283);
	}
	STREAMING::END_SRL();
	iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", __LIB_15__::func_957(24));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == 3)
		{
			ENTITY::DELETE_ENTITY(&iVar0);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SYSTEM::WAIT(0);
	if (iParam0 == 3)
	{
		if (!func_3(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
		}
	}
	if (iLocal_520)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_517);
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_518);
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_519);
		iLocal_520 = 0;
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(53.943714f, 3620.4744f, 28.627594f, 64.89907f, 3764.617f, 50.328354f, 106.5f, 1);
	STREAMING::END_SRL();
	func_620();
	iLocal_514 = 0;
	while (iLocal_514 < Local_267.f_0)
	{
		if (iParam0 != 0 && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_267[iLocal_514 /*10*/]))
			{
				if (!func_3(Local_267[iLocal_514 /*10*/]))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_267[iLocal_514 /*10*/], true))
					{
						PED::DELETE_PED(&(Local_267[iLocal_514 /*10*/]));
					}
				}
				else
				{
					PED::DELETE_PED(&(Local_267[iLocal_514 /*10*/]));
				}
			}
		}
		else if (!func_3(Local_267[iLocal_514 /*10*/]))
		{
			if (iParam0 == 0 && iLocal_514 == 10)
			{
				PED::DELETE_PED(&(Local_267[iLocal_514 /*10*/]));
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_267[iLocal_514 /*10*/], true))
			{
				if (PED::IS_PED_IN_GROUP(Local_267[iLocal_514 /*10*/]))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_267[iLocal_514 /*10*/]);
				}
				PED::SET_PED_KEEP_TASK(Local_267[iLocal_514 /*10*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[iLocal_514 /*10*/]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_267[iLocal_514 /*10*/]))
		{
			if (!func_3(Local_267[iLocal_514 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_267[iLocal_514 /*10*/], true))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[iLocal_514 /*10*/]));
				}
			}
			else
			{
				if (PED::WAS_PED_KILLED_BY_STEALTH(Local_267[iLocal_514 /*10*/]))
				{
					__LIB_0__::func_497(519, 1, 0);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_267[iLocal_514 /*10*/]));
			}
		}
		iLocal_514++;
	}
	iLocal_514 = 0;
	while (iLocal_514 < Local_254.f_0)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/]))
			{
				PED::DELETE_PED(&(Local_254[iLocal_514 /*9*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/].f_1))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_254[iLocal_514 /*9*/].f_1));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/]))
			{
				if (!PED::IS_PED_INJURED(Local_254[iLocal_514 /*9*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_254[iLocal_514 /*9*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_254[iLocal_514 /*9*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_254[iLocal_514 /*9*/].f_1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_254[iLocal_514 /*9*/].f_1));
			}
		}
		iLocal_514++;
	}
	iLocal_514 = 0;
	while (iLocal_514 < iLocal_268)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[iLocal_514]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[iLocal_514], false) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_268[iLocal_514], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[iLocal_514], true, true);
				}
				VEHICLE::DELETE_VEHICLE(&(iLocal_268[iLocal_514]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_268[iLocal_514]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_268[iLocal_514], false))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_268[iLocal_514], true))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_268[iLocal_514], true, true);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_268[iLocal_514]));
		}
		iLocal_514++;
	}
	iLocal_514 = 0;
	while (iLocal_514 < iLocal_269)
	{
		if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_269[iLocal_514]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_269[iLocal_514]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_269[iLocal_514]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_269[iLocal_514]));
		}
		iLocal_514++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(92.6982f, 3738.7275f, 36.7299f, 105.6982f, 3747.7275f, 40.7299f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(38.8369f, 3656.937f, 43.4604f) - Vector(5f, 7f, 7f), Vector(38.8369f, 3656.937f, 43.4604f) + Vector(5f, 7f, 7f), true, true);
	fLocal_258 = 0f;
	iLocal_259 = 0;
	iLocal_260 = 0;
	iLocal_253 = 0;
	__LIB_16__::func_21(&Local_493, 0);
	__LIB_13__::func_815(&Local_493, 1, 0);
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_512))
	{
		HUD::REMOVE_BLIP(&iLocal_512);
	}
	if (iParam0 == 3)
	{
		MISC::CLEAR_AREA(953.5856f, 3654.5046f, 44.9018f, 1000f, true, false, false, false);
	}
	if ((iParam0 != 0 && iParam0 != 2) && iParam0 != 1)
	{
		MISC::SET_WEATHER_TYPE_NOW("EXTRASUNNY");
	}
	else
	{
		Global_113330 = 0;
		MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("SMOG", 30f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_262))
	{
		OBJECT::DELETE_OBJECT(&iLocal_262);
	}
	if (iParam0 != 3)
	{
		AUDIO::SET_VEHICLE_CONVERSATIONS_PERSIST(false, false);
	}
	while (!AUDIO::TRIGGER_MUSIC_EVENT("TRV3_FAIL"))
	{
		__LIB_15__::func_962(0);
	}
	if (iParam0 == 0)
	{
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("TRAILER_PARK_RAYFIRE_ZONE_LIST", false, true);
	}
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(7, true);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	STREAMING::SET_SRL_FORCE_PRESTREAM(0);
	func_496();
	func_495();
	func_493();
	func_494();
	bLocal_296 = false;
	Local_515 = { 0f, 0f, 0f };
	func_624(iParam0);
	func_152(0, 53, 0, 0, 0, 1, 0, 1, 0);
}

void func_620()//Position - 0x5804E
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bodhi2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_coffin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "trev3");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "trev3");
	STREAMING::REMOVE_ANIM_DICT("misstrevor3");
	STREAMING::REMOVE_ANIM_DICT("misstrevor3_beatup");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@idle_c");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_Salton_01"));
	STREAMING::REMOVE_ANIM_SET("move_f@flee@a");
	STREAMING::REMOVE_PTFX_ASSET();
}

void func_624(int iParam0)//Position - 0x58155
{
	Local_297[0 /*17*/].f_7[0 /*3*/] = { 61.69837f, 3746.5732f, 43.30432f };
	Local_297[0 /*17*/].f_7[1 /*3*/] = { 37.6801f, 3742.2031f, 37.686787f };
	Local_297[0 /*17*/].f_14 = 10f;
	Local_297[1 /*17*/].f_7[0 /*3*/] = { 111.92575f, 3722.157f, 43.30432f };
	Local_297[1 /*17*/].f_7[1 /*3*/] = { 100.78208f, 3741.9048f, 37.485065f };
	Local_297[1 /*17*/].f_14 = 10f;
	Local_297[2 /*17*/].f_7[0 /*3*/] = { 65.52233f, 3685.6384f, 43.30432f };
	Local_297[2 /*17*/].f_7[1 /*3*/] = { 77.48096f, 3702.877f, 37.6082f };
	Local_297[2 /*17*/].f_14 = 10f;
	Local_297[3 /*17*/].f_7[0 /*3*/] = { 33.64445f, 3707.114f, 43.30432f };
	Local_297[3 /*17*/].f_7[1 /*3*/] = { 52.89159f, 3697.3708f, 37.888683f };
	Local_297[3 /*17*/].f_14 = 10f;
	Local_297[4 /*17*/].f_7[0 /*3*/] = { 23.337156f, 3656.1204f, 43.30432f };
	Local_297[4 /*17*/].f_7[1 /*3*/] = { 35.65962f, 3679.772f, 37.697174f };
	Local_297[4 /*17*/].f_14 = 12.5f;
	Local_297[0 /*17*/].f_3 = "des_trailerparka";
	Local_297[1 /*17*/].f_3 = "des_trailerparkb";
	Local_297[2 /*17*/].f_3 = "des_trailerparkc";
	Local_297[3 /*17*/].f_3 = "des_trailerparkd";
	Local_297[4 /*17*/].f_3 = "des_trailerparke";
	Local_297[0 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_06";
	Local_297[1 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_03";
	Local_297[2 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_14";
	Local_297[3 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_12";
	Local_297[4 /*17*/].f_4 = "AZ_BIKER_CAMP_TRAILER_11";
	Local_297[0 /*17*/].f_5 = 38;
	Local_297[1 /*17*/].f_5 = 40;
	Local_297[2 /*17*/].f_5 = 42;
	Local_297[3 /*17*/].f_5 = 44;
	Local_297[4 /*17*/].f_5 = 46;
	Local_297[0 /*17*/].f_6 = 39;
	Local_297[1 /*17*/].f_6 = 41;
	Local_297[2 /*17*/].f_6 = 43;
	Local_297[3 /*17*/].f_6 = 45;
	Local_297[4 /*17*/].f_6 = 47;
	if (iParam0 == 3)
	{
		Local_297[0 /*17*/] = 1;
		Local_297[1 /*17*/] = 1;
		Local_297[2 /*17*/] = 1;
		Local_297[3 /*17*/] = 1;
		Local_297[4 /*17*/] = 1;
	}
	iLocal_514 = 0;
	while (iLocal_514 < Local_297.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_297[iLocal_514 /*17*/].f_16))
		{
			HUD::REMOVE_BLIP(&(Local_297[iLocal_514 /*17*/].f_16));
		}
		iLocal_514++;
	}
}

void func_626(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam5, int iParam6)//Position - 0x58415
{
	int iVar0;
	iLocal_53 = iLocal_53;
	uLocal_66 = fParam3;
	Local_67 = { Param4 };
	fLocal_68 = fParam5;
	Local_73 = { *uParam1 };
	cLocal_229 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_49 = false;
	bLocal_50 = false;
	iLocal_51 = 0;
	bLocal_52 = false;
	iLocal_53 = 0;
	bLocal_71 = true;
	iLocal_70 = 0;
	iLocal_54 = 0;
	iLocal_56 = 0;
	iLocal_57 = -1;
	iLocal_58 = -1;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
	iLocal_62 = 0;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	EVENT::BLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
	iLocal_48 = 0;
}

void func_627()//Position - 0x5850C
{
	if (iLocal_524)
	{
		if (iLocal_525)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_527))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_527))
				{
					iLocal_524 = 0;
					iLocal_525 = 0;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_527))
		{
			iLocal_524 = 0;
		}
	}
	else if (iLocal_526)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_528))
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_528))
			{
				iLocal_526 = 0;
			}
		}
	}
}

void func_628()//Position - 0x5856F
{
	if (iLocal_475)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_484))
		{
			if (__LIB_0__::func_75())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_480 = { __LIB_0__::func_485() };
						Local_484 = { __LIB_0__::func_486() };
						StringCopy(&Local_484, "", 24);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_480) && !MISC::ARE_STRINGS_EQUAL(&cLocal_480, "NULL"))
						{
							Local_484 = { __LIB_0__::func_486() };
							__LIB_0__::func_638();
						}
						else
						{
							iLocal_475 = 0;
							StringCopy(&Local_484, "", 24);
							StringCopy(&cLocal_480, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_475 = 0;
				StringCopy(&Local_484, "", 24);
				StringCopy(&cLocal_480, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!__LIB_15__::func_965(&Local_484))
				{
					iLocal_475 = 0;
					StringCopy(&Local_484, "", 24);
					StringCopy(&cLocal_480, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_484))
			{
				if (func_414(&Local_484, &cLocal_480, Local_474[0 /*3*/], Local_474[0 /*3*/].f_1, Local_474[0 /*3*/].f_2, Local_474[1 /*3*/], Local_474[1 /*3*/].f_1, Local_474[1 /*3*/].f_2, Local_474[2 /*3*/], Local_474[2 /*3*/].f_1, Local_474[2 /*3*/].f_2, Local_474[3 /*3*/], Local_474[3 /*3*/].f_1, Local_474[3 /*3*/].f_2, 8))
				{
					StringCopy(&Local_484, "", 24);
					StringCopy(&cLocal_480, "", 24);
					iLocal_475 = 0;
				}
			}
		}
	}
}

void func_629(int iParam0)//Position - 0x586BB
{
	func_619(iParam0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_630()//Position - 0x586CD
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_399(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_6();
		}
	}
}

