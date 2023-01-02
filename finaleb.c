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
	struct<2> Local_50[3];
	struct<5> Local_51[3];
	struct<5> Local_52[7];
	var uLocal_53 = 16;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
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
	int* iLocal_218 = NULL;
	var uLocal_219 = 3;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 1092616192;
	var uLocal_226 = 1101004800;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 3;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1000;
	var uLocal_256 = 1000;
	var uLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	bool bLocal_272 = 0;
	struct<3> Local_273 = { 0, 0, 0 } ;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 21;
	var uLocal_279 = 6;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	float fLocal_289 = 0f;
	float fLocal_290 = 0f;
	float fLocal_291 = 0f;
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int* iLocal_321 = NULL;
	int iLocal_322 = 0;
	var uLocal_323 = 30;
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
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 10;
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
	var uLocal_525 = 10;
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
	var uLocal_596 = 20;
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
	var uLocal_697 = 20;
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
	var uLocal_798 = 30;
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
	var uLocal_979 = 5;
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
	var uLocal_1010 = 7;
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
	var uLocal_1060 = 5;
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
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 3;
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
	var uLocal_1102 = 21;
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
	var uLocal_1227 = 10;
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
	var uLocal_1278 = 5;
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
	var uLocal_1304 = 5;
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
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 3;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 12;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 12;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 12;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 9;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 9;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 12;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 12;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 12;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 9;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 9;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
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
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 12;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
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
	var uLocal_1528 = 12;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 12;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 9;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 9;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
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
	int iLocal_1580 = 0;
	int iLocal_1581 = 0;
	int iLocal_1582 = 0;
	int iLocal_1583 = 0;
	int iLocal_1584 = 0;
	int iLocal_1585 = 0;
	bool bLocal_1586 = 0;
	int iLocal_1587 = 0;
	bool bLocal_1588 = 0;
	int iLocal_1589 = 0;
	int iLocal_1590 = 0;
	int iLocal_1591 = 0;
	int iLocal_1592 = 0;
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
	Local_49 = { 2574.5146f, 2173.4243f, 31.5596f };
	iLocal_266 = 1;
	fLocal_292 = 0f;
	iLocal_320 = MISC::GET_HASH_KEY("w_sr_sniperrifle");
	iLocal_1590 = 57473;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_784();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		func_780();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(true);
	AUDIO::REQUEST_MISSION_AUDIO_BANK("FINALE_B_GENERAL", false, -1);
	PED::ADD_RELATIONSHIP_GROUP("michael_rel", &iLocal_259);
	HUD::REQUEST_ADDITIONAL_TEXT("FINALE2", 0);
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (!__LIB_0__::func_323())
	{
		func_749();
	}
	func_743();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_KillMichael", 0);
		__LIB_17__::func_630(&uLocal_323);
		__LIB_16__::func_913(&uLocal_1333);
		func_739();
		func_671();
		if (!bLocal_1586)
		{
			func_661();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x144
{
	switch (iLocal_1581)
	{
		case 0:
			func_576();
			break;
		case 1:
			func_538();
			break;
		case 2:
			func_527();
			break;
		case 4:
			func_526();
			break;
		case 3:
			func_521();
			break;
		case 5:
			func_187();
			break;
		case 6:
			func_165();
			break;
		case 7:
			func_28();
			break;
		case 8:
			func_2();
			break;
	}
}

void func_2()//Position - 0x1C9
{
	switch (iLocal_1582)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			iLocal_1582++;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x20D
{
	Global_96885 = 1;
	__LIB_0__::func_630(852);
	__LIB_17__::func_640(0);
	__LIB_16__::func_874(5, 0);
	if (__LIB_0__::func_2(0))
	{
		Global_63156 = 1;
		__LIB_0__::func_46(1, 1);
	}
	__LIB_0__::func_526(1, 0);
	if (__LIB_0__::func_2(0))
	{
		Global_63154 = 0;
	}
	func_780();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_28()//Position - 0x814
{
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_KillMichael", 0);
	switch (iLocal_1582)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			OBJECT::SUPPRESS_PICKUP_REWARD_TYPE(128, false);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			CUTSCENE::REQUEST_CUTSCENE("fin_B_MCS_2", 8);
			iLocal_311 = 0;
			iLocal_300 = 0;
			iLocal_301 = 0;
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_305 = 0;
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			iLocal_316 = 0;
			iLocal_310 = 0;
			iLocal_306 = 0;
			iLocal_308 = 0;
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			func_70(7, "Stage 7: over the Edge", 1, 0, 0, 1);
			__LIB_0__::func_325();
			iLocal_264 = 0;
			iLocal_1582++;
			break;
		case 1:
			if (__LIB_0__::func_90())
			{
				PED::CLEAR_PED_BLOOD_DAMAGE(func_67());
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_67(), "Michael", 0, 0, 3);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 3);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_0__::func_366(0);
				iLocal_1582++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_PROP(Local_51[1 /*5*/], 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_TOWER");
				func_61(5);
				MISC::CLEAR_AREA(2735.7068f, 1576.8636f, 59.4745f, 50f, true, false, false, false);
				MISC::CLEAR_AREA_OF_COPS(2735.7068f, 1576.8636f, 59.4745f, 50f, 0);
				MISC::CLEAR_AREA_OF_PEDS(2735.7068f, 1576.8636f, 59.4745f, 50f, 0);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				iLocal_317 = 0;
				iLocal_318 = 0;
				iLocal_319 = 0;
				iLocal_1582++;
			}
			break;
		case 3:
			if (iLocal_319 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 83500)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 3);
						iLocal_319 = 1;
					}
				}
			}
			if (!iLocal_317)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_67(), MISC::GET_HASH_KEY("1stPunch")))
				{
					iLocal_317 = 1;
				}
			}
			if (!iLocal_318)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(func_67(), MISC::GET_HASH_KEY("2ndPunch")))
				{
					PED::APPLY_PED_DAMAGE_PACK(func_67(), "SCR_Finale_Michael_Face", 0f, 1f);
					iLocal_318 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2686.664f, 1578.0531f, 23.6635f, 39.7643f, -17.7609f, -90.867f, 22.6486f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_244, true);
				CAM::SHAKE_CAM(iLocal_244, "HAND_SHAKE", 0.8f);
				func_60(0, 2726.2207f, 1579.3988f, 91.7594f, 1, 0, 1, 1, 3000, 0, 1);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MAKE_CHOICE"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_MAKE_CHOICE");
				}
				iLocal_300 = 1;
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				func_59();
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_1582++;
			}
			break;
		case 4:
			INTERIOR::ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(iLocal_320);
			if (iLocal_308 == 0)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
				iLocal_263 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), iLocal_263, "missfinale_b_ig_5", "hold_michael_loop_fra", 1000f, -8f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_58(), false, false);
				TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_263, "missfinale_b_ig_5", "hold_michael_loop_mic", 1000f, -8f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_67(), false, false);
				iLocal_308 = 1;
			}
			if (iLocal_305 == 0)
			{
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REQUEST_CUTSCENE("fin_b_ext", 8);
					iLocal_305 = 1;
				}
			}
			func_57();
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 1f)
			{
				iLocal_263 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), iLocal_263, "missfinale_b_ig_5", "hold_michael_loop_fra", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_263, "missfinale_b_ig_5", "hold_michael_loop_mic", 1000f, -8f, 0, 0, 1000f, 0);
			}
			if (iLocal_305 == 1 && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (!__LIB_0__::func_1("FIN2_DROP"))
				{
					__LIB_0__::func_190("FIN2_DROP");
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/) || (iLocal_310 == 1 && !__LIB_0__::func_75()))
				{
					__LIB_0__::func_429();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					func_61(5);
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHOOSE");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 4);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_KILL_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("FIN_2_KILL_MICHAEL");
					}
					iLocal_264 = 4;
					iLocal_1582++;
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 225 /*INPUT_SCRIPT_RRIGHT*/))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					__LIB_0__::func_429();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("fin_b_ext", 510, 8);
					iLocal_263 = PED::CREATE_SYNCHRONIZED_SCENE(2727.982f, 1576.869f, 65.25f, 0f, 0f, 179.99f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_58(), iLocal_263, "missfinale_b_ig_5", "hold_michael_headbut_fra", 1000f, -1.5f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_263, "missfinale_b_ig_5", "hold_michael_headbut_mic", 1000f, -8f, 0, 0, 1000f, 0);
					CAM::STOP_CAM_POINTING(iLocal_244);
					CAM::DETACH_CAM(iLocal_244);
					CAM::SET_CAM_PARAMS(iLocal_244, 2725.6858f, 1583.9159f, 67.5568f, -11.1217f, 2.3208f, -160.0679f, 17.5411f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_244, 2725.2576f, 1583.757f, 67.5387f, -11.1217f, 2.3208f, -159.0268f, 17.5411f, 6000, 1, 1, 2);
					func_61(5);
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHOOSE");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_SAVE_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("FIN_2_SAVE_MICHAEL");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 4);
					__LIB_0__::func_630(857);
					iLocal_264 = 4;
					iLocal_1582 = 401;
				}
			}
			if (iLocal_310 == 0)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
						__LIB_0__::func_222(&uLocal_53, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, 1);
						if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_HOLD", 7, 0, 0, 0))
						{
							iLocal_310 = 1;
						}
					}
				}
			}
			break;
		case 401:
			CAM::STOP_CAM_POINTING(iLocal_244);
			CAM::DETACH_CAM(iLocal_244);
			if (iLocal_312 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 0.257f)
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0, 0);
					iLocal_312 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 0.683f)
			{
				CAM::SET_CAM_PARAMS(iLocal_244, 2727.4436f, 1574.4738f, 67.0238f, -12.9643f, 2.3208f, -6.261f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_244, 2727.6797f, 1574.8011f, 67.5812f, -28.1126f, 2.3208f, 3.7272f, 45f, 1400, 1, 1, 2);
				iLocal_1582 = 402;
			}
			break;
		case 402:
			if (iLocal_313 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 0.704f)
				{
					AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0, 0);
					iLocal_313 = 1;
				}
			}
			if (iLocal_314 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 0.825f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_67()))
					{
						if (!PED::IS_PED_INJURED(func_67()))
						{
							AUDIO::PLAY_PAIN(func_67(), 22, 0, 0);
							iLocal_314 = 1;
						}
					}
				}
			}
			if (iLocal_315 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 0.885f)
				{
					PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Franklin_finb", 0f, 1f);
					iLocal_315 = 1;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_263) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_263) >= 1f)
			{
				iLocal_1582 = 5;
			}
			break;
		case 5:
			iLocal_309 = 0;
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_67(), "Michael", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 1);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_322))
			{
				iLocal_322 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
				CAM::SET_CAM_PARAMS(iLocal_322, 2689.5496f, 1549.861f, 29.784725f, 8.000013f, -6E-06f, 177.99998f, 40f, 0, 1, 1, 2);
			}
			HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
			CUTSCENE::START_CUTSCENE(0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_319 = 0;
			iLocal_1582++;
			break;
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_319 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 8200)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
						iLocal_319 = 1;
					}
				}
				if (iLocal_309 == 0)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(func_67(), MISC::GET_HASH_KEY("Michael_Fucked")))
					{
						PED::APPLY_PED_DAMAGE_PACK(func_67(), "SCR_Finale_Michael", 0f, 1f);
						iLocal_309 = 1;
					}
				}
				if (iLocal_316 == 0)
				{
					if (iLocal_315 == 1)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > 7500)
						{
							PED::APPLY_PED_DAMAGE_PACK(PLAYER::PLAYER_PED_ID(), "SCR_Franklin_finb2", 0f, 1f);
							iLocal_316 = 1;
						}
					}
				}
				if (iLocal_306 == 0)
				{
					CAM::SET_CAM_ACTIVE(iLocal_322, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_306 = 1;
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 46000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 2689.5f, 1383f, 23.9f, 1f, -1, 40000f, 0.5f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				}
				if (Global_96884 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 56376)
					{
						AUDIO::PLAY_END_CREDITS_MUSIC(true);
						AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
						AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
						AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
						AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "END_CREDITS_KILL_MICHAEL", true);
						Global_96884 = 1;
					}
				}
				if (iLocal_311 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 63352)
					{
						MISC::SET_CREDITS_ACTIVE(true);
						MISC::SET_CREDITS_FADE_OUT_WITH_SCREEN(false);
						AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
						__LIB_16__::func_874(5, 0);
						iLocal_311 = 1;
					}
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				iLocal_1582++;
			}
			break;
		case 7:
			CAM::SHAKE_CAM(iLocal_322, "HAND_SHAKE", 0.1f);
			SYSTEM::SETTIMERA(0);
			iLocal_1582++;
			break;
		case 8:
			if (SYSTEM::TIMERA() > 45000)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(5000);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_3();
				}
			}
			break;
	}
	HUD::DISPLAY_AMMO_THIS_FRAME(false);
}

