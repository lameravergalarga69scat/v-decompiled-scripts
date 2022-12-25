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
	var uLocal_22 = 0;
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 1000;
	var uLocal_31 = 1000;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	char* sLocal_34 = NULL;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
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
	float fLocal_82 = 0f;
	int iLocal_83 = 0;
	struct<3> Local_84 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	int iLocal_89[2] = { 0, 0 };
	int iLocal_90[2] = { 0, 0 };
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
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
	struct<8> Local_125[2];
	struct<8> Local_126[2];
	int* iLocal_127 = NULL;
	int iLocal_128 = 0;
	int* iLocal_129 = NULL;
	int* iLocal_130 = NULL;
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_132 = 0f;
	int iLocal_133 = 0;
	struct<3> Local_134 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	float fLocal_146 = 0f;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	bool bLocal_153 = 0;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	int iLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	char* sLocal_169 = NULL;
	char* sLocal_170 = NULL;
	char* sLocal_171 = NULL;
	char* sLocal_172 = NULL;
	struct<3> Local_173 = { 0, 0, 0 } ;
	struct<3> Local_174 = { 0, 0, 0 } ;
	struct<3> Local_175 = { 0, 0, 0 } ;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	var uLocal_180 = 16;
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
	var uLocal_345 = 16;
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
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	char* sLocal_512 = NULL;
	char* sLocal_513 = NULL;
	char* sLocal_514 = NULL;
	char* sLocal_515 = NULL;
	char* sLocal_516 = NULL;
	char* sLocal_517 = NULL;
	char* sLocal_518 = NULL;
	char* sLocal_519 = NULL;
	int iLocal_520 = 0;
	char* sLocal_521 = NULL;
	float fLocal_522 = 0f;
	int iLocal_523 = 0;
	var uLocal_524 = 0;
	int iLocal_525 = 0;
	struct<33> Local_526 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_527 = 1;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	struct<2> Local_530 = { 0, 5 } ;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 5;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
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
	iLocal_33 = 3;
	sLocal_34 = "NULL";
	fLocal_35 = 0f;
	fLocal_39 = -0.0375f;
	fLocal_40 = 0.17f;
	fLocal_44 = 80f;
	fLocal_45 = 140f;
	fLocal_46 = 180f;
	iLocal_52 = 1;
	iLocal_53 = 65;
	iLocal_54 = 49;
	iLocal_55 = 64;
	iLocal_72 = -1;
	fLocal_146 = -1f;
	Local_154 = { 80.73f, -212.88f, 54.5f };
	Local_155 = { 330.918f, -837.8148f, 28.2916f };
	Local_156 = { 1655.12f, 4868.17f, 42.03f };
	Local_157 = { 1171.82f, 2695.75f, 37.96f };
	iLocal_167 = joaat("ingot");
	Local_177 = { 1f, 1f, 0f };
	sLocal_515 = "RANDOM@CHASETHIEVESGEN";
	sLocal_516 = "FLEE_BACKWARD_Shopkeeper";
	sLocal_517 = "FLEE_BACKWARD_Thief";
	sLocal_518 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_519 = "MY_DADS_GOING_TO_KILL_ME";
	sLocal_521 = "pickup_object";
	fLocal_522 = 300f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_65)
		{
			bLocal_66 = true;
			func_421();
		}
		else
		{
			func_401();
		}
	}
	Local_60 = { ScriptParam_530.f_1[0 /*3*/] };
	func_400();
	if (func_359(Local_60, 11, bLocal_153, 0, 0))
	{
		__LIB_39__::func_9(11);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_158 = func_352();
	func_351();
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_0__::func_467();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_58 > 1)
		{
			switch (iLocal_58)
			{
				case 0:
					__LIB_39__::func_80(&Local_526);
					if (func_346())
					{
						func_401();
					}
					else if (func_337())
					{
						func_335();
						iLocal_58 = 1;
					}
					break;
				case 1:
					if (__LIB_39__::func_15())
					{
						func_401();
					}
					else if (func_321())
					{
						__LIB_39__::func_11(1);
						if (!PED::IS_PED_INJURED(iLocal_78))
						{
							iLocal_128 = __LIB_39__::func_31(iLocal_78, 1, 0);
							HUD::SET_BLIP_COLOUR(iLocal_128, 1);
						}
						func_309(1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PED::SET_CREATE_RANDOM_COPS(false);
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						iLocal_529 = 1;
						iLocal_76 = MISC::GET_GAME_TIMER();
						iLocal_58 = 2;
					}
					break;
				case 2:
					func_306();
					func_303();
					break;
				case 3:
					func_306();
					func_249();
					break;
				case 4:
					func_247();
					func_241();
					func_238();
					break;
				case 5:
					func_229();
					break;
				case 6:
					func_39();
					break;
			}
			if (iLocal_58 > 0)
			{
				func_37();
				func_3();
				if (ENTITY::IS_ENTITY_DEAD(iLocal_83, false))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_520))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_520)) > 100f)
						{
							func_401();
						}
					}
					else if (bLocal_65 == 1)
					{
						__LIB_38__::func_994(2);
						func_421();
					}
					else
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_510, joaat("PLAYER"));
						if (__LIB_0__::func_121(iLocal_78))
						{
							PED::SET_PED_MONEY(iLocal_78, iLocal_149);
						}
						func_401();
					}
				}
			}
		}
		else
		{
			func_401();
		}
	}
}

void func_3()//Position - 0x31D
{
	if ((iLocal_178 == 0 && __LIB_0__::func_121(iLocal_83)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_515, sLocal_516, 3))
	{
		if (func_30(iLocal_83, &iLocal_161, &uLocal_160, uLocal_159, 0, 1077936128, 0))
		{
			switch (iLocal_161)
			{
				case 2:
					func_4();
					break;
				case 3:
					func_4();
					break;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_83, true), 20f))
		{
			func_4();
		}
	}
}

void func_4()//Position - 0x39C
{
	__LIB_39__::func_32(&uLocal_524);
	__LIB_0__::func_714(&iLocal_129);
	iLocal_178 = 1;
	if (__LIB_0__::func_121(iLocal_83))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_83, 17, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		if (__LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_OUT", 4, 0, 0, 0))
		{
		}
	}
	if (bLocal_65 == 1)
	{
		__LIB_38__::func_994(2);
		func_421();
	}
}

