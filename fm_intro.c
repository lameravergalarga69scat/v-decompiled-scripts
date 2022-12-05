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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<123> Local_62 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_249 = 16;
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
	struct<6> Local_414 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_415 = 0;
	var uLocal_416 = 16;
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
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
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
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	struct<5> Local_581[2];
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	bool bLocal_588 = 0;
	bool bLocal_589 = 0;
	bool bLocal_590 = 0;
	bool bLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	struct<21> Local_596 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_60 = 20;
	iLocal_61 = 33;
	bLocal_588 = true;
	bLocal_589 = true;
	bLocal_590 = true;
	bLocal_591 = true;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_803(ScriptParam_596);
	}
	while (true)
	{
		__LIB_0__.func_671();
		if (__LIB_6__.func_949())
		{
			func_424(1);
		}
		if (__LIB_24__.func_987(0))
		{
			Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		if (func_420(NETWORK::PARTICIPANT_ID_TO_INT()) > -1)
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		switch (func_419(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (!BitTest(uLocal_582, 10))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						MISC::SET_BIT(&uLocal_582, 10);
					}
				}
				HUD::REQUEST_ADDITIONAL_TEXT("FMINT", 0);
				if (__LIB_0__.func_109() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (__LIB_28__.func_972() > 0)
					{
						__LIB_0__.func_203(&uLocal_249, 1, 0, "Lamar", 0, 1);
						__LIB_6__.func_960(0);
						__LIB_2__.func_52(4, 1);
						__LIB_2__.func_52(1, 1);
						__LIB_2__.func_52(0, 1);
						__LIB_2__.func_52(2, 1);
						__LIB_2__.func_52(3, 0);
						func_412(iLocal_61, 1);
						Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
						if (bLocal_590)
						{
							Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -2;
						}
						else
						{
							Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
						}
					}
				}
				if (__LIB_28__.func_972() == 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (__LIB_28__.func_972() == 6 && Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			case 2:
				func_390();
				func_23();
				if (__LIB_28__.func_972() == 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (__LIB_28__.func_972() == 6 && Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			case 4:
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			case 5:
				__LIB_1__.func_54(&(Local_414.f_5));
				if (__LIB_1__.func_53(&(Local_414.f_5)))
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
				}
				break;
			case 3:
				func_12(iLocal_60);
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
			case 6:
				func_424(0);
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (__LIB_28__.func_972())
			{
				case 0:
					Local_414.f_0 = 2;
					break;
				case 2:
					func_11();
					__LIB_0__.func_371();
					func_2();
					if (func_1())
					{
						Local_414.f_0 = 6;
					}
					break;
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x2B3
{
	if (!bLocal_588)
	{
		if (BitTest(Local_414.f_1, 1))
		{
			return 1;
		}
	}
	else if (BitTest(Local_414.f_1, 2))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x2E2
{
	__LIB_16__.func_772();
}

int func_6(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x62B
{
	float fVar0;
	int iVar1;
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2815059.f_6679 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar1, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam11)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar1, true);
			if (bParam10)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			__LIB_16__.func_774(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_11()//Position - 0x8CB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (bLocal_588)
			{
				if (!BitTest(Local_414.f_1, 2))
				{
					if (BitTest(Local_581[iVar0 /*5*/].f_3, 2))
					{
						MISC::SET_BIT(&(Local_414.f_1), 2);
					}
				}
			}
			else if (!BitTest(Local_414.f_1, 1))
			{
				if (BitTest(Local_581[iVar0 /*5*/].f_3, 1))
				{
					MISC::SET_BIT(&(Local_414.f_1), 1);
				}
			}
		}
		iVar0++;
	}
}

void func_12(int iParam0)//Position - 0x944
{
	if (!__LIB_16__.func_776(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!__LIB_1__.func_63(PLAYER::PLAYER_ID()) == iParam0)
	{
		return;
	}
}

void func_23()//Position - 0xB06
{
	switch (func_420(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case -2:
			func_204();
			break;
		case -1:
			func_203();
			break;
		case 0:
			func_31();
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			func_24();
			break;
	}
}

void func_24()//Position - 0xB61
{
	switch (iLocal_587)
	{
		case 0:
			if (!func_25(iLocal_61))
			{
				MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

bool func_25(int iParam0)//Position - 0xBA1
{
	return func_26(iParam0, 5, 1);
}

int func_26(int iParam0, int iParam1, bool bParam2)//Position - 0xBB1
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			return BitTest(func_27(__LIB_0__.func_297(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)//Position - 0xC12
{
	int iVar0;
	var uVar1;
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][__LIB_16__.func_777(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_31()//Position - 0x100A
{
	int iVar0;
	if (__LIB_16__.func_818())
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_16__.func_817(0);
		}
	}
	if (!__LIB_0__.func_649(&uLocal_239))
	{
		__LIB_0__.func_580(&uLocal_239, 0, 0);
	}
	if (!BitTest(uLocal_582, 21))
	{
		MISC::SET_BIT(&uLocal_582, 21);
	}
	if (!BitTest(uLocal_582, 3))
	{
		if (!__LIB_0__.func_649(&uLocal_237))
		{
			__LIB_0__.func_580(&uLocal_237, 0, 0);
		}
		else if (BitTest(uLocal_582, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_2__.func_47(&uLocal_237, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_582, 3);
					}
				}
			}
		}
		if (__LIB_2__.func_47(&uLocal_237, 40000, 0))
		{
			MISC::SET_BIT(&uLocal_582, 3);
		}
	}
	else if (!BitTest(uLocal_582, 16))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!HUD::IS_PAUSE_MENU_ACTIVE())
			{
				MISC::SET_BIT(&uLocal_582, 16);
				__LIB_0__.func_579(&uLocal_237);
			}
		}
	}
	if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!__LIB_0__.func_649(&uLocal_243))
		{
			__LIB_0__.func_580(&uLocal_243, 0, 0);
		}
		else if (!BitTest(uLocal_583, 1))
		{
			if (__LIB_2__.func_47(&uLocal_243, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_583, 1);
				__LIB_0__.func_579(&uLocal_243);
			}
		}
		else if (BitTest(uLocal_582, 19))
		{
			if (!BitTest(uLocal_582, 18))
			{
				if (!func_196() || __LIB_2__.func_47(&uLocal_237, 5000, 0))
				{
					__LIB_16__.func_776(0);
					MISC::SET_BIT(&uLocal_582, 18);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
					}
				}
			}
		}
	}
	if (BitTest(uLocal_582, 18))
	{
		if (!BitTest(uLocal_582, 2))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iVar0 = 0;
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 5);
				if (func_99(&uLocal_249, 19, "FM_1AU", "FM_ICALL", iVar0, 0))
				{
					__LIB_16__.func_770(1);
					MISC::SET_BIT(&uLocal_582, 2);
					if (!BitTest(uLocal_582, 20))
					{
						func_83(19, 3, 1);
						MISC::SET_BIT(&uLocal_582, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
					}
				}
			}
		}
		else if (!__LIB_0__.func_77(0))
		{
			if (!__LIB_0__.func_75())
			{
				if (!__LIB_7__.func_280())
				{
					if (!BitTest(uLocal_582, 12))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), false, 1);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
						}
						MISC::SET_BIT(&uLocal_582, 12);
						__LIB_0__.func_580(&uLocal_241, 0, 0);
						__LIB_0__.func_580(&uLocal_245, 0, 0);
					}
				}
			}
		}
		if (BitTest(uLocal_582, 12))
		{
			if (!BitTest(uLocal_582, 17))
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					__LIB_22__.func_257();
					MISC::SET_BIT(&uLocal_582, 17);
					__LIB_0__.func_579(&uLocal_237);
				}
			}
			else if (!func_196())
			{
				if (!BitTest(uLocal_582, 23))
				{
					if (__LIB_2__.func_47(&uLocal_245, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_582, 23);
						MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (__LIB_2__.func_47(&uLocal_241, 15000, 0))
				{
					if (!BitTest(uLocal_582, 22))
					{
						MISC::SET_BIT(&uLocal_582, 22);
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (BitTest(uLocal_582, 14))
					{
						MISC::CLEAR_BIT(&uLocal_582, 14);
					}
					if (!func_25(iLocal_61))
					{
						if (BitTest(uLocal_582, 13))
						{
							MISC::CLEAR_BIT(&uLocal_582, 13);
						}
						if (BitTest(uLocal_582, 25) || (!BitTest(uLocal_582, 25) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!BitTest(uLocal_582, 0))
							{
								if (BitTest(uLocal_582, 15))
								{
									MISC::CLEAR_BIT(&uLocal_582, 15);
								}
								if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
								{
									func_69("GET_AMMU", 0);
									MISC::SET_BIT(&uLocal_582, 0);
									MISC::SET_BIT(&uLocal_582, 25);
									if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
									{
										if (!BitTest(Global_2815059.f_836, 2))
										{
											HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], true);
										}
										func_412(iLocal_61, 1);
									}
								}
							}
							else if (BitTest(Global_2815059.f_836, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
								{
									if (!BitTest(uLocal_582, 15))
									{
										HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], false);
										MISC::SET_BIT(&uLocal_582, 15);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
							{
								if (BitTest(uLocal_582, 15))
								{
									HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], true);
									MISC::CLEAR_BIT(&uLocal_582, 15);
								}
							}
						}
					}
					else
					{
						if (BitTest(uLocal_582, 0))
						{
							MISC::CLEAR_BIT(&uLocal_582, 0);
						}
						if (!BitTest(uLocal_582, 13))
						{
							func_69("GET_GUN", 0);
							__LIB_22__.func_255(1);
							MISC::SET_BIT(&uLocal_582, 13);
						}
					}
				}
				else if (!BitTest(uLocal_582, 14))
				{
					HUD::CLEAR_HELP(true);
					if (BitTest(uLocal_582, 0))
					{
						MISC::CLEAR_BIT(&uLocal_582, 0);
					}
					if (BitTest(uLocal_582, 13))
					{
						MISC::CLEAR_BIT(&uLocal_582, 13);
					}
					if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
					{
						HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], false);
						HUD::SET_BLIP_FLASHES(Global_100493.f_255[iLocal_61], false);
						func_412(iLocal_61, 0);
					}
					func_69("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_582, 14);
				}
			}
		}
	}
	else if (__LIB_2__.func_47(&uLocal_239, 300000, 0))
	{
		MISC::SET_BIT(&uLocal_582, 18);
	}
	if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 0))
	{
		if (((WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false)) || WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), false))
		{
			if (func_66())
			{
				func_61(1);
				MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 0);
				if (func_25(iLocal_61))
				{
				}
			}
		}
		else
		{
			__LIB_16__.func_787(400);
		}
	}
	else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 1);
			__LIB_16__.func_782();
			__LIB_0__.func_151("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_582, 31))
			{
				__LIB_16__.func_779(119, 1, -1, 1);
				__LIB_16__.func_779(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_582, 31);
			}
			__LIB_0__.func_579(&uLocal_237);
			if (bLocal_588)
			{
				if (bLocal_589)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
				}
				else
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 1;
				}
			}
			else
			{
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
		}
	}
}

bool func_42()//Position - 0x1A67
{
	return ((((((((((__LIB_16__.func_786(28) || __LIB_16__.func_786(29)) || __LIB_16__.func_786(30)) || __LIB_16__.func_786(31)) || __LIB_16__.func_786(32)) || __LIB_16__.func_786(33)) || __LIB_16__.func_786(34)) || __LIB_16__.func_786(35)) || __LIB_16__.func_786(36)) || __LIB_16__.func_786(37)) || __LIB_16__.func_786(38));
}

void func_61(bool bParam0)//Position - 0x29A9
{
	func_62(28, bParam0);
	func_62(29, bParam0);
	func_62(30, bParam0);
	func_62(31, bParam0);
	func_62(32, bParam0);
	func_62(33, bParam0);
	func_62(34, bParam0);
	func_62(35, bParam0);
	func_62(36, bParam0);
	func_62(37, bParam0);
	func_62(38, bParam0);
}

void func_62(int iParam0, bool bParam1)//Position - 0x2A09
{
	if (bParam1)
	{
		if (!func_26(iParam0, 14, 1))
		{
			func_65(iParam0, 14, 1);
		}
	}
	else if (func_26(iParam0, 14, 1))
	{
		func_63(iParam0, 14, 1);
	}
}

