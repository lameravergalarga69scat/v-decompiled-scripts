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
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<8> Local_60 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 1000;
	var uLocal_63 = 1000;
	var uLocal_64 = 0;
	struct<2> Local_65[3];
	struct<2> Local_66[3];
	int iLocal_67[2] = { 0, 0 };
	struct<14> Local_68[9];
	var uLocal_69 = 16;
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
	struct<6> Local_234 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_235 = 0;
	var uLocal_236 = 1092616192;
	var uLocal_237 = 1101004800;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 3;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
	var uLocal_255[3] = { 0, 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	float fLocal_261 = 0f;
	float fLocal_262 = 0f;
	float fLocal_263 = 0f;
	float fLocal_264 = 0f;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	bool bLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	char cLocal_296[64] = "";
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	char* sLocal_305 = NULL;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 30;
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
	var uLocal_459 = 10;
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
	var uLocal_510 = 10;
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
	var uLocal_581 = 20;
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
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 20;
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
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 30;
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
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 5;
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
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 7;
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
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 5;
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
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 3;
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
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 21;
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
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 10;
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
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 5;
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
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 5;
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
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	int iLocal_1318 = 0;
	int iLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	bool bLocal_1323 = 0;
	int iLocal_1324 = 0;
	float fLocal_1325[3] = { 0f, 0f, 0f };
	bool bLocal_1326 = 0;
	int iLocal_1327 = 0;
	int iLocal_1328 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
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
	Local_49 = { 1358.1968f, 3618.2341f, 33.89066f };
	Local_50 = { 0f, 5f, -0.5f };
	Local_51 = { 4f, 3f, -0.5f };
	Local_52 = { 4f, -3f, -0.5f };
	Local_53 = { 0f, -5f, -0.5f };
	Local_54 = { -4f, -3f, -0.5f };
	Local_55 = { -4f, 3f, -0.5f };
	Local_56 = { 0f, 2f, -0.5f };
	Local_57 = { 4f, 0f, -0.5f };
	Local_58 = { 0f, -2.2f, -0.5f };
	Local_59 = { -4f, 0f, -0.5f };
	iLocal_274 = joaat("WEAPON_ASSAULTRIFLE");
	Local_283 = { 0f, 0f, 0f };
	iLocal_287 = 30000;
	bLocal_291 = true;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
	sLocal_305 = "rural_prep_park";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_347();
		func_343();
	}
	MISC::SET_MISSION_FLAG(true);
	func_271();
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePaletoScorePrep", 0);
		__LIB_20__::func_736(&uLocal_308);
		if (((((iLocal_1319 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[0 /*2*/], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_60.f_7 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iVar1 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
				if (iVar1 != joaat("WEAPON_UNARMED"))
				{
					iVar2 = 0;
					WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, &iVar2);
					if (iVar2 < WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, true))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				__LIB_39__::func_907(&Local_60, Local_65[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			__LIB_9__::func_981(&Local_60, 0, 0);
		}
		func_240();
		func_207();
		if (!bLocal_1323)
		{
			func_153();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x27D
{
	switch (iLocal_1319)
	{
		case 0:
			func_151();
			break;
		case 1:
			func_117();
			break;
		case 2:
			func_8();
			break;
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2C1
{
	switch (iLocal_1320)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_1320++;
			break;
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x302
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[0 /*2*/], false))
	{
		DECORATOR::DECOR_SET_BOOL(Local_65[0 /*2*/], "IgnoredByQuickSave", true);
	}
	__LIB_6__::func_823(0, 0);
	func_343();
}

void func_8()//Position - 0x497
{
	int iVar0;
	if (!iLocal_265)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_254) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_254, false)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_254, true))
		{
			__LIB_39__::func_912(iLocal_254, 0, 145);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_254);
			iLocal_265 = 1;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-94.3112f, 3003.0156f, 2711.2727f, 4857.7627f);
	switch (iLocal_1320)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			__LIB_0__::func_403(724, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_TRUCK");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			iLocal_1320++;
			break;
		case 1:
			if (__LIB_32__::func_811(&Local_234, Local_49, 0.1f, 0.1f, 2f, 1, Local_65[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_234.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], 1359.4762f, 3614.326f, 36.87141f, 1356.748f, 3621.6047f, 33.72731f, 5f, false, true, 0)))
			{
				__LIB_6__::func_762(Local_65[0 /*2*/], 10.5f, -1, 1056964608, 0, 1, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_65[0 /*2*/], false);
				__LIB_18__::func_192(&Local_234, 1, 0);
				__LIB_0__::func_402(1, 724);
				bLocal_275 = false;
				iLocal_276 = 0;
				iLocal_1320++;
			}
			break;
		case 2:
			bLocal_280 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 400f)
					{
						if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
						{
							TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						bLocal_280 = false;
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_280)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_1320++;
			}
			else if (!bLocal_275)
			{
				HUD::CLEAR_PRINTS();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
				__LIB_0__::func_210("RHP_KILL", 7500, 1);
				bLocal_275 = true;
			}
			break;
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()) == 2)
				{
					__LIB_0__::func_203(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
					if (bLocal_275)
					{
						if (__LIB_35__::func_901(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1320 = 4;
						}
					}
					else if (__LIB_35__::func_901(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1320 = 4;
					}
				}
				else if (__LIB_18__::func_168(PLAYER::PLAYER_PED_ID()) == 0)
				{
					__LIB_0__::func_203(&uLocal_69, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (bLocal_275)
					{
						if (__LIB_35__::func_901(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1320 = 4;
						}
					}
					else if (__LIB_35__::func_901(&uLocal_69, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1320 = 4;
					}
				}
				if (iLocal_1320 == 4)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (!iLocal_276 && __LIB_11__::func_692())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 7f, 4);
				AUDIO::TRIGGER_MUSIC_EVENT("RHP1_END");
				__LIB_0__::func_210("RHP_EXIT", 7500, 1);
				iLocal_276 = 1;
			}
			break;
		case 4:
			if (!__LIB_0__::func_75() || SYSTEM::TIMERA() > 6000)
			{
				func_3();
			}
			break;
	}
}

void func_117()//Position - 0x8493
{
	int iVar0;
	switch (iLocal_1320)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
				{
					if (!iLocal_273)
					{
						__LIB_0__::func_203(&uLocal_69, 1, Local_68[iVar0 /*14*/], "ArmyPed", 0, 1);
						__LIB_6__::func_771();
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iVar0 /*14*/], "GENERIC_WAR_CRY", __LIB_0__::func_375(3), 1);
						iLocal_273 = 1;
					}
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_307);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
			iLocal_1320++;
			break;
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
				__LIB_41__::func_636(0f, 0f, 0f, -1f, 0, 145);
				if (HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_65[0 /*2*/].f_1));
				}
				func_119(2);
				iLocal_1320 = 0;
			}
			else if (__LIB_11__::func_720(Local_65[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
			{
				Local_65[0 /*2*/].f_1 = __LIB_6__::func_825(Local_65[0 /*2*/], 0, 0);
			}
			break;
	}
}

int func_119(int iParam0)//Position - 0x85C0
{
	if (iLocal_1318 == 0)
	{
		iLocal_1321 = iParam0;
		iLocal_1318 = 1;
		return 1;
	}
	return 0;
}

void func_151()//Position - 0xAA79
{
	switch (iLocal_1320)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			while (Global_100441 == 12)
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_11__::func_720(Local_65[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_65[0 /*2*/].f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_65[0 /*2*/]) != 0)
				{
					Local_65[0 /*2*/].f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_65[0 /*2*/]);
				}
				else
				{
					Local_65[0 /*2*/].f_1 = __LIB_6__::func_825(Local_65[0 /*2*/], 0, 0);
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
			__LIB_0__::func_210("RHP_GOODS", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_START");
			__LIB_0__::func_151("RHP_HELP", -1);
			iLocal_257 = 0;
			iLocal_1320++;
			break;
		case 1:
			if (bLocal_279)
			{
				iLocal_273 = 0;
				func_119(1);
				iLocal_1320 = 0;
			}
			break;
	}
}

void func_153()//Position - 0xAB65
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_66[iLocal_270 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_66[iLocal_270 /*2*/]))
			{
				__LIB_0__::func_124(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iLocal_270 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[iLocal_270 /*2*/], false))
			{
				if (iLocal_270 == 0)
				{
					func_195(3);
				}
				__LIB_0__::func_106(&(Local_65[iLocal_270 /*2*/]));
			}
			else if (Local_65[iLocal_270 /*2*/] == Local_65[0 /*2*/])
			{
				if (__LIB_10__::func_566(&(Local_65[0 /*2*/])))
				{
					func_195(4);
					__LIB_0__::func_106(&(Local_65[0 /*2*/]));
				}
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iLocal_270 /*14*/]))
		{
			if (bLocal_279)
			{
				__LIB_0__::func_499(Local_68[iLocal_270 /*14*/], &(Local_68[iLocal_270 /*14*/].f_2), -1, 0, 0, 0, 400f, 0, -1, -1, 1, 0);
			}
			if (PED::IS_PED_INJURED(Local_68[iLocal_270 /*14*/]))
			{
				if (Local_68[iLocal_270 /*14*/].f_10 == 0)
				{
					__LIB_0__::func_401(719, 1, 0);
					Local_68[iLocal_270 /*14*/].f_10 = 1;
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		if ((((__LIB_11__::func_720(Local_68[iLocal_270 /*14*/]) && (MISC::GET_GAME_TIMER() - iLocal_278) > 8000) && bLocal_279) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_68[iLocal_270 /*14*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_68[iLocal_270 /*14*/], false))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_68[iLocal_270 /*14*/]) < 110)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "DYING_MOAN", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (ENTITY::GET_ENTITY_HEALTH(Local_68[iLocal_270 /*14*/]) < 140)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "DYING_HELP", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_GOING_INTO_COVER(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "TAKE_COVER", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (TASK::IS_PED_RUNNING(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "COVER_ME", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_SHOOTING(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "COVER_YOU", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (!WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(Local_68[iLocal_270 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "RELOADING", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
			else if (__LIB_0__::func_583(Local_68[iLocal_270 /*14*/], joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1) || __LIB_0__::func_583(Local_68[iLocal_270 /*14*/], joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_68[iLocal_270 /*14*/], "GENERIC_WAR_CRY", __LIB_0__::func_375(3), 1);
				iLocal_278 = MISC::GET_GAME_TIMER();
			}
		}
		iLocal_270++;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(true);
	}
	else
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	}
	if (__LIB_11__::func_720(Local_65[0 /*2*/]) && __LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], -1521.8293f, 2725.0034f, 16.64367f, -1600.763f, 2794.8755f, 21.45629f, 30f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	}
	if (__LIB_11__::func_720(Local_65[0 /*2*/]) && __LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1319 > 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 650f)
			{
				func_195(5);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 600f)
			{
				if (!iLocal_277)
				{
					__LIB_0__::func_210("RHP_LWARN", 7500, 1);
					iLocal_277 = 1;
				}
			}
			else
			{
				iLocal_277 = 0;
			}
		}
	}
	if (__LIB_11__::func_720(Local_65[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (__LIB_11__::func_720(Local_68[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false) && !PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (!iLocal_267)
	{
		if (iLocal_1319 == 0)
		{
			if (fLocal_264 != 0f)
			{
				fLocal_264 = 0f;
			}
		}
		else if (iLocal_1319 == 1)
		{
			if (fLocal_264 < 5f)
			{
				fLocal_264 = (fLocal_264 + MISC::GET_FRAME_TIME());
			}
		}
		if (fLocal_264 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_65.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar2 /*2*/]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_255[iVar2]))
				{
					uLocal_255[iVar2] = Local_65[iVar2 /*2*/];
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_255[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_255[iVar2], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_255[iVar2], false))
					{
						iVar3 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(uLocal_255[iVar2]);
						if (iVar3 == joaat("WEAPON_STICKYBOMB"))
						{
							__LIB_0__::func_498(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_96938)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Global_96938[iVar2], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar2], false))
					{
						iVar4 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(Global_96938[iVar2]);
						if (iVar4 == joaat("WEAPON_STICKYBOMB"))
						{
							__LIB_0__::func_498(726);
							iLocal_267 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_172();
	func_162();
	func_158();
	func_157();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_266)
	{
		if (__LIB_0__::func_659(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0))
		{
			iLocal_266 = 1;
			MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_266 = 1;
		}
	}
	else if (!__LIB_0__::func_659(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(1, false);
			MISC::ENABLE_DISPATCH_SERVICE(10, false);
			MISC::ENABLE_DISPATCH_SERVICE(9, false);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(1, 0);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(2, 0);
			MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(8, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_POLICE_RADAR_BLIPS(false);
			iLocal_266 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_1327)
			{
				__LIB_0__::func_320(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 725);
				__LIB_0__::func_409(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 718);
				iLocal_1327 = 1;
			}
		}
		else if (iLocal_1327)
		{
			iLocal_1327 = 0;
		}
		if (!iLocal_1328)
		{
			__LIB_0__::func_320(PLAYER::PLAYER_PED_ID(), 722);
			iLocal_1328 = 1;
		}
	}
	if (!iLocal_265)
	{
		iVar5 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) < 10000f)
		{
			iVar5 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if ((((((ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, false)) && iVar5 != iLocal_254) && iVar5 != Local_65[1 /*2*/]) && iVar5 != Local_65[2 /*2*/]) && iVar5 != Local_65[0 /*2*/]) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar5)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, true);
			iLocal_254 = iVar5;
		}
	}
}

void func_157()//Position - 0xC133
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_1319 < 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*2*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[iVar0 /*2*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 1000f)
					{
						AUDIO::START_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1319 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::START_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1319 >= 1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_65[1 /*2*/], 0f);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar2]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_96938[iVar2], 0f);
				}
				iVar2++;
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_158()//Position - 0xC23C
{
	switch (iLocal_260)
	{
		case 1:
			if (fLocal_263 != 0f)
			{
				fLocal_263 = 0f;
			}
			if (fLocal_262 <= 0f)
			{
				fLocal_262 = 0f;
				iLocal_260 = 0;
			}
			else if (fLocal_262 > 0f)
			{
				fLocal_262 = (fLocal_262 - 0.02f);
			}
		case 0:
			if (func_161())
			{
				iLocal_260 = 3;
				fLocal_261 = fLocal_262;
				fLocal_263 = 1f;
			}
			break;
		case 3:
			if (fLocal_263 != 1f)
			{
				fLocal_263 = 1f;
			}
			if (fLocal_262 >= 1f)
			{
				iLocal_260 = 2;
				fLocal_262 = 1f;
			}
			else if (fLocal_262 < 1f)
			{
				fLocal_262 = (fLocal_262 + 0.02f);
			}
		case 2:
			if (!func_161())
			{
				iLocal_260 = 1;
				fLocal_261 = fLocal_262;
				fLocal_263 = 0f;
			}
			break;
	}
	if (iLocal_260 == 3 || iLocal_260 == 1)
	{
		__LIB_4__::func_223(fLocal_261, fLocal_263, fLocal_262);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[20 /*31*/], fLocal_262, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[20 /*31*/], 4, false, true);
	}
}

