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
	var uLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 16;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 16;
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
	struct<3> Local_436 = { 0, 0, 0 } ;
	int iLocal_437 = 0;
	var uLocal_438[4] = { 0, 0, 0, 0 };
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 4;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 4;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 4;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 4;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 4;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 4;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482[4] = { 0, 0, 0, 0 };
	int iLocal_483[3] = { 0, 0, 0 };
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	var uLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	struct<3> Local_494 = { 0, 0, 0 } ;
	struct<3> Local_495 = { 0, 0, 0 } ;
	struct<3> Local_496 = { 0, 0, 0 } ;
	struct<3> Local_497 = { 0, 0, 0 } ;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	int iLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 16;
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
	struct<3> Local_669 = { 0, 0, 0 } ;
	struct<3> Local_670 = { 0, 0, 0 } ;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	struct<3> Local_676 = { 0, 0, 0 } ;
	float fLocal_677 = 0f;
	float fLocal_678 = 0f;
	float fLocal_679 = 0f;
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
	struct<3> Local_696 = { 0, 0, 0 } ;
	struct<3> Local_697 = { 0, 0, 0 } ;
	var uLocal_698 = 16;
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
	struct<3> Local_869 = { 0, 0, 0 } ;
	struct<3> Local_870 = { 0, 0, 0 } ;
	struct<3> Local_871 = { 0, 0, 0 } ;
	float fLocal_872 = 0f;
	float fLocal_873 = 0f;
	float fLocal_874 = 0f;
	var uLocal_875 = 16;
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
	int iLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	struct<3> Local_1047 = { 0, 0, 0 } ;
	struct<3> Local_1048 = { 0, 0, 0 } ;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	float fLocal_1052 = 0f;
	float fLocal_1053 = 0f;
	float fLocal_1054 = 0f;
	float fLocal_1055 = 0f;
	float fLocal_1056 = 0f;
	var uLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 263;
	var uLocal_1063 = 0;
	var uLocal_1064 = 1065353216;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	struct<3> Local_1069 = { 0, 0, 0 } ;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 2;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	struct<3> Local_1076 = { 0, 0, 0 } ;
	struct<3> Local_1077 = { 0, 0, 0 } ;
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
	var uLocal_1089 = 49;
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
	var uLocal_1139 = 2;
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
	struct<3> Local_1158 = { 0, 0, 0 } ;
	var uLocal_1159 = 0;
	struct<3> Local_1160 = { 0, 0, 0 } ;
	var uLocal_1161 = 0;
	char* sLocal_1162 = NULL;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	struct<3> Local_1166 = { 0, 0, 0 } ;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	int iLocal_1173 = 0;
	int iLocal_1174 = 0;
	int iLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	struct<3> Local_1185 = { 0, 0, 0 } ;
	struct<3> Local_1186 = { 0, 0, 0 } ;
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
	float fLocal_1211 = 0f;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 7;
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
	var uLocal_1227 = 3;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	int iLocal_1234 = 0;
	int iLocal_1235 = 0;
	int iLocal_1236 = 0;
	int iLocal_1237 = 0;
	struct<3> Local_1238 = { 0, 0, 0 } ;
	struct<3> Local_1239 = { 0, 0, 0 } ;
	int iLocal_1240 = 0;
	struct<3> Local_1241 = { 0, 0, 0 } ;
	float fLocal_1242 = 0f;
	float fLocal_1243 = 0f;
	float fLocal_1244 = 0f;
	int iLocal_1245 = 0;
	int iLocal_1246 = 0;
	var uLocal_1247 = 16;
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
	int iLocal_1412 = 0;
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
	char cLocal_1433[32] = "";
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	char* sLocal_1438 = NULL;
	char* sLocal_1439 = NULL;
	var uLocal_1440 = 263;
	var uLocal_1441 = 0;
	var uLocal_1442 = 1065353216;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	struct<3> Local_1448 = { 0, 0, 0 } ;
	struct<3> Local_1449 = { 0, 0, 0 } ;
	var uLocal_1450 = 263;
	var uLocal_1451 = 0;
	var uLocal_1452 = 1065353216;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	float fLocal_1461 = 0f;
	int iLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
	int iLocal_1470 = 0;
	int iLocal_1471 = 0;
	int iLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	int iLocal_1478 = 0;
	struct<3> Local_1479 = { 0, 0, 0 } ;
	int iLocal_1480 = 0;
	int iLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
	float fLocal_1487 = 0f;
	float fLocal_1488 = 0f;
	float fLocal_1489 = 0f;
	float fLocal_1490 = 0f;
	float fLocal_1491 = 0f;
	float fLocal_1492 = 0f;
	int iLocal_1493 = 0;
	int iLocal_1494 = 0;
	struct<5> Local_1495 = { 263, 0, 1065353216, 0, 0 } ;
	int iLocal_1496 = 0;
	int iLocal_1497 = 0;
	int iLocal_1498 = 0;
	int iLocal_1499 = 0;
	int iLocal_1500 = 0;
	int iLocal_1501 = 0;
	float fLocal_1502 = 0f;
	float fLocal_1503 = 0f;
	float fLocal_1504 = 0f;
	float fLocal_1505 = 0f;
	float fLocal_1506 = 0f;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	struct<3> Local_1511 = { 0, 0, 0 } ;
	struct<3> Local_1512 = { 0, 0, 0 } ;
	struct<3> Local_1513 = { 0, 0, 0 } ;
	float fLocal_1514 = 0f;
	float fLocal_1515 = 0f;
	float fLocal_1516 = 0f;
	var uLocal_1517 = 16;
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
	var uLocal_1624 = 0;
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
	var uLocal_1665 = 0;
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
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 16;
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
	var uLocal_1706 = 0;
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
	var uLocal_1747 = 0;
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
	var uLocal_1788 = 0;
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
	var uLocal_1829 = 0;
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
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	struct<3> Local_1847 = { 0, 0, 0 } ;
	struct<3> Local_1848 = { 0, 0, 0 } ;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	struct<3> Local_1855 = { 0, 0, 0 } ;
	float fLocal_1856 = 0f;
	float fLocal_1857 = 0f;
	float fLocal_1858 = 0f;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 16;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
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
	var uLocal_1911 = 0;
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
	var uLocal_1952 = 0;
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
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
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
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
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
	struct<3> Local_2033 = { 0, 0, 0 } ;
	struct<3> Local_2034 = { 0, 0, 0 } ;
	int iLocal_2035 = 0;
	int iLocal_2036 = 0;
	int iLocal_2037 = 0;
	int iLocal_2038 = 0;
	int iLocal_2039 = 0;
	int iLocal_2040 = 0;
	int* iLocal_2041 = NULL;
	int iLocal_2042 = 0;
	int iLocal_2043 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<116> Var0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_238 = 1496005418;
	iLocal_239 = -1863079210;
	Local_436 = { 500f, 500f, 500f };
	iLocal_437 = -1;
	iLocal_488 = -1;
	iLocal_489 = -1;
	Local_494 = { 1987.235f, 3052.738f, 46.22f };
	Local_495 = { 1986.785f, 3052.088f, 46.32f };
	Local_496 = { 1987.035f, 3052.288f, 46.34f };
	Local_497 = { 0f, 0f, 53.64f };
	iLocal_500 = 999;
	Local_669 = { -1159.737f, -1520.509f, 9.629f };
	Local_670 = { 0f, 0f, 45f };
	Local_676 = { -1158.2783f, -1521.0677f, 11.3094f };
	fLocal_677 = 0.65f;
	fLocal_678 = 0f;
	fLocal_679 = 35f;
	Local_696 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_697 = { 0f, 0f, 40f };
	Local_869 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_870 = { 0f, 0f, 40f };
	Local_871 = { -1158.2783f, -1521.0677f, 10.8094f };
	fLocal_872 = 0.65f;
	fLocal_873 = -0.16f;
	fLocal_874 = 35f;
	iLocal_1044 = -1;
	Local_1047 = { -440.132f, 1058.52f, 326.69f };
	Local_1048 = { 0f, 0f, 0f };
	fLocal_1052 = 30f;
	fLocal_1053 = 0.38f;
	fLocal_1054 = 0f;
	fLocal_1055 = 0.095f;
	fLocal_1056 = 0.05f;
	iLocal_1058 = -1;
	iLocal_1059 = -1;
	Local_1069 = { 0.2f, 2.2f, 0f };
	Local_1076 = { 0f, 0f, 0f };
	Local_1077 = { Local_1076 };
	Local_1158 = { 0f, 0f, 0f };
	Local_1160 = { 0f, 0f, 0f };
	sLocal_1162 = "FBIPRAU";
	Local_1166 = { 0f, 0f, 0f };
	iLocal_1173 = -1;
	iLocal_1174 = -1;
	iLocal_1175 = -1;
	Local_1185 = { 1276.88f, -1712.571f, 54.415f };
	Local_1186 = { 0f, 0f, -142.02f };
	fLocal_1211 = -0.64f;
	Local_1238 = { 95.84f, -1291.44f, 28.275f };
	Local_1239 = { 0f, 0f, 30f };
	Local_1241 = { 92.83592f, -1291.2959f, 29.36181f };
	fLocal_1242 = 0.35f;
	fLocal_1243 = 0f;
	fLocal_1244 = 40f;
	StringCopy(&cLocal_1433, "jhp1a_sec_arrive", 32);
	sLocal_1438 = "jhp2a_alt";
	sLocal_1439 = "jhp2a_main";
	Local_1448 = { 441.86075f, -1015.75806f, 27.66605f };
	Local_1449 = { -1511.4557f, -654.47925f, 28.23983f };
	fLocal_1461 = 999999f;
	iLocal_1462 = -1;
	iLocal_1485 = 613961892;
	fLocal_1487 = 30f;
	fLocal_1488 = 0.46f;
	fLocal_1489 = 0f;
	fLocal_1490 = -0.02f;
	fLocal_1491 = 0.1f;
	fLocal_1502 = 25f;
	fLocal_1503 = 0.5f;
	fLocal_1504 = 0f;
	fLocal_1505 = -0.005f;
	fLocal_1506 = 0.1f;
	Local_1511 = { -803.523f, 171.887f, 72.321f };
	Local_1512 = { 0f, 0f, -59.24f };
	Local_1513 = { -803.8107f, 172.2809f, 73.0846f };
	fLocal_1514 = 0.35f;
	fLocal_1515 = -0.02f;
	fLocal_1516 = 30f;
	Local_1847 = { 1972.956f, 3812.079f, 32.84f };
	Local_1848 = { 0f, 0f, 31f };
	Local_1855 = { 1972.9822f, 3814.1045f, 33.9045f };
	fLocal_1856 = 0.35f;
	fLocal_1857 = -0.78f;
	fLocal_1858 = 30f;
	Local_2033 = { -1148.219f, -1522.4f, 10.633f };
	Local_2034 = { 0f, 0f, -53.75f };
	Var0.f_1 = 8;
	Var0.f_115.f_7 = 21;
	Var0.f_115.f_8 = 6;
	Var0.f_110 = 0;
	Var0.f_111 = -1;
	Var0.f_0 = 31862/*func_168*/;
	__LIB_38__::func_129();
	while (true)
	{
		if (!Var0.f_106)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
			{
				Var0.f_106 = 1;
				if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(115))
				{
					if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
					{
						func_166(&Var0);
						Var0.f_106 = 0;
					}
					else
					{
						func_164(&Var0);
					}
				}
			}
		}
		if (!__LIB_0__::func_178(38) || __LIB_0__::func_178(46))
		{
			func_164(&Var0);
		}
		func_1(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x4B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_201())
	{
		uParam0->f_109 = MISC::GET_GAME_TIMER() + 2000;
	}
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive)
	{
		if (!Global_97371)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = 0;
				while (iVar0 < Global_97373)
				{
					Global_97362 = Global_97374[iVar0 /*17*/].f_5;
					if (Global_97374[iVar0 /*17*/] == 1 && !Global_97371)
					{
						if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[Global_97374[iVar0 /*17*/].f_6 /*3*/], 1) || BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[Global_97374[iVar0 /*17*/].f_6 /*3*/], 2))
						{
							__LIB_38__::func_36(iVar0);
						}
						else
						{
							switch (Global_97374[iVar0 /*17*/].f_3)
							{
								case 0:
									func_29(iVar0, uParam0);
									break;
								case 1:
									__LIB_42__::func_464(iVar0, uParam0);
									break;
								case 2:
									break;
								}
							}
					}
					iVar0++;
				}
				if (Global_97365 != -1)
				{
					iVar0 = 0;
					while (iVar0 < Global_97373)
					{
						if (!Global_97371)
						{
							if (Global_97374[iVar0 /*17*/].f_5 == Global_97365)
							{
								Global_97372 = iVar0;
								Global_97371 = 1;
								MISC::SET_BIT(&(Global_97374[iVar0 /*17*/].f_10.f_1), 8);
								uParam0->f_112 = 1;
							}
						}
						iVar0++;
					}
					Global_97365 = -1;
				}
			}
		}
		else if (Global_97371 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar1 = __LIB_38__::func_116(Global_97374[Global_97372 /*17*/].f_5);
				iVar2 = __LIB_0__::func_782(&(Global_97374[Global_97372 /*17*/].f_7), Global_97374[Global_97372 /*17*/].f_4, iVar1, uParam0->f_112, 0);
				Global_97362 = -1;
				switch (iVar2)
				{
					case 0:
						Global_97371 = 0;
						uParam0->f_112 = 0;
						break;
					case 1:
						Global_97371 = 0;
						Global_97374[Global_97372 /*17*/].f_1 = 1;
						Global_97372 = -1;
						Global_23010 = 0;
						uParam0->f_112 = 0;
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
							}
						}
						break;
					case 2:
						break;
				}
			}
			else
			{
				if (Global_97374[Global_97372 /*17*/].f_7 != -1)
				{
					__LIB_38__::func_73(&(Global_97374[Global_97372 /*17*/].f_7));
				}
				Global_97372 = -1;
				Global_97371 = 0;
				uParam0->f_112 = 0;
			}
		}
	}
	if (Global_97364 != -1)
	{
		if (Global_97363 == -1 || Global_97363 == Global_97364)
		{
			iVar3 = __LIB_38__::func_56(Global_97364);
			if (iVar3 != -1)
			{
				if (!uParam0->f_1[iVar3 /*13*/])
				{
					Stack.Push(Global_97374[iVar3 /*17*/].f_5);
					Stack.Push(&(Global_97374[iVar3 /*17*/].f_10));
					Stack.Push(&(uParam0->f_1[iVar3 /*13*/]));
					Call_Loc(*uParam0);
				}
				Call_Loc(uParam0->f_1[iVar3 /*13*/].f_2);
				Call_Loc(uParam0->f_1[iVar3 /*13*/].f_4);
				if (StackVal)
				{
					Global_97363 = Global_97374[iVar3 /*17*/].f_10;
					uParam0->f_108 = uParam0->f_1[iVar3 /*13*/].f_3;
					uParam0->f_107 = 1;
					Global_97368 = 0;
					Global_97364 = -1;
				}
			}
			else
			{
				Global_97364 = -1;
			}
		}
	}
	if (Global_97361)
	{
		__LIB_0__::func_189();
		__LIB_1__::func_33(0);
		if ((__LIB_38__::func_72() != 60 && (__LIB_38__::func_72() != 23 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)) && (__LIB_38__::func_72() != 38 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4))
		{
			__LIB_16__::func_309(1, 0);
		}
		else
		{
			__LIB_16__::func_309(1, 1);
		}
	}
	if (__LIB_0__::func_215(3))
	{
		if (uParam0->f_110 != 0)
		{
			uParam0->f_110 = 0;
		}
		if (Global_97367)
		{
			func_166(uParam0);
		}
	}
	else
	{
		uParam0->f_110++;
	}
	if (Global_97363 != -1)
	{
		if (BitTest(Global_91229[Global_97363 /*34*/].f_15, 13))
		{
			if (Global_97367)
			{
				func_164(uParam0);
			}
		}
		else if (uParam0->f_110 > 50)
		{
			func_164(uParam0);
		}
	}
	else if (uParam0->f_110 > 0)
	{
		func_164(uParam0);
	}
	if (Global_97370)
	{
		if (!Global_97369)
		{
			Global_97370 = 0;
		}
	}
}

void func_29(int iParam0, var uParam1)//Position - 0x130D
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = Global_97374[iParam0 /*17*/].f_5;
	iVar1 = 0;
	if (BitTest(Global_32338[Global_97374[iParam0 /*17*/].f_9 /*23*/].f_11, 19))
	{
		iVar1 = __LIB_15__::func_944();
		if (iVar1 > 2 || iVar1 < 0)
		{
			iVar1 = 0;
		}
	}
	Var2 = { Global_32338[Global_97374[iParam0 /*17*/].f_9 /*23*/][iVar1 /*3*/] };
	if (__LIB_38__::func_60(iVar0))
	{
		if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 0))
		{
			Stack.Push(iVar0);
			Stack.Push(&(Global_97374[iParam0 /*17*/].f_10));
			Stack.Push(&(uParam1->f_1[iParam0 /*13*/]));
			Call_Loc(*uParam1);
			__LIB_38__::func_91(&(Global_97374[iParam0 /*17*/].f_10));
		}
		__LIB_42__::func_467(iVar0, Var2, &(uParam1->f_113));
		if (!func_30(iParam0, uParam1))
		{
			return;
		}
	}
	Global_97372 = iParam0;
	Global_97371 = 1;
}