void func_63(int iParam0, int iParam1, bool bParam2)//Position - 0x2A44
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			iVar0 = func_27(__LIB_0__.func_297(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_64(__LIB_0__.func_297(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2AB6
{
	int iVar0;
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_16__.func_777(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)//Position - 0x2AE6
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__.func_3() == 0)
		{
			iVar0 = func_27(__LIB_0__.func_297(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_64(__LIB_0__.func_297(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

bool func_66()//Position - 0x2B58
{
	return ((((((((((__LIB_16__.func_788(28) || __LIB_16__.func_788(29)) || __LIB_16__.func_788(30)) || __LIB_16__.func_788(31)) || __LIB_16__.func_788(32)) || __LIB_16__.func_788(33)) || __LIB_16__.func_788(34)) || __LIB_16__.func_788(35)) || __LIB_16__.func_788(36)) || __LIB_16__.func_788(37)) || __LIB_16__.func_788(38));
}

void func_69(char* sParam0, bool bParam1)//Position - 0x2C27
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (__LIB_7__.func_180(sParam0))
	{
		return;
	}
	__LIB_16__.func_783();
	Global_1574757 = 0;
	StringCopy(&(Global_1574757.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574757.f_9 = MISC::GET_HASH_KEY(&(Global_1574757.f_1));
	StringCopy(&(Global_1574757.f_12), sParam0, 16);
	__LIB_1__.func_270();
	__LIB_1__.func_269(bParam1);
	__LIB_1__.func_268();
}

void func_83(int iParam0, int iParam1, bool bParam2)//Position - 0x2EBD
{
	int iVar0;
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		__LIB_16__.func_792();
		if (iParam1 == 4)
		{
			__LIB_0__.func_169(iParam0, 0, 1);
			__LIB_0__.func_169(iParam0, 1, 1);
			__LIB_0__.func_169(iParam0, 2, 1);
			__LIB_0__.func_168(iParam0, 0, 1);
			__LIB_0__.func_168(iParam0, 1, 1);
			__LIB_0__.func_168(iParam0, 2, 1);
		}
		else
		{
			if (__LIB_0__.func_167(iParam0, iParam1) == 1 && __LIB_0__.func_166(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			__LIB_0__.func_169(iParam0, iVar0, 1);
			__LIB_0__.func_168(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { __LIB_0__.func_165(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { __LIB_0__.func_165(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						__LIB_0__.func_164();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { __LIB_0__.func_165(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					__LIB_0__.func_164();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { __LIB_0__.func_165(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				__LIB_0__.func_164();
			}
		}
	}
}

var func_91()//Position - 0x3241
{
	__LIB_16__.func_793();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3404
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_18__.func_331())
	{
		return 0;
	}
	if (__LIB_2__.func_138())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return __LIB_22__.func_258(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

void func_101(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x352E
{
	Global_1641031.f_40.f_1 = iParam0;
	Global_1641031.f_40.f_2 = iParam1;
	Global_1641031.f_40.f_3 = iParam2;
	StringCopy(&(Global_1641031.f_40.f_4), sParam3, 16);
	Global_1641031.f_40.f_8 = iParam4;
	Global_1641031.f_40.f_9 = iParam5;
	Global_1641031.f_40.f_14 = uParam6;
	__LIB_16__.func_800(iParam4);
	__LIB_2__.func_131();
	Global_1641031.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

int func_115(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x3973
{
	int iVar0;
	bool bVar1;
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	__LIB_16__.func_792();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4541214 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_130() == 0)
	{
		__LIB_22__.func_263();
		return 0;
	}
	__LIB_2__.func_117(Global_4541213);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/]), sParam1, 64);
	Global_4539964[Global_4541213 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4539964[Global_4541213 /*104*/].f_24 = iParam2;
	}
	Global_4539964[Global_4541213 /*104*/].f_25 = iParam7;
	Global_4539964[Global_4541213 /*104*/].f_26 = uParam8;
	Global_4539964[Global_4541213 /*104*/].f_29 = uParam9;
	Global_4539964[Global_4541213 /*104*/].f_30 = uParam12;
	Global_4539964[Global_4541213 /*104*/].f_31 = uParam11;
	Global_4539964[Global_4541213 /*104*/].f_28 = 0;
	Global_4539964[Global_4541213 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_33), sParam4, 64);
	Global_4539964[Global_4541213 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_50), sParam5, 64);
	Global_4539964[Global_4541213 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4539964[Global_4541213 /*104*/].f_83), sParam15, 64);
	__LIB_16__.func_792();
	switch (iParam16)
	{
		case 3:
			Global_4539964[Global_4541213 /*104*/].f_99[Global_20266] = 1;
			break;
		case 0:
			Global_4539964[Global_4541213 /*104*/].f_99[0] = 1;
			break;
		case 2:
			Global_4539964[Global_4541213 /*104*/].f_99[2] = 1;
			break;
		case 1:
			Global_4539964[Global_4541213 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_20266)
		{
			case 0:
				__LIB_2__.func_42(0);
				break;
			case 1:
				__LIB_2__.func_42(1);
				break;
			case 2:
				__LIB_2__.func_42(2);
				break;
			case 3:
				__LIB_2__.func_42(3);
				break;
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4541214 = 1;
				break;
			case 0:
				Global_4541214 = 1;
				break;
			case 2:
				Global_4541214 = 1;
				break;
			case 1:
				Global_4541214 = 1;
				break;
			}
	}
	Global_22674[Global_4541213] = 0;
	if (bParam10)
	{
		__LIB_16__.func_792();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!__LIB_0__.func_497())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	__LIB_16__.func_806(iParam0, sParam1, bVar1, __LIB_0__.func_846(PLAYER::PLAYER_ID()));
	return 1;
}

int func_117()//Position - 0x3D8E
{
	if (!Global_262145.f_28866 /* Tunable: 1028571554 */)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == __LIB_0__.func_160())
	{
		return 0;
	}
	if (__LIB_16__.func_807(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_121(int iParam0)//Position - 0x3E2E
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
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (__LIB_0__.func_39(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										case 1:
											iVar6 = Global_44250;
											break;
										case 2:
											iVar6 = Global_44251;
											break;
										default:
											break;
									}
									__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB" /* GXT: Benny's */)) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								__LIB_0__.func_478(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								__LIB_16__.func_808(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_130()//Position - 0x4731
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0)
		{
			Global_4541213 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999/*func_456*/;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__.func_43(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
			{
				Global_4541213 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4541213 == 11)
	{
		return 0;
	}
	Global_4539964[Global_4541213 /*104*/].f_99[0] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[1] = 0;
	Global_4539964[Global_4541213 /*104*/].f_99[2] = 0;
	return 1;
}

int func_135(int iParam0)//Position - 0x49EB
{
	int iVar0;
	iVar0 = __LIB_16__.func_814(iParam0);
	if (iVar0 == -1)
	{
		func_136(iParam0, 1);
		return 0;
	}
	Global_1660783[iVar0 /*5*/].f_4 = 1;
	return Global_1660783[iVar0 /*5*/].f_2;
}

void func_136(int iParam0, bool bParam1)//Position - 0x4A21
{
	if (!__LIB_0__.func_154(iParam0, 0, 1))
	{
		return;
	}
	if (__LIB_16__.func_814(iParam0) != -1)
	{
		return;
	}
	if (Global_1660946)
	{
		if (iParam0 == Global_1660946.f_1)
		{
			return;
		}
	}
	if (__LIB_2__.func_44(iParam0))
	{
		return;
	}
	if (Global_1660984 >= 32)
	{
		return;
	}
	Global_1660951[Global_1660984] = iParam0;
	Global_1660984++;
	if (bParam1)
	{
	}
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x4C3B
{
	bool bVar0;
	__LIB_2__.func_120();
	bVar0 = false;
	return __LIB_22__.func_260(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_144(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x4C62
{
	bool bVar0;
	bVar0 = false;
	return func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_145(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x4C85
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	iVar0 = __LIB_0__.func_160();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_135(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22666 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = __LIB_2__.func_287(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_7__.func_263(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_154(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_147(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_2__.func_116();
	}
	__LIB_2__.func_121();
	__LIB_2__.func_115();
	__LIB_2__.func_114();
	return 1;
}

int func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x4DE3
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_148(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { __LIB_0__.func_165(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_148(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x4E72
{
	int iVar0;
	bool bVar1;
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	__LIB_16__.func_792();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_153() == 0)
	{
		func_151();
		return 0;
	}
	__LIB_2__.func_45(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		__LIB_2__.func_42(0);
		__LIB_2__.func_42(2);
		__LIB_2__.func_42(1);
	}
	else
	{
		__LIB_16__.func_792();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					__LIB_2__.func_42(0);
					Global_8842 = 0;
					break;
				case 1:
					__LIB_2__.func_42(1);
					Global_8842 = 1;
					break;
				case 2:
					__LIB_2__.func_42(2);
					Global_8842 = 2;
					break;
				case 3:
					__LIB_2__.func_42(3);
					Global_8842 = 3;
					break;
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		__LIB_16__.func_792();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!__LIB_0__.func_497())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			__LIB_2__.func_41(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_121(1);
			__LIB_2__.func_41(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_149(iParam0, sParam1, bVar1, __LIB_0__.func_846(PLAYER::PLAYER_ID()));
	return 1;
}

void func_149(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5348
{
	if (!func_117())
	{
		return;
	}
	STATS::PLAYSTATS_NPC_PHONE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

void func_151()//Position - 0x540D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999/*func_456*/;
	while (iVar2 < iVar1)
	{
		if (!__LIB_2__.func_43(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_153()//Position - 0x55C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999/*func_456*/;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__.func_43(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

int func_154(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x572B
{
	int iVar0;
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		case 1:
			sParam16 = "NULL";
			break;
		case 2:
			break;
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 3;
	if (func_148(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			Global_8746[3 /*6*/] = { __LIB_0__.func_165(iParam0) };
			Global_8823 = iParam0;
			StringCopy(&Global_8824, sParam5, 64);
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_155(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x57D7
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	__LIB_2__.func_121();
	bVar0 = true;
	if (func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_2__.func_113(120000);
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)//Position - 0x5829
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_173(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_162(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			__LIB_2__.func_127(1);
		}
		if (BitTest(uParam4, 5))
		{
			__LIB_2__.func_126(1);
		}
		__LIB_2__.func_125();
		__LIB_2__.func_115();
		__LIB_2__.func_124();
		__LIB_2__.func_123();
		return 1;
	}
	return 0;
}

int func_162(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x593A
{
	__LIB_0__.func_391(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_163(char* sParam0, int iParam1, bool bParam2)//Position - 0x5988
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					__LIB_0__.func_74();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (__LIB_0__.func_191(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		__LIB_0__.func_209();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				__LIB_16__.func_792();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (__LIB_0__.func_208())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (__LIB_0__.func_73())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
				{
					case 7:
						return 0;
						break;
					case 8:
						return 0;
						break;
					case 9:
						break;
					case 10:
						break;
					default:
						break;
				}
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			__LIB_0__.func_207();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		__LIB_0__.func_206();
		func_164();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		__LIB_0__.func_74();
	}
	return 0;
}

void func_164()//Position - 0x5C56
{
	if (!func_117())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_173(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5F4F
{
	__LIB_0__.func_391(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 1;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam7);
}

int func_174(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x5F9D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_176(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		__LIB_2__.func_128();
		__LIB_2__.func_125();
		__LIB_2__.func_115();
		__LIB_2__.func_124();
		__LIB_2__.func_123();
		return 1;
	}
	return 0;
}

bool func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x5FFB
{
	__LIB_0__.func_391(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 1;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 1;
	Global_21659 = 0;
	StringCopy(&Global_21753, sParam5, 24);
	Global_2883585 = 0;
	return func_163(sParam3, iParam4, bParam8);
}

int func_177(var uParam0, char* sParam1, char* sParam2)//Position - 0x6050
{
	if (func_179(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		__LIB_2__.func_129();
		__LIB_2__.func_115();
		__LIB_2__.func_124();
		return 1;
	}
	return 0;
}

bool func_179(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x608C
{
	__LIB_0__.func_391(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_163(sParam2, iParam3, 0);
}

int func_196()//Position - 0x62B2
{
	if (__LIB_0__.func_1("HLP_TAXI3"))
	{
		return 1;
	}
	if (__LIB_0__.func_1("HLP_SOC1"))
	{
		return 1;
	}
	if (__LIB_0__.func_1("HLP_SOC2"))
	{
		return 1;
	}
	return 0;
}

void func_203()//Position - 0x63E4
{
	CAM::DO_SCREEN_FADE_IN(800);
	if (!bLocal_590 || bLocal_591)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
	}
	if (!bLocal_591)
	{
		Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 0;
	}
	else
	{
		Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 3;
	}
}

void func_204()//Position - 0x6431
{
	if (func_210(&Local_62, &(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4)))
	{
		Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = -1;
	}
	func_205(&Local_62);
}

void func_205(int* iParam0)//Position - 0x645F
{
	bool bVar0;
	bVar0 = HUD::IS_PAUSE_MENU_ACTIVE();
	switch (iLocal_586)
	{
		case 0:
			if (BitTest(*iParam0, 18))
			{
				if (!__LIB_0__.func_649(&uLocal_592))
				{
					__LIB_0__.func_580(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_1__.func_278("HLP_XP1", 9000);
						__LIB_0__.func_579(&uLocal_592);
						__LIB_0__.func_580(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (__LIB_2__.func_47(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					__LIB_0__.func_579(&uLocal_592);
					__LIB_0__.func_580(&uLocal_592, 0, 0);
				}
			}
			break;
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_1__.func_278("HLP_XP2", 9000);
					__LIB_0__.func_579(&uLocal_592);
					__LIB_0__.func_580(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (__LIB_2__.func_47(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				__LIB_0__.func_579(&uLocal_592);
				__LIB_0__.func_580(&uLocal_592, 0, 0);
			}
			break;
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_1__.func_278("HLP_RNK1", 9000);
					__LIB_0__.func_731(1);
					Global_2815059.f_1918 = 1;
					__LIB_0__.func_730(1, 0, -1);
					__LIB_0__.func_579(&uLocal_592);
					__LIB_0__.func_580(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (__LIB_2__.func_47(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				__LIB_0__.func_579(&uLocal_592);
				__LIB_0__.func_580(&uLocal_592, 0, 0);
			}
			break;
		case 3:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_16__.func_776(0);
					if (MISC::IS_XBOX360_VERSION() || __LIB_0__.func_53())
					{
						__LIB_1__.func_278("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || __LIB_0__.func_52())
					{
						__LIB_1__.func_278("HLP_CASHPSN", 9000);
					}
					else
					{
						__LIB_1__.func_278("HLP_CASHGEN", 9000);
					}
					__LIB_0__.func_579(&uLocal_592);
					__LIB_0__.func_580(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (__LIB_2__.func_47(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				__LIB_0__.func_579(&uLocal_592);
				__LIB_0__.func_580(&uLocal_592, 0, 0);
			}
			break;
		case 99:
			if (!BitTest(uLocal_583, 2))
			{
				MISC::SET_BIT(&uLocal_583, 2);
			}
			break;
	}
}

int func_210(int* iParam0, int* iParam1)//Position - 0x6715
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	if (!BitTest(*iParam0, 13))
	{
		if (CAM::DOES_CAM_EXIST(CAM::GET_RENDERING_CAM()))
		{
			Var3 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			if ((Var3.f_0 != 0f || Var3.f_1 != 0f) || Var3.f_2 != 0f)
			{
				STREAMING::SET_FOCUS_POS_AND_VEL(Var3, 0f, 0f, 0f);
				if (!BitTest(*iParam0, 14))
				{
					MISC::SET_BIT(iParam0, 14);
				}
			}
		}
	}
	else if (BitTest(*iParam0, 14))
	{
		STREAMING::CLEAR_FOCUS();
		MISC::CLEAR_BIT(iParam0, 14);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, true);
	}
	__LIB_16__.func_825(iParam0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	__LIB_36__.func_415(iParam0);
	__LIB_16__.func_819(PLAYER::PLAYER_ID());
	if (!BitTest(*iParam0, 31))
	{
		if (iParam0->f_6 > 0)
		{
			iParam0->f_32 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(234.0331f, -1005.2032f, -98.4626f, "hei_dlc_garage_high_new");
			if (iParam0->f_32 != 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0->f_32);
				MISC::SET_BIT(iParam0, 31);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0->f_6)
		{
			case 0:
				iParam0->f_292 = 1;
				iParam0->f_293 = 0;
				iParam0->f_295 = 0;
				iParam0->f_294 = 0;
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) > 0)
				{
					iParam0->f_295 = 1;
					iParam0->f_294 = 1;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(__LIB_0__.func_662()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2815059.f_1917)
				{
					Global_2815059.f_1917 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				}
				if (!__LIB_16__.func_818())
				{
					__LIB_16__.func_817(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!__LIB_0__.func_649(&(iParam0->f_15)))
				{
					__LIB_0__.func_580(&(iParam0->f_15), 0, 0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_1931927);
				Global_1931928 = 0;
				Global_1931930 = 0;
				Global_1931929 = 0;
				Global_1931931 = 0;
				iParam0->f_19 = { 0f, 0f, 0f };
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					*iParam0 = 0;
					iParam0->f_4 = 0;
					iParam0->f_5 = 0;
					func_370(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
					__LIB_6__.func_960(1);
					INTERIOR::DISABLE_METRO_SYSTEM(true);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
					__LIB_16__.func_816(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
					__LIB_18__.func_721(1, 0);
					__LIB_41__.func_44(1, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) < 1 || !__LIB_16__.func_771())
					{
						if (iParam0->f_292)
						{
							if (__LIB_16__.func_815() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::SET_SRL_LONG_JUMP_MODE(true);
							}
						}
					}
					__LIB_21__.func_894(14, 0);
					iParam0->f_6 = 1;
					*iParam0 = 0;
					MISC::CLEAR_BIT(iParam0, 0);
					MISC::CLEAR_BIT(iParam0, 1);
					MISC::CLEAR_BIT(iParam0, 2);
					MISC::CLEAR_BIT(iParam0, 9);
					MISC::SET_BIT(iParam0, 7);
					iParam0->f_122 = PED::ADD_SCENARIO_BLOCKING_AREA(-1012.7869f, -2747.5974f, 15f, -1052.0299f, -2716.1438f, 25f, false, true, true, true);
				}
				break;
			case 1:
				STREAMING::REQUEST_MODEL(joaat("frogger"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("frogger")))
				{
					if (!iParam0->f_292 || STREAMING::IS_SRL_LOADED())
					{
						if (__LIB_7__.func_311())
						{
							STREAMING::SET_ALL_MAPDATA_CULLED(0);
							__LIB_18__.func_334(1, 1, 0);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
							HUD::CLEAR_HELP(true);
							if (!__LIB_2__.func_372())
							{
								func_314();
							}
							__LIB_0__.func_731(0);
							__LIB_16__.func_814();
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Global_1574725, true, false, false, true);
							ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							if (HUD::DOES_BLIP_EXIST(HUD::GET_MAIN_PLAYER_BLIP_ID()))
							{
								HUD::SET_BLIP_SCALE(HUD::GET_MAIN_PLAYER_BLIP_ID(), 0f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							iParam0->f_6 = 2;
						}
					}
				}
				break;
			case 2:
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!BitTest(*iParam0, 4))
					{
						if (__LIB_0__.func_496() == 65 || __LIB_0__.func_496() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.8309f, 356.5081f, __LIB_2__.func_162(-14.367f, 0f, 157.3524f), 100f, 0);
							__LIB_0__.func_579(&(iParam0->f_17));
							__LIB_0__.func_580(&(iParam0->f_17), 0, 0);
							MISC::SET_BIT(iParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_2__.func_47(&(iParam0->f_17), 5000, 0)))
					{
						if (!BitTest(*iParam0, 24))
						{
							if (BitTest(*iParam0, 7))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_START");
								MISC::SET_BIT(iParam0, 24);
								MISC::SET_BIT(iParam0, 21);
							}
						}
						else if (AUDIO::GET_MUSIC_PLAYTIME() > 0)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							GRAPHICS::RESET_ADAPTATION(6);
							if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
							{
								iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
								CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
							}
							CAM::SET_CAM_PARAMS(iParam0->f_7, 754.2219f, 1226.8309f, 356.5081f, -14.367f, 0f, 157.3524f, 42.2442f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iParam0->f_7, 740.7797f, 1193.9226f, 351.1997f, -9.6114f, 0f, 157.8659f, 44.8314f, 6500, 0, 0, 2);
							CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.15f);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, true, 0);
							__LIB_16__.func_813(iParam0);
							MISC::SET_BIT(iParam0, 11);
							if (iParam0->f_292)
							{
								STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
								STREAMING::BEGIN_SRL();
							}
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							iParam0->f_6 = 6;
						}
					}
				}
				break;
			case 6:
				__LIB_36__.func_414(iParam0, 6);
				__LIB_16__.func_812(iParam0);
				if (__LIB_33__.func_229(iParam0, 6, 0))
				{
					HUD::CLEAR_HELP(true);
					iParam0->f_6 = 7;
				}
				break;
			case 7:
				if (!BitTest(*iParam0, 2))
				{
					HUD::CLEAR_HELP(true);
					__LIB_1__.func_278("FMIC_INTRO2" /* GXT: In GTA Online, you can carry out Jobs with, or compete against, players around the world. */, -1);
					MISC::SET_BIT(iParam0, 2);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			case 8:
				__LIB_36__.func_414(iParam0, 8);
				if (__LIB_16__.func_812(iParam0))
				{
					__LIB_22__.func_263(iParam0);
					if (__LIB_33__.func_229(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			case 9:
				if (!BitTest(*iParam0, 10))
				{
					__LIB_16__.func_811();
					MISC::SET_BIT(iParam0, 10);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -4.6668f, -900.9736f, 184.887f, -1.6106f, -0.5186f, 78.3786f, 45.0069f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -23.0087f, -896.4288f, 184.1939f, -2.8529f, -0.5186f, 81.8262f, 45.0069f, 8000, 0, 0, 2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0->f_48);
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_48, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				iParam0->f_6 = 10;
				break;
			case 10:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_48, false))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0->f_48);
				}
				__LIB_36__.func_414(iParam0, 10);
				if (__LIB_27__.func_405())
				{
					if (__LIB_27__.func_404(iParam0))
					{
						if (__LIB_22__.func_263(iParam0))
						{
							if (__LIB_33__.func_229(iParam0, 10, 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2870.8044f, 81.4979f, 13.1957f, true, false, false, true);
									ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
								}
								fVar0 = 5000f;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[0], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], 100, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[0], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[1], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], 101, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[1], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[2], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], 102, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[2], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[3], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], 103, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[3], fVar0);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_92[4], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], 104, "FM_Intro_uber", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0->f_92[4], fVar0);
								}
								MISC::SET_BIT(iParam0, 15);
								CAM::DO_SCREEN_FADE_IN(800);
								iParam0->f_6 = 14;
							}
						}
					}
				}
				break;
			case 14:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					__LIB_16__.func_810(iParam0);
					__LIB_16__.func_809(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(iParam0->f_7, true);
					CAM::DETACH_CAM(iParam0->f_7);
					CAM::DESTROY_CAM(iParam0->f_7, false);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					func_299(iParam0, 14);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 5))
				{
					__LIB_1__.func_278("FMIC_RACE1" /* GXT: Take part in Jobs, including Races, with your friends, Crew members or others and check your position on the global leaderboards in-game or on the Rockstar Social Club. */, -1);
					MISC::SET_BIT(iParam0, 5);
				}
				__LIB_36__.func_414(iParam0, 14);
				if (__LIB_33__.func_229(iParam0, 14, 0))
				{
					__LIB_22__.func_262(iParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			case 15:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					func_299(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_38__.func_353(iParam0);
				}
				else if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				__LIB_36__.func_414(iParam0, 15);
				if (__LIB_33__.func_229(iParam0, 15, 0))
				{
					__LIB_22__.func_262(iParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			case 16:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_799(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					func_299(iParam0, 16);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_38__.func_353(iParam0);
				}
				else if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				__LIB_36__.func_414(iParam0, 16);
				if (__LIB_33__.func_229(iParam0, 16, 0))
				{
					__LIB_22__.func_262(iParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			case 17:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, 0.7f);
					func_299(iParam0, 17);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 6))
				{
					MISC::SET_BIT(iParam0, 6);
					__LIB_1__.func_278("FMIC_RACE2" /* GXT: You can challenge others with Jobs you have created yourself or bet on players to win and earn cash. */, -1);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_38__.func_353(iParam0);
				}
				else if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				__LIB_36__.func_414(iParam0, 17);
				if (__LIB_33__.func_229(iParam0, 17, 0))
				{
					__LIB_22__.func_262(iParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			case 18:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 18);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_38__.func_353(iParam0);
				}
				else if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				__LIB_36__.func_414(iParam0, 18);
				if (__LIB_16__.func_798() && __LIB_33__.func_229(iParam0, 18, 0))
				{
					__LIB_22__.func_262(iParam0, 43650f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 19;
				}
				break;
			case 19:
				if (BitTest(*iParam0, 15))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_92[4]))
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_92[4]));
					}
					__LIB_16__.func_809(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 19);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_38__.func_353(iParam0);
				}
				else
				{
					if (!BitTest(iParam0->f_3, 6))
					{
						if (iParam0->f_32 != 0)
						{
							if (INTERIOR::IS_INTERIOR_READY(iParam0->f_32))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_91, false))
								{
									INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_91, iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
								}
								AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
								iVar2 = 0;
								while (iVar2 < 8)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_49[iVar2], false))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_49[iVar2], iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
									}
									iVar2++;
								}
								MISC::SET_BIT(&(iParam0->f_3), 6);
							}
						}
					}
					if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
					{
						__LIB_33__.func_227(iParam0);
					}
				}
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				__LIB_36__.func_414(iParam0, 19);
				if (__LIB_33__.func_229(iParam0, 19, 0) && BitTest(iParam0->f_3, 0))
				{
					if (BitTest(*iParam0, 12))
					{
						MISC::CLEAR_BIT(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (__LIB_33__.func_229(iParam0, 19, -4968))
				{
					if (!BitTest(*iParam0, 12))
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(iParam0, 12);
					}
				}
				else if (__LIB_33__.func_229(iParam0, 19, -5618))
				{
					if (!BitTest(*iParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, false);
						MISC::SET_BIT(iParam0, 30);
					}
				}
				break;
			case 22:
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				if (BitTest(iParam0->f_3, 0))
				{
					if (!CAM::DOES_CAM_EXIST(iParam0->f_7))
					{
						iParam0->f_7 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.1892f, -1006.7584f, -96.8311f, -13.0682f, 0.0572f, 0.7306f, 40.033f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 228.2493f, -1006.1546f, -98.1976f, -2.3097f, 0.0572f, 0.7306f, 40.033f, 6000, 0, 0, 2);
					CAM::SHAKE_CAM(iParam0->f_7, "HAND_SHAKE", 0.1f);
					INTERIOR::FORCE_ROOM_FOR_GAME_VIEWPORT(iParam0->f_32, MISC::GET_HASH_KEY("GtaMloRoom001"));
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MP_GARAGE_L_RADIO", false);
					GRAPHICS::RESET_ADAPTATION(0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_RACE_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					}
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
					__LIB_16__.func_795(iParam0);
					__LIB_16__.func_794();
					__LIB_1__.func_278("FMIC_GAR" /* GXT: You can store your own collection of cars and motorcycles in Garages that you can purchase around the Map. */, -1);
					iParam0->f_6 = 23;
				}
				break;
			case 23:
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				__LIB_36__.func_414(iParam0, 23);
				if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				if (__LIB_33__.func_229(iParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					__LIB_27__.func_400(iParam0, 0);
					__LIB_27__.func_400(iParam0, 1);
					__LIB_27__.func_400(iParam0, 5);
					__LIB_27__.func_400(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			case 24:
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				__LIB_36__.func_414(iParam0, 24);
				if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				if (__LIB_33__.func_229(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			case 27:
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.2856f, -1639.737f, 5.106698f, true, false, false, true);
				MISC::SET_BIT(iParam0, 13);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				__LIB_27__.func_400(iParam0, 2);
				__LIB_27__.func_400(iParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__.func_792());
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
				{
					PED::DELETE_PED(&(iParam0->f_91));
				}
				MISC::SET_BIT(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			case 28:
				__LIB_16__.func_797(iParam0);
				__LIB_16__.func_796(iParam0);
				if (!BitTest(*iParam0, 8))
				{
					MISC::SET_BIT(iParam0, 8);
				}
				if (__LIB_16__.func_802(iParam0) && __LIB_36__.func_413(iParam0))
				{
					__LIB_33__.func_227(iParam0);
				}
				__LIB_36__.func_414(iParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && BitTest(iParam0->f_3, 3)) && __LIB_33__.func_229(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			case 29:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_27__.func_399(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("MP_M_Freemode_01"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Male_Character", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("MP_F_Freemode_01"), 0);
						}
					}
				}
				else if (__LIB_27__.func_399(iParam0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Male_Character", 3, joaat("MP_M_Freemode_01"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "MP_Female_Character", 3, joaat("MP_F_Freemode_01"), 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_33, false))
				{
					ENTITY::SET_ENTITY_VISIBLE(iParam0->f_33, true, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_33, "MP_Plane", 0, 0, 0);
				}
				__LIB_27__.func_398(iParam0);
				MISC::LOAD_CLOUD_HAT("CONTRAILS", 0f);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
				__LIB_1__.func_278("FMIC_TENN" /* GXT: ~s~Challenge others to Tennis, Golf and many other Activities. */, -1);
				CUTSCENE::START_CUTSCENE(4);
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iParam0->f_32);
					}
					__LIB_36__.func_412(iParam0);
					if (iParam0->f_293)
					{
						iParam0->f_26 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_26 = 52618;
						iParam0->f_27 = 52618;
					}
					iParam0->f_6 = 31;
				}
				break;
			case 31:
				if (iParam0->f_295)
				{
					if (__LIB_27__.func_399(iParam0))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
									}
								}
							}
						}
					}
					else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Male_Character", 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_35, false, false);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0->f_34, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iParam0->f_34, -1028.4062f, -2732.7822f, 19.5931f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iParam0->f_34, -106.11f);
						__LIB_22__.func_257(iParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0->f_34, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					func_299(iParam0, 33);
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*iParam0, 29))
				{
					if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						MISC::CLEAR_BIT(iParam0, 29);
					}
				}
				if ((__LIB_22__.func_256(iParam0) && __LIB_36__.func_411(iParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (__LIB_27__.func_399(iParam0))
						{
							iParam0->f_28 = 134784;
						}
						else
						{
							iParam0->f_28 = 134784;
						}
					}
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (BitTest(*iParam0, 7))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_START");
						MISC::SET_BIT(iParam0, 21);
					}
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					if (!BitTest(*iParam1, 1))
					{
						MISC::SET_BIT(iParam1, 1);
					}
					__LIB_16__.func_790(iParam0);
					__LIB_16__.func_789(iParam0);
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 33;
				}
				else
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_26 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					if (!BitTest(*iParam0, 22))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 59, 0);
							MISC::SET_BIT(iParam0, 22);
						}
					}
					if (__LIB_22__.func_255(iParam0))
					{
						if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() == 2)
						{
							if (!BitTest(*iParam0, 18))
							{
								MISC::SET_BIT(iParam0, 18);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23146)
							{
								if (!BitTest(*iParam0, 27))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, -2.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 27);
								}
								if (!BitTest(*iParam0, 28))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_mp_plane_landing_tyre_smoke", iParam0->f_33, 3.508f, -3.666f, -3.584f, 0f, 0f, -90f, 1f, false, false, false);
									MISC::SET_BIT(iParam0, 28);
								}
							}
							CAM::SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(4950f);
							if (BitTest(*iParam0, 22))
							{
								NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
								MISC::CLEAR_BIT(iParam0, 22);
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() > 23254)
							{
								__LIB_16__.func_788(iParam0);
							}
						}
					}
					if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
					{
						__LIB_16__.func_789(iParam0);
						if (!BitTest(*iParam0, 22))
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
							MISC::SET_BIT(iParam0, 22);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
						{
							VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0->f_34);
							VEHICLE::SET_VEHICLE_LIGHTS(iParam0->f_34, 2);
						}
					}
					iParam0->f_31 = CUTSCENE::GET_CUTSCENE_TIME();
				}
				break;
			case 33:
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (__LIB_33__.func_229(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 2))
					{
						if (__LIB_33__.func_229(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (__LIB_33__.func_229(iParam0, 33, -5450))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					AUDIO::START_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 33);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 33, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			case 34:
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 2))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 2);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (__LIB_27__.func_399(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.129f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.129f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.145f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.145f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 34);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 34);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 34, 0))
				{
					__LIB_22__.func_257(iParam0, 18966.65f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			case 35:
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (__LIB_33__.func_229(iParam0, 34, 1100))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 4))
					{
						if (__LIB_33__.func_229(iParam0, 34, 1100))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (__LIB_33__.func_229(iParam0, 34, 1000))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 35);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 35);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 35, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			case 36:
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 5))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 5);
						}
					}
				}
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 4))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 4);
						}
					}
					if (!BitTest(iParam0->f_1, 5))
					{
						if (__LIB_33__.func_229(iParam0, 36, -3750))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 5);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (__LIB_27__.func_399(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.363f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.363f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.298f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.298f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 36);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 36);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 36, 0))
				{
					__LIB_22__.func_257(iParam0, 42700.96f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			case 37:
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 6);
						}
					}
				}
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (__LIB_33__.func_229(iParam0, 36, 1000))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 37);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 37);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 37, 0))
				{
					__LIB_22__.func_257(iParam0, 51033.28f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			case 38:
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 7);
						}
					}
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
				}
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (__LIB_33__.func_229(iParam0, 37, 2500))
						{
							if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 38);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 38);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 38, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			case 39:
				if (!__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 8))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (__LIB_27__.func_399(iParam0))
				{
					if (!BitTest(iParam0->f_1, 31))
					{
						if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (__LIB_27__.func_399(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.811f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.811f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_lamar", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.791f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.791f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 39);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 39);
				__LIB_16__.func_787(iParam0);
				if (__LIB_33__.func_229(iParam0, 39, 0))
				{
					__LIB_22__.func_257(iParam0, 85050f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			case 40:
				if (!BitTest(iParam0->f_1, 31))
				{
					if (func_246(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						MISC::SET_BIT(&(iParam0->f_1), 31);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 40);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 40);
				if (__LIB_16__.func_787(iParam0) && __LIB_33__.func_229(iParam0, 40, 0))
				{
					__LIB_22__.func_257(iParam0, 116366.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			case 41:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					func_299(iParam0, 41);
					MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 41);
				if (__LIB_33__.func_229(iParam0, 41, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(true);
					__LIB_22__.func_257(iParam0, 127166.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			case 42:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_786(iParam0);
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 42);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 42);
				if (__LIB_33__.func_229(iParam0, 42, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(false);
					__LIB_22__.func_257(iParam0, 170800f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			case 43:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 43);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 43);
				if (__LIB_33__.func_229(iParam0, 43, 0))
				{
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					__LIB_22__.func_257(iParam0, 191799.8f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			case 44:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 44);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 44);
				if (__LIB_33__.func_229(iParam0, 44, 0))
				{
					__LIB_22__.func_257(iParam0, 196633.1f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			case 45:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 45);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 45);
				if (__LIB_33__.func_229(iParam0, 45, 0))
				{
					__LIB_22__.func_257(iParam0, 201466.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			case 46:
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 46);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 46);
				if (__LIB_33__.func_229(iParam0, 46, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			case 47:
				__LIB_22__.func_254(iParam0);
				if (BitTest(*iParam0, 15))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_7, iParam0->f_34, 0.8056f, 2.2245f, 0.5533f, true);
						CAM::POINT_CAM_AT_ENTITY(iParam0->f_7, iParam0->f_34, -0.4552f, -0.4977f, 0.5449f, true);
						CAM::SET_CAM_FOV(iParam0->f_7, 33.3479f);
						CAM::SHAKE_CAM(iParam0->f_7, "ROAD_VIBRATION_SHAKE", 2f);
						CAM::SET_CAM_ACTIVE(iParam0->f_7, true);
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, false, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, true, false);
						}
						iParam0->f_11 = -1;
						iParam0->f_11 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_11, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_dside_f"));
						if (__LIB_27__.func_399(iParam0))
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0->f_34, "seat_pside_f"));
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_female", "ig_1_lamar_drive_female_fem", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.74f);
						}
						else
						{
							iParam0->f_12 = -1;
							iParam0->f_12 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0->f_12, iParam0->f_34, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iParam0->f_36, iParam0->f_11, "mp_intro_seq@ig_1_lamar_drive_radio", "mp_intro_ig_1_p2", 1000f, -1000f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iParam0->f_12, "mp_intro_seq@ig_1_lamar_drive_male", "ig_1_lamar_drive_male_male", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_11, 0.726f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_12, 0.815f);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_36, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 47);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 47);
				if (__LIB_33__.func_229(iParam0, 47, 0))
				{
					__LIB_22__.func_257(iParam0, 213066.4f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			case 48:
				__LIB_22__.func_254(iParam0);
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_35, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_36, false))
					{
						ENTITY::SET_ENTITY_VISIBLE(iParam0->f_36, false, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					func_299(iParam0, 48);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 48);
				if (__LIB_33__.func_229(iParam0, 48, 0))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 3);
					__LIB_22__.func_253(iParam0, 10177.75f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			case 49:
				__LIB_22__.func_254(iParam0);
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					func_299(iParam0, 49);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_36__.func_414(iParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && __LIB_33__.func_229(iParam0, 49, 0))
				{
					__LIB_27__.func_397(iParam0, 4500f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			case 50:
				__LIB_22__.func_254(iParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_16__.func_809(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						STREAMING::END_SRL();
						MISC::CLEAR_BIT(iParam0, 11);
					}
					func_299(iParam0, 50);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 20))
				{
					if (__LIB_27__.func_399(iParam0))
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT2", 8);
					}
					else
					{
						CUTSCENE::REQUEST_CUTSCENE("MP_INT_MCS_5_ALT1", 8);
					}
					if (iParam0->f_295)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (__LIB_27__.func_399(iParam0))
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_Female_Character", 0, 1);
							}
							else
							{
								CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);
							}
						}
					}
					if (CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						MISC::SET_BIT(iParam0, 20);
					}
				}
				__LIB_36__.func_414(iParam0, 50);
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0->f_34))
					{
						if (ENTITY::GET_ENTITY_SPEED(iParam0->f_34) < 1f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
						}
					}
				}
				if (__LIB_33__.func_229(iParam0, 50, 0) && BitTest(*iParam0, 20))
				{
					if (BitTest(*iParam0, 21))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
						MISC::CLEAR_BIT(iParam0, 21);
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0->f_34);
					iParam0->f_6 = 51;
				}
				break;
			case 51:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_27__.func_399(iParam0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_Female_Character", 0, 0, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "MP_1", 0, 0, 0);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_35, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_35, "LAMAR", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_34, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iParam0->f_34, "MP_Lamar_Car", 0, 0, 0);
				}
				MISC::SET_BIT(iParam0, 13);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MP_INTRO_LAMAR_DRIVE_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("MP_INTRO_LAMAR_DRIVE_SCENE");
				}
				CUTSCENE::START_CUTSCENE(4);
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 52;
				break;
			case 52:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (iParam0->f_293)
					{
						iParam0->f_30 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_30 = __LIB_16__.func_784(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			case 53:
				if (iParam0->f_295)
				{
					if (__LIB_27__.func_399(iParam0))
					{
						if (!BitTest(*iParam0, 23))
						{
							if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Female_Character", 0))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
									Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									MISC::SET_BIT(iParam0, 23);
								}
							}
						}
					}
					else if (!BitTest(*iParam0, 23))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_1", 0))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								Var1 = { Vector(95.9465f, 307.0503f, -210.3399f) - Vector(95.9455f, 302.9014f, -200.8225f) };
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1));
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								MISC::SET_BIT(iParam0, 23);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LAMAR", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MP_Lamar_Car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0->f_34, 5f);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					__LIB_16__.func_783(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_16__.func_782(PLAYER::PLAYER_ID()))
				{
					__LIB_16__.func_781(1);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - (iParam0->f_30 + CUTSCENE::GET_CUTSCENE_TIME()));
					}
					switch (iParam0->f_14)
					{
						case 0:
							__LIB_16__.func_780(iParam0, 0);
							break;
						case 10:
							__LIB_16__.func_780(iParam0, 1);
							break;
						case 20:
							__LIB_16__.func_780(iParam0, 2);
							break;
						case 30:
							__LIB_16__.func_780(iParam0, 3);
							break;
						case 40:
							__LIB_16__.func_780(iParam0, 4);
							break;
						case 50:
							__LIB_16__.func_780(iParam0, 5);
							break;
						case 60:
							__LIB_16__.func_780(iParam0, 6);
							break;
						case 70:
							__LIB_16__.func_780(iParam0, 7);
							break;
						case 80:
							__LIB_16__.func_780(iParam0, 8);
							break;
						case 90:
							__LIB_16__.func_780(iParam0, 9);
							break;
						case 100:
							if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_36))
							{
								PED::DELETE_PED(&(iParam0->f_36));
							}
							break;
					}
					iParam0->f_14++;
				}
				else
				{
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
					if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
					{
						CUTSCENE::STOP_CUTSCENE(false);
					}
					__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
					MISC::CLEAR_BIT(iParam0, 13);
					iParam0->f_6 = 57;
				}
				break;
			case 55:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						__LIB_0__.func_579(&(iParam0->f_17));
						__LIB_0__.func_580(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (__LIB_2__.func_47(&(iParam0->f_17), 10000, 0))
				{
					if (__LIB_16__.func_779(iParam0))
					{
						__LIB_16__.func_810(iParam0);
						__LIB_16__.func_789(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						__LIB_16__.func_783(1);
						if (!__LIB_16__.func_782(PLAYER::PLAYER_ID()))
						{
							__LIB_16__.func_781(1);
						}
						__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						MISC::SET_BIT(iParam0, 1);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 57;
					}
				}
				break;
			case 56:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
				}
				else if (!BitTest(*iParam0, 17))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_BIT(iParam0, 13);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -195.2f, 307.1825f, 95.9455f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						if (iParam0->f_292)
						{
							STREAMING::END_SRL();
							MISC::CLEAR_BIT(iParam0, 11);
						}
						__LIB_0__.func_579(&(iParam0->f_17));
						__LIB_0__.func_580(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (__LIB_2__.func_47(&(iParam0->f_17), 10000, 0))
				{
					if (__LIB_16__.func_802(iParam0))
					{
						__LIB_16__.func_810(iParam0);
						__LIB_16__.func_789(iParam0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -200.8225f, 302.9014f, 95.9455f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 61.3164f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_34, 20000, 0, 1f, 1048592, 0);
								}
							}
						}
						if (!PED::IS_PED_INJURED(iParam0->f_35))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_35, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_34, false))
								{
									TASK::TASK_ENTER_VEHICLE(iParam0->f_35, iParam0->f_34, 20000, -1, 1f, 1048592, 0);
								}
							}
						}
						if (!__LIB_16__.func_782(PLAYER::PLAYER_ID()))
						{
						}
						__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 3);
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - __LIB_27__.func_396(iParam0, 48, 0));
						iParam0->f_293 = 1;
						__LIB_22__.func_253(iParam0, 10177.75f);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			case 57:
				__LIB_36__.func_414(iParam0, 57);
				bVar4 = !iParam0->f_288;
				__LIB_16__.func_820(iParam0, bVar4, 0);
				if (iParam0->f_292)
				{
					STREAMING::END_SRL();
					MISC::CLEAR_BIT(iParam0, 11);
				}
				if (!PED::IS_PED_INJURED(iParam0->f_35))
				{
					TASK::TASK_STAND_STILL(iParam0->f_35, -1);
					PED::SET_PED_KEEP_TASK(iParam0->f_35, true);
				}
				NETWORK::NETWORK_SET_VOICE_ACTIVE(true);
				if (!iParam0->f_288)
				{
					__LIB_16__.func_779(115, 1, -1, 1);
					return 1;
				}
				break;
			case 58:
				break;
			case 54:
				break;
			case 59:
				return 1;
				break;
		}
		__LIB_16__.func_775(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT(__LIB_16__.func_784(iParam0));
			}
			iParam0->f_290 = __LIB_16__.func_819(iParam0);
		}
		iParam0->f_291 = 0;
		if (iParam0->f_292 && BitTest(*iParam0, 11))
		{
			if (iParam0->f_293)
			{
				STREAMING::SET_SRL_TIME(iParam0->f_289);
			}
			else
			{
				STREAMING::SET_SRL_TIME(iParam0->f_290);
			}
		}
		__LIB_16__.func_817(iParam0);
		if (BitTest(*iParam0, 12))
		{
			if (__LIB_16__.func_798())
			{
				__LIB_16__.func_773();
			}
		}
		if (iParam0->f_6 > 0 && iParam0->f_6 <= 57)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 60);
				}
			}
			__LIB_27__.func_394(iParam0);
			HUD::DISABLE_FRONTEND_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		}
		if (Global_2815059.f_1918)
		{
			PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
		}
	}
	return 0;
}

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB3B1
{
	__LIB_0__.func_391(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 1;
	Global_22598 = 0;
	Global_22602 = 0;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_163(sParam2, iParam4, 0);
}

void func_299(int* iParam0, int iParam1)//Position - 0xDCEC
{
	bool bVar0;
	int* iVar1;
	switch (iParam1)
	{
		case 14:
			__LIB_16__.func_808(iParam0, 0, -2997.1738f, 330.9234f, 14.2341f, -15.97f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 2, -2983.9001f, 423.7414f, 14.4122f, -5.25f, &iVar1, 1);
			break;
		case 15:
			__LIB_16__.func_808(iParam0, 1, -2622.2075f, -109.3386f, 19.2643f, 39.34f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 3, -2583.9497f, -143.6469f, 20.6224f, 48.89f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 7, -2552.1448f, -169.0495f, 19.8664f, 60.04f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 8, -2531.4744f, -174.4581f, 19.2269f, 58.09f, &iVar1, 1);
			break;
		case 16:
			break;
		case 17:
			__LIB_16__.func_808(iParam0, 0, -2420.6177f, -232.2668f, 15.3525f, 57.71f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 2, -2399.7092f, -249.2471f, 14.9551f, 58.19f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 4, -2568.499f, -153.4655f, 20.4075f, 54.1f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 5, -2485.392f, -198.0737f, 17.5783f, 63.83f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 6, -2469.139f, -206.5518f, 17.0201f, 60.64f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 9, -2408.7327f, -238.8328f, 15.2055f, 59.84f, &iVar1, 1);
			break;
		case 18:
			__LIB_16__.func_808(iParam0, 1, -2146.384f, -323.4933f, 12.0429f, 14.8813f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 3, -2075.444f, -374.131f, 11.556f, 56.66f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 7, -2160.252f, -294.0829f, 12.5163f, 163.95f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 8, -2191.4287f, -335.8769f, 12.7225f, 84.71f, &iVar1, 1);
			break;
		case 19:
			__LIB_16__.func_808(iParam0, 0, -1833.8702f, -561.7711f, 11.0989f, 48.11f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 1, -1630.5872f, -685.6821f, 16.5351f, 58.23f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 2, -1668.738f, -662.7587f, 14.7925f, 60.52f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 3, -1564.946f, -738.6324f, 10.7672f, 68.32f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 4, -1706.5074f, -720.8959f, 9.6281f, -132.94f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 5, -1626.756f, -769.9745f, 10.2367f, -128.8f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 6, -1782.7637f, -610.5726f, 10.3008f, 52.34f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 7, -1595.258f, -733.587f, 10.8576f, 68.39f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 8, -1751.8918f, -682.1017f, 9.6795f, -134.89f, &iVar1, 1);
			__LIB_16__.func_808(iParam0, 9, -1742.0983f, -642.5658f, 9.8169f, 48.19f, &iVar1, 1);
			break;
		case 33:
			__LIB_16__.func_808(iParam0, 0, -934.4687f, -2716.0378f, 12.7365f, 309.2312f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 5, -975.6617f, -2733.5168f, 12.8172f, 267.4944f, &iVar1, 0);
			break;
		case 34:
			break;
		case 35:
			break;
		case 36:
			__LIB_16__.func_808(iParam0, 6, -850.1183f, -2615.271f, 14.1979f, 327.7461f, &iVar1, 0);
			break;
		case 37:
			break;
		case 38:
			__LIB_16__.func_808(iParam0, 0, -712.0925f, -1983.5159f, 25.688f, -167.99f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 1, -533.9934f, -2004.7274f, 26.9085f, 58.71f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 2, -653.3551f, -2047.7823f, 27.3566f, -112.14f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 3, -663.821f, -1934.8499f, 27.1417f, -121.65f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 4, -656.6017f, -2009.0784f, 30.0188f, -106.53f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 5, -502.696f, -2023.0684f, 26.2376f, 60.2827f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 6, -460.1447f, -2044.032f, 26.2371f, 63.9022f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 7, -624.7944f, -1960.9753f, 26.29f, 237.3848f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 8, -463.0545f, -1998.2552f, 36.6533f, 27.85f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 9, -473.4099f, -1950.2133f, 24.7576f, 37.16f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 10, -574.5834f, -1994.9f, 26.2871f, 236.0571f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 11, -546.7894f, -2012.7808f, 26.3137f, 235.9205f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 12, -584.929f, -1970.3323f, 26.2437f, 55.8826f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 13, -633.4936f, -1937.6824f, 26.2413f, 54.9911f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 14, -601.2188f, -1941.4187f, 17.4986f, 148.6622f, &iVar1, 0);
			break;
		case 39:
			__LIB_16__.func_808(iParam0, 4, -499.2335f, -1906.5316f, 16.3534f, 133.5751f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 9, -518.8654f, -1918.1439f, 16.3355f, 134.6305f, &iVar1, 0);
			break;
		case 40:
			__LIB_16__.func_808(iParam0, 3, -270.2197f, -1499.7521f, 29.4309f, -13.07f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 7, -313.1461f, -1559.5889f, 24.2966f, 145.66f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 8, -301.9485f, -1550.0525f, 25.5595f, 146.95f, &iVar1, 0);
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			__LIB_16__.func_808(iParam0, 1, 246.1231f, -238.5137f, 52.9482f, 251.5966f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 2, 214.2755f, -202.6486f, 53.5033f, 70.72f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 6, 263.1977f, -115.1292f, 69.0366f, 155.02f, &iVar1, 0);
			break;
		case 44:
			__LIB_16__.func_808(iParam0, 0, 392.6941f, 239.868f, 102.5932f, 159.15f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 7, 375.2224f, 192.316f, 102.0397f, 160.4247f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 12, 377.4185f, 166.3668f, 102.0407f, 337.9135f, &iVar1, 0);
			break;
		case 45:
			__LIB_16__.func_808(iParam0, 1, 267.8363f, 181.3352f, 103.7037f, 71.7724f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 3, 216.3894f, 211.8832f, 105.2308f, -19.82f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 4, 290.3365f, 172.6194f, 103.7313f, 67.09f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 5, 283.6507f, 155.574f, 103.264f, 252.0678f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 8, 309.5128f, 156.7439f, 103.3183f, -112.52f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 9, 249.0189f, 168.3015f, 104.5421f, -112.05f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 11, 313.7221f, 144.8591f, 102.6542f, 249.0527f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 13, 171.2032f, 216.4137f, 105.2411f, 69.1778f, &iVar1, 0);
			break;
		case 46:
			break;
		case 47:
			__LIB_16__.func_808(iParam0, 2, 226.2312f, 176.6035f, 104.3217f, 252.5577f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 6, 247.4283f, 168.6965f, 103.9378f, 250.2977f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 7, 211.375f, 181.7446f, 104.561f, 250.2252f, &iVar1, 0);
			break;
		case 48:
			break;
		case 49:
			__LIB_16__.func_808(iParam0, 2, -192.4192f, 249.71f, 91.7534f, -99.42f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 3, -45.3246f, 256.5581f, 105.0516f, 272.9104f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 4, -24.1551f, 272.3286f, 106.4563f, 96.6005f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 5, 6.5526f, 270.3987f, 108.268f, 84.5591f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 6, -124.1576f, 245.0871f, 96.1105f, -89.91f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 7, -140.9613f, 262.532f, 94.5308f, 87.51f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 9, -83.4766f, 247.5941f, 99.488f, 275.7796f, &iVar1, 0);
			__LIB_16__.func_808(iParam0, 10, -215.5077f, 252.4543f, 91.0469f, 264.726f, &iVar1, 0);
			break;
		case 50:
			break;
	}
	bVar0 = false;
	while (bVar0 < 15)
	{
		if (!BitTest(iVar1, bVar0))
		{
			__LIB_16__.func_818(iParam0, bVar0);
		}
		bVar0++;
	}
}

void func_314()//Position - 0xF0C8
{
	__LIB_16__.func_823(0);
	__LIB_16__.func_822(1);
}

void func_370(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x139CB
{
	int iVar0;
	func_314();
	__LIB_16__.func_822(1);
	__LIB_0__.func_731(1);
	__LIB_0__.func_730(12, 1, -1);
	__LIB_0__.func_130();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
	if (bParam0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(PLAYER::PLAYER_ID(), bParam6);
	}
	if (bParam1)
	{
		iVar0 |= 8192;
	}
	if (bParam4)
	{
		iVar0 |= 4;
	}
	if (!bParam2)
	{
		iVar0 |= 16384;
	}
	if (bParam3)
	{
		iVar0 |= 32768;
	}
	__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, iVar0, 0);
	if (bParam5)
	{
		if (PED::IS_PED_DUCKING(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_DUCKING(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_390()//Position - 0x15748
{
	var uVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_414.f_3))
	{
		switch (Local_414.f_2)
		{
			case 2:
				if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_2__.func_63(Local_414.f_3))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_414.f_3), 20000, 2, 1f, 1, 0);
								}
							}
							else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_414.f_3)))
								{
									MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
									func_409(1);
								}
								else
								{
									MISC::CLEAR_AREA_OF_VEHICLES(-1031.7882f, -2731.816f, 19.0546f, 50f, false, false, false, false, false, false, 0);
								}
							}
						}
					}
				}
				break;
			case 1:
				if (__LIB_2__.func_63(Local_414.f_3))
				{
					if (!__LIB_0__.func_680(Local_414.f_4))
					{
						if (BitTest(uLocal_582, 26))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_414.f_4), NETWORK::NET_TO_VEH(Local_414.f_3), -663.8057f, -952.3882f, 20.2985f, 4, 15f, 802987, 5f, 5f, false);
							}
						}
					}
				}
				break;
			case 3:
				if (!BitTest(uLocal_582, 27))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						if (!__LIB_0__.func_497())
						{
							if (!HUD::IS_PAUSE_MENU_ACTIVE())
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						MISC::SET_BIT(&uLocal_582, 27);
					}
				}
				else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
				{
					if (__LIB_18__.func_333(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
					{
						MISC::CLEAR_AREA_OF_VEHICLES(-649.4202f, -954.0247f, 20.5269f, 20f, false, false, false, false, false, false, 0);
						CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
						CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 4);
					}
				}
				break;
			case 4:
				if (!__LIB_0__.func_680(Local_414.f_4))
				{
					if (!BitTest(uLocal_582, 29))
					{
						if (__LIB_2__.func_63(Local_414.f_3))
						{
							TASK::TASK_VEHICLE_PARK(NETWORK::NET_TO_PED(Local_414.f_4), NETWORK::NET_TO_VEH(Local_414.f_3), -664.8411f, -952.2484f, 20.283f, 92.0219f, 0, 60f, true);
							CAM::DO_SCREEN_FADE_IN(800);
							MISC::SET_BIT(&uLocal_582, 29);
						}
					}
					else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_PARK")) == 7)
						{
							MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 5);
						}
					}
				}
				break;
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
					{
						MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 6);
						MISC::SET_BIT(&(Global_2815059.f_836), 4);
						MISC::CLEAR_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4), 2);
						__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
						func_396();
						func_409(0);
						__LIB_0__.func_151("HLP_TAXI", -1);
						if (__LIB_0__.func_112())
						{
							__LIB_35__.func_530(joaat("SERVICE_SPEND_TAXI"), 200, &uVar0, 0, 0, 0);
						}
						else
						{
							__LIB_7__.func_67(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, false, false, 0);
						}
					}
				}
				break;
			case 6:
				if (!__LIB_0__.func_680(Local_414.f_4))
				{
					if (__LIB_2__.func_63(Local_414.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_414.f_4), true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_414.f_4), NETWORK::NET_TO_VEH(Local_414.f_3), 12f, 786599);
							__LIB_1__.func_46(&(Local_414.f_3));
							__LIB_1__.func_46(&(Local_414.f_4));
						}
					}
				}
				break;
		}
		if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-1614.1733f, -3243.3167f, 28.4915f, -440.9012f);
			if (!BitTest(uLocal_582, 26))
			{
				MISC::SET_BIT(&uLocal_582, 26);
			}
		}
		if (!BitTest(uLocal_582, 28))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				if (!__LIB_0__.func_649(&uLocal_247))
				{
					__LIB_16__.func_821();
					__LIB_0__.func_580(&uLocal_247, 0, 0);
				}
				else if (__LIB_2__.func_47(&uLocal_247, 5000, 0))
				{
					if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
					{
						MISC::SET_BIT(&uLocal_582, 28);
					}
				}
			}
		}
		if (!BitTest(uLocal_582, 30))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				if (func_179(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_582, 30);
				}
			}
		}
		if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			__LIB_1__.func_60();
		}
		if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
	}
}