int func_161()//Position - 0xC379
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_65[iVar0 /*2*/], false)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[iVar0 /*2*/], -1591.0193f, 2803.7307f, 15.418117f, -1569.9202f, 2777.8782f, 22.148561f, 8.25f, false, true, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_162()//Position - 0xC3EA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = __LIB_36__::func_33(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!__LIB_36__::func_78(iVar1))
			{
				if (__LIB_36__::func_107(iVar1, 0))
				{
					if (func_167(iVar1) || func_165(iVar1))
					{
						if (__LIB_36__::func_79(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_167(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
				bLocal_1326 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, 1365.7721f, 3625.5823f, 33.692444f, 1374.6617f, 3598.9507f, 36.894703f, 34f, false, true, 0);
				if (!bLocal_1326)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_65[0 /*2*/]))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_305);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_305))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar1, Local_65[0 /*2*/], sLocal_305, 786469, 0, 8, -1, 10f, false, 2f);
					}
				}
			}
			else if (func_165(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				if (__LIB_11__::func_720(Local_68[5 /*14*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), Local_68[5 /*14*/], 7, 15f, 786469, 15f, -1f, true);
					}
				}
			}
			else
			{
				__LIB_36__::func_77(iVar1);
			}
		}
		iVar0++;
	}
}