int func_30(int iParam0, var uParam1)//Position - 0x13D7
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<12> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	iVar0 = Global_97374[iParam0 /*17*/].f_5;
	iVar1 = __LIB_15__::func_944();
	if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 0))
	{
		if (__LIB_0__::func_374(iVar1))
		{
			iVar2 = Global_91229[iVar0 /*34*/].f_10;
			fVar3 = __LIB_38__::func_89(__LIB_42__::func_466(iVar2));
			if (__LIB_0__::func_215(__LIB_38__::func_116(iVar0)))
			{
				if (BitTest(Global_91229[iVar0 /*34*/].f_15, 13))
				{
					if (uParam1->f_109 > MISC::GET_GAME_TIMER() || __LIB_38__::func_88(iVar1) == 5)
					{
						if (!Global_94426[iVar0 /*2*/])
						{
							fVar4 = (Global_97374[iParam0 /*17*/].f_10.f_2 * 0.25f);
							if (fVar3 < (fVar4 * fVar4))
							{
								Global_94426[iVar0 /*2*/] = 1;
							}
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_374(__LIB_15__::func_944()))
					{
						Call_Loc(uParam1->f_1[iParam0 /*13*/].f_12);
						if (!StackVal)
						{
							__LIB_38__::func_71(&(Global_96938.f_209));
						}
					}
				}
				if (!Global_94426[iVar0 /*2*/])
				{
					Call_Loc(uParam1->f_1[iParam0 /*13*/].f_12);
					if (!StackVal)
					{
						if (Global_97374[iParam0 /*17*/].f_2)
						{
							Global_97374[iParam0 /*17*/].f_2 = 0;
							Global_94426[iVar0 /*2*/] = 1;
						}
						if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 1))
						{
							if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 9))
							{
								if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 13))
								{
									if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
									{
										HUD::REMOVE_BLIP(&(uParam1->f_114));
									}
									MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 13);
								}
								if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
								{
									__LIB_14__::func_622(iVar2, 1, 0);
								}
								MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
							}
						}
						else
						{
							if (!__LIB_38__::func_87(iVar0))
							{
								if (__LIB_15__::func_276(iVar2) && __LIB_38__::func_59(iVar2))
								{
									__LIB_38__::func_58(iVar2);
									__LIB_38__::func_86(iVar0);
								}
							}
							if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 9))
							{
								if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
								{
									__LIB_14__::func_622(iVar2, 0, 0);
								}
								MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
							}
						}
						if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 4))
						{
							if (__LIB_42__::func_465(iParam0, uParam1))
							{
								return 1;
							}
						}
						if (!Global_97367 && Global_97364 == -1)
						{
							if (!__LIB_38__::func_64())
							{
								if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 6))
								{
									if (fVar3 < (Global_97374[iParam0 /*17*/].f_10.f_4 * Global_97374[iParam0 /*17*/].f_10.f_4))
									{
										__LIB_38__::func_63(iVar0, 3, Global_97374[iParam0 /*17*/].f_10.f_6);
										MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 6);
									}
								}
								else if (fVar3 > ((Global_97374[iParam0 /*17*/].f_10.f_4 * Global_97374[iParam0 /*17*/].f_10.f_4) + 30f))
								{
									__LIB_17__::func_899(iVar0);
									MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 6);
								}
							}
						}
						if (Global_97374[iParam0 /*17*/].f_10.f_5 != 0f)
						{
							if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 7))
							{
								if (fVar3 < (Global_97374[iParam0 /*17*/].f_10.f_5 * Global_97374[iParam0 /*17*/].f_10.f_5))
								{
									__LIB_38__::func_63(Global_97374[iParam0 /*17*/].f_10, 1, Global_97374[iParam0 /*17*/].f_10.f_6);
									MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 7);
								}
							}
							else if (fVar3 > ((Global_97374[iParam0 /*17*/].f_10.f_5 * Global_97374[iParam0 /*17*/].f_10.f_5) + 30f))
							{
								__LIB_17__::func_899(iVar0);
								MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 7);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_374(__LIB_15__::func_944()))
						{
							if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 2))
							{
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_9);
								if (fVar3 < (Global_97374[iParam0 /*17*/].f_10.f_2 * Global_97374[iParam0 /*17*/].f_10.f_2))
								{
									if (!Global_97360)
									{
										if (!Global_97369)
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_2);
											if (BitTest(Global_91229[Global_97374[iParam0 /*17*/].f_5 /*34*/].f_15, 15))
											{
												SCRIPT::REQUEST_SCRIPT(&(Global_91229[Global_97374[iParam0 /*17*/].f_5 /*34*/]));
												SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
											}
											Global_97363 = iVar0;
											uParam1->f_108 = uParam1->f_1[iParam0 /*13*/].f_3;
											uParam1->f_107 = 1;
											MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 2);
											Global_97368 = 1;
											if (!Global_97369)
											{
												Global_97369 = 1;
											}
										}
									}
									else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
									{
										Global_97360 = 0;
									}
								}
							}
							else if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 3))
							{
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_9);
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_2);
								if (Global_97360)
								{
									__LIB_42__::func_463(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
									return 0;
								}
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_4);
								if (StackVal)
								{
									if (BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_15__::func_944()))
									{
										if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 10))
										{
											if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 9))
											{
												if (__LIB_38__::func_158(iVar0))
												{
													MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 9);
												}
												else if (!__LIB_38__::func_64())
												{
													Call_Loc(uParam1->f_1[iParam0 /*13*/].f_5);
													Global_97368 = 0;
													MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 3);
													if (Global_96287 == 0)
													{
														__LIB_38__::func_63(iVar0, 2, Global_97374[iParam0 /*17*/].f_10.f_6);
													}
													if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 11))
													{
														__LIB_17__::func_455(&(uParam1->f_115), 0, 0, 2000, 1, 1, 0, 1);
														Var5.f_7 = 21;
														Var5.f_8 = 6;
														uParam1->f_115 = { Var5 };
														if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
														{
															CAM::DO_SCREEN_FADE_IN(800);
														}
														MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 11);
													}
													if (__LIB_42__::func_465(iParam0, uParam1))
													{
														return 1;
													}
												}
												else
												{
													__LIB_38__::func_117(&(Global_97374[iParam0 /*17*/].f_10));
												}
											}
											else
											{
												Var6 = { __LIB_38__::func_157(iVar0) };
												fVar7 = __LIB_38__::func_89(Var6);
												fVar8 = __LIB_38__::func_84(iVar0);
												if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 13))
												{
													if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
													{
														HUD::REMOVE_BLIP(&(uParam1->f_114));
													}
													uParam1->f_114 = __LIB_0__::func_488(Var6, 0);
													HUD::SET_BLIP_SPRITE(uParam1->f_114, __LIB_38__::func_156(iVar2));
													if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_32338[iVar2 /*23*/].f_20)))
													{
														HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_114, &(Global_32338[iVar2 /*23*/].f_20));
													}
													HUD::SET_BLIP_HIGH_DETAIL(uParam1->f_114, true);
													HUD::SET_BLIP_AS_SHORT_RANGE(uParam1->f_114, false);
													HUD::SET_BLIP_DISPLAY(uParam1->f_114, 4);
													switch (__LIB_15__::func_944())
													{
														case 0:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 42);
															break;
														case 1:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 43);
															break;
														case 2:
															HUD::SET_BLIP_COLOUR(uParam1->f_114, 44);
															break;
													}
													MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 13);
												}
												__LIB_38__::func_83(Var6);
												if (fVar7 < (fVar8 * fVar8))
												{
													PLAYER::FORCE_CLEANUP(8);
													MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 9);
													if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
													{
														if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
														{
															if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
															{
																iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
																if (ENTITY::GET_ENTITY_HEALTH(iVar9) < 1)
																{
																	ENTITY::SET_ENTITY_HEALTH(iVar9, 1, 0);
																}
																if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar9) < 1f)
																{
																	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar9, 1f);
																}
																if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iVar9) < 1f)
																{
																	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar9, 1f);
																}
																if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 25) || (iVar0 == 15 && __LIB_15__::func_944() == 1))
																{
																	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar9))
																	{
																		__LIB_0__::func_213(iVar9, 2.5f, 2, 0.5f, 1, 1, 0);
																	}
																}
															}
														}
													}
													if (BitTest(Global_91229[iVar0 /*34*/].f_15, 23))
													{
														return 1;
													}
													else
													{
														MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 10);
													}
												}
											}
										}
										else
										{
											bVar10 = false;
											if (__LIB_13__::func_692(Global_91229[iVar0 /*34*/].f_13, Global_91229[iVar0 /*34*/].f_14))
											{
												bVar10 = true;
											}
											if (__LIB_38__::func_162(iVar0, &(uParam1->f_115), bVar10, 1, 0, 1, 0))
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), __LIB_38__::func_82(iVar0), true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_38__::func_81(iVar0));
													if (__LIB_38__::func_80(iVar0))
													{
														if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
														{
															PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
														}
														PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
													}
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
													CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
													CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
												}
												MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 10);
												MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 11);
											}
										}
									}
								}
							}
							else
							{
								if (!Global_97369)
								{
									Global_97369 = 1;
								}
								if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 1))
								{
									if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
									{
										if (BitTest(Global_91229[iVar0 /*34*/].f_11, __LIB_15__::func_944()))
										{
											bVar11 = true;
											if (BitTest(Global_91229[iVar0 /*34*/].f_15, 13))
											{
												if (BitTest(Global_2883591[iVar0], 0))
												{
													bVar11 = true;
												}
												else
												{
													switch (__LIB_15__::func_944())
													{
														case 0:
															if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 28))
															{
																bVar11 = false;
															}
															break;
														case 1:
														case 2:
															bVar11 = false;
															break;
														}
													}
											}
											if (bVar11)
											{
												if (!Global_97361)
												{
													__LIB_38__::func_83(__LIB_42__::func_466(iVar2));
												}
											}
										}
									}
								}
								if (fVar3 < 56.25f)
								{
									if (!Global_97370)
									{
										Global_97370 = 1;
									}
								}
								else if (Global_97370)
								{
									Global_97370 = 0;
								}
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_8);
								__LIB_38__::func_79();
								if ((__LIB_38__::func_158(iVar0) || !BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_15__::func_944())) || __LIB_38__::func_64())
								{
									if (Global_97361)
									{
										__LIB_17__::func_467();
									}
									if (!(__LIB_38__::func_64() && iVar0 == 92))
									{
										__LIB_38__::func_117(&(Global_97374[iParam0 /*17*/].f_10));
										__LIB_38__::func_184();
										MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 3);
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_3);
										MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 2);
										if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 5))
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_1);
										}
										Global_97369 = 0;
									}
								}
								else
								{
									Call_Loc(uParam1->f_1[iParam0 /*13*/].f_11);
									if (StackVal)
									{
										if (BitTest(Global_91229[iVar0 /*34*/].f_11, __LIB_15__::func_944()))
										{
											__LIB_0__::func_697("AM_H_DISRU" /* GXT: The mission has been disrupted. Return later to start the mission. */, 2, 0, 10000, 10000, 7, 0, 0, 0);
										}
										if (Global_97361)
										{
											__LIB_17__::func_467();
										}
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_6);
										__LIB_38__::func_117(&(Global_97374[iParam0 /*17*/].f_10));
										MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 3);
										__LIB_2__::func_712(&(Global_112096.f_35), 262144);
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_3);
										MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 2);
										if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 5))
										{
											Call_Loc(uParam1->f_1[iParam0 /*13*/].f_1);
										}
										__LIB_0__::func_379(iVar0, 1);
										Global_97369 = 0;
									}
									else if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 4))
									{
										if (__LIB_42__::func_465(iParam0, uParam1))
										{
											Global_97369 = 0;
											return 1;
										}
									}
								}
							}
						}
					}
					else
					{
						if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 1))
						{
							if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
							{
								__LIB_14__::func_622(iVar2, 0, 0);
							}
							if (Global_97361)
							{
								__LIB_17__::func_467();
							}
							MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
						}
						if (!Global_97374[iParam0 /*17*/].f_2)
						{
							Global_97374[iParam0 /*17*/].f_2 = 1;
						}
						__LIB_42__::func_463(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
				else
				{
					if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 1))
					{
						if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 11))
						{
							__LIB_14__::func_622(iVar2, 0, 0);
						}
						__LIB_38__::func_117(&(Global_97374[iParam0 /*17*/].f_10));
						MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
					}
					if (Global_97363 == Global_97374[iParam0 /*17*/].f_10)
					{
						__LIB_42__::func_463(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
			}
			else if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 2))
			{
				if (Global_97363 != -1)
				{
					if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 8))
					{
						__LIB_42__::func_463(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
			}
			if (Global_78581 != Global_97363)
			{
				if (Global_97363 == Global_97374[iParam0 /*17*/].f_5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (fVar3 > (Global_97374[iParam0 /*17*/].f_10.f_3 * Global_97374[iParam0 /*17*/].f_10.f_3))
						{
							__LIB_42__::func_463(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 1);
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_164(var uParam0)//Position - 0x79F3
{
	int iVar0;
	func_166(uParam0);
	iVar0 = 0;
	while (iVar0 < Global_97373)
	{
		uParam0->f_1[iVar0 /*13*/] = 0;
		MISC::CLEAR_BIT(&(Global_97374[iVar0 /*17*/].f_10.f_1), 0);
		if (BitTest(Global_97374[iVar0 /*17*/].f_10.f_1, 1))
		{
			__LIB_14__::func_622(Global_97374[iVar0 /*17*/].f_9, 0, 0);
			MISC::CLEAR_BIT(&(Global_97374[iVar0 /*17*/].f_10.f_1), 1);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_114))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_114));
	}
	__LIB_38__::func_119();
}

void func_166(var uParam0)//Position - 0x7A95
{
	int iVar0;
	int iVar1;
	struct<165> Var2;
	iVar0 = __LIB_38__::func_56(Global_97363);
	if (iVar0 != -1)
	{
		if (BitTest(Global_97374[iVar0 /*17*/].f_10.f_1, 0) && uParam0->f_1[iVar0 /*13*/])
		{
			__LIB_42__::func_463(&(Global_97374[iVar0 /*17*/].f_10), &(uParam0->f_1[iVar0 /*13*/]), &(uParam0->f_107), 0);
		}
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest(Global_97374[iVar0 /*17*/].f_10.f_1, 0) && uParam0->f_1[iVar0 /*13*/])
		{
			__LIB_42__::func_463(&(Global_97374[iVar0 /*17*/].f_10), &(uParam0->f_1[iVar0 /*13*/]), &(uParam0->f_107), 0);
		}
		if (BitTest(Global_97374[iVar0 /*17*/].f_10.f_1, 10) || BitTest(Global_97374[iVar0 /*17*/].f_10.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Global_97374[iVar0 /*17*/].f_10.f_1), 10);
			MISC::CLEAR_BIT(&(Global_97374[iVar0 /*17*/].f_10.f_1), 11);
			__LIB_17__::func_455(&(uParam0->f_115), 0, 0, 2000, 1, 1, 0, 1);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_96938[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 18)
	{
		Global_96938.f_9[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_96938.f_28[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_96938.f_37[iVar1] = 0;
		iVar1++;
	}
	Var2 = 16;
	Global_96938.f_44 = { Var2 };
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	Global_97369 = 0;
	Global_97368 = 0;
	Global_97363 = -1;
	Global_97367 = 0;
	if (uParam0->f_107)
	{
		Call_Loc(uParam0->f_108);
		uParam0->f_107 = 0;
	}
}

void func_168(int iParam0, var uParam1, var uParam2)//Position - 0x7C76
{
	switch (iParam0)
	{
		case 3:
			func_954(uParam1, iParam0, 200f, 210f, 50f, 0, 0f, 4);
			uParam2->f_1 = 586675/*__LIB_0__::func_467*/;
			uParam2->f_2 = 586658/*__LIB_38__::func_144*/;
			uParam2->f_3 = 586641/*__LIB_38__::func_143*/;
			uParam2->f_4 = 586616/*__LIB_38__::func_142*/;
			uParam2->f_5 = 586515/*__LIB_38__::func_146*/;
			uParam2->f_6 = 586492/*__LIB_38__::func_141*/;
			uParam2->f_7 = 586469/*__LIB_38__::func_141*/;
			uParam2->f_10 = 586376/*func_946*/;
			uParam2->f_11 = 586367/*__LIB_0__::func_114*/;
			uParam2->f_12 = 586358/*__LIB_0__::func_114*/;
			uParam2->f_8 = 586350/*__LIB_0__::func_467*/;
			uParam2->f_9 = 586342/*__LIB_0__::func_467*/;
			break;
		case 4:
			func_954(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 586334/*__LIB_0__::func_467*/;
			uParam2->f_2 = 586314/*__LIB_38__::func_138*/;
			uParam2->f_3 = 586302/*__LIB_38__::func_98*/;
			uParam2->f_4 = 586283/*__LIB_38__::func_137*/;
			uParam2->f_5 = 586226/*__LIB_38__::func_140*/;
			uParam2->f_6 = 586207/*__LIB_38__::func_136*/;
			uParam2->f_7 = 586188/*__LIB_38__::func_136*/;
			uParam2->f_10 = 586072/*func_934*/;
			uParam2->f_11 = 586063/*__LIB_0__::func_114*/;
			uParam2->f_12 = 586054/*__LIB_0__::func_114*/;
			uParam2->f_8 = 585939/*__LIB_38__::func_139*/;
			uParam2->f_9 = 585931/*__LIB_0__::func_467*/;
			break;
		case 5:
			func_954(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 585923/*__LIB_0__::func_467*/;
			uParam2->f_2 = 585903/*__LIB_38__::func_138*/;
			uParam2->f_3 = 585891/*__LIB_38__::func_98*/;
			uParam2->f_4 = 585872/*__LIB_38__::func_137*/;
			uParam2->f_5 = 585864/*__LIB_0__::func_467*/;
			uParam2->f_6 = 585856/*__LIB_0__::func_467*/;
			uParam2->f_7 = 585848/*__LIB_0__::func_467*/;
			uParam2->f_10 = 585756/*func_922*/;
			uParam2->f_11 = 585747/*__LIB_0__::func_114*/;
			uParam2->f_12 = 585725/*__LIB_38__::func_167*/;
			uParam2->f_8 = 585610/*func_919*/;
			uParam2->f_9 = 585602/*__LIB_0__::func_467*/;
			break;
		case 6:
			func_954(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 585594/*__LIB_0__::func_467*/;
			uParam2->f_2 = 585574/*__LIB_38__::func_138*/;
			uParam2->f_3 = 585562/*__LIB_38__::func_98*/;
			uParam2->f_4 = 585543/*__LIB_38__::func_137*/;
			uParam2->f_5 = 585535/*__LIB_0__::func_467*/;
			uParam2->f_6 = 585527/*__LIB_0__::func_467*/;
			uParam2->f_7 = 585519/*__LIB_0__::func_467*/;
			uParam2->f_10 = 585419/*func_910*/;
			uParam2->f_11 = 585410/*__LIB_0__::func_114*/;
			uParam2->f_12 = 585388/*__LIB_38__::func_167*/;
			uParam2->f_8 = 585273/*func_907*/;
			uParam2->f_9 = 585265/*__LIB_0__::func_467*/;
			break;
		case 7:
			func_954(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 585257/*__LIB_0__::func_467*/;
			uParam2->f_2 = 585237/*__LIB_38__::func_138*/;
			uParam2->f_3 = 585225/*__LIB_38__::func_98*/;
			uParam2->f_4 = 585206/*__LIB_38__::func_137*/;
			uParam2->f_5 = 585118/*__LIB_38__::func_168*/;
			uParam2->f_6 = 585099/*__LIB_38__::func_136*/;
			uParam2->f_7 = 585080/*__LIB_38__::func_136*/;
			uParam2->f_10 = 584988/*func_898*/;
			uParam2->f_11 = 584979/*__LIB_0__::func_114*/;
			uParam2->f_12 = 584957/*__LIB_38__::func_167*/;
			uParam2->f_8 = 584809/*func_894*/;
			uParam2->f_9 = 584801/*__LIB_0__::func_467*/;
			break;
		case 8:
			func_954(uParam1, iParam0, 300f, 335f, 50f, 0, 0, 0);
			uParam2->f_1 = 584748/*func_892*/;
			uParam2->f_2 = 584554/*func_890*/;
			uParam2->f_3 = 584482/*func_888*/;
			uParam2->f_4 = 583448/*func_884*/;
			uParam2->f_5 = 581920/*func_883*/;
			uParam2->f_6 = 581768/*func_882*/;
			uParam2->f_7 = 581616/*func_881*/;
			uParam2->f_10 = 579600/*func_878*/;
			uParam2->f_11 = 579181/*func_877*/;
			uParam2->f_12 = 579172/*__LIB_0__::func_114*/;
			uParam2->f_8 = 579164/*__LIB_0__::func_467*/;
			uParam2->f_9 = 579156/*__LIB_0__::func_467*/;
			break;
		case 9:
			func_954(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 579148/*__LIB_0__::func_467*/;
			uParam2->f_2 = 579043/*func_871*/;
			uParam2->f_3 = 579024/*__LIB_38__::func_154*/;
			uParam2->f_4 = 578998/*__LIB_38__::func_123*/;
			uParam2->f_5 = 578981/*func_868*/;
			uParam2->f_6 = 578829/*func_867*/;
			uParam2->f_7 = 578731/*func_866*/;
			uParam2->f_10 = 578274/*func_864*/;
			uParam2->f_11 = 577935/*func_863*/;
			uParam2->f_12 = 577926/*__LIB_0__::func_114*/;
			uParam2->f_8 = 576402/*func_861*/;
			uParam2->f_9 = 576394/*__LIB_0__::func_467*/;
			break;
		case 10:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 576386/*__LIB_0__::func_467*/;
			uParam2->f_2 = 576378/*__LIB_0__::func_467*/;
			uParam2->f_3 = 576359/*__LIB_38__::func_154*/;
			uParam2->f_4 = 576350/*__LIB_0__::func_109*/;
			uParam2->f_5 = 576342/*__LIB_0__::func_467*/;
			uParam2->f_6 = 576334/*__LIB_0__::func_467*/;
			uParam2->f_7 = 576326/*__LIB_0__::func_467*/;
			uParam2->f_10 = 576254/*func_852*/;
			uParam2->f_11 = 576245/*__LIB_0__::func_114*/;
			uParam2->f_12 = 576236/*__LIB_0__::func_114*/;
			uParam2->f_8 = 576153/*func_849*/;
			uParam2->f_9 = 576145/*__LIB_0__::func_467*/;
			break;
		case 59:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 576137/*__LIB_0__::func_467*/;
			uParam2->f_2 = 576129/*__LIB_0__::func_467*/;
			uParam2->f_3 = 576117/*func_841*/;
			uParam2->f_4 = 576108/*__LIB_0__::func_109*/;
			uParam2->f_5 = 576074/*func_843*/;
			uParam2->f_6 = 576062/*func_841*/;
			uParam2->f_7 = 576050/*func_841*/;
			uParam2->f_10 = 576030/*func_840*/;
			uParam2->f_11 = 576021/*__LIB_0__::func_114*/;
			uParam2->f_12 = 576012/*__LIB_0__::func_114*/;
			uParam2->f_8 = 575560/*func_836*/;
			uParam2->f_9 = 575552/*__LIB_0__::func_467*/;
			break;
		case 45:
			func_954(uParam1, iParam0, 100f, 125f, 50f, 0, 0, 0);
			uParam2->f_1 = 575512/*func_834*/;
			uParam2->f_2 = 575486/*func_833*/;
			uParam2->f_3 = 575460/*func_832*/;
			uParam2->f_4 = 575421/*func_831*/;
			uParam2->f_5 = 560879/*func_823*/;
			uParam2->f_6 = 560754/*func_822*/;
			uParam2->f_7 = 560609/*func_820*/;
			uParam2->f_10 = 560364/*func_819*/;
			uParam2->f_11 = 560149/*func_818*/;
			uParam2->f_12 = 560140/*__LIB_0__::func_114*/;
			uParam2->f_8 = 556132/*func_810*/;
			uParam2->f_9 = 556124/*__LIB_0__::func_467*/;
			break;
		case 14:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 556116/*__LIB_0__::func_467*/;
			uParam2->f_2 = 556033/*func_807*/;
			uParam2->f_3 = 556014/*__LIB_38__::func_154*/;
			uParam2->f_4 = 555988/*__LIB_38__::func_123*/;
			uParam2->f_5 = 555980/*__LIB_0__::func_467*/;
			uParam2->f_6 = 555972/*__LIB_0__::func_467*/;
			uParam2->f_7 = 555964/*__LIB_0__::func_467*/;
			uParam2->f_10 = 555828/*func_801*/;
			uParam2->f_11 = 555819/*__LIB_0__::func_114*/;
			uParam2->f_12 = 555810/*__LIB_0__::func_114*/;
			uParam2->f_8 = 555802/*__LIB_0__::func_467*/;
			uParam2->f_9 = 555794/*__LIB_0__::func_467*/;
			break;
		case 15:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 5, 0, 0);
			uParam2->f_1 = 555786/*__LIB_0__::func_467*/;
			uParam2->f_2 = 555778/*__LIB_0__::func_467*/;
			uParam2->f_3 = 555770/*__LIB_0__::func_467*/;
			uParam2->f_4 = 555761/*__LIB_0__::func_109*/;
			uParam2->f_5 = 555739/*func_792*/;
			uParam2->f_6 = 555727/*__LIB_38__::func_132*/;
			uParam2->f_7 = 555715/*__LIB_38__::func_132*/;
			uParam2->f_10 = 555640/*func_789*/;
			uParam2->f_11 = 555631/*__LIB_0__::func_114*/;
			uParam2->f_12 = 555622/*__LIB_0__::func_114*/;
			uParam2->f_8 = 555614/*__LIB_0__::func_467*/;
			uParam2->f_9 = 555606/*__LIB_0__::func_467*/;
			break;
		case 16:
			func_954(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 555598/*__LIB_0__::func_467*/;
			uParam2->f_2 = 555581/*func_783*/;
			uParam2->f_3 = 555564/*func_782*/;
			uParam2->f_4 = 555539/*func_781*/;
			uParam2->f_5 = 555526/*func_780*/;
			uParam2->f_6 = 555513/*func_778*/;
			uParam2->f_7 = 555500/*func_778*/;
			uParam2->f_10 = 555359/*func_777*/;
			uParam2->f_11 = 555350/*__LIB_0__::func_114*/;
			uParam2->f_12 = 555341/*__LIB_0__::func_114*/;
			uParam2->f_8 = 555333/*__LIB_0__::func_467*/;
			uParam2->f_9 = 555325/*__LIB_0__::func_467*/;
			break;
		case 91:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 555313/*func_772*/;
			uParam2->f_2 = 555269/*func_771*/;
			uParam2->f_3 = 555225/*func_770*/;
			uParam2->f_4 = 555166/*func_769*/;
			uParam2->f_5 = 554860/*func_768*/;
			uParam2->f_6 = 554804/*func_767*/;
			uParam2->f_7 = 554748/*func_766*/;
			uParam2->f_10 = 554255/*func_765*/;
			uParam2->f_11 = 554144/*func_764*/;
			uParam2->f_12 = 554135/*__LIB_0__::func_114*/;
			uParam2->f_8 = 552913/*func_760*/;
			uParam2->f_9 = 552776/*func_759*/;
			break;
		case 93:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 552768/*__LIB_0__::func_467*/;
			uParam2->f_2 = 552754/*func_757*/;
			uParam2->f_3 = 552662/*func_754*/;
			uParam2->f_4 = 552625/*func_752*/;
			uParam2->f_5 = 552594/*func_750*/;
			uParam2->f_6 = 552582/*__LIB_38__::func_132*/;
			uParam2->f_7 = 552570/*__LIB_38__::func_132*/;
			uParam2->f_10 = 552498/*func_747*/;
			uParam2->f_11 = 552489/*__LIB_0__::func_114*/;
			uParam2->f_12 = 552480/*__LIB_0__::func_114*/;
			uParam2->f_8 = 552472/*__LIB_0__::func_467*/;
			uParam2->f_9 = 552464/*__LIB_0__::func_467*/;
			break;
		case 92:
			func_954(uParam1, iParam0, 550f, 580f, 580f, 5, 900f, 2);
			uParam2->f_1 = 552395/*func_742*/;
			uParam2->f_2 = 552332/*func_741*/;
			uParam2->f_3 = 552279/*func_740*/;
			uParam2->f_4 = 552161/*func_739*/;
			uParam2->f_5 = 549875/*func_734*/;
			uParam2->f_6 = 549772/*func_733*/;
			uParam2->f_7 = 549617/*func_732*/;
			uParam2->f_10 = 548953/*func_729*/;
			uParam2->f_11 = 548898/*__LIB_38__::func_104*/;
			uParam2->f_12 = 548312/*func_725*/;
			uParam2->f_8 = 547513/*func_723*/;
			uParam2->f_9 = 546851/*func_717*/;
			break;
		case 39:
			func_954(uParam1, iParam0, 290f, 300f, 50f, 0, 0, 0);
			uParam2->f_1 = 546843/*__LIB_0__::func_467*/;
			uParam2->f_2 = 546489/*func_712*/;
			uParam2->f_3 = 546113/*__LIB_38__::func_160*/;
			uParam2->f_4 = 545745/*__LIB_38__::func_153*/;
			uParam2->f_5 = 544904/*func_700*/;
			uParam2->f_6 = 544794/*func_699*/;
			uParam2->f_7 = 544696/*func_698*/;
			uParam2->f_10 = 544158/*func_696*/;
			uParam2->f_11 = 543811/*func_695*/;
			uParam2->f_12 = 543802/*__LIB_0__::func_114*/;
			uParam2->f_8 = 543163/*func_693*/;
			uParam2->f_9 = 543155/*__LIB_0__::func_467*/;
			break;
		case 65:
			func_954(uParam1, iParam0, 25f, 35f, 50f, 0, 0, 0);
			uParam2->f_1 = 543147/*__LIB_0__::func_467*/;
			uParam2->f_2 = 543086/*func_690*/;
			uParam2->f_3 = 543035/*func_689*/;
			uParam2->f_4 = 542971/*func_688*/;
			uParam2->f_5 = 525506/*func_682*/;
			uParam2->f_6 = 525437/*func_681*/;
			uParam2->f_7 = 525309/*func_679*/;
			uParam2->f_10 = 525265/*func_678*/;
			uParam2->f_11 = 525030/*func_677*/;
			uParam2->f_12 = 525000/*func_676*/;
			uParam2->f_8 = 522746/*func_665*/;
			uParam2->f_9 = 522738/*__LIB_0__::func_467*/;
			break;
		case 76:
			func_954(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 522682/*func_663*/;
			uParam2->f_2 = 522578/*func_662*/;
			uParam2->f_3 = 522505/*func_661*/;
			uParam2->f_4 = 522348/*func_660*/;
			uParam2->f_5 = 520641/*func_654*/;
			uParam2->f_6 = 520404/*func_652*/;
			uParam2->f_7 = 520312/*func_651*/;
			uParam2->f_10 = 520210/*func_650*/;
			uParam2->f_11 = 520094/*func_649*/;
			uParam2->f_12 = 520085/*__LIB_0__::func_114*/;
			uParam2->f_8 = 515847/*func_630*/;
			uParam2->f_9 = 515706/*func_629*/;
			break;
		case 46:
			func_954(uParam1, iParam0, 200f, 225f, 50f, 0, 0, 0);
			uParam2->f_1 = 515690/*func_628*/;
			uParam2->f_2 = 515628/*func_627*/;
			uParam2->f_3 = 515547/*func_626*/;
			uParam2->f_4 = 99068/*func_298*/;
			uParam2->f_5 = 53442/*func_211*/;
			uParam2->f_6 = 53150/*func_209*/;
			uParam2->f_7 = 53023/*func_207*/;
			uParam2->f_10 = 52698/*func_206*/;
			uParam2->f_11 = 52590/*func_205*/;
			uParam2->f_12 = 52581/*__LIB_0__::func_114*/;
			uParam2->f_8 = 35396/*func_186*/;
			uParam2->f_9 = 35388/*__LIB_0__::func_467*/;
			break;
		case 54:
		case 55:
		case 58:
			func_954(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 35380/*__LIB_0__::func_467*/;
			uParam2->f_2 = 35363/*__LIB_38__::func_97*/;
			uParam2->f_3 = 35346/*__LIB_38__::func_96*/;
			uParam2->f_4 = 35321/*__LIB_38__::func_95*/;
			uParam2->f_5 = 35216/*__LIB_38__::func_94*/;
			uParam2->f_6 = 35197/*__LIB_38__::func_130*/;
			uParam2->f_7 = 35073/*__LIB_38__::func_145*/;
			uParam2->f_10 = 34703/*__LIB_38__::func_147*/;
			uParam2->f_11 = 34694/*__LIB_0__::func_114*/;
			uParam2->f_12 = 34672/*__LIB_38__::func_92*/;
			uParam2->f_8 = 34664/*__LIB_0__::func_467*/;
			uParam2->f_9 = 34656/*__LIB_0__::func_467*/;
			break;
		default:
			return;
			break;
	}
	*uParam2 = 1;
}

void func_186()//Position - 0x8A44
{
	switch (__LIB_15__::func_944())
	{
		case 0:
			if (!iLocal_1480)
			{
				if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_PRE_MISSION_MUSIC"))
					{
						iLocal_1480 = 1;
					}
				}
			}
			else if (((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
				{
					iLocal_1480 = 0;
				}
			}
			break;
		case 2:
			__LIB_38__::func_131(0);
			__LIB_17__::func_764(40, 4);
			__LIB_17__::func_764(41, 4);
			__LIB_17__::func_764(42, 4);
			__LIB_17__::func_764(43, 4);
			__LIB_17__::func_764(44, 4);
			break;
	}
	if (!iLocal_1481)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_38__::func_90(208, __LIB_15__::func_944())) <= (30f * 30f))
		{
			__LIB_38__::func_121(46, "MIC_1_INT", 15, -1, 30);
			iLocal_1481 = 1;
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_38__::func_90(208, __LIB_15__::func_944())) > (100f * 100f))
	{
		__LIB_38__::func_99();
		iLocal_1481 = 0;
	}
}

int func_205()//Position - 0xCD6E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[iVar0]))
				{
					if (iVar0 == 0)
					{
						Global_4541526 = 1;
					}
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_206()//Position - 0xCDDA
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(208, __LIB_15__::func_944()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (__LIB_15__::func_944())
		{
			case 0:
				fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
				if (fVar1 < (2.5f * 2.5f))
				{
					if (iLocal_1480)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_INTRO_CS_BEGINS");
					}
					return 1;
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missmic1leadinoutmic_1_int", "_leadin_michael", 3))
						{
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5212f, 168.31717f, 71.33471f, -805.36615f, 178.3396f, 74.83471f, 9f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -808.5197f, 176.21454f, 70.83471f, -809.00665f, 181.62889f, 75.40309f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.494f, 179.49509f, 71.15309f, -808.4824f, 184.82248f, 75.55967f, 5f, false, true, 0))
							{
								return 1;
							}
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_207()//Position - 0xCF1F
{
	if (iLocal_1480)
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
		{
		}
	}
	__LIB_38__::func_93(&(Global_96938[0]));
	__LIB_38__::func_155(&(Global_96938.f_9[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_17__::func_702(2, 0, 0);
	__LIB_38__::func_99();
	iLocal_1481 = 0;
}

void func_209()//Position - 0xCF9E
{
	if (iLocal_1480)
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_LEFT_HOUSE"))
		{
		}
	}
	__LIB_38__::func_76(&(Global_96938[0]));
	__LIB_38__::func_151(&(Global_96938.f_9[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_17__::func_702(2, 0, 0);
	__LIB_38__::func_99();
	iLocal_1481 = 0;
}

void func_211()//Position - 0xD0C2
{
	struct<4> Var0;
	MISC::CLEAR_AREA(__LIB_38__::func_90(208, 0), 5f, true, false, false, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::ADD_RELATIONSHIP_GROUP("MICHAEL_1_TS_RELGROUP", &(Global_96938.f_42));
	switch (__LIB_15__::func_944())
	{
		case 0:
			break;
		case 2:
			if (__LIB_39__::func_389(0, 0) == 0)
			{
				__LIB_16__::func_935(0);
				__LIB_16__::func_841(&Var0, 0);
				if (__LIB_16__::func_939(&(Global_96938[0]), 0, Var0, Var0.f_3, 1, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 2);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[0], false, 0);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(0, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				__LIB_38__::func_110(Global_96938.f_9[0]);
				__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[0], "missmic1leadinoutmic_1_int", "_leadin_michael", -803.85f, 172.265f, 71.845f, 0f, 0f, 110f, 1000f, -1000f, -1, 790529, 0f, 2, 1);
			}
			__LIB_17__::func_702(2, 0, 1);
			break;
	}
	iLocal_1481 = 0;
}

int func_298()//Position - 0x182FC
{
	switch (__LIB_15__::func_944())
	{
		case 0:
			return 1;
			break;
		case 2:
			if ((!func_299(&(Global_96938.f_9[0]), 0, -804.2f, 172.4f, 72.85f, 12, -99) || !STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_741(0, 0))) || !STREAMING::HAS_ANIM_DICT_LOADED("missmic1leadinoutmic_1_int"))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_299(var uParam0, bool bParam1, struct<3> Param2, int iParam3, int iParam4)//Position - 0x1836E
{
	if (!__LIB_17__::func_751(bParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, __LIB_0__::func_518(bParam1), Param2, 0f, false, true);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
		func_618(*uParam0);
		__LIB_13__::func_777(*uParam0, 1, 0);
		__LIB_13__::func_763(*uParam0);
		__LIB_13__::func_762(*uParam0);
		func_415(*uParam0, 0);
		__LIB_0__::func_405(*uParam0);
		MISC::SET_BIT(&(Global_97919.f_47), __LIB_0__::func_482(bParam1));
		if (iParam4 != -99)
		{
			func_300(*uParam0, iParam3, iParam4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
		ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		return 0;
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		return 0;
	}
	else if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0))
	{
		return 0;
	}
	return 1;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x18459
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
										func_300(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_300(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_310(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_309(iParam0, iVar10, &iVar4, 1))
							{
								func_300(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_300(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_300(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_300(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_300(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_300(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_300(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_300(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_300(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_300(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_309(iParam0, iVar10, &iVar4, 0))
		{
			func_300(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_301(iParam0, iVar10, &iVar4))
		{
			func_300(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_301(int iParam0, int iParam1, int iParam2)//Position - 0x18C69
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_302(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_302(int iParam0, int iParam1, int iParam2)//Position - 0x18CF5
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
				if (!func_302(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_302(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_302(iParam0, 14, iVar4))
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
			if (!func_302(iParam0, 14, uVar8[iVar7]))
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

int func_309(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x197B5
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_302(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_310(int iParam0, int iParam1, int iParam2)//Position - 0x1984B
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
				if (func_302(iParam0, iParam1, iVar0))
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
				if (func_302(iParam0, iParam1, iVar1))
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

int func_415(int iParam0, bool bParam1)//Position - 0x366AD
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_419(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_419(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_302(iParam0, 3, 169))
					{
						func_300(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_302(iParam0, 12, 6))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 11))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 10))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 50))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 14, 59))
			{
				func_300(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_302(iParam0, 8, 22))
			{
				func_300(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_302(iParam0, 12, 14))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_302(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 4))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 3))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 14, 82))
			{
				func_300(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_302(iParam0, 8, 76))
			{
				func_300(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_302(iParam0, 12, 1))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_302(iParam0, 12, 12))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 15))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_302(iParam0, 3, 71))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_302(iParam0, 12, 7))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 12, 6))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_302(iParam0, 14, 88))
			{
				func_300(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_302(iParam0, 8, 17))
			{
				func_300(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_302(iParam0, 12, 11))
			{
				func_300(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_419(int iParam0, int iParam1)//Position - 0x36E3E
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_310(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_430(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_40__::func_492(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_42__::func_469();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
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

void func_430(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x37E1C
{
	bool bVar0;
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
		bVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_309(iParam0, iVar1, &iVar2, 0))
			{
				func_300(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_301(iParam0, iVar1, &iVar2))
			{
				func_300(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_592(iParam0);
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
			func_433(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_433(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_433(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_433(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x382F9
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
			func_553(iVar5, iParam1, iParam2, 1);
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
						func_553(iVar5, 10, 0, 1);
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
									func_553(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_433(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_553(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_552(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_433(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_546(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_553(iVar5, 14, uVar18[iVar1], 1);
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
							func_433(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_553(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_433(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_538(iParam0);
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
						func_433(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_433(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_537(iVar5, iVar24, iVar23, iVar25);
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
							func_433(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_433(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_433(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_433(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_433(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_433(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_433(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_546(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_537(iVar5, func_552(iParam0, 8, -1), iParam2, func_552(iParam0, 4, -1));
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
				func_476(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_537(iVar5, iParam2, iVar44, iVar45);
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
			func_546(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_537(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_433(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_433(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_537(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_537(iVar5, iVar58, iVar57, iParam2);
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
						func_433(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_537(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_433(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_453(iParam0, 9, iVar63))
						{
							func_433(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_433(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_433(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_433(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_552(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_552(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_433(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_433(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_433(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_433(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_433(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_433(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_433(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_433(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_433(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_433(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_538(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_433(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_433(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_434(iParam0, &uVar4))
		{
			func_433(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_433(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_433(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_433(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_552(iParam0, 3, -1), iVar10);
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
				func_433(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_434(int iParam0, var uParam1)//Position - 0x3A1A3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_552(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_453(iParam0, iVar1, iVar0))
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

int func_453(int iParam0, int iParam1, int iParam2)//Position - 0x3E460
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
				if (!func_453(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_453(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_453(iParam0, 14, iVar6))
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
			if (!func_453(iParam0, 14, uVar11[iVar10]))
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
						return func_453(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_453(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_476(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4517E
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
	func_477(iParam0, bParam3, 0, -1);
}

void func_477(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x451CB
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
		bVar3 = func_517(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_508(iParam0, iParam3);
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

int func_508(int iParam0, int iParam1)//Position - 0x54434
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
				iVar3 = func_552(iParam0, 11, -1);
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
				iVar5 = func_552(iParam0, 11, -1);
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

int func_517(int iParam0, bool bParam1)//Position - 0x54892
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_552(iParam0, 11, -1), 0);
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
						iVar3 = func_552(iParam0, 11, -1);
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
						iVar5 = func_552(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_552(iParam0, 11, -1), 0);
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
						iVar8 = func_552(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_552(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_552(iParam0, 11, -1), 0);
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
						iVar12 = func_552(iParam0, 8, -1);
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

int func_537(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5D74A
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
					iVar0 = func_537(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_537(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_538(int iParam0)//Position - 0x5EA85
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
		if (!func_543(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_543(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_543(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5F44F
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_552(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_546(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x61D6A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_592(iParam0))
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

int func_552(int iParam0, int iParam1, int iParam2)//Position - 0x62019
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
				if (func_453(iParam0, iParam1, iVar0))
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
				if (func_453(iParam0, iParam1, iVar1))
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

void func_553(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x620BA
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
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
							func_553(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_553(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_553(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_553(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_553(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_553(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_553(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_553(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_553(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_553(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_592(int iParam0)//Position - 0x7AD30
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_552(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_162() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_552(iParam0, 11, -1);
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

void func_618(int iParam0)//Position - 0x7D50C
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_414(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_430(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_310(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_619(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_310(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_310(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_619(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_619(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_310(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_430(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_619(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7D769
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_622(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_622(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7D924
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
								func_622(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_622(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_622(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_622(iParam0, 14, iVar5, 1, 0);
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
								func_622(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_622(iParam0, 14, 17, 1, 0);
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

void func_626()//Position - 0x7DDDB
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!ENTITY::IS_ENTITY_VISIBLE(Global_96938.f_9[0]))
		{
			__LIB_38__::func_155(&(Global_96938.f_9[0]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(0, 0));
	STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_int");
}

void func_627()//Position - 0x7DE2C
{
	switch (__LIB_15__::func_944())
	{
		case 0:
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
			STREAMING::REQUEST_ANIM_DICT("missmic1leadinoutmic_1_int");
			break;
	}
}

void func_628()//Position - 0x7DE6A
{
	iLocal_1480 = 0;
	iLocal_1481 = 0;
}

void func_629()//Position - 0x7DE7A
{
	if (!iLocal_1237)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.79243f, -1290.5293f, 31.48345f, 126.72432f, -1288.8441f, 28.28557f, 4.5f, false, true, 0))
		{
			iLocal_1237 = 1;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 129.19241f, -1299.3925f, 28.2327f, 127.47752f, -1296.4604f, 31.70886f, 4f, false, true, 0))
		{
			iLocal_1237 = 0;
		}
		__LIB_16__::func_309(1, 0);
	}
	if (__LIB_15__::func_944() != 2)
	{
		__LIB_17__::func_764(82, 4);
	}
}

void func_630()//Position - 0x7DF07
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (__LIB_15__::func_944() != 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 92.58456f, -1293.6052f, 28.075377f, 98.85587f, -1289.741f, 30.268753f, 6.5f, false, true, 0))
		{
			CAM::SET_GAMEPLAY_COORD_HINT(Local_1241, -1, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1242);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1243);
			CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1244);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			if (!PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_1241, 30f))
			{
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1241, -1, 2048, 2);
			}
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
		}
	}
	__LIB_17__::func_764(82, 4);
	if (!iLocal_1237)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 127.79243f, -1290.5293f, 31.48345f, 126.72432f, -1288.8441f, 28.28557f, 4.5f, false, true, 0))
		{
			iLocal_1237 = 1;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 129.19241f, -1299.3925f, 28.2327f, 127.47752f, -1296.4604f, 31.70886f, 4f, false, true, 0))
		{
			iLocal_1237 = 0;
		}
		__LIB_16__::func_309(1, 0);
	}
	switch (iLocal_1236)
	{
		case 0:
			if (__LIB_15__::func_944() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 93.70387f, -1289.8123f, 31.11002f, 94.82489f, -1291.7688f, 28.26875f, 2.67f, false, true, 0))
				{
					__LIB_0__::func_222(&uLocal_1247, 0, Global_96938.f_9[0], "TREVOR", 0, 1);
					__LIB_38__::func_120();
					__LIB_0__::func_963(1, 0, 1, 0);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					iLocal_1236 = 2;
				}
			}
			else if (__LIB_15__::func_944() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 100.15879f, -1294.2797f, 28.26663f, 98.8404f, -1291.9773f, 31.24332f, 1.75f, false, true, 0))
				{
					__LIB_38__::func_120();
					__LIB_0__::func_963(1, 0, 1, 0);
					__LIB_0__::func_222(&uLocal_1247, 0, Global_96938.f_9[0], "TREVOR", 0, 1);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					iLocal_1234 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1234, "missbigscore1leadinoutbs_1_int", "leadin_action_a_trevor", 1000f, -8f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_1245, iLocal_1234, "leadin_action_a_fridge_door", "missbigscore1leadinoutbs_1_int", 1000f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_1246, iLocal_1234, "leadin_action_a_fridge", "missbigscore1leadinoutbs_1_int", 1000f, -8f, 0, 1000f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1234, false);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2096, 2);
					__LIB_0__::func_429();
					iLocal_1236++;
				}
			}
			else if (__LIB_15__::func_944() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 100.15879f, -1294.2797f, 28.26663f, 98.8404f, -1291.9773f, 31.24332f, 1.75f, false, true, 0))
				{
					__LIB_38__::func_120();
					__LIB_0__::func_963(1, 0, 1, 0);
					__LIB_0__::func_222(&uLocal_1247, 0, Global_96938.f_9[0], "TREVOR", 0, 1);
					__LIB_0__::func_222(&uLocal_1247, 1, Global_96938.f_9[1], "MICHAEL", 0, 1);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					iLocal_1234 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
					iLocal_1235 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_1234, "missbigscore1leadinoutbs_1_int", "leadin_action_c_michael", 1000f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1234, false);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2096, 2);
					__LIB_0__::func_429();
					iLocal_1236++;
				}
			}
			break;
		case 1:
			if (__LIB_15__::func_944() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 96.83046f, -1290.3278f, 28.26876f, 98.01225f, -1292.3512f, 31.24332f, 3.5f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				}
				if (!iLocal_1412)
				{
					__LIB_0__::func_222(&uLocal_1247, 0, Global_96938.f_9[0], "TREVOR", 0, 1);
					if (__LIB_17__::func_243(&uLocal_1247, "FH1AUD", "FH1_INTLI3", 7, 0, 0, 0))
					{
						iLocal_1412 = 1;
					}
				}
			}
			else if (__LIB_15__::func_944() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 91.93958f, -1292.4875f, 30.86913f, 98.35245f, -1288.746f, 28.38858f, 2.8f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				}
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.38659f, -1290.6199f, 27.88257f, 96.55007f, -1292.2526f, 31.268753f, 1.75f, false, true, 0))
					{
						if (!iLocal_1412)
						{
							__LIB_0__::func_222(&uLocal_1247, 0, Global_96938.f_9[0], "TREVOR", 0, 1);
							if (__LIB_17__::func_243(&uLocal_1247, "FH1AUD", "FH1_INTLI4", 7, 0, 0, 0))
							{
								iLocal_1412 = 1;
							}
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1235))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1235) > 0.95f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							iLocal_1235 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1235, "missbigscore1leadinoutbs_1_int", "leadin_loop_c_trevor", 1.5f, -8f, 0, 0, 1000f, 0);
						}
					}
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1234))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1234) >= 0.7f && !__LIB_0__::func_75())
				{
					iLocal_1236++;
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[1], true, false);
				}
			}
			break;
	}
	if (!iLocal_1240)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_96938.f_28[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					iLocal_1240 = 1;
				}
			}
		}
	}
}

int func_649()//Position - 0x7EF9E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (iLocal_1237)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return 1;
		}
	}
	return 0;
}

int func_650()//Position - 0x7F012
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1236 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			if (__LIB_15__::func_944() != 2)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				__LIB_16__::func_309(1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_1241, -1, 2048, 2);
			}
			return 1;
		}
	}
	return 0;
}

void func_651()//Position - 0x7F078
{
	int iVar0;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		__LIB_38__::func_155(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_77(&(Global_96938.f_28[0]));
	__LIB_38__::func_78(&iLocal_1245);
	__LIB_38__::func_78(&iLocal_1246);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_99();
}

void func_652()//Position - 0x7F0D4
{
	int iVar0;
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		__LIB_38__::func_152(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_78(&(Global_96938.f_28[0]));
	__LIB_38__::func_78(&iLocal_1245);
	__LIB_38__::func_78(&iLocal_1246);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_99();
}

void func_654()//Position - 0x7F1C1
{
	MISC::CLEAR_AREA(__LIB_38__::func_90(234, 0), 2f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	if (__LIB_15__::func_944() == 2)
	{
	}
	else if (__LIB_15__::func_944() == 0)
	{
		while (!func_658(&(Global_96938.f_9[0]), 2, Local_1238, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), Local_1238, true, true, false);
		iLocal_1240 = 0;
		iLocal_1245 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(93.2458f, -1291.0306f, 29.1533f, 5f, joaat("prop_cs_fridge_door"), true, false, true);
		iLocal_1246 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(92.7504f, -1290.9009f, 29.1933f, 5f, joaat("prop_cs_fridge"), true, false, true);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		iLocal_1234 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1234, "missbigscore1leadinoutbs_1_int", "leadin_loop_b_trevor", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1234, true);
	}
	else if (__LIB_15__::func_944() == 1)
	{
		while (!func_658(&(Global_96938.f_9[0]), 2, Local_1238, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
		while (!func_658(&(Global_96938.f_9[1]), 0, 94.71292f, -1290.841f, 28.26876f, 0, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_16__::func_312(Global_96938.f_9[1], Global_96938.f_42);
		ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[1], 27.17f);
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), Local_1238, true, true, false);
		iLocal_1240 = 0;
		iLocal_1245 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(93.2458f, -1291.0306f, 29.1533f, 5f, joaat("prop_cs_fridge_door"), true, false, true);
		iLocal_1246 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(92.7504f, -1290.9009f, 29.1933f, 5f, joaat("prop_cs_fridge"), true, false, true);
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		iLocal_1234 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1238, Local_1239, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1234, "missbigscore1leadinoutbs_1_int", "leadin_loop_c_trevor", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1234, true);
	}
	__LIB_38__::func_121(76, "BS_1_INT", 252, 248, 0);
	if (__LIB_15__::func_944() == 2)
	{
		__LIB_42__::func_468(76, "Trevor", PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_15__::func_944() == 0)
	{
		__LIB_42__::func_468(76, "Trevor", Global_96938.f_9[0]);
		__LIB_42__::func_468(76, "Michael", PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_15__::func_944() == 1)
	{
		__LIB_42__::func_468(76, "Trevor", Global_96938.f_9[0]);
		__LIB_42__::func_468(76, "Michael", Global_96938.f_9[1]);
		__LIB_42__::func_468(76, "Franklin", PLAYER::PLAYER_PED_ID());
	}
}

int func_658(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7F676
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_17__::func_238(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_618(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_415(*iParam0, bParam6);
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

int func_660()//Position - 0x7F86C
{
	if ((((((STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fridge_door"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fridge"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missbigscore1leadinoutbs_1_int")) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				return 0;
			}
		}
		else
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(93.3024f, -1290.9473f, 29.2074f, 0.5f, 2);
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_661()//Position - 0x7F909
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fridge_door"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fridge"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
	STREAMING::REMOVE_ANIM_DICT("missbigscore1leadinoutbs_1_int");
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
}

void func_662()//Position - 0x7F952
{
	STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_fridge_door"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_fridge"));
	STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
	STREAMING::REQUEST_MODEL(joaat("Player_Two"));
	STREAMING::REQUEST_ANIM_DICT("missbigscore1leadinoutbs_1_int");
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(93.3024f, -1290.9473f, 29.2074f, 0.5f, 2);
		}
	}
}

void func_663()//Position - 0x7F9BA
{
	iLocal_1236 = 0;
	iLocal_1240 = 0;
	iLocal_1237 = 0;
	iLocal_1412 = 0;
	Local_1238 = { 95.84f, -1291.44f, 28.275f };
	Local_1239 = { 0f, 0f, 30f };
}

void func_665()//Position - 0x7F9FA
{
	if (iLocal_2036 < 3)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	if (__LIB_15__::func_944() == 2)
	{
		if (iLocal_2037 == 1)
		{
		}
		else if (func_677())
		{
			__LIB_0__::func_429();
			__LIB_0__::func_221(&uLocal_1868, 0);
			__LIB_0__::func_221(&uLocal_1868, 1);
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_96938.f_9[0]);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			iLocal_2037 = 1;
		}
		else
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
			switch (iLocal_2036)
			{
				case 0:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1143.5963f, -1531.0369f, 11.711957f, -1155.0153f, -1514.8649f, 14.711953f, 19f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.9498f, -1518.523f, 3f, -1149.9812f, -1523.3862f, 12.633015f, 3.5f, false, true, 0))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								iLocal_2041 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), true, false, true);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								__LIB_0__::func_222(&uLocal_1868, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								__LIB_0__::func_648(&(Global_96938.f_9[0]), 32, -1148.7858f, -1523.2659f, 9.633f, 0, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(32));
								iLocal_2035 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2033, Local_2034, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_2035, "misstrevor4leadinouttrv_4_int", "leadin_loop_start_idle_floyd", 1000f, -8f, 1, 0, 1000f, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2035, "leadin_loop_start_idle_front_door", "misstrevor4leadinouttrv_4_int", 1000f, -8f, 0, 1000f);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2035, true);
								__LIB_0__::func_222(&uLocal_1868, 0, Global_96938.f_9[0], "FLOYD", 0, 1);
								PED::SET_PED_CAN_BE_TARGETTED(Global_96938.f_9[0], false);
								iLocal_2036++;
							}
						}
					}
					break;
				case 1:
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]) && __LIB_17__::func_243(&uLocal_1868, "TRV5AUD", "TRV5_INT_LI1", 8, 0, 0, 0))
					{
						iLocal_2036++;
					}
					break;
				case 2:
					STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.3971f, -1525.2676f, 8.961864f, -1151.11f, -1520.0728f, 14.711858f, 2.5f, false, true, 0) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						__LIB_38__::func_120();
						PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
						iLocal_2036 = 4;
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1142.3956f, -1519.314f, 6.05884f, -1148.072f, -1523.2782f, 10.633021f, 2.3f, false, true, 0) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							iLocal_2041 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), true, false, true);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0.3f, true, -1, 3000, 2000, 0);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							}
							__LIB_38__::func_120();
							PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
							iLocal_2035 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2033, Local_2034, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_2035, "misstrevor4leadinouttrv_4_int", "leadin_action_floyd", 8f, -8f, 1, 0, 1000f, 0);
							ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2035, "leadin_action_front_door", "misstrevor4leadinouttrv_4_int", 1000f, -8f, 0, 1000f);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2035, false);
							TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 0, 2);
							iLocal_2040 = MISC::GET_GAME_TIMER();
							iLocal_2036++;
						}
					}
					break;
				case 3:
					if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"))) && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1147.62f, -1522.95f, 9.63f, 1) > 2f) && !func_666())
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1147.62f, -1522.95f, 9.63f, 1f, 20000, 0.25f, 0, 40000f);
					}
					if (iLocal_2038 == 0)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2040) > 1500 && __LIB_17__::func_243(&uLocal_1868, "TRV5AUD", "TRV5_INT_LI2", 8, 0, 0, 0))
						{
							iLocal_2038 = 1;
						}
					}
					else if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_221(&uLocal_1868, 0);
						__LIB_0__::func_221(&uLocal_1868, 1);
						iLocal_2036++;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_2035) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						STREAMING::REQUEST_MODEL(joaat("v_ilev_trev_doorfront"));
						if ((iLocal_2039 == 0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2035) > 0.98f) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_trev_doorfront")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								iLocal_2041 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1149.71f, -1521.09f, 10.78f, 10f, joaat("v_ilev_trev_doorfront"), true, false, true);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								iLocal_2035 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2033, Local_2034, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_2035, "misstrevor4leadinouttrv_4_int", "leadin_loop_exit_idle_floyd", 8f, -8f, 1, 0, 1000f, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-1149.71f, -1521.09f, 10.78f, 5f, joaat("v_ilev_trev_doorfront"), iLocal_2035, "leadin_loop_exit_idle_front_door", "misstrevor4leadinouttrv_4_int", 8f, -8f, 0, 1000f);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2035, true);
								iLocal_2039 = 1;
							}
						}
					}
					break;
				case 4:
					break;
				}
			}
	}
}

int func_666()//Position - 0x8006C
{
	if ((__LIB_0__::func_121(VEHICLE::GET_LAST_DRIVEN_VEHICLE()) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID())) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 1) < 2f)
	{
		return 1;
	}
	return 0;
}

int func_676()//Position - 0x802C8
{
	if (iLocal_2043 == 1 && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 1;
	}
	return 0;
}

int func_677()//Position - 0x802E6
{
	struct<3> Var0;
	struct<3> Var1;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		func_681();
		func_689();
		iLocal_2043 = 1;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			return 1;
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true) };
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			else if (MISC::IS_BULLET_IN_AREA(Var0, 20f, true))
			{
				return 1;
			}
			else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f))
			{
				return 1;
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(Var0, joaat("WEAPON_STICKYBOMB"), 20f, true))
			{
				return 1;
			}
			else if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Var0) && MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true) < 10f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_678()//Position - 0x803D1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_2036 == 4)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			return 1;
		}
	}
	return 0;
}

void func_679()//Position - 0x803FD
{
	__LIB_38__::func_155(&(Global_96938.f_9[0]));
	__LIB_0__::func_221(&uLocal_1868, 0);
	__LIB_0__::func_221(&uLocal_1868, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2041, 0f, true);
	}
	__LIB_0__::func_122(&iLocal_2041, 0);
	__LIB_38__::func_99();
}

void func_681()//Position - 0x8047D
{
	__LIB_38__::func_151(&(Global_96938.f_9[0]));
	__LIB_0__::func_221(&uLocal_1868, 0);
	__LIB_0__::func_221(&uLocal_1868, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2041, 0f, true);
	}
	__LIB_0__::func_122(&iLocal_2041, 0);
	__LIB_38__::func_99();
}

void func_682()//Position - 0x804C2
{
	iLocal_2036 = 0;
	__LIB_38__::func_121(65, "TRV_5_INT", -1, -1, 0);
	__LIB_0__::func_544(135, 0, 0, 1, 0);
	__LIB_0__::func_544(136, 0, 0, 1, 0);
	__LIB_0__::func_544(137, 0, 0, 1, 0);
	__LIB_0__::func_544(138, 0, 0, 1, 0);
	__LIB_0__::func_544(141, 0, 0, 1, 0);
	__LIB_0__::func_544(142, 0, 0, 1, 0);
	__LIB_0__::func_544(144, 0, 0, 1, 0);
	__LIB_0__::func_544(139, 0, 0, 1, 0);
	__LIB_0__::func_544(140, 0, 0, 1, 0);
	__LIB_0__::func_544(143, 0, 0, 1, 0);
	iLocal_2036 = 0;
	iLocal_2037 = 0;
	iLocal_2038 = 0;
	iLocal_2039 = 0;
	iLocal_2043 = 0;
}

int func_688()//Position - 0x848FB
{
	if (((STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(32)) && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor4leadinouttrv_4_int")) && INTERIOR::IS_VALID_INTERIOR(iLocal_2042)) && INTERIOR::IS_INTERIOR_READY(iLocal_2042))
	{
		return 1;
	}
	return 0;
}

void func_689()//Position - 0x8493B
{
	__LIB_0__::func_122(&iLocal_2041, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_trev_doorfront"));
	STREAMING::REMOVE_ANIM_DICT("misstrevor4leadinouttrv_4_int");
	INTERIOR::UNPIN_INTERIOR(iLocal_2042);
}

void func_690()//Position - 0x8496E
{
	STREAMING::REQUEST_MODEL(__LIB_0__::func_493(32));
	STREAMING::REQUEST_ANIM_DICT("misstrevor4leadinouttrv_4_int");
	iLocal_2042 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1151.1569f, -1520.1526f, 9.6327f, "v_trevors");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_2042);
}

void func_693()//Position - 0x849BB
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = SYSTEM::VDIST2(Var0, 3832.685f, 4463.3345f, 1.7214f);
	fVar2 = SYSTEM::VDIST2(Var0, 3827.8816f, 4463.081f, 1.9017f);
	fVar3 = (fVar2 - fVar1);
	if (fVar3 > 0.5f)
	{
		if (BitTest(Global_96938.f_358, 1))
		{
			__LIB_38__::func_99();
			MISC::CLEAR_BIT(&(Global_96938.f_358), 1);
		}
		if (!BitTest(Global_96938.f_358, 0))
		{
			if (!Global_78336)
			{
				iVar4 = Global_91229[39 /*34*/].f_13;
				iVar5 = Global_91229[39 /*34*/].f_14;
				if (__LIB_13__::func_692(iVar4, iVar5))
				{
					__LIB_38__::func_121(39, "FBI_5_INT", 191, 191, 188);
					Global_96898 = 0;
				}
				else
				{
					__LIB_38__::func_121(39, "FBI_5_INT", 255, 255, 252);
					Global_96898 = 1;
				}
				if (__LIB_15__::func_944() == 0)
				{
					__LIB_42__::func_468(39, "Michael", PLAYER::PLAYER_PED_ID());
				}
				if (__LIB_15__::func_944() == 1)
				{
					__LIB_42__::func_468(39, "Michael", Global_96938.f_9[0]);
					__LIB_42__::func_468(39, "Franklin", PLAYER::PLAYER_PED_ID());
				}
				if (__LIB_15__::func_944() == 2)
				{
					__LIB_42__::func_468(39, "Michael", Global_96938.f_9[0]);
					__LIB_42__::func_468(39, "Franklin", Global_96938.f_9[1]);
					__LIB_42__::func_468(39, "Trevor", PLAYER::PLAYER_PED_ID());
				}
				MISC::SET_BIT(&(Global_96938.f_358), 0);
			}
		}
	}
	else if (fVar3 < -0.5f)
	{
		if (BitTest(Global_96938.f_358, 0))
		{
			__LIB_38__::func_99();
			MISC::CLEAR_BIT(&(Global_96938.f_358), 0);
		}
		if (!BitTest(Global_96938.f_358, 1))
		{
			if (!Global_78336)
			{
				iVar6 = Global_91229[39 /*34*/].f_13;
				iVar7 = Global_91229[39 /*34*/].f_14;
				if (__LIB_13__::func_692(iVar6, iVar7))
				{
					__LIB_38__::func_121(39, "FBI_5_INT", 191, 190, 184);
					Global_96898 = 0;
				}
				else
				{
					__LIB_38__::func_121(39, "FBI_5_INT", 255, 254, 248);
					Global_96898 = 1;
				}
				if (__LIB_15__::func_944() == 0)
				{
					__LIB_42__::func_468(39, "Michael", PLAYER::PLAYER_PED_ID());
				}
				if (__LIB_15__::func_944() == 1)
				{
					__LIB_42__::func_468(39, "Michael", Global_96938.f_9[0]);
					__LIB_42__::func_468(39, "Franklin", PLAYER::PLAYER_PED_ID());
				}
				if (__LIB_15__::func_944() == 2)
				{
					__LIB_42__::func_468(39, "Michael", Global_96938.f_9[0]);
					__LIB_42__::func_468(39, "Franklin", Global_96938.f_9[1]);
					__LIB_42__::func_468(39, "Trevor", PLAYER::PLAYER_PED_ID());
				}
				MISC::SET_BIT(&(Global_96938.f_358), 1);
			}
		}
	}
}

int func_695()//Position - 0x84C43
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if ((PED::IS_PED_INJURED(Global_96938.f_9[iVar0]) || PED::IS_PED_RAGDOLL(Global_96938.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(Global_96938[0], 3853.257f, 4455.4614f, 1.957811f, 4.25f, 1.75f, 2f, false, true, 0))
			{
				return 1;
			}
		}
	}
	if (__LIB_15__::func_944() != 0)
	{
		if (MISC::IS_BULLET_IN_ANGLED_AREA(3830.1106f, 4460.5127f, 1.026169f, 3830.214f, 4466.375f, 4.992479f, 6f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 3830.1106f, 4460.5127f, 1.026169f, 3830.214f, 4466.375f, 4.992479f, 6f))
		{
			return 1;
		}
	}
	return 0;
}

int func_696()//Position - 0x84D9E
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	Var0 = { __LIB_38__::func_90(196, __LIB_15__::func_944()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		bVar1 = __LIB_15__::func_944();
		if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
		{
			if (!(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
			{
				fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
				if (!Global_97361)
				{
					if (bVar1 == 2 || bVar1 == 1)
					{
						if (fVar2 < 210.25f)
						{
							if (__LIB_15__::func_944() == 2)
							{
								__LIB_14__::func_654(&(Global_96938.f_44), "FBI5AAU", "FBI5_INT_LI", 9, 0, 0);
							}
							else
							{
								__LIB_14__::func_654(&(Global_96938.f_44), "FBI5AAU", "FBI5_INT_LIF", 9, 0, 0);
							}
							__LIB_38__::func_120();
						}
					}
				}
				else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, 13000, 2000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOV(30f);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
						CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
					}
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
				}
				if (!BitTest(Global_96938.f_358, 0) && !BitTest(Global_96938.f_358, 1))
				{
					return 0;
				}
				if (fVar2 < (14f * 14f))
				{
					if (!__LIB_0__::func_75())
					{
						return 1;
					}
				}
				if (bVar1 == 2 || bVar1 == 1)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3847.2732f, 4463.7295f, 4.15182f, 16.25f, 1.75f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3835.646f, 4464.2466f, 2.944657f, 3.75f, 14f, 3.5f, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_698()//Position - 0x84FB8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_38__::func_155(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_93(&(Global_96938[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_0__::func_221(&(Global_96938.f_44), 0);
	__LIB_0__::func_221(&(Global_96938.f_44), 1);
	__LIB_38__::func_99();
}

void func_699()//Position - 0x8501A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_38__::func_151(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_76(&(Global_96938[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_0__::func_221(&(Global_96938.f_44), 0);
	__LIB_0__::func_221(&(Global_96938.f_44), 1);
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	__LIB_38__::func_99();
}

void func_700()//Position - 0x85088
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	Global_96938.f_358 = 0;
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(3773.4f, 4393.7f, 50f, 3891.2f, 4555.1f, -50f, false, true, true, true);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	MISC::CLEAR_AREA(3795.0986f, 4466.8384f, 4.6044f, 120f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), 3853.46f, 4455.4272f, -0.2f, 266.1028f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[0], 0, 0);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[0], 5f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 3, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Global_96938[0], false, true, false);
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	if (iVar3 < 7 || iVar3 >= 20)
	{
		VEHICLE::SET_VEHICLE_LIGHTS(Global_96938[0], 2);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
	switch (__LIB_15__::func_944())
	{
		case 1:
			Var1 = { 3830.185f, 4463.323f, 2.699f };
			Var2 = { 0f, 0f, -93f };
			func_658(&(Global_96938.f_9[0]), 0, 3830.301f, 4463.743f, 1.7318f, 264.4568f, 0, 1, 0);
			__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
			iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar0, "MISSFBI5LEADINOUT", "LEADIN_1_MIC", 1000f, -8f, 1, 16, 1000f, 0);
			__LIB_0__::func_222(&(Global_96938.f_44), 0, Global_96938.f_9[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&(Global_96938.f_44), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		case 2:
			Var1 = { 3830.185f, 4463.323f, 1.697f };
			Var2 = { 0f, 0f, -95f };
			func_658(&(Global_96938.f_9[0]), 0, 3830.301f, 4463.743f, 1.7318f, 264.4568f, 0, 1, 0);
			__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
			func_658(&(Global_96938.f_9[1]), 1, 3830.1956f, 4462.5376f, 1.7318f, 269.7024f, 0, 1, 0);
			__LIB_16__::func_312(Global_96938.f_9[1], Global_96938.f_42);
			iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, Var2, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar0, "MISSFBI5LEADINOUT", "LEADIN_2_MIC", 1000f, -8f, 1, 16, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar0, "MISSFBI5LEADINOUT", "LEADIN_2_FRA", 1000f, -8f, 1, 16, 1000f, 0);
			__LIB_0__::func_222(&(Global_96938.f_44), 0, Global_96938.f_9[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&(Global_96938.f_44), 1, Global_96938.f_9[1], "FRANKLIN", 0, 1);
			break;
	}
	func_701(0);
	func_701(1);
}

void func_701(bool bParam0)//Position - 0x853AC
{
	if (__LIB_0__::func_374(bParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(bParam0));
	}
	else if (bParam0 != 145)
	{
	}
}

void func_712()//Position - 0x856B9
{
	switch (__LIB_15__::func_944())
	{
		case 2:
			__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(1));
		case 1:
			__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(0));
			__LIB_38__::func_105(&(Global_96938.f_209), "MISSFBI5LEADINOUT");
			break;
	}
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("dinghy"));
}

void func_717()//Position - 0x85823
{
	if (iLocal_1496)
	{
		if (!iLocal_1497)
		{
			if (Global_97356 == 1)
			{
				switch (__LIB_13__::func_121("AM_H_PREP4" /* GXT: Military convoys are traveling to the base every few hours. Intercept and steal the military equipment at ~BLIP_HEIST_PREP~ */))
				{
					case 2:
						__LIB_0__::func_697("AM_H_PREP4" /* GXT: Military convoys are traveling to the base every few hours. Intercept and steal the military equipment at ~BLIP_HEIST_PREP~ */, 2, 0, 1000, 10000, 5, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1497 = 1;
						break;
				}
			}
			else if (Global_97356 <= 3)
			{
				switch (__LIB_13__::func_121("AM_RHP_REAP" /* GXT: A convoy is delivering military equipment at ~BLIP_HEIST_PREP~ */))
				{
					case 2:
						__LIB_0__::func_697("AM_RHP_REAP" /* GXT: A convoy is delivering military equipment at ~BLIP_HEIST_PREP~ */, 2, 0, 1000, 10000, 5, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1497 = 1;
						break;
				}
			}
			else
			{
				iLocal_1497 = 1;
			}
		}
		if (!__LIB_38__::func_148(&Local_1495) || !BitTest(Global_91229[92 /*34*/].f_11, __LIB_15__::func_944()))
		{
			Global_97355 = -15;
			StringCopy(&Global_97339, "", 64);
			iLocal_1496 = 0;
		}
	}
}

void func_723()//Position - 0x85AB9
{
	int iVar0;
	if (iLocal_1496)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			if (!__LIB_38__::func_148(&Local_1495))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
				}
			}
			iVar0++;
		}
		if (((((__LIB_16__::func_903(Global_96938.f_9[0]) && __LIB_16__::func_903(Global_96938.f_9[2])) && __LIB_16__::func_903(Global_96938.f_9[6])) && __LIB_16__::func_903(Global_96938[0])) && __LIB_16__::func_903(Global_96938[1])) && __LIB_16__::func_903(Global_96938[2]))
		{
			VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Global_96938[0], true);
			VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_96938[0], true);
			VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Global_96938[0], true);
			VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Global_96938[1], true);
			VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_96938[1], true);
			VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Global_96938[1], true);
			VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Global_96938[2], true);
			VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Global_96938[2], true);
			VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Global_96938[2], true);
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938[0]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_96938[0]);
			}
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938[1]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_96938[1]);
			}
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938[2]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_96938[2]);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_96938[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_96938[0], false), ENTITY::GET_ENTITY_COORDS(Global_96938[1], false), true) > 25f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_96938[2], false), ENTITY::GET_ENTITY_COORDS(Global_96938[1], false), true) > 65f)
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Global_96938[1]);
				}
				else
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_RESUME(Global_96938[1]);
				}
			}
			else
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_96938[1]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[2], Global_96938[1], &Global_97339, 786603, Local_1495.f_3, 24, -1, 15f, false, 2f);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_96938.f_9[0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
				{
					TASK::TASK_VEHICLE_ESCORT(Global_96938.f_9[0], Global_96938[0], Global_96938[1], -1, 16f, 786469, 8f, 20, 20f);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_96938.f_9[6], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
				{
					TASK::TASK_VEHICLE_ESCORT(Global_96938.f_9[6], Global_96938[2], Global_96938[0], -1, 16f, 786469, 8f, 20, 20f);
				}
			}
		}
	}
}

int func_725()//Position - 0x85DD8
{
	if (iLocal_1496)
	{
		return 0;
	}
	else if (BitTest(Global_91229[92 /*34*/].f_11, __LIB_15__::func_944()))
	{
		if (Global_97355 == -15)
		{
			Global_97355 = __LIB_11__::func_762();
			__LIB_13__::func_827(&Global_97355, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_14__::func_793(Global_97355) || Global_97356 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97339))
			{
				switch (Global_96937)
				{
					case 1:
						StringCopy(&Global_97339, "Rural_prep_trigger1", 64);
						break;
					case 2:
						StringCopy(&Global_97339, "Rural_prep_trigger2", 64);
						break;
					default:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1274.8265f, 1647.3229f, 87.2092f, true) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 527.50574f, 4268.4233f, 52.26282f, true))
						{
							StringCopy(&Global_97339, "Rural_prep_trigger2", 64);
							Global_96938.f_357 = 0;
						}
						else
						{
							StringCopy(&Global_97339, "Rural_prep_trigger1", 64);
							Global_96938.f_357 = 1;
						}
						break;
				}
				Global_96937 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_97339);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97339))
				{
					Local_1495 = { __LIB_38__::func_113(229, &Global_97339, 0.4f, 0) };
					iLocal_1496 = 1;
					iLocal_1497 = 0;
					iLocal_1498 = 0;
					Global_97356++;
					return 0;
				}
			}
		}
		else if (!iLocal_1498 && !iLocal_1496)
		{
			if (Global_97356 <= 2)
			{
				switch (__LIB_13__::func_121("AM_RHP_MISS" /* GXT: The military equipment is no longer availble to steal. Another convoy will be en route in a few hours. */))
				{
					case 2:
						__LIB_0__::func_697("AM_RHP_MISS" /* GXT: The military equipment is no longer availble to steal. Another convoy will be en route in a few hours. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1498 = 1;
						break;
				}
			}
			else
			{
				iLocal_1498 = 1;
			}
		}
	}
	else
	{
		Global_97355 = -15;
		iLocal_1496 = 0;
	}
	return 1;
}

int func_729()//Position - 0x86059
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	Var0 = { __LIB_38__::func_90(229, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && BitTest(Global_91229[92 /*34*/].f_11, __LIB_15__::func_944()))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar2]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938[iVar2], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 1000f)
					{
						AUDIO::START_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar2++;
			}
		}
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar3 < (120f * 120f))
			{
				bVar1 = true;
			}
		}
		else if (fVar3 < (65f * 65f))
		{
			bVar1 = true;
		}
		iVar4 = 0;
		while (iVar4 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar4]))
			{
				if (Global_96938.f_358 == -1)
				{
					if (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(Global_96938[iVar4], false), 5f))
					{
						Global_96938.f_358 = iVar4;
						Global_96938.f_359 = MISC::GET_GAME_TIMER();
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar4], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[iVar4], PLAYER::PLAYER_PED_ID(), true))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar4]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar4]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar4], PLAYER::PLAYER_PED_ID(), true))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			iVar4++;
		}
	}
	if (bVar1)
	{
		Global_97355 = -15;
		iLocal_1496 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			__LIB_0__::func_639(Global_96938[0], 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_732()//Position - 0x862F1
{
	int iVar0;
	if (__LIB_15__::func_276(229))
	{
		Local_1495 = { __LIB_38__::func_113(229, &Global_97339, 0.4f, -1) };
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_96938[iVar0], 0f);
		}
		__LIB_38__::func_93(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		__LIB_38__::func_155(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_77(&(Global_96938.f_28[0]));
	__LIB_38__::func_77(&(Global_96938.f_28[1]));
}

void func_733()//Position - 0x8638C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		__LIB_38__::func_76(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		__LIB_38__::func_152(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_38__::func_78(&(Global_96938.f_28[iVar0]));
		iVar0++;
	}
}

void func_734()//Position - 0x863F3
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	int iVar14;
	Global_96938.f_358 = -1;
	Global_96938.f_359 = -1;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&Global_97339, &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, Local_1495.f_3, &Var4);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, __LIB_0__::func_340((Local_1495.f_3 - 1), 0, iVar0), &Var5);
	fVar6 = __LIB_0__::func_932(Var5, Var4);
	bVar1 = false;
	iVar2 = 3;
	while (iVar2 <= 13)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, __LIB_0__::func_340((Local_1495.f_3 + iVar2), 0, iVar0), &Var3);
		if (SYSTEM::VDIST2(Var3, Var4) > 225f)
		{
			Var7 = { Var3 };
			iVar10 = (Local_1495.f_3 + iVar2);
			bVar1 = true;
			iVar2 = 13;
		}
		if ((Local_1495.f_3 + iVar2) >= iVar0)
		{
			iVar2 = 13;
		}
		iVar2++;
	}
	if (bVar1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, __LIB_0__::func_340((iVar10 - 1), 0, iVar0), &Var8);
		fVar9 = __LIB_0__::func_932(Var8, Var7);
	}
	else
	{
		Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[1], 0f, 20f, 0f) };
	}
	bVar1 = false;
	iVar2 = 3;
	while (iVar2 <= 13)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, __LIB_0__::func_340((Local_1495.f_3 - iVar2), 0, iVar0), &Var3);
		if (SYSTEM::VDIST2(Var3, Var4) > 225f)
		{
			Var11 = { Var3 };
			iVar14 = (Local_1495.f_3 - iVar2);
			bVar1 = true;
			iVar2 = 13;
		}
		if ((Local_1495.f_3 - iVar2) <= 0)
		{
			iVar2 = 13;
		}
		iVar2++;
	}
	if (bVar1)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97339, __LIB_0__::func_340((iVar14 - 1), 0, iVar0), &Var12);
		fVar13 = __LIB_0__::func_932(Var12, Var11);
	}
	else
	{
		Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[0], 0f, -20f, 0f) };
	}
	MISC::CLEAR_AREA(Var7, 60f, true, false, false, false);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Var7, fVar9, true, true, false);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938[1], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[1], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[1], true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[1], 5f);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_96938[1], 15f);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_96938[1], true);
	VEHICLE::SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Global_96938[1], true);
	ENTITY::SET_ENTITY_ALPHA(Global_96938[1], 100, false);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[1], false, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_96938[1], "PS_PREP_VEHICLES_GROUP", 0f);
	MISC::CLEAR_AREA(Var4, 60f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("barracks"), Var4, fVar6, true, true, false);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938[0], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[0], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_96938[0], 15f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("barracks"));
	VEHICLE::SET_VEHICLE_STRONG(Global_96938[0], true);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[0], ENTITY::GET_ENTITY_HEALTH(Global_96938[0]) * 2, 0);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_96938[0], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_96938[0]) * 2.5f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_96938[0], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_96938[0]) * 2.5f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Global_96938[0], true);
	ENTITY::SET_ENTITY_ALPHA(Global_96938[0], 100, false);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[0], false, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_96938[0], "PS_PREP_VEHICLES_GROUP", 0f);
	MISC::CLEAR_AREA(Var11, 60f, true, false, false, false);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Var11, fVar13, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[2], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[2], true);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938[2], 250);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[2], 5f);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_96938[2], 15f);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_96938[2], true);
	VEHICLE::SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Global_96938[2], true);
	ENTITY::SET_ENTITY_ALPHA(Global_96938[2], 100, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("crusader"));
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[2], false, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_96938[2], "PS_PREP_VEHICLES_GROUP", 0f);
	func_736(0, Global_96938[0]);
	TASK::TASK_VEHICLE_ESCORT(Global_96938.f_9[0], Global_96938[0], Global_96938[1], -1, 13f, 786603, 8f, 20, 5f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
	func_736(2, Global_96938[1]);
	func_736(3, Global_96938[1]);
	func_736(4, Global_96938[1]);
	func_736(5, Global_96938[1]);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[2], Global_96938[1], &Global_97339, 786603, Local_1495.f_3, 24, -1, 12f, false, 2f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[2], false, false);
	func_736(6, Global_96938[2]);
	func_736(7, Global_96938[2]);
	func_736(8, Global_96938[2]);
	func_736(9, Global_96938[2]);
	TASK::TASK_VEHICLE_ESCORT(Global_96938.f_9[6], Global_96938[2], Global_96938[0], -1, 13f, 786603, 8f, 20, 5f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[6], false, false);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), Global_32338[229 /*23*/][0 /*3*/], true, true, false);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_28[0], 250);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938[0], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	Global_96938.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), Global_32338[229 /*23*/][0 /*3*/], true, true, false);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_28[1], 250);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[1], Global_96938[0], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
	Local_1495 = { __LIB_38__::func_114(229, Global_96938[0]) };
}