int func_30(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0xD19
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fVar5 = SYSTEM::VDIST(Var3, Var4);
			if (!BitTest(uParam3, 3))
			{
				if (__LIB_39__::func_28(iParam0, iParam6))
				{
					__LIB_38__::func_393("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_393("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					__LIB_39__::func_27(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var4, fParam5, true))
				{
					__LIB_38__::func_393("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_393("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_27(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var4 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var4 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), false))
				{
					__LIB_38__::func_393("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_393("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					__LIB_39__::func_27(iParam0);
					return 1;
				}
			}
			if (!BitTest(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar5 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								__LIB_38__::func_393("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								__LIB_38__::func_393("	aggro Ped knows player is pointing gun\n");
								__LIB_39__::func_29("		lockOnTimer = ", *uParam2);
								__LIB_38__::func_393("\n");
								__LIB_39__::func_29("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								__LIB_38__::func_393("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *uParam2))
								{
									__LIB_38__::func_393("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									__LIB_39__::func_27(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!BitTest(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_38__::func_393("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					__LIB_38__::func_393("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					__LIB_39__::func_27(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_37()//Position - 0x1001
{
	if (iLocal_62 == 1)
	{
		__LIB_0__::func_631(iLocal_78, &uLocal_93, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_79, &uLocal_101, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_80, &uLocal_109, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_81, &uLocal_117, -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_90[0], &(Local_125[0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_90[1], &(Local_125[1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_91[0], &(Local_126[0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_631(iLocal_91[1], &(Local_126[1 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
	}
}

void func_39()//Position - 0x12CB
{
	struct<3> Var0;
	struct<3> Var1;
	char* sVar2;
	char* sVar3;
	int* iVar4;
	sVar2 = "RECHA_THX";
	sVar3 = "RECHA_THX_1";
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_121(iLocal_83))
	{
		switch (iLocal_152)
		{
			case 0:
				if (!STREAMING::STREAMVOL_IS_VALID(iLocal_525))
				{
					iLocal_525 = STREAMING::STREAMVOL_CREATE_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_83, true), 200f, 12, 127);
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_169);
				if (__LIB_39__::func_36(2))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!__LIB_0__::func_121(iLocal_92) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_92 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_92);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
				{
				}
				else
				{
					func_223(0);
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_83);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					iLocal_523 = -1;
					iLocal_152++;
				}
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sLocal_169);
				STREAMING::REQUEST_MODEL(joaat("prop_ld_wallet_01"));
				__LIB_1__::func_33(0);
				__LIB_0__::func_91();
				if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !__LIB_0__::func_75()) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_169)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_wallet_01")))
				{
					if (iLocal_523 == -1)
					{
						iLocal_523 = MISC::GET_GAME_TIMER();
					}
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83) || (MISC::GET_GAME_TIMER() - iLocal_523) > 2000)
					{
						func_99(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_511);
						iLocal_127 = OBJECT::CREATE_OBJECT(joaat("prop_ld_wallet_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_127, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						fLocal_132 = ENTITY::GET_ENTITY_HEADING(iLocal_83);
						Var0 = { Local_131 };
						Var0.f_2 = (Var0.f_2 + 50f);
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
						Var1 = { ENTITY::GET_ENTITY_ROTATION(iLocal_83, 2) };
						iLocal_150 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_150, false);
						iLocal_151 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_151, iLocal_150, sLocal_172, sLocal_169);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_150, sLocal_169, sLocal_170, 1000f, -1000f, 1, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_83);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_83, iLocal_150, sLocal_169, sLocal_171, 1000f, -1000f, 1, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_83, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(335.98f, -839.47f, 28.31f, 10f, joaat("prop_rub_binbag_03b"), true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							ENTITY::SET_ENTITY_COORDS(iVar4, 317.94f, -824.33f, 28.27f, true, false, false, true);
						}
						__LIB_0__::func_122(&iVar4, 0);
						iVar4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(336.86f, -840.08f, 28.27f, 10f, joaat("prop_rub_binbag_05"), true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							ENTITY::SET_ENTITY_COORDS(iVar4, 315.63f, -826.01f, 28.27f, true, false, false, true);
						}
						__LIB_0__::func_122(&iVar4, 0);
						MISC::CLEAR_AREA_OF_OBJECTS(Var0, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 20f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Var0, 5f, false, false, false, false, false, false, 0);
						MISC::CLEAR_AREA(Var0, 2f, true, false, false, false);
						MISC::CLEAR_AREA(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_169, sLocal_171, Var0, Var1, 0f, 2), 2f, true, false, false, false);
						CAM::SET_CAM_ACTIVE(iLocal_151, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						switch (__LIB_0__::func_683())
						{
							case 0:
								__LIB_0__::func_222(&uLocal_345, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								__LIB_14__::func_535(&uLocal_345, "REAR1AU", "REAR1_REM", "REAR1_REM_1", 4, 0, 0);
								break;
							case 1:
								__LIB_0__::func_222(&uLocal_345, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								__LIB_14__::func_535(&uLocal_345, "REAR1AU", "REAR1_REF", "REAR1_REF_1", 4, 0, 0);
								break;
							case 2:
								__LIB_0__::func_222(&uLocal_345, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								__LIB_14__::func_535(&uLocal_345, "REAR1AU", "REAR1_RET", "REAR1_RET_1", 4, 0, 0);
								break;
						}
						iLocal_152++;
					}
				}
				break;
			case 2:
				if (((iLocal_528 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_150)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_150) >= 0.96f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_528 = 1;
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_150) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_150) == 1f) || func_92()) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("walkinterruptable")))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_ALL_CAMS(false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					if (__LIB_0__::func_121(iLocal_83))
					{
						func_88();
						PED::SET_PED_MONEY(iLocal_83, (iLocal_149 - (iLocal_149 / 10)));
					}
					__LIB_0__::func_123(&iLocal_127);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_wallet_01"));
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						__LIB_0__::func_429();
						__LIB_0__::func_84(500, 1);
					}
					func_74(1, 0, 1, 1);
					__LIB_15__::func_812(__LIB_0__::func_683(), 1, SYSTEM::FLOOR((IntToFloat(iLocal_149) * 0.9f)));
					__LIB_0__::func_182(joaat("RC_WALLETS_RETURNED"), 1);
					iLocal_152++;
				}
				else
				{
					switch (iLocal_158)
					{
						case 0:
							sVar3 = "RECHA_THX_1";
							break;
						case 1:
							sVar3 = "RECHA_THX_2";
							break;
						case 2:
							sVar3 = "RECHA_THX_3";
							break;
						case 3:
							sVar3 = "RECHA_THX_4";
							break;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if ((ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_127, PLAYER::PLAYER_PED_ID()) && iLocal_179 == 0) && __LIB_14__::func_535(&uLocal_180, "RECHAAU", sVar2, sVar3, 4, 0, 0))
						{
							ENTITY::DETACH_ENTITY(iLocal_127, false, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_127, iLocal_83, PED::GET_PED_BONE_INDEX(iLocal_83, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							iLocal_179 = 1;
						}
					}
					else
					{
						if (iLocal_179 == 0 && __LIB_14__::func_535(&uLocal_180, "RECHAAU", sVar2, sVar3, 4, 0, 0))
						{
							iLocal_179 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_150) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_150) > 0.9f)
						{
							func_88();
						}
					}
				}
				break;
			case 3:
				if (iLocal_70 == 0)
				{
					if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_RESP", 4, 0, 0, 0))
					{
						iLocal_70 = 1;
					}
				}
				else
				{
					__LIB_38__::func_994(3);
					func_421();
				}
				break;
			}
	}
}

void func_74(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2C9C
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
	__LIB_0__::func_532(0, 1, 0, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
	}
	HUD::CLEAR_HELP(true);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_57 != 0 && iLocal_57 != joaat("OBJECT")) && iLocal_57 != joaat("GADGET_PARACHUTE"))
		{
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_57, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_57, false);
				}
			}
		}
	}
	if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
	}
}

