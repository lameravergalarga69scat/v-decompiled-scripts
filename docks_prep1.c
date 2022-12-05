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
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	char[] cLocal_51[8] = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	struct<2> Local_53[4];
	struct<10> Local_54[8];
	struct<5> Local_55[4];
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<2> Local_57[9];
	struct<6> Local_58 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_59 = 0;
	var uLocal_60 = 1092616192;
	var uLocal_61 = 1101004800;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 3;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
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
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
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
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	struct<3> Local_276 = { 0, 0, 0 } ;
	float fLocal_277 = 0f;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	int iLocal_284 = 0;
	struct<3> Local_285 = { 0, 0, 0 } ;
	float fLocal_286 = 0f;
	struct<3> Local_287 = { 0, 0, 0 } ;
	struct<3> Local_288 = { 0, 0, 0 } ;
	struct<3> Local_289 = { 0, 0, 0 } ;
	int iLocal_290 = 0;
	struct<3> Local_291 = { 0, 0, 0 } ;
	float fLocal_292 = 0f;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	bool bLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 30;
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
	var uLocal_460 = 10;
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
	var uLocal_511 = 10;
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
	var uLocal_582 = 20;
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
	var uLocal_682 = 0;
	var uLocal_683 = 20;
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
	var uLocal_783 = 0;
	var uLocal_784 = 30;
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
	var uLocal_964 = 0;
	var uLocal_965 = 5;
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
	var uLocal_995 = 0;
	var uLocal_996 = 7;
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
	var uLocal_1045 = 0;
	var uLocal_1046 = 5;
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
	var uLocal_1071 = 0;
	var uLocal_1072 = 3;
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
	var uLocal_1087 = 0;
	var uLocal_1088 = 21;
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
	var uLocal_1212 = 0;
	var uLocal_1213 = 10;
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
	var uLocal_1263 = 0;
	var uLocal_1264 = 5;
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
	var uLocal_1289 = 0;
	var uLocal_1290 = 5;
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
	var uLocal_1318 = 0;
	var uLocal_1319 = 8;
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
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 12;
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
	var uLocal_1350 = 12;
	var uLocal_1351 = 0;
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
	var uLocal_1363 = 12;
	var uLocal_1364 = 0;
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
	var uLocal_1376 = 9;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 9;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
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
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 12;
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
	var uLocal_1432 = 12;
	var uLocal_1433 = 0;
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
	var uLocal_1445 = 12;
	var uLocal_1446 = 0;
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
	var uLocal_1458 = 9;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 9;
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
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
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
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 12;
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
	var uLocal_1514 = 12;
	var uLocal_1515 = 0;
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
	var uLocal_1527 = 12;
	var uLocal_1528 = 0;
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
	var uLocal_1540 = 9;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 9;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
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
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 12;
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
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 12;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 12;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 9;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 9;
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
	var uLocal_1644 = 0;
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
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 12;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 12;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 12;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 9;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 9;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
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
	var uLocal_1736 = 0;
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
	var uLocal_1747 = 12;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 12;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 12;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 9;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 9;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 12;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 12;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 12;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 9;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 9;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 12;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 12;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 12;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 9;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 9;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	int iLocal_1976 = 0;
	int iLocal_1977 = 0;
	int iLocal_1978 = 0;
	int iLocal_1979 = 0;
	int iLocal_1980 = 0;
	int iLocal_1981 = 0;
	int iLocal_1982 = 0;
	float fLocal_1983 = 0f;
	int iLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987[2] = { 0, 0 };
	int iLocal_1988 = 0;
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
	cLocal_49 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_50 = "cellphone@str";
	cLocal_51 = "missheistdocksprep1ig_1";
	Local_52 = { -343.37607f, -2633.535f, 5.00103f };
	iLocal_261 = -1;
	Local_276 = { 327.263f, -2968.799f, -3f };
	fLocal_277 = 358.5f;
	iLocal_278 = joaat("prop_dock_crane_02_ld");
	Local_279 = { 305.053f, -2971.395f, 4.99f };
	fLocal_280 = 90f;
	iLocal_281 = joaat("prop_dock_crane_02_cab");
	Local_282 = { 0f, 0f, 19.907f };
	fLocal_283 = 0f;
	iLocal_284 = joaat("prop_dock_crane_02_hook");
	Local_285 = { -0.005f, -22.139f, -15f };
	fLocal_286 = 0f;
	Local_288 = { -0.005f, -22.139f, 32.825f };
	Local_289 = { 0f, 0f, 0.68f };
	Local_291 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_1983 = 3f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DHP1_FAIL");
		func_337();
		func_335();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
		}
		func_332();
	}
	MISC::SET_MISSION_FLAG(true);
	func_327();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistPrep1", 0);
		__LIB_20__.func_736(&uLocal_309);
		__LIB_20__.func_616(&uLocal_1319);
		func_323();
		func_296();
		if (!iLocal_1981)
		{
			func_280();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1CF
{
	switch (iLocal_1977)
	{
		case 0:
			func_229();
			break;
		case 1:
			func_194();
			break;
		case 2:
			func_8();
			break;
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x213
{
	switch (iLocal_1978)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
			iLocal_1978++;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x25F
{
	__LIB_6__.func_823(0, 0);
	func_332();
}

void func_8()//Position - 0x3D9
{
	switch (iLocal_1978)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			__LIB_42__.func_415(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (__LIB_11__.func_720(Local_53[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_53[0 /*2*/], false, false, false, true, false, false, false, false);
			}
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_53[0 /*2*/], false);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_53[1 /*2*/], false);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
			PATHFIND::SET_GPS_DISABLED_ZONE(288.09674f, -3133.2485f, 0f, 301.0605f, -2969.6223f, 11.47017f);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_53[0 /*2*/], false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], false);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			iLocal_302 = 0;
			iLocal_303 = 0;
			iLocal_1978++;
			break;
		case 1:
			if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()) && __LIB_11__.func_720(Local_53[0 /*2*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), true) > 400f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_53[0 /*2*/]))
				{
					func_93(9);
				}
			}
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 324.76532f, -2974.4946f, -1.5f, 1) > 150f)
			{
				__LIB_0__.func_122(&(Local_57[7 /*2*/]), 0);
				__LIB_0__.func_122(&(Local_57[8 /*2*/]), 0);
				__LIB_0__.func_122(&(Local_57[6 /*2*/]), 0);
				__LIB_20__.func_611(&uLocal_309, joaat("prop_dock_crane_02_ld"));
				__LIB_20__.func_611(&uLocal_309, joaat("prop_dock_crane_02_cab"));
				__LIB_20__.func_611(&uLocal_309, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_302 && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_52, 1) < 200f)
			{
				__LIB_11__.func_689(&uLocal_309, joaat("bison"));
				iLocal_303 = 1;
				iLocal_302 = 1;
			}
			else if (iLocal_302)
			{
				if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_52, 1) > 220f)
				{
					__LIB_20__.func_611(&uLocal_309, joaat("bison"));
					iLocal_303 = 0;
					iLocal_302 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_53[3 /*2*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_53[3 /*2*/]));
					}
				}
				else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_52, 1) < 200f)
				{
					if (iLocal_303 && STREAMING::HAS_MODEL_LOADED(joaat("bison")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_53[3 /*2*/]))
						{
							Local_53[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -317.0741f, -2594.1404f, 5.0004f, 316.2352f, true, true, false);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[3 /*2*/], false);
						}
						iLocal_303 = 0;
					}
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PLAYER::GET_PLAYERS_LAST_VEHICLE()) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_53[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.12717f, -2640.339f, 12.65742f, 15f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.12717f, -2640.339f, 12.65742f, 15f, false, true, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_53[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.12717f, -2640.339f, 12.65742f, 15f, false, true, 0)))
			{
				if (__LIB_11__.func_720(Local_53[1 /*2*/]))
				{
					VEHICLE::SET_TRAILER_INVERSE_MASS_SCALE(Local_53[1 /*2*/], 0.5f);
				}
				if (HUD::DOES_BLIP_EXIST(Local_58.f_5))
				{
					HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Local_58.f_5, true);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::REMOVE_BLIP(&iLocal_243);
				}
				if (iLocal_255)
				{
					HUD::CLEAR_PRINTS();
					iLocal_255 = 0;
				}
				if (func_48(&Local_58, Local_52, 0.1f, 0.1f, 2f, 1, Local_54[3 /*10*/], 0, 0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_58.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -340.13245f, -2630.2427f, 5.001461f, -346.55075f, -2636.8076f, 12.688959f, 14.9375f, false, true, 0)))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREAS();
					__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 7f, -1, 1056964608, 0, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_53[0 /*2*/], 10);
					__LIB_20__.func_618(&Local_58, 1, 0);
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_301 = MISC::GET_GAME_TIMER();
					iLocal_257 = 0;
					iLocal_1978++;
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				__LIB_11__.func_718(&Local_58);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = __LIB_6__.func_825(Local_53[0 /*2*/], 0, 0);
				}
				if (!iLocal_255 && __LIB_11__.func_692())
				{
					__LIB_0__.func_210("DKP1_ATTACH", 7500, 1);
					iLocal_255 = 1;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_35__.func_536(&uLocal_78, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					PED::SET_PED_KEEP_TASK(Local_54[3 /*10*/], true);
					TASK::TASK_LOOK_AT_ENTITY(Local_54[3 /*10*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3f, 1f, 2f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
					TASK::TASK_PERFORM_SEQUENCE(Local_54[3 /*10*/], iLocal_244);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					iLocal_1978++;
				}
			}
			else if ((!iLocal_252 && __LIB_11__.func_692()) && (MISC::GET_GAME_TIMER() - iLocal_301) > 3000)
			{
				__LIB_0__.func_210("dkp1_EXIT", 7500, 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
				iLocal_252 = 1;
			}
			break;
		case 3:
			if (!__LIB_0__.func_75())
			{
				if (__LIB_11__.func_720(Local_53[3 /*2*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_54[3 /*10*/]);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
					TASK::TASK_ENTER_VEHICLE(0, Local_53[3 /*2*/], -1, -1, 2f, 1, 0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_53[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, true);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_53[3 /*2*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 1000f, 10f, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
					TASK::TASK_PERFORM_SEQUENCE(Local_54[3 /*10*/], iLocal_244);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Local_54[3 /*10*/]);
					TASK::TASK_SMART_FLEE_COORD(Local_54[3 /*10*/], Local_52, 300f, -1, false, false);
				}
				iLocal_301 = MISC::GET_GAME_TIMER();
				iLocal_1978++;
			}
			break;
		case 4:
			if (__LIB_0__.func_76(Local_54[3 /*10*/], PLAYER::PLAYER_PED_ID(), 1) > 70f || (MISC::GET_GAME_TIMER() - iLocal_301) > 20000)
			{
				__LIB_0__.func_124(&(Local_54[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}

int func_48(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x196B
{
	return __LIB_32__.func_737(iParam0, Param1, Param2, __LIB_0__.func_481(), __LIB_0__.func_481(), bParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

void func_93(int iParam0)//Position - 0x42C5
{
	char* sVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		case 6:
			sVar0 = "cmn_tdied" /* GXT: ~s~Trevor died. */;
			break;
		default:
			sVar0 = "";
			break;
	}
	func_98(sVar0);
	while (!__LIB_0__.func_204())
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_11__.func_719())
	{
		func_337();
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.3691f, -3062.0996f, -71.226906f, 790.91254f, -3068.998f, 63.914192f, 250f, false, false, 0))
	{
		__LIB_0__.func_428(787.0854f, -2973.8716f, 5.0585f, 256.91f);
	}
	func_332();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_98(char* sParam0)//Position - 0x44C6
{
	__LIB_0__.func_324(sParam0);
	func_99(0);
}

void func_99(int iParam0)//Position - 0x44D9
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_100(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_100(int iParam0)//Position - 0x451E
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_101(&(Global_113386.f_2363.f_539), iVar1);
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

void func_101(var uParam0, int iParam1)//Position - 0x462E
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
			if (!func_103(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_103(int iParam0, var uParam1, float fParam2)//Position - 0x4802
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
			return func_103(8, uParam1, fParam2);
			break;
		case 10:
			return func_103(8, uParam1, fParam2);
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

void func_194()//Position - 0xDFCF
{
	int iVar0;
	var uVar1;
	switch (iLocal_1978)
	{
		case 0:
			__LIB_20__.func_620(&uLocal_309, "PORT_OF_LS_PREP_1");
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			__LIB_38__.func_120(&Local_58, 324.76532f, -2974.4946f, -1f, 0.1f, 0.1f, 2f, 1, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (STREAMING::HAS_MODEL_LOADED(joaat("packer")) && STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
			{
				__LIB_42__.func_415(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				__LIB_0__.func_403(587, 0);
				__LIB_0__.func_203(&uLocal_78, 1, 0, "FLOYD", 0, 1);
				__LIB_11__.func_147(6, 0);
				Local_53[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 298.2343f, -2942.7698f, 5.0003f, 0f, true, true, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[2 /*2*/], false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[2 /*2*/], true);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_53[2 /*2*/], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_53[2 /*2*/], false);
				Local_53[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, true, true, false);
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
				VEHICLE::SET_TRAILER_LEGS_RAISED(Local_53[1 /*2*/]);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_53[1 /*2*/], false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[1 /*2*/], true);
				iLocal_248 = 0;
				PED::ADD_SCENARIO_BLOCKING_AREA(289.08466f, -2980.3816f, 9.24156f, 320.42603f, -2931.5999f, 4f, false, true, true, true);
				iLocal_257 = 1;
				AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", false);
				iLocal_1978++;
			}
			break;
		case 1:
			if (func_222())
			{
				__LIB_11__.func_722(&uLocal_309, cLocal_49);
				__LIB_11__.func_722(&uLocal_309, cLocal_50);
				iLocal_261 = -1;
				iLocal_262 = 0;
				iLocal_1978++;
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false))
			{
				switch (iLocal_262)
				{
					case 0:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (iLocal_261 == -1)
							{
								iLocal_261 = MISC::GET_GAME_TIMER() + 5000;
							}
							if (MISC::GET_GAME_TIMER() > iLocal_261)
							{
								__LIB_0__.func_151("DKP1_SUBTURN", -1);
								iLocal_262++;
							}
						}
						break;
					case 1:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__.func_151("SUB_HELP", -1);
							iLocal_262++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_262 == 0)
				{
					iLocal_261 = -1;
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_0__.func_1("DKP1_SUBTURN") || __LIB_0__.func_1("SUB_HELP"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_53[0 /*2*/], 3, 10000))
			{
				func_93(1);
			}
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 324.76532f, -2974.4946f, -1.5f, 1) < 150f)
			{
				if (AUDIO::LOAD_STREAM("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_306 = true;
				}
				__LIB_0__.func_122(&(Local_57[2 /*2*/]), 0);
				__LIB_20__.func_611(&uLocal_309, joaat("prop_sub_release"));
			}
			else
			{
				AUDIO::STOP_STREAM();
				bLocal_306 = false;
			}
			if (__LIB_11__.func_720(Local_54[6 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0) || PED::IS_PED_FLEEING(Local_54[6 /*10*/])) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_54[6 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_54[6 /*10*/]);
					__LIB_0__.func_124(&(Local_54[6 /*10*/]), 1, 0, 1);
				}
			}
			if (__LIB_11__.func_720(Local_54[7 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0) || PED::IS_PED_FLEEING(Local_54[7 /*10*/])) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_54[7 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_54[7 /*10*/]);
					__LIB_0__.func_124(&(Local_54[7 /*10*/]), 1, 0, 1);
				}
			}
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0) || PED::IS_PED_FLEEING(Local_54[4 /*10*/])) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_54[4 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
					__LIB_0__.func_124(&(Local_54[4 /*10*/]), 1, 0, 1);
				}
			}
			if (__LIB_11__.func_720(Local_54[5 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0) || PED::IS_PED_FLEEING(Local_54[5 /*10*/])) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_54[5 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_54[5 /*10*/]);
					__LIB_0__.func_124(&(Local_54[5 /*10*/]), 1, 0, 1);
				}
			}
			if (__LIB_38__.func_120(&Local_58, 324.76532f, -2974.4946f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_53[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_58.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_53[0 /*2*/], 312.8557f, -2974.0032f, 1.19166f, 339.16544f, -2974.3477f, -6.70078f, 15f, false, true, 0)) && __LIB_1__.func_126(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/])))
			{
				if (__LIB_11__.func_720(Local_53[2 /*2*/]) && __LIB_11__.func_720(Local_53[1 /*2*/]))
				{
					func_217(&Local_58, 0);
					__LIB_11__.func_647(6, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DHP1_STOP");
					__LIB_0__.func_402(0, -1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					iLocal_301 = MISC::GET_GAME_TIMER();
					iLocal_1978++;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && HUD::DOES_BLIP_EXIST(Local_58.f_5))
			{
				GRAPHICS::DRAW_MARKER(6, 324.76532f, -2974.4946f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, false, false, 2, false, 0, 0, false);
			}
			break;
		case 3:
			if (__LIB_0__.func_455(Local_53[0 /*2*/]) || (MISC::GET_GAME_TIMER() - iLocal_301) > 3500)
			{
				iLocal_293 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 341.64194f, -2965.525f, 4.037704f, 17.066954f, 0.473599f, 112.44478f, 34f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_293, true);
				CAM::SHAKE_CAM(iLocal_293, "HAND_SHAKE", 0.4f);
				CAM::SET_CAM_PARAMS(iLocal_293, 341.64194f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.44478f, 34f, 6000, 1, 1, 2);
				func_209(0, 340.6675f, -2964.0103f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				__LIB_11__.func_689(&uLocal_309, joaat("prop_tarp_strap"));
				ENTITY::SET_ENTITY_COORDS(Local_53[0 /*2*/], Local_276, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_53[0 /*2*/], fLocal_277);
				iLocal_301 = MISC::GET_GAME_TIMER();
				iLocal_275 = 0;
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
				iLocal_1978++;
			}
			else
			{
				__LIB_6__.func_762(Local_53[0 /*2*/], 7f, 1, 1056964608, 0, 1, 0);
			}
			break;
		case 4:
			if (func_199())
			{
				iLocal_1978++;
			}
			break;
		case 5:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(joaat("prop_tarp_strap")))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_53[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_53[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_53[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Floyd", 2, joaat("IG_Floyd"), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_53[2 /*2*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[2 /*2*/], true);
				func_198(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				CUTSCENE::START_CUTSCENE(0);
				iLocal_1978++;
			}
			break;
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
				{
					STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				RECORDING::REPLAY_STOP_EVENT();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_54[3 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd", 0)))
				{
					Local_54[3 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd", 0));
					__LIB_0__.func_203(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54[3 /*10*/], iLocal_259);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_295 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				iLocal_296 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DockHeist_truck", 0))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_53[2 /*2*/], true, false, false);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_53[2 /*2*/], true);
				iLocal_297 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DockHeist_trailer", 0))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_53[1 /*2*/], true, false, false);
				iLocal_300 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("submarine", 0))
			{
				iLocal_298 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("sub_cover", 0))
			{
				iLocal_299 = 1;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_57[4 /*2*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_57[4 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (VEHICLE::GET_VEHICLE_LIGHTS_STATE(Local_53[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 14200)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(Local_53[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_295 && iLocal_296) && iLocal_297) && iLocal_298) && iLocal_299) && iLocal_300)
			{
				if (CAM::IS_SCREEN_FADED_IN() || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_54[3 /*10*/]))
				{
					PED::SET_PED_INTO_VEHICLE(Local_54[3 /*10*/], Local_53[2 /*2*/], 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[2 /*2*/], -1);
					VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_53[0 /*2*/], true);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_53[0 /*2*/], 10);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_53[0 /*2*/], false, true, false);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_53[0 /*2*/], 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					Local_57[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.1572f, 8.7838f, true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					func_197(1, 0, 0, 3000, 0);
					__LIB_20__.func_619(&uLocal_309);
					iLocal_1978++;
				}
			}
			break;
		case 7:
			func_195(2);
			iLocal_1978 = 0;
			break;
	}
	if (HUD::DOES_BLIP_EXIST(Local_58.f_5))
	{
		HUD::SET_BLIP_ROUTE(Local_58.f_5, false);
	}
	if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()) && __LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 324.76532f, -2974.4946f, -1f, true) > 2500f)
		{
			func_93(9);
		}
	}
}

