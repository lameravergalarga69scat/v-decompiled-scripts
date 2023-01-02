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
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_424(1);
		}
		if (__LIB_15__::func_485(0))
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
				if (__LIB_0__::func_109() && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("FMINT", 0))
				{
					if (__LIB_36__::func_39() > 0)
					{
						__LIB_0__::func_222(&uLocal_249, 1, 0, "Lamar", 0, 1);
						__LIB_2__::func_57(0);
						__LIB_2__::func_862(4, 1);
						__LIB_2__::func_862(1, 1);
						__LIB_2__::func_862(0, 1);
						__LIB_2__::func_862(2, 1);
						__LIB_2__::func_862(3, 0);
						__LIB_24__::func_413(iLocal_61, 1);
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
				if (__LIB_36__::func_39() == 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (__LIB_36__::func_39() == 6 && Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 6;
				}
				break;
			case 2:
				func_390();
				func_23();
				if (__LIB_36__::func_39() == 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 4;
				}
				if (__LIB_36__::func_39() == 6 && Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] < 4)
				{
					Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				}
				break;
			case 4:
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 5;
				break;
			case 5:
				__LIB_1__::func_399(&(Local_414.f_5));
				if (__LIB_1__::func_398(&(Local_414.f_5)))
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
			switch (__LIB_36__::func_39())
			{
				case 0:
					Local_414.f_0 = 2;
					break;
				case 2:
					func_11();
					__LIB_0__::func_467();
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
	func_3();
}

void func_3()//Position - 0x2EE
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!BitTest(Local_414.f_1, 3))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0))
			{
				MISC::SET_BIT(&(Local_414.f_1), 3);
			}
		}
		if (!BitTest(Local_414.f_1, 4))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
			{
				MISC::SET_BIT(&(Local_414.f_1), 4);
			}
		}
		if (!BitTest(Local_414.f_1, 5))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 3))
			{
				MISC::SET_BIT(&(Local_414.f_1), 5);
			}
		}
		if (!BitTest(Local_414.f_1, 6))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 4))
			{
				MISC::SET_BIT(&(Local_414.f_1), 6);
			}
		}
		if (!BitTest(Local_414.f_1, 7))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 5))
			{
				MISC::SET_BIT(&(Local_414.f_1), 7);
			}
		}
		if (!BitTest(Local_414.f_1, 8))
		{
			if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
			{
				MISC::SET_BIT(&(Local_414.f_1), 8);
			}
		}
		switch (Local_414.f_2)
		{
			case 0:
				if (BitTest(Local_414.f_1, 3))
				{
					if (func_4(&(Local_414.f_3), &(Local_414.f_4), -1031.7882f, -2731.816f, 19.0546f, 240.4822f, &uLocal_416))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_414.f_3), true, false, false);
						Local_414.f_2 = 2;
					}
				}
				break;
			case 2:
				if (BitTest(Local_414.f_1, 4))
				{
					Local_414.f_2 = 1;
				}
				break;
			case 1:
				if (BitTest(Local_414.f_1, 5))
				{
					Local_414.f_2 = 3;
				}
				break;
			case 3:
				if (BitTest(Local_414.f_1, 6))
				{
					Local_414.f_2 = 4;
				}
				break;
			case 4:
				if (BitTest(Local_414.f_1, 7))
				{
					Local_414.f_2 = 5;
				}
				break;
			case 5:
				if (BitTest(Local_414.f_1, 8))
				{
					Local_414.f_2 = 6;
				}
				break;
			}
	}
}

int func_4(var uParam0, var uParam1, struct<3> Param2, float fParam3, var uParam4)//Position - 0x4B6
{
	if (__LIB_0__::func_799(Global_2815059.f_837) && __LIB_0__::func_799(Global_2815059.f_838))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (__LIB_0__::func_957(uParam0, Global_2815059.f_837, Param2, fParam3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(NETWORK::NET_TO_VEH(*uParam0), true);
			}
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
		{
			if (__LIB_0__::func_930(uParam1, *uParam0, 25, Global_2815059.f_838, -1, 1, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(*uParam1), true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2815059.f_837);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_2815059.f_838);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(*uParam0), false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam1), true);
				__LIB_0__::func_222(uParam4, 8, NETWORK::NET_TO_PED(*uParam1), "FM_TAXI", 0, 1);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam1))
	{
		return 0;
	}
	return 1;
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
	if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (!__LIB_0__::func_892(PLAYER::PLAYER_ID()) == iParam0)
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
			if (!__LIB_3__::func_509(iLocal_61))
			{
				MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 2);
				Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2 = 99;
			}
			break;
	}
}

void func_31()//Position - 0x100A
{
	int iVar0;
	if (__LIB_24__::func_461())
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_24__::func_460(0);
		}
	}
	if (!__LIB_0__::func_864(&uLocal_239))
	{
		__LIB_0__::func_795(&uLocal_239, 0, 0);
	}
	if (!BitTest(uLocal_582, 21))
	{
		MISC::SET_BIT(&uLocal_582, 21);
	}
	if (!BitTest(uLocal_582, 3))
	{
		if (!__LIB_0__::func_864(&uLocal_237))
		{
			__LIB_0__::func_795(&uLocal_237, 0, 0);
		}
		else if (BitTest(uLocal_582, 21))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (__LIB_0__::func_937(&uLocal_237, 3000, 0))
					{
						MISC::SET_BIT(&uLocal_582, 3);
					}
				}
			}
		}
		if (__LIB_0__::func_937(&uLocal_237, 40000, 0))
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
				__LIB_0__::clearF_1Prop(&uLocal_237);
			}
		}
	}
	if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 2))
	{
		if (!__LIB_0__::func_864(&uLocal_243))
		{
			__LIB_0__::func_795(&uLocal_243, 0, 0);
		}
		else if (!BitTest(uLocal_583, 1))
		{
			if (__LIB_0__::func_937(&uLocal_243, 10000, 0))
			{
				MISC::SET_BIT(&uLocal_583, 1);
				__LIB_0__::clearF_1Prop(&uLocal_243);
			}
		}
		else if (BitTest(uLocal_582, 19))
		{
			if (!BitTest(uLocal_582, 18))
			{
				if (!func_196() || __LIB_0__::func_937(&uLocal_237, 5000, 0))
				{
					__LIB_24__::func_419(0);
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
					__LIB_24__::func_411(1);
					MISC::SET_BIT(&uLocal_582, 2);
					if (!BitTest(uLocal_582, 20))
					{
						__LIB_0__::func_712(19, 3, 1);
						MISC::SET_BIT(&uLocal_582, 20);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), true, 1);
					}
				}
			}
		}
		else if (!__LIB_0__::func_77(0))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_3__::func_508())
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
						__LIB_0__::func_795(&uLocal_241, 0, 0);
						__LIB_0__::func_795(&uLocal_245, 0, 0);
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
					func_75();
					MISC::SET_BIT(&uLocal_582, 17);
					__LIB_0__::clearF_1Prop(&uLocal_237);
				}
			}
			else if (!func_196())
			{
				if (!BitTest(uLocal_582, 23))
				{
					if (__LIB_0__::func_937(&uLocal_245, 4500, 0))
					{
						MISC::SET_BIT(&uLocal_582, 23);
						MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 3);
					}
				}
				if (__LIB_0__::func_937(&uLocal_241, 15000, 0))
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
					if (!__LIB_3__::func_509(iLocal_61))
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
									__LIB_3__::func_198("GET_AMMU", 0);
									MISC::SET_BIT(&uLocal_582, 0);
									MISC::SET_BIT(&uLocal_582, 25);
									if (HUD::DOES_BLIP_EXIST(Global_100493.f_255[iLocal_61]))
									{
										if (!BitTest(Global_2815059.f_836, 2))
										{
											HUD::SET_BLIP_ROUTE(Global_100493.f_255[iLocal_61], true);
										}
										__LIB_24__::func_413(iLocal_61, 1);
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
							__LIB_3__::func_198("GET_GUN", 0);
							func_68(1);
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
						__LIB_24__::func_413(iLocal_61, 0);
					}
					__LIB_3__::func_198("LOSE_COP", 0);
					MISC::SET_BIT(&uLocal_582, 14);
				}
			}
		}
	}
	else if (__LIB_0__::func_937(&uLocal_239, 300000, 0))
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
				if (__LIB_3__::func_509(iLocal_61))
				{
				}
			}
		}
		else
		{
			func_44(400);
		}
	}
	else if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
	{
		if (!func_42())
		{
			MISC::SET_BIT(&(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3), 1);
			__LIB_3__::func_0();
			__LIB_0__::func_151("FM_IHELP_AMMU", -1);
			if (!BitTest(uLocal_582, 31))
			{
				__LIB_1__::func_348(119, 1, -1, 1);
				__LIB_1__::func_348(115, 1, -1, 1);
				MISC::SET_BIT(&uLocal_582, 31);
			}
			__LIB_0__::clearF_1Prop(&uLocal_237);
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
	return ((((((((((__LIB_2__::func_764(28) || __LIB_2__::func_764(29)) || __LIB_2__::func_764(30)) || __LIB_2__::func_764(31)) || __LIB_2__::func_764(32)) || __LIB_2__::func_764(33)) || __LIB_2__::func_764(34)) || __LIB_2__::func_764(35)) || __LIB_2__::func_764(36)) || __LIB_2__::func_764(37)) || __LIB_2__::func_764(38));
}

void func_44(int iParam0)//Position - 0x1AFD
{
	int iVar0;
	var uVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = __LIB_2__::func_847(PLAYER::PLAYER_ID());
		if (iVar0 < iParam0)
		{
			if (__LIB_0__::func_112())
			{
				__LIB_2__::func_105(joaat("SERVICE_EARN_HOLDUPS"), (iParam0 - iVar0), &uVar1, 0, 0, 0);
			}
			else
			{
				MONEY::NETWORK_EARN_FROM_HOLDUPS((iParam0 - iVar0));
			}
		}
	}
}

