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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	char* sLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	struct<3> Local_88 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int* iLocal_98 = NULL;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int* iLocal_101 = NULL;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int* iLocal_104 = NULL;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	int* iLocal_107 = NULL;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int* iLocal_110 = NULL;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int* iLocal_113 = NULL;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 16;
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
	var uLocal_281 = 1;
	var uLocal_282 = 0;
	int iLocal_283[3] = { 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299[4] = { 0, 0, 0, 0 };
	struct<7> Local_300[4];
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
	float fLocal_319 = 0f;
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
	var uLocal_348 = 15;
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
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 1;
	int iLocal_622 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
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
	Local_56 = { 0f, 0f, 0f };
	iLocal_72 = -1;
	iLocal_74 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_85 = -1;
	iLocal_284 = -1;
	fLocal_319 = ((0.05f + 0.275f) - 0.01f);
	if (Global_3)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_23__::func_339(PLAYER::PLAYER_ID(), 1))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		if (__LIB_38__::func_573(PLAYER::PLAYER_ID(), 1))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (__LIB_0__::isGlobal_43052EqualsValue(13) || __LIB_0__::isGlobal_43052EqualsValue(14))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_551() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_542();
			func_541(1);
			func_536(&uLocal_348);
		}
	}
	SYSTEM::WAIT(0);
	iLocal_90 = iScriptParam_622;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_535();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, PLAYER::PLAYER_ID());
		__LIB_0__::func_895(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}
	func_529();
	func_528(128);
	while (iLocal_60)
	{
		bVar0 = true;
		__LIB_31__::func_752(&uLocal_348);
		if (func_551())
		{
			if (func_524(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_528(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (!func_524(1024) && func_524(2048))
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90))
			{
				bVar0 = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				bVar0 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
		}
		if (!func_551() || !func_524(2048))
		{
			func_517();
			if (func_551())
			{
				func_516();
				if (func_524(128))
				{
					iLocal_60 = 0;
				}
			}
			if (func_511())
			{
				if (bVar0)
				{
					if (iLocal_285 > 0)
					{
						func_506(&uLocal_348);
					}
					func_504();
					func_502();
					switch (iLocal_285)
					{
						case 0:
							if (iLocal_284 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_90))
								{
									iLocal_284 = func_501();
								}
								else if (func_499())
								{
									iLocal_284 = 4;
								}
							}
							else if (func_494())
							{
								if (func_493())
								{
									if (func_551())
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
										}
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_90, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
									}
								}
								iLocal_285 = 1;
								__LIB_0__::func_467("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						case 1:
							if (__LIB_1__::func_490(iLocal_49, 4096))
							{
								func_490();
							}
							if (func_489())
							{
								iLocal_285 = 2;
								__LIB_0__::func_467("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_484())
							{
								iLocal_285 = 3;
								__LIB_38__::func_574(&iLocal_49, 64);
								Global_32112 = 1;
								__LIB_0__::func_467("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						case 2:
							func_98(&uLocal_348);
							break;
						case 3:
							func_3();
							break;
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			__LIB_0__::func_467();
		}
		SYSTEM::WAIT(0);
	}
	if (__LIB_1__::func_490(iLocal_49, 2))
	{
	}
	__LIB_0__::func_467(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_542();
	func_536(&uLocal_348);
}

void func_2(bool bParam0)//Position - 0x369
{
	if (bParam0)
	{
		iLocal_60 = 1;
	}
	else
	{
		iLocal_60 = 0;
	}
}

void func_3()//Position - 0x37F
{
	if (iLocal_286 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_91))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
				{
					func_97();
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91) || ENTITY::IS_ENTITY_DEAD(iLocal_91, false))
	{
		func_96(15);
	}
	switch (iLocal_286)
	{
		case 0:
			if (!iLocal_287 == 0)
			{
				iLocal_286 = 1;
			}
			break;
		case 1:
			func_89();
			break;
		case 2:
			func_88();
			break;
		case 3:
			func_71();
			break;
		case 4:
			func_62();
			break;
		case 5:
			func_59();
			break;
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_91))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, iLocal_91, 12f, 12f, 5f, false, true, 0))
					{
						__LIB_0__::func_467("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_91, iLocal_92, Local_88, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_92) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_286 = 8;
			}
			break;
		case 8:
			if (SYSTEM::VDIST2(Local_88, ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
			{
				iLocal_288 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_286 = 11;
			}
			if (func_55(iLocal_91))
			{
				func_96(15);
			}
			break;
		case 11:
			func_4();
			break;
		case 12:
			func_96(15);
			break;
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_90) && ENTITY::DOES_ENTITY_EXIST(iLocal_92))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_91, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_90, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()//Position - 0x5BF
{
	switch (iLocal_293)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(iLocal_90, 0.916f);
			if (func_42(iLocal_91))
			{
				__LIB_1__::func_31(&iLocal_113);
				iLocal_293 = 1;
			}
			break;
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_90, false)) < 22500f)
			{
				__LIB_0__::func_646();
			}
			func_35(iLocal_92);
			if (func_33(iLocal_91))
			{
				__LIB_0__::func_787(&uLocal_116, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
			if (__LIB_2__::func_572(&iLocal_113) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					__LIB_38__::func_475(&iLocal_49, 512);
					iLocal_293 = 3;
				}
			}
			break;
		case 3:
			func_96(15);
			break;
		case 5:
			func_96(15);
			break;
	}
}

int func_33(int iParam0)//Position - 0x1040
{
	if (__LIB_16__::func_926())
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(iParam0), ENTITY::GET_ENTITY_COORDS(iParam0, true), true))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(int iParam0)//Position - 0x1080
{
	if (iLocal_288 != 1 && iLocal_288 != 2)
	{
		return;
	}
	if (func_37())
	{
		func_36(&iParam0);
	}
}

void func_36(var uParam0)//Position - 0x10AA
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var1 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, Var0, Var1, 0, true, true, true, true, false);
	}
}

bool func_37()//Position - 0x10E5
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_90, joaat("sex_bounce"));
}

int func_42(int iParam0)//Position - 0x1150
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_61))
	{
		sLocal_61 = __LIB_42__::func_680(iParam0, 0, 0);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_61))
	{
		return 0;
	}
	else
	{
		func_43(iLocal_90, func_49(), 1, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_43(iParam0, func_49(), 0, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_70) / 2f)))), 1);
		}
		__LIB_0__::func_467("anim_dict has loaded, triggering anims?");
		__LIB_38__::func_574(&iLocal_49, 512);
		return 1;
	}
	return 0;
}

void func_43(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x11DF
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return;
	}
	iLocal_48 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && __LIB_38__::func_570(0, 1))
	{
		if (iLocal_48 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = __LIB_39__::func_698(iVar0);
	sVar2 = __LIB_42__::func_680(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_39__::func_705(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_39__::func_705(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_39__::func_705(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_39__::func_705(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0f, false, false, false);
		TASK::TASK_PLAY_ANIM(0, sVar2, __LIB_39__::func_705(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0f, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar3);
		if (bParam4)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		}
	}
}

bool func_49()//Position - 0x1ABA
{
	return iLocal_288 == 0;
}

int func_55(int iParam0)//Position - 0x1B91
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0) || !__LIB_1__::func_606(iParam0, iLocal_92, -1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, true);
			if (__LIB_0__::func_680())
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, true, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(iParam0), false))
			{
				TASK::TASK_COMBAT_PED(iParam0, PED::GET_PEDS_JACKER(iParam0), 0, 16);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, true, true);
			}
		}
	}
	return 0;
}

float func_58(int iParam0)//Position - 0x1C7F
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
	Var1 = { Local_88 };
	if (iParam0 == 0)
	{
		if (Var0.f_0 < Var1.f_0)
		{
			return (Var0.f_0 - 20f);
		}
		else
		{
			return (Var1.f_0 - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var1.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var1.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.f_0 > Var1.f_0)
		{
			return (Var0.f_0 + 20f);
		}
		else
		{
			return (Var1.f_0 + 20f);
		}
	}
	if (Var0.f_1 > Var1.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var1.f_1 + 20f);
}

void func_59()//Position - 0x1D46
{
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_90) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_92, false))
						{
							__LIB_0__::func_467("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_92, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_91, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							Local_88 = { func_60(ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) };
							STREAMING::REQUEST_ANIM_DICT(__LIB_42__::func_680(iLocal_90, 0, 0));
							iLocal_286 = 7;
							iLocal_62 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				__LIB_0__::func_467("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			__LIB_0__::func_467("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		__LIB_0__::func_467("EXIT - OTHER ped INJURED");
		func_97();
	}
}

Vector3 func_60(struct<3> Param0)//Position - 0x1E17
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (SYSTEM::VDIST2(Param0, func_61(iVar1)) < SYSTEM::VDIST2(Param0, func_61(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_61(iVar0);
}

Vector3 func_61(int iParam0)//Position - 0x1E5F
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.0748f, -634.0139f, 29.094f };
			break;
		case 1:
			Var0 = { -1266.2913f, -1361.1747f, 3.222f };
			break;
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		case 3:
			Var0 = { -1310.9777f, -235.9881f, 41.1789f };
			break;
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		case 5:
			Var0 = { -192.1116f, -1332.3854f, 30.3304f };
			break;
		case 6:
			Var0 = { 196.6188f, -1850.3964f, 26.2005f };
			break;
		case 7:
			Var0 = { 322.9744f, -1000.2299f, 28.2401f };
			break;
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		case 9:
			Var0 = { -1800.7599f, -404.1213f, 43.8109f };
			break;
		case 10:
			Var0 = { 1421.3337f, -1618.8297f, 58.3324f };
			break;
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		case 13:
			Var0 = { 1591.9209f, 6516.8413f, 16.3155f };
			break;
		case 14:
			Var0 = { 1278.7299f, 3624.059f, 32.0408f };
			break;
		case 15:
			Var0 = { 2464.6675f, 5526.8154f, 44.2143f };
			break;
		case 16:
			Var0 = { 2052.5796f, 4637.4766f, 39.642f };
			break;
		case 17:
			Var0 = { 1435.6084f, 4483.9507f, 49.2513f };
			break;
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		case 19:
			Var0 = { 16.9496f, 3632.3499f, 39.2848f };
			break;
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		case 22:
			Var0 = { -1663.6412f, 2477.778f, 30.9941f };
			break;
		case 23:
			Var0 = { -2505.643f, 3677.8252f, 12.1719f };
			break;
		case 24:
			Var0 = { -2179.2092f, 4264.236f, 47.9904f };
			break;
		case 25:
			Var0 = { -758.9616f, 5612.7803f, 29.4536f };
			break;
		case 26:
			Var0 = { -276.8032f, 6327.1885f, 31.4262f };
			break;
		case 27:
			Var0 = { 1483.8394f, 6366.199f, 22.6875f };
			break;
		case 28:
			Var0 = { 949.013f, 3551.7532f, 32.9687f };
			break;
		case 29:
			Var0 = { 180.9372f, 3051.7812f, 42.1131f };
			break;
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_62()//Position - 0x21F2
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_92);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_91, iLocal_90, 15f, 15f, 5f, false, true, 0) && fVar0 <= 1f)
				{
					func_69(iLocal_90);
					iLocal_63 = MISC::GET_GAME_TIMER();
					iLocal_64 = (iLocal_63 - iLocal_62);
					if (iLocal_64 >= iLocal_66)
					{
						if (func_551())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_91))
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
							}
						}
						else
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
						}
						iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
						if (iLocal_66 > 2500)
						{
							TASK::CLEAR_PED_TASKS(iLocal_90);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_92, -1, 0, 1f, 8388609, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
							__LIB_0__::func_467("other GIVES MONEY");
							iLocal_286 = 5;
						}
						else
						{
							func_68();
							func_63();
							if (!PED::IS_PED_INJURED(iLocal_91))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_92, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_91, iLocal_95);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
										iLocal_62 = MISC::GET_GAME_TIMER();
									}
								}
							}
							__LIB_0__::func_467("prostitute REFUSED MONEY 2");
							if (func_551())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_91))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
								}
							}
							else
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
							}
							iLocal_286 = 6;
						}
					}
				}
				else
				{
					if (func_551())
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_91))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
					}
					func_97();
				}
			}
			else
			{
				__LIB_0__::func_467("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_551())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_91))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
					}
				}
				else
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_91);
				}
				func_97();
			}
		}
		else
		{
			__LIB_0__::func_467("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		__LIB_0__::func_467("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_63()//Position - 0x23E4
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90) || PED::IS_PED_INJURED(iLocal_90))
	{
		return 1;
	}
	if (!func_551())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, true))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
		}
		else if (__LIB_1__::func_490(iLocal_49, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_1__::func_490(iLocal_73, 524288))
			{
				TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
			}
			func_64(1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_38__::func_574(&iLocal_49, 16384);
			__LIB_1__::func_31(&iLocal_107);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (__LIB_1__::func_490(iLocal_49, 4194304))
			{
				iLocal_54 = 1;
			}
			break;
		case 1:
			if (__LIB_1__::func_490(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(7), 8f, -1.5f, -1, 0, 0f, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
					return 0;
				}
			}
			iLocal_54 = 2;
			break;
		case 2:
			if (__LIB_1__::func_490(iLocal_73, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
					{
						func_64(0);
						iLocal_54 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				func_64(0);
				iLocal_54 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			break;
		case 3:
			__LIB_38__::func_574(&iLocal_49, 16384);
			__LIB_1__::func_31(&iLocal_107);
			return 1;
			break;
	}
	return 0;
}

void func_64(bool bParam0)//Position - 0x25B4
{
	struct<3> Var0;
	if (((TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_90) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_90)) || PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(0))) || PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(1)))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(1), 20f, true))
	{
		if (bParam0)
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
		}
		return;
	}
	if (!bParam0)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_90, Var0, 20f, 0);
	}
	else
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var0, 20f, 0);
	}
}