int func_165(int iParam0)//Position - 0xC682
{
	if (!__LIB_0__::func_198())
	{
		if (__LIB_11__::func_720(Local_65[0 /*2*/]) && iLocal_257 == 0)
		{
			if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_167(int iParam0)//Position - 0xC70C
{
	if (!__LIB_0__::func_198())
	{
		if (__LIB_11__::func_720(Local_65[0 /*2*/]) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], 1364.2483f, 3620.5112f, 33.89069f, 1350.8995f, 3616.2249f, 37.12358f, 6.5f, false, true, 0))
		{
			if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_65[0 /*2*/], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_65[0 /*2*/], -1, false) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_172()//Position - 0xC8AD
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	switch (iLocal_257)
	{
		case 0:
			if (!bLocal_279)
			{
				func_188();
				func_182();
				if (((((__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_68[0 /*14*/])) && __LIB_11__::func_720(Local_68[5 /*14*/])) && __LIB_11__::func_720(Local_65[1 /*2*/])) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_65[0 /*2*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_65[0 /*2*/], -1521.8293f, 2725.0034f, 16.64367f, -1600.763f, 2794.8755f, 21.45629f, 30f, false, true, 0) && PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
					{
						iLocal_257 = 2;
						iLocal_292 = 0;
					}
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false));
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) > fVar1)
					{
						fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					fVar2 = __LIB_0__::func_301((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/]))
					{
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_68[0 /*14*/], fVar2);
					}
				}
			}
			else
			{
				if (__LIB_11__::func_720(Local_65[0 /*2*/]))
				{
					Local_283 = { ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		case 2:
			if (!bLocal_279)
			{
				func_182();
				if (((((__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_68[0 /*14*/])) && __LIB_11__::func_720(Local_68[5 /*14*/])) && __LIB_11__::func_720(Local_65[1 /*2*/])) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_65[0 /*2*/]))
				{
					switch (iLocal_292)
					{
						case 0:
							if (!__LIB_0__::func_583(Local_68[0 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
							{
								if (iLocal_260 == 2 || (iLocal_260 == 3 && fLocal_262 > 0.8f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar4);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_65[1 /*2*/], -1785.4601f, 3169.6255f, 31.93f, 4, 10f, 786603, 3f, 3f, true);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_65[1 /*2*/], -1885.8746f, 3006.1519f, 31.81027f, 4, 10f, 786603, -1f, -1f, true);
									TASK::CLOSE_SEQUENCE_TASK(iVar4);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iVar4);
									TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								}
							}
							if (!__LIB_0__::func_583(Local_68[4 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!__LIB_0__::func_583(Local_68[5 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (ENTITY::IS_ENTITY_AT_COORD(Local_68[0 /*14*/], -1885.8746f, 3006.1519f, 31.81027f, 5f, 5f, 5f, false, true, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
									{
										PED::SET_PED_AS_COP(Local_68[iVar0 /*14*/], true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, true);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_68[iVar0 /*14*/], 1000, 65536);
										}
										__LIB_0__::func_124(&(Local_68[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_292++;
							}
							break;
						case 1:
							break;
						}
				}
			}
			else
			{
				if (__LIB_11__::func_720(Local_65[0 /*2*/]))
				{
					Local_283 = { ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], true) };
				}
				iLocal_259 = 0;
				iLocal_258 = 0;
				iLocal_257 = 1;
			}
			break;
		case 1:
			PED::GET_CLOSEST_PED(Local_283, 50f, true, false, &iVar5, false, false, -1);
			if (__LIB_11__::func_720(iVar5))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2, false);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2048, false);
			}
			switch (iLocal_258)
			{
				case 0:
					switch (iLocal_259)
					{
						case 0:
							iLocal_259 = func_180(Local_65[0 /*2*/]);
							break;
						case 1:
							if (__LIB_11__::func_720(Local_68[0 /*14*/]) && __LIB_11__::func_720(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (ENTITY::GET_ENTITY_SPEED(Local_68[0 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1000);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 14, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 720, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (ENTITY::GET_ENTITY_SPEED(Local_68[4 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 4, 2500);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 13, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((__LIB_11__::func_720(Local_68[5 /*14*/]) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[2 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						case 2:
							if (__LIB_11__::func_720(Local_68[0 /*14*/]) && __LIB_11__::func_720(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 900, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 100, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((__LIB_11__::func_720(Local_68[5 /*14*/]) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 120, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
						case 3:
							if ((__LIB_11__::func_720(Local_68[0 /*14*/]) && __LIB_11__::func_720(Local_65[1 /*2*/])) && __LIB_11__::func_720(Local_65[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 6, 500);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[1 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 420, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_68[4 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 5, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 380, 65536);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
										TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									}
								}
							}
							if (__LIB_11__::func_720(Local_68[5 /*14*/]) && __LIB_11__::func_720(Local_65[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_68[5 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[2 /*2*/], 4, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 250, 65536);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
										TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									}
								}
							}
							iLocal_258 = 1;
							break;
						case 4:
							if (__LIB_11__::func_720(Local_68[0 /*14*/]) && __LIB_11__::func_720(Local_65[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[0 /*14*/], Local_65[1 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[1 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 800, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if (__LIB_11__::func_720(Local_68[4 /*14*/]) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[4 /*14*/], Local_65[0 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_65[0 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 50, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							if ((__LIB_11__::func_720(Local_68[5 /*14*/]) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_65[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_68[5 /*14*/], Local_65[2 /*2*/], false))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_65[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								}
							}
							iLocal_258 = 1;
							break;
					}
					break;
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]) && __LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_68[iVar0 /*14*/], 10);
							PED::SET_PED_SEEING_RANGE(Local_68[iVar0 /*14*/], 580f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 50, true);
							PED::SET_PED_CONFIG_FLAG(Local_68[iVar0 /*14*/], 184, false);
							PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
							func_179(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/], false))
								{
									TASK::TASK_PAUSE(0, iVar6);
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar6, 65536);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
								TASK::TASK_PERFORM_SEQUENCE(Local_68[iVar0 /*14*/], iLocal_269);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]) && __LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
						{
							func_179(iVar0);
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_287 = 8000;
							}
							else
							{
								iLocal_287 = 12000;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 75f)
							{
								if (!Local_68[iVar0 /*14*/].f_12 && (MISC::GET_GAME_TIMER() - iLocal_288) > iLocal_287)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, true);
									Local_68[iVar0 /*14*/].f_12 = 1;
									iLocal_288 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_12 = 0;
							}
							if (!__LIB_0__::func_583(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]) && __LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 120f)
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 51, false);
								Local_68[iVar0 /*14*/].f_12 = 0;
								func_179(iVar0);
							}
							if (!__LIB_0__::func_583(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_COMBAT"), 1))
							{
								TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
				case 4:
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_49, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()) && __LIB_11__::func_720(Local_68[iVar0 /*14*/])) && __LIB_11__::func_720(Local_65[0 /*2*/]))
						{
							if (iVar7 && __LIB_0__::func_529(Local_68[iVar0 /*14*/], Local_49, 1) < 30f)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_68[iVar0 /*14*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 2);
								if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false), ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), true) > (120f / 2f))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, true);
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_68[iVar0 /*14*/], false), true) > (120f * 2f))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/], false) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_68[iVar0 /*14*/]))
									{
										iVar9 = func_176(Local_68[iVar0 /*14*/]);
										if (__LIB_11__::func_720(iVar9))
										{
											iVar8 = -1;
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, -1, false))
											{
												iVar8 = -1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 0, false))
											{
												iVar8 = 0;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 1, false))
											{
												iVar8 = 1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 2, false))
											{
												iVar8 = 2;
											}
											if (__LIB_10__::func_946(iVar9))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
												{
													TASK::TASK_ENTER_VEHICLE(Local_68[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, false);
											}
											else
											{
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
											}
										}
										else
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_68[iVar0 /*14*/]));
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_68[iVar0 /*14*/]))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_68[iVar0 /*14*/], 1) < 35f)
									{
										if (__LIB_2__::func_50(Local_68[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_68[iVar0 /*14*/], false)) == -1)
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_290) > 40000)
											{
												if (bLocal_291)
												{
													bLocal_291 = false;
													iLocal_290 = MISC::GET_GAME_TIMER();
												}
												else
												{
													bLocal_291 = true;
													iLocal_290 = MISC::GET_GAME_TIMER();
												}
											}
											if (bLocal_291)
											{
												if (!__LIB_0__::func_583(Local_68[iVar0 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
												{
													TASK::TASK_VEHICLE_ESCORT(Local_68[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_68[iVar0 /*14*/], false), Local_65[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
											{
												TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											}
										}
										else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
										{
											TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_68[iVar0 /*14*/], 1) < 20f)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
										}
										else
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, false);
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iVar0 /*14*/], 3, true);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_68[iVar0 /*14*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_68[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_258 = func_178();
					break;
			}
			break;
	}
}

var func_176(int iParam0)//Position - 0xDC0F
{
	var uVar0;
	float fVar1;
	uVar0 = Local_65[1 /*2*/];
	fVar1 = 9999f;
	if (__LIB_11__::func_720(Local_65[1 /*2*/]))
	{
		if (__LIB_0__::func_76(iParam0, Local_65[1 /*2*/], 1) < fVar1)
		{
			fVar1 = __LIB_0__::func_76(iParam0, Local_65[1 /*2*/], 1);
			if (__LIB_10__::func_946(Local_65[1 /*2*/]))
			{
				uVar0 = Local_65[1 /*2*/];
			}
			else
			{
				uVar0 = Local_65[2 /*2*/];
			}
		}
	}
	if (__LIB_11__::func_720(Local_65[2 /*2*/]))
	{
		if (__LIB_0__::func_76(iParam0, Local_65[2 /*2*/], 1) < fVar1)
		{
			fVar1 = __LIB_0__::func_76(iParam0, Local_65[2 /*2*/], 1);
			if (__LIB_10__::func_946(Local_65[2 /*2*/]))
			{
				uVar0 = Local_65[2 /*2*/];
			}
			else
			{
				uVar0 = Local_65[1 /*2*/];
			}
		}
	}
	return uVar0;
}