int func_195(int iParam0)//Position - 0xEAAE
{
	if (iLocal_1976 == 0)
	{
		iLocal_1979 = iParam0;
		iLocal_1976 = 1;
		return 1;
	}
	return 0;
}

void func_197(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0xEB06
{
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(false);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
	}
}

void func_198(int iParam0)//Position - 0xEB56
{
	iLocal_295 = iParam0;
	iLocal_296 = iParam0;
	iLocal_297 = iParam0;
	iLocal_299 = iParam0;
	iLocal_298 = iParam0;
	iLocal_300 = iParam0;
}

int func_199()//Position - 0xEB7C
{
	float fVar0;
	switch (iLocal_275)
	{
		case 0:
			func_208();
			ENTITY::SET_ENTITY_COORDS(Local_53[0 /*2*/], Local_276, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_53[0 /*2*/], fLocal_277);
			ENTITY::FREEZE_ENTITY_POSITION(Local_53[0 /*2*/], true);
			iLocal_245 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_pls_sub_water_drips", Local_53[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_245, "flow", 1f, false);
			CUTSCENE::REQUEST_CUTSCENE("dhp1_mcs_1", 8);
			if (bLocal_306)
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 7)
			{
				STREAMING::REQUEST_IPL("PO1_08_sub_waterplane");
			}
			__LIB_20__.func_734(&uLocal_309, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.6653f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_275++;
			break;
		case 1:
			Local_287 = { ENTITY::GET_ENTITY_COORDS(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 1f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_53[0 /*2*/], false);
				CAM::SET_CAM_PARAMS(iLocal_293, 310.0923f, -2949.5293f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_293, 308.3542f, -2950.9724f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_53[0 /*2*/], Local_57[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
				iLocal_275++;
			}
			else
			{
				func_205(1, 2f);
			}
			break;
		case 2:
			Local_287 = { ENTITY::GET_ENTITY_COORDS(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 >= 12.5f)
			{
				CAM::SET_CAM_PARAMS(iLocal_293, 356.9992f, -2984.9612f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_293, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_292 = CAM::GET_CAM_NEAR_CLIP(iLocal_293);
				CAM::SET_CAM_NEAR_CLIP(iLocal_293, 1.8f);
				iLocal_275++;
			}
			else
			{
				func_205(0, 1f);
			}
			break;
		case 3:
			if (fLocal_283 >= 40f)
			{
				CAM::SET_CAM_PARAMS(iLocal_293, 289.8129f, -2944.0457f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_293, 290.8941f, -2941.9873f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(iLocal_293, fLocal_292);
				fLocal_283 = 80f;
				ENTITY::DETACH_ENTITY(Local_57[7 /*2*/], true, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_57[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_285), false, false, true);
				iLocal_1984 = MISC::GET_GAME_TIMER();
				iLocal_275++;
			}
			else
			{
				func_204(1, 5.5f);
			}
			break;
		case 4:
			if (fLocal_283 >= 108f)
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_CAM_PARAMS(iLocal_293, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_293, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				CAM::SET_CAM_SHAKE_AMPLITUDE(iLocal_293, 0.25f);
				ENTITY::DETACH_ENTITY(Local_57[7 /*2*/], true, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_57[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_285), false, false, true);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_245))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_245, false);
				}
				iLocal_275++;
			}
			else
			{
				fVar0 = (1f - __LIB_0__.func_301((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_1984 + 1500)) / 3000f), 0f, 1f));
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_245, "flow", fVar0, false);
				func_204(1, 5.5f);
			}
			break;
		case 5:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			Local_287 = { ENTITY::GET_ENTITY_COORDS(Local_57[8 /*2*/], true) };
			if (Local_287.f_2 <= 11f)
			{
				ENTITY::DETACH_ENTITY(Local_53[0 /*2*/], true, true);
				iLocal_275++;
			}
			else
			{
				func_205(1, 1f);
			}
			break;
		case 6:
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_53[0 /*2*/]))
			{
				iLocal_1984 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_275++;
			}
			break;
		case 7:
			if (MISC::GET_GAME_TIMER() > iLocal_1984)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_57[8 /*2*/], true);
				iLocal_275++;
			}
			else
			{
				func_204(0, 4f);
				func_205(0, 1f);
			}
			break;
		case 8:
			__LIB_11__.func_721(&uLocal_309);
			return 1;
			break;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (iLocal_275 > 0 && iLocal_275 < 5)
		{
			if (__LIB_6__.func_841(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_245))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_245, false);
		}
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), 30f);
		iLocal_1982 = 2;
		iLocal_1981 = 1;
	}
	return 0;
}