void func_57()//Position - 0x1C46
{
	switch (iLocal_264)
	{
		case 0:
			iLocal_288 = MISC::GET_GAME_TIMER();
			iLocal_264 = 2;
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 2500)
			{
				CAM::SET_CAM_PARAMS(iLocal_244, 2686.664f, 1578.0531f, 23.6635f, 39.7643f, -17.7609f, -90.867f, 22.6486f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_244, "HAND_SHAKE", 0.8f);
				iLocal_288 = MISC::GET_GAME_TIMER();
				iLocal_264++;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 3500)
			{
				CAM::SET_CAM_PARAMS(iLocal_244, 2726.6614f, 1577.7256f, 65.221f, 23.2568f, 7.2233f, -107.1534f, 68.8743f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_244, 2726.7603f, 1578.2632f, 65.233f, 23.2568f, 7.2233f, -107.1534f, 68.8743f, 5000, 0, 0, 2);
				iLocal_288 = MISC::GET_GAME_TIMER();
				iLocal_264++;
			}
			break;
		case 3:
			iLocal_264++;
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 6000)
			{
				CAM::STOP_CAM_POINTING(iLocal_244);
				CAM::DETACH_CAM(iLocal_244);
				CAM::SET_CAM_PARAMS(iLocal_244, 2726.6204f, 1575.273f, 67.2784f, -27.9599f, 7.2233f, -28.8742f, 45f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_244, 2726.952f, 1575.1512f, 67.3749f, -27.9599f, 7.2233f, -11.0954f, 45f, 5000, 0, 0, 2);
				iLocal_288 = MISC::GET_GAME_TIMER();
				iLocal_264++;
			}
			break;
		case 5:
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 6000)
			{
				iLocal_264 = 1;
			}
			break;
	}
}

int func_58()//Position - 0x1E0F
{
	return Local_51[0 /*5*/];
}

void func_59()//Position - 0x1E1C
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_1589 == 0)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("FINALE B CHOICE");
			iLocal_1589 = 1;
		}
	}
}

void func_60(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x1E3F
{
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam7);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::RENDER_SCRIPT_CAMS(bParam2, bParam3, iParam6, true, false, 0);
	if (bParam4)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	if (bParam5)
	{
		FIRE::STOP_FIRE_IN_RANGE(Param1, 200f);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
	}
	if (bParam8)
	{
		__LIB_0__::func_366(0);
	}
}

void func_61(int iParam0)//Position - 0x1EBC
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_IN_CAR") && iParam0 != 1)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_IN_CAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM") && iParam0 != 2)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE") && iParam0 != 3)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT") && iParam0 != 4)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES") && iParam0 != 5)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_CLIMBS_LADDER") && iParam0 != 6)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_CLIMBS_LADDER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER") && iParam0 != 7)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MAKE_CHOICE") && iParam0 != 8)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_MAKE_CHOICE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_SAVE_MICHAEL") && iParam0 != 9)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_SAVE_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_KILL_MICHAEL") && iParam0 != 10)
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_KILL_MICHAEL");
	}
}

int func_67()//Position - 0x214D
{
	return Local_51[1 /*5*/];
}

void func_70(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x218D
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
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_205[7])
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
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_71(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_71(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2303
{
	func_72(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_72(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x231F
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_0__::func_683();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_572(&(uParam0->f_2884), 0);
		__LIB_0__::func_780(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_26(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_0__::func_683())
		{
			__LIB_14__::func_529(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		uParam0->f_13[iVar1] = Global_60328_SPN_TOTAL_CASH[iVar1];
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
		__LIB_14__::func_591(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_165()//Position - 0xB14E
{
	switch (iLocal_1582)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_270 = 0;
			func_70(6, "Stage 6: Ladder dodge", 0, 0, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
			WEAPON::SET_PED_INFINITE_AMMO(func_67(), true, joaat("WEAPON_PISTOL"));
			PED::SET_PED_COMBAT_MOVEMENT(func_67(), 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_67(), 2735.487f, 1578.3522f, 65.7129f, 2f, false, false);
			TASK::TASK_AIM_GUN_AT_ENTITY(func_67(), func_58(), -1, false);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			iLocal_288 = MISC::GET_GAME_TIMER();
			iLocal_295 = 0;
			iLocal_1582++;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.73f, 1576.83f, 58.73f, 4f, 4f, 10f, false, true, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_67(), true, false);
				ENTITY::SET_ENTITY_COORDS(func_67(), 2735.91f, 1577.47f, 65.54f, true, false, false, true);
				if (iLocal_295 == 7)
				{
					PED::SET_PED_ACCURACY(func_67(), 0);
					TASK::TASK_SHOOT_AT_ENTITY(func_67(), func_58(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
				}
				ENTITY::FREEZE_ENTITY_POSITION(func_67(), true);
				TASK::CLEAR_PED_TASKS(func_67());
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_CLIMB");
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				iLocal_1582++;
			}
			break;
		case 2:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.7068f, 1576.8636f, 59.4745f, 1f, 1f, 1f, false, true, 0))
			{
				func_182(7);
				iLocal_1582++;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.6948f, 1576.529f, 55.5211f, 1f, 1f, 1f, false, true, 0))
			{
				iLocal_1582 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.737f, 1576.6788f, 64.9689f, 1f, 1f, 1.2f, false, true, 0))
			{
				iLocal_1582 = 0;
				__LIB_0__::func_498(1, 858);
				func_180(7);
				iLocal_1582++;
			}
			break;
	}
	func_178();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2735.8f, 1577f, 50f, true) > 50f)
	{
		func_167(0);
	}
	if (iLocal_270 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2735.8f, 1577f, 50f, true) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("fin_B_MCS_2", 8);
			iLocal_270 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2735.8f, 1577f, 50f, true) > 100f)
	{
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_270 = 0;
	}
	if (iLocal_1582 >= 1 && iLocal_1582 < 4)
	{
		if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(func_67(), false, false);
			ENTITY::FREEZE_ENTITY_POSITION(func_67(), false);
			if (!__LIB_0__::func_798(func_67(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2729.568f, 1579.2888f, 65.5428f, 2f, 20000, 0.25f, 0, 40000f);
			}
			iLocal_1582 = 1;
		}
	}
}

void func_167(int iParam0)//Position - 0xB4B7
{
	char* sVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "FIN2_FAIL1";
			break;
		case 1:
			sVar0 = "FIN2_FAIL2";
			break;
		default:
			sVar0 = "FIN2_FAILDF";
			break;
	}
	iLocal_285 = 0;
	func_169(sVar0);
	while (!__LIB_0__::func_223())
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		SYSTEM::WAIT(0);
	}
	func_780();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_169(char* sParam0)//Position - 0xB55A
{
	__LIB_0__::func_381(sParam0);
	func_170(0);
}

void func_170(int iParam0)//Position - 0xB56D
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_171(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_171(int iParam0)//Position - 0xB5B2
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_534();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_172(&(Global_113386.f_2363.f_539), iVar1);
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

void func_172(var uParam0, int iParam1)//Position - 0xB6C2
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
			if (!func_174(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_174(int iParam0, var uParam1, float fParam2)//Position - 0xB896
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
			return func_174(8, uParam1, fParam2);
			break;
		case 10:
			return func_174(8, uParam1, fParam2);
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

void func_178()//Position - 0xC373
{
	struct<3> Var0;
	struct<3> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(func_58()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.73f, 1576.83f, 58.73f, 4f, 4f, 10f, false, true, 0) && PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(func_58(), true) };
			Var1 = { 2735.8f, 1576.5f, 66.4f };
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(func_58(), "missfinale_b_ig_4", "LHUP_dodgeleft_short", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_58(), "missfinale_b_ig_4", "LHUP_dodgeleft_long", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_58(), "missfinale_b_ig_4", "LHUP_dodgeright_short", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(func_58(), "missfinale_b_ig_4", "LHUP_dodgeright_long", 3))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			else if (iLocal_295 > 1 || Var0.f_2 < 49.4f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			switch (iLocal_295)
			{
				case 0:
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.783f, 1576.858f, 51.27797f, 0.5f, 0.5f, 3f, false, true, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2736.0054f, 1576.7566f, 52.01969f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2736.0054f, 1576.7566f, 52.01969f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_294) > 1000)
					{
						TASK::TASK_PLAY_ANIM(func_58(), "missfinale_b_ig_4", "LHUP_dodgeleft_short", 8f, -8f, -1, 32, 0f, false, false, false);
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2735.852f, 1576.798f, 52.27501f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2735.852f, 1576.798f, 52.27501f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 2:
					if (Var0.f_2 >= 56.5f)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2736.0422f, 1576.745f, 58.29689f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2736.0422f, 1576.745f, 58.29689f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 3:
					if ((MISC::GET_GAME_TIMER() - iLocal_294) > 450)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2735.0188f, 1576.118f, 57.91095f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2735.0188f, 1576.118f, 57.91095f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 4:
					if (Var0.f_2 >= 59f)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2734.81f, 1575.69f, 60.61f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2734.81f, 1575.69f, 60.61f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_294) > 400)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2736.03f, 1576.75f, 60.58f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2736.03f, 1576.75f, 60.58f, false);
						iLocal_294 = MISC::GET_GAME_TIMER();
						iLocal_295++;
					}
					break;
				case 6:
					if ((MISC::GET_GAME_TIMER() - iLocal_294) > 400)
					{
						MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var1, 2736.51f, 1576.33f, 49.54f, 10, true, joaat("WEAPON_HEAVYSNIPER"), 0, true, true, -1f);
						PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2736.51f, 1576.33f, 49.54f, false);
						if (__LIB_16__::func_903(func_67()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_67(), false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(func_67(), 2729.18f, 1578.21f, 65.54f, func_58(), 3f, true, 2f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						}
						iLocal_295++;
					}
					break;
				case 7:
					if (Var0.f_2 >= 59f)
					{
						if (__LIB_16__::func_903(func_67()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(func_67(), false);
							if (!__LIB_0__::func_798(func_67(), joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY"), 1))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(func_67(), 2729.18f, 1578.21f, 65.54f, func_58(), 3f, true, 2f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							}
						}
					}
					break;
				}
			}
	}
}

int func_180(int iParam0)//Position - 0xC86E
{
	if (iLocal_1580 == 0)
	{
		iLocal_1584 = iParam0;
		iLocal_1580 = 1;
		return 1;
	}
	return 0;
}

void func_182(int iParam0)//Position - 0xC928
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			__LIB_16__::func_852(&uLocal_323, joaat("freight"));
			__LIB_16__::func_852(&uLocal_323, joaat("tankercar"));
			__LIB_16__::func_853(&uLocal_323, 1, "FIN2");
			break;
		case 2:
			__LIB_16__::func_859(&uLocal_323, "fin2_mike1");
			__LIB_16__::func_857(&uLocal_323, "missfinale_b_ig_1");
			break;
		case 3:
			__LIB_16__::func_857(&uLocal_323, "missfinale_b_ig_2");
			break;
		case 4:
			break;
		case 5:
			__LIB_16__::func_857(&uLocal_323, "missfinale_b_ig_3");
			break;
		case 6:
			__LIB_16__::func_857(&uLocal_323, "missfinale_b_ig_4");
			break;
		case 7:
			__LIB_16__::func_857(&uLocal_323, "missfinale_b_ig_5");
			break;
		case 8:
			break;
	}
}