void func_88()//Position - 0x308A
{
	if (__LIB_0__::func_121(iLocal_83) && !__LIB_6__::func_572(iLocal_83, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
	{
		__LIB_14__::func_659(iLocal_83, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 2f, 1f), fLocal_132, 1, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_83, false, false);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
		if (__LIB_0__::func_86(Local_134) || !__LIB_0__::func_121(iLocal_133))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(0, iLocal_133, 20000, -1, 1f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_133, 20f, 786599);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
	}
}

int func_92()//Position - 0x31E1
{
	if (__LIB_0__::func_645(1000))
	{
		__LIB_14__::func_806(500, 1);
		return 1;
	}
	return 0;
}

void func_99(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x33D8
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
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_213(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 1) || func_213(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_213(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_101(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_57 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_57 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x35A9
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
										func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_110(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_109(iParam0, iVar10, &iVar4, 1))
							{
								func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_101(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_101(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_109(iParam0, iVar10, &iVar4, 0))
		{
			func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_102(iParam0, iVar10, &iVar4))
		{
			func_101(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_102(int iParam0, int iParam1, int iParam2)//Position - 0x3DB9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_213(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x46AE
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_213(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2)//Position - 0x4744
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
				if (func_213(iParam0, iParam1, iVar0))
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
				if (func_213(iParam0, iParam1, iVar1))
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

int func_213(int iParam0, int iParam1, int iParam2)//Position - 0x21663
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
				if (!func_213(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_213(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_213(iParam0, 14, iVar4))
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
			if (!func_213(iParam0, 14, uVar8[iVar7]))
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

void func_223(int iParam0)//Position - 0x21B12
{
	if (__LIB_0__::func_121(iLocal_83))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
			{
				TASK::TASK_USE_MOBILE_PHONE(iLocal_83, true, 1);
			}
		}
		else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_83, false, 1);
		}
	}
}

void func_229()//Position - 0x21D7B
{
	if (__LIB_0__::func_121(iLocal_83))
	{
		__LIB_39__::func_17(iLocal_129, &uLocal_524);
		func_235();
		if (__LIB_12__::func_295(__LIB_0__::func_683()) < iLocal_149)
		{
			__LIB_38__::func_994(2);
			func_421();
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 20f, 20f, 20f, false, true, 0))
		{
			func_230();
			iLocal_58 = 6;
		}
		else if (iLocal_144 == 1)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 50f, 50f, 20f, false, true, 0))
			{
				__LIB_38__::func_994(2);
				func_421();
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 30f, 30f, 20f, false, true, 0))
		{
			iLocal_144 = 1;
		}
		else if (fLocal_146 > -1f)
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60) > (fLocal_146 + 120f))
			{
				__LIB_38__::func_994(2);
				func_421();
			}
		}
	}
}

void func_230()//Position - 0x21E5F
{
	func_231(iLocal_78);
	func_231(iLocal_79);
	func_231(iLocal_80);
	func_231(iLocal_81);
	func_231(iLocal_90[0]);
	func_231(iLocal_90[1]);
	func_231(iLocal_91[0]);
	func_231(iLocal_91[1]);
}

void func_231(int* iParam0)//Position - 0x21EA3
{
	if (__LIB_0__::func_121(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 42, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
		func_233(iParam0);
	}
	__LIB_0__::func_124(&iParam0, 1, 0, 1);
}

void func_233(int iParam0)//Position - 0x21F45
{
	if (__LIB_0__::func_121(iParam0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && __LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(iParam0, false))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), -1, false) == iParam0)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, false), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, -1f, -1f, true);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true), 150f, -1, false, false);
		}
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_235()//Position - 0x2203B
{
	if (__LIB_0__::func_121(iLocal_83))
	{
		func_236();
		switch (iLocal_75)
		{
			case 0:
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 30f, 30f, 30f, false, false, 0) && __LIB_14__::func_535(&uLocal_180, "RECHAAU", "RECHA_TK", "RECHA_TK_1", 4, 0, 0))
					{
						iLocal_75++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 40f, 40f, 40f, false, false, 0) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_WT", 4, 0, 0, 0))
				{
					iLocal_75++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					func_223(0);
					iLocal_75++;
				}
				break;
			default:
				break;
			}
	}
}

void func_236()//Position - 0x22105
{
	if (!PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 20f) && !__LIB_6__::func_572(iLocal_83, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 0);
	}
}

void func_238()//Position - 0x221E8
{
	if (iLocal_67 == 0 && __LIB_0__::func_121(iLocal_83))
	{
		if (iLocal_64 == 1)
		{
			if ((!__LIB_0__::func_75() && SYSTEM::TIMERA() > 8000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 12f, 12f, 5f, false, false, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
				__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "NEED_SOME_HELP", 3);
				SYSTEM::SETTIMERA(0);
			}
		}
		else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 12f, 12f, 5f, false, false, 0))
				{
					if (__LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_SRDP", 4, 0, 0, 0))
					{
						iLocal_64 = 1;
					}
				}
				SYSTEM::SETTIMERA(0);
			}
		}
		else if (SYSTEM::TIMERA() > 1000)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 12f, 12f, 5f, false, false, 0) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_SRDN", 4, 0, 0, 0))
			{
				iLocal_64 = 1;
			}
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_241()//Position - 0x2254F
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_520))
	{
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
		bLocal_65 = true;
		fLocal_146 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60);
		__LIB_0__::func_182(joaat("RC_WALLETS_RECOVERED"), 1);
		__LIB_0__::func_714(&iLocal_130);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			if (!PED::IS_PED_INJURED(iLocal_83))
			{
				if (iLocal_178 == 1)
				{
					__LIB_38__::func_994(2);
					func_421();
				}
				else
				{
					func_246();
					iLocal_129 = __LIB_39__::func_31(iLocal_83, 0, 0);
					__LIB_39__::func_16(&uLocal_524);
					iLocal_58 = 5;
				}
			}
			else
			{
				__LIB_38__::func_994(2);
				func_421();
			}
		}
		else
		{
			__LIB_38__::func_994(2);
			func_421();
		}
	}
	else
	{
		__LIB_39__::func_0(2);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_176) > 150f)
		{
			func_242();
		}
	}
}

void func_242()//Position - 0x2260A
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_520))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_520)) > 100f)
		{
			func_401();
		}
	}
	else if (bLocal_65)
	{
		__LIB_38__::func_994(2);
		func_421();
	}
	else
	{
		func_401();
	}
}

void func_246()//Position - 0x22755
{
	__LIB_0__::func_714(&iLocal_128);
	__LIB_39__::func_32(&uLocal_524);
	__LIB_0__::func_714(&iLocal_129);
	__LIB_0__::func_714(&iLocal_130);
}

void func_247()//Position - 0x22776
{
	struct<3> Var0;
	struct<3> Var1;
	if (iLocal_68 == 1)
	{
		if ((iLocal_148 == 0 && !__LIB_0__::func_75()) && __LIB_14__::func_535(&uLocal_180, "RECHAAU", "RECHA_TK", "RECHA_TK_1", 4, 0, 0))
		{
			iLocal_148 = 1;
		}
		if (__LIB_0__::func_121(iLocal_83) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_521, "pickup_low", 3))
		{
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, Local_131, 1f, 1f, 2f, false, true, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_131, 1f, 20000, 0.25f, 0, 40000f);
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
			__LIB_38__::func_994(3);
			func_421();
		}
	}
	else if ((((bLocal_65 == 0 && OBJECT::DOES_PICKUP_EXIST(iLocal_520)) && __LIB_0__::func_121(iLocal_83)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, OBJECT::GET_PICKUP_COORDS(iLocal_520), 15f, 15f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_515, sLocal_516, 3))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_521);
		Var0 = { OBJECT::GET_PICKUP_COORDS(iLocal_520) - Vector(15f, 15f, 15f) };
		Var1 = { OBJECT::GET_PICKUP_COORDS(iLocal_520) + Vector(15f, 15f, 15f) };
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_521) && !PED::IS_ANY_PED_SHOOTING_IN_AREA(Var0, Var1, false, true))
		{
			iLocal_67 = 1;
			if (!__LIB_6__::func_572(iLocal_83, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_83, OBJECT::GET_PICKUP_COORDS(iLocal_520), 1f, 1f, 2f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_520), 2f, 20000, 0.25f, 0, 40000f);
				}
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_520), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_521, "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_521, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_83, sLocal_521, "pickup_low") > 0.5f)
			{
				__LIB_39__::func_33(&iLocal_520);
				PED::SET_PED_MONEY(iLocal_83, iLocal_149);
				iLocal_68 = 1;
			}
		}
	}
}