void func_204(bool bParam0, float fParam1)//Position - 0xF1B1
{
	if (bParam0)
	{
		fLocal_283 = (fLocal_283 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_283 = (fLocal_283 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	ENTITY::DETACH_ENTITY(Local_57[7 /*2*/], true, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_57[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_285), false, false, true);
}

void func_205(bool bParam0, float fParam1)//Position - 0xF223
{
	if (bParam0)
	{
		Local_285.f_2 = (Local_285.f_2 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		Local_285.f_2 = (Local_285.f_2 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_57[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_285), false, false, true);
}

void func_208()//Position - 0xF382
{
	if (iLocal_248)
	{
		PHYSICS::DELETE_ROPE(&(Local_55[0 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_55[1 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_55[2 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_55[3 /*5*/]));
		iLocal_248 = 0;
	}
}

void func_209(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xF3B8
{
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam6);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::RENDER_SCRIPT_CAMS(bParam2, bParam3, iParam5, true, false, 0);
	if (bParam4)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	FIRE::STOP_FIRE_IN_RANGE(Param1, 300f);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
	}
	if (bParam7)
	{
		__LIB_6__.func_849(0);
	}
}

void func_217(int* iParam0, bool bParam1)//Position - 0xF670
{
	__LIB_20__.func_618(iParam0, bParam1, 0);
}

int func_222()//Position - 0xF773
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[6 /*2*/]))
	{
		Local_57[6 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_278, Local_279, true, true, false);
		ENTITY::SET_ENTITY_COORDS(Local_57[6 /*2*/], Local_279, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_57[6 /*2*/], fLocal_280);
		ENTITY::FREEZE_ENTITY_POSITION(Local_57[6 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[7 /*2*/]))
	{
		Local_57[7 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_281, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[6 /*2*/], Local_282), true, true, false);
	}
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_57[7 /*2*/], Local_57[6 /*2*/]))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[7 /*2*/], Local_57[6 /*2*/], -1, Local_282, 0f, 0f, fLocal_283, false, false, false, false, 2, true, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[8 /*2*/]))
	{
		Local_57[8 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_284, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_285), true, true, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_57[8 /*2*/], false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[8 /*2*/], Local_57[7 /*2*/], -1, Local_285, 0f, 0f, fLocal_286, false, false, false, false, 2, true, 0);
		ENTITY::DETACH_ENTITY(Local_57[8 /*2*/], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_57[8 /*2*/], true);
	}
	if (!iLocal_249)
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[7 /*2*/]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[8 /*2*/]))
		{
			iLocal_290 = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_288), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, false, false, true, 1f, false, 0);
			PHYSICS::ROPE_SET_SMOOTH_REELIN(iLocal_290, true);
			PHYSICS::ROPE_SET_UPDATE_ORDER(iLocal_290, 2);
			PHYSICS::ROPE_DRAW_SHADOW_ENABLED(&iLocal_290, false);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_290, Local_57[7 /*2*/], Local_57[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[7 /*2*/], Local_288), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[8 /*2*/], Local_289), 70f, false, false, 0, 0);
			iLocal_249 = 1;
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[7 /*2*/]))
		{
		}
		if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[8 /*2*/]))
		{
		}
	}
	return 0;
}