void func_187()//Position - 0xCD20
{
	switch (iLocal_1582)
	{
		case 0:
			iLocal_298 = 0;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			SYSTEM::SETTIMERA(0);
			if (!HUD::DOES_BLIP_EXIST(iLocal_243))
			{
				iLocal_243 = __LIB_0__::func_488(2741.32f, 1523.05f, 46.51f, 0);
			}
			if (iLocal_297 == 0)
			{
				__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
				iLocal_297 = 1;
			}
			func_70(5, "Stage 5: shoot out", 0, 0, 0, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			iLocal_1582++;
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(func_58(), 2729.504f, 1530.7422f, 39.3167f, 2f, 2f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2738.485f, 1532.3734f, 39.7673f, 2f, 2f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2755.4f, 1531f, 39.8887f, 7f, 7f, 4f, false, true, 0))
			{
				if (func_196(2740.5945f, 1522.9148f, 44.5066f, 276.0896f))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
					TASK::CLEAR_PED_TASKS(func_67());
					if (HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						HUD::REMOVE_BLIP(&iLocal_243);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
					{
						Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
					}
					WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
					TASK::CLEAR_PED_TASKS(func_67());
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					ENTITY::SET_ENTITY_VISIBLE(func_67(), true, false);
					iLocal_288 = MISC::GET_GAME_TIMER();
					iLocal_1582++;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2741.32f, 1523.05f, 45.25f, 1.5f, 1.5f, 1f, false, true, 0))
			{
				if (func_196(2736.41f, 1537.38f, 49.6966f, 276.0896f))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
					if (HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						HUD::REMOVE_BLIP(&iLocal_243);
					}
					TASK::CLEAR_PED_TASKS(func_67());
					if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
					{
						Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 23, false);
					WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
					TASK::CLEAR_PED_TASKS(func_67());
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2733.0586f, 1528.9579f, 49.6923f, func_58(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					iLocal_288 = MISC::GET_GAME_TIMER();
					iLocal_1582 = 301;
				}
			}
			break;
		case 2:
			if (((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2741.1575f, 1523.1213f, 44.4857f, 2f, 2f, 2f, false, true, 0)) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2741.1575f, 1523.1213f, 44.4857f, 2f, 2f, 2f, false, true, 0))) || (MISC::GET_GAME_TIMER() - iLocal_288) > 6000) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 9.2f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2738.9702f, 1526.1112f, 47.15614f, 3f, -1, 0.5f, 0, 40000f);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2734.7444f, 1527.0073f, 47.15614f, func_58(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				iLocal_288 = MISC::GET_GAME_TIMER();
				iLocal_1582++;
			}
			break;
		case 3:
			if ((((((ENTITY::IS_ENTITY_AT_COORD(func_58(), 2741.3936f, 1523.6068f, 45.5072f, 1.25f, 1.25f, 2f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_288) > 12500) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.8066f, 1526.9257f, 47.1349f, 2f, 2f, 2f, false, true, 0))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.8066f, 1526.9257f, 47.1349f, 2f, 2f, 2f, false, true, 0))) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 11f && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.8066f, 1526.9257f, 47.1349f, 2f, 2f, 2f, false, true, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true)) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2755.3f, 1556.6f, 42.3f, 4f, 4f, 4f, false, true, 0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				TASK::CLEAR_PED_TASKS(func_67());
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2738.3992f, 1545.0612f, 47.1352f, 3f, -1, 0.5f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				iLocal_1582++;
			}
			break;
		case 301:
			if (((((ENTITY::IS_ENTITY_AT_COORD(func_58(), 2744.23f, 1523.03f, 46.08f, 1.25f, 1.25f, 2f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_288) > 12500) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.0586f, 1528.9579f, 49.6923f, 2f, 2f, 2f, false, true, 0))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67()) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.0586f, 1528.9579f, 49.6923f, 2f, 2f, 2f, false, true, 0))) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 11f && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2733.0586f, 1528.9579f, 49.6923f, 2f, 2f, 2f, false, true, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				TASK::CLEAR_PED_TASKS(func_67());
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2740.29f, 1544.7f, 49.7f, 3f, -1, 0.5f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				iLocal_1582 = 4;
			}
			break;
		case 4:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 10f && !ENTITY::IS_ENTITY_ON_SCREEN(func_67()))
			{
				HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2735.8027f, 1535.9937f, 48.3381f, 0);
				}
				TASK::CLEAR_PED_TASKS(func_67());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
				HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iLocal_243, true);
				ENTITY::SET_ENTITY_COORDS(func_67(), 2750.81f, 1579.74f, 49.69f, true, false, false, true);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				iLocal_1582++;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2736.12f, 1537.14f, 48.69f, 2f, 2f, 6f, false, true, 0))
			{
				HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2735.8027f, 1535.9937f, 48.3381f, 0);
				}
				TASK::CLEAR_PED_TASKS(func_67());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
				HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(iLocal_243, true);
				ENTITY::SET_ENTITY_COORDS(func_67(), 2750.81f, 1579.74f, 49.69f, true, false, false, true);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				iLocal_1582++;
			}
			break;
		case 5:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if ((ENTITY::IS_ENTITY_AT_COORD(func_58(), 2734.4053f, 1529.7186f, 46.3205f, 3f, 3f, 20f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2757.7056f, 1539.8588f, 44.8806f, 3f, 3f, 20f, false, true, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 20f)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
				{
					Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::REMOVE_BLIP(&iLocal_243);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2741.55f, 1574.16f, 49.7f, func_58(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				func_182(6);
				iLocal_288 = MISC::GET_GAME_TIMER();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				iLocal_1582++;
			}
			break;
		case 6:
			if (((((MISC::GET_GAME_TIMER() - iLocal_288) > 10000 || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67())) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 18f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2735.5762f, 1576.076f, 49.5361f, 3f, -1, 0.25f, 0, 40000f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_67(), 3f);
				iLocal_1582++;
			}
			break;
		case 7:
			if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2735.7717f, 1576.932f, 51.6f, 1.5f, 1.5f, 2f, false, true, 0))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2738.0515f, 1574.1177f, 51.0774f, -7.4845f, 0.9834f, 28.0021f, 67.1294f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_244, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SHAKE_CAM(iLocal_244, "HAND_SHAKE", 0.6f);
				CAM::SET_CAM_PARAMS(iLocal_244, 2737.683f, 1574.0182f, 51.0801f, 3.5197f, -1.0329f, 37.5864f, 67.1294f, 4000, 0, 1, 2);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(func_67(), 0f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_67());
				iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(2735.436f, 1576.891f, 49.518f, 0f, 0f, -104.4f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_262, "missfinale_b_ig_3", "climb_ladder_mic", 1000f, -8f, 0, 0, 1000f, 0);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2738.9934f, 1575.4868f, 52f, 0);
					HUD::SET_BLIP_COLOUR(iLocal_243, 1);
				}
				if (HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
				}
				func_61(5);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_CLIMBS_LADDER"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_MICHAEL_CLIMBS_LADDER");
				}
				iLocal_288 = MISC::GET_GAME_TIMER();
				func_60(0, 2739.405f, 1577.1288f, 51.4361f, 1, 0, 1, 1, 3000, 0, 1);
				bLocal_272 = false;
				iLocal_1582++;
			}
			break;
		case 8:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 0.46f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_UNARMED"), true);
				iLocal_1582++;
			}
			break;
		case 9:
			if ((!bLocal_272 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_288) >= 4090)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				bLocal_272 = true;
			}
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f) || (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) && !bLocal_272))
			{
				func_192(1, 0, 0, 3000, 0, 0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				ENTITY::SET_ENTITY_HEADING(func_58(), __LIB_6__::func_252(ENTITY::GET_ENTITY_COORDS(func_58(), true), ENTITY::GET_ENTITY_COORDS(func_67(), true), 1));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(__LIB_17__::func_637(func_67()));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(__LIB_17__::func_638(func_67()), 1f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_67());
				ENTITY::SET_ENTITY_COORDS(func_67(), 2736.2512f, 1578.1141f, 65.5427f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(func_67(), 42.317f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2729.6072f, 1579.843f, 65.5428f, 2f, 20000, 0.25f, 0, 40000f);
				PED::FORCE_PED_MOTION_STATE(func_67(), joaat("MotionState_Run"), true, 1, false);
				func_61(5);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_UP_LADDER"))
				{
					AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_UP_LADDER");
				}
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				iLocal_1582++;
			}
			break;
		case 10:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2729.6072f, 1579.843f, 65.5428f, 2f, 2f, 2f, false, true, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_67(), false, false);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2738.9934f, 1575.4868f, 52f, 0);
					HUD::SET_BLIP_COLOUR(iLocal_243, 1);
				}
				iLocal_1582++;
			}
			break;
		case 11:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2745.7f, 1573.3f, 50f, true) > 110f)
			{
				func_167(0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2736.677f, 1575.8693f, 50.0683f, 4f, 4f, 2f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::REMOVE_BLIP(&iLocal_243);
				}
				iLocal_1582 = 0;
				func_180(6);
			}
			break;
	}
	if (iLocal_298 == 0)
	{
		if (iLocal_1582 > 9)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					__LIB_0__::func_222(&uLocal_53, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 1, 1);
					if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_UPST", 7, 0, 0, 0))
					{
						iLocal_298 = 1;
					}
				}
			}
		}
	}
}

void func_192(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xDCD0
{
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam4);
	if (bParam5)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(false);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
	}
	bLocal_304 = false;
}

int func_196(struct<3> Param0, float fParam1)//Position - 0xDE39
{
	if (__LIB_16__::func_903(func_67()))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 6, 4, 0, 0);
		ENTITY::SET_ENTITY_COORDS(func_67(), Param0, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(func_67(), fParam1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
		__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
		WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 23, false);
		PED::SET_PED_ACCURACY(func_67(), 10);
		PED::SET_PED_CONFIG_FLAG(func_67(), 208, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 118, false);
		PED::SET_PED_CONFIG_FLAG(func_67(), 109, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 108, true);
		TASK::SET_PED_PATH_AVOID_FIRE(func_67(), false);
		ENTITY::SET_ENTITY_PROOFS(func_67(), false, true, true, false, false, false, false, false);
		return 1;
	}
	else if (func_197(&(Local_51[1 /*5*/]), 0, Param0, fParam1, 1, 0, 0))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 6, 4, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
		__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
		WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 23, false);
		PED::SET_PED_ACCURACY(func_67(), 10);
		PED::SET_PED_CONFIG_FLAG(func_67(), 208, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 118, false);
		PED::SET_PED_CONFIG_FLAG(func_67(), 109, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 108, true);
		TASK::SET_PED_PATH_AVOID_FIRE(func_67(), false);
		ENTITY::SET_ENTITY_PROOFS(func_67(), false, true, true, false, false, false, false, false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_67(), iLocal_1590);
		return 1;
	}
	return 0;
}