void func_249()//Position - 0x229B7
{
	if (!func_302())
	{
		__LIB_0__::func_0(&iLocal_78);
		__LIB_0__::func_0(&iLocal_79);
		__LIB_8__::func_397(&iLocal_86);
		func_401();
	}
	else if (func_298())
	{
		Local_176 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_78, false), 1.2f, 1.5f) };
		MISC::SET_BIT(&iLocal_163, 3);
		MISC::SET_BIT(&iLocal_163, 4);
		MISC::SET_BIT(&iLocal_163, 1);
		iLocal_520 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), Local_176, iLocal_163, iLocal_149, true, iLocal_168);
		func_246();
		iLocal_130 = __LIB_39__::func_39(iLocal_520);
		__LIB_0__::func_345(&uLocal_21, 0, 0);
		func_309(0);
		iLocal_58 = 4;
	}
	else
	{
		if (__LIB_0__::func_121(iLocal_78))
		{
			__LIB_17__::func_118(&uLocal_21, iLocal_78, 0, 0, 1, 1, 1);
		}
		func_256();
		if (iLocal_143 == 0)
		{
			if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_HLP", 4, 0, 0, 0))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_143 = 1;
			}
		}
		else
		{
			__LIB_14__::func_655(iLocal_128, iLocal_78, fLocal_522, 1061158912, 0);
			if (((((iLocal_69 == 0 && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !__LIB_0__::func_75()) && __LIB_0__::func_121(iLocal_86)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_86, 1) < 30f) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_SPOT", 4, 0, 0, 0))
			{
				iLocal_69 = 1;
			}
		}
		func_250();
	}
}

void func_250()//Position - 0x22B02
{
	if ((__LIB_0__::func_121(iLocal_83) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_515, sLocal_516, 3)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_COWER")) == 7)
	{
		if (MISC::IS_BULLET_IN_AREA(Local_60, 50f, false))
		{
			func_223(0);
			TASK::TASK_COWER(iLocal_83, -1);
		}
		else
		{
			func_251();
		}
	}
}

void func_251()//Position - 0x22B5C
{
	if (__LIB_0__::func_121(iLocal_83))
	{
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83) && iLocal_73 > 1)
		{
			if (func_252() && iLocal_73 < 6)
			{
				iLocal_73 = 6;
			}
			else if (iLocal_142 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 8f, 8f, 8f, false, true, 0) && PED::IS_PED_FACING_PED(iLocal_83, PLAYER::PLAYER_PED_ID(), 40f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 3500, 2048, 2);
					iLocal_73 = 8;
				}
			}
		}
		switch (iLocal_73)
		{
			case 0:
				if (((iLocal_147 == 0 && !__LIB_0__::func_75()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 40f, 40f, 40f, false, false, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_GET", 4, 0, 0, 0))
				{
					iLocal_147 = 1;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					__LIB_0__::func_640(iLocal_83, "GENERIC_CURSE_MED", 24);
					func_223(1);
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_73++;
				}
				break;
			case 1:
				if (((!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_74) > 1000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 20f, 20f, 20f, false, false, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_PCA", 4, 0, 0, 0))
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_162 = 2;
					iLocal_73++;
				}
				break;
			case 2:
				if (((!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_74) > 5000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 20f, 20f, 20f, false, false, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_PCB", 4, 0, 0, 0))
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_162 = 3;
					iLocal_73++;
				}
				break;
			case 3:
				if (((!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_74) > 6000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 20f, 20f, 20f, false, false, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_PCC", 4, 0, 0, 0))
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_162 = 4;
					iLocal_73++;
				}
				break;
			case 4:
				if (((!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_74) > 6000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 15f, 15f, 15f, false, false, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_PCD", 4, 0, 0, 0))
				{
					iLocal_162 = 5;
					iLocal_73++;
				}
				break;
			case 5:
				if (!__LIB_0__::func_75())
				{
					iLocal_73 = 100;
				}
				break;
			case 6:
				if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_SRP", 4, 0, 0, 0))
				{
					iLocal_73++;
				}
				break;
			case 7:
				if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_GO", 4, 0, 0, 0))
				{
					func_223(0);
					iLocal_73 = 100;
				}
				break;
			case 8:
				iLocal_142 = 1;
				if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_INT", 4, 0, 0, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_83, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_73++;
				}
				break;
			case 9:
				if (!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_RES", 4, 0, 0, 0))
				{
					iLocal_74 = MISC::GET_GAME_TIMER();
					iLocal_73 = iLocal_162;
				}
				break;
			default:
				break;
			}
	}
}

int func_252()//Position - 0x22EF4
{
	if (__LIB_0__::func_121(iLocal_83))
	{
		if (func_253())
		{
			if (!PED::IS_PED_INJURED(iLocal_78))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_83, iLocal_78, 20f, 20f, 10f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_83, iLocal_78, 17))
				{
					return 1;
				}
			}
			else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_78) && ENTITY::IS_ENTITY_DEAD(iLocal_78, false)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_83, ENTITY::GET_ENTITY_COORDS(iLocal_78, false), 20f, 20f, 10f, false, true, 0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_83, iLocal_78, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_253()//Position - 0x22F96
{
	if (!PED::IS_PED_INJURED(iLocal_78))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_78, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), true))
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

void func_256()//Position - 0x2319C
{
	switch (iLocal_59)
	{
		case 0:
			if ((__LIB_0__::func_121(iLocal_78) && __LIB_0__::func_121(iLocal_79)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
			{
				if (bLocal_153 == 1 || bLocal_153 == 3)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_78, iLocal_86, 20000, 0, 3f, 262145, 0);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_78, iLocal_86, 20000, 0, 3f, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_86, true, true, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_78, joaat("MotionState_Sprint"), false, 0, false);
				iLocal_59 = 1;
			}
			else
			{
				iLocal_59 = 3;
			}
			break;
		case 1:
			if ((__LIB_0__::func_121(iLocal_78) && __LIB_0__::func_121(iLocal_79)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_78, iLocal_86, false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
					if (bLocal_153 == 2)
					{
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_86, PLAYER::PLAYER_PED_ID(), 8, 25f, 786724, -1f, -1f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_79, iLocal_136);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
					iLocal_59 = 2;
				}
			}
			else
			{
				iLocal_59 = 3;
			}
			break;
		case 2:
			if (iLocal_61 == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_78) && !PED::IS_PED_INJURED(iLocal_79))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_86, Local_87, 30f, 30f, 5f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_79, false))
						{
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_79, 40f);
							iLocal_61 = 1;
						}
					}
					else
					{
						iLocal_59 = 3;
					}
				}
				else
				{
					iLocal_59 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_72 == -1)
			{
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
			if (((((((iLocal_71 < 4 && (MISC::GET_GAME_TIMER() - iLocal_72) > 10000) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_0__::func_75()) && !PED::IS_PED_INJURED(iLocal_78)) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_78, 1) < 40f) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_YELL", 4, 0, 0, 0))
			{
				iLocal_71++;
				iLocal_72 = MISC::GET_GAME_TIMER();
			}
			break;
	}
	if (iLocal_59 < 3 && func_263())
	{
		func_258();
	}
	func_257();
}

void func_257()//Position - 0x233C0
{
	if (((((((iLocal_141 == 1 && (MISC::GET_GAME_TIMER() - iLocal_76) > 8000) && !__LIB_0__::func_75()) && __LIB_0__::func_121(iLocal_78)) && __LIB_0__::func_121(iLocal_83)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78, 20f, 20f, 20f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_78, iLocal_83, 30f, 30f, 30f, false, true, 0)) && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_taunt", 4, 0, 0, 0))
	{
		iLocal_76 = MISC::GET_GAME_TIMER();
	}
}

void func_258()//Position - 0x2345C
{
	if (iLocal_62 == 0)
	{
		iLocal_62 = 1;
		iLocal_59 = 3;
		switch (bLocal_153)
		{
			case 1:
			case 2:
				if (__LIB_0__::func_121(iLocal_78))
				{
					if (__LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_ATT", 4, 0, 0, 0))
					{
					}
					func_262(iLocal_78);
				}
				if (__LIB_0__::func_121(iLocal_79))
				{
					func_262(iLocal_79);
				}
				break;
			case 3:
				if (__LIB_0__::func_121(iLocal_78))
				{
					if (__LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_ATT2", 4, 0, 0, 0))
					{
					}
					func_262(iLocal_78);
				}
				if (__LIB_0__::func_121(iLocal_79))
				{
					func_262(iLocal_79);
				}
				if (__LIB_0__::func_121(iLocal_80))
				{
					func_262(iLocal_80);
				}
				if (__LIB_0__::func_121(iLocal_81))
				{
					func_262(iLocal_81);
				}
				break;
			case 4:
				if (__LIB_0__::func_121(iLocal_78))
				{
					if (__LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_BACK", 4, 0, 0, 0))
					{
					}
					func_262(iLocal_78);
				}
				if (__LIB_0__::func_121(iLocal_79))
				{
					func_262(iLocal_79);
				}
				if (__LIB_0__::func_121(iLocal_80))
				{
					func_262(iLocal_80);
				}
				if (__LIB_0__::func_121(iLocal_81))
				{
					func_262(iLocal_81);
				}
				while (!func_261())
				{
					SYSTEM::WAIT(0);
				}
				break;
		}
		__LIB_0__::func_106(&iLocal_86);
		if (PED::IS_PED_INJURED(iLocal_78) && !PED::IS_PED_INJURED(iLocal_79))
		{
			__LIB_0__::func_640(iLocal_79, "GENERIC_FUCK_YOU", 24);
		}
		func_259();
	}
}

void func_259()//Position - 0x235A5
{
	char* sVar0;
	switch (bLocal_153)
	{
		case 1:
			sVar0 = "RE12A_OS";
			break;
		case 2:
			sVar0 = "RE12B_OS";
			break;
		case 3:
			sVar0 = "RE13A_OS";
			break;
		case 4:
			sVar0 = "RE13B_OS";
			break;
	}
	while (!AUDIO::PREPARE_MUSIC_EVENT(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
}

int func_261()//Position - 0x23641
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iLocal_138 = 0;
	iVar3 = 10;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89[0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_89[1], false))
	{
		if (!PED::IS_PED_INJURED(iLocal_90[0]))
		{
			__LIB_0__::func_640(iLocal_90[0], "GENERIC_FUCK_YOU", 24);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90[0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_90[0]))
				{
					TASK::TASK_DRIVE_BY(iLocal_90[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_90[1]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90[1], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_90[1]))
				{
					TASK::TASK_DRIVE_BY(iLocal_90[1], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
				}
			}
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (VEHICLE::GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(&Var2, &Var0, &Var1, 0, 1127481344, 75f, 0, 1, 1))
				{
					iLocal_138 = 0;
					while (iLocal_138 < 2)
					{
						Var0.f_0 = (Var0.f_0 + SYSTEM::TO_FLOAT(iLocal_138));
						iLocal_89[iLocal_138] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), Var0, Var1.f_2, true, true, false);
						iLocal_90[iLocal_138] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_89[iLocal_138], 22, iLocal_164, -1, true, true);
						iLocal_91[iLocal_138] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_89[iLocal_138], 22, iLocal_164, 0, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[iLocal_138], iLocal_510);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90[iLocal_138], iLocal_510);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_VEHICLE_MISSION(iLocal_90[iLocal_138], iLocal_89[iLocal_138], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iVar3, 40f, 786469, 5f, 10f, true);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_90[iLocal_138], iLocal_89[iLocal_138], PLAYER::PLAYER_PED_ID(), iVar3, 40f, 786469, 5f, 10f, true);
						}
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_90[iLocal_138], joaat("WEAPON_SAWNOFFSHOTGUN"), 999999, true, true);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_89[iLocal_138], ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
						iVar3 = 11;
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_91[iLocal_138], joaat("WEAPON_SAWNOFFSHOTGUN"), 999999, true, true);
						TASK::TASK_DRIVE_BY(iLocal_91[iLocal_138], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_90[iLocal_138], 3);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_91[iLocal_138], 3);
						PED::SET_PED_ACCURACY(iLocal_90[iLocal_138], 15);
						PED::SET_PED_ACCURACY(iLocal_91[iLocal_138], 15);
						iLocal_138++;
					}
				}
			}
		}
	}
	return 0;
}