int func_178()//Position - 0xDCF3
{
	if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()) && __LIB_11__::func_720(Local_65[0 /*2*/]))
	{
		if (__LIB_0__::func_529(Local_65[0 /*2*/], Local_283, 1) > 120f)
		{
			return 4;
		}
		else if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_283, 1) <= 120f)
		{
			return 2;
		}
		else if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), Local_283, 1) > 120f && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], false))
		{
			return 3;
		}
	}
	return 2;
}

void func_179(int iParam0)//Position - 0xDD81
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (__LIB_11__::func_720(Local_68[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_50 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_53 };
				fVar2 = 3.8f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_54 };
				fVar2 = 4.5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_58 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_56 };
				fVar2 = 2.8f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_59 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_54 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_57 };
				fVar2 = 4.5f;
				iVar0 = Local_65[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_180(0) == 1)
			{
				Var1 = { Local_52 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 2)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 3)
			{
				Var1 = { Local_55 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
			else if (func_180(0) == 4)
			{
				Var1 = { Local_51 };
				fVar2 = 5f;
				iVar0 = Local_65[0 /*2*/];
			}
		}
		if (!Local_68[iParam0 /*14*/].f_12)
		{
			if (__LIB_11__::func_720(iVar0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_68[iParam0 /*14*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var1), fVar2, false, false);
			}
			else if (__LIB_11__::func_720(Local_65[0 /*2*/]))
			{
				if (func_180(Local_65[0 /*2*/]) == 1)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], Local_53, 3.8f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 2)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], -6f, 0f, -0.5f, 6f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 3)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], Local_50, 3.8f, false);
				}
				else if (func_180(Local_65[0 /*2*/]) == 4)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_68[iParam0 /*14*/], Local_65[0 /*2*/], 6f, 0f, -0.5f, 6f, false);
				}
			}
		}
	}
}