int func_197(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xDFFD
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_0__::func_154(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_13__::func_823(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_511(*iParam0);
			__LIB_17__::func_27(*iParam0, 1, 0);
			__LIB_17__::func_631(*iParam0);
			__LIB_17__::func_217(*iParam0);
			func_199(*iParam0, bParam6);
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

int func_199(int iParam0, bool bParam1)//Position - 0xE115
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_17__::func_125(iVar0))
	{
		__LIB_17__::func_628(iVar0, 0);
		func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_290(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_17__::func_628(iVar0, 0);
			func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_290(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_268(iParam0, 3, 169))
					{
						func_479(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_268(iParam0, 12, 6))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 11))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 10))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 50))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 14, 59))
			{
				func_479(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_268(iParam0, 8, 22))
			{
				func_479(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_268(iParam0, 12, 14))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_268(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 4))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 3))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 14, 82))
			{
				func_479(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_268(iParam0, 8, 76))
			{
				func_479(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_268(iParam0, 12, 1))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_268(iParam0, 12, 12))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 15))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_268(iParam0, 3, 71))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_268(iParam0, 12, 7))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 12, 6))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_268(iParam0, 14, 88))
			{
				func_479(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_268(iParam0, 8, 17))
			{
				func_479(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_268(iParam0, 12, 11))
			{
				func_479(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x25663
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
				if (!func_268(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_268(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_268(iParam0, 14, iVar4))
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
			if (!func_268(iParam0, 14, uVar8[iVar7]))
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

void func_290(int iParam0, int iParam1)//Position - 0x29CE0
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_478(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_297(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_14__::func_529(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_127();
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

void func_297(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2A369
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_476(iParam0, iVar1, &iVar2, 0))
			{
				func_479(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_474(iParam0, iVar1, &iVar2))
			{
				func_479(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_472(iParam0);
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
			func_303(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_303(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_303(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_303(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2AB05
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
			func_430(iVar5, iParam1, iParam2, 1);
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
						func_430(iVar5, 10, 0, 1);
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
									func_430(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_303(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_430(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_427(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_303(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_421(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_430(iVar5, 14, uVar18[iVar1], 1);
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
							func_303(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_430(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_303(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_412(iParam0);
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
						func_303(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_303(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_411(iVar5, iVar24, iVar23, iVar25);
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
							func_303(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_303(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_303(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_303(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_303(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_303(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_303(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_421(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_411(iVar5, func_427(iParam0, 8, -1), iParam2, func_427(iParam0, 4, -1));
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
				func_346(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_411(iVar5, iParam2, iVar44, iVar45);
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
			func_421(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_411(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_303(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_303(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_411(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_411(iVar5, iVar58, iVar57, iParam2);
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
						func_303(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_411(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_303(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_323(iParam0, 9, iVar63))
						{
							func_303(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_303(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_303(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_303(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_427(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_427(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_303(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_303(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_303(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_303(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_303(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_303(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_303(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_303(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_303(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_303(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_412(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_303(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_303(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_304(iParam0, &uVar4))
		{
			func_303(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_303(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_303(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_303(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_427(iParam0, 3, -1), iVar10);
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
				func_303(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_304(int iParam0, var uParam1)//Position - 0x2C9B0
{
	int iVar0;
	int iVar1;
	*uParam1 = func_427(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_323(iParam0, iVar1, iVar0))
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

int func_323(int iParam0, int iParam1, int iParam2)//Position - 0x30C6C
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
				if (!func_323(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_323(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_323(iParam0, 14, iVar6))
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
			if (!func_323(iParam0, 14, uVar11[iVar10]))
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
						return func_323(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_323(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_346(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x37983
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
	func_347(iParam0, bParam3, 0, -1);
}

void func_347(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x379D0
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
		bVar3 = func_391(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_382(iParam0, iParam3);
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

int func_382(int iParam0, int iParam1)//Position - 0x46C6E
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
				iVar3 = func_427(iParam0, 11, -1);
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
				iVar5 = func_427(iParam0, 11, -1);
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

int func_391(int iParam0, bool bParam1)//Position - 0x470CC
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_427(iParam0, 11, -1), 0);
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
						iVar3 = func_427(iParam0, 11, -1);
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
						iVar5 = func_427(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_427(iParam0, 11, -1), 0);
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
						iVar8 = func_427(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_427(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_427(iParam0, 11, -1), 0);
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
						iVar12 = func_427(iParam0, 8, -1);
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

int func_411(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4FF5B
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
					iVar0 = func_411(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_411(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_412(int iParam0)//Position - 0x51297
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
		if (!func_417(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_417(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_417(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x51C61
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_427(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_421(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5464B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_472(iParam0))
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

int func_427(int iParam0, int iParam1, int iParam2)//Position - 0x548FA
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
				if (func_323(iParam0, iParam1, iVar0))
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
				if (func_323(iParam0, iParam1, iVar1))
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

void func_430(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x54A79
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
							func_430(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_430(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_430(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_430(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_430(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_430(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_430(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_430(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_430(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_430(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_472(int iParam0)//Position - 0x6D82C
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
				iVar1 = func_427(iParam0, 11, -1);
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
				iVar3 = func_427(iParam0, 11, -1);
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

int func_474(int iParam0, int iParam1, int iParam2)//Position - 0x6DB86
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_268(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6DC4D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_268(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_478(int iParam0, int iParam1, int iParam2)//Position - 0x6DF0D
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
				if (func_268(iParam0, iParam1, iVar0))
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
				if (func_268(iParam0, iParam1, iVar1))
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

int func_479(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6DFAE
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
										func_479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_478(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_476(iParam0, iVar10, &iVar4, 1))
							{
								func_479(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_479(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_479(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_479(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_479(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_479(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_479(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_479(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_476(iParam0, iVar10, &iVar4, 0))
		{
			func_479(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_474(iParam0, iVar10, &iVar4))
		{
			func_479(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_511(int iParam0)//Position - 0x715DF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_0__::func_43(iVar0))
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
		func_297(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_478(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_512(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_478(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_478(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_512(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_512(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_478(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_297(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_512(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7183C
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_515(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_515(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x719F7
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
								func_515(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_515(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_515(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_515(iParam0, 14, iVar5, 1, 0);
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
								func_515(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_515(iParam0, 14, 17, 1, 0);
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

void func_521()//Position - 0x72021
{
	switch (iLocal_1582)
	{
		case 0:
			iLocal_258 = __LIB_2__::func_85(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(func_67()))
			{
				ENTITY::SET_ENTITY_COORDS(func_67(), 2757.721f, 1537.8029f, 39.3377f, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(func_67(), false, false);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2766.7144f, 1564.8209f, 31.51167f, 0);
					HUD::SET_BLIP_COLOUR(iLocal_243, 1);
					if (iLocal_297 == 0)
					{
						__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
						iLocal_297 = 1;
					}
				}
				WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
				func_70(3, "Stage 3: confrontation", 0, 0, 0, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1582++;
			}
			else
			{
				func_196(2757.721f, 1537.8029f, 39.3377f, 341.1591f);
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2765.7603f, 1560.4167f, 31f, 2768.0369f, 1569.1464f, 34f, 4.5f, false, true, 0) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_67()))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::REMOVE_BLIP(&iLocal_243);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_67(), true, false);
				WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 27, false);
				if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
				{
					Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
				}
				func_182(4);
				AUDIO::TRIGGER_MUSIC_EVENT("FINB_STEPS");
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				iLocal_261 = PED::CREATE_SYNCHRONIZED_SCENE(2769.011f, 1563.39f, 31.525f, 0f, 0f, -105f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_58(), iLocal_261, "missfinale_b_ig_2", "mic_shoots_fr_f", 1000f, -1.5f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_261, "missfinale_b_ig_2", "mic_shoots_fr_m", 1000f, -1.5f, 0, 0, 1000f, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
				iLocal_244 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::SET_CAM_ACTIVE(iLocal_244, true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_244, iLocal_261, "mic_shoots_fr_cam", "missfinale_b_ig_2");
				if (STREAMING::IS_SRL_LOADED())
				{
					STREAMING::BEGIN_SRL();
				}
				else
				{
					STREAMING::END_SRL();
				}
				iLocal_1592 = MISC::GET_GAME_TIMER();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				func_60(0, 2769.011f, 1563.39f, 31.525f, 1, 0, 1, 1, 3000, 0, 1);
				iLocal_1582++;
			}
			break;
		case 2:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1592)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) >= 0.4f)
			{
				iLocal_1582++;
			}
			break;
		case 3:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1592)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) >= 0.63f)
			{
				PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2767.0718f, 1569.2606f, 31.51177f, true);
				iLocal_1582++;
			}
			break;
		case 4:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1592)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) >= 0.75f)
			{
				iLocal_1582++;
			}
			break;
		case 5:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1592)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) >= 0.82f)
			{
				PED::SET_PED_SHOOTS_AT_COORD(func_67(), 2767.7644f, 1565.5763f, 32.76665f, true);
				iLocal_1582++;
			}
			break;
		case 6:
			STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1592)));
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_261) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_261) >= 0.86f)
			{
				__LIB_16__::func_861(305.7959f);
				func_192(1, 0, 0, 3000, 0, 1);
				STREAMING::END_SRL();
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_58(), 2769.7646f, 1568.705f, 34.0682f, 2f, -1, 0.25f, 0, 40000f);
				PED::FORCE_PED_MOTION_STATE(func_58(), joaat("MotionState_Run"), true, 1, false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_258, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 27, false);
				PED::SET_PED_ACCURACY(func_67(), 15);
				if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
				{
					Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2749.0803f, 1525.3656f, 39.3373f, func_58(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				iLocal_1582++;
			}
			break;
		case 7:
			__LIB_17__::func_639(joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"));
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2769.1233f, 1566.6147f, 38.5209f, 1f, 1f, 2f, false, true, 0))
			{
				iLocal_288 = MISC::GET_GAME_TIMER();
				iLocal_1582 = 0;
				func_180(4);
			}
			break;
	}
	if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2737.177f, 1522.528f, 24.3547f, 6f, 6f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2757.5522f, 1528.3209f, 31.9641f, 3f, 3f, 2f, false, true, 0))
	{
		func_167(0);
	}
}

void func_526()//Position - 0x726FC
{
	switch (iLocal_1582)
	{
		case 0:
			func_70(4, "Stage 4: heli appears", 0, 0, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2753.3665f, 1523.5206f, 39.3162f, func_58(), 3f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::TASK_SHOOT_AT_COORD(0, 2764.5376f, 1565.0852f, 39.3267f, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
			TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
			TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_HELICOPTER_ARRIVES"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_HELICOPTER_ARRIVES");
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
			iLocal_288 = MISC::GET_GAME_TIMER();
			iLocal_1582++;
			break;
		case 1:
			if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67())) || (MISC::GET_GAME_TIMER() - iLocal_288) > 8000) || (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 26f && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2753.3665f, 1523.5206f, 39.3162f, 3f, 3f, 3f, false, true, 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2743.275f, 1525.3877f, 39.3162f, 3f, 20000, 0.3f, 0, 40000f);
				iLocal_288 = MISC::GET_GAME_TIMER();
				func_182(5);
				iLocal_1582++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2743.275f, 1525.3877f, 39.3162f, 2f, 2f, 2f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_67()))
				{
					PED::DELETE_PED(&(Local_51[1 /*5*/]));
				}
				iLocal_1582++;
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 1000)
			{
				iLocal_1582 = 0;
				func_180(5);
			}
			break;
	}
}

void func_527()//Position - 0x7291B
{
	switch (iLocal_1582)
	{
		case 0:
			iLocal_269 = 0;
			iLocal_1591 = 0;
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, true, false, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]))
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/]);
				}
				ENTITY::SET_ENTITY_INVINCIBLE(Local_50[1 /*2*/], false);
			}
			iLocal_260 = PED::CREATE_SYNCHRONIZED_SCENE(2676.3481f, 1594.8707f, 23.595f, 0f, 0f, -90f, 2);
			WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_UNARMED"), true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
			TASK::TASK_SYNCHRONIZED_SCENE(func_67(), iLocal_260, "missfinale_b_ig_1", "arrive_plant_m", 1000f, -8f, 0, 0, 1000f, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
			{
				__LIB_14__::func_670(func_58(), 2676.5068f, 1592.9039f, 31.51181f);
				TASK::TASK_LOOK_AT_ENTITY(func_58(), func_67(), -1, 2048, 2);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2685.2441f, 1634.9397f, 20f, 2685.1055f, 1598.7041f, 33f, 25f, false, true, 0))
				{
					TASK::TASK_PLAY_ANIM(func_58(), "missfinale_b_ig_1", "arrive_plant_F", 1000f, -1.5f, -1, 0, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_58(), func_67(), 5000);
				}
			}
			else
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_58(), 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_50[0 /*2*/], false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_50[0 /*2*/], false);
			}
			if (HUD::DOES_BLIP_EXIST(Local_50[1 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_50[1 /*2*/].f_1));
			}
			if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
			{
				Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
			}
			VEHICLE::SET_VEHICLE_FIXED(Local_50[1 /*2*/]);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
			__LIB_0__::func_366(0);
			iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2701.965f, 1596.563f, 32.7892f, -1.3076f, 0.0972f, 109.9187f, 32f, false, 2);
			CAM::SET_CAM_ACTIVE(iLocal_244, true);
			CAM::SHAKE_CAM(iLocal_244, "HAND_SHAKE", 0.4f);
			CAM::SET_CAM_PARAMS(iLocal_244, 2701.9434f, 1596.6038f, 33.0893f, -3.5782f, 0.0972f, 113.5868f, 32f, 12000, 1, 1, 2);
			func_60(0, 2701.965f, 1596.563f, 32.7892f, 1, 0, 1, 1, 3000, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_286 = 1;
			iLocal_288 = MISC::GET_GAME_TIMER();
			func_70(2, "Stage 2: power plant", 0, 0, 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("FINB_ARRIVE");
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
			}
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_50[1 /*2*/], 0f);
			__LIB_0__::func_499(858, 0);
			bLocal_272 = false;
			iLocal_1582++;
			break;
		case 1:
			if (iLocal_269 == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
				{
					if (iLocal_271 == 1)
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2673.8826f, 1604.6268f, 23.4956f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 239.5733f);
					}
					if (!ENTITY::IS_ENTITY_ON_SCREEN(func_58()))
					{
						__LIB_14__::func_670(func_58(), 2693f, 1594f, 31f);
						TASK::TASK_LOOK_AT_ENTITY(func_58(), func_67(), -1, 2048, 2);
						iLocal_269 = 1;
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_58(), func_67(), 0);
						TASK::TASK_LOOK_AT_ENTITY(func_58(), func_67(), -1, 2048, 2);
						iLocal_269 = 1;
					}
				}
			}
			if (((MISC::GET_GAME_TIMER() - iLocal_288) > 1500 && (MISC::GET_GAME_TIMER() - iLocal_288) < 3700) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				TASK::CLEAR_PED_TASKS(func_58());
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				func_192(1, 0, 0, 3000, 0, 0);
				func_534(2672.4133f, 1592.0929f, 29.49044f);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_260))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_260, 1f);
				}
				iLocal_1582 = 2;
			}
			if ((!bLocal_272 && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4) && (MISC::GET_GAME_TIMER() - iLocal_288) >= 3700)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				bLocal_272 = true;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 4000)
			{
				func_192(1, 0, 0, 3000, 0, 0);
				func_534(2703.0198f, 1593.1337f, 31.51181f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(15f, 1f);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_1582 = 2;
			}
			break;
		case 2:
			__LIB_17__::func_639(joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"));
			__LIB_17__::func_639(joaat("SCRIPT_TASK_PLAY_ANIM"));
			__LIB_17__::func_639(joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"));
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_MICHAEL_ESCAPE_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FIN_2_MICHAEL_ESCAPE_SCENE");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_ON_FOOT"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_ON_FOOT");
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_260) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_260) >= 1f)
			{
				func_182(3);
				if ((__LIB_0__::func_798(func_58(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE"), 1) || __LIB_0__::func_798(func_58(), joaat("SCRIPT_TASK_PLAY_ANIM"), 1)) || __LIB_0__::func_798(func_58(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1))
				{
					TASK::CLEAR_PED_TASKS(func_58());
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2764.676f, 1559.7496f, 31.4983f, 3f, 20000, 0.25f, 0, 40000f);
				PED::FORCE_PED_MOTION_STATE(func_67(), joaat("MotionState_Run"), false, 1, false);
				iLocal_1582++;
			}
			break;
		case 3:
			if (__LIB_16__::func_903(func_67()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2764.676f, 1559.7496f, 31.4983f, 4f, 4f, 2f, false, true, 0) && (!ENTITY::IS_ENTITY_ON_SCREEN(func_67()) || ENTITY::IS_ENTITY_OCCLUDED(func_67())))
				{
					if (HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
					}
					__LIB_0__::func_0(&(Local_51[1 /*5*/]));
					if (!HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						iLocal_243 = __LIB_0__::func_488(2766.9392f, 1565.0616f, 31.4983f, 0);
					}
				}
			}
			else if (iLocal_297 == 0 && __LIB_16__::func_854())
			{
				__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
				iLocal_297 = 1;
			}
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2704.0027f, 1593.4563f, 31.9187f, 3f, 3f, 3f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_67()))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
					{
						Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						HUD::REMOVE_BLIP(&iLocal_243);
					}
					ENTITY::SET_ENTITY_COORDS(func_67(), 2768.5076f, 1575.3491f, 31.4983f, true, false, false, true);
					ENTITY::SET_ENTITY_VISIBLE(func_67(), true, false);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
					WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2769.3657f, 1578.5349f, 31.51167f, func_58(), 3f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
					TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
					iLocal_288 = MISC::GET_GAME_TIMER();
					__LIB_0__::func_124(&(Local_51[2 /*5*/]), 1, 0, 1);
					iLocal_1582++;
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				}
				else
				{
					func_196(2768.5076f, 1575.3491f, 31.4983f, 0f);
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2765.7603f, 1560.4167f, 31f, 2768.0369f, 1569.1464f, 34f, 4.5f, false, true, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_67()))
				{
					ENTITY::SET_ENTITY_COORDS(func_67(), 2757.721f, 1537.8029f, 39.3377f, true, false, false, true);
					ENTITY::SET_ENTITY_VISIBLE(func_67(), false, false);
					if (!HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						iLocal_243 = __LIB_0__::func_488(2766.7144f, 1564.8209f, 31.51167f, 0);
						if (iLocal_297 == 0)
						{
							__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
							iLocal_297 = 1;
						}
					}
					WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
					func_70(3, "Stage 3: confrontation", 0, 0, 0, 1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					func_180(3);
					iLocal_1582 = 0;
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				}
				else
				{
					func_196(2757.721f, 1537.8029f, 39.3377f, 341.1591f);
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				}
			}
			break;
		case 4:
			if (__LIB_16__::func_903(func_67()))
			{
				if ((((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67()) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67())) || (MISC::GET_GAME_TIMER() - iLocal_288) > 6000) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 30f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_67(), 2767.4143f, 1572.8604f, 31.4983f, 3f, 20000, 0.25f, 0, 40000f);
					iLocal_288 = MISC::GET_GAME_TIMER();
					iLocal_1582++;
				}
			}
			else
			{
				iLocal_1582++;
			}
			break;
		case 5:
			if (__LIB_16__::func_903(func_67()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2767.4143f, 1572.8604f, 31.4983f, 3f, 3f, 5f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
					}
					__LIB_0__::func_0(&(Local_51[1 /*5*/]));
					iLocal_243 = __LIB_0__::func_488(2766.9392f, 1565.0616f, 31.4983f, 0);
					if (iLocal_297 == 0)
					{
						__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
						iLocal_297 = 1;
					}
					iLocal_1582++;
				}
			}
			else
			{
				iLocal_1582++;
			}
			break;
		case 6:
			func_180(3);
			iLocal_1582 = 0;
			break;
	}
	if (__LIB_16__::func_903(func_67()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(func_67(), 2767.5f, 1574.2f, 31.8f, 2.5f, 2.5f, 2.5f, false, true, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_67(), true), ENTITY::GET_ENTITY_COORDS(func_58(), true), true) < 25f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_51[1 /*5*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_51[1 /*5*/].f_1));
				}
				__LIB_0__::func_0(&(Local_51[1 /*5*/]));
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_0__::func_488(2766.9392f, 1565.0616f, 31.4983f, 0);
					__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2765.9236f, 1565.1417f, 31.51252f, 30f, 30f, 30f, false, true, 0))
	{
		if (!iLocal_1591)
		{
			STREAMING::PREFETCH_SRL("finbconf");
			STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
			iLocal_1591 = 1;
		}
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(func_58(), 2765.9236f, 1565.1417f, 31.51252f, 40f, 40f, 40f, false, true, 0))
	{
		if (iLocal_1591)
		{
			STREAMING::END_SRL();
			iLocal_1591 = 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2765.7603f, 1560.4167f, 31f, 2768.0369f, 1569.1464f, 34f, 4.5f, false, true, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_67()))
		{
			ENTITY::SET_ENTITY_COORDS(func_67(), 2757.721f, 1537.8029f, 39.3377f, true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(func_67(), false, false);
			if (!HUD::DOES_BLIP_EXIST(iLocal_243))
			{
				iLocal_243 = __LIB_0__::func_488(2766.7144f, 1564.8209f, 31.51167f, 0);
				HUD::SET_BLIP_COLOUR(iLocal_243, 1);
				if (iLocal_297 == 0)
				{
					__LIB_0__::func_229("FIN2_SPOT", 7500, 1);
					iLocal_297 = 1;
				}
			}
			WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
			WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
			func_70(3, "Stage 3: confrontation", 0, 0, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_180(3);
			iLocal_1582 = 0;
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		else
		{
			func_196(2757.721f, 1537.8029f, 39.3377f, 341.1591f);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2759.5435f, 1604.3033f, 22f, 2731.9602f, 1500.8577f, 60f, 70f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2665.0168f, 1593.2527f, 22f, 2727.687f, 1593.7881f, 40f, 50f, false, true, 0))
		{
			if (__LIB_0__::func_213(Local_50[0 /*2*/], 1093140480, 1, 1056964608, 0, 1, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_58(), 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_50[0 /*2*/], false);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2716.3f, 1592.9f, 32f, true) > 100f)
	{
		func_167(0);
	}
}

void func_534(struct<3> Param0)//Position - 0x738A6
{
	float fVar0;
	fVar0 = __LIB_0__::func_932(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((fVar0 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
}

void func_538()//Position - 0x73993
{
	struct<3> Var0;
	switch (iLocal_1582)
	{
		case 0:
			func_70(1, "Stage 1: chase", 0, 0, 0, 1);
			VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(100f);
			iLocal_271 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			AUDIO::TRIGGER_MUSIC_EVENT("FINB_CHASE");
			if ((__LIB_0__::func_323() && Global_100478 == 1) && iLocal_287)
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 1, "FIN2", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 8000f);
				}
				VEHICLE::DELETE_ALL_TRAINS();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_50[2 /*2*/]))
				{
					Local_50[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_49, true, 0, 0);
				}
				fLocal_289 = 0.38f;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_50[0 /*2*/], 5f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_50[0 /*2*/], 20f);
				iLocal_287 = 0;
			}
			else
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 1, "FIN2", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 6000f);
				}
				VEHICLE::DELETE_ALL_TRAINS();
				if (!ENTITY::DOES_ENTITY_EXIST(Local_50[2 /*2*/]))
				{
					Local_50[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_49, true, 0, 0);
				}
				fLocal_289 = 0.3665f;
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_50[1 /*2*/], true);
			iLocal_288 = MISC::GET_GAME_TIMER();
			MISC::CLEAR_AREA_OF_PROJECTILES(2384.3772f, 2556.3708f, 46.1006f, 4000f, 0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_CHASE_IN_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("FIN_2_CHASE_IN_CAR");
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_50[1 /*2*/], "FIN_2_MICHAELS_CAR", 0f);
			iLocal_1582++;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
				{
					__LIB_16__::func_861(182.0164f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::DO_SCREEN_FADE_IN(800);
				__LIB_0__::func_229("FIN2_CHASE", 7500, 1);
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_288) > 1500 && PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
			{
				AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(func_58(), false), true);
				func_70(1, "Stage 1: chase", 0, 0, 0, 1);
				iLocal_265 = 0;
				iLocal_266 = 0;
				iLocal_1582++;
			}
			break;
		case 2:
			if (!iLocal_266)
			{
				if (__LIB_0__::func_724(func_67(), 2661.483f, 1639.2833f, 23.5914f, 1) < 200f)
				{
					func_182(2);
					__LIB_16__::func_852(&uLocal_323, joaat("S_M_M_Security_01"));
					ENTITY::CREATE_FORCED_OBJECT(2665.6328f, 1638.5288f, 24.3911f, 5f, joaat("prop_sec_barier_02b"), true);
					iLocal_265 = 1;
					iLocal_266 = 1;
				}
			}
			else if (iLocal_265 && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
			{
				Local_51[2 /*5*/] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 2661.483f, 1639.2833f, 23.5914f, 85.5309f, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_51[2 /*5*/], true);
				ENTITY::SET_ENTITY_HEALTH(Local_51[2 /*5*/], 101, 0);
				PED::SET_PED_MONEY(Local_51[2 /*5*/], 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_51[2 /*5*/], 3, 0, 0, 0);
				__LIB_16__::func_912(&uLocal_323, joaat("S_M_M_Security_01"));
				iLocal_265 = 0;
			}
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_67());
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_50[1 /*2*/], false);
				WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), 50, true, true);
				WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_245);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2676.5068f, 1592.9039f, 31.51181f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_SHOOT_AT_ENTITY(0, func_58(), -1, joaat("FIRING_PATTERN_BURST_FIRE"));
				TASK::CLOSE_SEQUENCE_TASK(iLocal_245);
				TASK::TASK_PERFORM_SEQUENCE(func_67(), iLocal_245);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_245);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(func_67());
				if (HUD::DOES_BLIP_EXIST(Local_50[1 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_50[1 /*2*/].f_1));
				}
				Local_51[1 /*5*/].f_1 = __LIB_0__::func_666(func_67(), 1, 145);
				iLocal_1582++;
			}
			break;
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2667.2f, 1639f, 24f, true) > 100f)
			{
				func_167(0);
			}
			PED::SET_PED_RESET_FLAG(func_67(), 343, true);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]) && ENTITY::IS_ENTITY_AT_COORD(func_67(), 2676.1702f, 1593.0712f, 31.5119f, 5f, 5f, 2f, false, true, 0))
			{
				if (((__LIB_0__::func_724(func_58(), 2676.5068f, 1592.9039f, 31.51181f, 1) < 35f || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), func_67())) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), func_67())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_67(), func_58(), true))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
					{
						if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("bus"))
						{
							iLocal_271 = 1;
						}
						__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(func_58(), false), 1093140480, 1, 1056964608, 0, 1, 0);
					}
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, true, false, true);
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, 1);
					__LIB_0__::func_345(&uLocal_246, 0, 0);
					MISC::SET_INSTANCE_PRIORITY_HINT(0);
					iLocal_1582 = 0;
					func_180(2);
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]) && !ENTITY::IS_ENTITY_DEAD(Local_50[1 /*2*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_50[1 /*2*/]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_50[1 /*2*/], true), 2611.379f, 1802.9258f, 25.4156f) < (50f * 50f))
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(func_58(), false))
	{
		if (__LIB_0__::func_724(func_58(), 2676.5068f, 1592.9039f, 31.51181f, 1) < 23f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2682.937f, 1557.5953f, 23.49973f, 2683.1157f, 1623.9294f, 23.49991f, 35f, false, true, 0))
		{
			if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(func_58(), false), 1093140480, 1, 1056964608, 0, 1, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(func_58(), 0, 0);
			}
		}
	}
	if ((__LIB_16__::func_903(func_58()) && __LIB_16__::func_903(func_67())) && __LIB_16__::func_903(Local_50[1 /*2*/]))
	{
		fLocal_291 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_58(), true), ENTITY::GET_ENTITY_COORDS(func_67(), true));
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_58(), true) };
		if (Var0.f_2 < 17.5f)
		{
			func_167(0);
		}
		func_571(&fLocal_290, &(Local_51[0 /*5*/]), &(Local_50[1 /*2*/]));
		VEHICLE::SET_PLAYBACK_SPEED(Local_50[1 /*2*/], fLocal_290);
		func_568();
		if (fLocal_291 > 225f)
		{
			func_167(0);
		}
	}
	__LIB_17__::func_71(&uLocal_246, Local_50[1 /*2*/], 0, 0, 1, 1, 1);
	__LIB_14__::func_655(Local_50[1 /*2*/].f_1, Local_50[1 /*2*/], 225f, 1061158912, 0);
	if (__LIB_16__::func_903(Local_51[2 /*5*/]) && __LIB_16__::func_903(Local_50[1 /*2*/]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(Local_51[2 /*5*/], Local_50[1 /*2*/], 2f, 2f, 2f, false, true, 0))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_51[2 /*5*/], 99, 0);
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("FIN_2_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FIN_2_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("FIN_2_FOCUS_CAM");
	}
	if (__LIB_16__::func_903(func_67()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(2684.2f, 1615.1f, 24f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 45f)
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			}
		}
	}
}

void func_568()//Position - 0x752E9
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_50[2 /*2*/], ENTITY::GET_ENTITY_COORDS(Local_50[1 /*2*/], true)) };
	fVar1 = ENTITY::GET_ENTITY_SPEED(Local_50[2 /*2*/]);
	if (fLocal_292 < 33500f)
	{
		if (Var0.f_1 < 1.5f)
		{
			fVar2 = (ENTITY::GET_ENTITY_SPEED(func_67()) * fLocal_289);
			if (fVar2 != 0f && fVar2 <= ENTITY::GET_ENTITY_SPEED(func_67()))
			{
				VEHICLE::SET_TRAIN_SPEED(Local_50[2 /*2*/], fVar2);
			}
		}
		else
		{
			fVar2 = ENTITY::GET_ENTITY_SPEED(Local_50[1 /*2*/]);
			if (fVar2 != 0f && fVar2 <= ENTITY::GET_ENTITY_SPEED(func_67()))
			{
				func_570(&fVar1, fVar2, 0.8f, 1);
				VEHICLE::SET_TRAIN_SPEED(Local_50[2 /*2*/], fVar1);
			}
		}
	}
	else
	{
		fVar1 = ENTITY::GET_ENTITY_SPEED(Local_50[2 /*2*/]);
		__LIB_0__::func_331(fVar1, 15f, 30f);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_50[2 /*2*/], fVar1);
	}
	fLocal_291 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(func_58(), true), ENTITY::GET_ENTITY_COORDS(func_67(), true));
}

void func_570(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x75404
{
	float fVar0;
	if (*fParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (fVar0 + (fParam2 * SYSTEM::TIMESTEP()));
		}
		if ((*fParam0 - fParam1) > fVar0)
		{
			*fParam0 = (*fParam0 - fVar0);
		}
		else if ((*fParam0 - fParam1) < -fVar0)
		{
			*fParam0 = (*fParam0 + fVar0);
		}
		else
		{
			*fParam0 = fParam1;
		}
	}
}

void func_571(var uParam0, var uParam1, var uParam2)//Position - 0x75460
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar9;
	if (__LIB_16__::func_903(*uParam1) && __LIB_16__::func_903(*uParam2))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam2, true) };
		fLocal_291 = SYSTEM::VDIST(Var0, Var1);
		fVar2 = 4f;
		fVar3 = 10f;
		fVar4 = 50f;
		fVar5 = 100f;
		fVar6 = 1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam2))
		{
			fLocal_292 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam2);
			if (fLocal_292 < 5000f)
			{
				fVar3 = 20f;
				fVar4 = 50f;
				fVar5 = 120f;
			}
			if (fLocal_292 > 5000f && fLocal_292 < 15000f)
			{
				fVar3 = 25f;
				fVar4 = 50f;
				fVar5 = 200f;
			}
			if (fLocal_292 > 15000f && fLocal_292 < 21000f)
			{
				fVar3 = 40f;
				fVar4 = 60f;
				fVar5 = 250f;
			}
			if (fLocal_292 > 21000f && fLocal_292 < 25000f)
			{
				fVar3 = 60f;
				fVar4 = 80f;
				fVar5 = 250f;
			}
			if (fLocal_292 > 25000f && fLocal_292 < 30000f)
			{
				fVar3 = 70f;
				fVar4 = 250f;
				fVar5 = 300f;
			}
			if (fLocal_292 > 30000f && fLocal_292 < 35000f)
			{
				fVar3 = 85f;
				fVar4 = 300f;
				fVar5 = 300f;
			}
			if (fLocal_292 > 35000f)
			{
				fVar3 = 115f;
				fVar4 = 350f;
				fVar5 = 350f;
			}
			fVar7 = 0f;
			Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*uParam2, Var0) };
			if (Var8.f_1 < 1f)
			{
				if (fLocal_291 > fVar4)
				{
					bVar9 = false;
					if (fLocal_291 > fVar5)
					{
						if (fLocal_291 > 200f)
						{
							bVar9 = true;
						}
						fLocal_291 = fVar5;
					}
					fVar7 = ((fLocal_291 - fVar4) / (fVar5 - fVar4));
					if (ENTITY::IS_ENTITY_ON_SCREEN(*uParam2) && !bVar9)
					{
						fVar6 = (0.7f - (0.2f * fVar7));
					}
					else
					{
						fVar6 = (0.5f - (0.3f * fVar7));
					}
				}
				else if (fLocal_291 > fVar3)
				{
					fVar7 = ((fLocal_291 - fVar3) / (fVar4 - fVar3));
					fVar6 = (1f - (0.3f * fVar7));
				}
				else
				{
					if (fLocal_291 < fVar2)
					{
						fLocal_291 = fVar2;
					}
					fVar7 = ((fVar3 - fLocal_291) / (fVar3 - fVar2));
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						fVar6 = (1f + (fVar7 * 2f));
					}
					else
					{
						fVar6 = (1f + fVar7);
					}
				}
			}
			else
			{
				if (fLocal_291 > 20f)
				{
					fLocal_291 = 20f;
				}
				fVar7 = (fLocal_291 / 20f);
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				{
					fVar6 = (2.25f + fVar7);
				}
				else
				{
					fVar6 = (1f + fVar7);
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_293) > 500)
			{
				iLocal_293 = MISC::GET_GAME_TIMER();
			}
			func_570(uParam0, fVar6, 0.06f, 1);
		}
	}
}

void func_576()//Position - 0x758E9
{
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_KillMichael", 0);
	switch (iLocal_1582)
	{
		case 0:
			iLocal_267 = 0;
			iLocal_268 = 0;
			if (!ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
			{
				if (__LIB_16__::func_327())
				{
					Local_50[0 /*2*/] = __LIB_14__::func_794();
					if (ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_50[0 /*2*/], true, false);
					}
				}
			}
			if (__LIB_0__::func_323() && !bLocal_1588)
			{
				CLOCK::SET_CLOCK_TIME(0, 0, 0);
				MISC::CLEAR_AREA(2381.4883f, 2619.8186f, 45.6327f, 200f, true, false, false, false);
				iLocal_1582 = 3;
			}
			else
			{
				func_653();
				if (bLocal_299)
				{
					iLocal_1582++;
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_15__::func_228(&Local_273, 0, 0, 2000, 1, 0, 0, 1);
				MISC::CLEAR_AREA(2381.4883f, 2619.8186f, 45.6327f, 200f, true, false, false, false);
				FIRE::STOP_FIRE_IN_RANGE(2381.4883f, 2619.8186f, 45.6327f, 200f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50[1 /*2*/], false))
					{
						func_182(1);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_50[1 /*2*/], 2);
						RECORDING::REPLAY_START_EVENT(4);
						iLocal_1582++;
					}
				}
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
				{
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_50[0 /*2*/])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Local_50[0 /*2*/]))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Local_50[0 /*2*/]))) || (VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Local_50[0 /*2*/])) && ENTITY::GET_ENTITY_MODEL(Local_50[0 /*2*/]) != joaat("bus")))
					{
						ENTITY::SET_ENTITY_COORDS(Local_50[0 /*2*/], 2382.3335f, 2610.147f, 45.5779f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_50[0 /*2*/], 187.5107f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_50[0 /*2*/], 5f);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_50[0 /*2*/], false);
						__LIB_37__::func_196(0f, 0f, 0f, 0f, 1, 1);
						iLocal_1582 = 3;
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(Local_50[0 /*2*/]));
					}
				}
				else
				{
					while (!__LIB_17__::func_644(&(Local_50[0 /*2*/]), 1, 2382.3335f, 2610.147f, 45.5779f, 187.5107f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && !MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (iLocal_267 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 16090 && CAM::IS_SCREEN_FADED_IN())
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), Local_51[1 /*5*/], false);
						iLocal_267 = 1;
					}
				}
				if (iLocal_268 == 0)
				{
					if (AUDIO::IS_PED_RINGTONE_PLAYING(Local_51[1 /*5*/]) && CUTSCENE::GET_CUTSCENE_TIME() > 19544)
					{
						AUDIO::STOP_PED_RINGTONE(Local_51[1 /*5*/]);
						iLocal_268 = 1;
					}
				}
			}
			if (!iLocal_307)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING() && CUTSCENE::GET_CUTSCENE_TIME() > 82245)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_START");
					iLocal_307 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					ENTITY::SET_ENTITY_COORDS(func_58(), 2384.4355f, 2620.9287f, 45.60714f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(func_58(), 179.01f);
				}
				PED::FORCE_PED_MOTION_STATE(func_58(), joaat("MotionState_Run"), false, 1, false);
				TASK::TASK_ENTER_VEHICLE(func_58(), Local_50[0 /*2*/], -1, -1, 2f, 1, 0);
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_300 = 1;
			}
			else
			{
				__LIB_16__::func_861(182.0164f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_INTO_VEHICLE(func_67(), Local_50[1 /*2*/], -1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_50[1 /*2*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
				__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
				iLocal_301 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 1, "FIN2", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_50[1 /*2*/], 2000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_50[1 /*2*/], true);
				iLocal_302 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_weapon", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_321))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_321, func_58());
				}
				iLocal_303 = 1;
			}
			if ((((iLocal_300 && iLocal_301) && iLocal_302) && iLocal_303) || __LIB_0__::func_323())
			{
				if (!iLocal_307)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FINB_START");
					iLocal_307 = 1;
				}
				Local_50[1 /*2*/].f_1 = __LIB_0__::func_639(Local_50[1 /*2*/], 1, 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_50[0 /*2*/], true);
				__LIB_0__::func_229("FIN2_CHASE", 7500, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				iLocal_1582 = 0;
				func_180(1);
			}
			break;
	}
}

void func_653()//Position - 0x807F9
{
	if (!bLocal_299)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("FIN_B_MCS_1_aandb", 8);
			iLocal_300 = 0;
			iLocal_301 = 0;
			iLocal_302 = 0;
			iLocal_303 = 0;
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_90())
		{
			__LIB_0__::func_532(1, 1, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*5*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_51[1 /*5*/], "MICHAEL", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_50[1 /*2*/], "Michaels_car", 0, 0, 0);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_58(), joaat("WEAPON_PISTOL"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_58(), joaat("WEAPON_PISTOL"), 25, true, true);
			}
			iLocal_321 = __LIB_17__::func_616(func_58(), joaat("WEAPON_PISTOL"), 1, 0, 0, 0, 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_321, "Franklins_weapon", 0, 0, 0);
			CUTSCENE::START_CUTSCENE(0);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(Local_51[1 /*5*/], 0);
			iLocal_307 = 0;
			bLocal_299 = true;
		}
	}
}