void func_736(int iParam0, int iParam1)//Position - 0x86A93
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = joaat("WEAPON_CARBINERIFLE");
	if (iParam1 == Global_96938[1] || iParam1 == Global_96938[2])
	{
		iVar0 = joaat("S_M_Y_Marine_03");
	}
	else if (iParam1 == Global_96938[0])
	{
		iVar0 = joaat("S_M_M_Marine_01");
	}
	if ((iParam0 == 2 || iParam0 == 6) || iParam0 == 0)
	{
		iVar1 = -1;
		iVar2 = joaat("WEAPON_PISTOL");
	}
	else if ((iParam0 == 3 || iParam0 == 7) || iParam0 == 1)
	{
		iVar1 = 0;
		iVar2 = joaat("WEAPON_SMG");
	}
	else if (iParam0 == 4 || iParam0 == 8)
	{
		iVar1 = 1;
		iVar2 = joaat("WEAPON_MICROSMG");
	}
	else if (iParam0 == 5 || iParam0 == 9)
	{
		iVar1 = 2;
		iVar2 = joaat("WEAPON_CARBINERIFLE");
	}
	Global_96938.f_9[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, iVar0, iVar1, true, true);
	PED::SET_PED_AS_ENEMY(Global_96938.f_9[iParam0], true);
	WEAPON::GIVE_WEAPON_TO_PED(Global_96938.f_9[iParam0], iVar2, -1, true, true);
	PED::SET_PED_MONEY(Global_96938.f_9[iParam0], 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[iParam0], 2, 1, 0, 0);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[iParam0], 250);
	PED::SET_PED_ALERTNESS(Global_96938.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[iParam0], true, false);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_96938.f_9[iParam0], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_96938.f_9[iParam0], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_96938.f_9[iParam0], 1, false);
	PED::SET_PED_COMBAT_MOVEMENT(Global_96938.f_9[iParam0], 1);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[iParam0], 184, true);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[iParam0], 272, true);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[iParam0], 330, true);
	AUDIO::STOP_PED_SPEAKING(Global_96938.f_9[iParam0], true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[iParam0], true, 1);
	PED::SET_PED_ACCURACY(Global_96938.f_9[iParam0], 10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[iParam0], true);
}