void func_229()//Position - 0xFB33
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_1978)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (__LIB_11__.func_720(Local_53[0 /*2*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_53[0 /*2*/].f_1))
				{
					Local_53[0 /*2*/].f_1 = __LIB_6__.func_825(Local_53[0 /*2*/], 0, 0);
				}
				Local_56 = { PHYSICS::GET_CGOFFSET(Local_53[0 /*2*/]) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_57[2 /*2*/]) && !HUD::DOES_BLIP_EXIST(iLocal_243))
			{
				iLocal_243 = __LIB_6__.func_840(Local_57[2 /*2*/]);
			}
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_243, "SUBBTN_LABEL");
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_START");
			}
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[4 /*10*/], true);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_54[4 /*10*/], false);
			}
			__LIB_11__.func_695(&uLocal_309, cLocal_51);
			__LIB_11__.func_695(&uLocal_309, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			__LIB_11__.func_726(&uLocal_309, "PORT_OF_LS_PREP_1");
			__LIB_0__.func_210("dkp1_sub", 7500, 1);
			iLocal_264 = 0;
			iLocal_265 = 0;
			iLocal_266 = 0;
			iLocal_268 = MISC::GET_GAME_TIMER();
			iLocal_269 = 0;
			iLocal_253 = 0;
			iLocal_263 = 0;
			if (iLocal_1987[0] == -1)
			{
				iLocal_1987[0] = AUDIO::GET_SOUND_ID();
			}
			if (iLocal_1987[1] == -1)
			{
				iLocal_1987[1] = AUDIO::GET_SOUND_ID();
			}
			iLocal_1978++;
			break;
		case 1:
			if (iLocal_248)
			{
				if (((!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[0 /*5*/])) && !PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[1 /*5*/]))) && !PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[2 /*5*/]))) && !PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[3 /*5*/])))
				{
					PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_57[0 /*2*/]);
					PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_57[1 /*2*/]);
					if (__LIB_11__.func_720(Local_53[0 /*2*/]))
					{
						PHYSICS::SET_CGOFFSET(Local_53[0 /*2*/], Local_56);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						HUD::REMOVE_BLIP(&iLocal_243);
					}
					func_273(1);
					__LIB_11__.func_689(&uLocal_309, joaat("S_M_M_Security_01"));
					__LIB_11__.func_695(&uLocal_309, cLocal_49);
					AUDIO::TRIGGER_MUSIC_EVENT("DHP1_RELEASED");
					HUD::CLEAR_HELP(true);
					iLocal_301 = MISC::GET_GAME_TIMER();
					iLocal_1978 = 4;
				}
				func_272();
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1249.1057f, -3007.908f, 10.84327f, 1249.9615f, -3007.8374f, 8.31909f, 1.68f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && !__LIB_0__.func_77(0))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						iLocal_293 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1249.9294f, -3010.2673f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.333569f, true, 2);
						CAM::SET_CAM_PARAMS(iLocal_293, 1249.9294f, -3010.2673f, 9.590105f, 4.448765f, -1.5737f, 12.680055f, 21.333569f, 3500, 0, 1, 2);
						CAM::SHAKE_CAM(iLocal_293, "hand_shake", 0.3f);
						func_209(0, 1249.7866f, -3008.0159f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						iLocal_246 = PED::CREATE_SYNCHRONIZED_SCENE(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_246, cLocal_51, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_246, cLocal_51, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						HUD::CLEAR_HELP(true);
						iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(1249.7866f, -3008.0159f, 8.52751f, 5f, 0, 4);
						if (__LIB_11__.func_720(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, 1250.3335f, -3010.219f, 8.3191f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, 85.8086f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 4);
						RECORDING::REPLAY_START_EVENT(4);
						iLocal_294 = 1;
						iLocal_1978++;
					}
					else if (!__LIB_0__.func_1("DKP1_BTN"))
					{
						__LIB_0__.func_187("DKP1_BTN");
					}
				}
				else if (__LIB_0__.func_1("DKP1_BTN"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) == 1f)
			{
				RECORDING::REPLAY_STOP_EVENT();
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "SUB_RELEASE", 1260.8959f, -3006.5557f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0, false);
				CAM::SET_CAM_PARAMS(iLocal_293, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_293, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				CAM::SET_CAM_SHAKE_AMPLITUDE(iLocal_293, 0.1f);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_55[0 /*5*/], Local_53[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_55[1 /*5*/], Local_53[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_55[2 /*5*/], Local_53[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_55[3 /*5*/], Local_53[0 /*2*/]);
				PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_57[0 /*2*/]);
				PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_57[1 /*2*/]);
				if (__LIB_11__.func_720(Local_53[0 /*2*/]))
				{
					PHYSICS::SET_CGOFFSET(Local_53[0 /*2*/], Local_56);
					PHYSICS::ACTIVATE_PHYSICS(Local_53[0 /*2*/]);
				}
				iLocal_301 = MISC::GET_GAME_TIMER();
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_RELEASED");
				HUD::CLEAR_HELP(true);
				iLocal_294 = 1;
				iLocal_1978++;
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) >= 0.7f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1252.5935f, -3008.883f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_301) > 1500)
			{
				if (iLocal_294)
				{
					CAM::SET_CAM_PARAMS(iLocal_293, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					CAM::SET_CAM_PARAMS(iLocal_293, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_294 = 0;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_301) > 5000 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_243))
					{
						HUD::REMOVE_BLIP(&iLocal_243);
					}
					func_273(1);
					__LIB_11__.func_689(&uLocal_309, joaat("S_M_M_Security_01"));
					__LIB_11__.func_695(&uLocal_309, cLocal_49);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_197(1, 0, 0, 3000, 0);
					iLocal_301 = MISC::GET_GAME_TIMER();
					iLocal_1978++;
				}
			}
			break;
		case 4:
			if (!__LIB_0__.func_198())
			{
				if (__LIB_18__.func_173() == 2)
				{
					if (!__LIB_36__.func_107(__LIB_36__.func_33(0), 0) && !__LIB_36__.func_107(__LIB_36__.func_33(1), 0))
					{
						__LIB_11__.func_724(12);
						iLocal_1978++;
					}
					else if (__LIB_36__.func_107(__LIB_36__.func_33(0), 0) && !__LIB_36__.func_107(__LIB_36__.func_33(1), 0))
					{
						__LIB_0__.func_203(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__.func_203(&uLocal_78, 1, __LIB_36__.func_33(0), "MICHAEL", 0, 1);
						if (__LIB_39__.func_923(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							__LIB_11__.func_724(12);
							iLocal_1978++;
						}
					}
					else if (!__LIB_36__.func_107(__LIB_36__.func_33(0), 0) && __LIB_36__.func_107(__LIB_36__.func_33(1), 0))
					{
						__LIB_0__.func_203(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__.func_203(&uLocal_78, 2, __LIB_36__.func_33(1), "FRANKLIN", 0, 1);
						if (__LIB_39__.func_923(&uLocal_78, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							__LIB_11__.func_724(12);
							iLocal_1978++;
						}
					}
					else
					{
						__LIB_0__.func_203(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__.func_203(&uLocal_78, 1, __LIB_36__.func_33(0), "MICHAEL", 0, 1);
						__LIB_0__.func_203(&uLocal_78, 2, __LIB_36__.func_33(1), "FRANKLIN", 0, 1);
						if (__LIB_35__.func_536(&uLocal_78, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							__LIB_11__.func_724(12);
							iLocal_1978++;
						}
					}
				}
				else if (__LIB_11__.func_692())
				{
					__LIB_0__.func_210("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		case 5:
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true) };
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_53[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				PHYSICS::DELETE_CHILD_ROPE(Local_55[0 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_55[1 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_55[2 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_55[3 /*5*/]);
				if (iLocal_1987[0] != -1)
				{
					AUDIO::STOP_SOUND(iLocal_1987[0]);
				}
				if (iLocal_1987[1] != -1)
				{
					AUDIO::STOP_SOUND(iLocal_1987[1]);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false))
			{
				__LIB_41__.func_636(1218.2369f, -3005.1282f, 4.8658f, 359.5065f, 0, 145);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					Local_54[6 /*10*/] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 1229.5575f, -3002.8818f, 8.31909f, -30.33f, true, true);
					WEAPON::GIVE_WEAPON_TO_PED(Local_54[6 /*10*/], joaat("WEAPON_PISTOL"), -1, false, true);
					PED::SET_PED_CONFIG_FLAG(Local_54[6 /*10*/], 330, true);
					PED::SET_PED_AS_COP(Local_54[6 /*10*/], true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.8761f, -3014.0354f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
					TASK::TASK_PERFORM_SEQUENCE(Local_54[6 /*10*/], iLocal_244);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					Local_54[7 /*10*/] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 1229.5575f, -3002.8818f, 8.31909f, -30.33f, true, true);
					PED::SET_PED_CONFIG_FLAG(Local_54[7 /*10*/], 330, true);
					WEAPON::GIVE_WEAPON_TO_PED(Local_54[7 /*10*/], joaat("WEAPON_PISTOL"), -1, false, true);
					PED::SET_PED_AS_COP(Local_54[7 /*10*/], true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.0559f, -3006.9404f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
					TASK::TASK_PERFORM_SEQUENCE(Local_54[7 /*10*/], iLocal_244);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					__LIB_20__.func_611(&uLocal_309, joaat("S_M_M_Security_01"));
				}
				else
				{
					Local_54[5 /*10*/] = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), 1228.9293f, -3015.008f, 8.31909f, 0f, true, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[5 /*10*/], true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.8761f, -3014.0354f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
					TASK::TASK_SMART_FLEE_COORD(0, 1252.8761f, -3014.0354f, 8.31909f, 300f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
					TASK::TASK_PERFORM_SEQUENCE(Local_54[5 /*10*/], iLocal_244);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
					__LIB_20__.func_611(&uLocal_309, joaat("S_M_M_Security_01"));
				}
				if (__LIB_11__.func_720(Local_54[4 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
					ENTITY::SET_ENTITY_COORDS(Local_54[4 /*10*/], 1229.5575f, -3002.8818f, 8.31909f, true, false, false, true);
				}
				else
				{
					Local_54[4 /*10*/] = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), 1229.5575f, -3002.8818f, 8.31909f, -99f, true, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[4 /*10*/], true);
				AUDIO::STOP_PED_SPEAKING(Local_54[4 /*10*/], true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_f", 8f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_49, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
				TASK::TASK_SMART_FLEE_COORD(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
				TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
				iLocal_305 = MISC::GET_GAME_TIMER();
				iLocal_308 = 0;
				iLocal_307 = 0;
				HUD::CLEAR_HELP(true);
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_SUB");
				if (HUD::DOES_BLIP_EXIST(Local_53[0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_53[0 /*2*/].f_1));
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_57[3 /*2*/]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_57[0 /*2*/]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_57[1 /*2*/]));
				__LIB_20__.func_611(&uLocal_309, joaat("p_amb_phone_01"));
				__LIB_20__.func_611(&uLocal_309, joaat("S_M_M_DockWork_01"));
				__LIB_20__.func_611(&uLocal_309, joaat("prop_ld_test_01"));
				__LIB_20__.func_611(&uLocal_309, joaat("prop_sub_release"));
				__LIB_11__.func_722(&uLocal_309, cLocal_51);
				TASK::REMOVE_WAYPOINT_RECORDING("docksprep1");
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 10f, 4);
				func_195(1);
				iLocal_1978 = 0;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), true) < 5f && !iLocal_253)
			{
				__LIB_0__.func_151("DKP1_CLIMB", -1);
				iLocal_253 = 1;
			}
			break;
	}
	if ((!iLocal_263 && __LIB_11__.func_720(Local_53[0 /*2*/])) && ENTITY::IS_ENTITY_IN_WATER(Local_53[0 /*2*/]))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUB_SPLASH", Local_53[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", false, 0);
		iLocal_263 = 1;
	}
	if (((!iLocal_248 && ENTITY::DOES_ENTITY_EXIST(Local_57[0 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_57[1 /*2*/])) && __LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[0 /*2*/]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[1 /*2*/]))
		{
			PHYSICS::SET_CG_AT_BOUNDCENTER(Local_53[0 /*2*/]);
			Local_55[0 /*5*/] = PHYSICS::ADD_ROPE(1260.6915f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_55[0 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[0 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_53[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[1 /*5*/] = PHYSICS::ADD_ROPE(1260.6915f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_55[1 /*5*/], Local_57[0 /*2*/], Local_53[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[0 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_53[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[2 /*5*/] = PHYSICS::ADD_ROPE(1260.6915f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_55[2 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[1 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_53[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			Local_55[3 /*5*/] = PHYSICS::ADD_ROPE(1260.7521f, -3004.9941f, 22.68315f, 0f, 0f, 0f, fLocal_1983, 1, fLocal_1983, 0.5f, 0.5f, false, false, false, 10f, true, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_55[3 /*5*/], Local_57[1 /*2*/], Local_53[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_57[1 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_53[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_1983, false, false, 0, 0);
			iLocal_248 = 1;
			iLocal_250 = 0;
			PHYSICS::ACTIVATE_PHYSICS(Local_53[0 /*2*/]);
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
		}
	}
	else if (__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		if (!iLocal_250)
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_53[0 /*2*/]);
			iLocal_250 = 1;
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_53[0 /*2*/], false);
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_53[0 /*2*/], 1, 0f, 0f, 0.01f, false, false, true, false);
	}
	if (!iLocal_251)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_57[3 /*2*/]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_57[3 /*2*/]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[3 /*2*/], Local_54[4 /*10*/], PED::GET_PED_BONE_INDEX(Local_54[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				iLocal_251 = 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_57[3 /*2*/]) && ((__LIB_11__.func_720(Local_54[4 /*10*/]) && PED::IS_PED_FLEEING(Local_54[4 /*10*/])) || !__LIB_11__.func_720(Local_54[4 /*10*/])))
	{
		if (__LIB_11__.func_720(Local_54[4 /*10*/]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
		{
			TASK::STOP_ANIM_TASK(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", -8f);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_57[3 /*2*/]))
		{
			ENTITY::DETACH_ENTITY(Local_57[3 /*2*/], true, true);
		}
	}
	if (__LIB_18__.func_173() == 2)
	{
		if (__LIB_11__.func_720(Local_53[0 /*2*/]))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], true);
		}
	}
	else if (__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], false);
	}
}

void func_272()//Position - 0x16D38
{
	int iVar0;
	bool bVar1;
	iLocal_247 = 0;
	while (iLocal_247 < Local_55.f_0)
	{
		if (!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[iLocal_247 /*5*/])))
		{
			if (!Local_55[iLocal_247 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_247++;
	}
	if (bVar1)
	{
		if (((((!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[0 /*5*/])) && !PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[1 /*5*/]))) && (!Local_55[0 /*5*/].f_4 || !Local_55[1 /*5*/].f_4)) || ((!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[2 /*5*/])) && !PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[3 /*5*/]))) && (!Local_55[2 /*5*/].f_4 || !Local_55[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_1988 > 0)
			{
				if (iLocal_1987[(iLocal_1988 - 1)] != -1)
				{
					AUDIO::STOP_SOUND(iLocal_1987[(iLocal_1988 - 1)]);
				}
			}
			if (iLocal_1987[iLocal_1988] != -1)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1987[iLocal_1988], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.8959f, -3006.5557f, 23.4213f, 0, false, 0, false);
				iLocal_1988++;
			}
		}
		else if (iVar0 <= 2)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.8959f, -3006.5557f, 23.4213f, 0, false, 0, false);
		}
		iLocal_247 = 0;
		while (iLocal_247 < Local_55.f_0)
		{
			if (!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Local_55[iLocal_247 /*5*/])))
			{
				if (!Local_55[iLocal_247 /*5*/].f_4)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.8959f, -3006.5557f, 23.4213f, 0, false, 0, false);
				}
				Local_55[iLocal_247 /*5*/].f_4 = 1;
			}
			iLocal_247++;
		}
		if (iVar0 >= 4)
		{
			if (iLocal_1987[0] != -1)
			{
				AUDIO::STOP_SOUND(iLocal_1987[0]);
			}
			if (iLocal_1987[1] != -1)
			{
				AUDIO::STOP_SOUND(iLocal_1987[1]);
			}
		}
	}
}

void func_273(int iParam0)//Position - 0x16F0B
{
	switch (iParam0)
	{
		case 0:
			__LIB_11__.func_689(&uLocal_309, joaat("submersible"));
			__LIB_11__.func_689(&uLocal_309, joaat("prop_ld_test_01"));
			__LIB_11__.func_689(&uLocal_309, joaat("prop_sub_release"));
			__LIB_11__.func_689(&uLocal_309, joaat("S_M_M_DockWork_01"));
			__LIB_11__.func_695(&uLocal_309, cLocal_50);
			__LIB_11__.func_695(&uLocal_309, cLocal_51);
			__LIB_11__.func_697(&uLocal_309, "docksprep1");
			__LIB_11__.func_689(&uLocal_309, joaat("p_amb_phone_01"));
			func_275(&uLocal_309);
			__LIB_11__.func_726(&uLocal_309, "PORT_OF_LS_PREP_1");
			break;
		case 1:
			__LIB_11__.func_689(&uLocal_309, joaat("submersible"));
			__LIB_11__.func_689(&uLocal_309, joaat("packer"));
			__LIB_11__.func_689(&uLocal_309, joaat("armytrailer"));
			__LIB_11__.func_689(&uLocal_309, iLocal_278);
			__LIB_11__.func_689(&uLocal_309, iLocal_281);
			__LIB_11__.func_689(&uLocal_309, iLocal_284);
			__LIB_11__.func_725(&uLocal_309);
			func_275(&uLocal_309);
			break;
		case 2:
		case 3:
			__LIB_11__.func_689(&uLocal_309, joaat("submersible"));
			__LIB_11__.func_689(&uLocal_309, joaat("packer"));
			__LIB_11__.func_689(&uLocal_309, joaat("armytrailer"));
			__LIB_11__.func_689(&uLocal_309, joaat("prop_sub_cover_01"));
			__LIB_11__.func_689(&uLocal_309, joaat("prop_tarp_strap"));
			break;
	}
}

void func_275(var uParam0)//Position - 0x1707A
{
	uParam0->f_889.f_2 = 0;
	if (!uParam0->f_889.f_1)
	{
		if (!uParam0->f_889)
		{
			PHYSICS::ROPE_LOAD_TEXTURES();
			uParam0->f_889 = 1;
		}
		uParam0->f_1007 = 1;
	}
}

void func_280()//Position - 0x17316
{
	int iVar0;
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_54[iLocal_247 /*10*/]))
		{
			if (Local_54[iLocal_247 /*10*/] != Local_54[3 /*10*/])
			{
				if (iLocal_1977 == 0)
				{
					__LIB_0__.func_499(Local_54[iLocal_247 /*10*/], &(Local_54[iLocal_247 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else if (HUD::DOES_BLIP_EXIST(Local_54[iLocal_247 /*10*/].f_2))
				{
					HUD::REMOVE_BLIP(&(Local_54[iLocal_247 /*10*/].f_2));
				}
			}
			if (PED::IS_PED_INJURED(Local_54[iLocal_247 /*10*/]))
			{
				if (Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
				{
					func_93(7);
				}
				__LIB_0__.func_124(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_1977 == 2 && Local_54[iLocal_247 /*10*/] == Local_54[3 /*10*/])
			{
				if (__LIB_0__.func_76(Local_54[3 /*10*/], PLAYER::PLAYER_PED_ID(), 1) > 300f)
				{
					func_93(11);
				}
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[iLocal_247 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_53[iLocal_247 /*2*/], false))
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					func_93(1);
				}
				else if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					func_93(2);
				}
				else if (iLocal_247 == 3)
				{
					func_93(8);
				}
				__LIB_0__.func_106(&(Local_53[iLocal_247 /*2*/]));
			}
			else if (iLocal_257)
			{
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (iLocal_1977 == 2)
					{
						if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_53[iLocal_247 /*2*/]) > 0.5f)
						{
							func_93(5);
						}
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[2 /*2*/] || Local_53[iLocal_247 /*2*/] == Local_53[1 /*2*/])
				{
					if (__LIB_10__.func_566(&(Local_53[iLocal_247 /*2*/])))
					{
						func_93(3);
						__LIB_0__.func_106(&(Local_53[iLocal_247 /*2*/]));
					}
				}
				if (Local_53[iLocal_247 /*2*/] == Local_53[0 /*2*/])
				{
					if (iLocal_1977 == 1 && iLocal_1978 < 3)
					{
						if (__LIB_10__.func_566(&(Local_53[iLocal_247 /*2*/])))
						{
							func_93(4);
							__LIB_0__.func_106(&(Local_53[iLocal_247 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_247++;
	}
	if (__LIB_11__.func_720(Local_53[0 /*2*/]) && __LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), true) > 750f)
		{
			func_93(10);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), true) > 700f)
		{
			if (!iLocal_254 && __LIB_11__.func_692())
			{
				__LIB_0__.func_210("DKP1_ABSUB", 7500, 1);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
	{
		func_286();
	}
	if (iLocal_1977 == 0 && iLocal_1978 > 0)
	{
		func_283();
	}
	if (iLocal_1977 == 0 || iLocal_1977 == 1)
	{
		if (__LIB_11__.func_720(Local_53[0 /*2*/]))
		{
			if (!iLocal_1985)
			{
				__LIB_0__.func_320(Local_53[0 /*2*/], 588);
				iLocal_1985 = 1;
			}
		}
		else if (iLocal_1985)
		{
			__LIB_0__.func_320(0, 588);
			iLocal_1985 = 0;
		}
	}
	else if (iLocal_1977 == 2)
	{
		if (__LIB_11__.func_720(Local_53[2 /*2*/]))
		{
			if (!iLocal_1986)
			{
				__LIB_0__.func_320(Local_53[2 /*2*/], 590);
				iLocal_1986 = 1;
			}
		}
		else if (iLocal_1986)
		{
			__LIB_0__.func_320(0, 590);
			iLocal_1986 = 0;
		}
	}
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.4019f, -2880.3962f, 8.25003f, 1240.3844f, -2924.5127f, 40.819088f, 28.875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.2216f, -3035.4695f, 16.026249f, 1240.409f, -2924.1592f, 8.06909f, 28.875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.4644f, -3035.1272f, 13.006976f, 1240.6168f, -3057.122f, 16.971334f, 27.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5375f, -2967.8215f, 32.94558f, 1240.7922f, -2943.657f, 10.006589f, 12.1875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1261.5248f, -3006.2754f, 29.21641f, 1237.7876f, -3006.8262f, 12.877231f, 8.1875f, false, true, 0))
	{
		HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		}
		else
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
		}
		if ((!ENTITY::IS_ENTITY_IN_AIR(iVar0) && !ENTITY::IS_ENTITY_IN_WATER(iVar0)) && (!ENTITY::DOES_ENTITY_EXIST(Local_53[0 /*2*/]) || !ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_53[0 /*2*/])))
		{
			if (!iLocal_256)
			{
				__LIB_0__.func_498(593);
				iLocal_256 = 1;
			}
		}
	}
	if (!iLocal_258)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", true);
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_258 = 1;
		}
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		CAM::SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Local_53[0 /*2*/]);
	}
}