char* func_65(int iParam0)//Position - 0x267B
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0)//Position - 0x2695
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		case 1:
			return "idle_a";
			break;
		case 2:
			return "idle_b";
			break;
		case 3:
			return "idle_c";
			break;
		case 4:
			return "idle_wait";
			break;
		case 5:
			return "idle_reject";
			break;
		case 8:
			return "idle_reject_loop_a";
			break;
		case 9:
			return "idle_reject_loop_b";
			break;
		case 10:
			return "idle_reject_loop_c";
			break;
		case 11:
			return "idle_outro";
			break;
		case 6:
			return "reject_2_idle";
			break;
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_67(int iParam0)//Position - 0x2768
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_68()//Position - 0x27BB
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		if (__LIB_0__::func_683() == 2)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_69(int iParam0)//Position - 0x2802
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_70(iParam0))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 109, true);
		}
	}
}

int func_70(int iParam0)//Position - 0x2826
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_284), func_66(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_284), func_66(2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_67(iLocal_284), func_66(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_71()//Position - 0x2885
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_90) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, iLocal_91, 20f, 20f, 10f, false, true, 0))
						{
							fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_92);
							if (fVar0 <= 1f)
							{
								func_72(0);
								iLocal_62 = MISC::GET_GAME_TIMER();
								iLocal_66 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								__LIB_0__::func_467("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_286 = 4;
							}
						}
						else
						{
							__LIB_0__::func_467("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				__LIB_0__::func_467("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			__LIB_0__::func_467("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		__LIB_0__::func_467("EXIT - OTHER ped INJURED");
		func_97();
	}
}

int func_72(bool bParam0)//Position - 0x2952
{
	int iVar0;
	int iVar1;
	if (!func_551())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_90, "PROSTITUTE_GROUP", 0f);
			__LIB_38__::func_572("PROSTITUTES_SOLICIT_SCENE");
		}
		func_73();
		if (__LIB_1__::func_490(iLocal_49, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(iVar0), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_90, "PROSTITUTE_GROUP", 0f);
				__LIB_38__::func_572("PROSTITUTES_SOLICIT_SCENE");
			}
			func_73();
			iLocal_53 = 1;
			break;
		case 1:
			if (__LIB_1__::func_490(iLocal_49, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_53 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
				}
			}
			break;
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(iVar0), 2f, -2f, -1, 0, 0f, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			break;
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, 0f, false, false, false);
					iLocal_53 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			break;
		case 4:
			iLocal_53 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_73()//Position - 0x2B34
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		switch (__LIB_0__::func_683())
		{
			case 0:
				if (!func_74(iLocal_90))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			case 1:
				if (!func_74(iLocal_90))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			case 2:
				if (!func_74(iLocal_90))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_74(int iParam0)//Position - 0x2BF7
{
	int iVar0;
	iVar0 = func_77(iParam0);
	return func_75(iVar0);
}

int func_75(int iParam0)//Position - 0x2C0D
{
	if (func_76(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x2C24
{
	int iVar0;
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (__LIB_0__::func_683() == 0)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][0];
	}
	else if (__LIB_0__::func_683() == 1)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][1];
	}
	else if (__LIB_0__::func_683() == 2)
	{
		iVar0 = Global_113386.f_10049.f_1[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_77(int iParam0)//Position - 0x2C8F
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_76(iVar0) > 0)
			{
				if ((func_83(iParam0, iVar0) && func_79(iParam0, iVar0)) && func_78(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_78(int iParam0, int iParam1)//Position - 0x2CEA
{
	if (PED::IS_PED_MODEL(iParam0, Global_113386.f_10049.f_1[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1)//Position - 0x2D0F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_80(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_80(int iParam0, int iParam1, int iParam2)//Position - 0x2D3C
{
	int iVar0;
	iVar0 = func_82(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1)//Position - 0x2D5D
{
	if (func_75(iParam0))
	{
		return Global_113386.f_10049.f_1[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_82(int iParam0)//Position - 0x2D85
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_83(int iParam0, int iParam1)//Position - 0x2DAE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_84(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_84(int iParam0, int iParam1, int iParam2)//Position - 0x2DDB
{
	int iVar0;
	iVar0 = func_82(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1)//Position - 0x2DFC
{
	if (func_75(iParam0))
	{
		return Global_113386.f_10049.f_1[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

void func_88()//Position - 0x2E66
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_92);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, joaat("SCRIPT_TASK_VEHICLE_PARK")) == 7 || fVar0 <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_92), &Var2, &Var1);
					Var3 = { Var1 - Var2 };
					Var3 = { Var3 / Vector(2f, 2f, 2f) };
					Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_92, 0.2f, 0.2f, 0f) };
					Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_92, 0.2f, 0.2f, 0f) };
					Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
					if (SYSTEM::VDIST(Var6, Var5) < SYSTEM::VDIST(Var6, Var4))
					{
						Var4 = { Var5 };
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var4.f_0, Var4.f_1, Var4.f_2, 1f, -1, 0.5f, 8192, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_91, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					__LIB_0__::func_467("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_286 = 3;
				}
				else
				{
					__LIB_0__::func_467("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				__LIB_0__::func_467("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			__LIB_0__::func_467("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		__LIB_0__::func_467("EXIT - OTHER ped INJURED");
		func_97();
	}
}

void func_89()//Position - 0x2FB9
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_92, false))
			{
				if (func_91(&iLocal_92))
				{
					if (func_90(ENTITY::GET_ENTITY_COORDS(iLocal_91, true), 1106247680))
					{
						return;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var0, 8, 3f, 0f))
					{
						PED::SET_DRIVER_ABILITY(iLocal_91, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(iLocal_91, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(iLocal_91, 0.05f);
						TASK::TASK_VEHICLE_PARK(iLocal_91, iLocal_92, Var0, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_91, iLocal_90, -1, 2048, 4);
						__LIB_0__::func_467("OTHER TOLD TO PULL OVER");
						iLocal_286 = 2;
					}
				}
				else
				{
					__LIB_0__::func_467("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				__LIB_0__::func_467("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			__LIB_0__::func_467("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		__LIB_0__::func_467("EXIT - OTHER ped INJURED");
		func_96(15);
	}
}

bool func_90(struct<3> Param0, int iParam1)//Position - 0x30AE
{
	if (func_551())
	{
		return PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1));
	}
	return (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)) || PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam1, iParam1, iParam1), Param0 + Vector(iParam1, iParam1, iParam1)));
}

int func_91(int iParam0)//Position - 0x3114
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam0);
		if (__LIB_39__::func_707(iVar0, 0) && __LIB_39__::func_704(*iParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam0) > 0)
			{
				iVar1 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*iParam0, false, true);
				if (((iVar1 == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 0, false)) && (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 0))) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 0, false) == iLocal_90)
				{
					if (__LIB_39__::func_698(*iParam0))
					{
						if (!__LIB_1__::func_490(iLocal_49, 32768))
						{
							__LIB_38__::func_574(&iLocal_49, 32768);
							if (!__LIB_1__::func_490(iLocal_49, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_92());
								__LIB_38__::func_574(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (__LIB_1__::func_490(iLocal_49, 32768))
						{
							__LIB_38__::func_475(&iLocal_49, 32768);
						}
						if (__LIB_1__::func_490(iLocal_49, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								STREAMING::REMOVE_CLIP_SET(func_92());
								__LIB_38__::func_475(&iLocal_49, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_92()//Position - 0x3225
{
	return "clipset@veh@low@ps@female@base";
}

void func_96(int iParam0)//Position - 0x38AB
{
	iLocal_286 = iParam0;
}

void func_97()//Position - 0x38B8
{
	if (func_551())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
		{
			TASK::CLEAR_PED_TASKS(iLocal_90);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_90);
		TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
	}
	iLocal_91 = 0;
	iLocal_92 = 0;
	TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_287 = 0;
	iLocal_285 = 1;
}

void func_98(var uParam0)//Position - 0x3925
{
	if (!__LIB_1__::func_490(iLocal_49, 32))
	{
		iLocal_285 = 1;
	}
	if (iLocal_286 > 1 && iLocal_286 != 12)
	{
		if (!__LIB_1__::func_490(iLocal_49, 33554432))
		{
			if (func_551())
			{
				if (Global_1922954 || func_474())
				{
					func_473(0);
					__LIB_38__::func_574(&iLocal_49, 33554432);
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (__LIB_1__::func_490(iLocal_49, 1048576) || __LIB_1__::func_490(iLocal_49, 8192))
				{
					func_473(0);
					__LIB_38__::func_574(&iLocal_49, 33554432);
				}
			}
		}
	}
	switch (iLocal_286)
	{
		case 0:
			if (__LIB_1__::func_490(iLocal_49, 16384) || __LIB_1__::func_490(iLocal_49, 8388608))
			{
				if (!__LIB_1__::func_13(&iLocal_107))
				{
					__LIB_1__::func_362(&iLocal_107);
				}
				if (__LIB_17__::func_339(&iLocal_107, 25f))
				{
					__LIB_38__::func_475(&iLocal_49, 16384);
					__LIB_38__::func_475(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_287 != 0 && !__LIB_0__::func_1("PROS_NO_MONEY" /* GXT: You need more cash to pick up a prostitute. */))
			{
				func_64(0);
				switch (__LIB_0__::func_683())
				{
					case 0:
						__LIB_0__::func_222(&uLocal_116, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
					case 1:
						__LIB_0__::func_222(&uLocal_116, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
					case 2:
						__LIB_0__::func_222(&uLocal_116, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
				iLocal_286 = 1;
			}
			else
			{
				func_468();
				iLocal_287 = 2;
			}
			break;
		case 1:
			func_455(uParam0);
			break;
		case 2:
			func_442(uParam0);
			break;
		case 3:
			func_441();
			break;
		case 4:
			func_429(uParam0);
			break;
		case 5:
			func_411();
			break;
		case 6:
			func_410(uParam0);
			break;
		case 7:
			func_389();
			func_381();
			break;
		case 8:
			func_378();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			if (func_551())
			{
				func_226(uParam0);
			}
			break;
		case 9:
			func_223();
			break;
		case 10:
			func_220();
			break;
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
			if (func_551())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, true);
				func_226(uParam0);
			}
			break;
		case 12:
			func_490();
			break;
		case 13:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			func_103();
			break;
		case 14:
			func_102();
			break;
		case 15:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			func_99(uParam0);
			break;
	}
}

void func_99(var uParam0)//Position - 0x3C14
{
	if (!func_551())
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_101(1), 3))
		{
			return;
		}
	}
	if (__LIB_1__::func_490(iLocal_49, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			__LIB_38__::func_475(&iLocal_49, 16);
		}
	}
	if (__LIB_1__::func_490(iLocal_49, 2))
	{
		__LIB_0__::func_467(1);
		__LIB_0__::func_467("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

var func_101(bool bParam0)//Position - 0x3C99
{
	if (!__LIB_1__::func_490(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return __LIB_38__::func_568(6);
		}
		else
		{
			return __LIB_38__::func_568(7);
		}
	}
	if (bParam0)
	{
		return __LIB_38__::func_569(6);
	}
	return __LIB_38__::func_569(7);
}

void func_102()//Position - 0x3CDF
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			if (__LIB_1__::func_490(iLocal_49, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 196624, true);
			}
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}
}

void func_103()//Position - 0x3D32
{
	switch (iLocal_294)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90) || __LIB_2__::func_559(&iLocal_101) > 4f)
			{
				func_116(iLocal_90);
				if (func_76(func_77(iLocal_90)) == 1)
				{
					iLocal_294 = 2;
				}
				else
				{
					__LIB_1__::func_12(&iLocal_101);
					__LIB_0__::func_190("PROS_RESPONSE" /* GXT: Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy */);
					iLocal_294 = 1;
				}
			}
			break;
		case 1:
			func_113();
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90) || __LIB_0__::func_75())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				__LIB_38__::func_574(&iLocal_49, 2048);
			}
			else
			{
				if (!__LIB_1__::func_13(&iLocal_101))
				{
					__LIB_1__::func_31(&iLocal_101);
				}
				if (__LIB_2__::func_559(&iLocal_101) > 15f || iLocal_297 != 0)
				{
					HUD::CLEAR_HELP(true);
					func_111();
					iLocal_294 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_75())
			{
				iLocal_294 = 3;
			}
			break;
		case 3:
			func_106(0);
			__LIB_0__::func_210();
			func_96(15);
			break;
	}
}

void func_106(bool bParam0)//Position - 0x3EA0
{
	if (!PED::IS_PED_INJURED(iLocal_90))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&iLocal_90);
		}
		else
		{
			func_107(iLocal_90, bParam0);
		}
	}
}

void func_107(int iParam0, bool bParam1)//Position - 0x3ECA
{
	int iVar0;
	float fVar1;
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(1), 3))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_101(1), 4f, -8f, -1, 0, 0f, false, false, false);
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
		}
		if (__LIB_1__::func_490(iLocal_49, 33554432))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
		}
		if (bParam1)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				__LIB_38__::func_574(&iLocal_49, 134217728);
			}
		}
		if (__LIB_1__::func_490(iLocal_49, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(iParam0, false)))
				{
					func_109(iParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_42__::func_680(iParam0, 0, 0), func_110(0), 3))
					{
						if (iLocal_70 > 0)
						{
							TASK::TASK_PLAY_ANIM(0, __LIB_42__::func_680(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, __LIB_42__::func_680(iParam0, 0, 0), func_108(0), 4f, -4f, -1, 0, 0f, false, false, false);
						}
					}
					func_109(iParam0, 1);
				}
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_90))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_90)))
				{
					PED::SET_PED_KEEP_TASK(iParam0, true);
				}
			}
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
	}
}