int func_739()//Position - 0x86CE1
{
	if (((((((STREAMING::HAS_MODEL_LOADED(joaat("crusader")) && STREAMING::HAS_MODEL_LOADED(joaat("barracks"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Marine_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_mil_crate_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_97339)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97339)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_740()//Position - 0x86D57
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("crusader"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("barracks"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Marine_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Marine_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mil_crate_01"));
}

void func_741()//Position - 0x86D8C
{
	STREAMING::REQUEST_MODEL(joaat("barracks"));
	STREAMING::REQUEST_MODEL(joaat("crusader"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_03"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Marine_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_mil_crate_01"));
	HUD::REQUEST_ADDITIONAL_TEXT("RURALP", 0);
}

void func_742()//Position - 0x86DCB
{
	struct<5> Var0;
	StringCopy(&Global_97339, "", 64);
	Global_97356 = 0;
	Global_97355 = -15;
	Var0 = 263;
	Var0.f_2 = 1065353216;
	Local_1495 = { Var0 };
	iLocal_1496 = 0;
	iLocal_1497 = 0;
	iLocal_1498 = 0;
}

int func_747()//Position - 0x86E32
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(227, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_750()//Position - 0x86E92
{
	__LIB_38__::func_133(2);
}

int func_752()//Position - 0x86EB1
{
	if (!__LIB_37__::func_176(2))
	{
		return 0;
	}
	return 1;
}

void func_754()//Position - 0x86ED6
{
	if (__LIB_13__::func_102() != 93)
	{
		__LIB_37__::func_177(2, 0);
	}
}

void func_757()//Position - 0x86F32
{
	__LIB_37__::func_177(2, 1);
}

void func_759()//Position - 0x86F48
{
	if (!iLocal_1494)
	{
		MISC::CLEAR_AREA_OF_PEDS(1389.837f, 3600.4905f, 38.9419f, 3f, 1);
		MISC::CLEAR_AREA_OF_PEDS(1391.99f, 3606.362f, 34.981f, 3f, 1);
		Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.69191f, 3611.2048f, 1393.0245f) + Vector(4.25f, 18.75f, 15.25f), Vector(39.69191f, 3611.2048f, 1393.0245f) - Vector(7.25f, 19.75f, 16.25f), false, true, true, true);
		iLocal_1494 = 1;
	}
}

void func_760()//Position - 0x86FD1
{
	float fVar0;
	if (!iLocal_1494)
	{
		MISC::CLEAR_AREA_OF_PEDS(1389.837f, 3600.4905f, 38.9419f, 3f, 1);
		MISC::CLEAR_AREA_OF_PEDS(1391.99f, 3606.362f, 34.981f, 3f, 1);
		Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(39.69191f, 3611.2048f, 1393.0245f) + Vector(4.25f, 18.75f, 15.25f), Vector(39.69191f, 3611.2048f, 1393.0245f) - Vector(7.25f, 19.75f, 16.25f), false, true, true, true);
		iLocal_1494 = 1;
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1486))
		{
			fVar0 = ENTITY::GET_ENTITY_HEADING(Global_96938.f_9[0]);
			if (fVar0 > 180f)
			{
				fVar0 = (fVar0 - 360f);
			}
			else if (fVar0 <= -180f)
			{
				fVar0 = (fVar0 + 360f);
			}
			if (MISC::ABSF((fVar0 - 149.111f)) > 10f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 1390.075f, 3599.438f, 38.975f) > 2f)
			{
				if (iLocal_1486 != -1)
				{
					iLocal_1486 = -1;
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_96938.f_9[0], 1390.075f, 3599.438f, 38.975f, 1f, 20000, 0.25f, 512, 149.111f);
			}
			else
			{
				iLocal_1486 = PED::CREATE_SYNCHRONIZED_SCENE(1390.075f, 3599.438f, 38.975f, 0f, 0f, 149.111f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1486, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 8f, -8f, 13, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1486, true);
			}
		}
	}
	if (!iLocal_1493)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
		{
			if ((!PED::IS_PED_INJURED(Global_96938.f_9[1]) && !PED::IS_PED_FLEEING(Global_96938.f_9[1])) && !ENTITY::IS_ENTITY_OCCLUDED(Global_96938.f_9[1]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1391.3676f, 3606.88f, 33.86995f, 1393.2041f, 3601.869f, 36.230907f, 8.25f, false, true, 0))
				{
					__LIB_0__::func_640(Global_96938.f_9[1], "GENERIC_HI", 4);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_96938.f_9[1]))
					{
						iLocal_1493 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1396.1912f, 3600.9634f, 41.038197f, 1390.9996f, 3615.5195f, 38.051826f, 13.75f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}

int func_764()//Position - 0x874A0
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if ((PED::IS_PED_INJURED(Global_96938.f_9[0]) || ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false)) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[0]))
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
			iLocal_1494 = 0;
			return 1;
		}
	}
	return 0;
}