void func_283()//Position - 0x17939
{
	switch (iLocal_264)
	{
		case 0:
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				if (iLocal_269)
				{
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
					}
				}
			}
			iLocal_270 = 0;
			iLocal_264 = 1;
			break;
		case 1:
			if (!iLocal_269)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_268) > 2000 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[4 /*10*/], true), true) < 10f)
				{
					iLocal_269 = 1;
					iLocal_264 = 0;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0))
			{
				if (__LIB_11__.func_720(Local_54[4 /*10*/]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
						__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 2;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[4 /*10*/], true), true) < 12f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8.5f)
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
						if (!__LIB_0__.func_583(Local_54[4 /*10*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_54[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4000);
							TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[4 /*10*/], true), true) < 12f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!__LIB_0__.func_583(Local_54[4 /*10*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_54[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4000);
							TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (((WEAPON::IS_FLASH_LIGHT_ON(PLAYER::PLAYER_PED_ID()) && (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() < 6)) && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_54[4 /*10*/], 1) < 25f) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/])))
					{
						if (!__LIB_0__.func_583(Local_54[4 /*10*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_54[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4000);
							TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_54[4 /*10*/], true), true) < 12f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!__LIB_0__.func_583(Local_54[4 /*10*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_54[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4000);
							TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0f, false, false, false);
						}
					}
				}
				if (iLocal_1978 > 1)
				{
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
							__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_264 = 3;
							iLocal_266 = 3;
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_54[4 /*10*/]);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_54[4 /*10*/], 1252.5581f, -3004.8457f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_268 = MISC::GET_GAME_TIMER();
							iLocal_269 = 0;
						}
					}
				}
			}
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_54[4 /*10*/]))
				{
					if (iLocal_269)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_54[4 /*10*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_54[4 /*10*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_54[4 /*10*/], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD")) != 1)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
							}
							if (ENTITY::IS_ENTITY_AT_COORD(Local_54[4 /*10*/], 1228.0559f, -3000.4275f, 8.4424f, 2f, 2f, 2f, false, true, 0))
							{
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
								{
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_54[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_54[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_272) > 10000)
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_54[4 /*10*/]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_54[4 /*10*/], 1251.6254f, -3003.3384f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(Local_54[4 /*10*/], false, false);
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_54[4 /*10*/], 1228.8485f, -2986.284f, 8.31909f, 2f, 2f, 2f, false, true, 0))
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(Local_54[4 /*10*/], false, false);
							}
						}
						else
						{
							iLocal_272 = MISC::GET_GAME_TIMER();
							TASK::WAYPOINT_PLAYBACK_RESUME(Local_54[4 /*10*/], true, -1, 3000);
						}
					}
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_54[4 /*10*/]) && (MISC::GET_GAME_TIMER() - iLocal_273) > 4000)
					{
						__LIB_5__.func_759(Local_54[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_273 = MISC::GET_GAME_TIMER();
					}
				}
				if (((PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 124) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 118))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					TASK::TASK_HANDS_UP(Local_54[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 1);
				}
				else if (PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 23))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					TASK::TASK_COWER(Local_54[4 /*10*/], -1);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), true))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_54[4 /*10*/]);
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		case 2:
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), -1, 3104, 2);
				}
			}
			switch (iLocal_265)
			{
				case 0:
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
							TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
							TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
							TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
							iLocal_267 = MISC::GET_GAME_TIMER();
							iLocal_265 = 1;
						}
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_267) > 4000)
					{
						if (__LIB_11__.func_720(Local_54[4 /*10*/]))
						{
							if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
								TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3f, 1f, 2f, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
								TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
								TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
								iLocal_267 = MISC::GET_GAME_TIMER();
								iLocal_265 = 2;
							}
						}
					}
					break;
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_267) > 8000)
					{
						if (__LIB_11__.func_720(Local_54[4 /*10*/]))
						{
							if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_267 = MISC::GET_GAME_TIMER();
								iLocal_266 = 4;
								iLocal_264 = 3;
							}
						}
					}
					break;
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.5132f, -2880.3557f, 2.10339f, 1240.5594f, -3057.2708f, 17.4f, 29.45f, false, true, 0) || !__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				iLocal_264 = 0;
			}
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_271, true);
			if (__LIB_11__.func_720(Local_54[4 /*10*/]))
			{
				if ((PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 124) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 126))
				{
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 1;
					TASK::TASK_HANDS_UP(Local_54[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 1);
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/]))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("WEAPON_UNARMED"))
					{
						__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_264 = 3;
						iLocal_266 = 1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_54[4 /*10*/]);
						TASK::TASK_HANDS_UP(Local_54[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
				}
				else if (PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 23))
				{
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 2;
					TASK::TASK_COWER(Local_54[4 /*10*/], -1);
					TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0f, false, false, false);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), true))
				{
					__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_264 = 3;
					iLocal_266 = 4;
				}
			}
			break;
		case 3:
			switch (iLocal_266)
			{
				case 1:
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				case 2:
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_270 = 1;
							iLocal_266 = 4;
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				case 3:
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_54[4 /*10*/], 1252.5581f, -3004.8457f, 8.31909f, 2f, 2f, 2f, false, true, 0))
						{
							if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_270 = 1;
								iLocal_266 = 4;
							}
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_54[4 /*10*/], Local_53[0 /*2*/]))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_54[4 /*10*/], Local_53[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				case 4:
					if (__LIB_11__.func_720(Local_54[4 /*10*/]))
					{
						if (!PED::IS_PED_RAGDOLL(Local_54[4 /*10*/]) && !TASK::IS_PED_GETTING_UP(Local_54[4 /*10*/]))
						{
							if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
								TASK::TASK_PLAY_ANIM(0, cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
								if (iLocal_270)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_IN_AREA(0, 1183.2872f, -2947.8699f, 4.8986f, 100f, 3f, 6f);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
								TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
								iLocal_267 = MISC::GET_GAME_TIMER();
								AUDIO::TRIGGER_MUSIC_EVENT("DHP1_ATTACKED");
								iLocal_274 = 0;
								iLocal_266 = 5;
							}
						}
					}
					else
					{
						iLocal_269 = 1;
						iLocal_264 = 0;
					}
					break;
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_267) > 8000)
					{
						if (!iLocal_274)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
								iLocal_274 = 1;
							}
						}
						if (__LIB_11__.func_720(Local_54[4 /*10*/]))
						{
							if (iLocal_270)
							{
								if (!PED::IS_PED_FLEEING(Local_54[4 /*10*/]))
								{
									TASK::TASK_SMART_FLEE_PED(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_54[4 /*10*/], joaat("SCRIPT_TASK_WANDER_IN_AREA")) != 1)
							{
								TASK::TASK_WANDER_IN_AREA(Local_54[4 /*10*/], 1183.2872f, -2947.8699f, 4.8986f, 100f, 3f, 6f);
							}
						}
					}
					if (!iLocal_270)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_271, true);
						if (__LIB_11__.func_720(Local_54[4 /*10*/]))
						{
							if ((PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 124) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 126))
							{
								__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
									TASK::TASK_HANDS_UP(0, 3000, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
									TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
									iLocal_267 = MISC::GET_GAME_TIMER();
									iLocal_270 = 1;
								}
							}
							else if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_54[4 /*10*/])) && PED::IS_PED_FACING_PED(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), 160f))
							{
								if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_271) != joaat("GROUP_MELEE") && iLocal_271 != joaat("WEAPON_UNARMED"))
								{
									__LIB_0__.func_203(&uLocal_78, 4, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
										TASK::TASK_HANDS_UP(0, 3000, PLAYER::PLAYER_PED_ID(), -1, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
										TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
										iLocal_270 = 1;
										iLocal_267 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (PED::HAS_PED_RECEIVED_EVENT(Local_54[4 /*10*/], 23))
							{
								__LIB_0__.func_203(&uLocal_78, 3, Local_54[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (__LIB_35__.func_536(&uLocal_78, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
									TASK::TASK_COWER(0, -1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
									TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
									iLocal_270 = 1;
								}
							}
							else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_54[4 /*10*/], PLAYER::PLAYER_PED_ID(), true))
							{
								TASK::CLEAR_PED_TASKS(Local_54[4 /*10*/]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_244);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.7754f, -2923.8516f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_244);
								TASK::TASK_PERFORM_SEQUENCE(Local_54[4 /*10*/], iLocal_244);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_244);
								iLocal_270 = 1;
								iLocal_267 = MISC::GET_GAME_TIMER();
							}
						}
					}
					break;
			}
			break;
	}
}

