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
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 1000;
	var uLocal_44 = 1000;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	struct<4> Local_47[10];
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55[4] = { 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int* iLocal_57 = NULL;
	int* iLocal_58 = NULL;
	var uLocal_59 = 0;
	int iLocal_60[4] = { 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_63 = NULL;
	int* iLocal_64[4] = { NULL, NULL, NULL, NULL };
	var uLocal_65[4] = { 0, 0, 0, 0 };
	int* iLocal_66 = NULL;
	int* iLocal_67 = NULL;
	int* iLocal_68 = NULL;
	int* iLocal_69 = NULL;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_82[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_83 = 15;
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
	var uLocal_129 = 15;
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
	var uLocal_145[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_146[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_147 = 15;
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
	var uLocal_193 = 15;
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
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int* iLocal_218 = NULL;
	int iLocal_219 = 0;
	var uLocal_220 = 16;
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
	float fLocal_385 = 0f;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
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
	var uLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	struct<3> Local_442[3];
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	struct<3> Local_449[55];
	float fLocal_450 = 0f;
	float fLocal_451 = 0f;
	float fLocal_452 = 0f;
	float fLocal_453 = 0f;
	float fLocal_454 = 0f;
	float fLocal_455 = 0f;
	float fLocal_456 = 0f;
	float fLocal_457 = 0f;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	var uLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	struct<3> Local_534 = { 0, 0, 0 } ;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	char* sLocal_559 = NULL;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<61> Local_564 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_50 = __LIB_2__::func_910(56);
	uLocal_51 = __LIB_2__::func_910(57);
	uLocal_52 = __LIB_2__::func_910(59);
	iLocal_53 = joaat("pranger");
	fLocal_385 = 12f;
	Local_54 = { ScriptParam_564 };
	__LIB_14__::func_801(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_14__::func_872(1);
		func_578();
	}
	if (__LIB_0__::func_323())
	{
		Global_78564 = 1;
		iLocal_49 = 0;
		while (!func_574(&Local_54))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_14__::func_800(&Local_54, 0, 1);
		Global_78564 = 0;
	}
	__LIB_0__::func_712(56, 2, 0);
	__LIB_0__::func_712(57, 2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_54.f_35[0], 1);
	}
	func_564();
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_AAW", 0);
		__LIB_14__::func_863(Local_54.f_9, 0, 0, 0, 0, 0);
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (iLocal_563 != 1 && iLocal_563 != 0)
		{
			if (iLocal_563 != 16)
			{
				func_546();
			}
			if (!func_545())
			{
				func_542();
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
			}
		}
		func_540();
		func_539();
		func_538();
		switch (iLocal_563)
		{
			case 0:
				func_467();
				break;
			case 1:
				func_461();
				break;
			case 2:
				func_460();
				break;
			case 3:
				func_456();
				break;
			case 5:
				func_454();
				break;
			case 6:
				func_445();
				break;
			case 7:
				func_366();
				break;
			case 8:
				func_290();
				break;
			case 15:
				func_243();
				break;
			case 17:
				func_19();
				break;
			case 16:
				func_3();
				break;
		}
		if (iLocal_563 != 16)
		{
			__LIB_0__::func_467();
			__LIB_0__::func_467();
		}
	}
}

void func_3()//Position - 0x24D
{
	switch (iLocal_561)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_FAIL");
			func_18();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_429();
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_559))
			{
				__LIB_14__::func_880(sLocal_559, 1);
			}
			else
			{
				__LIB_14__::func_872(1);
			}
			iLocal_561 = 1;
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_4();
				func_578();
			}
			break;
	}
}

void func_4()//Position - 0x2B6
{
	func_10();
	iLocal_386 = 0;
	HUD::CLEAR_PRINTS();
	iLocal_562 = 0;
	__LIB_0__::func_714(&(iLocal_64[0]));
	__LIB_0__::func_714(&(iLocal_64[1]));
	__LIB_0__::func_714(&(iLocal_64[2]));
	__LIB_0__::func_714(&(uLocal_65[0]));
	__LIB_0__::func_714(&(uLocal_65[1]));
	__LIB_0__::func_714(&(uLocal_65[2]));
	__LIB_0__::func_714(&iLocal_66);
	__LIB_0__::func_714(&iLocal_67);
	__LIB_0__::func_714(&iLocal_68);
	__LIB_0__::func_0(&(Local_54.f_28[0]));
	__LIB_0__::func_0(&(Local_54.f_28[1]));
	__LIB_0__::func_0(&(iLocal_60[0]));
	__LIB_0__::func_0(&(iLocal_60[1]));
	__LIB_0__::func_0(&(iLocal_60[2]));
	__LIB_0__::func_0(&(iLocal_62[0]));
	__LIB_0__::func_0(&(iLocal_62[1]));
	__LIB_0__::func_0(&iLocal_61);
	__LIB_0__::func_0(&iLocal_63);
	__LIB_8__::func_397(&iLocal_58);
	__LIB_8__::func_397(&(iLocal_55[0]));
	__LIB_8__::func_397(&(iLocal_55[1]));
	__LIB_8__::func_397(&(iLocal_55[2]));
	__LIB_8__::func_397(&iLocal_56);
	__LIB_8__::func_397(&iLocal_57);
	__LIB_0__::func_123(&iLocal_218);
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
	}
	VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(Local_54.f_35[0]);
	__LIB_8__::func_397(&(Local_54.f_35[0]));
	iLocal_460 = 0;
	iLocal_461 = 0;
	iLocal_473 = 0;
	iLocal_474 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_475 = 0;
	iLocal_476 = 0;
	iLocal_477 = 0;
	iLocal_463 = 0;
	iLocal_464 = 0;
	iLocal_469 = 0;
	iLocal_478 = 0;
	iLocal_479 = 0;
	iLocal_480 = 0;
	iLocal_462 = 0;
	iLocal_402 = 0;
	iLocal_483 = 0;
	iLocal_484 = 0;
	iLocal_393 = 0;
	iLocal_487 = 0;
	iLocal_405 = 0;
	iLocal_407 = 0;
	iLocal_488 = 0;
	iLocal_489 = 0;
	iLocal_410 = 0;
	iLocal_493 = 0;
	iLocal_412 = 0;
	iLocal_413 = 0;
	iLocal_494 = 0;
	iLocal_496 = 0;
	iLocal_497 = 0;
	iLocal_498 = 0;
	fLocal_457 = 0f;
	iLocal_415 = 0;
	iLocal_499 = 0;
	iLocal_500 = 0;
	iLocal_421 = 0;
	iLocal_420 = 0;
	iLocal_424 = 0;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
	iLocal_505 = 0;
	iLocal_506 = 0;
	iLocal_507 = 0;
	iLocal_426 = 0;
	iLocal_508 = 0;
	iLocal_509 = 0;
	iLocal_392 = 0;
	iLocal_510 = 0;
	iLocal_511 = 0;
	iLocal_512 = 0;
	iLocal_513 = 0;
	iLocal_514 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_428 = 0;
	iLocal_430 = 0;
	iLocal_522 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
	iLocal_524 = 0;
	iLocal_525 = 0;
	iLocal_526 = 0;
	iLocal_529 = 0;
	iLocal_555 = 0;
	iLocal_557 = 0;
	iLocal_539 = 0;
	iLocal_540 = 0;
	iLocal_541 = 0;
	iLocal_542 = 0;
	iLocal_543 = 0;
	iLocal_544 = 0;
	iLocal_545 = 0;
	iLocal_546 = 0;
	iLocal_547 = 0;
	iLocal_548 = 0;
	iLocal_549 = 0;
	iLocal_495 = 0;
	iLocal_550 = 0;
	iLocal_551 = 0;
	iLocal_554 = 0;
	iLocal_490 = 0;
	iLocal_491 = 0;
	iLocal_492 = 0;
	iLocal_560 = 0;
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_76);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_78);
}

void func_10()//Position - 0x6A8
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("emperor2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surfer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tornado3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stanier"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("mesa"));
	__LIB_0__::func_124(&(uLocal_82[0]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[1]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[2]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[3]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[4]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[5]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[6]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[7]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[8]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[9]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_82[10]), 1, 0, 1);
	__LIB_0__::func_106(&(uLocal_81[0]));
	__LIB_0__::func_106(&(uLocal_81[1]));
	__LIB_0__::func_106(&(uLocal_81[2]));
	__LIB_0__::func_106(&(uLocal_81[3]));
	__LIB_0__::func_106(&(uLocal_81[4]));
	__LIB_0__::func_106(&(uLocal_81[5]));
	__LIB_0__::func_106(&(uLocal_81[6]));
	__LIB_0__::func_106(&(uLocal_81[7]));
	__LIB_0__::func_106(&(uLocal_81[8]));
	__LIB_0__::func_106(&(uLocal_81[9]));
	__LIB_0__::func_106(&(uLocal_81[10]));
	__LIB_0__::func_124(&(uLocal_146[0]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[1]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[2]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[3]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[4]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[5]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[6]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[7]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[8]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[9]), 1, 0, 1);
	__LIB_0__::func_124(&(uLocal_146[10]), 1, 0, 1);
	__LIB_0__::func_106(&(uLocal_145[0]));
	__LIB_0__::func_106(&(uLocal_145[1]));
	__LIB_0__::func_106(&(uLocal_145[2]));
	__LIB_0__::func_106(&(uLocal_145[3]));
	__LIB_0__::func_106(&(uLocal_145[4]));
	__LIB_0__::func_106(&(uLocal_145[5]));
	__LIB_0__::func_106(&(uLocal_145[6]));
	__LIB_0__::func_106(&(uLocal_145[7]));
	__LIB_0__::func_106(&(uLocal_145[8]));
	__LIB_0__::func_106(&(uLocal_145[9]));
	__LIB_0__::func_106(&(uLocal_145[10]));
}

void func_18()//Position - 0xA0F
{
	__LIB_0__::func_714(&(iLocal_64[0]));
	__LIB_0__::func_714(&(iLocal_64[1]));
	__LIB_0__::func_714(&(iLocal_64[2]));
	__LIB_0__::func_714(&(iLocal_64[3]));
	__LIB_0__::func_714(&(uLocal_65[0]));
	__LIB_0__::func_714(&(uLocal_65[1]));
	__LIB_0__::func_714(&(uLocal_65[2]));
	__LIB_0__::func_714(&(uLocal_65[3]));
	__LIB_0__::func_714(&iLocal_66);
	__LIB_0__::func_714(&iLocal_67);
	__LIB_0__::func_714(&iLocal_68);
	__LIB_0__::func_714(&iLocal_69);
}

void func_19()//Position - 0xA77
{
	if (!__LIB_0__::func_75())
	{
		if ((!iLocal_524 && __LIB_0__::func_695(Local_54.f_35[0])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], 1) < 35f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_411 + 3000)
			{
				if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_DRIVOFF", 7, 0, 0, 0))
				{
					iLocal_524 = 1;
				}
			}
		}
	}
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], 1) > 150f || MISC::GET_GAME_TIMER() > iLocal_411 + 20000)
		{
			func_20();
		}
	}
}

void func_20()//Position - 0xB1A
{
	func_21(93, 1);
	func_578();
}

void func_21(int iParam0, bool bParam1)//Position - 0xB2D
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
	func_49();
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

void func_49()//Position - 0x1CDF
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
				if (func_167(iVar1, 14, iVar2))
				{
					func_50(iVar1, 14, iVar2);
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

int func_50(int iParam0, int iParam1, int iParam2)//Position - 0x1DA0
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
	if (!func_167(iParam0, iParam1, iParam2))
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
				func_50(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_50(iParam0, 14, uVar5[iVar3]))
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
	if (func_93(iParam0, iVar0, &iVar7, 0))
	{
		func_53(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_51(iParam0, iVar0, &iVar7))
	{
		func_53(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x1F5C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_167(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2023
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
										func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_59(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_93(iParam0, iVar10, &iVar4, 1))
							{
								func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_53(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_53(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_53(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_53(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_53(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_53(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_53(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_93(iParam0, iVar10, &iVar4, 0))
		{
			func_53(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_51(iParam0, iVar10, &iVar4))
		{
			func_53(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_59(int iParam0, int iParam1, int iParam2)//Position - 0x3060
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
				if (func_167(iParam0, iParam1, iVar0))
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
				if (func_167(iParam0, iParam1, iVar1))
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

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x98B3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_167(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x1FD97
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
				if (!func_167(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_167(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_167(iParam0, 14, iVar4))
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
			if (!func_167(iParam0, 14, uVar8[iVar7]))
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

void func_243()//Position - 0x27ADD
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_506 = 0;
		iLocal_507 = 0;
		func_278();
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0]) && PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_54.f_35[0], 10);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false) || MISC::GET_GAME_TIMER() > iLocal_427 + 30000)
			{
				if (!__LIB_0__::func_75())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 12f, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], 200f, 0f, 50f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -200f, 0f, -50f), 400f, false, true, true);
					func_248();
					iLocal_563 = 17;
				}
			}
			else if (iLocal_514 == 0)
			{
				if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_1", 8, 0, 0))
				{
					iLocal_514 = 1;
				}
			}
			else if (iLocal_552 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_229("MIN2_47", 7500, 0);
					iLocal_417 = MISC::GET_GAME_TIMER();
					iLocal_552 = 1;
				}
			}
			else if (!__LIB_0__::func_501("MIN2_47", 0, 0))
			{
				if (iLocal_412 < 6)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_417 + 9000)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_BYE", 7, 0, 0, 0))
							{
								iLocal_412++;
								iLocal_417 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
				}
			}
		}
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
				}
			}
		}
	}
	else
	{
		iLocal_506 = 1;
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_66))
			{
				iLocal_66 = __LIB_14__::func_866(Local_54.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_507 == 0)
			{
				__LIB_0__::func_229("MIN2_COPS", 7500, 0);
				iLocal_507 = 1;
			}
			__LIB_0__::func_714(&iLocal_66);
		}
	}
}

void func_248()//Position - 0x27E34
{
	int iVar0;
	int iVar1;
	__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
	__LIB_0__::func_714(&iLocal_66);
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			__LIB_0__::func_222(&uLocal_220, 6, Local_54.f_28[1], "JOSEF", 0, 1);
			if (iLocal_514 == 0)
			{
				__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ8", 8, 0, 0, 0);
			}
			__LIB_14__::func_593(2, 1, 500, 0, 0);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_54.f_28[0], true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_54.f_28[1], true);
		}
	}
	iLocal_411 = MISC::GET_GAME_TIMER();
	while (iLocal_393 < 2)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_AAW", 0);
		if (__LIB_0__::func_695(Local_54.f_35[0]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[0]))
			{
				if (iLocal_393 == 0)
				{
					if (MISC::GET_GAME_TIMER() > (iLocal_411 + iVar0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 0);
						iLocal_393 = 1;
					}
				}
				if (iLocal_393 == 1)
				{
					if (MISC::GET_GAME_TIMER() > (iLocal_411 + iVar0 + 500))
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_PUSH", 7, 0, 0, 0);
							}
							else
							{
								__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_JJ8", "MIN2_JJ8_2", 7, 0, 0);
							}
							VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_54.f_35[0], true);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, Local_54.f_35[0], false);
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54.f_35[0], 599.2107f, 2814.5237f, 37.923046f, 592.2786f, 2918.8582f, 67.9005f, 110f, false, true, 0))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_54.f_35[0], 657.2675f, 2820.9895f, 40.319f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_54.f_35[0], 662.5688f, 2702.0947f, 39.7719f, 20f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_54.f_35[0], 100f, 786468);
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54.f_35[0], 535.598f, 2706.873f, 40.61375f, 529.4959f, 2810.5974f, 50.720314f, 36f, false, true, 0))
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_54.f_35[0], 538.209f, 2696.4927f, 41.2063f, 16f, 0, joaat("pranger"), 786468, 10f, 200f);
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_54.f_35[0], 100f, 786468);
							}
							else
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_54.f_35[0], 100f, 786468);
							}
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_54.f_28[0], iVar1);
							iLocal_393 = 2;
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_54.f_35[0], 2);
	}
}