var func_108(bool bParam0)//Position - 0x4099
{
	if (!__LIB_1__::func_490(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return __LIB_38__::func_568(4);
		}
		else
		{
			return __LIB_38__::func_568(5);
		}
	}
	if (bParam0)
	{
		return __LIB_38__::func_569(4);
	}
	return __LIB_38__::func_569(5);
}

void func_109(int iParam0, int iParam1)//Position - 0x40DF
{
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, false), 0, false, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	}
	else
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
	}
}

var func_110(bool bParam0)//Position - 0x4111
{
	if (!__LIB_1__::func_490(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return __LIB_38__::func_568(2);
		}
		else
		{
			return __LIB_38__::func_568(3);
		}
	}
	if (bParam0)
	{
		return __LIB_38__::func_569(2);
	}
	return __LIB_38__::func_569(3);
}

void func_111()//Position - 0x4157
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
	if ((iVar0 <= 333 && iLocal_297 == 0) || iLocal_297 == 3)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_297 == 0) || iLocal_297 == 1)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_297 == 0 || iLocal_297 == 2)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_113()//Position - 0x421E
{
	if (iLocal_297 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_297 = 2;
		}
	}
}

void func_116(int iParam0)//Position - 0x42F4
{
	int iVar0;
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			func_118(iParam0);
			func_117(iVar0);
		}
	}
}

void func_117(int iParam0)//Position - 0x432F
{
	int iVar0;
	struct<3> Var1;
	iVar0 = func_76(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		__LIB_0__::func_787(&uLocal_116, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_118(int iParam0)//Position - 0x4377
{
	int iVar0;
	iVar0 = func_77(iParam0);
	if (iVar0 > -1)
	{
		__LIB_0__::func_221(&uLocal_116, 4);
		__LIB_0__::func_222(&uLocal_116, 6, iParam0, func_119(iVar0), 0, 1);
	}
}

char* func_119(int iParam0)//Position - 0x43A5
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		case 1:
			sVar0 = "Hooker2";
			break;
		case 2:
			sVar0 = "Hooker3";
			break;
		case 3:
			sVar0 = "Hooker4";
			break;
		case 4:
			sVar0 = "Hooker5";
			break;
		case 5:
			sVar0 = "Hooker6";
			break;
		case 6:
			sVar0 = "Hooker7";
			break;
		case 7:
			sVar0 = "Hooker8";
			break;
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

void func_122(var uParam0)//Position - 0x448A
{
	bool bVar0;
	int iVar1;
	if (!func_551())
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0, false) != iLocal_90)
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1, false, true) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_123(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_123(bool bParam0)//Position - 0x4518
{
	struct<3> Var0;
	if (bParam0)
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_93, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH((-5.5f - Var0.f_0), 1f);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_124(&(Local_300[0 /*7*/]));
	func_124(&(Local_300[3 /*7*/]));
	func_124(&(Local_300[2 /*7*/]));
	func_124(&(Local_300[1 /*7*/]));
	if (__LIB_0__::func_1("PROS_CAM_TOG" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~ */) || __LIB_0__::func_1("PROS_CAM_OC" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~ */))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_124(var uParam0)//Position - 0x459C
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

void func_125()//Position - 0x45D4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_93, true);
	}
	if (iLocal_293 != 5)
	{
		if ((((((!func_219(iLocal_74) && !func_219(iLocal_75)) && !func_219(iLocal_76)) && !func_219(iLocal_77)) && !func_219(iLocal_78)) && !func_219(iLocal_79)) && !func_219(iLocal_80))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_90) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_293 = 5;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					iLocal_293 = 5;
				}
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	__LIB_1__::func_33(0);
	switch (iLocal_293)
	{
		case 0:
			if (func_551())
			{
				__LIB_31__::func_972(1089, -1);
			}
			__LIB_1__::func_31(&iLocal_113);
			func_209(func_49(), __LIB_1__::func_490(iLocal_49, 32768));
			iLocal_293 = 1;
			__LIB_0__::func_467("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 48 /*INPUT_HUD_SPECIAL*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			func_202();
			func_195();
			func_134();
			if (!__LIB_38__::func_570(0, 1))
			{
				func_133();
			}
			if (__LIB_2__::func_572(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					__LIB_38__::func_475(&iLocal_49, 512);
					iLocal_296 = 0;
					__LIB_36__::func_371("PROSTITUTES_SOLICIT_SCENE");
					__LIB_36__::func_371("PROSTITUTES_SEX_SCENE");
					__LIB_36__::func_371("PROSTITUTES_BJ_SCENE");
					__LIB_36__::func_371("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
					}
					else
					{
						func_129();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_48);
						iLocal_293 = 3;
					}
				}
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 48 /*INPUT_HUD_SPECIAL*/, true);
			func_202();
			if (!__LIB_38__::func_570(0, 1))
			{
				func_133();
			}
			if (__LIB_38__::func_570(0, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			}
			if (__LIB_2__::func_572(&iLocal_113) > 1f)
			{
				if (func_132())
				{
					__LIB_38__::func_475(&iLocal_49, 512);
					iLocal_296 = 0;
					__LIB_36__::func_371("PROSTITUTES_SOLICIT_SCENE");
					__LIB_36__::func_371("PROSTITUTES_SEX_SCENE");
					__LIB_36__::func_371("PROSTITUTES_BJ_SCENE");
					__LIB_36__::func_371("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_70 = 3;
					if (iLocal_70 >= 3)
					{
						func_130();
						iLocal_293 = 5;
						__LIB_1__::func_12(&iLocal_98);
					}
				}
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
			{
				__LIB_36__::func_371("PROSTITUTES_SOLICIT_SCENE");
				__LIB_36__::func_371("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_292 = 0;
				iLocal_293 = 0;
				__LIB_1__::func_92();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_48);
				iLocal_286 = 8;
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
			{
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
				}
				else
				{
					__LIB_0__::func_467("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_473(1);
				}
			}
			break;
	}
}

void func_126()//Position - 0x4881
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_70 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(iLocal_90))
		{
			__LIB_1__::func_31(&iLocal_101);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
			__LIB_38__::func_574(&iLocal_49, 2048);
			iLocal_286 = 13;
		}
	}
}

bool func_127(int iParam0)//Position - 0x48E4
{
	int iVar0;
	iVar0 = func_77(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_76(iVar0) < 6;
}

void func_129()//Position - 0x4925
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_130()//Position - 0x4952
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_132()//Position - 0x4996
{
	if (iLocal_296 == 6)
	{
		return 1;
	}
	return 0;
}

void func_133()//Position - 0x49AA
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
}

void func_134()//Position - 0x49BA
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(__LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	bVar1 = func_49();
	bVar2 = __LIB_1__::func_490(iLocal_49, 32768);
	if (!__LIB_38__::func_570(0, 1))
	{
		func_189(&iLocal_81);
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	__LIB_12__::func_849(23, 1);
	switch (iLocal_296)
	{
		case 0:
			__LIB_38__::func_475(&iLocal_49, 256);
			if (!__LIB_38__::func_570(0, 1))
			{
				func_183(&iLocal_81);
			}
			func_182(iLocal_90, 0);
			if (!func_551())
			{
				func_181(bVar1, bVar2);
			}
			func_180(bVar1, bVar2);
			iLocal_296 = 1;
			break;
		case 1:
			func_179(iLocal_74);
			if (func_219(iLocal_75))
			{
				if (!__LIB_1__::func_490(iLocal_50, 4))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_75) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 4);
					}
				}
			}
			if (func_219(iLocal_74))
			{
				if (!__LIB_1__::func_490(iLocal_50, 8))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_74) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 8);
					}
				}
			}
			if (__LIB_1__::func_490(iLocal_50, 4) && __LIB_1__::func_490(iLocal_50, 8))
			{
				if (!func_551())
				{
					func_177(bVar1, bVar2);
				}
				func_176(bVar1, bVar2);
				iLocal_296 = 2;
			}
			break;
		case 2:
			func_179(iLocal_76);
			if (func_219(iLocal_76))
			{
				if (!__LIB_1__::func_490(iLocal_50, 16))
				{
					if (!func_551())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_76) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 16);
					}
				}
			}
			if (__LIB_1__::func_490(iLocal_50, 16))
			{
				if (!func_551())
				{
					func_175(bVar1, bVar2);
				}
				func_174(bVar1, bVar2);
				iLocal_296 = 3;
			}
			break;
		case 3:
			func_179(iLocal_77);
			if (func_219(iLocal_77))
			{
				if (!__LIB_1__::func_490(iLocal_50, 64))
				{
					if (!__LIB_1__::func_490(iLocal_49, 16777216))
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) >= fVar0)
						{
							__LIB_38__::func_574(&iLocal_49, 16777216);
							iLocal_71++;
						}
					}
					else
					{
						if (!func_551())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_178(iLocal_77) < fVar0)
						{
							__LIB_38__::func_475(&iLocal_49, 16777216);
						}
					}
					if (iLocal_71 >= __LIB_0__::func_138(func_551(), func_173(), func_168()))
					{
						__LIB_38__::func_574(&iLocal_50, 64);
						__LIB_38__::func_475(&iLocal_49, 16777216);
					}
				}
			}
			else if (!__LIB_1__::func_490(iLocal_50, 64))
			{
				__LIB_38__::func_574(&iLocal_50, 64);
			}
			if (__LIB_1__::func_490(iLocal_50, 64))
			{
				if (!func_551())
				{
					func_166(bVar1, bVar2);
				}
				func_165(bVar1, bVar2);
				iLocal_296 = 4;
			}
			break;
		case 4:
			func_179(iLocal_78);
			if (func_219(iLocal_78))
			{
				if (!__LIB_1__::func_490(iLocal_50, 256))
				{
					if (!func_551())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_78) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 256);
					}
				}
			}
			else if (!__LIB_1__::func_490(iLocal_50, 256))
			{
				__LIB_38__::func_574(&iLocal_50, 256);
			}
			if (__LIB_1__::func_490(iLocal_50, 256))
			{
				if (!func_551())
				{
					func_159(bVar1, bVar2);
				}
				func_157(bVar1, bVar2);
				iLocal_296 = 5;
			}
			break;
		case 5:
			func_179(iLocal_79);
			if (func_219(iLocal_79))
			{
				if (!__LIB_1__::func_490(iLocal_50, 1024))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_79) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 1024);
					}
				}
			}
			else if (!__LIB_1__::func_490(iLocal_50, 1024))
			{
				__LIB_38__::func_574(&iLocal_50, 1024);
			}
			if (func_219(iLocal_80))
			{
				if (!__LIB_1__::func_490(iLocal_50, 2048))
				{
					if (!func_551())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_178(iLocal_80) >= fVar0)
					{
						__LIB_38__::func_574(&iLocal_50, 2048);
					}
				}
			}
			else if (!__LIB_1__::func_490(iLocal_50, 2048))
			{
				__LIB_38__::func_574(&iLocal_50, 2048);
			}
			if (__LIB_1__::func_490(iLocal_50, 1024) && __LIB_1__::func_490(iLocal_50, 2048))
			{
				func_182(iLocal_90, 0);
				TASK::TASK_PLAY_ANIM(iLocal_90, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(iLocal_296, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_182(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(iLocal_296, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0f, false, false, false);
				func_123(1);
				iLocal_50 = 0;
				iLocal_71 = 0;
				iLocal_59 = 0;
				func_135();
				iLocal_296 = 6;
			}
			break;
	}
}

void func_135()//Position - 0x4EB4
{
	int iVar0;
	if (iLocal_70 == 0 && !func_551())
	{
		if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) == 0)
		{
			__LIB_38__::func_742();
		}
		__LIB_0__::func_716(296, 0, 0);
		iVar0 = func_77(iLocal_90);
		if (iVar0 > -1)
		{
			func_150(iVar0);
		}
		else
		{
			func_142(iLocal_90);
		}
	}
	iLocal_70++;
	func_136();
}

void func_136()//Position - 0x4F0D
{
	switch (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			Global_113386.f_10049.f_90[0]++;
			__LIB_17__::func_219(0, 1, 1);
			break;
		case 1:
			Global_113386.f_10049.f_90[1]++;
			__LIB_17__::func_219(1, 1, 1);
			break;
		case 2:
			Global_113386.f_10049.f_90[2]++;
			__LIB_17__::func_219(2, 1, 1);
			break;
		case 3:
			__LIB_17__::func_219(3, 1, 1);
			break;
	}
}