int func_765()//Position - 0x8750F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1389.6022f, 3610.13f, 37.969654f, 1393.3197f, 3599.9182f, 41.05939f, 7.5f, false, true, 0)) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 100f))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, 13000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1487);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1488);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1489);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1490);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_1491);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
				__LIB_38__::func_120();
			}
			else
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (__LIB_15__::func_944() == 0)
		{
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				fLocal_1492 = (fLocal_1492 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_1492 != 0f)
			{
				fLocal_1492 = 0f;
			}
			if (fLocal_1492 > 2f && CAM::GET_GAMEPLAY_CAM_FOV() == 30f)
			{
				Global_96938.f_357 = 0;
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", false, 1f, 0.8f);
				return 1;
			}
		}
		if ((__LIB_15__::func_944() == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1400.1172f, 3606.126f, 37.967976f, 1388.6628f, 3601.9783f, 40.838947f, 7.25f, false, true, 0)) || (__LIB_15__::func_944() == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1388.7574f, 3609.8225f, 37.88084f, 1392.4889f, 3599.616f, 40.963093f, 5.2f, false, true, 0)))
		{
			Global_96938.f_357 = 0;
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", false, 1f, 0.8f);
			return 1;
		}
	}
	return 0;
}

void func_766()//Position - 0x876FC
{
	__LIB_38__::func_155(&(Global_96938.f_9[0]));
	__LIB_38__::func_99();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", false, 1f, 0.8f);
	iLocal_1494 = 0;
}

