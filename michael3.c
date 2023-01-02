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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	char[] cLocal_55[8] = 0;
	var uLocal_56 = 0;
	char[] cLocal_57[8] = 0;
	char[] cLocal_58[8] = 0;
	char* sLocal_59 = NULL;
	char[] cLocal_60[8] = 0;
	char[] cLocal_61[8] = 0;
	char[] cLocal_62[8] = 0;
	char[] cLocal_63[8] = 0;
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
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	char cLocal_80[32] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_88 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	int iLocal_90[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_91 = 0;
	int iLocal_92[3] = { 0, 0, 0 };
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 16;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int* iLocal_263 = NULL;
	var uLocal_264 = 3;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 1092616192;
	var uLocal_271 = 1101004800;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 3;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int* iLocal_297 = NULL;
	struct<25> Local_298[57];
	struct<7> Local_299[17];
	struct<2> Local_300[5];
	struct<10> Local_301[3];
	int iLocal_302[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<8> Local_303[16];
	var uLocal_304 = 30;
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
	var uLocal_455 = 10;
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
	var uLocal_506 = 10;
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
	var uLocal_577 = 20;
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
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 20;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 30;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 5;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 7;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 5;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 3;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 21;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 10;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 5;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 5;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	int iLocal_1314 = 0;
	int iLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	bool bLocal_1319 = 0;
	var uLocal_1320 = 0;
	int iLocal_1321 = 0;
	bool bLocal_1322 = 0;
	int iLocal_1323 = 4;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 4;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 4;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 4;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 4;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 4;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 4;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	struct<21> Local_1367 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	float fLocal_1383 = 0f;
	int iLocal_1384 = 0;
	int iLocal_1385 = 0;
	struct<60> Local_1386[15];
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	int iLocal_1390 = 0;
	int iLocal_1391 = 0;
	int iLocal_1392 = 0;
	int iLocal_1393 = 0;
	int iLocal_1394 = 0;
	int iLocal_1395 = 15;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	var uLocal_1413 = 0;
	int iLocal_1414 = 0;
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	int* iLocal_1417 = NULL;
	int* iLocal_1418 = NULL;
	int* iLocal_1419 = NULL;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	int* iLocal_1422 = NULL;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	int* iLocal_1428 = NULL;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	int* iLocal_1434 = NULL;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	int* iLocal_1437 = NULL;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	int* iLocal_1440 = NULL;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	int iLocal_1443 = 0;
	struct<4> Local_1444[6];
	struct<4> Local_1445 = { 0, 0, 0, 0 } ;
	struct<25> Local_1446[4];
	struct<25> Local_1447[4];
	struct<25> Local_1448[2];
	struct<25> Local_1449[4];
	struct<25> Local_1450[2];
	struct<25> Local_1451[6];
	struct<25> Local_1452[3];
	struct<25> Local_1453[2];
	struct<25> Local_1454[3];
	int* iLocal_1455 = NULL;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = -1;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = -1082130432;
	struct<25> Local_1480[5];
	int iLocal_1481 = 2;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = -1;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = -1082130432;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = -1;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = -1082130432;
	struct<25> Local_1532[3];
	struct<25> Local_1533[2];
	struct<25> Local_1534[2];
	int iLocal_1535 = 1;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = -1;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = -1082130432;
	struct<25> Local_1561[3];
	struct<25> Local_1562[3];
	struct<25> Local_1563[3];
	struct<25> Local_1564[2];
	struct<25> Local_1565[2];
	struct<25> Local_1566[2];
	struct<25> Local_1567[2];
	struct<25> Local_1568[4];
	int iLocal_1569 = 4;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = -1;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = -1082130432;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = -1;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = -1082130432;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = -1;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = -1082130432;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = -1;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = -1082130432;
	struct<25> Local_1670[3];
	struct<25> Local_1671[1];
	struct<7> Local_1672[5];
	struct<7> Local_1673[2];
	struct<8> Local_1674 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1675 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1676 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1677 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1678 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1679 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1680 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1681 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1682 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1683 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1684 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1685 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1686 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1687 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1688 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1689 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1690 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1691 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1692 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1693 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1694 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1695 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1696 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1697 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1698 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_1699[6];
	struct<3> Local_1700[6];
	struct<3> Local_1701 = { 0, 0, 0 } ;
	struct<8> Local_1702 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	struct<8> Local_1707 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	struct<9> Local_1712 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	int iLocal_1716 = 0;
	int iLocal_1717 = 0;
	int iLocal_1718 = 0;
	int iLocal_1719 = 0;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	int iLocal_1722 = 0;
	int iLocal_1723 = 0;
	int iLocal_1724 = 0;
	int iLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = -1;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = -1082130432;
	struct<7> Local_1751[2];
	struct<4> Local_1752 = { 0, 0, 0, 0 } ;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	struct<7> Local_1756 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_1757 = { 0, 0, 0, 0 } ;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	struct<4> Local_1761 = { 0, 0, 0, 0 } ;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	struct<4> Local_1765 = { 0, 0, 0, 0 } ;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	struct<4> Local_1769 = { 0, 0, 0, 0 } ;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	struct<4> Local_1773 = { 0, 0, 0, 0 } ;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	struct<4> Local_1777 = { 0, 0, 0, 0 } ;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	struct<4> Local_1781 = { 0, 0, 0, 0 } ;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	struct<7> Local_1785[6];
	int iLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	int iLocal_1790 = 0;
	int iLocal_1791[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1792 = 0;
	int iLocal_1793 = 0;
	int* iLocal_1794 = NULL;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	int iLocal_1797 = 0;
	float fLocal_1798 = 0f;
	float fLocal_1799 = 0f;
	float fLocal_1800 = 0f;
	float fLocal_1801 = 0f;
	struct<3> Local_1802 = { 0, 0, 0 } ;
	int* iLocal_1803 = NULL;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	float fLocal_1806 = 0f;
	float fLocal_1807 = 0f;
	float fLocal_1808 = 0f;
	float fLocal_1809 = 0f;
	float fLocal_1810 = 0f;
	float fLocal_1811 = 0f;
	float fLocal_1812 = 0f;
	int iLocal_1813 = 0;
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	bool bLocal_1820 = 0;
	int iLocal_1821 = 0;
	struct<3> Local_1822 = { 0, 0, 0 } ;
	struct<3> Local_1823 = { 0, 0, 0 } ;
	float fLocal_1824 = 0f;
	float fLocal_1825 = 0f;
	float fLocal_1826 = 0f;
	float fLocal_1827 = 0f;
	float fLocal_1828 = 0f;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	int iLocal_1831 = 0;
	int iLocal_1832 = 0;
	int iLocal_1833 = 0;
	int iLocal_1834 = 0;
	int* iLocal_1835 = NULL;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	int* iLocal_1838 = NULL;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	struct<8> Local_1841 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1842 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1843 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1844 = 0;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	int iLocal_1847 = 0;
	int iLocal_1848 = 0;
	struct<8> Local_1849 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1850 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1851 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_1852 = NULL;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	int* iLocal_1855 = NULL;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	int* iLocal_1858 = NULL;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	struct<7> Local_1861[2];
	int iLocal_1862 = 0;
	int iLocal_1863 = 0;
	int* iLocal_1864 = NULL;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	int iLocal_1869 = 0;
	int iLocal_1870 = 0;
	int iLocal_1871 = 0;
	int iLocal_1872 = 0;
	int iLocal_1873 = 0;
	bool bLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	int iLocal_1877 = 0;
	int iLocal_1878 = 0;
	int iLocal_1879 = 0;
	int iLocal_1880 = 0;
	int iLocal_1881 = 0;
	int iLocal_1882 = 0;
	int iLocal_1883 = 0;
	int* iLocal_1884 = NULL;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	int* iLocal_1887 = NULL;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	int* iLocal_1890 = NULL;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	int* iLocal_1893 = NULL;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	int iLocal_1896 = 0;
	int iLocal_1897 = 0;
	int iLocal_1898 = 0;
	int iLocal_1899 = 0;
	int iLocal_1900 = 0;
	int iLocal_1901 = 0;
	int iLocal_1902 = 0;
	int iLocal_1903 = 0;
	struct<8> Local_1904 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1905 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1906 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1907 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1908 = 0;
	int* iLocal_1909 = NULL;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	int iLocal_1912 = 0;
	int iLocal_1913 = 0;
	int iLocal_1914 = 0;
	int iLocal_1915 = 0;
	int iLocal_1916[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1917 = 0;
	int iLocal_1918 = 0;
	int iLocal_1919 = 0;
	int iLocal_1920 = 0;
	int iLocal_1921 = 0;
	int iLocal_1922 = 0;
	int iLocal_1923 = 0;
	int iLocal_1924 = 0;
	int iLocal_1925 = 0;
	int iLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	int iLocal_1929 = 0;
	int iLocal_1930 = 0;
	int* iLocal_1931 = NULL;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	int* iLocal_1934 = NULL;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	int* iLocal_1937 = NULL;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	int* iLocal_1940 = NULL;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	int* iLocal_1943 = NULL;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	struct<8> Local_1946 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1947 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1948 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1949 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1950 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1951 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1952 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1953 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1954 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1955 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1956 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1957 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1958 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1959 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1960 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1961 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1962 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1963 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1964 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1965 = 0;
	int iLocal_1966 = 0;
	int iLocal_1967 = 0;
	int iLocal_1968 = 0;
	int iLocal_1969 = 0;
	int iLocal_1970 = 0;
	int iLocal_1971 = 0;
	int iLocal_1972 = 0;
	bool bLocal_1973 = 0;
	int iLocal_1974 = 0;
	int iLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	int* iLocal_1983 = NULL;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	int* iLocal_1986 = NULL;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	int iLocal_1989 = 0;
	int* iLocal_1990 = NULL;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	struct<7> Local_1998[2];
	struct<7> Local_1999[5];
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	bool bLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	int iLocal_2008 = 0;
	int* iLocal_2009 = NULL;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	int* iLocal_2012 = NULL;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	int* iLocal_2015 = NULL;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	int* iLocal_2018 = NULL;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	int* iLocal_2021 = NULL;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	int iLocal_2024 = 0;
	int iLocal_2025 = 0;
	struct<7> Local_2026 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2027 = 0;
	struct<8> Local_2028 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2029 = 0;
	int iLocal_2030 = 0;
	int iLocal_2031 = 0;
	int iLocal_2032 = 0;
	int iLocal_2033 = 0;
	int iLocal_2034 = 0;
	char[] cLocal_2035[8] = 0;
	char[] cLocal_2036[8] = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	int iLocal_2043 = 0;
	char* sLocal_2044 = NULL;
	struct<7> Local_2045 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2046 = 0;
	int* iLocal_2047 = NULL;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	int iLocal_2050 = 0;
	int* iLocal_2051 = NULL;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	int iLocal_2054 = 0;
	int iLocal_2055 = 0;
	bool bLocal_2056 = 0;
	int iLocal_2057 = 0;
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
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	StringCopy(&cLocal_55, "M3AUD", 8);
	cLocal_57 = "mic3_dave_escape";
	cLocal_58 = "mic3_otherp_escape";
	sLocal_59 = "mic_3_mcs_1_p1_a2";
	cLocal_60 = "missmic3";
	cLocal_61 = "missmic3ig_6";
	cLocal_62 = "missmic3ig_7";
	cLocal_63 = "missmic3leadinout_mcs1";
	iLocal_64 = joaat("S_M_Y_BlackOps_01");
	iLocal_65 = joaat("S_M_Y_Swat_01");
	iLocal_66 = joaat("S_M_M_CIASec_01");
	iLocal_67 = joaat("IG_DaveNorton");
	iLocal_68 = joaat("buzzard");
	iLocal_69 = joaat("prop_wrecked_buzzard");
	iLocal_70 = joaat("frogger");
	iLocal_71 = joaat("mesa3");
	iLocal_72 = joaat("mesa3");
	iLocal_73 = joaat("WEAPON_PISTOL");
	iLocal_74 = joaat("WEAPON_CARBINERIFLE");
	iLocal_75 = joaat("WEAPON_CARBINERIFLE");
	iLocal_76 = joaat("WEAPON_CARBINERIFLE");
	StringCopy(&Local_77, "michaelThree", 16);
	StringCopy(&cLocal_80, "FBI_HEIST_3B_SHOOTOUT", 32);
	Local_85 = { -2223.3765f, 192.4628f, 193.6015f };
	Local_86 = { -2290.3428f, 364.1428f, 173.6017f };
	Local_87 = { -2334.5464f, 294.4146f, 169.3519f };
	Local_88 = { -1468.3783f, -392.9619f, 37.5397f };
	iLocal_89 = 1;
	iLocal_1390 = -1;
	iLocal_1391 = -1;
	iLocal_1392 = -1;
	iLocal_1393 = -1;
	Local_1701 = { -2248.154f, 269.9111f, 173.60196f };
	fLocal_1798 = 1f;
	fLocal_1799 = 2000f;
	fLocal_1800 = 0.75f;
	fLocal_1801 = 5f;
	Local_1802 = { -2196.3708f, 216.70497f, 186.63254f };
	fLocal_1806 = 0.05f;
	fLocal_1807 = 0f;
	fLocal_1808 = 0f;
	fLocal_1809 = 0f;
	fLocal_1810 = 0f;
	fLocal_1811 = 0f;
	fLocal_1812 = 0f;
	Local_1822 = { -2292.3176f, 378.61874f, 173.46704f };
	Local_1823 = { 0f, 0f, 0f };
	fLocal_1824 = 0.45f;
	fLocal_1825 = 0f;
	fLocal_1826 = 0.1f;
	fLocal_1827 = 0f;
	fLocal_1828 = 30f;
	iLocal_1833 = 20;
	iLocal_1900 = -1;
	cLocal_2035 = "missfbi3leadinout";
	cLocal_2036 = "missmic_3_ext@leadin@mic_3_ext";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_968(0);
	}
	MISC::SET_MISSION_FLAG(true);
	func_940();
	while (true)
	{
		if (iLocal_1793 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		func_939();
		__LIB_17__::func_630(&uLocal_304);
		func_937();
		func_912();
		func_908();
		func_905();
		if (!bLocal_1319)
		{
			__LIB_37__::func_190(&Local_303);
			func_1();
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheWrapUp", 0);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x284
{
	switch (iLocal_1315)
	{
		case 0:
			func_892();
			break;
		case 1:
			func_863();
			break;
		case 2:
			func_834();
			break;
		case 3:
			func_818();
			break;
		case 4:
			func_810();
			break;
		case 5:
			func_768();
			break;
		case 6:
			func_735();
			break;
		case 7:
			func_667();
			break;
		case 8:
			func_502();
			break;
		case 9:
			func_48();
			break;
		case 10:
			func_2();
			break;
	}
}

void func_2()//Position - 0x323
{
	switch (iLocal_1316)
	{
		case 0:
			func_3();
			break;
	}
}

void func_3()//Position - 0x340
{
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	__LIB_0__::func_526(0, 0);
	func_4();
	Global_113330 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_4()//Position - 0x367
{
	int iVar0;
	__LIB_0__::func_325();
	HUD::CLEAR_PRINTS();
	AUDIO::STOP_AUDIO_SCENES();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -8f);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	__LIB_37__::func_927(1);
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_298[iVar0 /*25*/])) && PLAYER::PLAYER_PED_ID() != Local_298[iVar0 /*25*/])
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[iVar0 /*25*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_299[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[iVar0 /*7*/], false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[iVar0 /*7*/]));
		}
		iVar0++;
	}
	if (__LIB_0__::func_715(iLocal_1415))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_1415, 0f);
	}
	if (__LIB_0__::func_715(func_29()))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_29(), 0f);
	}
	if (__LIB_0__::func_715(func_28()))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(func_28(), 0f);
		PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), true);
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_1791 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1791[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1791[iVar0]));
		}
		iVar0++;
	}
	if (__LIB_0__::func_715(func_28()))
	{
		func_27(func_28(), 0);
	}
	if (__LIB_0__::func_715(func_29()))
	{
		func_27(func_29(), 0);
	}
	PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_93);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1792))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1792);
	}
	func_26(&Local_1446, 0);
	func_26(&Local_1447, 0);
	func_26(&Local_1448, 0);
	func_26(&Local_1449, 0);
	func_26(&Local_1450, 0);
	func_26(&Local_1451, 0);
	func_26(&Local_1452, 0);
	func_24(&iLocal_1455, 0);
	func_26(&Local_1453, 0);
	func_26(&Local_1454, 0);
	func_26(&Local_1480, 0);
	func_26(&iLocal_1481, 0);
	func_26(&Local_1532, 0);
	func_26(&Local_1533, 0);
	func_26(&Local_1534, 0);
	func_26(&iLocal_1535, 0);
	func_26(&Local_1561, 0);
	func_26(&Local_1562, 0);
	func_26(&Local_1563, 0);
	func_26(&Local_1564, 0);
	func_26(&Local_1565, 0);
	func_26(&Local_1566, 0);
	func_26(&Local_1567, 0);
	func_26(&Local_1568, 0);
	func_26(&iLocal_1569, 0);
	func_26(&Local_1670, 0);
	__LIB_13__::func_808(&iLocal_1417);
	__LIB_13__::func_808(&iLocal_1418);
	__LIB_13__::func_808(&iLocal_297);
	iVar0 = 0;
	while (iVar0 < Local_300.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_300[iVar0 /*2*/]) && Local_300[iVar0 /*2*/].f_1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_300[iVar0 /*2*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1751.f_0 - 1))
	{
		func_22(&(Local_1751[iVar0 /*7*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1672.f_0 - 1))
	{
		func_22(&(Local_1672[iVar0 /*7*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1673.f_0 - 1))
	{
		func_22(&(Local_1673[iVar0 /*7*/]));
		iVar0++;
	}
	func_22(&Local_1756);
	func_22(&Local_1761);
	func_22(&Local_1765);
	func_22(&Local_1769);
	func_22(&Local_1752);
	func_22(&Local_1773);
	func_22(&Local_1781);
	func_22(&Local_1757);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < Local_301.f_0)
	{
		if (CAM::DOES_CAM_EXIST(Local_301[iVar0 /*10*/]))
		{
			CAM::DESTROY_CAM(Local_301[iVar0 /*10*/], false);
		}
		iVar0++;
	}
	func_21();
	func_20();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_91))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_91);
	}
	GRAPHICS::REMOVE_DECAL(iLocal_1414);
	MISC::SET_TIME_SCALE(1f);
	fLocal_1383 = 1f;
	func_19();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(true);
	if (__LIB_16__::func_791(0))
	{
		__LIB_12__::func_849(0, 0);
	}
	if (__LIB_16__::func_791(2))
	{
		__LIB_12__::func_849(2, 0);
	}
	if (__LIB_16__::func_791(20))
	{
		__LIB_12__::func_849(20, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	__LIB_0__::func_377(0, -1);
	func_15();
	__LIB_0__::func_424(0);
	func_13(0);
	__LIB_0__::func_544(82, 0, 0, 1, 1);
}

void func_13(bool bParam0)//Position - 0x4AE0
{
	if (bParam0)
	{
		if (iLocal_289 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_289, false);
			iLocal_289 = 0;
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("KORTZ_SECURITY"))
		{
			if (TASK::IS_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY", false);
			}
		}
		iLocal_289 = PED::ADD_SCENARIO_BLOCKING_AREA(-2360.4126f, 139.9656f, 163.4271f, -2142.3582f, 438.0082f, 203.5064f, false, true, true, true);
		PATHFIND::SET_PED_PATHS_IN_AREA(-2360.4126f, 139.9656f, 163.4271f, -2142.3582f, 438.0082f, 203.5064f, false, 0);
		PED::SET_PED_NON_CREATION_AREA(-2360.4126f, 139.9656f, 163.4271f, -2142.3582f, 438.0082f, 203.5064f);
		MISC::CLEAR_AREA_OF_PEDS(-2260.096f, 296.53168f, 171.35208f, 500f, 0);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(-2305.77f, 271.11603f, 167.6021f, -2358.8352f, 392.01202f, 192.77919f, 67.8125f, false, false, true);
		MISC::CLEAR_AREA_OF_VEHICLES(-2331.2305f, 331.16495f, 169.60205f, 103f, false, false, false, false, false, false, 0);
	}
	else
	{
		if (iLocal_289 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_289, false);
			iLocal_289 = 0;
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("KORTZ_SECURITY"))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("KORTZ_SECURITY", true);
			}
		}
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-2360.4126f, 139.9656f, 163.4271f, -2142.3582f, 438.0082f, 203.5064f, 0);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-2305.77f, 271.11603f, 168.6021f, -2358.8352f, 392.01202f, 192.77919f, 67.8125f, 1);
		PED::CLEAR_PED_NON_CREATION_AREA();
	}
}

void func_15()//Position - 0x4CA1
{
	TASK::REMOVE_COVER_POINT(Local_1672[0 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_1672[1 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_1672[2 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_1672[3 /*7*/]);
	TASK::REMOVE_COVER_POINT(Local_1672[4 /*7*/]);
}

void func_19()//Position - 0x4D7E
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1786))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_1786, false);
	}
}

void func_20()//Position - 0x4D98
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_92 - 1))
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_92[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_92[iVar0]);
		}
		iVar0++;
	}
}

void func_21()//Position - 0x4DCC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_90 - 1))
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_90[iVar0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_90[iVar0]);
		}
		iVar0++;
	}
}

void func_22(var uParam0)//Position - 0x4E00
{
	if ((TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(uParam0->f_3) && uParam0->f_1) && *uParam0 != 0)
	{
		TASK::REMOVE_COVER_POINT(*uParam0);
	}
	uParam0->f_1 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
}

void func_24(int* iParam0, bool bParam1)//Position - 0x4E5A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	__LIB_13__::func_808(&(iParam0->f_8));
	__LIB_0__::func_621(&(iParam0->f_13));
}

void func_26(int iParam0, bool bParam1)//Position - 0x4F02
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_24(iParam0[iVar0 /*25*/], bParam1);
		iVar0++;
	}
}

void func_27(int iParam0, bool bParam1)//Position - 0x4F2C
{
	if (!(iParam0 == PLAYER::PLAYER_PED_ID() && bParam1 == 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, bParam1, 1);
	}
}

int func_28()//Position - 0x4F51
{
	return Local_298[0 /*25*/];
}

int func_29()//Position - 0x4F5F
{
	return Local_298[1 /*25*/];
}

void func_48()//Position - 0x543D
{
	int iVar0;
	int iVar1;
	switch (iLocal_1316)
	{
		case 0:
			bLocal_2056 = false;
			iLocal_2057 = 0;
			if (__LIB_14__::func_466() == 2)
			{
				bLocal_2056 = true;
			}
			iLocal_1316++;
			break;
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_0__::func_429();
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				func_497(&Local_303);
				iVar0 = 0;
				while (iVar0 < Local_298.f_0)
				{
					if (iVar0 > 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[iVar0 /*25*/]));
						}
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1415))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_1415);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(func_29()))
				{
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_UNARMED"), 10, 1, 1, 0, 60);
				}
				__LIB_16__::func_912(&uLocal_304, joaat("IG_DaveNorton"));
				__LIB_16__::func_912(&uLocal_304, iLocal_66);
				__LIB_16__::func_912(&uLocal_304, iLocal_65);
				__LIB_16__::func_912(&uLocal_304, iLocal_64);
				__LIB_16__::func_912(&uLocal_304, iLocal_70);
				__LIB_16__::func_912(&uLocal_304, iLocal_68);
				__LIB_16__::func_912(&uLocal_304, iLocal_71);
				__LIB_16__::func_912(&uLocal_304, iLocal_72);
				iVar0 = 0;
				while (iVar0 < Local_300.f_0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_300[iVar0 /*2*/]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_300[iVar0 /*2*/]));
					}
					iVar0++;
				}
				__LIB_31__::func_964(&uLocal_304, 50, &Local_77);
				__LIB_31__::func_964(&uLocal_304, 4, &Local_77);
				__LIB_31__::func_964(&uLocal_304, 12, &Local_77);
				__LIB_31__::func_964(&uLocal_304, 7, &Local_77);
				__LIB_31__::func_964(&uLocal_304, 1, &Local_77);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_STOP_TRACK");
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				__LIB_0__::func_366(1);
				__LIB_37__::func_927(1);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				if (bLocal_2056)
				{
					func_162(0, 1, 0, 0, 0, 0);
					__LIB_16__::func_880(&iLocal_1323, 0, 0);
					__LIB_37__::func_935(&iLocal_1323, 0, 0);
					__LIB_16__::func_896(&iLocal_1323, 0);
					__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_1323[2]);
					func_162(1, 1, 1, 0, 0, 0);
				}
				iLocal_1316++;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_60(0);
			iLocal_1316++;
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && !iLocal_2055)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_299[16 /*7*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_299[16 /*7*/], -1448.9089f, -366.6817f, 42.5278f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_299[16 /*7*/], 280.744f);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_88, 100f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_88, 100f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_2050))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_2050);
					}
				}
				__LIB_16__::func_937(-1475.9172f, -400.3012f, 35.69581f, -1441.554f, -374.86792f, 41.35278f, 16f, -1481.2556f, -403.6215f, 36.5974f, 55.3672f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				iVar1 = 0;
				while (iVar1 < Local_299.f_0)
				{
					if (iVar1 != 16)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_299[iVar1 /*7*/]))
						{
							if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != Local_299[iVar1 /*7*/])
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[iVar1 /*7*/]));
							}
						}
					}
					iVar1++;
				}
				iLocal_2055 = 1;
			}
			if (bLocal_2056)
			{
				if (!iLocal_2057)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 138734)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_2057 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_37__::func_927(0);
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				func_49(10);
			}
			break;
	}
}

void func_49(int iParam0)//Position - 0x5802
{
	iLocal_1317 = iParam0;
	iLocal_1314 = 1;
}

void func_60(bool bParam0)//Position - 0x6209
{
	int iVar0;
	func_26(&Local_1446, 1);
	func_26(&Local_1447, 1);
	func_26(&Local_1448, 1);
	func_26(&Local_1449, 1);
	func_26(&Local_1450, 1);
	func_26(&Local_1451, 1);
	func_26(&Local_1452, 1);
	func_24(&iLocal_1455, 1);
	func_26(&Local_1453, 1);
	func_26(&Local_1454, 1);
	func_26(&Local_1480, 1);
	func_26(&iLocal_1481, 1);
	func_26(&Local_1532, 1);
	func_26(&Local_1533, 1);
	func_26(&Local_1534, 1);
	func_26(&iLocal_1535, 1);
	func_26(&Local_1561, 1);
	func_26(&Local_1562, 1);
	func_26(&Local_1563, 1);
	func_26(&Local_1564, 1);
	func_26(&Local_1565, 1);
	func_26(&Local_1566, 1);
	func_26(&Local_1567, 1);
	func_26(&Local_1568, 1);
	func_26(&iLocal_1569, 1);
	func_26(&Local_1670, 1);
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_298[iVar0 /*25*/])) && PLAYER::PLAYER_PED_ID() != Local_298[iVar0 /*25*/])
		{
			PED::DELETE_PED(&(Local_298[iVar0 /*25*/]));
		}
		__LIB_13__::func_808(&(Local_298[iVar0 /*25*/].f_8));
		iVar0++;
	}
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 <= (17 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_299[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[iVar0 /*7*/], false))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_299[iVar0 /*7*/]));
			}
			__LIB_13__::func_808(&(Local_299[iVar0 /*7*/].f_1));
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1415))
	{
		PED::DELETE_PED(&iLocal_1415);
	}
}

void func_162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xF91F
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_298[2 /*25*/]))
	{
		iLocal_1323[1] = Local_298[2 /*25*/];
		__LIB_16__::func_880(&iLocal_1323, 1, iParam1);
		__LIB_17__::func_78(&iLocal_1323, 1, iParam4);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_1323, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_298[1 /*25*/]))
	{
		iLocal_1323[2] = Local_298[1 /*25*/];
		__LIB_16__::func_880(&iLocal_1323, 2, iParam2);
		__LIB_17__::func_78(&iLocal_1323, 2, iParam5);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_1323, 2, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_298[0 /*25*/]))
	{
		iLocal_1323[0] = Local_298[0 /*25*/];
		__LIB_16__::func_880(&iLocal_1323, 0, iParam0);
		__LIB_17__::func_78(&iLocal_1323, 0, iParam3);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_1323, 0, 1);
	}
}

int func_172(int* iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9)//Position - 0xFC6B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iVar0 = 0;
		if (iParam1 == 3)
		{
		}
		switch (iParam1)
		{
			case 0:
				iVar1 = 0;
				iVar2 = 0;
				StringCopy(&Var3, "MICHAEL", 16);
				break;
			case 1:
				iVar1 = 1;
				iVar2 = 1;
				StringCopy(&Var3, "FRANKLIN", 16);
				break;
			case 2:
				iVar1 = 2;
				iVar2 = 2;
				StringCopy(&Var3, "TREVOR", 16);
				break;
		}
		if (bParam6)
		{
			while (!func_180(iParam0, iVar1, Param2, fParam3, bParam7, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			func_180(iParam0, iVar1, Param2, fParam3, bParam7, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (bParam8)
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_8));
				}
				func_176(&(iParam0->f_8), *iParam0, 0);
			}
			PED::SET_PED_TO_LOAD_COVER(*iParam0, true);
			PED::SET_PED_ACCURACY(*iParam0, iParam5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_290);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(*iParam0, false);
			ENTITY::SET_ENTITY_HEALTH(*iParam0, 800, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 1);
			__LIB_15__::func_997(*iParam0, 200f, 200f, 180f, -180f, 180f);
			__LIB_0__::func_221(&uLocal_95, iVar2);
			__LIB_0__::func_222(&uLocal_95, iVar2, *iParam0, &Var3, 0, 1);
			if (iParam4 != 0)
			{
				if (iParam9 <= 0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam4, -1, true, true);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam4, iParam9, true, true);
				}
			}
			else
			{
				iVar4 = WEAPON::GET_BEST_PED_WEAPON(*iParam0, false);
				if ((((((((iVar4 != joaat("WEAPON_UNARMED") && iVar4 != joaat("WEAPON_BAT")) && iVar4 != joaat("WEAPON_CROWBAR")) && iVar4 != joaat("WEAPON_FIREEXTINGUISHER")) && iVar4 != joaat("WEAPON_HAMMER")) && iVar4 != joaat("WEAPON_NIGHTSTICK")) && iVar4 != joaat("WEAPON_PETROLCAN")) && iVar4 != joaat("WEAPON_STUNGUN")) && iVar4 != joaat("WEAPON_BOTTLE"))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iVar4, true);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_PISTOL"), 60, true, true);
				}
			}
			if (bParam7 && iVar0 != 0)
			{
				__LIB_16__::func_912(&uLocal_304, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_176(int* iParam0, int iParam1, bool bParam2)//Position - 0xFF9E
{
	__LIB_13__::func_808(iParam0);
	*iParam0 = __LIB_0__::func_666(iParam1, bParam2, 145);
}

int func_180(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x100C0
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_895(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_489(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_182(*iParam0, bParam6);
			__LIB_0__::func_405(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, bool bParam1)//Position - 0x101D8
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_273(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_273(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_251(iParam0, 3, 169))
					{
						func_458(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_251(iParam0, 12, 6))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 11))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 10))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 50))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 59))
			{
				func_458(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 22))
			{
				func_458(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 14))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_251(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 4))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 3))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 82))
			{
				func_458(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 76))
			{
				func_458(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 1))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_251(iParam0, 12, 12))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 15))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_251(iParam0, 3, 71))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_251(iParam0, 12, 7))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 12, 6))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_251(iParam0, 14, 88))
			{
				func_458(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_251(iParam0, 8, 17))
			{
				func_458(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_251(iParam0, 12, 11))
			{
				func_458(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2)//Position - 0x27766
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
				if (!func_251(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_251(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_251(iParam0, 14, iVar4))
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
			if (!func_251(iParam0, 14, uVar8[iVar7]))
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

void func_273(int iParam0, int iParam1)//Position - 0x2BDE3
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_457(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_275(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_983();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_275(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2C061
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
		iVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_455(iParam0, iVar1, &iVar2, 0))
			{
				func_458(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_453(iParam0, iVar1, &iVar2))
			{
				func_458(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_450(iParam0);
			__LIB_0__::func_413(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_413(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_463(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_0__::func_462(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_281(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_281(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_281(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_463(iVar9);
			}
			else
			{
				iVar9 = __LIB_0__::func_462(iVar9);
			}
			__LIB_0__::func_413(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_413(2053, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_513(161, 1, -1, 1);
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

int func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2C7FD
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_408(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_0__::func_459(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_408(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_0__::func_466(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_408(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_281(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_408(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_405(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_281(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_0__::func_662();
			if (iVar17 != -1)
			{
				__LIB_0__::func_661(iVar17, 0, iParam10);
			}
			func_399(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_408(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_12__::func_901(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_408(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_281(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_390(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__::func_33(iParam1);
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
				iVar23 = __LIB_0__::func_350(iParam0, 11);
				iVar24 = __LIB_0__::func_350(iParam0, 8);
				iVar25 = __LIB_0__::func_350(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_0__::func_350(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_389(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_282(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_0__::func_350(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_281(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_0__::func_280(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_205(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_0__::func_280(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_3__::func_523(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_281(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_281(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_0__::func_452(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_281(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_523(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_0__::func_357(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_205(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_278(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_205(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_0__::func_451(iVar5, __LIB_0__::func_350(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_281(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_281(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_281(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_520(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_399(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_389(iVar5, func_405(iParam0, 8, -1), iParam2, func_405(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_369(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_369(2160, iParam10, 0);
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
						iVar42 = __LIB_0__::func_463(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_0__::func_462(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_324(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_389(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_282(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_399(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_389(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_0__::func_350(iParam0, 7);
				if (!__LIB_0__::func_547(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_369(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_369(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_369(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_412(135, iParam10);
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
				__LIB_3__::func_345(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_0__::func_350(iParam0, 11);
			iVar58 = __LIB_0__::func_350(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_281(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_281(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_389(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_389(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_12__::func_901(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_205(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_282(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_389(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_248(iParam0))
				{
					iVar63 = __LIB_0__::func_442(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_301(iParam0, 9, iVar63))
						{
							func_281(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_369(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_0__::func_533(iParam0, iVar64), __LIB_0__::func_242(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_405(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_405(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_281(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_281(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_0__::func_350(iParam0, 4);
				iVar75 = __LIB_0__::func_350(iParam0, 6);
				if (__LIB_0__::func_238(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_238(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_0__::func_237(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_0__::func_439(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_390(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_282(iParam0, &uVar4))
		{
			func_281(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_281(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_281(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_281(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_405(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_0__::func_204(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_281(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_282(int iParam0, var uParam1)//Position - 0x2E6A7
{
	int iVar0;
	int iVar1;
	*uParam1 = func_405(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_369(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_369(754, Global_78127, 0) == 0 && __LIB_0__::func_369(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				if (__LIB_0__::func_369(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_369(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_369(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_369(755, Global_78127, 0);
		if (!func_301(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_351(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_369(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_369(753, Global_78127, 0);
			}
			__LIB_0__::func_413(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_413(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0, int iParam1, int iParam2)//Position - 0x32964
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_0__::func_459(iVar0, iParam2) };
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
				if (!func_301(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_0__::func_466(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_301(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_301(iParam0, 14, iVar6))
										{
											if (!__LIB_0__::func_551(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_0__::func_350(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_0__::func_551(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__::func_369(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_301(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__::func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_301(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_301(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_324(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3967E
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_346(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_0__::func_661(iVar1, 1, iParam2);
	}
	func_325(iParam0, bParam3, 0, -1);
}

void func_325(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x396CB
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
		iVar2 = __LIB_0__::func_276(iParam0);
		bVar3 = func_369(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_360(iParam0, iParam3);
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
			if (__LIB_0__::func_549(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_0__::func_674(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_0__::func_549(123, iVar0))
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
					if (__LIB_0__::func_549(iVar10, iVar0))
					{
						if (__LIB_0__::func_674(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_348(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_260(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_360(int iParam0, int iParam1)//Position - 0x48C59
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_405(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__::func_369(1759, -1, 0);
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
				iVar5 = func_405(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_369(int iParam0, bool bParam1)//Position - 0x490B7
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						if (__LIB_0__::func_549(13, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(14, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(15, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(16, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(71, -1))
						{
							return 1;
						}
						else if (__LIB_0__::func_549(72, -1))
						{
						}
						else if (__LIB_0__::func_536(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_405(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_405(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						iVar8 = func_405(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_405(iParam0, 11, -1), 0);
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
						iVar12 = func_405(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_389(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x51FCE
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
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_278(iVar4);
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
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_389(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_0__::func_204(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_205(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_278(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_205(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_278(iVar4);
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
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_389(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_0__::func_204(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_0__::func_280(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_0__::func_204(iParam0, iVar12, 3, 4);
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

void func_390(int iParam0)//Position - 0x53309
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
	bool bVar14;
	struct<5> Var15;
	int* iVar16;
	int iVar17;
	struct<5> Var18;
	int* iVar19;
	int iVar20;
	struct<5> Var21;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
	iVar3 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
	iVar4 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
	iVar5 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
	iVar6 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
	iVar7 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10);
	iVar8 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 10);
	iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar1, iVar2);
	iVar10 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar3, iVar4);
	iVar11 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, iVar5, iVar6);
	iVar12 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	iVar13 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 10, iVar7, iVar8);
	bVar14 = false;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_UP"), 0))
	{
		if (!func_395(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_286(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_285(iVar17, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar17, &Var18);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var18.f_3, Var18.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar16, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOODED_JACKET"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("HOOD_DOWN"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar12, joaat("FAKE_HAT"), 1))
		{
			if (__LIB_0__::func_286(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_285(iVar13, 11, -1))
				{
					if (__LIB_0__::func_285(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_284(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_285(iVar20, 11, Var15.f_1))
						{
							FILES::GET_SHOP_PED_COMPONENT(iVar20, &Var21);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var21.f_3, Var21.f_4, 0);
						}
					}
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0) && iVar13 != joaat("DLC_MP_IE_M_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_M_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_M_DECL_10_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_2"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_0_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_0_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
						else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_3"), 0) && iVar13 != joaat("DLC_MP_FIXER_M_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_M_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar13, joaat("CREW_LOGO"), 0))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_16"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_1_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_1_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("IE_DRAW_19"), 0))
					{
						if (iVar13 != joaat("DLC_MP_IE_F_DECL_2_0"))
						{
							FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_IE_F_DECL_2_0"), &Var15);
							PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("GORKA_SUIT"), 0))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_X17_F_DECL_10_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_7"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_1_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_1_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar19, joaat("FX_DRAW_8"), 0) && iVar13 != joaat("DLC_MP_FIXER_F_DECL_2_0"))
					{
						FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_FIXER_F_DECL_2_0"), &Var15);
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, Var15.f_3, Var15.f_4, 0);
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, iVar3, iVar4, 0);
			}
		}
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_283(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_395(iParam0, &bVar14, iVar9, iVar10, iVar12))
		{
			if (bVar14)
			{
				if (iVar0 == joaat("MP_M_Freemode_01"))
				{
					iVar5 = 15;
					iVar6 = 0;
				}
				else
				{
					iVar5 = 14;
					iVar6 = 0;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_6_0"), &Var15);
				iVar5 = Var15.f_3;
			}
			else
			{
				FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_10_0"), &Var15);
				iVar5 = Var15.f_3;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01"))
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_SPECIAL_7_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		else
		{
			FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_SPECIAL_11_0"), &Var15);
			iVar5 = Var15.f_3;
		}
		if (iVar5 != PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8) || iVar6 != PED::GET_PED_TEXTURE_VARIATION(iParam0, 8))
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, iVar5, iVar6, PED::GET_PED_PALETTE_VARIATION(iParam0, 8));
		}
	}
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x53CD3
{
	int iVar0;
	*iParam1 = 0;
	if (iParam2 == -1)
	{
		iParam2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	}
	if (iParam3 == -1)
	{
		iParam3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
	}
	if (iParam4 == -1)
	{
		iParam4 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, 0, PED::GET_PED_PROP_INDEX(iParam0, 0), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 0));
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HOODED_JACKET"), 0))
	{
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("FITTED_HOOD"), 0))
		{
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1) && PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam4, joaat("HOOD_HAT"), 1))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SKI_MASK"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("BIKER_MASK"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("NIGHT_VISION"), 0))
			{
				return 0;
			}
		}
		else
		{
			if (PED::GET_PED_PROP_INDEX(iParam0, 0) != -1)
			{
				return 0;
			}
			if ((!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HOOD_COMPAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0)) && PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1) != 0)
			{
				return 0;
			}
		}
		return 1;
	}
	if (iVar0 == joaat("MP_M_Freemode_01"))
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_14"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_HEIST_M_BERD_21_0"):
			case joaat("DLC_MP_HEIST_M_BERD_21_1"):
			case joaat("DLC_MP_HEIST_M_BERD_21_2"):
			case joaat("DLC_MP_HEIST_M_BERD_21_3"):
			case joaat("DLC_MP_HEIST_M_BERD_21_4"):
			case joaat("DLC_MP_HEIST_M_BERD_21_5"):
			case joaat("DLC_MP_HEIST_M_BERD_21_6"):
			case joaat("DLC_MP_HEIST_M_BERD_21_7"):
			case joaat("DLC_MP_HEIST_M_BERD_21_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_0"):
			case joaat("DLC_MP_HEIST_M_BERD_14_1"):
			case joaat("DLC_MP_HEIST_M_BERD_14_2"):
			case joaat("DLC_MP_HEIST_M_BERD_14_3"):
			case joaat("DLC_MP_HEIST_M_BERD_14_4"):
			case joaat("DLC_MP_HEIST_M_BERD_14_5"):
			case joaat("DLC_MP_HEIST_M_BERD_14_6"):
			case joaat("DLC_MP_HEIST_M_BERD_14_7"):
			case joaat("DLC_MP_HEIST_M_BERD_14_8"):
			case joaat("DLC_MP_HEIST_M_BERD_14_9"):
			case joaat("DLC_MP_HEIST_M_BERD_14_10"):
			case joaat("DLC_MP_HEIST_M_BERD_14_11"):
			case joaat("DLC_MP_HEIST_M_BERD_14_12"):
			case joaat("DLC_MP_HEIST_M_BERD_14_13"):
			case joaat("DLC_MP_HEIST_M_BERD_14_14"):
			case joaat("DLC_MP_HEIST_M_BERD_14_15"):
			case joaat("DLC_MP_HEIST_M_BERD_14_16"):
			case joaat("DLC_MP_HEIST_M_BERD_14_17"):
			case joaat("DLC_MP_HEIST_M_BERD_14_18"):
			case joaat("DLC_MP_HEIST_M_BERD_14_19"):
			case joaat("DLC_MP_HEIST_M_BERD_14_20"):
			case joaat("DLC_MP_HEIST_M_BERD_14_21"):
			case joaat("DLC_MP_HEIST_M_BERD_14_22"):
			case joaat("DLC_MP_HEIST_M_BERD_14_23"):
			case joaat("DLC_MP_HEIST_M_BERD_14_24"):
			case joaat("DLC_MP_HEIST_M_BERD_14_25"):
			case joaat("DLC_MP_IND_M_BERD_4_0"):
			case joaat("DLC_MP_IND_M_BERD_4_1"):
			case joaat("DLC_MP_IND_M_BERD_3_0"):
			case joaat("DLC_MP_IND_M_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
		}
	}
	else
	{
		if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam2, joaat("HEIST_DRAW_15"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("SCRUFFY_BALACLAVA"), 0))
		{
			*iParam1 = 1;
			return 0;
		}
		switch (iParam3)
		{
			case joaat("DLC_MP_SMUG_F_BERD_8_0"):
			case joaat("DLC_MP_SMUG_F_BERD_8_1"):
			case joaat("DLC_MP_SMUG_F_BERD_8_2"):
			case joaat("DLC_MP_SMUG_F_BERD_8_3"):
			case joaat("DLC_MP_SMUG_F_BERD_8_4"):
			case joaat("DLC_MP_SMUG_F_BERD_8_5"):
			case joaat("DLC_MP_SMUG_F_BERD_8_6"):
			case joaat("DLC_MP_SMUG_F_BERD_8_7"):
			case joaat("DLC_MP_SMUG_F_BERD_8_8"):
			case joaat("DLC_MP_SMUG_F_BERD_8_9"):
			case joaat("DLC_MP_SMUG_F_BERD_8_10"):
			case joaat("DLC_MP_SMUG_F_BERD_8_11"):
			case joaat("DLC_MP_SMUG_F_BERD_8_12"):
			case joaat("DLC_MP_SMUG_F_BERD_8_13"):
			case joaat("DLC_MP_SMUG_F_BERD_8_14"):
			case joaat("DLC_MP_SMUG_F_BERD_8_15"):
			case joaat("DLC_MP_SMUG_F_BERD_8_16"):
			case joaat("DLC_MP_SMUG_F_BERD_8_17"):
			case joaat("DLC_MP_SMUG_F_BERD_8_18"):
			case joaat("DLC_MP_SMUG_F_BERD_8_19"):
			case joaat("DLC_MP_SMUG_F_BERD_8_20"):
			case joaat("DLC_MP_SMUG_F_BERD_8_21"):
			case joaat("DLC_MP_SMUG_F_BERD_8_22"):
			case joaat("DLC_MP_SMUG_F_BERD_8_23"):
			case joaat("DLC_MP_SMUG_F_BERD_8_24"):
			case joaat("DLC_MP_SMUG_F_BERD_8_25"):
			case joaat("DLC_MP_HEIST_F_BERD_23_0"):
			case joaat("DLC_MP_HEIST_F_BERD_23_1"):
			case joaat("DLC_MP_HEIST_F_BERD_23_2"):
			case joaat("DLC_MP_HEIST_F_BERD_23_3"):
			case joaat("DLC_MP_HEIST_F_BERD_23_4"):
			case joaat("DLC_MP_HEIST_F_BERD_23_5"):
			case joaat("DLC_MP_HEIST_F_BERD_23_6"):
			case joaat("DLC_MP_HEIST_F_BERD_23_7"):
			case joaat("DLC_MP_HEIST_F_BERD_23_8"):
			case joaat("DLC_MP_HEIST_F_BERD_23_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_0"):
			case joaat("DLC_MP_HEIST_F_BERD_22_1"):
			case joaat("DLC_MP_HEIST_F_BERD_22_2"):
			case joaat("DLC_MP_HEIST_F_BERD_22_3"):
			case joaat("DLC_MP_HEIST_F_BERD_22_4"):
			case joaat("DLC_MP_HEIST_F_BERD_22_5"):
			case joaat("DLC_MP_HEIST_F_BERD_22_6"):
			case joaat("DLC_MP_HEIST_F_BERD_22_7"):
			case joaat("DLC_MP_HEIST_F_BERD_22_8"):
			case joaat("DLC_MP_HEIST_F_BERD_22_9"):
			case joaat("DLC_MP_HEIST_F_BERD_22_10"):
			case joaat("DLC_MP_HEIST_F_BERD_22_11"):
			case joaat("DLC_MP_HEIST_F_BERD_22_12"):
			case joaat("DLC_MP_HEIST_F_BERD_22_13"):
			case joaat("DLC_MP_HEIST_F_BERD_22_14"):
			case joaat("DLC_MP_HEIST_F_BERD_22_15"):
			case joaat("DLC_MP_HEIST_F_BERD_22_16"):
			case joaat("DLC_MP_HEIST_F_BERD_22_17"):
			case joaat("DLC_MP_HEIST_F_BERD_22_18"):
			case joaat("DLC_MP_HEIST_F_BERD_22_19"):
			case joaat("DLC_MP_HEIST_F_BERD_22_20"):
			case joaat("DLC_MP_HEIST_F_BERD_22_21"):
			case joaat("DLC_MP_HEIST_F_BERD_21_0"):
			case joaat("DLC_MP_HEIST_F_BERD_21_1"):
			case joaat("DLC_MP_HEIST_F_BERD_21_2"):
			case joaat("DLC_MP_HEIST_F_BERD_21_3"):
			case joaat("DLC_MP_HEIST_F_BERD_21_4"):
			case joaat("DLC_MP_HEIST_F_BERD_21_5"):
			case joaat("DLC_MP_HEIST_F_BERD_21_6"):
			case joaat("DLC_MP_HEIST_F_BERD_21_7"):
			case joaat("DLC_MP_HEIST_F_BERD_21_8"):
			case joaat("DLC_MP_HEIST_F_BERD_20_0"):
			case joaat("DLC_MP_HEIST_F_BERD_20_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_0"):
			case joaat("DLC_MP_HEIST_F_BERD_19_1"):
			case joaat("DLC_MP_HEIST_F_BERD_19_2"):
			case joaat("DLC_MP_HEIST_F_BERD_19_3"):
			case joaat("DLC_MP_HEIST_F_BERD_19_4"):
			case joaat("DLC_MP_HEIST_F_BERD_19_5"):
			case joaat("DLC_MP_HEIST_F_BERD_19_6"):
			case joaat("DLC_MP_HEIST_F_BERD_19_7"):
			case joaat("DLC_MP_HEIST_F_BERD_19_8"):
			case joaat("DLC_MP_HEIST_F_BERD_19_9"):
			case joaat("DLC_MP_HEIST_F_BERD_19_10"):
			case joaat("DLC_MP_HEIST_F_BERD_18_0"):
			case joaat("DLC_MP_HEIST_F_BERD_18_1"):
			case joaat("DLC_MP_HEIST_F_BERD_18_2"):
			case joaat("DLC_MP_HEIST_F_BERD_18_3"):
			case joaat("DLC_MP_HEIST_F_BERD_18_4"):
			case joaat("DLC_MP_HEIST_F_BERD_18_5"):
			case joaat("DLC_MP_HEIST_F_BERD_18_6"):
			case joaat("DLC_MP_HEIST_F_BERD_18_7"):
			case joaat("DLC_MP_HEIST_F_BERD_18_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_0"):
			case joaat("DLC_MP_HEIST_F_BERD_17_1"):
			case joaat("DLC_MP_HEIST_F_BERD_17_2"):
			case joaat("DLC_MP_HEIST_F_BERD_17_3"):
			case joaat("DLC_MP_HEIST_F_BERD_17_4"):
			case joaat("DLC_MP_HEIST_F_BERD_17_5"):
			case joaat("DLC_MP_HEIST_F_BERD_17_6"):
			case joaat("DLC_MP_HEIST_F_BERD_17_7"):
			case joaat("DLC_MP_HEIST_F_BERD_17_8"):
			case joaat("DLC_MP_HEIST_F_BERD_17_9"):
			case joaat("DLC_MP_HEIST_F_BERD_17_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_0"):
			case joaat("DLC_MP_HEIST_F_BERD_14_1"):
			case joaat("DLC_MP_HEIST_F_BERD_14_2"):
			case joaat("DLC_MP_HEIST_F_BERD_14_3"):
			case joaat("DLC_MP_HEIST_F_BERD_14_4"):
			case joaat("DLC_MP_HEIST_F_BERD_14_5"):
			case joaat("DLC_MP_HEIST_F_BERD_14_6"):
			case joaat("DLC_MP_HEIST_F_BERD_14_7"):
			case joaat("DLC_MP_HEIST_F_BERD_14_8"):
			case joaat("DLC_MP_HEIST_F_BERD_14_9"):
			case joaat("DLC_MP_HEIST_F_BERD_14_10"):
			case joaat("DLC_MP_HEIST_F_BERD_14_11"):
			case joaat("DLC_MP_HEIST_F_BERD_14_12"):
			case joaat("DLC_MP_HEIST_F_BERD_14_13"):
			case joaat("DLC_MP_HEIST_F_BERD_14_14"):
			case joaat("DLC_MP_HEIST_F_BERD_14_15"):
			case joaat("DLC_MP_HEIST_F_BERD_14_16"):
			case joaat("DLC_MP_HEIST_F_BERD_14_17"):
			case joaat("DLC_MP_HEIST_F_BERD_14_18"):
			case joaat("DLC_MP_HEIST_F_BERD_14_19"):
			case joaat("DLC_MP_HEIST_F_BERD_14_20"):
			case joaat("DLC_MP_HEIST_F_BERD_14_21"):
			case joaat("DLC_MP_HEIST_F_BERD_14_22"):
			case joaat("DLC_MP_HEIST_F_BERD_14_23"):
			case joaat("DLC_MP_HEIST_F_BERD_14_24"):
			case joaat("DLC_MP_HEIST_F_BERD_14_25"):
			case joaat("DLC_MP_HEIST_F_BERD_13_0"):
			case joaat("DLC_MP_HEIST_F_BERD_13_1"):
			case joaat("DLC_MP_HEIST_F_BERD_13_2"):
			case joaat("DLC_MP_HEIST_F_BERD_13_3"):
			case joaat("DLC_MP_HEIST_F_BERD_12_0"):
			case joaat("DLC_MP_HEIST_F_BERD_12_1"):
			case joaat("DLC_MP_HEIST_F_BERD_12_2"):
			case joaat("DLC_MP_HEIST_F_BERD_12_3"):
			case joaat("DLC_MP_HEIST_F_BERD_7_0"):
			case joaat("DLC_MP_HEIST_F_BERD_7_1"):
			case joaat("DLC_MP_HEIST_F_BERD_5_0"):
			case joaat("DLC_MP_HEIST_F_BERD_5_1"):
			case joaat("DLC_MP_HEIST_F_BERD_4_0"):
			case joaat("DLC_MP_HEIST_F_BERD_4_1"):
			case joaat("DLC_MP_HEIST_F_BERD_0_0"):
			case joaat("DLC_MP_XMAS2_F_BERD_1_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_0"):
			case joaat("DLC_MP_LTS_F_BERD_0_1"):
			case joaat("DLC_MP_LTS_F_BERD_0_2"):
			case joaat("DLC_MP_LTS_F_BERD_0_3"):
			case joaat("DLC_MP_LTS_F_BERD_0_4"):
			case joaat("DLC_MP_IND_F_BERD_4_0"):
			case joaat("DLC_MP_IND_F_BERD_4_1"):
			case joaat("DLC_MP_IND_F_BERD_3_0"):
			case joaat("DLC_MP_IND_F_BERD_3_1"):
				*iParam1 = 1;
				return 0;
				break;
			}
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_405(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_450(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_0__::func_280(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_0__::func_350(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_0__::func_350(iParam0, 11);
				if (!__LIB_0__::func_280(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_3__::func_346(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_347(iVar0, iParam2, 13) && !__LIB_3__::func_347(iVar0, iParam2, 14)) && !__LIB_3__::func_347(iVar0, iParam2, 15)) && !__LIB_3__::func_347(iVar0, iParam2, 16)) && !__LIB_3__::func_347(iVar0, iParam2, 71)) && !__LIB_3__::func_347(iVar0, iParam2, 72))
				{
					__LIB_3__::func_346(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_0__::func_676(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_0__::func_660(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_0__::func_661(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_405(int iParam0, int iParam1, int iParam2)//Position - 0x569BF
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
				if (func_301(iParam0, iParam1, iVar0))
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
				if (func_301(iParam0, iParam1, iVar1))
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

void func_408(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x56B3E
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
		if (Global_78127 != __LIB_0__::getGlobal_1574918() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_0__::func_538(Global_2883588, 2, 1, 1, -1);
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
							__LIB_0__::func_538(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_408(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_408(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_408(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__::func_369(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_413(iVar6, iVar7, Global_78127, 1, 0);
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
							func_408(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_408(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_408(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_408(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_408(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_408(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_408(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_450(int iParam0)//Position - 0x6F892
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_405(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_205(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_405(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_205(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_453(int iParam0, int iParam1, int iParam2)//Position - 0x6FC04
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_251(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_455(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FCCB
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_251(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_457(int iParam0, int iParam1, int iParam2)//Position - 0x6FF8B
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
				if (func_251(iParam0, iParam1, iVar0))
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
				if (func_251(iParam0, iParam1, iVar1))
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

int func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x7002D
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
										func_458(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_458(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_457(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_455(iParam0, iVar10, &iVar4, 1))
							{
								func_458(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_458(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_458(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_458(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_458(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_458(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_458(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_458(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_458(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_458(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_455(iParam0, iVar10, &iVar4, 0))
		{
			func_458(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_453(iParam0, iVar10, &iVar4))
		{
			func_458(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_489(int iParam0)//Position - 0x73647
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_13__::func_802(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_275(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_457(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_490(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_457(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_457(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_490(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_490(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_457(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_275(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_490(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x738A4
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_493(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_493(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x73A5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_0__::func_459(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_493(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_493(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_950(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__::func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_493(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_493(iParam0, 14, iVar5, 1, 0);
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
								func_493(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_493(iParam0, 14, 17, 1, 0);
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

void func_497(var uParam0)//Position - 0x74046
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_37__::func_193(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_502()//Position - 0x740DB
{
	int iVar0;
	if (__LIB_14__::func_466() == 0)
	{
		__LIB_0__::func_621(&(Local_298[1 /*25*/].f_13));
		__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
		__LIB_13__::func_808(&iLocal_1418);
	}
	else if (__LIB_14__::func_466() == 2)
	{
		__LIB_0__::func_621(&(Local_298[0 /*25*/].f_13));
		__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
		__LIB_13__::func_808(&iLocal_1418);
	}
	if (iLocal_2031 > 1)
	{
		func_664();
		func_662();
		func_661();
		func_658();
		func_656();
		if (iLocal_2043)
		{
			func_647();
		}
		if (iLocal_2037)
		{
			func_646();
		}
	}
	__LIB_0__::func_631(Local_298[46 /*25*/], &(Local_298[46 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[47 /*25*/], &(Local_298[47 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[48 /*25*/], &(Local_298[48 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[49 /*25*/], &(Local_298[49 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[50 /*25*/], &(Local_298[50 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[55 /*25*/], &(Local_298[55 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	__LIB_0__::func_631(Local_298[56 /*25*/], &(Local_298[56 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	if (bLocal_1322)
	{
		func_644();
	}
	if (PLAYER::PLAYER_PED_ID() == Local_298[0 /*25*/])
	{
		__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
	}
	if (PLAYER::PLAYER_PED_ID() == Local_298[1 /*25*/])
	{
		__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
	}
	switch (iLocal_2031)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, joaat("dominator"));
			__LIB_16__::func_852(&uLocal_304, joaat("carbonizzare"));
			__LIB_16__::func_859(&uLocal_304, cLocal_57);
			__LIB_16__::func_859(&uLocal_304, cLocal_58);
			__LIB_16__::func_853(&uLocal_304, 1, &Local_77);
			__LIB_16__::func_853(&uLocal_304, 2, &Local_77);
			func_639();
			STREAMING::REQUEST_MODEL(joaat("dominator"));
			AUDIO::TRIGGER_MUSIC_EVENT("MIC3_ESCAPE");
			iLocal_2037 = 0;
			iLocal_2038 = 0;
			iLocal_2040 = 0;
			iLocal_1384 = 0;
			iLocal_2043 = 1;
			iLocal_2030 = 0;
			iLocal_2029 = 0;
			iLocal_2033 = 0;
			iLocal_2034 = 0;
			sLocal_2044 = "M3_04";
			PED::DELETE_PED(&(Local_298[54 /*25*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[52 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_299[4 /*7*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[2 /*7*/]));
			__LIB_1__::func_12(&iLocal_2051);
			__LIB_37__::func_191(&(Local_303[14 /*8*/]), 0, 0, 1);
			iLocal_2031 = 1;
			break;
		case 1:
			if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(joaat("dominator"))) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &Local_77)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, &Local_77)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_58)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_57))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_ESCAPE_IN_CAR"))
				{
					AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
				}
				__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
				__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
				if (__LIB_0__::func_715(Local_298[54 /*25*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[54 /*25*/]));
				}
				if (__LIB_0__::func_715(Local_299[4 /*7*/]))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[4 /*7*/]));
				}
				if (__LIB_14__::func_466() == 0 && Global_100441.f_12[1] == 0)
				{
					iLocal_2037 = 1;
				}
				uLocal_1381 = uLocal_1381;
				uLocal_1382 = uLocal_1382;
				if (__LIB_0__::func_715(func_28()))
				{
					__LIB_0__::func_222(&uLocal_95, 0, func_28(), "MICHAEL", 0, 1);
				}
				if (__LIB_0__::func_715(func_29()))
				{
					__LIB_0__::func_222(&uLocal_95, 2, func_29(), "TREVOR", 0, 1);
				}
				func_636();
				__LIB_0__::func_424(1);
				__LIB_43__::func_516(7, "VEHICLE ESCAPE", 1, 0, 0, 1);
				iLocal_2032 = 0;
				__LIB_37__::func_193(&(Local_303[1 /*8*/]));
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
				iLocal_2031 = 2;
			}
			break;
		case 2:
			if (!iLocal_2039)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2315.252f, 277.0216f, 168.5901f) > 40000f)
				{
					__LIB_16__::func_912(&uLocal_304, joaat("carbonizzare"));
					__LIB_16__::func_912(&uLocal_304, joaat("dominator"));
					__LIB_16__::func_912(&uLocal_304, joaat("vacca"));
					__LIB_16__::func_912(&uLocal_304, joaat("IG_DaveNorton"));
					__LIB_16__::func_912(&uLocal_304, iLocal_66);
					__LIB_16__::func_912(&uLocal_304, iLocal_65);
					__LIB_16__::func_912(&uLocal_304, iLocal_64);
					__LIB_16__::func_912(&uLocal_304, iLocal_70);
					__LIB_16__::func_912(&uLocal_304, iLocal_71);
					__LIB_16__::func_912(&uLocal_304, iLocal_72);
					__LIB_16__::func_912(&uLocal_304, joaat("p_cs_newspaper_s"));
					__LIB_16__::func_905(&uLocal_304, cLocal_60);
					__LIB_31__::func_964(&uLocal_304, 50, &Local_77);
					__LIB_31__::func_964(&uLocal_304, 4, &Local_77);
					__LIB_31__::func_964(&uLocal_304, 12, &Local_77);
					__LIB_31__::func_964(&uLocal_304, 7, &Local_77);
					__LIB_31__::func_964(&uLocal_304, 1, &Local_77);
					__LIB_17__::func_470(&uLocal_304, &cLocal_80);
					OBJECT::DELETE_OBJECT(&(Local_300[3 /*2*/]));
					PED::DELETE_PED(&(Local_298[46 /*25*/]));
					PED::DELETE_PED(&(Local_298[47 /*25*/]));
					PED::DELETE_PED(&(Local_298[48 /*25*/]));
					PED::DELETE_PED(&(Local_298[49 /*25*/]));
					PED::DELETE_PED(&(Local_298[50 /*25*/]));
					PED::DELETE_PED(&(Local_298[55 /*25*/]));
					PED::DELETE_PED(&(Local_298[56 /*25*/]));
					func_26(&Local_1446, 1);
					func_26(&Local_1447, 1);
					func_26(&Local_1448, 1);
					func_26(&Local_1449, 1);
					func_26(&Local_1450, 1);
					func_26(&Local_1451, 1);
					func_26(&Local_1452, 1);
					func_24(&iLocal_1455, 1);
					func_26(&Local_1453, 1);
					func_26(&Local_1454, 1);
					func_26(&Local_1480, 1);
					func_26(&iLocal_1481, 1);
					func_26(&Local_1532, 1);
					func_26(&Local_1533, 1);
					func_26(&Local_1534, 1);
					func_26(&iLocal_1535, 1);
					func_26(&Local_1561, 1);
					func_26(&Local_1562, 1);
					func_26(&Local_1563, 1);
					func_26(&Local_1564, 1);
					func_26(&Local_1565, 1);
					func_26(&Local_1566, 1);
					func_26(&Local_1567, 1);
					func_26(&Local_1568, 1);
					func_26(&iLocal_1569, 1);
					func_26(&Local_1670, 1);
					iVar0 = 7;
					while (iVar0 <= 50)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]))
						{
							PED::DELETE_PED(&(Local_298[iVar0 /*25*/]));
						}
						iVar0++;
					}
					iVar0 = 55;
					while (iVar0 <= 56)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]))
						{
							PED::DELETE_PED(&(Local_298[iVar0 /*25*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (iLocal_1791 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1791[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_1791[iVar0]));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= (17 - 1))
					{
						if ((((ENTITY::DOES_ENTITY_EXIST(Local_299[iVar0 /*7*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[iVar0 /*7*/], false)) && !iVar0 == 13) && !iVar0 == 15) && !iVar0 == 3)
						{
							if (!PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_299[iVar0 /*7*/])
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[iVar0 /*7*/]));
							}
						}
						iVar0++;
					}
					iLocal_2039 = 1;
				}
			}
			if (iLocal_2040)
			{
				if ((func_533(&iLocal_263, Local_88, Local_2045, Local_2045.f_3, Local_2045.f_6, 1, sLocal_2044, 1, 1, -1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1442.7943f, -381.58228f, 37.320213f, -1470.9299f, -363.552f, 42.366222f, 41f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1436.6042f, -387.49313f, 34.62058f, -1444.6653f, -376.45526f, 40.701355f, 8.75f, false, true, 0))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
						AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
						if (__LIB_0__::func_715(func_28()))
						{
							if (PED::IS_PED_USING_ACTION_MODE(func_28()))
							{
								PED::SET_PED_USING_ACTION_MODE(func_28(), false, -1, 0);
							}
						}
						if (__LIB_0__::func_715(func_29()))
						{
							if (PED::IS_PED_USING_ACTION_MODE(func_29()))
							{
								PED::SET_PED_USING_ACTION_MODE(func_29(), false, -1, 0);
							}
						}
						if (func_519("M3_EXT_LI"))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_2050 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
								iLocal_2031 = 4;
							}
							else
							{
								iLocal_2031 = 6;
							}
						}
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				if (iLocal_2038)
				{
					if (!__LIB_0__::func_75())
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						__LIB_0__::func_382("M3_05", 7500, 1);
						sLocal_2044 = "M3_04A";
						__LIB_42__::func_787(&iLocal_263, 0);
						iLocal_2040 = 0;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_715(iLocal_2050))
			{
				if (__LIB_0__::func_213(iLocal_2050, 2f, 1, 1056964608, 0, 1, 0))
				{
					iLocal_2031 = 5;
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_2031 = 6;
			}
			break;
		case 6:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_0__::func_715(Local_298[1 /*25*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_298[1 /*25*/], false);
				}
				if (__LIB_0__::func_715(Local_298[0 /*25*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_298[0 /*25*/], false);
				}
				if (__LIB_0__::func_715(Local_298[53 /*25*/]))
				{
					PED::DELETE_PED(&(Local_298[53 /*25*/]));
				}
				if (__LIB_0__::func_715(Local_299[3 /*7*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_299[3 /*7*/]));
				}
				OBJECT::DELETE_OBJECT(&(Local_300[4 /*2*/]));
				__LIB_0__::func_377(0, -1);
				iLocal_2031 = 3;
				func_49(9);
			}
			break;
		case 3:
			break;
	}
	if (iLocal_2040)
	{
		if (__LIB_17__::func_339(&iLocal_2051, 10f))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
		}
	}
}

int func_519(char[4] cParam0)//Position - 0x74FA5
{
	if (__LIB_16__::func_855())
	{
		if (__LIB_15__::func_872(&uLocal_95, &cLocal_55, cParam0, 8, 0, 0, 0))
		{
			iLocal_260 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

bool func_533(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, char* sParam6, bool bParam7, bool bParam8, int iParam9)//Position - 0x756A6
{
	return func_534(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 1, 0, 0, 0, 0, sParam6, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam7, __LIB_0__::func_591(), 1, 0, bParam8, iParam9, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

int func_534(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, var uParam24, var uParam25, var uParam26, bool bParam27, float fParam28)//Position - 0x756FD
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	__LIB_0__::func_590(iParam0);
	__LIB_0__::func_589(iParam0);
	__LIB_0__::func_496();
	if (__LIB_17__::func_196(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, uParam24, uParam25, uParam26, iParam6, bParam18))
	{
		__LIB_0__::func_576(sParam12);
		__LIB_0__::func_576(sParam13);
		__LIB_0__::func_576(sParam14);
		__LIB_0__::func_576(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (__LIB_16__::func_320(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				__LIB_0__::func_576(sParam16);
				__LIB_0__::func_576(sParam19);
				__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						__LIB_0__::func_576(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = __LIB_0__::func_488(Var3, 0);
						if (!iParam23 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					else if (!__LIB_0__::func_490(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam27)
						{
							__LIB_0__::func_571(iParam0->f_5, iParam0);
						}
					}
					if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							__LIB_0__::func_572(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param3, Param4, fParam28, false, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], __LIB_0__::func_495()) || !__LIB_13__::func_742(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (__LIB_13__::func_754(iParam0))
							{
								__LIB_0__::func_576(sParam11);
								__LIB_0__::func_576(sParam16);
								__LIB_0__::func_576(sParam12);
								__LIB_0__::func_576(sParam13);
								__LIB_0__::func_576(sParam14);
								__LIB_0__::func_576(sParam15);
								__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
								__LIB_0__::func_576("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								__LIB_0__::func_576(sParam19);
								__LIB_40__::func_497(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					__LIB_0__::func_576(sParam16);
					__LIB_0__::func_576(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						__LIB_0__::func_576(sParam11);
					}
					if ((!__LIB_13__::func_755(iParam0, 1) && !__LIB_0__::func_573(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							__LIB_0__::func_572(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!__LIB_13__::func_755(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								__LIB_0__::func_640(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								__LIB_0__::func_576(sParam11);
							}
							*iParam0 = __LIB_0__::func_639(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_571(*iParam0, iParam0);
							}
						}
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										__LIB_0__::func_572(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										__LIB_0__::func_640(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					__LIB_0__::func_576(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!__LIB_13__::func_755(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										__LIB_0__::func_640(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									__LIB_0__::func_572(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!__LIB_13__::func_755(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							__LIB_0__::func_572(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									__LIB_0__::func_572(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								__LIB_0__::func_572(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		__LIB_0__::func_576(sParam11);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576(sParam19);
		__LIB_0__::func_576(sParam16);
		__LIB_0__::func_576("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

void func_636()//Position - 0x7EB52
{
	if (__LIB_0__::func_715(iLocal_1415))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_1415, iLocal_75, -1, true, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_1415, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, false, false, false, false, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1415, iLocal_290);
		PED::SET_PED_KEEP_TASK(iLocal_1415, true);
		ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_1415, 200);
		ENTITY::SET_ENTITY_HEALTH(iLocal_1415, 200, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_1415, 174, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1415, 67, true);
		__LIB_13__::func_808(&iLocal_1417);
		func_176(&iLocal_1417, iLocal_1415, 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_1415, "MI_3_DAVE_GROUP", 0f);
		AUDIO::STOP_PED_SPEAKING(iLocal_1415, true);
		__LIB_0__::func_222(&uLocal_95, 4, iLocal_1415, "Dave", 0, 1);
	}
}

void func_639()//Position - 0x7EC96
{
	Local_2045 = { __LIB_37__::func_928(-1473.4396f, -397.26462f, 37.053715f, -1465.1453f, -389.77548f, 40.561657f, 8.1875f) };
}

void func_644()//Position - 0x7EF58
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2195.6157f, 225.79752f, 182.79527f, -2192.233f, 218.54659f, 191.02025f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2193.1597f, 223.6073f, 183.59576f, -2191.268f, 218.97624f, 188.4952f, 4.5f, false, true, 0))
	{
		FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_1786))
	{
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			iLocal_1786 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_mich3_heli_fire", -2193.47f, 220.48f, 183.6f, 0f, 0f, 0f, 1f, false, false, false, false);
		}
	}
}

void func_646()//Position - 0x7F1FF
{
	if (__LIB_0__::func_715(func_29()))
	{
		switch (iLocal_2029)
		{
			case 0:
				if (__LIB_0__::func_715(Local_299[16 /*7*/]))
				{
					TASK::TASK_ENTER_VEHICLE(func_29(), Local_299[16 /*7*/], 20000, -1, 2f, 1, 0);
					iLocal_2029 = 1;
				}
				break;
			case 1:
				if (__LIB_0__::func_715(Local_299[16 /*7*/]))
				{
					if (PED::IS_PED_IN_ANY_HELI(func_29()))
					{
						TASK::TASK_HELI_MISSION(func_29(), Local_299[16 /*7*/], 0, 0, 111.96901f, -1646.8835f, 78.14513f, 4, 50f, 5f, -1f, 100, 30, -1f, 0);
						iLocal_2029 = 2;
					}
				}
				break;
			case 2:
				break;
		}
	}
}

void func_647()//Position - 0x7F2B2
{
	if (__LIB_0__::func_715(iLocal_1416))
	{
		switch (iLocal_52)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_299[15 /*7*/]))
				{
					Local_299[15 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2346.88f, 279.8263f, 168.7561f, 114.33f, true, true, false);
					if (__LIB_0__::func_715(Local_299[15 /*7*/]))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_299[15 /*7*/], true, true, true, true, true, false, false, false);
						if (Global_100441.f_12[1] == 1)
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_299[15 /*7*/], false);
						}
					}
				}
				iLocal_52 = 1;
				break;
			case 1:
				func_654();
				iLocal_52 = 2;
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1416))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1416) >= 33)
					{
						if (__LIB_0__::func_715(Local_298[50 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_1416, Local_298[50 /*25*/], false, false);
						}
						iLocal_52 = 3;
					}
				}
				break;
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1416))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1416, 2f, false);
					func_653(&iLocal_1416, &iLocal_1440, 1);
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1416) >= 53 || func_652())
					{
						TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_1416);
						iLocal_52 = 4;
					}
				}
				break;
			case 4:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1416))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1416, 3f, false);
					if (__LIB_0__::func_715(Local_299[15 /*7*/]) && __LIB_0__::func_715(iLocal_1416))
					{
						if (__LIB_0__::func_76(iLocal_1416, Local_299[15 /*7*/], 1) <= 15f)
						{
							TASK::CLEAR_PED_TASKS(iLocal_1416);
							TASK::TASK_ENTER_VEHICLE(iLocal_1416, Local_299[15 /*7*/], 20000, -1, 2f, 1, 0);
							iLocal_52 = 5;
						}
					}
				}
				break;
			case 5:
				if (__LIB_0__::func_715(Local_299[15 /*7*/]) && __LIB_0__::func_715(iLocal_1416))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1416, Local_299[15 /*7*/], false))
					{
						__LIB_1__::func_31(&iLocal_1803);
						iLocal_52 = 6;
					}
				}
				break;
			case 6:
				if ((__LIB_0__::func_715(Local_299[15 /*7*/]) && __LIB_0__::func_715(iLocal_1416)) && __LIB_2__::func_572(&iLocal_1803) >= 4f)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[15 /*7*/], 2, &Local_77, true);
					__LIB_31__::func_964(&uLocal_304, 2, &Local_77);
					VEHICLE::SET_PLAYBACK_SPEED(Local_299[15 /*7*/], 1.15f);
					iLocal_52 = 7;
				}
				break;
			case 7:
				if (__LIB_0__::func_715(iLocal_1416))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1416, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) > 1)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[15 /*7*/]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_299[15 /*7*/]) > 16000f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[15 /*7*/]);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_1416, Local_299[15 /*7*/], -1809.1891f, 72.2607f, 70.6699f, 120f, 786468, 2f);
							}
						}
					}
					else if (__LIB_0__::func_724(iLocal_1416, -1809.1891f, 72.2607f, 70.6699f, 1) <= 15f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_1416);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_1416, Local_299[15 /*7*/], PLAYER::PLAYER_PED_ID(), 8, 120f, 786468, -1f, -1f, true);
						iLocal_52 = 8;
					}
				}
				break;
			case 8:
				if (__LIB_0__::func_715(Local_299[15 /*7*/]) && __LIB_0__::func_715(iLocal_1416))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_1416, true)) > 10000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1416))
					{
						PED::DELETE_PED(&iLocal_1416);
						VEHICLE::DELETE_VEHICLE(&(Local_299[15 /*7*/]));
						iLocal_52 = 9;
					}
				}
				break;
			case 9:
				break;
			}
	}
}

int func_652()//Position - 0x7F6F0
{
	if ((((ENTITY::IS_ENTITY_DEAD(Local_298[46 /*25*/], false) && ENTITY::IS_ENTITY_DEAD(Local_298[47 /*25*/], false)) && ENTITY::IS_ENTITY_DEAD(Local_298[48 /*25*/], false)) && ENTITY::IS_ENTITY_DEAD(Local_298[49 /*25*/], false)) && ENTITY::IS_ENTITY_DEAD(Local_298[50 /*25*/], false))
	{
		return 1;
	}
	return 0;
}

void func_653(int iParam0, int* iParam1, bool bParam2)//Position - 0x7F750
{
	int iVar0;
	if (__LIB_0__::func_715(*iParam0))
	{
		if (__LIB_1__::func_13(iParam1))
		{
			if (__LIB_2__::func_572(iParam1) >= 2f)
			{
				if (bParam2)
				{
					iVar0 = 50;
					while (iVar0 >= 46)
					{
						if (__LIB_0__::func_715(Local_298[iVar0 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam0, Local_298[iVar0 /*25*/], false, false);
							__LIB_1__::func_31(iParam1);
						}
						iVar0 = (iVar0 + -1);
					}
				}
				else
				{
					iVar0 = 46;
					while (iVar0 <= 50)
					{
						if (__LIB_0__::func_715(Local_298[iVar0 /*25*/]))
						{
							TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(*iParam0, Local_298[iVar0 /*25*/], false, false);
							__LIB_1__::func_31(iParam1);
						}
						iVar0++;
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_31(iParam1);
		}
	}
}

void func_654()//Position - 0x7F7F7
{
	if (__LIB_0__::func_715(iLocal_1416))
	{
		if (__LIB_37__::func_929(&Local_1685, iLocal_1416))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1416);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2222.9443f, 197.5196f, 193.6117f, 3f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1416, iLocal_261);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_PAUSE(0, 1000);
			if (!__LIB_37__::func_929(&Local_1686, iLocal_1416))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2278.469f, 300.54025f, 183.61159f, 3f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2275.2188f, 276.01495f, 173.60211f, 3f, -1, 0.25f, 0, 40000f);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, cLocal_58, 0, 8, -1);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1416, iLocal_261);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
		}
	}
}

void func_656()//Position - 0x7F923
{
	int iVar0;
	if (!iLocal_1718)
	{
		if (func_657(&iVar0))
		{
			if (__LIB_0__::func_715(iVar0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				PED::REMOVE_PED_DEFENSIVE_AREA(iVar0, false);
				PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(iVar0, PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 10f, false, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_1718 = 1;
			}
		}
	}
}

int func_657(var uParam0)//Position - 0x7F98A
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_715(Local_298[46 /*25*/]))
	{
		*uParam0 = Local_298[46 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[47 /*25*/]))
	{
		*uParam0 = Local_298[47 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[48 /*25*/]))
	{
		*uParam0 = Local_298[48 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[49 /*25*/]))
	{
		*uParam0 = Local_298[49 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[50 /*25*/]))
	{
		*uParam0 = Local_298[50 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[55 /*25*/]))
	{
		*uParam0 = Local_298[55 /*25*/];
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_298[56 /*25*/]))
	{
		*uParam0 = Local_298[56 /*25*/];
		iVar0++;
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	return 0;
}

void func_658()//Position - 0x7FA72
{
	func_660();
	switch (iLocal_2033)
	{
		case 0:
			if (__LIB_14__::func_466() == 2)
			{
				__LIB_16__::func_857(&uLocal_304, cLocal_2035);
				__LIB_16__::func_852(&uLocal_304, joaat("prop_cs_ciggy_01b"));
			}
			else if (__LIB_14__::func_466() == 0)
			{
				__LIB_16__::func_857(&uLocal_304, cLocal_2036);
			}
			iLocal_2033 = 1;
			break;
		case 1:
			if (__LIB_14__::func_466() == 2)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_2035) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_ciggy_01b")))
				{
					iLocal_2033 = 2;
				}
			}
			else if (__LIB_14__::func_466() == 0)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED(cLocal_2036))
				{
					iLocal_2033 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_88, 1) <= 150f)
			{
				if (__LIB_14__::func_466() == 2)
				{
					PED::DELETE_PED(&(Local_298[0 /*25*/]));
				}
				else if (__LIB_14__::func_466() == 0)
				{
					PED::DELETE_PED(&(Local_298[1 /*25*/]));
				}
				__LIB_31__::func_964(&uLocal_304, 2, &Local_77);
				iLocal_2033 = 3;
			}
			break;
		case 3:
			if (__LIB_14__::func_466() == 2)
			{
				if (func_172(&(Local_298[0 /*25*/]), 0, -1459.4634f, -380.24106f, 37.78629f, 315.38f, joaat("WEAPON_UNARMED"), 20, 0, 1, 0, 60))
				{
					if (__LIB_0__::func_715(Local_298[0 /*25*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_298[0 /*25*/], true);
						iLocal_1323[2] = PLAYER::PLAYER_PED_ID();
						iLocal_1323[0] = Local_298[0 /*25*/];
						Local_300[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_cs_ciggy_01b"), PED::GET_PED_BONE_COORDS(func_28(), 28422, 0f, 0f, 0f), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_300[4 /*2*/], func_28(), PED::GET_PED_BONE_INDEX(func_28(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
						__LIB_16__::func_912(&uLocal_304, joaat("prop_cs_ciggy_01b"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298[0 /*25*/], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, cLocal_2035, "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_28(), iLocal_261);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						iLocal_2033 = 4;
					}
				}
			}
			else if (__LIB_14__::func_466() == 0)
			{
				if (func_172(&(Local_298[1 /*25*/]), 2, -1460.9568f, -380.33527f, 37.83759f, 220f, joaat("WEAPON_UNARMED"), 20, 0, 1, 0, 60))
				{
					if (__LIB_0__::func_715(Local_298[1 /*25*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_298[1 /*25*/], true);
						iLocal_1323[0] = PLAYER::PLAYER_PED_ID();
						iLocal_1323[2] = Local_298[1 /*25*/];
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298[1 /*25*/], true);
						TASK::TASK_PLAY_ANIM(Local_298[1 /*25*/], cLocal_2036, "_leadin_trevor", 8f, -8f, -1, 1, 0f, false, false, false);
						TASK::TASK_LOOK_AT_ENTITY(Local_298[1 /*25*/], iLocal_1323[0], -1, 2048, 4);
						iLocal_2033 = 4;
					}
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_660()//Position - 0x7FE8D
{
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_2034)
		{
			case 0:
				iLocal_2034 = 1;
				break;
			case 1:
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_88, 1) <= 100f)
				{
					if (__LIB_14__::func_466() == 0)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131069, 8);
					}
					else if (__LIB_14__::func_466() == 2)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131070, 8);
					}
					iLocal_2034 = 2;
				}
				break;
			case 2:
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_88, 1) >= 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_2034 = 1;
				}
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					iLocal_2034 = 3;
				}
				break;
			case 3:
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_88, 1) >= 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_2034 = 1;
				}
				break;
			}
	}
}

void func_661()//Position - 0x7FF62
{
	int iVar0;
	switch (iLocal_2030)
	{
		case 0:
			iLocal_2030 = 1;
			break;
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (__LIB_0__::func_715(iVar0))
				{
					__LIB_0__::func_377(iVar0, -1);
				}
				iLocal_2030 = 2;
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_377(0, -1);
				iLocal_2030 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_662()//Position - 0x7FFD7
{
	if (__LIB_0__::func_715(iLocal_1415))
	{
		switch (iLocal_51)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_299[13 /*7*/]))
				{
					Local_299[13 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2336.495f, 271.24817f, 168.46722f, 203.97f, true, true, false);
					if (__LIB_0__::func_715(Local_299[13 /*7*/]))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_299[13 /*7*/], true, true, true, true, true, false, false, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_299[13 /*7*/], false);
					}
				}
				iLocal_51 = 1;
				break;
			case 1:
				func_663();
				iLocal_51 = 2;
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_1415))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1415) >= 29)
					{
						TASK::WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(iLocal_1415, Local_298[46 /*25*/], false, false);
						iLocal_51 = 3;
					}
				}
				break;
			case 3:
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1415, 2f, false);
				func_653(&iLocal_1415, &iLocal_1437, 0);
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_1415) >= 53 || func_652())
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_1415);
					iLocal_51 = 4;
				}
				break;
			case 4:
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_1415, 3f, false);
				if (__LIB_0__::func_715(Local_299[13 /*7*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					if (__LIB_0__::func_76(iLocal_1415, Local_299[13 /*7*/], 1) <= 7f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_1415);
						iLocal_1412 = 1;
						TASK::TASK_ENTER_VEHICLE(iLocal_1415, Local_299[13 /*7*/], 20000, -1, 2f, 1, 0);
						iLocal_51 = 5;
					}
				}
				break;
			case 5:
				if (__LIB_0__::func_715(Local_299[13 /*7*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_1415, Local_299[13 /*7*/], false))
					{
						__LIB_13__::func_808(&iLocal_1417);
						iLocal_51 = 6;
					}
				}
				break;
			case 6:
				if (__LIB_0__::func_715(Local_299[13 /*7*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[13 /*7*/], 1, &Local_77, true);
					__LIB_31__::func_964(&uLocal_304, 1, &Local_77);
					VEHICLE::SET_PLAYBACK_SPEED(Local_299[13 /*7*/], 1.15f);
					iLocal_51 = 7;
				}
				break;
			case 7:
				if (__LIB_0__::func_715(Local_299[13 /*7*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1415, joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) > 1)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[13 /*7*/]))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_299[13 /*7*/]) > 25000f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[13 /*7*/]);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iLocal_1415, Local_299[13 /*7*/], -1809.1891f, 72.2607f, 70.6699f, 120f, 786468, 2f);
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1415, -1809.1891f, 72.2607f, 70.6699f, 15f, 15f, 15f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_1415);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_1415, Local_299[13 /*7*/], PLAYER::PLAYER_PED_ID(), 8, 120f, 786468, -1f, -1f, true);
						iLocal_51 = 8;
					}
				}
				break;
			case 8:
				if (__LIB_0__::func_715(Local_299[13 /*7*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_1415, true)) > 10000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1415))
					{
						PED::DELETE_PED(&iLocal_1415);
						VEHICLE::DELETE_VEHICLE(&(Local_299[13 /*7*/]));
						iLocal_51 = 9;
					}
				}
				break;
			case 9:
				break;
			}
	}
}

void func_663()//Position - 0x80339
{
	if (__LIB_0__::func_715(iLocal_1415))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1415, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_1415, cLocal_57, 0, 8, -1);
	}
}

void func_664()//Position - 0x80360
{
	if ((iLocal_2038 && __LIB_0__::func_715(Local_299[3 /*7*/])) && __LIB_14__::func_466() == 0)
	{
		func_665();
	}
	if (iLocal_1412)
	{
		iLocal_1412 = 0;
		iLocal_2032 = 9;
	}
	switch (iLocal_2032)
	{
		case 0:
			if (func_519("M3_ESC1"))
			{
				iLocal_2040 = 1;
				iLocal_2032 = 20;
			}
			break;
		case 3:
			if (__LIB_14__::func_466() == 0)
			{
				if (func_519("M3_SEECHOP"))
				{
					iLocal_2038 = 1;
					__LIB_1__::func_31(&iLocal_1422);
					__LIB_1__::func_31(&iLocal_2047);
					iLocal_2032 = 4;
				}
			}
			else
			{
				iLocal_2038 = 1;
				iLocal_2032 = 20;
			}
			break;
		case 4:
			if (iLocal_2040)
			{
				iLocal_2032 = 20;
			}
			if (__LIB_2__::func_572(&iLocal_2047) >= 15f)
			{
				if (func_519("M3_TAIL"))
				{
					iLocal_2032 = 20;
				}
			}
			break;
		case 9:
			if (func_519("M3_GETINCAR"))
			{
				iLocal_2032 = 10;
			}
			break;
		case 10:
			if (func_519("M3_BYEDAVE"))
			{
				iLocal_2032 = 20;
			}
			break;
	}
}

void func_665()//Position - 0x80469
{
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		if ((__LIB_2__::func_572(&iLocal_1422) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_13__::func_755(&iLocal_263, 1))
		{
			if (func_666("M3_CHOPATT"))
			{
				__LIB_1__::func_31(&iLocal_1422);
			}
		}
	}
}

int func_666(char[4] cParam0)//Position - 0x804B7
{
	if (__LIB_16__::func_855())
	{
		if (__LIB_15__::func_872(&uLocal_95, &cLocal_55, cParam0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_667()//Position - 0x804DC
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (iLocal_2024 > 1)
	{
		func_734();
		func_647();
		func_656();
		func_662();
		func_731();
		if (!__LIB_37__::func_189(&(Local_303[10 /*8*/])))
		{
			__LIB_37__::func_191(&(Local_303[10 /*8*/]), 0, 0, 1);
			__LIB_37__::func_191(&(Local_303[11 /*8*/]), 5000, 0, 1);
		}
		else
		{
			__LIB_0__::func_631(Local_298[46 /*25*/], &(Local_298[46 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[47 /*25*/], &(Local_298[47 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[48 /*25*/], &(Local_298[48 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[49 /*25*/], &(Local_298[49 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[50 /*25*/], &(Local_298[50 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[55 /*25*/], &(Local_298[55 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
			__LIB_0__::func_631(Local_298[56 /*25*/], &(Local_298[56 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
		}
	}
	if (bLocal_1322)
	{
		func_644();
	}
	switch (iLocal_2024)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, iLocal_65);
			__LIB_16__::func_852(&uLocal_304, iLocal_66);
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, joaat("carbonizzare"));
			__LIB_16__::func_852(&uLocal_304, joaat("dominator"));
			__LIB_16__::func_853(&uLocal_304, 1, &Local_77);
			__LIB_16__::func_853(&uLocal_304, 2, &Local_77);
			__LIB_16__::func_859(&uLocal_304, cLocal_57);
			__LIB_16__::func_859(&uLocal_304, cLocal_58);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_299[10 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				Local_299[10 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2319.7976f, 302.1291f, 168.4667f, 115.6683f, true, true, false);
			}
			func_729();
			iLocal_51 = 0;
			iLocal_1412 = 0;
			iLocal_2024 = 1;
			break;
		case 1:
			if ((((((((STREAMING::HAS_MODEL_LOADED(iLocal_65) && STREAMING::HAS_MODEL_LOADED(iLocal_66)) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && STREAMING::HAS_MODEL_LOADED(joaat("dominator"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &Local_77)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, &Local_77)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_58)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_57))
			{
				__LIB_43__::func_516(6, "ESCAPE MUSEUM", 0, 0, 0, 1);
				__LIB_37__::func_191(&(Local_303[12 /*8*/]), 0, 0, 1);
				iLocal_2025 = 0;
				__LIB_0__::func_424(1);
				func_13(1);
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
				AUDIO::STOP_AUDIO_SCENE("MI_3_KILL_ENEMIES_IN_COURTYARD");
				AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_IN_CAR");
				iLocal_2024 = 2;
			}
			break;
		case 2:
			if (iLocal_1787 == 0 || iLocal_1787 == 1)
			{
				if (__LIB_14__::func_466() == 2 && Global_100441.f_12[1] == 0)
				{
					iLocal_1416 = func_28();
					func_162(1, 1, 1, 0, 0, 0);
					__LIB_1__::func_31(&iLocal_1434);
					iLocal_2024 = 3;
				}
				else
				{
					if (__LIB_14__::func_466() == 2)
					{
						iLocal_1416 = func_28();
					}
					else if (__LIB_14__::func_466() == 0)
					{
						iLocal_1416 = func_29();
					}
					iLocal_2024 = 5;
				}
			}
			else
			{
				func_710();
			}
			break;
		case 3:
			if (__LIB_1__::func_13(&iLocal_1434))
			{
				if (__LIB_2__::func_572(&iLocal_1434) >= 1f)
				{
					func_162(0, 0, 0, 0, 0, 0);
					__LIB_16__::func_896(&iLocal_1323, 0);
					Local_1367.f_15 = 1;
					Local_1367.f_12 = iLocal_1323[iLocal_1323.f_7];
					Local_1367.f_20 = 1;
					iLocal_2024 = 4;
				}
			}
			break;
		case 4:
			if (!__LIB_38__::func_766(&Local_1367, 0, 1148829696, 1148829696))
			{
				if (__LIB_37__::func_936(&iLocal_1323, 1, 0, 0))
				{
					func_26(&Local_1480, 1);
					func_26(&Local_1670, 1);
					func_162(1, 1, 1, 0, 0, 0);
					__LIB_13__::func_808(&iLocal_1418);
					__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
					__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
					if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
					}
					if (__LIB_0__::func_715(func_29()))
					{
						ENTITY::SET_ENTITY_PROOFS(func_29(), true, true, true, true, true, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(func_29(), true);
					}
					iLocal_2024 = 5;
				}
			}
			break;
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (func_669() || !__LIB_38__::func_175(&Local_2028))
			{
				if (__LIB_14__::func_466() == 2)
				{
					Global_100441.f_12[0] = 1;
				}
				else if (__LIB_14__::func_466() == 0)
				{
					Global_100441.f_12[0] = 0;
				}
				if (__LIB_37__::func_929(&Local_1674, func_29()) || __LIB_0__::func_76(func_29(), Local_299[16 /*7*/], 1) <= 30f)
				{
					Global_100441.f_12[1] = 0;
				}
				else
				{
					Global_100441.f_12[1] = 1;
				}
				iLocal_2024 = 7;
			}
			break;
		case 7:
			PED::DELETE_PED(&(Local_298[54 /*25*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[52 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_299[4 /*7*/]));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[2 /*7*/]));
			func_26(&Local_1670, 0);
			func_26(&Local_1564, 0);
			func_26(&Local_1562, 0);
			func_26(&Local_1561, 0);
			func_26(&Local_1563, 0);
			iLocal_2024 = 6;
			func_49(8);
			break;
		case 6:
			break;
	}
}

int func_669()//Position - 0x80A6D
{
	if (func_533(&iLocal_263, Local_87, Local_2026, Local_2026.f_3, Local_2026.f_6, 1, "M3_OBJPLOT", 1, 1, -1))
	{
		return 1;
	}
	return 0;
}

void func_710()//Position - 0x821FF
{
	PED::SET_PED_RESET_FLAG(func_28(), 283, true);
	PED::SET_PED_RESET_FLAG(func_29(), 283, true);
	switch (iLocal_1787)
	{
		case 0:
			__LIB_16__::func_880(&iLocal_1323, 1, 1);
			__LIB_16__::func_880(&iLocal_1323, 0, 0);
			__LIB_16__::func_880(&iLocal_1323, 2, 0);
			iLocal_1787 = 1;
			break;
		case 1:
			if (__LIB_37__::func_935(&iLocal_1323, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 1))
			{
				if (__LIB_17__::func_82(&iLocal_1323, 0) || __LIB_17__::func_82(&iLocal_1323, 2))
				{
					Local_1367.f_12 = iLocal_1323[iLocal_1323.f_7];
					Local_1367.f_20 = 1;
					WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iLocal_1788, true);
					WEAPON::GET_CURRENT_PED_WEAPON(func_29(), &iLocal_1789, true);
					if (iLocal_1716)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_SNIPE"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MIC3_SNIPE");
							__LIB_17__::func_78(&iLocal_1323, 0, 0);
						}
					}
					iLocal_1787 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_38__::func_766(&Local_1367, 0, 1148829696, 1148829696))
			{
				if (Local_1367.f_18)
				{
					if (!Local_1367.f_19)
					{
						if (__LIB_37__::func_936(&iLocal_1323, 1, 1, 0))
						{
							__LIB_0__::func_497(437, 1, 0);
							if (iLocal_1716)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1756.f_3, 2f, 2f, 2f, false, true, 0))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1756.f_3, 5000, true, 0f, true, false, Local_1756.f_0, false);
								}
								if (iLocal_1315 == 5)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2209.8345f, 240.26515f, 183.35487f, -2228.9604f, 280.90323f, 186.60408f, 13f, false, true, 0))
									{
										func_723(&(Local_1532[2 /*25*/]), iLocal_65, -2235.6428f, 296.48892f, 183.60515f, 203f, "WKWAY_FIB2_3", iLocal_294, iLocal_75, 10, 0, 0, 0);
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_1532[2 /*25*/], false);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1532[2 /*25*/], -2235.6428f, 296.48892f, 183.60515f, 2f, false, false);
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[2 /*25*/], 100f, 0);
									}
								}
								iLocal_1716 = 0;
							}
							if (__LIB_14__::func_466() == 2)
							{
								if (iLocal_1315 == 5 || iLocal_1315 == 6)
								{
									if (__LIB_37__::func_929(&Local_1674, func_29()))
									{
										CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
									}
								}
							}
							__LIB_13__::func_808(&iLocal_1418);
							__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
							__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
							iLocal_1787 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_17__::func_97(&Local_1367, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
			}
			else
			{
				__LIB_17__::func_78(&iLocal_1323, 0, 0);
				__LIB_13__::func_808(&iLocal_1418);
				__LIB_13__::func_808(&(Local_298[0 /*25*/].f_8));
				__LIB_13__::func_808(&(Local_298[1 /*25*/].f_8));
				if (__LIB_0__::func_715(iLocal_1323[0]))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1323[0], true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1323[0], true, true, true, true, true, false, false, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1323[0], true);
				}
				if (__LIB_0__::func_715(iLocal_1323[2]))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1323[2], true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_1323[2], true, true, true, true, true, false, false, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1323[2], true);
				}
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				}
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == __LIB_12__::func_894(2))
				{
					Local_298[0 /*25*/] = iLocal_1323[0];
					Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
					iLocal_1416 = func_28();
					__LIB_0__::func_222(&uLocal_95, 0, Local_298[0 /*25*/], "MICHAEL", 0, 1);
					__LIB_0__::func_222(&uLocal_95, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(func_29(), iLocal_1789, true);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					switch (iLocal_1315)
					{
						case 5:
							__LIB_17__::func_494(&iLocal_1323, 0, 0);
							if (iLocal_1725)
							{
								func_720();
							}
							if (__LIB_37__::func_929(&Local_1677, func_28()))
							{
								func_719(func_28(), -2229.8247f, 278.22928f, 183.60408f, 0, 1077936128, 1);
								iLocal_53 = 2;
							}
							else if (__LIB_37__::func_929(&Local_1678, func_28()))
							{
								if (__LIB_0__::func_715(Local_1532[2 /*25*/]))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_1532[2 /*25*/], 0, 0);
								}
								if (func_718(&Local_1453) == 0)
								{
									iLocal_1724 = 1;
								}
								iLocal_53 = 3;
							}
							else if (__LIB_37__::func_929(&Local_1679, func_28()))
							{
								iLocal_53 = 5;
							}
							else if (iLocal_1411)
							{
								iLocal_53 = 6;
							}
							break;
						case 6:
							if (__LIB_0__::func_715(func_28()))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_28());
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), false);
								PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
								__LIB_39__::func_107(func_28(), Local_1696, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
							}
							break;
						case 7:
						case 8:
							iLocal_52 = 1;
							break;
						}
				}
				if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == __LIB_12__::func_894(0))
				{
					func_176(&iLocal_1418, iLocal_1323[2], 0);
					Local_298[1 /*25*/] = iLocal_1323[2];
					Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
					iLocal_1416 = func_29();
					__LIB_0__::func_222(&uLocal_95, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					__LIB_0__::func_222(&uLocal_95, 2, Local_298[1 /*25*/], "TREVOR", 0, 1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0f);
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iLocal_1788, true);
					switch (iLocal_1315)
					{
						case 5:
							if (iLocal_1725)
							{
								func_715();
							}
							if (__LIB_37__::func_929(&Local_1674, func_29()))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), false);
								__LIB_39__::func_107(func_29(), Local_1675, 0, 0);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_1323[2]);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_1323[2], 250f, 0);
							break;
						case 6:
							if (__LIB_0__::func_715(func_29()))
							{
								if (__LIB_37__::func_929(&Local_1674, func_29()))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_29(), false);
									__LIB_39__::func_107(func_29(), Local_1675, 0, 0);
									func_711();
								}
								else
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_29());
									PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_29(), false);
									PED::SET_PED_COMBAT_MOVEMENT(func_29(), 1);
									__LIB_39__::func_107(func_29(), Local_1696, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_29(), 250f, 0);
								}
							}
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, true);
							ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, true, true, false, false, false);
							break;
						case 7:
						case 8:
							iLocal_52 = 1;
							break;
						}
				}
				iLocal_1787 = 0;
			}
			break;
	}
}

void func_711()//Position - 0x82883
{
	TASK::CLEAR_PED_TASKS(func_29());
	func_714(1);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1781.f_3, 3f, -1, 0.25f, 0, 40000f);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1781.f_3, -1, true, 0.5f, false, true, Local_1781.f_0, true);
	func_712(func_29(), 1);
}

void func_712(int iParam0, bool bParam1)//Position - 0x828D3
{
	func_713();
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_261);
		if (bParam1)
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
		}
	}
}

void func_713()//Position - 0x82903
{
	if (iLocal_262)
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
		iLocal_262 = 0;
	}
}

void func_714(bool bParam0)//Position - 0x8291C
{
	if (bParam0)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
	}
	if (!iLocal_262)
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
		iLocal_262 = 1;
	}
}

void func_715()//Position - 0x82942
{
	if (__LIB_0__::func_715(Local_1453[0 /*25*/]))
	{
		PED::SET_PED_ACCURACY(Local_1453[0 /*25*/], 5);
		func_716(&(Local_1453[0 /*25*/]));
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_1453[0 /*25*/], false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1453[0 /*25*/], -2224.5325f, 302.57278f, 183.60303f, 5f, true, false);
	}
	if (__LIB_0__::func_715(Local_1453[1 /*25*/]))
	{
		PED::SET_PED_ACCURACY(Local_1453[1 /*25*/], 5);
		func_716(&(Local_1453[1 /*25*/]));
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_1453[1 /*25*/], false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1453[1 /*25*/], -2220.867f, 295.16733f, 183.60303f, 5f, true, false);
	}
}

void func_716(int* iParam0)//Position - 0x829DC
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 51, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 37, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, true);
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	}
}

int func_718(int iParam0)//Position - 0x82A4F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*25*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*iParam0)[iVar1 /*25*/], true) && !PED::IS_PED_INJURED((*iParam0)[iVar1 /*25*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_719(int iParam0, struct<3> Param1, bool bParam2, float fParam3, bool bParam4)//Position - 0x82AA4
{
	float fVar0;
	fVar0 = 2f;
	if (__LIB_0__::func_715(iParam0))
	{
		if (bParam4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fVar0, false, false);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 500f, 0);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			func_714(1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam3, 20000, 0.25f, 0, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
			func_712(iParam0, 1);
		}
	}
}

void func_720()//Position - 0x82B37
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_1453.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1453[iVar0 /*25*/]))
		{
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1453[iVar0 /*25*/], false);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_1453[iVar0 /*25*/], -2225.6848f, 303.01337f, 183.35303f, -2241.6562f, 295.69116f, 186.60515f, 3.5f, false, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1453[iVar0 /*25*/], 51, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1453[iVar0 /*25*/], 37, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1453[iVar0 /*25*/], 50, false);
		}
		iVar0++;
	}
}

void func_723(int* iParam0, int iParam1, struct<3> Param2, float fParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x82C08
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		func_22(&(iParam0->f_1));
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_8));
		}
	}
	*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
	iParam0->f_9 = 0;
	__LIB_16__::func_881(*iParam0, 430);
	if (iParam5 != iLocal_290)
	{
		__LIB_0__::func_609(*iParam0, 0);
	}
	if (iParam5 == iLocal_291 || iParam5 == iLocal_294)
	{
		PED::SET_PED_COMPONENT_VARIATION(*iParam0, 10, 0, 1, 0);
	}
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	func_724(iParam0, sParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

void func_724(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x82CAA
{
	int iVar0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		PED::SET_PED_NAME_DEBUG(*iParam0, sParam1);
	}
	if (*iParam0 != PLAYER::PLAYER_PED_ID())
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iParam2);
	}
	if (iParam3 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam3, -1, true, true);
	}
	if (iParam6 == 1)
	{
		if (((((iParam2 == iLocal_291 || iParam2 == iLocal_292) || iParam2 == iLocal_293) || iParam2 == iLocal_295) || iParam2 == iLocal_294) || iParam2 == iLocal_296)
		{
			func_176(&(iParam0->f_8), *iParam0, 1);
		}
		else
		{
			func_176(&(iParam0->f_8), *iParam0, 0);
		}
	}
	if (iParam7 != 0)
	{
		PED::SET_PED_PREFERRED_COVER_SET(*iParam0, iParam7);
	}
	iVar0 = PED::GET_PED_ARMOUR(*iParam0);
	if (iVar0 != iParam5)
	{
		PED::ADD_ARMOUR_TO_PED(*iParam0, (iParam5 - iVar0));
	}
	PED::SET_PED_MONEY(*iParam0, 0);
	PED::SET_PED_ACCURACY(*iParam0, iParam4);
	PED::SET_PED_KEEP_TASK(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 118, false);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_USING_ACTION_MODE(*iParam0, true, -1, "DEFAULT_ACTION");
}

void func_729()//Position - 0x82F70
{
	Local_2026 = { __LIB_37__::func_928(-2314.2407f, 296.67838f, 168.13005f, -2350.2302f, 280.64972f, 172.5462f, 50f) };
	Local_2028 = { __LIB_37__::func_928(-2183.5664f, 141.56006f, 202.2996f, -2322.5251f, 433.0201f, 81.8515f, 221.75f) };
}

void func_731()//Position - 0x83000
{
	func_732(&Local_1446, 1);
	func_732(&Local_1447, 1);
	func_732(&Local_1448, 1);
	func_732(&Local_1449, 1);
	func_732(&Local_1450, 1);
	func_732(&Local_1451, 1);
	func_732(&iLocal_1481, 1);
	func_732(&Local_1532, 1);
	func_732(&iLocal_1535, 1);
	func_732(&Local_1454, 1);
	func_732(&Local_1561, 1);
	func_732(&Local_1563, 1);
	func_732(&Local_1565, 1);
	func_732(&Local_1566, 1);
	func_732(&Local_1567, 1);
	func_732(&Local_1568, 1);
	func_732(&iLocal_1569, 1);
}

void func_732(int iParam0, bool bParam1)//Position - 0x83090
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_733(iParam0[iVar0 /*25*/], bParam1);
		iVar0++;
	}
}

void func_733(int* iParam0, bool bParam1)//Position - 0x830BA
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_0__::func_631(*iParam0, &(iParam0->f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				__LIB_13__::func_808(&(iParam0->f_8));
				*iParam0 = 0;
			}
		}
	}
}

void func_734()//Position - 0x83108
{
	if (iLocal_1412)
	{
		iLocal_1412 = 0;
		iLocal_2025 = 9;
	}
	switch (iLocal_2025)
	{
		case 0:
			if (func_519("M3_EMDVGBYE"))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
				iLocal_2025 = 1;
			}
			break;
		case 1:
			if (__LIB_16__::func_855())
			{
				__LIB_16__::func_901(&iLocal_263);
				iLocal_2025 = 2;
			}
			break;
		case 2:
			if (func_519("M3_FOLLOW1"))
			{
				iLocal_2025 = 3;
			}
			break;
		case 3:
			if (func_519("M3_FOLLOW2"))
			{
				iLocal_2025 = 20;
			}
			break;
		case 9:
			if (func_519("M3_GETINCAR"))
			{
				iLocal_2025 = 10;
			}
			break;
		case 10:
			if (func_519("M3_BYEDAVE"))
			{
				iLocal_2025 = 20;
			}
			break;
	}
}

void func_735()//Position - 0x831CD
{
	int iVar0;
	func_710();
	if (iLocal_1995 > 1)
	{
		func_766();
		if (__LIB_0__::func_715(iLocal_1415))
		{
			PED::SET_PED_RESET_FLAG(iLocal_1415, 64, true);
		}
		if (__LIB_1__::func_13(&iLocal_2009))
		{
			if (__LIB_2__::func_572(&iLocal_2009) >= 10f)
			{
				__LIB_17__::func_78(&iLocal_1323, 0, 0);
				__LIB_1__::func_12(&iLocal_2009);
			}
		}
		if (__LIB_14__::func_466() == 2)
		{
			if (__LIB_0__::func_715(func_28()))
			{
				PED::SET_PED_RESET_FLAG(func_28(), 64, true);
			}
			func_763();
			func_762();
			func_761();
		}
		else if (__LIB_14__::func_466() == 0)
		{
			if (__LIB_0__::func_715(func_29()))
			{
				PED::SET_PED_RESET_FLAG(func_29(), 64, true);
			}
			if (!iLocal_2006)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2274.3228f, 278.8213f, 183.3516f, -2268.358f, 265.35507f, 186.86798f, 9f, false, true, 0))
				{
					func_760();
					iLocal_2006 = 1;
				}
			}
		}
		func_731();
		func_732(&Local_1480, 0);
		func_732(&Local_1564, 0);
		func_732(&Local_1670, 0);
	}
	if (bLocal_1322)
	{
		func_644();
	}
	switch (iLocal_1995)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, iLocal_65);
			__LIB_16__::func_852(&uLocal_304, iLocal_66);
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, iLocal_68);
			iLocal_1996 = 0;
			iLocal_1994 = 0;
			iLocal_1993 = 0;
			iLocal_1997 = 0;
			iLocal_2008 = 0;
			iLocal_2007 = 0;
			iLocal_2005 = 0;
			iLocal_2006 = 0;
			iLocal_2002 = 0;
			iLocal_2000 = 0;
			iLocal_2001 = 0;
			iLocal_2004 = 0;
			iLocal_1717 = 0;
			bLocal_2003 = false;
			__LIB_1__::func_12(&iLocal_2009);
			iLocal_1995 = 1;
			break;
		case 1:
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_65) && STREAMING::HAS_MODEL_LOADED(iLocal_66)) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && STREAMING::HAS_MODEL_LOADED(iLocal_68))
			{
				__LIB_43__::func_516(5, "DAVE ESCAPES", 0, 0, 0, 1);
				AUDIO::START_AUDIO_SCENE("MI_3_KILL_ENEMIES_IN_COURTYARD");
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				__LIB_1__::func_31(&iLocal_1422);
				__LIB_0__::func_467();
				func_636();
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1415, 67, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, false, false, false, false, false, false);
				if (__LIB_0__::func_715(func_28()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_28(), true, 1);
				}
				if (__LIB_0__::func_715(func_29()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_29(), true, 1);
				}
				if (__LIB_0__::func_715(iLocal_1415))
				{
					PED::SET_PED_ACCURACY(iLocal_1415, 3);
				}
				__LIB_39__::func_107(iLocal_1415, Local_1696, 0, 0);
				__LIB_17__::func_494(&iLocal_1323, 0, 0);
				func_758(&Local_1561, Local_1694);
				func_758(&Local_1563, Local_1695);
				if (__LIB_14__::func_466() == 2 && Global_100441.f_12[1] == 0)
				{
					__LIB_1__::func_31(&iLocal_2009);
					__LIB_17__::func_78(&iLocal_1323, 0, 1);
				}
				func_753();
				iLocal_1995 = 2;
			}
			break;
		case 2:
			if (func_736())
			{
				if (__LIB_14__::func_466() == 2)
				{
					if (__LIB_37__::func_929(&Local_1685, func_29()))
					{
						Global_100441.f_12[0] = 0;
					}
					else
					{
						Global_100441.f_12[0] = 1;
					}
				}
				else if (__LIB_14__::func_466() == 0)
				{
					Global_100441.f_12[0] = 0;
				}
				if (__LIB_37__::func_929(&Local_1685, func_29()))
				{
					Global_100441.f_12[1] = 0;
				}
				else
				{
					Global_100441.f_12[1] = 1;
				}
				if (bLocal_2003)
				{
					iLocal_1995 = 4;
				}
				else
				{
					iLocal_1995 = 6;
				}
			}
			break;
		case 4:
			if (func_519("M3_TREV_TO"))
			{
				iLocal_1995 = 6;
			}
			break;
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				iLocal_1995 = 6;
			}
			break;
		case 6:
			func_20();
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, true, true, false, false, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_1415, 200, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1415, 67, true);
			iLocal_1995 = 3;
			if (__LIB_0__::func_715(func_28()))
			{
				func_27(func_28(), 0);
			}
			if (__LIB_0__::func_715(func_29()))
			{
				func_27(func_29(), 0);
			}
			TASK::REMOVE_COVER_POINT(Local_1998[0 /*7*/]);
			TASK::REMOVE_COVER_POINT(Local_1998[1 /*7*/]);
			iVar0 = 0;
			while (iVar0 <= (Local_1999.f_0 - 1))
			{
				TASK::REMOVE_COVER_POINT(Local_1999[1 /*7*/]);
				iVar0++;
			}
			func_49(7);
			break;
		case 3:
			break;
	}
}

int func_736()//Position - 0x835E9
{
	if (iLocal_1996 > 0)
	{
		if (!__LIB_0__::func_715(Local_299[2 /*7*/]))
		{
			func_748();
		}
	}
	switch (iLocal_1996)
	{
		case 0:
			func_746();
			func_744();
			__LIB_1__::func_31(&iLocal_2018);
			iLocal_1996 = 1;
			break;
		case 1:
			if ((func_743(&Local_1671, &Local_1561, &Local_1563) + func_718(&Local_1564)) <= 1)
			{
				iLocal_1996 = 7;
			}
			break;
		case 7:
			if (func_737())
			{
				iLocal_1996 = 8;
			}
			break;
		case 8:
			return 1;
			break;
	}
	return 0;
}

int func_737()//Position - 0x83677
{
	if (iLocal_2005)
	{
		func_742();
	}
	if (__LIB_37__::func_929(&Local_1674, func_29()))
	{
		if ((iLocal_1994 != 3 && iLocal_1994 != 4) && iLocal_1994 != 7)
		{
			if (__LIB_14__::func_466() == 2)
			{
				iLocal_1994 = 3;
			}
		}
		switch (iLocal_1994)
		{
			case 0:
				if (func_519("M3_TRB_TREV"))
				{
					__LIB_1__::func_12(&iLocal_2012);
					__LIB_1__::func_12(&iLocal_2015);
					__LIB_1__::func_31(&iLocal_2015);
					func_711();
					iLocal_1994 = 1;
				}
				break;
			case 1:
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					__LIB_17__::func_494(&iLocal_1323, 2, 1);
					__LIB_1__::func_31(&iLocal_2012);
					iLocal_1994 = 2;
				}
				break;
			case 2:
				if ((func_718(&Local_1480) + func_718(&Local_1670)) <= 1)
				{
					__LIB_17__::func_494(&iLocal_1323, 2, 0);
					iLocal_1994 = 7;
				}
				else
				{
					if (!iLocal_2000)
					{
						if (__LIB_2__::func_572(&iLocal_2012) >= 12f)
						{
							if (func_519("M3_TRB_NOS"))
							{
								iLocal_2000 = 1;
							}
						}
					}
					if (!iLocal_2001)
					{
						if (__LIB_2__::func_572(&iLocal_2012) >= 24f)
						{
							if (func_519("M3_TRB_URG"))
							{
								iLocal_2001 = 1;
							}
						}
					}
					if (__LIB_2__::func_572(&iLocal_2012) >= 30f)
					{
						ENTITY::SET_ENTITY_HEALTH(func_29(), 0, 0);
						__LIB_17__::func_494(&iLocal_1323, 2, 0);
						iLocal_1994 = 6;
					}
				}
				break;
			case 3:
				if (__LIB_1__::func_13(&iLocal_2012))
				{
					__LIB_14__::func_599(&iLocal_2012);
				}
				if (__LIB_1__::func_13(&iLocal_2015))
				{
					__LIB_14__::func_599(&iLocal_2015);
				}
				if (!iLocal_2005)
				{
					iLocal_2005 = 1;
				}
				iLocal_1993 = 0;
				__LIB_17__::func_494(&iLocal_1323, 2, 0);
				iLocal_1994 = 4;
				break;
			case 4:
				if ((func_718(&Local_1480) + func_718(&Local_1670)) == 0)
				{
					__LIB_17__::func_494(&iLocal_1323, 2, 0);
					iLocal_1994 = 7;
				}
				if (!iLocal_2002)
				{
					if (func_739(&Local_1670) || func_739(&Local_1480))
					{
						if (func_519("M3_TREV_ATT"))
						{
							iLocal_2002 = 1;
						}
					}
				}
				if (__LIB_14__::func_466() == 0)
				{
					iLocal_2005 = 0;
					iLocal_2008 = 0;
					if (__LIB_1__::func_13(&iLocal_2012))
					{
						__LIB_17__::func_286(&iLocal_2012);
						__LIB_17__::func_494(&iLocal_1323, 2, 1);
						iLocal_1994 = 2;
					}
					else
					{
						if (__LIB_1__::func_13(&iLocal_2015))
						{
							__LIB_17__::func_286(&iLocal_2015);
						}
						iLocal_1994 = 1;
					}
				}
				break;
			case 6:
				break;
			case 7:
				bLocal_2003 = true;
				return 1;
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_739(int iParam0)//Position - 0x83900
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (func_740(PLAYER::PLAYER_PED_ID(), iParam0[iVar0 /*25*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_740(int iParam0, var uParam1)//Position - 0x83934
{
	int iVar0;
	if (!__LIB_0__::func_715(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam1, false))
	{
		iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == iParam0)
				{
					if (PED::GET_PED_TIME_OF_DEATH(*uParam1) == MISC::GET_GAME_TIMER())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_742()//Position - 0x839D4
{
	struct<3> Var0;
	struct<3> Var1[9];
	Var0 = { -2280f, 256f, 185f };
	if (iLocal_2008 >= Var1.f_0)
	{
		return;
	}
	Var1[0 /*3*/] = { -2269.2102f, 235.86473f, 194.44019f };
	Var1[1 /*3*/] = { -2269.2478f, 235.86517f, 194.21013f };
	Var1[2 /*3*/] = { -2268.5244f, 235.85246f, 194.39131f };
	Var1[3 /*3*/] = { -2268.874f, 235.85872f, 194.41971f };
	Var1[4 /*3*/] = { -2269.0693f, 235.8622f, 194.42715f };
	Var1[5 /*3*/] = { -2268.6987f, 235.85562f, 194.43819f };
	Var1[6 /*3*/] = { -2268.9912f, 235.86058f, 194.19156f };
	Var1[7 /*3*/] = { -2269.1128f, 235.86288f, 194.33313f };
	Var1[8 /*3*/] = { -2269.2231f, 235.86496f, 194.44058f };
	if ((MISC::GET_FRAME_COUNT() % 2) == 0)
	{
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var1[iLocal_2008 /*3*/], 1, false, joaat("WEAPON_ASSAULTRIFLE"), 0, true, true, -1f);
		iLocal_2008++;
	}
}

int func_743(int iParam0, int iParam1, int iParam2)//Position - 0x83AF9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = (iVar0 + func_718(iParam0));
	iVar0 = (iVar0 + func_718(iParam1));
	iVar0 = (iVar0 + func_718(iParam2));
	return iVar0;
}

void func_744()//Position - 0x83B27
{
	int iVar0;
	func_723(&(Local_1564[0 /*25*/]), iLocal_66, -2284.3843f, 306.5045f, 183.60114f, 241f, "FIN_CIA_1", iLocal_296, iLocal_74, 5, 0, 0, 0);
	func_723(&(Local_1564[1 /*25*/]), iLocal_66, -2285.4392f, 305.4445f, 183.60123f, 241f, "FIN_CIA_2", iLocal_296, iLocal_74, 5, 0, 0, 0);
	func_719(Local_1564[0 /*25*/], -2264.2131f, 314.98245f, 183.60213f, 1, 1077936128, 1);
	func_719(Local_1564[1 /*25*/], -2263.227f, 314.9744f, 183.60213f, 1, 1077936128, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_1564.f_0 - 1))
	{
		func_745(&(Local_1564[iVar0 /*25*/]));
		ENTITY::SET_ENTITY_HEALTH(Local_1564[iVar0 /*25*/], 101, 0);
		iVar0++;
	}
}

void func_745(int* iParam0)//Position - 0x83BFA
{
	if (__LIB_0__::func_715(*iParam0))
	{
		WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(*iParam0, 0.65f, 0.65f);
	}
}

void func_746()//Position - 0x83C1D
{
	int iVar0;
	struct<3> Var1[2];
	func_723(&(Local_1670[0 /*25*/]), iLocal_64, -2296.4934f, 278.29813f, 183.6101f, 203f, "TR_DNG_MW1", iLocal_295, iLocal_76, 10, 0, 0, 0);
	func_723(&(Local_1670[1 /*25*/]), iLocal_64, -2297.0854f, 279.10364f, 183.6101f, 203f, "TR_DNG_MW2", iLocal_295, iLocal_76, 10, 0, 0, 0);
	Var1[0 /*3*/] = { -2280.8193f, 256.6264f, 183.60152f };
	Var1[1 /*3*/] = { -2282.6213f, 255.1989f, 183.60161f };
	func_747(&(Local_1998[0 /*7*/]), Var1[0 /*3*/], 224f, 2, 0, 1, 1);
	func_747(&(Local_1998[1 /*7*/]), Var1[1 /*3*/], 200f, 2, 0, 1, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_1670.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1670[iVar0 /*25*/]))
		{
			PED::SET_PED_COMBAT_RANGE(Local_1670[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1670[iVar0 /*25*/], 1);
			PED::SET_PED_ACCURACY(Local_1670[iVar0 /*25*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1670[iVar0 /*25*/], Var1[iVar0 /*3*/], 2f, true, false);
			func_745(&(Local_1670[iVar0 /*25*/]));
			func_714(1);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1[iVar0 /*3*/], 3f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1998[iVar0 /*7*/].f_3, 3000, true, 0f, false, false, Local_1998[iVar0 /*7*/], true);
			TASK::TASK_COMBAT_PED(0, func_29(), 67108864, 16);
			func_712(Local_1670[iVar0 /*25*/], 1);
		}
		iVar0++;
	}
}

void func_747(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x83DB3
{
	*uParam0 = TASK::ADD_COVER_POINT(Param1, fParam2, iParam3, iParam4, iParam5, false);
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam2;
	uParam0->f_1 = 1;
	uParam0->f_2 = iParam6;
}

void func_748()//Position - 0x83DEA
{
	switch (iLocal_2007)
	{
		case 0:
			func_749();
			TASK::TASK_HELI_MISSION(Local_298[54 /*25*/], Local_299[4 /*7*/], 0, 0, -2269.6843f, 314.6657f, 200.60213f, 4, 25f, 5f, 203f, 0, 0, 20f, 0);
			iLocal_2007 = 1;
			break;
		case 1:
			if (__LIB_0__::func_715(Local_298[54 /*25*/]))
			{
				if (__LIB_0__::func_724(Local_298[54 /*25*/], -2269.6843f, 314.6657f, 200.60213f, 1) <= 5f)
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[54 /*25*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
					TASK::TASK_HELI_MISSION(Local_298[54 /*25*/], Local_299[4 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 25f, 50f, -1f, 12, 12, 50f, 0);
					iLocal_2007 = 2;
				}
			}
			else
			{
				iLocal_2007 = 3;
			}
			break;
		case 2:
			if (__LIB_0__::func_715(Local_298[54 /*25*/]))
			{
				if (__LIB_0__::func_724(Local_298[54 /*25*/], -2269.6843f, 314.6657f, 200.60213f, 1) >= 7.5f)
				{
					TASK::TASK_HELI_MISSION(Local_298[54 /*25*/], Local_299[4 /*7*/], 0, 0, -2269.6843f, 314.6657f, 200.60213f, 4, 25f, 5f, 203f, 0, 0, 20f, 0);
					iLocal_2007 = 1;
				}
			}
			else
			{
				iLocal_2007 = 3;
			}
			break;
	}
}

void func_749()//Position - 0x83F3E
{
	Local_299[4 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2300.7615f, 385.10043f, 190f, 203f, true, true, false);
	func_752(&(Local_298[54 /*25*/]), iLocal_64, &(Local_299[4 /*7*/]), -1, "MW_HELI_ESCAPE", iLocal_292, joaat("WEAPON_UNARMED"), 1, 0, 0, 0);
	func_750(&(Local_299[4 /*7*/].f_1), Local_299[4 /*7*/], 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_298[54 /*25*/], true);
	PED::SET_PED_SHOOT_RATE(Local_298[54 /*25*/], 50);
	PED::SET_PED_FIRING_PATTERN(Local_298[54 /*25*/], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
}

void func_750(int* iParam0, int iParam1, bool bParam2)//Position - 0x83FCA
{
	__LIB_13__::func_808(iParam0);
	*iParam0 = __LIB_0__::func_639(iParam1, bParam2, 0);
}

void func_752(int* iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x83FF7
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		func_22(&(iParam0->f_1));
		if (HUD::DOES_BLIP_EXIST(iParam0->f_8))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_8));
		}
	}
	*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam2, 26, iParam1, iParam3, true, true);
	func_724(iParam0, sParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

void func_753()//Position - 0x84051
{
	int iVar0;
	struct<3> Var1[5];
	iVar0 = 0;
	while (iVar0 <= (Local_1562.f_0 - 1))
	{
		__LIB_0__::func_621(&(Local_1562[iVar0 /*25*/].f_13));
		__LIB_13__::func_808(&(Local_1562[iVar0 /*25*/].f_8));
		func_714(1);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2295.2188f, 405.10028f, 173.46664f, 3f, -1, 0.25f, 0, 40000f);
		func_712(Local_1562[iVar0 /*25*/], 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1562[iVar0 /*25*/]));
		iVar0++;
	}
	Var1[0 /*3*/] = { -2272.9817f, 263.60236f, 183.60133f };
	Var1[1 /*3*/] = { -2274.5474f, 262.65787f, 183.6011f };
	Var1[2 /*3*/] = { -2276.4707f, 260.75156f, 183.60123f };
	Var1[3 /*3*/] = { -2278.4604f, 258.85062f, 183.60136f };
	Var1[4 /*3*/] = { -2280.1853f, 257.05588f, 183.60149f };
	func_15();
	func_747(&(Local_1999[0 /*7*/]), Var1[0 /*3*/], 211.75f, 3, 0, 1, 1);
	func_747(&(Local_1999[1 /*7*/]), Var1[1 /*3*/], 214.43f, 3, 0, 1, 1);
	func_747(&(Local_1999[2 /*7*/]), Var1[2 /*3*/], 220.73f, 3, 0, 1, 1);
	func_747(&(Local_1999[3 /*7*/]), Var1[3 /*3*/], 229.85f, 3, 0, 1, 1);
	func_747(&(Local_1999[4 /*7*/]), Var1[4 /*3*/], 221.84f, 3, 0, 1, 1);
	iVar0 = 0;
	while (iVar0 <= (Local_1480.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1480[iVar0 /*25*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_1480[iVar0 /*25*/]);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1480[iVar0 /*25*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1480[iVar0 /*25*/], iLocal_295);
			PED::SET_PED_COMBAT_RANGE(Local_1480[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1480[iVar0 /*25*/], 1);
			PED::SET_PED_ACCURACY(Local_1480[iVar0 /*25*/], 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1480[iVar0 /*25*/], Var1[iVar0 /*3*/], 1f, true, false);
			func_714(1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1999[iVar0 /*7*/].f_3, 3f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1999[iVar0 /*7*/].f_3, 3000, true, 0f, false, false, Local_1999[iVar0 /*7*/], true);
			TASK::TASK_COMBAT_PED(0, func_29(), 67108864, 16);
			func_712(Local_1480[iVar0 /*25*/], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1480[iVar0 /*25*/], true);
		}
		iVar0++;
	}
	func_757();
	func_756();
	func_755(&iLocal_1455);
	func_754(&Local_1533);
	func_754(&Local_1534);
}

void func_754(int iParam0)//Position - 0x842D0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_755(iParam0[iVar0 /*25*/]);
		iVar0++;
	}
}

void func_755(int* iParam0)//Position - 0x842F8
{
	if (__LIB_0__::func_715(*iParam0))
	{
		__LIB_13__::func_808(&(iParam0->f_8));
		__LIB_0__::func_621(&(iParam0->f_13));
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0);
		func_714(1);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2314.053f, 318.9733f, 183.6101f, 3f, -1, 0.25f, 0, 40000f);
		func_712(*iParam0, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_756()//Position - 0x8435B
{
	int iVar0;
	if (func_718(&Local_1561) == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1561.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1561[iVar0 /*25*/]))
			{
				__LIB_0__::func_621(&(Local_1561[iVar0 /*25*/].f_13));
				__LIB_13__::func_808(&(Local_1561[iVar0 /*25*/].f_8));
				func_714(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_SMART_FLEE_PED(0, func_28(), 400f, -1, false, false);
				func_712(Local_1561[iVar0 /*25*/], 1);
				PED::SET_PED_KEEP_TASK(Local_1561[iVar0 /*25*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1561[iVar0 /*25*/]));
				return;
			}
			iVar0++;
		}
	}
}

void func_757()//Position - 0x843EE
{
	int iVar0;
	if (func_718(&Local_1563) == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1563.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1563[iVar0 /*25*/]))
			{
				__LIB_0__::func_621(&(Local_1563[iVar0 /*25*/].f_13));
				__LIB_13__::func_808(&(Local_1563[iVar0 /*25*/].f_8));
				func_714(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_SMART_FLEE_PED(0, func_28(), 400f, -1, false, false);
				func_712(Local_1563[iVar0 /*25*/], 1);
				PED::SET_PED_KEEP_TASK(Local_1563[iVar0 /*25*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1563[iVar0 /*25*/]));
				return;
			}
			iVar0++;
		}
	}
}

void func_758(int iParam0, struct<8> Param1)//Position - 0x84481
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			PED::REMOVE_PED_DEFENSIVE_AREA((*iParam0)[iVar0 /*25*/], true);
			__LIB_39__::func_107((*iParam0)[iVar0 /*25*/], Param1, 0, 0);
		}
		iVar0++;
	}
}

void func_760()//Position - 0x844D0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_1480.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1480[iVar0 /*25*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1480[iVar0 /*25*/], false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1480[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1670.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1670[iVar0 /*25*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1670[iVar0 /*25*/], false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1670[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
}

void func_761()//Position - 0x8455A
{
	int iVar0;
	float fVar1;
	fVar1 = 12.5f;
	if (__LIB_0__::func_715(func_28()) && __LIB_0__::func_715(iLocal_1415))
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1561.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1561[iVar0 /*25*/]))
			{
				if (__LIB_0__::func_76(func_28(), Local_1561[iVar0 /*25*/], 1) <= fVar1 || __LIB_0__::func_76(iLocal_1415, Local_1561[iVar0 /*25*/], 1) <= fVar1)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1561[iVar0 /*25*/], false);
				}
				else
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1561[iVar0 /*25*/], true);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (Local_1563.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1563[iVar0 /*25*/]))
			{
				if (__LIB_0__::func_76(func_28(), Local_1563[iVar0 /*25*/], 1) <= fVar1 || __LIB_0__::func_76(iLocal_1415, Local_1563[iVar0 /*25*/], 1) <= fVar1)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1563[iVar0 /*25*/], false);
				}
				else
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1563[iVar0 /*25*/], true);
				}
			}
			iVar0++;
		}
	}
}

void func_762()//Position - 0x8465A
{
	switch (iLocal_1993)
	{
		case 0:
			iLocal_1993 = 1;
			break;
		case 1:
			ENTITY::SET_ENTITY_INVINCIBLE(func_28(), false);
			ENTITY::SET_ENTITY_PROOFS(func_28(), false, false, false, false, false, false, false, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(func_28(), false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_1415, false, false, false, false, false, false, false, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, false);
			if ((((((((func_739(&Local_1480) || func_739(&Local_1564)) || func_739(&Local_1670)) || func_739(&Local_1565)) || func_739(&Local_1566)) || func_739(&Local_1567)) || func_739(&Local_1568)) || func_739(&iLocal_1569)) || func_740(Local_298[1 /*25*/], &(Local_298[54 /*25*/])))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
				ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, true, true, false, false, false);
				__LIB_1__::func_31(&iLocal_2021);
				iLocal_1993 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_572(&iLocal_2021) >= 15f)
			{
				iLocal_1993 = 0;
			}
			break;
		case 3:
			break;
	}
}

void func_763()//Position - 0x8479E
{
	if (!iLocal_1719)
	{
		if (__LIB_38__::func_175(&Local_1687))
		{
			func_723(&(Local_1565[0 /*25*/]), iLocal_64, -2264.4082f, 222.08583f, 188.61163f, 90f, "TREV_MW1_1", iLocal_292, iLocal_73, 2, 0, 0, 0);
			func_747(&Local_1777, -2264.4082f, 222.08583f, 188.61163f, 90f, 1, 1, 6, 0);
			func_765(&(Local_1565[0 /*25*/]), ENTITY::GET_ENTITY_COORDS(Local_1565[0 /*25*/], true), 1f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1565[0 /*25*/], Local_1777.f_3, -1, true, 0f, false, false, Local_1777.f_0, false);
			iLocal_1719 = 1;
		}
	}
	if (!iLocal_1720)
	{
		if (__LIB_38__::func_175(&Local_1688))
		{
			func_723(&(Local_1566[0 /*25*/]), iLocal_64, -2274.9194f, 222.98207f, 168.60199f, 180f, "TREV_MW2_1", iLocal_292, iLocal_73, 2, 0, 0, 0);
			func_765(&(Local_1566[0 /*25*/]), -2275.3389f, 213.20009f, 168.61174f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1566[0 /*25*/], 100f, 0);
			iLocal_1720 = 1;
		}
	}
	if (!iLocal_1721)
	{
		if (__LIB_38__::func_175(&Local_1689))
		{
			func_723(&(Local_1567[0 /*25*/]), iLocal_64, -2270.0146f, 237.28992f, 168.60199f, 80f, "TREV_MW3_1", iLocal_292, iLocal_73, 2, 0, 0, 0);
			func_765(&(Local_1567[0 /*25*/]), -2276.761f, 238.55177f, 168.60199f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1567[0 /*25*/], 100f, 0);
			iLocal_1721 = 1;
		}
	}
	if (!iLocal_1722)
	{
		if (__LIB_38__::func_175(&Local_1690))
		{
			func_723(&(Local_1568[2 /*25*/]), iLocal_64, -2254.7756f, 204.97714f, 173.60191f, 109.1509f, "TREV_MW4_3", iLocal_292, iLocal_76, 2, 0, 0, 0);
			func_765(&(Local_1568[2 /*25*/]), -2262.4133f, 202.24286f, 173.60172f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1568[2 /*25*/], 100f, 0);
			func_723(&(Local_1568[3 /*25*/]), iLocal_64, -2253.635f, 205.18712f, 173.60197f, 109.1509f, "TREV_MW4_4", iLocal_292, iLocal_76, 2, 0, 0, 0);
			func_765(&(Local_1568[3 /*25*/]), -2253.6458f, 197.42163f, 173.60182f, 5f, 1, 1, 1, 1, 1065353216, 0, 0, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1568[3 /*25*/], 100f, 0);
			func_764(&Local_1568, 3);
			iLocal_1722 = 1;
		}
	}
	if (!iLocal_1723)
	{
		if (__LIB_38__::func_175(&Local_1691))
		{
			iLocal_1723 = 1;
		}
	}
}

void func_764(int iParam0, int iParam1)//Position - 0x84A30
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			PED::SET_PED_ACCURACY((*iParam0)[iVar0 /*25*/], iParam1);
		}
		iVar0++;
	}
}

void func_765(int* iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7, float fParam8, bool bParam9, bool bParam10)//Position - 0x84A67
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, iParam3);
		PED::SET_PED_COMBAT_RANGE(*iParam0, iParam4);
		PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, iParam5);
		PED::SET_COMBAT_FLOAT(*iParam0, 5, fParam7);
		PED::SET_COMBAT_FLOAT(*iParam0, 8, fParam8);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param1, fParam2, bParam10, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, bParam6);
		PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 37, bParam9);
	}
}

void func_766()//Position - 0x84ACE
{
	func_767();
	switch (iLocal_1997)
	{
		case 0:
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_1415, "STAY_DOWN", "SPEECH_PARAMS_FORCE", 1);
			iLocal_1997 = 1;
			break;
		case 1:
			if (!__LIB_13__::func_755(&iLocal_263, 0))
			{
				__LIB_0__::func_229("M3_OBJCYKIL", 7500, 1);
				iLocal_1997 = 20;
			}
			break;
		case 2:
			if (func_519("M3_GUYRIGHT"))
			{
				iLocal_1997 = 20;
			}
			break;
		case 3:
			if (func_519("M3_DECLOSE"))
			{
				iLocal_1997 = 20;
			}
			break;
		case 4:
			if (func_519("M3_DEFINALWV"))
			{
				iLocal_1997 = 20;
			}
			break;
	}
}

void func_767()//Position - 0x84B76
{
	int iVar0;
	if (__LIB_0__::func_715(iLocal_1415) && __LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		if ((__LIB_2__::func_572(&iLocal_1422) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_13__::func_755(&iLocal_263, 1))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar0)
			{
				case 0:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (func_666("M3_DEDVWAR"))
						{
							__LIB_1__::func_31(&iLocal_1422);
						}
					}
					break;
				case 1:
					if (PED::IS_PED_SHOOTING(iLocal_1415))
					{
						if (func_666("M3_DEMIWAR"))
						{
							__LIB_1__::func_31(&iLocal_1422);
						}
					}
					break;
				}
			}
	}
}

void func_768()//Position - 0x84C19
{
	int iVar0;
	if (iLocal_1917 > 1)
	{
		func_804();
		func_732(&Local_1562, 1);
		func_732(&Local_1533, 1);
		func_732(&Local_1534, 1);
		func_710();
		func_731();
		func_802();
		func_799();
		func_798();
		func_794();
		func_791();
		if (__LIB_14__::func_466() == 2 || iLocal_1971)
		{
			func_787();
		}
		if (iLocal_1974)
		{
			func_783();
		}
		else if (!iLocal_1977)
		{
			if ((func_718(&Local_1561) + func_718(&Local_1563)) == 0)
			{
				func_782();
				iLocal_1977 = 1;
			}
		}
		if (!iLocal_1976)
		{
			if (__LIB_37__::func_929(&Local_1964, func_28()))
			{
				iLocal_1717 = 0;
				iLocal_1976 = 1;
			}
		}
		if (iLocal_1787 == 0 || iLocal_1787 == 1)
		{
			func_778();
		}
		if (!iLocal_1970)
		{
			if (__LIB_38__::func_175(&Local_1957))
			{
				func_764(&Local_1562, 1);
				func_764(&Local_1561, 1);
				func_764(&Local_1563, 1);
				Local_1707.f_7 = 1;
				Local_1702.f_7 = 1;
				Local_1712.f_7 = 1;
				Local_1712.f_8 = 10f;
				func_782();
				iLocal_1970 = 1;
				iLocal_1411 = 1;
			}
		}
	}
	if (bLocal_1322)
	{
		func_644();
	}
	switch (iLocal_1917)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, iLocal_65);
			__LIB_16__::func_852(&uLocal_304, iLocal_66);
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, iLocal_68);
			__LIB_16__::func_857(&uLocal_304, cLocal_60);
			__LIB_16__::func_857(&uLocal_304, cLocal_61);
			__LIB_16__::func_857(&uLocal_304, cLocal_62);
			__LIB_16__::func_853(&uLocal_304, 4, &Local_77);
			iLocal_1989 = 0;
			iLocal_1920 = 0;
			iLocal_1921 = 0;
			iLocal_1922 = 0;
			iLocal_1924 = 0;
			iLocal_1925 = 0;
			iLocal_1923 = 0;
			iLocal_1974 = 0;
			iLocal_1969 = 0;
			iLocal_1716 = 1;
			bLocal_1322 = true;
			iLocal_1967 = 0;
			iLocal_1968 = 0;
			iLocal_1965 = 0;
			iLocal_1966 = 0;
			iLocal_1930 = 0;
			iLocal_1928 = 0;
			iLocal_1970 = 0;
			iLocal_1976 = 0;
			iLocal_1978 = 0;
			iLocal_1979 = 0;
			bLocal_1973 = false;
			iLocal_1975 = 0;
			iLocal_1977 = 0;
			iLocal_1719 = 0;
			iLocal_1720 = 0;
			iLocal_1721 = 0;
			iLocal_1722 = 0;
			iLocal_1723 = 0;
			iLocal_1929 = 0;
			iLocal_1725 = 0;
			iLocal_1972 = 0;
			iLocal_1411 = 0;
			iLocal_1724 = 0;
			iLocal_94 = 1;
			iLocal_94 = 0;
			iLocal_1927 = 0;
			iLocal_1787 = 0;
			func_777(1);
			iLocal_53 = 0;
			iLocal_1919 = 0;
			func_775(&Local_1702, 5, "WAR_FIB", 546661/*func_776*/, 3f, 1, -1);
			func_775(&Local_1707, 5, "WAR_CIA", 546661/*func_776*/, 3f, 1, -1);
			func_775(&Local_1712, 5, "WAR_MW", 546661/*func_776*/, 3f, 1, -1);
			__LIB_1__::func_12(&iLocal_1434);
			func_773();
			__LIB_1__::func_12(&iLocal_1990);
			iLocal_91 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2212.839f, 240.922f, 184.717f, 6.1f, 6.1f, 3.3f, __LIB_12__::func_418(25f), false, 7);
			iLocal_1917 = 1;
			break;
		case 1:
			if (((((((STREAMING::HAS_MODEL_LOADED(iLocal_65) && STREAMING::HAS_MODEL_LOADED(iLocal_66)) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && STREAMING::HAS_MODEL_LOADED(iLocal_68)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_60)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_61)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_62)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, &Local_77))
			{
				__LIB_1__::func_31(&iLocal_1937);
				__LIB_1__::func_31(&iLocal_1422);
				if (__LIB_0__::func_715(func_28()))
				{
					ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_28(), true, 1);
				}
				if (__LIB_0__::func_715(func_29()))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_29(), true, 1);
				}
				if (__LIB_0__::func_715(iLocal_1415))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
					__LIB_39__::func_107(iLocal_1415, Local_1676, 0, 0);
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_1415, Local_1765.f_0, -2275.3179f, 330.6714f, 174.51192f, -1, true);
				}
				func_783();
				__LIB_37__::func_191(&(Local_303[13 /*8*/]), 0, 0, 1);
				__LIB_43__::func_516(4, "DAVE BY FOUNTAIN", 0, 0, 0, 1);
				__LIB_17__::func_78(&iLocal_1323, 0, 1);
				func_771();
				func_770();
				ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, false, true, true, false, false, false);
				iLocal_1917 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_76(func_28(), iLocal_1415, 1) <= 4f || __LIB_0__::func_76(func_29(), iLocal_1415, 1) <= 4f)
			{
				if (__LIB_14__::func_466() == 2)
				{
					Global_100441.f_12[0] = 1;
				}
				else if (__LIB_14__::func_466() == 0)
				{
					Global_100441.f_12[0] = 0;
				}
				if (__LIB_37__::func_929(&Local_1674, func_29()))
				{
					Global_100441.f_12[1] = 0;
				}
				else
				{
					Global_100441.f_12[1] = 1;
				}
				iLocal_94 = 0;
				iLocal_1917 = 3;
			}
			break;
		case 3:
			STREAMING::REMOVE_ANIM_DICT(cLocal_61);
			STREAMING::REMOVE_ANIM_DICT(cLocal_62);
			iVar0 = 0;
			while (iVar0 <= (Local_1673.f_0 - 1))
			{
				func_22(&(Local_1673[iVar0 /*7*/]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1561.f_0 - 1))
			{
				func_769(&(Local_1561[iVar0 /*25*/]), Local_1693);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1563.f_0 - 1))
			{
				func_769(&(Local_1563[iVar0 /*25*/]), Local_1692);
				iVar0++;
			}
			if (__LIB_14__::func_466() == 2)
			{
				if (__LIB_0__::func_715(func_28()))
				{
					TASK::CLEAR_PED_TASKS(func_28());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), false);
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					__LIB_39__::func_107(func_28(), Local_1696, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
				}
			}
			iLocal_1717 = 0;
			__LIB_13__::func_808(&iLocal_297);
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_91);
			iLocal_1917 = 4;
			func_49(6);
			break;
		case 4:
			break;
	}
}

void func_769(var uParam0, struct<7> Param1, var uParam2)//Position - 0x8515E
{
	if (__LIB_0__::func_715(*uParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_292)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_295);
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*uParam0) == iLocal_291)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_294);
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, false);
		PED::SET_PED_ACCURACY(*uParam0, 1);
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(*uParam0, Param1, Param1.f_3, Param1.f_6, false, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
		PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 2);
		PED::SET_PED_COMBAT_RANGE(*uParam0, 0);
		func_745(uParam0);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(*uParam0, Local_1701, 5f, 0);
	}
}

void func_770()//Position - 0x851F6
{
	iLocal_92[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2267.079f, 312.111f, 174.348f, 7.5f, 22f, 2.6f, __LIB_12__::func_418(24f), false, 7);
	iLocal_92[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2258.979f, 293.811f, 174.348f, 7.5f, 22f, 2.6f, __LIB_12__::func_418(24f), false, 7);
	iLocal_92[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2253.079f, 280.511f, 174.348f, 7.5f, 16f, 2.6f, __LIB_12__::func_418(24f), false, 7);
}

void func_771()//Position - 0x85294
{
	__LIB_1__::func_12(&uLocal_1425);
	__LIB_1__::func_12(&uLocal_1431);
	iLocal_1443 = 0;
}

void func_773()//Position - 0x852BE
{
	Local_1947 = { __LIB_37__::func_928(-2229.059f, 275.22366f, 183.35408f, -2231.213f, 280.0638f, 187.85408f, 6.5f) };
	Local_1948 = { __LIB_37__::func_928(-2218.3765f, 252.41948f, 183.35408f, -2220.7883f, 257.7459f, 188.10408f, 8f) };
	Local_1949 = { __LIB_37__::func_928(-2233.6455f, 299.34393f, 183.35515f, -2235.26f, 298.63507f, 189.35515f, 8f) };
	Local_1953 = { __LIB_37__::func_928(-2226.0698f, 269.02408f, 183.35408f, -2226.7795f, 270.54044f, 189.35408f, 8f) };
	Local_1954 = { __LIB_37__::func_928(-2223.428f, 301.12292f, 183.30302f, -2226.2986f, 306.9099f, 186.60303f, 6f) };
	Local_1955 = { __LIB_37__::func_928(-2250.2559f, 312.13263f, 183.30199f, -2257.3367f, 324.83807f, 186.60127f, 8f) };
	Local_1956 = { __LIB_37__::func_928(-2279.6748f, 302.2139f, 183.36157f, -2278.419f, 299.516f, 189.35162f, 3.5f) };
	Local_1946 = { __LIB_37__::func_928(-2248.2434f, 269.74176f, 173.10196f, -2249.8062f, 273.1301f, 175.60196f, 5f) };
	Local_1946 = { Local_1946 };
	Local_1958 = { __LIB_37__::func_928(-2267.4553f, 315.04572f, 183.35213f, -2286.5374f, 306.79932f, 185.35123f, 11.25f) };
	Local_1957 = { __LIB_37__::func_928(-2279.4023f, 302.3299f, 183.36157f, -2271.7388f, 286.46625f, 175.35211f, 11.25f) };
	Local_1961 = { __LIB_37__::func_928(-2229.5417f, 275.71768f, 183.35408f, -2231.2842f, 279.60678f, 185.35408f, 5.25f) };
	Local_1962 = { __LIB_37__::func_928(-2249.3413f, 309.19635f, 183.35199f, -2252.5095f, 317.15097f, 185.35127f, 11.25f) };
	Local_1959 = { __LIB_37__::func_928(-2255.1057f, 320.62048f, 183.10127f, -2286.249f, 306.85657f, 187.10121f, 13.75f) };
	Local_1960 = { __LIB_37__::func_928(-2281.745f, 303.6456f, 173.10211f, -2269.277f, 276.10193f, 176.10211f, 27.5f) };
	Local_1963 = { __LIB_37__::func_928(-2192.5437f, 218.40945f, 191.07484f, -2240.7573f, 325.47623f, 182.63287f, 46f) };
	Local_1964 = { __LIB_37__::func_928(-2268.1963f, 315.12833f, 203.60211f, -2341.7969f, 281.689f, 169.46722f, 102.75f) };
	Local_1950 = { __LIB_37__::func_928(-2257.981f, 319.8042f, 183.35127f, -2247.8943f, 324.25684f, 186.92764f, 8.5f) };
	Local_1951 = { __LIB_37__::func_928(-2278.865f, 265.31073f, 183.35135f, -2281.8608f, 273.36615f, 186.70146f, 11.25f) };
	Local_1952 = { __LIB_37__::func_928(-2224.927f, 303.15665f, 183.35303f, -2213.7966f, 308.53848f, 186.92764f, 8.5f) };
	func_774();
	func_747(&(Local_1673[0 /*7*/]), -2225.1533f, 271.6437f, 183.60408f, 201.4499f, 0, 0, 3, 0);
	func_747(&(Local_1673[1 /*7*/]), -2229.241f, 269.47818f, 183.60406f, 201.4499f, 1, 1, 3, 1);
	Local_1958 = { Local_1958 };
}

void func_774()//Position - 0x85675
{
	func_15();
	func_747(&(Local_1672[0 /*7*/]), -2274.9246f, 262.41965f, 183.60112f, 236f, 2, 0, 1, 1);
	func_747(&(Local_1672[1 /*7*/]), -2277.51f, 259.8443f, 183.60129f, 236f, 2, 0, 1, 1);
	func_747(&(Local_1672[2 /*7*/]), -2275.3486f, 283.59723f, 183.60147f, 310f, 0, 1, 3, 0);
	func_747(&(Local_1672[3 /*7*/]), -2271.3577f, 264.46384f, 183.6016f, 220f, 2, 0, 1, 0);
	func_747(&(Local_1672[4 /*7*/]), -2271.495f, 274.47726f, 183.6016f, 310f, 0, 1, 3, 0);
}

void func_775(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8572B
{
	*uParam0 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = iParam1;
	uParam0->f_6 = iParam6;
	uParam0->f_4 = sParam2;
	uParam0->f_8 = iParam4;
	uParam0->f_9 = iParam5;
	uParam0->f_11 = iParam3;
	uParam0->f_10 = 1;
}

void func_776(int* iParam0, struct<7> Param1, var uParam2)//Position - 0x85765
{
	if (__LIB_0__::func_715(*iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(*iParam0, Param1, Param1.f_3, Param1.f_6, false, false);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 250f, 0);
		func_745(iParam0);
	}
}

void func_777(int iParam0)//Position - 0x857A1
{
	Local_298[1 /*25*/].f_9 = 0;
	uLocal_1388 = iParam0;
}

void func_778()//Position - 0x857B7
{
	if (__LIB_14__::func_466() == 2)
	{
		func_763();
		func_779();
	}
}

void func_779()//Position - 0x857CF
{
	int iVar0;
	switch (iLocal_53)
	{
		case 0:
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(func_28(), false);
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iVar0, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), ENTITY::GET_ENTITY_COORDS(func_28(), true), 1f, false, false);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1756.f_3, -1, false, 0f, true, false, Local_1756.f_0, false);
			iLocal_53 = 1;
			break;
		case 1:
			if (__LIB_0__::func_724(iLocal_1415, Local_1765.f_3, 1) <= 3f)
			{
				TASK::CLEAR_PED_TASKS(func_28());
				PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2229.8247f, 278.22928f, 183.60408f, 3f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_28(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_53 = 2;
			}
			break;
		case 2:
			if (__LIB_37__::func_929(&Local_1961, func_28()))
			{
				iLocal_1971 = 1;
				__LIB_17__::func_494(&iLocal_1323, 0, 1);
				TASK::CLEAR_PED_TASKS(func_28());
				PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				if (__LIB_0__::func_715(Local_1453[0 /*25*/]))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Local_1453[0 /*25*/], 3000, 0);
				}
				if (__LIB_0__::func_715(Local_1453[1 /*25*/]))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Local_1453[1 /*25*/], 3000, 0);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_28(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				__LIB_1__::func_31(&iLocal_1419);
				if (bLocal_1973)
				{
					iLocal_1918 = 4;
				}
				iLocal_53 = 3;
			}
			break;
		case 3:
			if (__LIB_1__::func_13(&iLocal_1419))
			{
				if (__LIB_2__::func_572(&iLocal_1419) >= 10f)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(func_28(), false);
					ENTITY::SET_ENTITY_PROOFS(func_28(), false, false, false, false, false, false, false, false);
					__LIB_1__::func_12(&iLocal_1419);
				}
			}
			if (func_718(&Local_1453) == 0)
			{
				if (!iLocal_1724)
				{
					__LIB_17__::func_494(&iLocal_1323, 0, 0);
					if (!iLocal_1716)
					{
						__LIB_17__::func_78(&iLocal_1323, 0, 1);
					}
					iLocal_1724 = 1;
				}
				if (bLocal_1973)
				{
					iLocal_1918 = 10;
				}
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
				ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
				func_719(func_28(), -2250.4954f, 311.88065f, 183.60199f, 0, 2f, 1);
				iLocal_53 = 4;
			}
			break;
		case 4:
			if (__LIB_37__::func_929(&Local_1962, func_28()))
			{
				func_781(&(Local_1454[0 /*25*/]), iLocal_64, -2276.1f, 313.3804f, 183.60211f, 293.8379f, -2259.507f, 320.3045f, 183.60211f, -2250.4954f, 311.88065f, 183.60199f, "MCH_WAVE3_1", 1065353216);
				func_781(&(Local_1454[1 /*25*/]), iLocal_64, -2275.4333f, 311.93585f, 183.60213f, 293.8379f, -2255.6787f, 320.16754f, 183.60127f, -2250.4954f, 311.88065f, 183.60199f, "MCH_WAVE3_2", 1065353216);
				func_781(&(Local_1454[2 /*25*/]), iLocal_64, -2272.436f, 311.41516f, 183.60213f, 293.8379f, -2252.5786f, 317.3668f, 183.60127f, -2250.4954f, 311.88065f, 183.60199f, "MCH_WAVE3_3", 1065353216);
				func_745(&(Local_1454[0 /*25*/]));
				func_745(&(Local_1454[1 /*25*/]));
				func_745(&(Local_1454[2 /*25*/]));
				if (bLocal_1973)
				{
					iLocal_1918 = 6;
				}
				func_780(&Local_1454);
				iLocal_53 = 5;
			}
			break;
		case 5:
			if (func_718(&Local_1454) == 0)
			{
				iLocal_1411 = 1;
				iLocal_53 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_715(func_28()))
			{
				func_714(1);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_1415, true), 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
				func_712(func_28(), 1);
				iLocal_53 = 7;
			}
			break;
		case 7:
			if (__LIB_0__::func_76(func_28(), iLocal_1415, 1) <= 4f)
			{
				if (__LIB_0__::func_715(func_28()))
				{
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					__LIB_39__::func_107(func_28(), Local_1676, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_28(), 250f, 0);
					iLocal_53 = 8;
				}
			}
			break;
		case 8:
			break;
	}
}

void func_780(int iParam0)//Position - 0x85C0D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			ENTITY::SET_ENTITY_HEALTH((*iParam0)[iVar0 /*25*/], 101, 0);
		}
		iVar0++;
	}
}

void func_781(int* iParam0, int iParam1, struct<3> Param2, float fParam3, struct<3> Param4, struct<3> Param5, char* sParam6, float fParam7)//Position - 0x85C45
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case joaat("S_M_Y_Swat_01"):
			iVar0 = iLocal_291;
			iVar1 = iLocal_75;
			break;
		case joaat("S_M_M_CIASec_01"):
			iVar0 = iLocal_293;
			iVar1 = iLocal_73;
			break;
		case joaat("S_M_Y_BlackOps_01"):
			iVar0 = iLocal_292;
			iVar1 = iLocal_76;
			break;
		default:
			iVar0 = iLocal_293;
			iVar1 = iLocal_73;
			break;
	}
	func_723(iParam0, iParam1, Param2, fParam3, sParam6, iVar0, iVar1, 5, 0, 0, 0);
	func_765(iParam0, Param4, 0.75f, 2, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, false);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	func_714(1);
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param4, Param5, fParam7, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
	func_712(*iParam0, 1);
}

void func_782()//Position - 0x85D1F
{
	if (__LIB_0__::func_715(iLocal_1415))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1415, false);
		TASK::CLEAR_PED_TASKS(iLocal_1415);
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, Local_1765.f_3, 2f, true, false);
		func_714(1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1765.f_3, 2f, -1, 0.25f, 0, 40000f);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1765.f_3, -1, true, 0f, false, false, Local_1765.f_0, true);
		func_712(iLocal_1415, 1);
	}
}

void func_783()//Position - 0x85D94
{
	func_784(&Local_1702, &Local_1561, &Local_1699, iLocal_65, Local_1697, 1);
	func_784(&Local_1712, &Local_1563, &Local_1700, iLocal_64, Local_1698, 0);
}

void func_784(var uParam0, int iParam1, var uParam2, int iParam3, struct<8> Param4, bool bParam5)//Position - 0x85DC8
{
	int iVar0;
	int iVar1;
	if (*uParam0 > 0)
	{
		if (uParam0->f_9)
		{
			func_732(iParam1, 1);
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= (*iParam1 - 1))
			{
				func_786(iParam1[iVar0 /*25*/], *(uParam2[iVar0 /*3*/]), iParam3, Param4, &(uParam0->f_5), uParam0->f_7, uParam0->f_9, uParam0->f_4, uParam0->f_11);
				iVar0++;
			}
			__LIB_1__::func_31(&(uParam0->f_1));
			if (bParam5)
			{
			}
			uParam0->f_10 = 1;
			*uParam0 = 1;
			break;
		case 1:
			if (func_785(iParam1) >= 2)
			{
				__LIB_1__::func_31(&(uParam0->f_1));
				if (bParam5)
				{
				}
				*uParam0 = 2;
			}
			break;
		case 2:
			if (__LIB_1__::func_13(&(uParam0->f_1)))
			{
				if (__LIB_2__::func_572(&(uParam0->f_1)) > uParam0->f_8)
				{
					if (func_785(iParam1) == 0)
					{
						if (bParam5)
						{
						}
						*uParam0 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (*iParam1 - 1))
					{
						if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0 /*25*/], false))
						{
							iVar1 = 0;
							while (iVar1 <= (*uParam2 - 1))
							{
								if (uParam0->f_10)
								{
									if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), *(uParam2[iVar1 /*3*/]), 1) >= 15f && !CAM::IS_SPHERE_VISIBLE(*(uParam2[iVar1 /*3*/]), 0.5f))
									{
										__LIB_1__::func_31(&(uParam0->f_1));
										func_786(iParam1[iVar0 /*25*/], *(uParam2[iVar1 /*3*/]), iParam3, Param4, &(uParam0->f_5), uParam0->f_7, uParam0->f_9, uParam0->f_4, uParam0->f_11);
										uParam0->f_10 = 0;
										if (uParam0->f_6 != -1)
										{
											if (uParam0->f_5 >= uParam0->f_6)
											{
												if (bParam5)
												{
												}
												*uParam0 = 3;
											}
										}
									}
								}
								iVar1++;
							}
						}
						uParam0->f_10 = 1;
						iVar0++;
					}
				}
			}
			else
			{
				__LIB_1__::func_31(&(uParam0->f_1));
			}
			break;
		case 3:
			break;
	}
}

int func_785(var uParam0)//Position - 0x85F8B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*25*/]) || PED::IS_PED_HURT((*uParam0)[iVar0 /*25*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_786(int* iParam0, struct<3> Param1, int iParam2, struct<8> Param3, var uParam4, int iParam5, bool bParam6, char* sParam7, var uParam8)//Position - 0x85FCE
{
	int iVar0;
	float fVar1;
	struct<2> Var2;
	int iVar3;
	switch (iParam2)
	{
		case joaat("S_M_Y_Swat_01"):
			iVar3 = iLocal_291;
			iVar0 = iLocal_75;
			fVar1 = 112.7339f;
			break;
		case joaat("S_M_M_CIASec_01"):
			iVar3 = iLocal_293;
			iVar0 = iLocal_73;
			fVar1 = 203.4995f;
			break;
		case joaat("S_M_Y_BlackOps_01"):
			iVar3 = iLocal_292;
			iVar0 = iLocal_76;
			fVar1 = 297.6012f;
			break;
	}
	StringCopy(&Var2, sParam7, 16);
	StringIntConCat(&Var2, *uParam4, 16);
	*uParam4++;
	func_723(iParam0, iParam2, Param1, fVar1, &Var2, iVar3, iVar0, iParam5, 0, 0, 0);
	if (__LIB_0__::func_715(*iParam0))
	{
		if (!bParam6)
		{
			__LIB_13__::func_808(&(iParam0->f_8));
		}
		Stack.Push(iParam0);
		Stack.Push(Param3);
		Call_Loc(uParam8);
	}
}

void func_787()//Position - 0x86078
{
	struct<4> Var0;
	int iVar1;
	if (iLocal_1923 > 1)
	{
		func_732(&Local_1453, 1);
	}
	switch (iLocal_1923)
	{
		case 0:
			iLocal_1971 = 0;
			fLocal_1807 = 0f;
			fLocal_1808 = 0f;
			iLocal_1923++;
			break;
		case 1:
			if (iLocal_1971)
			{
				iVar1 = 0;
				while (iVar1 <= (Local_1453.f_0 - 1))
				{
					StringCopy(&Var0, "MCH_WAVE2_", 32);
					StringIntConCat(&Var0, iVar1, 32);
					func_723(&(Local_1453[iVar1 /*25*/]), iLocal_65, -2222.3914f, 305.64835f, 184.926f, 0f, &Var0, iLocal_294, iLocal_75, 5, 0, 0, 0);
					func_745(&(Local_1453[iVar1 /*25*/]));
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1453[iVar1 /*25*/], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1453[iVar1 /*25*/], true);
					iVar1++;
				}
				iLocal_302[9] = PED::CREATE_SYNCHRONIZED_SCENE(-2222.3914f, 305.64835f, 184.926f, 0f, 0f, 113.91f, 2);
				if (__LIB_0__::func_715(Local_1453[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1453[0 /*25*/], iLocal_302[9], cLocal_62, "WALKWAY_A", 8f, -1000f, 1, 0, 1000f, 0);
				}
				if (__LIB_0__::func_715(Local_1453[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1453[1 /*25*/], iLocal_302[9], cLocal_62, "WALKWAY_B", 8f, -1000f, 1, 0, 1000f, 0);
				}
				iLocal_1923 = 2;
			}
			break;
		case 2:
			func_790();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[9]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[9]) >= 0.3f)
				{
					if (func_789(Local_1952, &Local_1453) == 0)
					{
						iLocal_1923 = 3;
						func_788(0);
						iLocal_1725 = 1;
					}
				}
			}
			else
			{
				if (__LIB_0__::func_715(Local_1453[0 /*25*/]))
				{
					func_714(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2234.2441f, 299.18054f, 183.60515f, func_28(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_712(Local_1453[0 /*25*/], 1);
				}
				if (__LIB_0__::func_715(Local_1453[1 /*25*/]))
				{
					func_714(1);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2230.7568f, 300.76196f, 183.60515f, func_28(), 1f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_712(Local_1453[1 /*25*/], 1);
				}
				iLocal_1725 = 1;
				iLocal_1923 = 4;
			}
			break;
		case 3:
			if (__LIB_0__::func_715(Local_1453[0 /*25*/]))
			{
				PED::SET_PED_RESET_FLAG(Local_1453[0 /*25*/], 156, true);
			}
			if (__LIB_0__::func_715(Local_1453[1 /*25*/]))
			{
				PED::SET_PED_RESET_FLAG(Local_1453[1 /*25*/], 156, true);
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[9]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[9]) == 1f) || (PED::IS_PED_INJURED(Local_1453[0 /*25*/]) || PED::IS_PED_INJURED(Local_1453[1 /*25*/])))
			{
				iVar1 = 0;
				while (iVar1 <= (Local_1453.f_0 - 1))
				{
					if (__LIB_0__::func_715(Local_1453[iVar1 /*25*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_1453[iVar1 /*25*/]);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1453[iVar1 /*25*/], 250f, 0);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 <= (Local_1453.f_0 - 1))
				{
					if (__LIB_0__::func_715(Local_1453[iVar1 /*25*/]))
					{
						func_716(&(Local_1453[iVar1 /*25*/]));
						PED::SET_PED_RESET_FLAG(Local_1453[iVar1 /*25*/], 156, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1453[iVar1 /*25*/], false);
					}
					iVar1++;
				}
				iLocal_1725 = 1;
				iLocal_1923 = 4;
			}
			break;
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-920027322) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-58432001) != 0f)
			{
				func_788(0);
			}
			else
			{
				iLocal_1923 = 5;
			}
			break;
	}
}

void func_788(bool bParam0)//Position - 0x8640F
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-920027322, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-58432001, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-920027322, iVar0, true, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-58432001, iVar0, true, true);
}

int func_789(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)//Position - 0x86457
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam8 - 1))
	{
		if (__LIB_0__::func_715((*iParam8)[iVar0 /*25*/]))
		{
			if (__LIB_37__::func_929(&uParam0, (*iParam8)[iVar0 /*25*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_790()//Position - 0x8649C
{
	if (fLocal_1807 <= -1f && fLocal_1808 >= 1f)
	{
		return;
	}
	if (fLocal_1807 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-920027322, fLocal_1807, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-920027322, 1, true, true);
		fLocal_1807 = (fLocal_1807 - fLocal_1806);
	}
	if (fLocal_1808 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-58432001, fLocal_1808, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-58432001, 1, true, true);
		fLocal_1808 = (fLocal_1808 + fLocal_1806);
	}
}

void func_791()//Position - 0x86511
{
	struct<2> Var0;
	int iVar1;
	if (iLocal_1922 > 1)
	{
		func_732(&Local_1480, 1);
		if (!iLocal_1979)
		{
			if (__LIB_0__::func_715(Local_1480[1 /*25*/]))
			{
				__LIB_0__::func_222(&uLocal_95, 14, Local_1480[1 /*25*/], "MERRYWEATHERE", 0, 1);
				if (func_519("M3_IG8"))
				{
					iLocal_1979 = 1;
				}
			}
			else
			{
				iLocal_1979 = 1;
			}
		}
	}
	switch (iLocal_1922)
	{
		case 0:
			iLocal_1981 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-2280.597f, 265.432f, 184.9264f, 1f, joaat("prop_ch1_07_door_01l"), false, false, true);
			iLocal_1982 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-2278.0386f, 266.5699f, 184.9264f, 1f, joaat("prop_ch1_07_door_01r"), false, false, true);
			fLocal_1811 = 0f;
			fLocal_1812 = 0f;
			__LIB_1__::func_31(&iLocal_1934);
			iLocal_1922++;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1934) >= 10f)
			{
				iVar1 = 0;
				while (iVar1 <= (Local_1480.f_0 - 1))
				{
					if (iVar1 != 2 && iVar1 != 4)
					{
						StringCopy(&Var0, "MW_IG8_", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_723(&(Local_1480[iVar1 /*25*/]), iLocal_64, -2262.7842f, 225.3247f, 193.651f, 0f, &Var0, iLocal_292, iLocal_76, 5, 0, 0, 0);
						func_745(&(Local_1480[iVar1 /*25*/]));
						if (__LIB_0__::func_715(Local_1480[iVar1 /*25*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1981))
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1480[iVar1 /*25*/], iLocal_1981, false);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1982))
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1480[iVar1 /*25*/], iLocal_1982, false);
							}
						}
					}
					iVar1++;
				}
				iLocal_302[10] = PED::CREATE_SYNCHRONIZED_SCENE(-2262.7842f, 225.3247f, 193.651f, 0f, 0f, 0f, 2);
				if (__LIB_0__::func_715(Local_1480[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1480[0 /*25*/], iLocal_302[10], cLocal_60, "mw01run_into_cover", 8f, -1000f, 4, 64, 1000f, 0);
				}
				if (__LIB_0__::func_715(Local_1480[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1480[1 /*25*/], iLocal_302[10], cLocal_60, "mw02run_into_cover", 8f, -1000f, 4, 64, 1000f, 0);
				}
				if (__LIB_0__::func_715(Local_1480[3 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1480[3 /*25*/], iLocal_302[10], cLocal_60, "mw04run_into_cover", 8f, -1000f, 4, 64, 1000f, 0);
				}
				if (bLocal_1973)
				{
					iLocal_1918 = 17;
				}
				iLocal_1922 = 2;
			}
			break;
		case 2:
			func_793();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[10]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[10]) >= 0.3f)
				{
					if (func_789(Local_1951, &Local_1480) == 0)
					{
						func_792(0);
						iLocal_1922 = 3;
					}
				}
			}
			else
			{
				iLocal_1922 = 3;
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[10]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[10]) == 1f)
				{
					iVar1 = 0;
					while (iVar1 <= (Local_1480.f_0 - 1))
					{
						if (__LIB_0__::func_715(Local_1480[iVar1 /*25*/]))
						{
							func_714(1);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1672[iVar1 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), true, 0f, false, Local_1672[iVar1 /*7*/].f_2, Local_1672[iVar1 /*7*/], false);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
							func_712(Local_1480[iVar1 /*25*/], 1);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1480[iVar1 /*25*/], false, false);
							func_716(&(Local_1480[iVar1 /*25*/]));
						}
						iVar1++;
					}
					iLocal_1922 = 4;
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 <= (Local_1480.f_0 - 1))
				{
					if (__LIB_0__::func_715(Local_1480[iVar1 /*25*/]))
					{
						func_714(1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1672[iVar1 /*7*/].f_3, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1672[iVar1 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), true, 0f, false, Local_1672[iVar1 /*7*/].f_2, Local_1672[iVar1 /*7*/], false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_712(Local_1480[iVar1 /*25*/], 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1480[iVar1 /*25*/], false, false);
						func_716(&(Local_1480[iVar1 /*25*/]));
					}
					iVar1++;
				}
				func_792(0);
				iLocal_1922 = 4;
			}
			break;
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-2007378629) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-2007378629) != 0f)
			{
				func_792(0);
			}
			else
			{
				iLocal_1922 = 5;
			}
			break;
	}
}

void func_792(bool bParam0)//Position - 0x86948
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2007378629, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(418772613, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2007378629, iVar0, true, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(418772613, iVar0, true, true);
}

void func_793()//Position - 0x86990
{
	if (fLocal_1811 <= -1f && fLocal_1812 >= 1f)
	{
		return;
	}
	if (fLocal_1811 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2007378629, fLocal_1811, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2007378629, 1, true, true);
		fLocal_1811 = (fLocal_1811 - fLocal_1806);
	}
	if (fLocal_1812 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(418772613, fLocal_1812, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(418772613, 1, true, true);
		fLocal_1812 = (fLocal_1812 + fLocal_1806);
	}
}

void func_794()//Position - 0x86A05
{
	if (iLocal_1921 > 1)
	{
		func_733(&iLocal_1455, 1);
	}
	if (iLocal_1921 > 2)
	{
		if (!iLocal_1978)
		{
			if (__LIB_0__::func_715(iLocal_1455))
			{
				__LIB_0__::func_222(&uLocal_95, 13, iLocal_1455, "MERRYWEATHERD", 0, 1);
				if (func_519("M3_IG7"))
				{
					iLocal_1978 = 1;
				}
			}
			else
			{
				iLocal_1978 = 1;
			}
		}
	}
	switch (iLocal_1921)
	{
		case 0:
			iLocal_1921 = 1;
			fLocal_1809 = 0f;
			fLocal_1810 = 0f;
			break;
		case 1:
			if (__LIB_38__::func_175(&Local_1949))
			{
				func_723(&iLocal_1455, iLocal_64, -2255.192f, 322.262f, 184.926f, 0f, "MW_IG7", iLocal_292, iLocal_76, 10, 0, 0, 0);
				func_745(&iLocal_1455);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1455, true);
				iLocal_302[8] = PED::CREATE_SYNCHRONIZED_SCENE(-2255.192f, 322.262f, 184.926f, 0f, 0f, 113.91f, 2);
				if (__LIB_0__::func_715(iLocal_1455))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1455, iLocal_302[8], cLocal_62, "WALKWAY_B", 8f, -1000f, 1, 0, 1000f, 0);
				}
				iLocal_1921 = 2;
			}
			break;
		case 2:
			if (func_797(iLocal_1455) < 1f)
			{
				if (__LIB_0__::func_715(iLocal_1455))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1455);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1455, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1455, -2258.9602f, 319.14108f, 183.60211f, 3f, true, false);
					func_714(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2258.9602f, 319.14108f, 183.60211f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
					func_712(iLocal_1455, 1);
					iLocal_1921 = 100;
				}
			}
			func_796();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[8]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[8]) >= 0.3f)
				{
					if (!__LIB_37__::func_929(&Local_1950, iLocal_1455))
					{
						func_795(0);
						iLocal_1921 = 3;
					}
				}
			}
			break;
		case 100:
			func_795(0);
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1455, false) || __LIB_0__::func_724(iLocal_1455, -2263.2131f, 317.12668f, 183.60211f, 1) <= 5f)
			{
				func_716(&iLocal_1455);
				iLocal_1921 = 4;
			}
			break;
		case 3:
			if (func_797(iLocal_1455) == 1f)
			{
				if (__LIB_0__::func_715(iLocal_1455))
				{
					PED::SET_PED_RESET_FLAG(iLocal_1455, 156, true);
				}
			}
			else
			{
				if (__LIB_0__::func_715(iLocal_1455))
				{
					TASK::CLEAR_PED_TASKS(iLocal_1455);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1455, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1455, -2263.2131f, 317.12668f, 183.60211f, 3f, true, false);
					func_716(&iLocal_1455);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_1455, 100f, 0);
				}
				iLocal_1921 = 4;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[8]))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[8]) == 1f)
				{
					if (__LIB_0__::func_715(iLocal_1455))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_1455, 100f, 0);
						func_716(&iLocal_1455);
						PED::SET_PED_RESET_FLAG(iLocal_1455, 156, true);
					}
					iLocal_1921 = 4;
				}
			}
			break;
		case 4:
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-722798986) != 0f || OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(204301578) != 0f)
			{
				func_795(0);
			}
			else
			{
				iLocal_1921 = 5;
			}
			break;
	}
}

void func_795(bool bParam0)//Position - 0x86D20
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 1;
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-722798986, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(204301578, 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-722798986, iVar0, true, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(204301578, iVar0, true, true);
}

void func_796()//Position - 0x86D68
{
	if (fLocal_1809 <= -1f && fLocal_1810 >= 1f)
	{
		return;
	}
	if (fLocal_1809 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-722798986, fLocal_1809, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-722798986, 1, true, true);
		fLocal_1809 = (fLocal_1809 - fLocal_1806);
	}
	if (fLocal_1810 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(204301578, fLocal_1810, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(204301578, 1, true, true);
		fLocal_1810 = (fLocal_1810 + fLocal_1806);
	}
}

float func_797(int iParam0)//Position - 0x86DDD
{
	if (!__LIB_0__::func_715(iParam0))
	{
		return 0f;
	}
	return (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)));
}

void func_798()//Position - 0x86E08
{
	struct<2> Var0;
	int iVar1;
	if (iLocal_1920 > 1)
	{
		func_732(&Local_1452, 1);
	}
	switch (iLocal_1920)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1931);
			iLocal_1920++;
			break;
		case 1:
			if (__LIB_38__::func_175(&Local_1948))
			{
				iVar1 = 0;
				while (iVar1 <= (Local_1452.f_0 - 1))
				{
					StringCopy(&Var0, "WKWAY_FIB1_", 16);
					StringIntConCat(&Var0, iVar1, 16);
					func_723(&(Local_1452[iVar1 /*25*/]), iLocal_65, 0f, 0f, 0f, 0f, &Var0, iLocal_294, iLocal_75, 5, 0, 0, 0);
					func_745(&(Local_1452[iVar1 /*25*/]));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1452[iVar1 /*25*/], true);
					iVar1++;
				}
				iLocal_302[7] = PED::CREATE_SYNCHRONIZED_SCENE(-2225.181f, 271.275f, 183.599f, 0f, 0f, 111.5f, 2);
				if (__LIB_0__::func_715(Local_1452[0 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1452[0 /*25*/], iLocal_302[7], cLocal_61, "SWAT_RUN_2_COVER_A", 8f, -1000f, 0, 0, 1000f, 0);
				}
				if (__LIB_0__::func_715(Local_1452[1 /*25*/]))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(Local_1452[1 /*25*/], iLocal_302[7], cLocal_61, "SWAT_RUN_2_COVER_B", 8f, -1000f, 0, 0, 1000f, 0);
				}
				if (__LIB_0__::func_715(Local_1452[2 /*25*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_1452[2 /*25*/], -2225.957f, 281.2627f, 183.60408f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_1452[2 /*25*/], 203f);
					func_716(&(Local_1452[2 /*25*/]));
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1452[2 /*25*/], -2231.0403f, 279.0294f, 183.60408f, 3f, true, false);
					func_714(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2231.0403f, 279.0294f, 183.60408f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					func_712(Local_1452[2 /*25*/], 1);
				}
				if (bLocal_1973)
				{
					iLocal_1918 = 9;
				}
				if (__LIB_14__::func_466() == 2)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[7], 0f);
				}
				else if (__LIB_14__::func_466() == 0)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[7], 0.2f);
				}
				iLocal_1920 = 2;
			}
			break;
		case 2:
			if (((((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[7]) == 1f || (PED::IS_PED_INJURED(Local_1452[0 /*25*/]) || PED::IS_PED_INJURED(Local_1452[1 /*25*/]))) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1452[0 /*25*/], false)) < 100f) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1452[1 /*25*/], false)) < 100f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1452[0 /*25*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1452[1 /*25*/], PLAYER::PLAYER_PED_ID(), true))
			{
				if (__LIB_0__::func_715(Local_1452[0 /*25*/]) && !PED::IS_PED_INJURED(Local_1452[0 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[7]) == 1f)
					{
						func_714(1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1673[0 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), true, 0f, false, Local_1673[0 /*7*/].f_2, Local_1673[0 /*7*/], false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_712(Local_1452[0 /*25*/], 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1452[0 /*25*/], false, false);
					}
					else if (__LIB_0__::func_715(Local_1452[0 /*25*/]) && !PED::IS_PED_INJURED(Local_1452[0 /*25*/]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1452[0 /*25*/], 250f, 0);
					}
				}
				if (__LIB_0__::func_715(Local_1452[1 /*25*/]) && !PED::IS_PED_INJURED(Local_1452[1 /*25*/]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[7]) == 1f)
					{
						func_714(1);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1673[1 /*7*/].f_3, MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000), true, 0f, false, Local_1673[1 /*7*/].f_2, Local_1673[1 /*7*/], false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 250f, 0);
						func_712(Local_1452[1 /*25*/], 1);
					}
					else if (__LIB_0__::func_715(Local_1452[1 /*25*/]) && !PED::IS_PED_INJURED(Local_1452[1 /*25*/]))
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1452[1 /*25*/], 250f, 0);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1452[1 /*25*/], false, false);
				}
				func_716(&(Local_1452[0 /*25*/]));
				func_716(&(Local_1452[1 /*25*/]));
				iLocal_1920 = 3;
			}
			break;
	}
}

void func_799()//Position - 0x87247
{
	switch (iLocal_1919)
	{
		case 0:
			if (__LIB_14__::func_466() == 0)
			{
				func_801();
				__LIB_1__::func_31(&iLocal_1943);
				iLocal_1919 = 1;
			}
			break;
		case 1:
			if (__LIB_14__::func_466() == 2)
			{
				func_800();
				iLocal_1919 = 0;
			}
			if (__LIB_2__::func_572(&iLocal_1943) >= 5f)
			{
				func_800();
				iLocal_1919 = 2;
			}
			break;
		case 2:
			if (__LIB_14__::func_466() == 2)
			{
				iLocal_1919 = 0;
			}
			break;
		case 3:
			break;
	}
}

void func_800()//Position - 0x872C2
{
	if (iLocal_1970)
	{
		func_764(&Local_1562, 1);
		func_764(&Local_1561, 1);
		func_764(&Local_1563, 1);
	}
	else
	{
		func_764(&Local_1562, 5);
		func_764(&Local_1561, 5);
		func_764(&Local_1563, 5);
	}
	func_764(&Local_1532, 2);
	func_764(&iLocal_1481, 10);
	func_764(&Local_1533, 5);
	func_764(&Local_1534, 2);
	func_764(&Local_1452, 5);
	if (__LIB_0__::func_715(iLocal_1455))
	{
		PED::SET_PED_ACCURACY(iLocal_1455, 5);
	}
	func_764(&Local_1480, 5);
	func_764(&Local_1453, 5);
	func_764(&Local_1454, 5);
}

void func_801()//Position - 0x87356
{
	func_764(&Local_1562, 0);
	func_764(&Local_1561, 0);
	func_764(&Local_1563, 0);
	func_764(&Local_1532, 0);
	func_764(&iLocal_1481, 0);
	func_764(&Local_1533, 0);
	func_764(&Local_1534, 0);
	func_764(&Local_1452, 0);
	if (__LIB_0__::func_715(iLocal_1455))
	{
		PED::SET_PED_ACCURACY(iLocal_1455, 0);
	}
	func_764(&Local_1480, 0);
	func_764(&Local_1453, 0);
	func_764(&Local_1454, 0);
}

void func_802()//Position - 0x873C8
{
	if (!iLocal_1966)
	{
		if (__LIB_38__::func_175(&Local_1953))
		{
			func_803(&(Local_1532[0 /*25*/]), iLocal_65, -2217.3992f, 288.01218f, 183.60303f, 203.2528f, -2225.8625f, 279.071f, 183.60408f, "WKWAY_FIB2_1", 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1532[0 /*25*/], false);
			func_714(1);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2223.1887f, 281.20486f, 183.60408f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
			func_712(Local_1532[0 /*25*/], 1);
			func_745(&(Local_1532[0 /*25*/]));
			iLocal_1966 = 1;
		}
	}
	if (!iLocal_1967)
	{
		if (__LIB_38__::func_175(&Local_1954))
		{
			func_723(&(Local_1533[1 /*25*/]), iLocal_64, -2254.1594f, 318.98264f, 183.60127f, 203f, "WKWAY_MW2_2", iLocal_292, iLocal_76, 5, 0, 0, 0);
			func_716(&(Local_1533[1 /*25*/]));
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1533[1 /*25*/], -2247.461f, 305.55252f, 183.60199f, 2f, true, false);
			func_714(1);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -2247.461f, 305.55252f, 183.60199f, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
			func_712(Local_1533[1 /*25*/], 1);
			func_745(&(Local_1533[1 /*25*/]));
			iLocal_1918 = 5;
			iLocal_1967 = 1;
		}
	}
	if (!iLocal_1968)
	{
		if (__LIB_38__::func_175(&Local_1955))
		{
			func_723(&(Local_1534[0 /*25*/]), iLocal_64, -2286.0552f, 310.08865f, 183.60109f, 203.2528f, "WKWAY_MW3_1", iLocal_292, iLocal_76, 5, 0, 0, 0);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1534[0 /*25*/], false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1534[0 /*25*/], -2282.8877f, 308.17365f, 183.60211f, 2.5f, true, false);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1534[0 /*25*/], 1);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1534[0 /*25*/], 200f, 0);
			func_745(&(Local_1534[0 /*25*/]));
			iLocal_1968 = 1;
		}
	}
	if (!iLocal_1969)
	{
		if (__LIB_38__::func_175(&Local_1956))
		{
			iLocal_1969 = 1;
			iLocal_1411 = 1;
		}
	}
}

void func_803(int* iParam0, int iParam1, struct<3> Param2, float fParam3, struct<3> Param4, char* sParam5, bool bParam6)//Position - 0x875F2
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case joaat("S_M_Y_Swat_01"):
			iVar0 = iLocal_291;
			iVar1 = iLocal_75;
			break;
		case joaat("S_M_M_CIASec_01"):
			iVar0 = iLocal_293;
			iVar1 = iLocal_73;
			break;
		case joaat("S_M_Y_BlackOps_01"):
			iVar0 = iLocal_292;
			iVar1 = iLocal_76;
			break;
		default:
			iVar0 = iLocal_293;
			iVar1 = iLocal_73;
			break;
	}
	func_723(iParam0, iParam1, Param2, fParam3, sParam5, iVar0, iVar1, 2, 0, 0, 0);
	func_765(iParam0, Param4, 1f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, false);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam0, 100f, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, bParam6);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
	func_716(iParam0);
}

void func_804()//Position - 0x876B3
{
	int iVar0;
	if (bLocal_1973)
	{
		func_809();
		func_808();
		func_807();
		func_806();
	}
	if (!iLocal_1972)
	{
		if (__LIB_37__::func_929(&Local_1960, func_28()))
		{
			func_805(&Local_1562);
			func_805(&Local_1561);
			func_805(&Local_1563);
			iLocal_1972 = 1;
			iLocal_1411 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2298.768f, 337.793f, 182.35165f, -2275.3313f, 284.90732f, 187.35182f, 9.75f, false, true, 0))
	{
		iLocal_1929 = 1;
	}
	if (!iLocal_1930)
	{
		if (iLocal_1929)
		{
			if (func_519("M3_DFDVWARC"))
			{
				iLocal_1929 = 0;
				iLocal_1930 = 1;
				iLocal_1974 = 0;
			}
		}
	}
	switch (iLocal_1918)
	{
		case 0:
			bLocal_1973 = false;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_519("M3_DVTOFNT"))
				{
					iLocal_1918 = 1;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_519("M3_MAKEPLAY"))
				{
					iLocal_1918 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&iLocal_263, 0))
			{
				__LIB_0__::func_229("M3_02", 7500, 1);
				__LIB_13__::func_808(&iLocal_297);
				iLocal_297 = HUD::ADD_BLIP_FOR_COORD(-2247.7317f, 268.95413f, 173.60196f);
				bLocal_1973 = true;
				iLocal_94 = 1;
				iLocal_1974 = 1;
				iLocal_1918 = 20;
			}
			break;
		case 3:
			if (func_519("M3_ESC1"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 4:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_519("M3_MOREFIB2"))
				{
					iLocal_1918 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_519("M3_MFIBM"))
				{
					iLocal_1918 = 20;
				}
			}
			break;
		case 5:
			if (func_519("M3_DFMIMWRCT"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 6:
			if (func_519("M3_DFMIMWWV3"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 7:
			if (func_519("M3_DFMICIARC"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 8:
			if (func_519("DFDVDWNST"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 9:
			if (func_519("M3_MOREFIB"))
			{
				iLocal_1918 = 20;
			}
			break;
		case 10:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_519("M3_MOVEUP"))
				{
					iLocal_1918 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (func_519("M3_SNIPEM"))
				{
					iLocal_1918 = 20;
				}
			}
			break;
		case 17:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_519("M3_GUYLEFT"))
				{
					iLocal_1918 = 20;
				}
			}
			else if (iVar0 == 1)
			{
				if (__LIB_14__::func_466() == 2)
				{
					if (func_519("M3_TBUILD"))
					{
						iLocal_1918 = 20;
					}
				}
				else if (__LIB_14__::func_466() == 0)
				{
					if (func_519("M3_MBUILD"))
					{
						iLocal_1918 = 20;
					}
				}
			}
			break;
		case 19:
			if (func_519("M3_TFIBM"))
			{
				iLocal_1918 = 20;
			}
			break;
	}
}

void func_805(int iParam0)//Position - 0x87998
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iVar0 /*25*/]);
			TASK::TASK_COMBAT_PED((*iParam0)[iVar0 /*25*/], PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		iVar0++;
	}
}

void func_806()//Position - 0x879DE
{
	switch (iLocal_1989)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1986);
			iLocal_1989 = 1;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1986) >= 19f)
			{
				if (func_519("M3_CHAT1"))
				{
					iLocal_1989 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&iLocal_263, 1))
			{
				if (func_519("M3_CHAT2"))
				{
					__LIB_1__::func_31(&iLocal_1986);
					iLocal_1989 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_572(&iLocal_1986) >= 15f)
			{
				if (func_519("M3_CHAT3"))
				{
					__LIB_1__::func_31(&iLocal_1986);
					iLocal_1989 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_572(&iLocal_1986) >= 15f)
			{
				if (func_519("M3_CHAT4"))
				{
					iLocal_1989 = 5;
				}
			}
			break;
		case 5:
			if (!__LIB_13__::func_755(&iLocal_263, 1))
			{
				if (func_519("M3_CHAT5"))
				{
					iLocal_1989 = 6;
				}
			}
			break;
	}
}

void func_807()//Position - 0x87AD5
{
	switch (iLocal_1925)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1940);
			iLocal_1925 = 1;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1940) >= 60f)
			{
				if (__LIB_38__::func_175(&Local_1963))
				{
					if (func_519("M3_REMIND"))
					{
						iLocal_1925 = 2;
					}
				}
			}
			break;
	}
}

void func_808()//Position - 0x87B2C
{
	switch (iLocal_1924)
	{
		case 0:
			if (iLocal_1965)
			{
				iLocal_1924++;
			}
			break;
		case 1:
			if ((__LIB_38__::func_175(&Local_1959) && CAM::IS_SPHERE_VISIBLE(-2275.6226f, 331.0665f, 185.06528f, 1f)) && func_718(&iLocal_1481) != 0)
			{
				if (bLocal_1973)
				{
					iLocal_1918 = 7;
				}
				iLocal_1924++;
			}
			break;
	}
}

void func_809()//Position - 0x87B9F
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_572(&iLocal_1422) >= 15f && !__LIB_13__::func_755(&iLocal_263, 1))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar1 == 0)
				{
					if (func_666("M3_DFMIWAR"))
					{
						__LIB_1__::func_31(&iLocal_1422);
					}
				}
				else if (iVar1 == 1)
				{
					if (func_666("M3_FRAY"))
					{
						__LIB_1__::func_31(&iLocal_1422);
					}
				}
				break;
			case 1:
				if (!iLocal_1970)
				{
					if (func_666("M3_DFDVWAR"))
					{
						__LIB_1__::func_31(&iLocal_1422);
					}
				}
				else if (func_666("M3_DFDVWARCY"))
				{
					__LIB_1__::func_31(&iLocal_1422);
				}
				break;
			case 2:
				if (func_519("M3_DFTRWAR"))
				{
					__LIB_1__::func_31(&iLocal_1422);
				}
				break;
			}
	}
}

void func_810()//Position - 0x87C6F
{
	int iVar0;
	if (iLocal_1901 > 1)
	{
		func_731();
		func_815();
		func_814();
		if (!iLocal_1914)
		{
			func_813();
		}
	}
	if (__LIB_0__::func_715(iLocal_1415))
	{
		PED::SET_PED_RESET_FLAG(iLocal_1415, 64, true);
	}
	if (bLocal_1322)
	{
		func_644();
	}
	switch (iLocal_1901)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, iLocal_65);
			__LIB_16__::func_852(&uLocal_304, iLocal_66);
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			func_811();
			iLocal_1908 = 0;
			iLocal_1912 = 0;
			iLocal_1913 = 0;
			iLocal_1914 = 0;
			iLocal_1915 = 0;
			iLocal_1902 = 0;
			iLocal_1903 = 0;
			iLocal_1901 = 1;
			break;
		case 1:
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_65) && STREAMING::HAS_MODEL_LOADED(iLocal_66)) && STREAMING::HAS_MODEL_LOADED(iLocal_64))
			{
				__LIB_43__::func_516(3, "TREVOR SAVES DAVE", 0, 0, 0, 1);
				func_771();
				AUDIO::STOP_AUDIO_SCENE("MI_3_HELICOPTER_CRASH_SCENE");
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
				if (__LIB_0__::func_715(func_28()))
				{
					PED::SET_PED_COMBAT_MOVEMENT(func_28(), 1);
					ENTITY::FREEZE_ENTITY_POSITION(func_28(), false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), Local_1756.f_3, 5f, false, false);
					PED::SET_PED_ACCURACY(func_28(), 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1756.f_3, -1, false, 0f, true, false, Local_1756.f_0, false);
				}
				if (__LIB_0__::func_715(iLocal_1415))
				{
					PED::SET_PED_ACCURACY(iLocal_1415, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1415, false);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, -2219.345f, 247.31598f, 173.60182f, 2f, false, false);
					func_714(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2219.345f, 247.31598f, 173.60182f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -2219.345f, 247.31598f, 173.60182f, -1, true, 0f, true, true, 0, true);
					func_712(iLocal_1415, 1);
				}
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
				}
				__LIB_1__::func_31(&iLocal_1422);
				iLocal_1901 = 2;
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		case 2:
			if (func_743(&Local_1671, &Local_1451, &Local_1671) == 0)
			{
				func_21();
				iLocal_1901 = 4;
			}
			if (!iLocal_1914)
			{
				if (func_743(&Local_1671, &Local_1451, &Local_1671) <= 2)
				{
					iVar0 = 0;
					while (iVar0 <= (Local_1451.f_0 - 1))
					{
						if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]))
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_1451[iVar0 /*25*/], false);
							__LIB_39__::func_107(Local_1451[iVar0 /*25*/], Local_1906, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1451[iVar0 /*25*/], 0, false);
						}
						iVar0++;
					}
					iLocal_1914 = 1;
				}
			}
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 <= (Local_1451.f_0 - 1))
			{
				func_22(&(Local_1451[iVar0 /*25*/].f_1));
				if (PED::IS_PED_INJURED(Local_1451[iVar0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1451[iVar0 /*25*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_1451[iVar0 /*25*/], 0, 0);
				}
				iVar0++;
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, true, true, false, false, false);
			func_49(5);
			TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
			iLocal_1901 = 3;
			break;
		case 3:
			break;
	}
}

void func_811()//Position - 0x87F93
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iLocal_1916[iVar0] = 0;
		iVar0++;
	}
	func_812();
	Local_1904 = { __LIB_37__::func_928(-2214.0854f, 241.26868f, 173.35182f, -2231.8704f, 282.64905f, 177.10196f, 7.75f) };
	Local_1905 = { __LIB_37__::func_928(-2247.5515f, 268.05148f, 173.35196f, -2271.443f, 322.2572f, 177.30186f, 13f) };
	Local_1906 = { __LIB_37__::func_928(-2234.7288f, 258.72607f, 173.35196f, -2241.87f, 278.08176f, 176.35196f, 20f) };
	Local_1907 = { __LIB_37__::func_928(-2222.3882f, 241.80156f, 173.35182f, -2223.634f, 246.75194f, 175.60182f, 4f) };
	TASK::ADD_COVER_BLOCKING_AREA(Vector(174.60196f, 266.19098f, -2246.6523f) + Vector(1f, 2f, 2.25f), Vector(174.60196f, 266.19098f, -2246.6523f) - Vector(1f, 2f, 2.25f), true, true, true, false);
}

void func_812()//Position - 0x880A3
{
	iLocal_90[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2265.381f, 275.608f, 173.895f, 20f, 20f, 5f, __LIB_12__::func_418(23.956f), false, 7);
	iLocal_90[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2272.281f, 294.308f, 173.895f, 20f, 20f, 5f, __LIB_12__::func_418(23.956f), false, 7);
	iLocal_90[2] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2254.881f, 302.108f, 173.895f, 20f, 20f, 5f, __LIB_12__::func_418(23.956f), false, 7);
	iLocal_90[3] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2236.681f, 310.608f, 173.895f, 20f, 20f, 5f, __LIB_12__::func_418(23.956f), false, 7);
	iLocal_90[5] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2214.814f, 295.635f, 174.033f, 6.6f, 20f, 4f, __LIB_12__::func_418(25.016f), false, 7);
}

void func_813()//Position - 0x88191
{
	int iVar0;
	switch (iLocal_1902)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1909);
			iLocal_1915 = 0;
			iLocal_1902 = 1;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1909) >= 10f)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_1916 - 1))
				{
					if (!iLocal_1915)
					{
						if (!iLocal_1916[iVar0])
						{
							if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]))
							{
								iLocal_1916[iVar0] = 1;
								iLocal_1915 = 1;
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_1451[iVar0 /*25*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1451[iVar0 /*25*/], ENTITY::GET_ENTITY_COORDS(iLocal_1415, true), 3f, false, false);
								PED::SET_PED_COMBAT_RANGE(Local_1451[iVar0 /*25*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1451[iVar0 /*25*/], 1);
								iLocal_1902 = 0;
							}
							else
							{
								iLocal_1916[iVar0] = 1;
							}
						}
					}
					iVar0++;
				}
			}
			break;
		case 2:
			break;
	}
}

void func_814()//Position - 0x88266
{
	int iVar0;
	switch (iLocal_1908)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= (Local_1451.f_0 - 1))
			{
				if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]) && __LIB_0__::func_715(iLocal_1415))
				{
					if (__LIB_0__::func_76(iLocal_1415, Local_1451[iVar0 /*25*/], 1) <= 7.5f)
					{
						iLocal_1908++;
					}
				}
				iVar0++;
			}
			break;
		case 1:
			if (__LIB_0__::func_715(iLocal_1415))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1415, false, false, false, false, false, false, false, false);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
				__LIB_39__::func_107(iLocal_1415, Local_1907, 1, 0);
			}
			iVar0 = 0;
			while (iVar0 <= (Local_1451.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1451[iVar0 /*25*/]))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(Local_1451[iVar0 /*25*/], true))
					{
					}
				}
				iVar0++;
			}
			iLocal_1908++;
			break;
	}
}

void func_815()//Position - 0x8834C
{
	int iVar0;
	func_817();
	func_816();
	switch (iLocal_1903)
	{
		case 0:
			if (func_519("M3_TDSTART"))
			{
				iLocal_1903 = 1;
			}
			break;
		case 1:
			if (func_519("M3_DEBATE"))
			{
				iLocal_1903 = 2;
			}
			break;
		case 2:
			if (!__LIB_13__::func_755(&iLocal_263, 0))
			{
				__LIB_0__::func_229("M3_OBJSVDV", 7500, 1);
				iLocal_1903 = 20;
			}
			break;
	}
	if (!iLocal_1912)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1451.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]))
			{
				if (__LIB_37__::func_929(&Local_1904, Local_1451[iVar0 /*25*/]))
				{
					if (func_519("M3_COLUMN"))
					{
						iLocal_1912 = 1;
					}
				}
			}
			iVar0++;
		}
	}
	if (!iLocal_1913)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_1451.f_0 - 1))
		{
			if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]))
			{
				if (__LIB_37__::func_929(&Local_1905, Local_1451[iVar0 /*25*/]))
				{
					if (func_519("M3_POOL"))
					{
						iLocal_1913 = 1;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_816()//Position - 0x88455
{
	int iVar0;
	if ((!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_13__::func_755(&iLocal_263, 1)) && PED::HAS_PED_RECEIVED_EVENT(func_28(), 125))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iVar0)
		{
			case 0:
				func_519("M3_TDMIRCT1");
				break;
			case 1:
				func_519("M3_TDMIRCT2");
				break;
			case 2:
				func_519("M3_TDMIRCT3");
				break;
			}
	}
}

void func_817()//Position - 0x884CA
{
	int iVar0;
	if (__LIB_0__::func_715(iLocal_1415))
	{
		if ((__LIB_2__::func_572(&iLocal_1422) >= 10f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_13__::func_755(&iLocal_263, 1))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_666("M3_TDDVPLEA"))
				{
					__LIB_1__::func_31(&iLocal_1422);
				}
			}
			else if (iVar0 == 1)
			{
				if (func_666("M3_TROUBLE"))
				{
					iLocal_1903 = 20;
				}
			}
		}
	}
}

void func_818()//Position - 0x8853F
{
	if (iLocal_1868 > 1)
	{
		func_833();
		func_644();
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	switch (iLocal_1868)
	{
		case 0:
			iLocal_1870 = 0;
			iLocal_1876 = 0;
			iLocal_1869 = 20;
			iLocal_1898 = 0;
			iLocal_1897 = 0;
			bLocal_1874 = false;
			iLocal_1896 = 0;
			iLocal_1872 = 0;
			iLocal_1873 = 1;
			iLocal_1871 = 0;
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, iLocal_68);
			__LIB_16__::func_853(&uLocal_304, 50, &Local_77);
			__LIB_16__::func_857(&uLocal_304, cLocal_63);
			CUTSCENE::REQUEST_CUTSCENE(sLocal_59, 8);
			AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0);
			iLocal_1868 = 1;
			break;
		case 1:
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_68) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, &Local_77)) && STREAMING::HAS_ANIM_DICT_LOADED(cLocal_63)) && CUTSCENE::HAS_CUTSCENE_LOADED()) && AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0))
			{
				iLocal_1868 = 2;
			}
			break;
		case 2:
			if (func_826())
			{
				__LIB_1__::func_31(&iLocal_1893);
				iLocal_1868 = 3;
			}
			break;
		case 3:
			PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
			if (func_819())
			{
				iLocal_1868 = 4;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			}
			break;
		case 4:
			iLocal_1868 = 5;
			STREAMING::REMOVE_ANIM_DICT(cLocal_63);
			ENTITY::SET_ENTITY_INVINCIBLE(func_28(), false);
			ENTITY::SET_ENTITY_PROOFS(func_28(), true, false, false, true, true, false, false, false);
			func_49(4);
			break;
		case 5:
			break;
	}
}

int func_819()//Position - 0x886B1
{
	switch (iLocal_1876)
	{
		case 0:
			if (__LIB_0__::func_715(Local_298[51 /*25*/]) && __LIB_0__::func_715(Local_299[1 /*7*/]))
			{
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_298[51 /*25*/], 1000);
				ENTITY::SET_ENTITY_HEALTH(Local_298[51 /*25*/], 1000, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_298[51 /*25*/], false, false, false, false, false, false, false, false);
				PED::SET_PED_SHOOT_RATE(Local_298[51 /*25*/], 100);
				PED::SET_PED_FIRING_PATTERN(Local_298[51 /*25*/], joaat("FIRING_PATTERN_FULL_AUTO"));
				ENTITY::SET_ENTITY_INVINCIBLE(Local_298[51 /*25*/], false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_298[51 /*25*/], true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_298[51 /*25*/], false);
				ENTITY::SET_ENTITY_PROOFS(Local_299[1 /*7*/], false, true, true, false, false, false, false, false);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_299[1 /*7*/], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_299[1 /*7*/], false);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_299[1 /*7*/], false);
			}
			func_162(1, 1, 1, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[51 /*25*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_TREVOR_SHOOTS_HELICOPTER"))
			{
				AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
			}
			if (__LIB_0__::func_715(iLocal_1415))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1415, false);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			__LIB_1__::func_31(&iLocal_1887);
			__LIB_1__::func_31(&iLocal_1890);
			iLocal_1869 = 0;
			iLocal_1871 = 1;
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[51 /*25*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
			TASK::TASK_HELI_MISSION(Local_298[51 /*25*/], Local_299[1 /*7*/], 0, func_28(), -2219.42f, 247.11412f, 183.62267f, 6, 10f, 50f, -1f, 191, 16, -1f, 0);
			__LIB_43__::func_516(2, "TREVOR SHOOTS HELICOPTER", 0, 0, 0, 1);
			iLocal_1876 = 1;
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			if (__LIB_1__::func_13(&iLocal_1890) && __LIB_2__::func_572(&iLocal_1890) >= 2.5f)
			{
				__LIB_1__::func_12(&iLocal_1890);
			}
			if (__LIB_1__::func_13(&iLocal_1887) && __LIB_2__::func_572(&iLocal_1887) >= 20f)
			{
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[51 /*25*/], joaat("WEAPON_VEHICLE_ROCKET"));
				TASK::TASK_HELI_MISSION(Local_298[51 /*25*/], Local_299[1 /*7*/], 0, func_28(), -2219.42f, 247.11412f, 183.62267f, 6, 10f, 50f, -1f, 191, 16, -1f, 0);
				__LIB_1__::func_12(&iLocal_1887);
				ENTITY::SET_ENTITY_PROOFS(func_28(), false, false, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), false);
				iLocal_1869 = 9;
				iLocal_1876 = 2;
			}
			if (__LIB_0__::func_715(Local_299[1 /*7*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_299[1 /*7*/]) < 1000)
				{
					ENTITY::SET_ENTITY_HEALTH(Local_299[1 /*7*/], 1000, 0);
				}
				if (VEHICLE::GET_VEHICLE_BODY_HEALTH(Local_299[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_BODY_HEALTH(Local_299[1 /*7*/], 1000f);
				}
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_299[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_299[1 /*7*/], 1000f);
				}
				if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_299[1 /*7*/]) < 1000f)
				{
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_299[1 /*7*/], 1000f);
				}
			}
			if (__LIB_0__::func_715(Local_298[51 /*25*/]))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_298[51 /*25*/]) < 1000 || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_299[1 /*7*/], true), 2f))
				{
					iLocal_1877 = PED::CREATE_PED(26, iLocal_65, 0f, 0f, 0f, 0f, true, true);
					iLocal_1878 = PED::CREATE_PED(26, iLocal_65, 0f, 0f, 0f, 0f, true, true);
					AUDIO::STOP_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
					AUDIO::START_AUDIO_SCENE("MI_3_HELICOPTER_CRASH_SCENE");
					AUDIO::PLAY_STREAM_FRONTEND();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1877))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1877, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1878))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1878, true);
					}
					iLocal_1871 = 0;
					iLocal_1873 = 0;
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_SMALL_PRINTS();
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_1876 = 3;
				}
				if (!iLocal_1897)
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_298[51 /*25*/], true), 2f, true))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_298[51 /*25*/], PLAYER::PLAYER_PED_ID(), -1, 2, 4);
						iLocal_1897 = 1;
					}
				}
			}
			break;
		case 2:
			if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(func_28(), true), 2f, false, true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(func_28(), true), 2f))
			{
				ENTITY::SET_ENTITY_HEALTH(func_28(), 0, 0);
			}
			break;
		case 3:
			func_162(1, 1, 1, 0, 0, 0);
			iLocal_1882 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			iLocal_302[11] = PED::CREATE_SYNCHRONIZED_SCENE(-2216.758f, 242.446f, 174.035f, 0f, 0f, 0f, 2);
			PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_302[11], false);
			if (__LIB_0__::func_715(iLocal_1877))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1877, iLocal_302[11], cLocal_63, "leadout_swat_a", 8f, -1000f, 0, 0, 1000f, 0);
			}
			if (__LIB_0__::func_715(iLocal_1878))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1878, iLocal_302[11], cLocal_63, "leadout_swat_b", 8f, -1000f, 0, 0, 1000f, 0);
			}
			if (__LIB_0__::func_715(func_28()))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_28(), iLocal_1883, 100, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), true);
				ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
				ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
				PED::SET_PED_CAN_RAGDOLL(func_28(), false);
				PED::SET_PED_CONFIG_FLAG(func_28(), 211, false);
				PED::SET_PED_RESET_FLAG(func_28(), 249, true);
				PED::SET_PED_RESET_FLAG(func_28(), 248, true);
				TASK::TASK_SYNCHRONIZED_SCENE(func_28(), iLocal_302[11], cLocal_63, "leadout_mic", 8f, -1000f, 4, 96, 1000f, 0);
			}
			if (__LIB_0__::func_715(func_29()))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_29(), iLocal_302[11], cLocal_63, "leadout_trev", 8f, -8f, 8, 0, 1000f, 0);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), false);
				__LIB_0__::func_671(0);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				PED::FORCE_PED_MOTION_STATE(func_29(), joaat("MotionState_Idle"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_29(), false, false);
			}
			if (__LIB_0__::func_715(Local_299[1 /*7*/]))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_299[1 /*7*/], iLocal_302[11], "leadout_heli", cLocal_63, 8f, -1000f, 0, 1000f);
			}
			if (__LIB_0__::func_715(Local_298[51 /*25*/]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(Local_298[51 /*25*/], iLocal_302[11], cLocal_63, "leadout_pilot", 8f, -1000f, 4, 1, 1000f, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1882, iLocal_302[11], "leadout_cam", cLocal_63);
			CAM::SET_CAM_ACTIVE(iLocal_1882, true);
			iLocal_1881 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), false);
			iLocal_302[12] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (__LIB_0__::func_715(Local_299[1 /*7*/]))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_302[12], Local_299[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_299[1 /*7*/], "seat_dside_f"));
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			func_824(1, 1);
			__LIB_1__::func_31(&iLocal_1884);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1881, iLocal_302[12], "Cockpit_cam", cLocal_63);
			CAM::SET_CAM_ACTIVE(iLocal_1881, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_1875 = 1;
			iLocal_1876 = 4;
			break;
		case 4:
			if (iLocal_1875)
			{
				__LIB_0__::func_963(1, 1, 1, 0);
				iLocal_1875 = 0;
			}
			if (__LIB_0__::func_645(1000))
			{
				bLocal_1874 = true;
				RECORDING::REPLAY_CANCEL_EVENT();
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_1876 = 6;
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[12]) == 1f)
			{
				CAM::SET_CAM_ACTIVE(iLocal_1881, false);
				iLocal_1876 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_645(1000))
			{
				RECORDING::REPLAY_CANCEL_EVENT();
				bLocal_1874 = true;
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_1876 = 6;
			}
			if (!iLocal_1896)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[11]) >= 0.195425f)
				{
					if (__LIB_0__::func_715(Local_299[1 /*7*/]))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC3_CRASH");
						FIRE::ADD_EXPLOSION(-2236.32f, 251.21913f, 183.62654f, 32, 1.5f, true, false, 1f, false);
						FIRE::ADD_EXPLOSION(-2238.8386f, 252.75941f, 183.562f, 32, 1.5f, true, false, 1f, false);
						FIRE::ADD_EXPLOSION(-2233.902f, 250.44415f, 182.37263f, 32, 1.5f, true, false, 1f, false);
						FIRE::ADD_EXPLOSION(-2239.599f, 250.79906f, 185.3237f, 32, 1.5f, true, false, 1f, false);
						FIRE::ADD_EXPLOSION(-2236.5828f, 251.35506f, 185f, 32, 1.5f, true, false, 1f, false);
						PED::DELETE_PED(&iLocal_1877);
						PED::DELETE_PED(&iLocal_1878);
						PED::DELETE_PED(&(Local_298[51 /*25*/]));
						VEHICLE::DELETE_VEHICLE(&(Local_299[1 /*7*/]));
						__LIB_0__::func_544(82, 1, 0, 1, 1);
						FIRE::START_SCRIPT_FIRE(-2237.2278f, 252.9601f, 175.6547f, 5, false);
						FIRE::START_SCRIPT_FIRE(-2236.577f, 258.3874f, 174.614f, 5, false);
					}
					iLocal_1896 = 1;
				}
			}
			if (!iLocal_1872)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[11]) >= 0.25f)
				{
					iLocal_1869 = 14;
					iLocal_1872 = 1;
				}
			}
			if (!iLocal_1898)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[11]) >= 0.82f)
				{
					func_821();
					iLocal_1898 = 1;
				}
			}
			if (__LIB_0__::func_715(func_28()))
			{
				if (!__LIB_0__::func_798(func_28(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1) && !__LIB_0__::func_798(func_28(), joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER"), 1))
				{
					PED::SET_PED_CAN_RAGDOLL(func_28(), true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), -2219.298f, 247.3061f, 183.6041f, -1, false, 0f, false, false, 0, false);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[11]) == 1f)
			{
				PED::DELETE_PED(&iLocal_1877);
				PED::DELETE_PED(&iLocal_1878);
				iLocal_1876 = 9;
			}
			break;
		case 6:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_1876 = 7;
			}
			break;
		case 7:
			if (!iLocal_1898)
			{
				func_821();
				iLocal_1898 = 1;
			}
			if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1445, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_1445.f_3);
			}
			PED::DELETE_PED(&iLocal_1877);
			PED::DELETE_PED(&iLocal_1878);
			PED::DELETE_PED(&(Local_298[51 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_299[1 /*7*/]));
			iLocal_1876 = 9;
			break;
		case 9:
			func_824(0, 1);
			if (__LIB_0__::func_715(func_28()))
			{
				PED::SET_PED_CAN_RAGDOLL(func_28(), true);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), -2219.298f, 247.3061f, 183.6041f, -1, false, 0f, false, false, 0, false);
			}
			if (__LIB_0__::func_715(iLocal_1415))
			{
			}
			if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0027f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-27.1329f, 1f);
			AUDIO::STOP_STREAM();
			CAM::SET_CAM_ACTIVE(iLocal_1882, false);
			CAM::SET_CAM_ACTIVE(iLocal_1881, false);
			CAM::DESTROY_CAM(iLocal_1882, false);
			CAM::DESTROY_CAM(iLocal_1881, false);
			RECORDING::REPLAY_STOP_EVENT();
			if (bLocal_1874)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			else
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			}
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
			__LIB_0__::func_671(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
			break;
	}
	return 0;
}

void func_821()//Position - 0x891E9
{
	int iVar0;
	func_747(&(Local_1785[0 /*7*/]), -2247.1006f, 273.1696f, 173.602f, 210f, 2, 0, 1, 0);
	func_747(&(Local_1785[1 /*7*/]), -2251.389f, 271.2775f, 173.602f, 210f, 2, 0, 1, 1);
	func_747(&(Local_1785[2 /*7*/]), -2231.962f, 275.00153f, 173.60196f, 210f, 0, 1, 3, 1);
	func_747(&(Local_1785[4 /*7*/]), -2227.2415f, 264.47415f, 173.60196f, 210f, 0, 1, 3, 1);
	func_747(&(Local_1785[3 /*7*/]), -2229.517f, 269.74698f, 173.60196f, 210f, 0, 1, 3, 1);
	func_723(&(Local_1451[0 /*25*/]), iLocal_65, Local_1785[0 /*7*/].f_3, Local_1785[0 /*7*/].f_6, "MT_FIB1", iLocal_291, iLocal_75, 1, 0, 0, 0);
	func_723(&(Local_1451[1 /*25*/]), iLocal_65, Local_1785[1 /*7*/].f_3, Local_1785[1 /*7*/].f_6, "MT_FIB2", iLocal_291, iLocal_75, 1, 0, 0, 0);
	func_723(&(Local_1451[2 /*25*/]), iLocal_65, -2223.521f, 287.886f, 173.602f, 125f, "MT_FIB3", iLocal_291, iLocal_75, 1, 0, 0, 0);
	func_723(&(Local_1451[3 /*25*/]), iLocal_65, -2223.418f, 279.7906f, 173.602f, 125f, "MT_FIB4", iLocal_291, iLocal_75, 1, 0, 0, 0);
	func_723(&(Local_1451[4 /*25*/]), iLocal_65, -2223.7397f, 282.7443f, 173.602f, 125f, "MT_FIB5", iLocal_291, iLocal_75, 1, 0, 0, 0);
	func_780(&Local_1451);
	iVar0 = 0;
	while (iVar0 <= (Local_1451.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1451[iVar0 /*25*/]))
		{
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1451[iVar0 /*25*/], 250f);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1451[iVar0 /*25*/], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1451[iVar0 /*25*/], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_1451[iVar0 /*25*/], 0, true);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1451[iVar0 /*25*/], true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_1451[iVar0 /*25*/], Local_1785[iVar0 /*7*/].f_3, 1f, false, false);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1451[iVar0 /*25*/], Local_1785[iVar0 /*7*/].f_3, -1, true, 0f, false, false, 0, false);
			func_745(&(Local_1451[iVar0 /*25*/]));
		}
		iVar0++;
	}
}

void func_824(bool bParam0, int iParam1)//Position - 0x894A6
{
	if (!bParam0)
	{
		__LIB_39__::func_103(0);
	}
	CAM::SET_WIDESCREEN_BORDERS(bParam0, 0);
	if (iParam1 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 64);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam0, 0);
	}
	__LIB_1__::func_373(bParam0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(bParam0);
	HUD::DISPLAY_RADAR(!bParam0);
	HUD::DISPLAY_HUD(!bParam0);
}

int func_826()//Position - 0x8951A
{
	switch (iLocal_1870)
	{
		case 0:
			if (!__LIB_0__::func_715(Local_298[1 /*25*/]))
			{
				func_172(&(Local_298[1 /*25*/]), 2, -2263.6716f, 234.3598f, 193.6015f, 249.1836f, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 0, 60);
			}
			iLocal_1899 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iLocal_1883, true);
			AUDIO::PREPARE_MUSIC_EVENT("MIC3_SNIPE");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SNIPERRIFLE"), 31, 0);
			iLocal_1870 = 2;
			break;
		case 2:
			if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SNIPERRIFLE")) && func_832(Local_298[1 /*25*/], &iLocal_1900, 5000, 0)) && func_832(func_28(), &iLocal_1900, 5000, 0))
			{
				iLocal_1870 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_715(Local_298[1 /*25*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[1 /*25*/], "Trevor", 0, 0, 0);
				iLocal_1880 = __LIB_37__::func_934(Local_298[1 /*25*/], 1, 0, 0, 0, 0);
				if (__LIB_0__::func_715(iLocal_1880))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(iLocal_1880);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1880, "Daves_rifle", 1, 0, 0);
				}
			}
			if (__LIB_0__::func_715(func_28()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_28(), "Michael", 0, 0, 0);
				iLocal_1879 = __LIB_37__::func_934(func_28(), 1, 0, 0, 0, 0);
				if (__LIB_0__::func_715(iLocal_1879))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1879, "Michaels_weapon", 1, 0, 0);
				}
			}
			func_832(Local_298[1 /*25*/], &iLocal_1900, 5000, 1);
			func_832(func_28(), &iLocal_1900, 5000, 1);
			PED::DELETE_PED(&(Local_298[51 /*25*/]));
			VEHICLE::DELETE_VEHICLE(&(Local_299[1 /*7*/]));
			Local_299[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2241.1f, 263.6f, 190.3f, 235f, true, true, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_299[1 /*7*/]);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_299[1 /*7*/], false);
			func_752(&(Local_298[51 /*25*/]), iLocal_64, &(Local_299[1 /*7*/]), -1, "MW_HELI1_1", iLocal_292, joaat("WEAPON_UNARMED"), 30, 0, 0, 0);
			ENTITY::SET_ENTITY_PROOFS(Local_299[1 /*7*/], true, true, true, false, false, false, false, false);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_299[1 /*7*/], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_299[1 /*7*/], false);
			VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_299[1 /*7*/], false);
			if (__LIB_0__::func_715(Local_299[1 /*7*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_299[1 /*7*/], "MW_Chopper", 0, 0, 0);
			}
			if (__LIB_0__::func_715(Local_298[51 /*25*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_298[51 /*25*/], "FIB_Goon_1", 0, 0, 0);
			}
			if (__LIB_0__::func_715(iLocal_1415))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1415, true);
			}
			__LIB_0__::func_963(1, 0, 1, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("MIC3_HELI");
			AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_START");
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_1870 = 3;
			break;
		case 3:
			PED::DELETE_PED(&(Local_298[16 /*25*/]));
			PED::DELETE_PED(&(Local_298[17 /*25*/]));
			PED::DELETE_PED(&(Local_298[18 /*25*/]));
			PED::DELETE_PED(&(Local_298[19 /*25*/]));
			func_26(&Local_1448, 1);
			func_26(&Local_1446, 1);
			func_26(&Local_1447, 1);
			func_26(&Local_1449, 1);
			func_26(&Local_1450, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			Global_100441.f_12[2] = 1;
			iLocal_1870 = 4;
			break;
		case 4:
			if (!iLocal_1899)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 6634)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 1000, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_1899 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				func_827();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MW_Chopper", 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_299[1 /*7*/], true, true, false);
				ENTITY::SET_ENTITY_COORDS(Local_299[1 /*7*/], -2241.1f, 263.6f, 190.3f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_299[1 /*7*/], 235f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_1", 0))
			{
				if (__LIB_0__::func_715(Local_298[51 /*25*/]) && __LIB_0__::func_715(Local_299[1 /*7*/]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_298[51 /*25*/], false);
					PED::SET_PED_INTO_VEHICLE(Local_298[51 /*25*/], Local_299[1 /*7*/], -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				func_162(1, 1, 0, 0, 0, 0);
				__LIB_16__::func_896(&iLocal_1323, 2);
				__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_298[1 /*25*/], joaat("WEAPON_SNIPERRIFLE"), 10, true, true);
				func_162(1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(Local_298[1 /*25*/], Local_1445, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_298[1 /*25*/], Local_1445.f_3);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
				__LIB_0__::func_671(1);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
				iLocal_1870 = 5;
			}
			break;
		case 5:
			RECORDING::REPLAY_STOP_EVENT();
			return 1;
			break;
	}
	return 0;
}

void func_827()//Position - 0x899E3
{
	if (__LIB_0__::func_715(func_28()))
	{
		ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_28());
		ENTITY::SET_ENTITY_COORDS(func_28(), Local_1756.f_3, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(func_28(), Local_1756.f_6);
		PED::REMOVE_PED_DEFENSIVE_AREA(func_28(), false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_28(), ENTITY::GET_ENTITY_COORDS(func_28(), true), 5f, false, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_28(), true);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1756.f_3, -1, false, 0f, false, false, Local_1756.f_0, false);
		PED::SET_PED_CONFIG_FLAG(func_28(), 211, true);
		ENTITY::FREEZE_ENTITY_POSITION(func_28(), false);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
	}
}

int func_832(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x89E51
{
	int iVar0;
	int iVar1;
	if (*iParam1 == -1)
	{
		*iParam1 = (MISC::GET_GAME_TIMER() + iParam2);
	}
	else if (*iParam1 < MISC::GET_GAME_TIMER())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true))
		{
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				iVar1 = WEAPON::GET_WEAPONTYPE_MODEL(iVar0);
				if (iVar1 != 0)
				{
					if (!bParam3)
					{
						STREAMING::REQUEST_MODEL(iVar1);
						return STREAMING::HAS_MODEL_LOADED(iVar1);
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
						return 0;
					}
				}
			}
		}
	}
	return 1;
}

void func_833()//Position - 0x89ED6
{
	if (iLocal_1871)
	{
		if (__LIB_2__::func_572(&iLocal_1893) >= 7.5f)
		{
			if (func_666("M3_TREVHMM"))
			{
				__LIB_1__::func_31(&iLocal_1893);
			}
		}
	}
	switch (iLocal_1869)
	{
		case 0:
			__LIB_0__::func_222(&uLocal_95, 6, Local_298[51 /*25*/], "MIC3MERRYD", 0, 1);
			if (func_519("M3_SHPILOT"))
			{
				__LIB_1__::func_31(&iLocal_1893);
				iLocal_1869 = 1;
			}
			break;
		case 1:
			if (iLocal_1873)
			{
				if (!__LIB_13__::func_755(&iLocal_263, 1))
				{
					__LIB_0__::func_229("M3_OBJHELI", 7500, 1);
					iLocal_1869 = 20;
				}
			}
			break;
		case 9:
			if (func_519("M3_SHMIDIE"))
			{
				iLocal_1869 = 20;
			}
			break;
		case 14:
			if (func_519("M3_MCS1_IG"))
			{
				iLocal_1869 = 20;
			}
			break;
	}
}

void func_834()//Position - 0x89FA5
{
	int iVar0;
	if (iLocal_1832 > 1)
	{
		func_731();
		func_862();
		func_861();
	}
	if (iLocal_1832 >= 4)
	{
		func_859();
	}
	if (bLocal_1322)
	{
		func_644();
	}
	switch (iLocal_1832)
	{
		case 0:
			iLocal_1793 = MISC::GET_GAME_TIMER() + 2000;
			__LIB_16__::func_852(&uLocal_304, iLocal_65);
			__LIB_16__::func_852(&uLocal_304, iLocal_66);
			__LIB_16__::func_852(&uLocal_304, iLocal_68);
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, joaat("IG_Paper"));
			__LIB_16__::func_852(&uLocal_304, joaat("p_gdoor1colobject_s"));
			__LIB_16__::func_852(&uLocal_304, joaat("IG_Andreas"));
			__LIB_16__::func_853(&uLocal_304, 50, &Local_77);
			__LIB_16__::func_853(&uLocal_304, 3, &Local_77);
			__LIB_16__::func_909(&uLocal_304, &cLocal_80);
			iLocal_1834 = 0;
			iLocal_1833 = 20;
			func_857();
			iLocal_1847 = 0;
			bLocal_1322 = false;
			iLocal_1845 = 0;
			iLocal_1846 = 0;
			iLocal_89 = 1;
			iLocal_1797 = 0;
			iLocal_1844 = 0;
			iLocal_1848 = 0;
			iLocal_1862 = 0;
			__LIB_1__::func_31(&iLocal_1422);
			iLocal_1832 = 1;
			break;
		case 1:
			if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_65) && STREAMING::HAS_MODEL_LOADED(iLocal_66)) && STREAMING::HAS_MODEL_LOADED(iLocal_68)) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Paper"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_gdoor1colobject_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Andreas"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(50, &Local_77)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, &Local_77)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK(&cLocal_80, false, -1))
			{
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_START");
				iLocal_1717 = 1;
				func_851();
				__LIB_0__::func_222(&uLocal_95, 3, Local_1446[0 /*25*/], "MIC3CIA3", 0, 1);
				__LIB_43__::func_516(1, "FIRST AREA", 0, 0, 0, 1);
				__LIB_37__::func_191(&(Local_303[2 /*8*/]), 0, 0, 1);
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				if (__LIB_0__::func_715(iLocal_1415))
				{
					func_636();
					func_771();
				}
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_1__::func_31(&iLocal_1835);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FIGHT_START");
				iLocal_1832 = 2;
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		case 2:
			func_842();
			if (!iLocal_1845)
			{
				if (func_743(&Local_1446, &Local_1447, &Local_1448) <= 5)
				{
					func_840();
					iLocal_1845 = 1;
				}
			}
			if (func_839(&Local_1446, &Local_1447, &Local_1448) || __LIB_38__::func_175(&Local_1842))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_SHOOTOUT_START"))
				{
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_START");
				}
				__LIB_1__::func_31(&iLocal_1852);
				__LIB_1__::func_31(&iLocal_1422);
				__LIB_1__::func_31(&iLocal_1855);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1415, 67, false);
				func_771();
				iLocal_1832 = 3;
			}
			break;
		case 3:
			if (__LIB_38__::func_175(&Local_1849) || __LIB_2__::func_572(&iLocal_1852) >= 10f)
			{
				func_837();
				if (__LIB_0__::func_715(iLocal_1415))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1415, false);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, Local_1444[1 /*4*/], 3f, true, false);
				}
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_ENEMIES_ON_STAIRS");
				iLocal_1832 = 4;
			}
			break;
		case 4:
			func_836();
			if (__LIB_38__::func_175(&Local_1850))
			{
				AUDIO::STOP_STREAM();
				AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0);
				iLocal_1832 = 6;
			}
			if (!iLocal_1846)
			{
				if (func_718(&Local_1449) == 0)
				{
					iLocal_1848 = 9;
					CUTSCENE::REQUEST_CUTSCENE(sLocal_59, 8);
					PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
					TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_1415, false);
					TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_1415, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, Local_1757.f_3, 2f, true, false);
					func_714(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1757.f_3, 3f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1757.f_3, -1, true, 0f, true, true, Local_1757.f_0, true);
					func_712(iLocal_1415, 1);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_ENEMIES_ON_STAIRS");
					iLocal_1846 = 1;
				}
			}
			else
			{
				func_835();
			}
			break;
		case 6:
			PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), false);
			if (WEAPON::GET_CURRENT_PED_WEAPON(func_28(), &iVar0, true))
			{
				if (iVar0 == joaat("WEAPON_ASSAULTRIFLE"))
				{
					iLocal_1863 = 0;
					iLocal_1832 = 7;
				}
				else
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(func_28(), joaat("WEAPON_ASSAULTRIFLE"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("WEAPON_ASSAULTRIFLE"), 100, true, true);
					}
					else
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("WEAPON_ASSAULTRIFLE"), false);
						TASK::TASK_SWAP_WEAPON(func_28(), true);
					}
					iLocal_1863 = MISC::GET_GAME_TIMER() + 1000;
					iLocal_1832 = 7;
				}
			}
			break;
		case 7:
			if (MISC::GET_GAME_TIMER() > iLocal_1863)
			{
				__LIB_16__::func_912(&uLocal_304, joaat("IG_Andreas"));
				__LIB_16__::func_912(&uLocal_304, joaat("IG_Paper"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[4 /*25*/]));
				iLocal_1832 = 8;
				TASK::REMOVE_COVER_POINT(Local_1861[0 /*7*/]);
				TASK::REMOVE_COVER_POINT(Local_1861[1 /*7*/]);
				PED::SET_PED_CAN_SWITCH_WEAPON(func_28(), true);
				__LIB_13__::func_808(&iLocal_297);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1415, 67, true);
				func_49(3);
			}
			break;
		case 8:
			break;
	}
}

void func_835()//Position - 0x8A48A
{
	switch (iLocal_1862)
	{
		case 0:
			if (AUDIO::LOAD_STREAM("MIC_3_DISTANT_GUNFIGHT_MASTER", 0))
			{
				iLocal_1862 = 1;
			}
			break;
		case 1:
			AUDIO::PLAY_STREAM_FROM_POSITION(-2245.9946f, 266.09586f, 173.60196f);
			iLocal_1862 = 2;
			break;
	}
}

void func_836()//Position - 0x8A4D4
{
	if (!iLocal_1847)
	{
		if (__LIB_38__::func_175(&Local_1851))
		{
			func_723(&(Local_1450[1 /*25*/]), iLocal_65, -2214.5f, 248.44427f, 183.60408f, 203.2991f, "HELI_STRAFE_FIB_2", iLocal_294, iLocal_75, 1, 0, 0, 0);
			func_747(&(Local_1861[1 /*7*/]), -2199.1633f, 245.10863f, 183.60487f, 203.2991f, 1, 1, 4, 1);
			PED::REMOVE_PED_DEFENSIVE_AREA(Local_1450[1 /*25*/], false);
			PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_1450[1 /*25*/], -2196.0515f, 244.92459f, 183.60187f, -2198.373f, 251.0177f, 186.89195f, 7f, false, false);
			func_714(1);
			TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, Local_1861[1 /*7*/], -2190.8555f, 228.723f, 183.60187f, -1, true);
			func_712(Local_1450[1 /*25*/], 1);
			iLocal_1847 = 1;
		}
	}
}

void func_837()//Position - 0x8A5A3
{
	int iVar0;
	func_838(&(Local_1449[0 /*25*/]), -2206.077f, 221.78526f, 178.30203f, 117.8388f, -2201.5532f, 228.03366f, 181.11182f, "Stair_MW1", 0);
	iVar0 = 0;
	while (iVar0 <= (Local_1449.f_0 - 1))
	{
		if (__LIB_0__::func_715(iLocal_1415) && __LIB_0__::func_715(Local_1449[iVar0 /*25*/]))
		{
			PED::REGISTER_TARGET(iLocal_1415, Local_1449[iVar0 /*25*/]);
			ENTITY::SET_ENTITY_HEALTH(Local_1449[iVar0 /*25*/], 101, 0);
		}
		iVar0++;
	}
	__LIB_1__::func_31(&iLocal_1858);
}

void func_838(int* iParam0, struct<3> Param1, float fParam2, struct<3> Param3, char* sParam4, int iParam5)//Position - 0x8A631
{
	func_723(iParam0, iLocal_64, Param1, fParam2, sParam4, iLocal_295, iLocal_76, 5, 0, 0, 0);
	if (__LIB_0__::func_715(*iParam0))
	{
		func_765(iParam0, Param3, 0.75f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(*iParam0, false);
		PED::SET_PED_DIES_WHEN_INJURED(*iParam0, true);
		func_714(1);
		TASK::TASK_PAUSE(0, iParam5);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
		func_712(*iParam0, 1);
	}
}

bool func_839(int iParam0, int iParam1, int iParam2)//Position - 0x8A6B2
{
	return func_743(iParam0, iParam1, iParam2) == 0;
}

void func_840()//Position - 0x8A6C6
{
	func_841(&Local_1446, 0);
	func_841(&Local_1447, 0);
	func_841(&Local_1448, 0);
	Local_1843 = { Local_1843 };
}

void func_841(int iParam0, int iParam1)//Position - 0x8A6F2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			PED::SET_PED_COMBAT_RANGE((*iParam0)[iVar0 /*25*/], iParam1);
		}
		iVar0++;
	}
}

void func_842()//Position - 0x8A729
{
	func_849();
	func_846();
	func_845();
	func_843();
	switch (iLocal_1833)
	{
		case 0:
			if (func_519("M3_EXPLODE"))
			{
				iLocal_1833 = 20;
			}
			break;
		case 8:
			if (func_519("M3_FADVEXP"))
			{
				iLocal_1833 = 20;
			}
			break;
		case 9:
			if (func_519("M3_DVTHX"))
			{
				iLocal_1833 = 20;
			}
			break;
	}
}

void func_843()//Position - 0x8A797
{
	switch (iLocal_1844)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1864);
			iLocal_1844++;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1864) >= 10f)
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !__LIB_13__::func_755(&iLocal_263, 1))
				{
					iLocal_1867 = func_844(&Local_1446);
					if (__LIB_0__::func_715(iLocal_1867))
					{
						__LIB_0__::func_222(&uLocal_95, 8, iLocal_1867, "MIC3CIA1", 0, 1);
						iLocal_1844 = 2;
					}
					else
					{
						iLocal_1844 = 99;
					}
				}
			}
			break;
		case 2:
			if (func_519("M3_IAA1"))
			{
				iLocal_1844 = 99;
			}
			break;
	}
}

int func_844(int iParam0)//Position - 0x8A83A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_715((*iParam0)[iVar0 /*25*/]))
		{
			return (*iParam0)[iVar0 /*25*/];
		}
		iVar0++;
	}
	return 0;
}

void func_845()//Position - 0x8A86F
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_715(iLocal_1415) && __LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		if ((__LIB_2__::func_572(&iLocal_1422) >= 12.5f && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !__LIB_13__::func_755(&iLocal_263, 1))
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			switch (iVar1)
			{
				case 0:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar0 == 0)
						{
							if (func_666("M3_FAMIWAR"))
							{
								__LIB_1__::func_31(&iLocal_1422);
							}
						}
						else if (iVar0 == 1)
						{
							if (func_666("M3_MSHOUT"))
							{
								__LIB_1__::func_31(&iLocal_1422);
							}
						}
					}
					break;
				case 1:
					if (PED::IS_PED_SHOOTING(iLocal_1415))
					{
						if (func_666("M3_FADVWAR"))
						{
							__LIB_1__::func_31(&iLocal_1422);
						}
					}
					break;
				}
			}
	}
}

void func_846()//Position - 0x8A93C
{
	var uVar0[5];
	int iVar1;
	int iVar2;
	if (__LIB_2__::func_572(&iLocal_1835) >= 5f)
	{
		if (__LIB_0__::func_680())
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
			iVar1 = 0;
			if (ENTITY::DOES_ENTITY_EXIST(uVar0[iVar1]) && !PED::IS_PED_INJURED(uVar0[iVar1]))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uVar0[iVar1]))
				{
					iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uVar0[iVar1]);
					if (iVar2 == iLocal_293)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 5))
						{
							case 1:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_ARAA", "MIC3CIA3", 3);
								break;
							case 2:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_AQAA", "MIC3AGEN3", 3);
								break;
							case 3:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_APAA", "MIC3CIA2", 3);
								break;
							case 4:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_ANAA", "MIC3CIA4", 3);
								break;
						}
					}
					else if (iVar2 == iLocal_291)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 3))
						{
							case 1:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_ASAA", "MIC3FIB1", 3);
								break;
							case 2:
								__LIB_0__::func_709(uVar0[iVar1], "MCH3_ATAA", "MIC3FIB2", 3);
								break;
						}
					}
					else if (iVar2 == iLocal_292)
					{
					}
					__LIB_1__::func_31(&iLocal_1835);
				}
			}
		}
	}
}

void func_849()//Position - 0x8AAC8
{
	switch (iLocal_1834)
	{
		case 0:
			if (func_519("M3_RADIO1"))
			{
				iLocal_1834 = 1;
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&iLocal_263, 0))
			{
				iLocal_1834 = 2;
			}
			break;
		case 2:
			if (bLocal_1322)
			{
				if (__LIB_13__::func_755(&iLocal_263, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_1833 = 8;
				iLocal_1834 = 3;
			}
			break;
		case 3:
			if (!__LIB_13__::func_755(&iLocal_263, 0))
			{
				__LIB_13__::func_808(&iLocal_297);
				__LIB_37__::func_930(&iLocal_297, -2213.0862f, 240.9993f, 183.60487f, 0);
				__LIB_0__::func_229("M3_OBJFRSTA", 7500, 1);
				__LIB_1__::func_31(&iLocal_1838);
				iLocal_1834 = 4;
			}
			break;
		case 4:
			if (__LIB_2__::func_572(&iLocal_1838) >= 1f)
			{
				if (func_519("M3_RADIO2"))
				{
					iLocal_1834 = 20;
				}
			}
			break;
	}
}

void func_851()//Position - 0x8ABBD
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[0 /*25*/]))
	{
		func_723(&(Local_1447[0 /*25*/]), iLocal_65, -2161.5002f, 216.97882f, 183.60187f, 19.8485f, "START_FIB_LEAD", iLocal_291, iLocal_75, 5, 0, 0, 0);
	}
	func_765(&(Local_1447[0 /*25*/]), -2162.865f, 220.12059f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1447[0 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1447[0 /*25*/], false);
	func_716(&(Local_1447[0 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[1 /*25*/]))
	{
		func_723(&(Local_1447[1 /*25*/]), iLocal_65, -2167.18f, 216.26184f, 183.60187f, 3.3767f, "START_FIB_1", iLocal_291, iLocal_75, 5, 0, 0, 0);
	}
	func_765(&(Local_1447[1 /*25*/]), -2167.9768f, 218.86346f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1447[1 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1447[1 /*25*/], false);
	func_716(&(Local_1447[1 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[2 /*25*/]))
	{
		func_723(&(Local_1447[2 /*25*/]), iLocal_65, -2168.7646f, 216.6734f, 183.602f, 56.833f, "START_FIB_2", iLocal_291, iLocal_75, 5, 0, 0, 0);
	}
	func_765(&(Local_1447[2 /*25*/]), -2169.52f, 219.41731f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1447[2 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1447[2 /*25*/], false);
	func_716(&(Local_1447[2 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[3 /*25*/]))
	{
		func_723(&(Local_1447[3 /*25*/]), iLocal_65, -2158.4556f, 220.228f, 183.6016f, 24.2844f, "START_FIB_3", iLocal_291, iLocal_75, 5, 0, 0, 0);
	}
	func_765(&(Local_1447[3 /*25*/]), -2161.1611f, 221.8153f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1447[3 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1447[3 /*25*/], false);
	func_716(&(Local_1447[3 /*25*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[0 /*25*/]))
	{
		func_723(&(Local_1446[0 /*25*/]), joaat("IG_Paper"), -2170.681f, 244.19972f, 183.60187f, 203.5326f, "START_CIA_LEAD", iLocal_293, iLocal_73, 5, 0, 0, 0);
		func_856(&(Local_1446[0 /*25*/]), -2162.7827f, 232.4936f, 183.6019f, 202.8664f, 0, 0, 1);
	}
	if (__LIB_0__::func_715(Local_1446[0 /*25*/]))
	{
		func_765(&(Local_1446[0 /*25*/]), -2162.8796f, 232.5484f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1446[0 /*25*/], false);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1446[0 /*25*/], false);
		PED::SET_PED_PROP_INDEX(Local_1446[0 /*25*/], 1, 0, 0, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[1 /*25*/]))
	{
		func_723(&(Local_1446[1 /*25*/]), iLocal_66, -2167.223f, 241.20326f, 183.60187f, 294.7903f, "START_CIA_2", iLocal_293, iLocal_74, 5, 0, 0, 0);
		func_855();
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[1 /*25*/], false, false);
	}
	func_765(&(Local_1446[1 /*25*/]), -2165.8208f, 237.71999f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1446[1 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1446[1 /*25*/], false);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[2 /*25*/]))
	{
		func_723(&(Local_1446[2 /*25*/]), iLocal_66, -2179.182f, 236.7674f, 183.60187f, 292.3021f, "START_CIA_3", iLocal_293, iLocal_73, 5, 0, 0, 0);
		func_854();
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1446[2 /*25*/], -2167.1597f, 230.07074f, 183.60187f, -1, false, 1f, true, false, Local_1446[2 /*25*/].f_1, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[2 /*25*/], false, false);
	}
	func_765(&(Local_1446[2 /*25*/]), -2177.9763f, 233.94264f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1446[2 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1446[2 /*25*/], false);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[3 /*25*/]))
	{
		func_723(&(Local_1446[3 /*25*/]), iLocal_66, -2170.8118f, 241.114f, 183.6019f, 204.9214f, "START_CIA_4", iLocal_293, iLocal_73, 5, 0, 0, 0);
		func_853();
		func_747(&(Local_1446[3 /*25*/].f_1), -2181.4636f, 235.57019f, 183.60187f, 288.6263f, 1, 0, 1, 1);
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1446[3 /*25*/], -2181.4636f, 235.57019f, 183.60187f, -1, false, 1f, true, false, Local_1446[3 /*25*/].f_1, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[3 /*25*/], false, false);
	}
	func_765(&(Local_1446[3 /*25*/]), -2181.4636f, 235.57019f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1446[3 /*25*/], false);
	TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1446[3 /*25*/], false);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1448[1 /*25*/]))
	{
		func_723(&(Local_1448[1 /*25*/]), iLocal_64, -2189.332f, 225.2645f, 183.6019f, 201.8352f, "START_MW_2", iLocal_292, iLocal_76, 5, 0, 0, 0);
		func_765(&(Local_1448[1 /*25*/]), -2189.332f, 225.2645f, 183.6019f, 5f, 1, 1, 1, 1, 0.75f, 0.5f, 0, 1);
		func_856(&(Local_1448[1 /*25*/]), -2189.332f, 225.2645f, 183.6019f, 293.9212f, 0, 0, 1);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_1448[1 /*25*/], false);
		TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_1448[1 /*25*/], false);
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1447.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1447[iVar0 /*25*/]))
		{
			func_716(&(Local_1447[iVar0 /*25*/]));
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1447[iVar0 /*25*/], 50f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1447[iVar0 /*25*/], false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1447[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1446.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1446[iVar0 /*25*/]))
		{
			func_716(&(Local_1446[iVar0 /*25*/]));
			PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1446[iVar0 /*25*/], 50f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1446[iVar0 /*25*/], false);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1446[iVar0 /*25*/], 100f, 0);
		}
		iVar0++;
	}
	PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_1448[1 /*25*/], 50f);
	func_716(&(Local_1448[1 /*25*/]));
	func_714(1);
	TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
	TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
	func_712(Local_1448[1 /*25*/], 1);
	func_764(&Local_1446, 1);
	func_764(&Local_1447, 1);
	func_764(&Local_1448, 1);
	if (__LIB_0__::func_323() && !ENTITY::DOES_ENTITY_EXIST(Local_298[4 /*25*/]))
	{
		Local_298[4 /*25*/] = PED::CREATE_PED(26, joaat("IG_Andreas"), -2153.3f, 235.5f, 184.59f, 0f, true, true);
		TASK::TASK_PLAY_ANIM_ADVANCED(Local_298[4 /*25*/], "Dead", "dead_g", -2153.3f, 235.581f, 184.623f, 0f, 0f, 41.5f, 1000f, -8f, -1, 2101256, 0.99f, 2, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_298[4 /*25*/], true, false);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 11, 0, 0, 0);
		GRAPHICS::REMOVE_DECAL(iLocal_1414);
		iLocal_1414 = GRAPHICS::ADD_DECAL(9001, -2153.7f, 236.07f, 183.6f, 0f, 0f, -1f, 0f, 1f, 0f, 0.5f, 0.5f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
	}
}

void func_853()//Position - 0x8B3E7
{
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[3 /*25*/], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[3 /*25*/], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[3 /*25*/], 3, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[3 /*25*/], 4, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[3 /*25*/], 8, 0, 0, 0);
}

void func_854()//Position - 0x8B436
{
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[2 /*25*/], 0, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[2 /*25*/], 2, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[2 /*25*/], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[2 /*25*/], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[2 /*25*/], 8, 0, 0, 0);
}

void func_855()//Position - 0x8B485
{
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[1 /*25*/], 0, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[1 /*25*/], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[1 /*25*/], 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[1 /*25*/], 4, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_1446[1 /*25*/], 8, 0, 0, 0);
}

void func_856(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8B4D4
{
	func_747(&(uParam0->f_1), Param1, fParam2, iParam3, iParam4, iParam5, 1);
	if (!ITEMSET::IS_ITEMSET_VALID(uParam0->f_12))
	{
		uParam0->f_12 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::ADD_TO_ITEMSET(uParam0->f_1, uParam0->f_12);
	PED::SET_PED_PREFERRED_COVER_SET(*uParam0, uParam0->f_12);
}

void func_857()//Position - 0x8B51E
{
	Local_1841 = { Local_1841 };
	Local_1841 = { __LIB_37__::func_928(-2198.1956f, 221.26196f, 183.3517f, -2208.1553f, 216.70642f, 187.25314f, 10f) };
	Local_1842 = { __LIB_37__::func_928(-2186.7986f, 234.81006f, 183.50186f, -2194.095f, 231.46199f, 187.41882f, 45f) };
	Local_1843 = { __LIB_37__::func_928(-2160.649f, 233.60161f, 183.35187f, -2180.9353f, 224.5979f, 186.85187f, 25.25f) };
	Local_1849 = { __LIB_37__::func_928(-2186.7986f, 234.81006f, 183.50186f, -2194.095f, 231.46199f, 187.41882f, 45f) };
	Local_1850 = { __LIB_37__::func_928(-2211.3635f, 238.60905f, 183.50487f, -2229.5378f, 280.06433f, 186.60408f, 16f) };
	Local_1851 = { __LIB_37__::func_928(-2178.2766f, 237.98744f, 183.35187f, -2193.5234f, 231.28436f, 187.10187f, 40f) };
}

void func_859()//Position - 0x8B70A
{
	switch (iLocal_1848)
	{
		case 9:
			if (__LIB_0__::func_501("M3_OBJHELPD", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (func_519("M3_OSDVADV"))
			{
				iLocal_1848 = 20;
			}
			break;
	}
}

void func_861()//Position - 0x8B764
{
	switch (iLocal_1797)
	{
		case 0:
			__LIB_1__::func_31(&iLocal_1794);
			iLocal_1797++;
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1794) >= fLocal_1798)
			{
				iLocal_1793 = MISC::GET_GAME_TIMER() + 3000;
				Local_299[14 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2251.5251f, 325.16736f, 191.61157f, 121f, true, true, false);
				if (__LIB_0__::func_715(Local_299[14 /*7*/]))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_299[14 /*7*/]);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[14 /*7*/], 3, &Local_77, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_299[14 /*7*/], fLocal_1799);
					VEHICLE::SET_PLAYBACK_SPEED(Local_299[14 /*7*/], fLocal_1800);
					iLocal_1797++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_724(Local_299[14 /*7*/], Local_1802, 1) <= fLocal_1801)
			{
				VEHICLE::EXPLODE_VEHICLE(Local_299[14 /*7*/], true, true);
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.1f);
				FIRE::ADD_EXPLOSION(Local_1802, 5, 0.5f, true, false, 1f, false);
				TASK::CLEAR_PED_TASKS(iLocal_1415);
				PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, Local_1444[1 /*4*/], 1f, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_SEEK_COVER_TO_COORDS(0, Local_1444[1 /*4*/], -2210.183f, 222.0442f, 178.61201f, -1, false);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_1415, iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				bLocal_1322 = true;
				iLocal_1797++;
			}
			break;
	}
}

void func_862()//Position - 0x8B8E6
{
	if (iLocal_89 == 1)
	{
		Local_299[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2149.5046f, 240.5233f, 187.5145f, 201.0944f, true, true, false);
		func_752(&(Local_298[51 /*25*/]), iLocal_64, &(Local_299[1 /*7*/]), -1, "MW_HELI1_1", iLocal_292, joaat("WEAPON_UNARMED"), 30, 0, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_298[51 /*25*/], 30, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_298[51 /*25*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_298[51 /*25*/], 2);
		PED::SET_PED_SHOOT_RATE(Local_298[51 /*25*/], 100);
		PED::SET_PED_FIRING_PATTERN(Local_298[51 /*25*/], joaat("FIRING_PATTERN_FULL_AUTO"));
		PED::SET_PED_ACCURACY(Local_298[51 /*25*/], 100);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_299[1 /*7*/]);
		PED::SET_PED_CAN_BE_TARGETTED(Local_298[51 /*25*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_298[51 /*25*/], true);
		ENTITY::SET_ENTITY_PROOFS(Local_298[51 /*25*/], true, true, true, false, false, false, false, false);
		func_750(&(Local_299[1 /*7*/].f_1), Local_299[1 /*7*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_299[1 /*7*/], false);
		ENTITY::SET_ENTITY_INVINCIBLE(Local_299[1 /*7*/], true);
		ENTITY::SET_ENTITY_PROOFS(Local_299[1 /*7*/], false, true, true, false, false, false, false, false);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_299[1 /*7*/], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_299[1 /*7*/], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_299[1 /*7*/], false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[1 /*7*/], 50, &Local_77, true);
		VEHICLE::SET_PLAYBACK_SPEED(Local_299[1 /*7*/], 1.3f);
		Local_299[1 /*7*/].f_4 = 1.3f;
		Local_298[51 /*25*/].f_9 = 1;
		iLocal_89++;
	}
	else if (iLocal_89 >= 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[1 /*7*/], false))
		{
			if (!PED::IS_PED_INJURED(Local_298[51 /*25*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[1 /*7*/]))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_298[51 /*25*/], false);
					PED::SET_PED_ACCURACY(Local_298[51 /*25*/], 5);
					PED::SET_PED_FIRING_PATTERN(Local_298[51 /*25*/], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
					TASK::TASK_HELI_MISSION(Local_298[51 /*25*/], Local_299[1 /*7*/], 0, func_28(), 0f, 0f, 0f, 8, 10f, 48f, -1f, 200, 18, -1f, 0);
					iLocal_89++;
				}
			}
		}
	}
}

void func_863()//Position - 0x8BAEA
{
	int iVar0;
	float fVar1;
	if (iLocal_1316 >= 1)
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dave_FBI", 0))
		{
			func_891(Local_1444[1 /*4*/], 0, 0);
			PED::FORCE_PED_MOTION_STATE(iLocal_1415, joaat("MotionState_Sprint"), false, 1, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_298[4 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Andreas_Sanchez", joaat("IG_Andreas"));
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_298[4 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Andreas_Sanchez", joaat("IG_Andreas")))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(Local_298[4 /*25*/], "Dead", "dead_g", -2153.3f, 235.581f, 184.623f, 0f, 0f, 41.5f, 1000f, -8f, -1, 2101256, 0.99f, 2, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_298[4 /*25*/], true, false);
			iLocal_1414 = GRAPHICS::ADD_DECAL(9001, -2153.7f, 236.07f, 183.6f, 0f, 0f, -1f, 0f, 1f, 0f, 0.5f, 0.5f, 0.196f, 0f, 0f, 1f, -1f, false, false, false);
			PED::SET_PED_COMPONENT_VARIATION(Local_298[4 /*25*/], 0, 1, 0, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[0 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dreyfuss", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1446[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dreyfuss", 0))
		{
			if (__LIB_0__::func_715(Local_1446[0 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1446[0 /*25*/], "START_CIA_LEAD(CS)");
				ENTITY::SET_ENTITY_COORDS(Local_1446[0 /*25*/], -2170.681f, 244.19972f, 183.60187f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1446[0 /*25*/], 203f);
				func_765(&(Local_1446[0 /*25*/]), -2168.56f, 239.71907f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1446[0 /*25*/], iLocal_293);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1446[0 /*25*/], joaat("WEAPON_PISTOL"), 120, true, true);
				PED::SET_PED_PROP_INDEX(Local_1446[0 /*25*/], 1, 0, 0, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[1 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_1", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1446[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_1", 0))
		{
			if (__LIB_0__::func_715(Local_1446[1 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1446[1 /*25*/], "START_CIA_2(CS)");
				func_765(&(Local_1446[1 /*25*/]), -2165.8208f, 237.71999f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1446[1 /*25*/], iLocal_293);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1446[1 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1446[1 /*25*/], joaat("WEAPON_PISTOL"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1446[1 /*25*/], -2167.223f, 241.20326f, 183.60187f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1446[1 /*25*/], 294.7903f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1446[1 /*25*/], 100f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[1 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[2 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_2", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1446[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_2", 0))
		{
			if (__LIB_0__::func_715(Local_1446[2 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1446[2 /*25*/], "START_CIA_3(CS)");
				func_765(&(Local_1446[2 /*25*/]), -2177.9763f, 233.94264f, 183.60187f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1446[2 /*25*/], iLocal_293);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1446[2 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1446[2 /*25*/], joaat("WEAPON_PISTOL"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1446[2 /*25*/], -2179.182f, 236.7674f, 183.60187f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1446[2 /*25*/], 292.3021f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[2 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1446[3 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Goon_3", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1446[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_3", 0))
		{
			if (__LIB_0__::func_715(Local_1446[3 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1446[3 /*25*/], "START_CIA_4(CS)");
				func_765(&(Local_1446[3 /*25*/]), -2170.8118f, 241.114f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1446[3 /*25*/], iLocal_293);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1446[3 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1446[3 /*25*/], joaat("WEAPON_PISTOL"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1446[3 /*25*/], -2170.8118f, 241.114f, 183.6019f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1446[3 /*25*/], 204.9214f);
				func_747(&(Local_1446[3 /*25*/].f_1), -2170.5376f, 241.26949f, 183.60187f, 204.9214f, 1, 0, 6, 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1446[3 /*25*/], -2170.5376f, 241.26949f, 183.60187f, -1, false, 1f, true, false, Local_1446[3 /*25*/].f_1, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1446[3 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[0 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lead_FBI", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1447[0 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lead_FBI", 0))
		{
			if (__LIB_0__::func_715(Local_1447[0 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1447[0 /*25*/], "START_FIB_LEAD(CS)");
				func_765(&(Local_1447[0 /*25*/]), -2164.5945f, 223.9964f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1447[0 /*25*/], iLocal_291);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1447[0 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1447[0 /*25*/], joaat("WEAPON_CARBINERIFLE"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1447[0 /*25*/], -2164.5945f, 223.9964f, 183.6019f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1447[0 /*25*/], 23.3085f);
				func_747(&(Local_1447[0 /*25*/].f_1), -2164.5945f, 223.9964f, 183.6019f, 23.3085f, 0, 0, 1, 1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1447[0 /*25*/], -2164.5945f, 223.9964f, 183.6019f, -1, true, 1f, true, false, Local_1447[0 /*25*/].f_1, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1447[0 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[1 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_1", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1447[1 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_1", 0))
		{
			if (__LIB_0__::func_715(Local_1447[1 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1447[1 /*25*/], "START_FIB_1(CS)");
				func_765(&(Local_1447[1 /*25*/]), -2160.0496f, 224.2791f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1447[1 /*25*/], iLocal_291);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1447[1 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1447[1 /*25*/], joaat("WEAPON_CARBINERIFLE"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1447[1 /*25*/], -2160.0496f, 224.2791f, 183.6019f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1447[1 /*25*/], 24.2236f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1447[1 /*25*/], -2160.0496f, 224.2791f, 183.6019f, -1, false, 1f, true, true, 0, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1447[1 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[2 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_2", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1447[2 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_2", 0))
		{
			if (__LIB_0__::func_715(Local_1447[2 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1447[2 /*25*/], "START_FIB_2(CS)");
				func_765(&(Local_1447[2 /*25*/]), -2170.154f, 221.671f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1447[2 /*25*/], iLocal_291);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1447[2 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1447[2 /*25*/], joaat("WEAPON_CARBINERIFLE"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1447[2 /*25*/], -2170.154f, 221.671f, 183.6019f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1447[2 /*25*/], 22.8487f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1447[2 /*25*/], -2170.154f, 221.671f, 183.6019f, -1, false, 1f, true, false, 0, true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1447[2 /*25*/], false, false);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1447[3 /*25*/]))
		{
			iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FIB_Goon_3", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_1447[3 /*25*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
		}
		else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FIB_Goon_3", 0))
		{
			if (__LIB_0__::func_715(Local_1447[3 /*25*/]))
			{
				PED::SET_PED_NAME_DEBUG(Local_1447[3 /*25*/], "START_FIB_3(CS)");
				func_765(&(Local_1447[3 /*25*/]), -2167.1433f, 223.9884f, 183.6019f, 2f, 1, 1, 1, 1, 0.5f, 0.5f, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1447[3 /*25*/], iLocal_291);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1447[3 /*25*/], true);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1447[3 /*25*/], joaat("WEAPON_CARBINERIFLE"), 120, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_1447[3 /*25*/], -2167.1433f, 223.9884f, 183.6019f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_1447[3 /*25*/], 50.9471f);
				TASK::TASK_AIM_GUN_AT_COORD(Local_1447[3 /*25*/], -2173.7585f, 231.0308f, 184.1056f, -1, true, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1447[3 /*25*/], false, false);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Security_guard_pistol", 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1792))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_1792, func_28());
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("WEAPON_PISTOL"), true);
			fVar1 = 0.5f;
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				fVar1 = 0f;
				ENTITY::SET_ENTITY_COORDS(func_28(), Local_1752.f_3, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_28(), 21.5259f);
			}
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1752.f_3, -1, true, fVar1, true, false, Local_1752.f_0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_28(), true, false);
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
		{
			iLocal_288 = 1;
		}
		if (iLocal_288)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				func_890(70f, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
		}
	}
	switch (iLocal_1316)
	{
		case 0:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_16__::func_852(&uLocal_304, iLocal_70);
				__LIB_16__::func_852(&uLocal_304, iLocal_64);
				__LIB_16__::func_852(&uLocal_304, iLocal_65);
				__LIB_16__::func_852(&uLocal_304, iLocal_66);
				__LIB_16__::func_860(&uLocal_304, joaat("WEAPON_PISTOL"), 31, 0);
				__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
				__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
				__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
				__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
				__LIB_16__::func_857(&uLocal_304, "Dead");
				__LIB_0__::func_429();
				AUDIO::PREPARE_MUSIC_EVENT("MIC3_MISSION_START");
				if (!WEAPON::HAS_PED_GOT_WEAPON(func_28(), joaat("WEAPON_PISTOL"), false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("WEAPON_PISTOL"), 120, false, true);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1415, "Dave_FBI", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_300[0 /*2*/], "Daves_Newspaper", 1, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Andreas_Sanchez", 2, joaat("IG_Andreas"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Dreyfuss", 2, joaat("IG_Paper"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_1", 2, joaat("S_M_M_CIASec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_2", 2, joaat("S_M_M_CIASec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "CIA_Goon_3", 2, joaat("S_M_M_CIASec_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Lead_FBI", 2, joaat("S_M_Y_Swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_1", 2, joaat("S_M_Y_Swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_2", 2, joaat("S_M_Y_Swat_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "FIB_Goon_3", 2, joaat("S_M_Y_Swat_01"), 0);
				iLocal_1792 = __LIB_17__::func_616(func_28(), joaat("WEAPON_PISTOL"), 1, 0, 0, 0, 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_1792, "Security_guard_pistol", 0, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PISTOL")), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1790))
				{
					__LIB_17__::func_509(iLocal_1790, 0f, 0f, 0f, 0f, 24, 0);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				iLocal_288 = 0;
				iLocal_1316 = 99;
			}
			break;
		case 99:
			MISC::CLEAR_AREA(-2155.3826f, 237.16681f, 183.60187f, 50f, false, false, false, false);
			MISC::CLEAR_AREA(-2155.3826f, 237.16681f, 183.60187f, 15f, true, false, false, false);
			MISC::CLEAR_AREA_OF_PEDS(-2155.3826f, 237.16681f, 183.60187f, 50f, 0);
			MISC::CLEAR_AREA_OF_OBJECTS(-2155.3826f, 237.16681f, 183.60187f, 50f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-2155.3826f, 237.16681f, 183.60187f, 50f, false, false, false, false, false, false, 0);
			if (__LIB_0__::func_715(iLocal_1790))
			{
				if (__LIB_0__::func_724(iLocal_1790, -2156.8975f, 237.02055f, 183.60187f, 1) <= 100f)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(-2284.7068f, 406.94702f, 173.46698f, 20f, false, false, false, false, false, false, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_1790, -2284.6772f, 406.713f, 173.46698f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_1790, 306.68f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1790, 5f);
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			__LIB_0__::func_366(1);
			iLocal_1316 = 1;
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 67500)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_INTRO"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_INTRO");
				}
				iLocal_1316++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 105000)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC3_MISSION_START"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MISSION_START");
				}
				iLocal_1316++;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() >= 109000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MIC3_STEVE_SHOT");
				iLocal_1316++;
			}
			break;
		case 4:
			if (iLocal_288 && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1316++;
			}
			break;
		case 5:
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_288 = 0;
				func_49(2);
			}
			break;
	}
}

void func_890(float fParam0, int iParam1)//Position - 0x92298
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((fParam0 - ENTITY::GET_ENTITY_HEADING(iParam1)));
}

void func_891(struct<3> Param0, bool bParam1, bool bParam2)//Position - 0x922BD
{
	func_719(iLocal_1415, Param0, bParam1, 1077936128, bParam2);
}

void func_892()//Position - 0x922D9
{
	if (!iLocal_1821)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1415))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1415, false) || !ENTITY::IS_ENTITY_DEAD(iLocal_1415, false))
			{
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_1415, true), 6f))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_300[0 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_300[0 /*2*/]));
					}
					ENTITY::SET_ENTITY_HEALTH(iLocal_1415, 0, 0);
					iLocal_1821 = 1;
				}
			}
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1813)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_304, __LIB_15__::func_957(30));
			__LIB_16__::func_852(&uLocal_304, joaat("p_cs_newspaper_s"));
			__LIB_16__::func_852(&uLocal_304, joaat("frogger"));
			__LIB_16__::func_857(&uLocal_304, "missmic3");
			__LIB_16__::func_859(&uLocal_304, "mic3_intro_walk");
			iLocal_1813 = 1;
			break;
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic3_intro_walk"))
			{
				bLocal_1820 = false;
				iLocal_1819 = 0;
				iLocal_1821 = 0;
				iLocal_1815 = 0;
				iLocal_1814 = 0;
				Global_100441.f_12[1] = 0;
				Global_100441.f_12[0] = 0;
				Global_100441.f_12[2] = 0;
				func_902(&uLocal_95, &cLocal_55, "M3_INTL", 8, 0, 0, 0, 0);
				iLocal_1813 = 2;
			}
			break;
		case 2:
			if (func_901())
			{
				iLocal_1813 = 3;
			}
			break;
		case 3:
			if (((STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_957(30)) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_newspaper_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("frogger"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmic3"))
			{
				if (func_897())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_0__::func_229("M3_WLKDV", 7500, 1);
					iLocal_1813 = 4;
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2150.921f, 221.22029f, 183.40187f, -2161.7517f, 245.57925f, 186.60187f, 4f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2156.449f, 238.03314f, 183.40187f, -2157.897f, 246.83017f, 186.60187f, 4.2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2155.382f, 235.88385f, 183.40187f, -2149.944f, 226.99934f, 186.60187f, 4.2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2159.87f, 227.7445f, 182.89912f, -2165.9277f, 241.47902f, 186.57875f, 10.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2151.6575f, 223.14308f, 183.40187f, -2161.3718f, 217.80739f, 186.60187f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2164.148f, 252.14459f, 183.40187f, -2157.978f, 245.18547f, 186.60187f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2170.6396f, 227.82349f, 183.35187f, -2163.9304f, 231.20045f, 186.60187f, 9f, false, true, 0))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -2152.2644f, 234.47968f, 183.60188f, 1) < 14.125f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2159.443f, 230.09575f, 182.66847f, -2171.0073f, 256.08234f, 187.73003f, 27.5f, false, true, 0))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131070, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131069, 8);
						}
						__LIB_17__::func_468(1);
						__LIB_0__::func_366(0);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_1818 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
							iLocal_1813 = 5;
						}
						else
						{
							iLocal_1813 = 7;
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_715(iLocal_1818))
			{
				if (__LIB_0__::func_213(iLocal_1818, 2f, 1, 1056964608, 0, 1, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1813 = 6;
				}
			}
			break;
		case 6:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_1813 = 7;
			}
			break;
		case 7:
			if (func_893())
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				}
				iLocal_1813 = 8;
			}
			break;
		case 8:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_715(iLocal_1790))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1790, 1) <= 350f)
				{
					if (__LIB_0__::func_724(iLocal_1790, -2334.7815f, 293.80963f, 169.3519f, 1) <= 75f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1790, -2352.7544f, 294.42694f, 168.46722f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_1790, 113f);
					}
					if (__LIB_0__::func_724(iLocal_1790, -2303.0754f, 392.83963f, 175.10152f, 1) <= 45f)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_1790, -2284.5796f, 406.77887f, 173.46704f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_1790, 305.72f);
					}
				}
			}
			if (__LIB_0__::func_715(iLocal_1415))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_1415, true, true, true, true, true, false, false, false);
			}
			iLocal_1813 = 9;
			func_49(1);
			break;
		case 9:
			break;
	}
}

int func_893()//Position - 0x92817
{
	__LIB_16__::func_309(1, 0);
	if (iLocal_1829)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(true);
		}
		CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_1415, Local_1823, true, -1, 2500, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1827);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1826);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_1825);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1824);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1828);
		iLocal_1829 = 0;
	}
	switch (iLocal_1815)
	{
		case 0:
			__LIB_13__::func_783();
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_1415, -1, 2048, 2);
			iLocal_302[1] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1415, iLocal_302[1], "missmic3", "newspaper_dialogue_idle_dave", 8f, -8f, 5, 16, 1000f, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_300[0 /*2*/], iLocal_302[1], "newspaper_dialogue_idle_newspaper", "missmic3", 8f, 8f, 0, 1000f);
			iLocal_1815 = 1;
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_302[2]))
			{
				if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					iLocal_1815 = 2;
				}
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_1415, Local_1823, true, -1, 2500, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1827);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1826);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_1825);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1824);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1828);
				}
			}
			if (!iLocal_1819)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_302[1]) >= 1f)
				{
					iLocal_302[2] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1415, iLocal_302[2], "missmic3", "newspaper_idle_outro_dave", 8f, -8f, 5, 16, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_300[0 /*2*/], iLocal_302[2], "newspaper_idle_outro_newspaper", "missmic3", 8f, 8f, 0, 1000f);
					iLocal_1819 = 1;
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_897()//Position - 0x92B50
{
	if (__LIB_16__::func_930(&iLocal_1415, 30, -2150.729f, 232.467f, 183.606f, 72.1521f, 1))
	{
		func_636();
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1415, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_1415, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_1415, false, false, false, false, false, false, false, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_1415, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_957(30));
		OBJECT::DELETE_OBJECT(&(Local_300[0 /*2*/]));
		Local_300[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_newspaper_s"), -2150.729f, 232.467f, 183.606f, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_newspaper_s"));
		iLocal_302[0] = PED::CREATE_SYNCHRONIZED_SCENE(-2150.729f, 232.467f, 183.606f, 0f, 0f, 68.4f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_1415, iLocal_302[0], "missmic3", "newspaper_idle_loop_dave", 1000f, -8f, 21, 16, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_300[0 /*2*/], iLocal_302[0], "newspaper_idle_loop_newspaper", "missmic3", 1000f, 8f, 0, 1000f);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_302[0], true);
		__LIB_0__::func_222(&uLocal_95, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
		__LIB_0__::func_222(&uLocal_95, 6, iLocal_1415, "Dave", 0, 1);
		func_898();
		return 1;
	}
	return 0;
}

void func_898()//Position - 0x92C8A
{
	Local_299[16 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_70, Local_85, 260.0503f, true, true, false);
	if (__LIB_0__::func_715(Local_299[16 /*7*/]))
	{
		VEHICLE::SET_VEHICLE_COLOURS(Local_299[16 /*7*/], 34, 34);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_299[16 /*7*/], 0, 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_299[16 /*7*/], 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_299[16 /*7*/], false);
		__LIB_16__::func_912(&uLocal_304, iLocal_70);
	}
}

int func_901()//Position - 0x92DC9
{
	float fVar0;
	if (!__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_1814)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !Global_112433) && __LIB_0__::func_715(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iLocal_1790 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				ENTITY::SET_ENTITY_COORDS(iLocal_1790, -2309.1836f, 426.4051f, 173.4666f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_1790, 174.4698f);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1790, true, true);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), iLocal_1790, Local_1822, 20f, 0, ENTITY::GET_ENTITY_MODEL(iLocal_1790), 262144, 2f, 10f);
				bLocal_1820 = true;
			}
			else
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2315.2134f, 399.6279f, 173.4666f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 168.5935f);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "mic3_intro_walk", 3, 0, -1);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0, true, true);
			}
			func_13(1);
			MISC::CLEAR_AREA_OF_VEHICLES(-2306.2795f, 443.1111f, 173.46664f, 100f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-2306.2795f, 443.1111f, 173.46664f, 100f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-2306.2795f, 443.1111f, 173.46664f, 100f);
			if (!CAM::DOES_CAM_EXIST(iLocal_1816))
			{
				iLocal_1816 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_1817))
			{
				iLocal_1817 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			}
			CAM::SET_CAM_COORD(iLocal_1816, -2309.3f, 436.3f, 179.9f);
			CAM::SET_CAM_ROT(iLocal_1816, 2.5f, 0f, -173.8f, 2);
			CAM::SET_CAM_FOV(iLocal_1816, 50f);
			CAM::SET_CAM_COORD(iLocal_1817, -2309.5f, 432.9f, 180.1f);
			CAM::SET_CAM_ROT(iLocal_1817, 1.5f, 0f, -171.2f, 2);
			CAM::SET_CAM_FOV(iLocal_1817, 50f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1817, iLocal_1816, 7000, 1, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_824(1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iLocal_1814 = 1;
			break;
		case 1:
			iLocal_1830 = 0;
			iLocal_1831 = 0;
			iLocal_1814 = 2;
			break;
		case 2:
		case 3:
			if (iLocal_1814 == 2)
			{
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_1817))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_1816, false);
					CAM::SET_CAM_ACTIVE(iLocal_1817, false);
					CAM::DESTROY_CAM(iLocal_1816, false);
					CAM::DESTROY_CAM(iLocal_1817, false);
					if (bLocal_1820)
					{
						iLocal_1814 = 3;
					}
					else
					{
						if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2292.8132f, 369.7231f, 173.60167f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203.82f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
							HUD::DISPLAY_RADAR(true);
							HUD::DISPLAY_HUD(true);
							CAM::SET_WIDESCREEN_BORDERS(false, 0);
						}
						iLocal_1814 = 5;
					}
				}
			}
			if (!iLocal_1831)
			{
				if (__LIB_0__::func_715(iLocal_1790))
				{
					fVar0 = 6.25f;
					if (__LIB_0__::func_724(iLocal_1790, Local_1822, 1) <= fVar0)
					{
						iLocal_1831 = 1;
					}
				}
			}
			else if (!iLocal_1830)
			{
				if (__LIB_0__::func_715(iLocal_1790))
				{
					if (__LIB_0__::func_213(iLocal_1790, 2f, 1, 1056964608, 0, 1, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_1830 = 1;
					}
				}
			}
			else if (iLocal_1814 == 3)
			{
				iLocal_1814 = 4;
			}
			break;
		case 4:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_1814 = 5;
			}
			break;
		case 5:
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (bLocal_1820)
			{
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				CAM::SET_WIDESCREEN_BORDERS(false, 0);
			}
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 0, true, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 0, true, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 0, true, true);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 0, true, true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 64);
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			__LIB_0__::func_671(0);
			return 1;
			break;
	}
	return 0;
}

int func_902(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x931F8
{
	__LIB_0__::func_376(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_22598 = 1;
	Global_22602 = 0;
	Global_22600 = iParam7;
	Global_2883585 = 0;
	return __LIB_15__::func_773(sParam2, iParam3, 0);
}

void func_905()//Position - 0x932E1
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < Local_301.f_0)
	{
		if ((CAM::DOES_CAM_EXIST(Local_301[iVar0 /*10*/]) && !CAM::IS_CAM_INTERPOLATING(Local_301[iVar0 /*10*/])) && Local_301[iVar0 /*10*/].f_1)
		{
			fVar1 = __LIB_0__::func_331((IntToFloat((MISC::GET_GAME_TIMER() - Local_301[iVar0 /*10*/].f_8)) / SYSTEM::TO_FLOAT(Local_301[iVar0 /*10*/].f_9)), 0f, 1f);
			Var2 = { __LIB_1__::func_576(Local_301[iVar0 /*10*/].f_2, Local_301[iVar0 /*10*/].f_5, fVar1) };
			CAM::SET_CAM_COORD(Local_301[iVar0 /*10*/], Var2);
			if (fVar1 == 1f || __LIB_0__::func_78(Local_301[iVar0 /*10*/].f_5, Var2, 0))
			{
				Local_301[iVar0 /*10*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}

void func_908()//Position - 0x933EB
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_75())
	{
		iLocal_260 = -1;
	}
	else if (iLocal_260 == -1)
	{
		iLocal_260 = MISC::GET_GAME_TIMER();
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!iLocal_2054)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			__LIB_0__::func_377(iVar1, 434);
			__LIB_0__::func_505(iVar1, -1);
			iLocal_2054 = 1;
		}
	}
	else if (iLocal_2054)
	{
		__LIB_0__::func_505(0, 434);
		__LIB_0__::func_377(0, -1);
		iLocal_2054 = 0;
	}
	iVar0 = 0;
	while (iVar0 < Local_298.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]))
		{
			if (((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) != iLocal_290 && Local_298[iVar0 /*25*/] != PLAYER::PLAYER_PED_ID()) && Local_298[iVar0 /*25*/] != func_28()) && Local_298[iVar0 /*25*/] != func_29())
			{
				if ((!PED::IS_PED_INJURED(Local_298[iVar0 /*25*/]) && iLocal_1393 != -1) && iLocal_1393 == Local_298[iVar0 /*25*/].f_21)
				{
					__LIB_0__::func_631(Local_298[iVar0 /*25*/], &(Local_298[iVar0 /*25*/].f_13), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else
				{
					__LIB_0__::func_631(Local_298[iVar0 /*25*/], &(Local_298[iVar0 /*25*/].f_13), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			if (PED::IS_PED_INJURED(Local_298[iVar0 /*25*/]))
			{
				if (Local_298[iVar0 /*25*/] == func_28())
				{
					func_968(2);
				}
				else if (Local_298[iVar0 /*25*/] == func_29())
				{
					func_968(3);
				}
				else
				{
					func_910(&(Local_298[iVar0 /*25*/]));
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_298[iVar0 /*25*/], false))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_298[iVar0 /*25*/].f_8))
				{
					if (!iLocal_1315 == 8)
					{
						if (iVar0 == 0)
						{
							if (PLAYER::PLAYER_PED_ID() != Local_298[0 /*25*/])
							{
								func_176(&(Local_298[0 /*25*/].f_8), Local_298[0 /*25*/], 0);
							}
						}
						else if (iVar0 == 1)
						{
							if (iLocal_1384 && PLAYER::PLAYER_PED_ID() != Local_298[1 /*25*/])
							{
								func_176(&(Local_298[1 /*25*/].f_8), Local_298[1 /*25*/], 0);
							}
						}
					}
				}
			}
		}
		else
		{
			Local_298[iVar0 /*25*/].f_22 = 0;
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1415))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_1415, false))
		{
			func_968(4);
		}
	}
	if (iLocal_1315 == 2 || iLocal_1315 == 5)
	{
		if (__LIB_38__::func_175(&Local_1680) || __LIB_38__::func_175(&Local_1681))
		{
			func_968(5);
		}
	}
	if (iLocal_1315 == 2)
	{
		if (__LIB_38__::func_175(&Local_1682))
		{
			func_968(5);
		}
	}
	if (iLocal_1315 == 0)
	{
		func_909(250f, 240f);
	}
	else if (iLocal_1315 == 2)
	{
		func_909(85f, 75f);
	}
	else if ((iLocal_1315 == 5 || iLocal_1315 == 6) || iLocal_1315 == 4)
	{
		if (__LIB_14__::func_466() == 2)
		{
			func_909(100f, 90f);
		}
		else if (__LIB_14__::func_466() == 0)
		{
			func_909(85f, 75f);
		}
	}
	else if (iLocal_1315 == 7)
	{
		if (iLocal_51 < 6)
		{
			func_909(150f, 140f);
		}
	}
	if (iLocal_1717)
	{
		if (iLocal_1787 != 0 && iLocal_1787 != 3)
		{
			if (__LIB_37__::func_929(&Local_1683, func_28()))
			{
				ENTITY::SET_ENTITY_HEALTH(func_28(), 0, 0);
			}
		}
		if (__LIB_14__::func_466() == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2194.792f, 237.49696f, 183.60188f, -2196.4165f, 236.78465f, 186.1197f, 13.375f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_299.f_0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_299[iVar0 /*7*/]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[iVar0 /*7*/], false)) && ENTITY::IS_ENTITY_DEAD(Local_299[iVar0 /*7*/], false))
		{
			__LIB_13__::func_808(&(Local_299[iVar0 /*7*/].f_1));
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[iVar0 /*7*/]));
			__LIB_0__::func_497(439, 1, 0);
		}
		iVar0++;
	}
}

void func_909(float fParam0, float fParam1)//Position - 0x937E0
{
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_715(iLocal_1415))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1415, 1) >= fParam0)
		{
			func_968(5);
		}
		if (__LIB_1__::func_13(&iLocal_1428))
		{
			if (__LIB_2__::func_572(&iLocal_1428) >= 10f)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1415, 1) >= fParam1)
				{
					if (!__LIB_13__::func_755(&iLocal_263, 1))
					{
						__LIB_1__::func_31(&iLocal_1428);
						__LIB_0__::func_229("M3_DVWARN", 7500, 1);
						if (iLocal_1315 == 5)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_297))
							{
								__LIB_13__::func_808(&iLocal_297);
							}
						}
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1415, 1) <= fParam1)
				{
					if (__LIB_0__::func_501("M3_DVWARN", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("M3_DVWARN");
					}
					if (iLocal_94)
					{
						if (iLocal_1315 == 5)
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_297))
							{
								iLocal_297 = HUD::ADD_BLIP_FOR_COORD(-2247.7317f, 268.95413f, 173.60196f);
								__LIB_0__::func_229("M3_02", 7500, 1);
							}
						}
					}
				}
			}
			else if (__LIB_0__::func_501("M3_DVWARN", 0, 0))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1415, 1) <= fParam1)
				{
					HUD::CLEAR_THIS_PRINT("M3_DVWARN");
				}
			}
		}
		else
		{
			__LIB_1__::func_31(&iLocal_1428);
		}
	}
}

void func_910(int* iParam0)//Position - 0x93916
{
	if (iParam0->f_10 == -1)
	{
		iParam0->f_10 = MISC::GET_GAME_TIMER();
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
		{
			iParam0->f_11 = 1;
		}
		func_22(&(iParam0->f_1));
	}
	else if ((MISC::GET_GAME_TIMER() - iParam0->f_10) >= 2000)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		iParam0->f_11 = 0;
	}
}

void func_912()//Position - 0x93979
{
	int iVar0;
	uLocal_1320 = uLocal_1320;
	if (bLocal_1319 == 1)
	{
		if (iLocal_1314 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(SYSTEM::ROUND((800f * fLocal_1383)));
				}
			}
			else
			{
				func_49(iLocal_1321);
			}
		}
		else if (iLocal_1314 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (!__LIB_0__::func_324())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_932();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			__LIB_16__::func_863(&uLocal_304);
			__LIB_37__::func_186(&uLocal_304, "MIC3", 0);
			func_60(1);
			switch (iLocal_1315)
			{
				case 0:
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2291.839f, 367.5178f, 173.6017f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 203f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2291.8286f, 367.6647f, 173.6017f, 15f, 0);
					}
					__LIB_16__::func_852(&uLocal_304, __LIB_15__::func_957(30));
					__LIB_16__::func_852(&uLocal_304, joaat("p_cs_newspaper_s"));
					__LIB_16__::func_852(&uLocal_304, joaat("frogger"));
					__LIB_16__::func_857(&uLocal_304, "missmic3");
					break;
				case 1:
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2156.9224f, 234.4068f, 183.6015f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.7745f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2156.9224f, 234.4068f, 183.6015f, 113.7745f, 0);
					}
					__LIB_16__::func_852(&uLocal_304, __LIB_15__::func_957(30));
					__LIB_16__::func_852(&uLocal_304, joaat("p_cs_newspaper_s"));
					__LIB_16__::func_852(&uLocal_304, joaat("frogger"));
					__LIB_16__::func_857(&uLocal_304, "missmic3");
					break;
				case 2:
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1752.f_3, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 21.5258f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2156.9224f, 234.4068f, 183.6015f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_65);
					__LIB_16__::func_852(&uLocal_304, iLocal_66);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_852(&uLocal_304, joaat("IG_Paper"));
					__LIB_16__::func_853(&uLocal_304, 3, &Local_77);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 3:
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2221.4248f, 256.6886f, 183.6041f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.6962f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2221.4248f, 256.6886f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_65);
					__LIB_16__::func_852(&uLocal_304, iLocal_66);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_857(&uLocal_304, cLocal_63);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 4:
					__LIB_0__::func_544(82, 1, 0, 1, 1);
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2221.4248f, 256.6886f, 183.6041f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 109.6962f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2221.3142f, 251.09691f, 183.60408f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_852(&uLocal_304, iLocal_65);
					__LIB_16__::func_852(&uLocal_304, iLocal_66);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 5:
					__LIB_0__::func_544(82, 1, 0, 1, 1);
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2219.298f, 247.3061f, 183.6041f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 40.5077f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2231.9397f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_65);
					__LIB_16__::func_852(&uLocal_304, iLocal_66);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_857(&uLocal_304, cLocal_60);
					__LIB_16__::func_857(&uLocal_304, cLocal_61);
					__LIB_16__::func_857(&uLocal_304, cLocal_62);
					__LIB_16__::func_853(&uLocal_304, 4, &Local_77);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 6:
					__LIB_0__::func_544(82, 1, 0, 1, 1);
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2249.8552f, 270.12097f, 173.60196f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2231.9397f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_852(&uLocal_304, iLocal_65);
					__LIB_16__::func_852(&uLocal_304, iLocal_66);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_75, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_74, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iLocal_73, 31, 0);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 7:
					__LIB_0__::func_544(82, 1, 0, 1, 1);
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2249.8552f, 270.12097f, 173.60196f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2231.9397f, 277.473f, 183.6041f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_860(&uLocal_304, iLocal_76, 31, 0);
					__LIB_16__::func_852(&uLocal_304, joaat("carbonizzare"));
					__LIB_16__::func_852(&uLocal_304, joaat("dominator"));
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					__LIB_16__::func_853(&uLocal_304, 1, &Local_77);
					__LIB_16__::func_853(&uLocal_304, 2, &Local_77);
					__LIB_16__::func_859(&uLocal_304, cLocal_57);
					__LIB_16__::func_859(&uLocal_304, cLocal_58);
					__LIB_16__::func_909(&uLocal_304, &cLocal_80);
					break;
				case 8:
					__LIB_0__::func_544(82, 1, 0, 1, 1);
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2295.5474f, 264.1368f, 168.6018f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3686f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						__LIB_16__::func_910(&uLocal_304, -2295.5474f, 264.1368f, 168.6018f, 15f, 0);
					}
					iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_69);
					__LIB_16__::func_852(&uLocal_304, iLocal_68);
					__LIB_16__::func_852(&uLocal_304, iLocal_64);
					__LIB_16__::func_852(&uLocal_304, iLocal_70);
					__LIB_16__::func_852(&uLocal_304, iLocal_67);
					__LIB_16__::func_852(&uLocal_304, joaat("dominator"));
					__LIB_16__::func_852(&uLocal_304, joaat("carbonizzare"));
					__LIB_16__::func_852(&uLocal_304, joaat("vacca"));
					__LIB_16__::func_859(&uLocal_304, cLocal_57);
					__LIB_16__::func_859(&uLocal_304, cLocal_58);
					__LIB_16__::func_853(&uLocal_304, 1, &Local_77);
					__LIB_16__::func_853(&uLocal_304, 2, &Local_77);
					__LIB_16__::func_860(&uLocal_304, iVar0, 31, 0);
					break;
				case 9:
					if (!__LIB_0__::func_324())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1473.1211f, -396.4522f, 37.1653f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 307.9418f);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					}
					break;
				case 10:
					break;
			}
			while (!__LIB_17__::func_632(&uLocal_304))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::STOP_AUDIO_SCENES();
			__LIB_37__::func_191(&(Local_303[0 /*8*/]), 0, 0, 1);
			__LIB_37__::func_191(&(Local_303[2 /*8*/]), 0, 0, 1);
			func_921(0, 1, 1);
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			func_13(1);
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(func_28(), false);
			WEAPON::SET_CURRENT_PED_WEAPON(func_28(), iVar0, false);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			switch (iLocal_1315)
			{
				case 0:
					iLocal_1717 = 0;
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0, true, true);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-53446139, 0f, true, false);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1333960556, 0f, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 4, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 4, true, true);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-41786493, 0f, true, false);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1750120734, 0f, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 4, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 4, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-53446139, 0, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1333960556, 0, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-41786493, 0, true, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1750120734, 0, true, true);
					iLocal_1813 = 3;
					break;
				case 1:
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_INT", 131069, 8);
					while (!__LIB_16__::func_930(&iLocal_1415, 30, -2163.489f, 233.88806f, 183.60187f, 115.12f, 0))
					{
						SYSTEM::WAIT(0);
					}
					Local_300[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_cs_newspaper_s"), -2150.729f, 232.467f, 183.606f, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_newspaper_s"));
					break;
				case 2:
					func_898();
					iLocal_1717 = 1;
					WEAPON::SET_CURRENT_PED_WEAPON(func_28(), joaat("WEAPON_PISTOL"), true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1752.f_3, -1, true, 0f, true, false, Local_1752.f_0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_28(), false, false);
					while (!__LIB_16__::func_930(&iLocal_1415, 30, -2163.489f, 233.88806f, 183.60187f, 115.12f, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_636();
					PED::FORCE_PED_MOTION_STATE(iLocal_1415, joaat("MotionState_Sprint"), false, 0, false);
					func_714(1);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -2205.5642f, 215.193f, 183.60187f, 3f, -1, 40000f, 0.5f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1444[1 /*4*/], 3f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 500f, 0);
					func_712(iLocal_1415, 1);
					SYSTEM::WAIT(2000);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FIGHT_RESTART");
					break;
				case 3:
					func_898();
					func_920();
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_1883, true);
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 0, 60);
					__LIB_1__::func_31(&iLocal_1893);
					Local_299[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2149.5046f, 240.5233f, 187.5145f, 201.0944f, true, true, false);
					func_752(&(Local_298[51 /*25*/]), iLocal_64, &(Local_299[1 /*7*/]), -1, "MW_HELI1_1", iLocal_292, joaat("WEAPON_UNARMED"), 30, 0, 0, 0);
					if (__LIB_0__::func_715(Local_298[51 /*25*/]) && __LIB_0__::func_715(Local_299[1 /*7*/]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_298[51 /*25*/], 30, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_298[51 /*25*/], 1);
						PED::SET_PED_COMBAT_RANGE(Local_298[51 /*25*/], 2);
						PED::SET_PED_SHOOT_RATE(Local_298[51 /*25*/], 100);
						PED::SET_PED_FIRING_PATTERN(Local_298[51 /*25*/], joaat("FIRING_PATTERN_FULL_AUTO"));
						PED::SET_PED_ACCURACY(Local_298[51 /*25*/], 100);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_299[1 /*7*/]);
						PED::SET_PED_CAN_BE_TARGETTED(Local_298[51 /*25*/], false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_298[51 /*25*/], true);
						func_750(&(Local_299[1 /*7*/].f_1), Local_299[1 /*7*/], 1);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_299[1 /*7*/], false);
						Local_298[51 /*25*/].f_9 = 1;
						ENTITY::SET_ENTITY_PROOFS(Local_299[1 /*7*/], true, true, true, false, false, false, false, false);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_299[1 /*7*/], false);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_299[1 /*7*/], false);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_299[1 /*7*/], false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_299[1 /*7*/], true, true, false);
						ENTITY::SET_ENTITY_COORDS(Local_299[1 /*7*/], -2241.1f, 263.6f, 190.3f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_299[1 /*7*/], 235f);
					}
					while (!__LIB_16__::func_930(&iLocal_1415, 30, Local_1444[2 /*4*/], Local_1444[2 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (__LIB_0__::func_715(iLocal_1415))
					{
						func_636();
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_1415, false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_1415, Local_1444[2 /*4*/], 2f, true, false);
						TASK::TASK_SEEK_COVER_TO_COORDS(iLocal_1415, Local_1444[2 /*4*/], -2231.0115f, 263.63266f, 173.60196f, -1, false);
					}
					func_162(1, 1, 0, 0, 0, 0);
					func_827();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_TREV_HELI_RESTART");
					if (Global_100441.f_12[2] == 1)
					{
						func_162(1, 1, 0, 0, 0, 0);
						__LIB_16__::func_896(&iLocal_1323, 2);
						__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
						func_162(1, 1, 0, 0, 0, 0);
						Local_298[0 /*25*/] = iLocal_1323[0];
						Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1445, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_1445.f_3);
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
							__LIB_0__::func_671(1);
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
							HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
							WEAPON::GIVE_WEAPON_TO_PED(Local_298[1 /*25*/], joaat("WEAPON_SNIPERRIFLE"), 10, true, true);
							AUDIO::START_AUDIO_SCENE("MI_3_TREVOR_SHOOTS_HELICOPTER");
						}
						iLocal_1868 = 3;
					}
					else
					{
						iLocal_1868 = 0;
					}
					iLocal_1717 = 1;
					bLocal_1322 = true;
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 4:
					func_898();
					func_920();
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 0, 60);
					func_162(1, 1, 0, 0, 0, 0);
					iLocal_1717 = 1;
					func_821();
					__LIB_16__::func_896(&iLocal_1323, 2);
					__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_298[1 /*25*/], joaat("WEAPON_SNIPERRIFLE"), 10, true, true);
					bLocal_1322 = true;
					func_162(1, 1, 0, 0, 0, 0);
					while (!__LIB_16__::func_930(&iLocal_1415, 30, -2219.0334f, 246.49496f, 173.60182f, 20f, 0))
					{
						SYSTEM::WAIT(0);
					}
					func_636();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MT_FIGHT_RESTART");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					break;
				case 5:
					func_898();
					func_920();
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 0, 60);
					func_162(1, 1, 0, 0, 0, 0);
					iLocal_1717 = 1;
					__LIB_16__::func_896(&iLocal_1323, 2);
					__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_298[1 /*25*/], joaat("WEAPON_SNIPERRIFLE"), 10, true, true);
					bLocal_1322 = true;
					func_162(1, 1, 0, 0, 0, 0);
					Local_298[0 /*25*/] = iLocal_1323[0];
					while (!__LIB_16__::func_930(&iLocal_1415, 30, -2219.3235f, 247.25533f, 173.60182f, 20f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (__LIB_0__::func_715(func_28()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(func_28(), false);
					}
					func_636();
					iLocal_1787 = 0;
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_FOUNTAIN_RESTART");
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
					AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
					AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					break;
				case 6:
					func_898();
					func_920();
					bLocal_1322 = true;
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 1, 60);
					while (!__LIB_16__::func_930(&iLocal_1415, 30, Local_1444[3 /*4*/], Local_1444[3 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_1415, Local_1765.f_3, -1, true, 0f, false, false, Local_1765.f_0, false);
					if (Global_100441.f_12[0] == 1)
					{
						func_162(0, 1, 0, 0, 0, 0);
						__LIB_16__::func_896(&iLocal_1323, 2);
						__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
						func_162(0, 1, 0, 0, 0, 0);
						Local_298[0 /*25*/] = iLocal_1323[0];
						Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (__LIB_0__::func_715(func_28()))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(func_28(), true);
							ENTITY::SET_ENTITY_PROOFS(func_28(), true, true, true, true, true, false, false, false);
							__LIB_39__::func_107(func_28(), Local_1676, 0, 0);
						}
						if (Global_100441.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), Local_1761.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_29(), 113.2243f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1761.f_3, -1, false, 0f, true, true, Local_1761.f_0, false);
							if (__LIB_0__::func_715(func_28()))
							{
								ENTITY::SET_ENTITY_COORDS(func_28(), -2246.6619f, 271.64197f, 173.60196f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1769.f_3, -1, true, 0f, false, false, Local_1769.f_0, false);
							}
						}
						else if (Global_100441.f_12[1] == 0)
						{
							if (__LIB_0__::func_715(func_28()))
							{
								ENTITY::SET_ENTITY_COORDS(func_28(), Local_1761.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_28(), Local_1761.f_3, -1, true, 0f, false, false, Local_1761.f_0, false);
							}
							func_919();
						}
					}
					else
					{
						iLocal_1323[0] = PLAYER::PLAYER_PED_ID();
						iLocal_1323[2] = Local_298[1 /*25*/];
						Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						if (__LIB_0__::func_715(iLocal_1323[0]))
						{
						}
						if (__LIB_0__::func_715(iLocal_1323[2]))
						{
						}
						if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1761.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 113.2243f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1761.f_3, -1, true, 0f, true, true, Local_1761.f_0, false);
						}
						if (Global_100441.f_12[1] == 1)
						{
							if (__LIB_0__::func_715(func_29()))
							{
								ENTITY::SET_ENTITY_COORDS(func_29(), Local_1769.f_3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_29(), Local_1769.f_3, -1, true, 0f, false, false, Local_1769.f_0, false);
							}
						}
						else
						{
							func_919();
							if (__LIB_0__::func_715(func_29()))
							{
								PED::SET_PED_COMBAT_MOVEMENT(func_29(), 1);
								PED::REMOVE_PED_DEFENSIVE_AREA(func_29(), false);
								__LIB_39__::func_107(func_29(), Local_1675, 0, 0);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_29(), 200f, 0);
							}
						}
					}
					iLocal_1717 = 0;
					iLocal_1787 = 0;
					iLocal_1716 = 0;
					func_636();
					func_774();
					func_770();
					func_775(&Local_1702, 5, "WAR_FIB", 546661/*func_776*/, 1056964608, 1, -1);
					func_775(&Local_1712, 5, "WAR_MW", 546661/*func_776*/, 1056964608, 1, -1);
					func_784(&Local_1702, &Local_1561, &Local_1699, iLocal_65, Local_1697, 1);
					func_784(&Local_1712, &Local_1563, &Local_1700, iLocal_64, Local_1698, 0);
					PED::DELETE_PED(&(Local_1561[0 /*25*/]));
					PED::DELETE_PED(&(Local_1563[0 /*25*/]));
					func_918();
					func_917(Local_1444[3 /*4*/]);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_DAVE_ESCAPES_RESTART");
					break;
				case 7:
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 1, 60);
					func_898();
					func_920();
					bLocal_1322 = true;
					while (!__LIB_16__::func_930(&iLocal_1415, 30, Local_1444[3 /*4*/], Local_1444[3 /*4*/].f_3, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (Global_100441.f_12[0] == 1)
					{
						func_162(0, 1, 0, 0, 0, 0);
						__LIB_16__::func_896(&iLocal_1323, 2);
						__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
						func_162(0, 1, 0, 0, 0, 0);
						Local_298[0 /*25*/] = iLocal_1323[0];
						Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (Global_100441.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2248.9978f, 268.9602f, 173.602f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
							ENTITY::SET_ENTITY_COORDS(func_28(), -2246.6619f, 271.64197f, 173.60196f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(func_28(), -2248.9978f, 268.9602f, 173.602f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
						}
						WEAPON::GIVE_WEAPON_TO_PED(func_28(), joaat("WEAPON_COMBATMG"), 1000, true, true);
					}
					else
					{
						iLocal_1323[0] = PLAYER::PLAYER_PED_ID();
						iLocal_1323[2] = Local_298[1 /*25*/];
						Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2248.9978f, 268.9602f, 173.602f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24.2243f);
						if (Global_100441.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2246.6619f, 271.64197f, 173.60196f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
						}
					}
					iLocal_1717 = 0;
					func_636();
					func_917(Local_1444[3 /*4*/]);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_ESCAPE_RESTART");
					break;
				case 8:
					func_172(&(Local_298[1 /*25*/]), 2, Local_1445, Local_1445.f_3, joaat("WEAPON_SNIPERRIFLE"), 10, 1, 1, 1, 60);
					func_898();
					func_920();
					while (!__LIB_16__::func_930(&iLocal_1415, 30, -2330.064f, 259.406f, 168.60179f, 300f, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (Global_100441.f_12[0] == 1)
					{
						func_162(0, 1, 0, 0, 0, 0);
						__LIB_16__::func_896(&iLocal_1323, 2);
						__LIB_37__::func_936(&iLocal_1323, 1, 0, 0);
						func_162(0, 1, 0, 0, 0, 0);
						Local_298[0 /*25*/] = iLocal_1323[0];
						Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_28(), "MI_3_MICHAEL_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_TREVOR");
						if (Global_100441.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), Local_1773.f_3, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_29(), 112.58f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_29(), Local_1773.f_3, -1, true, 0f, true, true, Local_1773.f_0, false);
						}
						ENTITY::SET_ENTITY_COORDS(func_28(), -2289.1433f, 267.78027f, 168.60179f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(func_28(), 24.2243f);
					}
					else
					{
						iLocal_1323[0] = PLAYER::PLAYER_PED_ID();
						iLocal_1323[2] = Local_298[1 /*25*/];
						Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(func_29(), "MI_3_TREVOR_GROUP", 0f);
						AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_PLAYER_IS_MICHAEL");
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1773.f_3, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 112.58f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1773.f_3, -1, true, 0f, true, true, Local_1773.f_0, false);
						if (Global_100441.f_12[1] == 1)
						{
							ENTITY::SET_ENTITY_COORDS(func_29(), -2289.1433f, 267.78027f, 168.60179f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(func_29(), 24.2243f);
						}
					}
					iLocal_1717 = 0;
					if (__LIB_0__::func_715(func_28()))
					{
						PED::SET_PED_USING_ACTION_MODE(func_28(), true, -1, 0);
					}
					if (__LIB_0__::func_715(func_29()))
					{
						PED::SET_PED_USING_ACTION_MODE(func_29(), true, -1, 0);
					}
					if (__LIB_14__::func_466() == 2)
					{
						iLocal_1416 = func_28();
					}
					else if (__LIB_14__::func_466() == 0)
					{
						iLocal_1416 = func_29();
					}
					__LIB_37__::func_191(&(Local_303[12 /*8*/]), 0, 0, 1);
					__LIB_37__::func_191(&(Local_303[10 /*8*/]), 0, 0, 1);
					__LIB_37__::func_191(&(Local_303[11 /*8*/]), 5000, 0, 1);
					func_636();
					func_162(0, 1, 0, 0, 0, 0);
					func_916();
					AUDIO::TRIGGER_MUSIC_EVENT("MIC3_VEHICLE_ESCAPE_RESTART");
					break;
				case 9:
					if (Global_100441.f_12[0] == 0)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131069, 8);
					}
					else if (Global_100441.f_12[0] == 1)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MIC_3_EXT", 131070, 8);
					}
					break;
				case 10:
					func_916();
					break;
			}
			__LIB_0__::func_433(0, -1, 1);
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				switch (iLocal_1315)
				{
					case 0:
						func_902(&uLocal_95, &cLocal_55, "M3_INTL", 8, 0, 0, 0, 0);
						break;
					case 2:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						break;
					case 3:
						if (Global_100441.f_12[2] != 1)
						{
							while (!AUDIO::LOAD_STREAM("MIC_3_HELICOPTER_SHOT_DOWN_MASTER", 0))
							{
								SYSTEM::WAIT(0);
							}
						}
						else if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1445, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_1445.f_3);
						}
						break;
					case 4:
					case 5:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
						break;
					case 6:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
						if (Global_100441.f_12[0] == 1 && Global_100441.f_12[1] == 0)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
						}
						break;
					case 8:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-80f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						break;
				}
				if (__LIB_0__::func_715(func_28()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_28(), false);
				}
				if (__LIB_0__::func_715(func_29()))
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_29(), false);
				}
				if ((iLocal_1315 != 9 && iLocal_1315 != 1) && iLocal_1315 != 3)
				{
					func_916();
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_16__::func_904(&uLocal_304);
			}
			bLocal_1319 = false;
		}
	}
}

void func_916()//Position - 0x955D4
{
	bool bVar0;
	bVar0 = false;
	while (!bVar0)
	{
		SYSTEM::WAIT(0);
		bVar0 = true;
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			bVar0 = false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = false;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_29()) && !PED::IS_PED_INJURED(func_29()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_29()))
			{
				bVar0 = false;
			}
		}
	}
	__LIB_16__::func_904(&uLocal_304);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
}

void func_917(struct<3> Param0)//Position - 0x9566A
{
	func_891(Param0, 1, 1);
}

void func_918()//Position - 0x9567C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_1561.f_0 - 1))
	{
		func_769(&(Local_1561[iVar0 /*25*/]), Local_1693);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_1563.f_0 - 1))
	{
		func_769(&(Local_1563[iVar0 /*25*/]), Local_1692);
		iVar0++;
	}
	if (__LIB_0__::func_715(Local_1561[1 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1561[1 /*25*/], -2228.4722f, 294.59753f, 173.60196f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_1561[1 /*25*/], 113f);
	}
	if (__LIB_0__::func_715(Local_1561[2 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1561[2 /*25*/], -2224.6482f, 285.82687f, 173.60196f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_1561[2 /*25*/], 113f);
	}
	if (__LIB_0__::func_715(Local_1563[1 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1563[1 /*25*/], -2271.6375f, 274.9866f, 173.60211f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_1563[1 /*25*/], 203f);
	}
	if (__LIB_0__::func_715(Local_1563[2 /*25*/]))
	{
		ENTITY::SET_ENTITY_COORDS(Local_1563[2 /*25*/], -2268.7756f, 268.89124f, 173.60211f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_1563[2 /*25*/], 293f);
	}
}

void func_919()//Position - 0x957B6
{
	int iVar0;
	func_723(&(Local_1480[0 /*25*/]), iLocal_64, -2276.9275f, 262.90067f, 183.60114f, 203f, "MW_IG8_1", iLocal_295, iLocal_76, 10, 0, 0, 0);
	func_723(&(Local_1480[1 /*25*/]), iLocal_64, -2279.0051f, 261.18652f, 183.6012f, 203f, "MW_IG8_2", iLocal_295, iLocal_76, 10, 0, 0, 0);
	func_723(&(Local_1480[2 /*25*/]), iLocal_64, -2282.0208f, 259.25253f, 183.60132f, 203f, "MW_IG8_3", iLocal_295, iLocal_76, 10, 0, 0, 0);
	Local_1684 = { Local_1684 };
	iVar0 = 0;
	while (iVar0 <= (Local_1480.f_0 - 1))
	{
		if (__LIB_0__::func_715(Local_1480[iVar0 /*25*/]))
		{
			PED::SET_PED_ACCURACY(Local_1480[iVar0 /*25*/], 1);
			PED::SET_PED_COMBAT_RANGE(Local_1480[iVar0 /*25*/], 2);
			PED::SET_PED_COMBAT_MOVEMENT(Local_1480[iVar0 /*25*/], 1);
			TASK::TASK_COMBAT_PED(Local_1480[iVar0 /*25*/], func_29(), 0, 16);
		}
		iVar0++;
	}
}

void func_920()//Position - 0x958B1
{
	Local_300[3 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_69, -2197.0938f, 219.52654f, 183.60187f, true, true, false);
	if (__LIB_0__::func_715(Local_300[3 /*2*/]))
	{
		ENTITY::SET_ENTITY_HEADING(Local_300[3 /*2*/], 203f);
	}
	__LIB_16__::func_912(&uLocal_304, iLocal_69);
}

int func_921(int iParam0, bool bParam1, bool bParam2)//Position - 0x958FC
{
	int iVar0;
	if (iParam0 == 3)
	{
		return 0;
	}
	if (bParam1)
	{
		while (!func_923(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_923(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__::func_221(&uLocal_95, 0);
			__LIB_0__::func_222(&uLocal_95, 0, func_28(), "MICHAEL", 0, 1);
			break;
		case 1:
			Local_298[2 /*25*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__::func_221(&uLocal_95, 1);
			__LIB_0__::func_222(&uLocal_95, 1, func_922(), "FRANKLIN", 0, 1);
			break;
		case 2:
			Local_298[1 /*25*/] = PLAYER::PLAYER_PED_ID();
			__LIB_0__::func_221(&uLocal_95, 2);
			__LIB_0__::func_222(&uLocal_95, 2, func_29(), "TREVOR", 0, 1);
			break;
	}
	if (iLocal_1323.f_5 != iParam0)
	{
		switch (iLocal_1323.f_5)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 2;
				break;
			case 2:
				iVar0 = 1;
				break;
		}
		Local_298[iVar0 /*25*/] = 0;
		__LIB_13__::func_808(&(Local_298[iVar0 /*25*/].f_8));
	}
	return 1;
}

int func_922()//Position - 0x95A10
{
	return Local_298[2 /*25*/];
}

int func_923(int iParam0, bool bParam1)//Position - 0x95A1E
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
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
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
		func_926(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_180(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_37__::func_936(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_926(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x95BDC
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
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
				__LIB_16__::func_895(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_489(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_182(*iParam0, bParam6);
				__LIB_0__::func_405(*iParam0);
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

void func_932()//Position - 0x96A2C
{
	int iVar0;
	__LIB_42__::func_437(&Local_303);
	__LIB_42__::func_787(&iLocal_263, 0);
	__LIB_0__::func_325();
	HUD::CLEAR_PRINTS();
	CAM::DESTROY_ALL_CAMS(false);
	MISC::SET_TIME_SCALE(1f);
	fLocal_1383 = 1f;
	__LIB_0__::func_221(&uLocal_95, 0);
	__LIB_0__::func_221(&uLocal_95, 1);
	__LIB_0__::func_221(&uLocal_95, 2);
	iVar0 = 0;
	while (iVar0 <= (57 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]) && PLAYER::PLAYER_PED_ID() != Local_298[iVar0 /*25*/])
		{
			PED::DELETE_PED(&(Local_298[iVar0 /*25*/]));
		}
		func_22(&(Local_298[iVar0 /*25*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_299.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_299[iVar0 /*7*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[iVar0 /*7*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_299[iVar0 /*7*/], false))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_299[iVar0 /*7*/], true) + Vector(0f, 0f, -2f), true, false, false, true);
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[iVar0 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[iVar0 /*7*/]);
				}
			}
			Local_299[iVar0 /*7*/].f_4 = 1f;
			Local_299[iVar0 /*7*/].f_2 = 1f;
			Local_299[iVar0 /*7*/].f_3 = 1f;
			Local_299[iVar0 /*7*/].f_5 = -1;
			Local_299[iVar0 /*7*/].f_6 = 0;
			VEHICLE::DELETE_VEHICLE(&(Local_299[iVar0 /*7*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_300.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_300[iVar0 /*2*/]) && Local_300[iVar0 /*2*/].f_1)
		{
			OBJECT::DELETE_OBJECT(&(Local_300[iVar0 /*2*/]));
		}
		iVar0++;
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < Local_301.f_0)
	{
		if (CAM::DOES_CAM_EXIST(Local_301[iVar0 /*10*/]))
		{
			CAM::DESTROY_CAM(Local_301[iVar0 /*10*/], false);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1792))
	{
		OBJECT::DELETE_OBJECT(&iLocal_1792);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_297))
	{
		HUD::REMOVE_BLIP(&iLocal_297);
	}
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_SMG"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_PUMPSHOTGUN"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_ASSAULTSMG"));
	OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_HEAVYRIFLE"));
	GRAPHICS::REMOVE_DECALS_IN_RANGE(-2166.5374f, 232.3802f, 183.6015f, 200f);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-2166.5374f, 232.3802f, 183.6015f, 200f);
	MISC::CLEAR_AREA_OF_PEDS(-2166.5374f, 232.3802f, 183.6015f, 200f, 0);
	__LIB_0__::func_544(82, 0, 0, 1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	iLocal_1384 = 0;
	iLocal_1390 = -1;
	func_13(0);
}

void func_937()//Position - 0x96D04
{
	switch (iLocal_1314)
	{
		case 1:
			iLocal_1314 = 2;
			iLocal_1316 = -1;
			break;
		case 2:
			iLocal_1314 = 3;
			iLocal_1316 = 0;
			iLocal_1315 = iLocal_1317;
			break;
		case 3:
			iLocal_1317 = -1;
			iLocal_1314 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1318) > 2500)
			{
				iLocal_1318 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_939()//Position - 0x96D7A
{
	switch (iLocal_54)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_3_SHOOTOUT_SNIPER_SCOPE"))
			{
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
			}
			iLocal_54 = 1;
			break;
		case 1:
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				AUDIO::START_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
				iLocal_54 = 2;
			}
			break;
		case 2:
			if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				AUDIO::STOP_AUDIO_SCENE("MI_3_SHOOTOUT_SNIPER_SCOPE");
				iLocal_54 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_940()//Position - 0x96DED
{
	int iVar0;
	iLocal_1315 = 0;
	if (__LIB_0__::func_323())
	{
		iVar0 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iVar0++;
		}
		iLocal_1321 = func_966(iVar0);
		switch (iLocal_1321)
		{
			case 0:
				__LIB_0__::func_427(-2291.8286f, 367.6647f, 173.6017f, 203.8096f, 1, 0);
				break;
			case 1:
				__LIB_0__::func_427(-2156.9224f, 234.4068f, 183.6015f, 113.7745f, 1, 0);
				break;
			case 2:
				__LIB_0__::func_427(-2156.8623f, 234.3435f, 183.6019f, 21.5258f, 1, 0);
				break;
			case 3:
				__LIB_0__::func_427(-2262.478f, 235.2824f, 193.6113f, 320.1852f, 1, 0);
				break;
			case 4:
				__LIB_0__::func_544(82, 1, 0, 1, 1);
				__LIB_0__::func_427(-2221.3142f, 251.09691f, 183.60408f, 320.185f, 1, 0);
				break;
			case 5:
				__LIB_0__::func_544(82, 1, 0, 1, 1);
				__LIB_0__::func_427(-2219.298f, 247.3061f, 183.6041f, 40.5077f, 1, 0);
				break;
			case 6:
				__LIB_0__::func_544(82, 1, 0, 1, 1);
				__LIB_0__::func_427(-2249.8552f, 270.12097f, 173.60196f, 24.2243f, 1, 0);
				break;
			case 7:
				__LIB_0__::func_544(82, 1, 0, 1, 1);
				__LIB_0__::func_427(-2249.8552f, 270.12097f, 173.60196f, 24.2243f, 1, 0);
				break;
			case 8:
				__LIB_0__::func_544(82, 1, 0, 1, 1);
				__LIB_0__::func_427(-2295.5474f, 264.1368f, 168.6018f, 25.3686f, 1, 0);
				break;
			case 9:
				__LIB_0__::func_427(-1473.1211f, -396.4522f, 37.1653f, 307.9418f, 1, 0);
				break;
			case 10:
				__LIB_0__::func_427(-2295.5474f, 264.1368f, 168.6018f, 25.3686f, 1, 0);
				break;
		}
		bLocal_1319 = true;
	}
	uLocal_1387 = uLocal_1387;
	iLocal_1395 = { iLocal_1395 };
	__LIB_37__::func_186(&uLocal_304, "MIC3", 0);
	Local_298[0 /*25*/] = PLAYER::PLAYER_PED_ID();
	func_963(1);
	iLocal_1813 = 0;
	iLocal_1832 = 0;
	iLocal_1868 = 0;
	iLocal_1901 = 0;
	iLocal_1917 = 0;
	iLocal_2024 = 0;
	iLocal_2031 = 0;
	iLocal_1995 = 0;
	iLocal_51 = 0;
	iLocal_52 = 0;
	iLocal_89 = 1;
	iLocal_1833 = 20;
	iLocal_1848 = 0;
	iLocal_1869 = 20;
	iLocal_1903 = 0;
	iLocal_1918 = 0;
	iLocal_2025 = 0;
	iLocal_2032 = 0;
	iLocal_1997 = 0;
	iLocal_54 = 0;
	PED::ADD_RELATIONSHIP_GROUP("FRIEND", &iLocal_290);
	PED::ADD_RELATIONSHIP_GROUP("CIA", &iLocal_293);
	PED::ADD_RELATIONSHIP_GROUP("FIB", &iLocal_291);
	PED::ADD_RELATIONSHIP_GROUP("MERRYWEATHER", &iLocal_292);
	PED::ADD_RELATIONSHIP_GROUP("FIB_FINAL", &iLocal_294);
	PED::ADD_RELATIONSHIP_GROUP("MW_FINAL", &iLocal_295);
	PED::ADD_RELATIONSHIP_GROUP("CIA_FINAL", &iLocal_296);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_291, iLocal_294);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_291, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_291, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_291, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_291, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_292, iLocal_295);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_292, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_292, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_292, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_292, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_293, iLocal_296);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_293, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_293, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_293, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_293, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_290, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_294);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_295);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_290, iLocal_296);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_294, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_294, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_294, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_294, iLocal_295);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_294, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_294, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_294, iLocal_296);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_295, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_295, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_295, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_295, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_295, iLocal_294);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_295, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_295, iLocal_296);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_296, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_296, iLocal_290);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_296, iLocal_293);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_296, iLocal_291);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_296, iLocal_294);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_296, iLocal_292);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_296, iLocal_295);
	Local_1386[7 /*60*/] = { -2161.1301f, 213.0802f, 182.60143f };
	Local_1386[7 /*60*/].f_3 = { -2179.0928f, 252.9119f, 189.35165f };
	Local_1386[7 /*60*/].f_6 = 45.25f;
	Local_1386[7 /*60*/].f_7 = 6;
	Local_1386[7 /*60*/].f_8 = 8;
	Local_1386[7 /*60*/].f_9 = -1;
	Local_1386[7 /*60*/].f_57 = { -2188.7056f, 223.0552f, 183.602f };
	Local_1386[7 /*60*/].f_26[0 /*3*/] = { -2178.0208f, 230.5221f, 183.6019f };
	Local_1386[7 /*60*/].f_26[1 /*3*/] = { -2181.3125f, 227.793f, 183.6019f };
	Local_1386[7 /*60*/].f_26[2 /*3*/] = { -2187.9014f, 219.9653f, 183.6019f };
	Local_1386[7 /*60*/].f_26[3 /*3*/] = { -2198.3198f, 244.6006f, 183.602f };
	Local_1386[7 /*60*/].f_10[8] = 1;
	Local_1386[7 /*60*/].f_10[6] = 1;
	Local_1386[8 /*60*/] = { -2216.373f, 240.02931f, 183.62187f };
	Local_1386[8 /*60*/].f_3 = { -2193.7607f, 250.06367f, 189.02852f };
	Local_1386[8 /*60*/].f_6 = 6.875f;
	Local_1386[8 /*60*/].f_7 = 9;
	Local_1386[8 /*60*/].f_8 = -1;
	Local_1386[8 /*60*/].f_9 = 7;
	Local_1386[8 /*60*/].f_57 = { -2214.135f, 243.0489f, 183.602f };
	Local_1386[8 /*60*/].f_26[0 /*3*/] = { -2204.5f, 242.53f, 183.61f };
	Local_1386[8 /*60*/].f_26[1 /*3*/] = { -2209.78f, 240.08f, 183.61f };
	Local_1386[8 /*60*/].f_26[2 /*3*/] = { -2212.04f, 244.49f, 183.61f };
	Local_1386[8 /*60*/].f_10[9] = 1;
	Local_1386[8 /*60*/].f_10[6] = 1;
	Local_1386[9 /*60*/] = { -2212.0437f, 238.47723f, 183.60204f };
	Local_1386[9 /*60*/].f_3 = { -2230.3596f, 280.61093f, 188.66402f };
	Local_1386[9 /*60*/].f_6 = 6.8125f;
	Local_1386[9 /*60*/].f_7 = 10;
	Local_1386[9 /*60*/].f_8 = -1;
	Local_1386[9 /*60*/].f_9 = 8;
	Local_1386[9 /*60*/].f_57 = { -2227.6055f, 278.726f, 183.6015f };
	Local_1386[9 /*60*/].f_26[0 /*3*/] = { -2219.28f, 248.13f, 183.62f };
	Local_1386[9 /*60*/].f_26[1 /*3*/] = { -2217.35f, 254.84f, 183.61f };
	Local_1386[9 /*60*/].f_26[2 /*3*/] = { -2223.97f, 258.68f, 183.63f };
	Local_1386[9 /*60*/].f_26[3 /*3*/] = { -2221.98f, 265.41f, 183.61f };
	Local_1386[9 /*60*/].f_26[4 /*3*/] = { -2228.68f, 269.3f, 183.6f };
	Local_1386[9 /*60*/].f_26[5 /*3*/] = { -2226.7f, 276.02f, 183.61f };
	Local_1386[9 /*60*/].f_10[10] = 1;
	Local_1386[9 /*60*/].f_10[11] = 1;
	Local_1386[10 /*60*/] = { -2218.7502f, 280.48514f, 189.28084f };
	Local_1386[10 /*60*/].f_3 = { -2229.9878f, 305.7912f, 183.35187f };
	Local_1386[10 /*60*/].f_6 = 14.25f;
	Local_1386[10 /*60*/].f_7 = 11;
	Local_1386[10 /*60*/].f_8 = -1;
	Local_1386[10 /*60*/].f_9 = 9;
	Local_1386[10 /*60*/].f_57 = { -2229.571f, 301.1237f, 183.6015f };
	Local_1386[10 /*60*/].f_26[0 /*3*/] = { -2227.92f, 305.66f, 183.68f };
	Local_1386[10 /*60*/].f_10[11] = 1;
	Local_1386[10 /*60*/].f_10[12] = 1;
	Local_1386[10 /*60*/].f_10[13] = 1;
	Local_1386[11 /*60*/] = { -2239.688f, 294.0257f, 183.60152f };
	Local_1386[11 /*60*/].f_3 = { -2255.5137f, 330.1768f, 189.91405f };
	Local_1386[11 /*60*/].f_6 = 14.3125f;
	Local_1386[11 /*60*/].f_7 = 12;
	Local_1386[11 /*60*/].f_8 = -1;
	Local_1386[11 /*60*/].f_9 = 10;
	Local_1386[11 /*60*/].f_57 = { -2257.195f, 319.2654f, 183.6015f };
	Local_1386[11 /*60*/].f_26[0 /*3*/] = { -2254.63f, 315.64f, 183.69f };
	Local_1386[11 /*60*/].f_10[12] = 1;
	Local_1386[11 /*60*/].f_10[13] = 1;
	Local_1386[12 /*60*/] = { -2258.3477f, 319.3461f, 183.60126f };
	Local_1386[12 /*60*/].f_3 = { -2290.7659f, 304.79144f, 189.6522f };
	Local_1386[12 /*60*/].f_6 = 11.4375f;
	Local_1386[12 /*60*/].f_7 = 13;
	Local_1386[12 /*60*/].f_8 = -1;
	Local_1386[12 /*60*/].f_9 = 11;
	Local_1386[12 /*60*/].f_26[0 /*3*/] = { -2283.55f, 303.3f, 183.61f };
	Local_1386[12 /*60*/].f_57 = { -2285.838f, 304.1011f, 183.6017f };
	Local_1386[12 /*60*/].f_10[13] = 1;
	Local_1386[13 /*60*/] = { -2282.4646f, 302.25565f, 183.60126f };
	Local_1386[13 /*60*/].f_3 = { -2266.702f, 265.9282f, 188.66632f };
	Local_1386[13 /*60*/].f_6 = 11.4375f;
	Local_1386[13 /*60*/].f_7 = 14;
	Local_1386[13 /*60*/].f_8 = -1;
	Local_1386[13 /*60*/].f_9 = 12;
	Local_1386[13 /*60*/].f_26[0 /*3*/] = { -2279.45f, 294.07f, 183.61f };
	Local_1386[13 /*60*/].f_26[1 /*3*/] = { -2275.39f, 284.87f, 183.62f };
	Local_1386[13 /*60*/].f_26[2 /*3*/] = { -2271.29f, 275.81f, 183.61f };
	Local_1386[13 /*60*/].f_57 = { -2271.2834f, 266.7107f, 183.6017f };
	Local_1386[13 /*60*/].f_10[14] = 1;
	Local_1386[14 /*60*/] = { -2271.8718f, 263.7907f, 183.6171f };
	Local_1386[14 /*60*/].f_3 = { -2288.7546f, 256.40176f, 188.66866f };
	Local_1386[14 /*60*/].f_6 = 11.4375f;
	Local_1386[14 /*60*/].f_7 = -1;
	Local_1386[14 /*60*/].f_8 = -1;
	Local_1386[14 /*60*/].f_9 = 13;
	Local_1386[14 /*60*/].f_57 = { -2287.7336f, 261.9569f, 183.6017f };
	Local_1386[6 /*60*/] = { -2210.6748f, 218.99533f, 173.60187f };
	Local_1386[6 /*60*/].f_3 = { -2192.2285f, 227.30957f, 188.91417f };
	Local_1386[6 /*60*/].f_6 = 17.125f;
	Local_1386[6 /*60*/].f_7 = 0;
	Local_1386[6 /*60*/].f_8 = -1;
	Local_1386[6 /*60*/].f_9 = 7;
	Local_1386[6 /*60*/].f_10[0] = 1;
	Local_1386[6 /*60*/].f_26[0 /*3*/] = { -2203.486f, 217.9068f, 183.6019f };
	Local_1386[6 /*60*/].f_26[1 /*3*/] = { -2202.07f, 223.1243f, 181.3021f };
	Local_1386[6 /*60*/].f_26[2 /*3*/] = { -2206.4873f, 221.1523f, 178.6019f };
	Local_1386[6 /*60*/].f_26[3 /*3*/] = { -2202.1895f, 223.0681f, 176.302f };
	Local_1386[6 /*60*/].f_57 = { Local_1386[6 /*60*/].f_26[3 /*3*/] };
	Local_1386[0 /*60*/] = { -2180.8633f, 223.92941f, 176.60205f };
	Local_1386[0 /*60*/].f_3 = { -2248.43f, 193.0931f, 173.60204f };
	Local_1386[0 /*60*/].f_6 = 66.75f;
	Local_1386[0 /*60*/].f_7 = 1;
	Local_1386[0 /*60*/].f_8 = -1;
	Local_1386[0 /*60*/].f_9 = 6;
	Local_1386[0 /*60*/].f_10[1] = 1;
	Local_1386[0 /*60*/].f_10[8] = 1;
	Local_1386[0 /*60*/].f_26[0 /*3*/] = { -2209.003f, 238.6103f, 173.6018f };
	Local_1386[0 /*60*/].f_26[1 /*3*/] = { -2216.7817f, 241.4975f, 173.6018f };
	Local_1386[0 /*60*/].f_57 = { Local_1386[0 /*60*/].f_26[1 /*3*/] };
	Local_1386[1 /*60*/] = { -2241.2864f, 278.5793f, 173.60188f };
	Local_1386[1 /*60*/].f_3 = { -2224.1953f, 240.83421f, 176.60187f };
	Local_1386[1 /*60*/].f_6 = 25.5f;
	Local_1386[1 /*60*/].f_7 = 2;
	Local_1386[1 /*60*/].f_8 = -1;
	Local_1386[1 /*60*/].f_9 = 0;
	Local_1386[1 /*60*/].f_10[2] = 1;
	Local_1386[1 /*60*/].f_10[3] = 1;
	Local_1386[1 /*60*/].f_10[10] = 1;
	Local_1386[1 /*60*/].f_10[11] = 1;
	Local_1386[1 /*60*/].f_10[13] = 1;
	Local_1386[1 /*60*/].f_26[0 /*3*/] = { -2219.4102f, 247.1894f, 173.6018f };
	Local_1386[1 /*60*/].f_26[1 /*3*/] = { -2221.771f, 252.4771f, 173.6018f };
	Local_1386[1 /*60*/].f_26[2 /*3*/] = { -2228.5688f, 245.2584f, 173.6018f };
	Local_1386[1 /*60*/].f_26[3 /*3*/] = { -2228.4443f, 252.7509f, 173.6018f };
	Local_1386[1 /*60*/].f_26[4 /*3*/] = { -2223.639f, 258.7863f, 173.6017f };
	Local_1386[1 /*60*/].f_26[5 /*3*/] = { -2226.0134f, 264.1177f, 173.6017f };
	Local_1386[1 /*60*/].f_26[6 /*3*/] = { -2228.3813f, 269.4354f, 173.6017f };
	Local_1386[1 /*60*/].f_26[7 /*3*/] = { -2246.1934f, 272.7435f, 173.6017f };
	Local_1386[1 /*60*/].f_57 = { Local_1386[1 /*60*/].f_26[7 /*3*/] };
	Local_1386[2 /*60*/] = { -2242.7913f, 220.908f, 178.60165f };
	Local_1386[2 /*60*/].f_3 = { -2264.2212f, 268.35355f, 173.60202f };
	Local_1386[2 /*60*/].f_6 = 25f;
	Local_1386[2 /*60*/].f_7 = 3;
	Local_1386[2 /*60*/].f_8 = 4;
	Local_1386[2 /*60*/].f_9 = 1;
	Local_1386[2 /*60*/].f_10[13] = 1;
	Local_1386[2 /*60*/].f_10[14] = 1;
	Local_1386[2 /*60*/].f_10[3] = 1;
	Local_1386[2 /*60*/].f_10[4] = 1;
	Local_1386[2 /*60*/].f_26[0 /*3*/] = { -2255.851f, 255.9058f, 173.6017f };
	Local_1386[2 /*60*/].f_26[1 /*3*/] = { -2267.2986f, 259.7054f, 173.6021f };
	Local_1386[2 /*60*/].f_57 = { Local_1386[2 /*60*/].f_26[1 /*3*/] };
	Local_1386[3 /*60*/] = { -2274.6638f, 291.78314f, 172.35202f };
	Local_1386[3 /*60*/].f_3 = { -2264.2212f, 268.35355f, 178.60202f };
	Local_1386[3 /*60*/].f_6 = 25f;
	Local_1386[3 /*60*/].f_7 = -1;
	Local_1386[3 /*60*/].f_8 = -1;
	Local_1386[3 /*60*/].f_9 = 2;
	Local_1386[3 /*60*/].f_26[0 /*3*/] = { -2264.8008f, 278.0986f, 173.6032f };
	Local_1386[3 /*60*/].f_26[1 /*3*/] = { -2270.284f, 275.5808f, 173.6021f };
	Local_1386[3 /*60*/].f_26[2 /*3*/] = { -2274.4448f, 284.8751f, 173.6021f };
	Local_1386[3 /*60*/].f_26[3 /*3*/] = { -2268.8806f, 287.2551f, 173.6021f };
	Local_1386[3 /*60*/].f_26[4 /*3*/] = { -2277.7979f, 277.783f, 173.6021f };
	Local_1386[3 /*60*/].f_26[5 /*3*/] = { -2275.4072f, 272.4052f, 173.6021f };
	Local_1386[3 /*60*/].f_57 = { Local_1386[3 /*60*/].f_26[5 /*3*/] };
	Local_1386[4 /*60*/] = { -2285.3992f, 237.37054f, 166.60216f };
	Local_1386[4 /*60*/].f_3 = { -2255.1682f, 251.22722f, 173.60185f };
	Local_1386[4 /*60*/].f_6 = 38.9375f;
	Local_1386[4 /*60*/].f_7 = 5;
	Local_1386[4 /*60*/].f_8 = -1;
	Local_1386[4 /*60*/].f_9 = 2;
	Local_1386[4 /*60*/].f_10[14] = 1;
	Local_1386[4 /*60*/].f_10[5] = 1;
	Local_1386[5 /*60*/] = { -2317.222f, 244.14217f, 157.28946f };
	Local_1386[5 /*60*/].f_3 = { -2325.3633f, 262.31326f, 175.1021f };
	Local_1386[5 /*60*/].f_6 = 90f;
	Local_1386[5 /*60*/].f_7 = -1;
	Local_1386[5 /*60*/].f_8 = -1;
	Local_1386[5 /*60*/].f_9 = 4;
	Local_1386[5 /*60*/].f_57 = { -2303.2505f, 270.3268f, 168.6017f };
	Local_1697 = { __LIB_37__::func_928(-2256.9116f, 295.78198f, 173.50185f, -2232.6753f, 306.8226f, 176.55762f, 40f) };
	Local_1698 = { __LIB_37__::func_928(-2261.9841f, 293.6109f, 173.50186f, -2279.0618f, 285.84607f, 176.60211f, 40f) };
	Local_1675 = { __LIB_37__::func_928(-2267.4731f, 231.02362f, 193.36128f, -2267.4658f, 235.54372f, 196.32986f, 10f) };
	Local_1676 = { __LIB_37__::func_928(-2247.6917f, 267.8266f, 173.60196f, -2249.233f, 271.27295f, 175.56015f, 5.5f) };
	Local_1684 = { __LIB_37__::func_928(-2287.4707f, 255.3195f, 183.35118f, -2274.3672f, 264.83878f, 185.85141f, 9.75f) };
	Local_1674 = { __LIB_37__::func_928(-2272.8635f, 231.138f, 193.09792f, -2262.1191f, 231.01219f, 197.77089f, 11.75f) };
	Local_1677 = { __LIB_37__::func_928(-2212.6553f, 239.51521f, 183.35487f, -2231.213f, 280.0638f, 187.85408f, 6.5f) };
	Local_1678 = { __LIB_37__::func_928(-2222.6245f, 278.76004f, 187.53096f, -2238.5676f, 313.44055f, 181.85237f, 31f) };
	Local_1679 = { __LIB_37__::func_928(-2249.865f, 322.86813f, 186.11157f, -2288.6606f, 306.75357f, 176.20142f, 27.5f) };
	Local_1680 = { __LIB_37__::func_928(-2199.7874f, 308.82898f, 168.6126f, -2176.4954f, 256.9217f, 185.85127f, 12.5f) };
	Local_1681 = { __LIB_37__::func_928(-2136.137f, 247.65147f, 152.78928f, -2195.8892f, 234.70105f, 175.85182f, 90f) };
	Local_1682 = { __LIB_37__::func_928(-2214.4744f, 243.62814f, 183.35487f, -2230.555f, 278.37775f, 186.60408f, 7.25f) };
	Local_1683 = { __LIB_37__::func_928(-2201.0457f, 181.6095f, 168.05716f, -2294.5464f, 385.65506f, 175.71664f, 100f) };
	Local_1685 = { __LIB_37__::func_928(-2174.4502f, 193.34341f, 178.39972f, -2272.16f, 235.8909f, 215.48573f, 82.25f) };
	Local_1686 = { __LIB_37__::func_928(-2204.965f, 183.0934f, 178.35182f, -2294.6594f, 374.74133f, 137.6015f, 198.25f) };
	Local_1687 = { __LIB_37__::func_928(-2263.993f, 226.02666f, 196.86137f, -2263.9158f, 220.87961f, 193.11163f, 3f) };
	Local_1688 = { __LIB_37__::func_928(-2267.551f, 194.60046f, 166.11174f, -2273.1628f, 206.83012f, 171.86174f, 12.75f) };
	Local_1689 = { __LIB_37__::func_928(-2275.6414f, 227.1461f, 166.10199f, -2276.5837f, 233.5246f, 171.85199f, 23.75f) };
	Local_1690 = { __LIB_37__::func_928(-2272.636f, 223.86624f, 184.98477f, -2270.0815f, 223.83105f, 189.05165f, 4f) };
	Local_1691 = { __LIB_37__::func_928(-2241.8062f, 181.15414f, 173.35182f, -2244.9128f, 188.46156f, 176.36478f, 16.75f) };
	Local_1694 = { __LIB_37__::func_928(-2237.5747f, 261.97473f, 173.35196f, -2246.958f, 281.16626f, 176.35196f, 28.75f) };
	Local_1695 = { __LIB_37__::func_928(-2252.5542f, 258.3276f, 173.35196f, -2260.7778f, 276.97028f, 176.35321f, 28.75f) };
	Local_1692 = { __LIB_37__::func_928(-2253.7043f, 261.38608f, 173.10196f, -2268.8438f, 293.80573f, 176.10211f, 30f) };
	Local_1693 = { __LIB_37__::func_928(-2233.5596f, 265.30997f, 173.10196f, -2253.2793f, 308.43036f, 176.10196f, 40f) };
	Local_1696 = { __LIB_37__::func_928(-2245.6665f, 263.80484f, 173.35196f, -2249.8098f, 273.2847f, 176.24162f, 21.25f) };
	iLocal_94 = 0;
	iLocal_1718 = 0;
	Local_1699[0 /*3*/] = { -2213.1572f, 296.46368f, 172.2146f };
	Local_1699[1 /*3*/] = { -2199.9907f, 302.0235f, 168.60205f };
	Local_1699[2 /*3*/] = { -2194.5554f, 296.7142f, 168.60205f };
	Local_1699[3 /*3*/] = { -2232.494f, 329.48697f, 173.60196f };
	Local_1699[4 /*3*/] = { -2227.0278f, 339.8955f, 173.60196f };
	Local_1699[5 /*3*/] = { -2247.1033f, 361.47083f, 173.60167f };
	Local_1700[0 /*3*/] = { -2291.259f, 273.24777f, 168.60179f };
	Local_1700[1 /*3*/] = { -2300.8787f, 272.5309f, 168.60179f };
	Local_1700[2 /*3*/] = { -2292.928f, 275.47305f, 168.60019f };
	Local_1700[3 /*3*/] = { -2286.2078f, 266.1018f, 168.60179f };
	Local_1700[4 /*3*/] = { -2290.035f, 263.46082f, 168.60179f };
	Local_1700[5 /*3*/] = { -2287.3894f, 262.14844f, 168.60179f };
	__LIB_37__::func_932(&(Local_1444[0 /*4*/]), -2178.5054f, 229.8301f, 183.60187f, 120f);
	__LIB_37__::func_932(&(Local_1444[1 /*4*/]), -2201.8462f, 224.85478f, 181.11182f, 22.63f);
	__LIB_37__::func_932(&(Local_1444[2 /*4*/]), -2214.7988f, 236.53975f, 173.60182f, 30f);
	__LIB_37__::func_932(&(Local_1444[3 /*4*/]), -2248.586f, 270.7738f, 173.602f, 30f);
	__LIB_37__::func_932(&(Local_1444[4 /*4*/]), -2265.409f, 276.9197f, 173.6027f, 30f);
	__LIB_37__::func_932(&(Local_1444[5 /*4*/]), -2260.6975f, 317.4653f, 173.602f, 344.7188f);
	__LIB_37__::func_932(&Local_1445, -2262.478f, 235.2824f, 193.6113f, 320.1852f);
	func_747(&(Local_1751[0 /*7*/]), -2183.288f, 243.95781f, 183.60187f, 118.93f, 1, 1, 6, 1);
	func_747(&(Local_1751[1 /*7*/]), -2183.5085f, 243.26906f, 183.60187f, 22.93f, 0, 1, 5, 1);
	func_747(&Local_1756, -2218.972f, 247.25658f, 183.60408f, 23.4404f, 3, 1, 2, 0);
	func_747(&Local_1761, -2249.8552f, 270.12097f, 173.60196f, 23f, 2, 0, 1, 1);
	func_747(&Local_1765, -2248.4812f, 270.75278f, 173.60196f, 23.4404f, 2, 0, 1, 1);
	func_747(&Local_1769, -2246.7385f, 271.60706f, 173.60196f, 23f, 2, 0, 1, 1);
	func_747(&Local_1752, -2156.8828f, 234.3567f, 183.6019f, 112.6611f, 3, 0, 1, 1);
	func_747(&Local_1773, -2295.68f, 264.06f, 168.60179f, 24f, 1, 2, 6, 1);
	func_747(&Local_1781, -2268.972f, 235.27168f, 193.61137f, 357f, 1, 0, 4, 1);
	func_747(&Local_1757, -2214.7988f, 236.53975f, 173.60182f, 23f, 3, 1, 4, 1);
	bLocal_1322 = false;
	iLocal_1717 = 0;
	iLocal_1412 = 0;
	Local_1671[0 /*25*/] = { Local_1671[0 /*25*/] };
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	func_941();
	__LIB_37__::func_191(&(Local_303[0 /*8*/]), 0, 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_15__::func_221(0, 0), true);
	__LIB_12__::func_849(0, 1);
	__LIB_12__::func_849(2, 1);
	__LIB_12__::func_849(20, 1);
	iLocal_93 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-2242.038f, 182.101f, 173.969f, 17.3f, 20f, 8f, __LIB_12__::func_418(23f), false, 7);
	if (iLocal_1315 != 0)
	{
		func_13(1);
	}
	func_788(1);
	func_795(1);
	func_792(1);
	__LIB_0__::func_222(&uLocal_95, 0, func_28(), "Michael", 0, 1);
	Global_113330 = 1;
}

void func_941()//Position - 0x987BA
{
	__LIB_37__::func_194(&(Local_303[0 /*8*/]), 632815/*func_960*/, "Fake interior");
	__LIB_37__::func_194(&(Local_303[2 /*8*/]), 631358/*func_955*/, "Spatial Data");
	__LIB_37__::func_194(&(Local_303[10 /*8*/]), 628987/*func_954*/, "[SO] Parking lot");
	__LIB_37__::func_194(&(Local_303[11 /*8*/]), 628379/*func_953*/, "[VEH] Parking lot");
	__LIB_37__::func_194(&(Local_303[12 /*8*/]), 627943/*func_952*/, "Spawn esc vehs");
	__LIB_37__::func_194(&(Local_303[13 /*8*/]), 626638/*func_947*/, "[VEH] MW Heli 2");
	__LIB_37__::func_194(&(Local_303[14 /*8*/]), 624723/*func_942*/, "[VEH] MW Heli 3");
}

void func_942(var uParam0)//Position - 0x98853
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	func_946();
	if (iLocal_2042)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(Local_299[3 /*7*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[3 /*7*/], false)) || ENTITY::IS_ENTITY_DEAD(Local_299[3 /*7*/], false)) || PED::IS_PED_INJURED(Local_298[53 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_299[3 /*7*/]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_299[3 /*7*/], 0f);
			}
			AUDIO::STOP_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
			__LIB_0__::func_630(440);
			__LIB_0__::func_497(440, 1, 0);
			uParam0->f_1 = -1;
			__LIB_37__::func_193(uParam0);
		}
	}
	switch (iLocal_1385)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2337.8079f, 350.53064f, 172.1479f, -2350.546f, 379.24234f, 178.50142f, 24.9375f, false, true, 0))
			{
				iLocal_1385++;
			}
			if (__LIB_14__::func_466() == 0 || (__LIB_14__::func_466() == 2 && Global_100441.f_12[1] == 1))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2345.2139f, 312.38022f, 150.10199f, -2277.4255f, 159.59064f, 185.99542f, 90f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2345.2139f, 312.38022f, 150.10199f, -2277.4255f, 159.59064f, 185.99542f, 90f, false, true, 0))
					{
						iLocal_2041 = 0;
					}
					iLocal_1385++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2289.2275f, 438.35483f, 173.39755f, -2323.0857f, 440.38065f, 178.70616f, 27.25f, false, true, 0))
			{
				iLocal_1385++;
			}
			break;
	}
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_16__::func_852(&uLocal_304, iLocal_68);
			__LIB_16__::func_853(&uLocal_304, 12, &Local_77);
			Var1 = { Vector(157.55536f, 470.22183f, -2239.6597f) - Vector(27.4375f, 108.875f, 115.9375f) };
			Var2 = { Vector(157.55536f, 470.22183f, -2239.6597f) + Vector(27.4375f, 108.875f, 115.9375f) };
			PATHFIND::SET_ROADS_IN_AREA(Var1, Var2, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(-2239.6597f, 470.22183f, 157.55536f, 115f, false, false, false, false, false, false, 0);
			iLocal_2041 = 1;
			iLocal_1385 = 1;
			uParam0->f_1++;
			break;
		case 2:
			if ((iLocal_1385 > 1 && STREAMING::HAS_MODEL_LOADED(iLocal_68)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, &Local_77))
			{
				Local_299[3 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2232.1025f, 418.31f, 165.3925f, 65.8194f, true, true, false);
				func_752(&(Local_298[53 /*25*/]), iLocal_64, &(Local_299[3 /*7*/]), -1, "HELI_3_DRIVER_0", iLocal_292, joaat("WEAPON_UNARMED"), 100, 0, 0, 0);
				iLocal_2042 = 1;
				func_750(&(Local_299[3 /*7*/].f_1), Local_299[3 /*7*/], 1);
				AUDIO::START_AUDIO_SCENE("MI_3_ESCAPE_HELICOPTER_ATTACK");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_299[3 /*7*/], "MI_3_HELICOPTER_01", 0f);
				PED::SET_PED_ACCURACY(Local_298[53 /*25*/], 1);
				PED::SET_PED_SHOOT_RATE(Local_298[53 /*25*/], 50);
				PED::SET_PED_FIRING_PATTERN(Local_298[53 /*25*/], joaat("FIRING_PATTERN_FULL_AUTO"));
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[3 /*7*/], 12, &Local_77, true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_299[3 /*7*/], 500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_299[3 /*7*/], 1.5f);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_299[3 /*7*/]);
				__LIB_16__::func_912(&uLocal_304, iLocal_68);
				iLocal_2032 = 3;
				uParam0->f_1++;
			}
			break;
		case 3:
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[3 /*7*/]) || iLocal_1385 > 2)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[3 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[3 /*7*/]);
				}
				TASK::TASK_HELI_MISSION(Local_298[53 /*25*/], Local_299[3 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 50f, 30f, -1f, 5, 5, -1f, 0);
				uParam0->f_2 = 1000;
				uParam0->f_1++;
			}
			break;
		case 4:
			if (!iLocal_2041)
			{
				if (__LIB_0__::func_715(Local_299[3 /*7*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_299[3 /*7*/], true)) <= 10000f)
					{
						iLocal_2041 = 1;
					}
				}
			}
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_88, 1) <= 450f || (iLocal_2041 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_299[3 /*7*/], true)) >= 28900f))
			{
				uParam0->f_1++;
			}
			break;
		case 5:
			if (__LIB_0__::func_715(Local_299[3 /*7*/]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_299[3 /*7*/], true)) >= 28900f)
				{
					if (__LIB_0__::func_715(Local_299[3 /*7*/]) && __LIB_0__::func_715(Local_298[53 /*25*/]))
					{
						PED::SET_PED_KEEP_TASK(Local_298[53 /*25*/], true);
						TASK::TASK_HELI_MISSION(Local_298[53 /*25*/], Local_299[3 /*7*/], 0, 0, -4445.6064f, -2004.2947f, 157.0255f, 4, 80f, 20f, -1f, 530, 100, -1f, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[53 /*25*/]));
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[3 /*7*/]));
					__LIB_13__::func_808(&(Local_299[3 /*7*/].f_1));
					__LIB_37__::func_193(uParam0);
				}
			}
			break;
	}
	if ((uParam0->f_1 > 3 && __LIB_0__::func_715(Local_299[3 /*7*/])) && __LIB_0__::func_715(Local_298[53 /*25*/]))
	{
		if ((MISC::GET_GAME_TIMER() - uParam0->f_2) >= 1000)
		{
			fVar0 = __LIB_0__::func_331((ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) * 3f), 40f, 999f);
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (__LIB_0__::func_715(Local_299[3 /*7*/]) && __LIB_0__::func_715(Local_298[53 /*25*/]))
			{
				TASK::TASK_HELI_MISSION(Local_298[53 /*25*/], Local_299[3 /*7*/], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, fVar0, 30f, -1f, SYSTEM::ROUND(Var3.f_2) + 40, 15, -1f, 0);
			}
			uParam0->f_2 = MISC::GET_GAME_TIMER();
		}
	}
	if (__LIB_37__::func_188(uParam0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_298[53 /*25*/]));
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_299[3 /*7*/]));
		__LIB_16__::func_912(&uLocal_304, iLocal_68);
		__LIB_16__::func_912(&uLocal_304, iLocal_64);
		iLocal_2040 = 1;
		iLocal_2038 = 0;
		__LIB_1__::func_362(&iLocal_2051);
		AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MEET");
	}
}

void func_946()//Position - 0x98F30
{
	int iVar0;
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_715(Local_298[53 /*25*/]))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) <= 25f)
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_298[53 /*25*/], &iVar0))
			{
				if (iVar0 != joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"))
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[53 /*25*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				}
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 25f)
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Local_298[53 /*25*/], &iVar0))
			{
				if (iVar0 != joaat("VEHICLE_WEAPON_SPACE_ROCKET"))
				{
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_298[53 /*25*/], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
				}
			}
		}
	}
}

void func_947(var uParam0)//Position - 0x98FCE
{
	float fVar0;
	float fVar1;
	if (bLocal_1973)
	{
		if (iLocal_1975)
		{
			func_950();
		}
	}
	if (uParam0->f_1 == 1)
	{
		__LIB_16__::func_852(&uLocal_304, iLocal_64);
		__LIB_16__::func_852(&uLocal_304, iLocal_68);
		__LIB_16__::func_853(&uLocal_304, 4, &Local_77);
		if (((STREAMING::HAS_MODEL_LOADED(iLocal_64) && STREAMING::HAS_MODEL_LOADED(iLocal_68)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, &Local_77)) && __LIB_37__::func_929(&Local_1947, func_28()))
		{
			Local_299[2 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_68, -2140.153f, 57.7755f, 149.4462f, 0f, true, true, false);
			func_752(&(Local_298[52 /*25*/]), iLocal_64, &(Local_299[2 /*7*/]), -1, "MW_HELI_2", iLocal_292, joaat("WEAPON_UNARMED"), 5, 0, 0, 0);
			func_750(&(Local_299[2 /*7*/].f_1), Local_299[2 /*7*/], 1);
			PED::SET_PED_SHOOT_RATE(Local_298[52 /*25*/], 100);
			PED::SET_PED_FIRING_PATTERN(Local_298[52 /*25*/], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[2 /*7*/], 4, &Local_77, true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_299[2 /*7*/], 4000f);
			uParam0->f_1++;
		}
	}
	else if (uParam0->f_1 > 1)
	{
		if (!iLocal_1928)
		{
			if (!__LIB_0__::func_715(Local_299[2 /*7*/]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[2 /*7*/], false))
			{
				__LIB_1__::func_31(&iLocal_1983);
				iLocal_1927 = 4;
				iLocal_1928 = 1;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[2 /*7*/], false) && !PED::IS_PED_INJURED(Local_298[52 /*25*/]))
		{
			switch (uParam0->f_1)
			{
				case 2:
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[2 /*7*/]))
					{
						fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_299[2 /*7*/]);
						if (fVar0 >= 13327f)
						{
							iLocal_1975 = 1;
							uParam0->f_1++;
						}
					}
					else
					{
						uParam0->f_1++;
					}
					break;
				case 3:
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[2 /*7*/]))
					{
						fVar1 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_299[2 /*7*/]);
						if (fVar1 >= 22000f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[2 /*7*/]);
							PED::SET_PED_FIRING_PATTERN(Local_298[52 /*25*/], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
							iLocal_1926 = MISC::GET_GAME_TIMER() + 5000;
							uParam0->f_1++;
						}
					}
					else
					{
						iLocal_1926 = MISC::GET_GAME_TIMER() + 5000;
						uParam0->f_1++;
					}
					break;
				case 4:
					if (!__LIB_0__::func_798(Local_298[52 /*25*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1) || (MISC::GET_GAME_TIMER() - Local_298[52 /*25*/].f_9) > 1000)
					{
						TASK::TASK_HELI_MISSION(Local_298[52 /*25*/], Local_299[2 /*7*/], 0, 0, -2267.3616f, 313.1219f, 197.7129f, 4, 3f, 0.1f, __LIB_16__::func_867(Local_299[2 /*7*/], func_28(), 1), 197, 10, -1f, 0);
						uParam0->f_1++;
					}
					break;
				case 5:
					if (MISC::GET_GAME_TIMER() > iLocal_1926)
					{
						if (__LIB_0__::func_798(Local_298[52 /*25*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
						{
							TASK::TASK_DRIVE_BY(Local_298[52 /*25*/], func_28(), 0, 0f, 0f, 0f, 5000f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
							Local_298[52 /*25*/].f_9 = MISC::GET_GAME_TIMER();
							uParam0->f_1 = (uParam0->f_1 - 1);
						}
					}
					break;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_299[2 /*7*/], false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[2 /*7*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[2 /*7*/]);
		}
	}
}

void func_950()//Position - 0x99395
{
	int iVar0;
	switch (iLocal_1927)
	{
		case 0:
			iLocal_1980 = func_951();
			if (__LIB_0__::func_715(iLocal_1980))
			{
				__LIB_0__::func_222(&uLocal_95, 5, iLocal_1980, "MIC3FIB4", 0, 1);
				iLocal_1927 = 1;
			}
			else
			{
				iLocal_1927 = 2;
			}
			break;
		case 1:
			if (__LIB_0__::func_715(iLocal_1980))
			{
				if (func_519("M3_HELI"))
				{
					iLocal_1927 = 2;
				}
			}
			else
			{
				iLocal_1927 = 2;
			}
			break;
		case 2:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			if (iVar0 == 0)
			{
				if (func_519("M3_CHOPPER"))
				{
					iLocal_1927 = 3;
				}
			}
			break;
		case 3:
			if (func_519("M3_TAKEOUT"))
			{
				iLocal_1927 = 20;
			}
			break;
		case 4:
			if (__LIB_2__::func_572(&iLocal_1983) >= 2.5f)
			{
				iLocal_1927 = 20;
			}
			if (__LIB_14__::func_466() == 2)
			{
				if (func_519("M3_HELI2T"))
				{
					iLocal_1927 = 20;
				}
			}
			else if (__LIB_14__::func_466() == 0)
			{
				if (func_519("M3_HELI2M"))
				{
					iLocal_1927 = 20;
				}
			}
			break;
	}
}

int func_951()//Position - 0x99499
{
	int iVar0;
	iVar0 = func_844(&Local_1561);
	if (__LIB_0__::func_715(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_844(&Local_1452);
	if (__LIB_0__::func_715(iVar0))
	{
		return iVar0;
	}
	iVar0 = func_844(&Local_1453);
	if (__LIB_0__::func_715(iVar0))
	{
		return iVar0;
	}
	return 0;
}

void func_952(var uParam0)//Position - 0x994E7
{
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_16__::func_852(&uLocal_304, joaat("dominator"));
			__LIB_16__::func_852(&uLocal_304, joaat("carbonizzare"));
			__LIB_16__::func_852(&uLocal_304, joaat("vacca"));
			uParam0->f_1++;
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_299[8 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("vacca")))
			{
				Local_299[8 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("vacca"), -2296.198f, 415.6821f, 173.4666f, 342.8948f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_299[9 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("dominator")))
			{
				Local_299[9 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2332.3652f, 349.8775f, 171.7965f, 25.3173f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_299[10 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare")))
			{
				Local_299[10 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -2319.7976f, 302.1291f, 168.4667f, 115.6683f, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_299[11 /*7*/]) && STREAMING::HAS_MODEL_LOADED(joaat("dominator")))
			{
				Local_299[11 /*7*/] = VEHICLE::CREATE_VEHICLE(joaat("dominator"), -2289.5198f, 412.0399f, 173.467f, 324.3684f, true, true, false);
			}
			if (((ENTITY::DOES_ENTITY_EXIST(Local_299[8 /*7*/]) && ENTITY::DOES_ENTITY_EXIST(Local_299[9 /*7*/])) && ENTITY::DOES_ENTITY_EXIST(Local_299[10 /*7*/])) && ENTITY::DOES_ENTITY_EXIST(Local_299[11 /*7*/]))
			{
				__LIB_16__::func_912(&uLocal_304, joaat("vacca"));
				__LIB_37__::func_193(uParam0);
			}
			break;
	}
}

void func_953(var uParam0)//Position - 0x9969B
{
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, iLocal_71);
			__LIB_16__::func_853(&uLocal_304, 7, &Local_77);
			uParam0->f_1++;
			break;
		case 2:
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, &Local_77) && STREAMING::HAS_MODEL_LOADED(iLocal_64)) && STREAMING::HAS_MODEL_LOADED(iLocal_71))
			{
				Local_299[6 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_71, -2327.464f, 379.8782f, 173.4668f, 115.3375f, true, true, false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_299[6 /*7*/], false);
				func_752(&(Local_298[55 /*25*/]), iLocal_64, &(Local_299[6 /*7*/]), -1, "MW_JEEP_2_0", iLocal_292, iLocal_73, 2, 0, 0, 0);
				func_752(&(Local_298[56 /*25*/]), iLocal_64, &(Local_299[6 /*7*/]), 0, "MW_JEEP_2_1", iLocal_292, iLocal_73, 2, 0, 0, 0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_299[6 /*7*/], 7, &Local_77, true);
				func_750(&(Local_299[6 /*7*/].f_1), Local_299[6 /*7*/], 1);
				func_745(&(Local_298[55 /*25*/]));
				func_745(&(Local_298[56 /*25*/]));
				uParam0->f_1++;
			}
			break;
		case 3:
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[6 /*7*/]) && PED::IS_PED_INJURED(Local_298[55 /*25*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[6 /*7*/]);
			}
			if (((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[6 /*7*/]) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_299[6 /*7*/]) > 2500f) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[6 /*7*/])) && __LIB_0__::func_587(Local_299[6 /*7*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_299[6 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_299[6 /*7*/]);
				}
				if (!PED::IS_PED_INJURED(Local_298[55 /*25*/]))
				{
					func_765(&(Local_298[55 /*25*/]), -2322.7349f, 279.5136f, 168.46666f, 5f, 1, 1, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_298[55 /*25*/], 1, false);
					TASK::TASK_COMBAT_PED(Local_298[55 /*25*/], func_28(), 0, 16);
				}
				if (!PED::IS_PED_INJURED(Local_298[56 /*25*/]))
				{
					func_765(&(Local_298[56 /*25*/]), -2309.5637f, 274.71063f, 168.58304f, 5f, 1, 1, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_298[56 /*25*/], 1, false);
					TASK::TASK_COMBAT_PED(Local_298[56 /*25*/], func_28(), 0, 16);
				}
				__LIB_13__::func_808(&(Local_299[6 /*7*/].f_1));
				uParam0->f_1++;
			}
			break;
	}
}

void func_954(var uParam0)//Position - 0x998FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (uParam0->f_1)
	{
		case 1:
			__LIB_16__::func_852(&uLocal_304, iLocal_64);
			__LIB_16__::func_852(&uLocal_304, iLocal_71);
			__LIB_16__::func_852(&uLocal_304, iLocal_72);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_71) && STREAMING::HAS_MODEL_LOADED(iLocal_72)) && STREAMING::HAS_MODEL_LOADED(iLocal_64))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_299[5 /*7*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_299[7 /*7*/]))
				{
					Local_299[5 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_71, -2322.515f, 277.3885f, 168.4671f, 310.9978f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_299[5 /*7*/], 5f);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_299[5 /*7*/], false);
					Local_299[7 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_72, -2326.5037f, 290.7654f, 168.4671f, 5.9051f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_299[7 /*7*/], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_299[7 /*7*/], 0);
					VEHICLE::SET_VEHICLE_MOD_KIT(Local_299[7 /*7*/], 0);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(Local_299[7 /*7*/], 1);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_299[7 /*7*/], false);
					func_723(&(Local_298[46 /*25*/]), iLocal_64, -2323.1118f, 280.3249f, 168.4671f, 225.484f, "PL_1_MW_1", iLocal_292, iLocal_73, 1, 0, 0, 0);
					func_765(&(Local_298[46 /*25*/]), -2307.3872f, 269.81802f, 168.60179f, 1.5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					PED::SET_PED_TO_LOAD_COVER(Local_298[46 /*25*/], true);
					func_723(&(Local_298[47 /*25*/]), iLocal_64, -2326.368f, 293.5865f, 168.4667f, 225.8272f, "PL_VAN_MW_2", iLocal_292, iLocal_73, 1, 0, 0, 0);
					func_765(&(Local_298[47 /*25*/]), ENTITY::GET_ENTITY_COORDS(Local_299[7 /*7*/], true), 5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					func_723(&(Local_298[48 /*25*/]), iLocal_64, -2317.201f, 271.0336f, 168.6018f, 204.3616f, "PL_1_MW_3", iLocal_292, iLocal_73, 1, 0, 0, 0);
					func_765(&(Local_298[48 /*25*/]), -2317.201f, 271.0336f, 168.6018f, 1.5f, 1, 2, 1, 1, 1f, 0f, 1, 1);
					func_856(&(Local_298[48 /*25*/]), -2317.1096f, 271.0735f, 168.6018f, 207.7751f, 3, 2, 1);
					func_723(&(Local_298[49 /*25*/]), iLocal_64, -2318.436f, 258.33582f, 174.2022f, 330f, "PL_VAN_MW_4", iLocal_292, iLocal_76, 2, 0, 0, 0);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_298[49 /*25*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[49 /*25*/], -2311.74f, 253.59074f, 169.63226f, 2.5f, true, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_298[49 /*25*/], 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_298[49 /*25*/], 200f, 0);
					func_723(&(Local_298[50 /*25*/]), iLocal_64, -2304.3982f, 295.1746f, 173.90569f, 203f, "PL_VAN_MW_5", iLocal_292, iLocal_76, 1, 0, 0, 0);
					func_765(&(Local_298[50 /*25*/]), -2307.1963f, 290.05582f, 173.61205f, 2f, 1, 2, 1, 0, 1f, 0f, 1, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_298[50 /*25*/], 2.5f, 0);
					PED::SET_PED_ACCURACY(Local_298[49 /*25*/], 1);
					PED::SET_PED_ACCURACY(Local_298[50 /*25*/], 1);
					func_745(&(Local_298[46 /*25*/]));
					func_745(&(Local_298[47 /*25*/]));
					func_745(&(Local_298[48 /*25*/]));
					func_745(&(Local_298[49 /*25*/]));
					func_745(&(Local_298[50 /*25*/]));
					uParam0->f_1++;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_798(Local_298[46 /*25*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER"), 1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_298[46 /*25*/], -2322.2178f, 279.8415f, 168.4671f, -1, false, 0f, true, true, 0, false);
			}
			if (!__LIB_0__::func_798(Local_298[48 /*25*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_COVER"), 1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_298[48 /*25*/], -2317.201f, 271.0336f, 168.6018f, -1, false, 0f, true, true, Local_298[48 /*25*/].f_1, false);
			}
			if (!__LIB_0__::func_798(Local_298[47 /*25*/], joaat("SCRIPT_TASK_AIM_GUN_AT_COORD"), 1))
			{
				TASK::TASK_AIM_GUN_AT_COORD(Local_298[47 /*25*/], -2297.8906f, 264.5915f, 170.2512f, -1, true, false);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2276.974f, 274.88757f, 168.60211f, -2288.4307f, 269.7639f, 177.66429f, 5f, false, true, 0))
			{
				iVar0 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2348.5159f, 228.35324f, 166.04099f, -2272.6777f, 264.014f, 173.99161f, 18.3125f, false, true, 0))
			{
				iVar0 = 2;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2318.8877f, 259.99966f, 173.60211f, -2316.0127f, 253.14992f, 179.502f, 2.9375f, false, true, 0))
			{
				iVar0 = 3;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2314.1406f, 308.14032f, 177.53929f, -2308.6187f, 295.83444f, 184.46397f, 4.1875f, false, true, 0))
			{
				iVar0 = 4;
			}
			if (iVar0 != 0)
			{
				if (iVar0 == 3 || iVar0 == 4)
				{
					__LIB_37__::func_191(&(Local_303[10 /*8*/]), 0, 0, 1);
				}
				if (iVar0 == 1 || iVar0 == 2)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[46 /*25*/], -2309.9324f, 273.4493f, 168.6018f, 3f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[48 /*25*/], -2304.4f, 261.1549f, 168.6018f, 3f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[48 /*25*/], func_28(), 0, 16);
				}
				else if (iVar0 == 3)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[46 /*25*/], -2322.0535f, 277.25168f, 168.9323f, 5f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[48 /*25*/], -2307.8076f, 271.67987f, 168.60179f, 3f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[48 /*25*/], func_28(), 0, 16);
				}
				else if (iVar0 == 4)
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[46 /*25*/], -2322.0535f, 277.25168f, 168.9323f, 5f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[46 /*25*/], func_28(), 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[48 /*25*/], -2309.877f, 275.9086f, 168.60179f, 5f, false, false);
					TASK::TASK_COMBAT_PED(Local_298[48 /*25*/], func_28(), 0, 16);
				}
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (!PED::IS_PED_INJURED(Local_298[47 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[47 /*25*/], -2317.1135f, 270.73734f, 168.60179f, 3.5f, false, false);
						TASK::TASK_COMBAT_PED(Local_298[47 /*25*/], func_28(), 0, 16);
					}
				}
				else if (iVar0 == 3 || iVar0 == 4)
				{
					if (!PED::IS_PED_INJURED(Local_298[47 /*25*/]))
					{
						TASK::TASK_COMBAT_PED(Local_298[47 /*25*/], func_28(), 0, 16);
					}
				}
				uParam0->f_1++;
			}
			else
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2305.6807f, 264.70303f, 193.60117f, -2329.1292f, 317.38956f, 168.46718f, 37f, false, true, 0))
				{
					iVar1 = 1;
				}
				if (!PED::IS_PED_INJURED(Local_298[46 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[46 /*25*/], func_28(), true) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_298[46 /*25*/], 124))) || PED::HAS_PED_RECEIVED_EVENT(Local_298[46 /*25*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_298[46 /*25*/], 125))
					{
						iVar2 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(Local_298[48 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[48 /*25*/], func_28(), true) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_298[48 /*25*/], 124))) || PED::HAS_PED_RECEIVED_EVENT(Local_298[48 /*25*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_298[48 /*25*/], 125))
					{
						iVar2 = 1;
					}
				}
				if (!PED::IS_PED_INJURED(Local_298[47 /*25*/]))
				{
					if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_298[47 /*25*/], func_28(), true) || (iVar1 && PED::HAS_PED_RECEIVED_EVENT(Local_298[47 /*25*/], 124))) || PED::HAS_PED_RECEIVED_EVENT(Local_298[47 /*25*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_298[47 /*25*/], 125))
					{
						iVar2 = 1;
					}
				}
				if (iVar2 || iLocal_1315 == 8)
				{
					if (!PED::IS_PED_INJURED(Local_298[46 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[46 /*25*/], -2322.0535f, 277.25168f, 168.9323f, 5f, false, false);
						TASK::TASK_COMBAT_PED(Local_298[46 /*25*/], func_28(), 0, 16);
					}
					if (!PED::IS_PED_INJURED(Local_298[48 /*25*/]))
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_298[48 /*25*/], -2315.7368f, 267.92615f, 167.22679f, 5f, false, false);
						TASK::TASK_COMBAT_PED(Local_298[48 /*25*/], func_28(), 0, 16);
					}
					if (!PED::IS_PED_INJURED(Local_298[47 /*25*/]))
					{
						TASK::TASK_COMBAT_PED(Local_298[47 /*25*/], func_28(), 0, 16);
					}
					uParam0->f_1++;
				}
			}
			break;
		case 3:
			if ((PED::IS_PED_INJURED(Local_298[46 /*25*/]) && PED::IS_PED_INJURED(Local_298[48 /*25*/])) && PED::IS_PED_INJURED(Local_298[47 /*25*/]))
			{
				__LIB_37__::func_193(uParam0);
			}
			break;
	}
}

void func_955(var uParam0)//Position - 0x9A23E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (__LIB_0__::func_724(func_28(), Local_86, 1) > 250f)
	{
		__LIB_37__::func_193(uParam0);
	}
	if (!__LIB_37__::func_188(uParam0))
	{
		if (iLocal_1390 != -1)
		{
			iLocal_1391 = Local_1386[iLocal_1390 /*60*/].f_7;
			iLocal_1392 = Local_1386[iLocal_1390 /*60*/].f_9;
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_1386[iLocal_1390 /*60*/], Local_1386[iLocal_1390 /*60*/].f_3, Local_1386[iLocal_1390 /*60*/].f_6, false, true, 0))
			{
				if (iLocal_1391 != -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_1386[iLocal_1391 /*60*/], Local_1386[iLocal_1391 /*60*/].f_3, Local_1386[iLocal_1391 /*60*/].f_6, false, true, 0))
				{
					iLocal_1390 = iLocal_1391;
					iLocal_1391 = Local_1386[iLocal_1390 /*60*/].f_7;
					iLocal_1392 = Local_1386[iLocal_1390 /*60*/].f_9;
				}
				else if (iLocal_1392 != -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_1386[iLocal_1392 /*60*/], Local_1386[iLocal_1392 /*60*/].f_3, Local_1386[iLocal_1392 /*60*/].f_6, false, true, 0))
				{
					iLocal_1390 = iLocal_1392;
					iLocal_1391 = Local_1386[iLocal_1390 /*60*/].f_7;
					iLocal_1392 = Local_1386[iLocal_1390 /*60*/].f_9;
				}
				else
				{
					iVar2 = 1;
				}
				iLocal_1394 = 1;
			}
			else
			{
				iLocal_1394 = 0;
			}
		}
		iLocal_1394 = iLocal_1394;
		if (iVar2 || iLocal_1390 == -1)
		{
			iVar0 = 0;
			while (iVar0 >= 0)
			{
				if (iLocal_1390 == -1 || ((iVar0 != iLocal_1390 && iVar0 != Local_1386[iLocal_1390 /*60*/].f_7) && iVar0 != Local_1386[iLocal_1390 /*60*/].f_9))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_28(), Local_1386[iVar0 /*60*/], Local_1386[iVar0 /*60*/].f_3, Local_1386[iVar0 /*60*/].f_6, false, true, 0))
					{
						iLocal_1390 = iVar0;
						iLocal_1391 = Local_1386[iLocal_1390 /*60*/].f_7;
						iLocal_1392 = Local_1386[iLocal_1390 /*60*/].f_9;
						iVar0 = -1;
					}
				}
				if (iVar0 != -1)
				{
					iVar0++;
					if (iVar0 > (15 - 1))
					{
						iLocal_1390 = -1;
						iVar0 = -1;
					}
				}
			}
		}
		if (uParam0->f_1 == 0)
		{
			uParam0->f_1 = 4 + 1;
		}
		iVar3 = 0;
		bVar4 = false;
		while (!bVar4)
		{
			iVar0 = uParam0->f_1;
			if ((ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_298[iVar0 /*25*/])) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_292 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_293) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_291))
			{
				if (Local_298[iVar0 /*25*/].f_21 == -1 || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_298[iVar0 /*25*/], Local_1386[Local_298[iVar0 /*25*/].f_21 /*60*/], Local_1386[Local_298[iVar0 /*25*/].f_21 /*60*/].f_3, Local_1386[Local_298[iVar0 /*25*/].f_21 /*60*/].f_6, false, true, 0))
				{
					iVar1 = 0;
					while (iVar1 < 15)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_298[iVar0 /*25*/], Local_1386[iVar1 /*60*/], Local_1386[iVar1 /*60*/].f_3, Local_1386[iVar1 /*60*/].f_6, false, true, 0))
						{
							Local_298[iVar0 /*25*/].f_21 = iVar1;
							iVar1 = 15;
						}
						else
						{
							iVar1++;
							if (iVar1 >= 15)
							{
								Local_298[iVar0 /*25*/].f_21 = -1;
							}
						}
					}
				}
				else
				{
					iLocal_1395[Local_298[iVar0 /*25*/].f_21] = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(func_28()) && !PED::IS_PED_INJURED(func_28()))
				{
					Local_298[iVar0 /*25*/].f_24 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_28(), true), ENTITY::GET_ENTITY_COORDS(Local_298[iVar0 /*25*/], true));
				}
				bVar4 = true;
			}
			else
			{
				iVar3++;
			}
			uParam0->f_1++;
			if (iVar3 > 57)
			{
				bVar4 = true;
			}
			if (uParam0->f_1 >= 57)
			{
				uParam0->f_1 = 4 + 1;
			}
		}
		func_956();
		iVar0 = 0;
		while (iVar0 < iLocal_1395)
		{
			iLocal_1395[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 57)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_298[iVar0 /*25*/]) && !PED::IS_PED_INJURED(Local_298[iVar0 /*25*/])) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_292 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_293) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_298[iVar0 /*25*/]) == iLocal_291))
			{
				iVar1 = 0;
				while (iVar1 < 15)
				{
					if (iVar1 == Local_298[iVar0 /*25*/].f_21)
					{
						iLocal_1395[iVar1] = 1;
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_956()//Position - 0x9A6B3
{
	if (__LIB_0__::func_715(func_29()))
	{
		func_958(&Local_1562);
		func_958(&Local_1561);
		func_958(&Local_1563);
		func_958(&iLocal_1481);
		func_958(&Local_1532);
		func_958(&Local_1564);
		func_958(&Local_1533);
		func_958(&Local_1534);
		func_958(&iLocal_1535);
		func_958(&Local_1452);
		func_957(&iLocal_1455);
		func_958(&Local_1480);
	}
}

void func_957(int* iParam0)//Position - 0x9A71A
{
	if (__LIB_0__::func_715(*iParam0) && ((PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_292 || PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_293) || PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) == iLocal_291))
	{
		if (PED::CAN_PED_SEE_HATED_PED(func_29(), *iParam0))
		{
			iParam0->f_23 = MISC::GET_GAME_TIMER();
			iParam0->f_22 = 1;
		}
		else if ((MISC::GET_GAME_TIMER() - iParam0->f_23) > 6000)
		{
			iParam0->f_23 = MISC::GET_GAME_TIMER();
			iParam0->f_22 = 0;
		}
	}
	else
	{
		iParam0->f_22 = 0;
	}
}

void func_958(int iParam0)//Position - 0x9A7A0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_957(iParam0[iVar0 /*25*/]);
		iVar0++;
	}
}

void func_960(var uParam0)//Position - 0x9A7EF
{
	int iVar0;
	if (iLocal_1315 == 8)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			HUD::SET_RADAR_ZOOM_PRECISE(0f);
			return;
		}
	}
	if (__LIB_37__::func_931(uParam0))
	{
		iVar0 = -1;
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.4084f, 162.60779f, 163.56293f, -2340.6528f, 440.28964f, 178.9f, 197.75f, false, true, 0))
		{
			iVar0 = 0;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.4084f, 162.60779f, 178.9f, -2340.6528f, 440.28964f, 188.7f, 197.75f, false, true, 0))
		{
			iVar0 = 1;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2217.4084f, 162.60779f, 188.7f, -2340.6528f, 440.28964f, 201f, 197.75f, false, true, 0))
		{
			iVar0 = 2;
		}
		if (iVar0 >= 0)
		{
			HUD::SET_RADAR_ZOOM_PRECISE(60f);
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeKortzCenter"), -2250f, 300f, 0, iVar0);
		}
	}
}

void func_963(bool bParam0)//Position - 0x9A925
{
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			iLocal_1415 = Global_96938.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1415, true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Local_300[0 /*2*/] = Global_96938.f_28[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_300[0 /*2*/], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			Local_299[16 /*7*/] = Global_96938[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_299[16 /*7*/], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
		{
			Local_300[1 /*2*/] = Global_96938.f_28[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_300[1 /*2*/], true, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[2]))
		{
			Local_300[2 /*2*/] = Global_96938.f_28[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_300[2 /*2*/], true, true);
		}
		__LIB_0__::func_468(48);
	}
}

int func_966(int iParam0)//Position - 0x9AAC0
{
	switch (iParam0)
	{
		case 0:
		case default:
			return 0;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 5:
			return 6;
			break;
		case 6:
			return 7;
			break;
		case 7:
			return 8;
			break;
		case 8:
			return 9;
			break;
		case 9:
			return 10;
			break;
	}
	return 2;
}

void func_968(int iParam0)//Position - 0x9AB7F
{
	char* sVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("MIC3_MISSION_FAIL");
	if (iParam0 == 0)
	{
		func_979();
		func_4();
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "M3_FF";
				break;
			case 2:
				sVar0 = "M3_FMDEAD";
				break;
			case 3:
				sVar0 = "M3_FTDEAD";
				break;
			case 4:
				sVar0 = "M3_DVDEAD";
				break;
			case 5:
				sVar0 = "M3_DVABDN";
				break;
			default:
				sVar0 = "M3_FF";
				break;
		}
		func_970(sVar0);
		while (!__LIB_0__::func_223())
		{
			SYSTEM::WAIT(0);
		}
		if (iParam0 == 1)
		{
			func_932();
		}
		func_4();
	}
	Global_113330 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_970(char* sParam0)//Position - 0x9AC5D
{
	__LIB_0__::func_381(sParam0);
	func_971(0);
}

void func_971(int iParam0)//Position - 0x9AC70
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_972(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_972(int iParam0)//Position - 0x9ACB5
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
	func_973(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
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

void func_973(var uParam0, int iParam1)//Position - 0x9ADC5
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_975(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_975(int iParam0, var uParam1, float fParam2)//Position - 0x9AF99
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
			return func_975(8, uParam1, fParam2);
			break;
		case 10:
			return func_975(8, uParam1, fParam2);
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

void func_979()//Position - 0x9BA7B
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_972(iVar0))
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