void func_661()//Position - 0x80D82
{
	struct<3> Var0;
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		func_666(0);
	}
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (!__LIB_16__::func_903(Local_51[iLocal_284 /*5*/]))
		{
			if (iLocal_284 != 2)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_51[iLocal_284 /*5*/]));
			}
		}
		iLocal_284++;
	}
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (!__LIB_16__::func_903(Local_50[iLocal_284 /*2*/]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_50[iLocal_284 /*2*/]));
		}
		iLocal_284++;
	}
	TASK::ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(20f);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	if (iLocal_1581 >= 2 && iLocal_285)
	{
		if (__LIB_0__::func_724(func_58(), 2727.148f, 1557.2996f, 23.50072f, 1) > 170f)
		{
			func_167(0);
		}
		else if (__LIB_0__::func_724(func_58(), 2727.148f, 1557.2996f, 23.50072f, 1) > 150f)
		{
			__LIB_0__::func_229("FIN2_LOST", 7500, 1);
		}
	}
	if (__LIB_16__::func_903(func_67()) && iLocal_1581 < 7)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_67(), true);
		PED::SET_PED_RESET_FLAG(func_67(), 390, true);
	}
	if (iLocal_286)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (iLocal_1581 > 1)
		{
			if (Var0.f_2 > 66f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 8);
			}
			else if (Var0.f_2 > 50f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 7);
			}
			else if (Var0.f_2 > 47f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 6);
			}
			else if (Var0.f_2 > 44.5f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 5);
			}
			else if (Var0.f_2 > 41.5f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 4);
			}
			else if (Var0.f_2 > 39f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 3);
			}
			else if (Var0.f_2 > 33f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 2);
			}
			else if (Var0.f_2 > 25f)
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 1);
			}
			else
			{
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePowerStationCS503"), 2795f, 1600f, 0, 0);
			}
		}
	}
	func_665();
	func_664(iLocal_1581);
	__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 859);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 856);
		__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
	}
	else
	{
		__LIB_0__::func_505(0, -1);
		__LIB_0__::func_377(0, 856);
	}
}

