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
	float fLocal_48 = 0f;
	struct<2> Local_49[10];
	struct<15> Local_50[7];
	struct<44> Local_51[29];
	struct<7> Local_52[4];
	struct<2> Local_53[7];
	var uLocal_54 = 16;
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
	var uLocal_218 = 0;
	struct<6> Local_219 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_220 = 0;
	var uLocal_221 = 1092616192;
	var uLocal_222 = 1101004800;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 3;
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
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265[3] = { 0, 0, 0 };
	int iLocal_266[1] = { 0 };
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[3] = { 0, 0, 0 };
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	float fLocal_282 = 0f;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<3> Local_309 = { 0, 0, 0 } ;
	float fLocal_310 = 0f;
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
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	bool bLocal_324 = 0;
	bool bLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362[2] = { 0, 0 };
	int iLocal_363[3] = { 0, 0, 0 };
	int iLocal_364[3] = { 0, 0, 0 };
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	bool bLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	char* sLocal_370 = NULL;
	int iLocal_371 = 0;
	bool bLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	bool bLocal_375 = 0;
	struct<3> Local_376 = { 0, 0, 0 } ;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 21;
	var uLocal_394 = 6;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	struct<3> Local_404 = { 0, 0, 0 } ;
	int iLocal_405 = 0;
	bool bLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	var uLocal_417 = 0;
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
	int iLocal_432[2] = { 0, 0 };
	int iLocal_433 = 4;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 4;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 4;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 4;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 4;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 4;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 4;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	struct<21> Local_477 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_491 = 0;
	bool bLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	float fLocal_496 = 0f;
	float fLocal_497 = 0f;
	float fLocal_498 = 0f;
	struct<3> Local_499 = { 0, 0, 0 } ;
	struct<3> Local_500 = { 0, 0, 0 } ;
	struct<3> Local_501 = { 0, 0, 0 } ;
	bool bLocal_502 = 0;
	bool bLocal_503 = 0;
	float fLocal_504 = 0f;
	float fLocal_505 = 0f;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	float fLocal_510 = 0f;
	bool bLocal_511 = 0;
	float fLocal_512 = 0f;
	int iLocal_513 = 0;
	var uLocal_514 = 30;
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
	var uLocal_665 = 10;
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
	var uLocal_716 = 10;
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
	var uLocal_787 = 20;
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
	var uLocal_888 = 20;
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
	var uLocal_989 = 30;
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
	var uLocal_1170 = 5;
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
	var uLocal_1201 = 7;
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
	var uLocal_1251 = 5;
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
	var uLocal_1277 = 3;
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
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 21;
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
	var uLocal_1333 = 0;
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
	var uLocal_1363 = 0;
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
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
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
	var uLocal_1418 = 10;
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
	var uLocal_1445 = 0;
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
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 5;
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
	var uLocal_1495 = 5;
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
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 7;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
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
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 12;
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
	var uLocal_1554 = 0;
	var uLocal_1555 = 12;
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
	var uLocal_1568 = 12;
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
	var uLocal_1581 = 9;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 9;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
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
	var uLocal_1605 = 0;
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
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 12;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 12;
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
	var uLocal_1650 = 12;
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
	var uLocal_1663 = 9;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 9;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
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
	var uLocal_1691 = 0;
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
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 12;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 12;
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
	var uLocal_1732 = 12;
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
	var uLocal_1745 = 9;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 9;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
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
	var uLocal_1773 = 0;
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
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 12;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 12;
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
	var uLocal_1814 = 12;
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
	var uLocal_1827 = 9;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 9;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
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
	var uLocal_1855 = 0;
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
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 12;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 12;
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
	var uLocal_1896 = 12;
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
	var uLocal_1909 = 9;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 9;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
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
	var uLocal_1937 = 0;
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
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 12;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 12;
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
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 12;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 9;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 9;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 12;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 12;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 12;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 9;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 9;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	int iLocal_2099 = 0;
	int iLocal_2100 = 0;
	struct<7> Local_2101[21];
	int iLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 2;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 2;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 20;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = -1;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 1065353216;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = -1;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 1065353216;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = -1;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 1065353216;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = -1;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 1065353216;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = -1;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 1065353216;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = -1;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 1065353216;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = -1;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 1065353216;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = -1;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 1065353216;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = -1;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 1065353216;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = -1;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 1065353216;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = -1;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 1065353216;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = -1;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 1065353216;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = -1;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 1065353216;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = -1;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 1065353216;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = -1;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 1065353216;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = -1;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 1065353216;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = -1;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 1065353216;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = -1;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 1065353216;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = -1;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 1065353216;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = -1;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 1065353216;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 16;
	var uLocal_3255 = 0;
	var uLocal_3256 = -1082130432;
	var uLocal_3257 = 0;
	var uLocal_3258 = -1082130432;
	var uLocal_3259 = 0;
	var uLocal_3260 = -1082130432;
	var uLocal_3261 = 0;
	var uLocal_3262 = -1082130432;
	var uLocal_3263 = 0;
	var uLocal_3264 = -1082130432;
	var uLocal_3265 = 0;
	var uLocal_3266 = -1082130432;
	var uLocal_3267 = 0;
	var uLocal_3268 = -1082130432;
	var uLocal_3269 = 0;
	var uLocal_3270 = -1082130432;
	var uLocal_3271 = 0;
	var uLocal_3272 = -1082130432;
	var uLocal_3273 = 0;
	var uLocal_3274 = -1082130432;
	var uLocal_3275 = 0;
	var uLocal_3276 = -1082130432;
	var uLocal_3277 = 0;
	var uLocal_3278 = -1082130432;
	var uLocal_3279 = 0;
	var uLocal_3280 = -1082130432;
	var uLocal_3281 = 0;
	var uLocal_3282 = -1082130432;
	var uLocal_3283 = 0;
	var uLocal_3284 = -1082130432;
	var uLocal_3285 = 0;
	var uLocal_3286 = -1082130432;
	var uLocal_3287 = 16;
	var uLocal_3288 = 0;
	var uLocal_3289 = -1082130432;
	var uLocal_3290 = 0;
	var uLocal_3291 = -1082130432;
	var uLocal_3292 = 0;
	var uLocal_3293 = -1082130432;
	var uLocal_3294 = 0;
	var uLocal_3295 = -1082130432;
	var uLocal_3296 = 0;
	var uLocal_3297 = -1082130432;
	var uLocal_3298 = 0;
	var uLocal_3299 = -1082130432;
	var uLocal_3300 = 0;
	var uLocal_3301 = -1082130432;
	var uLocal_3302 = 0;
	var uLocal_3303 = -1082130432;
	var uLocal_3304 = 0;
	var uLocal_3305 = -1082130432;
	var uLocal_3306 = 0;
	var uLocal_3307 = -1082130432;
	var uLocal_3308 = 0;
	var uLocal_3309 = -1082130432;
	var uLocal_3310 = 0;
	var uLocal_3311 = -1082130432;
	var uLocal_3312 = 0;
	var uLocal_3313 = -1082130432;
	var uLocal_3314 = 0;
	var uLocal_3315 = -1082130432;
	var uLocal_3316 = 0;
	var uLocal_3317 = -1082130432;
	var uLocal_3318 = 0;
	var uLocal_3319 = -1082130432;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = -1082130432;
	var uLocal_3337 = -1082130432;
	var uLocal_3338 = 1;
	var uLocal_3339 = 1;
	var uLocal_3340 = 1;
	var uLocal_3341 = -1;
	var uLocal_3342 = -1;
	var uLocal_3343 = -1;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	float fLocal_3350 = 0f;
	float fLocal_3351 = 0f;
	float fLocal_3352 = 0f;
	float fLocal_3353 = 0f;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
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
	fLocal_48 = 1f;
	iLocal_285 = 1;
	iLocal_293 = -1;
	sLocal_370 = "alert_gunshot";
	iLocal_384 = -1;
	iLocal_408 = AUDIO::GET_SOUND_ID();
	iLocal_409 = AUDIO::GET_SOUND_ID();
	iLocal_410 = AUDIO::GET_SOUND_ID();
	iLocal_411 = AUDIO::GET_SOUND_ID();
	iLocal_414 = AUDIO::GET_SOUND_ID();
	iLocal_415 = AUDIO::GET_SOUND_ID();
	iLocal_418 = joaat("WEAPON_ASSAULTRIFLE");
	iLocal_419 = joaat("WEAPON_SNIPERRIFLE");
	iLocal_420 = joaat("WEAPON_STICKYBOMB");
	iLocal_421 = joaat("WEAPON_COMBATPISTOL");
	iLocal_422 = joaat("WEAPON_COMBATPISTOL");
	iLocal_494 = -1;
	iLocal_495 = 1000;
	fLocal_496 = 500f;
	fLocal_497 = 0.2f;
	fLocal_498 = -1f;
	Local_499 = { 0f, -2.2f, -2.9f };
	Local_500 = { 0f, 0f, 0f };
	Local_501 = { 0f, 0f, -90f };
	bLocal_502 = true;
	fLocal_504 = 0.787f;
	fLocal_505 = 1f;
	iLocal_506 = 1000;
	iLocal_507 = 600;
	iLocal_508 = 300;
	iLocal_509 = 450;
	fLocal_510 = 0.25f;
	bLocal_511 = true;
	fLocal_512 = 0.65f;
	fLocal_3350 = 0.00142f;
	fLocal_3351 = 0.125f;
	fLocal_3352 = 0.5f;
	fLocal_3353 = 0.195f;
	iLocal_3354 = 1000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (!Local_477.f_20)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("dh2a_dead");
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				Global_100441.f_12[0] = 1;
			}
			else if (PLAYER::PLAYER_PED_ID() == func_1037())
			{
				Global_100441.f_12[0] = 0;
			}
			func_1035();
			func_1032(1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	func_1028();
	func_1026();
	if (__LIB_0__::func_323())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_430 = __LIB_0__::func_344();
		if (Global_94618)
		{
			iLocal_430++;
		}
		bVar2 = false;
		bVar3 = false;
		switch (iLocal_430)
		{
			case 0:
				Var0 = { -1151.634f, -1519.498f, 9.6327f };
				fVar1 = 215f;
				break;
			case 1:
				Var0 = { -93.3159f, -2368.9175f, 13.296f };
				fVar1 = 337.5851f;
				bVar2 = true;
				break;
			case 2:
				Var0 = { -83.5905f, -2361.7979f, 13.2963f };
				fVar1 = 119.7045f;
				bVar3 = true;
				break;
			case 3:
				Var0 = { -94.9569f, -2371.877f, 13.2969f };
				fVar1 = 97.3018f;
				bVar3 = true;
				break;
			case 4:
				Var0 = { -129.6871f, -2366.8972f, 8.3193f };
				fVar1 = 183.9491f;
				bVar3 = true;
				break;
			case 5:
				Var0 = { -191.4221f, -2365.4763f, 8.3193f };
				fVar1 = 176.1654f;
				bVar3 = true;
				break;
			case 6:
				Var0 = { -221.8633f, -2376.6187f, 12.3329f };
				fVar1 = 35.7369f;
				bVar2 = true;
				break;
			case 7:
				Var0 = { -143.8203f, -2488.2612f, 43.4412f };
				fVar1 = 35.7369f;
				bVar2 = true;
				break;
			case 8:
				Var0 = { -143.8203f, -2488.2612f, 43.4412f };
				fVar1 = 10.7369f;
				bVar2 = true;
				break;
			case 9:
			case 10:
				Var0 = { -90.4927f, -2288.003f, -1.3081f };
				fVar1 = 130.4705f;
				bVar3 = true;
				break;
			case 11:
				Var0 = { -332.2139f, -2570.9912f, 5.001f };
				fVar1 = 97.2111f;
				break;
		}
		if (bVar2)
		{
			if (func_1020(1, 1, 1))
			{
				__LIB_0__::func_427(Var0, fVar1, 1, 0);
			}
		}
		else if (bVar3)
		{
			if (func_1020(0, 1, 1))
			{
				__LIB_0__::func_427(Var0, fVar1, 1, 0);
			}
		}
		else if (func_1020(2, 1, 1))
		{
			__LIB_0__::func_427(Var0, fVar1, 1, 0);
		}
		if (iLocal_430 == 7)
		{
			iLocal_429 = 6;
		}
		else if (iLocal_430 == 8)
		{
			iLocal_429 = 7;
		}
		else if (iLocal_430 == 9)
		{
			iLocal_429 = 8;
		}
		else if (iLocal_430 == 10)
		{
			iLocal_429 = 9;
		}
		else if (iLocal_430 == 11)
		{
			iLocal_429 = 10;
		}
		else
		{
			iLocal_429 = iLocal_430;
		}
		iLocal_428 = 1;
		iLocal_431 = 0;
		func_1018(iLocal_429);
	}
	else
	{
		__LIB_43__::func_206(0, "stage 0: drive to bridge", 0, 0, 0, 1);
		iLocal_424 = 0;
		func_1018(iLocal_424);
		func_961();
		iLocal_431 = 0;
	}
	iLocal_425 = 0;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheMerryweatherHeistFreight", 0);
		__LIB_17__::func_630(&uLocal_514);
		__LIB_16__::func_913(&uLocal_1524);
		func_957();
		func_933();
		func_846();
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x4CE
{
	if (iLocal_428)
	{
		return;
	}
	switch (iLocal_424)
	{
		case 0:
			func_778();
			break;
		case 1:
			func_767();
			break;
		case 2:
			func_766();
			break;
		case 3:
			func_765();
			break;
		case 4:
			func_763();
			break;
		case 5:
			func_740();
			break;
		case 6:
			func_718();
			break;
		case 7:
			func_700();
			break;
		case 8:
			func_692();
			break;
		case 9:
			func_300();
			break;
		case 10:
			func_2();
			break;
	}
}

void func_2()//Position - 0x576
{
	struct<2> Var0;
	switch (iLocal_425)
	{
		case 0:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_43("MICHAEL", joaat("Player_Zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if ((__LIB_0__::func_90() && SCRIPT::HAS_SCRIPT_LOADED("docks2ASubHandler")) && func_180(&(Local_49[0 /*2*/]), -329.75f, -2577.94f, 5.64f, 128.25f))
			{
				STREAMING::REMOVE_PTFX_ASSET();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
				{
					ENTITY::DETACH_ENTITY(iLocal_269, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_269, "Miltary_Pickup", 1, 0, 0);
				}
				if (__LIB_0__::func_715(Local_49[3 /*2*/]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_49[3 /*2*/], "submersible", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Sub_Rope_complete", 2, joaat("prop_cs_sub_rope_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "DOM_Flatbed_truck", 2, joaat("flatbed"), 0);
				if (__LIB_0__::func_715(Local_50[1 /*15*/]))
				{
					__LIB_17__::func_427(Local_50[1 /*15*/], 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_50[1 /*15*/], "MICHAEL", 0, __LIB_12__::func_894(0), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_50[1 /*15*/], "MICHAEL", 2, __LIB_12__::func_894(0), 0);
				}
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				}
				__LIB_0__::func_366(0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_425++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				AUDIO::STOP_AUDIO_SCENES();
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_MISSION_COMPLETE");
				MISC::CLEAR_AREA(-332.2429f, -2571.7437f, 5.00101f, 50f, true, false, false, false);
				iLocal_280 = 0;
				iLocal_425++;
			}
			break;
		case 2:
			if (__LIB_16__::func_903(func_150()))
			{
				if (__LIB_0__::func_453(func_150(), 1) == 88)
				{
					func_122(func_150(), 14, Local_50[2 /*15*/].f_12, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_122(func_150(), 14, Local_50[2 /*15*/].f_13, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					func_122(func_150(), 8, Local_50[2 /*15*/].f_14, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_279))
			{
				iLocal_279 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Sub_Rope_complete", joaat("prop_cs_sub_rope_01"));
			}
			if (iLocal_280 == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*15*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0)))
					{
						Local_50[1 /*15*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
						__LIB_17__::func_43("MICHAEL", joaat("Player_Zero"), 11);
					}
				}
				else if (__LIB_16__::func_903(Local_50[1 /*15*/]))
				{
					if (!func_32(Local_50[1 /*15*/], 12, 11))
					{
						func_122(Local_50[1 /*15*/], 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (PED::GET_PED_PROP_INDEX(Local_50[1 /*15*/], 1) > -1)
					{
						func_122(Local_50[1 /*15*/], 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iLocal_280 = 1;
				}
			}
			if (__LIB_16__::func_903(Local_49[3 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_FULLBEAM(Local_49[3 /*2*/], false);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_49[3 /*2*/], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_49[5 /*2*/]))
			{
				Local_49[5 /*2*/] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", joaat("flatbed")));
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 112000)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_49[5 /*2*/], false))
				{
					VEHICLE::SET_VEHICLE_LIGHTS(Local_49[5 /*2*/], 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", joaat("Player_Two")))
			{
				iLocal_316 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				iLocal_317 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Sub_Rope_complete", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
				{
					iLocal_319 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_279, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("submersible", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[3 /*2*/]))
				{
					iLocal_318 = 1;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49[3 /*2*/], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], true);
				}
			}
			if ((iLocal_318 && iLocal_319) && !iLocal_320)
			{
				Var0.f_0 = Local_49[3 /*2*/];
				Var0.f_1 = iLocal_279;
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS("docks2ASubHandler", &Var0, 2, 1424);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("docks2ASubHandler");
				iLocal_320 = 1;
			}
			if ((iLocal_316 && iLocal_317) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[5 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[5 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_50[1 /*15*/]))
				{
					PED::DELETE_PED(&(Local_50[1 /*15*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[0 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[0 /*2*/]));
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x9C0
{
	int iVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("dh2a_mission_complete");
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_878(1))
	{
		__LIB_16__::func_866(1, __LIB_16__::func_594(1, iVar0), 1);
		iVar0++;
	}
	__LIB_17__::func_775(0);
	__LIB_16__::func_849(1, 10000000);
	__LIB_16__::func_877(1, 10000000);
	__LIB_16__::func_874(7, 0);
	__LIB_0__::func_526(0, 0);
	func_1032(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_32(int iParam0, int iParam1, int iParam2)//Position - 0x10B8
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
				if (!func_32(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_32(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_32(iParam0, 14, iVar4))
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
			if (!func_32(iParam0, 14, uVar8[iVar7]))
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

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1C25C
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
										func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_129(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_128(iParam0, iVar10, &iVar4, 1))
							{
								func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_122(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_122(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_122(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_122(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_128(iParam0, iVar10, &iVar4, 0))
		{
			func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_123(iParam0, iVar10, &iVar4))
		{
			func_122(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_123(int iParam0, int iParam1, int iParam2)//Position - 0x1CA6C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_32(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1CCC3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_32(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0, int iParam1, int iParam2)//Position - 0x1CD59
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
				if (func_32(iParam0, iParam1, iVar0))
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
				if (func_32(iParam0, iParam1, iVar1))
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

int func_150()//Position - 0x1EF8F
{
	return Local_50[2 /*15*/];
}

int func_180(int iParam0, struct<3> Param1, float fParam2)//Position - 0x21120
{
	if (__LIB_16__::func_327())
	{
		if (__LIB_14__::func_742(0f, 0f, 0f, 1) && VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()))
		{
			__LIB_16__::func_872();
			if (__LIB_16__::func_871())
			{
				*iParam0 = __LIB_32__::func_33(Param1, fParam2);
				return 1;
			}
		}
		else if (__LIB_17__::func_478(iParam0, 1, Param1, fParam2, 1, 1))
		{
			return 1;
		}
	}
	else if (__LIB_17__::func_478(iParam0, 1, Param1, fParam2, 1, 1))
	{
		return 1;
	}
	return 0;
}

void func_300()//Position - 0x2D5A0
{
	struct<3> Var0;
	struct<3> Var1;
	func_690();
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1sunk"), -165.34f, -2350.03f, 0, 0);
	HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 197, true);
	}
	else
	{
		HUD::SET_RADAR_ZOOM_PRECISE(85f);
	}
	if (iLocal_425 < 9)
	{
		if (__LIB_16__::func_903(func_1038()))
		{
			if (PED::IS_PED_SWIMMING(func_1038()))
			{
				if (func_129(func_1038(), 8, -1) != 22)
				{
					func_122(func_1038(), 8, 22, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	Var0 = { -191.0846f, -2330.0593f, -19.2324f };
	Var1 = { 0f, 0f, 180f };
	switch (iLocal_425)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_351 = 0;
			iLocal_352 = 0;
			__LIB_43__::func_206(10, "Stage 9: the goods", 1, 0, 0, 1);
			if (__LIB_16__::func_903(Local_49[3 /*2*/]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_49[3 /*2*/], -466.7967f, -2381.3794f, -12.1213f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_49[3 /*2*/], 279.5468f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], true);
			}
			else
			{
				Local_49[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -466.7967f, -2381.3794f, -12.1213f, 279.5468f, true, true, false);
				__LIB_14__::func_867(Local_49[3 /*2*/], 0);
				__LIB_16__::func_858(Local_49[3 /*2*/]);
				ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], true);
			}
			iLocal_269 = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), -191.1227f, -2331.3381f, -19.40053f, true, true, false);
			func_687(func_1038(), 1, 1);
			PED::SET_PED_DIES_IN_WATER(func_1038(), false);
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@swimtocontainer");
			__LIB_0__::func_222(&uLocal_54, 1, func_1038(), "MICHAEL", 0, 1);
			__LIB_15__::func_306(1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
			}
			MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
			MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
			if (ENTITY::DOES_ENTITY_EXIST(Local_49[0 /*2*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_49[0 /*2*/]));
			}
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_294))
			{
				iLocal_294 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -75.1f, -2286.4f, 1.5f, 3.1f, 0f, 132.1f, 50f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_294, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (__LIB_16__::func_903(Local_49[6 /*2*/]))
				{
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_294, Local_49[6 /*2*/], 3.6348f, -1.745f, 1.15f, true);
				}
				iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_293, "missheistdocks2aswitchig_8", "ig_8_switch", 1000f, -4f, 4, 0, 1000f, 0);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_293, Local_49[6 /*2*/], 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_293, 0.35f);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", false, 0);
			}
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_330 = 0;
			iLocal_331 = 0;
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_328 = 0;
			iLocal_329 = 0;
			iLocal_285 = 1;
			iLocal_286 = 0;
			iLocal_2100 = 0;
			iLocal_513 = 0;
			__LIB_0__::func_499(616, 0);
			__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_ROLL", 7, 0, 0, 0);
			iLocal_425++;
			break;
		case 1:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.99f || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
				{
					iLocal_296 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_296, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0.07f, 0f, 0.03f, -90f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_297 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", iLocal_296, 0f, 0f, 0.11f, 0f, 0f, 0f, 1f, false, false, false);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DIVER");
				}
				if (CAM::DOES_CAM_EXIST(iLocal_294))
				{
					if (CAM::IS_CAM_RENDERING(iLocal_294))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
					CAM::DESTROY_CAM(iLocal_294, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_295))
				{
					CAM::DESTROY_CAM(iLocal_295, false);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_PLAY_ANIM(0, "SWIMMING@scuba", "dive_run", 4f, -2f, 1000, 1, 0f, false, false, false);
				TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Diving_Swim"), false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_49[6 /*2*/], false);
				MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("PORT_heist_underwater", 0.5f);
				iLocal_286 = 1;
				iLocal_425++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.675f)
			{
				if (CAM::IS_CAM_RENDERING(iLocal_294))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					RECORDING::REPLAY_STOP_EVENT();
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.65f)
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
				{
					iLocal_296 = OBJECT::CREATE_OBJECT(joaat("prop_flare_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1f), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_296, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0.07f, 0f, 0.03f, -90f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_297 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_bio_flare", iLocal_296, 0f, 0f, 0.11f, 0f, 0f, 0f, 1f, false, false, false);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DIVER");
				}
				if (!iLocal_2100)
				{
					if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2099))
					{
						iLocal_2099 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-159.7051f, -2374.3184f, 5.0459f, 50f, "des_shipsink");
					}
					else
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2099, 9);
						STREAMING::REQUEST_IPL("sunkcargoship");
						iLocal_2100 = 1;
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > fLocal_512)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (iLocal_513 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY(__LIB_1__::func_295(__LIB_0__::func_323(), "CamPushInNeutral", "CamPushInMichael"), 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_513 = 1;
						}
					}
				}
			}
			break;
		case 2:
			if (func_481(&(Local_50[2 /*15*/]), 2, Local_49[3 /*2*/], -1, 1, 0, 0))
			{
				iLocal_433[2] = Local_50[2 /*15*/];
				__LIB_16__::func_905(&uLocal_514, "missheistdocks2aswitchig_8");
				__LIB_16__::func_905(&uLocal_514, "SWIMMING@scuba");
				__LIB_16__::func_912(&uLocal_514, joaat("prop_flare_01"));
				__LIB_0__::func_222(&uLocal_54, 2, Local_50[2 /*15*/], "TREVOR", 0, 1);
				iLocal_425++;
			}
			break;
		case 3:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_FRCRT", 7, 0, 0, 0))
				{
					iLocal_425++;
				}
			}
			break;
		case 4:
			if (!iLocal_327)
			{
				if (!iLocal_330)
				{
					if (__LIB_16__::func_854())
					{
						__LIB_0__::func_229("DCKH_LOCCARGO", 7500, 1);
						iLocal_330 = 1;
					}
				}
				else if (!iLocal_326)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_LOOK", 7, 0, 0, 0))
						{
							iLocal_326 = 1;
						}
					}
				}
				else if (!iLocal_329)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_HOLDUP", 7, 0, 0, 0))
						{
							iLocal_329 = 1;
						}
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_269, true), true) < 15f)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_267))
				{
					iLocal_267 = __LIB_0__::func_643(iLocal_269);
				}
				if (!iLocal_327)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DEVICE", 7, 0, 0, 0))
						{
							iLocal_327 = 1;
						}
					}
				}
				else if (!iLocal_328)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GO", 7, 0, 0, 0))
						{
							iLocal_328 = 1;
						}
					}
				}
			}
			if (!__LIB_0__::func_1("DCKH_SCUBH"))
			{
				if (!iLocal_338)
				{
					__LIB_0__::func_151("DCKH_SONARH", -1);
					iLocal_338 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), ENTITY::GET_ENTITY_COORDS(iLocal_269, true), 5f, 5f, 4f, false, true, 0))
			{
				iLocal_412 = 1;
				iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
				iLocal_260 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_293, "missheistdocks2a@swimtocontainer", "Michael_Swim_to_Container", 1000f, -8f, 0, 0, 1000f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_293, "CAM_Swim_to_Container", "missheistdocks2a@swimtocontainer");
				CAM::SET_CAM_ACTIVE(iLocal_260, true);
				func_471(0, -195.9108f, -2318.3926f, -18.6068f, 1, 0, 1, 3000, 0);
				if (HUD::DOES_BLIP_EXIST(iLocal_267))
				{
					HUD::REMOVE_BLIP(&iLocal_267);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 3);
				iLocal_290 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_498(0, -1);
				if (__LIB_16__::func_903(Local_49[3 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_49[3 /*2*/], 4);
					VEHICLE::SET_VEHICLE_FULLBEAM(Local_49[3 /*2*/], true);
				}
				func_469();
				iLocal_330 = 0;
				iLocal_331 = 0;
				iLocal_326 = 0;
				iLocal_327 = 0;
				iLocal_328 = 0;
				iLocal_329 = 0;
				iLocal_425++;
				iLocal_2102 = 1;
				func_449(&uLocal_2103, 1);
			}
			break;
		case 5:
			if (!iLocal_326)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CONF", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.43f)
			{
				iLocal_326 = 0;
				iLocal_327 = 0;
				func_446(0, 1, 0, 0, 0, 0);
				iLocal_2102 = 2;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_296))
					{
						ENTITY::DETACH_ENTITY(iLocal_296, true, true);
					}
				}
				if (__LIB_16__::func_896(&iLocal_433, 2))
				{
					if (__LIB_31__::func_990(&iLocal_433, 1, 1, 0))
					{
						iLocal_425++;
					}
				}
			}
			break;
		case 6:
			if (func_449(&uLocal_2103, 1))
			{
				if (PLAYER::PLAYER_PED_ID() == func_150())
				{
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_MINISUB");
					ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], false);
					AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
					TASK::CLEAR_PED_TASKS(func_1038());
					ENTITY::SET_ENTITY_COORDS(func_1038(), -231.6731f, -2309.1953f, -24.9887f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(func_1038(), 95.642f);
					ENTITY::FREEZE_ENTITY_POSITION(func_1038(), true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_1038(), true, 1);
					ENTITY::SET_ENTITY_COORDS(iLocal_269, -231.2176f, -2301.2437f, -26.59173f, true, false, false, true);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_269, 40f, 1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, 0f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_269, true);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CONTROL_SUB"))
					{
						AUDIO::START_AUDIO_SCENE("DH2A_CONTROL_SUB");
					}
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_INC", 7, 0, 0, 0);
					iLocal_491 = 0;
					func_372(1, 0, 1, 3000, 0);
					iLocal_290 = MISC::GET_GAME_TIMER();
					__LIB_16__::func_905(&uLocal_514, "missheistdocks2a@swimtocontainer");
					iLocal_330 = 0;
					iLocal_425++;
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
			}
			break;
		case 7:
			if (!iLocal_330)
			{
				if (__LIB_16__::func_854())
				{
					iLocal_330 = 1;
					__LIB_0__::func_382("DCKH_PICK", 7500, 1);
					__LIB_0__::func_151("DCKH_SUB_HELP", -1);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				}
			}
			if (!iLocal_326)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DRIVE", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			if (!iLocal_332)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_150(), true), ENTITY::GET_ENTITY_COORDS(iLocal_269, true)) < 400f)
				{
					__LIB_0__::func_151("DCKH_PCKUPH", -1);
					iLocal_332 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(func_1038()) && ENTITY::DOES_ENTITY_EXIST(iLocal_269))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_150(), true), ENTITY::GET_ENTITY_COORDS(iLocal_269, true)) < 1600f)
				{
					ENTITY::FREEZE_ENTITY_POSITION(func_1038(), false);
					if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) > 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(func_1038(), func_150(), 0);
					}
					if (!iLocal_327)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_269))
						{
							if (__LIB_16__::func_855())
							{
								if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SEES", 7, 0, 0, 0))
								{
									iLocal_327 = 1;
								}
							}
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_49[3 /*2*/], false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_49[3 /*2*/], func_1038()))
					{
						if (__LIB_16__::func_855())
						{
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SMACK", 7, 0, 0, 0);
						}
					}
				}
			}
			if (iLocal_327)
			{
				if (!iLocal_328)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_EASY", 7, 0, 0, 0))
						{
							iLocal_290 = MISC::GET_GAME_TIMER() + 15000;
							iLocal_328 = 1;
						}
					}
				}
				else if (!iLocal_329)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CRT", 7, 0, 0, 0))
						{
							iLocal_329 = 1;
						}
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_267))
			{
				iLocal_267 = __LIB_0__::func_643(iLocal_269);
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_49[3 /*2*/], false))
			{
				Local_50[2 /*15*/].f_12 = func_129(func_150(), 14, 0);
				Local_50[2 /*15*/].f_13 = func_129(func_150(), 14, 1);
				Local_50[2 /*15*/].f_14 = func_129(func_150(), 8, -1);
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_49[3 /*2*/], iLocal_269))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_49[3 /*2*/], 2f, 2, false);
					if (HUD::DOES_BLIP_EXIST(iLocal_258))
					{
						HUD::REMOVE_BLIP(&iLocal_258);
					}
					ENTITY::FREEZE_ENTITY_POSITION(func_1038(), false);
					ENTITY::SET_ENTITY_INVINCIBLE(func_1038(), true);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_297, false);
					}
					TASK::CLEAR_PED_TASKS(func_1038());
					iLocal_330 = 0;
					iLocal_331 = 0;
					iLocal_326 = 0;
					iLocal_327 = 0;
					iLocal_328 = 0;
					iLocal_425++;
				}
				else if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_49[3 /*2*/]))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_49[3 /*2*/]) > 2f)
					{
						if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_49[3 /*2*/], func_1038()))
						{
							if (__LIB_16__::func_855())
							{
								__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BANG", 7, 0, 0, 0);
							}
						}
					}
				}
			}
			break;
		case 8:
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_269))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
				if (HUD::DOES_BLIP_EXIST(iLocal_267))
				{
					HUD::REMOVE_BLIP(&iLocal_267);
				}
				iLocal_326 = 0;
				__LIB_16__::func_852(&uLocal_514, joaat("p_cs_sub_hook_01_s"));
				__LIB_16__::func_852(&uLocal_514, joaat("prop_rope_hook_01"));
				iLocal_425++;
			}
			else if (!iLocal_413)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO", false, -1))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
					TASK::CLEAR_PED_TASKS(func_150());
					iLocal_413 = 1;
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_269, false);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_269, fLocal_496, fLocal_497, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, fLocal_498);
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_269, Local_49[3 /*2*/], -1, 1, Local_499, Local_500, Local_501, -1f, true, true, false, true, 2);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_414, "Attach_Cargo", Local_49[3 /*2*/], "docks_heist_finale_2a_sounds", false, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -261.1416f, -2328.5322f, -17.0984f, 2f, -1, 40000f, 0.5f);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -278.5093f, -2378.8352f, -2.3485f, 2f, -1, 40000f, 0.5f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				}
			}
			break;
		case 9:
			if (!iLocal_328)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -348.90033f, -2573.659f, 2.997342f, -468.7079f, -2471.864f, -23.98975f, 100f, false, true, 0))
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_FLOYD", 7, 0, 0, 0))
						{
							iLocal_328 = 1;
						}
					}
				}
			}
			if (__LIB_16__::func_903(Local_49[3 /*2*/]))
			{
				if (ENTITY::GET_ENTITY_SPEED(Local_49[3 /*2*/]) > 2f)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_49[3 /*2*/]))
					{
						if (__LIB_16__::func_855())
						{
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BANG2", 7, 0, 0, 0);
						}
					}
				}
			}
			if (!iLocal_326)
			{
				if (__LIB_16__::func_855() && !__LIB_13__::func_755(&Local_219, 0))
				{
					__LIB_0__::func_222(&uLocal_54, 4, 0, "FLOYD", 0, 1);
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DONE", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			else if (!iLocal_327)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_RADIO", 7, 0, 0, 0))
					{
						iLocal_327 = 1;
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_219.f_5))
			{
				HUD::SET_BLIP_ROUTE(Local_219.f_5, false);
				if (HUD::GET_BLIP_COLOUR(Local_219.f_5) != 5)
				{
					HUD::SET_BLIP_COLOUR(Local_219.f_5, 5);
				}
			}
			if (!iLocal_314)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -358.5919f, -2560.9219f, -5f, true) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_EXT", 8);
					SCRIPT::REQUEST_SCRIPT("docks2ASubHandler");
					iLocal_314 = 1;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -358.5919f, -2560.9219f, -5f, true) > 120f)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_314 = 0;
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_16__::func_903(func_1038()))
				{
					func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				__LIB_17__::func_43("MICHAEL", joaat("Player_Zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (__LIB_16__::func_34(&Local_219, -358.5919f, -2560.9219f, -5f, 0.1f, 0.1f, 0.1f, 0, Local_49[3 /*2*/], "DCKH_RETCARGO", "", "DCKH_GETBK", 0, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_219.f_5) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), -358.5919f, -2560.9219f, -12.90297f, true) < 20f))
			{
				__LIB_0__::func_429();
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_THERE", 7, 0, 0, 0);
				iLocal_290 = MISC::GET_GAME_TIMER();
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO");
				__LIB_15__::func_306(0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 2f, 4);
				iLocal_425++;
			}
			else
			{
				GRAPHICS::DRAW_MARKER(6, -358.5919f, -2560.9219f, -6f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, false, false, 2, false, 0, 0, false);
			}
			break;
		case 10:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_16__::func_903(func_1038()))
				{
					func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				__LIB_17__::func_43("MICHAEL", joaat("Player_Zero"), 11);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("TREVOR", PLAYER::PLAYER_PED_ID(), 0);
			}
			if (__LIB_0__::func_587(Local_49[3 /*2*/]) && !__LIB_0__::func_75())
			{
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
				func_1018(10);
				iLocal_425 = 0;
			}
			else
			{
				__LIB_0__::func_213(Local_49[3 /*2*/], 10.5f, 10, 1056964608, 0, 1, 0);
				if (HUD::DOES_BLIP_EXIST(Local_219.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_219.f_5));
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 240f)
		{
			if (iLocal_331 == 0)
			{
				__LIB_0__::func_229("DCKH_LEAVEA", 7500, 1);
				iLocal_331 = 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 250f)
			{
				func_301(9);
			}
		}
		else
		{
			iLocal_331 = 0;
		}
	}
	if (((__LIB_16__::func_903(Local_49[3 /*2*/]) && __LIB_16__::func_903(func_150())) && iLocal_425 > 6) && iLocal_425 < 11)
	{
		if (PLAYER::PLAYER_PED_ID() == func_150())
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_49[3 /*2*/], 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_49[3 /*2*/], 3, 15000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_49[3 /*2*/], 2, 15000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_49[3 /*2*/], 1, 15000))
			{
				func_301(12);
			}
		}
	}
}

void func_301(int iParam0)//Position - 0x2E912
{
	char* sVar0;
	if (!Local_477.f_20)
	{
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "dckh_fail";
				break;
			case 2:
				sVar0 = "cmn_fdied" /* GXT: ~s~Franklin died. */;
				break;
			case 3:
				sVar0 = "cmn_mdied" /* GXT: ~s~Michael died. */;
				break;
			case 4:
				sVar0 = "cmn_tdied" /* GXT: ~s~Trevor died. */;
				break;
			case 5:
				sVar0 = "CMN_FLEFT" /* GXT: ~s~Franklin was left behind. */;
				break;
			case 6:
				sVar0 = "cmn_mleft" /* GXT: ~s~Michael was left behind. */;
				break;
			case 9:
				sVar0 = "dckh_mfla";
				break;
			case 7:
				sVar0 = "dckh_mfoutpos";
				break;
			case 8:
				sVar0 = "DCKH_TFLA";
				break;
			case 10:
				sVar0 = "cmn_fdest" /* GXT: ~s~Franklin's car was destroyed. */;
				break;
			case 13:
				sVar0 = "dckh_mfspo";
				break;
			case 11:
				sVar0 = "dckh_mfds";
				break;
			case 12:
				sVar0 = "DCKH_MFDS2";
				break;
			case 14:
				if (PLAYER::PLAYER_PED_ID() == func_1038())
				{
					sVar0 = "dckh_flemt";
				}
				else
				{
					sVar0 = "DCKH_FLEFT";
				}
				break;
			case 15:
				sVar0 = "dckh_ammo";
				break;
			case 16:
				sVar0 = "dckh_ammob";
				break;
			case 17:
				sVar0 = "dckh_Fdingy";
				break;
			case 18:
				sVar0 = "dckh_Fdingy2";
				break;
			case 19:
				sVar0 = "dckh_polf";
				break;
			case 20:
				sVar0 = "DCKH_MFBOMB";
				break;
			default:
				sVar0 = "dckh_fail";
				break;
		}
		AUDIO::TRIGGER_MUSIC_EVENT("dh2a_dead");
		if (PLAYER::PLAYER_PED_ID() == func_1037() && iLocal_424 > 0)
		{
			Global_100441.f_12[0] = 0;
			__LIB_0__::func_507(-143.7584f, -2488.7458f, 43.4355f, 5.5522f);
			__LIB_14__::func_555(-148.316f, -2498.0483f, 47.2429f, 54.9127f);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			Global_100441.f_12[0] = 1;
			__LIB_0__::func_507(14.6669f, -2543.385f, 5.0503f, 32.847f);
			__LIB_14__::func_555(17.0702f, -2542.6228f, 5.05f, 235.9222f);
		}
		func_303(sVar0);
		while (!__LIB_0__::func_223())
		{
			SYSTEM::WAIT(0);
		}
		func_1032(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_303(char* sParam0)//Position - 0x2EB65
{
	__LIB_0__::func_381(sParam0);
	func_304(0);
}

void func_304(int iParam0)//Position - 0x2EB78
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_305(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_305(int iParam0)//Position - 0x2EBBD
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
	func_306(&(Global_113386.f_2363.f_539), iVar1);
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

void func_306(var uParam0, int iParam1)//Position - 0x2ECCD
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
			if (!func_308(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_308(int iParam0, var uParam1, float fParam2)//Position - 0x2EEA1
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
			return func_308(8, uParam1, fParam2);
			break;
		case 10:
			return func_308(8, uParam1, fParam2);
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

void func_372(bool bParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x3285F
{
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	bLocal_492 = bParam1;
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(false);
	}
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x395ED
{
	if (__LIB_16__::func_903(Local_50[0 /*15*/]))
	{
		iLocal_433[1] = Local_50[0 /*15*/];
		__LIB_16__::func_880(&iLocal_433, 1, iParam1);
		func_447(&iLocal_433, 1, iParam4);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_433, 1, 1);
	}
	if (__LIB_16__::func_903(Local_50[2 /*15*/]))
	{
		iLocal_433[2] = Local_50[2 /*15*/];
		__LIB_16__::func_880(&iLocal_433, 2, iParam2);
		func_447(&iLocal_433, 2, iParam5);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_433, 2, 1);
	}
	if (__LIB_16__::func_903(Local_50[1 /*15*/]))
	{
		iLocal_433[0] = Local_50[1 /*15*/];
		__LIB_16__::func_880(&iLocal_433, 0, iParam0);
		func_447(&iLocal_433, 0, iParam3);
	}
	else
	{
		__LIB_16__::func_880(&iLocal_433, 0, 1);
	}
}

void func_447(int iParam0, int iParam1, var uParam2)//Position - 0x3969A
{
	if (iParam1 != 4)
	{
		iParam0->f_8[iParam1] = uParam2;
	}
}

int func_449(var uParam0, bool bParam1)//Position - 0x396CA
{
	int iVar0;
	CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
	switch (iLocal_2102)
	{
		case 0:
			break;
		case 1:
			__LIB_16__::func_853(&uLocal_514, 4, "dh2arec");
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			func_467(uParam0, func_1038(), Local_49[3 /*2*/]);
			__LIB_15__::func_968(uParam0);
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			__LIB_16__::func_853(&uLocal_514, 4, "dh2arec");
			func_467(uParam0, func_1038(), Local_49[3 /*2*/]);
			if (__LIB_15__::func_968(uParam0) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch"))
			{
				CAM::DESTROY_ALL_CAMS(false);
				__LIB_16__::func_29(uParam0);
				CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_1, 0.1f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				iLocal_3344 = 0;
				VEHICLE::SET_VEHICLE_LIGHTS(Local_49[3 /*2*/], 3);
				iLocal_3346 = 0;
				iLocal_3347 = 0;
				iLocal_3348 = 0;
				iLocal_3349 = 0;
				iLocal_2102 = 3;
			}
			break;
		case 3:
			iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					if (!iLocal_3345)
					{
						if (__LIB_16__::func_896(&iLocal_433, 2))
						{
							__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
							iLocal_3345 = 1;
						}
					}
				}
				if (!iLocal_3348)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_3350)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, false);
						iLocal_3348 = 1;
					}
				}
				if (!iLocal_3349)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_3351)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorMid", 0, false);
						iLocal_3349 = 1;
					}
				}
				if (!iLocal_3346)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_3353)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], false);
						TASK::TASK_PLAY_ANIM(func_150(), "missswitch", "mid_mission_inside_helicopter_trevor", 1000f, -8f, -1, 8, 0f, false, false, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_49[3 /*2*/], 4, "dh2arec", false);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_49[3 /*2*/], 3800f);
						iLocal_3346 = 1;
					}
				}
				if (!iLocal_3347)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= fLocal_3352)
					{
						VEHICLE::FORCE_SUB_THROTTLE_FOR_TIME(Local_49[3 /*2*/], 1f, 5f);
						iLocal_3347 = 1;
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_2102 = 5;
				}
				else
				{
					return 0;
				}
			}
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, true, iLocal_3354, false, false, 0);
			if (!iLocal_3344)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				iLocal_3344 = 1;
			}
			SYSTEM::SETTIMERA(0);
			STREAMING::NEW_LOAD_SCENE_STOP();
			TASK::CLEAR_PED_TASKS(func_150());
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[3 /*2*/]);
			VEHICLE::REMOVE_VEHICLE_RECORDING(4, "dh2arec");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			VEHICLE::FORCE_SUB_THROTTLE_FOR_TIME(Local_49[3 /*2*/], 1f, 0.5f);
			STREAMING::REMOVE_ANIM_DICT("missswitch");
			iLocal_2102 = 6;
			return 0;
			break;
		case 6:
			if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_1, false);
					CAM::DESTROY_CAM(uParam0->f_1, false);
				}
				CAM::DESTROY_ALL_CAMS(false);
				uParam0->f_1232 = 1;
				Local_477.f_20 = 0;
				iLocal_2102 = 0;
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_467(var uParam0, int iParam1, var uParam2)//Position - 0x3AB87
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.1696f, -2.5168f, 0.0412f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.5515f, 0.2998f, 0.2401f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 35f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1500;
		uParam0->f_10[1 /*57*/].f_6 = { 2.1018f, -2.5559f, 0.0412f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.4967f, 0.238f, 0.3844f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 35f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 1f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 0.9f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -6.3518f, -7.3249f, 0.0389f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -7.9352f, -4.5686f, 0.1894f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 35f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 1f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0.3f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 11;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.9f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 5.9623f, 9.3726f, 0.3272f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -7.3216f, 0f, 85.1943f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 500;
		uParam0->f_10[5 /*57*/].f_6 = { 6.9998f, 3.8269f, 0.5564f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -7.3216f, 0f, 97.1138f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 500;
		uParam0->f_10[6 /*57*/].f_6 = { 3.0225f, 6.4558f, 0.5031f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 0.1229f, 0.002f, -0.4059f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 30f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 1f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 1;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 200f;
		uParam0->f_10[6 /*57*/].f_40 = 200f;
		uParam0->f_10[6 /*57*/].f_41 = 50;
		uParam0->f_10[6 /*57*/].f_42 = 50;
		uParam0->f_10[6 /*57*/].f_43 = 100;
		uParam0->f_10[6 /*57*/].f_38 = 0.95f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 3000;
		uParam0->f_10[7 /*57*/].f_6 = { 7.0921f, -0.5832f, 1.1157f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.1416f, -1.1054f, -0.2735f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 30f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 1f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[8 /*57*/].f_2 = 0;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 1;
		uParam0->f_10[8 /*57*/].f_5 = 2000;
		uParam0->f_10[8 /*57*/].f_6 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_18 = 1;
		uParam0->f_10[8 /*57*/].f_19 = 1;
		uParam0->f_10[8 /*57*/].f_20 = 1;
		uParam0->f_10[8 /*57*/].f_21 = 52.5f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0.3f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 0.2f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 0f;
		uParam0->f_10[8 /*57*/].f_34 = 0;
		uParam0->f_10[8 /*57*/].f_35 = 0f;
		uParam0->f_10[8 /*57*/].f_36 = 0;
		uParam0->f_10[8 /*57*/].f_37 = 0;
		uParam0->f_10[8 /*57*/].f_39 = 0f;
		uParam0->f_10[8 /*57*/].f_40 = 0f;
		uParam0->f_10[8 /*57*/].f_41 = 0;
		uParam0->f_10[8 /*57*/].f_42 = 0;
		uParam0->f_10[8 /*57*/].f_43 = 0;
		uParam0->f_10[8 /*57*/].f_38 = 0f;
		uParam0->f_10[8 /*57*/].f_45 = 0;
		uParam0->f_10[8 /*57*/].f_46 = 0;
		uParam0->f_10[8 /*57*/].f_47 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[8 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.05f;
		uParam0->f_1151[1 /*2*/] = 0.9f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.05f;
		uParam0->f_1151[2 /*2*/] = 1f;
		uParam0->f_1151[2 /*2*/].f_1 = 19f;
		uParam0->f_1151[3 /*2*/] = 4f;
		uParam0->f_1151[3 /*2*/].f_1 = 19f;
		uParam0->f_1151[4 /*2*/] = 4.3f;
		uParam0->f_1151[4 /*2*/].f_1 = 19f;
		uParam0->f_1151[5 /*2*/] = 5.35f;
		uParam0->f_1151[5 /*2*/].f_1 = 2.5f;
		uParam0->f_1151[6 /*2*/] = 5.6f;
		uParam0->f_1151[6 /*2*/].f_1 = 2.5f;
		uParam0->f_1151[7 /*2*/] = 6.3f;
		uParam0->f_1151[7 /*2*/].f_1 = 25f;
		uParam0->f_1151[8 /*2*/] = 7.8f;
		uParam0->f_1151[8 /*2*/].f_1 = 25f;
		uParam0->f_1151[9 /*2*/] = 7.9f;
		uParam0->f_1151[9 /*2*/].f_1 = 3f;
		uParam0->f_1151[10 /*2*/] = 8f;
		uParam0->f_1151[10 /*2*/].f_1 = 0.7f;
		uParam0->f_1184[0 /*2*/] = 0f;
		uParam0->f_1184[0 /*2*/].f_1 = 0f;
		uParam0->f_1184[1 /*2*/] = 2.8f;
		uParam0->f_1184[1 /*2*/].f_1 = 1f;
		uParam0->f_1184[2 /*2*/] = 3.2f;
		uParam0->f_1184[2 /*2*/].f_1 = 1f;
		uParam0->f_1184[3 /*2*/] = 4f;
		uParam0->f_1184[3 /*2*/].f_1 = 1f;
		uParam0->f_1184[4 /*2*/] = 4.8f;
		uParam0->f_1184[4 /*2*/].f_1 = 0f;
		uParam0->f_1184[5 /*2*/] = 5.8f;
		uParam0->f_1184[5 /*2*/].f_1 = 1f;
		uParam0->f_1184[6 /*2*/] = 6f;
		uParam0->f_1184[6 /*2*/].f_1 = 1f;
		uParam0->f_1184[7 /*2*/] = 7f;
		uParam0->f_1184[7 /*2*/].f_1 = 1f;
		uParam0->f_1184[8 /*2*/] = 8f;
		uParam0->f_1184[8 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 800;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine.txt";
		uParam0->f_1225 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_4[1] = uParam2;
}

void func_469()//Position - 0x3BE39
{
	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
}

void func_471(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x3BEEC
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
	__LIB_0__::func_366(0);
	bLocal_492 = bParam2;
}

int func_481(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3C0EB
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
				__LIB_13__::func_823(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_661(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_483(*iParam0, bParam6);
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

int func_483(int iParam0, bool bParam1)//Position - 0x3C216
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_487(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_487(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_32(iParam0, 3, 169))
					{
						func_122(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_32(iParam0, 12, 6))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 11))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 10))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 50))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 14, 59))
			{
				func_122(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_32(iParam0, 8, 22))
			{
				func_122(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_32(iParam0, 12, 14))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_32(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 4))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 3))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 14, 82))
			{
				func_122(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_32(iParam0, 8, 76))
			{
				func_122(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_32(iParam0, 12, 1))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_32(iParam0, 12, 12))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 15))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_32(iParam0, 3, 71))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_32(iParam0, 12, 7))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 12, 6))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_32(iParam0, 14, 88))
			{
				func_122(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_32(iParam0, 8, 17))
			{
				func_122(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_32(iParam0, 12, 11))
			{
				func_122(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_487(int iParam0, int iParam1)//Position - 0x3C9A7
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
				iVar1 = func_129(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_489(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
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

void func_489(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3CC22
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
			if (func_128(iParam0, iVar1, &iVar2, 0))
			{
				func_122(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_123(iParam0, iVar1, &iVar2))
			{
				func_122(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_651(iParam0);
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
			func_492(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_492(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_492(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3D0FE
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
			func_612(iVar5, iParam1, iParam2, 1);
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
						func_612(iVar5, 10, 0, 1);
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
									func_612(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_492(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_612(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_611(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_492(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_605(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_612(iVar5, 14, uVar18[iVar1], 1);
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
							func_492(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_612(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_492(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_597(iParam0);
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
						func_492(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_492(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_596(iVar5, iVar24, iVar23, iVar25);
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
							func_492(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_492(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_492(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_492(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_492(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_492(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_492(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_605(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_596(iVar5, func_611(iParam0, 8, -1), iParam2, func_611(iParam0, 4, -1));
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
				func_535(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_596(iVar5, iParam2, iVar44, iVar45);
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
			func_605(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_596(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_492(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_492(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_596(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_596(iVar5, iVar58, iVar57, iParam2);
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
						func_492(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_596(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_492(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_512(iParam0, 9, iVar63))
						{
							func_492(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_492(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_492(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_492(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_611(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_611(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_492(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_492(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_492(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_492(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_492(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_492(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_492(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_492(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_492(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_492(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_597(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_492(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_492(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_493(iParam0, &uVar4))
		{
			func_492(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_492(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_492(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_492(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_611(iParam0, 3, -1), iVar10);
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
				func_492(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_493(int iParam0, var uParam1)//Position - 0x3EFA8
{
	int iVar0;
	int iVar1;
	*uParam1 = func_611(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_512(iParam0, iVar1, iVar0))
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

int func_512(int iParam0, int iParam1, int iParam2)//Position - 0x43264
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
				if (!func_512(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_512(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_512(iParam0, 14, iVar6))
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
			if (!func_512(iParam0, 14, uVar11[iVar10]))
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
						return func_512(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_512(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_535(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x49F7D
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
	func_536(iParam0, bParam3, 0, -1);
}

void func_536(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x49FCA
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
		bVar3 = func_576(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_567(iParam0, iParam3);
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

int func_567(int iParam0, int iParam1)//Position - 0x59227
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
				iVar3 = func_611(iParam0, 11, -1);
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
				iVar5 = func_611(iParam0, 11, -1);
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

int func_576(int iParam0, bool bParam1)//Position - 0x59685
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_611(iParam0, 11, -1), 0);
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
						iVar3 = func_611(iParam0, 11, -1);
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
						iVar5 = func_611(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_611(iParam0, 11, -1), 0);
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
						iVar8 = func_611(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_611(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_611(iParam0, 11, -1), 0);
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
						iVar12 = func_611(iParam0, 8, -1);
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

int func_596(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62511
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
					iVar0 = func_596(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_596(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_597(int iParam0)//Position - 0x6384C
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
		if (!func_602(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_602(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_602(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x64218
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_611(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_605(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x66B32
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_651(iParam0))
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

int func_611(int iParam0, int iParam1, int iParam2)//Position - 0x66DE3
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
				if (func_512(iParam0, iParam1, iVar0))
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
				if (func_512(iParam0, iParam1, iVar1))
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

void func_612(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x66E84
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
							func_612(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_612(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_612(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_612(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_612(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_612(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_612(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_612(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_612(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_612(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_651(int iParam0)//Position - 0x7FB12
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
				iVar1 = func_611(iParam0, 11, -1);
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
				iVar3 = func_611(iParam0, 11, -1);
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

void func_661(int iParam0)//Position - 0x80385
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
		func_489(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_129(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_662(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_129(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_129(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_662(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_662(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_129(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_489(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_662(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x805E2
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_665(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_665(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8079D
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
								func_665(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_665(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_665(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_665(iParam0, 14, iVar5, 1, 0);
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
								func_665(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_665(iParam0, 14, 17, 1, 0);
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

void func_687(int iParam0, bool bParam1, bool bParam2)//Position - 0x81662
{
	if (__LIB_16__::func_903(iParam0))
	{
		if (bParam1)
		{
			func_122(iParam0, 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_ENABLE_SCUBA(iParam0, true);
			PED::SET_PED_DIES_IN_WATER(iParam0, false);
		}
		else
		{
			func_122(iParam0, 12, 11, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (!bParam2)
		{
			func_122(iParam0, 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
}

void func_690()//Position - 0x81712
{
	if (iLocal_425 == 10)
	{
		if (__LIB_16__::func_903(Local_49[9 /*2*/]) && __LIB_16__::func_903(Local_50[3 /*15*/]))
		{
			iLocal_348 = 100;
		}
	}
	switch (iLocal_348)
	{
		case 0:
			__LIB_16__::func_852(&uLocal_514, joaat("polmav"));
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_Swat_01"));
			iLocal_348++;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("polmav")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Swat_01")))
			{
				iLocal_348++;
			}
			break;
		case 2:
			Local_49[9 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("polmav"), -92.8689f, -2015.0421f, 17.0169f, 214.9528f, true, true, false);
			func_691(&(Local_50[3 /*15*/]), joaat("S_M_Y_Swat_01"), -89.4357f, -2014.3889f, 17.0169f, 190.5788f, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[3 /*15*/], true);
			PED::SET_PED_INTO_VEHICLE(Local_50[3 /*15*/], Local_49[9 /*2*/], -1);
			VEHICLE::SET_VEHICLE_SEARCHLIGHT(Local_49[9 /*2*/], true, true);
			VEHICLE::SET_VEHICLE_LIVERY(Local_49[9 /*2*/], 0);
			TASK::TASK_HELI_MISSION(Local_50[3 /*15*/], Local_49[9 /*2*/], 0, 0, -85.5841f, -2281.509f, 57.3485f, 4, 30f, 10f, -1f, 55, 20, -1f, 0);
			__LIB_16__::func_912(&uLocal_514, joaat("polmav"));
			__LIB_16__::func_912(&uLocal_514, joaat("S_M_Y_Swat_01"));
			iLocal_348++;
			break;
		case 3:
			if (__LIB_16__::func_903(Local_49[9 /*2*/]) && __LIB_16__::func_903(Local_50[3 /*15*/]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_50[3 /*15*/], -85.5841f, -2281.509f, 57.3485f, 30f, 30f, 30f, false, true, 0))
				{
					iLocal_348++;
				}
			}
			break;
		case 4:
			if (__LIB_16__::func_903(Local_49[9 /*2*/]) && __LIB_16__::func_903(Local_50[3 /*15*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_50[3 /*15*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_HELI_MISSION(0, Local_49[9 /*2*/], 0, 0, -97.1803f, -2340.789f, 26.452f, 4, 20f, 10f, 96.0322f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_49[9 /*2*/], 0, 0, -157.1283f, -2400.2373f, 38.6996f, 4, 20f, 10f, 6.1374f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_49[9 /*2*/], 0, 0, -255.1758f, -2371.6716f, 30.6111f, 4, 20f, 10f, 303.2508f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_49[9 /*2*/], 0, 0, -266.8602f, -2297.838f, 26.4934f, 4, 20f, 10f, -132.2165f, 40, 20, -1f, 1);
				TASK::TASK_HELI_MISSION(0, Local_49[9 /*2*/], 0, 0, -157.1116f, -2301.186f, 19.5018f, 4, 20f, 10f, 174.5608f, 40, 20, -1f, 1);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_50[3 /*15*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_348++;
			}
			break;
		case 5:
			if (__LIB_16__::func_903(Local_50[3 /*15*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_50[3 /*15*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
				{
					iLocal_348 = 4;
				}
			}
			break;
		case 100:
			if (__LIB_16__::func_903(Local_49[9 /*2*/]) && __LIB_16__::func_903(Local_50[3 /*15*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_50[3 /*15*/]);
				TASK::TASK_HELI_MISSION(Local_50[3 /*15*/], Local_49[9 /*2*/], 0, 0, 723.2252f, -1478.726f, 119.2312f, 4, 30f, 10f, -1f, 55, 20, -1f, 0);
				PED::SET_PED_KEEP_TASK(Local_50[3 /*15*/], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[3 /*15*/]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[9 /*2*/]));
				iLocal_348++;
			}
			break;
	}
}

void func_691(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x81ACE
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
		}
	}
	else if (__LIB_16__::func_903(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
	}
}

void func_692()//Position - 0x81B26
{
	int iVar0;
	switch (iLocal_425)
	{
		case 0:
			HUD::DISPLAY_RADAR(false);
			__LIB_43__::func_206(9, "Stage 8: explosion cutscene", 0, 0, 0, 1);
			if (__LIB_16__::func_903(func_1038()))
			{
				func_687(func_1038(), 1, 1);
				ENTITY::SET_ENTITY_COORDS(func_1038(), -180f, -2320f, 0f, true, false, false, true);
				if (__LIB_16__::func_903(Local_49[6 /*2*/]))
				{
					VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
					VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_49[6 /*2*/], true);
					ENTITY::SET_ENTITY_VISIBLE(Local_49[6 /*2*/], false, false);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_1038(), false, false);
				STREAMING::SET_FOCUS_ENTITY(func_1038());
			}
			MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
			MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
			iLocal_3355 = 0;
			iLocal_425++;
			break;
		case 1:
			if (__LIB_0__::func_90())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				__LIB_0__::func_366(0);
				if (__LIB_16__::func_903(func_1038()))
				{
					iLocal_433[0] = Local_50[1 /*15*/];
					__LIB_16__::func_880(&iLocal_433, 0, 0);
					if (__LIB_16__::func_896(&iLocal_433, 0))
					{
						__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(func_1037());
					}
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_ORIGIN(8.885f, -2526.579f, 5.046f, 0f, 0);
				AUDIO::STOP_AUDIO_SCENES();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_RAYFIRE"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_RAYFIRE");
				}
				AUDIO::PLAY_STREAM_FRONTEND();
				iLocal_491 = 0;
				iLocal_3356 = 0;
				iLocal_425++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_16__::func_852(&uLocal_514, joaat("submersible"));
				__LIB_16__::func_852(&uLocal_514, joaat("prop_military_pickup_01"));
				STREAMING::REQUEST_PTFX_ASSET();
				__LIB_16__::func_852(&uLocal_514, joaat("prop_flare_01"));
				__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_8");
				__LIB_16__::func_857(&uLocal_514, "swimming@scuba");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
				{
					OBJECT::DELETE_OBJECT(&iLocal_270);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
				{
					OBJECT::DELETE_OBJECT(&iLocal_271);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
				{
					OBJECT::DELETE_OBJECT(&iLocal_272);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
				{
					OBJECT::DELETE_OBJECT(&iLocal_273);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
				{
					OBJECT::DELETE_OBJECT(&iLocal_274);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[7 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[7 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[8 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[8 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[1 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[1 /*2*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_49[2 /*2*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_49[2 /*2*/]));
				}
				STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(-75.1f, -2286.4f, 2.1f, 3.1f, 0f, 132.1f);
				ENTITY::SET_ENTITY_VISIBLE(func_1038(), false, false);
				if (CAM::DOES_CAM_EXIST(iLocal_294))
				{
					CAM::DESTROY_CAM(iLocal_294, false);
				}
				iLocal_326 = 0;
				iLocal_327 = 0;
				iLocal_425++;
			}
			break;
		case 3:
			if (!iLocal_323)
			{
				if (((((STREAMING::HAS_MODEL_LOADED(joaat("submersible")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_military_pickup_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_flare_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aswitchig_8")) && STREAMING::HAS_ANIM_DICT_LOADED("swimming@scuba")) && STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					iLocal_323 = 1;
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(true);
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!iLocal_326)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 17500)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("DH2A_FINAL_EXP");
						iLocal_326 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 22300)
				{
					STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
				}
				if (!iLocal_321)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 21000)
					{
						__LIB_0__::func_544(13, 1, 0, 1, 0);
						iLocal_321 = 1;
					}
				}
				if (!CAM::DOES_CAM_EXIST(iLocal_3357))
				{
					iLocal_3357 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_3357, -122.35613f, -2297.9946f, 21.029718f, -19.65989f, 1.225318f, 134.04213f, 40f, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_694();
			}
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2099))
			{
				iLocal_2099 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-159.7051f, -2374.3184f, 5.0459f, 50f, "des_shipsink");
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
				{
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2099) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2099) == 10)
					{
						if (__LIB_16__::func_903(Local_49[6 /*2*/]) && __LIB_16__::func_903(func_1038()))
						{
							ENTITY::SET_ENTITY_COORDS(Local_49[6 /*2*/], -78.1857f, -2287.6528f, 0f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_49[6 /*2*/], 56.7927f);
							ENTITY::SET_ENTITY_VISIBLE(Local_49[6 /*2*/], true, false);
							ENTITY::SET_ENTITY_VISIBLE(func_1038(), true, false);
							PED::SET_PED_INTO_VEHICLE(func_1038(), Local_49[6 /*2*/], -1);
							VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_49[6 /*2*/], true);
							VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
						}
						if (iLocal_3356 == 1)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							FIRE::STOP_FIRE_IN_RANGE(-78.1857f, -2287.6528f, 0f, 1000f);
							GRAPHICS::REMOVE_DECALS_IN_RANGE(-78.1857f, -2287.6528f, 0f, 1000f);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-78.1857f, -2287.6528f, 0f, 1000f);
						}
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aswitchig_8"))
						{
							if (!CAM::DOES_CAM_EXIST(iLocal_294))
							{
								iLocal_294 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -75.1f, -2286.4f, 1.5f, 3.1f, 0f, 132.1f, 50f, false, 2);
								CAM::SET_CAM_ACTIVE(iLocal_294, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								if (__LIB_16__::func_903(Local_49[6 /*2*/]))
								{
									CAM::ATTACH_CAM_TO_ENTITY(iLocal_294, Local_49[6 /*2*/], 3.6348f, -1.745f, 1.15f, true);
								}
								iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_293, "missheistdocks2aswitchig_8", "ig_8_switch", 1000f, -4f, 4, 0, 1000f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_293, Local_49[6 /*2*/], 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_293, 0.35f);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", false, 0);
							}
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BODY_FALL_DIVE_WATER_MASTER", PLAYER::PLAYER_PED_ID(), "docks_heist_finale_2a_sounds", false, 0);
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, false);
						}
					}
				}
				else
				{
					STREAMING::CLEAR_FOCUS();
					AUDIO::STOP_STREAM();
					STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_RAYFIRE"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH2A_RAYFIRE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SWIM_TO_CONTAINER"))
					{
						AUDIO::STOP_AUDIO_SCENES();
						AUDIO::START_AUDIO_SCENE("DH2A_SWIM_TO_CONTAINER");
					}
					iVar0 = 0;
					while (iVar0 <= (29 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
						{
							PED::DELETE_PED(&(Local_51[iVar0 /*44*/]));
						}
						iVar0++;
					}
					iLocal_491 = 0;
					HUD::DISPLAY_RADAR(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_693(1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_425++;
				}
			}
			else if (iLocal_3356 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					AUDIO::STOP_STREAM();
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_3356 = 1;
				}
			}
			break;
		case 4:
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_323 = 0;
			func_1018(9);
			iLocal_425 = 0;
			break;
	}
}

void func_693(int iParam0)//Position - 0x82224
{
	__LIB_0__::func_544(12, iParam0, 0, 1, 0);
	__LIB_0__::func_544(13, iParam0, 0, 1, 0);
}

void func_694()//Position - 0x82242
{
	int iVar0;
	switch (iLocal_3355)
	{
		case 0:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 13250)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 13000)
			{
				iVar0 = -86;
				while (iVar0 >= -246)
				{
					WATER::MODIFY_WATER(SYSTEM::TO_FLOAT(iVar0), -2347f, 4f, 0.5f);
					iVar0 -= 10;
				}
			}
			break;
		case 1:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 15250)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 15000)
			{
				iVar0 = -81;
				while (iVar0 >= -241)
				{
					WATER::MODIFY_WATER(SYSTEM::TO_FLOAT(iVar0), -2345f, 4f, 0.5f);
					iVar0 -= 10;
				}
			}
			break;
		case 2:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 19000)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 18700)
			{
				WATER::MODIFY_WATER(-132f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2338f, 4f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2338f, 4f, 0.5f);
			}
			break;
		case 3:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 19400)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 19200)
			{
				WATER::MODIFY_WATER(-122f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-134f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-143f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2338f, 5f, 0.5f);
			}
			break;
		case 4:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 20666)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_3355++;
			}
			break;
		case 5:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 21666 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0.2f);
				iLocal_3355++;
			}
			break;
		case 6:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22166 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_3355++;
			}
			break;
		case 7:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22666 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0.2f);
				iLocal_3355++;
			}
			break;
		case 8:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 23000 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
			{
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("ship_explosion_underwater", 0.2f);
				iLocal_3355++;
			}
			break;
		case 9:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 23500 && GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0.2f);
				iLocal_3355++;
			}
			break;
		case 10:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 24000)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 23500)
			{
				WATER::MODIFY_WATER(-105f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-109f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-114f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-119f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-126f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-127f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2336f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-151f, -2329.5f, 3f, 0.5f);
				WATER::MODIFY_WATER(-153f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-157f, -2329.5f, 3f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2331f, 5f, 0.5f);
				WATER::MODIFY_WATER(-168f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-173f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-178f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-186f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-199f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-204f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-213f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-219f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-224f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-229f, -2335f, 5f, 0.5f);
				WATER::MODIFY_WATER(-172f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-167f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-162f, -2339f, 5f, 0.5f);
			}
			break;
		case 11:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 25500)
			{
				iLocal_3355++;
			}
			else if (CUTSCENE::GET_CUTSCENE_TIME() > 24800)
			{
				WATER::MODIFY_WATER(-124f, -2319f, 5f, 0.5f);
				WATER::MODIFY_WATER(-126f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-132f, -2339f, 5f, 0.5f);
				WATER::MODIFY_WATER(-133f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-137f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-142f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-145f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2337f, 5f, 0.5f);
				WATER::MODIFY_WATER(-148f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-152f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-156f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-160f, -2332f, 5f, 0.5f);
				WATER::MODIFY_WATER(-162f, -2343f, 5f, 0.5f);
				WATER::MODIFY_WATER(-165f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-168f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-173f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-178f, -2338f, 5f, 0.5f);
				WATER::MODIFY_WATER(-179f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-187f, -2344f, 5f, 0.5f);
				WATER::MODIFY_WATER(-186f, -2342f, 5f, 0.5f);
				WATER::MODIFY_WATER(-180f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-185f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2345f, 5f, 0.5f);
				WATER::MODIFY_WATER(-194f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-199f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-204f, -2340f, 5f, 0.5f);
				WATER::MODIFY_WATER(-213f, -2341f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2346f, 5f, 0.5f);
				WATER::MODIFY_WATER(-214f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-219f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-224f, -2333f, 5f, 0.5f);
				WATER::MODIFY_WATER(-229f, -2333f, 5f, 0.5f);
			}
			break;
	}
}

void func_700()//Position - 0x86F49
{
	int iVar0;
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
	}
	if (iLocal_425 < 2)
	{
		__LIB_1__::func_33(0);
	}
	switch (iLocal_425)
	{
		case 0:
			AUDIO::STOP_AUDIO_SCENES();
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PREPARE_DETONATION"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_PREPARE_DETONATION");
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (HUD::DOES_BLIP_EXIST(Local_50[1 /*15*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_50[1 /*15*/].f_1));
			}
			__LIB_43__::func_206(8, "Stage 7: detonate", 0, 0, 0, 1);
			__LIB_0__::func_222(&uLocal_54, 3, func_1037(), "FRANKLIN", 0, 1);
			__LIB_0__::func_222(&uLocal_54, 1, 0, "MICHAEL", 0, 1);
			__LIB_15__::func_780(128, 1, 0);
			__LIB_21__::func_135(128);
			CUTSCENE::REQUEST_CUTSCENE("lsdh_2a_rf_01", 8);
			iLocal_425++;
			break;
		case 1:
			if (AUDIO::LOAD_STREAM("PORT_OF_LS_SHIP_BLOW_UP_MASTER", 0))
			{
				iLocal_425++;
			}
			break;
		case 2:
			if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_07", 7, 0, 0, 0))
			{
				iLocal_330 = 0;
				iLocal_425++;
			}
			break;
		case 3:
			if (__LIB_0__::func_686())
			{
				__LIB_16__::func_921(128);
			}
			if (__LIB_0__::func_769(128))
			{
				if (__LIB_16__::func_903(Local_49[6 /*2*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_49[6 /*2*/], -80.2056f, -2288.2832f, 0f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_49[6 /*2*/], 21f);
					VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				}
				if (__LIB_16__::func_903(func_1038()))
				{
					ENTITY::SET_ENTITY_COORDS(func_1038(), -90.4927f, -2288.003f, -1.3081f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(func_1038(), 130.4705f);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DETONATE");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
				iLocal_290 = MISC::GET_GAME_TIMER();
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				iLocal_326 = 0;
				iLocal_425++;
			}
			if (!iLocal_330)
			{
				if (__LIB_16__::func_854())
				{
					__LIB_0__::func_229("DCKH_DETONATE", 7500, 1);
					__LIB_0__::func_151("DCKH_BOMBH", -1);
					iLocal_290 = MISC::GET_GAME_TIMER() + 10000;
					iLocal_326 = 0;
					iLocal_330 = 1;
				}
			}
			else if (!iLocal_326)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_290)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_NOBLO", 7, 0, 0, 0))
						{
							iLocal_326 = 1;
						}
					}
				}
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 1000)
			{
				iLocal_425 = -1;
			}
			break;
		case -1:
			iLocal_352 = 0;
			iLocal_351 = 0;
			__LIB_0__::func_506(128, 1);
			__LIB_31__::func_965(&uLocal_514, "docksheist2A01");
			__LIB_31__::func_965(&uLocal_514, "docksheist2A02");
			__LIB_31__::func_965(&uLocal_514, "docksheist2A03");
			__LIB_31__::func_964(&uLocal_514, 1, "DH2AREC");
			__LIB_31__::func_964(&uLocal_514, 2, "DH2AREC");
			__LIB_31__::func_964(&uLocal_514, 3, "DH2AREC");
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_912(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_912(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_912(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_912(&uLocal_514, joaat("buzzard"));
			iVar0 = 0;
			while (iVar0 < iLocal_277)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_277[iVar0]));
				}
				iVar0++;
			}
			func_701();
			func_1018(8);
			break;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (__LIB_0__::func_686())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2A_DETONATE_BOMBS"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2A_DETONATE_BOMBS");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2A_DETONATE_BOMBS"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_2A_DETONATE_BOMBS");
		}
	}
}

void func_701()//Position - 0x872F4
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_266[0]))
	{
		OBJECT::REMOVE_PICKUP(iLocal_266[0]);
	}
}

void func_718()//Position - 0x87840
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	func_739();
	func_738();
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	bVar0 = false;
	if (!__LIB_16__::func_903(Local_49[4 /*2*/]))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_ARRIVES"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_ARRIVES");
		}
	}
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			iLocal_373 = 0;
			bLocal_375 = false;
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_374 = 0;
			__LIB_0__::func_222(&uLocal_54, 3, func_1037(), "FRANKLIN", 0, 1);
			__LIB_0__::func_222(&uLocal_54, 1, 0, "MICHAEL", 0, 1);
			Local_376 = { 0f, 0f, 0f };
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SNIPING_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
			}
			if (bLocal_372)
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_737(-222.02f, -2375.3955f, 14.2843f));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_736(-222.02f, -2375.3955f, 14.2843f), 1f);
				TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -222.02f, -2375.3955f, 14.2843f, 10, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			}
			if (__LIB_0__::func_323() && iLocal_431 == 0)
			{
				if (iLocal_430 == 7)
				{
					__LIB_43__::func_206(7, "Stage 6: way out- B escape", 0, 0, 0, 1);
					Local_49[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -200.3281f, -2398.2253f, 5.0012f, 98.1005f, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_49[2 /*2*/], 300);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[2 /*2*/], true, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[2 /*2*/], 0);
					Local_49[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -213.6754f, -2399.7925f, 5.0012f, 317.573f, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_49[1 /*2*/], 300);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[1 /*2*/], true, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[1 /*2*/], 0);
					iLocal_326 = 1;
					iLocal_425 = 10;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
				else
				{
					iLocal_425++;
				}
			}
			else if (!__LIB_0__::func_323() || iLocal_431)
			{
				iLocal_425++;
			}
			break;
		case 1:
			__LIB_43__::func_206(6, "Stage 6: way out- A trucks", 0, 0, 0, 1);
			func_732(26, 150f, 1, 0);
			if (__LIB_16__::func_903(Local_51[26 /*44*/]))
			{
				PED::SET_PED_DIES_WHEN_INJURED(Local_51[26 /*44*/], true);
				ENTITY::SET_ENTITY_COORDS(Local_51[26 /*44*/], -209.392f, -2367.1553f, 8.31911f, true, false, false, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[26 /*44*/], -212.01079f, -2386.4585f, 5.00033f, 1f, false, false);
				PED::SET_COMBAT_FLOAT(Local_51[26 /*44*/], 3, 0.5f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -210.4364f, -2378.1077f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.4438f, 12.3329f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[26 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
			}
			func_732(27, 150f, 1, 0);
			if (__LIB_16__::func_903(Local_51[27 /*44*/]))
			{
				PED::SET_PED_DIES_WHEN_INJURED(Local_51[27 /*44*/], true);
				ENTITY::SET_ENTITY_COORDS(Local_51[27 /*44*/], -209.2853f, -2375.9495f, 8.3191f, true, false, false, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[27 /*44*/], -217.41843f, -2391.9058f, 5.00033f, 1f, false, false);
				PED::SET_COMBAT_FLOAT(Local_51[27 /*44*/], 3, 0.5f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.6206f, -2376.1785f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.4438f, 12.3329f, -1, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[27 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
			}
			iLocal_290 = MISC::GET_GAME_TIMER();
			iLocal_425++;
			break;
		case 2:
			if (__LIB_16__::func_855())
			{
				if (iLocal_351)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_OUT_NS", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_425++;
					}
				}
				else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_ALRM", 7, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					iLocal_425++;
				}
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 8000)
			{
				if (func_731(0))
				{
					if (!iLocal_327)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
						{
							iLocal_327 = 1;
						}
					}
					iLocal_326 = 0;
					iLocal_290 = MISC::GET_GAME_TIMER();
					iLocal_425++;
				}
			}
			if (func_730(0))
			{
				iLocal_290 = MISC::GET_GAME_TIMER();
				iLocal_425 = 4;
			}
			break;
		case 4:
			if (func_730(1))
			{
				iLocal_290 = MISC::GET_GAME_TIMER();
				iLocal_425++;
			}
			else if (!bLocal_375)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_290) > 10000)
				{
					if (__LIB_16__::func_903(Local_51[23 /*44*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -208.0867f, -2403.121f, 5.0012f, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_LOOK_AT_ENTITY(0, func_1037(), 100, 0, 2);
						TASK::TASK_PAUSE(0, 100);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 2000, false);
						TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(Local_51[23 /*44*/], iLocal_261);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						bLocal_375 = true;
					}
				}
			}
			else if (__LIB_16__::func_903(Local_51[23 /*44*/]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_51[23 /*44*/], "missheistdocks2a@alert", "spot_high", 3))
				{
					__LIB_0__::func_222(&uLocal_54, 8, Local_51[23 /*44*/], "MERRYWEATHER5", 1, 1);
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CARS", 7, 0, 0, 0);
					iLocal_374 = Local_51[23 /*44*/];
				}
			}
			break;
		case 5:
			if (func_731(1))
			{
				if (!iLocal_327)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_327 = 1;
					}
				}
			}
			iVar1 = 18;
			while (iVar1 <= 27)
			{
				if (Local_51[iVar1 /*44*/] == iLocal_374)
				{
					if (!bLocal_375)
					{
						if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar1 /*44*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar1 /*44*/], Local_51[iVar1 /*44*/].f_12, 2f, true, false);
								TASK::CLEAR_PED_TASKS(Local_51[iVar1 /*44*/]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
								TASK::TASK_PAUSE(0, 50);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 2000, false);
								TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
								TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar1 /*44*/], iLocal_261);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							}
						}
					}
					else if (!iVar1 == 23)
					{
						if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar1 /*44*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar1 /*44*/], Local_51[iVar1 /*44*/].f_12, 2f, true, false);
								TASK::CLEAR_PED_TASKS(Local_51[iVar1 /*44*/]);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
								TASK::TASK_PAUSE(0, 50);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 2000, false);
								TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", "spot_high", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
								TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar1 /*44*/], iLocal_261);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							}
						}
					}
				}
				else if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51[iVar1 /*44*/], false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar1 /*44*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar1 /*44*/], Local_51[iVar1 /*44*/].f_12, 2f, true, false);
							TASK::CLEAR_PED_TASKS(Local_51[iVar1 /*44*/]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(100, 1000));
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1037(), true) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), false, false);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1037(), true) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), false, false);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1037(), true) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), false, false);
							TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1037(), true) + Vector(0f, 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-100, 100))), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), false, false);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), MISC::GET_RANDOM_INT_IN_RANGE(500, 1000), false);
							TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar1 /*44*/], iLocal_261);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						}
					}
				}
				iVar1++;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 3500)
			{
				iLocal_425++;
			}
			break;
		case 6:
			if (func_731(1))
			{
				if (!iLocal_327)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_327 = 1;
					}
				}
			}
			if (!(iLocal_374 == Local_51[23 /*44*/] && bLocal_375))
			{
				if (__LIB_16__::func_855())
				{
					bVar0 = false;
					iVar1 = 18;
					while (iVar1 <= 25)
					{
						if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
						{
							bVar0 = true;
						}
						iVar1++;
					}
					if (bVar0)
					{
						__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CARS", 7, 0, 0, 0);
					}
					iLocal_326 = 0;
					iLocal_425++;
				}
			}
			else
			{
				iLocal_326 = 0;
				iLocal_425++;
			}
			break;
		case 7:
			if (func_731(1))
			{
				if (!iLocal_327)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_327 = 1;
					}
				}
				iVar1 = 18;
				while (iVar1 <= 27)
				{
					func_729(iVar1);
					iVar1++;
				}
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 10000)
			{
				if (func_728(1))
				{
					iLocal_290 = MISC::GET_GAME_TIMER();
					iLocal_425++;
				}
			}
			break;
		case 8:
			if (!iLocal_326 && __LIB_16__::func_855())
			{
				__LIB_0__::func_222(&uLocal_54, 1, 0, "Michael", 0, 1);
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_PLANT", 7, 0, 0, 0))
				{
					iLocal_326 = 1;
				}
			}
			if (func_731(1))
			{
				if (!iLocal_327)
				{
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR", 7, 0, 0, 0);
					iLocal_327 = 1;
				}
				iVar1 = 18;
				while (iVar1 <= 27)
				{
					func_729(iVar1);
					iVar1++;
				}
			}
			if (func_727())
			{
				iLocal_350 = 1;
			}
			func_726();
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 10000)
			{
				if (func_723() && iLocal_350)
				{
					iLocal_326 = 0;
					iLocal_327 = 0;
					iLocal_425++;
				}
			}
			break;
		case 9:
			bVar2 = false;
			func_726();
			iVar1 = 18;
			while (iVar1 <= 27)
			{
				if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
				{
					bVar2 = true;
					func_729(iVar1);
				}
				iVar1++;
			}
			if (!bVar2)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_4GO", 7, 0, 0, 0))
					{
						__LIB_43__::func_206(7, "Stage 6: way out- B escape", 0, 0, 0, 1);
						iLocal_425++;
					}
				}
			}
			else if (!iLocal_326)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_CLEAR2", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			break;
		case 10:
			if (func_722(&(Local_50[1 /*15*/]), 0, -220.89f, -2369.9204f, 24.335f, 111.776f, 1, 0, 0))
			{
				PED::SET_PED_HEATSCALE_OVERRIDE(func_1038(), 0f);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(func_1038(), 1);
				ENTITY::SET_ENTITY_VISIBLE(func_1038(), false, false);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(func_1038(), false);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 30, true);
				PED::SET_PED_ACCURACY(func_1038(), 15);
				PED::SET_PED_COMBAT_MOVEMENT(func_1038(), 1);
				PED::SET_PED_COMBAT_RANGE(func_1038(), 2);
				ENTITY::SET_ENTITY_HEALTH(func_1038(), 1500, 0);
				WEAPON::GIVE_WEAPON_TO_PED(func_1038(), iLocal_418, -1, true, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1038(), iLocal_288);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_50[1 /*15*/], true, 1);
				PED::SET_PED_DIES_IN_WATER(Local_50[1 /*15*/], false);
				if (__LIB_0__::func_715(Local_50[1 /*15*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[1 /*15*/], true);
				}
				func_687(func_1038(), 0, 0);
				__LIB_0__::func_222(&uLocal_54, 1, Local_50[1 /*15*/], "Michael", 0, 1);
				iLocal_290 = MISC::GET_GAME_TIMER();
				iLocal_398 = 0;
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_425++;
			}
			break;
		case 11:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_H1", 7, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
					iLocal_425++;
				}
			}
			break;
		case 12:
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 5000)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_CHOPPER_DEAD");
				iLocal_326 = 0;
				iLocal_358 = 0;
				iLocal_425++;
			}
			break;
		case 13:
			func_721();
			if (func_719())
			{
				iLocal_425++;
			}
			break;
		case 14:
			func_721();
			if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -210.2508f, -2357.449f, 8.507f, 3f, 3f, 2f, false, true, 0) || PED::IS_PED_SWIMMING(func_1038()))
			{
				GRAPHICS::SET_SEETHROUGH(false);
				iLocal_405 = 0;
				iVar1 = 0;
				while (iVar1 <= 25)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar1 /*44*/]))
					{
						PED::DELETE_PED(&(Local_51[iVar1 /*44*/]));
					}
					iVar1++;
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), joaat("WEAPON_UNARMED"), true);
				iLocal_260 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				CAM::SET_CAM_ACTIVE(iLocal_260, true);
				CAM::PLAY_CAM_ANIM(iLocal_260, "michael_jumpsoff_boat_cam", "missheistdocks2a", -206.703f, -2354.962f, 8.354f, 0f, 0f, 0f, false, 2);
				AUDIO::START_AUDIO_SCENE("DH2A_MICHAEL_DASH_AND_DIVE");
				func_471(0, -206.703f, -2354.962f, 8.354f, 1, 0, 1, 3000, 0);
				iLocal_290 = MISC::GET_GAME_TIMER();
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				if (__LIB_16__::func_903(func_1037()))
				{
					TASK::TASK_AIM_GUN_AT_COORD(func_1037(), -209.3837f, -2352.4211f, 8.3192f, -1, false, false);
				}
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_326 = 0;
				iLocal_425++;
			}
			break;
		case 15:
			if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_260) > 0.99f || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
			{
				if (__LIB_16__::func_903(func_1037()))
				{
					TASK::CLEAR_PED_TASKS(func_1037());
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_FRANK_JUMPS");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_shootout_sniping_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dh2a_shootout_sniping_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_MICHAEL_DASH_AND_DIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_MICHAEL_DASH_AND_DIVE");
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_372(1, 0, 0, 3000, 0);
				func_687(func_1038(), 1, 1);
				iLocal_326 = 0;
				iLocal_425++;
			}
			else if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_260) > 0.7f)
			{
				if (!iLocal_326)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DIVE", 7, 0, 0, 0))
						{
							iLocal_326 = 1;
						}
					}
				}
			}
			break;
		case 16:
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2a");
			func_1018(7);
			iLocal_425 = 0;
			break;
	}
}

int func_719()//Position - 0x887BC
{
	func_720(&(Local_50[1 /*15*/]), 0);
	switch (iLocal_358)
	{
		case 0:
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-227.32095f, -2359.71f, 25.235537f, 3f, 2f, 2f, 0f, false, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-236.8192f, -2359.2336f, 17.231823f, 6f, 3f, 2f, 0f, false, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-213.44884f, -2375.1292f, 10.319207f, 2.5f, 1f, 2f, 0f, false, 7);
			PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-222.074f, -2374.5176f, 14.051224f, 2f, 1f, 2f, 0f, false, 7);
			ENTITY::SET_ENTITY_VISIBLE(func_1038(), true, false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -225.4856f, -2377.7957f, 16.3326f, 2f, true, false);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2A02", 0, 0, -1);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -225.4856f, -2377.7957f, 16.3326f, -1, true, 0.25f, false, false, 0, true);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
			TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
			iLocal_290 = MISC::GET_GAME_TIMER() + 4000;
			iLocal_358++;
			break;
		case 1:
			if (iLocal_345 == 3 && MISC::GET_GAME_TIMER() > iLocal_290)
			{
				func_732(12, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[12 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[12 /*44*/], -214.50433f, -2355.6714f, 16.33203f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_51[12 /*44*/], 285.8376f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[12 /*44*/], -213.24863f, -2374.9558f, 16.33176f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[12 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[12 /*44*/], 0f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -213.24863f, -2374.9558f, 16.33176f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -213.24863f, -2374.9558f, 16.33176f, 2000, true, 0.25f, false, false, 0, true);
				TASK::TASK_COMBAT_PED(0, func_1038(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[12 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				func_732(13, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[13 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[13 /*44*/], -220.89f, -2369.9204f, 24.335f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_51[13 /*44*/], 111.776f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[13 /*44*/], -231.06622f, -2374.595f, 16.33076f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[13 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[13 /*44*/], 0f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2A03", 0, 0, -1);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -231.06622f, -2374.595f, 16.33076f, 2000, true, 0.25f, false, false, 0, true);
				TASK::TASK_COMBAT_PED(0, func_1038(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[13 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_345 = 4;
				iLocal_358++;
			}
			break;
		case 2:
			if ((!__LIB_16__::func_903(Local_51[12 /*44*/]) && !__LIB_16__::func_903(Local_51[13 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_1038()))
			{
				func_732(15, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[15 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[15 /*44*/], -250.5471f, -2363.4216f, 8.3192f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_51[15 /*44*/], 186.5092f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[15 /*44*/], -248.8481f, -2375.29f, 8.3192f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[15 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[15 /*44*/], 0f);
				TASK::TASK_COMBAT_PED(Local_51[15 /*44*/], func_1038(), 0, 16);
				func_732(14, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[14 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[14 /*44*/], -250.6802f, -2364.6062f, 8.3192f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_51[14 /*44*/], 197.7292f);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[14 /*44*/], -245.8635f, -2376.9905f, 8.31911f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[14 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[14 /*44*/], 0f);
				TASK::TASK_COMBAT_PED(Local_51[14 /*44*/], func_1038(), 0, 16);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -229.89893f, -2379.2898f, 12.33288f, 5f, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.89893f, -2379.2898f, 12.33288f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 50f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_345 = 6;
				iLocal_358++;
			}
			else
			{
				func_720(&(Local_51[12 /*44*/]), 1);
				func_720(&(Local_51[13 /*44*/]), 2);
			}
			break;
		case 3:
			if ((!__LIB_16__::func_903(Local_51[15 /*44*/]) && !__LIB_16__::func_903(Local_51[14 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_1038()))
			{
				func_732(16, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[16 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[16 /*44*/], -209.40309f, -2362.7363f, 8.31911f, true, false, false, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[16 /*44*/], -210.73999f, -2375.1533f, 8.31911f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[16 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[16 /*44*/], 0f);
				TASK::TASK_COMBAT_PED(Local_51[16 /*44*/], func_1038(), 0, 16);
				func_732(17, 50f, 1, 0);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_51[17 /*44*/], 1);
				ENTITY::SET_ENTITY_COORDS(Local_51[17 /*44*/], -207.84383f, -2363.5024f, 8.31911f, true, false, false, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[17 /*44*/], -211.05281f, -2377.4033f, 8.31911f, 2f, true, false);
				ENTITY::SET_ENTITY_VISIBLE(Local_51[17 /*44*/], false, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_51[17 /*44*/], 0f);
				TASK::TASK_COMBAT_PED(Local_51[17 /*44*/], func_1038(), 0, 16);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -218.31186f, -2377.1353f, 8.31911f, 2f, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.175f, -2376.2395f, 12.3329f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -218.31186f, -2377.1353f, 8.31911f, 2f, -1, 0.25f, 0, 40000f);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_345 = 9;
				iLocal_358++;
			}
			else
			{
				func_720(&(Local_51[15 /*44*/]), 3);
				func_720(&(Local_51[14 /*44*/]), 4);
			}
			break;
		case 4:
			if ((!__LIB_16__::func_903(Local_51[16 /*44*/]) && !__LIB_16__::func_903(Local_51[17 /*44*/])) && !ENTITY::IS_ENTITY_OCCLUDED(func_1038()))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("dh2a_clear_path");
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				if (!ENTITY::IS_ENTITY_AT_COORD(func_1038(), -218.31186f, -2377.1353f, 8.31911f, 8f, 8f, 2f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -218.31186f, -2377.1353f, 8.31911f, 2f, -1, 0.25f, 0, 40000f);
				}
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "docksheist2a01", 0, 520, -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				iLocal_345 = 12;
				return 1;
			}
			else
			{
				func_720(&(Local_51[16 /*44*/]), 5);
				func_720(&(Local_51[17 /*44*/]), 6);
			}
			break;
	}
	return 0;
}

void func_720(var uParam0, int iParam1)//Position - 0x88F6D
{
	if (!__LIB_16__::func_903(*uParam0))
	{
		return;
	}
	switch (Local_53[iParam1 /*2*/].f_1)
	{
		case 0:
			if (Local_53[iParam1 /*2*/] < 255)
			{
				Local_53[iParam1 /*2*/] += 10;
				if (Local_53[iParam1 /*2*/] > 255)
				{
					Local_53[iParam1 /*2*/] = 255;
				}
				ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
				PED::SET_PED_HEATSCALE_OVERRIDE(*uParam0, Local_53[iParam1 /*2*/]);
			}
			else
			{
				Local_53[iParam1 /*2*/].f_1++;
			}
			break;
		case 1:
			PED::DISABLE_PED_HEATSCALE_OVERRIDE(*uParam0);
			Local_53[iParam1 /*2*/].f_1++;
			break;
		case 2:
			break;
	}
}

void func_721()//Position - 0x89026
{
	switch (iLocal_345)
	{
		case 0:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_COVER", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
		case 1:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GOUP", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
		case 2:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GUYON", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
		case 3:
			break;
		case 4:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_903(func_1038()) && __LIB_16__::func_903(Local_51[12 /*44*/]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -225.4856f, -2377.7957f, 16.3326f, 6f, 6f, 4f, false, true, 0))
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GUYMORE", 7, 0, 0, 0))
						{
							iLocal_345++;
						}
					}
				}
				else
				{
					iLocal_345++;
				}
			}
			break;
		case 5:
			break;
		case 6:
			if (__LIB_16__::func_855())
			{
				if (iLocal_382 && iLocal_383)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_TAKEOUT", 7, 0, 0, 0))
					{
						iLocal_345++;
					}
				}
				else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_4H", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
		case 7:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_903(func_1038()))
				{
					if (__LIB_16__::func_903(Local_51[14 /*44*/]) || __LIB_16__::func_903(Local_51[15 /*44*/]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -229.89893f, -2379.2898f, 12.33288f, 6f, 6f, 3f, false, true, 0))
						{
							if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MORE2", 7, 0, 0, 0))
							{
								iLocal_345++;
							}
						}
					}
					else
					{
						iLocal_345++;
					}
				}
			}
			break;
		case 8:
			break;
		case 9:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DEAD", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
		case 10:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_903(func_1038()))
				{
					if (__LIB_16__::func_903(Local_51[16 /*44*/]) || __LIB_16__::func_903(Local_51[17 /*44*/]))
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MAIN", 7, 0, 0, 0))
						{
							iLocal_345++;
						}
					}
					else
					{
						iLocal_345++;
					}
				}
			}
			break;
		case 11:
			break;
		case 12:
			if (__LIB_16__::func_855())
			{
				if (!__LIB_16__::func_903(Local_51[16 /*44*/]) && !__LIB_16__::func_903(Local_51[17 /*44*/]))
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_4H", 7, 0, 0, 0))
					{
						iLocal_345++;
					}
				}
			}
			break;
		case 13:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_NORTH", 7, 0, 0, 0))
				{
					iLocal_345++;
				}
			}
			break;
	}
}

int func_722(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x89349
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
			__LIB_13__::func_823(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_661(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_483(*iParam0, bParam6);
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

int func_723()//Position - 0x893E8
{
	switch (iLocal_379)
	{
		case 0:
			Local_49[4 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -51.4938f, -2587.0032f, 5.0052f, 0f, true, true, false);
			ENTITY::SET_ENTITY_LOD_DIST(Local_49[4 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[4 /*2*/], true, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[4 /*2*/], 0);
			func_732(28, 150f, 1, 1);
			HUD::SET_BLIP_SCALE(Local_51[28 /*44*/].f_1, 1f);
			PED::SET_PED_PROP_INDEX(Local_51[28 /*44*/], 0, 2, 0, false);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[28 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[28 /*44*/], Local_49[4 /*2*/], -1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_49[4 /*2*/], 3, "DH2AREC", true);
			VEHICLE::SET_PLAYBACK_SPEED(Local_49[4 /*2*/], 1f);
			PED::SET_PED_SHOOT_RATE(Local_51[28 /*44*/], 100);
			PED::SET_PED_FIRING_PATTERN(Local_51[28 /*44*/], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_51[28 /*44*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
			PED::SET_PED_ACCURACY(Local_51[28 /*44*/], 4);
			iLocal_379++;
			break;
		case 1:
			if (__LIB_16__::func_903(Local_49[4 /*2*/]) && __LIB_16__::func_903(Local_51[28 /*44*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[4 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_49[4 /*2*/]) > 12000f)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_ARRIVES"))
						{
							AUDIO::START_AUDIO_SCENE("DH2A_CHOPPER_ARRIVES");
						}
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_49[4 /*2*/], "DH2A_CHOPPER_group", 0f);
						iLocal_349 = 1;
						iLocal_379++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_16__::func_903(Local_49[4 /*2*/]) && __LIB_16__::func_903(Local_51[28 /*44*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[4 /*2*/]))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_49[4 /*2*/]) > 15000f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[4 /*2*/]);
						iLocal_349 = 3;
						iLocal_379++;
					}
				}
			}
			break;
		case 3:
			if (__LIB_16__::func_903(Local_49[4 /*2*/]) && __LIB_16__::func_903(Local_51[28 /*44*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[28 /*44*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1 || (MISC::GET_GAME_TIMER() - iLocal_380) > 1000)
				{
					TASK::TASK_HELI_MISSION(Local_51[28 /*44*/], Local_49[4 /*2*/], 0, 0, -168.6174f, -2454.938f, 34.2428f, 4, 40f, 5f, __LIB_16__::func_867(Local_49[4 /*2*/], func_1037(), 1), 34, 10, -1f, 1);
					iLocal_379++;
				}
			}
			break;
		case 4:
			if (__LIB_16__::func_903(Local_49[4 /*2*/]) && __LIB_16__::func_903(Local_51[28 /*44*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[28 /*44*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1 && ENTITY::IS_ENTITY_AT_COORD(Local_49[4 /*2*/], -168.6174f, -2454.938f, 34.2428f, 10f, 10f, 10f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_51[28 /*44*/]);
					WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_51[28 /*44*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
					TASK::TASK_HELI_MISSION(Local_51[28 /*44*/], Local_49[4 /*2*/], 0, func_1037(), ENTITY::GET_ENTITY_COORDS(func_1037(), true), 6, 40f, 40f, -1f, 36, 10, -1f, 0);
					iLocal_380 = MISC::GET_GAME_TIMER();
					iLocal_384 = AUDIO::GET_SOUND_ID();
					iLocal_385 = 0;
					iLocal_379++;
				}
			}
			break;
	}
	if (!__LIB_16__::func_903(Local_49[4 /*2*/]) || !__LIB_16__::func_903(Local_51[28 /*44*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[4 /*2*/]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[4 /*2*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[4 /*2*/]);
			}
		}
		if (iLocal_349 < 7)
		{
			iLocal_349 = 7;
		}
		return 1;
	}
	return 0;
}

void func_726()//Position - 0x897E4
{
	if (iLocal_379 <= 4)
	{
		return;
	}
	if (__LIB_16__::func_903(Local_49[4 /*2*/]) && __LIB_16__::func_903(Local_51[28 /*44*/]))
	{
		if (!iLocal_385)
		{
			if (PED::IS_PED_SHOOTING(Local_51[28 /*44*/]))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
				}
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_384))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_384, "CONDUCTORS_PORT_OF_LS_2A_LOOP", Local_49[4 /*2*/], 0, false, 0);
				}
				iLocal_385 = 1;
			}
		}
		else if (!PED::IS_PED_SHOOTING(Local_51[28 /*44*/]))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_384))
			{
				AUDIO::STOP_SOUND(iLocal_384);
			}
			iLocal_385 = 0;
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_CHOPPER_SHOOTING"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH2A_CHOPPER_SHOOTING");
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_384))
		{
			AUDIO::STOP_SOUND(iLocal_384);
		}
	}
}

int func_727()//Position - 0x898C4
{
	switch (iLocal_349)
	{
		case 0:
			break;
		case 1:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_H2", 7, 0, 0, 0))
				{
					iLocal_349++;
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_H3", 7, 0, 0, 0))
				{
					iLocal_349++;
				}
			}
			break;
		case 4:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DEAL", 7, 0, 0, 0))
				{
					iLocal_349++;
				}
			}
			break;
		case 5:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOAN", 7, 0, 0, 0))
				{
					iLocal_349++;
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_H4", 7, 0, 0, 0))
				{
					iLocal_349++;
				}
			}
			break;
		case 8:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_4E", 7, 0, 0, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_728(bool bParam0)//Position - 0x89A06
{
	int iVar0;
	int iVar1;
	switch (iLocal_377)
	{
		case 0:
			Local_49[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), 14.969f, -2524.4229f, 5.5353f, 0f, true, true, false);
			ENTITY::SET_ENTITY_LOD_DIST(Local_49[1 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[1 /*2*/], true, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[1 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[1 /*2*/], true);
			func_732(18, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[18 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[18 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[18 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[18 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[18 /*44*/], Local_49[1 /*2*/], -1);
			func_732(19, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[19 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[19 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[19 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[19 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[19 /*44*/], Local_49[1 /*2*/], 0);
			func_732(20, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[20 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[20 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[20 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[20 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[20 /*44*/], Local_49[1 /*2*/], 1);
			func_732(21, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[21 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[21 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[21 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[21 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[21 /*44*/], Local_49[1 /*2*/], 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_49[1 /*2*/], 2, "DH2AREC", true);
			VEHICLE::SET_PLAYBACK_SPEED(Local_49[1 /*2*/], 0.8f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_49[1 /*2*/], "DH2A_ENEMY_VEHICLES", 0f);
			iLocal_377++;
			break;
		case 1:
			if (__LIB_16__::func_903(Local_49[1 /*2*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[1 /*2*/]) && __LIB_0__::func_587(Local_49[1 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_49[1 /*2*/], 0f);
					iVar0 = 18;
					while (iVar0 <= 21)
					{
						if (iVar0 == 19)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 20)
						{
							iVar1 = 200;
						}
						else if (iVar0 == 21)
						{
							iVar1 = 800;
						}
						else
						{
							iVar1 = 1000;
						}
						if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*44*/].f_1))
							{
								HUD::SET_BLIP_SCALE(Local_51[iVar0 /*44*/].f_1, 0.7f);
							}
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], Local_51[iVar0 /*44*/].f_15, 10f, true, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar0 /*44*/], 6, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar0 /*44*/], 1, false);
							PED::SET_PED_ACCURACY(Local_51[iVar0 /*44*/], 4);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar1, 0);
							TASK::TASK_SWAP_WEAPON(0, true);
							if (bParam0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], Local_51[iVar0 /*44*/].f_12, 2f, true, false);
								TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[iVar0 /*44*/].f_15, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.4438f, 12.3329f, -1, false, false);
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar0 /*44*/], iLocal_261);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						}
						iVar0++;
					}
					iLocal_377++;
				}
			}
			else
			{
				iLocal_377++;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_729(int iParam0)//Position - 0x89D7F
{
	if (!__LIB_16__::func_903(Local_51[iParam0 /*44*/]))
	{
		return;
	}
	switch (iLocal_344)
	{
		case 0:
			if (__LIB_16__::func_855())
			{
				__LIB_0__::func_222(&uLocal_54, 8, Local_51[iParam0 /*44*/], "MERRYWEATHER5", 1, 1);
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MWPOS5", 7, 0, 0, 0);
				iLocal_344++;
			}
			break;
		case 1:
			if (__LIB_16__::func_855())
			{
				__LIB_0__::func_222(&uLocal_54, 8, Local_51[iParam0 /*44*/], "MERRYWEATHER5", 1, 1);
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MWGO5", 7, 0, 0, 0);
				iLocal_344++;
			}
			break;
		case 2:
			if (__LIB_16__::func_855())
			{
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SHOTAT", 7, 0, 0, 0);
				iLocal_344++;
			}
			break;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_51[iParam0 /*44*/], false))
	{
		return;
	}
	if (!PED::IS_PED_IN_COMBAT(Local_51[iParam0 /*44*/], 0))
	{
		TASK::TASK_COMBAT_PED(Local_51[iParam0 /*44*/], func_1037(), 0, 16);
	}
	switch (Local_51[iParam0 /*44*/].f_31)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_51[iParam0 /*44*/], Local_51[iParam0 /*44*/].f_12, 4f, 4f, 4f, false, true, 0))
			{
				if (Local_51[iParam0 /*44*/].f_30 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Local_51[iParam0 /*44*/].f_30) > Local_51[iParam0 /*44*/].f_32)
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iParam0 /*44*/], Local_51[iParam0 /*44*/].f_9, 2f, true, false);
						Local_51[iParam0 /*44*/].f_30 = 0;
						Local_51[iParam0 /*44*/].f_31++;
					}
				}
				else
				{
					Local_51[iParam0 /*44*/].f_30 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iParam0 /*44*/], Local_51[iParam0 /*44*/].f_12, 2f, true, false);
			}
			break;
		case 1:
			break;
	}
}

int func_730(bool bParam0)//Position - 0x89F3F
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 1000f;
	if (bParam0)
	{
		iVar2 = 22;
	}
	else
	{
		iVar2 = 26;
	}
	if (!iLocal_373)
	{
		if (iLocal_374 == 0)
		{
			iVar0 = iVar2;
			while (iVar0 <= 27)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
				{
					if (MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[iVar0 /*44*/], -5f, -5f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[iVar0 /*44*/], 5f, 5f, 1f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51[iVar0 /*44*/], false))
							{
								iLocal_374 = Local_51[iVar0 /*44*/];
							}
						}
						else
						{
							iLocal_373 = 1;
							Local_376 = { Local_51[iVar0 /*44*/].f_15 };
						}
					}
				}
				else
				{
					iLocal_373 = 1;
					Local_376 = { Local_51[iVar0 /*44*/].f_15 };
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 18;
		while (iVar0 <= 27)
		{
			if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51[iVar0 /*44*/], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar0 /*44*/], true), Local_376, true) < fVar1)
					{
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar0 /*44*/], true), Local_376, true);
						iLocal_374 = Local_51[iVar0 /*44*/];
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_374 != 0)
	{
		iVar0 = 18;
		while (iVar0 <= 27)
		{
			if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_51[iVar0 /*44*/], true))
				{
					if (!bLocal_375)
					{
						TASK::CLEAR_PED_TASKS(Local_51[iVar0 /*44*/]);
					}
					else if (!iVar0 == 23)
					{
						TASK::CLEAR_PED_TASKS(Local_51[iVar0 /*44*/]);
					}
				}
			}
			iVar0++;
		}
		__LIB_0__::func_222(&uLocal_54, 8, iLocal_374, "MERRYWEATHER5", 1, 1);
		iLocal_290 = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

int func_731(bool bParam0)//Position - 0x8A107
{
	int iVar0;
	int iVar1;
	switch (iLocal_378)
	{
		case 0:
			Local_49[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), 14.969f, -2524.4229f, 5.5353f, 0f, true, true, false);
			ENTITY::SET_ENTITY_LOD_DIST(Local_49[2 /*2*/], 300);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_49[2 /*2*/], true, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[2 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[2 /*2*/], true);
			func_732(22, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[22 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[22 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[22 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[22 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[22 /*44*/], Local_49[2 /*2*/], -1);
			func_732(23, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[23 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[23 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[23 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[23 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[23 /*44*/], Local_49[2 /*2*/], 0);
			func_732(24, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[24 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[24 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[24 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[24 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[24 /*44*/], Local_49[2 /*2*/], 1);
			func_732(25, 150f, 1, 1);
			PED::SET_PED_DIES_WHEN_INJURED(Local_51[25 /*44*/], true);
			PED::SET_COMBAT_FLOAT(Local_51[25 /*44*/], 3, 0.5f);
			HUD::SET_BLIP_SCALE(Local_51[25 /*44*/].f_1, 1f);
			ENTITY::SET_ENTITY_LOD_DIST(Local_51[25 /*44*/], 300);
			PED::SET_PED_INTO_VEHICLE(Local_51[25 /*44*/], Local_49[2 /*2*/], 2);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_49[2 /*2*/], 1, "DH2AREC", true);
			VEHICLE::SET_PLAYBACK_SPEED(Local_49[2 /*2*/], 1f);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_49[2 /*2*/], "DH2A_ENEMY_VEHICLES", 0f);
			iLocal_378++;
			break;
		case 1:
			if (__LIB_16__::func_903(Local_49[2 /*2*/]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[2 /*2*/]) && __LIB_0__::func_587(Local_49[2 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_49[2 /*2*/], 0f);
					iVar0 = 22;
					while (iVar0 <= 25)
					{
						if (iVar0 == 23)
						{
							iVar1 = 0;
						}
						else if (iVar0 == 24)
						{
							iVar1 = 200;
						}
						else if (iVar0 == 25)
						{
							iVar1 = 400;
						}
						else
						{
							iVar1 = 600;
						}
						if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*44*/].f_1))
							{
								HUD::SET_BLIP_SCALE(Local_51[iVar0 /*44*/].f_1, 0.7f);
							}
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], Local_51[iVar0 /*44*/].f_15, 10f, true, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar0 /*44*/], 6, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar0 /*44*/], 1, false);
							PED::SET_PED_ACCURACY(Local_51[iVar0 /*44*/], 4);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar1, 0);
							TASK::TASK_SWAP_WEAPON(0, true);
							if (bParam0)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], Local_51[iVar0 /*44*/].f_12, 2f, true, false);
								TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[iVar0 /*44*/].f_15, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_AIM_GUN_AT_COORD(0, -222.0173f, -2376.4438f, 12.3329f, -1, false, false);
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar0 /*44*/], iLocal_261);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						}
						iVar0++;
					}
					iLocal_378++;
				}
			}
			else
			{
				iLocal_378++;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_732(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x8A47C
{
	__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
	func_691(&(Local_51[iParam0 /*44*/]), joaat("S_M_Y_BlackOps_01"), Local_51[iParam0 /*44*/].f_3, Local_51[iParam0 /*44*/].f_21, 0);
	if (__LIB_16__::func_903(Local_51[iParam0 /*44*/]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_51[iParam0 /*44*/], iLocal_289);
		PED::SET_PED_AS_ENEMY(Local_51[iParam0 /*44*/], true);
		WEAPON::GIVE_WEAPON_TO_PED(Local_51[iParam0 /*44*/], iLocal_418, -1, true, true);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_MONEY(Local_51[iParam0 /*44*/], 0);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_ALERTNESS(Local_51[iParam0 /*44*/], 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_51[iParam0 /*44*/], 512, true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_51[iParam0 /*44*/], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 30, bParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 14, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 1, false);
		PED::SET_PED_COMBAT_MOVEMENT(Local_51[iParam0 /*44*/], 1);
		AUDIO::STOP_PED_SPEAKING(Local_51[iParam0 /*44*/], true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_51[iParam0 /*44*/], true, 1);
		PED::SET_PED_HEARING_RANGE(Local_51[iParam0 /*44*/], 10f);
		PED::SET_PED_SEEING_RANGE(Local_51[iParam0 /*44*/], fParam1);
		PED::SET_PED_CONFIG_FLAG(Local_51[iParam0 /*44*/], 118, false);
		PED::SET_PED_ACCURACY(Local_51[iParam0 /*44*/], 30);
		PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_51[iParam0 /*44*/]);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_51[iParam0 /*44*/], true);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_51[iParam0 /*44*/], true);
		}
		Local_51[iParam0 /*44*/].f_37 = 1;
		Local_51[iParam0 /*44*/].f_38 = 0;
		Local_51[iParam0 /*44*/].f_39 = 0;
		Local_51[iParam0 /*44*/].f_40 = 0;
		Local_51[iParam0 /*44*/].f_28 = 0;
		Local_51[iParam0 /*44*/].f_42 = 0;
		Local_51[iParam0 /*44*/].f_43 = 0;
		Local_51[iParam0 /*44*/].f_41 = 0;
		Local_51[iParam0 /*44*/].f_29 = -1;
		Local_51[iParam0 /*44*/].f_34 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 20000));
		Local_51[iParam0 /*44*/].f_35 = 0;
		if (iLocal_424 < 6)
		{
			func_735(iParam0);
		}
		else if (!HUD::DOES_BLIP_EXIST(Local_51[iParam0 /*44*/].f_1))
		{
			Local_51[iParam0 /*44*/].f_1 = __LIB_0__::func_666(Local_51[iParam0 /*44*/], 1, 145);
		}
		__LIB_0__::func_609(Local_51[iParam0 /*44*/], 1);
	}
}

void func_735(int iParam0)//Position - 0x8A76F
{
	if (!__LIB_16__::func_903(Local_51[iParam0 /*44*/]))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
	switch (iParam0)
	{
		case 2:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -110.7773f, -2374.6187f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.3457f, -2366.2498f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -113.7629f, -2357.5508f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -99.3139f, -2365.4387f, 8.322f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 3:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[3 /*44*/].f_3, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, 180f, 0);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 2f, 2f, -1, 1, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 4:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.6687f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.7585f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 5:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.6687f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.7585f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 6:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -129.9954f, -2365.6687f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.6747f, -2377.901f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.1642f, -2365.7585f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -138.5969f, -2354.177f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 7:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[7 /*44*/].f_3, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PATROL(0, "MISS_PATROL_6", 1, false, true);
			break;
		case 8:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -155.3885f, -2353.8774f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -147.7102f, -2364.968f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -154.9743f, -2377.9568f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.6116f, -2367.869f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 9:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -181.9512f, -2367.6396f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5216f, -2353.9668f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.9121f, -2364.6187f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5004f, -2378.1313f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 10:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -181.9512f, -2367.6396f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5216f, -2353.9668f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -163.9121f, -2364.6187f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -171.5004f, -2378.1313f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 11:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.5307f, -2378.2f, 10.9717f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.6108f, -2375.8923f, 10.9717f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 12:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[12 /*44*/].f_3, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, 180f, 0);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 2f, 2f, -1, 1, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 13:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.7796f, -2377.952f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -209.5825f, -2368.0845f, 8.3192f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.6789f, -2353.7856f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -190.3428f, -2365.7305f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 14:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.7796f, -2377.952f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -209.5825f, -2368.0845f, 8.3192f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -200.6789f, -2353.7856f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -190.3428f, -2365.7305f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 15:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -221.3304f, -2377.0103f, 12.3329f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.3291f, -2377.7026f, 12.3329f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.6653f, -2375.9956f, 16.3326f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -215.1669f, -2377.6995f, 16.3326f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_STAND_STILL(0, 3000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -222.6653f, -2375.9956f, 16.3326f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -230.3291f, -2377.7026f, 12.3329f, 1f, -1, 0.25f, 0, 40000f);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		case 16:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_51[16 /*44*/].f_3, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PATROL(0, "MISS_PATROL_8", 1, false, true);
			break;
		case 17:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -250.5147f, -2375.5378f, 8.3192f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -252.1649f, -2363.8347f, 8.3192f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a", "IDLE_guard", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
			break;
		default:
			TASK::TASK_STAND_STILL(0, -1);
			break;
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
	TASK::TASK_PERFORM_SEQUENCE(Local_51[iParam0 /*44*/], iLocal_261);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
}

float func_736(struct<3> Param0)//Position - 0x8B000
{
	struct<3> Var0;
	struct<3> Var1;
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	Var1 = { __LIB_0__::func_79(Var0) };
	return MISC::ATAN2(Var1.f_2, SYSTEM::VMAG(Var1.f_0, Var1.f_1, 0f));
}

float func_737(struct<3> Param0)//Position - 0x8B044
{
	struct<3> Var0;
	float fVar1;
	Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -180f)
	{
		fVar1 = (fVar1 + 360f);
	}
	return fVar1;
}

void func_738()//Position - 0x8B09F
{
	if (__LIB_14__::func_466() == 1)
	{
		__LIB_1__::func_33(0);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	}
}

void func_739()//Position - 0x8B0E3
{
	if (__LIB_16__::func_903(Local_49[1 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[1 /*2*/]))
		{
			if (!__LIB_16__::func_903(Local_51[18 /*44*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[1 /*2*/]);
				if (__LIB_16__::func_903(Local_51[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, false, false);
				}
				if (__LIB_16__::func_903(Local_51[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[21 /*44*/], -163.9438f, -2416.1736f, 5.4341f, 2f, false, false);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[1 /*2*/], 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[1 /*2*/], 4, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[1 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_49[1 /*2*/], 10, 4000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[18 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				if (__LIB_16__::func_903(Local_51[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, false, false);
				}
				if (__LIB_16__::func_903(Local_51[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[21 /*44*/], -163.9438f, -2416.1736f, 5.4341f, 2f, false, false);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[1 /*2*/], 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[1 /*2*/], 5, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[1 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_49[1 /*2*/], 11, 4000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[18 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				if (__LIB_16__::func_903(Local_51[19 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[19 /*44*/], -165.7794f, -2421.983f, 5.648f, 2f, false, false);
				}
				if (__LIB_16__::func_903(Local_51[21 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[21 /*44*/], -163.9438f, -2416.1736f, 5.4341f, 2f, false, false);
				}
			}
		}
	}
	if (__LIB_16__::func_903(Local_49[2 /*2*/]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_49[2 /*2*/]))
		{
			if (!__LIB_16__::func_903(Local_51[22 /*44*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[2 /*2*/]);
				if (__LIB_16__::func_903(Local_51[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[24 /*44*/], -112.3173f, -2426.4836f, 5.3646f, 2f, false, false);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[2 /*2*/], 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[2 /*2*/], 4, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[2 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_49[2 /*2*/], 10, 4000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[22 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				if (__LIB_16__::func_903(Local_51[22 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[22 /*44*/], -105.7819f, -2427.7837f, 5.8586f, 2f, false, false);
				}
				if (__LIB_16__::func_903(Local_51[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[24 /*44*/], -112.3173f, -2426.4836f, 5.3646f, 2f, false, false);
				}
			}
			else if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[2 /*2*/], 1, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(Local_49[2 /*2*/], 5, false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_49[2 /*2*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_49[2 /*2*/], 11, 4000);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(Local_51[22 /*44*/], iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				if (__LIB_16__::func_903(Local_51[22 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[22 /*44*/], -105.7819f, -2427.7837f, 5.8586f, 2f, false, false);
				}
				if (__LIB_16__::func_903(Local_51[24 /*44*/]))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[24 /*44*/], -112.3173f, -2426.4836f, 5.3646f, 2f, false, false);
				}
			}
		}
	}
}

void func_740()//Position - 0x8B47C
{
	int iVar0;
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_425 < 3)
	{
		func_762();
	}
	func_738();
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_302 = 0;
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_7");
			if (__LIB_16__::func_903(func_1038()))
			{
				func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			__LIB_43__::func_206(5, "Stage 5: fourth bomb", 0, 0, 0, 1);
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_290 = MISC::GET_GAME_TIMER();
			iLocal_425++;
			break;
		case 1:
			if ((!iLocal_352 && __LIB_16__::func_855()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_TK3", 7, 0, 0, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_52[3 /*7*/].f_1))
					{
						Local_52[3 /*7*/].f_1 = __LIB_0__::func_488(Local_52[3 /*7*/].f_2, 0);
					}
					__LIB_16__::func_859(&uLocal_514, "docksheist2A01");
					__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
					__LIB_16__::func_852(&uLocal_514, joaat("p_po1_01_doorm_s"));
					__LIB_16__::func_857(&uLocal_514, "missheistdocks2aig_1");
					iLocal_290 = MISC::GET_GAME_TIMER();
					iLocal_425++;
				}
			}
			else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_ENT_NS", 7, 0, 0, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_52[3 /*7*/].f_1))
				{
					Local_52[3 /*7*/].f_1 = __LIB_0__::func_488(Local_52[3 /*7*/].f_2, 0);
				}
				__LIB_16__::func_852(&uLocal_514, joaat("p_po1_01_doorm_s"));
				__LIB_16__::func_857(&uLocal_514, "missheistdocks2aig_1");
				__LIB_16__::func_859(&uLocal_514, "docksheist2A01");
				__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
				iLocal_290 = MISC::GET_GAME_TIMER();
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(-219.36f, -2381.92f, 14.26f, __LIB_0__::func_79(-0.39f, 0.92f, -0.08f), 50f, 0);
				}
				iLocal_327 = 0;
				iLocal_425++;
			}
			break;
		case 2:
			if ((ENTITY::IS_ENTITY_AT_COORD(func_1038(), Local_52[3 /*7*/].f_2, 2f, 2f, 2f, false, true, 0) && !Local_477.f_20) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_SHIP_DOOR", false, -1))
			{
				if (__LIB_16__::func_903(Local_51[15 /*44*/]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_51[15 /*44*/], func_1038()) || PED::IS_PED_IN_COMBAT(Local_51[15 /*44*/], func_1038()))
					{
						if (!iLocal_327)
						{
							if (__LIB_16__::func_855())
							{
								if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_HLP_NS", 7, 0, 0, 0))
								{
									iLocal_327 = 1;
								}
							}
						}
					}
					else
					{
						Local_52[3 /*7*/].f_6 = 1;
						if (!Local_477.f_20)
						{
							iLocal_491 = 0;
						}
						__LIB_16__::func_853(&uLocal_514, 1, "DH2AREC");
						__LIB_16__::func_853(&uLocal_514, 2, "DH2AREC");
						__LIB_16__::func_853(&uLocal_514, 3, "DH2AREC");
						__LIB_16__::func_859(&uLocal_514, "docksheist2a02");
						__LIB_16__::func_859(&uLocal_514, "docksheist2a03");
						__LIB_16__::func_852(&uLocal_514, joaat("buzzard"));
						iLocal_313 = 0;
						AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS");
						iLocal_425++;
					}
				}
				else
				{
					Local_52[3 /*7*/].f_6 = 1;
					if (!Local_477.f_20)
					{
						iLocal_491 = 0;
					}
					__LIB_16__::func_853(&uLocal_514, 1, "DH2AREC");
					__LIB_16__::func_853(&uLocal_514, 2, "DH2AREC");
					__LIB_16__::func_853(&uLocal_514, 3, "DH2AREC");
					__LIB_16__::func_859(&uLocal_514, "docksheist2a02");
					__LIB_16__::func_859(&uLocal_514, "docksheist2a03");
					__LIB_16__::func_852(&uLocal_514, joaat("buzzard"));
					iLocal_313 = 0;
					AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS");
					iLocal_425++;
				}
			}
			else if (!iLocal_343)
			{
				if (PLAYER::PLAYER_PED_ID() == func_1038())
				{
					if (__LIB_16__::func_854())
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_229("DCKH_PLB3", 7500, 1);
						iLocal_343 = 1;
					}
				}
			}
			break;
		case 3:
			if (func_759())
			{
				iLocal_290 = MISC::GET_GAME_TIMER();
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_432[0]))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_432[0]);
				}
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_432[1]))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_432[1]);
				}
				iLocal_491 = 0;
				iLocal_425 = -1;
			}
			break;
		case -1:
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
				{
					PED::DELETE_PED(&(Local_51[iVar0 /*44*/]));
				}
				iVar0++;
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("PORT_OF_LS_SHIP_DOOR");
			if (__LIB_16__::func_903(func_1038()))
			{
				PED::DELETE_PED(&(Local_50[1 /*15*/]));
			}
			__LIB_16__::func_912(&uLocal_514, joaat("p_po1_01_doorm_s"));
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2aig_1");
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2aswitchig_7");
			func_1018(6);
			break;
	}
	if (iLocal_425 < 3)
	{
		func_742();
		if ((((!__LIB_16__::func_903(Local_51[13 /*44*/]) && !__LIB_16__::func_903(Local_51[12 /*44*/])) && !__LIB_16__::func_903(Local_51[15 /*44*/])) && __LIB_16__::func_855()) && !iLocal_326)
		{
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (iLocal_352)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_UP_NS", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
				else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_INVIEW", 7, 0, 0, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ALL_CLEAR");
					iLocal_326 = 1;
				}
			}
			else if (iLocal_352)
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_UPM_NS", 7, 0, 0, 0))
				{
					iLocal_326 = 1;
				}
			}
			else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_UP", 7, 0, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ALL_CLEAR");
				iLocal_326 = 1;
			}
		}
		if (PLAYER::PLAYER_PED_ID() == func_1037())
		{
			__LIB_13__::func_808(&(Local_52[3 /*7*/].f_1));
			if (!iLocal_339 && !Local_477.f_20)
			{
				if (__LIB_16__::func_854())
				{
					__LIB_0__::func_229("DCKH_PROTECT", 7500, 1);
					iLocal_339 = 1;
				}
			}
		}
		else if (!Local_52[3 /*7*/].f_6)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_52[3 /*7*/].f_1))
			{
				Local_52[3 /*7*/].f_1 = __LIB_0__::func_488(Local_52[3 /*7*/].f_2, 0);
			}
		}
	}
}

void func_742()//Position - 0x8BAEC
{
	int iVar0;
	int iVar1;
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
		__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
		__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
	}
	else
	{
		if (iLocal_424 == 2)
		{
			if (!Local_52[0 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_52[0 /*7*/].f_1))
				{
					Local_52[0 /*7*/].f_1 = __LIB_0__::func_488(Local_52[0 /*7*/].f_2, 0);
				}
			}
			else
			{
				__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
			}
		}
		else
		{
			__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
		}
		if (iLocal_424 == 3)
		{
			if (!Local_52[1 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_52[1 /*7*/].f_1))
				{
					Local_52[1 /*7*/].f_1 = __LIB_0__::func_488(Local_52[1 /*7*/].f_2, 0);
				}
			}
			else
			{
				__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
			}
		}
		else
		{
			__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
		}
		if (iLocal_424 == 4)
		{
			if (!Local_52[2 /*7*/].f_6)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_52[2 /*7*/].f_1))
				{
					Local_52[2 /*7*/].f_1 = __LIB_0__::func_488(Local_52[2 /*7*/].f_2, 0);
				}
			}
			else
			{
				__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
			}
		}
		else
		{
			__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
		}
	}
	iVar1 = 5000;
	if (!iLocal_352)
	{
		iVar0 = 2;
		while (iVar0 <= 17)
		{
			if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_51[iVar0 /*44*/], func_1038()))
				{
					Local_51[iVar0 /*44*/].f_38 = 1;
					iVar1 = 5000;
				}
				else if (Local_51[iVar0 /*44*/].f_28 == 1)
				{
					Local_51[iVar0 /*44*/].f_38 = 1;
					iVar1 = 15000;
				}
				else if (Local_51[iVar0 /*44*/].f_42)
				{
					Local_51[iVar0 /*44*/].f_38 = 1;
					iVar1 = 15000;
				}
				else
				{
					Local_51[iVar0 /*44*/].f_38 = 0;
				}
			}
			else
			{
				Local_51[iVar0 /*44*/].f_38 = 0;
			}
			iVar0++;
		}
		bLocal_367 = false;
		iVar0 = 2;
		while (iVar0 <= 17)
		{
			if (Local_51[iVar0 /*44*/].f_38 && __LIB_16__::func_903(Local_51[iVar0 /*44*/]))
			{
				bLocal_367 = true;
			}
			iVar0++;
		}
		if (bLocal_367)
		{
			if (!iLocal_354)
			{
				iLocal_291 = MISC::GET_GAME_TIMER();
				iLocal_354 = 1;
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_291) > iVar1)
			{
				if (PLAYER::PLAYER_PED_ID() == func_1038())
				{
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_ALRF_NS", 7, 0, 0, 0);
				}
				else
				{
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_ALRM_NS", 7, 0, 0, 0);
				}
				__LIB_0__::func_497(619, 1, 0);
				iLocal_352 = 1;
			}
		}
		else
		{
			iLocal_354 = 0;
		}
	}
	if (iLocal_352)
	{
		if (iLocal_353 == 0)
		{
			iLocal_353 = 1;
			AUDIO::TRIGGER_MUSIC_EVENT("dh2a_early_alarm");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_plant_bombs_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dh2a_plant_bombs_scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dh2a_sniping_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dh2a_sniping_scene");
			}
			if (PLAYER::PLAYER_PED_ID() == func_1037())
			{
				AUDIO::START_AUDIO_SCENE("dh2a_shootout_sniping_scene");
			}
			else if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				AUDIO::START_AUDIO_SCENE("dh2a_shootout_scene");
			}
			__LIB_16__::func_7(&uLocal_54, "d2aaud", "dh2a_alrm", 7, 0, 0, 0);
			iLocal_491 = 1;
			func_446(0, 0, 1, 0, 0, 0);
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				TASK::CLEAR_PED_TASKS(func_1037());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(func_1038());
			}
			func_372(1, 0, 0, 3000, 0);
			CAM::DESTROY_ALL_CAMS(false);
		}
		func_757();
		if (PLAYER::PLAYER_PED_ID() == func_1037())
		{
			func_756();
		}
		else
		{
			func_755();
			PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 23, false);
			__LIB_13__::func_808(&(Local_50[1 /*15*/].f_1));
		}
		func_752();
	}
	else
	{
		if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			PED::SET_PED_RESET_FLAG(func_1038(), 311, true);
		}
		func_751();
		if (__LIB_16__::func_903(func_1037()))
		{
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
				{
					if (PLAYER::PLAYER_PED_ID() == func_1037())
					{
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], Local_51[iVar0 /*44*/].f_18, 2f, false, false);
					}
					else
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar0 /*44*/], false);
					}
				}
				iVar0++;
			}
		}
		if (!Local_477.f_20)
		{
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				func_749();
				func_748(&(Local_51[3 /*44*/]));
				func_748(&(Local_51[12 /*44*/]));
			}
			else if (func_747())
			{
				func_746();
			}
			else
			{
				func_743();
			}
		}
	}
}

void func_743()//Position - 0x8BF24
{
	int iVar0;
	if (__LIB_16__::func_903(func_1038()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(func_1038(), &iVar0, true))
		{
			if (iVar0 != iLocal_422)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_422, true);
			}
		}
		PED::SET_PED_ACCURACY(func_1038(), 100);
		switch (iLocal_424)
		{
			case 2:
				switch (iLocal_302)
				{
					case 0:
						if (!Local_52[0 /*7*/].f_6)
						{
							iLocal_422 = iLocal_420;
							WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.92709f, -2366.1184f, 13.29613f, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_PLANT_BOMB(0, -83.92709f, -2366.1184f, 13.29613f, 90f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							iLocal_302++;
						}
						break;
					case 1:
						if (Local_52[0 /*7*/].f_6 == 1)
						{
							iLocal_422 = iLocal_421;
							__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
							iLocal_290 = MISC::GET_GAME_TIMER();
							iLocal_302++;
						}
						break;
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_290) > 1000)
						{
							Local_52[0 /*7*/].f_6 = 1;
							iLocal_302++;
						}
						break;
					case 3:
						break;
				}
				break;
			case 3:
				switch (iLocal_302)
				{
					case 0:
						iLocal_422 = iLocal_421;
						if (func_745(func_1038(), Local_2101[8 /*7*/]))
						{
							Local_309 = { -95.5662f, -2375.6272f, 13.2963f };
							fLocal_310 = 87.6044f;
							iLocal_302++;
						}
						else if (func_745(func_1038(), Local_2101[9 /*7*/]) || func_745(func_1038(), Local_2101[10 /*7*/]))
						{
							Local_309 = { -124.3208f, -2373.9026f, 8.3191f };
							fLocal_310 = 87.6044f;
							iLocal_302 = 3;
						}
						else
						{
							Local_309 = { -132.6543f, -2377.2488f, 8.3191f };
							fLocal_310 = 358.0533f;
							TASK::REMOVE_COVER_POINT(iLocal_262);
							iLocal_262 = TASK::ADD_COVER_POINT(Local_309, fLocal_310, 0, 2, 0, false);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_309, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_309, -1, false, 0.25f, true, false, iLocal_262, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
							iLocal_302 = 4;
						}
						break;
					case 1:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(Local_309, fLocal_310, 3, 0, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_309, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_309, -1, false, 0.25f, true, false, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						iLocal_302++;
						break;
					case 2:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[2 /*44*/]) || (!func_745(Local_51[2 /*44*/], Local_2101[3 /*7*/]) && __LIB_16__::func_855()))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1038(), -124.5024f, -2374.0386f, 8.3189f, 2f, -1, 0.25f, 0, 40000f);
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_LADDER", 7, 0, 0, 0);
									iLocal_305 = 0;
									iLocal_306 = 0;
									iLocal_302++;
								}
								else
								{
									if (__LIB_16__::func_903(Local_51[2 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_51[2 /*44*/].f_1))
										{
											Local_51[2 /*44*/].f_1 = __LIB_0__::func_666(Local_51[2 /*44*/], 1, 145);
										}
									}
									if (!iLocal_306)
									{
										if (__LIB_16__::func_855())
										{
											if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK", 7, 0, 0, 0))
											{
												iLocal_306 = 1;
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -95.5662f, -2375.6272f, 13.2963f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 3:
						Local_309 = { -124.5024f, -2374.0386f, 8.3189f };
						fLocal_310 = 87.6044f;
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(Local_309, fLocal_310, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_309, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_309, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						iLocal_302++;
						break;
					case 4:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[4 /*44*/]) || !func_745(Local_51[4 /*44*/], Local_2101[4 /*7*/]))
								{
									if (__LIB_16__::func_903(Local_51[3 /*44*/]) && __LIB_16__::func_855())
									{
										__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_STEPS1M", 7, 0, 0, 0);
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(func_1038(), Local_51[3 /*44*/], 0f, -0.1f, 0f, 1f, -1, 0.1f, true);
										iLocal_305 = 0;
										iLocal_341 = 0;
										iLocal_302++;
									}
									else
									{
										iLocal_305 = 0;
										iLocal_302 = 6;
									}
								}
								else if (__LIB_16__::func_903(Local_51[4 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_51[4 /*44*/].f_1))
									{
										Local_51[4 /*44*/].f_1 = __LIB_0__::func_666(Local_51[4 /*44*/], 1, 145);
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -124.5024f, -2374.0386f, 8.3189f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 5:
						if (func_744(&(Local_51[3 /*44*/])))
						{
							iLocal_422 = iLocal_421;
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GUY1M", 7, 0, 0, 0);
							iLocal_302++;
						}
						break;
					case 6:
						Local_309 = { -132.6543f, -2377.2488f, 8.3191f };
						fLocal_310 = 358.0533f;
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(Local_309, fLocal_310, 0, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_309, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_309, -1, false, 0.25f, true, false, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						iLocal_302++;
						break;
					case 7:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[4 /*44*/]) || !func_745(Local_51[4 /*44*/], Local_2101[4 /*7*/]))
								{
									iLocal_422 = iLocal_420;
									WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -128.70566f, -2367.1794f, 8.31891f, 2f, -1, 0.25f, 0, 40000f);
									TASK::TASK_PLANT_BOMB(0, -128.69624f, -2366.828f, 9.2213f, 270f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
									TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
									iLocal_305 = 0;
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[4 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
										else
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
										}
									}
									iLocal_341 = 0;
									iLocal_302++;
								}
								else if (__LIB_16__::func_903(Local_51[4 /*44*/]))
								{
									if (!iLocal_341)
									{
										if (__LIB_16__::func_855())
										{
											if (func_745(Local_51[8 /*44*/], Local_2101[5 /*7*/]))
											{
												if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_341 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -132.6543f, -2377.2488f, 8.3191f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 8:
						if (Local_52[1 /*7*/].f_6 == 1)
						{
							iLocal_422 = iLocal_421;
							__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
							iLocal_290 = MISC::GET_GAME_TIMER();
							iLocal_302++;
						}
						break;
					case 9:
						if ((MISC::GET_GAME_TIMER() - iLocal_290) > 1000)
						{
							Local_52[1 /*7*/].f_6 = 1;
							iLocal_302++;
						}
						break;
					case 10:
						break;
				}
				break;
			case 4:
				switch (iLocal_302)
				{
					case 0:
						iLocal_422 = iLocal_421;
						if ((func_745(func_1038(), Local_2101[8 /*7*/]) || func_745(func_1038(), Local_2101[9 /*7*/])) || func_745(func_1038(), Local_2101[10 /*7*/]))
						{
							iLocal_302++;
						}
						else if (func_745(func_1038(), Local_2101[11 /*7*/]))
						{
							iLocal_302 = 3;
						}
						else if (func_745(func_1038(), Local_2101[12 /*7*/]))
						{
							Local_309 = { -161.0396f, -2377.5042f, 8.3191f };
							fLocal_310 = 356.7672f;
							iLocal_302 = 5;
						}
						else if (func_745(func_1038(), Local_2101[13 /*7*/]))
						{
							Local_309 = { -177.2718f, -2377.5042f, 8.3191f };
							iLocal_302 = 7;
						}
						else
						{
							func_745(func_1038(), Local_2101[14 /*7*/]);
							iLocal_302 = 9;
						}
						break;
					case 1:
						Local_309 = { -132.01889f, -2376.58f, 8.31907f };
						fLocal_310 = 89.7021f;
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(Local_309, fLocal_310, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_309, 2f, -1, 0.7f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_309, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						iLocal_302++;
						break;
					case 2:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[8 /*44*/]) || !func_745(Local_51[8 /*44*/], Local_2101[5 /*7*/]))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1038(), -144.5449f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
									iLocal_305 = 0;
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[8 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
										else
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
										}
									}
									iLocal_341 = 0;
									iLocal_302++;
								}
								else if (__LIB_16__::func_903(Local_51[8 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_51[8 /*44*/].f_1))
									{
										Local_51[8 /*44*/].f_1 = __LIB_0__::func_666(Local_51[8 /*44*/], 1, 145);
									}
									if (!iLocal_341)
									{
										if (__LIB_16__::func_855())
										{
											if (func_745(Local_51[8 /*44*/], Local_2101[5 /*7*/]))
											{
												if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_341 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -132.01889f, -2376.58f, 8.31907f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 3:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(-144.5449f, -2377.5042f, 8.3191f, 354.7062f, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -144.5449f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -144.5449f, -2377.5042f, 8.3191f, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_305 = 0;
						iLocal_302++;
						break;
					case 4:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[8 /*44*/]) || !func_745(Local_51[8 /*44*/], Local_2101[5 /*7*/]))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1038(), -161.0396f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
									iLocal_305 = 0;
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[8 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_341 = 0;
									iLocal_302++;
								}
								else if (__LIB_16__::func_903(Local_51[8 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_51[8 /*44*/].f_1))
									{
										Local_51[8 /*44*/].f_1 = __LIB_0__::func_666(Local_51[8 /*44*/], 1, 145);
									}
									if (!iLocal_341)
									{
										if (__LIB_16__::func_855())
										{
											if (func_745(Local_51[8 /*44*/], Local_2101[5 /*7*/]))
											{
												if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_341 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -144.5449f, -2377.5042f, 8.3191f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 5:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(-161.0396f, -2377.5042f, 8.3191f, 354.7062f, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -161.0396f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -161.0396f, -2377.5042f, 8.3191f, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_305 = 0;
						iLocal_341 = 0;
						iLocal_302++;
						break;
					case 6:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[10 /*44*/]) || !func_745(Local_51[10 /*44*/], Local_2101[6 /*7*/]))
								{
									if (!iLocal_298)
									{
										AUDIO::TRIGGER_MUSIC_EVENT("dh2a_double_guards");
										iLocal_298 = 1;
									}
									WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1038(), -177.2718f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[10 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_341 = 0;
									iLocal_305 = 0;
									iLocal_302++;
								}
								else if (__LIB_16__::func_903(Local_51[10 /*44*/]))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_51[10 /*44*/].f_1))
									{
										Local_51[10 /*44*/].f_1 = __LIB_0__::func_666(Local_51[10 /*44*/], 1, 145);
									}
									if (!iLocal_341)
									{
										if (__LIB_16__::func_855())
										{
											if (func_745(Local_51[10 /*44*/], Local_2101[6 /*7*/]))
											{
												if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
												{
													iLocal_341 = 1;
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -161.0396f, -2377.5042f, 8.3191f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 7:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(-177.2718f, -2377.5042f, 8.3191f, 354.7062f, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -177.2718f, -2377.5042f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -177.2718f, -2377.5042f, 8.3191f, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_305 = 0;
						iLocal_302++;
						break;
					case 8:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[13 /*44*/]) || !func_745(Local_51[13 /*44*/], Local_2101[7 /*7*/]))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1038(), -187.2977f, -2374.7778f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[13 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_341 = 0;
									iLocal_305 = 0;
									iLocal_302++;
								}
								else
								{
									if (__LIB_16__::func_903(Local_51[11 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_51[11 /*44*/].f_1))
										{
											Local_51[11 /*44*/].f_1 = __LIB_0__::func_666(Local_51[11 /*44*/], 1, 145);
										}
									}
									if (__LIB_16__::func_903(Local_51[13 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_51[13 /*44*/].f_1))
										{
											Local_51[13 /*44*/].f_1 = __LIB_0__::func_666(Local_51[13 /*44*/], 1, 145);
										}
										if (!iLocal_341)
										{
											if (__LIB_16__::func_855())
											{
												if (func_745(Local_51[13 /*44*/], Local_2101[7 /*7*/]))
												{
													if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
													{
														iLocal_341 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -177.2718f, -2377.5042f, 8.3191f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 9:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(-187.2977f, -2374.7778f, 8.3191f, 354.7062f, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -187.2977f, -2374.7778f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -187.2977f, -2374.7778f, 8.3191f, -1, false, 0.25f, true, true, iLocal_262, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
						iLocal_305 = 0;
						iLocal_302++;
						break;
					case 10:
						if (iLocal_305 > 0)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_305) > 1000)
							{
								if (!__LIB_16__::func_903(Local_51[13 /*44*/]) || !func_745(Local_51[13 /*44*/], Local_2101[7 /*7*/]))
								{
									iLocal_422 = iLocal_420;
									WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -188.1089f, -2365.51f, 8.3194f, 1f, -1, 0.25f, 0, 40000f);
									TASK::TASK_PLANT_BOMB(0, -188.1089f, -2365.51f, 8.3194f, 270f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
									TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
									if (iLocal_341)
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[13 /*44*/], func_1037(), true))
										{
											__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_2A", 7, 0, 0, 0);
										}
									}
									iLocal_305 = 0;
									iLocal_341 = 0;
									iLocal_302++;
								}
								else
								{
									if (__LIB_16__::func_903(Local_51[11 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_51[11 /*44*/].f_1))
										{
											Local_51[11 /*44*/].f_1 = __LIB_0__::func_666(Local_51[11 /*44*/], 1, 145);
										}
									}
									if (__LIB_16__::func_903(Local_51[13 /*44*/]))
									{
										if (!HUD::DOES_BLIP_EXIST(Local_51[13 /*44*/].f_1))
										{
											Local_51[13 /*44*/].f_1 = __LIB_0__::func_666(Local_51[13 /*44*/], 1, 145);
										}
										if (!iLocal_341)
										{
											if (__LIB_16__::func_855())
											{
												if (func_745(Local_51[13 /*44*/], Local_2101[7 /*7*/]))
												{
													if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0))
													{
														iLocal_341 = 1;
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(func_1038(), -187.2977f, -2374.7778f, 8.3191f, 2f, 2f, 2f, false, true, 0) && PED::IS_PED_IN_COVER(func_1038(), false))
						{
							iLocal_305 = MISC::GET_GAME_TIMER();
						}
						break;
					case 11:
						if (Local_52[2 /*7*/].f_6 == 1)
						{
							iLocal_422 = iLocal_421;
							__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
							iLocal_290 = MISC::GET_GAME_TIMER();
							iLocal_302++;
						}
						break;
					case 12:
						if ((MISC::GET_GAME_TIMER() - iLocal_290) > 1000)
						{
							Local_52[2 /*7*/].f_6 = 1;
							iLocal_302++;
						}
						break;
					case 13:
						break;
				}
				break;
			case 5:
				switch (iLocal_302)
				{
					case 0:
						iLocal_422 = iLocal_421;
						if (iLocal_424 == 5)
						{
							TASK::REMOVE_COVER_POINT(iLocal_262);
							iLocal_262 = TASK::ADD_COVER_POINT(-193.7045f, -2376.3953f, 8.3186f, 88.3441f, 1, 2, 0, false);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -193.7045f, -2376.3953f, 8.3186f, 2f, -1, 0.25f, 0, 40000f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -193.7045f, -2376.3953f, 8.3186f, -1, false, 0.25f, true, true, 0, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
							iLocal_302++;
						}
						break;
					case 1:
						if (__LIB_16__::func_903(Local_51[12 /*44*/]))
						{
							if (__LIB_16__::func_855() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_STEPS2M", 7, 0, 0, 0);
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(func_1038(), Local_51[12 /*44*/], 0f, 0.25f, 0f, 2f, -1, 0.1f, true);
								iLocal_303 = 0;
								iLocal_302++;
							}
						}
						else
						{
							iLocal_302 = 3;
						}
						break;
					case 2:
						if (func_744(&(Local_51[12 /*44*/])) && (MISC::GET_GAME_TIMER() - iLocal_304) > 2000)
						{
							iLocal_422 = iLocal_421;
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GUY2M", 7, 0, 0, 0);
							iLocal_302++;
						}
						break;
					case 3:
						TASK::REMOVE_COVER_POINT(iLocal_262);
						iLocal_262 = TASK::ADD_COVER_POINT(-210.9928f, -2375.6543f, 8.3191f, 88.3441f, 1, 2, 0, false);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -210.9928f, -2375.6543f, 8.3191f, 2f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, -210.9928f, -2375.6543f, 8.3191f, -1, false, 0.25f, true, true, 0, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
						iLocal_302++;
						break;
					case 4:
						if (!__LIB_16__::func_903(Local_51[15 /*44*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_52[3 /*7*/].f_2, 2f, -1, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
							TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MOVE1", 7, 0, 0, 0);
							iLocal_302++;
						}
						else if (!HUD::DOES_BLIP_EXIST(Local_51[15 /*44*/].f_1))
						{
							Local_51[15 /*44*/].f_1 = __LIB_0__::func_666(Local_51[15 /*44*/], 1, 145);
						}
						break;
				}
				break;
		}
		PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
	}
}

int func_744(var uParam0)//Position - 0x8D6AF
{
	if (__LIB_16__::func_903(*uParam0))
	{
		switch (iLocal_303)
		{
			case 0:
				if (PED::IS_PED_IN_COMBAT(*uParam0, 0) || uParam0->f_27 != 0)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_1038());
					iLocal_422 = iLocal_421;
					TASK::TASK_COMBAT_PED(func_1038(), *uParam0, 0, 16);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), ENTITY::GET_ENTITY_COORDS(*uParam0, true), 2.2f, false, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 27, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 23, true);
					iLocal_303++;
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(func_1038(), *uParam0, 1f, 1f, 1f, false, true, 0))
				{
					iLocal_422 = joaat("WEAPON_KNIFE");
					uParam0->f_40 = 1;
					iLocal_287 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*uParam0), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_287, "missheistdocks2a", "stabbing_guard_michael", 4f, -8f, 0, 0, 4f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(*uParam0, iLocal_287, "missheistdocks2a", "stabbing_guard_guard", 8f, -8f, 0, 0, 1000f, 0);
					iLocal_303++;
				}
				break;
			case 1:
				if (PED::IS_PED_IN_COMBAT(*uParam0, 0) || uParam0->f_27 != 0)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, func_1038(), true))
					{
						ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
						iLocal_303 = 0;
						iLocal_312 = 1;
						return 1;
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) > 0.99f)
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_287);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
					iLocal_312 = 1;
					iLocal_303 = 0;
					return 1;
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_304) > 1000)
				{
					iLocal_303 = 0;
					return 1;
				}
				break;
		}
	}
	else
	{
		return 1;
		iLocal_303 = 0;
		iLocal_304 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

int func_745(int iParam0, struct<7> Param1)//Position - 0x8D869
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param1.f_3, Param1.f_6, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_746()//Position - 0x8D8A6
{
	int iVar0;
	if (!__LIB_16__::func_903(func_1038()))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(func_1038(), &iVar0, true))
	{
		if (iVar0 != iLocal_421)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
		}
	}
	if (!PED::IS_PED_IN_COMBAT(func_1038(), 0))
	{
		TASK::CLEAR_PED_TASKS(func_1038());
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_1038(), 20f, 0);
	}
}

int func_747()//Position - 0x8D902
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
		{
			if (PED::IS_PED_IN_COMBAT(Local_51[iVar0 /*44*/], func_1038()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_748(var uParam0)//Position - 0x8D940
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "missheistdocks2a", "stabbing_guard_guard", 2))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) > 0.99f)
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_287);
					ENTITY::SET_ENTITY_HEALTH(*uParam0, 0, 0);
					iLocal_312 = 1;
					iLocal_303 = 0;
				}
			}
		}
	}
}

void func_749()//Position - 0x8D9A7
{
	if (!iLocal_400)
	{
		if (__LIB_16__::func_903(iLocal_403))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(func_1038(), true), ENTITY::GET_ENTITY_COORDS(iLocal_403, true)) < 121f)
			{
				if (iLocal_357 > 0)
				{
					if (PED::IS_PED_IN_COMBAT(iLocal_403, func_1038()))
					{
						if (MISC::GET_GAME_TIMER() > (iLocal_357 - 2000))
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_403))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), iLocal_403, 17))
								{
									Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
									TASK::TASK_SHOOT_AT_COORD(func_1037(), Local_404, 1000, 0);
									PED::EXPLODE_PED_HEAD(iLocal_403, joaat("WEAPON_SNIPERRIFLE"));
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_3C", 7, 0, 0, 0);
									iLocal_401 = MISC::GET_GAME_TIMER();
									iLocal_400 = 1;
									iLocal_357 = -1;
								}
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_357)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_403))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), iLocal_403, 17))
							{
								Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
								TASK::TASK_SHOOT_AT_COORD(func_1037(), Local_404, 1000, 0);
								PED::EXPLODE_PED_HEAD(iLocal_403, joaat("WEAPON_SNIPERRIFLE"));
								__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_3C", 7, 0, 0, 0);
								iLocal_401 = MISC::GET_GAME_TIMER();
								iLocal_400 = 1;
								iLocal_357 = -1;
							}
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_403))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_403, "missheistdocks2a", "stabbing_guard_guard", 2))
						{
							__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DECK2", 7, 0, 0, 0);
							iLocal_357 = MISC::GET_GAME_TIMER() + 4500;
						}
					}
				}
			}
			else
			{
				iLocal_357 = -1;
			}
		}
		else
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(func_1038(), true), 50f, false, true, &iLocal_403, false, true, -1);
			iLocal_357 = -1;
		}
	}
	if (__LIB_16__::func_903(Local_51[3 /*44*/]))
	{
		if (func_750(Local_2101[0 /*7*/]) && __LIB_16__::func_903(func_1038()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_51[3 /*44*/]) && !iLocal_365) && __LIB_16__::func_855())
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_51[3 /*44*/], "missheistdocks2a", "stabbing_guard_guard", 2))
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_STEPS1F", 7, 0, 0, 0))
					{
						iLocal_365 = 1;
					}
				}
			}
			if ((iLocal_365 && __LIB_16__::func_855()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), Local_51[3 /*44*/], 17))
			{
				iLocal_403 = Local_51[3 /*44*/];
				Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
				iLocal_400 = 1;
				iLocal_401 = MISC::GET_GAME_TIMER();
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_51[3 /*44*/], 1, 10f, 0f, 0f, 1f, 0f, 0f, 0, false, true, true, false, true);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-125.6115f, -2380.9084f, 12.046f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[3 /*44*/], 0f, 0f, 0.4f), 1000, true, iLocal_419, 0, true, true, -1f);
				PED::EXPLODE_PED_HEAD(Local_51[3 /*44*/], joaat("WEAPON_SNIPERRIFLE"));
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GUY1F", 7, 0, 0, 0);
				iLocal_312 = 1;
				iLocal_365 = 0;
			}
		}
	}
	if (__LIB_16__::func_903(Local_51[11 /*44*/]))
	{
		if (func_750(Local_2101[1 /*7*/]) && __LIB_16__::func_903(func_1038()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_51[11 /*44*/]) && !iLocal_365) && __LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BALC", 7, 0, 0, 0))
				{
					iLocal_365 = 1;
				}
			}
			if ((iLocal_365 && __LIB_16__::func_855()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), Local_51[11 /*44*/], 17))
			{
				iLocal_403 = Local_51[11 /*44*/];
				Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
				iLocal_400 = 1;
				iLocal_401 = MISC::GET_GAME_TIMER();
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-143.1764f, -2487.5f, 45.44402f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[11 /*44*/], 0f, 0f, 0.4f), 1000, true, iLocal_419, 0, true, true, -1f);
				PED::EXPLODE_PED_HEAD(Local_51[11 /*44*/], joaat("WEAPON_SNIPERRIFLE"));
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_3D", 7, 0, 0, 0);
				iLocal_312 = 1;
				iLocal_365 = 0;
			}
		}
	}
	if (__LIB_16__::func_903(Local_51[12 /*44*/]))
	{
		if (func_750(Local_2101[2 /*7*/]) && __LIB_16__::func_903(func_1038()))
		{
			if ((!ENTITY::IS_ENTITY_OCCLUDED(Local_51[12 /*44*/]) && !iLocal_365) && __LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_STEPS2F", 7, 0, 0, 0))
				{
					iLocal_365 = 1;
				}
			}
			if ((iLocal_365 && __LIB_16__::func_855()) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), Local_51[12 /*44*/], 17))
			{
				iLocal_403 = Local_51[12 /*44*/];
				Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
				iLocal_400 = 1;
				iLocal_401 = MISC::GET_GAME_TIMER();
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_51[12 /*44*/], 1, 10f, 0f, 0f, 1f, 0f, 0f, 0, false, true, true, false, true);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(-204.6591f, -2381.0024f, 11.9054f, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[12 /*44*/], 0f, 0f, 0.4f), 1000, true, iLocal_419, 0, true, true, -1f);
				PED::EXPLODE_PED_HEAD(Local_51[12 /*44*/], joaat("WEAPON_SNIPERRIFLE"));
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_3A", 7, 0, 0, 0);
				iLocal_312 = 1;
				iLocal_365 = 0;
			}
		}
	}
	if (iLocal_400 && (MISC::GET_GAME_TIMER() - iLocal_401) > 1000)
	{
		iLocal_400 = 0;
	}
}

int func_750(struct<7> Param0)//Position - 0x8DEFC
{
	return func_745(PLAYER::PLAYER_PED_ID(), Param0);
}

void func_751()//Position - 0x8DF10
{
	int iVar0;
	int iVar1[29];
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (Local_51[iVar0 /*44*/].f_43)
		{
			iVar1[iVar0] = 1;
		}
		iVar0++;
	}
	if (func_745(func_1038(), Local_2101[8 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 3)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[9 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[10 /*7*/]))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[11 /*7*/]))
	{
		iVar0 = 3;
		while (iVar0 <= 8)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[12 /*7*/]))
	{
		iVar0 = 3;
		while (iVar0 <= 10)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[13 /*7*/]))
	{
		iVar0 = 8;
		while (iVar0 <= 11)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
		iVar1[13] = 1;
		iVar1[14] = 1;
		iVar1[15] = 1;
	}
	if (func_745(func_1038(), Local_2101[14 /*7*/]))
	{
		iVar0 = 9;
		while (iVar0 <= 11)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
		iVar1[13] = 1;
		iVar1[14] = 1;
		iVar1[15] = 1;
	}
	if (func_745(func_1038(), Local_2101[15 /*7*/]))
	{
		iVar0 = 9;
		while (iVar0 <= 16)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	if (func_745(func_1038(), Local_2101[16 /*7*/]))
	{
		iVar0 = 12;
		while (iVar0 <= 17)
		{
			iVar1[iVar0] = 1;
			iVar0++;
		}
	}
	iVar0 = 2;
	while (iVar0 <= 17)
	{
		if (iVar1[iVar0])
		{
			if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*44*/].f_1))
				{
					Local_51[iVar0 /*44*/].f_1 = __LIB_0__::func_666(Local_51[iVar0 /*44*/], 1, 145);
				}
				else if (PLAYER::PLAYER_PED_ID() == func_1038())
				{
					HUD::SET_BLIP_SHOW_CONE(Local_51[iVar0 /*44*/].f_1, true, 11);
				}
				else
				{
					HUD::SET_BLIP_SHOW_CONE(Local_51[iVar0 /*44*/].f_1, false, 11);
				}
			}
			else
			{
				__LIB_13__::func_808(&(Local_51[iVar0 /*44*/].f_1));
			}
		}
		else
		{
			__LIB_13__::func_808(&(Local_51[iVar0 /*44*/].f_1));
		}
		iVar0++;
	}
}

void func_752()//Position - 0x8E1A7
{
	int iVar0;
	if (!Local_52[1 /*7*/].f_6 && func_745(func_1038(), Local_2101[8 /*7*/]))
	{
		if (iLocal_359 < 2)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
				{
					switch (iLocal_359)
					{
						case 0:
							if (func_754(iVar0, -129.0482f, -2361.1956f, 8.3191f, 356.6929f, -128.6367f, -2357.4873f, 8.3191f))
							{
								iLocal_362[iLocal_359] = iVar0;
								iLocal_359++;
							}
							break;
						case 1:
							if (func_754(iVar0, -128.9855f, -2362.3123f, 8.3191f, 189.357f, -128.6614f, -2373.987f, 8.3191f))
							{
								iLocal_362[iLocal_359] = iVar0;
								iLocal_359++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else if (func_745(func_1038(), Local_2101[10 /*7*/]))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_359)
		{
			func_753(iLocal_362[iVar0]);
			iVar0++;
		}
	}
	if (((!Local_52[2 /*7*/].f_6 && !func_745(func_1038(), Local_2101[14 /*7*/])) && !func_745(func_1038(), Local_2101[15 /*7*/])) && !func_745(func_1038(), Local_2101[16 /*7*/]))
	{
		if (iLocal_360 < 3)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
				{
					switch (iLocal_360)
					{
						case 0:
							if (func_754(iVar0, -189.0334f, -2360.9258f, 8.3191f, 7.7789f, -188.0162f, -2373.9033f, 8.3191f))
							{
								iLocal_363[iLocal_360] = iVar0;
								iLocal_360++;
							}
							break;
						case 1:
							if (func_754(iVar0, -188.9252f, -2362.543f, 8.3191f, 166.6817f, -188.0314f, -2368.5366f, 8.3191f))
							{
								iLocal_363[iLocal_360] = iVar0;
								iLocal_360++;
							}
							break;
						case 2:
							if (func_754(iVar0, -190.5101f, -2362.8284f, 8.3191f, 150.3902f, -178.0869f, -2355.4004f, 8.3191f))
							{
								iLocal_363[iLocal_360] = iVar0;
								iLocal_360++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_360)
		{
			func_753(iLocal_363[iVar0]);
			iVar0++;
		}
	}
	if (!func_745(func_1038(), Local_2101[16 /*7*/]))
	{
		if (iLocal_361 < 3)
		{
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
				{
					switch (iLocal_361)
					{
						case 0:
							if (func_754(iVar0, -221.0331f, -2376.2307f, 8.3192f, 236.8918f, -209.0507f, -2376.477f, 8.3192f))
							{
								iLocal_364[iLocal_361] = iVar0;
								iLocal_361++;
							}
							break;
						case 1:
							if (func_754(iVar0, -222.0928f, -2375.8884f, 12.3329f, 188.8545f, -221.2283f, -2377.7432f, 12.3329f))
							{
								iLocal_364[iLocal_361] = iVar0;
								iLocal_361++;
							}
							break;
						case 2:
							if (func_754(iVar0, -221.7503f, -2355.7732f, 8.3192f, 356.4612f, -207.132f, -2355.4556f, 8.3191f))
							{
								iLocal_364[iLocal_361] = iVar0;
								iLocal_361++;
							}
							break;
						}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iLocal_361)
		{
			func_753(iLocal_364[iVar0]);
			iVar0++;
		}
	}
}

void func_753(int iParam0)//Position - 0x8E579
{
	if (!__LIB_16__::func_903(Local_51[iParam0 /*44*/]))
	{
		return;
	}
	if (PED::GET_PED_COMBAT_MOVEMENT(Local_51[iParam0 /*44*/]) == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(Local_51[iParam0 /*44*/], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 50, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iParam0 /*44*/], false);
	}
	if (!PED::IS_PED_IN_COMBAT(Local_51[iParam0 /*44*/], 0))
	{
		if (__LIB_16__::func_903(func_1038()))
		{
			TASK::TASK_COMBAT_PED(Local_51[iParam0 /*44*/], func_1038(), 0, 16);
		}
	}
}

int func_754(int iParam0, struct<3> Param1, float fParam2, struct<3> Param3)//Position - 0x8E5EE
{
	__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("S_M_Y_BlackOps_01"), Param1, true))
	{
		func_691(&(Local_51[iParam0 /*44*/]), joaat("S_M_Y_BlackOps_01"), Param1, fParam2, 0);
	}
	else
	{
		return 0;
	}
	if (__LIB_16__::func_903(Local_51[iParam0 /*44*/]))
	{
		Local_51[iParam0 /*44*/].f_35 = 1;
		PED::SET_PED_FLEE_ATTRIBUTES(Local_51[iParam0 /*44*/], 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iParam0 /*44*/], 0, true);
		PED::SET_PED_COMBAT_MOVEMENT(Local_51[iParam0 /*44*/], 1);
		WEAPON::GIVE_WEAPON_TO_PED(Local_51[iParam0 /*44*/], iLocal_418, -1, true, true);
		PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Local_51[iParam0 /*44*/], false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_51[iParam0 /*44*/], iLocal_289);
		PED::SET_PED_AS_ENEMY(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_DIES_INSTANTLY_IN_WATER(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_MONEY(Local_51[iParam0 /*44*/], 0);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_51[iParam0 /*44*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_51[iParam0 /*44*/], 0);
		PED::SET_PED_COMBAT_MOVEMENT(Local_51[iParam0 /*44*/], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_51[iParam0 /*44*/], true, 1);
		PED::SET_PED_HEARING_RANGE(Local_51[iParam0 /*44*/], 200f);
		PED::SET_PED_SEEING_RANGE(Local_51[iParam0 /*44*/], 300f);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_51[iParam0 /*44*/], true);
		PED::SET_PED_CONFIG_FLAG(Local_51[iParam0 /*44*/], 118, false);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_51[iParam0 /*44*/], Param3, 10f, true, false);
		TASK::TASK_COMBAT_PED(Local_51[iParam0 /*44*/], func_1038(), 0, 16);
	}
	return 1;
}

void func_755()//Position - 0x8E762
{
	if (__LIB_16__::func_903(func_1037()))
	{
		if (!iLocal_400)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_357)
			{
				PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(func_1038(), true), 20f, false, true, &iLocal_403, false, true, -1);
				if (__LIB_16__::func_903(iLocal_403))
				{
					Local_404 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_403, 0f, 0f, 0.4f) };
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), Local_404, true) < 15f)
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_403))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_1037(), iLocal_403, 17))
							{
								TASK::TASK_SHOOT_AT_COORD(func_1037(), Local_404, 1000, 0);
								PED::EXPLODE_PED_HEAD(iLocal_403, joaat("WEAPON_SNIPERRIFLE"));
								__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_4C", 7, 0, 0, 0);
								iLocal_401 = MISC::GET_GAME_TIMER();
								iLocal_357 = MISC::GET_GAME_TIMER() + 4500;
								iLocal_400 = 1;
							}
						}
					}
				}
				else if (!iLocal_340)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_1A", 7, 0, 0, 0))
						{
							iLocal_340 = 1;
						}
					}
				}
			}
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(func_1037(), iLocal_419, false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(func_1037(), iLocal_419, 200, true, true);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_1037(), iLocal_419, joaat("COMPONENT_AT_SCOPE_MAX"));
		}
		else if (!WEAPON::GET_CURRENT_PED_WEAPON(func_1037(), &iLocal_419, true))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_1037(), iLocal_419, true);
		}
	}
	if (iLocal_400 && (MISC::GET_GAME_TIMER() - iLocal_401) > 1000)
	{
		iLocal_400 = 0;
	}
}

void func_756()//Position - 0x8E8D1
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (__LIB_16__::func_903(func_1038()))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 0, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 13, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(func_1038(), 30, false);
		PED::SET_PED_COMBAT_ABILITY(func_1038(), 2);
		PED::SET_PED_COMBAT_MOVEMENT(func_1038(), 2);
		PED::SET_PED_COMBAT_RANGE(func_1038(), 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(func_1038(), 1);
		if (!iLocal_307)
		{
			if (__LIB_16__::func_903(func_1038()))
			{
				if (ENTITY::GET_ENTITY_HEALTH(func_1038()) < 120)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_DIE_NS", 8, 0, 0, 0))
						{
							iLocal_307 = 1;
						}
					}
				}
			}
		}
		if (!iLocal_308)
		{
			if (func_747())
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_HLP_NS", 7, 0, 0, 0))
					{
						iLocal_308 = 1;
					}
				}
			}
		}
		else if (!func_747())
		{
			iLocal_308 = 0;
		}
		if (iLocal_424 == 2)
		{
			if (Local_52[0 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -86.0638f, -2366.2502f, 13.8644f, 10f, false, false);
				if (func_747())
				{
					if (!PED::IS_PED_IN_COMBAT(func_1038(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), WEAPON::GET_BEST_PED_WEAPON(func_1038(), false), true);
						TASK::CLEAR_PED_TASKS(func_1038());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_1038(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_1038());
					WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -83.92709f, -2366.1184f, 13.29613f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PLANT_BOMB(0, -83.92709f, -2366.1184f, 13.29613f, 90f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -126.6504f, -2375.7917f, 9.6284f, 10f, false, false);
			}
		}
		else if (iLocal_424 == 3)
		{
			if (Local_52[1 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -126.6504f, -2375.7917f, 9.6284f, 10f, false, false);
				if (func_747())
				{
					if (!PED::IS_PED_IN_COMBAT(func_1038(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), WEAPON::GET_BEST_PED_WEAPON(func_1038(), false), true);
						TASK::CLEAR_PED_TASKS(func_1038());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_1038(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_1038());
					WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -128.70566f, -2367.1794f, 8.31891f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PLANT_BOMB(0, -128.69624f, -2366.828f, 9.2213f, 270f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -186.4871f, -2375.8062f, 9.7455f, 10f, false, false);
			}
		}
		else if (iLocal_424 == 4)
		{
			if (Local_52[2 /*7*/].f_6 == 0)
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -186.4871f, -2375.8062f, 9.7455f, 10f, false, false);
				if (func_747())
				{
					if (!PED::IS_PED_IN_COMBAT(func_1038(), 0))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), WEAPON::GET_BEST_PED_WEAPON(func_1038(), false), true);
						TASK::CLEAR_PED_TASKS(func_1038());
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_1038(), 40f, 0);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
				{
					TASK::CLEAR_PED_TASKS(func_1038());
					WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_420, true);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -188.1089f, -2365.51f, 8.3194f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PLANT_BOMB(0, -188.1089f, -2365.51f, 8.3194f, 270f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -211.9178f, -2377.0576f, 9.1952f, 10f, false, false);
			}
		}
		else if (iLocal_424 == 5)
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -216.4087f, -2377.58f, 8.6987f, 10f, false, false);
			if (func_747())
			{
				if (!PED::IS_PED_IN_COMBAT(func_1038(), 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), WEAPON::GET_BEST_PED_WEAPON(func_1038(), false), true);
					TASK::CLEAR_PED_TASKS(func_1038());
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(func_1038(), 40f, 0);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) > 1)
			{
				TASK::CLEAR_PED_TASKS(func_1038());
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_52[3 /*7*/].f_2, 2f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_1038(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MVE_NS", 7, 0, 0, 0);
			}
		}
		else if (iLocal_424 == 6)
		{
			iVar0 = 0;
			fVar1 = 15f;
			iVar2 = 0;
			while (iVar2 <= 25)
			{
				if (__LIB_16__::func_903(Local_51[iVar2 /*44*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), ENTITY::GET_ENTITY_COORDS(Local_51[iVar2 /*44*/], true), true) < fVar1)
					{
						iVar0 = Local_51[iVar2 /*44*/];
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), ENTITY::GET_ENTITY_COORDS(Local_51[iVar2 /*44*/], true), true);
					}
				}
				iVar2++;
			}
			if (fVar1 < 15f)
			{
				if (__LIB_16__::func_903(iVar0))
				{
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), ENTITY::GET_ENTITY_COORDS(func_1038(), true), 2f, false, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
				}
			}
			else
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), ENTITY::GET_ENTITY_COORDS(func_1038(), true), 1f, false, false);
			}
		}
		else
		{
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(func_1038(), -216.4087f, -2377.58f, 8.6987f, 2f, false, false);
		}
	}
}

void func_757()//Position - 0x8EEE5
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	if (__LIB_16__::func_903(func_1038()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -116f, -2366f, 12f, true);
		iVar1 = 0;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -154f, -2366f, 12f, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -154f, -2366f, 12f, true);
			iVar1 = 1;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -186f, -2366f, 12f, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -186f, -2366f, 12f, true);
			iVar1 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -223f, -2365f, 12f, true) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -223f, -2365f, 12f, true);
			iVar1 = 3;
		}
		iVar3 = 0;
		while (iVar3 <= 17)
		{
			if (__LIB_16__::func_903(Local_51[iVar3 /*44*/]))
			{
				if (!Local_51[iVar3 /*44*/].f_35)
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
					if (PED::GET_PED_COMBAT_MOVEMENT(Local_51[iVar3 /*44*/]) == 1)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_51[iVar3 /*44*/], 2);
					}
					if (PED::GET_PED_COMBAT_RANGE(Local_51[iVar3 /*44*/]) != 0)
					{
						PED::SET_PED_COMBAT_RANGE(Local_51[iVar3 /*44*/], 0);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_51[iVar3 /*44*/].f_1))
					{
						Local_51[iVar3 /*44*/].f_1 = __LIB_0__::func_666(Local_51[iVar3 /*44*/], 1, 145);
					}
					else
					{
						HUD::SET_BLIP_SHOW_CONE(Local_51[iVar3 /*44*/].f_1, false, 11);
					}
					if (PLAYER::PLAYER_PED_ID() == func_1038())
					{
						if (PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], func_1037()))
						{
							TASK::CLEAR_PED_TASKS(Local_51[iVar3 /*44*/]);
						}
					}
					if (!PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], 0))
					{
						switch (iVar1)
						{
							case 0:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), Local_51[iVar3 /*44*/].f_6, true);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_51[iVar3 /*44*/], Local_51[iVar3 /*44*/].f_6, 2f, -1, 0.25f, 0, 40000f);
									}
									if (iVar3 == 17)
									{
										if (fVar2 < 2f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 35f)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
											TASK::TASK_COMBAT_PED(Local_51[iVar3 /*44*/], func_1038(), 134217728, 16);
										}
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], func_1038()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
									TASK::TASK_COMBAT_PED(Local_51[iVar3 /*44*/], func_1038(), 134217728, 16);
								}
								break;
							case 1:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), Local_51[iVar3 /*44*/].f_9, true);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_51[iVar3 /*44*/], Local_51[iVar3 /*44*/].f_9, 2f, -1, 0.25f, 0, 40000f);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], func_1038()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
									TASK::TASK_COMBAT_PED(Local_51[iVar3 /*44*/], func_1038(), 134217728, 16);
								}
								break;
							case 2:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), Local_51[iVar3 /*44*/].f_12, true);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_51[iVar3 /*44*/], Local_51[iVar3 /*44*/].f_12, 2f, -1, 0.25f, 0, 40000f);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], func_1038()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
									TASK::TASK_COMBAT_PED(Local_51[iVar3 /*44*/], func_1038(), 134217728, 16);
								}
								break;
							case 3:
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), Local_51[iVar3 /*44*/].f_15, true);
								if (fVar2 > 35f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar3 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), true) > 35f)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_51[iVar3 /*44*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
									{
										PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_51[iVar3 /*44*/], Local_51[iVar3 /*44*/].f_15, 2f, -1, 0.25f, 0, 40000f);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_51[iVar3 /*44*/], func_1038()))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_51[iVar3 /*44*/], false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_51[iVar3 /*44*/], 50, true);
									TASK::TASK_COMBAT_PED(Local_51[iVar3 /*44*/], func_1038(), 134217728, 16);
								}
								break;
							}
						}
					}
			}
			iVar3++;
		}
	}
}

int func_759()//Position - 0x8F58F
{
	int iVar0;
	switch (iLocal_313)
	{
		case 0:
			if (iLocal_352)
			{
				iLocal_351 = 1;
				iLocal_352 = 0;
			}
			iLocal_326 = 0;
			TASK::CLEAR_PED_TASKS(func_1037());
			iVar0 = 0;
			while (iVar0 <= 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
				{
					PED::DELETE_PED(&(Local_51[iVar0 /*44*/]));
				}
				iVar0++;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_260 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			CAM::SET_CAM_ACTIVE(iLocal_260, true);
			func_471(0, -209.5674f, -2386.8694f, 15.0927f, 1, 0, 1, 3000, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_276, false, false);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_276, false);
			}
			else
			{
				iLocal_276 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-222.02f, -2375.3555f, 13.5443f, 2f, joaat("port_xr_door_05"), true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_276, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_276, false, false);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_276, false);
			}
			iLocal_275 = OBJECT::CREATE_OBJECT(joaat("p_po1_01_doorm_s"), -222.02f, -2375.3955f, 12.327f, true, true, false);
			iLocal_278 = PED::CREATE_SYNCHRONIZED_SCENE(-222.02f, -2375.3955f, 13.2843f, 0f, 0f, 0f, 2);
			ENTITY::SET_ENTITY_INVINCIBLE(func_1038(), true);
			WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), joaat("WEAPON_COMBATPISTOL"), true);
			if (iLocal_351)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_278, "missheistdocks2aig_1", "IG_1_MichaelEnterBoat_Action", 1000f, -8f, 0, 0, 1000f, 0);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_275, "IG_1_MichaelEnterBoat_Action_DOOR", "missheistdocks2aig_1", 1000f, false, false, false, 0.025f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_278, "IG_1_MichaelEnterBoat_Action_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_278, 0.025f);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_278, "missheistdocks2aig_1", "IG_1_MichaelEnterBoat_Stealth", 1000f, -8f, 0, 0, 1000f, 0);
				ENTITY::PLAY_ENTITY_ANIM(iLocal_275, "IG_1_MichaelEnterBoat_Stealth_DOOR", "missheistdocks2aig_1", 1000f, false, false, false, 0.035f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_278, "IG_1_MichaelEnterBoat_stealth_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_278, 0.035f);
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GOIN", 7, 0, 0, 0);
			}
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::SET_CAM_ACTIVE(iLocal_260, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			ENTITY::SET_ENTITY_COORDS(func_1037(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
			RECORDING::REPLAY_START_EVENT(4);
			func_760(1);
			iLocal_290 = MISC::GET_GAME_TIMER();
			iLocal_313++;
			break;
		case 1:
			if (iLocal_351)
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_IN_NS", 7, 0, 0, 0))
				{
					iLocal_313++;
				}
			}
			else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_GOIN", 7, 0, 0, 0))
			{
				iLocal_313++;
			}
			break;
		case 2:
			if (!PLAYER::PLAYER_PED_ID() == func_1037())
			{
				if (__LIB_16__::func_896(&iLocal_433, 1))
				{
					__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
					bLocal_324 = true;
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.2612f, 43.4412f, 25f, 0);
				}
			}
			else if (iLocal_351)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_278) >= 0.7f)
				{
					iLocal_290 = MISC::GET_GAME_TIMER();
					iLocal_313++;
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_278) >= 0.72f)
			{
				iLocal_290 = MISC::GET_GAME_TIMER();
				iLocal_313++;
			}
			if (__LIB_16__::func_855())
			{
				if (!iLocal_326)
				{
					__LIB_0__::func_222(&uLocal_54, 1, 0, "MICHAEL", 0, 1);
					if (iLocal_351)
					{
						if (__LIB_16__::func_7(&uLocal_54, "d2aaud", "DH2A_WTCH_NS", 7, 0, 0, 0))
						{
							iLocal_326 = 1;
						}
					}
					else if (__LIB_16__::func_7(&uLocal_54, "d2aaud", "DH2A_FMB", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			break;
		case 3:
			iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8f, -2487.555f, 43.45f, 0f, 0f, -34.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_1037(), iLocal_293, "missheistdocks2aswitchig_7", "IG_7_m_door_f_sniping_franklin", 1000f, -1000f, 16384, 0, 1000f, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_293, "IG_7_m_door_f_sniping_cam", "missheistdocks2aswitchig_7");
			if (bLocal_324)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 1000, false);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
			}
			iLocal_326 = 0;
			iLocal_313++;
			break;
		case 4:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.999f)
			{
				iLocal_290 = MISC::GET_GAME_TIMER();
				if (ENTITY::DOES_ENTITY_EXIST(func_1038()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_1038(), false, false);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
				}
				AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
				AUDIO::TRIGGER_MUSIC_EVENT("dh2a_main_alarm");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_276, true, false);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_276);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
				{
					OBJECT::DELETE_OBJECT(&iLocal_275);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_419, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_737(-222.02f, -2375.3955f, 14.2843f));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_736(-222.02f, -2375.3955f, 14.2843f), 1f);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				RECORDING::REPLAY_STOP_EVENT();
				func_372(1, 0, 0, 3000, 0);
				iLocal_352 = 1;
				iLocal_326 = 0;
				iLocal_290 = MISC::GET_GAME_TIMER();
				return 1;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.3f)
			{
				if (!iLocal_326)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-143.73f, -2488.6f, 45.02f, __LIB_0__::func_79(-0.56f, 0.8f, -0.22f), 300f, 0);
					iLocal_326 = 1;
				}
			}
			break;
	}
	if (SYSTEM::TIMERA() > 1500)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/))
		{
			RECORDING::REPLAY_CANCEL_EVENT();
			if (!PLAYER::PLAYER_PED_ID() == func_1037())
			{
				__LIB_16__::func_896(&iLocal_433, 1);
				__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_737(-222.02f, -2375.3955f, 14.2843f));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_736(-222.02f, -2375.3955f, 14.2843f), 1f);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
			CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_scene");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
			}
			AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
			iLocal_428 = 1;
			iLocal_429 = 6;
		}
	}
	return 0;
}

void func_760(bool bParam0)//Position - 0x8FC96
{
	int iVar0;
	int iVar1;
	if (!bLocal_292)
	{
		if (__LIB_16__::func_903(func_1038()))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(func_1038(), true);
			WEAPON::GIVE_WEAPON_TO_PED(func_1038(), iLocal_420, 0, false, true);
			iVar0 = 10;
			iVar1 = (iVar0 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_1038(), iLocal_420));
			if (iVar1 > 0)
			{
				WEAPON::ADD_AMMO_TO_PED(func_1038(), iLocal_420, iVar1);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_1038(), joaat("WEAPON_KNIFE"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(func_1038(), joaat("WEAPON_KNIFE"), -1, true, true);
			}
			WEAPON::GIVE_WEAPON_TO_PED(func_1038(), iLocal_421, 0, true, true);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_1038(), iLocal_421, joaat("COMPONENT_AT_PI_SUPP"));
			WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
			iVar0 = 50;
			iVar1 = (iVar0 - WEAPON::GET_AMMO_IN_PED_WEAPON(func_1038(), iLocal_421));
			if (iVar1 > 0)
			{
				WEAPON::ADD_AMMO_TO_PED(func_1038(), iLocal_421, iVar1);
			}
			func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(iLocal_421);
			HUD::HUD_SET_WEAPON_WHEEL_TOP_SLOT(iLocal_420);
		}
		if (__LIB_16__::func_903(func_1037()))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(func_1037(), iLocal_419, false))
			{
				if (bParam0)
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_1037(), iLocal_419, 250, true, true);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_1037(), iLocal_419, 250, false, false);
				}
			}
			else
			{
				if (bParam0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_1037(), iLocal_419, true);
				}
				WEAPON::ADD_AMMO_TO_PED(func_1037(), iLocal_419, 250);
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_1037(), iLocal_419, joaat("COMPONENT_AT_SCOPE_MAX")))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_1037(), iLocal_419, joaat("COMPONENT_AT_SCOPE_MAX"));
			}
			if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_1037(), iLocal_419, joaat("COMPONENT_AT_AR_SUPP_02")))
			{
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_1037(), iLocal_419, joaat("COMPONENT_AT_AR_SUPP_02"));
			}
		}
		bLocal_292 = true;
	}
}

void func_762()//Position - 0x8FEFB
{
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.2612f, 43.4412f, 18f, 0);
	}
}

void func_763()//Position - 0x8FF25
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	func_762();
	func_742();
	func_738();
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (__LIB_16__::func_903(func_1038()))
			{
				func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			iLocal_302 = 0;
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_328 = 0;
			iLocal_330 = 0;
			__LIB_43__::func_206(4, "stage 4: third bomb", 0, 0, 0, 1);
			iLocal_425++;
			break;
		case 1:
			if (__LIB_0__::func_501("DCKH_BOMB2", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[2 /*7*/].f_2, 1.5f, 1.5f, 2f, false, true, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB2");
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[2 /*7*/].f_2, 1.5f, 1.5f, 2f, false, true, 0) && Local_52[2 /*7*/].f_6 == 0) && !Local_477.f_20)
			{
				if (__LIB_16__::func_855() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (!iLocal_327)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
						{
							iLocal_327 = 1;
						}
					}
				}
				if (__LIB_16__::func_854())
				{
					__LIB_0__::func_229("DCKH_BOMB2", 7500, 1);
				}
			}
			if (Local_52[2 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_52[2 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_52[2 /*7*/].f_2 + Vector(-2f, -3f, -0.75f), 10f, iLocal_420, false) || Local_52[2 /*7*/].f_6 == 1)
				{
					if (iLocal_352)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BMB3_NS", 8, 0, 0, 0))
						{
							__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
							Local_52[2 /*7*/].f_6 = 1;
							if (!iLocal_352)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("dh2a_3rd_bomb_planted");
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							func_1018(5);
							iLocal_425 = 0;
						}
					}
					else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BMB3", 8, 0, 0, 0))
					{
						__LIB_13__::func_808(&(Local_52[2 /*7*/].f_1));
						Local_52[2 /*7*/].f_6 = 1;
						if (!iLocal_352)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("dh2a_3rd_bomb_planted");
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_328 = 0;
						func_1018(5);
						iLocal_425 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					}
				}
				if (!iLocal_330 && !iLocal_352)
				{
					if (__LIB_16__::func_854())
					{
						if (PLAYER::PLAYER_PED_ID() == func_1038())
						{
							__LIB_0__::func_229("DCKH_PLB4", 7500, 1);
							iLocal_330 = 1;
						}
					}
				}
				if (!iLocal_328 && !iLocal_352)
				{
					if (__LIB_16__::func_855() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SCHAT2", 7, 0, 0, 0))
						{
							iLocal_328 = 1;
						}
					}
				}
			}
			if (((!__LIB_16__::func_903(Local_51[11 /*44*/]) && !__LIB_16__::func_903(Local_51[13 /*44*/])) && iLocal_326 == 0) && !iLocal_352)
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_09", 7, 0, 0, 0))
				{
					iLocal_326 = 1;
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		if (!iLocal_339 && !Local_477.f_20)
		{
			if (__LIB_16__::func_854())
			{
				__LIB_0__::func_229("DCKH_PROTECT", 7500, 1);
				iLocal_339 = 1;
			}
		}
	}
}

void func_765()//Position - 0x902EE
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	func_762();
	func_742();
	func_738();
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (__LIB_16__::func_903(func_1038()))
			{
				func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			iLocal_302 = 0;
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_328 = 0;
			iLocal_330 = 0;
			__LIB_43__::func_206(3, "stage 3: second bomb", 0, 0, 0, 1);
			iLocal_425++;
			break;
		case 1:
			if (__LIB_0__::func_501("DCKH_BOMB2", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[1 /*7*/].f_2, 1.5f, 1.5f, 2f, false, true, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB2");
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[1 /*7*/].f_2, 1.5f, 1.5f, 2f, false, true, 0) && Local_52[1 /*7*/].f_6 == 0) && !Local_477.f_20)
			{
				if (__LIB_16__::func_855())
				{
					if (!iLocal_327)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
						{
							iLocal_327 = 1;
						}
					}
				}
				if (__LIB_16__::func_854())
				{
					__LIB_0__::func_229("DCKH_BOMB2", 7500, 1);
				}
			}
			if (Local_52[1 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_52[1 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_52[1 /*7*/].f_2 + Vector(-2f, -3f, -0.75f), 10f, iLocal_420, false) || Local_52[1 /*7*/].f_6 == 1)
				{
					if (iLocal_352)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BMB2_NS", 8, 0, 0, 0))
						{
							__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
							Local_52[1 /*7*/].f_6 = 1;
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							if (!iLocal_352)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("dh2a_2nd_bomb_planted");
							}
							iLocal_326 = 0;
							iLocal_327 = 0;
							iLocal_328 = 0;
							iLocal_330 = 0;
							func_1018(4);
							iLocal_425 = 0;
						}
					}
					else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_04", 8, 0, 0, 0))
					{
						__LIB_13__::func_808(&(Local_52[1 /*7*/].f_1));
						Local_52[1 /*7*/].f_6 = 1;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						if (!iLocal_352)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("dh2a_2nd_bomb_planted");
						}
						iLocal_326 = 0;
						iLocal_327 = 0;
						iLocal_330 = 0;
						func_1018(4);
						iLocal_425 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					}
				}
				if (!iLocal_330)
				{
					if (__LIB_16__::func_854())
					{
						if (PLAYER::PLAYER_PED_ID() == func_1038())
						{
							__LIB_0__::func_229("DCKH_PLB2", 7500, 1);
							iLocal_330 = 1;
						}
					}
				}
				if (!iLocal_328 && !iLocal_352)
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SCHAT1", 7, 0, 0, 0))
						{
							iLocal_328 = 1;
						}
					}
				}
			}
			if ((((!__LIB_16__::func_903(Local_51[2 /*44*/]) && !__LIB_16__::func_903(Local_51[3 /*44*/])) && !__LIB_16__::func_903(Local_51[4 /*44*/])) && iLocal_326 == 0) && !iLocal_352)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_09", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		if (!iLocal_339 && !Local_477.f_20)
		{
			if (__LIB_16__::func_854())
			{
				__LIB_0__::func_229("DCKH_PROTECT", 7500, 1);
				iLocal_339 = 1;
			}
		}
	}
}

void func_766()//Position - 0x906A6
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	func_762();
	func_742();
	func_738();
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_715(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_302 = 0;
			if (__LIB_16__::func_903(func_1038()))
			{
				func_122(func_1038(), 14, 1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (__LIB_16__::func_903(func_1037()))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, false);
				}
			}
			iLocal_326 = 0;
			iLocal_330 = 0;
			iLocal_425++;
			break;
		case 1:
			if (__LIB_16__::func_854())
			{
				if (Local_52[0 /*7*/].f_6 == 0)
				{
					__LIB_0__::func_229("DCKH_PLB1", 7500, 1);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), joaat("WEAPON_STICKYBOMB"), false);
				iLocal_425++;
			}
			break;
		case 2:
			if (__LIB_0__::func_501("DCKH_BOMB1", 0, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[0 /*7*/].f_2, 3f, 1.5f, 2f, false, true, 0))
			{
				HUD::CLEAR_THIS_PRINT("DCKH_BOMB1");
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_52[0 /*7*/].f_2, 3f, 1.5f, 2f, false, true, 0) && Local_52[0 /*7*/].f_6 == 0)
			{
				if (!__LIB_0__::func_501("DCKH_PLB1", 0, 0))
				{
					if (__LIB_16__::func_855())
					{
						if (!iLocal_330)
						{
							if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_06", 7, 0, 0, 0))
							{
								iLocal_330 = 1;
							}
						}
					}
					if (__LIB_16__::func_854())
					{
						__LIB_0__::func_229("DCKH_BOMB1", 7500, 1);
					}
				}
			}
			if (Local_52[0 /*7*/].f_6 == 0)
			{
				if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-87.44234f, -2365.911f, 12.796924f, -82.76716f, -2365.9175f, 15.296924f, 2.5f, iLocal_420, false) || Local_52[0 /*7*/].f_6 == 1)
				{
					if (iLocal_352)
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_BMB1_NS", 8, 0, 0, 0))
						{
							__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
							Local_52[0 /*7*/].f_6 = 1;
							iLocal_326 = 0;
							iLocal_330 = 0;
							func_1018(3);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							iLocal_425 = 0;
						}
					}
					else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_03", 8, 0, 0, 0))
					{
						__LIB_13__::func_808(&(Local_52[0 /*7*/].f_1));
						Local_52[0 /*7*/].f_6 = 1;
						iLocal_326 = 0;
						iLocal_330 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						func_1018(3);
						iLocal_425 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
					}
				}
			}
			break;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		if (!iLocal_339 && !Local_477.f_20)
		{
			if (__LIB_16__::func_854())
			{
				__LIB_0__::func_229("DCKH_PROTECT", 7500, 1);
				iLocal_339 = 1;
			}
		}
	}
}

void func_767()//Position - 0x909AF
{
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("v_fakeboatpo1sh1"), -165.34f, -2350.03f, 0, 0);
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		HUD::SET_RADAR_ZOOM_PRECISE(1f);
	}
	else
	{
		HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
		HUD::SET_RADAR_ZOOM_PRECISE(75f);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
	}
	switch (iLocal_425)
	{
		case 0:
			OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
			func_760(1);
			__LIB_43__::func_206(1, "Stage 1: Snipe Guards", 0, 0, 0, 1);
			if (!HUD::DOES_BLIP_EXIST(Local_51[0 /*44*/].f_1))
			{
				Local_51[0 /*44*/].f_1 = __LIB_0__::func_666(Local_51[0 /*44*/], 1, 145);
			}
			if (!HUD::DOES_BLIP_EXIST(Local_51[1 /*44*/].f_1))
			{
				Local_51[1 /*44*/].f_1 = __LIB_0__::func_666(Local_51[1 /*44*/], 1, 145);
			}
			if (__LIB_16__::func_903(Local_51[0 /*44*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_51[0 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0f, false, false, false);
				if (__LIB_0__::func_715(Local_51[0 /*44*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_51[0 /*44*/], true);
				}
			}
			if (__LIB_16__::func_903(Local_51[1 /*44*/]))
			{
				TASK::TASK_PLAY_ANIM(Local_51[1 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0f, false, false, false);
				if (__LIB_0__::func_715(Local_51[1 /*44*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_51[1 /*44*/], true);
				}
			}
			if (__LIB_0__::func_715(func_1038()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
				TASK::CLEAR_PED_TASKS(func_1038());
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_270))
			{
				iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_271))
			{
				iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_272))
			{
				iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_273))
			{
				iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_274))
			{
				iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
				ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
			}
			iLocal_398 = 1;
			if (__LIB_16__::func_903(Local_50[2 /*15*/]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[2 /*15*/]));
			}
			if (__LIB_16__::func_903(Local_49[0 /*2*/]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
			{
				AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
			}
			iLocal_326 = 0;
			iLocal_327 = 0;
			iLocal_330 = 0;
			iLocal_432[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
			iLocal_432[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
			iLocal_425++;
			break;
		case 1:
			func_738();
			if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
			{
				if (!__LIB_0__::func_1("SNIPE_HLP0" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUTGROUP_SNIPER_ZOOM_SECONDARY~ while holding ~INPUT_AIM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */))
				{
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_190("SNIPE_HLP0" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUTGROUP_SNIPER_ZOOM_SECONDARY~ while holding ~INPUT_AIM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */);
				}
			}
			else if (!__LIB_0__::func_1("SNIPE_HLP1" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUT_SNIPER_ZOOM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_190("SNIPE_HLP1" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUT_SNIPER_ZOOM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (__LIB_16__::func_903(Local_51[0 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[0 /*44*/], func_1037(), true))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
					ENTITY::SET_ENTITY_HEALTH(Local_51[0 /*44*/], 0, 0);
				}
			}
			if (__LIB_16__::func_903(Local_51[1 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[1 /*44*/], func_1037(), true))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
					ENTITY::SET_ENTITY_HEALTH(Local_51[1 /*44*/], 0, 0);
				}
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (!iLocal_326)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_GO2", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			else if (!iLocal_327)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_SHADY", 7, 0, 0, 0))
					{
						iLocal_327 = 1;
					}
				}
			}
			else if (!iLocal_330)
			{
				if (__LIB_16__::func_854())
				{
					__LIB_0__::func_382("DCKH_SNIPER", 7500, 1);
					iLocal_330 = 1;
				}
			}
			if (!__LIB_16__::func_903(Local_51[0 /*44*/]) && !__LIB_16__::func_903(Local_51[1 /*44*/]))
			{
				iLocal_326 = 0;
				iLocal_327 = 0;
				iLocal_330 = 0;
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(-93.05f, -2367.14f, 14.99f, __LIB_0__::func_79(0.91f, 0.42f, 0.03f), 500f, 0);
				}
				if (__LIB_0__::func_501("DCKH_SNIPER", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("DCKH_SNIPER");
				}
				iLocal_425++;
			}
			else if (!__LIB_16__::func_903(Local_51[0 /*44*/]) && __LIB_16__::func_903(Local_51[1 /*44*/]))
			{
				if (iLocal_366 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_370, 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 1000, false);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_1037(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(Local_51[1 /*44*/], iLocal_261);
					iLocal_366 = 1;
				}
			}
			else if (__LIB_16__::func_903(Local_51[0 /*44*/]) && !__LIB_16__::func_903(Local_51[1 /*44*/]))
			{
				if (iLocal_366 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 1000, false);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_1037(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(Local_51[0 /*44*/], iLocal_261);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
					iLocal_366 = 1;
				}
			}
			else if ((MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_51[0 /*44*/], true), 5f, 5f, 5f) || PED::HAS_PED_RECEIVED_EVENT(Local_51[0 /*44*/], 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_51[1 /*44*/], 125))
			{
				if (iLocal_366 == 0)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0f, false, false, false);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 1000, false);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_1037(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(Local_51[0 /*44*/], iLocal_261);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
					TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_370, 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1037(), 1000, false);
					TASK::TASK_SHOOT_AT_ENTITY(0, func_1037(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
					TASK::TASK_PERFORM_SEQUENCE(Local_51[1 /*44*/], iLocal_261);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
					iLocal_366 = 1;
				}
			}
			break;
		case 2:
			iLocal_290 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("DH2A_START");
			func_760(1);
			if (WEAPON::HAS_PED_GOT_WEAPON(func_1038(), iLocal_421, false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
			}
			iLocal_313 = 0;
			func_687(func_1038(), 0, 0);
			iLocal_425++;
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_290) > 2000)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_SUPP", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
						iLocal_425++;
					}
				}
			}
			break;
		case 4:
			HUD::CLEAR_HELP(true);
			GRAPHICS::SET_SEETHROUGH(false);
			iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.2612f, 43.4412f, 0f, 0f, -34.5f, 2);
			iLocal_260 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(func_1037(), iLocal_293, "missheistdocks2aswitchig_7", "IG_7_F_SNIPING_M_CLIMBING_FRANKLIN", 1000f, -8f, 16384, 0, 1000f, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_293, "IG_7_F_SNIPING_M_CLIMBING_CAM", "missheistdocks2aswitchig_7");
			func_471(0, -143.3857f, -2488.554f, 43.4383f, 1, 0, 1, 3000, 0);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_425++;
			break;
		case 5:
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.99f)
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_290 = MISC::GET_GAME_TIMER();
				iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(-79.7377f, -2359.452f, 14.2669f, 0f, 0f, 155.7045f, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_1038());
				func_687(func_1038(), 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), joaat("WEAPON_UNARMED"), true);
				TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_293, "missheistdocks2aig_1", "ig_1_michaelclimboverboat", 1000f, -2f, 4, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_1038(), false, false);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_260, iLocal_293, "ig_1_michaelclimboverboat_cam", "missheistdocks2aig_1");
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_293, 0.2f);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
				iLocal_433[0] = Local_50[1 /*15*/];
				iLocal_327 = 0;
				iLocal_425++;
			}
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > __LIB_0__::func_373(func_776(), fLocal_504, 0.8f))
			{
				if (__LIB_16__::func_896(&iLocal_433, 0))
				{
					if (__LIB_31__::func_990(&iLocal_433, 1, 1, 0))
					{
						if (__LIB_16__::func_903(func_1037()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(func_1037(), joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) > 1)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, false);
							}
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_326 = 0;
						iLocal_327 = 0;
						if (func_776())
						{
							__LIB_37__::func_919(&uLocal_239, func_1038(), 0, fLocal_505, iLocal_506, iLocal_507, iLocal_508, iLocal_509, fLocal_510);
							iLocal_425 = 70;
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							TASK::CLEAR_PED_TASKS(func_1038());
							PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
							PED::FORCE_PED_MOTION_STATE(func_1038(), joaat("MotionState_Stealth_Idle"), false, 0, false);
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 1000, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
							func_372(1, 0, 1, 3000, 0);
							iLocal_425++;
						}
					}
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.5f)
			{
				if (!iLocal_326)
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_TK1", 7, 0, 0, 0))
					{
						iLocal_326 = 1;
					}
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.1f)
			{
				if (!iLocal_327)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-79.51f, -2362.08f, 14.38f, __LIB_0__::func_79(-1f, 0.07f, 0f), 500f, 0);
					iLocal_327 = 1;
				}
			}
			break;
		case 70:
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (__LIB_15__::func_966(&uLocal_239, bLocal_502, 1, 1, bLocal_503, bLocal_511, 0))
				{
					TASK::CLEAR_PED_TASKS(func_1038());
					PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
					PED::FORCE_PED_MOTION_STATE(func_1038(), joaat("MotionState_Stealth_Idle"), false, 0, false);
					func_372(1, 0, 0, 3000, 0);
					iLocal_425 = 7;
				}
			}
			break;
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("DH2A_READY_FOR_2ND"))
			{
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
				iLocal_407 = 1;
				func_770();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				func_372(1, 0, 1, 3000, 0);
				__LIB_0__::func_325();
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_02", 7, 0, 0, 0);
				func_446(0, 0, 1, 0, 0, 0);
				iLocal_491 = 1;
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
				iLocal_425++;
			}
			break;
		case 8:
			func_768();
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2aig_1");
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2aswitchig_7");
			__LIB_43__::func_206(2, "Stage 2: first bomb", 0, 0, 0, 1);
			__LIB_0__::func_151("DCKH_SWHELP", -1);
			func_1018(2);
			iLocal_425 = 0;
			break;
	}
}

void func_768()//Position - 0x915E2
{
	int iVar0;
	func_701();
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 5);
	iLocal_266[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), -125.235405f, -2357.3862f, 9.676947f, 0f, 0f, 0f, iVar0, -1, 2, true, 0);
}

void func_770()//Position - 0x91636
{
	iLocal_265[0] = TASK::ADD_COVER_POINT(-184.09f, -2374.0142f, 8.3191f, 90f, 1, 2, 0, false);
	iLocal_265[1] = TASK::ADD_COVER_POINT(-127.6602f, -2374.7002f, 8.3191f, 0f, 1, 2, 0, false);
	iLocal_265[2] = TASK::ADD_COVER_POINT(-120.2045f, -2378.9592f, 8.3191f, 90f, 0, 2, 0, false);
}

bool func_776()//Position - 0x91AF3
{
	return CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
}

void func_778()//Position - 0x91B18
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	char* sVar5;
	int iVar6;
	struct<3> Var7;
	int iVar8;
	switch (iLocal_425)
	{
		case 0:
			if (__LIB_0__::func_323() || iLocal_315)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_425 = 2;
			}
			else
			{
				iLocal_425++;
			}
			break;
		case 1:
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			__LIB_37__::func_927(1);
			func_961();
			if (iLocal_314)
			{
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_425++;
			}
			break;
		case 2:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			if (__LIB_14__::func_466() != 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_433[1]))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_433[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_433[1], true, false);
				}
			}
			if (__LIB_14__::func_466() != 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_433[2]))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_433[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
			}
			if (__LIB_14__::func_466() != 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_433[0]))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						iLocal_433[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_433[0], true, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_268))
			{
				iLocal_268 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1158.581f, -1519.2471f, 9.6308f, 2f, joaat("v_res_tre_sofa_mess_c"), true, false, true);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_268, false, false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (__LIB_0__::func_715(iLocal_433[1]))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_433[1], joaat("MotionState_Walk"), true, 1, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_433[1], -1154.6628f, -1518.2433f, 9.6327f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_433[1], 306.3135f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_433[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_433[0], false))
					{
						__LIB_17__::func_428(iLocal_433[0]);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_433[2]))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						iLocal_433[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
				if (__LIB_14__::func_466() != 2)
				{
					if (__LIB_16__::func_896(&iLocal_433, 2))
					{
						__LIB_31__::func_990(&iLocal_433, 1, 0, 0);
					}
				}
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1151.634f, -1519.498f, 9.6327f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 215f);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
						TASK::OPEN_SEQUENCE_TASK(&iVar6);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.7572f, -1520.947f, 9.6327f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1149.5098f, -1522.4679f, 9.6331f, 1f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1147.3914f, -1522.7167f, 9.413f, 1f, 20000, 0.25f, 512, 312.1079f);
						TASK::CLOSE_SEQUENCE_TASK(iVar6);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar6);
						TASK::CLEAR_SEQUENCE_TASK(&iVar6);
					}
					else
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3500, 0f, true, false);
					}
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (bLocal_325)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 1000, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					}
				}
				RECORDING::REPLAY_STOP_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if ((!CUTSCENE::IS_CUTSCENE_PLAYING() || __LIB_0__::func_323()) || iLocal_315)
			{
				if (__LIB_14__::func_466() != 2)
				{
					if (__LIB_16__::func_896(&iLocal_433, 2))
					{
						__LIB_31__::func_990(&iLocal_433, 1, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
						HUD::SET_RADAR_ZOOM_PRECISE(1f);
					}
				}
				else
				{
					if (__LIB_16__::func_903(iLocal_433[0]))
					{
						Local_50[1 /*15*/] = iLocal_433[0];
						PED::DELETE_PED(&(Local_50[1 /*15*/]));
					}
					if (__LIB_16__::func_903(iLocal_433[1]))
					{
						Local_50[0 /*15*/] = iLocal_433[1];
					}
					Local_50[2 /*15*/] = PLAYER::PLAYER_PED_ID();
					HUD::SET_RADAR_ZOOM_PRECISE(1f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_268))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_268, true, false);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_268);
					}
					if (__LIB_13__::func_806(3))
					{
						__LIB_16__::func_868(1, 3);
					}
					iLocal_425++;
				}
			}
			break;
		case 3:
			__LIB_37__::func_927(0);
			if (__LIB_16__::func_903(func_150()))
			{
				__LIB_0__::func_222(&uLocal_54, 2, func_150(), "TREVOR", 0, 1);
			}
			if (__LIB_16__::func_903(func_1037()))
			{
				__LIB_0__::func_222(&uLocal_54, 3, func_1037(), "FRANKLIN", 0, 1);
				PED::SET_PED_CONFIG_FLAG(func_1037(), 206, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(func_1037(), -1151.3347f, -1520.3198f, 3.3653f, 1f, -1, 0.25f, 0, 40000f);
			}
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			__LIB_17__::func_702(1, 3, 1);
			func_830();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			iLocal_425++;
			break;
		case 4:
			if (!__LIB_16__::func_903(Local_49[0 /*2*/]))
			{
				func_821(&(Local_49[0 /*2*/]), -1154.6117f, -1520.07f, 3.3456f, 33.0431f);
			}
			else
			{
				iLocal_425++;
			}
			break;
		case 5:
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_150()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1037()))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("DH2A_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1037(), iLocal_288);
					func_693(0);
					iLocal_337 = 0;
					iLocal_326 = 0;
					iLocal_327 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::SET_RADAR_ZOOM_PRECISE(0f);
					iLocal_425++;
				}
			}
			break;
		case 6:
			func_819();
			Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (Var7.f_2 < 5f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.6797f, -1518.5256f, 3.279745f, -1148.989f, -1522.9865f, 9.34103f, 6f, false, true, 0))
			{
				iLocal_425++;
			}
			break;
		case 7:
			func_819();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(func_1037(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_257))
					{
						HUD::REMOVE_BLIP(&iLocal_257);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_150(), true), -160.51218f, -2502.8828f, 47.93985f, true) < 125f && !iLocal_327)
					{
						__LIB_0__::func_638();
						TASK::TASK_LOOK_AT_ENTITY(func_1037(), func_150(), -1, 0, 2);
						func_693(0);
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2aig_1");
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_6");
						__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_7");
						__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
						__LIB_16__::func_852(&uLocal_514, joaat("prop_military_pickup_01"));
						__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
						__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
						__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
						__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
						__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
						iLocal_327 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_290) > 10000 && !iLocal_326)
					{
						if (INTERIOR::IS_VALID_INTERIOR(iLocal_263))
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_263);
						}
						__LIB_15__::func_789(53, 1);
						__LIB_17__::func_702(1, 3, 0);
						iLocal_326 = 1;
					}
					if (!iLocal_337)
					{
						__LIB_0__::func_620(0);
						iLocal_337 = 1;
					}
				}
				else if (iLocal_337)
				{
					Var4 = { __LIB_0__::func_486() };
					sVar5 = __LIB_1__::func_601(&Var4);
					if ((MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_01") || MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_02")) || MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_03"))
					{
						__LIB_0__::func_620(1);
						iLocal_337 = 0;
					}
				}
				if (!PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == Local_49[0 /*2*/])
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
					Local_49[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49[0 /*2*/], true, true);
				}
			}
			else if (iLocal_337)
			{
				Var4 = { __LIB_0__::func_486() };
				sVar5 = __LIB_1__::func_601(&Var4);
				if ((MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_01") || MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_02")) || MISC::ARE_STRINGS_EQUAL(sVar5, "DS2A_03"))
				{
					__LIB_0__::func_620(1);
					iLocal_337 = 0;
				}
			}
			if (PED::IS_PED_IN_ANY_HELI(func_150()))
			{
				if (func_812(&Local_219, -160.51218f, -2502.8828f, 47.93985f, 0.1f, 0.1f, 2f, 1, func_1037(), 0, 0, "DCKH_DRIVE", "DCKH_DONT_L_T", "", "", "DCKH_P_UP_B", "DCKH_CAR", "DCKH_CARBK", 0, 0, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_219.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_1037(), -168.01913f, -2497.7285f, 44.1933f, -146.66716f, -2512.5198f, 54.0683f, 10f, false, true, 0)) && PED::IS_PED_IN_VEHICLE(func_1037(), Local_49[0 /*2*/], false)))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
					Local_49[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49[0 /*2*/], true, false);
					iLocal_326 = 0;
					iLocal_327 = 0;
					__LIB_0__::func_366(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					__LIB_13__::func_815(&Local_219, 1, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ON_BRIDGE");
					__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
					iLocal_425++;
				}
			}
			else if (func_812(&Local_219, -160.51218f, -2502.8828f, 47.93985f, 0.1f, 0.1f, 2f, 1, func_1037(), 0, 0, "DCKH_DRIVE", "DCKH_DONT_L_T", "", "", "DCKH_P_UP_B", "DCKH_CAR", "DCKH_CARBK", 0, 0, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_219.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_1037(), -168.01913f, -2497.7285f, 44.1933f, -146.66716f, -2512.5198f, 52.0683f, 4f, false, true, 0)) && PED::IS_PED_IN_VEHICLE(func_1037(), Local_49[0 /*2*/], false)))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
				Local_49[0 /*2*/] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49[0 /*2*/], true, false);
				iLocal_326 = 0;
				iLocal_327 = 0;
				__LIB_0__::func_366(0);
				__LIB_0__::func_213(Local_49[0 /*2*/], 10f, 1, 1056964608, 0, 1, 0);
				__LIB_13__::func_815(&Local_219, 1, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("DH2A_ON_BRIDGE");
				__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
				iLocal_425++;
			}
			break;
		case 8:
			func_819();
			if (__LIB_0__::func_587(Local_49[0 /*2*/]))
			{
				iLocal_258 = __LIB_0__::func_488(-143.8537f, -2488.403f, 43.4098f, 0);
				if (__LIB_16__::func_896(&iLocal_433, 1))
				{
					__LIB_31__::func_990(&iLocal_433, 1, 0, 0);
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneFranklin", 1000, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_49[0 /*2*/], false);
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -77.9618f, -2359.0828f, 0f, 232.375f, true, true, false);
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
				STREAMING::NEW_LOAD_SCENE_START(-142.35f, -2487.92f, 44.8f, __LIB_0__::func_79(-100f, -0.03f, 0.06f), 400f, 0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
				iLocal_425++;
			}
			else if (PED::IS_PED_IN_ANY_HELI(func_150()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(func_150(), joaat("SCRIPT_TASK_VEHICLE_MISSION")) > 1)
				{
					TASK::TASK_HELI_MISSION(func_150(), PED::GET_VEHICLE_PED_IS_IN(func_150(), false), 0, 0, -160.51218f, -2502.8828f, 47.93985f, 19, 10f, 1f, -1f, 48, 0, -1f, 0);
				}
			}
			else
			{
				__LIB_0__::func_213(Local_49[0 /*2*/], 10f, 1, 1056964608, 0, 1, 0);
			}
			break;
		case 9:
			func_819();
			if (!PED::IS_PED_IN_VEHICLE(func_1037(), Local_49[0 /*2*/], false))
			{
				if (func_481(&(Local_50[1 /*15*/]), 0, Local_49[6 /*2*/], -1, 1, 0, 0))
				{
					__LIB_0__::func_222(&uLocal_54, 1, Local_50[1 /*15*/], "MICHAEL", 0, 1);
					func_687(func_1038(), 0, 0);
					func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_DIES_IN_WATER(func_1038(), false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1038(), iLocal_288);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
					func_760(0);
					if (WEAPON::HAS_PED_GOT_WEAPON(func_1037(), iLocal_419, false))
					{
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(func_1037(), iLocal_419, 200, false, false);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_GET_TO_VANTAGE_POINT"))
					{
						AUDIO::START_AUDIO_SCENE("DH2A_GET_TO_VANTAGE_POINT");
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iVar8 = 0;
					while (iVar8 <= 17)
					{
						if (((((iVar8 != 7 && iVar8 != 6) && iVar8 != 5) && iVar8 != 9) && iVar8 != 14) && iVar8 != 16)
						{
							func_732(iVar8, 8f, 1, 0);
						}
						iVar8++;
					}
					Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
					Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
					TASK::TASK_PLAY_ANIM(Local_51[0 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(Local_51[1 /*44*/], "missheistdocks2a", "idle_guard", 4f, -4f, -1, 1, 0f, false, false, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_51[0 /*44*/], joaat("WEAPON_HEAVYSNIPER"), -1, true, true);
					WEAPON::GIVE_WEAPON_TO_PED(Local_51[1 /*44*/], joaat("WEAPON_HEAVYSNIPER"), -1, true, true);
					PED::SET_PED_ALERTNESS(Local_51[0 /*44*/], 1);
					PED::SET_PED_ALERTNESS(Local_51[1 /*44*/], 1);
					iLocal_425++;
				}
			}
			break;
		case 10:
			func_819();
			if (ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.7872f, -2489.0518f, 43.433f, 8f, 8f, 10f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.7872f, -2489.0518f, 43.533f, 1f, 1f, 2f, true, true, 0) && !PED::IS_PED_RAGDOLL(func_1037()))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_258))
				{
					HUD::REMOVE_BLIP(&iLocal_258);
				}
				MISC::CLEAR_AREA(-147.072f, -2495.3691f, 47.6477f, 50f, true, false, false, false);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_GET_TO_VANTAGE_POINT"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH2A_GET_TO_VANTAGE_POINT");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				__LIB_0__::func_366(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(func_1037(), iLocal_419, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_1037(), iLocal_419, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(func_1037(), iLocal_419, 200, false, true);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -143.8061f, -2488.3064f, 43.4408f, 1f, 20000, 40000f, 0.5f);
				TASK::TASK_ACHIEVE_HEADING(0, __LIB_16__::func_867(func_1037(), Local_51[0 /*44*/], 1), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
				TASK::TASK_PERFORM_SEQUENCE(func_1037(), iLocal_261);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
				if (!iLocal_342)
				{
					if (__LIB_16__::func_903(func_150()))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[2 /*15*/]));
					}
					if (__LIB_16__::func_903(Local_49[0 /*2*/]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
					}
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 0f, 4);
				iLocal_425++;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.7872f, -2489.0518f, 43.433f, 80f, 80f, 80f, false, true, 0))
				{
					__LIB_0__::func_229("DCKH_VANTAGE", 7500, 1);
					if (!ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.7872f, -2489.0518f, 43.433f, 100f, 100f, 100f, false, true, 0))
					{
						func_301(14);
					}
				}
				if (!__LIB_0__::func_75())
				{
					if (!iLocal_342)
					{
						__LIB_0__::func_229("DCKH_VANTAGE", 7500, 1);
						iLocal_342 = 1;
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_49[0 /*2*/], 188.8807f, -2988.6f, 4.7541f, 25f, 0, ENTITY::GET_ENTITY_MODEL(Local_49[0 /*2*/]), 786599, 4f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						TASK::TASK_PERFORM_SEQUENCE(func_150(), iLocal_261);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						if (__LIB_16__::func_903(func_150()))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[2 /*15*/]));
						}
						if (__LIB_16__::func_903(Local_49[0 /*2*/]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[0 /*2*/]));
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_16__::func_903(Local_49[6 /*2*/]))
			{
				VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_49[6 /*2*/], 5f);
				VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], false);
				VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_49[6 /*2*/], false);
			}
			iLocal_294 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
			CAM::SET_CAM_ACTIVE(iLocal_294, true);
			func_471(0, -209.5674f, -2386.8694f, 15.0927f, 1, 0, 1, 3000, 0);
			PED::SET_FORCE_FOOTSTEP_UPDATE(func_1037(), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_1037());
			WEAPON::SET_CURRENT_PED_WEAPON(func_1037(), iLocal_419, false);
			iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.2612f, 43.4412f, 0f, 0f, -34.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(func_1037(), iLocal_293, "missheistdocks2aswitchig_6", "IG_6_f_sniping_m_dingy_franklin", 1000f, -8f, 16384, 0, 1000f, 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_293, "IG_6_f_sniping_m_dingy_franklin_cam", "missheistdocks2aswitchig_6");
			CAM::SET_CAM_ACTIVE(iLocal_294, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_1037(), true, false);
			iLocal_327 = 0;
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_425++;
			break;
		case 12:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_293))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(func_1037(), iLocal_419, true);
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_1037(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
				}
				WEAPON::REQUEST_WEAPON_ASSET(iLocal_419, 31, 26);
			}
			if (__LIB_16__::func_903(Local_49[6 /*2*/]))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_49[6 /*2*/]);
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.95f)
			{
				PED::SET_FORCE_FOOTSTEP_UPDATE(func_1037(), false);
				func_784();
				iLocal_425++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.5f)
			{
				if (!iLocal_327)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (__LIB_13__::func_692(Global_91229[74 /*34*/].f_13, Global_91229[74 /*34*/].f_14))
					{
						STREAMING::NEW_LOAD_SCENE_START(-79.16f, -2355.64f, 1.87f, __LIB_0__::func_79(0.69f, -0.72f, 0.11f), 300f, 0);
					}
					else
					{
						STREAMING::NEW_LOAD_SCENE_START(-24.19f, -2417.54f, 7.8f, __LIB_0__::func_79(-0.97f, 0.16f, 0.18f), 500f, 0);
					}
					iLocal_327 = 1;
				}
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.2f)
			{
				if (!iLocal_326)
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_9(&uLocal_54, "D2AAUD", "DS2A_DING", "DS2A_DING_1", 7, 0, 0))
					{
						if (__LIB_16__::func_903(Local_49[6 /*2*/]))
						{
							VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], false);
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						STREAMING::NEW_LOAD_SCENE_START(-143.55f, -2489.59f, 45.58f, __LIB_0__::func_79(0.02f, 0.97f, -0.23f), 1000f, 0);
						iLocal_326 = 1;
					}
				}
			}
			break;
		case 13:
			if (__LIB_16__::func_903(func_1037()))
			{
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_1037(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_419, 31, 26);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.99f)
			{
				STREAMING::CLEAR_FOCUS();
				iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(-143.8203f, -2488.2612f, 43.4412f, 0f, 0f, -34.5f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(func_1037(), iLocal_293, "missheistdocks2aswitchig_7", "IG_7_f_sniping_franklin", 1000f, -1000f, 16384, 0, 1000f, 0);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iLocal_293, "IG_7_f_sniping_cam", "missheistdocks2aswitchig_7");
				iLocal_326 = 0;
				iLocal_425++;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.5f)
			{
				if (!iLocal_326)
				{
					iLocal_326 = 1;
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					STREAMING::NEW_LOAD_SCENE_START(-139.22f, -2486.47f, 44.71f, __LIB_0__::func_79(-0.83f, -0.56f, 0.06f), 300f, 0);
				}
			}
			break;
		case 14:
			if (__LIB_16__::func_903(func_1037()))
			{
				iVar3 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(func_1037(), 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					WEAPON::REQUEST_WEAPON_HIGH_DETAIL_MODEL(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar3));
					WEAPON::REQUEST_WEAPON_ASSET(iLocal_419, 31, 26);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_293) > 0.999f)
			{
				if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_419, true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(Local_51[0 /*44*/]));
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(Local_51[0 /*44*/]), 1f);
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
					CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), false, 0, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
				}
				func_372(1, 0, 0, 3000, 0);
				RECORDING::REPLAY_STOP_EVENT();
				if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(func_1038(), iLocal_421, joaat("COMPONENT_AT_PI_SUPP")))
				{
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(func_1038(), iLocal_421, joaat("COMPONENT_AT_PI_SUPP"));
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPE_GUARDS_scene"))
				{
					AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				if (__LIB_16__::func_903(Local_49[6 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_49[6 /*2*/], 1f);
				}
				iLocal_326 = 0;
				iLocal_425++;
			}
			else if (!iLocal_326)
			{
				iLocal_326 = 1;
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-95.3159f, -2370.9175f, 13.296f, 25f, 0);
			}
			break;
		case 15:
			__LIB_16__::func_905(&uLocal_514, "missheistdocks2aswitchig_6");
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), false);
			iLocal_326 = 0;
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			func_1018(1);
			iLocal_425 = 0;
			break;
	}
	if (__LIB_16__::func_903(func_1037()) && iLocal_425 > 6)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_1037(), 29.3069f, -2545.3843f, 1.2836f, -266.0822f, -2313.2078f, 20f, 170f, false, true, 0) && !PED::IS_PED_RAGDOLL(func_1037()))
		{
			func_301(7);
		}
	}
	if (__LIB_16__::func_903(func_1037()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_1037(), -874.0031f, -1981.0035f, 23.5805f, 10.8306f, -2628.968f, 81.1363f, 80f, false, true, 0))
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.01f);
		}
		else
		{
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		}
	}
}

float func_779(int iParam0)//Position - 0x9321B
{
	struct<3> Var0;
	struct<3> Var1;
	if (__LIB_16__::func_903(iParam0) && __LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	Var1 = { __LIB_0__::func_79(Var0) };
	return MISC::ATAN2(Var1.f_2, SYSTEM::VMAG(Var1.f_0, Var1.f_1, 0f));
}

float func_780(int iParam0)//Position - 0x9326D
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_16__::func_903(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
		if (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
	}
	return fVar1;
}

void func_784()//Position - 0x933E5
{
	int iVar0;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	while (!__LIB_17__::func_156(74, &uLocal_386, 0, 1, 1, 1, 0))
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START(-79.16f, -2355.64f, 1.87f, __LIB_0__::func_79(0.69f, -0.72f, 0.11f), 300f, 0);
		}
		SYSTEM::WAIT(0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(func_1037(), false);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	__LIB_15__::func_228(&uLocal_386, 0, 0, 2000, 0, 0, 0, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	STREAMING::SET_FOCUS_ENTITY(func_1038());
	iLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (__LIB_0__::func_715(Local_49[6 /*2*/]))
	{
		VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
	}
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_49[6 /*2*/], true) + Vector(0.3f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_49[6 /*2*/], 2), 2);
	if (!PED::IS_PED_INJURED(func_1038()))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(func_1038(), iLocal_293, "missheistdocks2aswitchig_7", "IG_7_m_dinghy_f_sniping_michael", 1000f, -8f, 5, 0, 1000f, 0);
	}
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_294, iVar0, "IG_7_m_dinghy_f_sniping_cam", "missheistdocks2aswitchig_7");
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_293, Local_49[6 /*2*/], 0);
	CAM::SET_CAM_ACTIVE(iLocal_294, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	iLocal_326 = 0;
	iLocal_327 = 0;
	__LIB_0__::func_325();
	__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_GO", 7, 0, 0, 0);
}

int func_812(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18)//Position - 0x95976
{
	return __LIB_15__::func_982(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, iParam4, iParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, sParam12, bParam14, bParam15, sParam13, 0, iParam16, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

void func_819()//Position - 0x95B5A
{
	switch (iLocal_346)
	{
		case 0:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_COMON1", 7, 0, 0, 0))
				{
					iLocal_346++;
				}
			}
			break;
		case 1:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_FRESP", 7, 0, 0, 0))
				{
					iLocal_347 = MISC::GET_GAME_TIMER() + 15000;
					iLocal_346++;
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_346++;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_347)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_FRGO", 7, 0, 0, 0))
					{
						iLocal_346++;
					}
				}
			}
			break;
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == __LIB_13__::func_741(1, 1))
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_FRCAR", 7, 0, 0, 0))
						{
							iLocal_346++;
						}
					}
				}
				else if (ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == __LIB_13__::func_741(1, 2))
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_FRBIKE", 7, 0, 0, 0))
						{
							iLocal_346++;
						}
					}
				}
				else
				{
					iLocal_346++;
				}
			}
			break;
		case 4:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_WHERE", 7, 0, 0, 0))
					{
						iLocal_346++;
					}
				}
			}
			break;
		case 5:
			if (iLocal_327)
			{
				iLocal_346++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(func_1037(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_0__::func_178(41))
						{
							if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_01", 7, 0, 0, 0))
							{
								iLocal_346++;
							}
						}
						else if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_02", 7, 0, 0, 0))
						{
							iLocal_346++;
						}
					}
				}
			}
			break;
		case 6:
			if (iLocal_327)
			{
				iLocal_346++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(func_1037(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (__LIB_16__::func_855())
					{
						if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_03", 7, 0, 0, 0))
						{
							iLocal_346++;
						}
					}
				}
			}
			break;
		case 7:
			if (iLocal_327)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_PARK", 7, 0, 0, 0))
					{
						iLocal_346++;
					}
				}
			}
			break;
		case 8:
			if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DS2A_COOL", 7, 0, 0, 0))
				{
					iLocal_346++;
				}
			}
			break;
		case 9:
			break;
	}
}

int func_821(int iParam0, struct<3> Param1, float fParam2)//Position - 0x95E7E
{
	if (__LIB_0__::func_323())
	{
		if (__LIB_16__::func_327())
		{
			if (__LIB_14__::func_742(0f, 0f, 0f, 1))
			{
				__LIB_37__::func_872(iParam0, Param1, fParam2, 0, 0, 0, 0, 1, joaat("buffalo2"), 0, 1, 1);
				return 1;
			}
			else
			{
				__LIB_37__::func_872(iParam0, -1161.4044f, -1504.9207f, 3.3707f, 318.8535f, 0, 0, 0, 0, 1, joaat("buffalo2"), 0, 1, 1);
				return 1;
			}
		}
		else if (__LIB_17__::func_478(iParam0, 1, Param1, fParam2, 1, 1))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 0), true);
			return 1;
		}
	}
	else if (__LIB_17__::func_478(iParam0, 1, Param1, fParam2, 1, 1))
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_13__::func_741(1, 0), true);
		return 1;
	}
	return 0;
}

void func_830()//Position - 0x96276
{
	if (__LIB_16__::func_903(func_1037()))
	{
		__LIB_0__::func_222(&uLocal_54, 3, func_1037(), "FRANKLIN", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_1037(), true, 1);
		func_122(func_1037(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_1037(), 32, false);
		if (PLAYER::PLAYER_PED_ID() != func_1037())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1037(), iLocal_288);
		}
	}
	if (__LIB_16__::func_903(func_150()))
	{
		__LIB_0__::func_222(&uLocal_54, 2, func_150(), "TREVOR", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_150(), true, 1);
		func_122(func_150(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_150(), 32, false);
		if (PLAYER::PLAYER_PED_ID() != func_150())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_150(), iLocal_288);
		}
	}
	if (__LIB_16__::func_903(func_1038()))
	{
		func_687(func_1038(), 0, 1);
		__LIB_0__::func_222(&uLocal_54, 1, func_1038(), "MICHAEL", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_1038(), true, 1);
		func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(func_1038(), 32, false);
		if (PLAYER::PLAYER_PED_ID() != func_1038())
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1038(), iLocal_288);
		}
	}
}

void func_846()//Position - 0x96859
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (iLocal_425 == 0)
	{
		return;
	}
	if (__LIB_0__::func_324())
	{
		return;
	}
	if (iLocal_424 == 0 || iLocal_424 == 9)
	{
		__LIB_14__::func_826(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	else
	{
		__LIB_14__::func_826(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_50[iVar0 /*15*/]))
		{
			if (!__LIB_16__::func_903(Local_50[iVar0 /*15*/]))
			{
				if (Local_50[iVar0 /*15*/] == Local_50[0 /*15*/])
				{
					func_301(2);
				}
				if (Local_50[iVar0 /*15*/] == Local_50[1 /*15*/])
				{
					func_301(3);
				}
				if (Local_50[iVar0 /*15*/] == Local_50[2 /*15*/])
				{
					func_301(4);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[iVar0 /*15*/]));
			}
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		if (iLocal_424 < 6)
		{
			func_930(&(Local_51[iVar0 /*44*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
		{
			if (PED::IS_PED_INJURED(Local_51[iVar0 /*44*/]))
			{
				__LIB_13__::func_808(&(Local_51[iVar0 /*44*/].f_1));
				if ((Local_51[iVar0 /*44*/].f_35 || iLocal_352) || iLocal_351)
				{
					if (iLocal_424 == 6)
					{
						if (iVar0 == 12)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), true))
							{
								iLocal_382 = 1;
							}
						}
						if (iVar0 == 13)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar0 /*44*/], PLAYER::PLAYER_PED_ID(), true))
							{
								iLocal_383 = 1;
							}
						}
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_51[iVar0 /*44*/]));
				}
				else if (!Local_51[iVar0 /*44*/].f_36)
				{
					__LIB_0__::func_497(613, 1, 0);
					Local_51[iVar0 /*44*/].f_36 = 1;
				}
				if (Local_51[iVar0 /*44*/].f_43)
				{
					Local_51[iVar0 /*44*/].f_43 = 0;
				}
			}
			if (Local_51[iVar0 /*44*/].f_43)
			{
				bVar1 = true;
			}
		}
		else
		{
			__LIB_13__::func_808(&(Local_51[iVar0 /*44*/].f_1));
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (__LIB_0__::func_1("DCKH_QUICK"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_49[iVar0 /*2*/], false))
			{
				if (Local_49[iVar0 /*2*/] == Local_49[3 /*2*/] && iLocal_424 == 9)
				{
					func_301(11);
				}
				if (Local_49[iVar0 /*2*/] == Local_49[6 /*2*/] && iLocal_424 == 0)
				{
					func_301(17);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (iLocal_424 > 1 && iLocal_424 < 8)
	{
		if ((FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_52[0 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_52[0 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_52[1 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_52[1 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, Local_52[2 /*7*/].f_2 + Vector(2f, 3f, -0.75f), Local_52[2 /*7*/].f_2 + Vector(-2f, 3f, -0.75f), 10f))
		{
			func_301(20);
		}
	}
	if (iLocal_424 > 0 && iLocal_424 < 8)
	{
		if (__LIB_16__::func_903(func_1037()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_1037())
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				if (!ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.1772f, -2494.1208f, 45.5379f, 20f, 20f, 20f, false, true, 0))
				{
					if (!iLocal_333 && !Local_477.f_20)
					{
						__LIB_0__::func_229("dckh_retvant", 7500, 1);
						iLocal_333 = 1;
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_259))
					{
						iLocal_259 = __LIB_0__::func_488(-147.1491f, -2495.439f, 48.9368f, 0);
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(func_1037(), -142.1772f, -2494.1208f, 45.5379f, 40f, 40f, 40f, false, true, 0))
					{
						func_301(6);
					}
				}
				else
				{
					iLocal_333 = 0;
					if (ENTITY::IS_ENTITY_AT_COORD(func_1037(), -147.1491f, -2495.439f, 48.9368f, 2f, 2f, 2f, false, true, 0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_259))
						{
							HUD::REMOVE_BLIP(&iLocal_259);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_259))
			{
				HUD::REMOVE_BLIP(&iLocal_259);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_259))
	{
		HUD::REMOVE_BLIP(&iLocal_259);
	}
	if (((iLocal_424 == 0 && iLocal_425 == 7) && __LIB_16__::func_903(func_150())) && __LIB_16__::func_903(func_1037()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1037(), true), ENTITY::GET_ENTITY_COORDS(func_150(), true), true) > 150f)
		{
			func_301(5);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1037(), true), ENTITY::GET_ENTITY_COORDS(func_150(), true), true) > 100f)
		{
			if (!iLocal_334)
			{
				__LIB_0__::func_229("CMN_FLEAVE" /* GXT: ~s~Return to ~b~Franklin.~s~ */, 7500, 1);
				iLocal_334 = 1;
			}
		}
		else
		{
			iLocal_334 = 0;
		}
	}
	if (iLocal_424 < 7 && iLocal_424 > 0)
	{
		if (__LIB_16__::func_903(func_1038()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(func_1038(), -171.1301f, -2366.4204f, 13.081f, 120f, 60f, 50f, false, true, 0))
				{
					if (!iLocal_335)
					{
						__LIB_0__::func_229("dckh_retship", 7500, 1);
						iLocal_335 = 1;
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(func_1038(), -171.1301f, -2366.4204f, 13.081f, 130f, 70f, 50f, false, true, 0))
					{
						func_301(14);
					}
				}
				else
				{
					iLocal_335 = 0;
				}
				if (iLocal_424 < 6)
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(func_1038(), true) };
					if (Var2.f_2 < 8f)
					{
						func_301(14);
					}
				}
			}
		}
	}
	else if (iLocal_424 == 0)
	{
		if (__LIB_16__::func_903(func_1038()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -163.5593f, -2367.2888f, 8.31906f, true) > 1100f)
				{
					func_301(14);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_1038(), true), -163.5593f, -2367.2888f, 8.31906f, true) > 1000f)
				{
					if (!iLocal_335)
					{
						__LIB_0__::func_229("DCKH_RET", 7500, 1);
						iLocal_335 = 1;
					}
				}
				else
				{
					iLocal_335 = 0;
				}
			}
		}
	}
	if (iLocal_424 == 9)
	{
		if (__LIB_16__::func_903(func_150()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_150())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_150(), true), -163.5593f, -2367.2888f, 8.31906f, true) > 1100f)
				{
					func_301(8);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_150(), true), -163.5593f, -2367.2888f, 8.31906f, true) > 1000f)
				{
					if (!iLocal_336)
					{
						__LIB_0__::func_229("DCKH_RET", 7500, 1);
						iLocal_336 = 1;
					}
				}
				else
				{
					iLocal_336 = 0;
				}
			}
		}
	}
	if (bLocal_292)
	{
		if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			if (iLocal_424 > 1 && iLocal_424 <= 5)
			{
				if (((!Local_52[0 /*7*/].f_6 || !Local_52[1 /*7*/].f_6) || !Local_52[2 /*7*/].f_6) || !Local_52[3 /*7*/].f_6)
				{
					bVar3 = true;
					if (WEAPON::HAS_PED_GOT_WEAPON(func_1038(), iLocal_420, false))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_1038(), iLocal_420) > 0)
						{
							bVar3 = false;
						}
					}
					if (bVar3)
					{
						func_301(16);
					}
				}
			}
		}
	}
	if (bLocal_292)
	{
		if (iLocal_424 < 7)
		{
			if (PLAYER::PLAYER_PED_ID() == func_1037())
			{
				if (!(iLocal_424 == 0 && iLocal_425 < 10) && !iLocal_425 == 0)
				{
					bVar4 = true;
					if (WEAPON::HAS_PED_GOT_WEAPON(func_1037(), joaat("WEAPON_SNIPERRIFLE"), false))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_1037(), joaat("WEAPON_SNIPERRIFLE")) > 0)
						{
							bVar4 = false;
						}
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(func_1037(), joaat("WEAPON_HEAVYSNIPER"), false))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_1037(), joaat("WEAPON_HEAVYSNIPER")) > 0)
						{
							bVar4 = false;
						}
					}
					if (bVar4)
					{
						func_301(15);
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_301(19);
	}
	if (iLocal_424 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
			{
				if (__LIB_16__::func_903(func_1037()))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar0 /*44*/], func_1037(), true))
					{
						func_301(7);
					}
				}
				if (!PED::IS_PED_INJURED(Local_51[iVar0 /*44*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_51[iVar0 /*44*/], 0))
					{
						func_301(7);
					}
				}
			}
			iVar0++;
		}
	}
	if (iLocal_424 == 0 || (iLocal_424 == 1 && iLocal_425 == 1))
	{
		if (iLocal_352)
		{
			if (iLocal_355)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_356)
				{
					func_301(7);
				}
			}
			else if (__LIB_16__::func_855())
			{
				if (__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_NOSHT", 7, 0, 0, 0))
				{
					iLocal_355 = 1;
					iLocal_356 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
		}
		if (!iLocal_352)
		{
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_51[iVar0 /*44*/], 0))
					{
						Local_51[iVar0 /*44*/].f_38 = 1;
						iVar5 = 2500;
					}
					else if (Local_51[iVar0 /*44*/].f_28 == 1)
					{
						Local_51[iVar0 /*44*/].f_38 = 1;
						iVar5 = 2500;
					}
					else if (Local_51[iVar0 /*44*/].f_42)
					{
						Local_51[iVar0 /*44*/].f_38 = 1;
						iVar5 = 2500;
					}
					else if (Local_51[iVar0 /*44*/].f_27 != 0)
					{
						Local_51[iVar0 /*44*/].f_38 = 1;
						iVar5 = 2500;
					}
					else
					{
						Local_51[iVar0 /*44*/].f_38 = 0;
					}
				}
				else
				{
					Local_51[iVar0 /*44*/].f_38 = 0;
				}
				iVar0++;
			}
			bLocal_367 = false;
			iVar0 = 2;
			while (iVar0 <= 17)
			{
				if (Local_51[iVar0 /*44*/].f_38 && __LIB_16__::func_903(Local_51[iVar0 /*44*/]))
				{
					bLocal_367 = true;
				}
				iVar0++;
			}
			if (bLocal_367)
			{
				if (!iLocal_354)
				{
					iLocal_291 = MISC::GET_GAME_TIMER();
					iLocal_354 = 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_291) > iVar5)
				{
					__LIB_0__::func_497(619, 1, 0);
					iLocal_352 = 1;
				}
			}
			else
			{
				iLocal_354 = 0;
			}
		}
	}
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			if (iLocal_424 < 6)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			}
		}
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 23, false);
	}
	if (iLocal_424 >= 1 && iLocal_424 <= 7)
	{
		if (((PLAYER::PLAYER_PED_ID() == func_1037() && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) && !Local_477.f_20) && !bLocal_492)
		{
			bLocal_406 = true;
		}
		else
		{
			bLocal_406 = false;
		}
	}
	else
	{
		if (GRAPHICS::GET_USINGSEETHROUGH())
		{
			GRAPHICS::SET_SEETHROUGH(false);
		}
		iLocal_405 = 0;
		bLocal_406 = false;
	}
	if (bLocal_406)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/))
		{
			if (iLocal_405)
			{
				iLocal_405 = 0;
			}
			else
			{
				iLocal_405 = 1;
			}
		}
	}
	if (iLocal_405 && bLocal_406)
	{
		__LIB_0__::func_646();
		GRAPHICS::SET_SEETHROUGH(true);
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(false);
	}
	if (iLocal_352 || iLocal_351)
	{
		if (AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS"))
		{
			if (!AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
			{
				AUDIO::START_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", false);
			}
		}
		if (iLocal_424 > 1 && iLocal_424 < 6)
		{
			func_928();
		}
	}
	else
	{
		if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
		{
			AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", true);
		}
		if (iLocal_424 > 1 && iLocal_424 < 6)
		{
			func_922();
		}
	}
	if (!iLocal_352 && !iLocal_351)
	{
		if (iLocal_424 > 1 && iLocal_424 < 6)
		{
			if (__LIB_16__::func_903(func_1038()))
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(func_1038(), true) };
				iVar7 = 2;
				while (iVar7 <= 17)
				{
					if (__LIB_16__::func_903(Local_51[iVar7 /*44*/]))
					{
						if (Local_51[iVar7 /*44*/].f_27 == 0)
						{
							if (PLAYER::PLAYER_PED_ID() == func_1037())
							{
								if (Local_51[iVar7 /*44*/].f_28 == 1 || PED::IS_PED_IN_COMBAT(Local_51[iVar7 /*44*/], func_1037()))
								{
									PED::SET_PED_SEEING_RANGE(Local_51[iVar7 /*44*/], 200f);
								}
								else
								{
									if (Var6.f_2 < 12f)
									{
										PED::SET_PED_SEEING_RANGE(Local_51[iVar7 /*44*/], 11f);
										PED::SET_PED_HEARING_RANGE(Local_51[iVar7 /*44*/], 11f);
										PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 2f);
									}
									else
									{
										PED::SET_PED_SEEING_RANGE(Local_51[iVar7 /*44*/], 8f);
										PED::SET_PED_HEARING_RANGE(Local_51[iVar7 /*44*/], 8f);
										PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 2f);
									}
									PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Local_51[iVar7 /*44*/], -75f);
									PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Local_51[iVar7 /*44*/], 60f);
								}
							}
							else
							{
								if (Var6.f_2 < 12f)
								{
									PED::SET_PED_SEEING_RANGE(Local_51[iVar7 /*44*/], 11f);
									PED::SET_PED_HEARING_RANGE(Local_51[iVar7 /*44*/], 11f);
								}
								else
								{
									PED::SET_PED_SEEING_RANGE(Local_51[iVar7 /*44*/], 8f);
									PED::SET_PED_HEARING_RANGE(Local_51[iVar7 /*44*/], 8f);
								}
								if (TASK::IS_PED_STILL(func_1038()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 2f);
								}
								else if (TASK::IS_PED_WALKING(func_1038()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 3f);
								}
								else if (TASK::IS_PED_RUNNING(func_1038()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 4f);
								}
								else if (TASK::IS_PED_SPRINTING(func_1038()))
								{
									PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Local_51[iVar7 /*44*/], 5f);
								}
								PED::SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Local_51[iVar7 /*44*/], -30f);
								PED::SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Local_51[iVar7 /*44*/], 30f);
								if (SYSTEM::VDIST2(Var6, ENTITY::GET_ENTITY_COORDS(Local_51[iVar7 /*44*/], true)) <= 225f)
								{
									PED::SET_PED_RESET_FLAG(Local_51[iVar7 /*44*/], 282, true);
								}
							}
						}
					}
					iVar7++;
				}
			}
		}
		else
		{
			iVar8 = 0;
			while (iVar8 <= 25)
			{
				if (__LIB_16__::func_903(Local_51[iVar8 /*44*/]))
				{
					PED::SET_PED_SEEING_RANGE(Local_51[iVar8 /*44*/], 200f);
					PED::SET_PED_HEARING_RANGE(Local_51[iVar8 /*44*/], 60f);
				}
				iVar8++;
			}
		}
	}
	else
	{
		iVar9 = 0;
		while (iVar9 <= 25)
		{
			if (__LIB_16__::func_903(Local_51[iVar9 /*44*/]))
			{
				PED::SET_PED_SEEING_RANGE(Local_51[iVar9 /*44*/], 200f);
				PED::SET_PED_HEARING_RANGE(Local_51[iVar9 /*44*/], 60f);
			}
			iVar9++;
		}
	}
	if (iLocal_424 < 6)
	{
		if (__LIB_16__::func_903(func_1038()) && PLAYER::PLAYER_PED_ID() != func_1038())
		{
			if (iLocal_352 || iLocal_351)
			{
				PED::SET_PED_USING_ACTION_MODE(func_1038(), true, -1, 0);
			}
			else
			{
				PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
			}
		}
	}
	iVar10 = 0;
	while (iVar10 <= 25)
	{
		if (__LIB_16__::func_903(Local_51[iVar10 /*44*/]))
		{
			if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				TASK::TASK_WANDER_STANDARD(Local_51[iVar0 /*44*/], 40000f, 0);
			}
			if (PED::IS_PED_IN_COMBAT(Local_51[iVar10 /*44*/], 0) && PLAYER::PLAYER_PED_ID() == func_1038())
			{
			}
		}
		iVar10++;
	}
	func_854();
	if (iLocal_424 > 8)
	{
		func_852();
	}
	if (__LIB_16__::func_903(func_1038()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(func_1038()))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), joaat("WEAPON_UNARMED"), true);
		}
	}
	func_851();
	if (iLocal_424 <= 6)
	{
		if (PLAYER::PLAYER_PED_ID() == func_1037())
		{
			if (iLocal_398)
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (iLocal_424 <= 1)
					{
						if (__LIB_16__::func_903(Local_51[0 /*44*/]))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(Local_51[0 /*44*/]));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(Local_51[0 /*44*/]), 1f);
							CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(10f);
							iLocal_398 = 0;
						}
					}
					else if (__LIB_16__::func_903(func_1038()))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(func_1038()));
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(func_1038()), 1f);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(10f);
						iLocal_398 = 0;
					}
				}
			}
		}
	}
	if (__LIB_16__::func_903(func_1037()))
	{
		iVar11 = 0;
		while (iVar11 <= 25)
		{
			if (__LIB_16__::func_903(Local_51[iVar11 /*44*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar11 /*44*/], func_1037(), true))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_51[iVar11 /*44*/], 50, 0);
				}
			}
			iVar11++;
		}
	}
	if ((iLocal_424 < 6 && !iLocal_352) && !iLocal_351)
	{
		func_849();
	}
	if (((iLocal_424 > 1 && iLocal_424 < 7) && __LIB_16__::func_903(func_1037())) && __LIB_16__::func_903(func_1038()))
	{
		if (PLAYER::PLAYER_PED_ID() == func_1037())
		{
			if (!HUD::DOES_BLIP_EXIST(Local_50[1 /*15*/].f_1))
			{
				Local_50[1 /*15*/].f_1 = __LIB_0__::func_666(func_1038(), 0, 145);
				HUD::SET_BLIP_PRIORITY(Local_50[1 /*15*/].f_1, 9);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_50[1 /*15*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_50[1 /*15*/].f_1));
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_50[1 /*15*/].f_1))
	{
		HUD::REMOVE_BLIP(&(Local_50[1 /*15*/].f_1));
	}
	if ((iLocal_424 > 1 && iLocal_424 < 6) && PLAYER::PLAYER_PED_ID() == func_1038())
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1037()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_1037(), true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(func_1037()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_1037(), false);
	}
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 608);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 614);
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
		}
		else
		{
			__LIB_0__::func_377(0, 614);
			__LIB_0__::func_505(0, -1);
		}
	}
}

void func_849()//Position - 0x979D8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return;
	}
	iVar1 = 2;
	while (iVar1 <= 17)
	{
		if ((__LIB_16__::func_903(Local_51[iVar1 /*44*/]) && __LIB_16__::func_903(func_1038())) && __LIB_16__::func_903(func_1037()))
		{
			if (Local_51[iVar1 /*44*/].f_40)
			{
				return;
			}
			if (!PED::IS_PED_IN_COMBAT(Local_51[iVar1 /*44*/], 0))
			{
				if (iVar0 == 5)
				{
					iVar0 = 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[iVar1 /*44*/], func_1038(), true))
				{
					iVar0 = 5;
				}
				if (iVar0 == 3)
				{
					iVar0 = 0;
				}
				if (PED::CAN_PED_SEE_HATED_PED(Local_51[iVar1 /*44*/], func_1038()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_51[iVar1 /*44*/]))
				{
					iVar0 = 3;
				}
				if (iVar0 == 2)
				{
					iVar0 = 0;
				}
				if (iLocal_424 > 1)
				{
					if (iVar0 == 0)
					{
						if (PED::HAS_PED_RECEIVED_EVENT(Local_51[iVar1 /*44*/], 124) || PED::HAS_PED_RECEIVED_EVENT(Local_51[iVar1 /*44*/], 91))
						{
							iVar0 = 2;
						}
						if (!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(func_1038()))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(func_1038(), &iVar3, true))
							{
								if (PED::IS_PED_SHOOTING(func_1038()))
								{
									if (iVar3 != joaat("WEAPON_STICKYBOMB"))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true), ENTITY::GET_ENTITY_COORDS(func_1038(), true)) < 2025f)
										{
											iVar0 = 2;
										}
									}
								}
							}
						}
					}
				}
				if (iVar0 == 1)
				{
					iVar0 = 0;
				}
				if (iVar0 == 0 || iVar0 == 2)
				{
					if (PLAYER::PLAYER_PED_ID() == func_1037())
					{
						if (MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[iVar1 /*44*/], -5f, -5f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[iVar1 /*44*/], 5f, 5f, 1f)))
						{
							iVar0 = 1;
							if (iLocal_341)
							{
								if (__LIB_16__::func_855())
								{
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", "DH2A_MISS", 7, 0, 0, 0);
								}
							}
						}
					}
					else if (PLAYER::PLAYER_PED_ID() == func_1038())
					{
						if (iLocal_400)
						{
							iVar0 = 0;
						}
						else if (PED::HAS_PED_RECEIVED_EVENT(Local_51[iVar1 /*44*/], 125))
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 4)
				{
					iVar0 = 0;
				}
				if (Local_51[iVar1 /*44*/].f_27 == 0)
				{
					if (iVar0 == 0)
					{
						if (PED::HAS_PED_RECEIVED_EVENT(Local_51[iVar1 /*44*/], 5))
						{
							iVar0 = 4;
						}
						if (iLocal_424 < 2)
						{
							iVar6 = 2;
						}
						else
						{
							iVar6 = 0;
						}
						iVar5 = iVar6;
						while (iVar5 <= 17)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar5 /*44*/]) && !iVar5 == 15)
							{
								if (PED::IS_PED_INJURED(Local_51[iVar5 /*44*/]))
								{
									Var4 = { ENTITY::GET_ENTITY_COORDS(Local_51[iVar5 /*44*/], false) };
									if ((Var4.f_2 < 10.5f && Var4.f_2 > 8.3f) || func_745(Local_51[iVar1 /*44*/], Local_2101[8 /*7*/]))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true), Var4, true) < 15f)
										{
											if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_51[iVar1 /*44*/], Local_51[iVar5 /*44*/]))
											{
												iVar0 = 4;
												Local_51[iVar1 /*44*/].f_42 = 1;
												iVar2 = iVar5;
											}
										}
									}
								}
								else if (PED::IS_PED_SHOOTING(Local_51[iVar5 /*44*/]))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_51[iVar5 /*44*/], true), ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true)) < 900f)
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(Local_51[iVar1 /*44*/]))
										{
											iVar0 = 2;
										}
									}
								}
							}
							iVar5++;
						}
					}
				}
				if (iVar0 != 0)
				{
					if (Local_51[iVar1 /*44*/].f_27 != iVar0)
					{
						iLocal_371 = -1;
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
						switch (iVar0)
						{
							case 5:
								PED::SET_PED_SEEING_RANGE(Local_51[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_51[iVar1 /*44*/], 16f);
								TASK::TASK_COMBAT_PED(0, func_1038(), 0, 16);
								break;
							case 3:
								iLocal_371 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
								PED::SET_PED_SEEING_RANGE(Local_51[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_51[iVar1 /*44*/], 16f);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1038(), 1500, false);
								TASK::TASK_COMBAT_PED(0, func_1038(), 0, 16);
								if (!Local_51[iVar1 /*44*/].f_43)
								{
									if (!__LIB_0__::func_1("DCKH_QUICK"))
									{
										__LIB_0__::func_151("DCKH_QUICK", -1);
									}
									Local_51[iVar1 /*44*/].f_43 = 1;
								}
								break;
							case 2:
								PED::SET_PED_SEEING_RANGE(Local_51[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_51[iVar1 /*44*/], 16f);
								iLocal_371 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000);
								TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1038(), 1000, false);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1038(), true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), 2f, false, 1f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								if (!Local_51[iVar1 /*44*/].f_43)
								{
									if (!__LIB_0__::func_1("DCKH_QUICK"))
									{
										__LIB_0__::func_151("DCKH_QUICK", -1);
									}
									Local_51[iVar1 /*44*/].f_43 = 1;
								}
								break;
							case 4:
								PED::SET_PED_SEEING_RANGE(Local_51[iVar1 /*44*/], 16f);
								PED::SET_PED_HEARING_RANGE(Local_51[iVar1 /*44*/], 16f);
								PED::SET_PED_ALERTNESS(Local_51[iVar1 /*44*/], 2);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar2 /*44*/], false), ENTITY::GET_ENTITY_COORDS(Local_51[iVar2 /*44*/], false), 2f, false, 3f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) + Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_51[iVar1 /*44*/], true) - Vector(0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10))), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), false, false);
								iLocal_371 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000);
								if (!Local_51[iVar1 /*44*/].f_43)
								{
									if (!__LIB_0__::func_1("DCKH_QUICK"))
									{
										__LIB_0__::func_151("DCKH_QUICK", -1);
									}
									Local_51[iVar1 /*44*/].f_43 = 1;
								}
								break;
							case 1:
								if (PLAYER::PLAYER_PED_ID() == func_1038())
								{
									PED::SET_PED_SEEING_RANGE(Local_51[iVar1 /*44*/], 16f);
									PED::SET_PED_HEARING_RANGE(Local_51[iVar1 /*44*/], 16f);
									iLocal_371 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, func_1038(), 1000, false);
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(func_1038(), true), ENTITY::GET_ENTITY_COORDS(func_1038(), true), 1f, false, 1f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
									if (!Local_51[iVar1 /*44*/].f_43)
									{
										if (!__LIB_0__::func_1("DCKH_QUICK"))
										{
											__LIB_0__::func_151("DCKH_QUICK", -1);
										}
										Local_51[iVar1 /*44*/].f_43 = 1;
									}
								}
								else
								{
									switch (Local_51[iVar1 /*44*/].f_28)
									{
										case 1:
											func_850(iVar1);
											if (!Local_51[iVar1 /*44*/].f_43)
											{
												if (!__LIB_0__::func_1("DCKH_QUICK"))
												{
													__LIB_0__::func_151("DCKH_QUICK", -1);
												}
												Local_51[iVar1 /*44*/].f_43 = 1;
											}
											break;
										case 0:
											Local_51[iVar1 /*44*/].f_28 = 1;
											func_850(iVar1);
											iLocal_371 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
											if (!HUD::DOES_BLIP_EXIST(Local_51[iVar1 /*44*/].f_1))
											{
												Local_51[iVar1 /*44*/].f_1 = __LIB_0__::func_666(Local_51[iVar1 /*44*/], 1, 145);
											}
											if (!Local_51[iVar1 /*44*/].f_43)
											{
												if (!__LIB_0__::func_1("DCKH_QUICK"))
												{
													__LIB_0__::func_151("DCKH_QUICK", -1);
												}
												Local_51[iVar1 /*44*/].f_43 = 1;
											}
											break;
										}
								}
								break;
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
						if (__LIB_16__::func_903(Local_51[iVar1 /*44*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_51[iVar1 /*44*/]);
							TASK::TASK_PERFORM_SEQUENCE(Local_51[iVar1 /*44*/], iLocal_261);
						}
						Local_51[iVar1 /*44*/].f_27 = iVar0;
						if (iLocal_371 >= 0)
						{
							Local_51[iVar1 /*44*/].f_29 = (MISC::GET_GAME_TIMER() + iLocal_371);
						}
						else
						{
							Local_51[iVar1 /*44*/].f_29 = -1;
						}
					}
				}
				else if (Local_51[iVar1 /*44*/].f_29 >= 0)
				{
					if (MISC::GET_GAME_TIMER() >= Local_51[iVar1 /*44*/].f_29)
					{
						if (Local_51[iVar1 /*44*/].f_28 != 1)
						{
							if (!PED::IS_PED_INJURED(Local_51[iVar1 /*44*/]))
							{
								func_735(iVar1);
							}
						}
						Local_51[iVar1 /*44*/].f_27 = 0;
						Local_51[iVar1 /*44*/].f_29 = -1;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_850(int iParam0)//Position - 0x9827D
{
	switch ((iParam0 % 2))
	{
		case 0:
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "enter_crouch_a", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@crouch", "crouching_idle_a", 8f, -2f, -1, 0, 0f, false, false, false);
			break;
		case 1:
			TASK::TASK_PLAY_ANIM(0, "missheistdocks2a@alert", sLocal_370, 8f, -8f, -1, 0, 0f, false, false, false);
			break;
	}
	TASK::TASK_COMBAT_PED(0, func_1037(), 0, 16);
}

void func_851()//Position - 0x98307
{
	float fVar0;
	fVar0 = 0.1f;
	if (!iLocal_399)
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_SNIPING", false, -1))
		{
			iLocal_399 = 1;
		}
	}
	switch (iLocal_402)
	{
		case 0:
			if (iLocal_400)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_ZIP", ENTITY::GET_ENTITY_COORDS(func_1037(), true) * Vector(fVar0, fVar0, fVar0) + Local_404 * FtoV((1f - fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0, false);
				if (__LIB_16__::func_903(iLocal_403))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_403, iLocal_419, 0))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPLAT", Local_404, "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0, false);
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPRAY", ENTITY::GET_ENTITY_COORDS(func_1037(), true) * FtoV((-1f * fVar0)) + Local_404 * FtoV((1f + fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0, false);
					}
				}
				else
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPLAT", Local_404, "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0, false);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "SNIPER_SHOT_SPRAY", ENTITY::GET_ENTITY_COORDS(func_1037(), true) * FtoV((-1f * fVar0)) + Local_404 * FtoV((1f + fVar0)), "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0, false);
				}
				iLocal_402++;
			}
			break;
		case 1:
			if (!iLocal_400)
			{
				iLocal_402 = 0;
			}
			break;
	}
}

void func_852()//Position - 0x98430
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
				AUDIO::SET_VARIABLE_ON_SOUND(iLocal_415, "bombdistance", fVar2);
				if (!iLocal_412)
				{
					if (PLAYER::PLAYER_PED_ID() == func_1038() && !Local_477.f_20)
					{
						if (iLocal_286)
						{
							func_853();
						}
					}
				}
			}
			if (PED::IS_PED_SWIMMING(func_1038()))
			{
				HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
			}
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_409))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_409, "rebreather", func_1038(), "docks_heist_finale_2a_sounds", false, 0);
			}
		}
		if (Var1.f_2 < 0f && Var0.f_2 < 0f)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_408))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_408, "uw_ambience", 0, true);
			}
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (!iLocal_412)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_409))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_409, "rebreather", func_1038(), "docks_heist_finale_2a_sounds", false, 0);
					}
					fVar3 = ENTITY::GET_ENTITY_SPEED(func_1038());
					if (fVar3 > 1f)
					{
						if (AUDIO::HAS_SOUND_FINISHED(iLocal_411))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_411, "foot_swish", func_1038(), "docks_heist_finale_2a_sounds", false, 0);
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_411, "swimspeed", ((fVar3 - 1f) / 4f));
						}
						else
						{
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_411, "swimspeed", ((fVar3 - 1f) / 4f));
						}
					}
					else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_411))
					{
						AUDIO::STOP_SOUND(iLocal_411);
					}
				}
			}
			else if (PLAYER::PLAYER_PED_ID() == func_150() || Local_477.f_20)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_415))
				{
					AUDIO::STOP_SOUND(iLocal_415);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_409))
				{
					AUDIO::STOP_SOUND(iLocal_409);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_411))
				{
					AUDIO::STOP_SOUND(iLocal_411);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_410))
				{
					AUDIO::STOP_SOUND(iLocal_410);
				}
			}
		}
		else
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_415))
			{
				AUDIO::STOP_SOUND(iLocal_415);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dock_heist_underwater_scene"))
			{
				AUDIO::STOP_AUDIO_SCENE("dock_heist_underwater_scene");
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_408))
			{
				AUDIO::STOP_SOUND(iLocal_408);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_409))
			{
				AUDIO::STOP_SOUND(iLocal_409);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_411))
			{
				AUDIO::STOP_SOUND(iLocal_411);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_410))
			{
				AUDIO::STOP_SOUND(iLocal_410);
			}
		}
	}
}

void func_853()//Position - 0x9868A
{
	struct<3> Var0;
	float fVar1;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), Var0, false);
	}
	if (iLocal_285)
	{
		func_469();
		fLocal_282 = 0f;
		fLocal_283 = fVar1;
		fLocal_283 = __LIB_0__::func_331(fLocal_283, 10f, 200f);
		fLocal_284 = (fLocal_283 * 0.025f);
		iLocal_285 = 0;
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_415, "sonar_pulse", ENTITY::GET_ENTITY_COORDS(iLocal_269, true), "docks_heist_finale_2a_sounds", false, 0, false);
	}
	else
	{
		func_469();
		fLocal_282 = (fLocal_282 + ((fLocal_284 * 30f) * SYSTEM::TIMESTEP()));
		fLocal_282 = __LIB_0__::func_331(fLocal_282, 0f, fLocal_283);
		iLocal_281 = HUD::ADD_BLIP_FOR_RADIUS(ENTITY::GET_ENTITY_COORDS(iLocal_269, true), fLocal_282);
		HUD::SET_BLIP_ALPHA(iLocal_281, 255);
		HUD::SET_BLIP_COLOUR(iLocal_281, 4);
		HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_281, true);
		HUD::SET_RADIUS_BLIP_EDGE(iLocal_281, true);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_281, false);
		if (fLocal_282 >= fLocal_283)
		{
			iLocal_285 = 1;
		}
	}
}

void func_854()//Position - 0x98781
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_491)
	{
		if (PLAYER::PLAYER_PED_ID() == func_1038())
		{
			__LIB_16__::func_882(&iLocal_433, 1, 0, 2);
		}
		else if (PLAYER::PLAYER_PED_ID() == func_1037())
		{
			__LIB_16__::func_882(&iLocal_433, 0, 1, 2);
		}
		if (iLocal_493 == 0)
		{
			if (!Local_477.f_20)
			{
				if (func_903())
				{
					__LIB_0__::func_497(612, 1, 0);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					if (iLocal_424 > 0 && iLocal_424 < 6)
					{
						if (iLocal_433.f_7 == 1)
						{
							if (__LIB_16__::func_903(func_1037()))
							{
								STREAMING::SET_FOCUS_ENTITY(func_1037());
								TASK::CLEAR_PED_TASKS(func_1037());
							}
						}
					}
					if (iLocal_424 >= 2 && iLocal_424 <= 4)
					{
						if (iLocal_433.f_7 == 0)
						{
							iVar1 = 2;
							while (iVar1 <= 17)
							{
								if (HUD::DOES_BLIP_EXIST(Local_51[iVar1 /*44*/].f_1))
								{
									HUD::REMOVE_BLIP(&(Local_51[iVar1 /*44*/].f_1));
								}
								iVar1++;
							}
							if (!iLocal_352)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SNIPING_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SNIPING_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
							}
							else
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SNIPING_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
							}
						}
						else if (iLocal_433.f_7 == 1)
						{
							if (!iLocal_352)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_PLANT_BOMBS_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_SCENE");
							}
							else
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH2A_SHOOTOUT_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("DH2A_SHOOTOUT_SCENE");
								}
								AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
							}
						}
					}
					Local_477.f_20 = 1;
				}
			}
		}
		iVar0 = func_858(2);
		if (iVar0 == 2)
		{
			if (Local_477.f_18)
			{
				if (!Local_477.f_19)
				{
					if (__LIB_31__::func_990(&iLocal_433, 1, 1, 0))
					{
						Local_477.f_19 = 1;
						if (__LIB_16__::func_903(Local_50[0 /*15*/]))
						{
							if (iLocal_433[1] == 0)
							{
								Local_50[0 /*15*/] = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								Local_50[0 /*15*/] = iLocal_433[1];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_50[0 /*15*/], true, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1037(), iLocal_288);
							}
						}
						if (__LIB_16__::func_903(Local_50[2 /*15*/]))
						{
							if (iLocal_433[2] == 0)
							{
								Local_50[2 /*15*/] = PLAYER::PLAYER_PED_ID();
							}
							else
							{
								Local_50[2 /*15*/] = iLocal_433[2];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[2 /*15*/], true);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_50[2 /*15*/], true, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_150(), iLocal_288);
							}
						}
						if (__LIB_16__::func_903(Local_50[1 /*15*/]))
						{
							if (iLocal_433[0] == 0)
							{
								Local_50[1 /*15*/] = PLAYER::PLAYER_PED_ID();
								if (iLocal_424 == 1)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("DH2A_1ST_SWITCH");
								}
								if (iLocal_424 == 0)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("DH2A_RIB");
								}
							}
							else
							{
								Local_50[1 /*15*/] = iLocal_433[0];
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[1 /*15*/], true);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_50[1 /*15*/], true, 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(func_1038(), iLocal_288);
							}
						}
					}
				}
				else if (Local_477.f_12 == func_1037() && iLocal_424 >= 1)
				{
					if (ENTITY::GET_ENTITY_HEALTH(func_1038()) < 200)
					{
						ENTITY::SET_ENTITY_HEALTH(func_1038(), 200, 0);
					}
				}
				else if (Local_477.f_12 == func_1038())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
					if (!iLocal_407)
					{
						iLocal_407 = 1;
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			if (iLocal_424 == 1 && iLocal_433.f_7 == 0)
			{
				__LIB_16__::func_861(90f);
			}
			if (__LIB_16__::func_903(Local_49[3 /*2*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], false);
			}
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (iLocal_424 == 0)
			{
				if (iLocal_425 < 14)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_1038(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_49[3 /*2*/], 20f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_49[3 /*2*/], true, true, false);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_1038(), Local_49[6 /*2*/], -457.7198f, -2333.4165f, 0.70821f, 15f, 0, joaat("dinghy"), 262144, 5f, -1f);
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_301) > 4000 && !iLocal_299)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("DH2A_RIB");
						iLocal_299 = 1;
					}
				}
			}
			else if (__LIB_16__::func_903(func_1037()) && __LIB_16__::func_903(func_1038()))
			{
				if (iLocal_424 == 5 && iLocal_425 > 2)
				{
					TASK::CLEAR_PED_TASKS(func_1037());
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(func_1037(), joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, true);
				}
			}
		}
		if (iVar0 == 1 && !Local_477.f_20)
		{
			if (PLAYER::PLAYER_PED_ID() == func_1038())
			{
				if (iLocal_424 < 7 && iLocal_424 > 1)
				{
					ENTITY::SET_ENTITY_COORDS(func_1037(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
					if (!iLocal_352)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(func_1038(), iLocal_421, false))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(func_1038(), &iVar2, true))
							{
								if (iVar2 != iLocal_421)
								{
									WEAPON::SET_CURRENT_PED_WEAPON(func_1038(), iLocal_421, true);
								}
							}
						}
					}
				}
			}
			else
			{
				if (PLAYER::PLAYER_PED_ID() == func_1037())
				{
					if (__LIB_16__::func_903(func_1038()))
					{
						if (iLocal_424 >= 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(func_1038()));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(func_1038()), 1f);
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(Local_51[0 /*44*/]));
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(Local_51[0 /*44*/]), 1f);
						}
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(7f);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
						PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
						HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
						iLocal_398 = 1;
					}
				}
				if (PLAYER::PLAYER_PED_ID() == func_150())
				{
					if (__LIB_16__::func_903(Local_49[3 /*2*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_49[3 /*2*/], false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_49[3 /*2*/], 20f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_49[3 /*2*/], true, true, false);
					}
				}
				iLocal_302 = 0;
				iLocal_303 = 0;
			}
			if (iLocal_493)
			{
				iLocal_493 = 0;
			}
			if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			MISC::SET_TIME_SCALE(1f);
			STREAMING::CLEAR_FOCUS();
			__LIB_17__::func_88(&Local_477);
		}
	}
}

int func_858(int iParam0)//Position - 0x98E4D
{
	if (!Local_477.f_20)
	{
		return 0;
	}
	else if (iLocal_424 == 5 && iLocal_425 > 2)
	{
		if (func_897(&Local_477, 0f, 0f, iParam0, iLocal_494, iLocal_495, 800))
		{
			return 2;
		}
		else
		{
			Local_477.f_20 = 0;
			return 1;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_477.f_10))
	{
		if (__LIB_39__::func_115(&Local_477, Local_477.f_10, 0, 0, 1148829696, 1148829696, 0, 0, 0, 2))
		{
			return 2;
		}
		else
		{
			Local_477.f_20 = 0;
			return 1;
		}
	}
	else
	{
		if (iLocal_424 == 9)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_260))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::IS_CAM_RENDERING(iLocal_260))
				{
					CAM::SET_CAM_ACTIVE(iLocal_260, false);
				}
				CAM::DESTROY_CAM(iLocal_260, false);
			}
		}
		if (iLocal_424 > 1 && iLocal_424 < 6)
		{
			if (__LIB_17__::func_97(&Local_477, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				return 2;
			}
			else
			{
				Local_477.f_20 = 0;
				return 1;
			}
		}
		else if (__LIB_17__::func_97(&Local_477, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
		{
			return 2;
		}
		else
		{
			Local_477.f_20 = 0;
			return 1;
		}
	}
	return 0;
}

int func_897(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9A1D7
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	float fVar15;
	float fVar16;
	bool bVar17;
	float fVar18;
	int iVar19;
	struct<3> Var20;
	struct<3> Var21;
	if (!uParam0->f_15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			uParam0->f_27 = 0;
			Var13 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_12, true) };
			Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var14, Var13, false);
			fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var14, Var13, true);
			if (iParam3 == 0)
			{
				if (fVar16 < 8f)
				{
					uParam0->f_14 = 1;
				}
				else if (fVar15 < 30f)
				{
					uParam0->f_14 = 2;
				}
				else
				{
					uParam0->f_14 = 3;
				}
			}
			else
			{
				uParam0->f_14 = iParam3;
			}
			if (!CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			}
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], false);
				}
				iVar1++;
			}
			switch (uParam0->f_14)
			{
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, false))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var11, true);
					}
					else
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var11, true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, __LIB_17__::func_429(uParam0->f_12), true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, __LIB_17__::func_429(uParam0->f_12), true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iParam6, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iParam6);
					uParam0->f_15 = 1;
					break;
				case 2:
					if (Var14.f_2 > Var13.f_2)
					{
						fVar4 = __LIB_3__::func_480((Var14.f_2 + 5f), (Var13.f_2 + fVar15));
					}
					else
					{
						fVar4 = __LIB_3__::func_480((Var13.f_2 + 5f), (Var14.f_2 + fVar15));
					}
					fVar3 = 10f;
					Var12 = { Var13 - Var14 };
					Var12.f_2 = 0f;
					Var12 = { __LIB_0__::func_952(Var12, __LIB_1__::func_712((fVar4 * MISC::TAN(fVar3)), (fVar15 / 3f))) };
					iVar2 = SYSTEM::ROUND(((fVar16 / ((30f - 7.5f) / (800f - 200f))) + 500f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, false))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var11, true);
					}
					else
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var11, true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var11 + Vector(15f, 0f, 0f), true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var12, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var12, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var12, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var12, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, __LIB_17__::func_429(uParam0->f_12), true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, __LIB_17__::func_429(uParam0->f_12), true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
				case 3:
					fVar4 = 450f;
					if (Var14.f_2 > Var13.f_2)
					{
						fVar4 = __LIB_3__::func_480(fVar4, (Var14.f_2 + 25f));
					}
					else
					{
						fVar4 = __LIB_3__::func_480(fVar4, (Var13.f_2 + 25f));
					}
					fVar3 = 20f;
					Var12 = { Var13 - Var14 };
					Var12.f_2 = 0f;
					Var12 = { __LIB_0__::func_952(Var12, __LIB_1__::func_712((fVar4 * MISC::TAN(fVar3)), (fVar15 / 3f))) };
					fVar16 = __LIB_0__::func_331(fVar16, 50f, 4000f);
					iVar2 = SYSTEM::ROUND(((fVar16 / ((4000f - 50f) / (2000f - 1000f))) + 1000f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, false))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var11, true);
					}
					else
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var11, true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var11 + Vector(15f, 0f, 0f), true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var12, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var12, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var12, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var12, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, false);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, false);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, __LIB_17__::func_429(uParam0->f_12), true);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, __LIB_17__::func_429(uParam0->f_12), true);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
			}
			else if (PED::IS_PED_INJURED(uParam0->f_12))
			{
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, true);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, true);
				uParam0->f_21 = __LIB_1__::func_861();
				__LIB_0__::func_671(1);
				if (uParam0->f_24 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (uParam0->f_24 - 1))
					{
						CAM::SET_CAM_ACTIVE((*uParam0)[iVar1], true);
						iVar1++;
					}
				}
				__LIB_16__::func_876(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, true);
				if (iParam5 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				else if (iParam5 > 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, true, iParam5, true, false, 0);
				}
				if (!Global_23011.f_111)
				{
					if (uParam0->f_14 == 3)
					{
						AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, false, 0, true);
						if (Global_23011.f_109 == -1)
						{
							Global_23011.f_109 = AUDIO::GET_SOUND_ID();
							Global_23011.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_23011.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, false, 0, true);
						AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
						{
						}
					}
					else if (uParam0->f_14 == 2)
					{
						if (Global_23011.f_109 == -1)
						{
							Global_23011.f_109 = AUDIO::GET_SOUND_ID();
							Global_23011.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_23011.f_109, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", false, 0, true);
					}
				}
				uParam0->f_28 = __LIB_16__::func_862(uParam0->f_9);
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				__LIB_7__::func_703(1);
				if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_12__::func_894(0))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(0));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_12__::func_894(2))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(2));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == __LIB_12__::func_894(1))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(__LIB_16__::func_12(1));
				}
				else
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
				}
				GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9));
			bVar17 = true;
			if (uParam0->f_24 > 0)
			{
				iVar1 = 0;
				while (iVar1 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
					{
						bVar17 = false;
					}
					iVar1++;
				}
			}
			if (bVar17)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (!Global_23011.f_111)
					{
						if (uParam0->f_14 == 3)
						{
							fVar18 = __LIB_16__::func_862(uParam0->f_9);
							if (fVar18 > uParam0->f_28)
							{
								uParam0->f_28 = fVar18;
							}
							else if (uParam0->f_28 > (fVar18 + 1f))
							{
								if (Global_23011.f_107 == -1)
								{
									Global_23011.f_107 = AUDIO::GET_SOUND_ID();
									Global_23011.f_108 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
									AUDIO::PLAY_SOUND(Global_23011.f_107, "CHARACTER_CHANGE_DOWN_MASTER", 0, false, 0, true);
								}
								if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
								{
									AUDIO::STOP_SOUND(Global_23011.f_109);
									AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
									Global_23011.f_109 = -1;
									Global_23011.f_110 = 0;
									AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
								}
							}
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
					if (uParam0->f_18)
					{
						if (PLAYER::PLAYER_PED_ID() == uParam0->f_12)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_12))
							{
								if (uParam0->f_24 >= 1)
								{
									if (CAM::DOES_CAM_EXIST((*uParam0)[(uParam0->f_24 - 1)]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, false))
										{
											iVar19 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
											Var20 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar19, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], iVar19, Var20, true);
										}
										else
										{
											Var21 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_12, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], uParam0->f_12, Var21, true);
										}
										CAM::SET_CAM_ROT((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
										CAM::SET_CAM_FOV((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_FOV());
										bVar0 = true;
									}
								}
							}
						}
					}
				}
				else if (!uParam0->f_18)
				{
					uParam0->f_18 = 1;
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			CAM::DESTROY_CAM(uParam0->f_9, false);
		}
		if (uParam0->f_24 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], false);
				}
				iVar1++;
			}
		}
		__LIB_0__::func_671(uParam0->f_21);
		uParam0->f_15 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_23011.f_109 != -1 && Global_23011.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_109);
			Global_23011.f_109 = -1;
			Global_23011.f_110 = 0;
		}
		if (Global_23011.f_107 != -1 && Global_23011.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_23011.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_23011.f_107);
			Global_23011.f_107 = -1;
			Global_23011.f_108 = 0;
		}
		if (fParam2 <= 360f && fParam2 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
		}
		if (fParam1 <= 360f && fParam1 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
		}
		if (!Global_44203)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
			CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
		}
		if (iParam4 == -1)
		{
			if (bVar0)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 100, true, false, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
			}
		}
		else if (iParam4 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam4, true, false, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
			}
		}
		__LIB_0__::func_986(0);
		if (!PED::IS_PED_INJURED(uParam0->f_13))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, false);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_12))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, false);
		}
		GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(__LIB_16__::func_12(__LIB_14__::func_466()));
		__LIB_7__::func_703(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

int func_903()//Position - 0x9B743
{
	if (__LIB_37__::func_935(&iLocal_433, 0, 1))
	{
		if (!__LIB_17__::func_82(&iLocal_433, 3))
		{
			Local_477.f_12 = iLocal_433[iLocal_433.f_7];
			return 1;
		}
	}
	return 0;
}

void func_922()//Position - 0x9CD4E
{
	int iVar0;
	bool bVar1;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
		{
			if (MISC::GET_GAME_TIMER() > Local_51[iVar0 /*44*/].f_34 && Local_51[iVar0 /*44*/].f_27 == 0)
			{
				__LIB_0__::func_222(&uLocal_54, (iVar0 % 4) + 4, Local_51[iVar0 /*44*/], func_927(iVar0), 0, 1);
				__LIB_16__::func_7(&uLocal_54, "D2AAUD", func_926(iVar0), 6, 1, 0, 0);
				Local_51[iVar0 /*44*/].f_34 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000));
			}
			else if (Local_51[iVar0 /*44*/].f_27 != 0)
			{
				bVar1 = true;
				if (__LIB_16__::func_855() && !iLocal_311)
				{
					if (!Local_51[iVar0 /*44*/].f_41)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_51[iVar0 /*44*/]))
						{
							__LIB_0__::func_222(&uLocal_54, (iVar0 % 4) + 4, Local_51[iVar0 /*44*/], func_927(iVar0), 0, 1);
							Local_51[iVar0 /*44*/].f_41 = 1;
							switch (Local_51[iVar0 /*44*/].f_27)
							{
								case 3:
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", func_925(iVar0), 7, 0, 0, 0);
									iLocal_311 = 1;
									break;
								case 2:
								case 1:
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", func_924(iVar0), 7, 0, 0, 0);
									iLocal_311 = 1;
									break;
								case 4:
									__LIB_16__::func_7(&uLocal_54, "D2AAUD", func_923(iVar0), 7, 0, 0, 0);
									iLocal_311 = 1;
									break;
								}
							}
						}
					}
				}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (iLocal_311)
		{
			iLocal_311 = 0;
		}
	}
}

char* func_923(int iParam0)//Position - 0x9CECC
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWFIND1";
			break;
		case 1:
			sVar0 = "DH2A_MWFIND2";
			break;
		case 2:
			sVar0 = "DH2A_MWFIND3";
			break;
		case 3:
			sVar0 = "DH2A_MWFIND4";
			break;
	}
	return sVar0;
}

char* func_924(int iParam0)//Position - 0x9CF1F
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWHEAR1";
			break;
		case 1:
			sVar0 = "DH2A_MWHEAR2";
			break;
		case 2:
			sVar0 = "DH2A_MWHEAR3";
			break;
		case 3:
			sVar0 = "DH2A_MWHEAR4";
			break;
	}
	return sVar0;
}

char* func_925(int iParam0)//Position - 0x9CF72
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MWSEE1";
			break;
		case 1:
			sVar0 = "DH2A_MWSEE2";
			break;
		case 2:
			sVar0 = "DH2A_MWSEE3";
			break;
		case 3:
			sVar0 = "DH2A_MWSEE4";
			break;
	}
	return sVar0;
}

char* func_926(int iParam0)//Position - 0x9CFC5
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MERC3";
			break;
		case 1:
			sVar0 = "DH2A_MERC2";
			break;
		case 2:
			sVar0 = "DH2A_MWPAT3";
			break;
		case 3:
			sVar0 = "DH2A_MERC4";
			break;
	}
	return sVar0;
}

char* func_927(int iParam0)//Position - 0x9D018
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "MERRYWEATHER1";
			break;
		case 1:
			sVar0 = "MERRYWEATHER2";
			break;
		case 2:
			sVar0 = "MERRYWEATHER3";
			break;
		case 3:
			sVar0 = "MERRYWEATHER4";
			break;
	}
	return sVar0;
}

void func_928()//Position - 0x9D06B
{
	int iVar0;
	if (iLocal_381)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
		{
			if (__LIB_16__::func_855())
			{
				if (Local_51[iVar0 /*44*/].f_27 != 0)
				{
					__LIB_0__::func_222(&uLocal_54, (iVar0 % 4) + 4, Local_51[iVar0 /*44*/], func_927(iVar0), 0, 1);
					__LIB_16__::func_7(&uLocal_54, "D2AAUD", func_929(iVar0), 7, 0, 0, 0);
					iLocal_381 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

char* func_929(int iParam0)//Position - 0x9D0E7
{
	char* sVar0;
	switch ((iParam0 % 4))
	{
		case 0:
			sVar0 = "DH2A_MERC1";
			break;
		case 1:
			sVar0 = "DH2A_MERC";
			break;
		case 2:
			sVar0 = "DH2A_ARL3";
			break;
		case 3:
			sVar0 = "DH2A_MWALR4";
			break;
	}
	return sVar0;
}

void func_930(var uParam0)//Position - 0x9D13A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		__LIB_13__::func_808(&(uParam0->f_1));
		return;
	}
	if (PED::IS_PED_INJURED(*uParam0))
	{
		__LIB_13__::func_808(&(uParam0->f_1));
		return;
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
		{
			uParam0->f_1 = __LIB_0__::func_666(*uParam0, 1, 145);
		}
	}
	else if (uParam0->f_43)
	{
		HUD::SET_BLIP_FLASHES(uParam0->f_1, true);
	}
	else
	{
		HUD::SET_BLIP_FLASHES(uParam0->f_1, false);
	}
}

void func_933()//Position - 0x9D21C
{
	if (iLocal_428 == 1)
	{
		if (iLocal_423 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				func_1018(iLocal_429);
			}
			if ((iLocal_424 < 8 && iLocal_426 > 7) || (iLocal_424 > 7 && iLocal_426 < 8))
			{
			}
		}
		else if (iLocal_423 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(false);
				CUTSCENE::REMOVE_CUTSCENE();
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			func_955();
			__LIB_16__::func_863(&uLocal_514);
			func_953(iLocal_424);
			while (!__LIB_17__::func_632(&uLocal_514))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_424)
			{
				case 0:
					func_949();
					break;
				case 1:
					func_948();
					break;
				case 2:
					func_947();
					break;
				case 3:
					func_946();
					break;
				case 4:
					func_945();
					break;
				case 5:
					func_944();
					break;
				case 6:
					func_943();
					break;
				case 7:
					func_941();
					break;
				case 8:
					func_940();
					break;
				case 9:
					func_937();
					break;
				case 10:
					func_934();
					break;
			}
			func_830();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			iLocal_428 = 0;
		}
	}
}

void func_934()//Position - 0x9D398
{
	if (func_1020(2, 1, 1))
	{
		func_693(1);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -332.2139f, -2570.9912f, 5.001f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 97.2111f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_49[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -466.7967f, -2381.3794f, -12.1213f, 0f, true, true, false);
		iLocal_269 = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), -191.1227f, -2331.3381f, -19.40053f, true, true, false);
		CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_EXT", 8);
		SCRIPT::REQUEST_SCRIPT("docks2ASubHandler");
		__LIB_0__::func_433(0, -1, 1);
		func_446(1, 1, 0, 0, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_937()//Position - 0x9D572
{
	if (func_1020(0, 1, 1))
	{
		func_693(1);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -90.4927f, -2288.003f, -1.3081f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 130.4705f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (!__LIB_16__::func_903(Local_49[6 /*2*/]))
		{
			Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -78.1857f, -2287.6528f, 0f, 56.7927f, true, true, false);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
		}
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
		__LIB_17__::func_41(func_1038(), 10);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
		{
			SYSTEM::WAIT(0);
		}
		func_687(func_1038(), 1, 1);
		while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1038()))
		{
			SYSTEM::WAIT(0);
		}
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
		STREAMING::REQUEST_PTFX_ASSET();
		if (!STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(Local_49[6 /*2*/], -1, 1);
		if (!PED::IS_PED_IN_ANY_VEHICLE(func_1038(), false) && !ENTITY::IS_ENTITY_DEAD(Local_49[6 /*2*/], false))
		{
			PED::SET_PED_INTO_VEHICLE(func_1038(), Local_49[6 /*2*/], -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[6 /*2*/], 5f);
			VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_49[6 /*2*/], true);
			VEHICLE::SET_BOAT_ANCHOR(Local_49[6 /*2*/], true);
		}
		func_446(1, 0, 0, 0, 0, 0);
		__LIB_16__::func_861(254.4721f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(45f, 1f);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_GOODS_RT");
		STREAMING::REQUEST_IPL("SUNK_SHIP_FIRE");
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_940()//Position - 0x9D831
{
	bool bVar0;
	int iVar1;
	if (func_1020(0, 1, 1))
	{
		func_693(0);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -80.2056f, -2288.2832f, 0f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 22f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
		Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -80.2056f, -2288.2832f, 0f, 22f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
		Local_49[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -198.265f, -2404.2424f, 5.0013f, 127.4752f, true, true, false);
		Local_49[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -210.8442f, -2406.9985f, 5.0012f, 297.9603f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[1 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[1 /*2*/], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[2 /*2*/], true);
		func_446(0, 0, 1, 0, 0, 0);
		CUTSCENE::REQUEST_CUTSCENE("LSDH_2A_RF_01", 8);
		__LIB_17__::func_41(func_1038(), 10);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
		{
			SYSTEM::WAIT(0);
		}
		func_687(func_1038(), 1, 1);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
		PED::SET_ENABLE_SCUBA(func_1038(), true);
		PED::SET_PED_DIES_IN_WATER(func_1038(), false);
		func_760(1);
		__LIB_0__::func_433(0, -1, 1);
		bVar0 = false;
		iVar1 = MISC::GET_GAME_TIMER() + 5000;
		while (!bVar0)
		{
			if (AUDIO::LOAD_STREAM("PORT_OF_LS_SHIP_BLOW_UP_MASTER", 0))
			{
				bVar0 = true;
			}
			else if (MISC::GET_GAME_TIMER() > iVar1)
			{
				bVar0 = true;
			}
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_941()//Position - 0x9DA49
{
	if (func_1020(1, 1, 1))
	{
		func_693(0);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 10.7369f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -80.2056f, -2288.2832f, 0f, 22f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
		while (!func_722(&(Local_50[1 /*15*/]), 0, -228.9973f, -2283.4854f, 3.3515f, 10f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_222(&uLocal_54, 1, Local_50[1 /*15*/], "MICHAEL", 0, 1);
		func_687(func_1038(), 1, 1);
		PED::SET_ENABLE_SCUBA(func_1038(), true);
		PED::SET_PED_DIES_IN_WATER(func_1038(), false);
		Local_51[2 /*44*/].f_37 = 0;
		Local_51[3 /*44*/].f_37 = 0;
		Local_51[4 /*44*/].f_37 = 0;
		Local_51[6 /*44*/].f_37 = 0;
		Local_51[7 /*44*/].f_37 = 0;
		Local_51[9 /*44*/].f_37 = 0;
		Local_51[10 /*44*/].f_37 = 0;
		Local_51[11 /*44*/].f_37 = 0;
		Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
		Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
		Local_49[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -198.265f, -2404.2424f, 5.0013f, 127.4752f, true, true, false);
		Local_49[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -210.8442f, -2406.9985f, 5.0012f, 297.9603f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[1 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[1 /*2*/], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[2 /*2*/], true);
		iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
		iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
		iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
		iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
		iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
		func_760(1);
		func_446(0, 0, 1, 0, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_DETONATE_RT");
		func_942(3);
		__LIB_0__::func_433(0, -1, 1);
		iLocal_352 = 1;
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_942(int iParam0)//Position - 0x9DDB5
{
	if (iParam0 == 3)
	{
		iLocal_277[2] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_420), -187.77f, -2365.49f, 9.32f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[2]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_277[2], true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_277[2], 22.668f, -90f, -10f, 2, true);
		}
	}
	if (iParam0 >= 2)
	{
		iLocal_277[1] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_420), -127.93f, -2365.46f, 9.33f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[1]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_277[1], true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_277[1], 22.668f, -90f, -10f, 2, true);
		}
	}
	if (iParam0 >= 1)
	{
		iLocal_277[0] = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(iLocal_420), -84.715f, -2365.9f, 14.3f, true, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_277[0], true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_277[0], 22.668f, 79.339f, 4.143f, 2, true);
		}
	}
}

void func_943()//Position - 0x9DED1
{
	if (func_1020(1, 1, 1))
	{
		func_693(0);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 35.7369f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
		Local_51[2 /*44*/].f_37 = 0;
		Local_51[3 /*44*/].f_37 = 0;
		Local_51[4 /*44*/].f_37 = 0;
		Local_51[6 /*44*/].f_37 = 0;
		Local_51[7 /*44*/].f_37 = 0;
		Local_51[9 /*44*/].f_37 = 0;
		Local_51[10 /*44*/].f_37 = 0;
		Local_51[11 /*44*/].f_37 = 0;
		OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
		Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
		Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
		iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
		iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
		iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
		iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
		iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
		func_942(3);
		func_760(1);
		func_446(0, 0, 1, 0, 0, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_WAY_OUT_RT");
		AUDIO::START_AUDIO_SCENE("DH2A_SHOOTOUT_SNIPING_SCENE");
		__LIB_0__::func_433(0, -1, 1);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		iLocal_352 = 1;
		bLocal_372 = true;
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_944()//Position - 0x9E1AF
{
	func_693(0);
	if (!__LIB_0__::func_324())
	{
		if (func_1020(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -191.4221f, -2365.4763f, 8.3193f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 176.1654f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_52[2 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
		}
	}
	else
	{
		while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_433[1] = Local_50[0 /*15*/];
		__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
	}
	__LIB_17__::func_41(func_1038(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	func_687(func_1038(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
	func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_54, 1, Local_50[1 /*15*/], "MICHAEL", 0, 1);
	PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
	Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
	Local_51[2 /*44*/].f_37 = 0;
	Local_51[3 /*44*/].f_37 = 0;
	Local_51[4 /*44*/].f_37 = 0;
	Local_51[5 /*44*/].f_37 = 0;
	Local_51[6 /*44*/].f_37 = 0;
	Local_51[7 /*44*/].f_37 = 0;
	Local_51[9 /*44*/].f_37 = 0;
	Local_51[10 /*44*/].f_37 = 0;
	Local_51[11 /*44*/].f_37 = 0;
	Local_51[13 /*44*/].f_37 = 0;
	Local_51[14 /*44*/].f_37 = 0;
	func_732(12, 1090519040, 1, 0);
	func_732(15, 1090519040, 1, 0);
	func_732(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	iLocal_432[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	iLocal_432[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	func_768();
	Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
	Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
	func_446(0, 0, 1, 0, 0, 0);
	iLocal_491 = 1;
	Local_52[0 /*7*/].f_6 = 1;
	Local_52[1 /*7*/].f_6 = 1;
	Local_52[2 /*7*/].f_6 = 1;
	iLocal_302 = 0;
	iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
	iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
	iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
	iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
	iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
	func_770();
	func_760(1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_4TH_BOMB_RT");
	func_942(3);
	__LIB_0__::func_433(0, -1, 1);
	if (Global_100441.f_12[0] == 0)
	{
		if (__LIB_16__::func_896(&iLocal_433, 1))
		{
			__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
			if (__LIB_16__::func_903(func_1038()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		iLocal_398 = 1;
	}
	else
	{
		if (__LIB_16__::func_903(func_1037()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, false);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
		iLocal_407 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_945()//Position - 0x9E6DE
{
	func_693(0);
	if (!__LIB_0__::func_324())
	{
		if (func_1020(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -129.6871f, -2366.8972f, 8.3193f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 183.9491f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_52[1 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
		}
	}
	else
	{
		while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_433[1] = Local_50[0 /*15*/];
		__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
	}
	__LIB_17__::func_41(func_1038(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	func_687(func_1038(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
	func_122(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
	Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
	Local_51[2 /*44*/].f_37 = 0;
	Local_51[3 /*44*/].f_37 = 0;
	Local_51[4 /*44*/].f_37 = 0;
	Local_51[5 /*44*/].f_37 = 0;
	Local_51[6 /*44*/].f_37 = 0;
	func_732(11, 1090519040, 1, 0);
	func_732(8, 1090519040, 1, 0);
	func_732(10, 1f, 1, 0);
	func_732(12, 1090519040, 1, 0);
	func_732(13, 1090519040, 1, 0);
	func_732(15, 1090519040, 1, 0);
	func_732(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	iLocal_432[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	iLocal_432[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	func_768();
	Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
	Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
	func_446(0, 0, 1, 0, 0, 0);
	iLocal_491 = 1;
	Local_52[0 /*7*/].f_6 = 1;
	Local_52[1 /*7*/].f_6 = 1;
	iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
	iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
	iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
	iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
	iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
	func_770();
	func_760(1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_3RD_BOMB_RT");
	__LIB_43__::func_206(4, "STAGE 3: THIRD BOMB", 0, 0, 0, 1);
	func_942(2);
	__LIB_0__::func_433(0, -1, 1);
	if (Global_100441.f_12[0] == 0)
	{
		if (__LIB_16__::func_896(&iLocal_433, 1))
		{
			__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
			if (__LIB_16__::func_903(func_1038()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		iLocal_398 = 1;
	}
	else
	{
		if (__LIB_16__::func_903(func_1037()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, false);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
		iLocal_407 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_946()//Position - 0x9EBF7
{
	func_693(0);
	if (!__LIB_0__::func_324())
	{
		if (func_1020(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -94.9569f, -2371.877f, 13.2969f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 97.3018f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_52[0 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
		}
	}
	else
	{
		while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_433[1] = Local_50[0 /*15*/];
		__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
	}
	__LIB_17__::func_41(func_1038(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	func_687(func_1038(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
	func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
	Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
	func_446(0, 0, 1, 0, 0, 0);
	iLocal_491 = 1;
	Local_52[0 /*7*/].f_6 = 1;
	func_732(3, 1090519040, 1, 0);
	func_732(2, 1090519040, 1, 0);
	func_732(4, 1090519040, 1, 0);
	func_732(11, 1090519040, 1, 0);
	func_732(8, 1090519040, 1, 0);
	func_732(10, 1f, 1, 0);
	func_732(12, 1090519040, 1, 0);
	func_732(13, 1090519040, 1, 0);
	func_732(15, 1090519040, 1, 0);
	func_732(17, 1090519040, 1, 0);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	iLocal_432[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	iLocal_432[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	func_768();
	Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
	Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
	iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
	iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
	iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
	iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
	func_770();
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_2ND_BOMB_RT");
	func_760(1);
	__LIB_43__::func_206(3, "STAGE 3: SECOND BOMB", 0, 0, 0, 1);
	func_942(1);
	__LIB_0__::func_433(0, -1, 1);
	if (Global_100441.f_12[0] == 0)
	{
		if (__LIB_16__::func_896(&iLocal_433, 1))
		{
			__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
			if (__LIB_16__::func_903(func_1038()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		iLocal_398 = 1;
	}
	else
	{
		if (__LIB_16__::func_903(func_1037()))
		{
			TASK::TASK_AIM_GUN_AT_ENTITY(func_1037(), func_1038(), -1, false);
		}
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
		iLocal_407 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPING_scene");
	}
}

void func_947()//Position - 0x9F0CC
{
	func_693(0);
	if (!__LIB_0__::func_324())
	{
		if (func_1020(0, 1, 1))
		{
			ENTITY::SET_ENTITY_COORDS(func_1038(), -83.5905f, -2361.7979f, 13.2963f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1038(), 119.7045f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_52[0 /*7*/].f_2, 15f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
			while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
		}
	}
	else
	{
		while (!func_722(&(Local_50[0 /*15*/]), 1, -143.8203f, -2488.2612f, 43.4412f, 10.7369f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_433[1] = Local_50[0 /*15*/];
		__LIB_0__::func_222(&uLocal_54, 3, Local_50[0 /*15*/], "FRANKLIN", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_50[0 /*15*/], true);
	}
	__LIB_17__::func_41(func_1038(), 11);
	while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(func_1038()) && !PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	func_687(func_1038(), 0, 0);
	while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_1038()))
	{
		SYSTEM::WAIT(0);
	}
	PED::RELEASE_PED_PRELOAD_VARIATION_DATA(func_1038());
	PED::RELEASE_PED_PRELOAD_PROP_DATA(func_1038());
	func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	PED::SET_PED_STEALTH_MOVEMENT(func_1038(), true, 0);
	Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	iLocal_432[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-135.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	iLocal_432[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-214.9059f, -2383.5579f, 5.000676f, 1.5f, 1.5f, 1.5f, 0f, false, 7);
	func_732(3, 1090519040, 1, 0);
	func_732(2, 1090519040, 1, 0);
	func_732(4, 1090519040, 1, 0);
	func_732(11, 1090519040, 1, 0);
	func_732(8, 1090519040, 1, 0);
	func_732(10, 1f, 1, 0);
	func_732(12, 1090519040, 1, 0);
	func_732(13, 1090519040, 1, 0);
	func_732(15, 1090519040, 1, 0);
	func_732(17, 1090519040, 1, 0);
	func_768();
	Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
	Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
	func_446(0, 0, 1, 0, 0, 0);
	iLocal_491 = 1;
	func_770();
	iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
	iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
	iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
	iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
	iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
	__LIB_43__::func_206(2, "STAGE 2: FIRST BOMB", 0, 0, 0, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("DH2A_1ST_BOMB_RT");
	func_760(1);
	__LIB_0__::func_433(0, -1, 1);
	if (Global_100441.f_12[0] == 0)
	{
		if (__LIB_16__::func_896(&iLocal_433, 1))
		{
			__LIB_31__::func_990(&iLocal_433, 1, 1, 0);
			if (__LIB_16__::func_903(func_1038()))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
			}
		}
	}
	if (PLAYER::PLAYER_PED_ID() == func_1037())
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		iLocal_398 = 1;
	}
	else
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
		iLocal_407 = 1;
	}
	if (PLAYER::PLAYER_PED_ID() == func_1038())
	{
		AUDIO::START_AUDIO_SCENE("DH2A_PLANT_BOMBS_SCENE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("DH2A_SNIPE_GUARDS_scene");
	}
}

void func_948()//Position - 0x9F5B1
{
	if (func_1020(1, 1, 1))
	{
		func_693(0);
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(func_1037(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(func_1037(), 337.5851f);
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(-143.8203f, -2488.2612f, 43.4412f, 10f, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		while (!func_722(&(Local_50[1 /*15*/]), 0, -77.9618f, -2359.0828f, 0.5f, 90.7853f, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_222(&uLocal_54, 1, func_1038(), "MICHAEL", 0, 1);
		func_687(func_1038(), 0, 1);
		func_122(func_1038(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::SET_PED_DIES_IN_WATER(func_1038(), false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_1038(), true);
		Local_49[6 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), -86.7f, -2353.2f, 0f, 270.375f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[6 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_49[6 /*2*/], false);
		func_732(0, 8f, 1, 0);
		func_732(1, 8f, 1, 0);
		WEAPON::GIVE_WEAPON_TO_PED(Local_51[0 /*44*/], joaat("WEAPON_HEAVYSNIPER"), 200, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(Local_51[1 /*44*/], joaat("WEAPON_HEAVYSNIPER"), 200, true, true);
		func_732(3, 1090519040, 1, 0);
		func_732(2, 1090519040, 1, 0);
		func_732(4, 1090519040, 1, 0);
		func_732(11, 1090519040, 1, 0);
		func_732(8, 1090519040, 1, 0);
		func_732(10, 1f, 1, 0);
		func_732(12, 1090519040, 1, 0);
		func_732(13, 1090519040, 1, 0);
		func_732(15, 1090519040, 1, 0);
		func_732(17, 1090519040, 1, 0);
		Local_49[7 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -203.5f, -2413.4336f, 5.0012f, 293.3041f, true, true, false);
		Local_49[8 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), -180.8568f, -2431.3264f, 5.0013f, 94.2693f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[7 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_49[8 /*2*/], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[7 /*2*/], true);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_49[8 /*2*/], true);
		iLocal_270 = OBJECT::CREATE_OBJECT(joaat("prop_cratepile_07a"), -215.77f, -2392.33f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_270, 0f, 0f, -29.999996f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_270, 200);
		iLocal_271 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -211.03f, -2388.36f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_271, 0f, 0f, -12f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_271, 200);
		iLocal_272 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -212.51f, -2387.17f, 5f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_272, 0f, 0f, -39.999992f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_272, 200);
		iLocal_273 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -184.749f, -2422.6982f, 5.0013f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_273, 0f, 0f, 8.3525f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_273, 200);
		iLocal_274 = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_02"), -193.7419f, -2422.9417f, 5.0007f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_274, 0f, 0f, 220.8658f, 2, true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_274, 200);
		while (!AUDIO::PREPARE_MUSIC_EVENT("DH2A_START"))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_433(0, -1, 1);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -143.8203f, -2488.2612f, 43.4412f, true, false, false, true);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(func_780(Local_51[0 /*44*/]));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(func_779(Local_51[0 /*44*/]), 1f);
		PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		PED::SET_PED_NO_TIME_DELAY_BEFORE_SHOT(PLAYER::PLAYER_PED_ID());
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
		AUDIO::TRIGGER_MUSIC_EVENT("DH2A_SNIPE_GUARDS_RT");
		__LIB_43__::func_206(1, "Stage 1: Snipe Guards", 0, 0, 0, 1);
	}
	else
	{
		SYSTEM::WAIT(0);
	}
}

void func_949()//Position - 0x9F9A8
{
	int iVar0;
	if (!__LIB_0__::func_324())
	{
		func_1020(2, 1, 1);
		ENTITY::SET_ENTITY_COORDS(func_150(), -1149.8112f, -1522.107f, 9.633f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(func_150(), 228.2091f);
		while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1149.8112f, -1522.107f, 9.633f, 10f, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	while (!func_722(&(Local_50[0 /*15*/]), 1, -1154.6628f, -1518.2433f, 9.6327f, 306.3135f, 1, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_433[1] = Local_50[0 /*15*/];
	__LIB_0__::func_433(0, -1, 1);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.7572f, -1520.947f, 9.6327f, 1f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1149.5098f, -1522.4679f, 9.6331f, 1f, 20000, 0.25f, 1, 40000f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1147.3914f, -1522.7167f, 9.413f, 1f, 20000, 0.25f, 512, 312.1079f);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3500, 0f, true, false);
	}
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
	iLocal_315 = 1;
}

void func_953(int iParam0)//Position - 0xA0525
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_7");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2aig_1");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 2:
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 3:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 4:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 5:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@crouch");
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 6:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_852(&uLocal_514, joaat("buzzard"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a");
			__LIB_16__::func_859(&uLocal_514, "docksheist2a01");
			__LIB_16__::func_859(&uLocal_514, "docksheist2a02");
			__LIB_16__::func_859(&uLocal_514, "docksheist2a03");
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2a@alert");
			__LIB_16__::func_853(&uLocal_514, 1, "dh2arec");
			__LIB_16__::func_853(&uLocal_514, 2, "dh2arec");
			__LIB_16__::func_853(&uLocal_514, 3, "dh2arec");
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 7:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_mil_crate_02"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_cratepile_07a"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_860(&uLocal_514, iLocal_419, 31, 10);
			break;
		case 8:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("landstalker"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			break;
		case 9:
			__LIB_16__::func_852(&uLocal_514, joaat("S_M_Y_BlackOps_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_military_pickup_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("submersible"));
			__LIB_16__::func_852(&uLocal_514, joaat("dinghy"));
			__LIB_16__::func_852(&uLocal_514, joaat("prop_flare_01"));
			__LIB_16__::func_857(&uLocal_514, "missheistdocks2aswitchig_8");
			__LIB_16__::func_857(&uLocal_514, "swimming@scuba");
			break;
		case 10:
			__LIB_16__::func_852(&uLocal_514, joaat("prop_military_pickup_01"));
			__LIB_16__::func_852(&uLocal_514, joaat("submersible"));
			break;
	}
}

void func_955()//Position - 0xA0C05
{
	int iVar0;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
	{
		AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", true);
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_50[iVar0 /*15*/]) && !PED::IS_PED_INJURED(Local_50[iVar0 /*15*/]))
		{
			if (!iLocal_322)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_50[iVar0 /*15*/], false))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_50[iVar0 /*15*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_50[iVar0 /*15*/], false), true) + Vector(0f, -2f, 0f));
				}
				if (Local_50[iVar0 /*15*/] != PLAYER::PLAYER_PED_ID())
				{
					PED::DELETE_PED(&(Local_50[iVar0 /*15*/]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		Local_51[iVar0 /*44*/].f_36 = 0;
		Local_51[iVar0 /*44*/].f_30 = 0;
		Local_51[iVar0 /*44*/].f_31 = 0;
		Local_51[iVar0 /*44*/].f_27 = 0;
		Local_51[iVar0 /*44*/].f_28 = 0;
		Local_51[iVar0 /*44*/].f_38 = 0;
		Local_51[iVar0 /*44*/].f_39 = 0;
		Local_51[iVar0 /*44*/].f_40 = 0;
		Local_51[iVar0 /*44*/].f_42 = 0;
		Local_51[iVar0 /*44*/].f_43 = 0;
		Local_51[iVar0 /*44*/].f_41 = 0;
		Local_51[iVar0 /*44*/].f_35 = 0;
		Local_51[iVar0 /*44*/].f_29 = -1;
		if (HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*44*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_51[iVar0 /*44*/].f_1));
		}
		TASK::REMOVE_COVER_POINT(Local_51[iVar0 /*44*/].f_2);
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*44*/]))
		{
			if (!PED::IS_PED_INJURED(Local_51[iVar0 /*44*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_51[iVar0 /*44*/], false))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_51[iVar0 /*44*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_51[iVar0 /*44*/], false), true) + Vector(0f, -2f, 0f));
				}
				PED::DELETE_PED(&(Local_51[iVar0 /*44*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_51[iVar0 /*44*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_49[iVar0 /*2*/]))
		{
			if (!iLocal_322)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_49[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	iLocal_322 = 0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_52[iVar0 /*7*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_52[iVar0 /*7*/].f_1));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_53.f_0 - 1))
	{
		Local_53[iVar0 /*2*/] = 0;
		Local_53[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	func_701();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		OBJECT::DELETE_OBJECT(&iLocal_269);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_267))
	{
		HUD::REMOVE_BLIP(&iLocal_267);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
	{
		OBJECT::DELETE_OBJECT(&iLocal_270);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_271))
	{
		OBJECT::DELETE_OBJECT(&iLocal_271);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_272))
	{
		OBJECT::DELETE_OBJECT(&iLocal_272);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_273))
	{
		OBJECT::DELETE_OBJECT(&iLocal_273);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_274))
	{
		OBJECT::DELETE_OBJECT(&iLocal_274);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_258))
	{
		HUD::REMOVE_BLIP(&iLocal_258);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
	{
		OBJECT::DELETE_OBJECT(&iLocal_275);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_297, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
	{
		OBJECT::DELETE_OBJECT(&iLocal_296);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_294))
	{
		CAM::DESTROY_CAM(iLocal_294, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_295))
	{
		CAM::DESTROY_CAM(iLocal_295, false);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_432[0]))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_432[0]);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_432[1]))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_432[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_276, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_276);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_279))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_279);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_277)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_277[iVar0]));
		}
		iVar0++;
	}
	__LIB_13__::func_815(&Local_219, 1, 0);
	__LIB_16__::func_21(&Local_219, 0);
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	__LIB_0__::func_506(128, 0);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_261);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_325();
	STREAMING::CLEAR_FOCUS();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_415))
	{
		AUDIO::STOP_SOUND(iLocal_415);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_408))
	{
		AUDIO::STOP_SOUND(iLocal_408);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_409))
	{
		AUDIO::STOP_SOUND(iLocal_409);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_411))
	{
		AUDIO::STOP_SOUND(iLocal_411);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_410))
	{
		AUDIO::STOP_SOUND(iLocal_410);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_384))
	{
		AUDIO::STOP_SOUND(iLocal_384);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_263))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_263);
	}
	__LIB_17__::func_702(1, 3, 0);
	TASK::REMOVE_COVER_POINT(iLocal_262);
	TASK::REMOVE_COVER_POINT(iLocal_265[0]);
	TASK::REMOVE_COVER_POINT(iLocal_265[1]);
	TASK::REMOVE_COVER_POINT(iLocal_265[2]);
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(2f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
	MISC::SET_TIME_SCALE(1f);
	__LIB_15__::func_306(0);
	iLocal_407 = 0;
	bLocal_372 = false;
	iLocal_491 = 0;
	iLocal_493 = 0;
	bLocal_292 = false;
	iLocal_381 = 0;
	iLocal_382 = 0;
	iLocal_383 = 0;
	bLocal_406 = false;
	iLocal_405 = 0;
	iLocal_326 = 0;
	iLocal_327 = 0;
	iLocal_328 = 0;
	iLocal_329 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_342 = 0;
	iLocal_338 = 0;
	iLocal_306 = 0;
	iLocal_307 = 0;
	iLocal_308 = 0;
	iLocal_339 = 0;
	iLocal_340 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_366 = 0;
	iLocal_398 = 0;
	iLocal_312 = 0;
	iLocal_400 = 0;
	bLocal_367 = false;
	iLocal_399 = 0;
	iLocal_402 = 0;
	iLocal_413 = 0;
	iLocal_412 = 0;
	iLocal_314 = 0;
	iLocal_323 = 0;
	bLocal_324 = false;
	bLocal_325 = false;
	iLocal_321 = 0;
	iLocal_348 = 0;
	iLocal_313 = 0;
	iLocal_344 = 0;
	iLocal_346 = 0;
	iLocal_345 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_416 = 0;
	iLocal_359 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_293 = -1;
	iLocal_357 = -1;
	iLocal_377 = 0;
	iLocal_378 = 0;
	iLocal_379 = 0;
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		GRAPHICS::SET_SEETHROUGH(false);
	}
	__LIB_17__::func_88(&Local_477);
	func_372(1, 0, 0, 3000, 0);
	CAM::DESTROY_ALL_CAMS(false);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		Local_52[iVar0 /*7*/].f_6 = 0;
		MISC::CLEAR_AREA(Local_52[iVar0 /*7*/].f_2, 300f, true, false, false, false);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_52[iVar0 /*7*/].f_2, 300f, 100f);
		iVar0++;
	}
	CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(0f);
}

void func_957()//Position - 0xA1297
{
	switch (iLocal_423)
	{
		case 1:
			iLocal_423 = 2;
			iLocal_425 = -1;
			break;
		case 2:
			iLocal_423 = 3;
			iLocal_425 = 0;
			iLocal_424 = iLocal_426;
			break;
		case 3:
			iLocal_426 = -1;
			iLocal_423 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_427) > 2500)
			{
				iLocal_427 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_961()//Position - 0xA14DD
{
	if (!iLocal_314)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			STREAMING::SET_SRL_FORCE_PRESTREAM(3);
			if (__LIB_14__::func_466() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 63, 8);
			}
			else if (__LIB_14__::func_466() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 60, 8);
			}
			else if (__LIB_14__::func_466() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("lsdh_2a_int", 48, 8);
			}
			SYSTEM::WAIT(0);
		}
		if (__LIB_0__::func_90())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], false, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_9[0], "Wade", 1, joaat("IG_Wade"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], false, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_9[1], "Floyd", 1, joaat("IG_Floyd"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
			{
				iLocal_433[1] = Global_96938.f_9[4];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_433[1], false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_433[1], false);
			}
			if (__LIB_14__::func_466() == 1)
			{
				iLocal_433[1] = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_433[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_433[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_433[1], "Franklin", 0, joaat("Player_One"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, joaat("Player_One"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
			{
				iLocal_433[0] = Global_96938.f_9[3];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_433[0], false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_433[0], false);
			}
			if (__LIB_14__::func_466() == 0)
			{
				iLocal_433[0] = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_433[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_433[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_433[0], "Michael", 0, joaat("Player_Zero"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Michael", 2, joaat("Player_Zero"), 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
			{
				iLocal_433[2] = Global_96938.f_9[2];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_433[2], false, true);
			}
			if (__LIB_14__::func_466() == 2)
			{
				iLocal_433[2] = PLAYER::PLAYER_PED_ID();
			}
			else if (!__LIB_0__::func_323())
			{
				if (__LIB_16__::func_896(&iLocal_433, 2))
				{
					bLocal_325 = true;
					CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(PLAYER::PLAYER_PED_ID());
					__LIB_31__::func_990(&iLocal_433, 1, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_433[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_433[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_433[2], "Trevor", 0, joaat("Player_Two"), 0);
				}
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("Player_Two"), 0);
			}
			__LIB_0__::func_468(74);
			__LIB_16__::func_873(-1150.0511f, -1523.6382f, 3.3297f, -1142.7826f, -1518.4564f, 12.556736f, 4f, -1154.6117f, -1520.07f, 3.3456f, 33.0431f, 1, 0, 1, 1, 0);
			__LIB_16__::func_873(-1153.6754f, -1516.567f, 9.632723f, -1149.7175f, -1522.15f, 12.633055f, 4f, -1154.6117f, -1520.07f, 3.3456f, 33.0431f, 1, 0, 1, 1, 0);
			Local_49[0 /*2*/] = __LIB_14__::func_794();
			if (__LIB_16__::func_903(Local_49[0 /*2*/]))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_49[0 /*2*/]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_49[0 /*2*/], true, true);
				}
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_49[0 /*2*/], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_49[0 /*2*/], 5f);
				VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(Local_49[0 /*2*/]), 3);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1151.3f, -1520.1f, 11.1f, 4f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1149.4f, -1523.4f, 10.9f, 3f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1145.9f, -1521.6f, 9.3f, 2f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1143.6f, -1519f, 7.5f, 2.5f, false, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1147.4f, -1520.5f, 5.9f, 2.5f, false, false, false, false, false, false, 0);
			iLocal_263 = INTERIOR::GET_INTERIOR_AT_COORDS(-1158.3411f, -1520.893f, 9.6345f);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_263))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_263);
			}
			MISC::CLEAR_AREA_OF_PEDS(-1154.6117f, -1520.07f, 3.3456f, 100f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1154.6117f, -1520.07f, 3.3456f, 100f, false, false, false, false, false, false, 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			switch (__LIB_17__::func_80())
			{
				case 2:
					CUTSCENE::START_CUTSCENE(0);
					break;
				case 1:
				case 0:
					CUTSCENE::START_CUTSCENE(1024);
					break;
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[1]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
			iLocal_314 = 1;
		}
	}
}

int func_1018(int iParam0)//Position - 0xA8408
{
	if (iLocal_423 == 0)
	{
		iLocal_426 = iParam0;
		iLocal_423 = 1;
		return 1;
	}
	return 0;
}

int func_1020(int iParam0, bool bParam1, bool bParam2)//Position - 0xA84BD
{
	if (bParam1)
	{
		while (!func_1021(iParam0, bParam2))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (!func_1021(iParam0, bParam2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			Local_50[1 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
		case 1:
			Local_50[0 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
		case 2:
			Local_50[2 /*15*/] = PLAYER::PLAYER_PED_ID();
			break;
	}
	return 1;
}

int func_1021(int iParam0, bool bParam1)//Position - 0xA852F
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
		func_481(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_722(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_31__::func_990(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

void func_1026()//Position - 0xA873B
{
	Local_2101[0 /*7*/] = { __LIB_16__::func_865(-106.694305f, -2375.5522f, 7.319069f, -132.53934f, -2375.6506f, 11.371798f, 15f) };
	Local_2101[1 /*7*/] = { __LIB_16__::func_865(-186.1473f, -2379.65f, 7.31911f, -185.92645f, -2356.1033f, 13.425454f, 23f) };
	Local_2101[2 /*7*/] = { __LIB_16__::func_865(-209.59673f, -2380.277f, 7.483111f, -209.65092f, -2369.0613f, 13.31911f, 30f) };
	Local_2101[3 /*7*/] = { __LIB_16__::func_865(-115.7101f, -2366.5093f, 7.345467f, -97.80183f, -2366.5093f, 11.46272f, 32f) };
	Local_2101[4 /*7*/] = { __LIB_16__::func_865(-130.25978f, -2352.1824f, 7.319069f, -130.25978f, -2379.2922f, 11.319069f, 6f) };
	Local_2101[5 /*7*/] = { __LIB_16__::func_865(-149.01335f, -2354.9907f, 7.367878f, -149.01335f, -2379.869f, 11.425476f, 12f) };
	Local_2101[6 /*7*/] = { __LIB_16__::func_865(-165.32826f, -2355.0134f, 7.355578f, -165.32826f, -2379.8384f, 11.425476f, 12f) };
	Local_2101[7 /*7*/] = { __LIB_16__::func_865(-194.25827f, -2354.9927f, 7.378938f, -194.24849f, -2379.8647f, 11.425454f, 13f) };
	Local_2101[8 /*7*/] = { __LIB_16__::func_865(-97.80183f, -2366.0232f, 11.338053f, -77.09352f, -2366.0232f, 18.304646f, 28f) };
	Local_2101[9 /*7*/] = { __LIB_16__::func_865(-123.056564f, -2366.1575f, 4.319066f, -97.83835f, -2366.1575f, 18.320217f, 34f) };
	Local_2101[10 /*7*/] = { __LIB_16__::func_865(-132.02058f, -2366.6924f, 4.319069f, -120.83132f, -2366.6924f, 22.319069f, 34f) };
	Local_2101[11 /*7*/] = { __LIB_16__::func_865(-148.61052f, -2366.0557f, 4.319069f, -129.09044f, -2366.0557f, 24.319069f, 34f) };
	Local_2101[12 /*7*/] = { __LIB_16__::func_865(-164.54317f, -2366.3245f, 4.319069f, -145.38304f, -2366.3245f, 24.319069f, 34f) };
	Local_2101[13 /*7*/] = { __LIB_16__::func_865(-182.17354f, -2366.2104f, 4.31911f, -161.55547f, -2366.2104f, 24.319069f, 34f) };
	Local_2101[14 /*7*/] = { __LIB_16__::func_865(-192.63094f, -2366.2766f, 4.319111f, -179.9577f, -2366.2766f, 24.319069f, 34f) };
	Local_2101[15 /*7*/] = { __LIB_16__::func_865(-208.49603f, -2366.2573f, 4.31911f, -190.48857f, -2366.2573f, 24.31911f, 34f) };
	Local_2101[16 /*7*/] = { __LIB_16__::func_865(-252.81717f, -2366.2769f, 4.458529f, -207.97833f, -2366.2769f, 31.31911f, 34f) };
	Local_2101[17 /*7*/] = { __LIB_16__::func_865(-100.5551f, -2373.1697f, 7.361284f, -100.728f, -2354.544f, 12.599417f, 7f) };
	Local_2101[18 /*7*/] = { __LIB_16__::func_865(-163.84131f, -2351.967f, 7.34009f, -163.70303f, -2368.7166f, 10.319068f, 5f) };
	Local_2101[19 /*7*/] = { __LIB_16__::func_865(-178.0101f, -2376.2104f, 7.319069f, -181.66132f, -2352.6467f, 10.319069f, 6f) };
	Local_2101[20 /*7*/] = { __LIB_16__::func_865(-209.04495f, -2374.888f, 7.319207f, -209.29543f, -2352.12f, 10.355095f, 6f) };
}

void func_1028()//Position - 0xA8B3B
{
	func_1031();
	func_1030();
	HUD::REQUEST_ADDITIONAL_TEXT("h5heist", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("script\underwater", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_288);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_289);
	PED::ADD_RELATIONSHIP_GROUP("buddy", &iLocal_288);
	PED::ADD_RELATIONSHIP_GROUP("enemies", &iLocal_289);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_289, iLocal_288);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_288, iLocal_289);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_289);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_289, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_289, iLocal_289);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_288, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_288);
	TASK::ADD_COVER_BLOCKING_AREA(-214.77449f, -2376.2473f, 8.319207f, -212.2312f, -2374.9658f, 11.515604f, true, true, true, false);
	TASK::ADD_COVER_BLOCKING_AREA(-208.06313f, -2382.714f, 7.937626f, -212.80531f, -2378.8904f, 10.319207f, true, true, true, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-146.52478f, -2530.8892f, 38f, 34.11267f, -2326.6992f, 1.23919f, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-146.52478f, -2530.8892f, 38f, 34.11267f, -2326.6992f, 1.23919f, false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA(-146.52478f, -2530.8892f, 38f, 34.11267f, -2326.6992f, 1.23919f);
	iLocal_314 = 0;
	__LIB_0__::func_424(1);
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	}
	while (!__LIB_17__::func_632(&uLocal_514))
	{
		SYSTEM::WAIT(0);
	}
}

void func_1030()//Position - 0xA8D34
{
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_6");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -145.5457f, -2378.8364f, 10.9717f, -145.5457f, -2378.8364f, 10.9717f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -145.5312f, -2353.4207f, 10.9717f, -145.5312f, -2353.4207f, 10.9717f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_7");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -193.5774f, -2353.0503f, 10.9719f, -193.5774f, -2353.0503f, 10.9719f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -193.4915f, -2378.865f, 10.9719f, -193.4915f, -2378.865f, 10.9719f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_8");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", -212.1342f, -2377.4421f, 16.3326f, -212.1342f, -2377.4421f, 16.3326f, 3000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -211.9285f, -2355.043f, 16.3321f, -211.9285f, -2355.043f, 16.3321f, 3000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
	TASK::OPEN_PATROL_ROUTE("MISS_PATROL_9");
	TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_51[17 /*44*/].f_3, Local_51[17 /*44*/].f_3, 2000);
	TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", -250.2186f, -2377.021f, 8.5309f, -250.2186f, -2377.021f, 8.5309f, 2000);
	TASK::ADD_PATROL_ROUTE_LINK(1, 2);
	TASK::ADD_PATROL_ROUTE_LINK(2, 1);
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_1031()//Position - 0xA8EFE
{
	Local_51[0 /*44*/].f_3 = { -95.3159f, -2370.9175f, 13.296f };
	Local_51[0 /*44*/].f_21 = 166.6539f;
	Local_51[1 /*44*/].f_3 = { -95.4717f, -2371.6418f, 13.337f };
	Local_51[1 /*44*/].f_21 = 352.3306f;
	Local_51[2 /*44*/].f_3 = { -99.3547f, -2373.5896f, 8.3631f };
	Local_51[2 /*44*/].f_21 = 94.6563f;
	Local_51[2 /*44*/].f_18 = { -121.568f, -2378.0593f, 8.3191f };
	Local_51[3 /*44*/].f_3 = { -130.8882f, -2381.1301f, 8.483f };
	Local_51[3 /*44*/].f_21 = 111.7926f;
	Local_51[2 /*44*/].f_18 = { -131.2666f, -2380.9895f, 8.483f };
	Local_51[4 /*44*/].f_3 = { -133.4564f, -2353.7512f, 8.3191f };
	Local_51[4 /*44*/].f_21 = 269.1131f;
	Local_51[4 /*44*/].f_18 = { -134.2778f, -2378.5774f, 8.3191f };
	Local_51[5 /*44*/].f_3 = { -136.5821f, -2353.481f, 8.3191f };
	Local_51[5 /*44*/].f_21 = 257.6619f;
	Local_51[5 /*44*/].f_18 = { -140.7227f, -2378.9175f, 8.3191f };
	Local_51[7 /*44*/].f_3 = { -145.6482f, -2373.9126f, 10.9717f };
	Local_51[7 /*44*/].f_21 = 193.1906f;
	Local_51[8 /*44*/].f_3 = { -163.7027f, -2358.7537f, 8.3191f };
	Local_51[8 /*44*/].f_21 = 349.0318f;
	Local_51[8 /*44*/].f_18 = { -153.3035f, -2378.981f, 8.3191f };
	Local_51[9 /*44*/].f_3 = { -175.2808f, -2377.9624f, 8.3191f };
	Local_51[9 /*44*/].f_21 = 105.1062f;
	Local_51[9 /*44*/].f_18 = { -153.3035f, -2378.981f, 8.3191f };
	Local_51[10 /*44*/].f_3 = { -175.6108f, -2378.5625f, 8.3191f };
	Local_51[10 /*44*/].f_21 = 83.7819f;
	Local_51[10 /*44*/].f_18 = { -170.2135f, -2378.9146f, 8.3191f };
	Local_51[11 /*44*/].f_3 = { -193.3811f, -2358.0469f, 10.9719f };
	Local_51[11 /*44*/].f_21 = 352.3621f;
	Local_51[11 /*44*/].f_18 = { -193.6092f, -2378.038f, 10.9717f };
	Local_51[12 /*44*/].f_3 = { -209.4923f, -2381.1301f, 8.4833f };
	Local_51[12 /*44*/].f_21 = 180f;
	Local_51[12 /*44*/].f_18 = { -209.8036f, -2380.9172f, 8.4833f };
	Local_51[13 /*44*/].f_3 = { -190.3405f, -2376.1091f, 8.3191f };
	Local_51[13 /*44*/].f_21 = 120.2464f;
	Local_51[13 /*44*/].f_18 = { -198.1502f, -2378.9272f, 8.3191f };
	Local_51[14 /*44*/].f_3 = { -190.3402f, -2372.9521f, 8.3191f };
	Local_51[14 /*44*/].f_21 = 170.6087f;
	Local_51[14 /*44*/].f_18 = { -204.5925f, -2378.8252f, 8.3191f };
	Local_51[15 /*44*/].f_3 = { -221.0865f, -2377.1345f, 12.3325f };
	Local_51[15 /*44*/].f_21 = 92.8979f;
	Local_51[15 /*44*/].f_18 = { -230.0103f, -2379.9412f, 12.3327f };
	Local_51[16 /*44*/].f_3 = { -212.1228f, -2371.5813f, 16.3318f };
	Local_51[16 /*44*/].f_21 = 179.6727f;
	Local_51[16 /*44*/].f_18 = { -225.4011f, -2377.6538f, 16.3326f };
	Local_51[17 /*44*/].f_3 = { -250.4333f, -2355.844f, 8.5061f };
	Local_51[17 /*44*/].f_21 = 265.6055f;
	Local_51[17 /*44*/].f_18 = { -245.1081f, -2377.0864f, 8.3192f };
	Local_51[18 /*44*/].f_3 = { -185f, -2512f, 5.16f };
	Local_51[18 /*44*/].f_21 = 90f;
	Local_51[19 /*44*/].f_3 = { -184f, -2512f, 5.16f };
	Local_51[19 /*44*/].f_21 = 90f;
	Local_51[20 /*44*/].f_3 = { -183f, -2512f, 5.16f };
	Local_51[20 /*44*/].f_21 = 90f;
	Local_51[21 /*44*/].f_3 = { -182f, -2512f, 5.16f };
	Local_51[21 /*44*/].f_21 = 90f;
	Local_51[22 /*44*/].f_3 = { -185f, -2513f, 5.16f };
	Local_51[22 /*44*/].f_21 = 90f;
	Local_51[23 /*44*/].f_3 = { -184f, -2513f, 5.16f };
	Local_51[23 /*44*/].f_21 = 90f;
	Local_51[24 /*44*/].f_3 = { -183f, -2513f, 5.16f };
	Local_51[24 /*44*/].f_21 = 90f;
	Local_51[25 /*44*/].f_3 = { -182f, -2513f, 5.16f };
	Local_51[25 /*44*/].f_21 = 90f;
	Local_51[26 /*44*/].f_3 = { -209.392f, -2367.1553f, 8.31911f };
	Local_51[26 /*44*/].f_21 = 83.7819f;
	Local_51[27 /*44*/].f_3 = { -209.2853f, -2375.9495f, 8.3191f };
	Local_51[27 /*44*/].f_21 = 83.7819f;
	Local_51[0 /*44*/].f_6 = { -96.8524f, -2376.061f, 13.7374f };
	Local_51[1 /*44*/].f_6 = { -95.3553f, -2357.491f, 13.7049f };
	Local_51[2 /*44*/].f_6 = { -100.0022f, -2372.734f, 8.8395f };
	Local_51[3 /*44*/].f_6 = { -114.89989f, -2377.9246f, 8.65607f };
	Local_51[4 /*44*/].f_6 = { -121.77245f, -2378.6008f, 8.31872f };
	Local_51[5 /*44*/].f_6 = { -124.83544f, -2374.7156f, 8.3189f };
	Local_51[7 /*44*/].f_6 = { -128.26039f, -2378.961f, 8.31891f };
	Local_51[8 /*44*/].f_6 = { -92.30511f, -2364.4778f, 13.29613f };
	Local_51[9 /*44*/].f_6 = { -128.59235f, -2374.083f, 8.31891f };
	Local_51[10 /*44*/].f_6 = { -126.7215f, -2367.6628f, 8.31891f };
	Local_51[11 /*44*/].f_6 = { -121.77224f, -2359.7524f, 8.31905f };
	Local_51[12 /*44*/].f_6 = { -124.31957f, -2357.0667f, 8.31929f };
	Local_51[13 /*44*/].f_6 = { -131.76596f, -2354.9067f, 8.31929f };
	Local_51[15 /*44*/].f_6 = { -95.58605f, -2374.128f, 13.29636f };
	Local_51[14 /*44*/].f_6 = { -136.62875f, -2377.8787f, 8.31866f };
	Local_51[16 /*44*/].f_6 = { -145.02155f, -2376.8394f, 8.35225f };
	Local_51[17 /*44*/].f_6 = { -163.79602f, -2376.0703f, 8.31863f };
	Local_51[0 /*44*/].f_9 = { -138.2723f, -2377.7776f, 8.7653f };
	Local_51[1 /*44*/].f_9 = { -172.7036f, -2377.949f, 8.8366f };
	Local_51[2 /*44*/].f_9 = { -120.05733f, -2378.492f, 8.31872f };
	Local_51[3 /*44*/].f_9 = { -131.74411f, -2376.3916f, 8.31891f };
	Local_51[4 /*44*/].f_9 = { -127.97167f, -2367.2615f, 8.31891f };
	Local_51[5 /*44*/].f_9 = { -155.5438f, -2379.4067f, 8.3187f };
	Local_51[7 /*44*/].f_9 = { -188.35437f, -2373.9717f, 8.31869f };
	Local_51[8 /*44*/].f_9 = { -178.20407f, -2377.0085f, 8.31867f };
	Local_51[9 /*44*/].f_9 = { -172.43294f, -2379.2197f, 8.31863f };
	Local_51[10 /*44*/].f_9 = { -161.74f, -2376.7861f, 8.31863f };
	Local_51[11 /*44*/].f_9 = { -163.63983f, -2366.299f, 8.31889f };
	Local_51[12 /*44*/].f_9 = { -147.28908f, -2366.8108f, 8.31867f };
	Local_51[13 /*44*/].f_9 = { -145.35626f, -2377.0195f, 8.31867f };
	Local_51[15 /*44*/].f_9 = { -163.80838f, -2355.1116f, 8.31889f };
	Local_51[14 /*44*/].f_9 = { -184.80934f, -2356.761f, 8.31944f };
	Local_51[16 /*44*/].f_9 = { -187.86914f, -2368.311f, 8.31891f };
	Local_51[17 /*44*/].f_9 = { -181.34264f, -2353.206f, 8.31944f };
	Local_51[0 /*44*/].f_12 = { -190.0471f, -2374.7861f, 9.048f };
	Local_51[1 /*44*/].f_12 = { -181.0299f, -2373.9075f, 9.048f };
	Local_51[2 /*44*/].f_12 = { -172.33658f, -2378.555f, 8.31889f };
	Local_51[3 /*44*/].f_12 = { -189.87204f, -2378.415f, 8.31869f };
	Local_51[4 /*44*/].f_12 = { -184.40628f, -2370.4502f, 8.31891f };
	Local_51[5 /*44*/].f_12 = { -183.70442f, -2374.455f, 8.31869f };
	Local_51[7 /*44*/].f_12 = { -188.05186f, -2356.9905f, 8.31944f };
	Local_51[8 /*44*/].f_12 = { -188.38849f, -2366.6462f, 8.31891f };
	Local_51[9 /*44*/].f_12 = { -180.21683f, -2368.614f, 8.31891f };
	Local_51[10 /*44*/].f_12 = { -183.14825f, -2363.6663f, 8.31944f };
	Local_51[11 /*44*/].f_12 = { -194.14546f, -2354.396f, 8.31857f };
	Local_51[12 /*44*/].f_12 = { -200.5847f, -2378.6597f, 8.31857f };
	Local_51[13 /*44*/].f_12 = { -184.2644f, -2356.8123f, 8.31946f };
	Local_51[15 /*44*/].f_12 = { -213.72719f, -2379.0461f, 8.3191f };
	Local_51[14 /*44*/].f_12 = { -208.0668f, -2374.5112f, 8.31857f };
	Local_51[16 /*44*/].f_12 = { -222.39253f, -2377.685f, 12.33246f };
	Local_51[17 /*44*/].f_12 = { -241.69656f, -2375.6316f, 8.31935f };
	Local_51[0 /*44*/].f_15 = { -215.7887f, -2377.3557f, 8.9309f };
	Local_51[1 /*44*/].f_15 = { -236.1554f, -2377.2727f, 8.8063f };
	Local_51[2 /*44*/].f_15 = { -187.78954f, -2378.7148f, 8.31869f };
	Local_51[3 /*44*/].f_15 = { -192.89276f, -2376.3665f, 8.31857f };
	Local_51[4 /*44*/].f_15 = { -205.20845f, -2378.4214f, 8.31857f };
	Local_51[5 /*44*/].f_15 = { -213.6559f, -2378.896f, 8.3191f };
	Local_51[7 /*44*/].f_15 = { -216.02234f, -2375.4756f, 8.3191f };
	Local_51[8 /*44*/].f_15 = { -230.85701f, -2375.8645f, 8.31935f };
	Local_51[9 /*44*/].f_15 = { -221.32365f, -2378.4888f, 8.3191f };
	Local_51[10 /*44*/].f_15 = { -233.44698f, -2376.7947f, 8.31911f };
	Local_51[11 /*44*/].f_15 = { -210.47473f, -2367.4248f, 8.31889f };
	Local_51[12 /*44*/].f_15 = { -207.19572f, -2353.8677f, 8.31878f };
	Local_51[13 /*44*/].f_15 = { -211.17357f, -2355.4875f, 8.31854f };
	Local_51[15 /*44*/].f_15 = { -213.0243f, -2388.0735f, 5.00116f };
	Local_51[14 /*44*/].f_15 = { -247.65251f, -2374.1482f, 8.31935f };
	Local_51[16 /*44*/].f_15 = { -216.42989f, -2393.8154f, 5.02178f };
	Local_51[17 /*44*/].f_15 = { -241.69656f, -2375.6316f, 8.31935f };
	Local_51[22 /*44*/].f_15 = { -215.1942f, -2393.873f, 5.0012f };
	Local_51[23 /*44*/].f_15 = { -211.1478f, -2399.805f, 5.0012f };
	Local_51[24 /*44*/].f_15 = { -216.2771f, -2393.3704f, 5.0012f };
	Local_51[25 /*44*/].f_15 = { -216.6585f, -2402.0989f, 5.0012f };
	Local_51[22 /*44*/].f_12 = { -213.717f, -2397.4321f, 5.0012f };
	Local_51[23 /*44*/].f_12 = { -202.8748f, -2411.4336f, 5.0012f };
	Local_51[24 /*44*/].f_12 = { -215.9651f, -2400.3318f, 5.0012f };
	Local_51[25 /*44*/].f_12 = { -205.8522f, -2412.7998f, 5.0012f };
	Local_51[22 /*44*/].f_9 = { -202.8748f, -2411.4336f, 5.0012f };
	Local_51[23 /*44*/].f_9 = { -199.6583f, -2426.8f, 5.0012f };
	Local_51[24 /*44*/].f_9 = { -205.8522f, -2412.7998f, 5.0012f };
	Local_51[25 /*44*/].f_9 = { -206.0718f, -2429.2795f, 5.0004f };
	Local_51[22 /*44*/].f_6 = { -199.6583f, -2426.8f, 5.0012f };
	Local_51[23 /*44*/].f_6 = { -175.3211f, -2452.2039f, 5.013f };
	Local_51[24 /*44*/].f_6 = { -206.0718f, -2429.2795f, 5.0004f };
	Local_51[25 /*44*/].f_6 = { -178.0965f, -2454.5967f, 5.0133f };
	Local_51[22 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000);
	Local_51[23 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
	Local_51[24 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000);
	Local_51[25 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 6000);
	Local_51[22 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[23 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[24 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[25 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[18 /*44*/].f_15 = { -201.4169f, -2400.3948f, 5.0012f };
	Local_51[19 /*44*/].f_15 = { -211.1253f, -2389.9844f, 5.0012f };
	Local_51[20 /*44*/].f_15 = { -197.0782f, -2397.9023f, 5.0013f };
	Local_51[21 /*44*/].f_15 = { -209.4439f, -2388.5757f, 5.0012f };
	Local_51[18 /*44*/].f_12 = { -193.7419f, -2422.9417f, 5.0007f };
	Local_51[19 /*44*/].f_12 = { -202.1372f, -2396.9736f, 5.0012f };
	Local_51[20 /*44*/].f_12 = { -184.749f, -2422.0981f, 5.0013f };
	Local_51[21 /*44*/].f_12 = { -198.5648f, -2396.6946f, 5.0013f };
	Local_51[18 /*44*/].f_9 = { -182.8242f, -2430.242f, 5.0013f };
	Local_51[19 /*44*/].f_9 = { -193.7419f, -2422.9417f, 5.0007f };
	Local_51[20 /*44*/].f_9 = { -178.9606f, -2429.846f, 5.0013f };
	Local_51[21 /*44*/].f_9 = { -184.749f, -2422.0981f, 5.0013f };
	Local_51[18 /*44*/].f_6 = { -169.6456f, -2449.3494f, 5.0139f };
	Local_51[19 /*44*/].f_6 = { -182.8242f, -2430.242f, 5.0013f };
	Local_51[20 /*44*/].f_6 = { -172.6127f, -2450.1057f, 5.0129f };
	Local_51[21 /*44*/].f_6 = { -178.9606f, -2429.846f, 5.0013f };
	Local_51[18 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000);
	Local_51[19 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[20 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000);
	Local_51[21 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[18 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[19 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[20 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[21 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[26 /*44*/].f_15 = { -212.01079f, -2386.4585f, 5.00033f };
	Local_51[27 /*44*/].f_15 = { -217.41843f, -2391.9058f, 5.00033f };
	Local_51[26 /*44*/].f_12 = { -212.01079f, -2386.4585f, 5.00033f };
	Local_51[27 /*44*/].f_12 = { -217.41843f, -2391.9058f, 5.00033f };
	Local_51[26 /*44*/].f_9 = { -213.717f, -2397.4321f, 5.0012f };
	Local_51[27 /*44*/].f_9 = { -215.9651f, -2400.3318f, 5.0012f };
	Local_51[26 /*44*/].f_6 = { -202.8748f, -2411.4336f, 5.0012f };
	Local_51[27 /*44*/].f_6 = { -205.8522f, -2412.7998f, 5.0012f };
	Local_51[26 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 26000);
	Local_51[27 /*44*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 26000);
	Local_51[26 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[27 /*44*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(20000, 21000);
	Local_51[28 /*44*/].f_3 = { -76.5442f, -2581.7407f, 5.0052f };
	Local_51[28 /*44*/].f_21 = 267.4709f;
	Local_52[0 /*7*/].f_2 = { -83.8f, -2365.8125f, 14.5418f };
	Local_52[1 /*7*/].f_2 = { -128.1432f, -2366.0024f, 8.3193f };
	Local_52[2 /*7*/].f_2 = { -187.9897f, -2365.4224f, 8.3193f };
	Local_52[3 /*7*/].f_2 = { -221.3571f, -2375.6523f, 12.3325f };
	Local_50[4 /*15*/].f_2 = { -262.60956f, -2401.8125f, 5.00131f };
	Local_50[4 /*15*/].f_5 = 0f;
	Local_50[4 /*15*/].f_8 = { -178.86514f, -2511.7888f, 5.14006f };
	Local_50[5 /*15*/].f_2 = { -60.731f, -2407.5872f, 5.00087f };
	Local_50[5 /*15*/].f_5 = 0f;
	Local_50[5 /*15*/].f_8 = { -156.21315f, -2516.6704f, 5.00866f };
}

void func_1032(int iParam0)//Position - 0xAA126
{
	int iVar0;
	RECORDING::REPLAY_STOP_EVENT();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (__LIB_0__::func_715(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	if (STREAMING::IS_IPL_ACTIVE("SUNK_SHIP_FIRE"))
	{
		STREAMING::REMOVE_IPL("SUNK_SHIP_FIRE");
	}
	if (__LIB_16__::func_903(func_1038()))
	{
		__LIB_17__::func_427(func_1038(), 1);
	}
	else
	{
		if (__LIB_14__::func_466() == 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Global_95697 = 1;
			}
		}
		__LIB_17__::func_425(0);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2099))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2099, 11);
	}
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		if (__LIB_16__::func_903(Local_50[iVar0 /*15*/]))
		{
			if (Local_50[iVar0 /*15*/] != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_50[iVar0 /*15*/], true))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_50[iVar0 /*15*/]));
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_50[iVar0 /*15*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_50[iVar0 /*15*/].f_1));
			}
		}
		iVar0++;
	}
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	iVar0 = 0;
	while (iVar0 <= (29 - 1))
	{
		if (__LIB_16__::func_903(Local_51[iVar0 /*44*/]))
		{
			if (HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*44*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_51[iVar0 /*44*/].f_1));
			}
			PED::SET_PED_KEEP_TASK(Local_51[iVar0 /*44*/], true);
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_51[iVar0 /*44*/], true))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_51[iVar0 /*44*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (__LIB_16__::func_903(Local_49[iVar0 /*2*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_49[iVar0 /*2*/], true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_49[iVar0 /*2*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_49[iVar0 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_49[iVar0 /*2*/].f_1));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_52[iVar0 /*7*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_52[iVar0 /*7*/].f_1));
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_SHIP_ALARMS"))
	{
		AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_SHIP_ALARMS", true);
	}
	HUD::CLEAR_PRINTS();
	STREAMING::CLEAR_FOCUS();
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	OBJECT::SET_PICKUP_GENERATION_RANGE_MULTIPLIER(1f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_263))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_263);
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::CLEAR_PED_NON_CREATION_AREA();
	__LIB_0__::func_325();
	if (HUD::DOES_BLIP_EXIST(iLocal_258))
	{
		HUD::REMOVE_BLIP(&iLocal_258);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_267))
	{
		HUD::REMOVE_BLIP(&iLocal_267);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_281))
	{
		HUD::REMOVE_BLIP(&iLocal_281);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_275))
	{
		OBJECT::DELETE_OBJECT(&iLocal_275);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_276))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_276, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_276);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_268))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_268, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_268);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_296))
	{
		OBJECT::DELETE_OBJECT(&iLocal_296);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_277)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_277[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_277[iVar0]));
		}
		iVar0++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_297))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_297, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_294))
	{
		CAM::DESTROY_CAM(iLocal_294, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_295))
	{
		CAM::DESTROY_CAM(iLocal_295, false);
	}
	__LIB_13__::func_815(&Local_219, 1, 0);
	__LIB_16__::func_21(&Local_219, 0);
	__LIB_0__::func_506(128, 0);
	__LIB_15__::func_959(&uLocal_239);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_424(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (__LIB_16__::func_903(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
	}
	MISC::SET_TIME_SCALE(1f);
	if (CAM::IS_SCREEN_FADED_OUT() && iParam0)
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	__LIB_14__::func_826(1);
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_408))
	{
		AUDIO::STOP_SOUND(iLocal_408);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_409))
	{
		AUDIO::STOP_SOUND(iLocal_409);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_410))
	{
		AUDIO::STOP_SOUND(iLocal_410);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_411))
	{
		AUDIO::STOP_SOUND(iLocal_411);
	}
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buffalo"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), false);
	__LIB_0__::func_424(0);
	func_661(func_1038());
	func_661(func_1037());
	func_661(func_150());
	__LIB_15__::func_306(0);
	if (GRAPHICS::GET_USINGSEETHROUGH())
	{
		GRAPHICS::SET_SEETHROUGH(false);
	}
	GRAPHICS::SEETHROUGH_RESET();
	__LIB_17__::func_88(&Local_477);
}

void func_1035()//Position - 0xAA5EB
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
				if (!func_305(iVar0))
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

int func_1037()//Position - 0xAA69C
{
	return Local_50[0 /*15*/];
}

int func_1038()//Position - 0xAA6A9
{
	return Local_50[1 /*15*/];
}