int func_180(int iParam0)//Position - 0xE345
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (iParam0 == 0)
	{
		iParam0 = Local_65[0 /*2*/];
	}
	if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()) && __LIB_11__::func_720(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var0) };
		fVar2 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1);
		if (Var1.f_0 < 0f)
		{
			fVar2 = (fVar2 * -1f);
		}
	}
	if ((fVar2 <= 45f && fVar2 >= 0f) || (fVar2 >= -45f && fVar2 <= 0f))
	{
		return 1;
	}
	else if (fVar2 <= 135f && fVar2 >= 0f)
	{
		return 2;
	}
	else if (fVar2 >= -135f && fVar2 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}

void func_182()//Position - 0xE43E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_282, true);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
		{
			if (((((PED::IS_PED_IN_COMBAT(Local_68[iVar0 /*14*/], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_68[iVar0 /*14*/])) || PED::IS_PED_BEING_STUNNED(Local_68[iVar0 /*14*/], 0)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_68[iVar0 /*14*/])) || PED::IS_PED_BEING_JACKED(Local_68[iVar0 /*14*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
			{
				bLocal_279 = true;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_289) > 800)
			{
				if (PED::HAS_PED_RECEIVED_EVENT(Local_68[iVar0 /*14*/], 125) || PED::HAS_PED_RECEIVED_EVENT(Local_68[iVar0 /*14*/], 126))
				{
					bLocal_279 = true;
				}
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_68[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_68[iVar0 /*14*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_68[iVar0 /*14*/])))
			{
				if (iLocal_282 != 0)
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_282) != joaat("GROUP_MELEE") && iLocal_282 != joaat("WEAPON_UNARMED"))
					{
						if ((MISC::GET_GAME_TIMER() - Local_68[iVar0 /*14*/].f_11) > 800)
						{
							bLocal_279 = true;
						}
					}
				}
			}
			else
			{
				Local_68[iVar0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			bLocal_279 = true;
		}
		iVar0++;
	}
	if (__LIB_11__::func_720(Local_65[1 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[1 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[1 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (__LIB_35__::func_207(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[1 /*2*/]) && fLocal_284 >= 7f)
			{
				bLocal_279 = true;
			}
			Var1 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[1 /*2*/], false)) };
			Var2 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[1 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_284 = __LIB_0__::func_156(Var2, Var1);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (__LIB_11__::func_720(Local_65[2 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[2 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[2 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (__LIB_35__::func_207(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[2 /*2*/]) && fLocal_286 >= 7f)
			{
				bLocal_279 = true;
			}
			Var3 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[2 /*2*/], false)) };
			Var4 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[2 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_286 = __LIB_0__::func_156(Var4, Var3);
		}
	}
	else
	{
		bLocal_279 = true;
	}
	if (__LIB_11__::func_720(Local_65[0 /*2*/]))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1) < 45f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bLocal_279 = true;
		}
		if (__LIB_35__::func_207(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false), 30f, 0))
		{
			bLocal_279 = true;
		}
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[0 /*2*/], PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/], true)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]))
		{
			bLocal_279 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_65[0 /*2*/]) && fLocal_285 >= 7f)
			{
				bLocal_279 = true;
			}
			Var5 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) };
			Var6 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
			fLocal_285 = __LIB_0__::func_156(Var6, Var5);
		}
		if (__LIB_10__::func_722())
		{
			iVar7 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, Local_65[0 /*2*/]))
				{
					bLocal_279 = true;
				}
				Var8 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) - ENTITY::GET_ENTITY_COORDS(Local_65[0 /*2*/], false)) };
				Var9 = { ENTITY::GET_ENTITY_VELOCITY(Local_65[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) };
				fLocal_285 = __LIB_0__::func_156(Var9, Var8);
			}
		}
	}
	else
	{
		bLocal_279 = true;
	}
}