void func_61(bool bParam0)//Position - 0x29A9
{
	__LIB_37__::func_213(28, bParam0);
	__LIB_37__::func_213(29, bParam0);
	__LIB_37__::func_213(30, bParam0);
	__LIB_37__::func_213(31, bParam0);
	__LIB_37__::func_213(32, bParam0);
	__LIB_37__::func_213(33, bParam0);
	__LIB_37__::func_213(34, bParam0);
	__LIB_37__::func_213(35, bParam0);
	__LIB_37__::func_213(36, bParam0);
	__LIB_37__::func_213(37, bParam0);
	__LIB_37__::func_213(38, bParam0);
}

bool func_66()//Position - 0x2B58
{
	return ((((((((((func_67(28) || func_67(29)) || func_67(30)) || func_67(31)) || func_67(32)) || func_67(33)) || func_67(34)) || func_67(35)) || func_67(36)) || func_67(37)) || func_67(38));
}

int func_67(int iParam0)//Position - 0x2BDE
{
	return __LIB_1__::func_686(iParam0, 3, 0);
}

void func_68(bool bParam0)//Position - 0x2BEE
{
	if (bParam0)
	{
		if (!BitTest(Global_1922761, 19))
		{
			MISC::SET_BIT(&Global_1922761, 19);
		}
	}
	else if (BitTest(Global_1922761, 19))
	{
		MISC::CLEAR_BIT(&Global_1922761, 19);
	}
}

void func_75()//Position - 0x2D66
{
	struct<13> Var0;
	bool bVar1;
	bool bVar2;
	Var0 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
	bVar1 = NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT();
	bVar2 = __LIB_1__::func_87(&Var0);
	if (!bVar1 && !bVar2)
	{
		__LIB_1__::func_707("HLP_TAXI3", 9000);
	}
	else if (bVar1 && !bVar2)
	{
		__LIB_1__::func_707("HLP_SOC2", 9000);
	}
	else if (bVar1 && bVar2)
	{
		__LIB_1__::func_707("HLP_SOC1", 9000);
	}
}