void func_142(int iParam0)//Position - 0x514D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	iVar0 = func_149();
	if (iVar0 == -1)
	{
		return;
	}
	func_150(iVar0);
	PED::SET_PED_NAME_DEBUG(iParam0, func_147(iVar0));
	Global_113386.f_10049.f_1[iVar0 /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_146(iParam0, iVar1);
		func_145(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_144(iParam0, iVar4);
		func_143(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_143(int iParam0, int iParam1, var uParam2)//Position - 0x51EC
{
	if (iParam0 > -1)
	{
		Global_113386.f_10049.f_1[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_144(int iParam0, int iParam1)//Position - 0x520F
{
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, var uParam2)//Position - 0x5223
{
	if (iParam0 > -1)
	{
		Global_113386.f_10049.f_1[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_146(int iParam0, int iParam1)//Position - 0x5246
{
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_82(iParam1));
}

var func_147(int iParam0)//Position - 0x525A
{
	return func_148(iParam0);
}

char* func_148(int iParam0)//Position - 0x5268
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		case 1:
			sVar0 = "UPRO DANA";
			break;
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_149()//Position - 0x52F7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_76(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_150(int iParam0)//Position - 0x5322
{
	if (iParam0 > -1)
	{
		if (__LIB_0__::func_683() == 0)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][0]++;
		}
		else if (__LIB_0__::func_683() == 1)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][1]++;
		}
		else if (__LIB_0__::func_683() == 2)
		{
			Global_113386.f_10049.f_1[iParam0 /*11*/][2]++;
		}
	}
}

void func_157(bool bParam0, bool bParam1)//Position - 0x5A13
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_79, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_80, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_158(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)//Position - 0x5A8C
{
	if (func_551())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	}
	else
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_159(bool bParam0, bool bParam1)//Position - 0x5ABC
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_79, 1, 0, 0);
	func_160(iLocal_90, iLocal_79, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_161(&iLocal_80, 0, 0, 0);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_80, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_160(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8)//Position - 0x5B45
{
	if (func_551())
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, 0);
	}
}

void func_161(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x5B6B
{
	struct<3> Var0;
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_164(Var0, 0f, 0f, 0f, bParam3, bParam2, 2);
	if (iParam1 == 0)
	{
		func_163(*iParam0, iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_163(*iParam0, iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "seat_pside_f"));
	}
	func_162(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_162(int iParam0, struct<3> Param1, struct<3> Param2, bool bParam3)//Position - 0x5BD1
{
	if (!func_551())
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, Param1, Param2, bParam3);
	}
}

void func_163(int iParam0, int iParam1, int iParam2)//Position - 0x5BF1
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		return;
	}
	if (func_551())
	{
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
	}
	else
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, iParam1, iParam2);
	}
}

int func_164(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3, int iParam4)//Position - 0x5C24
{
	int iVar0;
	if (func_551())
	{
		if (bParam2)
		{
			bParam3 = false;
		}
		iVar0 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Param0, Param1, iParam4, bParam2, bParam3, 1f, 0f, 1f);
	}
	else
	{
		iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param1, iParam4);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar0, bParam2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, bParam3);
	}
	return iVar0;
}

void func_165(bool bParam0, bool bParam1)//Position - 0x5C7F
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_78, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_78, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_166(bool bParam0, bool bParam1)//Position - 0x5CF8
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_78, 0, 0, 1);
	func_160(iLocal_90, iLocal_78, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_78, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

int func_168()//Position - 0x5D8F
{
	int iVar0;
	int iVar1;
	iVar0 = func_169();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_169()//Position - 0x5DC7
{
	if (func_551())
	{
		return __LIB_0__::func_369(65, -1, 0);
	}
	return __LIB_16__::func_891(__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()), 1);
}

int func_173()//Position - 0x607C
{
	int iVar0;
	if (iLocal_288 != 0)
	{
		if (iLocal_59 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_59 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_59 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_59 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_174(bool bParam0, bool bParam1)//Position - 0x60C6
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_77, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_77, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_175(bool bParam0, bool bParam1)//Position - 0x613F
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_77, 0, 1, 0);
	func_160(iLocal_90, iLocal_77, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_77, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_176(bool bParam0, bool bParam1)//Position - 0x61BF
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_76, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_76, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_177(bool bParam0, bool bParam1)//Position - 0x6238
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_76, 0, 0, 1);
	func_160(iLocal_90, iLocal_76, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_76, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_178(int iParam0)//Position - 0x62B8
{
	float fVar0;
	if (func_551())
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	}
	else
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
	}
	return fVar0;
}

void func_179(int iParam0)//Position - 0x62E0
{
	if (!func_219(iParam0))
	{
		return;
	}
}

void func_180(bool bParam0, bool bParam1)//Position - 0x62F5
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_158(iLocal_90, iLocal_74, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_75, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_181(bool bParam0, bool bParam1)//Position - 0x636E
{
	int iVar0;
	iVar0 = 2052;
	if (func_551())
	{
		iVar0 = 2056;
	}
	func_161(&iLocal_74, 1, 0, 1);
	func_160(iLocal_90, iLocal_74, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_161(&iLocal_75, 0, 0, 1);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_75, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), __LIB_39__::func_705(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_182(int iParam0, int iParam1)//Position - 0x63EF
{
	if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_93, false))
	{
		if (!func_551())
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iLocal_93, iParam1);
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_93, false))
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_93, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_183(int iParam0)//Position - 0x6435
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	uVar0 = __LIB_0__::func_932(func_186(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "windscreen")));
	uVar1 = __LIB_0__::func_932(func_186(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "windscreen")));
	Var2 = { ENTITY::GET_ENTITY_ROTATION(iLocal_93, 2) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(iLocal_93);
	if (fVar3 >= 180f)
	{
		fVar4 = (fVar3 - 180f);
	}
	else
	{
		fVar4 = (fVar3 + 180f);
	}
	fVar5 = (-7f - Var2.f_1);
	fVar6 = (-5f - Var2.f_0);
	fVar7 = (-2.5f + Var2.f_0);
	fVar8 = ((0f - (0.7f * Var2.f_0)) + (0.3f * Var2.f_1));
	if (!CAM::DOES_CAM_EXIST(Local_300[2 /*7*/]))
	{
		func_184(&(Local_300[2 /*7*/]), func_186(2), fVar5, Var2.f_0, uVar0, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[1 /*7*/]))
	{
		func_184(&(Local_300[1 /*7*/]), func_186(1), fVar8, -Var2.f_1, uVar1, 37.3f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[0 /*7*/]))
	{
		func_184(&(Local_300[0 /*7*/]), func_186(0), fVar6, -Var2.f_1, fVar4, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_300[3 /*7*/]))
	{
		func_184(&(Local_300[3 /*7*/]), func_186(3), fVar7, Var2.f_1, fVar3, 45f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(Local_300[*iParam0 /*7*/], true);
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x65A0
{
	uParam0->f_1 = { Param2 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, uParam0->f_1, fParam3, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

Vector3 func_186(int iParam0)//Position - 0x660C
{
	struct<3> Var0;
	var uVar1;
	struct<2> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
	{
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_93), &uVar1, &Var2);
	Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "windscreen")) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_93, Var3) };
	switch (iParam0)
	{
		case 0:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, 0f, (Var2.f_1 + 1.4f), Var4.f_2) };
			break;
		case 1:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, 1.5f, (Var2.f_1 + 1.2f), (Var4.f_2 - 0.1f)) };
			break;
		case 2:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, -3.7f, 0.7f, Var4.f_2) };
			break;
		case 3:
			Var0 = { func_187() };
			break;
	}
	return Var0;
}

Vector3 func_187()//Position - 0x66E5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<2> Var2;
	var uVar3;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_93), &Var2, &uVar3);
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_93, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_93, "windscreen")) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_93, Var0) };
	Var1.f_2 = (Var1.f_2 + 0.09f);
	Var2.f_1 = (Var2.f_1 - 1f);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, 0f, -MISC::ABSF(Var2.f_1), Var1.f_2);
}