void func_278()//Position - 0x29489
{
	struct<6> Var0;
	if (((__LIB_0__::func_121(Local_54.f_35[0]) && HUD::DOES_BLIP_EXIST(iLocal_66)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(Local_54.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_54.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		if (!PED::IS_PED_HEADTRACKING_PED(Local_54.f_28[1], PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_54.f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
	{
		if (!iLocal_523)
		{
			if (iLocal_405 != 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_0__::func_501("MIN2_06", 0, 0))
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CAR3", 7, 0, 0, 0))
						{
							iLocal_523 = 1;
						}
					}
					else if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CAR3", 7, 1, 0, 0))
					{
						iLocal_523 = 1;
					}
				}
				else
				{
					iLocal_523 = 1;
				}
			}
		}
	}
	if (((__LIB_0__::func_121(Local_54.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
	{
		if (!__LIB_0__::func_75() && HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
		{
			if (iLocal_392 >= 4)
			{
				if (iLocal_535 == 0)
				{
					Local_534 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					iLocal_535 = 1;
				}
				else if (iLocal_535 < 4)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 267.2497f, 2852.1667f, 42.6129f, true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_534, 267.2497f, 2852.1667f, 42.6129f, true) + 200f))
					{
						if (!func_289())
						{
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_WRONG", 7, 0, 0, 0))
							{
								iLocal_535++;
								Local_534 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							}
						}
						else if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_WRONG", 7, 1, 0, 0))
						{
							iLocal_535++;
							Local_534 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_432 + 9000)
				{
					if (iLocal_431 < 3)
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_54.f_35[0]) < 0.1f)
						{
							if (!func_289())
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_STOP", 7, 0, 0, 0))
								{
									iLocal_431++;
									iLocal_432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
							else if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_STOP", 7, 1, 0, 0))
							{
								iLocal_431++;
								iLocal_432 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_434 + 15000)
			{
				if (iLocal_433 < 6)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_54.f_35[0]))
					{
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
	{
		iLocal_432 = MISC::GET_GAME_TIMER() + 5000;
	}
	if (iLocal_563 == 5)
	{
		if (iLocal_464 == 1)
		{
			if (iLocal_490 == 0)
			{
				if (__LIB_0__::func_692(iLocal_60[0]))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[0], 50f, 1) && __LIB_0__::func_687(Local_54.f_28[0], iLocal_60[0], 20f, 1))
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CC1", 7, 0, 0, 0))
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
							iLocal_527 = 1;
							iLocal_490 = 1;
						}
					}
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[0], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[0], joaat("WEAPON_STUNGUN"), 0))
			{
				if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0], 30f, 1))
				{
					if (iLocal_424 < 5)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_425 + 7000)
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
								{
									iLocal_424++;
									iLocal_425 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60[0]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_60[0]);
			}
		}
	}
	else
	{
		if (__LIB_0__::func_76(Local_54.f_35[0], PLAYER::PLAYER_PED_ID(), 1) < 30f)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_66) && !__LIB_0__::func_501("MIN2_19", 0, 0))
			{
				__LIB_0__::func_496();
				if (MISC::GET_GAME_TIMER() > iLocal_406 + 7000)
				{
					if (iLocal_405 == 0)
					{
						if (iLocal_392 >= 4)
						{
							if (!__LIB_0__::func_75())
							{
								if (iLocal_407 == 0)
								{
									if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && iLocal_563 < 8)
									{
										if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
										{
											iLocal_405 = 1;
											iLocal_406 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
										}
									}
								}
							}
						}
					}
					else if (iLocal_405 == 1)
					{
						if (!__LIB_0__::func_75())
						{
							if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
							{
								if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_CAR", "MIN2_CAR_3", 7, 0, 0))
								{
									iLocal_405 = 2;
									iLocal_406 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
						}
					}
					else if (iLocal_405 < 5)
					{
						if (!__LIB_0__::func_75())
						{
							if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CAR2", 7, 0, 0, 0))
								{
									iLocal_523 = 0;
									iLocal_405++;
									iLocal_406 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_563 == 8)
		{
			if (iLocal_476 == 1)
			{
				if (iLocal_492 == 0)
				{
					if (__LIB_0__::func_692(iLocal_61))
					{
						if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 50f, 1) && __LIB_0__::func_687(Local_54.f_28[1], iLocal_61, 20f, 1))
						{
							__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE", 0, 1);
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CC2", 7, 0, 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								iLocal_528 = 1;
								iLocal_492 = 1;
							}
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("WEAPON_STUNGUN"), 0))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0], 30f, 1))
					{
						if (iLocal_424 < 5)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_425 + 7000)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_424++;
										iLocal_425 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_61);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_61);
				}
			}
			if (iLocal_464 == 1)
			{
				if (iLocal_491 == 0)
				{
					if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
					{
						if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 50f, 1) && __LIB_0__::func_687(Local_54.f_28[0], iLocal_60[iLocal_386], 20f, 1))
						{
							__LIB_0__::func_222(&uLocal_220, 5, iLocal_60[iLocal_386], "IMMIGRANTMALE2", 0, 1);
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CC3", 7, 0, 0, 0))
							{
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
								iLocal_527 = 1;
								iLocal_491 = 1;
							}
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN"), 0))
				{
					if (__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0], 30f, 1))
					{
						if (iLocal_424 < 5)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_425 + 7000)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_STUN", 7, 0, 0, 0))
									{
										iLocal_424++;
										iLocal_425 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_60[iLocal_386]);
					WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_60[iLocal_386]);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[1]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_61) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_60[1]))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (__LIB_0__::func_76(Local_54.f_35[0], PLAYER::PLAYER_PED_ID(), 1) < 30f)
							{
								if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
								{
									if (MISC::GET_GAME_TIMER() > iLocal_406 + 9000)
									{
										if (iLocal_405 == 0)
										{
											if (!__LIB_0__::func_75())
											{
												if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_CAR", "MIN2_CAR_1", 7, 0, 0))
												{
													iLocal_405 = 1;
													iLocal_406 = MISC::GET_GAME_TIMER();
												}
											}
										}
										else if (iLocal_405 == 1)
										{
											if (!__LIB_0__::func_75())
											{
												if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_CAR", "MIN2_CAR_2", 7, 0, 0))
												{
													iLocal_405 = 2;
													iLocal_406 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_501("MIN2_01", 0, 0))
		{
			if (iLocal_563 == 2 || iLocal_563 == 3)
			{
				iLocal_391 = MISC::GET_GAME_TIMER();
				if (iLocal_391 > iLocal_390 + 7000)
				{
					if (iLocal_392 < 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ5b", 7, 0, 0, 0))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), true);
									iLocal_392 = 1;
								}
							}
							else if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ5", 7, 0, 0, 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 1, true, true);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), true);
								iLocal_392 = 1;
							}
						}
					}
				}
			}
			if (iLocal_563 == 3)
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_488 == 0)
					{
						iLocal_488 = 1;
					}
					if (iLocal_392 < 2)
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ1", 5, 0, 0, 0))
								{
									iLocal_392 = 2;
								}
							}
						}
					}
					else if (!iLocal_520)
					{
						if ((((((__LIB_0__::func_695(Local_54.f_35[0]) && __LIB_0__::func_692(iLocal_60[0])) && !__LIB_0__::func_687(Local_54.f_35[0], iLocal_60[0], 50f, 1)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && !__LIB_0__::func_501("MIN2_48", 0, 0))
						{
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
							{
								iLocal_520 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_563 == 6)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
			{
				iLocal_391 = MISC::GET_GAME_TIMER();
				if (iLocal_391 > iLocal_390 + 100)
				{
					if (iLocal_392 < 3)
					{
						if (iLocal_481 == 0)
						{
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ6", 5, 1, 0, 0))
							{
								iLocal_392 = 3;
							}
						}
					}
				}
			}
		}
		if (iLocal_563 == 6)
		{
			if (iLocal_392 == 3)
			{
				if (iLocal_471 == 1)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								if (iLocal_481 == 0)
								{
									if (__LIB_0__::func_692(iLocal_60[0]))
									{
										if (__LIB_0__::func_692(Local_54.f_28[0]))
										{
											TASK::TASK_LOOK_AT_ENTITY(iLocal_60[0], Local_54.f_28[0], -1, 0, 2);
										}
									}
									if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_IMM1", 5, 0, 0, 0))
									{
										iLocal_392 = 4;
									}
								}
							}
						}
					}
				}
			}
			else if (iLocal_392 == 4)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
				{
					Var0 = { __LIB_13__::func_743() };
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_IMM1_7") && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_213) < 0.54f)
					{
						__LIB_0__::func_638();
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_213) >= 0.54f)
					{
						if (!iLocal_511)
						{
							__LIB_14__::func_782(&uLocal_220, "MIN2AU", "MIN2_IMM1", "MIN2_IMM1_9", 7, 0, 0);
							iLocal_511 = 1;
						}
					}
				}
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 1) < 70f)
				{
					__LIB_0__::func_638();
				}
			}
			else if (iLocal_392 == 5)
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 1) < 70f)
				{
					__LIB_0__::func_638();
				}
			}
		}
		if (iLocal_563 == 11)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
			{
				iLocal_391 = MISC::GET_GAME_TIMER();
				if (iLocal_391 > iLocal_390 + 7000)
				{
					if (iLocal_392 <= 5)
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ7", 5, 0, 0, 0))
						{
							iLocal_392 = 5;
						}
					}
				}
			}
		}
		if (iLocal_563 == 12)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_388 + 7000)
			{
				if (iLocal_392 < 6)
				{
					if (iLocal_471 == 1)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ2", 5, 0, 0, 0))
							{
								iLocal_392 = 6;
							}
						}
					}
				}
			}
		}
		if (iLocal_563 == 15)
		{
			if (iLocal_470 == 1)
			{
				iLocal_391 = MISC::GET_GAME_TIMER();
				if (iLocal_391 > iLocal_390 + 7000)
				{
					if (iLocal_392 < 7)
					{
						iLocal_392 = 7;
					}
				}
			}
		}
	}
	if (iLocal_563 == 3)
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_60[0], iLocal_55[0], false))
		{
			if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_60[0]) < 30f)
			{
				if (iLocal_435 == 0)
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60[0]))
					{
						__LIB_0__::func_709(iLocal_60[0], "MIN2_ACAA_01", "MANUEL", 0);
					}
					else
					{
						iLocal_435 = 1;
						iLocal_436 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
					}
				}
				else if (iLocal_435 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_436 + 4000)
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60[0]))
						{
							__LIB_0__::func_709(iLocal_60[0], "MIN2_ACAA_02", "MANUEL", 0);
						}
						else
						{
							iLocal_435 = 2;
							iLocal_436 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000));
						}
					}
				}
				else if (iLocal_435 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_436 + 4000)
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60[0]))
						{
							__LIB_0__::func_709(iLocal_60[0], "MIN2_ACAA_03", "MANUEL", 0);
						}
						else
						{
							iLocal_435 = 3;
						}
					}
				}
			}
		}
	}
}

int func_289()//Position - 0x2A647
{
	if ((((((((__LIB_0__::func_501("MIN2_COPS", 0, 0) || __LIB_0__::func_501("MIN2_47", 0, 0)) || __LIB_0__::func_501("MIN2_48", 0, 0)) || __LIB_0__::func_501("MIN2_31", 0, 0)) || __LIB_0__::func_501("MIN2_01", 0, 0)) || __LIB_0__::func_501("MIN2_49", 0, 0)) || __LIB_0__::func_501("MIN2_06", 0, 0)) || __LIB_0__::func_501("MIN2_08", 0, 0)) || __LIB_0__::func_501("MIN2_33", 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_290()//Position - 0x2A6E1
{
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (iLocal_501 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_401 + 5000)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_STA");
			iLocal_501 = 1;
		}
	}
	if (__LIB_0__::func_692(Local_54.f_28[0]))
	{
		if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			if (iLocal_475 == 1)
			{
				if (iLocal_476 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if ((!__LIB_0__::func_687(iLocal_61, Local_54.f_28[0], 10f, 1) && !__LIB_0__::func_687(iLocal_61, Local_54.f_28[1], 10f, 1)) && !__LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 10f, 1))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_61))
							{
								iLocal_423 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_61))
								{
									iLocal_504 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_61))
									{
										iLocal_505 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_61, 1000, 2000, 1, true, true, false);
									}
								}
								else if (iLocal_505 == 1)
								{
									if (iLocal_504 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_61))
									{
										PED::CREATE_NM_MESSAGE(true, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_61);
										iLocal_505 = 0;
										iLocal_504 = 1;
										if (__LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 40f, 1))
										{
											if (!__LIB_0__::func_75())
											{
												__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE", 0, 1);
												__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_423++;
								if (iLocal_423 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_61, 0, 0);
								}
							}
						}
						if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_61))
							{
								iLocal_423 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_61))
								{
									iLocal_504 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_61))
									{
										iLocal_505 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_61, 1000, 2000, 1, true, true, false);
									}
								}
								else if (iLocal_505 == 1)
								{
									if (iLocal_504 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_61))
									{
										PED::CREATE_NM_MESSAGE(true, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_61);
										iLocal_505 = 0;
										iLocal_504 = 1;
										if (__LIB_0__::func_687(iLocal_61, PLAYER::PLAYER_PED_ID(), 40f, 1))
										{
											if (!__LIB_0__::func_75())
											{
												__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE2", 0, 1);
												__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ2", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_423++;
								if (iLocal_423 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_61, 0, 0);
								}
							}
						}
					}
				}
			}
			if (iLocal_463 == 1)
			{
				if (iLocal_464 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if ((!__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_28[0], 10f, 1) && !__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_28[1], 10f, 1)) && !__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 10f, 1))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_60[iLocal_386]))
							{
								iLocal_422 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
								{
									iLocal_502 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_60[iLocal_386]))
									{
										iLocal_503 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_60[iLocal_386], 1000, 2000, 1, true, true, false);
									}
								}
								else if (iLocal_503 == 1)
								{
									if (iLocal_502 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_60[iLocal_386]))
									{
										PED::CREATE_NM_MESSAGE(true, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_60[iLocal_386]);
										iLocal_503 = 0;
										iLocal_502 = 1;
										if (__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 40f, 1))
										{
											if (!__LIB_0__::func_75())
											{
												__LIB_0__::func_222(&uLocal_220, 5, iLocal_60[iLocal_386], "IMMIGRANTMALE2", 0, 1);
												__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_422++;
								if (iLocal_422 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_60[iLocal_386], 0, 0);
								}
							}
						}
						if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_60[iLocal_386]))
							{
								iLocal_422 = 0;
								if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
								{
									iLocal_502 = 0;
									if (PED::CAN_PED_RAGDOLL(iLocal_60[iLocal_386]))
									{
										iLocal_503 = 1;
										PED::SET_PED_TO_RAGDOLL(iLocal_60[iLocal_386], 1000, 2000, 1, true, true, false);
									}
								}
								else if (iLocal_503 == 1)
								{
									if (iLocal_502 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_60[iLocal_386]))
									{
										PED::CREATE_NM_MESSAGE(true, 787);
										PED::GIVE_PED_NM_MESSAGE(iLocal_60[iLocal_386]);
										iLocal_503 = 0;
										iLocal_502 = 1;
										if (__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 40f, 1))
										{
											if (!__LIB_0__::func_75())
											{
												__LIB_0__::func_222(&uLocal_220, 5, iLocal_60[iLocal_386], "IMMIGRANTMALE2", 0, 1);
												__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ3", 7, 1, 0, 0);
											}
										}
									}
								}
							}
							else
							{
								iLocal_422++;
								if (iLocal_422 > 60)
								{
									ENTITY::SET_ENTITY_HEALTH(iLocal_60[iLocal_386], 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_463 == 1 && iLocal_475 == 1)
	{
		if (iLocal_499 == 0)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8f, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_STOP");
			__LIB_0__::func_498(1, 781);
			iLocal_499 = 1;
		}
	}
	if (__LIB_0__::func_323())
	{
		func_364();
	}
	if (iLocal_487 == 1)
	{
		if (iLocal_463 == 0 || iLocal_475 == 0)
		{
			if (!__LIB_0__::func_75())
			{
				if (MISC::GET_GAME_TIMER() > iLocal_404 + 1500)
				{
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_10", 6, 0, 0, 0))
					{
						iLocal_487 = 0;
					}
				}
			}
		}
	}
	if (iLocal_461 == 0)
	{
		if (((iLocal_463 == 1 && iLocal_475 == 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
		{
			func_363();
		}
	}
	else if (__LIB_0__::func_692(Local_54.f_28[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], true))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 1f, 1, 0);
			}
		}
	}
	if (iLocal_473 == 0)
	{
		if (iLocal_463 == 1 && iLocal_475 == 1)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				func_361();
			}
		}
	}
	else if (__LIB_0__::func_692(Local_54.f_28[1]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
			}
		}
	}
	if (iLocal_463 == 0 || iLocal_475 == 0)
	{
		func_329();
	}
	else if (iLocal_413 < 3)
	{
		__LIB_0__::func_345(&uLocal_34, 0, 0);
		iLocal_413 = 3;
	}
	func_326();
	func_278();
	func_325();
	if (iLocal_464 == 1)
	{
		if (iLocal_461 == 0)
		{
			func_321();
		}
		else if (!iLocal_522)
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_0__::func_501("MIN2_31", 0, 0))
				{
					if (((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false)) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 100f, 1))
					{
						if (__LIB_0__::func_121(iLocal_60[0]))
						{
							__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
						}
						if (__LIB_0__::func_121(iLocal_60[1]))
						{
							__LIB_0__::func_222(&uLocal_220, 5, iLocal_60[1], "IMMIGRANTMALE2", 0, 1);
						}
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHATB2", 7, 0, 0, 0))
						{
							iLocal_522 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_318();
	}
	if (iLocal_476 == 1)
	{
		if (iLocal_473 == 0)
		{
			func_315();
		}
		else if (!iLocal_522)
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_0__::func_501("MIN2_31", 0, 0))
				{
					if (((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false)) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 100f, 1))
					{
						if (__LIB_0__::func_121(iLocal_61))
						{
							__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE2", 0, 1);
						}
						if (__LIB_0__::func_121(iLocal_60[0]))
						{
							__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
						}
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHATB1", 7, 0, 0, 0))
						{
							iLocal_522 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_292();
	}
	if (__LIB_0__::func_692(iLocal_60[1]))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[1], false) && !PED::IS_PED_RAGDOLL(iLocal_60[1])) && ENTITY::GET_ENTITY_HEALTH(iLocal_60[1]) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_60[1], 150, 0);
		}
		if (iLocal_463 == 1)
		{
			if (iLocal_464 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
				{
					TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
				}
			}
		}
		if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
				{
					__LIB_14__::func_655(iLocal_64[iLocal_386], iLocal_60[iLocal_386], 300f, 0.8f, 0);
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (__LIB_0__::func_692(Local_54.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
									{
										if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 180f, 1))
										{
											if (iLocal_419 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_418 + 7000)
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_419++;
															iLocal_418 = MISC::GET_GAME_TIMER();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_692(iLocal_61))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, false) && !PED::IS_PED_RAGDOLL(iLocal_61)) && ENTITY::GET_ENTITY_HEALTH(iLocal_61) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_61, 150, 0);
		}
		if (iLocal_475 == 1)
		{
			if (iLocal_476 == 0)
			{
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
				}
			}
		}
		if (__LIB_0__::func_695(iLocal_56))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_69))
				{
					__LIB_14__::func_655(iLocal_69, iLocal_61, 300f, 0.8f, 0);
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (__LIB_0__::func_692(Local_54.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
									{
										if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 180f, 1))
										{
											if (iLocal_419 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_418 + 7000)
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CATCH2", 7, 0, 0, 0))
														{
															iLocal_419++;
															iLocal_418 = MISC::GET_GAME_TIMER();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_430 != 5 && MISC::GET_GAME_TIMER() > iLocal_401 + 20000)
	{
		iLocal_430 = 5;
	}
	if (!__LIB_0__::func_75())
	{
		if (iLocal_430 == 0)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHAT1", 7, 0, 0, 0))
				{
					iLocal_430 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
				}
			}
		}
		else if (iLocal_430 == 1)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 50f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 50f, 1))
				{
					if (__LIB_0__::func_121(iLocal_60[0]))
					{
						__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
					}
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHAT2", 7, 0, 0, 0))
					{
						iLocal_430 = 5;
					}
				}
			}
		}
		else if (iLocal_430 == 2)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 50f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 50f, 1))
				{
					if (__LIB_0__::func_121(iLocal_60[0]))
					{
						__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
					}
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHAT5", 7, 0, 0, 0))
					{
						iLocal_430 = 5;
					}
				}
			}
		}
		else if (iLocal_430 == 3)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 50f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 50f, 1))
				{
					if (__LIB_0__::func_121(iLocal_60[0]))
					{
						__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
					}
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHAT4", 7, 0, 0, 0))
					{
						iLocal_430 = 5;
					}
				}
			}
		}
		else if (iLocal_430 == 4)
		{
			if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 50f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 50f, 1))
				{
					if (__LIB_0__::func_121(iLocal_60[0]))
					{
						__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
					}
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CHAT3", 7, 0, 0, 0))
					{
						iLocal_430 = 5;
					}
				}
			}
		}
	}
	if (__LIB_0__::func_692(iLocal_60[1]))
	{
		if ((iLocal_527 && __LIB_0__::func_75()) && !PED::IS_PED_RAGDOLL(iLocal_60[1]))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
			iLocal_527 = 0;
		}
	}
	if (__LIB_0__::func_692(iLocal_61))
	{
		if ((iLocal_528 && __LIB_0__::func_75()) && !PED::IS_PED_RAGDOLL(iLocal_61))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
			iLocal_528 = 0;
		}
	}
	if (iLocal_461 == 1 && iLocal_473 == 1)
	{
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
		iLocal_527 = 0;
		iLocal_528 = 0;
		iLocal_427 = MISC::GET_GAME_TIMER();
		iLocal_427 = iLocal_427;
		iLocal_563 = 15;
	}
}