void func_188()//Position - 0xEEB1
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	if (((((__LIB_11__::func_720(Local_65[0 /*2*/]) && __LIB_11__::func_720(Local_65[1 /*2*/])) && __LIB_11__::func_720(Local_65[2 /*2*/])) && __LIB_11__::func_720(Local_68[4 /*14*/])) && __LIB_11__::func_720(Local_68[0 /*14*/])) && __LIB_11__::func_720(Local_68[5 /*14*/]))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], 0f, __LIB_0__::func_301(__LIB_0__::func_76(Local_65[0 /*2*/], Local_65[1 /*2*/], 1), 3f, 25f), 5.5f) };
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[0 /*2*/], 0f, 0f, -6f) };
		Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], 0f, 20f, 5f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[1 /*2*/], 0f, 0f, -6f) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 0f, __LIB_0__::func_301(__LIB_0__::func_76(Local_65[2 /*2*/], Local_65[0 /*2*/], 1), 3f, 25f), 5f) };
		Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_65[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_256)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[1 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1325[1] = (fLocal_1325[1] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1325[1] > 0f)
					{
						fLocal_1325[1] = (fLocal_1325[1] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[0 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1325[0] = (fLocal_1325[0] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1325[0] > 0f)
					{
						fLocal_1325[0] = (fLocal_1325[0] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_65[2 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1325[2] = (fLocal_1325[2] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1325[2] > 0f)
					{
						fLocal_1325[2] = (fLocal_1325[2] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (fLocal_1325[1] > 1.5f)
				{
					iLocal_295 = Local_68[0 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[0 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[0 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1325[0] > 1.5f)
				{
					iLocal_295 = Local_68[4 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[4 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[4 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else if (fLocal_1325[2] > 1.5f)
				{
					iLocal_295 = Local_68[5 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_68[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_68[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[0 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[1 /*2*/], 4f, 1, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_65[2 /*2*/], 4f, 1, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[5 /*14*/], false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000, false, true);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
					TASK::TASK_PERFORM_SEQUENCE(Local_68[5 /*14*/], iLocal_269);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
					iLocal_256 = 1;
				}
				else
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_68[5 /*14*/], false) && PED::IS_PED_IN_ANY_VEHICLE(Local_68[0 /*14*/], false)) && PED::IS_PED_IN_ANY_VEHICLE(Local_68[4 /*14*/], false))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_65[1 /*2*/]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[4 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_68[5 /*14*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[0 /*2*/], true);
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[1 /*2*/], true);
						VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Local_65[2 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_65[2 /*2*/], true);
						VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Local_65[2 /*2*/], true);
					}
					iLocal_294 = MISC::GET_GAME_TIMER();
				}
				break;
			case 1:
				switch (iLocal_293)
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
						{
							__LIB_0__::func_203(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
							iLocal_294 = MISC::GET_GAME_TIMER();
							fLocal_1325[1] = 0f;
							fLocal_1325[2] = 0f;
							fLocal_1325[0] = 0f;
							iLocal_293++;
						}
						break;
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !__LIB_0__::func_75())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								__LIB_0__::func_203(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !__LIB_0__::func_75())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								__LIB_0__::func_203(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 8000 && !__LIB_0__::func_75())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
							{
								__LIB_0__::func_203(&uLocal_69, 1, iLocal_295, "Armyped", 0, 1);
								if (iLocal_281)
								{
									iLocal_281 = 0;
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_269);
									TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, 0f, -1f), 1000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 4f, 4f, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_269);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_295, iLocal_269);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_269);
									iLocal_294 = MISC::GET_GAME_TIMER();
									iLocal_289 = MISC::GET_GAME_TIMER();
									iLocal_293++;
								}
							}
						}
						break;
					case 4:
						break;
				}
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_295, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_295, PLAYER::PLAYER_PED_ID(), -1, false);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
						{
							if (iLocal_295 == Local_68[4 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[0 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_295 == Local_68[5 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_295, Local_65[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_256 = 2;
					}
				}
				else
				{
					if (iLocal_293 == 4)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_294) > 9000 && !__LIB_0__::func_75())
						{
							bLocal_279 = true;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 2:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var1, 9f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var2, Var3, 9f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 9f, false, true, 0))
				{
					iLocal_281 = 0;
					iLocal_256 = 0;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_295, false))
				{
					TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
					TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_281 = 1;
					iLocal_256 = 0;
				}
				break;
			}
	}
}

void func_195(int iParam0)//Position - 0xFC52
{
	char* sVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case 3:
			sVar0 = "RHP_FDES";
			break;
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		case 2:
			sVar0 = "RHP_FEND";
			break;
		case 5:
			sVar0 = "RHP_FABN";
			break;
		default:
			sVar0 = "";
			break;
	}
	func_197(sVar0);
	while (!__LIB_0__::func_204())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	func_343();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_197(char* sParam0)//Position - 0xFD3D
{
	__LIB_0__::func_324(sParam0);
	func_198(0);
}

void func_198(int iParam0)//Position - 0xFD50
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_199(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_199(int iParam0)//Position - 0xFD95
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_200(&(Global_113386.f_2363.f_539), iVar1);
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

void func_200(var uParam0, int iParam1)//Position - 0xFEA5
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
			if (!func_202(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_202(int iParam0, var uParam1, float fParam2)//Position - 0x1007B
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
			return func_202(8, uParam1, fParam2);
			break;
		case 10:
			return func_202(8, uParam1, fParam2);
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

void func_207()//Position - 0x10BA4
{
	struct<3> Var0;
	float fVar1;
	if (bLocal_1323 == 1)
	{
		if (iLocal_1318 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				func_119(iLocal_1324);
			}
		}
		else if (iLocal_1318 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_232();
			__LIB_11__::func_701(&uLocal_308);
			if (!__LIB_0__::func_295())
			{
				func_229(iLocal_1324, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_11__::func_727(&uLocal_308, Var0, 50f, 0);
			}
			func_225(iLocal_1319);
			while (!__LIB_26__::func_476(&uLocal_308))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1319)
			{
				case 0:
					func_220();
					break;
				case 1:
					func_215();
					break;
				case 2:
					func_214();
					break;
				case 3:
					func_208();
					break;
			}
			bLocal_1323 = false;
			if (!__LIB_0__::func_295())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_208()//Position - 0x10CB5
{
	func_212(1357.7001f, 3618.2803f, 33.8905f, 110.4135f);
	bLocal_279 = true;
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_212(struct<3> Param0, float fParam1)//Position - 0x10E04
{
	Local_65[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("barracks"), Param0, fParam1, true, true, false);
	ENTITY::SET_ENTITY_HEALTH(Local_65[0 /*2*/], ENTITY::GET_ENTITY_HEALTH(Local_65[0 /*2*/]) * 2, 0);
	VEHICLE::SET_VEHICLE_STRONG(Local_65[0 /*2*/], true);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_65[0 /*2*/], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_65[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_65[0 /*2*/], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_65[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_65[0 /*2*/], false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_65[0 /*2*/], true);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_65[0 /*2*/], false, 0);
	__LIB_10__::func_728(Local_65[0 /*2*/], 0);
	iLocal_67[0] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.7649f, 2128.3196f, 48.0929f, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67[0], Local_65[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	iLocal_67[1] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.7649f, 2128.3196f, 48.0929f, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_67[1], Local_65[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_214()//Position - 0x10F5A
{
	func_212(-248.6621f, 2950.0369f, 28.9996f, 93.5394f);
	bLocal_279 = true;
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_215()//Position - 0x10F98
{
	int iVar0;
	func_219(-284.0175f, 2949.1035f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_218(iVar0, Local_65[1 /*2*/]);
		__LIB_0__::func_477(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_212(-248.6621f, 2950.0369f, 28.9996f, 93.5394f);
	func_216(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_218(iVar0, Local_65[2 /*2*/]);
		__LIB_0__::func_477(Local_68[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_279 = true;
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_216(struct<3> Param0, float fParam1)//Position - 0x11057
{
	Local_65[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam1, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_218(int iParam0, int iParam1)//Position - 0x1111F
{
	int iVar0;
	int iVar1;
	if (iParam1 == Local_65[1 /*2*/] || iParam1 == Local_65[2 /*2*/])
	{
		iVar0 = joaat("S_M_Y_Marine_03");
	}
	else if (iParam1 == Local_65[0 /*2*/])
	{
		iVar0 = joaat("S_M_M_Marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_274 = joaat("WEAPON_PISTOL");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_274 = joaat("WEAPON_CARBINERIFLE");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_274 = joaat("WEAPON_SMG");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_274 = joaat("WEAPON_CARBINERIFLE");
	}
	Local_68[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, iVar0, iVar1, true, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_68[iParam0 /*14*/], iLocal_307);
	PED::SET_PED_AS_ENEMY(Local_68[iParam0 /*14*/], true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_68[iParam0 /*14*/], iLocal_274, -1, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(Local_68[iParam0 /*14*/], joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_MONEY(Local_68[iParam0 /*14*/], 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_68[iParam0 /*14*/], 2, 1, 0, 0);
	PED::SET_PED_ALERTNESS(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iParam0 /*14*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_68[iParam0 /*14*/], 1, false);
	PED::SET_PED_COMBAT_MOVEMENT(Local_68[iParam0 /*14*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_68[iParam0 /*14*/], 184, true);
	PED::SET_PED_CONFIG_FLAG(Local_68[iParam0 /*14*/], 272, true);
	AUDIO::STOP_PED_SPEAKING(Local_68[iParam0 /*14*/], true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_68[iParam0 /*14*/], true, 1);
	PED::SET_PED_ACCURACY(Local_68[iParam0 /*14*/], 10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_68[iParam0 /*14*/], true);
	Local_68[iParam0 /*14*/].f_10 = 0;
}

void func_219(struct<3> Param0, float fParam1)//Position - 0x112D1
{
	Local_65[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam1, true, true, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
}

void func_220()//Position - 0x112FE
{
	int iVar0;
	if (!__LIB_11__::func_720(Local_65[1 /*2*/]))
	{
		func_219(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
		{
			func_218(iVar0, Local_65[1 /*2*/]);
			__LIB_0__::func_477(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_68[0 /*14*/], Local_65[1 /*2*/], &cLocal_296, 786603, 0, 24, -1, 11f, false, 2f);
			}
		}
		iVar0++;
	}
	if (!__LIB_11__::func_720(Local_65[0 /*2*/]))
	{
		func_212(1006.7649f, 2128.3196f, 48.0929f, 39.898f);
	}
	if (!__LIB_11__::func_720(Local_68[4 /*14*/]))
	{
		func_218(4, Local_65[0 /*2*/]);
		TASK::TASK_VEHICLE_ESCORT(Local_68[4 /*14*/], Local_65[0 /*2*/], Local_65[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		__LIB_0__::func_477(Local_68[4 /*14*/], 0);
	}
	if (!__LIB_11__::func_720(Local_65[2 /*2*/]))
	{
		func_216(1018.9946f, 2112.9512f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
		{
			func_218(iVar0, Local_65[2 /*2*/]);
			__LIB_0__::func_477(Local_68[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				TASK::TASK_VEHICLE_ESCORT(Local_68[5 /*14*/], Local_65[2 /*2*/], Local_65[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_225(int iParam0)//Position - 0x11EAF
{
	switch (iParam0)
	{
		case 0:
			__LIB_11__::func_689(&uLocal_308, joaat("S_M_M_Marine_01"));
			__LIB_11__::func_689(&uLocal_308, joaat("S_M_Y_Marine_03"));
			__LIB_11__::func_689(&uLocal_308, joaat("crusader"));
			__LIB_11__::func_689(&uLocal_308, joaat("barracks"));
			__LIB_11__::func_697(&uLocal_308, &cLocal_296);
			__LIB_11__::func_689(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		case 1:
			__LIB_11__::func_689(&uLocal_308, joaat("S_M_Y_Marine_03"));
			__LIB_11__::func_689(&uLocal_308, joaat("S_M_M_Marine_01"));
			__LIB_11__::func_689(&uLocal_308, joaat("crusader"));
			__LIB_11__::func_689(&uLocal_308, joaat("barracks"));
			__LIB_11__::func_689(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
		case 2:
		case 3:
			__LIB_11__::func_689(&uLocal_308, joaat("barracks"));
			__LIB_11__::func_689(&uLocal_308, joaat("prop_mil_crate_01"));
			break;
	}
}

void func_229(int iParam0, var uParam1, var uParam2)//Position - 0x121AE
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -260.5082f, 2925.4458f, 40.1977f };
			*uParam2 = 303.6227f;
			break;
		case 1:
			*uParam1 = { -276.0887f, 2920.386f, 40.1317f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { -253.7471f, 2941.4854f, 29.131f };
			*uParam2 = 330.8292f;
			break;
		case 3:
			*uParam1 = { 1367.3243f, 3618.3743f, 33.8914f };
			*uParam2 = -118.28f;
			break;
	}
}

void func_232()//Position - 0x124B2
{
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_66[iLocal_270 /*2*/]) && !PED::IS_PED_INJURED(Local_66[iLocal_270 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_66[iLocal_270 /*2*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_66[iLocal_270 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_66[iLocal_270 /*2*/], false), true) + Vector(0f, -2f, 0f));
			}
			__LIB_0__::func_0(&(Local_66[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iLocal_270 /*14*/]))
		{
			__LIB_0__::func_489(&(Local_68[iLocal_270 /*14*/].f_2));
			Local_68[iLocal_270 /*14*/].f_12 = 0;
			if (!PED::IS_PED_INJURED(Local_68[iLocal_270 /*14*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_68[iLocal_270 /*14*/], false))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_68[iLocal_270 /*14*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_68[iLocal_270 /*14*/], false), true) + Vector(0f, -2f, 0f));
				}
				__LIB_0__::func_0(&(Local_68[iLocal_270 /*14*/]));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			__LIB_0__::func_123(&(iLocal_67[iLocal_270]));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iLocal_270 /*2*/]))
		{
			__LIB_2__::func_165(Local_65[iLocal_270 /*2*/]);
			__LIB_11__::func_32(&(Local_65[iLocal_270 /*2*/]));
		}
		iLocal_270++;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_18__::func_192(&Local_234, 1, 0);
	if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	iLocal_257 = 0;
	iLocal_259 = 0;
	iLocal_258 = 0;
	iLocal_256 = 0;
	iLocal_293 = 0;
	bLocal_279 = false;
	bLocal_280 = false;
	StringCopy(&cLocal_296, "Rural_prep_trigger1", 64);
}

void func_240()//Position - 0x128FD
{
	switch (iLocal_1318)
	{
		case 1:
			iLocal_1318 = 2;
			iLocal_1320 = -1;
			break;
		case 2:
			iLocal_1318 = 3;
			iLocal_1320 = 0;
			iLocal_1319 = iLocal_1321;
			break;
		case 3:
			iLocal_1321 = -1;
			iLocal_1318 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1322) > 2500)
			{
				iLocal_1322 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_271()//Position - 0x13AE1
{
	struct<3> Var0;
	var uVar1;
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_306);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_307);
	PED::ADD_RELATIONSHIP_GROUP("trevor", &iLocal_306);
	PED::ADD_RELATIONSHIP_GROUP("enemies", &iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_307, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_307, iLocal_306);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_306, iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, iLocal_307);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_307, joaat("ARMY"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), iLocal_307);
	HUD::REQUEST_ADDITIONAL_TEXT("ruralp", 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	MISC::ENABLE_DISPATCH_SERVICE(1, false);
	MISC::ENABLE_DISPATCH_SERVICE(10, false);
	MISC::ENABLE_DISPATCH_SERVICE(9, false);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(1, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(2, 0);
	MISC::SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(8, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), true);
	iLocal_268 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(35.394558f, 3600.5378f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.394558f, 3600.5378f, 1375.234f) + Vector(3f, 7f, 14.25f), false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.5099f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.5099f) + Vector(2f, 5f, 5f), false, true);
	if (__LIB_0__::func_294() || __LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_294())
		{
			iLocal_1324 = __LIB_0__::func_315();
			if (Global_94618)
			{
				iLocal_1324++;
			}
			if (iLocal_1324 >= 3)
			{
				iLocal_1324 = 3;
			}
		}
		else if (__LIB_0__::func_2(0))
		{
			iLocal_1324 = 0;
		}
		if (__LIB_0__::func_294())
		{
			func_229(iLocal_1324, &Var0, &uVar1);
			__LIB_11__::func_728(Var0, uVar1, 1, 0);
		}
		bLocal_1323 = true;
	}
	else
	{
		while (!func_339())
		{
			SYSTEM::WAIT(0);
		}
		func_274(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1319 = 0;
		func_225(0);
	}
	iLocal_1320 = 0;
	__LIB_11__::func_731(92);
}

void func_274(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13D90
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__::func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_6__::func_794(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_6__::func_864(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_275(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_275(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x13F05
{
	func_276(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_276(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x13F21
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_18__::func_173();
	uParam0->f_1 = __LIB_18__::func_240();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_40__::func_844(&(uParam0->f_2884), 0);
		__LIB_18__::func_218(PLAYER::PLAYER_PED_ID());
		__LIB_24__::func_949(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_18__::func_173())
		{
			__LIB_24__::func_948(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_278(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_278(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x14DCE
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_18__::func_168(iParam2);
	}
	if (__LIB_35__::func_208(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_32__::func_700(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_32__::func_700(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_339()//Position - 0x1BC96
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
			Local_65[0 /*2*/] = Global_96938[0];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_96938[0], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			__LIB_10__::func_728(Local_65[0 /*2*/], 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[0 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
			Local_65[1 /*2*/] = Global_96938[1];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_96938[1], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[1 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], true, true);
			Local_65[2 /*2*/] = Global_96938[2];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_96938[2], 0f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_65[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0f);
			ENTITY::RESET_ENTITY_ALPHA(Local_65[2 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[4 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
			Local_68[4 /*14*/] = Global_96938.f_9[0];
			__LIB_0__::func_477(Local_68[4 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[2], true, true);
			Local_68[0 /*14*/] = Global_96938.f_9[2];
			__LIB_0__::func_477(Local_68[0 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[1 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[3], true, true);
			Local_68[1 /*14*/] = Global_96938.f_9[3];
			__LIB_0__::func_477(Local_68[1 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[2 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[4], true, true);
			Local_68[2 /*14*/] = Global_96938.f_9[4];
			__LIB_0__::func_477(Local_68[2 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[3 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[5], true, true);
			Local_68[3 /*14*/] = Global_96938.f_9[5];
			__LIB_0__::func_477(Local_68[3 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[5 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[6], true, true);
			Local_68[5 /*14*/] = Global_96938.f_9[6];
			__LIB_0__::func_477(Local_68[5 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[6 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[7], true, true);
			Local_68[6 /*14*/] = Global_96938.f_9[7];
			__LIB_0__::func_477(Local_68[6 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[7 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[8], true, true);
			Local_68[7 /*14*/] = Global_96938.f_9[8];
			__LIB_0__::func_477(Local_68[7 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_68[8 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[9]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[9], true, true);
			Local_68[8 /*14*/] = Global_96938.f_9[9];
			__LIB_0__::func_477(Local_68[8 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], true, true);
			iLocal_67[0] = Global_96938.f_28[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[1], true, true);
			iLocal_67[1] = Global_96938.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (__LIB_11__::func_720(Local_68[iVar0 /*14*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_68[iVar0 /*14*/], iLocal_307);
			ENTITY::RESET_ENTITY_ALPHA(Local_68[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_296 = { Global_97339 };
	StringCopy(&Global_97339, "", 64);
	__LIB_12__::func_62(229, 0f, 0f, 2000f);
	if (((((((((((((ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[4 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[0 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[1 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[2 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[3 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[5 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[6 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[7 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_68[8 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_67[1]))
	{
		return 1;
	}
	return 0;
}

void func_343()//Position - 0x1C2C2
{
	__LIB_18__::func_192(&Local_234, 1, 0);
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (__LIB_11__::func_720(Local_66[iLocal_270 /*2*/]))
		{
			if (Local_66[iLocal_270 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::SET_PED_KEEP_TASK(Local_66[iLocal_270 /*2*/], true);
				__LIB_0__::func_124(&(Local_66[iLocal_270 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_66[iLocal_270 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_66[iLocal_270 /*2*/].f_1));
			}
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (9 - 1))
	{
		if (__LIB_11__::func_720(Local_68[iLocal_270 /*14*/]))
		{
			__LIB_0__::func_124(&(Local_68[iLocal_270 /*14*/]), 1, 0, 1);
			if (HUD::DOES_BLIP_EXIST(Local_68[iLocal_270 /*14*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_68[iLocal_270 /*14*/].f_1));
			}
			__LIB_0__::func_489(&(Local_68[iLocal_270 /*14*/].f_2));
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67[iLocal_270]))
		{
			__LIB_0__::func_122(&(iLocal_67[iLocal_270]), 0);
		}
		iLocal_270++;
	}
	iLocal_270 = 0;
	while (iLocal_270 <= (3 - 1))
	{
		if (__LIB_11__::func_720(Local_65[iLocal_270 /*2*/]))
		{
			__LIB_0__::func_106(&(Local_65[iLocal_270 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_65[iLocal_270 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_65[iLocal_270 /*2*/].f_1));
		}
		iLocal_270++;
	}
	__LIB_0__::func_367(0);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_11__::func_729();
	if (__LIB_11__::func_720(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_268, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.5099f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.5099f) + Vector(2f, 5f, 5f), true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), false);
	iLocal_257 = 0;
	bLocal_279 = false;
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	__LIB_9__::func_981(&Local_60, 0, 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_347()//Position - 0x1C559
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
			iVar0 = __LIB_0__::func_323();
			if (iVar0 != -1)
			{
				if (!func_199(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_260();
		}
	}
}