void func_767()//Position - 0x87734
{
	__LIB_38__::func_151(&(Global_96938.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	iLocal_1494 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", false, 1f, 0.8f);
	__LIB_38__::func_99();
}

void func_768()//Position - 0x8776C
{
	if (__LIB_15__::func_944() == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			func_658(&(Global_96938.f_9[0]), 2, 1390.075f, 3599.438f, 38.975f, 149.111f, 1, 1, 0);
			iLocal_1486 = PED::CREATE_SYNCHRONIZED_SCENE(1390.075f, 3599.438f, 38.975f, 0f, 0f, 149.111f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1486, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 8f, -8f, 9, 0, 1000f, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1486, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
		{
			Global_96938.f_9[1] = PED::CREATE_PED(4, joaat("A_M_M_Hillbilly_02"), 1392.3279f, 3606.53f, 33.9809f, 183.1381f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(Global_96938.f_9[1], joaat("WEAPON_PISTOL"), -1, false, false);
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_96938.f_9[1], "WORLD_HUMAN_GUARD_STAND", 0, false);
		}
	}
	__LIB_38__::func_121(91, "RBHS_INT", 126, -1, 0);
	iLocal_1493 = 0;
	fLocal_1492 = 0f;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("paletoleadin", true, 1f, 0.8f);
}

bool func_769()//Position - 0x8789E
{
	return (((STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1leadinoutrbhs_int_1") && STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(2))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_02"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("paletoleadin"));
}

void func_770()//Position - 0x878D9
{
	STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(2));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
	TASK::REMOVE_WAYPOINT_RECORDING("paletoleadin");
}

void func_771()//Position - 0x87905
{
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::REQUEST_MODEL(__LIB_0__::func_518(2));
	STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_02"));
	TASK::REQUEST_WAYPOINT_RECORDING("paletoleadin");
}

void func_772()//Position - 0x87931
{
	iLocal_1494 = 0;
}

int func_777()//Position - 0x8795F
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(179, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
		else if (fVar1 < (100f * 100f))
		{
			if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"))) > 0.1f)
			{
				__LIB_17__::func_764(51, 0);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), 0f, true, true);
			}
		}
	}
	return 0;
}

void func_778()//Position - 0x879EC
{
	Global_96270 = 1;
}

void func_780()//Position - 0x87A06
{
	Global_96270 = 0;
}

int func_781()//Position - 0x87A13
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("MISSEXILE3"))
	{
		return 1;
	}
	return 0;
}

void func_782()//Position - 0x87A2C
{
	STREAMING::REMOVE_ANIM_DICT("MISSEXILE3");
}

void func_783()//Position - 0x87A3D
{
	STREAMING::REQUEST_ANIM_DICT("MISSEXILE3");
}