void func_396()//Position - 0x15DA7
{
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 34 /*INPUT_MOVE_LEFT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 35 /*INPUT_MOVE_RIGHT_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
}

void func_409(bool bParam0)//Position - 0x16627
{
	if (bParam0)
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 15))
		{
			MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 15);
		}
	}
	else if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139, 15))
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 15);
	}
}

void func_412(int iParam0, bool bParam1)//Position - 0x166DD
{
	if (bParam1)
	{
		if (!func_26(iParam0, 8, 0))
		{
			func_65(iParam0, 8, 0);
			__LIB_1__.func_285(iParam0);
		}
	}
	else if (func_26(iParam0, 8, 0))
	{
		func_63(iParam0, 8, 0);
		__LIB_1__.func_285(iParam0);
	}
}

int func_419(int iParam0)//Position - 0x1684A
{
	return Local_581[iParam0 /*5*/];
}

int func_420(int iParam0)//Position - 0x16859
{
	return Local_581[iParam0 /*5*/].f_2;
}

void func_424(bool bParam0)//Position - 0x168CE
{
	bool bVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_588)
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 2))
			{
				if (!BitTest(uLocal_582, 31))
				{
					__LIB_16__.func_779(119, 1, -1, 1);
					__LIB_16__.func_779(115, 1, -1, 1);
				}
				func_758(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_582, 31))
			{
				__LIB_16__.func_779(119, 1, -1, 1);
				__LIB_16__.func_779(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	__LIB_16__.func_820(&Local_62, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2703735.f_3428)
		{
			func_751(0, 1, 0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_409(0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_62.f_122, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1042.9182f, -2723.1401f, 17.341135f, -1087.7639f, -2667.6052f, 25.795933f, 25.5625f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1005.74243f, -2734.2646f, 14.919123f, -1082.9584f, -2675.189f, 26.016474f, 39.375f, 1);
	MISC::CLEAR_BIT(&(Global_2815059.f_836), 4);
	__LIB_16__.func_770(0);
	func_61(0);
	func_750();
	func_749(iLocal_61, 0);
	__LIB_0__.func_579(&(Global_2703735.f_3678));
	Global_2703735.f_3676 = 0;
	Global_2703735.f_3675 = 0;
	Global_2703735.f_3677 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
	}
	if (bVar0)
	{
		func_427(0, 0, 0, 0, 1);
	}
	else
	{
		HUD::CLEAR_HELP(true);
		func_427(0, 0, 3, 1, 1);
	}
	MISC::CLEAR_BIT(&(Global_2815059.f_836), 0);
	__LIB_6__.func_960(0);
	__LIB_2__.func_52(4, 0);
	__LIB_2__.func_52(1, 0);
	__LIB_2__.func_52(0, 0);
	__LIB_2__.func_52(2, 0);
	__LIB_2__.func_52(3, 0);
	func_412(iLocal_61, 0);
	func_396();
	__LIB_16__.func_782();
	if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
	{
		HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], false);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_585))
	{
		HUD::REMOVE_BLIP(&iLocal_585);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_426(0);
		__LIB_16__.func_817(0);
	}
	__LIB_16__.func_467(Local_414.f_5);
}