void func_292()//Position - 0x2B830
{
	if (__LIB_0__::func_692(iLocal_61))
	{
		fLocal_451 = __LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1);
		if (iLocal_475 == 0)
		{
			if (fLocal_451 < 9f)
			{
				if (iLocal_466 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_54.f_28[1], iLocal_61, 0, 0f, 0f, 0f, 10f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_61))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_61, 2);
					}
					iLocal_466 = 1;
				}
			}
			else if (iLocal_466 == 1)
			{
				TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
				iLocal_466 = 0;
			}
		}
		else if (fLocal_451 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
		}
		if (iLocal_475 == 0)
		{
			if (fLocal_451 > 220f)
			{
				if (iLocal_472 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (iLocal_386 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
								{
									if (iLocal_539 == 0)
									{
										iLocal_539 = 1;
									}
								}
							}
							else if (iLocal_463 == 0 && iLocal_475 == 0)
							{
								if (iLocal_551 == 0)
								{
									iLocal_551 = 1;
								}
							}
							else if (iLocal_539 == 0)
							{
								iLocal_539 = 1;
							}
						}
					}
					iLocal_472 = 1;
				}
				else if (fLocal_451 > 300f)
				{
					if (iLocal_386 == 0)
					{
						sLocal_559 = "MIN2_43";
					}
					else if (iLocal_463 == 0 && iLocal_475 == 0)
					{
						sLocal_559 = "MIN2_35";
					}
					else
					{
						sLocal_559 = "MIN2_23";
					}
					iLocal_563 = 16;
				}
			}
			else
			{
				iLocal_472 = 0;
			}
		}
		if (iLocal_475 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("WEAPON_STUNGUN"), 0))
			{
				func_313();
			}
		}
		if (iLocal_475 == 0)
		{
			if (__LIB_0__::func_692(iLocal_61))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false))
				{
					if (iLocal_483 == 0)
					{
						func_313();
					}
				}
			}
		}
		if (iLocal_475 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("WEAPON_STUNGUN"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, Local_54.f_28[1], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
					{
						iLocal_400++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, Local_54.f_28[0], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
					{
						iLocal_400++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_400++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_61);
			}
			if (iLocal_476 == 0)
			{
				iLocal_397 = MISC::GET_GAME_TIMER();
				if (iLocal_397 > iLocal_398 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_61, false, false, false, false, false, false, false, false);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_43__::func_519(iLocal_61, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_400 == 0)
						{
							iLocal_400++;
						}
						func_293();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), false))
					{
						fLocal_453 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_61, 1);
						if (fLocal_453 < 9f)
						{
							if (iLocal_400 > 0)
							{
								func_293();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
				{
					if (fLocal_451 < 7f)
					{
						if (iLocal_400 > 0)
						{
							func_293();
						}
					}
				}
			}
		}
	}
}

void func_293()//Position - 0x2BB35
{
	TASK::CLEAR_PED_TASKS(iLocal_61);
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_61, Local_54.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_476 = 1;
}

void func_313()//Position - 0x2C501
{
	RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("WEAPON_STUNGUN"), 0))
	{
		iLocal_415++;
		if (iLocal_415 > 2)
		{
			__LIB_0__::func_630(782);
		}
	}
	TASK::CLEAR_PED_TASKS(iLocal_61);
	if (PED::IS_PED_ON_ANY_BIKE(iLocal_61))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_61, 2);
		PED::KNOCK_PED_OFF_VEHICLE(iLocal_61);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_69))
	{
		HUD::SET_BLIP_SCALE(iLocal_69, 0.7f);
	}
	ENTITY::SET_ENTITY_PROOFS(iLocal_61, false, false, false, true, false, false, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 0, false);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_61, "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_28[1], -20f, 0f, 0f), 97, &uLocal_443, 1, 3f, 0f);
	iLocal_398 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_121(iLocal_56))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_56))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_56);
		}
	}
	__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_8", 6, 0, 0, 0);
	if (iLocal_463 == 0)
	{
		iLocal_404 = MISC::GET_GAME_TIMER();
		iLocal_487 = 1;
	}
	iLocal_475 = 1;
}

void func_315()//Position - 0x2C66B
{
	if (__LIB_0__::func_692(iLocal_61))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_61, Local_54.f_35[0]))
		{
			func_317();
			return;
		}
		if (iLocal_473 == 0)
		{
			fLocal_452 = __LIB_0__::func_76(Local_54.f_35[0], iLocal_61, 1);
			if (fLocal_452 < 40f || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 40f, 1))
			{
				if (iLocal_420 == 0)
				{
					if ((PED::IS_PED_RAGDOLL(iLocal_61) || TASK::IS_PED_GETTING_UP(iLocal_61)) || PED::IS_PED_BEING_STUNNED(iLocal_61, 0))
					{
						iLocal_438 = MISC::GET_GAME_TIMER();
					}
					if (__LIB_0__::func_687(iLocal_61, Local_54.f_35[0], 4.5f, 1) || MISC::GET_GAME_TIMER() > iLocal_438 + 2500)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_61, "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 3))
						{
							TASK::STOP_ANIM_TASK(iLocal_61, "rcmminute2", "arrest_walk", -2f);
							TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, false, false, false);
						}
						if (__LIB_0__::func_687(iLocal_61, Local_54.f_35[0], 3f, 1) && PED::IS_PED_IN_VEHICLE(iLocal_61, Local_54.f_35[0], true))
						{
							__LIB_0__::func_325();
						}
						if (iLocal_477 == 0)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_61, Local_54.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_477 = 1;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_61, Local_54.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else if (TASK::IS_PED_GETTING_UP(iLocal_61))
					{
						if (iLocal_557 == 0)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 3))
							{
								TASK::STOP_ANIM_TASK(iLocal_61, "rcmminute2", "arrest_walk", -8f);
							}
							iLocal_558 = MISC::GET_GAME_TIMER();
							iLocal_557 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_558 + 3100)
						{
							if (!PED::IS_PED_RAGDOLL(iLocal_61))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 3))
								{
									if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, false, false, false);
									}
								}
							}
						}
					}
					else
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_61) && !PED::IS_PED_BEING_STUNNED(iLocal_61, joaat("WEAPON_STUNGUN")))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 3))
							{
								if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, false, false, false);
								}
							}
						}
						iLocal_557 = 0;
					}
					if (PED::IS_PED_IN_VEHICLE(iLocal_61, Local_54.f_35[0], false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1.2f, 1, 0);
							}
						}
					}
				}
				else if (iLocal_420 == 1)
				{
					if (fLocal_452 < 20f || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 1))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, false, false, false);
							iLocal_420 = 2;
						}
					}
				}
				else if (iLocal_420 == 2)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, false, false, false);
						TASK::TASK_ENTER_VEHICLE(iLocal_61, Local_54.f_35[0], 60000, 2, 1.4f, 1, 0);
						iLocal_420 = 0;
					}
				}
			}
			else if (!PED::IS_PED_RAGDOLL(iLocal_61) && !PED::IS_PED_BEING_STUNNED(iLocal_61, joaat("WEAPON_STUNGUN")))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, "rcmminute2", "kneeling_arrest_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
					TASK::TASK_PLAY_ANIM(iLocal_61, "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, false, false, false);
					if (iLocal_420 != 1)
					{
						__LIB_0__::func_325();
					}
					iLocal_420 = 1;
				}
			}
		}
	}
}

void func_317()//Position - 0x2CAEA
{
	if (__LIB_0__::func_692(iLocal_61))
	{
		if (iLocal_461 == 0)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_61);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
				iLocal_212 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_212, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_212, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_212, 2f);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_76);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_78);
				iLocal_525 = 1;
			}
			iLocal_426 = 2;
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iLocal_61);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_76);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_77);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_78);
		}
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_61, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
	{
		TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
	}
	if (iLocal_386 == 1)
	{
		if (iLocal_463 == 1)
		{
			if (iLocal_461 == 0)
			{
				if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
				{
					if (__LIB_9__::func_694(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID()) > 70f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], true))
						{
							__LIB_0__::func_229("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_546 == 0)
							{
								__LIB_0__::func_229("MIN2_19", 7500, 0);
								iLocal_546 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
							{
								__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_69))
							{
								__LIB_0__::func_714(&iLocal_69);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_66))
							{
								iLocal_66 = __LIB_14__::func_866(Local_54.f_35[0], 1, 5);
							}
							iLocal_494 = 1;
						}
					}
				}
			}
		}
	}
	iLocal_473 = 1;
	TASK::TASK_CLEAR_LOOK_AT(Local_54.f_28[1]);
	iLocal_406 = MISC::GET_GAME_TIMER();
}

void func_318()//Position - 0x2CCFB
{
	if (__LIB_0__::func_692(iLocal_60[1]))
	{
		fLocal_450 = __LIB_0__::func_76(Local_54.f_28[0], iLocal_60[1], 1);
		if (iLocal_463 == 0)
		{
			if (fLocal_450 < 9f)
			{
				if (iLocal_465 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_54.f_28[0], iLocal_60[1], 0, 0f, 0f, 0f, 9f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_60[1]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_60[1], 2);
					}
					iLocal_465 = 1;
				}
			}
			else if (iLocal_465 == 1)
			{
				TASK::CLEAR_PED_TASKS(Local_54.f_28[0]);
				iLocal_465 = 0;
			}
		}
		else if (fLocal_450 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_54.f_28[0]);
		}
		if (iLocal_463 == 0)
		{
			if (fLocal_450 > 220f)
			{
				if (iLocal_467 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (iLocal_386 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
								{
									if (iLocal_539 == 0)
									{
										iLocal_539 = 1;
									}
								}
							}
							else if (iLocal_463 == 0 && iLocal_475 == 0)
							{
								if (iLocal_551 == 0)
								{
									iLocal_551 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
							{
								if (iLocal_539 == 0)
								{
									iLocal_539 = 1;
								}
							}
						}
					}
					iLocal_467 = 1;
				}
				else if (fLocal_450 > 300f)
				{
					if (iLocal_386 == 0)
					{
						sLocal_559 = "MIN2_43";
					}
					else if (iLocal_463 == 0 && iLocal_475 == 0)
					{
						sLocal_559 = "MIN2_35";
					}
					else
					{
						sLocal_559 = "MIN2_23";
					}
					iLocal_563 = 16;
				}
			}
			else
			{
				iLocal_467 = 0;
			}
		}
		if (iLocal_463 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[1], joaat("WEAPON_STUNGUN"), 0))
			{
				func_320();
			}
		}
		if (iLocal_463 == 0)
		{
			if (__LIB_0__::func_695(iLocal_55[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_60[1], iLocal_55[1], false))
				{
					if (iLocal_484 == 0)
					{
						func_320();
					}
				}
			}
		}
		if (iLocal_463 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], Local_54.f_28[1], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
					{
						iLocal_399++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], Local_54.f_28[0], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
					{
						iLocal_399++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_399++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_60[iLocal_386]);
			}
			if (iLocal_464 == 0)
			{
				iLocal_395 = MISC::GET_GAME_TIMER();
				if (iLocal_395 > iLocal_396 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_60[1], false, false, false, false, false, false, false, false);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_43__::func_519(iLocal_60[iLocal_386], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_399 == 0)
						{
							iLocal_399++;
						}
						func_319();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), false))
					{
						fLocal_453 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_60[1], 1);
						if (fLocal_453 < 9f)
						{
							if (iLocal_399 > 0)
							{
								func_319();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
				{
					if (fLocal_450 < 7f)
					{
						if (iLocal_399 > 0)
						{
							func_319();
						}
					}
				}
			}
		}
	}
}

void func_319()//Position - 0x2D051
{
	TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], 60000, 2, 1f, 1, 0);
		}
	}
	iLocal_464 = 1;
}

void func_320()//Position - 0x2D0C2
{
	RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
	if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN"), 0))
	{
		iLocal_415++;
		if (iLocal_415 > 2)
		{
			__LIB_0__::func_630(782);
		}
	}
	TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
	Local_442[iLocal_386 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_60[iLocal_386], true) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[iLocal_386], false))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_60[iLocal_386], 2);
		PED::KNOCK_PED_OFF_VEHICLE(iLocal_60[iLocal_386]);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
	{
		HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 0.7f);
	}
	ENTITY::SET_ENTITY_PROOFS(iLocal_60[iLocal_386], false, false, false, true, false, false, false, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 0, false);
	if (iLocal_386 == 0)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 0, false);
	}
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60[iLocal_386], "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_28[0], -20f, 0f, 0f), 129, &uLocal_443, 1, 3f, 0f);
	iLocal_396 = MISC::GET_GAME_TIMER();
	if (__LIB_0__::func_121(iLocal_55[iLocal_386]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55[iLocal_386]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386]);
		}
	}
	if (iLocal_386 == 0)
	{
		__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
		if (iLocal_415 != 0)
		{
			__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_7", 6, 0, 0, 0);
		}
		else
		{
			__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_RAM", 6, 0, 0, 0);
		}
		__LIB_0__::func_498(0, 780);
	}
	if (iLocal_386 == 1)
	{
		__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE", 0, 1);
		__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_9", 6, 0, 0, 0);
		if (iLocal_475 == 0)
		{
			iLocal_404 = MISC::GET_GAME_TIMER();
			iLocal_487 = 1;
		}
	}
	iLocal_463 = 1;
}

void func_321()//Position - 0x2D28E
{
	if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0]))
		{
			func_323();
			return;
		}
		if (iLocal_461 == 0)
		{
			fLocal_452 = __LIB_0__::func_76(Local_54.f_35[0], iLocal_60[iLocal_386], 1);
			if (fLocal_452 < 40f || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 40f, 1))
			{
				if (iLocal_421 == 0)
				{
					if ((PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]) || TASK::IS_PED_GETTING_UP(iLocal_60[iLocal_386])) || PED::IS_PED_BEING_STUNNED(iLocal_60[iLocal_386], 0))
					{
						iLocal_437 = MISC::GET_GAME_TIMER();
					}
					if (__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_35[0], 4.5f, 1) || MISC::GET_GAME_TIMER() > iLocal_437 + 2500)
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60[iLocal_386], "MOVE_M@BAIL_BOND_TAZERED", 0.25f);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 3))
						{
							TASK::STOP_ANIM_TASK(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", -2f);
							TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "handsup_exit", 2f, -4f, -1, 48, 0.3f, false, false, false);
						}
						if (__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_35[0], 3f, 1) && PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], true))
						{
							__LIB_0__::func_325();
						}
						if (iLocal_469 == 0)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], 60000, 2, 1f, 1, 0);
								}
							}
							iLocal_469 = 1;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], 60000, 2, 1f, 1, 0);
							}
						}
					}
					else
					{
						PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60[iLocal_386], "MOVE_M@BAIL_BOND_NOT_TAZERED", 0.25f);
						if (TASK::IS_PED_GETTING_UP(iLocal_60[iLocal_386]))
						{
							if (iLocal_555 == 0)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 3))
								{
									TASK::STOP_ANIM_TASK(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", -8f);
								}
								iLocal_556 = MISC::GET_GAME_TIMER();
								iLocal_555 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_556 + 3100)
							{
								if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 3))
									{
										if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, false, false, false);
										}
									}
								}
							}
						}
						else
						{
							if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]) && !PED::IS_PED_BEING_STUNNED(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN")))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 3))
								{
									if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
									{
										TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 1.4f, -8f, -1, 65585, 0f, false, false, false);
									}
								}
							}
							iLocal_555 = 0;
						}
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0]))
					{
						iLocal_217 = 1000;
					}
					if (PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], true))
					{
						iLocal_217++;
						if (iLocal_386 != 0 || iLocal_217 > 80)
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], true))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									if (iLocal_386 == 0)
									{
										if (__LIB_0__::func_687(Local_54.f_28[0], Local_54.f_35[0], 15f, 1))
										{
											TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 1f, 1, 0);
										}
										else
										{
											TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
										}
									}
									else
									{
										TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 1f, 1, 0);
									}
								}
							}
						}
						if ((iLocal_217 > 20 && iLocal_386 == 0) && !PED::IS_PED_INJURED(Local_54.f_28[1]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], true))
							{
								if (func_322())
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
									{
										if (__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 10f, 1))
										{
											TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1f, 1, 0);
										}
										else
										{
											TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
										}
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_54.f_35[0]) - 90f));
								}
							}
						}
					}
				}
				else if (iLocal_421 == 1)
				{
					if (fLocal_452 < 20f || __LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 20f, 1))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "kneeling_arrest_get_up", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "kneeling_arrest_get_up", 16f, -2f, -1, 0, 0f, false, false, false);
							iLocal_421 = 2;
						}
					}
				}
				else if (iLocal_421 == 2)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "kneeling_arrest_get_up", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "arrest_walk", 2f, -8f, -1, 65585, 0f, false, false, false);
						TASK::TASK_ENTER_VEHICLE(iLocal_60[iLocal_386], Local_54.f_35[0], 60000, 2, 1.2f, 1, 0);
						iLocal_421 = 0;
					}
				}
			}
			else if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]) && !PED::IS_PED_BEING_STUNNED(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN")))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60[iLocal_386], "rcmminute2", "kneeling_arrest_idle", 3))
				{
					TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
					TASK::TASK_PLAY_ANIM(iLocal_60[iLocal_386], "rcmminute2", "kneeling_arrest_idle", 2f, -16f, -1, 1, 0f, false, false, false);
					if (iLocal_421 != 1)
					{
						__LIB_0__::func_325();
					}
					iLocal_421 = 1;
				}
			}
		}
	}
}