int func_789()//Position - 0x87A78
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(178, __LIB_15__::func_944()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_792()//Position - 0x87ADB
{
	__LIB_38__::func_121(15, "EXILE_2_INT", 0, -1, 0);
}

int func_801()//Position - 0x87B34
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(177, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < 49f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		}
		if (fVar1 < (2.5f * 2.5f))
		{
			__LIB_38__::func_120();
			return 1;
		}
	}
	return 0;
}

void func_807()//Position - 0x87C01
{
	__LIB_38__::func_105(&(Global_96938.f_209), "missexile1_cargoplaneleadinoutexile_1_intleadin");
	__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(2));
	__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(0));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("prop_phone_ing_03"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("prop_phone_ing"));
}

void func_810()//Position - 0x87C64
{
	int iVar0;
	if (__LIB_15__::func_944() == 0)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_38__::func_161(2, "Trevor", 2);
			func_813("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
		}
	}
	if (__LIB_15__::func_944() == 2)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					func_813("Michael", Global_96938.f_9[0], joaat("Player_Zero"), 2);
				}
			}
			func_813("Trevor", PLAYER::PLAYER_PED_ID(), joaat("Player_Two"), 2);
		}
	}
	if (__LIB_15__::func_944() == 2)
	{
		Local_1479 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 1) < 20f)
		{
			if (iLocal_1471 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
				iLocal_1471 = 1;
			}
		}
		else if (iLocal_1471 == 1)
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_96938.f_9[0]);
			iLocal_1471 = 0;
		}
		if (iLocal_1467 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					if (iLocal_1470 == 0)
					{
						if (__LIB_0__::func_76(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), 1) > 8.1f)
						{
							iLocal_1477 = PED::CREATE_SYNCHRONIZED_SCENE(1393.589f, 1142.884f, 113.44f, 0f, 0f, 133.56f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1477, "MISSMARTIN1@LEADINOUTMARTIN_1_INT", "Leadin_loop", 8f, -8f, 5, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1477, true);
							iLocal_1471 = 0;
							iLocal_1470 = 1;
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_0__::func_76(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), 1) < 8f || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1392.3f, 1141.6f, 114.4f, 3f, 3f, 3f, false, true, 1))
						{
							if (Local_1479.f_2 < 116f)
							{
								if (__LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
								}
								MISC::CLEAR_AREA_OF_PROJECTILES(1391.9f, 1142f, 113.8f, 30f, 0);
								if (iLocal_1470 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1477))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_9[0], -8f, true);
									}
								}
								iLocal_1478 = PED::CREATE_SYNCHRONIZED_SCENE(1393.589f, 1142.884f, 113.44f, 0f, 0f, 133.56f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1478, "MISSMARTIN1@LEADINOUTMARTIN_1_INT", "Leadin_action", 8f, -8f, 5, 0, 1000f, 0);
								__LIB_38__::func_120();
								iLocal_1476 = MISC::GET_GAME_TIMER();
								iLocal_1471 = 0;
								iLocal_1469 = 1;
								iLocal_1467 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_1467 == 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			if (iLocal_1469 == 1 && iLocal_1472 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1474);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1390.3058f, 1141.5925f, 113.3342f, 1f, 20000, 0.25f, 0, 279.0005f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_96938.f_9[0], 0);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_96938.f_9[0], -1, 0, 3);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1474);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_1474);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				iLocal_1472 = 1;
			}
			if (iLocal_1472 == 1 && iLocal_1473 == 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1478))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1478) > 0.527f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1474);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1393.3097f, 1141.8763f, 113.4431f, 1f, 20000, 0.25f, 0, 270.43f);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_96938.f_9[0], -1, 0, 3);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1474);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_1474);
						iLocal_1473 = 1;
					}
				}
			}
			if (iLocal_1468 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_17__::func_243(&(Global_96938.f_44), "SLM1AUD", "M1_INT_LI", 7, 0, 0, 0))
					{
						iLocal_1468 = 1;
					}
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
		{
			if (!PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			else if (__LIB_0__::func_336(PLAYER::PLAYER_PED_ID(), 0) == -1)
			{
				Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

void func_813(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x881D5
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_814(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_814(int iParam0, var uParam1, int iParam2)//Position - 0x88290
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_40__::func_492(iParam0, &Var2, 0, -1);
	__LIB_40__::func_492(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, __LIB_0__::func_33(iVar0), __LIB_0__::func_206(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__::func_33(iVar0)), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__::func_230(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__::func_231(iVar4, 14, __LIB_0__::func_349(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { __LIB_13__::func_798(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__::func_206(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__::func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { __LIB_13__::func_798(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_818()//Position - 0x88C15
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1393.4f, 1141.5f, 114.4f, true) < 70f)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (__LIB_15__::func_944() == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], true))
			{
				return 1;
			}
		}
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(1389.3f, 1139.8f, 113.8f, 7f))
		{
			return 1;
		}
	}
	return 0;
}

int func_819()//Position - 0x88CEC
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(207, __LIB_15__::func_944()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_15__::func_944() == 0)
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (2.5f * 2.5f))
			{
				return 1;
			}
		}
		if (iLocal_1473 == 1)
		{
			if (iLocal_1469 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1478))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1478) > 0.94f)
							{
								return 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_96938.f_9[0], MISC::GET_HASH_KEY("START_CUTSCENE")))
							{
								return 1;
							}
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_1476 + 15000 || __LIB_0__::func_76(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), 1) > 12f)
				{
					if (!__LIB_0__::func_75())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_820()//Position - 0x88DE1
{
	__LIB_38__::func_93(&(Global_96938[0]));
	__LIB_38__::func_93(&(Global_96938[1]));
	__LIB_38__::func_93(&(Global_96938[2]));
	if (__LIB_15__::func_944() == 2)
	{
		__LIB_38__::func_155(&(Global_96938.f_9[0]));
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, true, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1475, false);
	__LIB_38__::func_99();
	if (__LIB_13__::func_102() != 45)
	{
		__LIB_0__::func_54(1, 1);
	}
}

void func_822()//Position - 0x88E72
{
	__LIB_38__::func_76(&(Global_96938[0]));
	__LIB_38__::func_76(&(Global_96938[1]));
	__LIB_38__::func_76(&(Global_96938[2]));
	if (__LIB_15__::func_944() == 2)
	{
		__LIB_38__::func_151(&(Global_96938.f_9[0]));
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, true, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1475, false);
	__LIB_38__::func_99();
	if (__LIB_13__::func_102() != 45)
	{
		__LIB_0__::func_54(1, 1);
	}
}

void func_823()//Position - 0x88EEF
{
	__LIB_11__::func_816(2, 0);
	__LIB_0__::func_54(0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, false, false);
	MISC::CLEAR_AREA(1388.6f, 1150f, 114f, 70f, true, false, false, false);
	iLocal_1475 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, false, true, true, true);
	if (__LIB_15__::func_944() == 2)
	{
		while (!func_658(&(Global_96938.f_9[0]), 0, 1390.7065f, 1142.6586f, 113.4431f, 170.5477f, 1, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		while (!__LIB_16__::func_939(&(Global_96938[1]), 0, 1371.3683f, 1132.9742f, 112.8401f, 20.5505f, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[1], 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
				PED::SET_PED_CAN_BE_TARGETTED(Global_96938.f_9[0], false);
				__LIB_0__::func_222(&(Global_96938.f_44), 0, Global_96938.f_9[0], "MICHAEL", 0, 1);
			}
		}
		__LIB_0__::func_222(&(Global_96938.f_44), 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.8268f, 1118.405f, 113.838f, 90.5742f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[2], 112, 112);
	__LIB_38__::func_121(45, "MARTIN_1_INT", 0, -1, 252);
	if (__LIB_15__::func_944() == 0)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_38__::func_161(2, "Trevor", 2);
			func_813("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
		}
	}
	if (__LIB_15__::func_944() == 2)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					func_813("Michael", Global_96938.f_9[0], joaat("Player_Zero"), 2);
				}
			}
			func_813("Trevor", PLAYER::PLAYER_PED_ID(), joaat("Player_Two"), 2);
		}
	}
}

int func_831()//Position - 0x8C7BD
{
	if (STREAMING::HAS_ANIM_DICT_LOADED("MISSMARTIN1@LEADINOUTMARTIN_1_INT") && STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
	{
		return 1;
	}
	return 0;
}

void func_832()//Position - 0x8C7E4
{
	STREAMING::REMOVE_ANIM_DICT("MISSMARTIN1@LEADINOUTMARTIN_1_INT");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fusilade"));
}

void func_833()//Position - 0x8C7FE
{
	STREAMING::REQUEST_MODEL(joaat("fusilade"));
	STREAMING::REQUEST_ANIM_DICT("MISSMARTIN1@LEADINOUTMARTIN_1_INT");
}

void func_834()//Position - 0x8C818
{
	iLocal_1467 = 0;
	iLocal_1468 = 0;
	iLocal_1469 = 0;
	iLocal_1470 = 0;
	iLocal_1471 = 0;
	iLocal_1472 = 0;
	iLocal_1473 = 0;
	iLocal_1476 = 0;
}

void func_836()//Position - 0x8C848
{
	struct<3> Var0;
	float fVar1;
	switch (iLocal_1499)
	{
		case 0:
			Var0 = { __LIB_38__::func_90(212, 0) };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
				if (fVar1 < (2.5f * 2.5f))
				{
					iLocal_1499++;
				}
			}
			break;
		case 1:
			__LIB_38__::func_120();
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), -1011.2934f, -480.4006f, 38.97574f, 1f, -1, 40000f, 0.5f);
			iLocal_1500 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1017f, -483.5f, 40.7f, 49.6f, 0f, -78.9f, 50f, false, 2);
			CAM::SHAKE_CAM(iLocal_1500, "hand_shake", 0.5f);
			CAM::SET_CAM_ACTIVE(iLocal_1500, true);
			func_837(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 1, 3500, 0);
			__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
			iLocal_1501 = MISC::GET_GAME_TIMER();
			iLocal_1499++;
			break;
		case 2:
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if ((MISC::GET_GAME_TIMER() - iLocal_1501) >= 3500)
			{
				iLocal_1499++;
			}
			break;
		case 3:
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			break;
	}
	if (iLocal_1499 > 0)
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

void func_837(bool bParam0, struct<3> Param1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x8C997
{
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, iParam6);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::RENDER_SCRIPT_CAMS(bParam2, bParam3, iParam5, true, true, 0);
	if (bParam4)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	FIRE::STOP_FIRE_IN_RANGE(Param1, 200f);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), "OFF");
	}
	__LIB_0__::func_366(0);
}

int func_840()//Position - 0x8CA1E
{
	if (iLocal_1499 == 3)
	{
		return 1;
	}
	return 0;
}

void func_841()//Position - 0x8CA32
{
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_843()//Position - 0x8CA4A
{
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1006f, -478f, 49f, 15f, 0);
}

void func_849()//Position - 0x8CA99
{
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("jb700"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("U_M_M_SpyActor"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("U_F_Y_SpyActress"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("A_F_Y_Hipster_04"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("prop_a_trailer_door_01"));
}

int func_852()//Position - 0x8CAFE
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(173, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_861()//Position - 0x8CB92
{
	int iVar0;
	if (iLocal_486 > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iLocal_486)
		{
			iLocal_486 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_486, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	}
	switch (iLocal_485)
	{
		case 0:
			iLocal_484 = INTERIOR::GET_INTERIOR_AT_COORDS(441.02f, -978.93f, 30.69f);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_484))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_484);
				iLocal_485++;
			}
			break;
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(iLocal_484))
			{
				STREAMING::SET_INTERIOR_ACTIVE(iLocal_484, true);
				iLocal_485++;
			}
			break;
		case 2:
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.25204f, -976.51324f, 442.04056f) - Vector(1.125f, 3.5f, 3.3125f), Vector(30.25204f, -976.51324f, 442.04056f) + Vector(1.125f, 3.5f, 3.3125f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.689508f, -990.568f, 454.51666f) - Vector(1f, 3.5f, 6.75f), Vector(30.689508f, -990.568f, 454.51666f) + Vector(1f, 3.5f, 6.75f), false, true, true, true);
			MISC::CLEAR_AREA_OF_PEDS(454.6653f, -990.8345f, 29.7694f, 10f, 0);
			MISC::CLEAR_AREA_OF_PEDS(441.65f, -976.73f, 29.69f, 4f, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.15f, -986.07f, 442.42f) - Vector(1f, 0.5f, 0.5f), Vector(30.15f, -986.07f, 442.42f) + Vector(1f, 0.5f, 0.5f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.15f, -985.99f, 439.31f) - Vector(1f, 0.5f, 0.5f), Vector(30.15f, -985.99f, 439.31f) + Vector(1f, 0.5f, 0.5f), false, true, true, true);
			iLocal_482[0] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 441.0267f, -978.204f, 29.6895f, 192f, true, true);
			iLocal_482[1] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 440.2506f, -975.6328f, 29.6895f, 356f, true, true);
			iLocal_482[2] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 454.1487f, -979.894f, 29.6896f, 105.1729f, true, true);
			iLocal_482[3] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 450.2071f, -992.9072f, 29.6896f, 316.4481f, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_482[0]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 0, 2, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[0], 10, 0, 1, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_482[1]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[1], 10, 1, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_482[2]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 9, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_482[2], 10, 1, 1, 0);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_482[0], false);
			AUDIO::STOP_PED_SPEAKING(iLocal_482[0], true);
			AUDIO::STOP_PED_SPEAKING(iLocal_482[1], true);
			AUDIO::STOP_PED_SPEAKING(iLocal_482[2], true);
			AUDIO::STOP_PED_SPEAKING(iLocal_482[3], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_482[0], joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_482[1], joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_482[2], joaat("WEAPON_PISTOL"), -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_482[3], joaat("WEAPON_PISTOL"), -1, false, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_482[0], "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_482[1], "WORLD_HUMAN_CLIPBOARD", 0, false);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_482[2], "WORLD_HUMAN_CLIPBOARD", 0, false);
			iLocal_483[0] = PED::CREATE_PED(4, joaat("A_M_Y_GenStreet_02"), 436.9079f, -986.8186f, 29.6895f, 71.5386f, true, true);
			iLocal_483[1] = PED::CREATE_PED(4, joaat("A_M_Y_GenStreet_02"), 443.468f, -981.777f, 29.6895f, 30f, true, true);
			iLocal_483[2] = PED::CREATE_PED(4, joaat("A_M_Y_GenStreet_02"), 444.914f, -988.1146f, 29.6895f, 71.5386f, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_483[0]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[0], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[0], 3, 1, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[0], 4, 0, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_483[1]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[1], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[1], 4, 0, 2, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_483[2]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_483[2], 4, 0, 1, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_483[0], "WORLD_HUMAN_BUM_STANDING", 0, false);
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_483[1], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
			iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(447.14f, -988.574f, 29.688f, 0f, 0f, -80.15f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_482[3], iVar0, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 1000f, -4f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_483[2], iVar0, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 1000f, -4f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
			iLocal_485++;
			break;
	}
}

int func_863()//Position - 0x8D18F
{
	int iVar0;
	int iVar1;
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 443.0603f, -943.35364f, 12.574972f, 441.9478f, -1061.5354f, 55.02719f, 130.8125f))
	{
		iVar0 = FIRE::GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(-1, 443.0603f, -943.35364f, 12.574972f, 441.9478f, -1061.5354f, 55.02719f, 130.8125f);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 1;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 443.0603f, -943.35364f, 12.574972f, 441.9478f, -1061.5354f, 55.02719f, 130.8125f, false, true, 0))
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			return 1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar1]))
		{
			if (PED::IS_PED_INJURED(Global_96938.f_9[iVar1]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar1], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_COMBAT(Global_96938.f_9[iVar1], 0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_864()//Position - 0x8D2E2
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(172, __LIB_15__::func_944()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (__LIB_15__::func_944() == 2)
		{
			if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && fVar1 < (10f * 10f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 409.3329f, -969.2733f, 27.566418f, 408.97018f, -982.8369f, 32.20646f, 6.625f, false, true, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					__LIB_0__::func_151("CHRETURN", 3000);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iLocal_486)
					{
						iLocal_486 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				else
				{
					Global_96938.f_9[0] = iLocal_482[0];
					Global_96938.f_9[1] = iLocal_482[1];
					Global_96938.f_9[2] = iLocal_482[2];
					Global_96938.f_9[6] = iLocal_482[3];
					Global_96938.f_9[3] = iLocal_483[0];
					Global_96938.f_9[4] = iLocal_483[1];
					Global_96938.f_9[5] = iLocal_483[2];
					return 1;
				}
			}
		}
		else if (__LIB_15__::func_944() == 1)
		{
			if (fVar1 < (5f * 5f))
			{
				Global_96938.f_9[0] = iLocal_482[0];
				Global_96938.f_9[1] = iLocal_482[1];
				Global_96938.f_9[2] = iLocal_482[2];
				Global_96938.f_9[6] = iLocal_482[3];
				Global_96938.f_9[3] = iLocal_483[0];
				Global_96938.f_9[4] = iLocal_483[1];
				Global_96938.f_9[5] = iLocal_483[2];
				return 1;
			}
		}
	}
	return 0;
}

void func_866()//Position - 0x8D4AB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_482)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_482[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_482[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_483)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_483[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_483[iVar0]));
		}
		iVar0++;
	}
}