void func_189(int iParam0)//Position - 0x676B
{
	if (!CAM::DOES_CAM_EXIST(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	if (!CAM::IS_CAM_RENDERING(Local_300[*iParam0 /*7*/]))
	{
		return;
	}
	CAM::SHAKE_CAM(Local_300[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_192(&(Local_300[*iParam0 /*7*/]));
	}
	if (func_191())
	{
		if (!func_551())
		{
			if (!__LIB_0__::func_1("PROS_CAM_OC" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~ */))
			{
				__LIB_0__::func_190("PROS_CAM_OC" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~ */);
			}
		}
	}
	else
	{
		if (!func_551())
		{
			if (!__LIB_0__::func_1("PROS_CAM_TOG" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~ */))
			{
				__LIB_0__::func_190("PROS_CAM_TOG" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~ */);
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !__LIB_38__::func_570(0, 1))
		{
			func_190(iParam0);
			CAM::SET_CAM_ACTIVE(Local_300[*iParam0 /*7*/], true);
		}
	}
}

void func_190(var uParam0)//Position - 0x6836
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (__LIB_1__::func_490(iLocal_51, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (__LIB_1__::func_490(iLocal_51, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (__LIB_1__::func_490(iLocal_51, 64))
		{
			*uParam0++;
		}
	}
}

int func_191()//Position - 0x68A9
{
	if ((__LIB_1__::func_490(iLocal_51, 16) && __LIB_1__::func_490(iLocal_51, 64)) && __LIB_1__::func_490(iLocal_51, 128))
	{
		return 1;
	}
	return 0;
}

void func_192(var uParam0)//Position - 0x68DB
{
	var uVar0[4];
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	__LIB_0__::func_341(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var1.f_2 = (-(SYSTEM::TO_FLOAT(uVar0[2]) / 127f) * 10f);
	Var1.f_1 = ((-Var1.f_2 * 3f) / 10f);
	if (PAD::IS_LOOK_INVERTED())
	{
		Var1.f_0 = ((SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var1.f_0 = (-(SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	fVar2 = (30f * SYSTEM::TIMESTEP());
	Var3 = { Var1 };
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		uParam0->f_4 = __LIB_0__::func_331((uParam0->f_4 + (Var3.f_0 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = __LIB_0__::func_331((uParam0->f_4.f_1 + (Var3.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = __LIB_0__::func_331((uParam0->f_4.f_2 + (Var3.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + __LIB_0__::func_331((((Var3.f_0 - uParam0->f_4) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + __LIB_0__::func_331((((Var3.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar2), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + __LIB_0__::func_331((((Var3.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar2), -3f, 3f));
	}
	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}

void func_195()//Position - 0x6BA0
{
	int iVar0;
	float fVar1;
	if (!func_200())
	{
		if (func_199(iLocal_90))
		{
			if (!__LIB_1__::func_490(iLocal_49, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_70 == 1)
				{
					if (!func_551())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 4000, 252);
				}
				else if (iLocal_70 == 2)
				{
					if (!func_551())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 4000, 210);
				}
				else
				{
					if (!func_551())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 3000, 168);
				}
				__LIB_38__::func_574(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_289)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_90, joaat("sex_bounce")))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_93, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			case 1:
			case 2:
				if (__LIB_1__::func_490(iLocal_49, 32768))
				{
					if (func_551())
					{
						iVar0 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_77);
					}
					else
					{
						iVar0 = iLocal_77;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
					{
						fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_524(512))
							{
								PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_528(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_90, joaat("sex_bounce")))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_93, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
			}
	}
}

void func_196(int iParam0)//Position - 0x6EC5
{
	if (!__LIB_1__::func_490(iLocal_52, iParam0))
	{
		__LIB_38__::func_574(&iLocal_52, iParam0);
	}
}

void func_197()//Position - 0x6EE1
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	iVar0 = (iVar0 + (1 + iLocal_288));
	if (iVar0 > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0, 0);
	func_198();
}

void func_198()//Position - 0x6F23
{
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_57 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
}

bool func_199(int iParam0)//Position - 0x6F4B
{
	return (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_701(), __LIB_38__::func_569(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_39__::func_701(), __LIB_38__::func_569(21), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_38__::func_571(), __LIB_38__::func_568(11), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_38__::func_571(), __LIB_38__::func_568(21), 3));
}

bool func_200()//Position - 0x6FA9
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_90, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_201(iLocal_90, func_49(), 1), 3);
}

char* func_201(int iParam0, bool bParam1, bool bParam2)//Position - 0x6FCD
{
	char* sVar0;
	int iVar1;
	sVar0 = "";
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			if (__LIB_39__::func_698(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = __LIB_38__::func_569(20);
					}
					else
					{
						sVar0 = __LIB_38__::func_569(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = __LIB_38__::func_569(10);
				}
				else
				{
					sVar0 = __LIB_38__::func_569(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = __LIB_38__::func_568(20);
				}
				else
				{
					sVar0 = __LIB_38__::func_568(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = __LIB_38__::func_568(10);
			}
			else
			{
				sVar0 = __LIB_38__::func_568(15);
			}
		}
	}
	return sVar0;
}

void func_202()//Position - 0x7077
{
	if (!func_200())
	{
		return;
	}
	if (func_551())
	{
		func_206();
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
	{
		func_203();
	}
}

void func_203()//Position - 0x70C1
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_288 == 0)
		{
			__LIB_36__::func_371("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!__LIB_1__::func_13(&iLocal_101))
		{
			__LIB_1__::func_362(&iLocal_101);
		}
		else if (__LIB_2__::func_572(&iLocal_101) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!__LIB_1__::func_490(iLocal_49, 65536))
			{
				__LIB_38__::func_574(&iLocal_49, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_204(iLocal_289);
			}
			else
			{
				__LIB_38__::func_475(&iLocal_49, 65536);
				__LIB_1__::func_31(&iLocal_101);
			}
		}
	}
}

void func_204(int iParam0)//Position - 0x7162
{
	switch (iParam0)
	{
		case 0:
			__LIB_38__::func_572("PROSTITUTES_BJ_SPEECH_SCENE");
			if (__LIB_2__::func_80(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		case 1:
		case 2:
			if (__LIB_2__::func_80(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}

void func_206()//Position - 0x720B
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (func_207(0.4f))
	{
		func_196(4);
	}
	if (func_524(4))
	{
		if (!__LIB_1__::func_13(&iLocal_104))
		{
			__LIB_1__::func_362(&iLocal_104);
		}
		else if (__LIB_2__::func_572(&iLocal_104) > 2f)
		{
			if (!func_524(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_59++;
			}
			else if (func_524(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
				{
					func_528(4);
					func_528(16);
					__LIB_1__::func_31(&iLocal_104);
				}
			}
		}
	}
}

int func_207(float fParam0)//Position - 0x72A2
{
	float fVar0;
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		fVar0 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_209(bool bParam0, bool bParam1)//Position - 0x732E
{
	if (!func_551())
	{
		return;
	}
	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
}

bool func_219(int iParam0)//Position - 0x8461
{
	bool bVar0;
	if (func_551())
	{
		bVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	}
	else
	{
		bVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);
	}
	return bVar0;
}

void func_220()//Position - 0x8489
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_222(), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_221());
		func_542();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&iLocal_90);
	}
}

float func_221()//Position - 0x84D1
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return 116.6356f;
			break;
		case 1:
			return 175.0504f;
			break;
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_222()//Position - 0x8516
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		case 1:
			return -14.6005f, -1444.6244f, 29.6472f;
			break;
		case 2:
			return 1979.9609f, 3816.0178f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_223()//Position - 0x857B
{
	int iVar0;
	if (__LIB_15__::func_251(&iLocal_98, 3f) && !CAM::IS_CAM_ACTIVE(iLocal_97))
	{
		iVar0 = SYSTEM::FLOOR(((func_224() - 2f) * 1000f));
		CAM::SET_CAM_ACTIVE(iLocal_96, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_97, iLocal_96, iVar0, 1, 1);
	}
	if (__LIB_15__::func_251(&iLocal_98, func_224()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_286 = 10;
	}
}

float func_224()//Position - 0x85D7
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return 10f;
			break;
		case 1:
			return 12f;
			break;
		case 2:
			return 10f;
			break;
	}
	return 0f;
}

void func_226(var uParam0)//Position - 0x863E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 186:
				func_227(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_227(int iParam0, var uParam1)//Position - 0x867D
{
	var uVar0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 13))
	{
		func_228(&uVar0, uParam1);
	}
}

void func_228(var uParam0, var uParam1)//Position - 0x869B
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_123(0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_542();
						func_536(uParam1);
					}
				}
			}
		}
	}
}

void func_229(var uParam0)//Position - 0x86F9
{
	int iVar0;
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_90);
			if ((iVar0 - iLocal_58) < 0)
			{
				func_123(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_230(var uParam0)//Position - 0x8748
{
	int iVar0;
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
			if ((iVar0 - iLocal_57) < 0)
			{
				func_123(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_231(var uParam0)//Position - 0x879B
{
	int iVar0;
	struct<3> Var1;
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Local_56, Var1) >= 4f)
				{
					func_123(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}
}

void func_232()//Position - 0x880C
{
	int iVar0;
	char* sVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (!__LIB_1__::func_490(iLocal_49, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		}
		__LIB_38__::func_574(&iLocal_49, 16);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_93))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_93, true);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_93, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_93, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_93, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_93, true);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_93, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_93, true);
		}
		if (!func_377() || !PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_93, false))
		{
			func_473(0);
			return;
		}
	}
	else
	{
		func_473(0);
		return;
	}
	__LIB_1__::func_33(0);
	if ((!VEHICLE::IS_VEHICLE_STOPPED(iLocal_93) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !__LIB_1__::func_490(iLocal_49, 1024))
	{
		iLocal_286 = 7;
		__LIB_1__::func_895(1, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1);
		iLocal_292 = 0;
		__LIB_0__::func_467("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	switch (iLocal_292)
	{
		case 0:
		case 1:
			if (func_551())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							return;
						}
					}
				}
			}
			func_374();
			func_373();
			func_198();
			if (func_370())
			{
				__LIB_36__::func_371("PROSTITUTES_DRIVE_SCENE");
				__LIB_38__::func_572("PROSTITUTES_PARKED_SCENE");
				func_369();
				if (func_551())
				{
					func_196(2);
					if (func_551())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
									VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
								}
							}
						}
					}
				}
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_90);
				iLocal_292 = 2;
			}
			break;
		case 2:
			if (__LIB_3__::func_423(iLocal_295))
			{
				func_367(&iLocal_295);
				__LIB_38__::func_475(&iLocal_73, 2);
			}
			func_365(iLocal_90, 0);
			if (func_365(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_363(&sVar1, 0))
				{
					iLocal_48 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					iVar2 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (iVar2 != 4 && iLocal_48 == 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
						}
						else if (iVar2 == 4 && iLocal_48 != 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
						}
					}
					func_351();
					iLocal_292 = 3;
					__LIB_0__::func_467("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					__LIB_0__::func_151(&sVar1, -1);
					__LIB_1__::func_31(&iLocal_107);
					iLocal_288 = 3;
					iLocal_292 = 4;
				}
			}
			break;
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				return;
			}
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
			func_331();
			__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			__LIB_0__::func_603(&uVar3, &iVar4, &uVar5, &uVar6, 0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 48 /*INPUT_HUD_SPECIAL*/, true);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/);
			PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
			iVar0 = 0;
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
					__LIB_3__::func_567(0, 0, 0, 1);
					__LIB_3__::func_52(0, -1, 1);
					if (__LIB_3__::func_51())
					{
						if (Global_4539961 != iLocal_68)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_68 = Global_4539961;
							__LIB_0__::func_467("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 33 /*INPUT_MOVE_DOWN_ONLY*/))) || (((MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)) && iVar4 > 100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_0__::func_467("DOWN pressed!");
				if (iLocal_68 < iLocal_69)
				{
					iLocal_68++;
				}
				else
				{
					iLocal_68 = 0;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))) || (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/))) || (((MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/)) && iVar4 < -100) && (MISC::GET_GAME_TIMER() - iLocal_87) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_0__::func_467("UP pressed!");
				if (iLocal_68 > 0)
				{
					iLocal_68 = (iLocal_68 - 1);
				}
				else
				{
					iLocal_68 = iLocal_69;
				}
				iLocal_87 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				func_284();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_292 = 4;
			}
			__LIB_3__::func_781(iLocal_68, 1, 1);
			break;
		case 4:
			iVar7 = PED::GET_PED_MONEY(iLocal_90);
			if (iLocal_288 == 3)
			{
				__LIB_1__::func_895(1, -1);
				__LIB_0__::func_131();
				func_281(0);
				iLocal_62 = MISC::GET_GAME_TIMER();
				__LIB_36__::func_371("PROSTITUTES_PARKED_SCENE");
				__LIB_0__::func_467("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_286 = 6;
				if (iLocal_70 > 0)
				{
					if (func_127(iLocal_90))
					{
						func_126();
					}
					else
					{
						func_473(0);
					}
					return;
				}
				else
				{
					if (func_276() >= 20)
					{
						iVar7 += 20;
						func_234(20);
						PED::SET_PED_MONEY(iLocal_90, iVar7);
					}
					func_473(1);
					return;
				}
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0)))
			{
			}
			else
			{
				__LIB_1__::func_895(1, -1);
				__LIB_0__::func_131();
				if (MISC::IS_AUSSIE_VERSION())
				{
					__LIB_38__::func_574(&iLocal_49, 1024);
					iLocal_288 = 3;
					__LIB_0__::func_467("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_288 != 3)
				{
					if (func_276() > func_233(iLocal_288))
					{
						func_234(func_233(iLocal_288));
						iVar7 = (iVar7 + func_233(iLocal_288));
					}
					__LIB_0__::func_706(&iLocal_101, (14f - 4f));
					__LIB_0__::func_467("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					__LIB_1__::func_92();
					iLocal_286 = 11;
				}
				PED::SET_PED_MONEY(iLocal_90, iVar7);
				iLocal_62 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

int func_233(int iParam0)//Position - 0x8E83
{
	if (MISC::IS_AUSSIE_VERSION())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_234(int iParam0)//Position - 0x8EEE
{
	var uVar0;
	if (!func_551())
	{
		__LIB_15__::func_812(__LIB_0__::func_683(), 1, iParam0);
	}
	else if (!__LIB_0__::func_112())
	{
		MONEY::NETWORK_SPENT_PROSTITUTES(iParam0, false, false);
	}
	else
	{
		__LIB_2__::func_105(joaat("SERVICE_SPEND_PROSTITUTES"), iParam0, &uVar0, 0, 0, 0);
	}
}

int func_276()//Position - 0xAF5C
{
	if (func_551())
	{
		return __LIB_2__::func_847(PLAYER::PLAYER_ID());
	}
	return __LIB_12__::func_295(__LIB_0__::func_683());
}

void func_281(bool bParam0)//Position - 0xB050
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}
}

void func_284()//Position - 0xB1CD
{
	if (iLocal_68 == iLocal_69)
	{
		iLocal_288 = 3;
	}
	else
	{
		iLocal_289 = iLocal_283[iLocal_68];
		func_285();
		if (iLocal_289 == 0)
		{
			__LIB_38__::func_572("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_288 = 0;
		}
		else if (iLocal_289 == 1)
		{
			__LIB_38__::func_572("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 1;
		}
		else if (iLocal_289 == 2)
		{
			__LIB_38__::func_572("PROSTITUTES_SEX_SCENE");
			iLocal_288 = 2;
		}
	}
}

void func_285()//Position - 0xB23B
{
	switch (iLocal_289)
	{
		case 0:
			func_287();
			break;
		case 1:
		case 2:
			func_286();
			break;
	}
}

void func_286()//Position - 0xB26B
{
	iLocal_46++;
	iLocal_47 = 1;
}

void func_287()//Position - 0xB27C
{
	iLocal_45++;
	iLocal_47 = 1;
}

void func_331()//Position - 0xFFDA
{
	if (!__LIB_3__::func_423(iLocal_295))
	{
		iLocal_295 = __LIB_11__::func_762();
		__LIB_13__::func_827(&iLocal_295, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!__LIB_1__::func_490(iLocal_73, 2))
	{
		if (__LIB_14__::func_793(iLocal_295))
		{
			iLocal_295 = __LIB_11__::func_762();
			__LIB_13__::func_827(&iLocal_295, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			__LIB_38__::func_574(&iLocal_73, 2);
		}
	}
	else if (__LIB_14__::func_793(iLocal_295))
	{
		__LIB_0__::func_131();
		func_473(0);
	}
}

void func_351()//Position - 0x10661
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_15__::func_827(1);
	func_281(1);
	HUD::DISPLAY_RADAR(false);
	__LIB_1__::func_602(0, 0);
	__LIB_1__::func_766(1, 1, 0, 0, 0);
	__LIB_1__::func_765(1, 2, 1, 1, 1);
	__LIB_1__::func_767("PROS_OPTS" /* GXT: Services Available */);
	__LIB_1__::func_792(201, "PROS_SELECT" /* GXT: Select */, -1, 0);
	iLocal_69 = 0;
	iVar0 = func_233(0);
	iVar1 = func_233(1);
	iVar2 = func_233(2);
	if (func_276() >= iVar0)
	{
		__LIB_3__::func_572(iLocal_69, "PROS_DOLLAR" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
		__LIB_13__::func_722(iVar0, 0);
		iLocal_283[iLocal_69] = 0;
		iLocal_69++;
	}
	if (func_276() >= iVar1 && func_353(iLocal_93))
	{
		__LIB_3__::func_572(iLocal_69, "PROS_DOLLAR" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
		__LIB_13__::func_722(iVar1, 0);
		iLocal_283[iLocal_69] = 1;
		iLocal_69++;
	}
	if (func_276() >= iVar2 && func_353(iLocal_93))
	{
		__LIB_3__::func_572(iLocal_69, "PROS_DOLLAR" /* GXT: $~1~ */, 1, 1, 0, 0, 0);
		__LIB_13__::func_722(iVar2, 0);
		iLocal_283[iLocal_69] = 2;
		iLocal_69++;
	}
	__LIB_3__::func_572(iLocal_69, "PROS_QUIT" /* GXT: Decline Service */, 0, 1, 0, 0, 0);
	iLocal_68 = 0;
	__LIB_3__::func_781(iLocal_68, 1, 1);
	__LIB_0__::func_130();
	iLocal_87 = MISC::GET_GAME_TIMER();
	iLocal_292 = 3;
}

int func_353(int iParam0)//Position - 0x10791
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if ((((((((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix")) || iVar0 == joaat("fmj")) || iVar0 == joaat("reaper")) || iVar0 == joaat("le7b")) || iVar0 == joaat("tyrus")) || iVar0 == joaat("infernus2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_363(char* sParam0, int iParam1)//Position - 0x115AE
{
	if (func_276() < func_233(iParam1))
	{
		StringCopy(sParam0, "PROS_NO_MONEY" /* GXT: You need more cash to pick up a prostitute. */, 16);
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_17(PLAYER::PLAYER_ID()))
	{
		StringCopy(sParam0, "PIM_HHIDCR" /* GXT: Not available while a key player in a Freemode Event. */, 16);
		return 0;
	}
	StringCopy(sParam0, "", 16);
	return 1;
}

int func_365(int iParam0, bool bParam1)//Position - 0x1161B
{
	int iVar0;
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1)
	{
		if (func_551())
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!__LIB_2__::func_80(PLAYER::PLAYER_ID()))
				{
					iVar0 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
					if (!func_524(256))
					{
						func_196(256);
						iLocal_84 = iVar0;
						iLocal_85 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 1, 0, 0);
						func_196(1024);
					}
				}
				TASK::TASK_PLAY_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_366(bParam1), 2f, -8f, -1, 0, 0f, false, false, false);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_366(bParam1), 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_366(bParam1)) >= 0.95f)
			{
				TASK::TASK_PLAY_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 8f, -2f, -1, 1, 0f, false, false, false);
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 0), func_110(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_366(bool bParam0)//Position - 0x117AD
{
	if (!__LIB_1__::func_490(iLocal_49, 32768))
	{
		if (bParam0)
		{
			return __LIB_38__::func_568(0);
		}
		else
		{
			return __LIB_38__::func_568(1);
		}
	}
	if (bParam0)
	{
		return __LIB_38__::func_569(0);
	}
	return __LIB_38__::func_569(1);
}

void func_367(int iParam0)//Position - 0x117F3
{
	*iParam0 = -15;
}

void func_369()//Position - 0x118DD
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_90);
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		if (iLocal_70 < 1)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_370()//Position - 0x11928
{
	if (__LIB_3__::func_67(0, -1, 0) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true, -1))
	{
		return 1;
	}
	return 0;
}

void func_373()//Position - 0x11AE6
{
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		iLocal_58 = ENTITY::GET_ENTITY_HEALTH(iLocal_90);
	}
}

void func_374()//Position - 0x11B0A
{
	int iVar0;
	if (!func_551())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_56 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
		}
	}
}

int func_377()//Position - 0x11C3D
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (!iLocal_93 == 0)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_93)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_93))
					{
						if (func_91(&iLocal_93))
						{
							__LIB_38__::func_475(&iLocal_49, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_378()//Position - 0x11CB2
{
	if (iLocal_70 == 0)
	{
		if (!__LIB_1__::func_490(iLocal_51, 1) && !__LIB_1__::func_490(iLocal_51, 16))
		{
			if (func_379(0))
			{
				__LIB_38__::func_574(&iLocal_51, 1);
			}
		}
		if (!__LIB_1__::func_490(iLocal_51, 4) && !__LIB_1__::func_490(iLocal_51, 64))
		{
			if (func_379(2))
			{
				__LIB_38__::func_574(&iLocal_51, 4);
			}
		}
		if (!__LIB_1__::func_490(iLocal_51, 8) && !__LIB_1__::func_490(iLocal_51, 128))
		{
			if (func_379(1))
			{
				__LIB_38__::func_574(&iLocal_51, 8);
			}
		}
	}
}

int func_379(int iParam0)//Position - 0x11D3A
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	Var0 = { func_186(iParam0) };
	Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_93, true) };
	if (iLocal_299[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_93) == joaat("tyrant"))
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.1f, 511, iLocal_93, 3);
		}
		else if (((ENTITY::GET_ENTITY_MODEL(iLocal_93) == joaat("casco") || ENTITY::GET_ENTITY_MODEL(iLocal_93) == joaat("feltzer3")) || ENTITY::GET_ENTITY_MODEL(iLocal_93) == joaat("fagaloa")) || ENTITY::GET_ENTITY_MODEL(iLocal_93) == joaat("warrener2"))
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.15f, 511, iLocal_93, 3);
		}
		else
		{
			iLocal_299[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var1, 0.25f, 511, iLocal_93, 3);
		}
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_299[iParam0], &iVar2, &uVar3, &uVar4, &uVar5))
		{
			case 2:
				iLocal_299[iParam0] = 0;
				if (iVar2 != 0)
				{
					func_380(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			case 1:
				break;
			case 0:
				iLocal_299[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_380(int iParam0)//Position - 0x11E73
{
	switch (iParam0)
	{
		case 0:
			if (!__LIB_1__::func_490(iLocal_51, 16))
			{
				__LIB_38__::func_574(&iLocal_51, 16);
				__LIB_38__::func_475(&iLocal_51, 1);
			}
			break;
		case 1:
			if (!__LIB_1__::func_490(iLocal_51, 128))
			{
				__LIB_38__::func_574(&iLocal_51, 128);
				__LIB_38__::func_475(&iLocal_51, 8);
			}
			break;
		case 2:
			if (!__LIB_1__::func_490(iLocal_51, 64))
			{
				__LIB_38__::func_574(&iLocal_51, 64);
				__LIB_38__::func_475(&iLocal_51, 4);
			}
			break;
		case 3:
			if (!__LIB_1__::func_490(iLocal_51, 32))
			{
				__LIB_38__::func_574(&iLocal_51, 32);
				__LIB_38__::func_475(&iLocal_51, 2);
			}
			break;
	}
}

void func_381()//Position - 0x11F13
{
	if (func_386() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_286 = 9;
		func_384(iLocal_90);
		func_384(PLAYER::PLAYER_PED_ID());
		func_382();
		__LIB_1__::func_31(&iLocal_98);
	}
}

void func_382()//Position - 0x11F4E
{
	struct<7> Var0;
	struct<7> Var1;
	if (!CAM::DOES_CAM_EXIST(iLocal_96))
	{
		iLocal_96 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_97))
	{
		iLocal_97 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
	func_383(&Var0, &Var1);
	CAM::SET_CAM_COORD(iLocal_96, Var0);
	CAM::SET_CAM_ROT(iLocal_96, Var0.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_96, Var0.f_6);
	CAM::SET_CAM_COORD(iLocal_97, Var1);
	CAM::SET_CAM_ROT(iLocal_97, Var1.f_3, 2);
	CAM::SET_CAM_FOV(iLocal_97, Var1.f_6);
	CAM::SET_CAM_ACTIVE(iLocal_96, true);
	CAM::SET_CAM_ACTIVE(iLocal_97, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_383(var uParam0, var uParam1)//Position - 0x11FE4
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		case 1:
			*uParam0 = { -20.162f, -1443.9158f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.9202f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		case 2:
			*uParam0 = { 1972.2477f, 3804.8054f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.1941f, 3807.5408f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_384(int iParam0)//Position - 0x1211E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_385(), 1f, -1, 0.5f, 8192, 40000f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

Vector3 func_385()//Position - 0x1217D
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_386()//Position - 0x121E2
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_388()) < (func_387() * func_387());
}

float func_387()//Position - 0x12205
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return 20.75f;
			break;
		case 1:
			return 10f;
			break;
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_388()//Position - 0x1224A
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_389()//Position - 0x122AF
{
	func_331();
	func_404();
	if (!__LIB_1__::func_13(&iLocal_101))
	{
		__LIB_1__::func_362(&iLocal_101);
	}
	if (func_403())
	{
		return;
	}
	if (!__LIB_1__::func_13(&iLocal_110))
	{
		__LIB_1__::func_362(&iLocal_110);
	}
	if (func_377() && PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_93, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_93) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_93))
		{
			if ((func_396() && !func_386()) && !func_395())
			{
				func_394();
				if (__LIB_2__::func_572(&iLocal_110) > 2.5f)
				{
					iLocal_83 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(iLocal_93, false), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(iLocal_93), false, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 896);
					__LIB_38__::func_574(&iLocal_49, 2048);
					iLocal_94 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &iLocal_298);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_298, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90, iLocal_298);
					__LIB_0__::func_467("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					__LIB_38__::func_475(&iLocal_49, 1024);
					iLocal_295 = -15;
					__LIB_1__::func_92();
					func_393();
					iLocal_81 = 3;
					if (__LIB_38__::func_570(0, 1))
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
					}
					iLocal_286 = 8;
				}
			}
			else
			{
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && __LIB_2__::func_572(&iLocal_101) > 15f) && func_392())
				{
					if (!__LIB_1__::func_490(iLocal_50, 4096))
					{
						__LIB_0__::func_151("PROS_SPOT" /* GXT: Go somewhere more secluded. */, -1);
						__LIB_38__::func_574(&iLocal_50, 4096);
					}
					func_391();
					__LIB_1__::func_31(&iLocal_101);
				}
				__LIB_1__::func_31(&iLocal_110);
			}
		}
		else
		{
			__LIB_1__::func_31(&iLocal_110);
			func_390();
		}
	}
	else if (!func_386())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
		{
			if (!PED::IS_PED_INJURED(iLocal_90))
			{
				TASK::CLEAR_PED_TASKS(iLocal_90);
			}
		}
		func_473(0);
	}
}

void func_390()//Position - 0x12461
{
	iLocal_51 = 0;
	iLocal_299[0] = 0;
	iLocal_299[1] = 0;
	iLocal_299[2] = 0;
	iLocal_299[3] = 0;
}

void func_391()//Position - 0x12488
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_392()//Position - 0x124B5
{
	if (!__LIB_1__::func_490(iLocal_51, 256))
	{
		return 1;
	}
	return __LIB_1__::func_490(iLocal_51, 32);
}

void func_393()//Position - 0x124D6
{
	if (func_551())
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_90, 229, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_90, 26, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_90, 115, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, true);
	}
}