int func_322()//Position - 0x2D9A1
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_210) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_210) > 0.35f)
	{
		iLocal_560 = 1;
	}
	if ((iLocal_563 >= 7 || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_214)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_215))
	{
		iLocal_560 = 1;
	}
	return iLocal_560;
}

void func_323()//Position - 0x2D9F2
{
	if (iLocal_386 < 2)
	{
		if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
		{
			if (iLocal_473 == 0)
			{
				Local_442[iLocal_386 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_60[iLocal_386], true) };
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
			}
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_60[iLocal_386], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_60[iLocal_386], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
		}
	}
	__LIB_0__::func_714(&iLocal_67);
	if (iLocal_386 == 0)
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[iLocal_386]);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_60[iLocal_386], false, false);
		iLocal_210 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_210, true);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_210, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[iLocal_386], iLocal_210, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_210, 2f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60[iLocal_386], true);
	}
	if (iLocal_386 == 1)
	{
		if (iLocal_473 == 0)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[iLocal_386]);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_60[iLocal_386], false, false);
				iLocal_212 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_212, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_212, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[iLocal_386], iLocal_212, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_212, 2f);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_71);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_72);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_74);
				iLocal_525 = 1;
			}
			iLocal_426 = 1;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60[iLocal_386], true);
	}
	if (iLocal_481 == 0)
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				if (iLocal_386 == 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 1f, 1, 0);
				}
			}
		}
	}
	if (iLocal_563 == 3 || iLocal_563 == 5)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
		{
			if (func_322())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					if (__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 10f, 1))
					{
						TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1f, 1, 0);
					}
					else
					{
						TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_54.f_35[0]) - 90f));
			}
		}
	}
	if (iLocal_386 == 0)
	{
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_463 = 0;
		iLocal_464 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_462 = 0;
		iLocal_468 = 0;
		iLocal_469 = 0;
		iLocal_471 = 0;
		iLocal_399 = 0;
		iLocal_474 = 0;
	}
	if (iLocal_386 == 0)
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_54.f_28[1]);
		TASK::TASK_CLEAR_LOOK_AT(Local_54.f_28[0]);
		iLocal_460 = 1;
	}
	if (iLocal_386 == 1)
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_54.f_28[0]);
		iLocal_461 = 1;
		if (iLocal_475 == 1)
		{
			if (iLocal_473 == 0)
			{
				if (__LIB_0__::func_692(iLocal_61))
				{
					if (__LIB_9__::func_694(iLocal_61, PLAYER::PLAYER_PED_ID()) > 70f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], true))
						{
							__LIB_0__::func_229("MIN2_31", 7500, 0);
						}
						else
						{
							if (iLocal_546 == 0)
							{
								__LIB_0__::func_229("MIN2_19", 7500, 0);
								iLocal_546 = 1;
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
							{
								__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_69))
							{
								__LIB_0__::func_714(&iLocal_69);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_66))
							{
								iLocal_66 = __LIB_14__::func_866(Local_54.f_35[0], 1, 5);
							}
							iLocal_494 = 1;
						}
						__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_12", 6, 1, 0, 0);
					}
				}
			}
		}
	}
	if (iLocal_386 == 2)
	{
		__LIB_0__::func_221(&uLocal_220, 5);
	}
	if (iLocal_386 == 0)
	{
		iLocal_386++;
	}
	iLocal_406 = MISC::GET_GAME_TIMER();
}

void func_325()//Position - 0x2DEE6
{
	if (__LIB_0__::func_692(iLocal_62[0]))
	{
		if (__LIB_9__::func_694(iLocal_62[0], PLAYER::PLAYER_PED_ID()) < 15f)
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_62[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	if (iLocal_402 == 0)
	{
		if (__LIB_0__::func_692(iLocal_62[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_79);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2lean", "exit", 1f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "intro_90_r", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "loop_90_r", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "rcmminute2", "outro_90_r", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_79);
			TASK::CLEAR_PED_TASKS(iLocal_62[0]);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[0], iLocal_79);
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CEM", 7, 0, 0, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 0);
				iLocal_402 = 1;
			}
		}
		else
		{
			iLocal_402 = 1;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_401 + 100)
	{
		if (iLocal_402 == 1)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			iLocal_402 = 2;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_401 + 200)
	{
		if (iLocal_402 == 2)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55[iLocal_386]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386], 101, "Min2DB1", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386], 1000f);
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 6f)
						{
							fLocal_456 = 0.82f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 6f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 8f)
						{
							fLocal_456 = 0.91f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 8f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 10f)
						{
							fLocal_456 = 1f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 10f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 12f)
						{
							fLocal_456 = 1.2f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 12f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 14f)
						{
							fLocal_456 = 1.3f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 14f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 16f)
						{
							fLocal_456 = 1.35f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 16f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 18f)
						{
							fLocal_456 = 1.4f;
						}
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 18f)
						{
							fLocal_456 = 1.5f;
						}
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_55[iLocal_386], fLocal_456);
					}
				}
				if (__LIB_0__::func_695(iLocal_56))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_56))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_56, 102, "Min2DB2", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_56, 1100f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_56, fLocal_456);
					}
				}
			}
			iLocal_402 = 5;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_401 + 3400)
	{
		if (iLocal_402 == 5)
		{
			if (__LIB_0__::func_692(iLocal_61))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_75);
				}
			}
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_60[iLocal_386], iLocal_71);
				}
			}
			iLocal_402 = 6;
		}
	}
	if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
	{
		if (__LIB_0__::func_692(iLocal_61))
		{
			if (iLocal_402 == 10)
			{
				iLocal_401 = (iLocal_401 - 10000);
				iLocal_402 = 11;
			}
		}
	}
}

void func_326()//Position - 0x2E29C
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(263.6694f, 2854.1458f, 43.939796f, 15f, joaat("prop_facgate_03_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 263.6694f, 2854.1458f, 43.939796f, true, 0.85f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(268.12695f, 2845.0544f, 44.089664f, 15f, joaat("prop_facgate_03_ld_l"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_ld_l"), 268.12695f, 2845.0544f, 44.089664f, true, -0.85f, false);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(346.19f, 2859.69f, 43.63f, 15f, joaat("prop_fnclink_06gate3"), false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_06gate3"), 346.19f, 2859.69f, 43.63f, true, 1.2f, false);
	}
}

void func_329()//Position - 0x2E458
{
	float fVar0;
	if (iLocal_386 == 0)
	{
		if (iLocal_463 == 0)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				__LIB_14__::func_615(&uLocal_34, iLocal_60[iLocal_386], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			__LIB_0__::func_345(&uLocal_34, 0, 0);
		}
	}
	else if (iLocal_386 == 1)
	{
		if (iLocal_413 == 0)
		{
			if (iLocal_475 == 0)
			{
				if (__LIB_0__::func_692(iLocal_61))
				{
					__LIB_14__::func_615(&uLocal_34, iLocal_61, 0, 0, 1, 1, 1);
				}
			}
			else
			{
				__LIB_0__::func_345(&uLocal_34, 0, 0);
				iLocal_414 = MISC::GET_GAME_TIMER();
				iLocal_413 = 1;
			}
		}
		else if (iLocal_413 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_414 + 5)
			{
				if (iLocal_463 == 0)
				{
					if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
					{
						__LIB_14__::func_615(&uLocal_34, iLocal_60[iLocal_386], 0, 0, 1, 1, 1);
					}
				}
				else
				{
					__LIB_0__::func_345(&uLocal_34, 0, 0);
					iLocal_413 = 2;
				}
			}
		}
	}
	else if (iLocal_413 < 3)
	{
		__LIB_0__::func_345(&uLocal_34, 0, 0);
		iLocal_413 = 3;
	}
	if (iLocal_386 == 0)
	{
		if (iLocal_474 == 1)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
						{
							HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 1f);
						}
						if (MISC::GET_GAME_TIMER() > iLocal_416 + 15000)
						{
							if (__LIB_0__::func_76(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 1) > 100f)
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_60[iLocal_386], 20f);
							}
							else
							{
								TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_60[iLocal_386], 25f);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_386 == 1)
	{
		if (iLocal_474 == 1)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false))
					{
						if (iLocal_498 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_60[iLocal_386], iLocal_55[iLocal_386], 24f, 786468);
							}
						}
						else if (iLocal_497 == 1)
						{
							if (__LIB_0__::func_695(iLocal_56) && __LIB_0__::func_687(iLocal_61, iLocal_60[iLocal_386], 20f, 1))
							{
								fVar0 = -1f;
							}
							else
							{
								fVar0 = 22f;
							}
							if (!iLocal_529)
							{
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_55[iLocal_386]) > 30)
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_60[iLocal_386], iLocal_55[iLocal_386], "Min2_Bike02", 786468, 32, 8, -1, fVar0, false, 2f);
									iLocal_529 = 1;
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55[iLocal_386]))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_60[iLocal_386], iLocal_55[iLocal_386], "Min2_Bike02", 786468, 32, 8, -1, fVar0, false, 2f);
							}
							else
							{
								func_330(fVar0);
							}
						}
						if (iLocal_479 == 0)
						{
							PED::SET_PED_CAN_RAGDOLL(iLocal_60[iLocal_386], true);
							if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
							{
								HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 1f);
							}
							iLocal_479 = 1;
						}
					}
				}
			}
			if (__LIB_0__::func_692(iLocal_61))
			{
				if (__LIB_0__::func_695(iLocal_56))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_61, iLocal_56, false))
					{
						if (iLocal_498 == 1)
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false) || !__LIB_0__::func_687(iLocal_61, iLocal_60[iLocal_386], 29f, 1))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1)
								{
									TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_61, iLocal_56, 24f, 786468);
									iLocal_496 = 0;
								}
							}
						}
						else
						{
							if (iLocal_497 == 0)
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_61, 350.94724f, 2857.2527f, 39.28188f, 379.0718f, 2857.876f, 50.55812f, 21.25f, false, true, 0))
								{
									if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
									{
										if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
										{
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_60[iLocal_386], iLocal_55[iLocal_386], "Min2_Bike02", 262144, 28, 0, -1, -1f, false, 2f);
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_61, iLocal_56, "Min2_Bike02", 262144, 27, 0, -1, -1f, false, 2f);
										}
									}
									iLocal_497 = 1;
								}
							}
							if ((((__LIB_0__::func_695(iLocal_55[iLocal_386]) && __LIB_0__::func_692(iLocal_60[iLocal_386])) && PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false)) && __LIB_0__::func_687(iLocal_61, iLocal_60[iLocal_386], 22f, 1)) && TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_55[iLocal_386]) > 29)
							{
								if (iLocal_496 == 0)
								{
									TASK::TASK_VEHICLE_ESCORT(iLocal_61, iLocal_56, iLocal_55[iLocal_386], -1, 40f, 262144, fLocal_385, 20, 20f);
									iLocal_496 = 1;
								}
							}
							else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_56))
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_61, iLocal_56, "Min2_Bike02", 262144, 0, 8, -1, -1f, false, 2f);
								iLocal_496 = 0;
							}
						}
						if (iLocal_480 == 0)
						{
							PED::SET_PED_CAN_RAGDOLL(iLocal_61, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_69))
							{
								HUD::SET_BLIP_SCALE(iLocal_69, 1f);
							}
							iLocal_480 = 1;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_61, 1300.4885f, 1099.8185f, 101.656265f, 1307.3876f, 1002.33234f, 113.962875f, 21.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_60[iLocal_386], 1300.4885f, 1099.8185f, 101.656265f, 1307.3876f, 1002.33234f, 113.962875f, 21.25f, false, true, 0))
			{
				iLocal_498 = 1;
			}
		}
	}
	if (iLocal_386 == 0)
	{
		if (iLocal_463 == 0)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_60[iLocal_386], true, 1);
			}
		}
	}
	else if (iLocal_386 == 1)
	{
		if (iLocal_463 == 0)
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_60[iLocal_386], true, 1);
			}
		}
		if (iLocal_475 == 0)
		{
			if (__LIB_0__::func_692(iLocal_61))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
			}
		}
	}
}

void func_330(float fParam0)//Position - 0x2EA0F
{
	if (fParam0 == -1f)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_55[iLocal_386]);
	}
	else if (ENTITY::GET_ENTITY_SPEED(iLocal_55[iLocal_386]) > fParam0)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_55[iLocal_386], fParam0);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(iLocal_55[iLocal_386]);
	}
}

void func_361()//Position - 0x2FB78
{
	float fVar0;
	if (iLocal_563 == 8 || iLocal_563 == 10)
	{
		if (iLocal_475 == 1)
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
			{
				if (iLocal_459 == 0)
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_54.f_35[0]) < 0.1f)
					{
						if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) < 40f)
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0) && !func_362())
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 2, false);
								TASK::TASK_LOOK_AT_ENTITY(Local_54.f_28[1], iLocal_61, -1, 0, 2);
								TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_61, 20000, 0.5f, 2f, 2f, 0);
								if (iLocal_440 != 1)
								{
									__LIB_0__::func_638();
								}
								iLocal_440 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_459 = 1;
			}
			if (iLocal_459 == 1)
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_440 == 1)
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_3", 9, 0, 0, 0))
						{
							iLocal_440 = 2;
						}
					}
				}
				if (iLocal_476 == 0)
				{
					if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) < 6f && __LIB_38__::func_289(Local_54.f_28[1], iLocal_61, 1126825984, 1, 250, 7))
					{
						if (!PED::IS_PED_BEING_STUNNED(iLocal_61, 0) || TASK::IS_PED_GETTING_UP(iLocal_61))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) != 0)
							{
								TASK::TASK_COMBAT_PED(Local_54.f_28[1], iLocal_61, 67108864, 16);
							}
						}
						else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_54.f_28[1]))
						{
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0) && !func_362())
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Local_54.f_28[1], 0, 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[1], iLocal_61, -1, false);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) == 1)
					{
						if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) > 9f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
							{
								TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_61, 20000, 0.5f, 2f, 2f, 0);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_61, 20000, 0.5f, 2f, 2f, 0);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ANY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ANY")) != 0)
					{
						TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_61, 20000, 0.5f, 2f, 2f, 0);
					}
				}
				else
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) == 1)
					{
						TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
					}
					if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) < 3f)
					{
						if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) < 1.4f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 0)
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_28[1], 0f, -4.5f, 0f), iLocal_61, 2f, false, 2.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[1], iLocal_61, -1, false);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 0)
					{
						if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1) < 9f)
						{
							fVar0 = 1f;
						}
						else
						{
							fVar0 = 2f;
						}
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_54.f_28[1], iLocal_61, iLocal_61, fVar0, false, 2f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					}
				}
			}
		}
	}
	else if (iLocal_463 == 1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_54.f_35[0]) < 0.1f)
			{
				if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) < 40f)
				{
					if (iLocal_458 == 1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_403 + 400)
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], -1, 0, 2);
							if ((TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0) && !func_362())
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 2, false);
								TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], -1, 0.5f, 2f, 2f, 0);
								if (iLocal_439 != 1)
								{
									__LIB_0__::func_638();
								}
								iLocal_439 = 1;
								iLocal_459 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_459 == 1)
		{
			if (iLocal_464 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (iLocal_439 == 1)
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_1", 9, 0, 0, 0))
						{
							iLocal_439 = 2;
						}
					}
				}
				if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) < 9f && __LIB_38__::func_289(Local_54.f_28[1], iLocal_60[iLocal_386], 1126825984, 1, 250, 7))
				{
					if (!PED::IS_PED_BEING_STUNNED(iLocal_60[iLocal_386], 0) || TASK::IS_PED_GETTING_UP(iLocal_60[iLocal_386]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) != 0)
						{
							TASK::TASK_COMBAT_PED(Local_54.f_28[1], iLocal_60[iLocal_386], 67108864, 16);
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_54.f_28[1]))
					{
						if (((TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0) && ENTITY::GET_ENTITY_SPEED(Local_54.f_35[0]) < 0.1f) && !func_362())
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_54.f_28[1], 1200, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], -1, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) == 1)
				{
					if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) > 11f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
						{
							TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], 60000, 0.5f, 2f, 2f, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], 60000, 0.5f, 2f, 2f, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ANY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ANY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], 20000, 0.5f, 2f, 2f, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
				}
				if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) < 3.5f || PED::IS_PED_IN_VEHICLE(iLocal_60[0], Local_54.f_35[0], true))
				{
					if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) < 1.4f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 0)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_28[1], 0f, -4.5f, 0f), iLocal_60[iLocal_386], 2f, false, 2.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], -1, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 0)
				{
					if (__LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1) < 9f)
					{
						fVar0 = 1f;
					}
					else
					{
						fVar0 = 2f;
					}
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_54.f_28[1], iLocal_60[iLocal_386], iLocal_60[iLocal_386], fVar0, false, 2.7f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