void func_262(int iParam0)//Position - 0x238CC
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
	TASK::TASK_COMBAT_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
}

int func_263()//Position - 0x238E9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_86, false))
		{
			return 1;
		}
		if (__LIB_0__::func_121(iLocal_78))
		{
			if (iLocal_59 > 1)
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_78, iLocal_86, false))
				{
					return 1;
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_78, PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iLocal_78))
			{
				return 1;
			}
			if ((iLocal_59 == 1 && !PED::IS_PED_IN_VEHICLE(iLocal_78, iLocal_86, true)) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_78, iLocal_86, 0, false, false))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (__LIB_0__::func_121(iLocal_79))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_79))
			{
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_79, iLocal_86, false))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (func_266())
		{
			return 1;
		}
		if ((((ENTITY::IS_ENTITY_IN_WATER(iLocal_86) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_86, 2, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_86, 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_86, 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_86, 1, 10000))
		{
			return 1;
		}
		if (func_264())
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

int func_264()//Position - 0x23A1A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 20f, 20f, 10f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_139++;
				iLocal_141 = 1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_86);
			}
			if (iLocal_139 > 25)
			{
				return 1;
			}
		}
	}
	if (iLocal_141 == 1)
	{
		func_265();
	}
	return 0;
}

void func_265()//Position - 0x23A7E
{
	if (iLocal_62 == 0)
	{
		if ((__LIB_0__::func_121(iLocal_78) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_78, false)) && !PED::IS_PED_IN_COMBAT(iLocal_78, 0))
		{
			TASK::TASK_DRIVE_BY(iLocal_78, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
		if ((((__LIB_0__::func_121(iLocal_79) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_79, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_79, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1) && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_79)) && !PED::IS_PED_IN_COMBAT(iLocal_79, 0))
		{
			TASK::TASK_DRIVE_BY(iLocal_79, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 30f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_79, 40f);
		}
		if ((__LIB_0__::func_121(iLocal_80) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_80, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_80, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
		{
			TASK::TASK_DRIVE_BY(iLocal_80, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
		if ((__LIB_0__::func_121(iLocal_81) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_81, false)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_81, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
		{
			TASK::TASK_DRIVE_BY(iLocal_81, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		}
	}
}

int func_266()//Position - 0x23BB3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_86, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_298()//Position - 0x24DC2
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_78, false) && ENTITY::GET_ENTITY_SPEED(iLocal_78) < 1f)
	{
		return 1;
	}
	return 0;
}

int func_302()//Position - 0x24EED
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, fLocal_522, fLocal_522, fLocal_522, false, false, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_86))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_78, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_78, fLocal_522, fLocal_522, fLocal_522, false, false, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_78))
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