void func_664(int iParam0)//Position - 0x8111A
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_1583)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_58(), 2458.0767f, 2444.431f, 38f, 2452.1692f, 2471.4233f, 50f, 64f, false, true, 0))
					{
						__LIB_0__::func_222(&uLocal_53, 1, func_58(), "FRANKLIN", 0, 1);
						if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_SHOUT", 7, 0, 0, 0))
						{
							iLocal_1583++;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2611.6565f, 2000.8644f, 30.9074f, 30f, 30f, 7f, false, true, 0))
					{
						iLocal_1583++;
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2611.6565f, 2000.8644f, 30.9074f, 30f, 30f, 7f, false, true, 0))
					{
						if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_CHSE2", 7, 0, 0, 0))
						{
							iLocal_1583++;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2609.1433f, 1803.9055f, 25.49314f, 13f, 45f, 5f, false, true, 0))
					{
						iLocal_1583++;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2609.1433f, 1803.9055f, 25.49314f, 13f, 45f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_50[2 /*2*/], 2609.1433f, 1803.9055f, 25.49314f, 13f, 45f, 5f, false, true, 0))
					{
						if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_TRAIN2", 7, 0, 0, 0))
						{
							iLocal_1583++;
						}
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_1583)
			{
				case 0:
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					else
					{
						iLocal_1583++;
					}
					break;
				case 1:
					__LIB_0__::func_222(&uLocal_53, 1, func_58(), "FRANKLIN", 0, 1);
					if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_CALLS", 7, 0, 0, 0))
					{
						iLocal_1583++;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2704.0027f, 1593.4563f, 31.9187f, 2f, 2f, 2f, false, true, 0))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_325();
						}
						iLocal_1583++;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2725.5f, 1590.1f, 31.7f, true) < 60f)
					{
						if (!__LIB_0__::func_75())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
							{
								__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
							}
						}
						else
						{
							iLocal_296 = MISC::GET_GAME_TIMER();
						}
					}
					break;
				case 3:
					if (__LIB_16__::func_903(func_67()))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_COW", 7, 0, 0, 0))
							{
								iLocal_1583++;
							}
						}
					}
					break;
				case 4:
					if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 9000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_1583)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2766.9392f, 1565.0616f, 31.4983f, 3.25f, 3.25f, 2.5f, false, true, 0))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 0, 1);
						iLocal_1583++;
					}
					else if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
				case 1:
					if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_SHOOT", 7, 0, 0, 0))
					{
						iLocal_1583++;
					}
					break;
				case 2:
					if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_1583)
			{
				case 0:
					if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		case 5:
			switch (iLocal_1583)
			{
				case 0:
					if (((ENTITY::IS_ENTITY_AT_COORD(func_58(), 2729.504f, 1530.7422f, 39.3167f, 2f, 2f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2738.485f, 1532.3734f, 39.7673f, 2f, 2f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2754.6116f, 1528.1786f, 39.8887f, 7f, 7f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(func_58(), 2741.32f, 1523.05f, 45.25f, 1.5f, 1.5f, 1f, false, true, 0))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						iLocal_1583++;
					}
					else if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
				case 1:
					if (__LIB_16__::func_903(func_67()))
					{
						__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 0, 1);
						if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_CHAT", 7, 0, 0, 0))
						{
							iLocal_1583++;
						}
					}
					break;
				case 2:
					if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_1583)
			{
				case 0:
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_429();
					}
					else
					{
						iLocal_1583++;
					}
					break;
				case 1:
					if (__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_POWER", 7, 0, 0, 0))
					{
						iLocal_1583++;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_AT_COORD(func_58(), 2735.737f, 1576.6788f, 64.9689f, 1f, 1f, 1f, false, true, 0))
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_429();
						}
						iLocal_1583++;
					}
					else if (!__LIB_0__::func_75())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_296) > 8000 && __LIB_16__::func_854())
						{
							__LIB_0__::func_787(&uLocal_53, "FIN2AUD", "FIN2_AMB", 7, 0, 0, 0);
						}
					}
					else
					{
						iLocal_296 = MISC::GET_GAME_TIMER();
					}
					break;
			}
			break;
	}
}