int func_362()//Position - 0x305B2
{
	if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0]) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_54.f_35[0], 14), 1.5f, 1.5f, 1.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_363()//Position - 0x305FE
{
	float fVar0;
	float fVar1;
	if (iLocal_563 == 8 || iLocal_563 == 10)
	{
		fVar0 = 2.2f;
		fVar1 = 3.5f;
	}
	else
	{
		fVar0 = 4.5f;
		fVar1 = 6f;
	}
	if (iLocal_463 == 1)
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0]))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_54.f_35[0]) < 0.1f)
			{
				if (__LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1) < 40f)
				{
					iLocal_403 = MISC::GET_GAME_TIMER();
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 1, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 2, false);
						TASK::TASK_LOOK_AT_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], -1, 0, 2);
						TASK::TASK_GO_TO_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], 20000, 0.5f, 2f, 2f, 0);
						if (iLocal_386 != 0)
						{
							if (iLocal_441 != 1)
							{
								__LIB_0__::func_638();
							}
							iLocal_441 = 1;
						}
						iLocal_458 = 1;
					}
				}
			}
		}
		if (iLocal_458 == 1)
		{
			if (!__LIB_0__::func_75())
			{
				if (iLocal_441 == 1)
				{
					if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_5", 9, 0, 0, 0))
					{
						iLocal_441 = 2;
					}
				}
			}
			if (iLocal_464 == 0)
			{
				if (__LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1) < 6f && __LIB_38__::func_289(Local_54.f_28[0], iLocal_60[iLocal_386], 1126825984, 1, 250, 7))
				{
					if (!PED::IS_PED_BEING_STUNNED(iLocal_60[iLocal_386], 0) || TASK::IS_PED_GETTING_UP(iLocal_60[iLocal_386]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_COMBAT")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_COMBAT")) != 0)
						{
							iLocal_403 = MISC::GET_GAME_TIMER();
							TASK::TASK_COMBAT_PED(Local_54.f_28[0], iLocal_60[iLocal_386], 67108864, 16);
						}
					}
					else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_54.f_28[0]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_54.f_28[0], 0, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
					{
						iLocal_403 = MISC::GET_GAME_TIMER();
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], -1, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_COMBAT")) == 1)
				{
					if (__LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1) > 9f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
						{
							TASK::TASK_GO_TO_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], 20000, 0.5f, 2f, 2f, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], 20000, 0.5f, 2f, 2f, 0);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ANY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ANY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], 20000, 0.5f, 2f, 2f, 0);
				}
			}
			else
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_COMBAT")) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_54.f_28[0]);
				}
				if (__LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1) < fVar1)
				{
					if (__LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1) < 1.6f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 0)
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_54.f_28[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_28[0], 0f, -4.5f, 0f), iLocal_60[iLocal_386], 2f, false, 2.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], -1, false);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY")) != 0)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Local_54.f_28[0], iLocal_60[iLocal_386], iLocal_60[iLocal_386], 1f, false, fVar0, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}
}

void func_364()//Position - 0x30B16
{
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_54.f_35[0]))
	{
		if ((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/)) || MISC::GET_GAME_TIMER() > iLocal_408 + 3500)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_54.f_35[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_54.f_35[0]);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
	}
}

void func_366()//Position - 0x30C35
{
	if (iLocal_501 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_401 + 5000)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_STA");
			iLocal_501 = 1;
		}
	}
	__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
	func_326();
	func_278();
	func_325();
	if (MISC::GET_GAME_TIMER() > iLocal_401 + 2000)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
			{
				iLocal_64[iLocal_386] = __LIB_14__::func_661(iLocal_60[iLocal_386], 1, 0, 5);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[iLocal_386], false))
				{
					HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 0.7f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 1f);
				}
				if (iLocal_549 == 0)
				{
					iLocal_549 = 1;
					if (iLocal_386 == 0)
					{
						__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_JOSEF", "MIN2_JOSEF_4", 5, 0, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8f, 1);
					}
					else if (iLocal_386 == 1)
					{
						__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE", 0, 1);
						__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
					}
					else if (iLocal_386 == 2)
					{
					}
				}
				if (iLocal_494 == 1)
				{
					if (iLocal_495 == 0)
					{
						__LIB_0__::func_229("MIN2_31", 7000, 0);
						iLocal_495 = 1;
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_69))
			{
				iLocal_69 = __LIB_14__::func_661(iLocal_61, 1, 0, 5);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, false))
				{
					HUD::SET_BLIP_SCALE(iLocal_69, 0.7f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_69, 1f);
				}
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
		{
			if (iLocal_494 == 0)
			{
				if (iLocal_482 == 0)
				{
					if (iLocal_550 == 0)
					{
						__LIB_0__::func_229("MIN2_39", 7000, 0);
						iLocal_550 = 1;
					}
					iLocal_482 = 1;
				}
			}
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_401 + 5000)
	{
		func_443();
		func_442();
		__LIB_14__::func_874(2, "Dirt bike chase", 1, 0, 0, 1);
		__LIB_0__::func_499(781, 0);
		iLocal_563 = 8;
	}
}

void func_442()//Position - 0x37CB8
{
	if (iLocal_386 == 0)
	{
		if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
		{
			if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], 161.1383f, 4417.4663f, 74.7775f, 10f, 0, joaat("blazer"), 786468, 30f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], 17.4915f, 4453.201f, 58.9788f, 20f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], -91.1074f, 4301.092f, 45.41f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], -223.0806f, 4012.2888f, 36.0401f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], -194.4012f, 3733.1128f, 42.2381f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], 89.5701f, 3582.797f, 38.791f, 25f, 0, joaat("blazer"), 786468, 20f, 2f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], 326.0252f, 3438.876f, 35.3116f, 25f, 0, joaat("blazer"), 786468, 25f, 2f);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_55[iLocal_386], 22f, 786468);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60[iLocal_386], iLocal_70);
			}
		}
	}
	if (iLocal_386 == 1)
	{
		if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
		{
			if (iLocal_484 == 0)
			{
				if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55[iLocal_386]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386], 101, "Min2DB1", true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_55[iLocal_386], "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0f);
					}
				}
			}
		}
		if (__LIB_0__::func_692(iLocal_61))
		{
			if (iLocal_483 == 0)
			{
				if (__LIB_0__::func_695(iLocal_56))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_56))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_56, 102, "Min2DB2", true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_56, "MINUTE_02_SCENE_SCRAMBLER_BIKE", 0f);
					}
				}
			}
		}
	}
	iLocal_388 = MISC::GET_GAME_TIMER();
	iLocal_474 = 1;
}

void func_443()//Position - 0x37F14
{
	if (iLocal_478 == 0)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_71);
		if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_55[iLocal_386], "Min2_Bike02", 786468, 28, 0, -1, -1f, false, 2f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], Local_449[44 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], Local_449[45 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_55[iLocal_386], Local_449[46 /*3*/], 24f, 0, joaat("sanchez"), 786468, 20f, 5f);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_55[iLocal_386], 24f, 786468);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_71);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		if (__LIB_0__::func_695(iLocal_56))
		{
			if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
			{
				TASK::TASK_VEHICLE_ESCORT(0, iLocal_56, iLocal_55[iLocal_386], -1, 40f, 262144, fLocal_385, 20, 20f);
			}
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
		iLocal_478 = 1;
	}
}

void func_445()//Position - 0x3809C
{
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 1) < 200f)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()), false);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 250f, 1))
		{
			if (iLocal_506 == 1)
			{
				func_452();
				func_451();
			}
			iLocal_506 = 0;
			iLocal_507 = 0;
			func_449();
			func_446();
			func_326();
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 6f, 6f, 2f, true, true, 0))
			{
			}
			if (iLocal_493 == 0)
			{
				func_10();
				__LIB_14__::func_874(1, "Driving to the cement factory", 0, 0, 0, 1);
				iLocal_493 = 1;
			}
			if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 240f, 1))
			{
				func_443();
			}
		}
		else if (iLocal_493 == 0)
		{
		}
		func_278();
		if (iLocal_462 == 1)
		{
			func_443();
			iLocal_401 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("MM2_START_FORA");
			iLocal_563 = 7;
		}
		if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 2, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
			{
				if (func_322())
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
					{
						if (__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 10f, 1))
						{
							TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1f, 1, 0);
						}
						else
						{
							TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_54.f_35[0]) - 90f));
				}
			}
		}
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 2, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
				{
					TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
				}
			}
		}
		if (!__LIB_0__::func_75())
		{
			if (!iLocal_520 && iLocal_511)
			{
				if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), 267.2497f, 2852.1667f, 42.6129f, 200f, 1))
				{
					if ((((__LIB_0__::func_695(Local_54.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && !__LIB_0__::func_501("MIN2_48", 0, 0))
					{
						if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JJ4", 5, 0, 0, 0))
						{
							iLocal_520 = 1;
						}
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
			{
				if (!iLocal_531)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
					{
						if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && __LIB_0__::func_687(Local_54.f_28[0], Local_54.f_35[0], 40f, 1))
							{
								if ((((!__LIB_0__::func_501("MIN2_29", 0, 0) && !__LIB_0__::func_501("MIN2_32", 0, 0)) && !__LIB_0__::func_501("MIN2_33", 0, 0)) && !__LIB_0__::func_501("MIN2_49", 0, 0)) && !__LIB_0__::func_501("MIN2_06", 0, 0))
								{
									__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_NOJOE", 5, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_NOJOE", 5, 1, 0, 0);
								}
								iLocal_531 = 1;
							}
							if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && __LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 40f, 1))
							{
								if ((((!__LIB_0__::func_501("MIN2_29", 0, 0) && !__LIB_0__::func_501("MIN2_32", 0, 0)) && !__LIB_0__::func_501("MIN2_33", 0, 0)) && !__LIB_0__::func_501("MIN2_49", 0, 0)) && !__LIB_0__::func_501("MIN2_06", 0, 0))
								{
									__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_NOJOSEF", 5, 0, 0, 0);
								}
								else
								{
									__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_NOJOSEF", 5, 1, 0, 0);
								}
								iLocal_531 = 1;
							}
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
				{
					if (iLocal_532 < 3 && MISC::GET_GAME_TIMER() > iLocal_533 + 6000)
					{
						if ((((!__LIB_0__::func_501("MIN2_29", 0, 0) && !__LIB_0__::func_501("MIN2_32", 0, 0)) && !__LIB_0__::func_501("MIN2_33", 0, 0)) && !__LIB_0__::func_501("MIN2_49", 0, 0)) && !__LIB_0__::func_501("MIN2_06", 0, 0))
						{
							if ((!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && !__LIB_0__::func_687(Local_54.f_28[0], Local_54.f_35[0], 50f, 1))
							{
								__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_GOBACK2", 5, 0, 0, 0);
								iLocal_532++;
								iLocal_533 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							}
							if ((!PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && !__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 50f, 1))
							{
								__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_GOBACK1", 5, 0, 0, 0);
								iLocal_532++;
								iLocal_533 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
							}
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_506 = 1;
		__LIB_0__::func_0(&(iLocal_60[1]));
		__LIB_0__::func_0(&iLocal_61);
		__LIB_0__::func_0(&(iLocal_62[0]));
		__LIB_8__::func_397(&(iLocal_55[1]));
		__LIB_8__::func_397(&iLocal_56);
		__LIB_8__::func_397(&iLocal_57);
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_66))
			{
				iLocal_66 = __LIB_14__::func_866(Local_54.f_35[0], 1, 5);
			}
		}
		else
		{
			if (iLocal_507 == 0)
			{
				__LIB_0__::func_229("MIN2_COPS", 7500, 0);
				iLocal_507 = 1;
			}
			__LIB_0__::func_714(&iLocal_66);
		}
	}
}

void func_446()//Position - 0x387BB
{
	if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60[iLocal_386]))
		{
			if (iLocal_386 == 0)
			{
				__LIB_17__::func_220(&(iLocal_60[iLocal_386]), 59, iLocal_55[iLocal_386], -1, 1);
				PED::SET_DRIVER_ABILITY(iLocal_60[iLocal_386], 1f);
				PED::SET_DRIVER_RACING_MODIFIER(iLocal_60[iLocal_386], 1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (iLocal_386 == 1)
			{
				iLocal_60[iLocal_386] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_55[iLocal_386], 26, joaat("S_M_M_Migrant_01"), -1, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_60[iLocal_386], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_60[iLocal_386], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_60[iLocal_386], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_60[iLocal_386], 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_60[iLocal_386], 8, 1, 0, 0);
				if (__LIB_0__::func_695(iLocal_56))
				{
					iLocal_61 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_56, 26, joaat("S_M_M_Migrant_01"), -1, true, true);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 6, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 8, 1, 0, 0);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_61, true, 0f);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 281, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 32, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 29, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 116, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 170, true);
					PED::SET_PED_MAX_TIME_IN_WATER(iLocal_61, 2f);
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_61))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_61, 0);
					}
					PED::SET_PED_DIES_WHEN_INJURED(iLocal_61, false);
					TASK::TASK_SET_DECISION_MAKER(iLocal_61, joaat("empty"));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
					ENTITY::SET_ENTITY_HEALTH(iLocal_61, 300, 0);
					PED::SET_PED_KEEP_TASK(iLocal_61, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 118, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_61, 208, true);
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_60[iLocal_386]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_60[iLocal_386], 0);
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Migrant_01"));
			}
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_60[iLocal_386], true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_60[iLocal_386], 20, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 281, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 32, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 29, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 116, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 170, true);
			PED::SET_PED_MAX_TIME_IN_WATER(iLocal_60[iLocal_386], 2f);
			TASK::TASK_SET_DECISION_MAKER(iLocal_60[iLocal_386], joaat("empty"));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60[iLocal_386], true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_60[iLocal_386], 300, 0);
			PED::SET_PED_KEEP_TASK(iLocal_60[iLocal_386], true);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_60[iLocal_386], 208, true);
		}
	}
	if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
	{
		if (iLocal_386 == 0)
		{
			if (__LIB_9__::func_694(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID()) < 500f)
			{
				iLocal_462 = 1;
			}
		}
		else
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 313.4914f, 2974.1865f, 17.270653f, 354.21912f, 2772.7173f, 84.74885f, 122.25f, false, true, 0) || __LIB_14__::func_858(iLocal_60[iLocal_386], 1, 0, 0, 0)) || __LIB_14__::func_858(iLocal_61, 1, 0, 0, 0))
			{
				iLocal_462 = 1;
				iLocal_402 = 10;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.0726f, 2861.2598f, 37.143517f, 274.73495f, 2847.247f, 66.00835f, 15.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.03195f, 2884.9836f, 37.307434f, 304.81293f, 2837.81f, 73.93606f, 57.5f, false, true, 0))
			{
				iLocal_462 = 1;
			}
		}
	}
}

void func_449()//Position - 0x38C14
{
	if (iLocal_386 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55[iLocal_386]))
		{
			iLocal_55[iLocal_386] = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 246.4836f, 4493.2305f, 66.0521f, 90.3329f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_55[iLocal_386], 2);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_55[iLocal_386], true);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_55[iLocal_386], 14f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
		}
	}
	if (iLocal_386 == 1)
	{
		if (__LIB_0__::func_695(iLocal_55[0]))
		{
			__LIB_0__::func_106(&(iLocal_55[0]));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55[iLocal_386]))
		{
			if (__LIB_0__::func_323() && __LIB_0__::func_344() == 2)
			{
				iLocal_55[iLocal_386] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, true, true, false);
			}
			else
			{
				iLocal_55[iLocal_386] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 303.0419f, 2892.954f, 42.5927f, 209.59f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_55[iLocal_386], 2);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_55[iLocal_386], true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_55[iLocal_386], true, true, false);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_55[iLocal_386], 14f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (__LIB_0__::func_323() && __LIB_0__::func_344() == 2)
			{
				iLocal_56 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, true, true, false);
			}
			else
			{
				iLocal_56 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 297.1f, 2895.498f, 42.5893f, 214.25f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_55[iLocal_386], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_56, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_56, true, true, false);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_56, 14f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			iLocal_57 = VEHICLE::CREATE_VEHICLE(joaat("speedo"), 290.8079f, 2859.2888f, 42.6421f, 313.9074f, true, true, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_57, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_57, 3, false, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_57, 1);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_57, 15f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("speedo"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_62[0]))
		{
			iLocal_62[0] = PED::CREATE_PED(26, joaat("S_M_M_Gaffer_01"), 289.681f, 2860.004f, 42.6421f, 66.4056f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_62[0], 4, 1, 0, 0);
			TASK::TASK_PLAY_ANIM(iLocal_62[0], "rcmminute2lean", "idle_c", 8f, -2f, -1, 1, 0f, false, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_62[0], 17, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Gaffer_01"));
		}
	}
}

void func_451()//Position - 0x38F2C
{
	while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("speedo")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Gaffer_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Migrant_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(269, "Min2Rolling")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "Min2DB1")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "Min2DB2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Min2_Bike02"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_452()//Position - 0x38FC0
{
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Bike02");
	VEHICLE::REQUEST_VEHICLE_RECORDING(269, "Min2Rolling");
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "Min2DB1");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "Min2DB2");
	STREAMING::REQUEST_MODEL(joaat("speedo"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Gaffer_01"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Migrant_01"));
}

void func_454()//Position - 0x39035
{
	func_361();
	func_321();
	func_455();
	func_278();
	if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
	{
		func_363();
	}
	if (iLocal_460 == 1)
	{
		iLocal_506 = 1;
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 1);
		iLocal_563 = 6;
	}
}

void func_455()//Position - 0x39093
{
	if (iLocal_386 == 0)
	{
		if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
		{
			if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386]) > 240f)
			{
				if (iLocal_539 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
					{
						iLocal_539 = 1;
					}
				}
				else if (fLocal_450 > 300f)
				{
					sLocal_559 = "MIN2_43";
					iLocal_563 = 16;
				}
			}
		}
	}
}