void func_394()//Position - 0x12507
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	if (!__LIB_1__::func_490(iLocal_49, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_82)
		{
			if (iLocal_94 == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_93, true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar2, false, false);
				Var0.f_2 = (fVar2 + 0.15f);
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, 0f, 0f, -2f) };
				iLocal_94 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var1, 2f, 511, iLocal_93, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_94, &iVar4, &uVar5, &uVar6, &iVar3, &uVar7) == 2)
			{
				if (iVar4 != 0)
				{
					if ((iVar3 == -1447280105 || iVar3 == 1925605558) || iVar3 == 2128369009)
					{
						__LIB_1__::func_31(&iLocal_110);
					}
				}
				iLocal_82 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_94 = 0;
			}
		}
	}
}

int func_395()//Position - 0x125D2
{
	int iVar0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 0, false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396()//Position - 0x1261E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_65(1), 12f, false))
		{
			return 0;
		}
		if (__LIB_0__::func_877())
		{
			return 0;
		}
		if (func_401(iLocal_93, &Var2))
		{
			if (!func_400(Var2))
			{
				if (!func_399(Var1) || func_398(Var1))
				{
					return 0;
				}
			}
		}
		if (func_90(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), (30f * 0.5f)))
		{
			return 0;
		}
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_90, iLocal_93, 0, false, false))
		{
			return 0;
		}
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
		if (PED::GET_CLOSEST_PED(Var1, 20f, true, true, &iVar0, false, true, -1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, iLocal_93, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				__LIB_0__::func_467("NO VEHICLES FOUND");
			}
		}
		iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar3 == 0)
		{
			__LIB_0__::func_467("IN AN INTERIOR");
			return 0;
		}
		if (func_397())
		{
			return 0;
		}
	}
	return 1;
}

int func_397()//Position - 0x12772
{
	__LIB_38__::func_574(&iLocal_51, 256);
	if (!__LIB_1__::func_490(iLocal_51, 2))
	{
		if (func_379(3))
		{
			__LIB_38__::func_574(&iLocal_51, 2);
			__LIB_38__::func_475(&iLocal_51, 32);
		}
		return 1;
	}
	else
	{
		func_378();
	}
	return 0;
}