void func_303()//Position - 0x24F67
{
	if (iLocal_145 == 1)
	{
		if (__LIB_0__::func_121(iLocal_83) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_83, sLocal_515, sLocal_516, 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_83, sLocal_515, sLocal_516, 1.4f);
		}
		if (__LIB_0__::func_121(iLocal_78))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, sLocal_515, sLocal_517, 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_78, sLocal_515, sLocal_517, 1.4f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false) && !func_263())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, sLocal_515, sLocal_517, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_78, sLocal_515, sLocal_517) > 0.75f)
				{
					iLocal_58 = 3;
					iLocal_59 = 0;
				}
			}
			else
			{
				func_305();
				iLocal_58 = 3;
				iLocal_59 = 3;
			}
		}
		else
		{
			func_305();
			iLocal_58 = 3;
			iLocal_59 = 3;
		}
	}
	else
	{
		__LIB_0__::func_325();
		if (__LIB_0__::func_121(iLocal_83))
		{
			if ((!__LIB_0__::func_75() && __LIB_2__::func_859(&uLocal_180, "RECHAAU", "RECHA_STO", 4, 0, 0, 0)) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_83, 1) < 20f)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_136);
				TASK::TASK_PLAY_ANIM(0, sLocal_515, sLocal_516, 8f, -4f, 8200, 0, 0f, false, false, false);
				if (__LIB_0__::func_121(iLocal_78))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_83, 10f, 10f, 10f, false, true, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					else
					{
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_86, -1, 2048, 2);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_131, 2f, 20000, 2f, 8192, 40000f);
					TASK::TASK_PLAY_ANIM(0, sLocal_518, sLocal_519, 8f, -8f, -1, 0, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_136);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_83, iLocal_136);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_136);
				if (__LIB_0__::func_121(iLocal_78))
				{
					TASK::TASK_PLAY_ANIM(iLocal_78, sLocal_515, sLocal_517, 8f, -4f, -1, 0, 0f, false, false, false);
				}
				iLocal_145 = 1;
			}
		}
	}
}

void func_305()//Position - 0x25150
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_121(iLocal_78))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_78, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
	}
	if (__LIB_0__::func_121(iLocal_79))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_79, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_79, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (__LIB_0__::func_121(iLocal_80))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_80, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_80, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
	if (__LIB_0__::func_121(iLocal_81))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_81, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_81, iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	}
}

void func_306()//Position - 0x25242
{
	if ((iLocal_62 == 1 || iLocal_63 == 1) || iLocal_141 == 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_128))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_128, true);
			if (HUD::GET_BLIP_COLOUR(iLocal_128) == 1)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_128, false);
				HUD::SET_BLIP_COLOUR(iLocal_128, 1);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_128))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_128, false);
			__LIB_39__::func_75(iLocal_128, &uLocal_140);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 25f, 25f, 25f, false, false, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_86) > 5f)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_77 + 5000)
				{
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_77 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_309(int iParam0)//Position - 0x25366
{
	if (iParam0 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
			if (__LIB_0__::func_121(iLocal_86))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_86, "RE_CHASE_THIEVES_BIKE", 0f);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_86, 2);
			}
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
	{
		if (__LIB_0__::func_121(iLocal_86))
		{
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_86, 0);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_86, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
	}
}

int func_321()//Position - 0x25927
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (bLocal_153 == 1)
	{
		Var0 = { 18.221767f, -141.86014f, 65.03339f };
		Var1 = { 212.93256f, -210.49147f, 46.54869f };
		fVar2 = 167.5f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_154, 20f, 20f, 20f, false, true, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var1, fVar2, true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var1, fVar2, joaat("WEAPON_RPG"), false)) || PED::IS_PED_INJURED(iLocal_78))
		{
			return 1;
		}
	}
	else if (bLocal_153 == 2)
	{
		Var0 = { 445.47403f, -851.12256f, 26.59859f };
		Var1 = { 211.7756f, -850.92737f, 39.314484f };
		fVar2 = 100f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_155, 20f, 20f, 20f, false, true, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var1, fVar2, true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var1, fVar2, joaat("WEAPON_RPG"), false)) || PED::IS_PED_INJURED(iLocal_78))
		{
			return 1;
		}
	}
	else if (bLocal_153 == 3)
	{
		Var0 = { 1665.5652f, 4932.071f, 51.114944f };
		Var1 = { 1695.9321f, 4731.4976f, 34.67516f };
		fVar2 = 96.75f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_131, 20f, 20f, 20f, false, true, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var1, fVar2, true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var1, fVar2, joaat("WEAPON_RPG"), false)) || PED::IS_PED_INJURED(iLocal_78))
		{
			return 1;
		}
	}
	else if (bLocal_153 == 4)
	{
		Var0 = { 1322.3059f, 2690.29f, 46.556957f };
		Var1 = { 1092.2505f, 2690.5012f, 31.29549f };
		fVar2 = 197.25f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, fVar2, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_131, 20f, 20f, 20f, false, true, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var1, fVar2, true)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var1, fVar2, joaat("WEAPON_RPG"), false)) || PED::IS_PED_INJURED(iLocal_78))
		{
			return 1;
		}
	}
	return 0;
}