void func_456()//Position - 0x390FB
{
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (__LIB_0__::func_692(iLocal_60[0]))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[0], false) && !PED::IS_PED_RAGDOLL(iLocal_60[0])) && ENTITY::GET_ENTITY_HEALTH(iLocal_60[0]) > 150)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_60[0], 150, 0);
		}
		if ((iLocal_527 && __LIB_0__::func_75()) && !PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
		{
			AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
			iLocal_527 = 0;
		}
		func_459();
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[1]))
			{
				if (iLocal_463 == 1)
				{
					if (iLocal_464 == 0)
					{
						if (__LIB_0__::func_121(iLocal_55[0]))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_55[0]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_55[0], false, true, false);
							}
						}
						if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_60[iLocal_386]);
						}
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if ((!__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_28[0], 10f, 1) && !__LIB_0__::func_687(iLocal_60[iLocal_386], Local_54.f_28[1], 10f, 1)) && !__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 10f, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 100f, 1))
									{
										if (iLocal_554 == 0)
										{
											__LIB_0__::func_229("MIN2_48", 7500, 0);
											iLocal_554 = 1;
										}
									}
								}
								if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_60[iLocal_386]))
								{
									iLocal_422 = 0;
									if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
									{
										iLocal_502 = 0;
										if (PED::CAN_PED_RAGDOLL(iLocal_60[iLocal_386]))
										{
											iLocal_503 = 1;
											PED::SET_PED_TO_RAGDOLL(iLocal_60[iLocal_386], 1000, 2000, 1, true, true, false);
										}
									}
									else if (iLocal_503 == 1)
									{
										if (iLocal_502 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_60[iLocal_386]))
										{
											PED::CREATE_NM_MESSAGE(true, 787);
											PED::GIVE_PED_NM_MESSAGE(iLocal_60[iLocal_386]);
											iLocal_503 = 0;
											iLocal_502 = 1;
											if (__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 40f, 1))
											{
												if (!__LIB_0__::func_75())
												{
													__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
													__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_422++;
									if (iLocal_422 > 20)
									{
										ENTITY::SET_ENTITY_HEALTH(iLocal_60[iLocal_386], 0, 0);
									}
								}
							}
							if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_60[iLocal_386]))
								{
									iLocal_422 = 0;
									if (!PED::IS_PED_RAGDOLL(iLocal_60[iLocal_386]))
									{
										iLocal_502 = 0;
										if (PED::CAN_PED_RAGDOLL(iLocal_60[iLocal_386]))
										{
											iLocal_503 = 1;
											PED::SET_PED_TO_RAGDOLL(iLocal_60[iLocal_386], 1000, 2000, 1, true, true, false);
										}
									}
									else if (iLocal_503 == 1)
									{
										if (iLocal_502 == 0 && PED::IS_PED_RUNNING_RAGDOLL_TASK(iLocal_60[iLocal_386]))
										{
											PED::CREATE_NM_MESSAGE(true, 787);
											PED::GIVE_PED_NM_MESSAGE(iLocal_60[iLocal_386]);
											iLocal_503 = 0;
											iLocal_502 = 1;
											if (__LIB_0__::func_687(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), 40f, 1))
											{
												if (!__LIB_0__::func_75())
												{
													__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
													__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_INJ1", 7, 1, 0, 0);
												}
											}
										}
									}
								}
								else
								{
									iLocal_422++;
									if (iLocal_422 > 20)
									{
										ENTITY::SET_ENTITY_HEALTH(iLocal_60[iLocal_386], 0, 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
				{
					__LIB_14__::func_655(iLocal_64[iLocal_386], iLocal_60[iLocal_386], 300f, 0.8f, 0);
				}
			}
			if (iLocal_463 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_416 + 9000)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (__LIB_0__::func_692(Local_54.f_28[0]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
									{
										if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 180f, 1))
										{
											if (iLocal_419 < 3)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_418 + 6000)
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_CATCH1", 7, 0, 0, 0))
														{
															iLocal_419++;
															iLocal_418 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[iLocal_386], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60[iLocal_386], iLocal_70);
					}
				}
			}
			else if (!__LIB_0__::func_501("MIN2_48", 0, 0))
			{
				if (!iLocal_521)
				{
					if (!__LIB_0__::func_75())
					{
						if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 20f, 1))
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_GOBACK", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7f, 1);
									iLocal_521 = 1;
								}
							}
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (iLocal_428 < 4)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_429 + 6000)
						{
							if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 40f, 1))
								{
									if (iLocal_428 < 4)
									{
										if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_REMIND", 7, 0, 0, 0))
										{
											iLocal_428++;
											iLocal_429 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	func_363();
	func_361();
	func_329();
	func_457();
	func_278();
	func_455();
	if (MISC::GET_GAME_TIMER() > iLocal_416 + 20000)
	{
		if (__LIB_0__::func_692(iLocal_60[0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_60[0]) || PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[0], false))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
			}
		}
	}
	else
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iLocal_464 == 1)
	{
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
		iLocal_527 = 0;
		iLocal_419 = 0;
		iLocal_563 = 5;
	}
}

void func_457()//Position - 0x397DA
{
	struct<6> Var0;
	if (__LIB_0__::func_692(iLocal_60[iLocal_386]))
	{
		fLocal_450 = __LIB_0__::func_76(Local_54.f_28[0], iLocal_60[iLocal_386], 1);
		if (iLocal_563 == 8 || iLocal_563 == 10)
		{
			fLocal_451 = __LIB_0__::func_76(Local_54.f_28[1], iLocal_61, 1);
		}
		else
		{
			fLocal_451 = __LIB_0__::func_76(Local_54.f_28[1], iLocal_60[iLocal_386], 1);
		}
		if (iLocal_468 == 0)
		{
			if (iLocal_463 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_388 + 20000)
				{
					if (fLocal_450 < 50f)
					{
						if (iLocal_386 == 0)
						{
							Var0 = { __LIB_0__::func_486() };
							if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_JJ1") || MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_JJ4"))
							{
								__LIB_0__::func_638();
							}
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JOSEF_2", 6, 0, 0, 0))
								{
									iLocal_468 = 1;
								}
							}
						}
						if (iLocal_386 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								iLocal_468 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_463 == 0)
		{
			if (fLocal_450 > 200f)
			{
				if (iLocal_467 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (iLocal_386 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
								{
									if (iLocal_539 == 0)
									{
										iLocal_539 = 1;
									}
								}
							}
							else if (iLocal_463 == 0 && iLocal_475 == 0)
							{
								if (iLocal_551 == 0)
								{
									iLocal_551 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_416 + 12000)
							{
								if (iLocal_539 == 0)
								{
									iLocal_539 = 1;
								}
							}
						}
					}
					iLocal_467 = 1;
				}
				else if (fLocal_450 > 300f)
				{
					if (iLocal_386 == 0)
					{
						sLocal_559 = "MIN2_43";
					}
					else if (iLocal_463 == 0 && iLocal_475 == 0)
					{
						sLocal_559 = "MIN2_35";
					}
					else
					{
						sLocal_559 = "MIN2_23";
					}
					iLocal_563 = 16;
				}
			}
			else
			{
				iLocal_467 = 0;
			}
		}
		if (iLocal_463 == 0)
		{
			if (fLocal_450 < 9f && PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[iLocal_386], false))
			{
				if (iLocal_465 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_54.f_28[0], iLocal_60[iLocal_386], 0, 0f, 0f, 0f, 10f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					if (PED::IS_PED_ON_ANY_BIKE(iLocal_60[iLocal_386]))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_60[iLocal_386], 2);
					}
					iLocal_465 = 1;
				}
			}
			else if ((iLocal_465 == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_COMBAT")) == 1) || PED::IS_PED_IN_COMBAT(Local_54.f_28[0], iLocal_60[iLocal_386]))
			{
				TASK::CLEAR_PED_TASKS(Local_54.f_28[0]);
				iLocal_465 = 0;
			}
		}
		else if (fLocal_450 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_54.f_28[0]);
		}
		if (iLocal_563 == 8 || iLocal_563 == 10)
		{
		}
		else if (iLocal_463 == 0)
		{
			if (fLocal_451 < 9f && PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[iLocal_386], false))
			{
				if (iLocal_466 == 0)
				{
					TASK::TASK_DRIVE_BY(Local_54.f_28[1], iLocal_60[iLocal_386], 0, 0f, 0f, 0f, 10f, 100, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					iLocal_466 = 1;
				}
			}
			else if ((iLocal_466 == 1 || TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_COMBAT")) == 1) || PED::IS_PED_IN_COMBAT(Local_54.f_28[1], iLocal_60[iLocal_386]))
			{
				TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
				iLocal_466 = 0;
			}
		}
		else if (fLocal_451 >= 40f)
		{
			TASK::CLEAR_PED_TASKS(Local_54.f_28[1]);
		}
		if (iLocal_463 == 0)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN"), 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_55[iLocal_386], Local_54.f_35[0], true))
			{
				func_320();
			}
		}
		if (iLocal_563 == 8 || iLocal_563 == 10)
		{
			if (iLocal_475 == 0)
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("WEAPON_STUNGUN"), 0))
				{
					func_313();
				}
			}
		}
		if (iLocal_463 == 0)
		{
			if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_416 + 15000)
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_60[iLocal_386], iLocal_55[iLocal_386], false))
					{
						if (iLocal_484 == 0)
						{
							func_320();
						}
					}
				}
			}
		}
		if (iLocal_463 == 1)
		{
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60[iLocal_386], joaat("WEAPON_STUNGUN"), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], Local_54.f_28[1], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
					{
						iLocal_399++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], Local_54.f_28[0], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
					{
						iLocal_399++;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_399++;
					}
				}
				WEAPON::CLEAR_PED_LAST_WEAPON_DAMAGE(iLocal_60[iLocal_386]);
			}
			if (iLocal_464 == 0)
			{
				iLocal_395 = MISC::GET_GAME_TIMER();
				if (iLocal_395 > iLocal_396 + 4000)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_60[iLocal_386], false, false, false, false, false, false, false, false);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_43__::func_519(iLocal_60[iLocal_386], 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						if (iLocal_399 == 0)
						{
							iLocal_399++;
						}
						func_319();
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60[iLocal_386], PLAYER::PLAYER_PED_ID(), false))
					{
						fLocal_453 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_60[iLocal_386], 1);
						if (fLocal_453 < 9f)
						{
							if (iLocal_399 > 0)
							{
								func_319();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[0], false))
				{
					if (fLocal_450 < 7f)
					{
						if (iLocal_399 > 0)
						{
							func_319();
						}
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
				{
					if (fLocal_451 < 7f)
					{
						if (iLocal_399 > 0)
						{
							func_319();
						}
					}
				}
			}
		}
		if (iLocal_563 == 8 || iLocal_563 == 10)
		{
			if (iLocal_475 == 1)
			{
				if (iLocal_476 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_388 + 4000)
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_61, false, false, false, false, false, false, false, false);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), false))
						{
							fLocal_453 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_61, 1);
							if (fLocal_453 < 9f)
							{
								func_293();
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_54.f_28[1], false))
					{
						if (fLocal_451 < 7f)
						{
							func_293();
						}
					}
				}
			}
		}
	}
}

void func_459()//Position - 0x39E50
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_02_SCENE"))
	{
		if (__LIB_0__::func_121(iLocal_55[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_55[0], "MINUTE_02_SCENE_QUAD_BIKE", 0f);
		}
		AUDIO::START_AUDIO_SCENE("MINUTE_02_SCENE");
	}
}

void func_460()//Position - 0x39E8A
{
	func_449();
	func_446();
	func_278();
	if (iLocal_462 == 1)
	{
		func_442();
		__LIB_0__::func_499(780, 0);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 0);
		iLocal_563 = 3;
	}
}

void func_461()//Position - 0x39EBC
{
	func_465();
	func_463();
	func_462();
	if (iLocal_548 == 0)
	{
		__LIB_0__::func_229("MIN2_01", 7000, 0);
		iLocal_548 = 1;
	}
	iLocal_416 = MISC::GET_GAME_TIMER();
	iLocal_563 = 2;
}

void func_462()//Position - 0x39EF2
{
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_54.f_35[0], 0.5f, 1000, false, false, false, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_28[0]))
		{
			__LIB_17__::func_220(&(Local_54.f_28[0]), 56, Local_54.f_35[0], 0, 1);
		}
		else if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 0);
			}
		}
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54.f_28[0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 25, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[0], 23, true);
			PED::SET_PED_COMBAT_RANGE(Local_54.f_28[0], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_54.f_28[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_54.f_28[0], joaat("WEAPON_STUNGUN"), -1, true, true);
			PED::SET_PED_ACCURACY(Local_54.f_28[0], 100);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[0], 32, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[0], 29, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[0], 116, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[0], 170, true);
			TASK::TASK_SET_DECISION_MAKER(Local_54.f_28[0], joaat("empty"));
			PED::SET_PED_CAN_BE_TARGETTED(Local_54.f_28[0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54.f_28[0], true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_54.f_28[0], true);
			PED::SET_PED_LEG_IK_MODE(Local_54.f_28[0], 2);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_28[1]))
		{
			__LIB_17__::func_220(&(Local_54.f_28[1]), 57, Local_54.f_35[0], 2, 1);
		}
		else if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 2);
			}
		}
		if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54.f_28[1], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			WEAPON::GIVE_WEAPON_TO_PED(Local_54.f_28[1], joaat("WEAPON_STUNGUN"), -1, true, true);
			PED::SET_PED_ACCURACY(Local_54.f_28[1], 100);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 2, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 25, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_54.f_28[1], 23, true);
			PED::SET_PED_COMBAT_RANGE(Local_54.f_28[1], 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_54.f_28[1], 0);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[1], 32, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[1], 29, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[1], 116, false);
			PED::SET_PED_CONFIG_FLAG(Local_54.f_28[1], 170, true);
			TASK::TASK_SET_DECISION_MAKER(Local_54.f_28[1], joaat("empty"));
			PED::SET_PED_CAN_BE_TARGETTED(Local_54.f_28[1], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54.f_28[1], true);
			PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_54.f_28[1], true);
			TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_54.f_28[1], Local_54.f_35[0], false);
			PED::SET_PED_LEG_IK_MODE(Local_54.f_28[1], 2);
		}
	}
	__LIB_0__::func_222(&uLocal_220, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	__LIB_0__::func_222(&uLocal_220, 6, Local_54.f_28[1], "JOSEF", 0, 1);
	__LIB_0__::func_222(&uLocal_220, 7, Local_54.f_28[0], "JOE", 0, 1);
}

void func_463()//Position - 0x3A25C
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
	{
		Local_54.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, true, true, false);
	}
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_14__::func_867(Local_54.f_35[0], 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), true);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_54.f_35[0], 5, false);
			VEHICLE::ROLL_DOWN_WINDOWS(Local_54.f_35[0]);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_54.f_35[0], 14f);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54.f_35[0], true);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], -1);
			}
			VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Local_54.f_35[0]);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pranger"));
}

void func_465()//Position - 0x3A352
{
	while ((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("pranger")) || !STREAMING::HAS_MODEL_LOADED(joaat("blazer"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_passport_01"))) || !__LIB_37__::func_195(59)) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_NOT_TAZERED")) || !STREAMING::HAS_CLIP_SET_LOADED("MOVE_M@BAIL_BOND_TAZERED")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute2")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmminute2lean")) || !STREAMING::HAS_ANIM_DICT_LOADED("missminuteman_2ig_1")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
}

void func_467()//Position - 0x3A42C
{
	int iVar0;
	if (__LIB_0__::func_323() == 1 && iLocal_486 == 0)
	{
		if (__LIB_12__::func_754(&(Local_54.f_28[0]), 56, 38.2818f, 4537.5703f, 95.4783f, 252.9034f, 1) && __LIB_12__::func_754(&(Local_54.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
		{
			PED::SET_PED_PROP_INDEX(Local_54.f_28[0], 1, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_54.f_28[1], 0, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_54.f_28[1], 1, 0, 0, false);
			iVar0 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				iVar0++;
			}
			if (iVar0 == 0)
			{
				func_536();
			}
			else if (iVar0 == 1)
			{
				func_535();
			}
			else if (iVar0 == 2)
			{
				func_532();
			}
			else if (iVar0 > 2)
			{
				func_524();
			}
		}
	}
	else
	{
		func_468();
	}
}

void func_468()//Position - 0x3A50C
{
	int iVar0;
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Joe", 1, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Josef", 1, 0, 0, 0);
	}
	switch (iLocal_562)
	{
		case 0:
			if (MISC::IS_PC_VERSION() && !iLocal_530)
			{
				if (__LIB_0__::func_963(1, 0, 1, 0))
				{
					iLocal_387 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_530 = 1;
				}
			}
			if (iLocal_387 < MISC::GET_GAME_TIMER())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
				{
					Local_54.f_35[0] = VEHICLE::CREATE_VEHICLE(joaat("pranger"), 20.8f, 4532.65f, 104.66f, 284.7f, true, true, false);
				}
				if (__LIB_12__::func_754(&(Local_54.f_28[0]), 56, 38.2818f, 4537.5703f, 95.4783f, 252.9034f, 1) && __LIB_12__::func_754(&(Local_54.f_28[1]), 57, 33.843f, 4537.395f, 95.9413f, 309.8384f, 1))
				{
					PED::SET_PED_PROP_INDEX(Local_54.f_28[0], 1, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_54.f_28[1], 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_54.f_28[1], 1, 0, 0, false);
					iLocal_562 = 1;
				}
			}
			break;
		case 1:
			__LIB_17__::func_417("mmb_2_rcm", 0);
			if (__LIB_14__::func_740(1, 1093140480, 0))
			{
				if (__LIB_0__::func_695(Local_54.f_35[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54.f_35[0], "MMB_Parked_car", 0, joaat("pranger"), 0);
				}
				if (__LIB_0__::func_692(Local_54.f_28[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54.f_28[1], "Josef", 0, joaat("IG_Josef"), 0);
				}
				if (__LIB_0__::func_692(Local_54.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54.f_28[0], "Joe", 0, joaat("IG_JoeMinuteMan"), 0);
				}
				iLocal_515 = 0;
				iLocal_516 = 0;
				iLocal_517 = 0;
				iLocal_518 = 0;
				iLocal_519 = 0;
				RECORDING::REPLAY_START_EVENT(1);
				__LIB_14__::func_841();
				CUTSCENE::START_CUTSCENE(0);
				CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(joaat("pranger"));
				SYSTEM::WAIT(0);
				__LIB_14__::func_592(14.701344f, 4530.018f, 102.56246f, 27.267115f, 4533.0923f, 107.86404f, 11.25f, -0.3602f, 4523.248f, 107.0955f, 256.1712f, 1, 1, 1, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE());
				}
				if (((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
				{
					__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, 2);
				}
				MISC::CLEAR_AREA(18f, 4527f, 105f, 150f, true, false, false, false);
				func_477(18f, 4527f, 105f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_562 = 2;
			}
			break;
		case 2:
			if (((iLocal_515 && iLocal_516) && iLocal_517) && iLocal_519)
			{
				iLocal_562 = 3;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				iLocal_519 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (__LIB_0__::func_695(Local_54.f_35[0]))
				{
					if (__LIB_0__::func_692(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], -1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						iLocal_515 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Josef", joaat("IG_Josef")))
			{
				if (__LIB_0__::func_695(Local_54.f_35[0]))
				{
					if (__LIB_0__::func_692(Local_54.f_28[1]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 2);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54.f_28[1], false, false);
						iLocal_516 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Joe", joaat("IG_JoeMinuteMan")))
			{
				if (__LIB_0__::func_695(Local_54.f_35[0]))
				{
					if (__LIB_0__::func_692(Local_54.f_28[0]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54.f_28[0], false, false);
						iLocal_517 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MMB_Parked_car", joaat("pranger")))
			{
				iLocal_518 = 1;
			}
			iLocal_518 = iLocal_518;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_54.f_35[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Parked_car", 0)))
				{
					Local_54.f_35[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MMB_Parked_car", 0));
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_695(Local_54.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_54.f_35[0], 0, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_54.f_35[0], 3, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_54.f_35[0], 1, true);
			}
			if (iLocal_548 == 0)
			{
				__LIB_0__::func_229("MIN2_01", 7000, 0);
				iLocal_548 = 1;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_38__::func_300(1, 1, 1, 1);
			__LIB_14__::func_800(&Local_54, 0, 1);
			if (MISC::IS_PC_VERSION())
			{
				__LIB_0__::func_963(0, 0, 1, 0);
			}
			iLocal_563 = 1;
			break;
	}
}

void func_477(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x3ACCE
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_17__::func_114(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_167(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 1) || func_167(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_167(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_53(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_46 = 0;
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_46 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

void func_524()//Position - 0x4159C
{
	__LIB_0__::func_427(349.8519f, 2662.7688f, 43.6822f, 137.3727f, 1, 0);
	__LIB_42__::func_489(1, 1, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_STOP");
	iLocal_486 = 1;
	func_4();
	func_564();
	func_465();
	func_463();
	func_462();
	func_529();
	func_449();
	func_446();
	func_528();
	func_452();
	func_451();
	func_449();
	func_446();
	__LIB_0__::func_433(0, -1, 1);
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 0);
				}
				PED::SET_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 1);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60[1]))
		{
			iLocal_60[1] = PED::CREATE_PED(26, joaat("S_M_M_Migrant_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], 0f, 0f, 10f), 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_60[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_60[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_60[1], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_60[1], 6, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_60[1], 8, 1, 0, 0);
		}
		if (__LIB_0__::func_692(iLocal_60[1]))
		{
			iLocal_212 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_212, true);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_212, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[1], iLocal_212, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_212, 0.99f);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_60[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_60[1], PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			iLocal_426 = 1;
		}
		if (__LIB_0__::func_692(iLocal_61))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_61, Local_54.f_35[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_61, Local_54.f_35[0], 2);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_61, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	__LIB_0__::func_714(&(uLocal_65[0]));
	__LIB_0__::func_714(&(uLocal_65[1]));
	ENTITY::SET_ENTITY_COORDS(Local_54.f_35[0], 696.1606f, 2704.9006f, 39.4572f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(Local_54.f_35[0], 92.8104f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_14__::func_659(PLAYER::PLAYER_PED_ID(), 698.7277f, 2708f, 39.3397f, 91.2899f, 0, 1);
	func_248();
	iLocal_411 = (MISC::GET_GAME_TIMER() - 17000);
	iLocal_563 = 17;
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 1, true, true);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_0__::func_84(800, 0);
}

void func_528()//Position - 0x419A2
{
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 1);
				}
			}
		}
	}
	func_323();
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_210))
	{
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_210, 0.9f);
	}
	iLocal_386 = 1;
	ENTITY::SET_ENTITY_COORDS(Local_54.f_35[0], 227.15f, 2950.6118f, 41.8969f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(Local_54.f_35[0], 186.9743f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iLocal_563 = 6;
	func_452();
	func_451();
	iLocal_481 = 1;
}

void func_529()//Position - 0x41AB7
{
	__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		if (__LIB_0__::func_692(Local_54.f_28[0]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[1]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
				{
					TASK::TASK_WARP_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 1);
				}
			}
		}
	}
	ENTITY::SET_ENTITY_COORDS(Local_54.f_35[0], 132.1798f, 4453.142f, 79.8101f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(Local_54.f_35[0], 227.5366f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_532()//Position - 0x41C9D
{
	__LIB_0__::func_427(277.413f, 2856.9407f, 42.6421f, 300.9114f, 1, 0);
	__LIB_14__::func_806(0, 0);
	func_564();
	func_465();
	func_463();
	func_462();
	func_529();
	func_449();
	func_446();
	func_528();
	func_452();
	func_451();
	func_449();
	func_446();
	iLocal_481 = 0;
	__LIB_0__::func_433(Local_54.f_35[0], -1, 1);
	if (__LIB_0__::func_695(iLocal_55[iLocal_386]))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_55[iLocal_386]))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386], 101, "Min2DB1", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_55[iLocal_386], 400f);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_55[iLocal_386], 1.1f);
		}
	}
	if (__LIB_0__::func_695(iLocal_56))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_56))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_56, 102, "Min2DB2", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_56, 500f);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_56, 1.1f);
		}
	}
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_54.f_35[0], 277.413f, 2856.9407f, 42.6421f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_54.f_35[0], 300.9114f);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_54.f_35[0], 269, "Min2Rolling", true);
		VEHICLE::SET_PLAYBACK_SPEED(Local_54.f_35[0], 1f);
		iLocal_408 = MISC::GET_GAME_TIMER();
	}
	iLocal_563 = 6;
	__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 1, true, true);
	}
	SYSTEM::WAIT(800);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_0__::func_84(800, 0);
		}
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_RESTART1");
	iLocal_500 = 1;
	__LIB_42__::func_488(1, 1, 1);
}