void func_665()//Position - 0x81826
{
	if (bLocal_304)
	{
	}
}

void func_666(int iParam0)//Position - 0x81834
{
	if (iParam0 != func_67())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_67()))
		{
			if (!PED::IS_PED_INJURED(func_67()))
			{
				__LIB_17__::func_164("MICHAEL", func_67(), joaat("Player_Zero"), 2);
			}
		}
		else
		{
			func_667(0, "MICHAEL", 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		}
	}
	if (__LIB_16__::func_903(func_58()) && iParam0 != func_58())
	{
		__LIB_17__::func_164("FRANKLIN", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
}

void func_667(int iParam0, char* sParam1, int iParam2)//Position - 0x818FD
{
	struct<50> Var0;
	struct<50> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_43(iParam0))
	{
		return;
	}
	Var0 = { Global_113386.f_2363.f_539[iParam0 /*65*/] };
	Var1 = { Global_113386.f_2363.f_539[iParam0 /*65*/] };
	iVar2 = 0;
	while (iVar2 < 12)
	{
		__LIB_0__::func_778(0, iVar2, &(Var1.f_13[iVar2]), &(Var1[iVar2]), &(Var1.f_26[iVar2]), iParam2, iParam0);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 9)
	{
		__LIB_0__::func_777(0, iVar2, &(Var1.f_39[iVar2]), &(Var1.f_49[iVar2]), iParam2, iParam0);
		iVar2++;
	}
	iVar6 = __LIB_0__::func_154(iParam0);
	iVar7 = 0;
	iVar8 = 0;
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (Var1.f_13[iVar3] != Var0.f_13[iVar3] || Var1[iVar3] != Var0[iVar3])
		{
			if (__LIB_0__::func_230(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_231(iVar6, __LIB_0__::func_33(iVar3), Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Var1.f_39[iVar3] != Var0.f_39[iVar3] || Var1.f_49[iVar3] != Var0.f_49[iVar3])
		{
			if (__LIB_0__::func_230(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][iParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 2, Var1.f_59, -1) };
				Var1.f_13[2] = Var5.f_3;
				Var1[2] = Var5.f_4;
				iVar7 = 1;
			}
			if (__LIB_0__::func_231(iVar6, 14, Global_113386.f_2363.f_539.f_253[iVar3 /*4*/][iParam0], &iVar4))
			{
				Var5 = { __LIB_13__::func_798(iVar6, 1, Var1.f_62, -1) };
				Var1.f_13[1] = Var5.f_3;
				Var1[1] = Var5.f_4;
				iVar8 = 1;
			}
		}
		iVar3++;
	}
	if (iVar8 || iVar7)
	{
		iVar9 = Global_113386.f_2363.f_539.f_204[1 /*4*/][iParam0];
		iVar10 = Global_113386.f_2363.f_539.f_204[2 /*4*/][iParam0];
		iVar11 = __LIB_0__::func_24(iVar6, iVar10, iVar9);
		if (iVar11 != -99)
		{
			Var5 = { __LIB_13__::func_798(iVar6, 0, iVar11, -1) };
			Var1.f_13[0] = Var5.f_3;
			Var1[0] = Var5.f_4;
		}
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam1, iVar3, Var1.f_13[iVar3], Var1[iVar3], __LIB_0__::func_154(iParam0));
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 9)
	{
		if (Global_100166[iParam0 /*65*/].f_39[iVar3] == -1 || Global_100166[iParam0 /*65*/].f_39[iVar3] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, -1, 0, __LIB_0__::func_154(iParam0));
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam1, iVar3, Var1.f_39[iVar3], Var1.f_49[iVar3], __LIB_0__::func_154(iParam0));
		}
		iVar3++;
	}
	__LIB_17__::func_643(sParam1, iParam0);
}

void func_671()//Position - 0x82334
{
	struct<3> Var0;
	float fVar1;
	if (bLocal_1586 == 1)
	{
		if (iLocal_1580 == 0)
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
				func_180(iLocal_1587);
			}
		}
		else if (iLocal_1580 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_728();
			__LIB_16__::func_863(&uLocal_323);
			if (!__LIB_0__::func_324())
			{
				func_725(iLocal_1587, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_16__::func_910(&uLocal_323, Var0, 50f, 0);
			}
			func_182(iLocal_1587);
			while (!__LIB_17__::func_632(&uLocal_323))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1581)
			{
				case 0:
					func_719();
					break;
				case 1:
					func_717();
					break;
				case 2:
					func_716();
					break;
				case 3:
					func_715();
					break;
				case 4:
					func_714();
					break;
				case 5:
					func_713();
					break;
				case 6:
					func_712();
					break;
				case 7:
					func_677();
					break;
				case 8:
					__LIB_17__::func_641();
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_672();
			bLocal_1586 = false;
			if (!__LIB_0__::func_324())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_672()//Position - 0x82499
{
	if (__LIB_16__::func_903(func_67()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
		__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
		PED::SET_PED_ACCURACY(func_67(), 25);
	}
	__LIB_0__::func_222(&uLocal_53, 1, func_58(), "FRANKLIN", 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_58(), true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50[1 /*2*/], false))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_50[1 /*2*/], true);
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	iLocal_285 = 1;
	func_673();
}

void func_673()//Position - 0x82527
{
	if (ENTITY::DOES_ENTITY_EXIST(func_67()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(func_67(), joaat("WEAPON_PISTOL"), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_67(), joaat("WEAPON_PISTOL"), true);
		}
	}
}

void func_677()//Position - 0x8267C
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!func_678(2686.7937f, 1617.0187f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_197(&(Local_51[1 /*5*/]), 0, 2735.6265f, 1577.7052f, 65.5224f, 326.7082f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_196(2734.5884f, 1580.2417f, 65.5234f, 326.7082f);
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	iLocal_286 = 1;
	MISC::CLEAR_AREA(2738.9934f, 1575.4868f, 49.6975f, 500f, false, false, false, false);
}

int func_678(struct<3> Param0, float fParam1)//Position - 0x8275B
{
	if (__LIB_13__::func_821())
	{
		if ((((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_13__::func_791()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_13__::func_791())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_13__::func_791())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_13__::func_791())) && __LIB_13__::func_791() != joaat("bus"))
		{
			__LIB_14__::func_532();
			while (!__LIB_14__::func_531())
			{
				SYSTEM::WAIT(0);
			}
			Local_50[0 /*2*/] = __LIB_14__::func_616(Param0, fParam1);
			return 1;
		}
		else if (!__LIB_17__::func_644(&(Local_50[0 /*2*/]), 1, Param0, fParam1, 1, 1))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (!__LIB_17__::func_644(&(Local_50[0 /*2*/]), 1, Param0, fParam1, 1, 1))
	{
		return 0;
	}
	return 1;
}

void func_712()//Position - 0x83C15
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!func_678(2686.7937f, 1617.0187f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_197(&(Local_51[1 /*5*/]), 0, 2734.5884f, 1580.2417f, 65.5234f, 326.7082f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	func_196(2734.5884f, 1580.2417f, 65.5234f, 326.7082f);
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_CLIMB");
	iLocal_286 = 1;
	MISC::CLEAR_AREA(2738.9934f, 1575.4868f, 49.6975f, 500f, false, false, false, false);
}

void func_713()//Position - 0x83CFE
{
	CLOCK::SET_CLOCK_TIME(23, 0, 0);
	while (!func_678(2686.7937f, 1617.0187f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_196(2740.3176f, 1521.1514f, 44.4857f, 326.7082f))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_STEPS");
	iLocal_286 = 1;
	MISC::CLEAR_AREA(2758.2583f, 1541.8799f, 39.3167f, 500f, false, false, false, false);
	PED::FORCE_PED_MOTION_STATE(func_58(), joaat("MotionState_Sprint"), true, 1, false);
}

void func_714()//Position - 0x83DD7
{
	CLOCK::SET_CLOCK_TIME(22, 50, 0);
	while (!func_678(2686.7937f, 1617.0187f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_196(2761.163f, 1549.1521f, 39.3377f, 336.6246f))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_STEPS");
	iLocal_286 = 1;
	MISC::CLEAR_AREA(2762.2683f, 1555.8557f, 39.3163f, 500f, false, false, false, false);
	PED::FORCE_PED_MOTION_STATE(func_58(), joaat("MotionState_Sprint"), true, 1, false);
}

void func_715()//Position - 0x83EB0
{
	CLOCK::SET_CLOCK_TIME(22, 45, 0);
	while (!func_678(2686.7937f, 1617.0187f, 23.6144f, 97.9135f))
	{
		SYSTEM::WAIT(0);
	}
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_196(2752.1804f, 1561.7091f, 39.3163f, 0f))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	iLocal_286 = 1;
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_ARRIVE");
	MISC::CLEAR_AREA(2691.3738f, 1641.8214f, 24.2936f, 500f, false, false, false, false);
	PED::FORCE_PED_MOTION_STATE(func_58(), joaat("MotionState_Sprint"), true, 1, false);
}

void func_716()//Position - 0x83F85
{
	CLOCK::SET_CLOCK_TIME(22, 30, 0);
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2682.682f, 1607.4335f, 23.4947f, 66.2467f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_196(2675.8303f, 1593.1636f, 31.498f, 266.7406f))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_678(2689.9885f, 1615.6116f, 23.6365f, 146.5498f))
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_50[0 /*2*/], 0, false, false);
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_ARRIVE");
	MISC::CLEAR_AREA(2691.3738f, 1641.8214f, 24.2936f, 500f, false, false, false, false);
}

void func_717()//Position - 0x84056
{
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2378.1196f, 2612.7002f, 45.6341f, 181.5441f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_718(&(Local_51[1 /*5*/]), 0, Local_50[1 /*2*/], -1, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_678(2382.3335f, 2610.147f, 45.5779f, 187.5107f))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(func_67()))
	{
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 3, 22, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 4, 26, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(func_67(), 6, 4, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
		__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
		WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 23, false);
		PED::SET_PED_ACCURACY(func_67(), 10);
		PED::SET_PED_CONFIG_FLAG(func_67(), 208, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 118, false);
		PED::SET_PED_CONFIG_FLAG(func_67(), 109, true);
		PED::SET_PED_CONFIG_FLAG(func_67(), 108, true);
		TASK::SET_PED_PATH_AVOID_FIRE(func_67(), false);
		ENTITY::SET_ENTITY_PROOFS(func_67(), false, true, true, false, false, false, false, false);
	}
	if (__LIB_0__::func_324())
	{
		__LIB_0__::func_433(Local_50[0 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_INTO_VEHICLE(func_58(), Local_50[0 /*2*/], -1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50[0 /*2*/], false))
		{
			VEHICLE::SET_VEHICLE_LIGHTS(Local_50[0 /*2*/], 2);
			VEHICLE::SET_VEHICLE_LIGHT_MULTIPLIER(Local_50[0 /*2*/], 2f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_50[0 /*2*/], 5f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_50[0 /*2*/], true, true, false);
		}
	}
	if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
	{
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
	}
	iLocal_287 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50[1 /*2*/], false))
		{
			Local_50[1 /*2*/].f_1 = __LIB_0__::func_639(Local_50[1 /*2*/], 1, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(Local_50[1 /*2*/], 2);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_50[2 /*2*/]))
	{
		Local_50[2 /*2*/] = VEHICLE::CREATE_MISSION_TRAIN(19, Local_49, true, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_RESTART_CHASE");
	MISC::CLEAR_AREA(2387.6033f, 2551.2979f, 46.2726f, 500f, false, false, false, false);
	__LIB_0__::func_229("FIN2_CHASE", 7500, 1);
}

int func_718(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x842AC
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_0__::func_154(iParam1);
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
				__LIB_13__::func_823(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_511(*iParam0);
				__LIB_17__::func_27(*iParam0, 1, 0);
				__LIB_17__::func_631(*iParam0);
				__LIB_17__::func_217(*iParam0);
				func_199(*iParam0, bParam6);
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

void func_719()//Position - 0x8435E
{
	Local_51[0 /*5*/] = PLAYER::PLAYER_PED_ID();
	if (__LIB_0__::func_323())
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
		while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2378.1196f, 2612.7002f, 45.6341f, 181.5441f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_718(&(Local_51[1 /*5*/]), 0, Local_50[1 /*2*/], -1, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_678(2382.3335f, 2610.147f, 45.5779f, 187.5107f))
		{
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_INJURED(func_67()))
		{
			PED::SET_PED_COMPONENT_VARIATION(func_67(), 3, 22, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(func_67(), 4, 26, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(func_67(), 6, 4, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_67(), iLocal_259);
			__LIB_0__::func_222(&uLocal_53, 0, func_67(), "MICHAEL", 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_67(), true);
			WEAPON::GIVE_WEAPON_TO_PED(func_67(), joaat("WEAPON_PISTOL"), -1, true, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(func_67(), 23, false);
			PED::SET_PED_ACCURACY(func_67(), 10);
			PED::SET_PED_CONFIG_FLAG(func_67(), 208, true);
			PED::SET_PED_CONFIG_FLAG(func_67(), 118, false);
			PED::SET_PED_CONFIG_FLAG(func_67(), 109, true);
			PED::SET_PED_CONFIG_FLAG(func_67(), 108, true);
			TASK::SET_PED_PATH_AVOID_FIRE(func_67(), false);
			ENTITY::SET_ENTITY_PROOFS(func_67(), false, true, true, false, false, false, false, false);
		}
		if (__LIB_0__::func_324())
		{
			__LIB_0__::func_433(0, -1, 1);
		}
		else
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
	}
}

void func_725(int iParam0, var uParam1, var uParam2)//Position - 0x84FAF
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 2383.6033f, 2612.2979f, 46.16f };
			*uParam2 = 0f;
			break;
		case 1:
			*uParam1 = { 2383.6033f, 2612.2979f, 46.16f };
			*uParam2 = 0f;
			break;
		case 2:
			*uParam1 = { 2686.5f, 1613.42f, 23.61f };
			*uParam2 = 0f;
			break;
		case 3:
			*uParam1 = { 2745.1167f, 1584.7615f, 31.498f };
			*uParam2 = 257.6353f;
			break;
		case 4:
			*uParam1 = { 2768.7725f, 1564.327f, 36.6811f };
			*uParam2 = 340.9131f;
			break;
		case 5:
			*uParam1 = { 2758.2583f, 1541.8799f, 39.3167f };
			*uParam2 = 160.8288f;
			break;
		case 6:
			*uParam1 = { 2738.9934f, 1575.4868f, 49.6975f };
			*uParam2 = 71.989f;
			break;
		case 7:
			*uParam1 = { 2738.9934f, 1575.4868f, 49.6975f };
			*uParam2 = 71.989f;
			break;
		case 8:
			*uParam1 = { 2677.2988f, 1600.2404f, 23.4956f };
			*uParam2 = -22.33f;
			break;
	}
}

void func_728()//Position - 0x8535F
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iLocal_284 /*5*/]) && !PED::IS_PED_INJURED(Local_51[iLocal_284 /*5*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_51[iLocal_284 /*5*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_51[iLocal_284 /*5*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_51[iLocal_284 /*5*/], false), true) + Vector(0f, -2f, 0f));
			}
			if (Local_51[iLocal_284 /*5*/] != PLAYER::PLAYER_PED_ID())
			{
				__LIB_0__::func_0(&(Local_51[iLocal_284 /*5*/]));
			}
		}
		iLocal_284++;
	}
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_50[iLocal_284 /*2*/]))
		{
			if (Local_50[iLocal_284 /*2*/] != Local_50[2 /*2*/])
			{
				__LIB_8__::func_397(&(Local_50[iLocal_284 /*2*/]));
			}
			if (HUD::DOES_BLIP_EXIST(Local_50[iLocal_284 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_50[iLocal_284 /*2*/].f_1));
			}
		}
		iLocal_284++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_50[2 /*2*/]))
	{
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_50[2 /*2*/]), false);
	}
	__LIB_0__::func_123(&iLocal_321);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	func_192(1, 0, 0, 3000, 0, 0);
	bLocal_299 = false;
	iLocal_285 = 0;
	iLocal_297 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	iLocal_300 = 0;
	iLocal_301 = 0;
	iLocal_302 = 0;
	iLocal_303 = 0;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_0__::func_325();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	__LIB_0__::func_345(&uLocal_246, 0, 0);
	if (HUD::DOES_BLIP_EXIST(iLocal_243))
	{
		HUD::REMOVE_BLIP(&iLocal_243);
	}
	__LIB_13__::func_815(&iLocal_218, 1, 0);
	__LIB_16__::func_21(&iLocal_218, 0);
	iLocal_284 = 0;
	while (iLocal_284 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_52[iLocal_284 /*5*/]))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_52[iLocal_284 /*5*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_52[iLocal_284 /*5*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_52[iLocal_284 /*5*/]));
			}
		}
		iLocal_284++;
	}
}