void func_335()//Position - 0x277EE
{
	int iVar0[2];
	struct<3> Var1[2];
	float fVar2[2];
	MISC::CLEAR_AREA(Local_84, 20f, true, false, false, false);
	iLocal_83 = PED::CREATE_PED(26, iLocal_165, Local_84, fLocal_85, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_83, 1, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_83, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_83, 128, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_83, 285, true);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_83, "S_M_Y_BusBoy_01_WHITE_MINI_01");
	if (!__LIB_0__::func_86(Local_134))
	{
		iLocal_133 = VEHICLE::CREATE_VEHICLE(iLocal_167, Local_134, fLocal_135, true, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_133, 5f);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_133, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_133, 0);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_133, 10f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_83, true, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, false);
	PED::SET_PED_MONEY(iLocal_83, 0);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_83, 1.5f);
	iLocal_78 = PED::CREATE_PED(26, iLocal_164, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_83, Local_177), fLocal_82, true, true);
	iLocal_86 = VEHICLE::CREATE_VEHICLE(iLocal_166, Local_87, fLocal_88, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_86, 5f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_166, true);
	VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_86, true);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_86, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_86, true, true, false);
	PED::ADD_RELATIONSHIP_GROUP("re_chasethieves badGuys", &iLocal_510);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_510, joaat("PLAYER"));
	switch (bLocal_153)
	{
		case 1:
			iLocal_79 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_79, joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_78, joaat("WEAPON_PISTOL"), -1, false, true);
			func_336(iLocal_79);
			func_336(iLocal_78);
			break;
		case 2:
			iLocal_79 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_79, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_78, joaat("WEAPON_PISTOL"), -1, false, true);
			func_336(iLocal_79);
			func_336(iLocal_78);
			break;
		case 3:
			iLocal_79 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_79, joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_78, joaat("WEAPON_PISTOL"), -1, false, true);
			func_336(iLocal_79);
			func_336(iLocal_78);
			if (iLocal_166 == joaat("gburrito"))
			{
				iLocal_80 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, 1, true, true);
				iLocal_81 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, 2, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80, joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("WEAPON_PISTOL"), -1, false, true);
				func_336(iLocal_80);
				func_336(iLocal_81);
			}
			break;
		case 4:
			iLocal_79 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, -1, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_79, joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_78, joaat("WEAPON_PISTOL"), -1, false, true);
			func_336(iLocal_79);
			func_336(iLocal_78);
			if (iLocal_166 == joaat("gburrito"))
			{
				iLocal_80 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, 1, true, true);
				iLocal_81 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_86, 22, iLocal_164, 2, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_80, joaat("WEAPON_PISTOL"), -1, false, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("WEAPON_PISTOL"), -1, false, true);
				func_336(iLocal_80);
				func_336(iLocal_81);
			}
			break;
	}
	if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_180, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		iLocal_69 = 1;
		iLocal_71 = 9;
		iLocal_70 = 1;
	}
	if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_180, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		iLocal_69 = 1;
		iLocal_71 = 9;
		iLocal_70 = 1;
	}
	if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&uLocal_180, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		iLocal_69 = 0;
		iLocal_71 = 0;
		iLocal_70 = 0;
	}
	__LIB_0__::func_222(&uLocal_180, 3, iLocal_83, "ChaseWorker", 0, 1);
	__LIB_0__::func_222(&uLocal_180, 4, iLocal_78, "ChaseThief", 0, 1);
	if (bLocal_153 == 2)
	{
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_86, 1, false, false);
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_78, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_512, sLocal_514, Local_173, Local_174, 0f, 2), false, false, true);
	Local_175 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_512, sLocal_514, Local_173, Local_174, 0f, 2) };
	ENTITY::SET_ENTITY_HEADING(iLocal_78, Local_175.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_83, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_512, sLocal_513, Local_173, Local_174, 0f, 2), false, false, true);
	Local_175 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_512, sLocal_513, Local_173, Local_174, 0f, 2) };
	ENTITY::SET_ENTITY_HEADING(iLocal_83, Local_175.f_2);
	TASK::TASK_PLAY_ANIM(iLocal_78, sLocal_512, sLocal_514, 1000f, -1000f, -1, 9, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(iLocal_83, sLocal_512, sLocal_513, 1000f, -1000f, -1, 9, 0f, false, false, false);
	if (bLocal_153 == 2)
	{
		PED::GIVE_PED_HELMET(iLocal_78, true, 4096, -1);
		Var1[0 /*3*/] = { 381.5702f, -867.3578f, 28.1573f };
		Var1[1 /*3*/] = { 379.5334f, -867.1062f, 28.1713f };
		fVar2[0] = 236.3457f;
		fVar2[1] = 232.1922f;
		iLocal_138 = 0;
		while (iLocal_138 <= 1)
		{
			iVar0[iLocal_138] = VEHICLE::CREATE_VEHICLE(iLocal_166, Var1[iLocal_138 /*3*/], fVar2[iLocal_138], true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0[iLocal_138], 5f);
			iLocal_138++;
		}
	}
	if (bLocal_153 == 3)
	{
		iLocal_137 = PED::ADD_SCENARIO_BLOCKING_AREA(1608.8f, 4824.81f, 0f, 1730.9f, 4856.1f, 51.1f, false, true, true, true);
		MISC::CLEAR_AREA_OF_PEDS(1973.98f, 4817.32f, 41.53f, 10f, 0);
	}
	MISC::SET_BIT(&uLocal_159, 5);
	MISC::SET_BIT(&uLocal_159, 4);
	MISC::SET_BIT(&uLocal_159, 0);
	MISC::SET_BIT(&uLocal_159, 1);
	if (iLocal_511 == 0)
	{
		iLocal_511 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101 /*EVENT_SHOCKING_MUGGING*/, Local_60, 60000f);
	}
}

void func_336(int iParam0)//Position - 0x27D2F
{
	if (__LIB_0__::func_121(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, true, 0f);
		PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 101, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 281, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 20, false);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, true);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iParam0, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, true, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_510);
		PED::SET_PED_MONEY(iParam0, 0);
		PED::SET_PED_ACCURACY(iParam0, 15);
		PED::SET_PED_RESET_FLAG(iParam0, 237, true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, "G_M_Y_Lost_02_WHITE_FULL_01");
	}
}

int func_337()//Position - 0x27DF1
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_512);
	STREAMING::REQUEST_ANIM_DICT(sLocal_515);
	STREAMING::REQUEST_ANIM_DICT(sLocal_518);
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_166, 3);
	if (Local_526.f_32 <= 0)
	{
		Local_526.f_32 = MISC::GET_FRAME_COUNT();
	}
	__LIB_39__::func_321(&Local_526, iLocal_164);
	__LIB_39__::func_321(&Local_526, iLocal_165);
	__LIB_39__::func_321(&Local_526, iLocal_166);
	__LIB_39__::func_321(&Local_526, iLocal_167);
	__LIB_39__::func_321(&Local_526, iLocal_168);
	__LIB_39__::func_77(&Local_526, 2);
	if ((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_512) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_515)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_518)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_166)) && __LIB_39__::func_82(&Local_526))
	{
		return 1;
	}
	return 0;
}