void func_535()//Position - 0x41EDB
{
	__LIB_0__::func_427(13.7719f, 3617.9197f, 39.2074f, 242.9842f, 1, 0);
	__LIB_14__::func_806(0, 0);
	func_564();
	func_465();
	func_463();
	func_462();
	func_529();
	func_449();
	func_446();
	func_528();
	func_452();
	func_451();
	__LIB_0__::func_433(Local_54.f_35[0], -1, 1);
	iLocal_481 = 0;
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_54.f_35[0], 13.7719f, 3617.9197f, 39.2074f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_54.f_35[0], 242.9842f);
	}
	iLocal_563 = 6;
	__LIB_0__::func_222(&uLocal_220, 3, iLocal_60[0], "MANUEL", 0, 1);
	iLocal_392 = 2;
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), 1, true, true);
	}
	SYSTEM::WAIT(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_0__::func_84(800, 0);
		}
	}
	__LIB_42__::func_488(1, 1, 1);
}

void func_536()//Position - 0x41FF3
{
	__LIB_0__::func_427(20.8f, 4532.65f, 104.66f, 284.7f, 1, 0);
	__LIB_14__::func_806(0, 0);
	func_564();
	func_465();
	func_463();
	func_462();
	iLocal_563 = 2;
	__LIB_0__::func_433(Local_54.f_35[0], -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			__LIB_0__::func_84(800, 0);
		}
	}
	if (iLocal_548 == 0)
	{
		__LIB_0__::func_229("MIN2_01", 7000, 0);
		iLocal_548 = 1;
	}
	iLocal_416 = MISC::GET_GAME_TIMER();
	__LIB_42__::func_488(1, 1, 1);
}

void func_538()//Position - 0x4211F
{
	if (__LIB_0__::func_692(iLocal_60[0]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[0], false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
			{
				PED::SET_PED_RESET_FLAG(iLocal_60[0], 129, true);
			}
		}
	}
	if (__LIB_0__::func_692(iLocal_60[1]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[1], false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
			{
				PED::SET_PED_RESET_FLAG(iLocal_60[1], 129, true);
			}
		}
	}
	if (__LIB_0__::func_692(iLocal_61))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 1)
			{
				PED::SET_PED_RESET_FLAG(iLocal_61, 129, true);
			}
		}
	}
}

void func_539()//Position - 0x421C3
{
	int iVar0;
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_512)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
				if (iVar0 != joaat("WEAPON_STUNGUN"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_STUNGUN"), true);
				}
				iLocal_512 = 1;
			}
		}
		else
		{
			iLocal_512 = 0;
		}
	}
}

void func_540()//Position - 0x4221E
{
	struct<6> Var0;
	Var0 = { __LIB_13__::func_743() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, "MIN2_IMM1_3") && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
	{
		VEHICLE::ROLL_DOWN_WINDOWS(Local_54.f_35[0]);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_218))
		{
			iLocal_218 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_passport_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], 0f, 0f, 20f), true, true, false);
		}
		iLocal_509 = iLocal_509;
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
		{
			iLocal_213 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_213, true);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_218);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_54.f_28[1]);
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[0]);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_213, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_l"));
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_218, iLocal_213, "passport_prop", "missminuteman_2ig_3", 1000f, -4f, 0, 1000f);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_54.f_28[1], iLocal_213, "missminuteman_2ig_3", "passport_josef", 2f, -2f, 4, 83, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[0], iLocal_213, "missminuteman_2ig_3", "passport_manuel", 1f, -4f, 4, 83, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54.f_28[1], false, false);
		}
		iLocal_508 = 1;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_211) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_211) == 1f)
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[0]);
		iLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_54.f_35[0], ENTITY::GET_ENTITY_COORDS(iLocal_60[0], true)), 0f, 0f, 270f, 2);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_215, false);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_215, true);
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[0]);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_215, Local_54.f_35[0], -1);
		PED::SET_PED_KEEP_TASK(iLocal_60[0], true);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[0], iLocal_215, "missminuteman_2ig_1", "trunk_manuel", 4f, -4f, 4, 83, 1000f, 0);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_210))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_210) == 1f)
		{
			ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[0]);
			iLocal_214 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_54.f_35[0], ENTITY::GET_ENTITY_COORDS(iLocal_60[0], true)), 0f, 0f, 270f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_214, false);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_214, true);
			PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_214, 1.6f);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_214, Local_54.f_35[0], -1);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[0], iLocal_214, "missminuteman_2ig_1", "trunk_manuel", 1000f, -4f, 4, 83, 1000f, 0);
		}
	}
	else if (iLocal_508 == 1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
			{
				if (iLocal_510 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_213) >= 0.544f)
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "PASSPORT", iLocal_218, "MINUTE_02_SOUNDSET", false, 0);
						iLocal_510 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_213) >= 0.562f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_218, 0.125f, true);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_218);
				}
			}
		}
		if (!iLocal_513)
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_213) == 1f)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[0]);
				iLocal_211 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_211, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_211, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[0], iLocal_211, "missminuteman_2ig_1", "entertrunk_manuel", 4f, -4f, 4, 83, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_211, 1f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60[0], true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_54.f_28[1], false, false);
				PED::SET_PED_INTO_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 1);
				TASK::TASK_PLAY_ANIM(Local_54.f_28[1], "missminuteman_2ig_3", "passport_josef", 4f, -2f, -1, 0, 0.99f, false, false, false);
				iLocal_513 = 1;
			}
		}
	}
	if (iLocal_525 && !iLocal_526)
	{
		if (iLocal_426 == 1)
		{
			if (__LIB_0__::func_121(Local_54.f_35[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[iLocal_386]);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_60[iLocal_386], false, false);
					iLocal_212 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_212, true);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_212, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[iLocal_386], iLocal_212, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_212, 1.4f);
					iLocal_526 = 1;
				}
			}
		}
		if (iLocal_426 == 2)
		{
			if (__LIB_0__::func_121(Local_54.f_35[0]))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0]))
				{
					ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_61);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
					iLocal_212 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_212, Local_54.f_35[0], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_54.f_35[0], "seat_pside_r"));
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_212, "missminuteman_2ig_1", "entertrunk_josef", 4f, -4f, 4, 83, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_212, 1.4f);
					iLocal_526 = 1;
				}
			}
		}
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_212))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_212) == 1f)
		{
			if (iLocal_426 == 1)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_60[1]);
				iLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_54.f_35[0], ENTITY::GET_ENTITY_COORDS(iLocal_60[1], true)), 0f, 0f, 90f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_216, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_216, true);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_216, 1.6f);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_216, Local_54.f_35[0], -1);
				PED::SET_PED_KEEP_TASK(iLocal_60[1], true);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60[1], iLocal_216, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1000f, 0);
			}
			else if (iLocal_426 == 2)
			{
				ENTITY::PROCESS_ENTITY_ATTACHMENTS(iLocal_61);
				iLocal_216 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_54.f_35[0], ENTITY::GET_ENTITY_COORDS(iLocal_61, true)), 0f, 0f, 90f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_216, false);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_216, true);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_216, 1.6f);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_216, Local_54.f_35[0], -1);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_216, "missminuteman_2ig_1", "trunk_josef", 1000f, -4f, 4, 83, 1000f, 0);
			}
		}
	}
}

void func_542()//Position - 0x4289F
{
	if ((iLocal_563 != 15 && iLocal_563 != 17) && iLocal_563 != 16)
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			__LIB_0__::func_714(&iLocal_66);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			iLocal_66 = __LIB_14__::func_866(Local_54.f_35[0], 1, 5);
		}
		if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
		{
			__LIB_0__::func_714(&iLocal_67);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_67))
		{
			iLocal_67 = __LIB_14__::func_661(Local_54.f_28[0], 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_67, 0.7f);
			HUD::SET_BLIP_PRIORITY(iLocal_67, 3);
		}
		if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
		{
			__LIB_0__::func_714(&iLocal_68);
		}
		else if (!HUD::DOES_BLIP_EXIST(iLocal_68))
		{
			iLocal_68 = __LIB_14__::func_661(Local_54.f_28[1], 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_68, 0.7f);
			HUD::SET_BLIP_PRIORITY(iLocal_68, 3);
		}
	}
	if (((iLocal_563 == 1 || iLocal_563 == 2) || iLocal_563 == 6) || iLocal_563 == 11)
	{
		iLocal_482 = 0;
		__LIB_0__::func_714(&(iLocal_64[0]));
		__LIB_0__::func_714(&(iLocal_64[1]));
		__LIB_0__::func_714(&(iLocal_64[2]));
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				iLocal_538 = 0;
				if (func_544())
				{
					iLocal_536 = 0;
					iLocal_537 = 0;
					if (iLocal_471 == 0)
					{
						iLocal_471 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
					{
						if (iLocal_386 == 0)
						{
							if (iLocal_540 == 0)
							{
								iLocal_540 = 1;
							}
						}
						if (iLocal_386 == 1)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (iLocal_541 == 0)
								{
									if (iLocal_500 == 0)
									{
										__LIB_0__::func_229("MIN2_06", 7000, 0);
										iLocal_541 = 1;
									}
								}
							}
						}
						if (iLocal_386 == 2)
						{
							if (iLocal_542 == 0)
							{
								__LIB_0__::func_229("MIN2_08", 7000, 0);
								iLocal_542 = 1;
							}
						}
						if (iLocal_386 == 0)
						{
						}
						else if (iLocal_386 == 1)
						{
							uLocal_65[iLocal_386] = __LIB_14__::func_704(267.2497f, 2852.1667f, 42.6129f, 5, 1);
						}
						else
						{
							Local_442[iLocal_386 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_60[iLocal_386], true) };
							uLocal_65[iLocal_386] = __LIB_14__::func_704(Local_442[iLocal_386 /*3*/], 5, 1);
						}
						iLocal_390 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
					if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
					{
						iLocal_537 = 0;
					}
					else if (!iLocal_537)
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], true))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
							}
						}
						iLocal_537 = 1;
						if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
						{
							if (iLocal_543 == 0)
							{
								__LIB_0__::func_229("MIN2_33", 7000, 0);
								iLocal_543 = 1;
							}
						}
						else if (iLocal_544 == 0)
						{
							__LIB_0__::func_229("MIN2_29", 7000, 0);
							iLocal_544 = 1;
						}
					}
					if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
					{
						iLocal_536 = 0;
					}
					else if (!iLocal_536)
					{
						if (func_322())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								if (__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 10f, 1))
								{
									TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1f, 1, 0);
								}
								else
								{
									TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_54.f_35[0]) - 90f));
						}
						iLocal_536 = 1;
						if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
						{
							if (iLocal_545 == 0)
							{
								__LIB_0__::func_229("MIN2_32", 7000, 0);
								iLocal_545 = 1;
							}
						}
						else if (iLocal_544 == 0)
						{
							__LIB_0__::func_229("MIN2_29", 7000, 0);
							iLocal_544 = 1;
						}
					}
				}
			}
			else
			{
				iLocal_536 = 0;
				iLocal_537 = 0;
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (!iLocal_538)
				{
					if (iLocal_546 == 0)
					{
						__LIB_0__::func_229("MIN2_19", 7000, 0);
						iLocal_546 = 1;
					}
					iLocal_538 = 1;
					iLocal_406 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (iLocal_563 == 15)
	{
		iLocal_482 = 0;
		__LIB_0__::func_714(&(iLocal_64[2]));
		__LIB_0__::func_714(&(iLocal_64[1]));
		__LIB_0__::func_714(&iLocal_69);
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			__LIB_0__::func_714(&iLocal_66);
			iLocal_538 = 0;
			if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
			{
				__LIB_0__::func_714(&iLocal_67);
				__LIB_0__::func_714(&iLocal_68);
				iLocal_536 = 0;
				iLocal_537 = 0;
				if (!HUD::DOES_BLIP_EXIST(uLocal_65[iLocal_386]))
				{
					iLocal_470 = 1;
					iLocal_390 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
				{
					__LIB_0__::func_714(&iLocal_67);
					iLocal_537 = 0;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_67) && !iLocal_537)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
					{
						TASK::TASK_ENTER_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], 60000, 0, 2f, 1, 0);
					}
					iLocal_67 = __LIB_14__::func_661(Local_54.f_28[0], 1, 1, 5);
					HUD::SET_BLIP_SCALE(iLocal_67, 0.7f);
					iLocal_537 = 1;
					if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
					{
						if (iLocal_543 == 0)
						{
							__LIB_0__::func_229("MIN2_33", 7000, 0);
							iLocal_543 = 1;
						}
					}
					else if (iLocal_544 == 0)
					{
						__LIB_0__::func_229("MIN2_29", 7000, 0);
						iLocal_544 = 1;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
				{
					__LIB_0__::func_714(&iLocal_68);
					iLocal_536 = 0;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_68) && !iLocal_536)
				{
					if (func_322())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
						{
							if (__LIB_0__::func_687(Local_54.f_28[1], Local_54.f_35[0], 10f, 1))
							{
								TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 1f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], 60000, 1, 2f, 1, 0);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54.f_28[1], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54.f_28[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54.f_35[0], -1.8f, -0.2f, 0f), 1f, 60000, 0.5f, 0, (ENTITY::GET_ENTITY_HEADING(Local_54.f_35[0]) - 90f));
					}
					iLocal_68 = __LIB_14__::func_661(Local_54.f_28[1], 1, 1, 5);
					HUD::SET_BLIP_SCALE(iLocal_68, 0.7f);
					iLocal_536 = 1;
					if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
					{
						if (iLocal_545 == 0)
						{
							__LIB_0__::func_229("MIN2_32", 7000, 0);
							iLocal_545 = 1;
						}
					}
					else if (iLocal_544 == 0)
					{
						__LIB_0__::func_229("MIN2_29", 7000, 0);
						iLocal_544 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_536 = 0;
			iLocal_537 = 0;
			__LIB_0__::func_714(&iLocal_67);
			__LIB_0__::func_714(&iLocal_68);
			__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
		}
	}
	if ((iLocal_563 == 3 || iLocal_563 == 8) || iLocal_563 == 12)
	{
		iLocal_536 = 0;
		iLocal_537 = 0;
		if (iLocal_386 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				iLocal_538 = 0;
			}
			else if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && iLocal_463 == 0)
			{
				__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
				__LIB_0__::func_714(&iLocal_69);
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (!iLocal_538)
				{
					if (iLocal_546 == 0)
					{
						__LIB_0__::func_229("MIN2_19", 7000, 0);
						iLocal_546 = 1;
					}
					iLocal_538 = 1;
					iLocal_406 = MISC::GET_GAME_TIMER();
					iLocal_482 = 1;
				}
			}
			iLocal_389 = MISC::GET_GAME_TIMER();
			if (iLocal_389 > iLocal_388)
			{
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (__LIB_0__::func_695(Local_54.f_35[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
						{
							iLocal_64[iLocal_386] = __LIB_14__::func_661(iLocal_60[iLocal_386], 1, 0, 5);
							if (iLocal_548 == 0)
							{
								__LIB_0__::func_229("MIN2_01", 7000, 0);
								iLocal_548 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				iLocal_538 = 0;
			}
			else if (((PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && iLocal_463 == 0) && iLocal_475 == 0)
			{
				__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
				__LIB_0__::func_714(&iLocal_69);
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (!iLocal_538)
				{
					if (iLocal_546 == 0)
					{
						__LIB_0__::func_229("MIN2_19", 7000, 0);
						iLocal_546 = 1;
					}
					iLocal_538 = 1;
					iLocal_406 = MISC::GET_GAME_TIMER();
					iLocal_482 = 1;
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
			{
				iLocal_538 = 0;
			}
			else if ((PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false)) && __LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[1]) > 90f)
			{
				__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
				__LIB_0__::func_714(&iLocal_69);
				if (!iLocal_538)
				{
					if (iLocal_547 == 0)
					{
						iLocal_547 = 1;
					}
					iLocal_538 = 1;
					iLocal_406 = MISC::GET_GAME_TIMER();
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_66, true);
					iLocal_482 = 1;
				}
			}
			iLocal_389 = MISC::GET_GAME_TIMER();
			if (iLocal_389 > iLocal_388)
			{
				__LIB_0__::func_714(&(uLocal_65[iLocal_386]));
				if (iLocal_461 == 0)
				{
					if (__LIB_0__::func_695(Local_54.f_35[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
							{
								iLocal_64[iLocal_386] = __LIB_14__::func_661(iLocal_60[iLocal_386], 1, 0, 5);
								if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[iLocal_386], false))
								{
									HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 0.7f);
								}
								else
								{
									HUD::SET_BLIP_SCALE(iLocal_64[iLocal_386], 1f);
								}
								if (iLocal_549 == 0)
								{
									iLocal_549 = 1;
									if (iLocal_386 == 0)
									{
										__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_JOSEF_4", 6, 0, 0, 0);
									}
									else if (iLocal_386 == 1)
									{
										__LIB_0__::func_222(&uLocal_220, 4, iLocal_61, "IMMIGRANTMALE", 0, 1);
										__LIB_2__::func_859(&uLocal_220, "MIN2AU", "MIN2_SURR_15", 6, 1, 0, 0);
									}
									else if (iLocal_386 == 2)
									{
									}
								}
								if (iLocal_494 == 1)
								{
									if (iLocal_495 == 0)
									{
										__LIB_0__::func_229("MIN2_31", 7000, 0);
										iLocal_495 = 1;
									}
								}
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_64[iLocal_386]))
						{
							if (iLocal_494 == 0)
							{
								if (iLocal_482 == 0)
								{
									if (iLocal_550 == 0)
									{
										__LIB_0__::func_229("MIN2_39", 7000, 0);
										iLocal_550 = 1;
									}
									iLocal_482 = 1;
								}
							}
						}
					}
				}
				else
				{
					__LIB_0__::func_714(&(iLocal_64[iLocal_386]));
				}
				if (iLocal_386 == 1)
				{
					if (iLocal_473 == 0)
					{
						if (__LIB_0__::func_695(Local_54.f_35[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_69))
								{
									iLocal_69 = __LIB_14__::func_661(iLocal_61, 1, 0, 5);
									if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, false))
									{
										HUD::SET_BLIP_SCALE(iLocal_69, 0.7f);
									}
									else
									{
										HUD::SET_BLIP_SCALE(iLocal_69, 1f);
									}
									if (iLocal_494 == 1)
									{
										if (iLocal_495 == 0)
										{
											__LIB_0__::func_229("MIN2_31", 7000, 0);
											iLocal_495 = 1;
										}
									}
								}
							}
						}
					}
					else
					{
						__LIB_0__::func_714(&iLocal_69);
					}
				}
			}
		}
	}
}