int func_398(struct<3> Param0)//Position - 0x127B1
{
	if (((((((((SYSTEM::VDIST(Param0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(Param0, -1453.3849f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(Param0, -1493.1909f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(Param0, -1388.642f, -1342.2657f, 3.1626f) <= 25f) || SYSTEM::VDIST(Param0, 50.2024f, -1392.3063f, 28.4166f) <= 12f) || SYSTEM::VDIST(Param0, 25.9811f, -1392.2893f, 28.3356f) <= 12f) || SYSTEM::VDIST(Param0, 10.0435f, -1391.5956f, 28.3074f) <= 12f) || SYSTEM::VDIST(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_399(struct<3> Param0)//Position - 0x12919
{
	if ((((((SYSTEM::VDIST(Param0, -1582.7823f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(Param0, -1445.7297f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(Param0, -1627.9353f, -1083.4431f, 3.2819f) <= 40f) || SYSTEM::VDIST(Param0, -1661.0979f, -1057.7303f, 2.5729f) <= 40f) || SYSTEM::VDIST(Param0, -1518.3582f, -553.8981f, 32.1463f) <= 15f)
	{
		__LIB_38__::func_574(&iLocal_49, 2097152);
		return 1;
	}
	__LIB_38__::func_475(&iLocal_49, 2097152);
	return 0;
}

int func_400(struct<3> Param0)//Position - 0x12A2C
{
	int iVar0;
	iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 1, 3f, 0f);
	PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar0))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 8, 3f, 0f);
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar0, &Param0);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_401(int iParam0, var* uParam1)//Position - 0x12B12
{
	struct<3> Var0[4];
	Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[0 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[1 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[2 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[3 /*3*/], uParam1, 3f, 0f))
	{
		return 1;
	}
	return 0;
}

int func_403()//Position - 0x12BE5
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_404()//Position - 0x12C11
{
	if (!__LIB_1__::func_490(iLocal_49, 128))
	{
		__LIB_13__::func_824(39, 1);
		__LIB_13__::func_824(40, 1);
		__LIB_13__::func_824(41, 1);
		__LIB_13__::func_824(42, 1);
		__LIB_13__::func_824(43, 1);
		__LIB_13__::func_824(44, 1);
		__LIB_38__::func_574(&iLocal_49, 128);
	}
}

void func_410(var uParam0)//Position - 0x1314E
{
	if (__LIB_1__::func_490(iLocal_49, 2))
	{
		if (!func_63())
		{
			return;
		}
		__LIB_0__::func_467(1);
	}
	func_68();
	func_542();
	if (func_551())
	{
		func_536(uParam0);
	}
}

void func_411()//Position - 0x13185
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, false, true, 0) || __LIB_1__::func_490(iLocal_49, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, false))
			{
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_90, 50);
				PED::SET_PED_LOD_MULTIPLIER(iLocal_90, 5f);
				if (__LIB_1__::func_490(iLocal_49, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						__LIB_38__::func_475(&iLocal_49, 16);
					}
				}
				iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_90, iLocal_93) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
					{
						__LIB_0__::func_467("***** prostitute IN VEHICLE****** ");
						if (__LIB_1__::func_490(iLocal_49, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								if (func_428(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_427(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else if (func_426(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								}
								else if (func_425(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								}
								else if (func_424(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								}
								else if (func_423(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								}
								else if (func_422(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								}
								else if (func_421(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								}
								else if (func_420(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								}
								else if (func_419(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								}
								else if (func_418(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								}
								else if (func_417(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								}
								else if (func_416(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								}
								else if (func_415(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								}
								else if (func_414(iLocal_93))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								}
								else
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_90, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_551())
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, false, false);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, true, true);
						}
						func_182(iLocal_90, 0);
						func_391();
						iLocal_62 = MISC::GET_GAME_TIMER();
						__LIB_1__::func_31(&iLocal_101);
						iLocal_286 = 7;
					}
					else
					{
						__LIB_0__::func_467("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((__LIB_0__::func_76(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) > 11f || func_412(20f)) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
				{
					__LIB_1__::func_12(&iLocal_107);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_90);
						func_473(0);
						__LIB_0__::func_467("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
					{
						iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					else if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_90, iLocal_93, 0, false, false))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_1__::func_490(iLocal_73, 1))
							{
								__LIB_1__::func_31(&iLocal_113);
								__LIB_38__::func_574(&iLocal_73, 1);
							}
							else if (__LIB_2__::func_572(&iLocal_113) > 20f)
							{
								func_126();
								__LIB_0__::func_467("prostitute couldn't get into the car");
								iLocal_286 = 6;
							}
						}
					}
				}
			}
		}
		else if (!__LIB_1__::func_490(iLocal_73, 1))
		{
			__LIB_0__::func_467("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(iLocal_90);
			func_96(15);
		}
	}
}

bool func_412(float fParam0)//Position - 0x1353B
{
	if (!__LIB_1__::func_13(&iLocal_107))
	{
		__LIB_1__::func_31(&iLocal_107);
	}
	return __LIB_2__::func_559(&iLocal_107) > fParam0;
}

int func_414(int iParam0)//Position - 0x135BA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_ZENO"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x135E5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_IGNUS"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_416(int iParam0)//Position - 0x13610
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_ZR350"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_417(int iParam0)//Position - 0x1363B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_PEYOTE2"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_418(int iParam0)//Position - 0x13666
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_NEO"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x13691
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_420(int iParam0)//Position - 0x136BC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_ITALIGTO"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_421(int iParam0)//Position - 0x136E7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_DOMINATOR3"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x13712
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_TAIPAN"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_423(int iParam0)//Position - 0x13743
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_SC1"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_424(int iParam0)//Position - 0x1376E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS2"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_425(int iParam0)//Position - 0x13799
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_426(int iParam0)//Position - 0x137CA
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_427(int iParam0)//Position - 0x137FB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_LE7B"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_428(int iParam0)//Position - 0x13832
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_LOW_TORERO2"):
				return 1;
				break;
			}
	}
	return 0;
}

void func_429(var uParam0)//Position - 0x138B7
{
	int iVar0;
	if (!func_438(0))
	{
		return;
	}
	if (!__LIB_1__::func_490(iLocal_49, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		__LIB_38__::func_574(&iLocal_49, 16);
	}
	if (!__LIB_1__::func_13(&iLocal_107))
	{
		__LIB_1__::func_362(&iLocal_107);
	}
	if (__LIB_2__::func_559(&iLocal_107) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
	{
		if (__LIB_1__::func_490(iLocal_73, 524288))
		{
			__LIB_1__::func_12(&iLocal_107);
			iLocal_286 = 6;
		}
		else if (func_437())
		{
			__LIB_1__::func_31(&iLocal_107);
			__LIB_38__::func_574(&iLocal_73, 524288);
		}
	}
	func_69(iLocal_90);
	if (((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0) || __LIB_1__::func_490(iLocal_73, 1)) && !__LIB_0__::func_77(0)) && !__LIB_0__::func_877())
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_90, iLocal_93, 0, false, false))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_1__::func_490(iLocal_73, 1))
				{
					__LIB_1__::func_31(&iLocal_113);
					__LIB_38__::func_574(&iLocal_73, 1);
				}
				else if (__LIB_2__::func_572(&iLocal_113) > 10f)
				{
					func_68();
					TASK::CLEAR_PED_TASKS(iLocal_90);
					__LIB_0__::func_467("prostitute couldn't get into the car");
					iLocal_286 = 6;
				}
			}
		}
		else
		{
			func_430();
		}
	}
	else if (__LIB_0__::func_1("PROS_ACCEPT" /* GXT: Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle. */))
	{
		__LIB_38__::func_475(&iLocal_49, 1048576);
		func_468();
		if (func_551())
		{
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PLAY_ANIM"));
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_542();
				func_536(uParam0);
			}
		}
	}
}

void func_430()//Position - 0x13A32
{
	char* sVar0;
	if (iLocal_286 != 5 && func_363(&sVar0, 0))
	{
		func_433();
		if (__LIB_3__::func_113(iLocal_72, 1) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			__LIB_38__::func_574(&iLocal_49, 8192);
			__LIB_1__::func_31(&iLocal_107);
		}
		if (__LIB_1__::func_490(iLocal_49, 8192))
		{
			func_468();
			Global_32110 = 1;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_420 = 1;
			__LIB_36__::func_371("PROSTITUTES_SOLICIT_SCENE");
			__LIB_38__::func_572("PROSTITUTES_DRIVE_SCENE");
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && !PED::IS_PED_IN_VEHICLE(iLocal_90, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_90, iLocal_93, -1, 0, 1f, 8388609, 0);
				}
			}
			sLocal_61 = __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 1, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			sLocal_61 = __LIB_42__::func_680(PLAYER::PLAYER_PED_ID(), 0, 1);
			STREAMING::REQUEST_ANIM_DICT(sLocal_61);
			__LIB_1__::func_31(&iLocal_101);
			iLocal_286 = 5;
		}
	}
}

void func_433()//Position - 0x13C20
{
	if (Global_32110)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return;
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/);
		if (!__LIB_1__::func_490(iLocal_49, 8192))
		{
			if (iLocal_72 == -1)
			{
				__LIB_7__::func_954(&iLocal_72, 5, "PROS_ACCEPT" /* GXT: Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle. */, 0, 0, 0, 0);
			}
		}
	}
	else if (__LIB_3__::func_363(iLocal_72, 0))
	{
		func_468();
	}
}

int func_437()//Position - 0x13EB9
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90) || PED::IS_PED_INJURED(iLocal_90))
	{
		return 1;
	}
	if (!func_551())
	{
		func_68();
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, true))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
		}
		else if (__LIB_1__::func_490(iLocal_49, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_284), func_66(iVar0), 8f, -8f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			return 0;
		}
	}
	switch (iLocal_55)
	{
		case 0:
			if (__LIB_1__::func_490(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(5), 2f, -2f, -1, 0, 0f, false, false, false);
				iLocal_55 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			break;
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(iLocal_90, func_67(iLocal_284), func_66(iVar0), 8f, -8f, -1, 1, 0f, false, false, false);
					iLocal_55 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			break;
		case 3:
			iLocal_55 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_438(bool bParam0)//Position - 0x14071
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		return 0;
	}
	if (__LIB_1__::func_490(iLocal_49, 8192))
	{
	}
	if (__LIB_0__::func_76(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) > 11f)
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_551())
	{
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 2f)
		{
			return 0;
		}
	}
	if (func_90(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), 1106247680))
	{
		if (!__LIB_1__::func_490(iLocal_50, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_151("PROS_COPS" /* GXT: Prostitutes will ignore you if police are nearby. */, -1);
			__LIB_38__::func_574(&iLocal_50, 8192);
		}
		return 0;
	}
	if (!func_377())
	{
		if (!func_551())
		{
			if ((!iLocal_86 && !Global_112433) && __LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				__LIB_0__::func_151("PROS_CAR" /* GXT: You cannot pick up Prostitutes in this vehicle. */, -1);
				iLocal_86 = 1;
			}
			func_439();
		}
		else if (!func_524(4096))
		{
			__LIB_0__::func_151("PROS_CAR" /* GXT: You cannot pick up Prostitutes in this vehicle. */, -1);
			func_196(4096);
		}
		return 0;
	}
	return 1;
}

void func_439()//Position - 0x1419C
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!__LIB_1__::func_490(iLocal_49, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_90))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			__LIB_38__::func_574(&iLocal_49, 1);
		}
	}
}

void func_441()//Position - 0x14272
{
	if (func_438(0))
	{
		func_430();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 && !__LIB_1__::func_490(iLocal_49, 8192))
		{
			if (func_72(1))
			{
				__LIB_1__::func_12(&iLocal_107);
				iLocal_62 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_467("prostitute proposition player VEHICLE");
				iLocal_286 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_90);
		func_96(15);
	}
}

void func_442(var uParam0)//Position - 0x142D4
{
	if (func_438(0))
	{
		func_430();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || __LIB_1__::func_490(iLocal_49, 8192))
		{
			iLocal_286 = 3;
		}
		else if (func_412(20f))
		{
			__LIB_1__::func_12(&iLocal_107);
			func_473(0);
		}
		else
		{
			func_443(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_90);
		func_96(15);
	}
}

void func_443(var uParam0)//Position - 0x1433D
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_93))
	{
		return;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_93), &Var2, &Var1);
	Var0 = { Var1 - Var2 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, -(Var0.f_0 + 0.2f), 0f, 0f) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_93, (Var0.f_0 + 0.2f), 0f, 0f) };
	Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
	if (SYSTEM::VDIST(Var5, Var4) < SYSTEM::VDIST(Var5, Var3))
	{
		Var3 = { Var4 };
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 || !__LIB_1__::func_490(iLocal_49, 8192)) && SYSTEM::VDIST2(Local_89, Var3) > 0f)
	{
		if (func_551())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_90))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, false, true);
			}
			__LIB_14__::func_603(&uLocal_281, func_67(iLocal_284));
			__LIB_38__::func_576(uParam0, 1);
			__LIB_31__::func_746(&uLocal_281, uParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var3.f_0, Var3.f_1, Var3.f_2, 1f, -1, 1f, 8192, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_90, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
		Local_89 = { Var3 };
	}
}

void func_455(var uParam0)//Position - 0x147D6
{
	char* sVar0;
	if (func_438(1))
	{
		if (!__LIB_1__::func_13(&iLocal_107))
		{
			__LIB_1__::func_362(&iLocal_107);
		}
		__LIB_38__::func_574(&iLocal_49, 4);
		Global_32111 = 1;
		func_430();
		if (__LIB_17__::func_339(&iLocal_107, 2f) || __LIB_1__::func_490(iLocal_49, 8192))
		{
			__LIB_38__::func_574(&iLocal_49, 2);
			if (func_363(&sVar0, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, -1, 2048, 4);
				func_443(uParam0);
				__LIB_38__::func_574(&iLocal_49, 4);
				Global_32110 = 1;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_420 = 1;
				iLocal_286 = 2;
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(__LIB_16__::func_226(&sVar0), "PIM_HHIDCR" /* GXT: Not available while a key player in a Freemode Event. */))
				{
					__LIB_1__::func_707(&sVar0, 30000);
					__LIB_1__::func_752(1);
				}
				else
				{
					__LIB_0__::func_151(&sVar0, -1);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0) && MISC::ARE_STRINGS_EQUAL(&sVar0, "PROS_NO_MONEY" /* GXT: You need more cash to pick up a prostitute. */))
				{
					func_456();
				}
				func_96(0);
				iLocal_287 = 0;
				__LIB_38__::func_574(&iLocal_49, 8388608);
				__LIB_38__::func_475(&iLocal_49, 4);
				Global_32110 = 0;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_420 = 0;
			}
		}
	}
	else
	{
		__LIB_38__::func_475(&iLocal_49, 4);
		Global_32111 = 0;
	}
}

void func_456()//Position - 0x148F8
{
	if (!func_524(64))
	{
		__LIB_2__::func_820(0, 31, 5);
		func_196(64);
	}
}

void func_468()//Position - 0x14AE8
{
	if (iLocal_72 != -1)
	{
		__LIB_3__::func_422(&iLocal_72);
	}
}

void func_473(int iParam0)//Position - 0x14BE0
{
	bool bVar0;
	func_126();
	if (iParam0 || iLocal_70 == 0)
	{
		bVar0 = true;
		if (func_551())
		{
			bVar0 = false;
		}
		func_106(bVar0);
		func_96(14);
	}
	else
	{
		func_106(0);
		func_96(15);
	}
}

int func_474()//Position - 0x14C22
{
	if ((((((__LIB_0__::func_879() || __LIB_1__::func_648()) || __LIB_1__::func_647()) || __LIB_1__::func_736()) || __LIB_1__::func_756()) || Global_2656879) || Global_2656879.f_1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_484()//Position - 0x14D1E
{
	if (Global_32112)
	{
		return 0;
	}
	if (func_551())
	{
		return 0;
	}
	if (!func_488())
	{
		return 0;
	}
	if (func_485())
	{
		iLocal_287 = 4;
		return 1;
	}
	return 0;
}

int func_485()//Position - 0x14D57
{
	int iVar0;
	iLocal_92 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), 15f, 0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_92) && !ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			if (func_91(&iLocal_92) && !__LIB_3__::func_601(iLocal_92, 1))
			{
				iLocal_91 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_92, -1, false);
				if (!iLocal_91 == 0)
				{
					if (func_486(&iLocal_91))
					{
						iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_92);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_91))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_91, true, false);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_92))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_92, true, false);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_91, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_92, false, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_92 = 0;
	iLocal_91 = 0;
	return 0;
}

int func_486(int iParam0)//Position - 0x14E2C
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_PED_MALE(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_488()//Position - 0x14E8D
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		return 0;
	}
	return 1;
}

int func_489()//Position - 0x14EB3
{
	if ((!func_488() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) || __LIB_1__::func_490(iLocal_49, 4096))
	{
		return 0;
	}
	if (__LIB_1__::func_490(iLocal_49, 32))
	{
		iLocal_287 = 2;
		__LIB_0__::func_467(2);
		__LIB_0__::func_467("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_490()//Position - 0x14F07
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		if (!PED::IS_PED_FLEEING(iLocal_90))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 196628, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_90);
				TASK::TASK_SMART_FLEE_PED(iLocal_90, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(iLocal_90, true);
				func_96(15);
			}
		}
	}
}