void func_426(bool bParam0)//Position - 0x16B16
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 5);
	}
}

void func_427(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x16B4A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	struct<6> Var8;
	struct<6> Var9;
	int iVar10;
	char* sVar11;
	struct<2> Var12;
	bool bVar13;
	int iVar14;
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Global_1853348[iVar0 /*834*/];
	__LIB_1__.func_804();
	__LIB_13__.func_123();
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/);
	__LIB_1__.func_800();
	Global_1057165 = 0;
	Global_1835453 = 0;
	__LIB_1__.func_799();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
	__LIB_1__.func_798();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836370 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	__LIB_1__.func_797(0);
	Global_1836359 = 0;
	Global_1836358 = 0;
	Global_1836382 = 0;
	Global_1836598 = 0;
	Global_1836604 = 0;
	Global_1836090 = 0;
	Global_1837298 = 1;
	Global_1836570 = 0;
	Global_1836371 = -1;
	__LIB_1__.func_796(0);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 5);
	if (!__LIB_0__.func_910() && !__LIB_7__.func_50())
	{
		__LIB_1__.func_795();
	}
	__LIB_1__.func_794();
	__LIB_1__.func_793();
	__LIB_1__.func_792();
	__LIB_1__.func_791();
	__LIB_1__.func_790();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__.func_789();
		__LIB_1__.func_788();
	}
	if (__LIB_0__.func_863() || !__LIB_0__.func_850())
	{
		__LIB_1__.func_787();
		__LIB_1__.func_786(1, 1, 1);
		__LIB_0__.func_950();
		__LIB_1__.func_785();
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_1__.func_784();
	if ((((Global_4718592 != 6 && __LIB_1__.func_783(Global_4718592.f_116524) != 14) && __LIB_1__.func_783(Global_4718592.f_116524) != 15) && !__LIB_0__.func_493()) && !__LIB_7__.func_50())
	{
		if (__LIB_0__.func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
		}
	}
	Global_1835474 = 0;
	if (Global_1922955.f_9 == 4)
	{
		if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			Global_1835474 = 1;
		}
	}
	__LIB_6__.func_771();
	if (__LIB_1__.func_782())
	{
		__LIB_1__.func_781();
	}
	__LIB_1__.func_780();
	Global_4718592.f_117081 = 0;
	Global_1922915.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !__LIB_0__.func_851())
	{
		if (BitTest(Global_4718592.f_14, 17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
		}
		else
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		}
	}
	StringCopy(&(Global_4718592.f_116516), "", 32);
	if (!__LIB_7__.func_50())
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		if ((bParam3 && !__LIB_0__.func_698()) && !__LIB_0__.func_697())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		}
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		Global_1888144[iVar3] = 0;
		Global_1888111[iVar3] = 0;
		iVar3++;
	}
	if (iVar1 == 0)
	{
		MISC::SET_BIT(&(Global_2715699.f_5986), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2715699.f_5986), 3);
	}
	if (iVar0 != -1 && Global_2714762.f_669.f_10 != 0)
	{
		Global_1888862[PLAYER::PLAYER_ID() /*120*/].f_2 = Global_2714762.f_669.f_10;
	}
	if (__LIB_0__.func_865() || (iVar0 != -1 && BitTest(Global_1853348[iVar0 /*834*/].f_833, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			__LIB_15__.func_119();
			Global_4718592 = 0;
		}
		else
		{
			__LIB_15__.func_119();
		}
		__LIB_1__.func_778();
		__LIB_1__.func_777(1, 1);
		__LIB_1__.func_786(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
		__LIB_12__.func_681(1);
		if (__LIB_1__.func_212())
		{
			__LIB_1__.func_776();
		}
		if (!__LIB_6__.func_869(PLAYER::PLAYER_ID()))
		{
			__LIB_8__.func_104(4);
		}
		__LIB_0__.func_950();
		__LIB_1__.func_774(0);
		__LIB_1__.func_773();
		Global_1837290 = 0;
	}
	if (!__LIB_1__.func_215())
	{
		__LIB_1__.func_772();
		if (__LIB_1__.func_771())
		{
			if (__LIB_1__.func_770())
			{
				__LIB_1__.func_778();
			}
		}
		__LIB_12__.func_681(1);
		if (!__LIB_0__.func_747())
		{
			Global_2715699.f_6325 = 0;
			Global_2715699.f_6326 = 0;
			Global_2715699.f_6324 = 0;
			Global_2715699.f_6323 = 0;
			Global_2715699.f_6504 = 0;
		}
	}
	else
	{
		__LIB_1__.func_769(PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__.func_768((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_13__.func_122((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_1__.func_767((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	__LIB_1__.func_766((Global_1922955.f_9 != 4 && !__LIB_1__.func_215()));
	if (__LIB_0__.func_747())
	{
		Global_2715699.f_6415 = 1;
	}
	else
	{
		Global_2715699.f_6415 = 0;
	}
	if (!__LIB_1__.func_215())
	{
		if (__LIB_0__.func_747())
		{
			Global_2715699.f_6416 = 1;
		}
		else
		{
			Global_2715699.f_6416 = 0;
		}
	}
	if (__LIB_6__.func_931())
	{
		if (__LIB_1__.func_765())
		{
			Global_2715699.f_6417 = 1;
		}
		else
		{
			Global_2715699.f_6417 = 0;
		}
	}
	if (!__LIB_0__.func_910())
	{
		Global_1922981.f_1345 = 0;
	}
	if (!__LIB_1__.func_215() && !__LIB_0__.func_910())
	{
		__LIB_1__.func_777(1, Global_1922955.f_9 != 4);
		__LIB_1__.func_786(1, 1, 0);
		__LIB_13__.func_121(0);
		__LIB_0__.func_371();
		Global_1837292 = 0;
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_7__.func_49(1, -1);
	if (__LIB_1__.func_764())
	{
		__LIB_1__.func_763();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE();
	}
	if ((!__LIB_0__.func_698() && !__LIB_1__.func_215()) && !__LIB_0__.func_697())
	{
		__LIB_18__.func_435();
	}
	Global_4718592.f_117077 = 0;
	__LIB_0__.func_744();
	Global_1836352 = -1;
	Global_1888192 = -1;
	Global_1888182 = -1;
	Global_1888185 = -1;
	Global_1836357 = 0;
	Global_1888183 = 0;
	Global_1836581 = 0;
	Global_1836573 = 0;
	Global_1888193 = 0;
	__LIB_1__.func_762(0);
	__LIB_1__.func_761();
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 7);
	Global_1888180 = 0f;
	Global_1888181 = 0f;
	Global_1836582 = 0;
	Global_1836583 = -1;
	__LIB_1__.func_21(0);
	Global_1836571 = 0;
	Global_1836091 = 0;
	__LIB_1__.func_760();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	__LIB_1__.func_759(1);
	if (__LIB_1__.func_758())
	{
		__LIB_1__.func_757();
	}
	if (__LIB_0__.func_912())
	{
		if (__LIB_4__.func_760(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				__LIB_1__.func_756();
				__LIB_1__.func_755(1);
			}
			else
			{
				__LIB_1__.func_754();
			}
			if (Global_1922955.f_9 != -1)
			{
				__LIB_27__.func_96();
			}
		}
		else if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
		{
			if (Global_1922955.f_9 != -1)
			{
				__LIB_27__.func_96();
			}
		}
	}
	bVar4 = __LIB_0__.func_611(iVar0);
	Global_1853348[iVar0 /*834*/].f_194 = 0;
	if (bVar4 && !__LIB_0__.func_910())
	{
		__LIB_1__.func_753();
	}
	if (!bVar4)
	{
		__LIB_1__.func_752(0);
	}
	if ((__LIB_0__.func_742() != 40 && __LIB_0__.func_742() != 39) && !__LIB_1__.func_751())
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
	if (__LIB_1__.func_750() && __LIB_0__.func_80())
	{
	}
	else
	{
		__LIB_1__.func_749();
	}
	__LIB_1__.func_748();
	__LIB_1__.func_755(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1922955.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!__LIB_1__.func_747())
		{
			__LIB_1__.func_746(0, bVar6);
		}
	}
	NETWORK::NETWORK_SET_PROXIMITY_AFFECTS_TEAM(false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1922955.f_9)
		{
			case 1:
				if (!__LIB_1__.func_300() && func_646(0) > 0)
				{
					Global_1941273[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					__LIB_15__.func_514();
					__LIB_0__.func_849();
				}
				break;
			case 6:
				Global_1837290 = 0;
				if (!bVar4)
				{
					__LIB_15__.func_514();
				}
				__LIB_0__.func_849();
				Global_1922955 = 0;
				Global_1922955.f_23 = { 0f, 0f, 0f };
				MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
				StringCopy(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224), "", 24);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { 0f, 0f, 0f };
				__LIB_1__.func_745(0);
				break;
			case 2:
				__LIB_1__.func_744(0);
				if (!__LIB_1__.func_743() || (__LIB_1__.func_743() && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2714762.f_33))))
				{
					__LIB_1__.func_742(Global_1922955.f_17);
					__LIB_1__.func_741(Global_1922955.f_17);
				}
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__.func_160())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__.func_604(iVar5) };
					}
					else
					{
						iVar7 = 1;
					}
				}
				else
				{
					iVar7 = 1;
				}
				if ((iVar7 && __LIB_1__.func_743()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2715699.f_5987 = { __LIB_0__.func_593() };
				}
				if (((((Global_4718592.f_593 > 1 && !__LIB_12__.func_676()) && !__LIB_1__.func_735(Global_4718592.f_116524)) && !__LIB_1__.func_734(Global_4718592.f_116524)) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4)
				{
					__LIB_1__.func_733(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_1__.func_732();
				}
				break;
			case 3:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__.func_160())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__.func_604(iVar5) };
					}
				}
				if (((Global_4718592.f_593 > 1 && !__LIB_12__.func_676()) && !__LIB_1__.func_735(Global_4718592.f_116524)) && !__LIB_1__.func_734(Global_4718592.f_116524))
				{
					__LIB_1__.func_733(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_1__.func_732();
				}
				break;
			case 4:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				if (__LIB_0__.func_942())
				{
					__LIB_1__.func_730();
				}
				else if (__LIB_0__.func_633())
				{
				}
				else
				{
					if (!(__LIB_1__.func_206() || __LIB_0__.func_747()) || !__LIB_0__.func_725())
					{
						Global_2715699.f_6325 = 0;
						Global_2715699.f_6326 = 0;
					}
					if (!__LIB_0__.func_725())
					{
						Global_2715699.f_6324 = 0;
						Global_2715699.f_6323 = 0;
					}
				}
				if (__LIB_0__.func_693(PLAYER::PLAYER_ID()) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (__LIB_0__.func_175())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (__LIB_7__.func_47())
				{
					Global_1944501.f_17++;
				}
				else if (__LIB_0__.func_490())
				{
					Global_1944587.f_18++;
				}
				else if ((__LIB_0__.func_247(Global_4718592.f_116524) || __LIB_0__.func_699(Global_4718592.f_116524)) || (__LIB_7__.func_23() && __LIB_0__.func_827(249)))
				{
					Global_1944719.f_18++;
				}
				if (__LIB_0__.func_835(Global_4718592.f_116524))
				{
					if (Global_1944421.f_14 == 0)
					{
						Global_1944421.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (__LIB_1__.func_729() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							__LIB_1__.func_728(Global_4718592.f_116980);
						}
						else
						{
							__LIB_1__.func_727(Global_4718592.f_165269, Global_4718592.f_165270);
						}
						if (Global_1922955.f_14 > -1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1922955.f_14, Global_1922955.f_15, 0);
						}
						else if (__LIB_1__.func_726() > -1)
						{
							__LIB_7__.func_46(__LIB_1__.func_726(), 0);
						}
					}
					else
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(__LIB_1__.func_729(), 0, 0);
					}
				}
				if (__LIB_0__.func_941())
				{
					Var8 = { __LIB_0__.func_940() };
					__LIB_1__.func_725(Var8);
					if (__LIB_1__.func_724() != -1)
					{
						Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_1__.func_724();
					}
					__LIB_1__.func_723();
					__LIB_1__.func_722();
				}
				else
				{
					__LIB_1__.func_731();
				}
				if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_7__.func_176(0, 0, 1);
				}
				break;
			case 5:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				break;
			case 8:
				if (!__LIB_1__.func_743())
				{
					__LIB_1__.func_742(Global_1922955.f_17);
				}
				break;
			case 9:
				__LIB_1__.func_744(0);
				iVar2 = 1;
				__LIB_1__.func_731();
				__LIB_1__.func_741(Global_4718592.f_116811);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { Global_4718592.f_116811 };
				if (__LIB_1__.func_721())
				{
					__LIB_1__.func_720();
				}
				if (!__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_7__.func_176(0, 0, 1);
				}
				break;
			case 10:
				__LIB_27__.func_393(10, 0f, 0f, 0f, Var9);
				__LIB_1__.func_719();
				break;
		}
	}
	else
	{
		Global_1837290 = 0;
	}
	if (iVar2 || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_1__.func_718(PLAYER::PLAYER_ID()) || __LIB_0__.func_693(PLAYER::PLAYER_ID())) || __LIB_0__.func_694(PLAYER::PLAYER_ID()))
		{
			if (Global_1931908 > 0)
			{
				Global_2715699.f_1.f_2828.f_13 = Global_1931908;
				Global_2715699.f_1.f_2828 = { Global_1931908.f_1 };
			}
		}
		else
		{
			__LIB_1__.func_717();
		}
	}
	Global_2715699.f_1.f_842 = 0;
	MISC::CLEAR_BIT(&Global_1836095, 0);
	__LIB_1__.func_716(0);
	Global_1836362 = 0;
	Global_1836566 = -1;
	Global_1888110 = 0;
	Global_1574602 = 0;
	Global_1922955.f_1 = 0;
	Global_1922955.f_2 = 0;
	if (__LIB_1__.func_715() == 0)
	{
		if (Global_1922955.f_9 == -1 && bVar4 == 0)
		{
			__LIB_27__.func_95(0);
		}
		else
		{
			Global_1922955.f_9 = -1;
		}
	}
	__LIB_1__.func_710();
	if (__LIB_1__.func_709())
	{
		__LIB_1__.func_708();
	}
	if (__LIB_1__.func_203())
	{
		__LIB_1__.func_707();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	if (__LIB_1__.func_715() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!__LIB_1__.func_706(Global_1853348[iVar0 /*834*/]) && !__LIB_0__.func_698()) && !bVar4) && !__LIB_0__.func_155(0)) && !__LIB_1__.func_215()) && !__LIB_0__.func_697())
			{
				__LIB_1__.func_705(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	__LIB_1__.func_704();
	Global_1922955.f_1 = 0;
	if (!__LIB_0__.func_912())
	{
		__LIB_1__.func_703();
	}
	if (Global_1853348[iVar0 /*834*/] != -1)
	{
		iParam2 = iParam2;
		if (__LIB_1__.func_702(Global_1853348[iVar0 /*834*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar10 = __LIB_33__.func_143(0);
				func_526(1213, -1);
				__LIB_19__.func_928(joaat("MPPLY_MGAME_CHEAT_END"), iVar10);
				if (iVar10 > 0)
				{
					__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_ENDED"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
	}
	__LIB_21__.func_602();
	if (Global_1922955 == 0)
	{
		if (!bVar4)
		{
			Global_1853348[iVar0 /*834*/].f_10 = -1;
			MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 1);
		}
	}
	if (bVar4)
	{
		__LIB_1__.func_705(0);
		MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 1);
		Global_1853348[iVar0 /*834*/].f_10 = __LIB_1__.func_691(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		__LIB_7__.func_176(0, 0, 1);
		if (__LIB_1__.func_690())
		{
			__LIB_20__.func_926();
		}
	}
	if ((Global_1853348[iVar0 /*834*/] < 10 && Global_1853348[iVar0 /*834*/] != -1) && !__LIB_0__.func_155(0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1853348[iVar0 /*834*/].f_144)) && Global_1853348[iVar0 /*834*/] != 5) && Global_1853348[iVar0 /*834*/] != 148)
		{
			func_512(&(Global_1853348[iVar0 /*834*/].f_144));
		}
	}
	if (Global_1853348[iVar0 /*834*/] != 6)
	{
		Global_1922902 = 1;
	}
	Global_1853348[iVar0 /*834*/] = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_2 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_16 = -1;
	Global_1853348[iVar0 /*834*/].f_36.f_1 = -1;
	Global_4718592 = 0;
	if (!bVar4)
	{
		__LIB_1__.func_687(0);
	}
	Global_1853348[iVar0 /*834*/].f_36.f_18 = 0;
	MISC::CLEAR_BIT(&(Global_1853348[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*834*/].f_768), 0);
	HUD::SET_MISSION_NAME_FOR_UGC_MISSION(false, 0);
	if (iVar1 != 6 && iVar1 != 148)
	{
		HUD::THEFEED_FLUSH_QUEUE();
		Global_2726719 = 0;
	}
	if (!bVar4)
	{
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_144), sVar11, 24);
		StringCopy(&(Global_1853348[iVar0 /*834*/].f_150), sVar11, 24);
		__LIB_1__.func_686();
	}
	StringCopy(&(Global_1880037[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853348[iVar0 /*834*/].f_164), sVar11, 64);
	Global_1888862[iVar0 /*120*/].f_31 = { Var12 };
	Global_1888862[iVar0 /*120*/].f_33 = { Var12 };
	Global_1836576 = 0;
	Global_1836577 = 0;
	Global_1836103 = -1;
	bVar13 = false;
	__LIB_1__.func_685();
	__LIB_1__.func_684();
	__LIB_1__.func_683();
	if (__LIB_1__.func_682())
	{
		__LIB_1__.func_681();
	}
	if (__LIB_1__.func_680() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_1__.func_679();
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 0, 57348, 0);
	}
	if (__LIB_1__.func_678())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_239())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_240())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_676())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_675())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_715())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_0__.func_194() && __LIB_1__.func_674())
	{
		__LIB_1__.func_677();
	}
	else if (__LIB_1__.func_673())
	{
		__LIB_1__.func_677();
	}
	else
	{
		__LIB_1__.func_672();
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 1) && !__LIB_0__.func_910())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (__LIB_1__.func_690())
				{
					__LIB_1__.func_671();
				}
				else
				{
					if (!BitTest(Global_4718592.f_28, 10))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							Global_2715699.f_2846.f_198 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
						}
					}
					__LIB_1__.func_670();
					__LIB_0__.func_950();
					__LIB_1__.func_605(6);
					__LIB_0__.func_849();
					if (bVar4)
					{
						__LIB_1__.func_774(0);
					}
				}
				__LIB_1__.func_669();
				__LIB_1__.func_668();
				__LIB_1__.func_667();
				if (Global_2715699.f_2846.f_4 == 2)
				{
					Global_2715699.f_2846.f_4 = 1;
				}
				if (__LIB_6__.func_768(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_1__.func_666();
				}
				__LIB_1__.func_665();
				Global_2715699.f_2846 = 0;
			}
			else
			{
				__LIB_1__.func_664();
				__LIB_1__.func_677();
			}
		}
		else
		{
			if (!__LIB_0__.func_747() && !__LIB_0__.func_910())
			{
			}
			__LIB_1__.func_664();
			__LIB_1__.func_677();
		}
	}
	if ((((((((((!__LIB_1__.func_678() && !__LIB_1__.func_663()) && !__LIB_1__.func_674()) && !__LIB_0__.func_194()) && !__LIB_1__.func_240()) && !__LIB_1__.func_239()) && !__LIB_1__.func_238()) && !__LIB_1__.func_675()) && !__LIB_1__.func_715()) && !__LIB_1__.func_676()) && !__LIB_1__.func_662())
	{
		if (!__LIB_0__.func_739())
		{
			__LIB_1__.func_661();
			__LIB_20__.func_934();
			__LIB_1__.func_659();
			__LIB_7__.func_694(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!__LIB_1__.func_657())
				{
					if (!bVar13)
					{
						if (__LIB_6__.func_869(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__.func_155(0))
	{
		StringCopy(&(Global_4718592.f_116531), "", 64);
	}
	if (__LIB_1__.func_656(116, &iVar14))
	{
		__LIB_1__.func_655(iVar14);
	}
	if (__LIB_1__.func_656(123, &iVar14))
	{
		__LIB_1__.func_655(iVar14);
	}
	if (!__LIB_0__.func_910())
	{
		__LIB_24__.func_986();
	}
	else if (__LIB_1__.func_654())
	{
		__LIB_1__.func_653();
	}
	__LIB_1__.func_652();
	if (!__LIB_1__.func_215() && !__LIB_0__.func_747())
	{
		__LIB_1__.func_651();
	}
	__LIB_1__.func_650();
	__LIB_13__.func_119();
	func_428(bParam3);
}

void func_428(bool bParam0)//Position - 0x17E30
{
	var uVar0;
	if (bParam0)
	{
		if (__LIB_0__.func_912())
		{
		}
		else if ((((!__LIB_1__.func_215() && !__LIB_0__.func_747()) && !__LIB_0__.func_910()) && Global_1922955.f_9 != 9) && Global_1922955.f_9 != 4)
		{
			__LIB_7__.func_46(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (!__LIB_0__.func_738(PLAYER::PLAYER_ID()) && !BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
	{
		__LIB_1__.func_649();
	}
	if (__LIB_1__.func_648())
	{
		__LIB_1__.func_647(1);
		__LIB_1__.func_646(1);
		__LIB_1__.func_645(1);
		__LIB_1__.func_644(1);
	}
	if ((((bParam0 && !__LIB_1__.func_224()) && !__LIB_1__.func_215()) && !Global_262145.f_4751 /* Tunable: TURN_SNOW_ON_OFF */) && !__LIB_4__.func_976())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_435(&uVar0, -1);
	if ((__LIB_0__.func_3() == 0 && !__LIB_0__.func_497()) && !__LIB_1__.func_215())
	{
		if (__LIB_1__.func_643())
		{
			__LIB_1__.func_642();
		}
		else
		{
			__LIB_6__.func_881(1147932892, 28, 0);
		}
	}
	__LIB_1__.func_641(0);
}

void func_435(var uParam0, int iParam1)//Position - 0x1807A
{
	func_441(uParam0, iParam1);
	func_436(iParam1);
}

void func_436(int iParam0)//Position - 0x18090
{
	int iVar0;
	int iVar1;
	if (iParam0 == -1)
	{
		iParam0 = __LIB_0__.func_5();
	}
	iVar0 = __LIB_0__.func_737(iParam0);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	if (__LIB_6__.func_781())
	{
		if (BitTest(iVar1, 1))
		{
			__LIB_16__.func_779(133, 1, -1, 1);
		}
	}
}

void func_441(var uParam0, int iParam1)//Position - 0x1816E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	iVar1 = __LIB_1__.func_33(iParam1);
	iVar2 = MISC::GET_PROFILE_SETTING(iVar1);
	if (BitTest(iVar2, 1))
	{
		func_526(1208, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_DM_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 1);
		bVar0 = true;
	}
	if (BitTest(iVar2, 2))
	{
		func_526(1210, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_RACE_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 2);
		bVar0 = true;
	}
	if (BitTest(iVar2, 3))
	{
		func_526(1119, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_MC_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 3);
		bVar0 = true;
	}
	if (BitTest(iVar2, 4))
	{
		func_526(1212, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_MGAME_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 4);
		bVar0 = true;
	}
	if (BitTest(iVar2, 5))
	{
		func_526(1925, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_CAP_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 5);
		bVar0 = true;
	}
	if (BitTest(iVar2, 6))
	{
		func_526(1927, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_SUR_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 6);
		bVar0 = true;
	}
	if (BitTest(iVar2, 7))
	{
		func_526(1929, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_LTS_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 7);
		bVar0 = true;
	}
	if (BitTest(iVar2, 8))
	{
		func_526(1931, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_PARA_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 8);
		bVar0 = true;
	}
	if (BitTest(iVar2, 9))
	{
		func_526(11012, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_HEIST_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 9);
		bVar0 = true;
	}
	if (BitTest(iVar2, 26))
	{
		func_526(1933, iParam1);
		__LIB_19__.func_928(joaat("MPPLY_FMEVN_CHEAT_START"), 2);
		__LIB_19__.func_928(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar2, iParam1);
	}
}

void func_512(char* sParam0)//Position - 0x18E51
{
	var uVar0;
	if ((!__LIB_1__.func_688() && func_513(120, -1)) && !__LIB_0__.func_155(0))
	{
		NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(sParam0, &uVar0, 13);
		if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&uVar0))
			{
			}
		}
	}
}

int func_513(int iParam0, int iParam1)//Position - 0x18E96
{
	int iVar0;
	var uVar1;
	iVar0 = Global_2866852[iParam0 /*3*/][__LIB_16__.func_777(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_526(int iParam0, int iParam1)//Position - 0x1919D
{
	int iVar0;
	iVar0 = func_27(iParam0, __LIB_16__.func_777(iParam1), 0);
	iVar0++;
	if (!__LIB_0__.func_692(iParam0))
	{
		func_64(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_527(iParam0, iVar0, iParam1, 1);
	}
}

void func_527(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x191DE
{
	int iVar0;
	iVar0 = Global_2826809[iParam0 /*3*/][__LIB_16__.func_777(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 789:
			Global_1659693[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 790:
			Global_1659699[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 791:
			Global_1659705[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8729:
			Global_1659711[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 778:
			Global_1659657[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 779:
			Global_1659663[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 780:
			Global_1659669[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 781:
			Global_1659675[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8731:
			Global_1659681[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 768:
			Global_1659627[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 769:
			Global_1659633[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 770:
			Global_1659639[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 771:
			Global_1659645[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8733:
			Global_1659651[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 758:
			Global_1659717[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 759:
			Global_1659723[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 760:
			Global_1659729[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 761:
			Global_1659735[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8735:
			Global_1659741[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 1304:
			Global_1659747[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 7236:
			Global_1659753[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 640:
			Global_1659759[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 1279:
			Global_1659765[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 1878:
			Global_2869777[0 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 2269:
			Global_2869777[1 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 2932:
			Global_2869777[2 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3061:
			Global_2869777[3 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 11391:
			Global_2869950[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 765:
			Global_1659771[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 766:
			Global_1659777[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 767:
			Global_1659783[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8734:
			Global_1659789[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 9538:
			Global_1659795[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 1237:
			Global_1659801[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3056:
			Global_2869862[0 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3057:
			Global_2869862[1 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3058:
			Global_2869862[2 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3059:
			Global_2869862[3 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3060:
			Global_2869862[4 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3639:
			Global_2869953[0 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3640:
			Global_2869953[1 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3641:
			Global_2869953[2 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3642:
			Global_2869953[3 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3643:
			Global_2869953[4 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3644:
			Global_2869969[0 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3645:
			Global_2869969[1 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3646:
			Global_2869969[2 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3647:
			Global_2869969[3 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3648:
			Global_2869969[4 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3224:
			Global_2869862[5 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3230:
			Global_2869777[4 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3666:
			Global_2869985[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3667:
			Global_2869994[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3668:
			Global_2869988[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3669:
			Global_2869997[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3670:
			Global_2869991[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3671:
			Global_2870000[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3692:
			Global_2870003[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3232:
			Global_2869862[6 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3233:
			Global_2869777[5 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3237:
			Global_2869862[7 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 3235:
			Global_2869777[6 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4022:
			Global_2869862[8 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4023:
			Global_2869777[7 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4025:
			Global_2869862[9 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4026:
			Global_2869777[8 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4028:
			Global_2869862[10 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4029:
			Global_2869777[9 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4031:
			Global_2869862[11 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 4032:
			Global_2869777[10 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6112:
			Global_2869862[12 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6113:
			Global_2869777[11 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6170:
			Global_2869862[13 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6171:
			Global_2869777[12 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6548:
			Global_2869862[14 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6549:
			Global_2869777[13 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6561:
			Global_2869862[15 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6562:
			Global_2869777[14 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6564:
			Global_2869862[16 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6565:
			Global_2869777[15 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6567:
			Global_2869862[17 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 6568:
			Global_2869777[16 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 7286:
			Global_2869777[17 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 7288:
			Global_2869777[18 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 7290:
			Global_2869777[19 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8013:
			Global_2869777[20 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8285:
			Global_2870006[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8286:
			Global_2870009[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8287:
			Global_2870012[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8288:
			Global_2870015[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8289:
			Global_2870018[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8290:
			Global_2870021[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8291:
			Global_2870024[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8292:
			Global_2870027[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8293:
			Global_2870030[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8294:
			Global_2870033[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8295:
			Global_2870036[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8296:
			Global_2870039[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8297:
			Global_2870042[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8905:
			Global_2870045[__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8537:
			Global_2869777[21 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8982:
			Global_2869862[23 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8980:
			Global_2869777[22 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8985:
			Global_2869862[24 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 8983:
			Global_2869777[23 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 9624:
			Global_2869777[24 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 9913:
			Global_2869777[25 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 10443:
			Global_2869862[27 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 10441:
			Global_2869777[26 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 10446:
			Global_2869862[28 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		case 10444:
			Global_2869777[27 /*3*/][__LIB_16__.func_777(iParam2)] = iParam1;
			break;
		default:
			break;
	}
}

int func_646(int iParam0)//Position - 0x1B64F
{
	int iVar0;
	if (Global_1941273[iParam0 /*8*/] == -1)
	{
		iVar0 = func_27(__LIB_1__.func_100(iParam0), -1, 0);
		if (iVar0 == -1)
		{
			func_647(iParam0, 0);
			iVar0 = 0;
		}
		Global_1941273[iParam0 /*8*/] = iVar0;
	}
	return Global_1941273[iParam0 /*8*/];
}

void func_647(int iParam0, int iParam1)//Position - 0x1B693
{
	Global_1941273[iParam0 /*8*/] = iParam1;
	func_64(__LIB_1__.func_100(iParam0), iParam1, -1, 1, 0);
}

void func_749(int iParam0, bool bParam1)//Position - 0x1CE09
{
	if (bParam1)
	{
		if (!func_26(iParam0, 18, 1))
		{
			func_65(iParam0, 18, 1);
		}
	}
	else if (func_26(iParam0, 18, 1))
	{
		func_63(iParam0, 18, 1);
	}
}

void func_750()//Position - 0x1CE44
{
	MISC::CLEAR_BIT(&(Global_2815059.f_836), 3);
}

void func_751(bool bParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x1CE58
{
	__LIB_6__.func_916();
	if (bParam0)
	{
		__LIB_7__.func_20(1);
		HUD::CLEAR_HELP(true);
	}
	HUD::CLEAR_PRINTS();
	__LIB_16__.func_821();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_7__.func_279(0, 1, 1, 0, 0, bParam2, 0);
	__LIB_1__.func_32();
	__LIB_0__.func_730(12, 0, -1);
	__LIB_0__.func_731(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__.func_131();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam3)
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
			}
		}
	}
	__LIB_0__.func_83(0);
	if (((((__LIB_0__.func_497() == 0 && __LIB_1__.func_129() == 0) && iParam1) && !__LIB_6__.func_948(PLAYER::PLAYER_ID())) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()) && __LIB_4__.func_715())
	{
		__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
	}
	Global_2703735.f_3428 = 0;
	__LIB_25__.func_1();
}

void func_758(bool bParam0)//Position - 0x1D194
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Global_1574612)
	{
		if (!func_796())
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				Global_1836830[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_794(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = __LIB_0__.func_784(iVar1, bParam0);
	if (!func_791(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_1836830[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1836830[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 303)
	{
		iVar3 = func_790(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_788(iVar4))
			{
				func_778(iVar4, 1);
			}
		}
		iVar4++;
	}
	if (!__LIB_0__.func_114(1))
	{
		func_770(func_771(59, 0, 0), 0);
		func_768(func_771(135, 0, 0), 1);
		func_767(func_771(22, 0, 0), func_771(73, 0, 0));
	}
	else
	{
		func_767(0, 0);
	}
	if (func_766())
	{
		if (func_513(77, -1))
		{
			func_765(1);
			func_764(1);
		}
	}
	if (__LIB_0__.func_189() || __LIB_0__.func_188())
	{
		__LIB_16__.func_779(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_759(28, 1, 0);
			func_759(29, 1, 0);
			func_759(30, 1, 0);
			func_759(31, 1, 0);
			func_759(32, 1, 0);
			func_759(33, 1, 0);
			func_759(34, 1, 0);
			func_759(35, 1, 0);
			func_759(36, 1, 0);
			func_759(37, 1, 0);
			func_759(38, 1, 0);
		}
	}
	if (func_771(21, 0, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_1057411 = 0;
}

void func_759(int iParam0, bool bParam1, int iParam2)//Position - 0x1D34D
{
	if (bParam1)
	{
		if (!func_26(iParam0, 0, 0))
		{
			if (iParam2 && Global_100493.f_18[iParam0])
			{
				if (__LIB_0__.func_299(iParam0) == 3 && !func_25(iParam0))
				{
					func_760(iParam0);
					func_65(iParam0, 0, 0);
					func_63(iParam0, 1, 0);
					__LIB_1__.func_285(iParam0);
				}
				else
				{
					func_65(iParam0, 1, 0);
					__LIB_1__.func_285(iParam0);
				}
			}
			else
			{
				func_65(iParam0, 0, 0);
				func_63(iParam0, 1, 0);
				__LIB_1__.func_285(iParam0);
			}
		}
		else
		{
			func_63(iParam0, 1, 0);
			__LIB_1__.func_285(iParam0);
		}
	}
	else if (func_26(iParam0, 0, 0))
	{
		func_63(iParam0, 0, 0);
		func_63(iParam0, 1, 0);
		__LIB_1__.func_285(iParam0);
	}
}

void func_760(int iParam0)//Position - 0x1D40C
{
	if (Global_100493.f_18[iParam0])
	{
		func_65(iParam0, 10, 1);
		func_65(iParam0, 19, 1);
	}
}

void func_764(bool bParam0)//Position - 0x1D75A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_759(28, bParam0, 0);
	func_759(30, bParam0, 0);
	func_759(31, bParam0, 0);
	func_759(33, bParam0, 0);
	func_759(34, bParam0, 0);
	func_759(38, bParam0, 0);
}

void func_765(bool bParam0)//Position - 0x1D7A3
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_759(29, bParam0, 0);
	func_759(32, bParam0, 0);
	func_759(36, bParam0, 0);
	func_759(35, bParam0, 0);
	func_759(37, bParam0, 0);
}

int func_766()//Position - 0x1D7E3
{
	if (!func_796())
	{
		return 0;
	}
	return 1;
}

void func_767(bool bParam0, bool bParam1)//Position - 0x1D7F8
{
	bool bVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_759(0, bParam0, 1);
	func_759(1, bParam0, 1);
	func_759(2, bParam0, 1);
	func_759(3, bParam0, 1);
	func_759(4, bParam0, 1);
	func_759(5, bParam0, 1);
	func_759(6, bParam0, 1);
	func_759(7, bParam0, bVar0);
	func_759(8, bParam0, 1);
	func_759(9, bParam0, 1);
	func_759(10, bParam0, 1);
	func_759(11, bParam0, 1);
	func_759(12, bParam0, bVar0);
	func_759(13, bParam0, 1);
	func_759(21, bParam0, 1);
	func_759(14, bParam0, 1);
	func_759(15, bParam0, 1);
	func_759(16, bParam0, 1);
	func_759(17, bParam0, 1);
	func_759(18, bParam0, 1);
	func_759(19, bParam0, 1);
	func_759(20, bParam0, 1);
	func_759(22, bParam0, 1);
	func_759(23, bParam0, 1);
	func_759(24, bParam0, 1);
	func_759(25, bParam0, 1);
	func_759(26, bParam0, 1);
	func_759(27, bParam0, 1);
	__LIB_2__.func_52(1, !bParam1);
	if (!bVar0)
	{
		func_760(12);
	}
}

void func_768(bool bParam0, bool bParam1)//Position - 0x1D920
{
	var uVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_769(0);
	if (Global_262145.f_63 /* Tunable: DISABLE_SUPER_MOD_RANK_CHECK */ == 1 && func_771(135, 0, 0))
	{
		bParam0 = true;
	}
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_759(44, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(44))
		{
			func_760(44);
		}
	}
	if (bParam0)
	{
		if (func_646(0) > 1)
		{
			MISC::SET_BIT(&(Global_2815059.f_1798), 10);
		}
	}
}

int func_769(bool bParam0)//Position - 0x1D9A6
{
	var uVar0;
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!BitTest(Global_2815059.f_1789, 26))
		{
			uVar0 = func_27(1192, -1, 0);
			if (!BitTest(uVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_513(122, -1);
}

void func_770(bool bParam0, bool bParam1)//Position - 0x1DA01
{
	var uVar0;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_769(0);
	func_759(39, bParam0, 0);
	func_759(40, bParam0, 0);
	func_759(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_759(43, bParam0, 0);
		func_759(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_25(39))
		{
			func_760(39);
		}
		if (!func_25(40))
		{
			func_760(40);
		}
		if (!func_25(41))
		{
			func_760(41);
		}
		if (!func_25(42))
		{
			func_760(42);
		}
		if (!func_25(43))
		{
			func_760(43);
		}
	}
}

int func_771(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DAB2
{
	int iVar0;
	int iVar1;
	if (Global_262145.f_8145 /* Tunable: SET_ALL_PHONE_SERVICES_AVAILABLE */ == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_773(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4746 /* Tunable: RANK_RESTRICTION_CRATE_DROP */ == 1)
		{
			return 1;
		}
	}
	if (__LIB_0__.func_189() || __LIB_0__.func_188())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_772())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return BitTest(Global_1836830[iVar1], iVar0);
}

int func_772()//Position - 0x1DC1D
{
	var uVar0;
	if (Global_1574612)
	{
		return 1;
	}
	if (BitTest(Global_2815059.f_1794, 23))
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_16__.func_777(-1)];
	if (BitTest(uVar0, 7))
	{
		MISC::SET_BIT(&(Global_2815059.f_1794), 23);
		return 1;
	}
	return 0;
}

int func_773(int iParam0, int iParam1)//Position - 0x1DC7D
{
	if (!func_766())
	{
		return 0;
	}
	if (__LIB_0__.func_701())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return __LIB_0__.func_287(&(Global_1853348[iParam0 /*834*/].f_765), __LIB_0__.func_700(iParam1));
}

void func_778(int iParam0, bool bParam1)//Position - 0x1DEC0
{
	int iVar0;
	int iVar1;
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_787(-1))
			{
				if (!func_796())
				{
					return;
				}
			}
			if (!func_787(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_786() && !__LIB_2__.func_54())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_784())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_787(-1))
				{
					if (!func_779())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1836830[iVar1]), iVar0);
	}
}

int func_779()//Position - 0x1DF59
{
	var uVar0;
	if (__LIB_2__.func_53(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_16__.func_777(-1)];
	if (BitTest(uVar0, 2))
	{
		__LIB_18__.func_464(1);
		return 1;
	}
	return 0;
}

int func_784()//Position - 0x1E078
{
	var uVar0;
	if (BitTest(Global_2815059.f_1794, 6))
	{
		return 1;
	}
	uVar0 = Global_1659747[__LIB_16__.func_777(-1)];
	if (BitTest(uVar0, 0))
	{
		if (!BitTest(Global_2815059.f_1794, 6))
		{
			MISC::SET_BIT(&(Global_2815059.f_1794), 6);
		}
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return 0;
}

int func_786()//Position - 0x1E0EF
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return func_513(121, -1);
}

bool func_787(int iParam0)//Position - 0x1E11F
{
	return func_513(123, iParam0);
}

int func_788(int iParam0)//Position - 0x1E12F
{
	var uVar0;
	bool bVar1;
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 156:
		case 136:
		case 138:
		case 137:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 148:
		case 135:
		case 130:
			bVar1 = iParam0;
			bVar1 = (bVar1 % 32);
			uVar0 = func_27(__LIB_1__.func_102(iParam0), -1, 0);
			if (BitTest(uVar0, bVar1))
			{
				return 1;
			}
			break;
		default:
			return 1;
			break;
	}
	return 0;
}

int func_790(int iParam0)//Position - 0x1E40D
{
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
		case 156:
		case 121:
		case 96:
		case 128:
			return 1;
		case 21:
			return 2;
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_787(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		case 23:
		case 102:
		case 110:
			return 5;
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		case 97:
		case 107:
			return 7;
		case 4:
			return 8;
		case 19:
			return 8;
		case 29:
			return 10;
		case 8:
			return 11;
		case 61:
		case 119:
			return 12;
		case 89:
			return 13;
		case 31:
			return 14;
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		case 109:
		case 88:
			return 16;
		case 74:
		case 100:
			return 17;
		case 6:
			return 18;
		case 20:
			return 19;
		case 62:
		case 108:
		case 130:
			return 20;
		case 65:
		case 93:
			return 21;
		case 63:
		case 104:
			return 25;
		case 77:
		case 106:
			return 30;
		case 81:
		case 98:
			return 35;
		case 75:
		case 95:
			return 40;
		case 105:
			return 45;
			break;
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_791(int iParam0)//Position - 0x1E6D5
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return func_513(119, iParam0);
}

int func_794(int iParam0, bool bParam1)//Position - 0x1E7D9
{
	if (bParam1)
	{
	}
	return func_795(iParam0);
}

int func_795(int iParam0)//Position - 0x1E7EC
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[__LIB_16__.func_777(-1)];
			}
			else if (__LIB_0__.func_640(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[__LIB_16__.func_777(-1)];
	}
	return 0;
}

int func_796()//Position - 0x1E849
{
	if (Global_1574612)
	{
		return 1;
	}
	if (__LIB_0__.func_189())
	{
		return 1;
	}
	if (__LIB_0__.func_188())
	{
		return 1;
	}
	return func_513(120, -1);
}

void func_803(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1E96F
{
	int iVar0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, Param0.f_16);
	__LIB_1__.func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_414, 7, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_581, 11, 0);
	Global_1853348[PLAYER::PLAYER_ID() /*834*/] = 16;
	if (bLocal_590)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		if (!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				iVar0 = PLAYER::PLAYER_ID() + 32;
				NETWORK::NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(1, iVar0);
				__LIB_16__.func_772(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!__LIB_0__.func_672())
	{
		func_424(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_749(iLocal_61, 1);
	func_426(1);
	if (!bLocal_590)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_18__.func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	Global_2815059.f_1789 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.74243f, -2734.2646f, 14.919123f, -1082.9584f, -2675.189f, 26.016474f, 39.375f, false, false, false);
	func_806();
	func_804();
	Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_804()//Position - 0x1EA76
{
	NETWORK::NETWORK_BLOCK_INVITES(true);
	func_805(1, -1);
	NETWORK::NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(true);
	if (func_513(133, -1))
	{
		__LIB_16__.func_779(133, 0, -1, 1);
	}
	Global_2714762.f_743 = 1;
}

void func_805(bool bParam0, int iParam1)//Position - 0x1EAA9
{
	int iVar0;
	int iVar1;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__.func_5();
	}
	switch (bParam0)
	{
		case 0:
			STATS::SET_FREEMODE_PROLOGUE_DONE(0, iParam1);
			break;
		default:
			iVar1 = __LIB_0__.func_737(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (BitTest(iVar0, bParam0))
			{
				MISC::CLEAR_BIT(&iVar0, bParam0);
				STATS::SET_FREEMODE_PROLOGUE_DONE(iVar0, iParam1);
			}
			break;
	}
	switch (bParam0)
	{
		case 0:
			__LIB_16__.func_779(120, 0, iParam1, 1);
			__LIB_16__.func_779(124, 0, iParam1, 1);
			__LIB_16__.func_779(115, 0, iParam1, 1);
			__LIB_16__.func_779(119, 0, iParam1, 1);
			break;
	}
}

void func_806()//Position - 0x1EB3A
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_584);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.9354f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_584);
}