int func_544()//Position - 0x4354B
{
	if (PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false) && PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false))
	{
		return 1;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_213))
	{
		return 1;
	}
	return 0;
}

int func_545()//Position - 0x43594
{
	if (iLocal_563 == 3 || iLocal_563 == 5)
	{
		if (!__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0], 150f, 1) && !__LIB_0__::func_687(PLAYER::PLAYER_PED_ID(), Local_54.f_28[1], 150f, 1))
		{
			if (iLocal_553 == 0)
			{
				__LIB_0__::func_229("MIN2_49", 7500, 0);
				iLocal_553 = 1;
			}
			return 1;
		}
	}
	return 0;
}

void func_546()//Position - 0x435FF
{
	if (!__LIB_0__::func_692(Local_54.f_28[0]) && !__LIB_0__::func_692(Local_54.f_28[1]))
	{
		sLocal_559 = "MIN2_45";
		iLocal_563 = 16;
		return;
	}
	if (!__LIB_0__::func_692(Local_54.f_28[1]))
	{
		sLocal_559 = "MIN2_16";
		iLocal_563 = 16;
		return;
	}
	else
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(Local_54.f_28[1]);
	}
	if (!__LIB_0__::func_692(Local_54.f_28[0]))
	{
		sLocal_559 = "MIN2_25";
		iLocal_563 = 16;
		return;
	}
	else
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(Local_54.f_28[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[0]))
	{
		if (!__LIB_0__::func_692(iLocal_60[0]))
		{
			sLocal_559 = "MIN2_44";
			iLocal_563 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_60[0]);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_60[0]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[0], false))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[1]))
	{
		if (!__LIB_0__::func_692(iLocal_60[1]))
		{
			sLocal_559 = "MIN2_15";
			iLocal_563 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_60[1]);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_60[1]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_60[1], false))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		if (!__LIB_0__::func_692(iLocal_61))
		{
			sLocal_559 = "MIN2_15";
			iLocal_563 = 16;
			return;
		}
		else
		{
			PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_61);
			if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_61) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_61, false))
			{
				VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
		}
	}
	if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0]) > 200f)
	{
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[1]) > 200f)
		{
			sLocal_559 = "MIN2_36";
			iLocal_563 = 16;
			return;
		}
	}
	if ((iLocal_563 != 8 && iLocal_563 != 15) && iLocal_563 != 17)
	{
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[1]) > 210f)
		{
			sLocal_559 = "MIN2_40";
			iLocal_563 = 16;
			return;
		}
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0]) > 210f)
		{
			sLocal_559 = "MIN2_41";
			iLocal_563 = 16;
			return;
		}
	}
	if (iLocal_563 == 8)
	{
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[1]) > 250f && iLocal_420 == 0)
		{
			sLocal_559 = "MIN2_40";
			iLocal_563 = 16;
			return;
		}
		if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_54.f_28[0]) > 250f && iLocal_421 == 0)
		{
			sLocal_559 = "MIN2_41";
			iLocal_563 = 16;
			return;
		}
	}
	if (!__LIB_0__::func_695(Local_54.f_35[0]))
	{
		sLocal_559 = "MIN2_17";
		iLocal_563 = 16;
		return;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_54.f_35[0], 0, 12000))
		{
			sLocal_559 = "MIN2_17";
			iLocal_563 = 16;
			return;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_54.f_35[0], 1, 20000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_54.f_35[0], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_54.f_35[0], 3, 30000))
			{
				sLocal_559 = "MIN2_17";
				iLocal_563 = 16;
				return;
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_54.f_35[0], false))
		{
			sLocal_559 = "MIN2_17";
			iLocal_563 = 16;
			return;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false))
		{
			if (iLocal_407 == 0)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54.f_35[0], PLAYER::PLAYER_PED_ID(), true))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_1", 9, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
							iLocal_407 = 1;
						}
					}
				}
			}
			else if (iLocal_407 == 1)
			{
				if (!__LIB_0__::func_75())
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
					iLocal_407 = 2;
				}
			}
			else if (iLocal_407 == 2)
			{
				if (!__LIB_0__::func_75())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54.f_35[0], PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_14__::func_535(&uLocal_220, "MIN2AU", "MIN2_SHCAR", "MIN2_SHCAR_2", 9, 0, 0))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
							iLocal_407 = 3;
						}
					}
				}
			}
			else if (iLocal_407 == 3)
			{
				if (!__LIB_0__::func_75())
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
					iLocal_407 = 4;
				}
			}
			else if (iLocal_407 == 4)
			{
				if (!__LIB_0__::func_75())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54.f_35[0], PLAYER::PLAYER_PED_ID(), true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
						iLocal_407 = 5;
					}
				}
			}
			else if (iLocal_407 == 5)
			{
			}
		}
		else
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_54.f_35[0]);
		}
		if (__LIB_0__::func_692(Local_54.f_28[1]))
		{
			if (__LIB_0__::func_692(Local_54.f_28[0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54.f_35[0], false) || !PED::IS_PED_IN_VEHICLE(Local_54.f_28[1], Local_54.f_35[0], false)) || !PED::IS_PED_IN_VEHICLE(Local_54.f_28[0], Local_54.f_35[0], false))
				{
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_54.f_35[0], true);
					if (__LIB_0__::func_695(iLocal_55[0]))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_55[0], true);
					}
					if (__LIB_0__::func_695(iLocal_55[1]))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_55[1], true);
					}
					if (__LIB_0__::func_695(iLocal_56))
					{
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(iLocal_56, true);
					}
				}
			}
		}
	}
}

void func_564()//Position - 0x445AA
{
	PATHFIND::SET_ROADS_IN_AREA(Vector(43.747f, 4214.0547f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.0547f, -199.286f) + Vector(10f, 10f, 10f), true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), true);
	STREAMING::REQUEST_MODEL(joaat("pranger"));
	STREAMING::REQUEST_MODEL(joaat("prop_passport_01"));
	if (__LIB_0__::func_695(Local_54.f_35[0]))
	{
		iLocal_394 = ENTITY::GET_ENTITY_HEALTH(Local_54.f_35[0]);
		fLocal_454 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_54.f_35[0]);
		fLocal_455 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_54.f_35[0]);
		ENTITY::SET_ENTITY_HEALTH(Local_54.f_35[0], iLocal_394 * 3, 0);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_54.f_35[0], (fLocal_454 * 3f));
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_54.f_35[0], (fLocal_455 * 3f));
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_54.f_35[0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_54.f_35[0], false);
	}
	STREAMING::REQUEST_ANIM_DICT("rcmminute2");
	STREAMING::REQUEST_ANIM_DICT("rcmminute2lean");
	STREAMING::REQUEST_ANIM_DICT("missminuteman_2ig_1");
	STREAMING::REQUEST_ANIM_DICT("missminuteman_2ig_3");
	HUD::REQUEST_ADDITIONAL_TEXT("MIN2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("MIN2AU", 6);
	__LIB_29__::func_967(59);
	__LIB_29__::func_967(57);
	__LIB_29__::func_967(56);
	STREAMING::REQUEST_MODEL(joaat("blazer"));
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("pranger"), 3);
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_NOT_TAZERED");
	STREAMING::REQUEST_CLIP_SET("MOVE_M@BAIL_BOND_TAZERED");
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	iLocal_219 = PED::ADD_SCENARIO_BLOCKING_AREA(341.1107f, 2846.797f, 40.6462f, 350.961f, 2871.472f, 43.8518f, false, true, true, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_SOLO", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", false);
	Local_449[0 /*3*/] = { 327.3949f, 2850.5437f, 42.436f };
	Local_449[1 /*3*/] = { 327.0572f, 2841.2034f, 42.7507f };
	Local_449[2 /*3*/] = { 337.6567f, 2821.313f, 41.1778f };
	Local_449[3 /*3*/] = { 350.404f, 2797.2534f, 47.3014f };
	Local_449[4 /*3*/] = { 373.3039f, 2757.9229f, 42.0141f };
	Local_449[5 /*3*/] = { 393.3462f, 2725.5056f, 41.9263f };
	Local_449[6 /*3*/] = { 416.6357f, 2697.7898f, 42.4937f };
	Local_449[7 /*3*/] = { 444.9309f, 2689.155f, 42.5934f };
	Local_449[8 /*3*/] = { 474.5866f, 2679.4988f, 42.2943f };
	Local_449[9 /*3*/] = { 636.1514f, 2696.9749f, 39.9808f };
	Local_449[10 /*3*/] = { 831.222f, 2695.574f, 39.5328f };
	Local_449[11 /*3*/] = { 880.9315f, 2708.0527f, 39.805f };
	Local_449[12 /*3*/] = { 915.5502f, 2715.8682f, 39.6578f };
	Local_449[13 /*3*/] = { 949.9031f, 2732.2583f, 39.3729f };
	Local_449[14 /*3*/] = { 979.2463f, 2748.764f, 37.0951f };
	Local_449[15 /*3*/] = { 1007.8654f, 2761.7441f, 35.0162f };
	Local_449[16 /*3*/] = { 1039.2654f, 2779.2336f, 33.8708f };
	Local_449[17 /*3*/] = { 1070.0198f, 2810.3762f, 35.6906f };
	Local_449[18 /*3*/] = { 1097.6158f, 2838.8896f, 37.2296f };
	Local_449[19 /*3*/] = { 1121.2598f, 2844.5132f, 37.2992f };
	Local_449[20 /*3*/] = { 1149.2218f, 2836.6943f, 37.1993f };
	Local_449[21 /*3*/] = { 1203.2163f, 2801.9336f, 36.86f };
	Local_449[22 /*3*/] = { 1253.402f, 2767.1658f, 37.4919f };
	Local_449[23 /*3*/] = { 1283.368f, 2741.5134f, 36.651f };
	Local_449[24 /*3*/] = { 1297.2052f, 2715.3333f, 36.7748f };
	Local_449[25 /*3*/] = { 1303.8243f, 2693.4988f, 36.6285f };
	Local_449[26 /*3*/] = { 1312.9229f, 2659.9019f, 36.6804f };
	Local_449[27 /*3*/] = { 1323.7251f, 2622.2717f, 36.6871f };
	Local_449[28 /*3*/] = { 1337.2678f, 2595.0356f, 36.618f };
	Local_449[29 /*3*/] = { 1359.4213f, 2571.5676f, 36.9024f };
	Local_449[30 /*3*/] = { 1478.0682f, 2269.079f, 71.6347f };
	Local_449[31 /*3*/] = { 1506.9707f, 1874.8892f, 106.8773f };
	Local_449[32 /*3*/] = { 1501.8845f, 1618.5989f, 111.4967f };
	Local_449[33 /*3*/] = { 1474.6619f, 1583.4229f, 109.2177f };
	Local_449[34 /*3*/] = { 1447.2242f, 1574.7394f, 107.665f };
	Local_449[35 /*3*/] = { 1421.3652f, 1570.7217f, 107.0452f };
	Local_449[36 /*3*/] = { 1393.5858f, 1566.8616f, 106.198f };
	Local_449[37 /*3*/] = { 1363.6519f, 1552.682f, 104.8892f };
	Local_449[38 /*3*/] = { 1344.7573f, 1535.922f, 102.401f };
	Local_449[39 /*3*/] = { 1323.5651f, 1507.2051f, 98.09f };
	Local_449[40 /*3*/] = { 1305.1832f, 1461.4269f, 98.0123f };
	Local_449[41 /*3*/] = { 1294.0465f, 1395.4415f, 100.773f };
	Local_449[42 /*3*/] = { 1287.989f, 1316.5039f, 105.952f };
	Local_449[43 /*3*/] = { 1238.227f, 705.9078f, 100.6087f };
	Local_449[44 /*3*/] = { 1652.5648f, 3487.9536f, 35.5959f };
	Local_449[45 /*3*/] = { 2518.1792f, 4145.9326f, 37.7126f };
	Local_449[46 /*3*/] = { 2731.3145f, 4390.3496f, 47.4449f };
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Traffic01");
	TASK::REQUEST_WAYPOINT_RECORDING("Min2_Traffic02");
}

int func_574(var uParam0)//Position - 0x44FD4
{
	int iVar0[1];
	int iVar1;
	iVar0[0] = iLocal_53;
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 1;
			uParam0->f_15 = 7f;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_2_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			iLocal_49 = 1;
			return 0;
			break;
		case 1:
			if (!__LIB_14__::func_824(&iVar0))
			{
				return 0;
			}
			iLocal_49 = 2;
			return 0;
			break;
		case 2:
			__LIB_17__::func_25(&(uParam0->f_35[0]), iVar0[0], 20.8f, 4532.65f, 104.66f, 284.7f);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 2);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(uParam0->f_35[0], 5, false);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(uParam0->f_35[0], 14f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], true);
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

void func_578()//Position - 0x4517F
{
	__LIB_14__::func_841();
	__LIB_37__::func_956(59);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	AUDIO::TRIGGER_MUSIC_EVENT("MM2_FAIL");
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("pranger"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blazer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Migrant_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("speedo"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Gaffer_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pranger"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("blazer"), false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_219, false);
	func_580();
	__LIB_0__::func_325();
	if (__LIB_14__::func_843())
	{
	}
	__LIB_0__::func_124(&(Local_54.f_28[1]), 1, 0, 1);
	__LIB_0__::func_124(&(Local_54.f_28[0]), 1, 0, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_SOLO", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_CONSTRUCTION_PASSENGERS", true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(43.747f, 4214.0547f, -199.286f) - Vector(10f, 10f, 10f), Vector(43.747f, 4214.0547f, -199.286f) + Vector(10f, 10f, 10f), 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_580()//Position - 0x4534F
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_02_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_02_SCENE");
	}
}