int func_493()//Position - 0x14F81
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_ANY")) == 1)
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_90))
	{
		return 0;
	}
	return 1;
}

int func_494()//Position - 0x14FB7
{
	switch (iLocal_291)
	{
		case 0:
			if (!func_551())
			{
				__LIB_14__::func_603(&uLocal_281, func_67(iLocal_284));
				__LIB_31__::func_746(&uLocal_281, &uLocal_348);
				__LIB_0__::func_467("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_551())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
			}
			iLocal_291 = 1;
			break;
		case 1:
			if (!func_551())
			{
				if (__LIB_38__::func_575(&uLocal_348))
				{
					__LIB_38__::func_574(&iLocal_49, 4194304);
					__LIB_0__::func_467("Moving to PROSTITUTE_INIT_INIT");
					iLocal_291 = 2;
				}
			}
			else if (func_551())
			{
				__LIB_38__::func_574(&iLocal_49, 4194304);
				__LIB_0__::func_467("Moving to PROSTITUTE_INIT_INIT");
				iLocal_291 = 2;
			}
			break;
		case 2:
			iLocal_288 = 0;
			iLocal_67 = iLocal_288;
			__LIB_38__::func_475(&iLocal_49, 512);
			__LIB_38__::func_475(&iLocal_49, 1024);
			iLocal_287 = 0;
			iLocal_91 = 0;
			iLocal_92 = 0;
			__LIB_0__::func_467("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_291 = 3;
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_90))
			{
				if (!func_551())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_90, false);
					__LIB_0__::func_222(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_90);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
					__LIB_0__::func_222(&uLocal_116, 4, iLocal_90, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_90, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_90);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_499()//Position - 0x15289
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (__LIB_0__::func_683() == 0)
		{
			if (__LIB_0__::func_724(iLocal_90, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_90, true))
				{
					if (func_551())
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, true, true);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_501()//Position - 0x15323
{
	if (PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (PED::IS_PED_USING_SCENARIO(iLocal_90, func_65(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_90, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_502()//Position - 0x1539C
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		return;
	}
	if (iLocal_285 != 3 && iLocal_285 != 4)
	{
		func_503(PLAYER::PLAYER_PED_ID());
	}
	else if (iLocal_285 == 3)
	{
		func_503(iLocal_91);
	}
}

void func_503(int iParam0)//Position - 0x153DB
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return;
	}
	if (func_551())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return;
		}
	}
	if (__LIB_0__::func_76(iParam0, iLocal_90, 1) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_90, iParam0))
		{
			if (func_551())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_90, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_90, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(iLocal_90, iParam0))
	{
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
			}
		}
		else
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_90);
		}
	}
}

void func_504()//Position - 0x1548F
{
	if (Global_32110)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_90, iLocal_93, false))
			{
				func_505();
			}
		}
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_90, false) || !ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		if (Global_32114 != SCRIPT::GET_ID_OF_THIS_THREAD() && __LIB_1__::func_490(iLocal_49, 32))
		{
			__LIB_38__::func_475(&iLocal_49, 32);
		}
		return;
	}
	if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_32113 || Global_32113 == 0f) && iLocal_287 != 4)
	{
		Global_32113 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		Global_32114 = SCRIPT::GET_ID_OF_THIS_THREAD();
		__LIB_38__::func_574(&iLocal_49, 32);
	}
	else if (Global_32114 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_32113 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	else
	{
		__LIB_38__::func_475(&iLocal_49, 32);
	}
}

void func_505()//Position - 0x15588
{
	if (func_551())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
		{
			PED::SET_PED_RESET_FLAG(iLocal_90, 323, true);
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(iLocal_90, 323, true);
	}
}

void func_506(var uParam0)//Position - 0x155B7
{
	if (!iLocal_286 == 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_510())
			{
				if (func_551())
				{
					func_123(0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 196624, true);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_90))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_90, true, false);
					}
					TASK::TASK_SMART_FLEE_PED(iLocal_90, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_90, true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_65++;
				if (iLocal_65 >= 2)
				{
					__LIB_0__::func_467("prostitute CLASSED AS UNDER ATTACK");
					iLocal_286 = 12;
				}
				else
				{
					__LIB_0__::func_467("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_90);
				}
			}
			else if (func_508())
			{
				func_507();
				iLocal_286 = 12;
			}
		}
	}
}

void func_507()//Position - 0x15695
{
	if (PED::IS_PED_INJURED(iLocal_90))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_90);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_90, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_508()//Position - 0x156BE
{
	int iVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (!func_509())
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return VEHICLE::IS_VEHICLE_SIREN_ON(iVar0);
	}
	return 0;
}

int func_509()//Position - 0x15712
{
	if (!func_551())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
					}
					return 1;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}
	return 0;
}

int func_510()//Position - 0x157B8
{
	struct<3> Var0;
	if (!__LIB_1__::func_490(iLocal_49, 4096))
	{
		if (__LIB_0__::func_76(iLocal_90, PLAYER::PLAYER_PED_ID(), 1) < 30f)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_90, true) };
			if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88 /*EVENT_SHOCKING_EXPLOSION*/, Var0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(91 /*EVENT_SHOCKING_GUNSHOT_FIRED*/, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(90 /*EVENT_SHOCKING_GUN_FIGHT*/, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(104 /*EVENT_SHOCKING_PED_SHOT*/, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(116 /*EVENT_SHOCKING_SEEN_PED_KILLED*/, Var0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114 /*EVENT_SHOCKING_SEEN_MELEE_ACTION*/, Var0, 30f) && !func_551())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_551())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
				}
				__LIB_38__::func_574(&iLocal_49, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_511()//Position - 0x1589C
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_90) && !ENTITY::IS_ENTITY_DEAD(iLocal_90, false)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_551())
		{
			if (__LIB_38__::func_573(PLAYER::PLAYER_ID(), 0))
			{
				__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, false))
				{
					func_106(0);
				}
				func_96(15);
				return 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_90))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, false))
			{
				if (!__LIB_0__::func_540(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, false, true, 0))
						{
							return 1;
						}
						else
						{
							__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(__LIB_0__::func_217() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_286 == 0)
			{
				__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!__LIB_0__::func_540(9) && !__LIB_0__::func_540(5))
			{
				return 1;
			}
			else if (!(__LIB_0__::func_217() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_403())))
			{
				__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(0);
				func_96(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_0__::func_467("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}

void func_516()//Position - 0x15C6D
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 2);
			if (Var2.f_0 == 1866600591)
			{
				if (Var2.f_1 == PLAYER::PLAYER_ID())
				{
					func_196(128);
				}
			}
		}
		iVar0++;
	}
}

void func_517()//Position - 0x15CC1
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
	{
		return;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 1)
	{
		if (__LIB_2__::func_99(1, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			}
		}
	}
}

bool func_524(int iParam0)//Position - 0x15F38
{
	return __LIB_1__::func_490(iLocal_52, iParam0);
}

void func_528(int iParam0)//Position - 0x160B1
{
	if (__LIB_1__::func_490(iLocal_52, iParam0))
	{
		__LIB_38__::func_475(&iLocal_52, iParam0);
	}
}

void func_529()//Position - 0x160CC
{
	func_2(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
		{
			func_2(1);
		}
		else
		{
			__LIB_0__::func_467("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		__LIB_0__::func_467("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_2(0);
		__LIB_0__::func_467("Prostitue: not continuing, player isn't player or is dead");
	}
}

void func_535()//Position - 0x16289
{
	func_196(1);
}

void func_536(var uParam0)//Position - 0x16296
{
	__LIB_0__::func_467();
	if (__LIB_38__::func_570(0, 1))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	if (!PED::IS_PED_INJURED(iLocal_90))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_90))
		{
			if ((func_551() && TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, -251125078) != 1)
			{
				TASK::TASK_WANDER_STANDARD(iLocal_90, 40000f, 0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
				{
					PED::SET_PED_KEEP_TASK(iLocal_90, true);
				}
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_90))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_90);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_90);
			}
			else
			{
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_90))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_90);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_90);
			}
		}
	}
	iLocal_49 = 0;
	if (__LIB_1__::func_490(iLocal_49, 64))
	{
		Global_32112 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_91))
	{
		TASK::CLEAR_PED_TASKS(iLocal_91);
	}
	iLocal_91 = 0;
	iLocal_287 = 0;
	if (__LIB_1__::func_490(iLocal_49, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_38__::func_475(&iLocal_49, 2048);
	if (!__LIB_5__::func_824())
	{
		__LIB_1__::func_91();
	}
	if (func_551())
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_83))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_83);
		}
	}
	iLocal_92 = 0;
	__LIB_0__::func_467();
	__LIB_0__::func_467();
	Global_32113 = 0f;
	if (!Global_1952191.f_5314 && !Global_1952191.f_5318)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_524(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, iLocal_84, iLocal_85, 0);
			func_196(1024);
		}
	}
	if (__LIB_0__::func_1("PROS_ACCEPT" /* GXT: Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle. */) && !Global_32110)
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_32114 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_32110 = 0;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_420 = 0;
	}
	__LIB_38__::func_576(uParam0, 0);
	if (func_551())
	{
		func_196(2048);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_541(bool bParam0)//Position - 0x1649D
{
	if (!PED::IS_PED_INJURED(iLocal_90))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_90, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_90, joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_90, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_551())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_90))
				{
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_90))
					{
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_90)))
						{
							PED::SET_PED_KEEP_TASK(iLocal_90, true);
						}
					}
				}
			}
			else
			{
				PED::SET_PED_KEEP_TASK(iLocal_90, true);
			}
		}
	}
}

void func_542()//Position - 0x1650F
{
	if (!func_551())
	{
		if (iLocal_286 == 11 || iLocal_286 == 13)
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_90, false))
	{
		if (!PED::IS_PED_FLEEING(iLocal_90))
		{
			func_96(0);
			iLocal_285 = 1;
		}
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_90))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, false);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_90);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_90);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_90, 0f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_93, false))
	{
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_93))
			{
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 <= 0 && !BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_93, false);
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_93, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_93, false);
				}
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_93, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_93, false);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_93, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_93, false);
		}
	}
	func_550(iLocal_74);
	func_550(iLocal_75);
	func_550(iLocal_76);
	func_550(iLocal_77);
	func_550(iLocal_78);
	func_550(iLocal_79);
	func_550(iLocal_80);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if ((func_551() && iLocal_288 != 3) && __LIB_1__::func_490(iLocal_49, 2048))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_1__::func_490(iLocal_49, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_38__::func_475(&iLocal_49, 2048);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	if (!__LIB_5__::func_824())
	{
		__LIB_1__::func_91();
	}
	iLocal_287 = 0;
	if (__LIB_1__::func_490(iLocal_49, 4))
	{
		__LIB_38__::func_475(&iLocal_49, 4);
		Global_32110 = 0;
		Global_32111 = 0;
		Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_420 = 0;
	}
	if (__LIB_1__::func_490(iLocal_49, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	func_549();
	func_468();
	if (((__LIB_0__::func_1("PROS_ACCEPT" /* GXT: Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle. */) || __LIB_0__::func_1("PROS_CAM_TOG" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~ */)) || __LIB_0__::func_1("PROS_RESPONSE" /* GXT: Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy */)) || __LIB_0__::func_1("PROS_CAM_OC" /* GXT: Use ~INPUTGROUP_LOOK~ to move the camera.~n~ */))
	{
		__LIB_38__::func_475(&iLocal_49, 1048576);
		HUD::CLEAR_HELP(true);
	}
	__LIB_15__::func_827(0);
	HUD::DISPLAY_RADAR(true);
	if (__LIB_1__::func_490(iLocal_49, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
		{
			STREAMING::REMOVE_CLIP_SET(func_92());
		}
	}
	__LIB_36__::func_371("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_123(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_543();
	if (func_551())
	{
		if (func_524(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_93))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_93))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_93, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iLocal_93, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_93);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_93, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iLocal_93, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iLocal_93, false);
				}
			}
		}
	}
	__LIB_12__::func_849(23, 0);
	iLocal_49 = 0;
	iLocal_51 = 0;
}

void func_543()//Position - 0x16845
{
	struct<8> Var0[2];
	struct<6> Var1[2];
	if (!func_548())
	{
		return;
	}
	if (!iLocal_47)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var1[0 /*6*/]), "SP", 24);
	StringCopy(&(Var1[1 /*6*/]), "????", 24);
	if (__LIB_1__::func_317(275, &Var1, &Var0, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, __LIB_0__::func_114(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_545(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_544(), 0f);
	}
}

int func_544()//Position - 0x168CA
{
	return iLocal_46;
}

int func_545()//Position - 0x168D4
{
	return iLocal_45;
}

int func_548()//Position - 0x16A1B
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
	{
		return 1;
	}
	return 0;
}

void func_549()//Position - 0x16A41
{
	if (__LIB_1__::func_490(iLocal_49, 128))
	{
		__LIB_13__::func_824(39, 0);
		__LIB_13__::func_824(40, 0);
		__LIB_13__::func_824(41, 0);
		__LIB_13__::func_824(42, 0);
		__LIB_13__::func_824(43, 0);
		__LIB_13__::func_824(44, 0);
		__LIB_38__::func_475(&iLocal_49, 128);
	}
}

void func_550(int iParam0)//Position - 0x16A86
{
	if (func_551())
	{
		if (func_219(iParam0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);
		}
	}
}

bool func_551()//Position - 0x16AA4
{
	return func_524(1);
}