int func_346()//Position - 0x281A3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_56) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
		{
			return 0;
		}
	}
	if (__LIB_39__::func_6())
	{
		return 1;
	}
	if (__LIB_39__::func_2(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_351()//Position - 0x28394
{
	iLocal_168 = joaat("prop_ld_wallet_pickup");
	if (bLocal_153 == 1)
	{
		fLocal_82 = 339.6604f;
		Local_84 = { 103.8348f, -216.6055f, 53.6412f };
		fLocal_85 = 319.2591f;
		Local_87 = { 113.8783f, -193.8459f, 53.4281f };
		fLocal_88 = 265.1665f;
		Local_131 = { 116.9988f, -197.4567f, 53.6658f };
		Local_134 = { 0f, 0f, 0f };
		fLocal_135 = 0f;
		Local_173 = { 110.9119f, -196.8555f, 53.6768f };
		Local_174 = { 0f, 0f, 140f };
		iLocal_164 = joaat("G_M_Y_Lost_02");
		iLocal_165 = joaat("S_M_Y_BusBoy_01");
		iLocal_166 = joaat("gburrito");
		iLocal_149 = 2000;
		sLocal_512 = "RANDOM@CHASETHIEVES1";
		sLocal_513 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_514 = "STRUGGLE_Loop_A_Thief";
		sLocal_169 = "RANDOM@CHASETHIEVES1";
		sLocal_170 = "Return_Wallet_Positive_A_Player";
		sLocal_171 = "Return_Wallet_Positive_A_Male";
		sLocal_172 = "Return_Wallet_Positive_A_Cam";
	}
	else if (bLocal_153 == 2)
	{
		fLocal_82 = 353.554f;
		Local_84 = { 346.1016f, -874.9264f, 28.2916f };
		fLocal_85 = 33.5758f;
		Local_87 = { 321.6273f, -841.5636f, 28.1381f };
		fLocal_88 = 109.3726f;
		Local_131 = { 327.0495f, -839.6594f, 28.2922f };
		Local_134 = { 0f, 0f, 0f };
		fLocal_135 = 0f;
		Local_173 = { 330.2017f, -838.6019f, 28.2922f };
		Local_174 = { 0f, 0f, 287.6646f };
		iLocal_164 = joaat("G_M_Y_Lost_02");
		iLocal_165 = joaat("S_M_Y_BusBoy_01");
		iLocal_166 = joaat("hexer");
		iLocal_149 = 500;
		sLocal_512 = "RANDOM@CHASETHIEVES2";
		sLocal_513 = "STRUGGLE_Loop_B_Shopkeeper";
		sLocal_514 = "STRUGGLE_Loop_B_Thief";
		sLocal_169 = "RANDOM@CHASETHIEVES2";
		sLocal_170 = "Return_Wallet_Positive_B_Player";
		sLocal_171 = "Return_Wallet_Positive_B_Male";
		sLocal_172 = "Return_Wallet_Positive_B_Cam";
	}
	else if (bLocal_153 == 3)
	{
		fLocal_82 = 194.6499f;
		Local_84 = { 1660.545f, 4864.651f, 40.154f };
		fLocal_85 = 194.6499f;
		Local_87 = { 1665.7468f, 4824.582f, 40.896f };
		fLocal_88 = 203.4643f;
		Local_173 = { 1661.568f, 4827.771f, 41.0597f };
		Local_174 = { 0f, 0f, 30f };
		Local_131 = { 1663.0087f, 4827.769f, 41.1046f };
		Local_134 = { 1653.9741f, 4826.0293f, 41.0037f };
		fLocal_135 = 277.9738f;
		iLocal_164 = joaat("G_M_Y_Lost_02");
		iLocal_165 = joaat("S_M_Y_BusBoy_01");
		iLocal_166 = joaat("gburrito");
		iLocal_149 = 250;
		sLocal_512 = "RANDOM@CHASETHIEVES3";
		sLocal_513 = "STRUGGLE_Loop_C_Shopkeeper";
		sLocal_514 = "STRUGGLE_Loop_C_Thief";
		sLocal_169 = "RANDOM@CHASETHIEVES3";
		sLocal_170 = "Return_Wallet_Positive_C_Player";
		sLocal_171 = "Return_Wallet_Positive_C_Male";
		sLocal_172 = "Return_Wallet_Positive_C_Cam";
	}
	else if (bLocal_153 == 4)
	{
		fLocal_82 = 84.7987f;
		Local_84 = { 1218.718f, 2715.3376f, 37.0041f };
		fLocal_85 = 148.661f;
		Local_87 = { 1207.0947f, 2694.214f, 36.7963f };
		fLocal_88 = 226.0923f;
		Local_131 = { 1213.2637f, 2690.3936f, 36.5998f };
		Local_134 = { 1207.2872f, 2706.8787f, 37.0047f };
		fLocal_135 = 179.416f;
		Local_173 = { 1201.656f, 2696.7625f, 36.9226f };
		Local_174 = { 0f, 0f, 42.7858f };
		iLocal_164 = joaat("G_M_Y_Lost_02");
		iLocal_165 = joaat("S_M_Y_BusBoy_01");
		iLocal_166 = joaat("gburrito");
		iLocal_149 = 120;
		sLocal_512 = "RANDOM@CHASETHIEVES1";
		sLocal_513 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_514 = "STRUGGLE_Loop_A_Thief";
		sLocal_169 = "RANDOM@CHASETHIEVES1";
		sLocal_170 = "Return_Wallet_Positive_A_Player";
		sLocal_171 = "Return_Wallet_Positive_A_Male";
		sLocal_172 = "Return_Wallet_Positive_A_Cam";
	}
}

int func_352()//Position - 0x286D6
{
	int iVar0;
	if (__LIB_38__::func_989(11, 1))
	{
		iVar0++;
	}
	if (__LIB_38__::func_989(11, 2))
	{
		iVar0++;
	}
	if (__LIB_38__::func_989(11, 3))
	{
		iVar0++;
	}
	if (__LIB_38__::func_989(11, 4))
	{
		iVar0++;
	}
	return iVar0;
}

int func_359(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x289B8
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_38__::func_999();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__::func_116())
		{
			return 0;
		}
	}
	Local_56 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__::func_766())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__::func_2(0))
		{
			return 0;
		}
		if (__LIB_39__::func_6())
		{
			return 0;
		}
		if (__LIB_3__::func_695())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_39__::func_2(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_56.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_39__::func_1(iParam1))
		{
			return 0;
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (__LIB_38__::func_682(__LIB_0__::func_683()) == 4 || __LIB_38__::func_682(__LIB_0__::func_683()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			if (!__LIB_39__::func_3(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_14__::func_793(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_38__::func_991())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_0__::func_784(4))
		{
			return 0;
		}
		if (!__LIB_0__::func_215(5))
		{
			return 0;
		}
		if (__LIB_38__::func_989(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_38__::func_989(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_39__::func_1(30) && !__LIB_38__::func_989(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_3__::func_423(iVar4))
				{
					if (__LIB_17__::func_398(iVar2))
					{
						if (!__LIB_0__::func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_0__::func_683() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

Vector3 func_400()//Position - 0x29FEC
{
	float fVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_154, true);
		bLocal_153 = true;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_155, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_155, true);
			bLocal_153 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_156, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_156, true);
			bLocal_153 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_157, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_157, true);
			bLocal_153 = 4;
		}
		if (bLocal_153 == 1)
		{
			return Local_154;
		}
		if (bLocal_153 == 2)
		{
			return Local_155;
		}
		if (bLocal_153 == 3)
		{
			return Local_156;
		}
		if (bLocal_153 == 4)
		{
			return Local_157;
		}
	}
	return 0f, 0f, 0f;
}

void func_401()//Position - 0x2A0DA
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_137, false);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_164);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_165);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	STREAMING::REMOVE_ANIM_DICT(sLocal_512);
	STREAMING::REMOVE_ANIM_DICT(sLocal_515);
	STREAMING::REMOVE_ANIM_DICT(sLocal_169);
	STREAMING::REMOVE_ANIM_DICT(sLocal_521);
	STREAMING::REMOVE_ANIM_DICT(sLocal_518);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_166);
	if (iLocal_529)
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (__LIB_0__::func_121(iLocal_83))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_83, false);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_83, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_83, true);
		if (((iLocal_152 == 0 && iLocal_68 == 0) && !__LIB_6__::func_572(iLocal_83, joaat("SCRIPT_TASK_SMART_FLEE_PED"))) && !PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_83))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_83, "WORLD_HUMAN_STAND_MOBILE", 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_83, false, false);
		}
		PED::SET_PED_KEEP_TASK(iLocal_83, true);
	}
	func_309(0);
	__LIB_0__::func_221(&uLocal_180, 0);
	__LIB_0__::func_221(&uLocal_180, 1);
	__LIB_0__::func_221(&uLocal_180, 2);
	__LIB_0__::func_221(&uLocal_180, 3);
	__LIB_0__::func_221(&uLocal_180, 4);
	func_246();
	func_230();
	__LIB_0__::func_106(&iLocal_86);
	__LIB_0__::func_106(&iLocal_133);
	__LIB_0__::func_106(&iLocal_92);
	__LIB_0__::func_124(&iLocal_83, 1, 0, 1);
	__LIB_0__::func_123(&iLocal_127);
	if (iLocal_511 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_511);
	}
	__LIB_0__::func_345(&uLocal_21, 0, 0);
	__LIB_39__::func_322(&Local_526, 0);
	__LIB_39__::func_19(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_421()//Position - 0x2AC68
{
	if (!bLocal_66)
	{
		__LIB_0__::func_109();
		__LIB_14__::func_557();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	}
	func_422(11, bLocal_153);
	func_401();
}

void func_422(int iParam0, int iParam1)//Position - 0x2ACA8
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_38__::func_999();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= __LIB_38__::func_982(iParam0))
	{
		__LIB_38__::func_996(iParam0, iParam1);
		if (!__LIB_0__::func_67(51))
		{
			__LIB_0__::func_697("RE_REWARD" /* GXT: Some Random Events will reward the player with stat boosts or money. */, 1, 0, 4000, 10000, __LIB_14__::func_792(), 0, 138, 0);
			__LIB_0__::func_592(51);
		}
		if (__LIB_38__::func_981(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (__LIB_38__::func_995(iParam0, iParam1) != 322)
		{
			__LIB_39__::func_10(__LIB_38__::func_995(iParam0, iParam1), Local_56.f_0, Local_56.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				__LIB_38__::func_994(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				__LIB_38__::func_994(7);
			}
			else
			{
				__LIB_38__::func_994(1);
			}
		}
	}
}