void func_739()//Position - 0x8590B
{
	switch (iLocal_1580)
	{
		case 1:
			iLocal_1580 = 2;
			iLocal_1582 = -1;
			break;
		case 2:
			iLocal_1580 = 3;
			iLocal_1582 = 0;
			iLocal_1583 = 0;
			iLocal_1581 = iLocal_1584;
			break;
		case 3:
			iLocal_1584 = -1;
			iLocal_1580 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1585) > 1500)
			{
				iLocal_1585 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_743()//Position - 0x85B55
{
	struct<3> Var0;
	var uVar1;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (__LIB_0__::func_2(0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
		{
			while (!__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2394.1f, 2622f, 45.8f, 0f, 1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*5*/]))
		{
			while (!func_197(&(Local_51[1 /*5*/]), 0, 2398.6f, 2620.9f, 45.5f, 0f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(func_67(), iLocal_1590);
		}
	}
	__LIB_0__::func_54(0, 1);
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	MISC::ENABLE_DISPATCH_SERVICE(5, false);
	MISC::ENABLE_DISPATCH_SERVICE(3, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo2"), true);
	Local_51[0 /*5*/] = PLAYER::PLAYER_PED_ID();
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_259, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_259);
	PED::ADD_SCENARIO_BLOCKING_AREA(2644.9873f, 1340.4493f, 20f, 2839.8262f, 1728.3901f, 25f, false, true, true, true);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalB1sta");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finaBroute1A");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalbroute2");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalbround");
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("finalb1st");
	__LIB_12__::func_849(2, 1);
	__LIB_12__::func_849(0, 1);
	if (__LIB_0__::func_323())
	{
		if (__LIB_0__::func_323())
		{
			iLocal_1587 = __LIB_0__::func_344();
			if (Global_94618)
			{
				iLocal_1587++;
				if (iLocal_1587 >= 8)
				{
					iLocal_1587 = 8;
				}
			}
			if (iLocal_1587 == 0)
			{
				iLocal_1587 = 1;
			}
			bLocal_1588 = false;
		}
		if (__LIB_0__::func_323())
		{
			func_725(iLocal_1587, &Var0, &uVar1);
			__LIB_16__::func_3(Var0, uVar1, 1, 0);
		}
		bLocal_1586 = true;
	}
	else
	{
		if (__LIB_0__::func_2(0))
		{
			iLocal_1587 = 0;
		}
		bLocal_1588 = false;
		func_70(0, "Stage 0: meet", 0, 0, 0, 1);
		iLocal_1581 = 0;
		func_180(iLocal_1581);
		func_182(0);
		while (!__LIB_17__::func_632(&uLocal_323))
		{
			SYSTEM::WAIT(0);
		}
		func_719();
		func_672();
	}
	__LIB_0__::func_424(1);
	iLocal_1582 = 0;
}

void func_749()//Position - 0x85E88
{
	Local_273.f_1 = __LIB_11__::func_762();
	if (Local_273.f_2 == 0)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_283 = 0;
			CUTSCENE::REQUEST_CUTSCENE("FIN_B_MCS_1_aandb", 8);
			iLocal_300 = 0;
			iLocal_301 = 0;
			iLocal_302 = 0;
			iLocal_303 = 0;
		}
	}
	while (!__LIB_36__::func_973(25, &Local_273, 1, 0, 0, 1, 1))
	{
		if (Local_273.f_2 == 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*2*/]))
			{
				__LIB_17__::func_644(&(Local_50[1 /*2*/]), 0, 2394.1f, 2622f, 45.8f, 0f, 1, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_51[1 /*5*/]))
			{
				func_196(2398.6f, 2620.9f, 45.5f, 0f);
			}
		}
		SYSTEM::WAIT(0);
		if (Local_273.f_2 == 2 && !iLocal_283)
		{
			__LIB_0__::func_532(1, 1, 0, 0, 0, 0, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			if (__LIB_16__::func_327())
			{
				Local_50[0 /*2*/] = __LIB_14__::func_794();
				if (ENTITY::DOES_ENTITY_EXIST(Local_50[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_50[0 /*2*/], true, false);
				}
			}
			MISC::CLEAR_AREA(-116.5982f, 493.4021f, 136.6638f, 50f, true, false, false, false);
			MISC::CLEAR_AREA(2381.4883f, 2619.8186f, 45.6327f, 200f, true, false, false, false);
			iLocal_283 = 1;
		}
	}
}

void func_780()//Position - 0x88321
{
	AUDIO::TRIGGER_MUSIC_EVENT("FINB_FAIL");
	VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(0f);
	OBJECT::CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(128);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	}
	STREAMING::END_SRL();
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iLocal_284 /*5*/]) && !PED::IS_PED_INJURED(Local_51[iLocal_284 /*5*/]))
		{
			if (Local_51[iLocal_284 /*5*/] != PLAYER::PLAYER_PED_ID())
			{
				__LIB_0__::func_124(&(Local_51[iLocal_284 /*5*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_51[iLocal_284 /*5*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_51[iLocal_284 /*5*/].f_1));
			}
		}
		iLocal_284++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iLocal_284 = 0;
	while (iLocal_284 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_50[iLocal_284 /*2*/]))
		{
			__LIB_0__::func_106(&(Local_50[iLocal_284 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_50[iLocal_284 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_50[iLocal_284 /*2*/].f_1));
		}
		iLocal_284++;
	}
	__LIB_0__::func_123(&iLocal_321);
	iLocal_284 = 0;
	while (iLocal_284 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_52[iLocal_284 /*5*/]))
		{
			__LIB_0__::func_122(&(Local_52[iLocal_284 /*5*/]), 0);
		}
		iLocal_284++;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (iLocal_306 == 0)
	{
		CAM::DESTROY_ALL_CAMS(false);
		HUD::DISPLAY_RADAR(true);
		HUD::DISPLAY_HUD(true);
		func_192(1, 0, 0, 3000, 0, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	__LIB_0__::func_325();
	if (HUD::DOES_BLIP_EXIST(iLocal_243))
	{
		HUD::REMOVE_BLIP(&iLocal_243);
	}
	__LIB_0__::func_345(&uLocal_246, 0, 0);
	__LIB_13__::func_815(&iLocal_218, 1, 0);
	__LIB_16__::func_21(&iLocal_218, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	VEHICLE::SET_RANDOM_TRAINS(true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	__LIB_0__::func_54(1, 1);
	__LIB_0__::func_424(0);
	__LIB_12__::func_849(2, 0);
	__LIB_12__::func_849(0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), false);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_285 = 0;
	iLocal_297 = 0;
	iLocal_286 = 0;
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalB1sta");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finaBroute1A");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalbroute2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalbround");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("finalb1st");
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	func_781();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_781()//Position - 0x88580
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_1589 == 1)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_1589 = 0;
		}
	}
}

void func_784()//Position - 0x88611
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
				if (!func_171(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_14__::func_534();
		}
	}
}