void func_286()//Position - 0x18A0B
{
	switch (iLocal_308)
	{
		case 0:
			switch (iLocal_307)
			{
				case 0:
					if (__LIB_11__.func_720(Local_53[0 /*2*/]))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							__LIB_6__.func_833();
							iLocal_305 = MISC::GET_GAME_TIMER();
							iLocal_307 = 1;
						}
					}
					break;
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_305) > 6000 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false))
					{
						__LIB_0__.func_203(&uLocal_78, 1, 0, "FLOYD", 0, 1);
						if (__LIB_35__.func_536(&uLocal_78, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					break;
				case 2:
					if (__LIB_0__.func_75())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false))
						{
							if (__LIB_0__.func_436())
							{
								__LIB_0__.func_488(0);
							}
						}
						else if (!__LIB_0__.func_436())
						{
							__LIB_0__.func_488(1);
						}
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				case 3:
					iLocal_308 = 2;
					iLocal_307 = 0;
					iLocal_305 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		case 2:
			switch (iLocal_307)
			{
				case 0:
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 324.76532f, -2974.4946f, -1f, true) < 110f)
					{
						__LIB_6__.func_833();
						iLocal_307 = 1;
					}
					break;
				case 1:
					if (__LIB_35__.func_536(&uLocal_78, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				case 2:
					if (__LIB_0__.func_75())
					{
					}
					else
					{
						iLocal_307 = 3;
					}
					break;
				case 3:
					iLocal_308 = 3;
					iLocal_307 = 0;
					iLocal_305 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		case 3:
			if (__LIB_11__.func_720(Local_53[2 /*2*/]) && __LIB_11__.func_720(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[2 /*2*/], false) && PED::IS_PED_IN_VEHICLE(Local_54[3 /*10*/], Local_53[2 /*2*/], false))
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_833();
							}
							else
							{
								iLocal_307 = 1;
							}
						}
						break;
					case 1:
						__LIB_5__.func_759(Local_54[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_307 = 2;
						break;
					case 2:
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_54[3 /*10*/]))
						{
							iLocal_307 = 3;
						}
						break;
					case 3:
						iLocal_308 = 4;
						iLocal_307 = 0;
						iLocal_305 = MISC::GET_GAME_TIMER();
						break;
					}
			}
			break;
		case 4:
			if (__LIB_11__.func_720(Local_53[2 /*2*/]) && __LIB_11__.func_720(Local_54[3 /*10*/]))
			{
				switch (iLocal_307)
				{
					case 0:
						if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(Local_54[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_6__.func_833();
							iLocal_305 = MISC::GET_GAME_TIMER();
							iLocal_307 = 1;
						}
						break;
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_305) > 2000)
						{
							__LIB_0__.func_203(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
							if (__LIB_35__.func_536(&uLocal_78, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_307 = 2;
							}
						}
						break;
					case 2:
						if (__LIB_0__.func_75())
						{
							if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(Local_54[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (__LIB_0__.func_436())
								{
									__LIB_0__.func_488(0);
								}
							}
							else if (!__LIB_0__.func_436())
							{
								__LIB_0__.func_488(1);
							}
						}
						else
						{
							iLocal_307 = 3;
						}
						break;
					case 3:
						iLocal_308 = 5;
						iLocal_307 = 0;
						iLocal_305 = MISC::GET_GAME_TIMER();
						break;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), -323.73004f, -2613.7017f, 5f, true) < 60f)
				{
					__LIB_0__.func_296();
					iLocal_307 = 3;
				}
			}
			break;
		case 5:
			switch (iLocal_307)
			{
				case 0:
					if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(Local_54[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -273.635f, -2558.8179f, 4.751376f, -405.72177f, -2695.8984f, 14.37495f, 51f, false, true, 0))
					{
						__LIB_6__.func_833();
						iLocal_307 = 1;
					}
					break;
				case 1:
					bLocal_304 = __LIB_0__.func_502();
					__LIB_0__.func_203(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (__LIB_35__.func_901(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (__LIB_35__.func_901(&uLocal_78, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				case 2:
					if (!__LIB_0__.func_75())
					{
						iLocal_307 = 3;
					}
					break;
				case 3:
					iLocal_308 = 6;
					iLocal_307 = 0;
					iLocal_305 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		case 6:
			switch (iLocal_307)
			{
				case 0:
					if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_VEHICLE(Local_54[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_53[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true), -323.73004f, -2613.7017f, 5f, true) < 40f)
					{
						__LIB_6__.func_833();
						iLocal_307 = 1;
					}
					break;
				case 1:
					bLocal_304 = __LIB_0__.func_502();
					__LIB_0__.func_203(&uLocal_78, 1, Local_54[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_304)
					{
						if (__LIB_35__.func_901(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_307 = 2;
						}
					}
					else if (__LIB_35__.func_901(&uLocal_78, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_307 = 2;
					}
					break;
				case 2:
					if (!__LIB_0__.func_75())
					{
						iLocal_307 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
	}
}

void func_296()//Position - 0x19383
{
	struct<3> Var0;
	float fVar1;
	if (iLocal_1981 == 1)
	{
		if (iLocal_1976 == 0)
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
				func_195(iLocal_1982);
			}
		}
		else if (iLocal_1976 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_314();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			__LIB_11__.func_701(&uLocal_309);
			if (!__LIB_0__.func_295())
			{
				func_311(iLocal_1982, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_11__.func_727(&uLocal_309, Var0, 50f, 0);
			}
			func_273(iLocal_1977);
			while (!__LIB_26__.func_476(&uLocal_309))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1977)
			{
				case 0:
					func_306();
					break;
				case 1:
					func_305();
					break;
				case 2:
					func_301();
					break;
				case 3:
					func_297();
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			AUDIO::TRIGGER_MUSIC_EVENT("DHP1_START");
			iLocal_1981 = 0;
			if (!__LIB_0__.func_295())
			{
				__LIB_11__.func_721(&uLocal_309);
			}
		}
	}
}

void func_297()//Position - 0x194BA
{
	if (!__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -337.7228f, -2623.8347f, 8.6595f, 135.24f, true, true, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[0 /*2*/], false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_53[0 /*2*/], false, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(Local_53[0 /*2*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_53[0 /*2*/], false);
	}
	if (!__LIB_11__.func_720(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), -337.7228f, -2627.0376f, 5.001f, 134.9894f, true, true, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_53[2 /*2*/], false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_53[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_53[2 /*2*/], false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[2 /*2*/], true);
	}
	if (!__LIB_11__.func_720(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), -331.728f, -2621.0059f, 7.8828f, 135.24f, true, true, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[1 /*2*/], true);
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	VEHICLE::SET_TRAILER_LEGS_RAISED(Local_53[1 /*2*/]);
	VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 297.5948f, -2950.3545f, 5.0008f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.1572f, 8.7838f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
}

void func_301()//Position - 0x197BB
{
	if (!__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 320.4211f, -2975.9927f, -11.1896f, 2.5159f, true, true, false);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_53[0 /*2*/], false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_53[0 /*2*/], false, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(Local_53[0 /*2*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_53[0 /*2*/], false);
	}
	if (!__LIB_11__.func_720(Local_53[2 /*2*/]))
	{
		Local_53[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 297.5948f, -2950.3545f, 5.0008f, 359.1976f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_53[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_53[2 /*2*/], false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[2 /*2*/], true);
	}
	if (!__LIB_11__.func_720(Local_53[1 /*2*/]))
	{
		Local_53[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 297.2917f, -2970.2456f, 4.8884f, 359.0483f, true, true, false);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_53[1 /*2*/], false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_53[1 /*2*/], true);
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_53[2 /*2*/], Local_53[1 /*2*/], 0.5f);
	VEHICLE::SET_TRAILER_LEGS_RAISED(Local_53[1 /*2*/]);
	VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_53[0 /*2*/], Local_53[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[4 /*2*/]))
	{
		Local_57[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 297.5948f, -2950.3545f, 5.0008f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[4 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[5 /*2*/]))
	{
		Local_57[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.1572f, 8.7838f, true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_57[5 /*2*/], Local_53[1 /*2*/], -1, Local_291, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	}
	while (!__LIB_20__.func_681(&(Local_54[3 /*10*/]), 32, Local_53[2 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(Local_53[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[2 /*2*/], -1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54[3 /*10*/], iLocal_259);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	iLocal_308 = 3;
	iLocal_307 = 0;
}

void func_305()//Position - 0x19AF1
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1272.3978f, -2982.072f, -3.2414f, 201.5542f, true, true, false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], true);
	}
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(Local_53[0 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], -1);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_306()//Position - 0x19B7F
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[0 /*2*/]))
	{
		Local_53[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1260.8022f, -3006.417f, 18.3289f, 178.9076f, true, true, false);
		__LIB_10__.func_728(Local_53[0 /*2*/], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_53[0 /*2*/], true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_53[0 /*2*/], true, 1);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_53[0 /*2*/], false);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54[4 /*10*/]))
	{
		Local_54[4 /*10*/] = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), 1229.3217f, -3002.8792f, 8.31861f, 270f, true, true);
		TASK::TASK_PLAY_ANIM(Local_54[4 /*10*/], cLocal_50, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_54[4 /*10*/], 512, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_54[4 /*10*/], 17, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54[4 /*10*/], iLocal_260);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_54[4 /*10*/], true);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_54[4 /*10*/], 45f);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(Local_54[4 /*10*/], 50f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(Local_54[4 /*10*/], -50f);
		AUDIO::STOP_PED_SPEAKING(Local_54[4 /*10*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[0 /*2*/]))
	{
		Local_57[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.6915f, -3008.286f, 23.73365f, true, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_57[0 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[1 /*2*/]))
	{
		Local_57[1 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.7521f, -3004.9941f, 22.68315f, true, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(Local_57[1 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[2 /*2*/]))
	{
		Local_57[2 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), 1249.1055f, -3007.9678f, 9.68718f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(Local_57[2 /*2*/], 0f, 0f, 90f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_57[2 /*2*/], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[3 /*2*/]))
	{
		Local_57[3 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), 1229.3217f, -3002.8792f, 8.31861f, true, true, false);
	}
	iLocal_248 = 0;
	TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
	if (__LIB_0__.func_295())
	{
		__LIB_6__.func_775(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	iLocal_268 = MISC::GET_GAME_TIMER();
	iLocal_308 = 0;
	iLocal_307 = 0;
}

void func_311(int iParam0, var uParam1, var uParam2)//Position - 0x1A89A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.1857f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		case 1:
			*uParam1 = { 1272.3978f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		case 2:
			*uParam1 = { 297.5948f, -2950.3545f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		case 3:
			*uParam1 = { -317.3936f, -2610.7983f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}

void func_314()//Position - 0x1ABA2
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
	func_208();
	if (__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		PHYSICS::SET_CGOFFSET(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		PHYSICS::DELETE_ROPE(&iLocal_290);
		iLocal_249 = 0;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		__LIB_0__.func_489(&(Local_54[iLocal_247 /*10*/].f_2));
		if (ENTITY::DOES_ENTITY_EXIST(Local_54[iLocal_247 /*10*/]) && !PED::IS_PED_INJURED(Local_54[iLocal_247 /*10*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_54[iLocal_247 /*10*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_54[iLocal_247 /*10*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_54[iLocal_247 /*10*/], false), true) + Vector(0f, -2f, 0f));
			}
			__LIB_0__.func_0(&(Local_54[iLocal_247 /*10*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_53[iLocal_247 /*2*/]))
		{
			__LIB_2__.func_165(Local_53[iLocal_247 /*2*/]);
			__LIB_11__.func_32(&(Local_53[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_57[iLocal_247 /*2*/]))
		{
			__LIB_0__.func_123(&(Local_57[iLocal_247 /*2*/]));
		}
		iLocal_247++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_245))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_245, false);
	}
	__LIB_0__.func_296();
	__LIB_20__.func_618(&Local_58, 1, 0);
	__LIB_0__.func_372(72);
	func_197(1, 0, 0, 3000, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, true, false, false, false);
	}
	MISC::CLEAR_AREA(1219.1857f, -2977.9f, 4.8653f, 300f, true, false, false, false);
	iLocal_268 = MISC::GET_GAME_TIMER();
	iLocal_251 = 0;
	iLocal_269 = 0;
	iLocal_264 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_307 = 0;
	iLocal_252 = 0;
	__LIB_11__.func_647(6, 0);
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		__LIB_11__.func_721(&uLocal_309);
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	AUDIO::STOP_STREAM();
}

void func_323()//Position - 0x1B047
{
	switch (iLocal_1976)
	{
		case 1:
			iLocal_1976 = 2;
			iLocal_1978 = -1;
			break;
		case 2:
			iLocal_1976 = 3;
			iLocal_1978 = 0;
			iLocal_1977 = iLocal_1979;
			break;
		case 3:
			iLocal_1979 = -1;
			iLocal_1976 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1980) > 2500)
			{
				iLocal_1980 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_327()//Position - 0x1B28B
{
	struct<3> Var0;
	var uVar1;
	if (__LIB_0__.func_294() || __LIB_0__.func_2(0))
	{
		if (__LIB_0__.func_294())
		{
			iLocal_1982 = __LIB_0__.func_315();
			if (Global_94618)
			{
				iLocal_1982++;
			}
			if (iLocal_1982 >= 3)
			{
				iLocal_1982 = 3;
			}
		}
		else if (__LIB_0__.func_2(0))
		{
			iLocal_1982 = 0;
		}
		if (__LIB_0__.func_294())
		{
			func_311(iLocal_1982, &Var0, &uVar1);
			__LIB_11__.func_728(Var0, uVar1, 1, 0);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_1981 = 1;
	}
	else
	{
		__LIB_42__.func_415(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_1977 = 0;
		func_273(0);
	}
	iLocal_1978 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), false);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_259);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_260);
	PED::ADD_RELATIONSHIP_GROUP("REL_BUDDY", &iLocal_259);
	PED::ADD_RELATIONSHIP_GROUP("rel_dock", &iLocal_260);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_260, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_259);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_259, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_260, iLocal_260);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_53[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
			Local_53[0 /*2*/] = Global_96938[0];
			__LIB_10__.func_728(Local_53[0 /*2*/], 0);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_53[0 /*2*/], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54[4 /*10*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
			Local_54[4 /*10*/] = Global_96938.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_54[4 /*10*/], iLocal_260);
			PED::SET_PED_CONFIG_FLAG(Local_54[4 /*10*/], 208, true);
			PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_54[4 /*10*/], 45f);
			PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(Local_54[4 /*10*/], 50f);
			PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(Local_54[4 /*10*/], -50f);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[0], true, true);
			Local_57[0 /*2*/] = Global_96938.f_28[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[1 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[1], true, true);
			Local_57[1 /*2*/] = Global_96938.f_28[1];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[2 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[2], true, true);
			Local_57[2 /*2*/] = Global_96938.f_28[2];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_57[3 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_28[3], true, true);
			Local_57[3 /*2*/] = Global_96938.f_28[3];
		}
	}
	if (Global_96938.f_357)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[0])))
		{
			PHYSICS::ROPE_CHANGE_SCRIPT_OWNER(Global_96938.f_37[0], true, true);
			Local_55[0 /*5*/] = Global_96938.f_37[0];
			Global_96938.f_37[0] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[1])))
		{
			PHYSICS::ROPE_CHANGE_SCRIPT_OWNER(Global_96938.f_37[1], true, true);
			Local_55[1 /*5*/] = Global_96938.f_37[1];
			Global_96938.f_37[1] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[2])))
		{
			PHYSICS::ROPE_CHANGE_SCRIPT_OWNER(Global_96938.f_37[2], true, true);
			Local_55[2 /*5*/] = Global_96938.f_37[2];
			Global_96938.f_37[2] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[3])))
		{
			PHYSICS::ROPE_CHANGE_SCRIPT_OWNER(Global_96938.f_37[3], true, true);
			Local_55[3 /*5*/] = Global_96938.f_37[3];
			Global_96938.f_37[3] = 0;
		}
		iLocal_248 = 1;
	}
	else
	{
		iLocal_248 = 0;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__.func_203(&uLocal_78, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	__LIB_10__.func_889(1);
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	__LIB_11__.func_731(72);
}

void func_332()//Position - 0x1B7EF
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (__LIB_11__.func_720(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_11__.func_720(Local_53[0 /*2*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_53[0 /*2*/], false))
			{
				PED::SET_PED_COORDS_NO_GANG(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_53[0 /*2*/], true) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_208();
	if (__LIB_11__.func_720(Local_53[0 /*2*/]))
	{
		PHYSICS::SET_CGOFFSET(Local_53[0 /*2*/], Local_56);
	}
	Global_96938.f_357 = 0;
	if (iLocal_249)
	{
		PHYSICS::DELETE_ROPE(&iLocal_290);
		iLocal_249 = 0;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_245))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_245, false);
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (8 - 1))
	{
		if (__LIB_11__.func_720(Local_54[iLocal_247 /*10*/]))
		{
			__LIB_0__.func_489(&(Local_54[iLocal_247 /*10*/].f_2));
			if (HUD::DOES_BLIP_EXIST(Local_54[iLocal_247 /*10*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_54[iLocal_247 /*10*/].f_1));
			}
			if (PED::IS_PED_IN_GROUP(Local_54[iLocal_247 /*10*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_54[iLocal_247 /*10*/]);
			}
			if (Local_54[iLocal_247 /*10*/] != PLAYER::PLAYER_PED_ID())
			{
				__LIB_0__.func_124(&(Local_54[iLocal_247 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_247++;
	}
	iLocal_247 = 0;
	while (iLocal_247 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_53[iLocal_247 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_53[iLocal_247 /*2*/].f_1));
		}
		if (__LIB_11__.func_720(Local_53[iLocal_247 /*2*/]))
		{
			if (iLocal_247 != 0)
			{
				__LIB_0__.func_106(&(Local_53[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	__LIB_0__.func_367(0);
	iLocal_247 = 0;
	while (iLocal_247 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_57[iLocal_247 /*2*/]))
		{
			if (Local_57[iLocal_247 /*2*/] == Local_57[4 /*2*/] || Local_57[iLocal_247 /*2*/] == Local_57[5 /*2*/])
			{
				__LIB_0__.func_122(&(Local_57[iLocal_247 /*2*/]), 1);
			}
			else
			{
				__LIB_0__.func_123(&(Local_57[iLocal_247 /*2*/]));
			}
		}
		iLocal_247++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), true);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_10__.func_889(0);
	func_217(&Local_58, 0);
	__LIB_11__.func_729();
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_335()//Position - 0x1BA67
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
				if (!func_100(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_260();
		}
	}
}

void func_337()//Position - 0x1BB16
{
	__LIB_0__.func_428(787.0854f, -2973.8716f, 5.0585f, 256.91f);
}