int func_99(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x3404
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_12__::func_771())
	{
		return 0;
	}
	if (__LIB_3__::func_33())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_100(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_100(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x3449
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = __LIB_3__::func_32(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (__LIB_12__::func_772(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!__LIB_3__::func_421(uParam6))
	{
		return 0;
	}
	if (__LIB_3__::func_585(iVar0, iVar1, iVar2))
	{
		if (__LIB_3__::func_27())
		{
			return 0;
		}
		__LIB_3__::func_26();
		return func_107(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!__LIB_3__::func_7(iParam4))
	{
		return 0;
	}
	__LIB_3__::func_584(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

int func_107(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x3634
{
	struct<2> Var0;
	__LIB_3__::func_25();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return __LIB_3__::func_431(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226" /* GXT: Accept? */, 16);
		return __LIB_3__::func_430(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return __LIB_3__::func_431(uParam0, sParam3, sParam4);
		}
		return __LIB_3__::func_433(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_155(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_144(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_143(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_108(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_108(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x372D
{
	bool bVar0;
	__LIB_3__::func_15();
	bVar0 = true;
	if (func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_3__::func_8(120000);
		return 1;
	}
	return 0;
}

int func_110(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x3787
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
	iVar0 = __LIB_0__::getMinusOneOrNull();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = __LIB_3__::func_586(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1641031.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = __LIB_3__::func_413(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_3__::func_419(iParam7, &iVar3);
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
		bVar12 = func_131(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_114(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		__LIB_3__::func_11();
	}
	__LIB_3__::func_15();
	__LIB_3__::func_10();
	__LIB_3__::func_9();
	return 1;
}

int func_114(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x3907
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_115(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			MISC::SET_BIT(&Global_4541229, 0);
		}
		return 1;
	}
	return 0;
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
	__LIB_0__::func_698();
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
		func_128();
		return 0;
	}
	__LIB_3__::func_12(Global_4541213);
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
	__LIB_0__::func_698();
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
				__LIB_2__::func_830(0);
				break;
			case 1:
				__LIB_2__::func_830(1);
				break;
			case 2:
				__LIB_2__::func_830(2);
				break;
			case 3:
				__LIB_2__::func_830(3);
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
		__LIB_0__::func_698();
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
			if (!__LIB_0__::func_629())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_3__::initGlobal_20247(1);
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	__LIB_3__::func_73(iParam0, sParam1, bVar1, __LIB_1__::func_136(PLAYER::PLAYER_ID()));
	return 1;
}

void func_128()//Position - 0x459C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4541213 = 11;
	Global_4539964[Global_4541213 /*104*/].f_18 = -1;
	Global_4539964[Global_4541213 /*104*/].f_18.f_1 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_2 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_3 = 0;
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999/*__LIB_1__::func_133*/;
	while (iVar2 < iVar1)
	{
		if (!__LIB_2__::func_831(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
		{
			Global_4541213 = iVar2;
		}
		iVar2++;
	}
	Global_4539964[Global_4541213 /*104*/].f_24 = 1;
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
	Global_4539964[Global_4541213 /*104*/].f_18.f_5 = 99999/*__LIB_1__::func_133*/;
	while (iVar2 < iVar1)
	{
		if (Global_4539964[iVar2 /*104*/].f_24 == 0 || Global_4539964[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__::func_831(Global_4539964[iVar2 /*104*/].f_18, Global_4539964[Global_4541213 /*104*/].f_18))
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

int func_131(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x485C
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
	iVar0 = 3;
	if (func_115(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8843 = iParam10;
			MISC::SET_BIT(&Global_4541229, 0);
		}
		return 1;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x4C3B
{
	bool bVar0;
	__LIB_3__::func_15();
	bVar0 = false;
	return func_110(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
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
	iVar0 = __LIB_0__::getMinusOneOrNull();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = __LIB_3__::func_586(iVar0);
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
	sVar4 = __LIB_3__::func_413(sParam5, bParam6, &iVar3);
	uVar5 = __LIB_3__::func_419(iParam7, &iVar3);
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
		__LIB_3__::func_11();
	}
	__LIB_3__::func_16();
	__LIB_3__::func_10();
	__LIB_3__::func_9();
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
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
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
	__LIB_0__::func_698();
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
	__LIB_2__::func_833(Global_22672);
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
		__LIB_2__::func_830(0);
		__LIB_2__::func_830(2);
		__LIB_2__::func_830(1);
	}
	else
	{
		__LIB_0__::func_698();
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
					__LIB_2__::func_830(0);
					Global_8842 = 0;
					break;
				case 1:
					__LIB_2__::func_830(1);
					Global_8842 = 1;
					break;
				case 2:
					__LIB_2__::func_830(2);
					Global_8842 = 2;
					break;
				case 3:
					__LIB_2__::func_830(3);
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
		__LIB_0__::func_698();
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
			if (!__LIB_0__::func_629())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_3__::initGlobal_20247(1);
			__LIB_2__::concatAndDo_SCALEFORM_MOVIE_METHOD(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	__LIB_2__::func_846(iParam0, sParam1, bVar1, __LIB_1__::func_136(PLAYER::PLAYER_ID()));
	return 1;
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
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999/*__LIB_1__::func_133*/;
	while (iVar2 < iVar1)
	{
		if (!__LIB_2__::func_831(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
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
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999/*__LIB_1__::func_133*/;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!__LIB_2__::func_831(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
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
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
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
	__LIB_3__::func_16();
	bVar0 = true;
	if (func_145(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		__LIB_3__::func_8(120000);
		return 1;
	}
	return 0;
}

int func_196()//Position - 0x62B2
{
	if (__LIB_0__::func_1("HLP_TAXI3"))
	{
		return 1;
	}
	if (__LIB_0__::func_1("HLP_SOC1"))
	{
		return 1;
	}
	if (__LIB_0__::func_1("HLP_SOC2"))
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
				if (!__LIB_0__::func_864(&uLocal_592))
				{
					__LIB_0__::func_795(&uLocal_592, 0, 0);
				}
				if (!bVar0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_1__::func_707("HLP_XP1", 9000);
						__LIB_0__::clearF_1Prop(&uLocal_592);
						__LIB_0__::func_795(&uLocal_592, 0, 0);
						iLocal_586++;
					}
				}
				else if (__LIB_0__::func_937(&uLocal_592, 5000, 0))
				{
					iLocal_586++;
					__LIB_0__::clearF_1Prop(&uLocal_592);
					__LIB_0__::func_795(&uLocal_592, 0, 0);
				}
			}
			break;
		case 1:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_1__::func_707("HLP_XP2", 9000);
					__LIB_0__::clearF_1Prop(&uLocal_592);
					__LIB_0__::func_795(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (__LIB_0__::func_937(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				__LIB_0__::clearF_1Prop(&uLocal_592);
				__LIB_0__::func_795(&uLocal_592, 0, 0);
			}
			break;
		case 2:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_1__::func_707("HLP_RNK1", 9000);
					__LIB_1__::func_8(1);
					Global_2815059.f_1918 = 1;
					__LIB_1__::func_7(1, 0, -1);
					__LIB_0__::clearF_1Prop(&uLocal_592);
					__LIB_0__::func_795(&uLocal_592, 0, 0);
					iLocal_586++;
				}
			}
			else if (__LIB_0__::func_937(&uLocal_592, 5000, 0))
			{
				iLocal_586++;
				__LIB_0__::clearF_1Prop(&uLocal_592);
				__LIB_0__::func_795(&uLocal_592, 0, 0);
			}
			break;
		case 3:
			if (!bVar0)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_24__::func_419(0);
					if (MISC::IS_XBOX360_VERSION() || __LIB_0__::func_53())
					{
						__LIB_1__::func_707("HLP_CASHXBX", 9000);
					}
					else if (MISC::IS_PS3_VERSION() || __LIB_0__::func_52())
					{
						__LIB_1__::func_707("HLP_CASHPSN", 9000);
					}
					else
					{
						__LIB_1__::func_707("HLP_CASHGEN", 9000);
					}
					__LIB_0__::clearF_1Prop(&uLocal_592);
					__LIB_0__::func_795(&uLocal_592, 0, 0);
					iLocal_586 = 99;
				}
			}
			else if (__LIB_0__::func_937(&uLocal_592, 5000, 0))
			{
				iLocal_586 = 99;
				__LIB_0__::clearF_1Prop(&uLocal_592);
				__LIB_0__::func_795(&uLocal_592, 0, 0);
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
	__LIB_24__::func_468(iParam0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	__LIB_43__::func_64(iParam0);
	__LIB_24__::func_462(PLAYER::PLAYER_ID());
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
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(__LIB_0__::func_878()) > 0)
				{
					iParam0->f_295 = 1;
				}
				if (!Global_2815059.f_1917)
				{
					Global_2815059.f_1917 = 1;
					NETWORK::NETWORK_SET_VOICE_ACTIVE(false);
				}
				if (!__LIB_24__::func_461())
				{
					__LIB_24__::func_460(1);
				}
				if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (!__LIB_0__::func_864(&(iParam0->f_15)))
				{
					__LIB_0__::func_795(&(iParam0->f_15), 0, 0);
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
					__LIB_3__::func_519(0, 0, 0, 1, 1, 1, 0);
					NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false);
					__LIB_2__::func_57(1);
					INTERIOR::DISABLE_METRO_SYSTEM(true);
					MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(19, 0, 0);
					NETWORK::NETWORK_SET_IN_FREE_CAM_MODE(true);
					__LIB_24__::func_459(0);
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
					__LIB_2__::func_592(1, 0);
					__LIB_24__::func_414(1, 1);
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_intro")) < 1 || !__LIB_24__::func_412())
					{
						if (iParam0->f_292)
						{
							if (__LIB_24__::func_458() == 0)
							{
								STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
								STREAMING::SET_SRL_LONG_JUMP_MODE(true);
							}
						}
					}
					__LIB_15__::func_283(14, 0);
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
						if (__LIB_2__::func_409())
						{
							STREAMING::SET_ALL_MAPDATA_CULLED(0);
							__LIB_3__::func_81(1, 1, 0);
							GRAPHICS::DONT_RENDER_IN_GAME_UI(false);
							HUD::CLEAR_HELP(true);
							if (!__LIB_3__::func_580())
							{
								__LIB_3__::func_513();
							}
							__LIB_1__::func_8(0);
							__LIB_24__::func_457();
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
						if (__LIB_0__::func_628() == 65 || __LIB_0__::func_628() == 66)
						{
							STREAMING::CLEAR_FOCUS();
							STREAMING::NEW_LOAD_SCENE_START(754.2219f, 1226.8309f, 356.5081f, __LIB_3__::func_80(-14.367f, 0f, 157.3524f), 100f, 0);
							__LIB_0__::clearF_1Prop(&(iParam0->f_17));
							__LIB_0__::func_795(&(iParam0->f_17), 0, 0);
							MISC::SET_BIT(iParam0, 4);
						}
					}
					else if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_START") && (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_0__::func_937(&(iParam0->f_17), 5000, 0)))
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
							__LIB_24__::func_456(iParam0);
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
				__LIB_43__::func_63(iParam0, 6);
				__LIB_24__::func_455(iParam0);
				if (__LIB_41__::func_326(iParam0, 6, 0))
				{
					HUD::CLEAR_HELP(true);
					iParam0->f_6 = 7;
				}
				break;
			case 7:
				if (!BitTest(*iParam0, 2))
				{
					HUD::CLEAR_HELP(true);
					__LIB_1__::func_707("FMIC_INTRO2" /* GXT: In GTA Online, you can carry out Jobs with, or compete against, players around the world. */, -1);
					MISC::SET_BIT(iParam0, 2);
				}
				CAM::SET_CAM_PARAMS(iParam0->f_7, -259.3686f, -553.8571f, 142.6048f, 13.2752f, -0.5186f, -143.3378f, 44.9959f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, -277.7789f, -569.962f, 142.8625f, 12.4479f, -0.5186f, -134.9992f, 44.9959f, 6000, 0, 0, 2);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 13, 9, 13);
				iParam0->f_6 = 8;
				break;
			case 8:
				__LIB_43__::func_63(iParam0, 8);
				if (__LIB_24__::func_455(iParam0))
				{
					__LIB_33__::func_465(iParam0);
					if (__LIB_41__::func_326(iParam0, 8, 0))
					{
						iParam0->f_6 = 9;
					}
				}
				break;
			case 9:
				if (!BitTest(*iParam0, 10))
				{
					__LIB_24__::func_454();
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
				__LIB_43__::func_63(iParam0, 10);
				if (__LIB_33__::func_464())
				{
					if (__LIB_33__::func_463(iParam0))
					{
						if (__LIB_33__::func_465(iParam0))
						{
							if (__LIB_41__::func_326(iParam0, 10, 0))
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
					__LIB_24__::func_453(iParam0);
					__LIB_24__::func_452(iParam0, "race_camera_1", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.1982f, 1065353216);
					CAM::STOP_CAM_SHAKING(iParam0->f_7, true);
					CAM::DETACH_CAM(iParam0->f_7);
					CAM::DESTROY_CAM(iParam0->f_7, false);
					AUDIO::START_AUDIO_SCENE("MP_INTRO_RACE_SCENE");
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					__LIB_41__::func_325(iParam0, 14);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 5))
				{
					__LIB_1__::func_707("FMIC_RACE1" /* GXT: Take part in Jobs, including Races, with your friends, Crew members or others and check your position on the global leaderboards in-game or on the Rockstar Social Club. */, -1);
					MISC::SET_BIT(iParam0, 5);
				}
				__LIB_43__::func_63(iParam0, 14);
				if (__LIB_41__::func_326(iParam0, 14, 0))
				{
					__LIB_33__::func_462(iParam0, 23539f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 15;
				}
				break;
			case 15:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "race_camera_2", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0.39f, 1065353216);
					__LIB_41__::func_325(iParam0, 15);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_43__::func_62(iParam0);
				}
				else if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				__LIB_43__::func_63(iParam0, 15);
				if (__LIB_41__::func_326(iParam0, 15, 0))
				{
					__LIB_33__::func_462(iParam0, 28833.33f, 75f);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 16;
				}
				break;
			case 16:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_442(iParam0, "race_camera_3a", "mp_intro_seq@", iParam0->f_92[4], 0f, 0f, -0.1f, 0f, 0f, 0f);
					__LIB_41__::func_325(iParam0, 16);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_43__::func_62(iParam0);
				}
				else if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				__LIB_43__::func_63(iParam0, 16);
				if (__LIB_41__::func_326(iParam0, 16, 0))
				{
					__LIB_33__::func_462(iParam0, 29700f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 17;
				}
				break;
			case 17:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "race_camera_3b", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iParam0->f_9, 0.7f);
					__LIB_41__::func_325(iParam0, 17);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 6))
				{
					MISC::SET_BIT(iParam0, 6);
					__LIB_1__::func_707("FMIC_RACE2" /* GXT: You can challenge others with Jobs you have created yourself or bet on players to win and earn cash. */, -1);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_43__::func_62(iParam0);
				}
				else if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				__LIB_43__::func_63(iParam0, 17);
				if (__LIB_41__::func_326(iParam0, 17, 0))
				{
					__LIB_33__::func_462(iParam0, 36450f, 0);
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 18;
				}
				break;
			case 18:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "race_camera_4", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 18);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_43__::func_62(iParam0);
				}
				else if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				__LIB_43__::func_63(iParam0, 18);
				if (__LIB_24__::func_441() && __LIB_41__::func_326(iParam0, 18, 0))
				{
					__LIB_33__::func_462(iParam0, 43650f, 0);
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
					__LIB_24__::func_452(iParam0, "race_camera_5", "mp_intro_seq@", -2237.39f, -333.52f, 12.47f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 19);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(iParam0->f_3, 0))
				{
					__LIB_43__::func_62(iParam0);
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
					if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
					{
						__LIB_41__::func_322(iParam0);
					}
				}
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
				__LIB_43__::func_63(iParam0, 19);
				if (__LIB_41__::func_326(iParam0, 19, 0) && BitTest(iParam0->f_3, 0))
				{
					if (BitTest(*iParam0, 12))
					{
						MISC::CLEAR_BIT(iParam0, 12);
					}
					iParam0->f_6 = 22;
				}
				else if (__LIB_41__::func_326(iParam0, 19, -4968))
				{
					if (!BitTest(*iParam0, 12))
					{
						HUD::CLEAR_HELP(true);
						MISC::SET_BIT(iParam0, 12);
					}
				}
				else if (__LIB_41__::func_326(iParam0, 19, -5618))
				{
					if (!BitTest(*iParam0, 30))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("MP_intro_logo", 0, false);
						MISC::SET_BIT(iParam0, 30);
					}
				}
				break;
			case 22:
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
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
					__LIB_24__::func_438(iParam0);
					__LIB_24__::func_437();
					__LIB_1__::func_707("FMIC_GAR" /* GXT: You can store your own collection of cars and motorcycles in Garages that you can purchase around the Map. */, -1);
					iParam0->f_6 = 23;
				}
				break;
			case 23:
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
				__LIB_43__::func_63(iParam0, 23);
				if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				if (__LIB_41__::func_326(iParam0, 23, 0))
				{
					CAM::SET_CAM_PARAMS(iParam0->f_7, 222.9166f, -999.9128f, -99.4285f, 5.5453f, 0.0572f, -57.3736f, 31.9442f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iParam0->f_7, 223.1394f, -999.8619f, -99.4078f, 5.5453f, 0.0572f, -56.2437f, 31.9442f, 3500, 0, 0, 2);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iParam0->f_10, 0f);
					if (!PED::IS_PED_INJURED(iParam0->f_91))
					{
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0->f_91, false, false);
					}
					__LIB_33__::func_455(iParam0, 0);
					__LIB_33__::func_455(iParam0, 1);
					__LIB_33__::func_455(iParam0, 5);
					__LIB_33__::func_455(iParam0, 6);
					iParam0->f_6 = 24;
				}
				break;
			case 24:
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
				__LIB_43__::func_63(iParam0, 24);
				if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				if (__LIB_41__::func_326(iParam0, 24, 0))
				{
					iParam0->f_6 = 27;
				}
				break;
			case 27:
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1148.2856f, -1639.737f, 5.106698f, true, false, false, true);
				MISC::SET_BIT(iParam0, 13);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4832f, -978.9647f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iParam0->f_7, 226.4608f, -978.0541f, -98.874f, -3.0848f, 0.0347f, -115.3629f, 25.2446f, 1500, 3, 3, 2);
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(18, 0, 0);
				__LIB_33__::func_455(iParam0, 2);
				__LIB_33__::func_455(iParam0, 7);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_24__::func_435());
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
				{
					PED::DELETE_PED(&(iParam0->f_91));
				}
				MISC::SET_BIT(iParam0, 29);
				iParam0->f_6 = 28;
				break;
			case 28:
				__LIB_24__::func_440(iParam0);
				__LIB_24__::func_439(iParam0);
				if (!BitTest(*iParam0, 8))
				{
					MISC::SET_BIT(iParam0, 8);
				}
				if (__LIB_24__::func_445(iParam0) && __LIB_41__::func_323(iParam0))
				{
					__LIB_41__::func_322(iParam0);
				}
				__LIB_43__::func_63(iParam0, 28);
				if ((AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_START") && BitTest(iParam0->f_3, 3)) && __LIB_41__::func_326(iParam0, 28, 0))
				{
					iParam0->f_6 = 29;
				}
				break;
			case 29:
				if (iParam0->f_295)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_24__::func_473(iParam0))
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
				else if (__LIB_24__::func_473(iParam0))
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
				__LIB_33__::func_454(iParam0);
				MISC::LOAD_CLOUD_HAT("CONTRAILS", 0f);
				STREAMING::SET_SRL_READAHEAD_TIMES(9, 9, 9, 9);
				__LIB_1__::func_707("FMIC_TENN" /* GXT: ~s~Challenge others to Tennis, Golf and many other Activities. */, -1);
				CUTSCENE::START_CUTSCENE(4);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iParam0->f_6 = 30;
				break;
			case 30:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_32 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iParam0->f_32);
					}
					__LIB_41__::func_321(iParam0);
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
					if (__LIB_24__::func_473(iParam0))
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
						__LIB_33__::func_453(iParam0, 3099.997f);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iParam0->f_34, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(21, 0, 0);
					__LIB_41__::func_325(iParam0, 33);
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_01", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
				}
				if (BitTest(*iParam0, 29))
				{
					if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME() || CUTSCENE::GET_CUTSCENE_TIME() > 3254)
					{
						MISC::CLEAR_BIT(iParam0, 29);
					}
				}
				if ((__LIB_24__::func_471(iParam0) && __LIB_33__::func_452(iParam0)) && !CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iParam0->f_293)
					{
						iParam0->f_28 = (MISC::GET_GAME_TIMER() - iParam0->f_13);
					}
					else
					{
						iParam0->f_29 = 134784;
						if (__LIB_24__::func_473(iParam0))
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
					__LIB_24__::func_433(iParam0);
					__LIB_24__::func_432(iParam0);
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
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
					if (__LIB_24__::func_470(iParam0))
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
								__LIB_24__::func_431(iParam0);
							}
						}
					}
					if (CUTSCENE::GET_CUTSCENE_CONCAT_SECTION_PLAYING() > 2)
					{
						__LIB_24__::func_432(iParam0);
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
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (__LIB_41__::func_326(iParam0, 33, -5450))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_1", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 1);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 2))
					{
						if (__LIB_41__::func_326(iParam0, 33, -5450))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_3", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 2);
							}
						}
					}
				}
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 1))
					{
						if (__LIB_41__::func_326(iParam0, 33, -5450))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_1", 9, 0, 0))
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
				__LIB_43__::func_63(iParam0, 33);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 33, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 34;
				}
				break;
			case 34:
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 2))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_3", 9, 0, 0))
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
						if (__LIB_24__::func_473(iParam0))
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
					__LIB_41__::func_325(iParam0, 34);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 34);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 34, 0))
				{
					__LIB_33__::func_453(iParam0, 18966.65f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 35;
				}
				break;
			case 35:
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (__LIB_41__::func_326(iParam0, 34, 1100))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
					if (!BitTest(iParam0->f_1, 4))
					{
						if (__LIB_41__::func_326(iParam0, 34, 1100))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_7", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 4);
							}
						}
					}
				}
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 3))
					{
						if (__LIB_41__::func_326(iParam0, 34, 1000))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_5", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 3);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_03", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
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
					__LIB_41__::func_325(iParam0, 35);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 35);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 35, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 36;
				}
				break;
			case 36:
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 5))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_9", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 5);
						}
					}
				}
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 4))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_7", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 4);
						}
					}
					if (!BitTest(iParam0->f_1, 5))
					{
						if (__LIB_41__::func_326(iParam0, 36, -3750))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_9", 9, 0, 0))
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
						if (__LIB_24__::func_473(iParam0))
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
					__LIB_41__::func_325(iParam0, 36);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 36);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 36, 0))
				{
					__LIB_33__::func_453(iParam0, 42700.96f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 37;
				}
				break;
			case 37:
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_11", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 6);
						}
					}
				}
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 6))
					{
						if (__LIB_41__::func_326(iParam0, 36, 1000))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_11", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 6);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_05", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
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
					__LIB_41__::func_325(iParam0, 37);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 37);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 37, 0))
				{
					__LIB_33__::func_453(iParam0, 51033.28f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 38;
				}
				break;
			case 38:
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_13", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 7);
						}
					}
					if (!BitTest(iParam0->f_1, 8))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM2", "FM_LAM2_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
				}
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 7))
					{
						if (__LIB_41__::func_326(iParam0, 37, 2500))
						{
							if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_13", 9, 0, 0))
							{
								MISC::SET_BIT(&(iParam0->f_1), 7);
							}
						}
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_07", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 38);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 38);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 38, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 39;
				}
				break;
			case 39:
				if (!__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 8))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_15", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 8);
						}
					}
					if (!BitTest(iParam0->f_1, 9))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAM1", "FM_LAM1_17", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 9);
						}
					}
					if (!BitTest(iParam0->f_1, 31))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
						{
							MISC::SET_BIT(&(iParam0->f_1), 31);
						}
					}
				}
				if (__LIB_24__::func_473(iParam0))
				{
					if (!BitTest(iParam0->f_1, 31))
					{
						if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
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
						if (__LIB_24__::func_473(iParam0))
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
					__LIB_41__::func_325(iParam0, 39);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 39);
				__LIB_24__::func_430(iParam0);
				if (__LIB_41__::func_326(iParam0, 39, 0))
				{
					__LIB_33__::func_453(iParam0, 85050f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 40;
				}
				break;
			case 40:
				if (!BitTest(iParam0->f_1, 31))
				{
					if (__LIB_14__::func_535(&(iParam0->f_123), "FM_1AU", "FM_LAMRAD", "FM_LAMRAD_1", 9, 0, 0))
					{
						MISC::SET_BIT(&(iParam0->f_1), 31);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_10", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
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
					__LIB_41__::func_325(iParam0, 40);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 40);
				if (__LIB_24__::func_430(iParam0) && __LIB_41__::func_326(iParam0, 40, 0))
				{
					__LIB_33__::func_453(iParam0, 116366.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 41;
				}
				break;
			case 41:
				if (BitTest(*iParam0, 15))
				{
					NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_12", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0.235f, 0.75f);
					__LIB_41__::func_325(iParam0, 41);
					MISC::UNLOAD_CLOUD_HAT("CONTRAILS", 0f);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 41);
				if (__LIB_41__::func_326(iParam0, 41, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(true);
					__LIB_33__::func_453(iParam0, 127166.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 42;
				}
				break;
			case 42:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_429(iParam0);
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_14", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 42);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 42);
				if (__LIB_41__::func_326(iParam0, 42, 0))
				{
					GRAPHICS::RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(false);
					__LIB_33__::func_453(iParam0, 170800f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 43;
				}
				break;
			case 43:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_17", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 43);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 43);
				if (__LIB_41__::func_326(iParam0, 43, 0))
				{
					STREAMING::SET_SRL_READAHEAD_TIMES(9, 12, 9, 12);
					__LIB_33__::func_453(iParam0, 191799.8f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 44;
				}
				break;
			case 44:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_19", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 44);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 44);
				if (__LIB_41__::func_326(iParam0, 44, 0))
				{
					__LIB_33__::func_453(iParam0, 196633.1f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 45;
				}
				break;
			case 45:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_20", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 45);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 45);
				if (__LIB_41__::func_326(iParam0, 45, 0))
				{
					__LIB_33__::func_453(iParam0, 201466.5f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 46;
				}
				break;
			case 46:
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_21", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 46);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 46);
				if (__LIB_41__::func_326(iParam0, 46, 0))
				{
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 47;
				}
				break;
			case 47:
				__LIB_24__::func_469(iParam0);
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
						if (__LIB_24__::func_473(iParam0))
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
					__LIB_41__::func_325(iParam0, 47);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 47);
				if (__LIB_41__::func_326(iParam0, 47, 0))
				{
					__LIB_33__::func_453(iParam0, 213066.4f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 48;
				}
				break;
			case 48:
				__LIB_24__::func_469(iParam0);
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_24", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
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
					__LIB_41__::func_325(iParam0, 48);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 48);
				if (__LIB_41__::func_326(iParam0, 48, 0))
				{
					MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 3);
					__LIB_33__::func_451(iParam0, 10177.75f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 49;
				}
				break;
			case 49:
				__LIB_24__::func_469(iParam0);
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_25", "mp_intro_seq@", -1038.78f, -2732.61f, 19.08f, 0f, 0f, 0f, 0, 1065353216);
					__LIB_41__::func_325(iParam0, 49);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				__LIB_43__::func_63(iParam0, 49);
				if (AUDIO::PREPARE_MUSIC_EVENT("FM_INTRO_DRIVE_END") && __LIB_41__::func_326(iParam0, 49, 0))
				{
					__LIB_33__::func_450(iParam0, 4500f);
					MISC::SET_BIT(iParam0, 15);
					iParam0->f_6 = 50;
				}
				break;
			case 50:
				__LIB_24__::func_469(iParam0);
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
				}
				if (BitTest(*iParam0, 15))
				{
					__LIB_24__::func_452(iParam0, "LAMAR_CAR_DRIVE_26", "mp_intro_seq@", -197.9f, 301f, 96.4f, 0f, 0f, 180f, 0, 1065353216);
					if (iParam0->f_292)
					{
						STREAMING::END_SRL();
						MISC::CLEAR_BIT(iParam0, 11);
					}
					__LIB_41__::func_325(iParam0, 50);
					MISC::CLEAR_BIT(iParam0, 15);
				}
				if (!BitTest(*iParam0, 20))
				{
					if (__LIB_24__::func_473(iParam0))
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
							if (__LIB_24__::func_473(iParam0))
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
				__LIB_43__::func_63(iParam0, 50);
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
				if (__LIB_41__::func_326(iParam0, 50, 0) && BitTest(*iParam0, 20))
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
						if (__LIB_24__::func_473(iParam0))
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
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
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
						iParam0->f_30 = __LIB_24__::func_427(iParam0);
					}
					iParam0->f_14 = 0;
					iParam0->f_6 = 53;
				}
				break;
			case 53:
				if (iParam0->f_295)
				{
					if (__LIB_24__::func_473(iParam0))
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
					__LIB_24__::func_426(1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_24__::func_425(PLAYER::PLAYER_ID()))
				{
					__LIB_24__::func_424(1);
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
							__LIB_24__::func_423(iParam0, 0);
							break;
						case 10:
							__LIB_24__::func_423(iParam0, 1);
							break;
						case 20:
							__LIB_24__::func_423(iParam0, 2);
							break;
						case 30:
							__LIB_24__::func_423(iParam0, 3);
							break;
						case 40:
							__LIB_24__::func_423(iParam0, 4);
							break;
						case 50:
							__LIB_24__::func_423(iParam0, 5);
							break;
						case 60:
							__LIB_24__::func_423(iParam0, 6);
							break;
						case 70:
							__LIB_24__::func_423(iParam0, 7);
							break;
						case 80:
							__LIB_24__::func_423(iParam0, 8);
							break;
						case 90:
							__LIB_24__::func_423(iParam0, 9);
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
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
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
						__LIB_0__::clearF_1Prop(&(iParam0->f_17));
						__LIB_0__::func_795(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (__LIB_0__::func_937(&(iParam0->f_17), 10000, 0))
				{
					if (__LIB_24__::func_422(iParam0))
					{
						__LIB_24__::func_453(iParam0);
						__LIB_24__::func_432(iParam0);
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
						__LIB_24__::func_426(1);
						if (!__LIB_24__::func_425(PLAYER::PLAYER_ID()))
						{
							__LIB_24__::func_424(1);
						}
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
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
						__LIB_0__::clearF_1Prop(&(iParam0->f_17));
						__LIB_0__::func_795(&(iParam0->f_17), 0, 0);
						MISC::SET_BIT(iParam0, 17);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(250);
					}
				}
				else if (__LIB_0__::func_937(&(iParam0->f_17), 10000, 0))
				{
					if (__LIB_24__::func_445(iParam0))
					{
						__LIB_24__::func_453(iParam0);
						__LIB_24__::func_432(iParam0);
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
						if (!__LIB_24__::func_425(PLAYER::PLAYER_ID()))
						{
						}
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						if (BitTest(*iParam0, 21))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("FM_INTRO_DRIVE_END");
							MISC::CLEAR_BIT(iParam0, 21);
						}
						CAM::DO_SCREEN_FADE_IN(250);
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(0, 0, 0);
						MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_139), 3);
						iParam0->f_13 = (MISC::GET_GAME_TIMER() - __LIB_33__::func_449(iParam0, 48, 0));
						iParam0->f_293 = 1;
						__LIB_33__::func_451(iParam0, 10177.75f);
						MISC::SET_BIT(iParam0, 15);
						iParam0->f_6 = 49;
					}
				}
				break;
			case 57:
				__LIB_43__::func_63(iParam0, 57);
				bVar4 = !iParam0->f_288;
				__LIB_43__::func_61(iParam0, bVar4, 0);
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
					__LIB_1__::func_348(115, 1, -1, 1);
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
		__LIB_24__::func_418(iParam0);
		if (!iParam0->f_291)
		{
			if (iParam0->f_293)
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iParam0->f_13));
			}
			else
			{
				iParam0->f_289 = SYSTEM::TO_FLOAT(__LIB_24__::func_427(iParam0));
			}
			iParam0->f_290 = __LIB_33__::func_447(iParam0);
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
		__LIB_41__::func_320(iParam0);
		if (BitTest(*iParam0, 12))
		{
			if (__LIB_24__::func_441())
			{
				__LIB_24__::func_416();
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
			__LIB_33__::func_445(iParam0);
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
						if (__LIB_0__::func_939(Local_414.f_3))
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
				if (__LIB_0__::func_939(Local_414.f_3))
				{
					if (!__LIB_0__::func_951(Local_414.f_4))
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
						if (!__LIB_0__::func_629())
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
					if (__LIB_3__::func_72(-649.4202f, -954.0247f, 20.5269f, 90.7653f, 1, 0, 0, 0, 1, 0, 1, 0, 0))
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
				if (!__LIB_0__::func_951(Local_414.f_4))
				{
					if (!BitTest(uLocal_582, 29))
					{
						if (__LIB_0__::func_939(Local_414.f_3))
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
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
						func_396();
						func_409(0);
						__LIB_0__::func_151("HLP_TAXI", -1);
						if (__LIB_0__::func_112())
						{
							__LIB_2__::func_105(joaat("SERVICE_SPEND_TAXI"), 200, &uVar0, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_561(-200, 0);
							MONEY::NETWORK_SPENT_TAXI(200, false, false, 0);
						}
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_951(Local_414.f_4))
				{
					if (__LIB_0__::func_939(Local_414.f_3))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_414.f_4), joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0)
						{
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_414.f_4), true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_414.f_4), NETWORK::NET_TO_VEH(Local_414.f_3), 12f, 786599);
							__LIB_1__::func_387(&(Local_414.f_3));
							__LIB_1__::func_387(&(Local_414.f_4));
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
				if (!__LIB_0__::func_864(&uLocal_247))
				{
					__LIB_1__::func_553();
					__LIB_0__::func_795(&uLocal_247, 0, 0);
				}
				else if (__LIB_0__::func_937(&uLocal_247, 5000, 0))
				{
					if (__LIB_2__::func_859(&uLocal_416, "MPTXIAU", "MPTXI_T1", 12, 0, 0, 1))
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
				if (__LIB_2__::func_859(&uLocal_416, "MPTXIAU", "MPTXI_AR", 12, 0, 0, 1))
				{
					MISC::SET_BIT(&uLocal_582, 30);
				}
			}
		}
		if (!BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 6))
		{
			__LIB_1__::func_405();
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
					__LIB_1__::func_348(119, 1, -1, 1);
					__LIB_1__::func_348(115, 1, -1, 1);
				}
				__LIB_41__::func_319(1);
				bVar0 = true;
			}
		}
		else if (BitTest(Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, 1))
		{
			if (!BitTest(uLocal_582, 31))
			{
				__LIB_1__::func_348(119, 1, -1, 1);
				__LIB_1__::func_348(115, 1, -1, 1);
			}
			bVar0 = true;
		}
	}
	__LIB_43__::func_61(&Local_62, 0, bParam0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_2703735.f_3428)
		{
			__LIB_3__::func_97(0, 1, 0, 1);
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
	__LIB_24__::func_411(0);
	func_61(0);
	func_750();
	__LIB_16__::func_558(iLocal_61, 0);
	__LIB_0__::clearF_1Prop(&(Global_2703735.f_3678));
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
	__LIB_2__::func_57(0);
	__LIB_2__::func_862(4, 0);
	__LIB_2__::func_862(1, 0);
	__LIB_2__::func_862(0, 0);
	__LIB_2__::func_862(2, 0);
	__LIB_2__::func_862(3, 0);
	__LIB_24__::func_413(iLocal_61, 0);
	func_396();
	__LIB_3__::func_0();
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
		__LIB_24__::func_460(0);
	}
	__LIB_23__::func_636(Local_414.f_5);
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
	__LIB_2__::func_381();
	__LIB_18__::func_994();
	PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/);
	__LIB_2__::func_377();
	Global_1057165 = 0;
	Global_1835453 = 0;
	__LIB_2__::func_376();
	NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
	__LIB_2__::func_375();
	Global_786547 = 0;
	Global_786547.f_1 = 0;
	Global_1836370 = 0;
	Global_2621440 = 0;
	Global_2621441 = 0;
	__LIB_2__::func_374(0);
	Global_1836359 = 0;
	Global_1836358 = 0;
	Global_1836382 = 0;
	Global_1836598 = 0;
	Global_1836604 = 0;
	Global_1836090 = 0;
	Global_1837298 = 1;
	Global_1836570 = 0;
	Global_1836371 = -1;
	__LIB_2__::func_373(0);
	MISC::CLEAR_BIT(&(Global_2621446.f_1), 5);
	if (!__LIB_1__::func_200() && !__LIB_2__::func_443())
	{
		__LIB_2__::func_372();
	}
	__LIB_2__::func_371();
	__LIB_2__::func_370();
	__LIB_2__::func_369();
	__LIB_2__::func_368();
	__LIB_2__::func_367();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_2__::func_366();
		__LIB_2__::func_365();
	}
	if (__LIB_1__::func_153() || !__LIB_1__::func_140())
	{
		__LIB_2__::func_364();
		__LIB_2__::func_363(1, 1, 1);
		__LIB_1__::func_240();
		__LIB_2__::func_362();
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_2__::func_361();
	if ((((Global_4718592 != 6 && __LIB_2__::func_360(Global_4718592.f_116524) != 14) && __LIB_2__::func_360(Global_4718592.f_116524) != 15) && !__LIB_0__::func_625()) && !__LIB_2__::func_443())
	{
		if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
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
		if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
		{
			Global_1835474 = 1;
		}
	}
	__LIB_0__::func_429();
	if (__LIB_2__::func_359())
	{
		__LIB_2__::func_358();
	}
	__LIB_2__::func_357();
	Global_4718592.f_117081 = 0;
	Global_1922915.f_4 = 0;
	if (!BitTest(Global_4718592.f_29, 1) && !__LIB_1__::func_141())
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
	if (!__LIB_2__::func_443())
	{
		HUD::THEFEED_HIDE_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		if ((bParam3 && !__LIB_0__::func_975()) && !__LIB_0__::func_974())
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
	if (__LIB_1__::func_155() || (iVar0 != -1 && BitTest(Global_1853348[iVar0 /*834*/].f_833, 7)))
	{
		if (!bParam4)
		{
			Global_4718592 = 2;
			__LIB_11__::func_982();
			Global_4718592 = 0;
		}
		else
		{
			__LIB_11__::func_982();
		}
		__LIB_2__::func_355();
		__LIB_2__::func_354(1, 1);
		__LIB_2__::func_363(1, 1, 0);
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
		__LIB_18__::func_317(1);
		if (__LIB_1__::func_620())
		{
			__LIB_2__::func_353();
		}
		if (!__LIB_0__::func_936(PLAYER::PLAYER_ID()))
		{
			__LIB_7__::func_771(4);
		}
		__LIB_1__::func_240();
		__LIB_2__::func_351(0);
		__LIB_2__::func_350();
		Global_1837290 = 0;
	}
	if (!__LIB_1__::func_623())
	{
		__LIB_2__::func_349();
		if (__LIB_2__::func_348())
		{
			if (__LIB_2__::func_347())
			{
				__LIB_2__::func_355();
			}
		}
		__LIB_18__::func_317(1);
		if (!__LIB_1__::func_24())
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
		__LIB_2__::func_346(PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_345((Global_1922955.f_9 != 4 && !__LIB_1__::func_623()));
	__LIB_18__::func_993((Global_1922955.f_9 != 4 && !__LIB_1__::func_623()));
	__LIB_2__::func_344((Global_1922955.f_9 != 4 && !__LIB_1__::func_623()));
	__LIB_2__::func_343((Global_1922955.f_9 != 4 && !__LIB_1__::func_623()));
	if (__LIB_1__::func_24())
	{
		Global_2715699.f_6415 = 1;
	}
	else
	{
		Global_2715699.f_6415 = 0;
	}
	if (!__LIB_1__::func_623())
	{
		if (__LIB_1__::func_24())
		{
			Global_2715699.f_6416 = 1;
		}
		else
		{
			Global_2715699.f_6416 = 0;
		}
	}
	if (__LIB_1__::func_749())
	{
		if (__LIB_2__::func_342())
		{
			Global_2715699.f_6417 = 1;
		}
		else
		{
			Global_2715699.f_6417 = 0;
		}
	}
	if (!__LIB_1__::func_200())
	{
		Global_1922981.f_1345 = 0;
	}
	if (!__LIB_1__::func_623() && !__LIB_1__::func_200())
	{
		__LIB_2__::func_354(1, Global_1922955.f_9 != 4);
		__LIB_2__::func_363(1, 1, 0);
		__LIB_18__::func_992(0);
		__LIB_0__::func_467();
		Global_1837292 = 0;
		if (iVar0 != -1)
		{
			Global_1888862[iVar0 /*120*/].f_1 = 0;
			Global_1888862[iVar0 /*120*/].f_2 = 0;
			Global_1888862[iVar0 /*120*/] = 0;
		}
	}
	__LIB_1__::func_895(1, -1);
	if (__LIB_2__::func_341())
	{
		__LIB_2__::func_340();
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE();
	}
	if ((!__LIB_0__::func_975() && !__LIB_1__::func_623()) && !__LIB_0__::func_974())
	{
		__LIB_3__::func_375();
	}
	Global_4718592.f_117077 = 0;
	__LIB_1__::func_21();
	Global_1836352 = -1;
	Global_1888192 = -1;
	Global_1888182 = -1;
	Global_1888185 = -1;
	Global_1836357 = 0;
	Global_1888183 = 0;
	Global_1836581 = 0;
	Global_1836573 = 0;
	Global_1888193 = 0;
	__LIB_2__::func_339(0);
	__LIB_2__::func_338();
	MISC::CLEAR_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 7);
	Global_1888180 = 0f;
	Global_1888181 = 0f;
	Global_1836582 = 0;
	Global_1836583 = -1;
	__LIB_1__::func_310(0);
	Global_1836571 = 0;
	Global_1836091 = 0;
	__LIB_2__::func_337();
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	__LIB_2__::func_336(1);
	if (__LIB_2__::func_335())
	{
		__LIB_2__::func_334();
	}
	if (__LIB_1__::func_202())
	{
		if (__LIB_1__::func_782(PLAYER::PLAYER_ID()))
		{
			if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < 2)
			{
				__LIB_2__::func_333();
				__LIB_2__::func_332(1);
			}
			else
			{
				__LIB_2__::func_331();
			}
			if (Global_1922955.f_9 != -1)
			{
				__LIB_22__::func_419();
			}
		}
		else if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] == 0)
		{
			if (Global_1922955.f_9 != -1)
			{
				__LIB_22__::func_419();
			}
		}
	}
	bVar4 = __LIB_0__::func_826(iVar0);
	Global_1853348[iVar0 /*834*/].f_194 = 0;
	if (bVar4 && !__LIB_1__::func_200())
	{
		__LIB_2__::func_330();
	}
	if (!bVar4)
	{
		__LIB_2__::func_329(0);
	}
	if ((__LIB_1__::func_19() != 40 && __LIB_1__::func_19() != 39) && !__LIB_2__::func_328())
	{
		Global_1835428 = { 0f, 0f, 0f };
	}
	if (__LIB_2__::func_327() && __LIB_0__::func_80())
	{
	}
	else
	{
		__LIB_2__::func_326();
	}
	__LIB_2__::func_325();
	__LIB_2__::func_332(0);
	bVar6 = false;
	if (!bVar4)
	{
		if (Global_1922955.f_9 == 6)
		{
			bVar6 = true;
		}
		if (!__LIB_2__::func_324())
		{
			__LIB_2__::func_323(0, bVar6);
		}
	}
	NETWORK::NETWORK_SET_PROXIMITY_AFFECTS_TEAM(false);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (Global_1922955.f_9)
		{
			case 1:
				if (!__LIB_1__::func_729() && __LIB_2__::func_464(0) > 0)
				{
					Global_1941273[0 /*8*/].f_5 = 1;
				}
				if (!bVar4)
				{
					__LIB_19__::func_63();
					__LIB_1__::func_139();
				}
				break;
			case 6:
				Global_1837290 = 0;
				if (!bVar4)
				{
					__LIB_19__::func_63();
				}
				__LIB_1__::func_139();
				Global_1922955 = 0;
				Global_1922955.f_23 = { 0f, 0f, 0f };
				MISC::CLEAR_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833), 1);
				StringCopy(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224), "", 24);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_221 = { 0f, 0f, 0f };
				__LIB_2__::func_322(0);
				break;
			case 2:
				__LIB_2__::func_321(0);
				if (!__LIB_2__::func_320() || (__LIB_2__::func_320() && MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2714762.f_33))))
				{
					__LIB_2__::func_319(Global_1922955.f_17);
					__LIB_2__::func_318(Global_1922955.f_17);
				}
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__::getMinusOneOrNull())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__::func_819(iVar5) };
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
				if ((iVar7 && __LIB_2__::func_320()) && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() == 1)
				{
					Global_2715699.f_5987 = { __LIB_0__::func_808() };
				}
				if (((((Global_4718592.f_593 > 1 && !__LIB_18__::func_311()) && !__LIB_2__::func_312(Global_4718592.f_116524)) && !__LIB_2__::func_311(Global_4718592.f_116524)) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4)
				{
					__LIB_2__::func_310(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_2__::func_309();
				}
				break;
			case 3:
				__LIB_2__::func_321(0);
				iVar2 = 1;
				__LIB_2__::func_308();
				iVar5 = Global_1853348[iVar0 /*834*/].f_10;
				if (iVar5 != __LIB_0__::getMinusOneOrNull())
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
					{
						Global_2715699.f_5987 = { __LIB_0__::func_819(iVar5) };
					}
				}
				if (((Global_4718592.f_593 > 1 && !__LIB_18__::func_311()) && !__LIB_2__::func_312(Global_4718592.f_116524)) && !__LIB_2__::func_311(Global_4718592.f_116524))
				{
					__LIB_2__::func_310(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28);
				}
				else
				{
					__LIB_2__::func_309();
				}
				break;
			case 4:
				__LIB_2__::func_321(0);
				iVar2 = 1;
				if (__LIB_1__::func_232())
				{
					__LIB_2__::func_307();
				}
				else if (__LIB_0__::func_848())
				{
				}
				else
				{
					if (!(__LIB_1__::func_614() || __LIB_1__::func_24()) || !__LIB_1__::func_2())
					{
						Global_2715699.f_6325 = 0;
						Global_2715699.f_6326 = 0;
					}
					if (!__LIB_1__::func_2())
					{
						Global_2715699.f_6324 = 0;
						Global_2715699.f_6323 = 0;
					}
				}
				if (__LIB_0__::func_970(PLAYER::PLAYER_ID()) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
				{
					Global_786435.f_34++;
				}
				else if (__LIB_0__::func_177())
				{
					Global_786481.f_34++;
					if (Global_786481.f_64 == 0)
					{
						Global_786481.f_64 = 1;
					}
				}
				else if (__LIB_2__::func_306())
				{
					Global_1944501.f_17++;
				}
				else if (__LIB_0__::func_622())
				{
					Global_1944587.f_18++;
				}
				else if ((__LIB_0__::func_273(Global_4718592.f_116524) || __LIB_0__::func_976(Global_4718592.f_116524)) || (__LIB_2__::func_429() && __LIB_1__::func_117(249)))
				{
					Global_1944719.f_18++;
				}
				if (__LIB_1__::func_125(Global_4718592.f_116524))
				{
					if (Global_1944421.f_14 == 0)
					{
						Global_1944421.f_14 = 1;
					}
				}
				if (!BitTest(Global_4718592.f_12, 22))
				{
					if (__LIB_2__::func_305() == -1)
					{
						if (!BitTest(Global_4718592.f_12, 15))
						{
							__LIB_2__::func_304(Global_4718592.f_116980);
						}
						else
						{
							__LIB_2__::func_303(Global_4718592.f_165269, Global_4718592.f_165270);
						}
						if (Global_1922955.f_14 > -1)
						{
							NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Global_1922955.f_14, Global_1922955.f_15, 0);
						}
						else if (__LIB_2__::func_302() > -1)
						{
							__LIB_2__::func_442(__LIB_2__::func_302(), 0);
						}
					}
					else
					{
						NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(__LIB_2__::func_305(), 0, 0);
					}
				}
				if (__LIB_1__::func_231())
				{
					Var8 = { __LIB_1__::func_230() };
					__LIB_2__::func_301(Var8);
					if (__LIB_2__::func_300() != -1)
					{
						Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 = __LIB_2__::func_300();
					}
					__LIB_2__::func_299();
					__LIB_2__::func_298();
				}
				else
				{
					__LIB_2__::func_308();
				}
				if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_1__::func_36(0, 0, 1);
				}
				break;
			case 5:
				__LIB_2__::func_321(0);
				iVar2 = 1;
				__LIB_2__::func_308();
				break;
			case 8:
				if (!__LIB_2__::func_320())
				{
					__LIB_2__::func_319(Global_1922955.f_17);
				}
				break;
			case 9:
				__LIB_2__::func_321(0);
				iVar2 = 1;
				__LIB_2__::func_308();
				__LIB_2__::func_318(Global_4718592.f_116811);
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_224 = { Global_4718592.f_116811 };
				if (__LIB_2__::func_297())
				{
					__LIB_2__::func_296();
				}
				if (!__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
					__LIB_1__::func_36(0, 0, 1);
				}
				break;
			case 10:
				__LIB_23__::func_539(10, 0f, 0f, 0f, Var9);
				__LIB_2__::func_295();
				break;
		}
	}
	else
	{
		Global_1837290 = 0;
	}
	if (iVar2 || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
	{
		if ((__LIB_2__::func_294(PLAYER::PLAYER_ID()) || __LIB_0__::func_970(PLAYER::PLAYER_ID())) || __LIB_0__::func_971(PLAYER::PLAYER_ID()))
		{
			if (Global_1931908 > 0)
			{
				Global_2715699.f_1.f_2828.f_13 = Global_1931908;
				Global_2715699.f_1.f_2828 = { Global_1931908.f_1 };
			}
		}
		else
		{
			__LIB_2__::func_293();
		}
	}
	Global_2715699.f_1.f_842 = 0;
	MISC::CLEAR_BIT(&Global_1836095, 0);
	__LIB_2__::func_292(0);
	Global_1836362 = 0;
	Global_1836566 = -1;
	Global_1888110 = 0;
	Global_1574602 = 0;
	Global_1922955.f_1 = 0;
	Global_1922955.f_2 = 0;
	if (__LIB_2__::func_291() == 0)
	{
		if (Global_1922955.f_9 == -1 && bVar4 == 0)
		{
			__LIB_19__::func_84(0);
		}
		else
		{
			Global_1922955.f_9 = -1;
		}
	}
	__LIB_2__::func_286();
	if (__LIB_2__::func_285())
	{
		__LIB_2__::func_284();
	}
	if (__LIB_1__::func_611())
	{
		__LIB_2__::func_283();
	}
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		NETWORK::SET_STORE_ENABLED(true);
	}
	if (__LIB_2__::func_291() == 0)
	{
		if (iParam0 && iParam2 != 5)
		{
			if (((((!__LIB_2__::func_282(Global_1853348[iVar0 /*834*/]) && !__LIB_0__::func_975()) && !bVar4) && !__LIB_0__::func_157(0)) && !__LIB_1__::func_623()) && !__LIB_0__::func_974())
			{
				__LIB_2__::func_281(1);
				if (iParam1 == iParam1)
				{
				}
			}
		}
	}
	__LIB_2__::func_280();
	Global_1922955.f_1 = 0;
	if (!__LIB_1__::func_202())
	{
		__LIB_2__::func_279();
	}
	if (Global_1853348[iVar0 /*834*/] != -1)
	{
		iParam2 = iParam2;
		if (__LIB_2__::func_278(Global_1853348[iVar0 /*834*/]))
		{
			if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				iVar10 = __LIB_19__::func_87(0);
				__LIB_2__::func_69(1213, -1);
				__LIB_13__::func_523(joaat("MPPLY_MGAME_CHEAT_END"), iVar10);
				if (iVar10 > 0)
				{
					__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_ENDED"), 1);
				}
			}
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(PLAYER::PLAYER_ID());
	}
	__LIB_19__::func_71();
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
		__LIB_2__::func_281(0);
		MISC::SET_BIT(&(Global_1853348[iVar0 /*834*/].f_833), 1);
		Global_1853348[iVar0 /*834*/].f_10 = __LIB_2__::func_267(PLAYER::PLAYER_ID());
		NETWORK::NETWORK_SET_OVERRIDE_SPECTATOR_MODE(false);
		__LIB_1__::func_36(0, 0, 1);
		if (__LIB_2__::func_266())
		{
			__LIB_18__::func_416();
		}
	}
	if ((Global_1853348[iVar0 /*834*/] < 10 && Global_1853348[iVar0 /*834*/] != -1) && !__LIB_0__::func_157(0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1853348[iVar0 /*834*/].f_144)) && Global_1853348[iVar0 /*834*/] != 5) && Global_1853348[iVar0 /*834*/] != 148)
		{
			__LIB_18__::func_991(&(Global_1853348[iVar0 /*834*/].f_144));
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
		__LIB_2__::func_263(0);
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
		__LIB_2__::func_262();
	}
	StringCopy(&(Global_1880037[iVar0 /*16*/]), sVar11, 64);
	StringCopy(&(Global_1853348[iVar0 /*834*/].f_164), sVar11, 64);
	Global_1888862[iVar0 /*120*/].f_31 = { Var12 };
	Global_1888862[iVar0 /*120*/].f_33 = { Var12 };
	Global_1836576 = 0;
	Global_1836577 = 0;
	Global_1836103 = -1;
	bVar13 = false;
	__LIB_2__::func_261();
	__LIB_2__::func_260();
	__LIB_2__::func_259();
	if (__LIB_2__::func_258())
	{
		__LIB_2__::func_257();
	}
	if (__LIB_2__::func_256() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		__LIB_2__::func_255();
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 57348, 0);
	}
	if (__LIB_2__::func_254())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_1__::func_647())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_1__::func_648())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_2__::func_252())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_2__::func_251())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_2__::func_291())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_0__::func_197() && __LIB_2__::func_250())
	{
		__LIB_2__::func_253();
	}
	else if (__LIB_2__::func_249())
	{
		__LIB_2__::func_253();
	}
	else
	{
		__LIB_2__::func_248();
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 1) && !__LIB_1__::func_200())
		{
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				if (__LIB_2__::func_266())
				{
					__LIB_2__::func_247();
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
					__LIB_2__::func_246();
					__LIB_1__::func_240();
					__LIB_2__::func_184(6);
					__LIB_1__::func_139();
					if (bVar4)
					{
						__LIB_2__::func_351(0);
					}
				}
				__LIB_2__::func_245();
				__LIB_2__::func_244();
				__LIB_2__::func_243();
				if (Global_2715699.f_2846.f_4 == 2)
				{
					Global_2715699.f_2846.f_4 = 1;
				}
				if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					__LIB_2__::func_242();
				}
				__LIB_2__::func_241();
				Global_2715699.f_2846 = 0;
			}
			else
			{
				__LIB_2__::func_240();
				__LIB_2__::func_253();
			}
		}
		else
		{
			if (!__LIB_1__::func_24() && !__LIB_1__::func_200())
			{
			}
			__LIB_2__::func_240();
			__LIB_2__::func_253();
		}
	}
	if ((((((((((!__LIB_2__::func_254() && !__LIB_2__::func_239()) && !__LIB_2__::func_250()) && !__LIB_0__::func_197()) && !__LIB_1__::func_648()) && !__LIB_1__::func_647()) && !__LIB_1__::func_646()) && !__LIB_2__::func_251()) && !__LIB_2__::func_291()) && !__LIB_2__::func_252()) && !__LIB_2__::func_238())
	{
		if (!__LIB_1__::getGlobal_2714762_f_691())
		{
			__LIB_2__::func_237();
			__LIB_18__::func_420();
			__LIB_2__::func_235();
			__LIB_5__::func_940(1);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			if (!NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
			{
				if (!__LIB_2__::func_233())
				{
					if (!bVar13)
					{
						if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
						{
							NETWORK::NETWORK_END_TUTORIAL_SESSION();
							BRAIN::REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE();
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_157(0))
	{
		StringCopy(&(Global_4718592.f_116531), "", 64);
	}
	if (__LIB_2__::func_232(116, &iVar14))
	{
		__LIB_2__::func_231(iVar14);
	}
	if (__LIB_2__::func_232(123, &iVar14))
	{
		__LIB_2__::func_231(iVar14);
	}
	if (!__LIB_1__::func_200())
	{
		__LIB_23__::func_548();
	}
	else if (__LIB_2__::func_230())
	{
		__LIB_2__::func_229();
	}
	__LIB_2__::func_228();
	if (!__LIB_1__::func_623() && !__LIB_1__::func_24())
	{
		__LIB_2__::func_227();
	}
	__LIB_2__::func_226();
	__LIB_18__::func_990();
	func_428(bParam3);
}

void func_428(bool bParam0)//Position - 0x17E30
{
	var uVar0;
	if (bParam0)
	{
		if (__LIB_1__::func_202())
		{
		}
		else if ((((!__LIB_1__::func_623() && !__LIB_1__::func_24()) && !__LIB_1__::func_200()) && Global_1922955.f_9 != 9) && Global_1922955.f_9 != 4)
		{
			__LIB_2__::func_442(0, 1);
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	if (!__LIB_1__::func_15(PLAYER::PLAYER_ID()) && !BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
	{
		__LIB_2__::func_225();
	}
	if (__LIB_2__::func_224())
	{
		__LIB_2__::func_223(1);
		__LIB_2__::func_222(1);
		__LIB_2__::func_221(1);
		__LIB_2__::func_220(1);
	}
	if ((((bParam0 && !__LIB_1__::func_632()) && !__LIB_1__::func_623()) && !Global_262145.f_4751 /* Tunable: TURN_SNOW_ON_OFF */) && !__LIB_2__::func_440())
	{
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	func_435(&uVar0, -1);
	if ((__LIB_0__::func_3() == 0 && !__LIB_0__::func_629()) && !__LIB_1__::func_623())
	{
		if (__LIB_2__::func_219())
		{
			__LIB_2__::func_218();
		}
		else
		{
			__LIB_1__::func_333(1147932892, 28, 0);
		}
	}
	__LIB_2__::func_217(0);
}

void func_435(var uParam0, int iParam1)//Position - 0x1807A
{
	func_441(uParam0, iParam1);
	__LIB_19__::func_62(iParam1);
}

void func_441(var uParam0, int iParam1)//Position - 0x1816E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1)
	{
		iParam1 = __LIB_0__::getGlobal_1574918();
	}
	iVar1 = __LIB_1__::func_321(iParam1);
	iVar2 = MISC::GET_PROFILE_SETTING(iVar1);
	if (BitTest(iVar2, 1))
	{
		__LIB_2__::func_69(1208, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_DM_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 1);
		bVar0 = true;
	}
	if (BitTest(iVar2, 2))
	{
		__LIB_2__::func_69(1210, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_RACE_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 2);
		bVar0 = true;
	}
	if (BitTest(iVar2, 3))
	{
		__LIB_2__::func_69(1119, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_MC_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 3);
		bVar0 = true;
	}
	if (BitTest(iVar2, 4))
	{
		__LIB_2__::func_69(1212, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_MGAME_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 4);
		bVar0 = true;
	}
	if (BitTest(iVar2, 5))
	{
		__LIB_2__::func_69(1925, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_CAP_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 5);
		bVar0 = true;
	}
	if (BitTest(iVar2, 6))
	{
		__LIB_2__::func_69(1927, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_SUR_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 6);
		bVar0 = true;
	}
	if (BitTest(iVar2, 7))
	{
		__LIB_2__::func_69(1929, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_LTS_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 7);
		bVar0 = true;
	}
	if (BitTest(iVar2, 8))
	{
		__LIB_2__::func_69(1931, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_PARA_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 8);
		bVar0 = true;
	}
	if (BitTest(iVar2, 9))
	{
		__LIB_2__::func_69(11012, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_HEIST_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 9);
		bVar0 = true;
	}
	if (BitTest(iVar2, 26))
	{
		__LIB_2__::func_69(1933, iParam1);
		__LIB_13__::func_523(joaat("MPPLY_FMEVN_CHEAT_START"), 2);
		__LIB_13__::func_523(joaat("MPPLY_ACTIVITY_STARTED"), 1);
		MISC::CLEAR_BIT(&iVar2, 26);
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = 1;
		STATS::SET_JOB_ACTIVITY_ID_STARTED(iVar2, iParam1);
	}
}

void func_750()//Position - 0x1CE44
{
	MISC::CLEAR_BIT(&(Global_2815059.f_836), 3);
}

void func_803(struct<17> Param0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1E96F
{
	int iVar0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, Param0.f_16);
	__LIB_0__::func_895(0, -1, 0);
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
				__LIB_24__::func_415(1);
			}
		}
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	if (!__LIB_0__::func_934())
	{
		func_424(0);
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_16__::func_558(iLocal_61, 1);
	func_426(1);
	if (!bLocal_590)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
	Global_2815059.f_1789 = 0;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1005.74243f, -2734.2646f, 14.919123f, -1082.9584f, -2675.189f, 26.016474f, 39.375f, false, false, false);
	func_806();
	__LIB_3__::func_511();
	Local_581[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_806()//Position - 0x1EB3A
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_584);
	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	TASK::TASK_TURN_PED_TO_FACE_COORD(0, 17.0693f, -1115.9354f, 28.7968f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_584);
}