void func_867()//Position - 0x8D50D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_482)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_482[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_482[iVar0], true))
			{
				PED::SET_PED_KEEP_TASK(iLocal_482[iVar0], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_482[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_483)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_483[iVar0]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_483[iVar0], true))
			{
				PED::SET_PED_KEEP_TASK(iLocal_483[iVar0], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_483[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_868()//Position - 0x8D5A5
{
	iLocal_486 = 0;
	PED::SET_CREATE_RANDOM_COPS(false);
}

void func_871()//Position - 0x8D5E3
{
	__LIB_38__::func_105(&(Global_96938.f_209), "missheistdockssetup1ig_13@start_idle");
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("S_M_Y_Cop_01"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("A_M_Y_GenStreet_02"));
	__LIB_38__::func_134(&(Global_96938.f_209), "CHHEIST", 0, 0);
}

int func_877()//Position - 0x8D66D
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < Global_96938.f_9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
				else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Global_96938.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_96938)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Global_96938[iVar0], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar0], false))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(107.18443f, -434.60983f, 37.239693f, 124.47858f, -385.5533f, 52.27139f, 40f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 107.18443f, -434.60983f, 37.239693f, 124.47858f, -385.5533f, 52.27139f, 40f))
	{
		return 1;
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(114.57894f, -399.86444f, 40.264f, 12f, 0, 20503);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_878()//Position - 0x8D810
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { __LIB_38__::func_90(171, 0) };
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar2 = SYSTEM::VDIST2(Var1, 108.38885f, -396.6129f, 40.27208f);
		fVar3 = SYSTEM::VDIST2(Var1, 114.03026f, -399.25626f, 40.26558f);
		fVar4 = (fVar2 - fVar3);
		if (!Global_97361)
		{
			if (fVar4 > 0.5f)
			{
				if (BitTest(uLocal_479, 1))
				{
					__LIB_38__::func_99();
					MISC::CLEAR_BIT(&uLocal_479, 1);
				}
				if (!BitTest(uLocal_479, 2))
				{
					if (!Global_78336)
					{
						__LIB_38__::func_121(8, "CAR_1_INT_CONCAT", 8, 14, 12);
						__LIB_42__::func_468(8, "DEVIN", Global_96938.f_9[0]);
						__LIB_38__::func_135(8, "DEVIN", 8, 1, 0);
						__LIB_42__::func_468(8, "MOLLY", Global_96938.f_9[1]);
						MISC::SET_BIT(&uLocal_479, 2);
					}
				}
			}
			else if (fVar4 < -0.5f)
			{
				if (BitTest(uLocal_479, 2))
				{
					__LIB_38__::func_99();
					MISC::CLEAR_BIT(&uLocal_479, 2);
				}
				if (!BitTest(uLocal_479, 1))
				{
					if (!Global_78336)
					{
						__LIB_38__::func_121(8, "CAR_1_INT_CONCAT", 8, 15, 12);
						__LIB_42__::func_468(8, "DEVIN", Global_96938.f_9[0]);
						__LIB_38__::func_135(8, "DEVIN", 8, 1, 0);
						__LIB_42__::func_468(8, "MOLLY", Global_96938.f_9[1]);
						MISC::SET_BIT(&uLocal_479, 1);
					}
				}
			}
			else if (!BitTest(uLocal_479, 1) && !BitTest(uLocal_479, 2))
			{
				if (!Global_78336)
				{
					__LIB_38__::func_121(8, "CAR_1_INT_CONCAT", 8, 14, 12);
					__LIB_42__::func_468(8, "DEVIN", Global_96938.f_9[0]);
					__LIB_38__::func_135(8, "DEVIN", 8, 1, 0);
					__LIB_42__::func_468(8, "MOLLY", Global_96938.f_9[1]);
					MISC::SET_BIT(&uLocal_479, 2);
				}
			}
			if (BitTest(uLocal_479, 1) || BitTest(uLocal_479, 2))
			{
				if ((((CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4 && ((__LIB_15__::func_944() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 107.18443f, -434.60983f, 37.239693f, 124.47858f, -385.5533f, 52.27139f, 40f, false, true, 0)) || (__LIB_15__::func_944() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.34621f, -419.77496f, 37.358894f, 121.540504f, -384.98822f, 52.58789f, 32f, false, true, 0)))) || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 111.34621f, -404.77496f, 37.358894f, 118.540504f, -383.98822f, 52.58789f, 25f, false, true, 0))) && !__LIB_38__::func_109(107.18443f, -434.60983f, 37.239693f, 124.47858f, -385.5533f, 52.27139f, 40f)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_481 = -1;
					}
					__LIB_38__::func_120();
					MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 15000, 0, 2);
				}
			}
		}
		else
		{
			if (iLocal_481 == -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_481 = MISC::GET_GAME_TIMER();
			}
			if (!iLocal_480)
			{
				if ((((__LIB_15__::func_944() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 96.08694f, -384.519f, 39.30441f, 131.70059f, -409.52316f, 46.06152f, 20f, false, true, 0)) || (__LIB_15__::func_944() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 98.81f, -386.6437f, 39.887123f, 124.4522f, -403.86444f, 50.203625f, 20f, false, true, 0))) && iLocal_481 != -1) && (MISC::GET_GAME_TIMER() - iLocal_481) > 1500)
				{
					if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 1f, 20000, 0.25f, 4, 40000f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), -1, 2500, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
						if (__LIB_15__::func_944() == 1)
						{
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.915f);
						}
						else
						{
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.015f);
						}
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.02f);
						CAM::SET_GAMEPLAY_HINT_FOV(30f);
					}
					Global_96938.f_358 = MISC::GET_GAME_TIMER();
					iLocal_480 = 1;
				}
			}
			else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_478))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT"))
				{
					if (__LIB_15__::func_944() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 98.81f, -386.6437f, 39.887123f, 124.4522f, -403.86444f, 50.203625f, 20f, false, true, 0))
					{
						iLocal_478 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_478, "misscarsteal1leadin", "DEVON_Fra_enters_leadin", 4f, -1000f, 1, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_478, "misscarsteal1leadin", "MOLLY_Fra_enters_leadin", 4f, -1000f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_478, 0f);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_478, false);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_478, true);
						__LIB_0__::func_222(&(Global_96938.f_44), 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						__LIB_17__::func_243(&(Global_96938.f_44), "CST3AUD", "CST3_INT_LI", 7, 0, 0, 0);
					}
				}
			}
			if ((((__LIB_15__::func_944() == 1 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 103.8719f, -393.5728f, 37.765583f, 117.71098f, -400.91656f, 50.263367f, 14f, false, true, 0) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_478) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_478) >= 0.5f))) || (__LIB_15__::func_944() == 2 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 110.284775f, -406.4378f, 45.264786f, 116.96628f, -392.0454f, 39.711277f, 20f, false, true, 0))) || (__LIB_15__::func_944() == 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 110.284775f, -406.4378f, 45.264786f, 116.96628f, -392.0454f, 39.711277f, 24f, false, true, 0))) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 106.03828f, -438.19327f, 37.253963f, 126.99445f, -378.3998f, 52.260574f, 50f, false, true, 0))
			{
				return 1;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
			}
		}
	}
	return 0;
}

void func_881()//Position - 0x8DFF0
{
	__LIB_38__::func_155(&(Global_96938.f_9[0]));
	__LIB_38__::func_155(&(Global_96938.f_9[1]));
	__LIB_38__::func_155(&(Global_96938.f_9[2]));
	__LIB_38__::func_155(&(Global_96938.f_9[3]));
	__LIB_38__::func_155(&(Global_96938.f_9[4]));
	__LIB_38__::func_93(&(Global_96938[0]));
	__LIB_38__::func_93(&(Global_96938[1]));
	__LIB_38__::func_93(&(Global_96938[2]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	CAM::STOP_GAMEPLAY_HINT(false);
	MISC::CLEAR_BIT(&uLocal_479, 2);
	MISC::CLEAR_BIT(&uLocal_479, 1);
	__LIB_38__::func_99();
}

void func_882()//Position - 0x8E088
{
	__LIB_38__::func_151(&(Global_96938.f_9[0]));
	__LIB_38__::func_151(&(Global_96938.f_9[1]));
	__LIB_38__::func_151(&(Global_96938.f_9[2]));
	__LIB_38__::func_151(&(Global_96938.f_9[3]));
	__LIB_38__::func_151(&(Global_96938.f_9[4]));
	__LIB_38__::func_76(&(Global_96938[0]));
	__LIB_38__::func_76(&(Global_96938[1]));
	__LIB_38__::func_76(&(Global_96938[2]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	CAM::STOP_GAMEPLAY_HINT(false);
	MISC::CLEAR_BIT(&uLocal_479, 2);
	MISC::CLEAR_BIT(&uLocal_479, 1);
	__LIB_38__::func_99();
}

void func_883()//Position - 0x8E120
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
	MISC::CLEAR_AREA(__LIB_38__::func_90(171, 0), 14f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(80.36914f, -389.13193f, 104.74739f) - Vector(50f, 100f, 65f), Vector(80.36914f, -389.13193f, 104.74739f) + Vector(50f, 100f, 65f), false, true, true, true);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_38__::func_110(Global_96938.f_9[0]);
		ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[0], -140.8511f);
		__LIB_16__::func_312(Global_96938.f_9[0], Global_96938.f_42);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		__LIB_38__::func_110(Global_96938.f_9[1]);
		ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[1], -0.4412f);
		__LIB_16__::func_312(Global_96938.f_9[1], Global_96938.f_42);
	}
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("felon"), 110.7381f, -401.221f, 40.9425f, -112.084f, true, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		__LIB_38__::func_110(Global_96938.f_9[2]);
		PED::SET_PED_INTO_VEHICLE(Global_96938.f_9[2], Global_96938[0], -1);
		__LIB_16__::func_312(Global_96938.f_9[2], Global_96938.f_42);
	}
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("f620"), 117.105f, -414.6006f, 40.1527f, 268.8413f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[1], true);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[1], 43, 43);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[1], 48, 48);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[2], true);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[2], 0, 0);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[2], 0, 0);
	if (__LIB_15__::func_944() == 1 || (__LIB_15__::func_944() == 0 && ENTITY::DOES_ENTITY_EXIST(uLocal_438[2])))
	{
		iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar0, "misscarsteal1leadin", "devon_idle_01", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
		iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar1, "misscarsteal1leadin", "molly_idle_01", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar1, true);
	}
	else if (__LIB_15__::func_944() == 2)
	{
		iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar2, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_devin", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
		iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar3, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_molly", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			__LIB_38__::func_110(Global_96938.f_9[3]);
			ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[3], 148.2f);
			__LIB_16__::func_312(Global_96938.f_9[3], Global_96938.f_42);
			iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iVar4, "misscarsteal1leadinout@i_fought_the_law", "leadin_loop_franklin", 1000f, -1000f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, true);
		}
	}
	else if (__LIB_15__::func_944() == 0)
	{
		iVar5 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar5, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_DEVIN", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar5, true);
		iVar6 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar6, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_MOLLY", 1000f, -1000f, 1, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar6, true);
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			__LIB_38__::func_110(Global_96938.f_9[3]);
			ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[3], 148.2f);
			__LIB_16__::func_312(Global_96938.f_9[3], Global_96938.f_42);
			iVar7 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iVar7, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_FRANKLIN", 1000f, -1000f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar7, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			__LIB_38__::func_110(Global_96938.f_9[4]);
			ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[4], 42.4422f);
			__LIB_16__::func_312(Global_96938.f_9[4], Global_96938.f_42);
			iVar8 = PED::CREATE_SYNCHRONIZED_SCENE(110f, -399f, 40.23f, 0f, 0f, 66.5f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[4], iVar8, "misscarsteal1leadinout@i_fought_the_law", "MicArrive_LeadIn_LOOP_TREVOR", 1000f, -1000f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar8, true);
		}
	}
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadin");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("felon"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("adder"));
}

int func_884()//Position - 0x8E718
{
	struct<3> Var0[3];
	struct<3> Var1[3];
	struct<3> Var2[1];
	struct<3> Var3[1];
	struct<3> Var4[1];
	if (!__LIB_38__::func_68(&(Global_96938.f_209)))
	{
		return 0;
	}
	__LIB_38__::func_111(&(Var0[0 /*3*/]), 3, 2, 0);
	__LIB_38__::func_111(&(Var0[1 /*3*/]), 4, 2, 0);
	__LIB_38__::func_111(&(Var0[2 /*3*/]), 10, 1, 0);
	__LIB_38__::func_111(&(Var1[0 /*3*/]), 0, 1, 1);
	__LIB_38__::func_111(&(Var1[1 /*3*/]), 3, 0, 0);
	__LIB_38__::func_111(&(Var1[2 /*3*/]), 4, 0, 0);
	Var2[0 /*3*/].f_1 = -1;
	Var3[0 /*3*/] = 1;
	Var3[0 /*3*/].f_1 = 0;
	Var3[0 /*3*/].f_2 = 0;
	Var4[0 /*3*/].f_1 = -1;
	switch (__LIB_15__::func_944())
	{
		case 1:
			if ((!func_885(&(Global_96938.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var4) || !func_885(&(Global_96938.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var2, &Var3)) || !func_885(&(Global_96938.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var1, &Var4))
			{
				return 0;
			}
			break;
		case 2:
			if (((!func_885(&(Global_96938.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var4) || !func_885(&(Global_96938.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var2, &Var3)) || !func_885(&(Global_96938.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var1, &Var4)) || !func_299(&(Global_96938.f_9[3]), 1, 111.661f, -400.209f, 40.243f, 12, -99))
			{
				return 0;
			}
			break;
		case 0:
			if ((((!func_885(&(Global_96938.f_9[0]), 29, 111.4789f, -396.7308f, 40.2624f, &Var0, &Var4) || !func_885(&(Global_96938.f_9[1]), 45, 112.5587f, -400.4127f, 40.2624f, &Var2, &Var3)) || !func_885(&(Global_96938.f_9[2]), 28, 111.4789f, -396.7308f, 40.2624f, &Var1, &Var4)) || !func_299(&(Global_96938.f_9[3]), 1, 111.661f, -400.209f, 40.243f, 12, -99)) || !func_299(&(Global_96938.f_9[4]), 2, 111.7596f, -399.2278f, 40.2648f, 12, -99))
			{
				return 0;
			}
			break;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal1leadinout@i_fought_the_law"))
	{
		return 0;
	}
	return 1;
}

int func_885(int* iParam0, bool bParam1, struct<3> Param2, var uParam3, int iParam4)//Position - 0x8E9DF
{
	int iVar0;
	if (!__LIB_17__::func_720(bParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_0__::func_648(iParam0, bParam1, Param2, 0f, 0);
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if ((uParam3[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(*iParam0, (*uParam3)[iVar0 /*3*/], (uParam3[iVar0 /*3*/])->f_1, (uParam3[iVar0 /*3*/])->f_2, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < *iParam4)
		{
			if ((iParam4[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_PROP_INDEX(*iParam0, (*iParam4)[iVar0 /*3*/], (iParam4[iVar0 /*3*/])->f_1, (iParam4[iVar0 /*3*/])->f_2, false);
			}
			iVar0++;
		}
		ENTITY::SET_ENTITY_VISIBLE(*iParam0, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
		ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		return 0;
	}
	else if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		PED::DELETE_PED(iParam0);
		return 0;
	}
	else if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*iParam0))
	{
		return 0;
	}
	return 1;
}

void func_888()//Position - 0x8EB22
{
	__LIB_38__::func_62(29);
	STREAMING::REMOVE_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	__LIB_38__::func_126(&(Global_96938.f_209), 0);
}

void func_890()//Position - 0x8EB6A
{
	__LIB_17__::func_721(29);
	STREAMING::REQUEST_ANIM_DICT("misscarsteal1leadinout@i_fought_the_law");
	Global_96938.f_209.f_146 = MISC::GET_FRAME_COUNT();
	__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(2));
	__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_518(1));
	__LIB_38__::func_106(&(Global_96938.f_209), __LIB_0__::func_493(45));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("A_M_Y_Business_01"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("felon"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("f620"));
	__LIB_38__::func_106(&(Global_96938.f_209), joaat("adder"));
	__LIB_38__::func_105(&(Global_96938.f_209), "misscarsteal1leadin");
}

void func_892()//Position - 0x8EC2C
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	MISC::CLEAR_BIT(&uLocal_479, 2);
	MISC::CLEAR_BIT(&uLocal_479, 1);
	Global_96938.f_358 = -1;
}

void func_894()//Position - 0x8EC69
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 809.4f, -1075.1f, 29f);
	if (fVar0 < 625f)
	{
		if (iLocal_437 == -1)
		{
			iLocal_437 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "ASS_PAYPHONE_RING_master", 809.4f, -1075.1f, 29f, 0, false, 0, false);
		}
	}
	else if (iLocal_437 != -1)
	{
		__LIB_2__::func_814(&iLocal_437);
		iLocal_437 = -1;
	}
}

int func_898()//Position - 0x8ED1C
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(168, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[7 /*34*/].f_11, __LIB_15__::func_944()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4f * 4f))
			{
				__LIB_2__::func_814(&iLocal_437);
				iLocal_437 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_907()//Position - 0x8EE39
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -26.204f, -109.798f, 57f);
	if (fVar0 < 625f)
	{
		if (iLocal_437 == -1)
		{
			iLocal_437 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "ASS_PAYPHONE_RING_master", -26.204f, -109.798f, 57f, 0, false, 0, false);
		}
	}
	else if (iLocal_437 != -1)
	{
		__LIB_2__::func_814(&iLocal_437);
		iLocal_437 = -1;
	}
}

int func_910()//Position - 0x8EECB
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(167, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[6 /*34*/].f_11, __LIB_15__::func_944()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (3.5f * 3.5f))
			{
				__LIB_2__::func_814(&iLocal_437);
				iLocal_437 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_919()//Position - 0x8EF8A
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 214.3494f, -853.0786f, 30.7142f);
	if (fVar0 < 625f)
	{
		if (iLocal_437 == -1)
		{
			iLocal_437 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "ASS_PAYPHONE_RING_master", 214.3494f, -853.0786f, 30.7142f, 0, false, 0, false);
		}
	}
	else if (iLocal_437 != -1)
	{
		__LIB_2__::func_814(&iLocal_437);
		iLocal_437 = -1;
	}
}

int func_922()//Position - 0x8F01C
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(166, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[5 /*34*/].f_11, __LIB_15__::func_944()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4f * 4f))
			{
				__LIB_2__::func_814(&iLocal_437);
				iLocal_437 = -1;
				return 1;
			}
		}
	}
	return 0;
}

int func_934()//Position - 0x8F158
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(165, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[4 /*34*/].f_11, __LIB_15__::func_944()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (6f * 6f))
			{
				STREAMING::SET_HD_AREA(-717.8348f, -932.1736f, 18.01735f, 26f);
				__LIB_2__::func_814(&iLocal_437);
				iLocal_437 = -1;
				return 1;
			}
		}
	}
	return 0;
}

int func_946()//Position - 0x8F288
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_90(164, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[3 /*34*/].f_11, __LIB_15__::func_944()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4.75f * 4.75f))
			{
				__LIB_38__::func_120();
				return 1;
			}
		}
	}
	return 0;
}

void func_954(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7)//Position - 0x8F3BB
{
	*uParam0 = iParam1;
	uParam0->f_2 = fParam2;
	uParam0->f_3 = fParam3;
	uParam0->f_4 = fParam4;
	uParam0->f_6 = iParam5;
	uParam0->f_5 = fParam6;
	if (BitTest(Global_91229[iParam1 /*34*/].f_15, 13))
	{
		Global_94426[iParam1 /*2*/].f_1 = (fParam2 + 5f);
	}
	else
	{
		Global_94426[iParam1 /*2*/].f_1 = 20f;
	}
	if (BitTest(iParam7, 0))
	{
		MISC::SET_BIT(&(uParam0->f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 4);
	}
	if (BitTest(iParam7, 1))
	{
		MISC::SET_BIT(&(uParam0->f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 5);
	}
	if (BitTest(iParam7, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_1), 12);
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), 1);
	MISC::CLEAR_BIT(&(uParam0->f_1), 9);
	MISC::SET_BIT(&(uParam0->f_1), 0);
}

