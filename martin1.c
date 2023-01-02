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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
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
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	float fLocal_77 = 0f;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
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
	int iLocal_110 = 0;
	bool bLocal_111 = 0;
	var uLocal_112 = 175;
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
	var uLocal_288 = 175;
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
	var uLocal_464 = 175;
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
	var uLocal_640 = 175;
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
	var uLocal_816 = 175;
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
	var uLocal_996 = 35;
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
	var uLocal_1032 = 35;
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
	var uLocal_1068 = 35;
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
	var uLocal_1104 = 35;
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
	var uLocal_1140 = 35;
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
	var uLocal_1176 = 35;
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
	var uLocal_1212 = 15;
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
	var uLocal_1228 = 15;
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
	var uLocal_1244 = 15;
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
	var uLocal_1260 = 15;
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
	float fLocal_1276 = 0f;
	float fLocal_1277 = 0f;
	var uLocal_1278 = 0;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	var uLocal_1283 = 0;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	float fLocal_1293 = 0f;
	float fLocal_1294 = 0f;
	float fLocal_1295 = 0f;
	float fLocal_1296 = 0f;
	var uLocal_1297 = 175;
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
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 175;
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
	var uLocal_1649 = 175;
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
	var uLocal_1825 = 35;
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
	var uLocal_1861 = 35;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
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
	var uLocal_1897 = 35;
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
	var uLocal_1933 = 15;
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
	int iLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 175;
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
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
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
	var uLocal_2047 = 0;
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
	var uLocal_2060 = 0;
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
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
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
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
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
	var uLocal_2147 = 0;
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
	var uLocal_2174 = 0;
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
	var uLocal_2204 = 0;
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
	var uLocal_2231 = 0;
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
	var uLocal_2261 = 0;
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
	var uLocal_2288 = 0;
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
	var uLocal_2318 = 0;
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
	var uLocal_2345 = 0;
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
	var uLocal_2375 = 0;
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
	var uLocal_2402 = 0;
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
	var uLocal_2432 = 0;
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
	var uLocal_2459 = 0;
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
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 15;
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
	var uLocal_2516 = 0;
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
	var uLocal_2538 = 35;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
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
	var uLocal_2573 = 0;
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
	var uLocal_2603 = 0;
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
	var uLocal_2630 = 0;
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
	var uLocal_2660 = 0;
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
	var uLocal_2687 = 0;
	var uLocal_2688 = 175;
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
	var uLocal_2717 = 0;
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
	var uLocal_2744 = 0;
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
	var uLocal_2774 = 0;
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
	var uLocal_2801 = 0;
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
	var uLocal_2831 = 0;
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
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 15;
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
	var uLocal_2880 = 35;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
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
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 175;
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
	var uLocal_2945 = 0;
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
	var uLocal_2972 = 0;
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
	var uLocal_3002 = 0;
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
	var uLocal_3029 = 0;
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
	var uLocal_3059 = 0;
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
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 12;
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
	var uLocal_3108 = 15;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 35;
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
	var uLocal_3143 = 0;
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
	var uLocal_3160 = 6;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 12;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	int iLocal_3183 = 0;
	struct<21> Local_3184 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<40> Local_3198 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 4;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 4;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 4;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 4;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 4;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 4;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 4;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 16;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
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
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 21;
	var uLocal_3418 = 6;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	bool bLocal_3422 = 0;
	int iLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 20;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	bool bLocal_3446 = 0;
	bool bLocal_3447 = 0;
	int iLocal_3448 = 0;
	int iLocal_3449[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3450[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3451[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3452[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3453 = 0;
	int iLocal_3454 = 0;
	int iLocal_3455 = 0;
	int iLocal_3456 = 0;
	int iLocal_3457 = 0;
	int iLocal_3458 = 0;
	int iLocal_3459 = 0;
	int iLocal_3460 = 0;
	int iLocal_3461 = 0;
	int iLocal_3462 = 0;
	int iLocal_3463 = 0;
	int iLocal_3464 = 0;
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479 = 0;
	int iLocal_3480 = 0;
	int iLocal_3481 = 0;
	int iLocal_3482 = 0;
	int iLocal_3483 = 0;
	int iLocal_3484 = 0;
	int iLocal_3485 = 0;
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int iLocal_3490 = 0;
	int iLocal_3491 = 0;
	int iLocal_3492 = 0;
	int iLocal_3493 = 0;
	int iLocal_3494[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3495 = 0;
	int iLocal_3496 = 0;
	int iLocal_3497 = 0;
	int iLocal_3498 = 0;
	int iLocal_3499 = 0;
	int iLocal_3500 = 0;
	int iLocal_3501 = 0;
	int iLocal_3502 = 0;
	int iLocal_3503 = 0;
	int iLocal_3504 = 0;
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int iLocal_3516 = 0;
	int iLocal_3517 = 0;
	int iLocal_3518 = 0;
	int iLocal_3519 = 0;
	int iLocal_3520 = 0;
	int iLocal_3521 = 0;
	int iLocal_3522 = 0;
	int iLocal_3523 = 0;
	int iLocal_3524 = 0;
	int iLocal_3525[3] = { 0, 0, 0 };
	int iLocal_3526 = 0;
	int iLocal_3527 = 0;
	int iLocal_3528 = 0;
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542 = 0;
	int iLocal_3543 = 0;
	bool bLocal_3544 = 0;
	int iLocal_3545 = 0;
	int iLocal_3546 = 0;
	int iLocal_3547 = 0;
	int iLocal_3548 = 0;
	int iLocal_3549 = 0;
	int iLocal_3550 = 0;
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570 = 0;
	int iLocal_3571 = 0;
	int iLocal_3572 = 0;
	int iLocal_3573 = 0;
	int iLocal_3574 = 0;
	int iLocal_3575 = 0;
	int iLocal_3576 = 0;
	int iLocal_3577 = 0;
	int iLocal_3578 = 0;
	int iLocal_3579 = 0;
	int iLocal_3580 = 0;
	int iLocal_3581 = 0;
	int iLocal_3582 = 0;
	int iLocal_3583 = 0;
	int iLocal_3584 = 0;
	int iLocal_3585 = 0;
	int iLocal_3586 = 0;
	int iLocal_3587 = 0;
	int iLocal_3588 = 0;
	int iLocal_3589 = 0;
	int iLocal_3590 = 0;
	int iLocal_3591 = 0;
	int iLocal_3592 = 0;
	int iLocal_3593 = 0;
	int iLocal_3594 = 0;
	int iLocal_3595 = 0;
	int iLocal_3596 = 0;
	int iLocal_3597 = 0;
	int iLocal_3598 = 0;
	int iLocal_3599 = 0;
	int iLocal_3600 = 0;
	int iLocal_3601 = 0;
	int iLocal_3602 = 0;
	int iLocal_3603 = 0;
	int iLocal_3604 = 0;
	struct<3> Local_3605 = { 0, 0, 0 } ;
	struct<3> Local_3606 = { 0, 0, 0 } ;
	struct<3> Local_3607 = { 0, 0, 0 } ;
	struct<3> Local_3608 = { 0, 0, 0 } ;
	struct<3> Local_3609 = { 0, 0, 0 } ;
	struct<3> Local_3610 = { 0, 0, 0 } ;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	struct<3> Local_3614 = { 0, 0, 0 } ;
	struct<3> Local_3615 = { 0, 0, 0 } ;
	struct<3> Local_3616 = { 0, 0, 0 } ;
	struct<3> Local_3617 = { 0, 0, 0 } ;
	struct<3> Local_3618 = { 0, 0, 0 } ;
	struct<3> Local_3619 = { 0, 0, 0 } ;
	struct<3> Local_3620 = { 0, 0, 0 } ;
	struct<3> Local_3621 = { 0, 0, 0 } ;
	struct<3> Local_3622 = { 0, 0, 0 } ;
	struct<3> Local_3623 = { 0, 0, 0 } ;
	float fLocal_3624 = 0f;
	float fLocal_3625 = 0f;
	float fLocal_3626 = 0f;
	var uLocal_3627[2] = { 0, 0 };
	var uLocal_3628[2] = { 0, 0 };
	var uLocal_3629 = 0;
	float fLocal_3630 = 0f;
	float fLocal_3631 = 0f;
	float fLocal_3632 = 0f;
	int iLocal_3633 = 0;
	int iLocal_3634 = 0;
	int iLocal_3635 = 0;
	int iLocal_3636 = 0;
	int iLocal_3637 = 0;
	int iLocal_3638 = 0;
	int iLocal_3639 = 0;
	int iLocal_3640 = 0;
	int iLocal_3641 = 0;
	int iLocal_3642 = 0;
	int iLocal_3643 = 0;
	int iLocal_3644 = 0;
	int iLocal_3645 = 0;
	int iLocal_3646 = 0;
	int iLocal_3647 = 0;
	int iLocal_3648 = 0;
	int iLocal_3649 = 0;
	int iLocal_3650 = 0;
	int iLocal_3651 = 0;
	int iLocal_3652 = 0;
	int iLocal_3653 = 0;
	int iLocal_3654 = 0;
	int iLocal_3655 = 0;
	int iLocal_3656 = 0;
	int iLocal_3657 = 0;
	int iLocal_3658 = 0;
	int iLocal_3659 = 0;
	char* sLocal_3660 = NULL;
	int iLocal_3661 = 0;
	int iLocal_3662[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3663 = 0;
	int iLocal_3664[4] = { 0, 0, 0, 0 };
	int iLocal_3665 = 0;
	int iLocal_3666 = 0;
	int iLocal_3667[2] = { 0, 0 };
	int iLocal_3668 = 0;
	int iLocal_3669 = 0;
	int iLocal_3670 = 0;
	int iLocal_3671 = 0;
	int iLocal_3672 = 0;
	int iLocal_3673 = 0;
	int iLocal_3674 = 0;
	int iLocal_3675 = 0;
	int iLocal_3676 = 0;
	int iLocal_3677 = 0;
	int iLocal_3678 = 0;
	int iLocal_3679 = 0;
	int iLocal_3680 = 0;
	int iLocal_3681 = 0;
	int iLocal_3682 = 0;
	int iLocal_3683 = 0;
	int iLocal_3684 = 0;
	int iLocal_3685 = 0;
	int iLocal_3686 = 0;
	int iLocal_3687 = 0;
	int iLocal_3688 = 0;
	int iLocal_3689 = 0;
	int iLocal_3690 = 0;
	int iLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 49;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 2;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	int iLocal_3782 = 0;
	int iLocal_3783 = 0;
	int iLocal_3784 = 0;
	int iLocal_3785 = 0;
	int iLocal_3786 = 0;
	int iLocal_3787 = 0;
	int iLocal_3788 = 0;
	int iLocal_3789 = 0;
	int iLocal_3790 = 0;
	int iLocal_3791 = 0;
	int iLocal_3792 = 0;
	int iLocal_3793 = 0;
	int iLocal_3794 = 0;
	int iLocal_3795[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 3;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 3;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 3;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 3;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 3;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	int iLocal_3909 = 0;
	int iLocal_3910 = 0;
	int iLocal_3911 = 0;
	int iLocal_3912 = 0;
	int iLocal_3913 = 0;
	int iLocal_3914 = 0;
	var uLocal_3915[2] = { 0, 0 };
	int iLocal_3916 = 0;
	int iLocal_3917 = 0;
	int iLocal_3918 = 0;
	int iLocal_3919 = 0;
	int iLocal_3920 = 0;
	int iLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 2;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 2;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 20;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = -1;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 1065353216;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = -1;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 1065353216;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = -1;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 1065353216;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = -1;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 1065353216;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = -1;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 1065353216;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = -1;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 1065353216;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = -1;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 1065353216;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = -1;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 1065353216;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = -1;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 1065353216;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = -1;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 1065353216;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = -1;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 1065353216;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = -1;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 1065353216;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = -1;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 1065353216;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = -1;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 1065353216;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = -1;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 1065353216;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = -1;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 1065353216;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = -1;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 1065353216;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = -1;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 1065353216;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = -1;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 1065353216;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = -1;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 1065353216;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 16;
	var uLocal_5074 = 0;
	var uLocal_5075 = -1082130432;
	var uLocal_5076 = 0;
	var uLocal_5077 = -1082130432;
	var uLocal_5078 = 0;
	var uLocal_5079 = -1082130432;
	var uLocal_5080 = 0;
	var uLocal_5081 = -1082130432;
	var uLocal_5082 = 0;
	var uLocal_5083 = -1082130432;
	var uLocal_5084 = 0;
	var uLocal_5085 = -1082130432;
	var uLocal_5086 = 0;
	var uLocal_5087 = -1082130432;
	var uLocal_5088 = 0;
	var uLocal_5089 = -1082130432;
	var uLocal_5090 = 0;
	var uLocal_5091 = -1082130432;
	var uLocal_5092 = 0;
	var uLocal_5093 = -1082130432;
	var uLocal_5094 = 0;
	var uLocal_5095 = -1082130432;
	var uLocal_5096 = 0;
	var uLocal_5097 = -1082130432;
	var uLocal_5098 = 0;
	var uLocal_5099 = -1082130432;
	var uLocal_5100 = 0;
	var uLocal_5101 = -1082130432;
	var uLocal_5102 = 0;
	var uLocal_5103 = -1082130432;
	var uLocal_5104 = 0;
	var uLocal_5105 = -1082130432;
	var uLocal_5106 = 16;
	var uLocal_5107 = 0;
	var uLocal_5108 = -1082130432;
	var uLocal_5109 = 0;
	var uLocal_5110 = -1082130432;
	var uLocal_5111 = 0;
	var uLocal_5112 = -1082130432;
	var uLocal_5113 = 0;
	var uLocal_5114 = -1082130432;
	var uLocal_5115 = 0;
	var uLocal_5116 = -1082130432;
	var uLocal_5117 = 0;
	var uLocal_5118 = -1082130432;
	var uLocal_5119 = 0;
	var uLocal_5120 = -1082130432;
	var uLocal_5121 = 0;
	var uLocal_5122 = -1082130432;
	var uLocal_5123 = 0;
	var uLocal_5124 = -1082130432;
	var uLocal_5125 = 0;
	var uLocal_5126 = -1082130432;
	var uLocal_5127 = 0;
	var uLocal_5128 = -1082130432;
	var uLocal_5129 = 0;
	var uLocal_5130 = -1082130432;
	var uLocal_5131 = 0;
	var uLocal_5132 = -1082130432;
	var uLocal_5133 = 0;
	var uLocal_5134 = -1082130432;
	var uLocal_5135 = 0;
	var uLocal_5136 = -1082130432;
	var uLocal_5137 = 0;
	var uLocal_5138 = -1082130432;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = -1082130432;
	var uLocal_5156 = -1082130432;
	var uLocal_5157 = 1;
	var uLocal_5158 = 1;
	var uLocal_5159 = 1;
	var uLocal_5160 = -1;
	var uLocal_5161 = -1;
	var uLocal_5162 = -1;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 2;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 2;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 20;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = -1;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 1065353216;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = -1;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 1065353216;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = -1;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 1065353216;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = -1;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 1065353216;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = -1;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 1065353216;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = -1;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 1065353216;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = -1;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 1065353216;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = -1;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 1065353216;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = -1;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 1065353216;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = -1;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 1065353216;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = -1;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 1065353216;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = -1;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 1065353216;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = -1;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 1065353216;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = -1;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 1065353216;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = -1;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 1065353216;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = -1;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 1065353216;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = -1;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 1065353216;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = -1;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 1065353216;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = -1;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 1065353216;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = -1;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 1065353216;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 16;
	var uLocal_6315 = 0;
	var uLocal_6316 = -1082130432;
	var uLocal_6317 = 0;
	var uLocal_6318 = -1082130432;
	var uLocal_6319 = 0;
	var uLocal_6320 = -1082130432;
	var uLocal_6321 = 0;
	var uLocal_6322 = -1082130432;
	var uLocal_6323 = 0;
	var uLocal_6324 = -1082130432;
	var uLocal_6325 = 0;
	var uLocal_6326 = -1082130432;
	var uLocal_6327 = 0;
	var uLocal_6328 = -1082130432;
	var uLocal_6329 = 0;
	var uLocal_6330 = -1082130432;
	var uLocal_6331 = 0;
	var uLocal_6332 = -1082130432;
	var uLocal_6333 = 0;
	var uLocal_6334 = -1082130432;
	var uLocal_6335 = 0;
	var uLocal_6336 = -1082130432;
	var uLocal_6337 = 0;
	var uLocal_6338 = -1082130432;
	var uLocal_6339 = 0;
	var uLocal_6340 = -1082130432;
	var uLocal_6341 = 0;
	var uLocal_6342 = -1082130432;
	var uLocal_6343 = 0;
	var uLocal_6344 = -1082130432;
	var uLocal_6345 = 0;
	var uLocal_6346 = -1082130432;
	var uLocal_6347 = 16;
	var uLocal_6348 = 0;
	var uLocal_6349 = -1082130432;
	var uLocal_6350 = 0;
	var uLocal_6351 = -1082130432;
	var uLocal_6352 = 0;
	var uLocal_6353 = -1082130432;
	var uLocal_6354 = 0;
	var uLocal_6355 = -1082130432;
	var uLocal_6356 = 0;
	var uLocal_6357 = -1082130432;
	var uLocal_6358 = 0;
	var uLocal_6359 = -1082130432;
	var uLocal_6360 = 0;
	var uLocal_6361 = -1082130432;
	var uLocal_6362 = 0;
	var uLocal_6363 = -1082130432;
	var uLocal_6364 = 0;
	var uLocal_6365 = -1082130432;
	var uLocal_6366 = 0;
	var uLocal_6367 = -1082130432;
	var uLocal_6368 = 0;
	var uLocal_6369 = -1082130432;
	var uLocal_6370 = 0;
	var uLocal_6371 = -1082130432;
	var uLocal_6372 = 0;
	var uLocal_6373 = -1082130432;
	var uLocal_6374 = 0;
	var uLocal_6375 = -1082130432;
	var uLocal_6376 = 0;
	var uLocal_6377 = -1082130432;
	var uLocal_6378 = 0;
	var uLocal_6379 = -1082130432;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = -1082130432;
	var uLocal_6397 = -1082130432;
	var uLocal_6398 = 1;
	var uLocal_6399 = 1;
	var uLocal_6400 = 1;
	var uLocal_6401 = -1;
	var uLocal_6402 = -1;
	var uLocal_6403 = -1;
	char* sLocal_6404 = NULL;
	int iLocal_6405 = 0;
	int iLocal_6406 = 0;
	bool bLocal_6407 = 0;
	int iLocal_6408 = 0;
	int iLocal_6409 = 0;
	int iLocal_6410 = 0;
	int iLocal_6411 = 0;
	int iLocal_6412 = 0;
	int iLocal_6413 = 0;
	int iLocal_6414 = 0;
	int iLocal_6415 = 0;
	int iLocal_6416 = 0;
	int iLocal_6417 = 0;
	int iLocal_6418 = 0;
	int iLocal_6419 = 0;
	int iLocal_6420 = 0;
	int iLocal_6421 = 0;
	int iLocal_6422 = 0;
	int iLocal_6423 = 0;
	int iLocal_6424 = 0;
	int iLocal_6425 = 0;
	int iLocal_6426 = 0;
	int iLocal_6427 = 0;
	int iLocal_6428 = 0;
	int iLocal_6429 = 0;
	int iLocal_6430 = 0;
	int iLocal_6431 = 0;
	int iLocal_6432 = 0;
	int iLocal_6433 = 0;
	int iLocal_6434 = 0;
	int iLocal_6435 = 0;
	float fLocal_6436 = 0f;
	float fLocal_6437 = 0f;
	int iLocal_6438 = 0;
	float fLocal_6439 = 0f;
	float fLocal_6440 = 0f;
	float fLocal_6441 = 0f;
	float fLocal_6442 = 0f;
	float fLocal_6443 = 0f;
	float fLocal_6444 = 0f;
	int iLocal_6445 = 0;
	float fLocal_6446 = 0f;
	int iLocal_6447 = 0;
	int iLocal_6448 = 0;
	int iLocal_6449 = 0;
	float fLocal_6450 = 0f;
	float fLocal_6451 = 0f;
	int iLocal_6452 = 0;
	int iLocal_6453 = 0;
	struct<3> Local_6454 = { 0, 0, 0 } ;
	struct<3> Local_6455 = { 0, 0, 0 } ;
	float fLocal_6456 = 0f;
	float fLocal_6457 = 0f;
	int iLocal_6458 = 0;
	int iLocal_6459 = 0;
	int iLocal_6460 = 0;
	int iLocal_6461 = 0;
	bool bLocal_6462 = 0;
	int iLocal_6463 = 0;
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
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	Local_73 = { 0f, 0f, 0f };
	Local_74 = { 0f, 0f, 0f };
	iLocal_75 = -1;
	fLocal_77 = 1f;
	iLocal_81 = 1;
	iLocal_88 = 1;
	iLocal_110 = 1;
	fLocal_1276 = 120f;
	fLocal_1277 = 0f;
	fLocal_1279 = 1f;
	fLocal_1280 = 0f;
	fLocal_1281 = 1f;
	fLocal_1282 = 30f;
	fLocal_1284 = 1f;
	fLocal_1285 = 5f;
	fLocal_1286 = 1f;
	fLocal_1287 = 1f;
	fLocal_1288 = 100f;
	fLocal_1289 = 100f;
	fLocal_1290 = 0f;
	fLocal_1291 = 7000f;
	fLocal_1292 = 0f;
	fLocal_1293 = 0f;
	fLocal_1294 = 0.3f;
	fLocal_1295 = 0.5f;
	fLocal_1296 = 50f;
	iLocal_1952 = -1;
	iLocal_1960 = -1;
	iLocal_1961 = -1;
	bLocal_3422 = true;
	Local_3605 = { -893f, -446.2f, 173.1f };
	Local_3606 = { -411.5472f, 1175.3082f, 324.5601f };
	Local_3607 = { -390.1234f, 1226.1991f, 324.6426f };
	Local_3608 = { 1.6631f, -3.2729f, 0.7426f };
	Local_3609 = { -15f, -30f, -20f };
	Local_3610 = { 2813.8667f, 4679.448f, 44.9295f };
	Local_3614 = { -526.6754f, 1145.1808f, 307.5816f };
	Local_3615 = { -276.3485f, 1305.7333f, 336.9266f };
	Local_3616 = { 253.4966f, 2206.1792f, 34.6447f };
	Local_3617 = { 709.994f, 2627.1787f, 129.6453f };
	Local_3620 = { 0f, 0f, 0f };
	fLocal_3624 = 255.9889f;
	sLocal_6404 = "shake_cam_all@";
	iLocal_6429 = 250;
	iLocal_6430 = 1000;
	iLocal_6431 = 1500;
	iLocal_6432 = 2000;
	iLocal_6433 = 3000;
	iLocal_6434 = 2500;
	iLocal_6435 = 5000;
	fLocal_6436 = 9000f;
	fLocal_6437 = 0.7f;
	iLocal_6438 = 3;
	fLocal_6439 = 25700f;
	fLocal_6440 = 0.6f;
	fLocal_6441 = 30000f;
	fLocal_6442 = 0.6f;
	fLocal_6443 = 16500f;
	fLocal_6444 = 0.4f;
	fLocal_6446 = 2800f;
	iLocal_6447 = 1750;
	iLocal_6448 = 2000;
	iLocal_6449 = -1;
	fLocal_6450 = 0.243f;
	fLocal_6451 = 0.756f;
	Local_6454 = { 0f, 1.5f, 0f };
	Local_6455 = { -90f, 0f, 0f };
	fLocal_6456 = 4f;
	fLocal_6457 = 0.243f;
	MISC::SET_MISSION_FLAG(true);
	if (__LIB_0__::func_2(0))
	{
		__LIB_11__::func_816(2, 0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	__LIB_0__::func_54(0, 1);
	__LIB_12__::func_849(20, 1);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 20f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FAIL");
		func_1011();
		func_1006();
	}
	while (bLocal_3422)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_CAIDALIBRE", 0);
		switch (iLocal_3183)
		{
			case 0:
				if (__LIB_0__::func_323())
				{
					func_1004();
					iLocal_3532 = 0;
					if (Global_94618 == 1)
					{
						if (__LIB_0__::func_344() == 0)
						{
							__LIB_0__::func_427(-363.519f, 1142.1714f, 323.0888f, 11.2577f, 1, 0);
							iLocal_3183 = 2;
						}
						if (__LIB_0__::func_344() == 1)
						{
							__LIB_0__::func_427(Local_3607, 328.7128f, 1, 0);
							iLocal_3183 = 4;
						}
						if (__LIB_0__::func_344() == 2)
						{
							__LIB_0__::func_427(2776.957f, 4740.3716f, 44.9082f, 341.7251f, 1, 0);
							iLocal_3183 = 5;
						}
						if (__LIB_0__::func_344() == 3)
						{
							__LIB_0__::func_427(-370.9615f, 1151.7002f, 324.3864f, 225.63828f, 1, 0);
							iLocal_3183 = 7;
						}
						if (__LIB_0__::func_344() == 4)
						{
							__LIB_0__::func_427(1204.7f, 1859f, 78.2f, 214.528f, 1, 0);
							iLocal_3183 = 8;
						}
					}
					else
					{
						if (__LIB_0__::func_344() == 0)
						{
							__LIB_0__::func_427(1386.8092f, 1142.3643f, 113.334f, 82.7671f, 1, 0);
							iLocal_3183 = 1;
						}
						if (__LIB_0__::func_344() == 1)
						{
							iLocal_3585 = 1;
							__LIB_0__::func_427(-363.519f, 1142.1714f, 323.0888f, 11.2577f, 1, 0);
							iLocal_3183 = 2;
						}
						if (__LIB_0__::func_344() == 2)
						{
							__LIB_0__::func_427(Local_3607, 328.7128f, 1, 0);
							iLocal_3183 = 4;
						}
						if (__LIB_0__::func_344() == 3)
						{
							__LIB_0__::func_427(2776.957f, 4740.3716f, 44.9082f, 341.7251f, 1, 0);
							iLocal_3183 = 5;
						}
						if (__LIB_0__::func_344() == 4)
						{
							__LIB_0__::func_427(-370.9615f, 1151.7002f, 324.3864f, 225.63828f, 1, 0);
							iLocal_3183 = 7;
						}
					}
					func_956();
					iLocal_3423 = 0;
				}
				else
				{
					if (__LIB_0__::func_2(0))
					{
						if (__LIB_17__::func_341() == 0 || __LIB_17__::func_341() == 1)
						{
							CUTSCENE::REQUEST_CUTSCENE("MARTIN_1_INT", 8);
						}
						if (__LIB_17__::func_341() == 2)
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("MARTIN_1_INT", 131068, 8);
						}
						if (__LIB_17__::func_341() == 2)
						{
							while (!func_954(&(uLocal_3201[0]), 0, 1390.7065f, 1142.6586f, 113.4431f, 170.5477f, 1, 0, 0))
							{
								SYSTEM::WAIT(0);
							}
						}
						while (!__LIB_17__::func_478(&iLocal_3673, 0, 1371.3683f, 1132.9742f, 112.8401f, 20.5505f, 1, 1))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (iLocal_3474 == 0)
					{
						iLocal_3639 = 0;
						iLocal_3463 = 1;
						iLocal_3530 = 0;
						iLocal_3532 = 0;
						iLocal_3556 = 0;
						iLocal_3557 = 0;
						iLocal_3587 = 0;
						iLocal_3598 = 0;
						HUD::REQUEST_ADDITIONAL_TEXT("BFINJEC", 0);
						while (iLocal_3463)
						{
							switch (iLocal_3639)
							{
								case 0:
									if (__LIB_17__::func_341() == 0)
									{
										if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
										{
											STREAMING::REQUEST_MODEL(__LIB_13__::func_741(2, 0));
											__LIB_32__::func_76(2, "Trevor", 2);
											__LIB_38__::func_186("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
										}
									}
									if (__LIB_17__::func_341() == 2)
									{
										if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
										{
											if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
											{
												if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
												{
													__LIB_38__::func_186("Michael", Global_96938.f_9[0], joaat("Player_Zero"), 2);
												}
											}
											__LIB_38__::func_186("Trevor", PLAYER::PLAYER_PED_ID(), joaat("Player_Two"), 2);
										}
									}
									if (__LIB_0__::func_90())
									{
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
											{
												PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
											}
										}
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
										__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
										if (__LIB_17__::func_341() == 0)
										{
											bLocal_3544 = true;
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
											}
											__LIB_17__::func_478(&iLocal_6463, 2, 1431.2135f, 1055.9114f, 113.2366f, 356.6531f, 1, 0);
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("Player_Two"), 0);
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_6463, "trevors_car", 1, joaat("bodhi2"), 0);
											if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
												{
													ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
													iLocal_3673 = Global_96938[0];
												}
											}
										}
										if (__LIB_17__::func_341() == 2)
										{
											bLocal_3544 = false;
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
												uLocal_3201[0] = Global_96938.f_9[0];
												PED::SET_PED_CAN_BE_TARGETTED(uLocal_3201[0], false);
											}
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_3201[0], "Michael", 0, joaat("Player_Zero"), 0);
											if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
												iLocal_3673 = Global_96938[1];
												VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3673, 1);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
												{
													ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
													iLocal_3689 = Global_96938[0];
													VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
												}
											}
										}
										if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], true, true);
											iLocal_3690 = Global_96938[2];
										}
										__LIB_0__::func_468(45);
										iLocal_3792 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, false, true, true, true);
										if (bLocal_3544)
										{
											CUTSCENE::START_CUTSCENE(0);
										}
										else
										{
											CUTSCENE::START_CUTSCENE(256);
										}
										RECORDING::REPLAY_START_EVENT(4);
										SYSTEM::SETTIMERA(0);
										if (!__LIB_0__::func_2(0))
										{
											if (!CAM::IS_SCREEN_FADED_IN())
											{
												CAM::DO_SCREEN_FADE_IN(250);
											}
										}
										iLocal_3600 = 0;
										iLocal_3655 = 0;
										iLocal_3639++;
									}
									break;
								case 1:
									if (CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										if (CUTSCENE::GET_CUTSCENE_TIME() > 130000)
										{
											PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
										}
										if (!iLocal_3600)
										{
											MISC::CLEAR_AREA_OF_PROJECTILES(1371.1974f, 1146.6389f, 112.7587f, 100f, 0);
											MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, false, false, false);
											if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112417, true, true);
												func_900(Global_112417, 1);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_112418, true, true);
												func_899(Global_112418, 1);
											}
											iLocal_3600 = 1;
										}
									}
									if (__LIB_0__::func_2(0) && CUTSCENE::IS_CUTSCENE_PLAYING())
									{
										if (!CAM::IS_SCREEN_FADED_IN())
										{
											CAM::DO_SCREEN_FADE_IN(250);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
									{
										if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
										{
											VEHICLE::DELETE_VEHICLE(&iLocal_3673);
										}
									}
									if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
									{
										if (bLocal_3544 == 1)
										{
											if (CUTSCENE::IS_CUTSCENE_PLAYING())
											{
												if (iLocal_3587 == 0)
												{
													if (CLOCK::GET_CLOCK_HOURS() > 21 || CLOCK::GET_CLOCK_HOURS() < 6)
													{
														if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0)))
														{
															if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0), false))
															{
																VEHICLE::SET_VEHICLE_LIGHTS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevors_car", 0)), 3);
																iLocal_3587 = 1;
															}
														}
													}
												}
												if (CUTSCENE::GET_CUTSCENE_SECTION_PLAYING() > 1)
												{
													if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
													{
														if (__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 1))
														{
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
														}
													}
												}
												if (iLocal_3530 == 0)
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
														{
															if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3673)))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_3673, 1360.5767f, 1181.4652f, 111.4876f, true, false, false, true);
																ENTITY::SET_ENTITY_HEADING(iLocal_3673, 180.5927f);
																VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3673, 5f);
																iLocal_3530 = 1;
															}
															if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3673)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3673))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3673))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3673)))
															{
																ENTITY::SET_ENTITY_COORDS(iLocal_3673, 1372.0696f, 1131.5979f, 112.8844f, true, false, false, true);
																ENTITY::SET_ENTITY_HEADING(iLocal_3673, 19.2193f);
																VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3673, 5f);
																func_893(1368.9f, 1126.3f, 116.6f, 1374.7f, 1136.7f, 111.9f, 6f, 1372.0696f, 1131.5979f, 112.8844f, 19.2193f, 1, 1, 1, 0, 0);
																iLocal_3530 = 1;
															}
															if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3673)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3673))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3673))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3673))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3673)))
															{
																VEHICLE::DELETE_VEHICLE(&iLocal_3673);
																iLocal_3530 = 1;
															}
														}
													}
												}
											}
											if (iLocal_3557 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
												{
													PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
													PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
													PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
													iLocal_3557 = 1;
												}
											}
											if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
											{
												iLocal_3665 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", joaat("Player_Two")));
												if (PED::IS_PED_WEARING_HELMET(iLocal_3665))
												{
													PED::REMOVE_PED_HELMET(iLocal_3665, true);
												}
											}
											if (iLocal_3556 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
														{
															if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
															{
																if (!PED::IS_PED_INJURED(iLocal_3665))
																{
																	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
																	TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
																	TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, 20000, -1, 1f, 1, 0);
																	if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																	{
																		TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																		TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																	}
																	if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																	{
																		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
																	}
																	TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
																	TASK::TASK_PERFORM_SEQUENCE(iLocal_3665, iLocal_3794);
																	TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
																	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3665, false, false);
																	PED::FORCE_PED_MOTION_STATE(iLocal_3665, joaat("MotionState_Walk"), false, 0, false);
																	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3689, false);
																	iLocal_3556 = 1;
																}
															}
														}
													}
												}
											}
										}
										if (bLocal_3544 == 0)
										{
											if (iLocal_3530 == 0)
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
													{
														if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
														{
															ENTITY::SET_ENTITY_COORDS(iLocal_3689, 1360.5767f, 1181.4652f, 111.4876f, true, false, false, true);
															ENTITY::SET_ENTITY_HEADING(iLocal_3689, 180.5927f);
															VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3689, 5f);
															iLocal_3530 = 1;
														}
														if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3689)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3689))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3689))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
														{
															ENTITY::SET_ENTITY_COORDS(iLocal_3689, 1371.1974f, 1146.6389f, 112.7587f, true, false, false, true);
															ENTITY::SET_ENTITY_HEADING(iLocal_3689, 177.6714f);
															VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3689, 5f);
															func_893(1368.5f, 1141f, 116.8f, 1374.2f, 1152.5f, 112.6f, 6f, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 1, 1, 0, 0);
															iLocal_3530 = 1;
														}
														if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3689))) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3689))) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3689))) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
														{
															VEHICLE::DELETE_VEHICLE(&iLocal_3689);
														}
													}
												}
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
												{
													if (__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 0))
													{
														VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
														iLocal_3530 = 1;
													}
												}
											}
											if (iLocal_3557 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
												{
													if (__LIB_17__::func_341() != 0)
													{
														if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero"))))
														{
															PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero"))), false, false);
															PED::FORCE_PED_MOTION_STATE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", joaat("Player_Zero"))), joaat("MotionState_Walk"), false, 0, false);
														}
														__LIB_32__::func_86(&uLocal_3201, 0);
														func_861(&uLocal_3201, 1, 1, 1);
													}
													iLocal_3557 = 1;
												}
											}
											if (iLocal_3556 == 0)
											{
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (__LIB_17__::func_341() == 0)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3201[2], true);
																TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
																}
																TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
																TASK::TASK_PERFORM_SEQUENCE(uLocal_3201[2], iLocal_3794);
																TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3201[2], false, false);
																PED::FORCE_PED_MOTION_STATE(uLocal_3201[2], joaat("MotionState_Walk"), false, 0, false);
																iLocal_3556 = 1;
															}
														}
													}
													else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
														{
															TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
															TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, -1, -1, 1f, 1, 0);
															if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
															{
																TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
															}
															if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
															{
																TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
															}
															TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
															TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_3794);
															TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
															PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
															PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
															iLocal_3556 = 1;
														}
													}
												}
											}
										}
										if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
										{
											RECORDING::REPLAY_STOP_EVENT();
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
											{
												if (!PED::IS_PED_INJURED(uLocal_3201[0]))
												{
													CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_3201[0]);
												}
											}
										}
										if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
										{
											__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
											iLocal_3639++;
										}
									}
									else
									{
										iLocal_3598 = 1;
									}
									while (iLocal_3598 == 1)
									{
										switch (iLocal_3655)
										{
											case 0:
												if (!CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_OUT())
												{
													CAM::DO_SCREEN_FADE_OUT(800);
												}
												if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
												{
													if (CAM::IS_SCREEN_FADED_OUT())
													{
														iLocal_3655++;
													}
												}
												break;
											case 1:
												if (CAM::IS_SCREEN_FADING_IN())
												{
													CAM::DO_SCREEN_FADE_OUT(0);
												}
												if (__LIB_17__::func_341() != 0)
												{
													__LIB_32__::func_86(&uLocal_3201, 0);
													func_861(&uLocal_3201, 1, 0, 0);
												}
												if (__LIB_17__::func_341() == 0)
												{
													TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
													iLocal_3655++;
												}
												break;
											case 2:
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
												{
													__LIB_17__::func_709(2, 1);
													while (!__LIB_17__::func_719(2, 1))
													{
														SYSTEM::WAIT(0);
													}
													__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 1);
													VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3689, 5f);
													VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
												}
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
												{
													if (!PED::IS_PED_INJURED(uLocal_3201[2]))
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3201[2], true);
																TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
																}
																TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
																TASK::TASK_PERFORM_SEQUENCE(uLocal_3201[2], iLocal_3794);
																TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_3201[2], false, false);
																PED::FORCE_PED_MOTION_STATE(uLocal_3201[2], joaat("MotionState_Walk"), false, 0, false);
																iLocal_3556 = 1;
															}
														}
													}
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
												{
													if (!PED::IS_PED_INJURED(iLocal_3665))
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
															{
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
																TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
																TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, -1, -1, 1f, 1, 0);
																if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
																	TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
																}
																if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
																{
																	TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
																}
																TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_3665, iLocal_3794);
																TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
																PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3665, false, false);
																PED::FORCE_PED_MOTION_STATE(iLocal_3665, joaat("MotionState_Walk"), false, 0, false);
																iLocal_3556 = 1;
															}
														}
													}
												}
												PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 0f, true, false);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
												PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
												CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
												SYSTEM::SETTIMERA(0);
												iLocal_3655++;
												break;
											case 3:
												if (SYSTEM::TIMERA() > 1000)
												{
													if (!CAM::IS_SCREEN_FADED_IN())
													{
														CAM::DO_SCREEN_FADE_IN(800);
													}
													__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
													iLocal_3639++;
													iLocal_3655++;
													iLocal_3598 = 0;
												}
												break;
										}
										SYSTEM::WAIT(0);
									}
									break;
								case 2:
									HUD::CLEAR_PRINTS();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
										{
											VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_3673, false);
											ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3673);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
										{
											VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3689, false);
										}
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
										{
											if (!PED::IS_PED_INJURED(uLocal_3201[2]))
											{
												iLocal_3665 = uLocal_3201[2];
											}
										}
									}
									CUTSCENE::REMOVE_CUTSCENE();
									iLocal_3463 = 0;
									iLocal_3474 = 1;
									iLocal_3639++;
									break;
							}
							SYSTEM::WAIT(0);
						}
					}
					if (func_858())
					{
						iLocal_3183 = 1;
					}
				}
				break;
			case 1:
				if (func_827())
				{
					iLocal_3183 = 2;
				}
				break;
			case 2:
				if (func_817())
				{
					iLocal_3183 = 3;
				}
				break;
			case 3:
				if (func_772())
				{
					iLocal_3183 = 4;
				}
				break;
			case 4:
				if (func_750())
				{
					iLocal_3183 = 5;
				}
				break;
			case 5:
				if (func_747())
				{
					iLocal_3183 = 6;
				}
				break;
			case 6:
				func_746();
				if (func_742())
				{
					iLocal_3183 = 7;
				}
				break;
			case 7:
				func_746();
				if (func_645())
				{
					iLocal_3183 = 8;
				}
				break;
			case 8:
				if (func_627())
				{
					iLocal_3183 = 9;
				}
				break;
			case 9:
				func_31();
				break;
		}
		if (iLocal_3532 == 1)
		{
			func_10();
		}
		if ((iLocal_3183 == 1 || iLocal_3183 == 2) || iLocal_3183 == 3)
		{
			if (iLocal_3480 == 1)
			{
				func_2(&Local_3198);
				if (iLocal_3602 == 0)
				{
					if (CAM::DOES_CAM_EXIST(Local_3198.f_39))
					{
						CAM::SET_CAM_NEAR_CLIP(Local_3198.f_39, 1f);
						iLocal_3602 = 1;
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_3688 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3688))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3688, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3688, false))
					{
						__LIB_0__::func_377(iLocal_3688, -1);
					}
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1006();
}

void func_2(bool bParam0)//Position - 0x17AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	float fVar14;
	bool bVar15;
	float fVar16;
	float fVar17;
	struct<3> Var18;
	if (ENTITY::DOES_ENTITY_EXIST(bParam0->f_40))
	{
		if (!*bParam0)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
			{
				func_9(bParam0, 1);
			}
		}
		else
		{
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_0__::func_603(&iVar0, &iVar1, &iVar2, &iVar3, 0);
			}
			else
			{
				iVar0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) * 127f));
				iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) * 127f));
				iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/) * 127f));
				iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/) * 127f));
			}
			iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 39 /*INPUT_SNIPER_ZOOM*/) * 127f));
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_37__::func_862(&iVar0);
				__LIB_37__::func_862(&iVar1);
				__LIB_37__::func_862(&iVar2);
				__LIB_37__::func_862(&iVar3);
			}
			fVar4 = ((bParam0->f_15 - 45f) / (1f - 45f));
			iVar5 = iVar3;
			iVar6 = iVar2;
			iVar7 = iVar1;
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (MISC::IS_SNIPER_INVERTED())
				{
					iVar5 = iVar1;
					iVar6 = iVar0;
					iVar7 = iVar3;
				}
				if (PAD::IS_LOOK_INVERTED())
				{
					iVar5 = -iVar5;
				}
			}
			fVar8 = (-(IntToFloat(iVar5) / 128f) * bParam0->f_22);
			fVar9 = (-(IntToFloat(iVar6) / 128f) * bParam0->f_22);
			if (bParam0->f_15 <= bParam0->f_23)
			{
				fVar10 = ((bParam0->f_15 - 1f) / (bParam0->f_23 - 1f));
				if (fVar10 < 0.05f)
				{
					fVar10 = 0.05f;
				}
				fVar8 = (fVar8 * fVar10);
				fVar9 = (fVar9 * fVar10);
			}
			Var11 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
			iVar12 = 1;
			if (MISC::ABSI(iVar6) > 0)
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					Var11 = { Var11 + Vector(fVar9, 0f, 0f) * FtoV(SYSTEM::TIMESTEP()) };
				}
				else
				{
					Var11 = { Var11 + Vector(fVar9, 0f, 0f) * Vector(0.5f, 0.5f, 0.5f) };
				}
				if (bParam0->f_7)
				{
					if (Var11.f_2 <= bParam0->f_24)
					{
						Var11.f_2 = bParam0->f_24;
						iVar12 = 0;
					}
					if (Var11.f_2 >= bParam0->f_25)
					{
						Var11.f_2 = bParam0->f_25;
						iVar12 = 0;
					}
				}
			}
			else
			{
				iVar12 = 0;
			}
			iVar13 = 1;
			if (MISC::ABSI(iVar5) > 0)
			{
				if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					Var11 = { Var11 + Vector(0f, 0f, fVar8) * FtoV(SYSTEM::TIMESTEP()) };
				}
				else
				{
					Var11 = { Var11 + Vector(0f, 0f, fVar8) * Vector(0.5f, 0.5f, 0.5f) };
				}
				if (Var11.f_0 <= bParam0->f_26)
				{
					Var11.f_0 = bParam0->f_26;
					iVar13 = 0;
				}
				if (Var11.f_0 >= bParam0->f_27)
				{
					Var11.f_0 = bParam0->f_27;
					iVar13 = 0;
				}
			}
			else
			{
				iVar13 = 0;
			}
			ENTITY::SET_ENTITY_ROTATION(bParam0->f_40, Var11, 2, true);
			if (iVar13 || iVar12)
			{
				if (AUDIO::HAS_SOUND_FINISHED(bParam0->f_14))
				{
					AUDIO::PLAY_SOUND_FRONTEND(bParam0->f_14, "Remote_Sniper_Rifle_Move", 0, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "movement_speed", (SYSTEM::TO_FLOAT((MISC::ABSI(iVar6) + MISC::ABSI(iVar5))) / 256f));
				if (iVar5 < 0)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 1f);
				}
				else if (iVar5 > 0)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 0f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_14, "y_direction", 0.5f);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(bParam0->f_14))
			{
				AUDIO::STOP_SOUND(bParam0->f_14);
			}
			fVar14 = ((IntToFloat(iVar7) / 128f) * (20f / (1f + (fVar4 * 2f))));
			bVar15 = true;
			if (MISC::ABSI(iVar7) > 0)
			{
				bParam0->f_15 = (bParam0->f_15 + (fVar14 * SYSTEM::TIMESTEP()));
				if (bParam0->f_15 <= bParam0->f_28)
				{
					bParam0->f_15 = bParam0->f_28;
					bVar15 = false;
				}
				if (bParam0->f_15 >= 45f)
				{
					bParam0->f_15 = 45f;
					bVar15 = false;
				}
			}
			else
			{
				bVar15 = false;
			}
			if (bVar15)
			{
				if (AUDIO::HAS_SOUND_FINISHED(bParam0->f_13))
				{
					AUDIO::PLAY_SOUND_FRONTEND(bParam0->f_13, "Remote_Sniper_Rifle_Zoom", 0, true);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(bParam0->f_13, "zoom_speed", (SYSTEM::TO_FLOAT(MISC::ABSI(iVar7)) / 128f));
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(bParam0->f_13))
			{
				AUDIO::STOP_SOUND(bParam0->f_13);
			}
			fVar16 = Var11.f_2;
			if (fVar16 < 0f)
			{
				fVar16 = (fVar16 + 360f);
			}
			fVar17 = MISC::ABSF((bParam0->f_20 - fVar16));
			if (fVar17 > 180f)
			{
				fVar17 = (360f - fVar17);
			}
			if (bParam0->f_17 == bParam0->f_18)
			{
				bParam0->f_18 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.01f, 0.01f);
				bParam0->f_19 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.002f, 0.008f);
			}
			else
			{
				func_6(&(bParam0->f_17), bParam0->f_18, bParam0->f_19);
			}
			bParam0->f_16 = bParam0->f_15;
			CAM::SET_CAM_ROT(bParam0->f_39, Var11, 2);
			CAM::SET_CAM_FOV(bParam0->f_39, bParam0->f_16);
			func_4(bParam0);
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
			{
				bParam0->f_5 = 1;
				bParam0->f_12 = MISC::GET_GAME_TIMER() + 350;
			}
			else if (bParam0->f_5)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_12)
				{
					bParam0->f_5 = 0;
				}
			}
			if (bParam0->f_5)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_11)
				{
					bParam0->f_32 = { Var11 };
					bParam0->f_29 = { __LIB_3__::func_80(Var11) };
					bParam0->f_10 = 0;
					bParam0->f_11 = MISC::GET_GAME_TIMER() + 350;
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Remote_Sniper_Rifle_Fire", bParam0->f_40, 0, false, 0);
					bParam0->f_6 = 1;
				}
			}
			if (bParam0->f_6)
			{
				if (MISC::GET_GAME_TIMER() >= bParam0->f_10)
				{
					Var18 = { CAM::GET_CAM_COORD(bParam0->f_39) };
					bParam0->f_10 = 0;
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var18, Var18 + bParam0->f_29 * Vector(bParam0->f_21, bParam0->f_21, bParam0->f_21), bParam0->f_9, true, bParam0->f_38, PLAYER::PLAYER_PED_ID(), false, true, -1f);
					bParam0->f_6 = 0;
				}
			}
			bParam0->f_35 = { 0f, 0f, 0f };
			bParam0->f_1 = WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &(bParam0->f_35));
			if (bParam0->f_3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/))
				{
					func_9(bParam0, 0);
				}
			}
		}
	}
}

void func_4(bool bParam0)//Position - 0x1D44
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	if (!bParam0->f_8)
	{
		GRAPHICS::ANIMPOSTFX_PLAY("SniperOverlay", 0, true);
		bParam0->f_8 = 1;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
	HUD::SET_WIDESCREEN_FORMAT(0);
	fVar0 = (1f + (((bParam0->f_15 - 45f) / (1f - 45f)) * 9f));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_ZOOM_LEVEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var1 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
	fVar2 = __LIB_17__::func_58(Var1.f_2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_COMPASS");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Var3 = { MISC::GET_WIND_DIRECTION() };
	fVar4 = MISC::ATAN2(Var3.f_0, Var3.f_1);
	fVar4 = __LIB_17__::func_58(fVar4);
	fVar4 = (fVar4 - 360f);
	if (fVar4 < 0f)
	{
		fVar4 = (fVar4 * -1f);
	}
	fVar5 = (fVar4 - fVar2);
	if (fVar5 < -180f)
	{
		fVar5 = (fVar5 + 360f);
	}
	else if (fVar5 > 180f)
	{
		fVar5 = (fVar5 - 360f);
	}
	if (fVar5 > 0f)
	{
		fVar6 = 0f;
	}
	else
	{
		fVar6 = 1f;
	}
	fVar7 = fVar5;
	if (fVar7 > 90f)
	{
		fVar7 = (fVar7 - 180f);
	}
	else if (fVar7 < -90f)
	{
		fVar7 = (fVar7 + 180f);
	}
	if (fVar7 < 0f)
	{
		fVar7 = (fVar7 * -1f);
	}
	fVar7 = (fVar7 / 90f);
	fVar8 = MISC::GET_WIND_SPEED();
	fVar8 = ((fVar8 * 20f) * fVar7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(bParam0->f_41, "SET_WIND");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar6);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::DRAW_SCALEFORM_MOVIE(bParam0->f_41, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
}

void func_6(var uParam0, float fParam1, float fParam2)//Position - 0x1F1C
{
	float fVar0;
	if (*uParam0 != fParam1)
	{
		fVar0 = ((fParam2 * 30f) * MISC::GET_FRAME_TIME());
		if ((*uParam0 - fParam1) > fVar0)
		{
			*uParam0 = (*uParam0 - fVar0);
		}
		else if ((*uParam0 - fParam1) < -fVar0)
		{
			*uParam0 = (*uParam0 + fVar0);
		}
		else
		{
			*uParam0 = fParam1;
		}
	}
}

void func_9(bool bParam0, bool bParam1)//Position - 0x207E
{
	HUD::DISPLAY_RADAR(!bParam1);
	HUD::DISPLAY_HUD(!bParam1);
	CAM::SET_WIDESCREEN_BORDERS(bParam1, 0);
	CAM::RENDER_SCRIPT_CAMS(bParam1, false, 3000, true, false, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	HUD::CLEAR_HELP(true);
	*bParam0 = bParam1;
	bParam0->f_6 = 0;
	bParam0->f_5 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER("RemoteSniper");
		GRAPHICS::SET_SEETHROUGH(false);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		bParam0->f_13 = AUDIO::GET_SOUND_ID();
		bParam0->f_14 = AUDIO::GET_SOUND_ID();
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_SNIPER", false, -1))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		GRAPHICS::SET_SEETHROUGH(false);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		if (bParam0->f_8 == 1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("SniperOverlay");
			bParam0->f_8 = 0;
		}
		if (bParam0->f_13 != 0)
		{
			AUDIO::STOP_SOUND(bParam0->f_13);
			AUDIO::RELEASE_SOUND_ID(bParam0->f_13);
			bParam0->f_13 = 0;
		}
		if (bParam0->f_14 != 0)
		{
			AUDIO::STOP_SOUND(bParam0->f_14);
			AUDIO::RELEASE_SOUND_ID(bParam0->f_14);
			bParam0->f_14 = 0;
		}
	}
}

void func_10()//Position - 0x217D
{
	switch (iLocal_3183)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
			{
				if (PED::IS_PED_INJURED(iLocal_3665))
				{
					func_16("M1_FAIL3");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, true))
				{
					func_16("M1_FAIL5");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				if (FIRE::IS_ENTITY_ON_FIRE(iLocal_3685))
				{
					func_16("M1_FAIL1");
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_3685, false);
					func_16("M1_FAIL1");
				}
			}
			break;
		case 2:
			if (iLocal_3524 == 0)
			{
				if (iLocal_3423 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (!bLocal_3447)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) > 33269f)
									{
										iLocal_3524 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_3524 == 1)
			{
				func_16("2SLOW");
			}
			break;
		case 4:
			if (iLocal_3423 == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_76(iLocal_3671, PLAYER::PLAYER_PED_ID(), 1) > 750f)
					{
						func_16("BFFLOST");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_3685, false);
						func_16("M1_FAIL1");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
				{
					if (PED::IS_PED_INJURED(uLocal_3201[0]))
					{
						func_16("M1_FAIL4");
					}
				}
			}
			break;
		case 5:
			if (iLocal_3423 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
				{
					if (__LIB_0__::func_76(iLocal_3784, PLAYER::PLAYER_PED_ID(), 1) > 400f)
					{
						func_16("BFFLOST");
					}
				}
			}
			break;
		case 7:
			if (iLocal_3637 > 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3685, 1) > 300f)
							{
								func_16("M1_FAIL2");
							}
						}
					}
				}
			}
			break;
	}
	if (iLocal_3467 == 1)
	{
		if (iLocal_3183 == 2)
		{
		}
		if (__LIB_0__::func_223())
		{
			func_9(&Local_3198, 0);
			func_12(&Local_3198, 1);
			iLocal_3480 = 0;
			if (__LIB_17__::func_341() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
				{
					PED::DELETE_PED(&iLocal_3665);
				}
			}
			func_11();
		}
	}
}

void func_11()//Position - 0x23C7
{
	func_1006();
}

void func_12(bool bParam0, bool bParam1)//Position - 0x23D3
{
	func_9(bParam0, 0);
	if (bParam0->f_4)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_13());
		bParam0->f_4 = 0;
	}
	if (CAM::DOES_CAM_EXIST(bParam0->f_39))
	{
		CAM::DESTROY_CAM(bParam0->f_39, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bParam0->f_40))
	{
		OBJECT::DELETE_OBJECT(&(bParam0->f_40));
	}
	if (bParam1)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(bParam0->f_41))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(bParam0->f_41));
		}
		bParam0->f_2 = 0;
		bParam0->f_41 = 0;
	}
}

char* func_13()//Position - 0x243F
{
	return "Remote_Gun";
}

void func_16(char* sParam0)//Position - 0x24D6
{
	if (iLocal_3467 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
				{
					if (!PED::IS_PED_INJURED(iLocal_3661))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3661, iLocal_3671, false))
						{
							if (ENTITY::IS_ENTITY_IN_AIR(iLocal_3671))
							{
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3671, false);
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3671);
								}
								TASK::CLEAR_PED_TASKS(iLocal_3661);
								TASK::TASK_PLANE_MISSION(iLocal_3661, iLocal_3671, 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, 0f, 0f, 100f), 4, 30f, 1f, ENTITY::GET_ENTITY_HEADING(iLocal_3671), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_3671)), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_3671)), true);
								PED::SET_PED_KEEP_TASK(iLocal_3661, true);
							}
						}
					}
				}
			}
		}
		sLocal_3660 = sParam0;
		__LIB_0__::func_325();
		__LIB_0__::func_429();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FAIL");
		func_17(sLocal_3660);
		iLocal_3467 = 1;
	}
}

void func_17(char* sParam0)//Position - 0x25B2
{
	__LIB_0__::func_381(sParam0);
	func_18(0);
}

void func_18(int iParam0)//Position - 0x25C5
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_19(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_19(int iParam0)//Position - 0x260A
{
	int iVar0;
	int iVar1;
	__LIB_17__::func_505();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_20(&(Global_113386.f_2363.f_539), iVar1);
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

void func_20(var uParam0, int iParam1)//Position - 0x271A
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
			if (!func_22(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_22(int iParam0, var uParam1, float fParam2)//Position - 0x28EE
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
			return func_22(8, uParam1, fParam2);
			break;
		case 10:
			return func_22(8, uParam1, fParam2);
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

void func_31()//Position - 0x3494
{
	func_626(800);
	if (!__LIB_0__::func_2(0))
	{
		func_49(206, 0);
	}
	__LIB_16__::func_874(3, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("SOL1_END");
	__LIB_0__::func_526(0, 0);
	func_1006();
}

void func_49(int iParam0, int iParam1)//Position - 0x3908
{
	struct<97> Var0;
	int iVar1;
	int iVar2;
	Var0.f_1 = -1;
	Var0.f_17 = 4;
	Var0.f_17.f_8 = 4;
	Var0.f_17.f_13 = 4;
	Var0.f_17.f_18 = 4;
	Var0.f_17.f_24 = 4;
	Var0.f_17.f_29 = 4;
	Var0.f_17.f_34 = 4;
	Var0.f_62 = 8;
	Var0.f_96.f_7 = 21;
	Var0.f_96.f_8 = 6;
	Var0.f_17.f_5 = 0;
	Var0.f_17.f_6 = 0;
	Var0.f_0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_62.f_15 = 0;
	__LIB_17__::func_695(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (__LIB_0__::func_703(iParam1, 64))
		{
			__LIB_17__::func_696(Global_98880[iParam0 /*3*/], -1082130432, 350, 1114636288, 0);
			if (!__LIB_17__::func_344(Var0.f_3))
			{
				iVar1 = __LIB_0__::func_682(Var0.f_3);
				while (!func_586(iVar1, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar2 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && iVar2)
	{
		if (!func_50(&Var0, iParam1))
		{
		}
		else
		{
			iVar2 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_50(var uParam0, var uParam1)//Position - 0x3A10
{
	return func_51(uParam0, 567329/*func_585*/, 567158/*func_584*/, uParam1);
}

int func_51(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3A28
{
	int iVar0;
	struct<97> Var1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	var uVar5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	char* sVar9;
	char[] cVar10[8];
	char* sVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	char* sVar18;
	char* sVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	struct<65> Var24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	bool bVar32;
	bool bVar33;
	struct<6> Var34;
	bool bVar35;
	struct<8> Var36;
	char* sVar37;
	char cVar38[64];
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	char* sVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	if (!uParam0->f_62.f_19)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_43603 - 1000))
	{
		__LIB_0__::func_50(2666);
	}
	Var1.f_1 = -1;
	Var1.f_17 = 4;
	Var1.f_17.f_8 = 4;
	Var1.f_17.f_13 = 4;
	Var1.f_17.f_18 = 4;
	Var1.f_17.f_24 = 4;
	Var1.f_17.f_29 = 4;
	Var1.f_17.f_34 = 4;
	Var1.f_62 = 8;
	Var1.f_96.f_7 = 21;
	Var1.f_96.f_8 = 6;
	Var2 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar3 = __LIB_0__::func_782(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar3 == 1)
		{
			STATS::STAT_INCREMENT(joaat("SP_AMBIENT_SWITCH_COUNT"), 1f);
			__LIB_5__::func_33(uParam0, 1);
		}
		if (!*uParam0 == 1)
		{
			if (!Global_78581 == -1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_91229[Global_78581 /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					__LIB_5__::func_33(uParam0, 1);
				}
			}
			else if (__LIB_0__::func_775() == 36)
			{
				__LIB_5__::func_33(uParam0, 1);
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_96.f_2 = 0;
		uParam0->f_96.f_3 = 0;
		__LIB_17__::func_192();
		uParam0->f_61 = __LIB_0__::func_682(uParam0->f_3);
		if (func_563(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			__LIB_0__::func_671(1);
			if (__LIB_38__::func_709(uParam0, &Var4, &uVar5))
			{
				uParam0->f_4 = { Var4 };
				uParam0->f_7 = uVar5;
				Global_113386.f_2363.f_539.f_2300[uParam0->f_3 /*3*/] = { Var4 };
				Global_113386.f_2363.f_539.f_2310[uParam0->f_3] = uVar5;
				if (Global_100140[uParam0->f_3] == 2)
				{
					Global_100148[uParam0->f_3 /*3*/] = { Var4 };
					Global_100158[uParam0->f_3] = uVar5;
				}
			}
			Global_98551 = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(uParam0->f_4))
			{
				uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_16 = 0;
			}
			if (uParam0->f_16 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
				{
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				__LIB_11__::func_816(21, 0);
			}
			func_551(uParam0->f_2);
			if (func_550(uParam0->f_2, &Var6, &Var7, &fVar8))
			{
				if ((func_549(uParam0->f_2, &sVar9, &cVar10) || __LIB_17__::func_691(uParam0->f_2, &sVar11, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17)) || __LIB_17__::func_690(uParam0->f_2, &sVar18))
				{
					uParam0->f_62.f_10 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					CAM::SET_CAM_COORD(uParam0->f_62.f_10, Var6);
					CAM::SET_CAM_ROT(uParam0->f_62.f_10, Var7, 2);
					CAM::SET_CAM_FOV(uParam0->f_62.f_10, fVar8);
					PED::SET_PED_NON_CREATION_AREA(Var6 - Var2, Var6 + Var2);
					uParam0->f_108 = PED::ADD_SCENARIO_BLOCKING_AREA(Var6 - Var2, Var6 + Var2, false, true, true, true);
					MISC::CLEAR_AREA(Var6, SYSTEM::VMAG(Var2), true, false, false, false);
				}
			}
			__LIB_17__::func_689();
			if (func_545(uParam0->f_2, &sVar19))
			{
				__LIB_17__::func_689();
			}
			Global_99844 = uParam0->f_2;
			iVar20 = __LIB_17__::func_341();
			if (iVar20 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar20], false))
				{
					fVar21 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_100144[iVar20]);
					fVar22 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_100144[iVar20]);
					if (fVar21 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_100144[iVar20], (-1000f * 0.25f));
					}
					if (fVar22 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_100144[iVar20], (-1000f * 0.25f));
					}
				}
				__LIB_38__::func_706(PLAYER::PLAYER_PED_ID(), &(Global_99845[iVar20 /*98*/]), &(Global_100148[iVar20 /*3*/]), &(Global_100158[iVar20]), &(Global_100140[iVar20]), &(Global_4541522[iVar20]));
				func_230(PLAYER::PLAYER_PED_ID(), 0);
				__LIB_38__::func_705(PLAYER::PLAYER_PED_ID());
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var6, false, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			}
			func_220(uParam0->f_3, uParam0->f_2);
			iLocal_76 = 0;
			Global_32007 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
			STREAMING::REQUEST_MODEL(__LIB_16__::func_512(uParam0->f_3));
			__LIB_5__::func_33(uParam0, 3);
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		__LIB_5__::func_33(uParam0, 3);
		iLocal_76++;
		STREAMING::REQUEST_MODEL(__LIB_16__::func_512(uParam0->f_3));
		if (uParam0->f_16 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_16))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_16);
				__LIB_5__::func_33(uParam0, 2);
				if (iLocal_76 > 150)
				{
					iLocal_76 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					__LIB_5__::func_33(uParam0, 3);
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar23 = __LIB_0__::func_484(uParam0->f_61);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_17[iVar23], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_17[iVar23], true))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_17[iVar23]));
				}
			}
			uParam0->f_17[uParam0->f_61] = 0;
			uParam0->f_2 = 1;
		}
		if (__LIB_42__::func_527(uParam0, 0))
		{
			Var24 = { Global_113386.f_2363.f_539[uParam0->f_61 /*65*/] };
			bVar25 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar25 = true;
			}
			if (func_954(&(uParam0->f_17[uParam0->f_61]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar25))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) != 3)
					{
						Global_113386.f_2363.f_539[uParam0->f_61 /*65*/] = { Var24 };
					}
				}
				__LIB_17__::func_230(uParam0->f_17[uParam0->f_61]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_17[uParam0->f_61], false, false);
				}
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_17[uParam0->f_61], true);
				__LIB_17__::func_684(uParam0);
				uParam0->f_17.f_39 = 1;
				uParam0->f_17.f_7 = uParam0->f_61;
				uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
				Global_100165 = -1;
				__LIB_32__::func_91(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_12)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) == 3)
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
					{
						iVar26 = MISC::GET_GAME_TIMER();
						while (iVar26 + 500 < MISC::GET_GAME_TIMER() && iVar26 > 0)
						{
							if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_17[uParam0->f_61]))
							{
								iVar26 = -1;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar26 == -1)
						{
						}
					}
				}
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_12, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, true, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, false);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				__LIB_5__::func_33(uParam0, 4);
			}
		}
		else
		{
			uParam0->f_17.f_39 = 1;
			uParam0->f_17.f_7 = uParam0->f_61;
			uParam0->f_62.f_12 = uParam0->f_17[uParam0->f_61];
			if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_62.f_12, true, true);
			}
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_12, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, true, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!__LIB_0__::func_490(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, true), 5f, 0) && !__LIB_0__::func_490(uParam0->f_4, 0f, 0f, 0f, 5f, 0))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_100165 = -1;
			__LIB_32__::func_91(uParam0->f_2);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(uParam0->f_17[uParam0->f_61]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			__LIB_5__::func_33(uParam0, 4);
		}
	}
	if (*uParam0 == 4)
	{
		bVar27 = false;
		bVar28 = false;
		iVar29 = 0;
		fVar30 = 0f;
		fVar31 = 0f;
		bVar32 = false;
		bVar33 = false;
		func_203(uParam0, &bVar27, &bVar28, &iVar29, &fVar30, &fVar31, &bVar32, &bVar33, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (__LIB_17__::func_690(uParam0->f_2, &Var34))
			{
				MemCopy(&(uParam0->f_8), {Var34}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar32)
			{
				bVar32 = true;
			}
		}
		bVar35 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (func_202(&(uParam0->f_62), iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &(uParam0->f_8), 0, 0))
			{
				bVar35 = true;
			}
		}
		else
		{
			MemCopy(&Var36, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var36))
			{
				func_549(uParam0->f_2, &sVar37, &cVar38);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar38))
				{
					StringConCat(&Var36, &cVar38, 64);
				}
			}
			if (func_158(&(uParam0->f_62), uParam0->f_62.f_10, iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &Var36, 2))
			{
				bVar35 = true;
			}
		}
		if (bVar35)
		{
			iVar40 = 3;
			iVar41 = 8;
			if (Global_3)
			{
				iVar40 = 7;
				iVar41 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar39 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar39 == 8 || iVar39 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar39 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
					{
						if (Global_100164 > 0)
						{
							if (Global_100165 < 0)
							{
								Global_100165 = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar42 = 12500;
								if (iVar39 == 11)
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (func_545(uParam0->f_2, &sVar43))
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_100165 + iVar42))
								{
									__LIB_17__::func_194();
									STREAMING::ALLOW_PLAYER_SWITCH_OUTRO();
									Global_100165 = -1;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar39 = iVar40;
				iVar41 = iVar40;
			}
			func_130(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar39 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (__LIB_0__::func_703(uParam3, 512))
			{
				if (iVar39 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar39 >= iVar40)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_62.f_19)
					{
						if (uParam0->f_62.f_18 && iVar39 >= iVar41)
						{
							bVar44 = false;
							if (func_861(&(uParam0->f_17), bVar27, bVar28, 0))
							{
								bVar44 = true;
							}
							if (bVar44)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_62.f_13))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, true, 1);
								}
								__LIB_17__::func_681(&(uParam0->f_17));
								func_130(uParam0);
								__LIB_17__::func_700();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
								Global_97919 = { uParam0->f_17 };
								uParam0->f_62.f_19 = 1;
							}
						}
					}
				}
			}
			if (iVar39 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(false);
			}
			if (Global_97752)
			{
				if (uParam0->f_62.f_19)
				{
					if (func_115(uParam0))
					{
						Global_97752 = 0;
					}
				}
			}
		}
		else
		{
			__LIB_5__::func_33(uParam0, 5);
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_10))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_62.f_10))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_62.f_10))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, false);
					CAM::DESTROY_CAM(uParam0->f_62.f_10, false);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_62.f_10, false);
				CAM::DESTROY_CAM(uParam0->f_62.f_10, false);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_108, false);
			PED::CLEAR_PED_NON_CREATION_AREA();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_62.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_62.f_9, false);
			}
			if (uParam0->f_62.f_24 > 0)
			{
				iVar45 = 0;
				while (iVar45 <= (uParam0->f_62.f_24 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_62[iVar45]))
					{
						CAM::DESTROY_CAM(uParam0->f_62[iVar45], false);
					}
					iVar45++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				__LIB_0__::func_671(uParam0->f_62.f_21);
			}
			uParam0->f_62.f_15 = 0;
			uParam0->f_62.f_16 = 0;
			uParam0->f_62.f_17 = 0;
			uParam0->f_62.f_18 = 0;
			uParam0->f_62.f_19 = 0;
			uParam0->f_62.f_20 = 0;
			uParam0->f_62.f_24 = 0;
			if (!Global_44203)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
				CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), true);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			__LIB_0__::func_986(0);
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_13))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_13, false, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uParam0->f_62.f_13, true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, true);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_62.f_12))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_62.f_12, false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_62.f_12, true);
				if (uParam0->f_62.f_12 != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_62.f_12, false, 1);
				}
			}
			__LIB_5__::func_33(uParam0, 6);
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_16 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_16);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_512(uParam0->f_3));
		iVar46 = __LIB_17__::func_341();
		if (iVar46 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_100144[iVar46], false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_100144[iVar46], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_100144[iVar46]));
				}
			}
			iVar47 = Global_99845[iVar46 /*98*/];
			if (iVar47 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar47);
			}
		}
		func_85(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_113386.f_18533[uParam0->f_3] = uParam0->f_2;
			__LIB_32__::func_90(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			func_20(&(Global_113386.f_2363.f_539), -1);
		}
		__LIB_17__::func_678(uParam0->f_3);
		func_60(uParam0, &Var1);
		__LIB_42__::func_526(uParam0);
		func_53(uParam0->f_2);
		__LIB_0__::func_17(&Global_1574629);
		__LIB_0__::func_17(&(Global_113386.f_2363.f_539.f_2296[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_96.f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_113386.f_2363.f_539.f_2300[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_113386.f_2363.f_539.f_2310[uParam0->f_3] = 0f;
		Global_113386.f_2363.f_539.f_2314[uParam0->f_3] = 0;
		Global_113386.f_2363.f_539.f_2318[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_97752 = 0;
		Global_100165 = -1;
		__LIB_0__::func_56(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			__LIB_0__::func_671(0);
		}
		return 1;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x4A59
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	if (func_549(iParam0, &sVar0, &cVar1))
	{
		if (__LIB_32__::func_88(iParam0, &sVar2, &cVar3, &cVar4, &uVar5, &uVar6))
		{
			STREAMING::REMOVE_ANIM_DICT(&sVar2);
			return 1;
		}
	}
	return 0;
}

int func_60(var uParam0, var uParam1)//Position - 0x631E
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char[] cVar4[8];
	char[] cVar5[8];
	char[] cVar6[8];
	var uVar7;
	int iVar8;
	if (__LIB_37__::func_865(*uParam0, uParam1))
	{
		iVar0 = uParam0->f_3;
		iVar1 = uParam1->f_111;
		if (iVar1 < 144)
		{
			if (__LIB_17__::func_273(iVar0, iVar1))
			{
				iVar2 = 1;
				__LIB_17__::func_234(iVar0, iVar1, iVar2);
				return 1;
			}
		}
		else if (func_61(uParam0->f_2, &sVar3, &cVar4, &cVar5, &cVar6, &uVar7))
		{
			switch (MISC::GET_HASH_KEY(&cVar4))
			{
				case joaat("AMANDA"):
					iVar1 = 17;
					break;
				case joaat("LAMAR"):
					iVar1 = 19;
					break;
				default:
					return 0;
					break;
			}
			if (__LIB_17__::func_273(iVar0, iVar1))
			{
				iVar8 = 0;
				__LIB_17__::func_234(iVar0, iVar1, iVar8);
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)//Position - 0x63C4
{
	var uVar0;
	var uVar1;
	var uVar2;
	StringCopy(sParam3, "PRSAUD", 16);
	StringCopy(sParam2, "", 16);
	*uParam5 = 0f;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_D", 16);
			StringCopy(sParam2, "TANISHA", 16);
			return 1;
			break;
		case 8:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_A", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 9:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_B", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 10:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_C", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		case 13:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FAM3", 16);
			return 1;
			break;
		case 15:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FBI2", 16);
			return 1;
			break;
		case 12:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FAM1", 16);
			return 1;
			break;
		case 16:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4_0", 16);
			return 1;
			break;
		case 17:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI4_0", 16);
			return 1;
			break;
		case 18:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI3", 16);
			return 1;
			break;
		case 19:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4", 16);
			return 1;
			break;
		case 20:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5", 16);
			return 1;
			break;
		case 22:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FAM4", 16);
			return 1;
			break;
		case 23:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE1", 16);
			return 1;
			break;
		case 24:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGEp", 16);
			return 1;
			break;
		case 58:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FRA2", 16);
			return 1;
			break;
		case 59:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FRA2", 16);
			return 1;
			break;
		case 60:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBIend", 16);
			return 1;
			break;
		case 25:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_CARST1", 16);
			return 1;
			break;
		case 26:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST1", 16);
			return 1;
			break;
		case 27:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE2", 16);
			return 1;
			break;
		case 28:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST2", 16);
			return 1;
			break;
		case 38:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_RUR2A", 16);
			return 1;
			break;
		case 41:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_RUR1", 16);
			return 1;
			break;
		case 47:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_EXILE2", 16);
			return 1;
			break;
		case 49:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5b", 16);
			return 1;
			break;
		case 48:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_EXILE3", 16);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_MIC2", 16);
			return 1;
			break;
		case 51:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MIC3b", 16);
			return 1;
			break;
		case 52:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2A", 16);
			return 1;
			break;
		case 66:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_DOC2A", 16);
			return 1;
			break;
		case 61:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2B", 16);
			return 1;
			break;
		case 62:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN1", 16);
			return 1;
			break;
		case 69:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2A", 16);
			return 1;
			break;
		case 64:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN2B", 16);
			return 1;
			break;
		case 65:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2B", 16);
			return 1;
			break;
		case 40:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MRSP", 16);
			return 1;
			break;
		case 54:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN1", 16);
			return 1;
			break;
		case 55:
			StringCopy(sParam3, "MIFLAUD", 16);
			StringCopy(sParam4, "MIFL_CALL3", 16);
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam2, "LESTER", 16);
			return 1;
			break;
		case 56:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FIN2i", 16);
			return 1;
			break;
		case 57:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2i", 16);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_17__::func_676("MICS1_IG_4", 3) };
			return 1;
			break;
		case 98:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_5", 16);
			return 1;
			break;
		case 110:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9a", 16);
			return 1;
			break;
		case 111:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9b", 16);
			return 1;
			break;
		case 103:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_BEACH", 16);
			return 1;
			break;
		case 105:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_7", 16);
			return 1;
			break;
		case 106:
			return func_61(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 107:
			return func_61(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 108:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 109:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8b", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 114:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_11", 16);
			*uParam5 = 0.15f;
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 121:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_16", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 122:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_17__::func_676("MICS1_IG_18", 3) };
			*uParam5 = 0f;
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18a"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18b"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18c"))
			{
				*uParam5 = 0.05f;
			}
			return 1;
			break;
		case 197:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LESTER", 16);
			StringCopy(sParam4, "FRAS2_IG_12", 16);
			return 1;
			break;
		case 95:
			if (!Global_3)
			{
				StringCopy(sParam1, "MICHAEL", 16);
				StringCopy(sParam4, "PSM_4REST", 16);
				*uParam5 = 0.2f;
				return 1;
			}
			break;
		case 96:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHb", 16);
			return 1;
			break;
		case 97:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHc", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		case 125:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_HOOKM", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 84:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_DESERT", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7LUNCHa", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_17__::func_676("MICS3_IG_9", 3) };
			return 1;
		case 153:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5a", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		case 154:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5b", 16);
			return 1;
			break;
		case 155:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_18", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		case 157:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_6", 16);
			return 1;
			break;
		case 158:
			StringCopy(sParam1, "MICHAEL", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_7HOOKER", 3) };
			StringCopy(sParam2, "HOOKER", 16);
			return 1;
			break;
		case 161:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_13", 16);
			return 1;
			break;
		case 115:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM2_COFFEE", 16);
			return 1;
			break;
		case 116:
			return func_61(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 117:
			return func_61(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 162:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM7_COFFEE", 16);
			return 1;
			break;
		case 163:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7SVHOUSE", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_3", 16);
			return 1;
			break;
		case 167:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_7LOT_C", 3) };
			return 1;
			break;
		case 85:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_2", 16);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_15", 16);
			return 1;
			break;
		case 169:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_17__::func_676("MICS3_IG_11", 3) };
			*uParam5 = 0.2f;
			return 1;
		case 170:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { __LIB_17__::func_676("MICS3_IG_17", 3) };
			return 1;
		case 171:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			StringCopy(sParam4, "PSM_7SHOPb", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_17__::func_676("MICS3_IG_21", 3) };
			*uParam5 = 0.25f;
			return 1;
			break;
		case 175:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1", 16);
			return 1;
			break;
		case 176:
			return func_61(175, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 181:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1c", 16);
			return 1;
			break;
		case 182:
			return func_61(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 183:
			return func_61(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 179:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1b", 16);
			return 1;
			break;
		case 180:
			return func_61(179, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 220:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LAMAR", 16);
			StringCopy(sParam4, "FRAS_IG_6_P5", 16);
			return 1;
			break;
		case 193:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_2", 16);
			return 1;
			break;
		case 194:
			return func_61(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 195:
			return func_61(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 211:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_BIKEa", 16);
			return 1;
			break;
		case 213:
			return func_61(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 216:
			return func_61(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 217:
			return func_61(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 198:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_3", 16);
			return 1;
			break;
		case 199:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSM_TRASH", 16);
			return 1;
			break;
		case 221:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_8", 16);
			*uParam5 = 0.35f;
			return 1;
			break;
		case 208:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_TRAFF", 16);
			return 1;
			break;
		case 209:
			return func_61(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 210:
			return func_61(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 203:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_9", 16);
			return 1;
			break;
		case 204:
			return func_61(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 206:
			return func_61(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 207:
			return func_61(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 205:
			return func_61(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 226:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_BAR", 16);
			return 1;
			break;
		case 227:
			return func_61(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 228:
			return func_61(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 229:
			return func_61(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 230:
			return func_61(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 235:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_28b", 16);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12a", 16);
			return 1;
			break;
		case 240:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12b", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 241:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12c", 16);
			return 1;
			break;
		case 242:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12d", 16);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "TREVOR", 16);
			*sParam4 = { __LIB_17__::func_676("TRVS_IG_5", 3) };
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_6", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_29", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 278:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKa", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 279:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "TREVOR", 16);
			if (!Global_3)
			{
				StringCopy(sParam4, "PST_BRDGEWKc", 16);
			}
			else
			{
				StringCopy(sParam4, "PST_MAGDEMO", 16);
			}
			*uParam5 = 0.39f;
			return 1;
			break;
		case 272:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WSTRIP", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 265:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 266:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHc", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 267:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHd", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 268:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHe", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 269:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHf", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 270:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHg", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		case 255:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_11", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 282:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRb", 16);
			return 1;
			break;
		case 248:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_7", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_8", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		case 281:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRa", 16);
			return 1;
			break;
		case 283:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRc", 16);
			return 1;
			break;
		case 284:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRd", 16);
			return 1;
			break;
		case 275:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLa", 16);
			return 1;
			break;
		case 276:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLb", 16);
			return 1;
			break;
		case 277:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLc", 16);
			return 1;
			break;
		case 273:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PARK", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		case 274:
			return func_61(273, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 254:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_9", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 256:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARa", 16);
			return 1;
			break;
		case 257:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARb", 16);
			return 1;
			break;
		case 258:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARc", 16);
			return 1;
			break;
		case 259:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_21", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 260:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHb", 16);
			return 1;
			break;
		case 261:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHc", 16);
			return 1;
			break;
		case 286:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_23", 16);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_22", 16);
			*uParam5 = 0.3f;
			return 1;
			break;
		case 262:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_19", 16);
			return 1;
			break;
		case 263:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_20", 16);
			return 1;
			break;
		case 289:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_18", 16);
			*uParam5 = 0.214f;
			return 1;
			break;
		case 290:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HSTRIP", 16);
			return 1;
			break;
		case 292:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30a", 16);
			return 1;
			break;
		case 293:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30b", 16);
			return 1;
			break;
		case 294:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30c", 16);
			return 1;
			break;
		case 295:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30d", 16);
			return 1;
			break;
		case 299:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34a", 16);
			return 1;
			break;
		case 300:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34b", 16);
			return 1;
			break;
		case 301:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34c", 16);
			return 1;
			break;
		case 302:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34d", 16);
			return 1;
			break;
		case 303:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34e", 16);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_31", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_32", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_33", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		case 305:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_METH", 16);
			return 1;
			break;
		case 306:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HUNT", 16);
			return 1;
			break;
		case 307:
			return func_61(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 308:
			return func_61(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		case 309:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_ARMS", 16);
			return 1;
			break;
		case 312:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PIER", 16);
			return 1;
			break;
		case 314:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FLY", 16);
			return 1;
			break;
		case 82:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		case 83:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			return 1;
			break;
		case 187:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_2", 16);
			return 1;
			break;
		case 287:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_24", 16);
			return 1;
			break;
		case 316:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_2c", 16);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_27", 16);
			return 1;
			break;
		case 215:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_7", 16);
			StringCopy(sParam2, "PRLADY", 16);
			return 1;
			break;
		case 188:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_CRISP", 16);
			*uParam5 = 0.75f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 99:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_SHOPb_", 3) };
			return 1;
			break;
		case 100:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_SHOPc_", 3) };
			return 1;
			break;
		case 101:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_SHOPd_", 3) };
			return 1;
			break;
		case 102:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { __LIB_17__::func_676("PSM_SHOPe_", 3) };
			return 1;
			break;
		case 131:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { __LIB_17__::func_676(sParam4, 3) };
			return 1;
			break;
		case 132:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { __LIB_17__::func_676(sParam4, 3) };
			return 1;
			break;
		case 129:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, func_63(108, &uVar0, &uVar1, &uVar2), 16);
			return 1;
			break;
		case 233:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam3, "FB3aAUD", 16);
			StringCopy(sParam4, "F3A_INTRO", 16);
			return 1;
			break;
			break;
		case 150:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, __LIB_17__::func_249(10), 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "RONEX_IG_5", 16);
			*sParam4 = { __LIB_17__::func_676(sParam4, 2) };
			return 1;
			break;
			break;
		case 234:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "TRV_IG_4", 16);
			return 1;
			break;
			break;
	}
	StringCopy(sParam1, "null", 16);
	StringCopy(sParam3, "null", 16);
	StringCopy(sParam4, "null", 16);
	*uParam5 = -1f;
	return 0;
}

char* func_63(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7DD5
{
	__LIB_1__::func_330(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 1:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		case 2:
			__LIB_1__::func_330(uParam2, 32);
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		case 3:
			__LIB_1__::func_330(uParam2, 32);
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		case 4:
			__LIB_1__::func_330(uParam2, 32);
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		case 5:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		case 6:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 8:
			__LIB_1__::func_330(uParam2, 2);
			__LIB_2__::func_712(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		case 10:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		case 11:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		case 12:
			__LIB_1__::func_330(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 13:
			__LIB_1__::func_330(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 14:
			__LIB_1__::func_330(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 15:
			__LIB_1__::func_330(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		case 17:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		case 25:
			__LIB_1__::func_330(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		case 26:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		case 32:
			if (!Global_3)
			{
				__LIB_1__::func_330(uParam2, 2);
				__LIB_2__::func_712(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				__LIB_1__::func_330(uParam2, 2);
				__LIB_2__::func_712(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		case 33:
			__LIB_2__::func_712(uParam2, 16);
			__LIB_1__::func_330(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 38:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		case 29:
			__LIB_2__::func_712(uParam2, 64);
			__LIB_1__::func_330(uParam2, 8);
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		case 30:
			return func_63(29, uParam1, uParam2, uParam3);
			break;
		case 31:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		case 37:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		case 36:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		case 28:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		case 46:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 48:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		case 68:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		case 49:
			return func_63(140, uParam1, uParam2, uParam3);
			break;
		case 50:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		case 69:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 52:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 67:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		case 54:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		case 70:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 58:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 59:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		case 72:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		case 60:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 74:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		case 76:
			return func_63(75, uParam1, uParam2, uParam3);
			break;
		case 77:
			return func_63(75, uParam1, uParam2, uParam3);
			break;
		case 78:
			return func_63(75, uParam1, uParam2, uParam3);
			break;
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		case 93:
			__LIB_1__::func_330(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		case 98:
			__LIB_2__::func_712(uParam2, 64);
			__LIB_1__::func_330(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		case 102:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		case 103:
			return func_63(102, uParam1, uParam2, uParam3);
			break;
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 111:
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 116:
			__LIB_2__::func_712(uParam2, 64);
			__LIB_1__::func_330(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		case 117:
			__LIB_2__::func_712(uParam2, 64);
			__LIB_1__::func_330(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			__LIB_2__::func_712(uParam2, 64);
			__LIB_2__::func_712(uParam2, 16);
			__LIB_1__::func_330(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		case 124:
			__LIB_1__::func_330(uParam2, 32);
			__LIB_2__::func_712(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			__LIB_2__::func_712(uParam2, 64);
			return "";
			break;
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		case 133:
			return func_63(132, uParam1, uParam2, uParam3);
			break;
		case 134:
			return func_63(132, uParam1, uParam2, uParam3);
			break;
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = -1;
	*uParam3 = 0;
	return "NULL";
}

int func_85(int iParam0)//Position - 0xDA2F
{
	if (Global_113386.f_18533[iParam0] == 32)
	{
		func_86(&(Global_113386.f_2363.f_539), 0, 34);
		return 1;
	}
	if (Global_113386.f_18533[iParam0] == 74)
	{
		func_86(&(Global_113386.f_2363.f_539), 0, 72);
		func_86(&(Global_113386.f_2363.f_539), 1, 73);
		return 1;
	}
	return 0;
}

int func_86(var uParam0, bool bParam1, int iParam2)//Position - 0xDA96
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	if (!BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_219[0], 9))
	{
		iVar0 = Global_113386.f_18533[bParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_113386.f_18533[bParam1] = iParam2;
	uParam0->f_2296[bParam1] = __LIB_34__::func_681();
	if (!func_22(iParam2, &(uParam0->f_2300[bParam1 /*3*/]), &(uParam0->f_2310[bParam1])))
	{
		return 0;
	}
	if (!__LIB_0__::func_78(uParam0->f_2300[bParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!__LIB_0__::func_78(Global_98880[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_11 = 12;
			Var1.f_31 = 49;
			Var1.f_81 = 2;
			if (func_87(bParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_99845[bParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_2314[bParam1] = 0;
	uParam0->f_2318[bParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[bParam1] = 0;
	return 1;
}

int func_87(bool bParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xDBB3
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_99845[bParam0 /*98*/] };
			if (Global_100140[bParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100148[bParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_100140[bParam0] == 1)
					{
						*uParam3 = { Global_100148[bParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[bParam0 /*3*/] };
						*uParam4 = (Global_100158[bParam0] - Global_113386.f_2363.f_539.f_2310[bParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_100148[bParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[bParam0 /*3*/] };
				*uParam4 = (Global_100158[bParam0] - Global_113386.f_2363.f_539.f_2310[bParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 6:
			*uParam2 = { Global_99845[bParam0 /*98*/] };
			if (Global_100140[bParam0] != 2)
			{
				*uParam3 = { Global_100148[bParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[bParam0 /*3*/] };
				*uParam4 = (Global_100158[bParam0] - Global_113386.f_2363.f_539.f_2310[bParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 7:
			*uParam2 = { Global_99845[bParam0 /*98*/] };
			if (Global_100140[bParam0] != 2)
			{
				*uParam3 = { Global_100148[bParam0 /*3*/] - Global_113386.f_2363.f_539.f_2300[bParam0 /*3*/] };
				*uParam4 = (Global_100158[bParam0] - Global_113386.f_2363.f_539.f_2310[bParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		case 11:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.1947f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		case 9:
			return func_87(bParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 10:
			return func_87(bParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 13:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 14:
			__LIB_42__::func_429(bParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 56:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = joaat("penumbra");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.5203f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 16:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 17:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 18:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 19:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 20:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 23:
			return func_87(bParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 24:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 67:
			__LIB_42__::func_429(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		case 58:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 59:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 60:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = joaat("phantom");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		case 74:
			__LIB_42__::func_429(bParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 38:
			__LIB_42__::func_429(bParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 41:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = joaat("blista");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.6798f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = joaat("seminole");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = joaat("peyote");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.7855f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		case 40:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = joaat("polmav");
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 234:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		case 75:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 76:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(4.8006f, -2965.4985f, 782.1644f) - Vector(4.0205f, -2975.3408f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mesa");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.4788f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sadler");
			*uParam3 = { Vector(5.1176f, -2936.8425f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = joaat("mixer");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.0852f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cavalcade");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 49:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		case 48:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		case 50:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = joaat("stretch");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.7203f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		case 52:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 66:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		case 61:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 62:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		case 63:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		case 64:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = joaat("prairie");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = joaat("frogger2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		case 112:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 113:
			if (func_87(bParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = joaat("scorcher");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		case 119:
			if (func_87(bParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		case 120:
			if (func_87(bParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cruiser");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 114:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		case 105:
			__LIB_42__::func_429(bParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 106:
			return func_87(bParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 107:
			return func_87(bParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 98:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 99:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		case 100:
			return func_87(bParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 101:
			return func_87(bParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 102:
			return func_87(bParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 123:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		case 125:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = joaat("tropic");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		case 89:
		case 90:
		case 127:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 91:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		case 93:
			if (func_87(bParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		case 121:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		case 115:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		case 116:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		case 117:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		case 94:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		case 96:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		case 108:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		case 109:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		case 135:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 136:
			if (func_87(bParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 137:
			if (func_87(bParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 138:
			if (func_87(bParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		case 139:
			if (func_87(bParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		case 140:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 141:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		case 142:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		case 143:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 144:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 145:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 146:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 147:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		case 148:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 149:
			if (func_87(bParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		case 151:
			if (func_87(bParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		case 162:
			if (func_87(bParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		case 158:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		case 166:
			return func_87(bParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 170:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		case 171:
			return func_87(bParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 172:
			return func_87(bParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 208:
			__LIB_42__::func_429(bParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		case 209:
			return func_87(bParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 210:
			return func_87(bParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 211:
			__LIB_0__::func_378(bParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		case 212:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		case 213:
			if (func_87(bParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		case 214:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = joaat("taxi");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.9152f, -17.4132f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.4609f, -147.0307f) - Vector(31.1932f, -1441.1821f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		case 221:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		case 216:
			if (func_87(bParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		case 217:
			if (func_87(bParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		case 232:
		case 233:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { Vector(28.225f, -1015.1096f, -70.4456f) - Vector(27.5447f, -1019.2347f, -78.4023f) };
			*uParam4 = (162.09804f - 109.0206f);
			return 1;
			break;
		case 192:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		case 193:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.0171f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		case 194:
			if (func_87(bParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		case 195:
			if (func_87(bParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		case 200:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.5681f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.2864f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		case 201:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.7875f, 3.6009f) - Vector(29.2903f, -1607.2864f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		case 202:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		case 222:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		case 223:
			if (func_87(bParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		case 224:
			return func_87(bParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 226:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		case 227:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		case 228:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		case 229:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		case 230:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		case 238:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		case 250:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		case 251:
			if (func_87(bParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		case 252:
			if (func_87(bParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		case 253:
			if (func_87(bParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		case 281:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 282:
			if (func_87(bParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 283:
			if (func_87(bParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		case 284:
			if (func_87(bParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("faggio2");
				uParam2->f_91 = 0;
				return 1;
			}
			break;
		case 275:
			__LIB_0__::func_378(bParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		case 276:
			return func_87(bParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 277:
			return func_87(bParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("tropic");
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = joaat("dinghy");
			}
			*uParam3 = { Vector(-0.6187f, -1440.4209f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = joaat("sanchez");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = joaat("speedo");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		case 309:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		case 305:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.0466f, 1399.6621f) - Vector(37.9419f, 3602.284f, 1394.2081f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		case 310:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = joaat("romero");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = joaat("bmx");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = joaat("gburrito");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		case 256:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.2047f, -1243.6498f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		case 257:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.5349f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		case 258:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.1196f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = joaat("cuban800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		case 111:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.7816f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		case 153:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		case 154:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		case 165:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.8779f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		case 159:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		case 160:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		case 167:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.1743f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		case 152:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.7998f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		case 157:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		case 225:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.7335f, 185.4888f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		case 218:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.1594f, -17.556f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		case 219:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.1511f, -219.3172f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		case 220:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.6935f, -22.6138f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		case 206:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		case 207:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		case 274:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.4458f, -1883.836f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		case 312:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.5566f, -200.684f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		case 271:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.7513f, -1278.0234f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		case 248:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		case 242:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.2205f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		case 254:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		case 287:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		case 286:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.7039f, -1264.2178f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		case 239:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		case 243:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		case 244:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.2819f, 434.9171f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		case 249:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		case 273:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		case 92:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		case 103:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		case 109:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.5045f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		case 81:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.4424f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		case 95:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		case 97:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.1559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		case 134:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.9182f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		case 88:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.8212f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		case 306:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.7256f, -569.3535f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		case 307:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.5929f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		case 308:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		case 278:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.7451f, 631.8275f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		case 279:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		case 240:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.3232f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		case 241:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.6665f, -179.4242f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		case 264:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.5446f, 486.7419f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		case 266:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.8945f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		case 267:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.3752f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		case 269:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		case 246:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.5072f, -1195.2559f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		case 263:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.2125f, -573.3765f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		case 259:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.5391f, -724.429f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		case 260:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.1135f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		case 261:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		case 270:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_98880[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		case 289:
			__LIB_42__::func_429(bParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

int func_115(var uParam0)//Position - 0x150D2
{
	float fVar0;
	char* sVar1;
	char[] cVar2[8];
	if (!__LIB_17__::func_680())
	{
	}
	else
	{
		return 1;
	}
	fVar0 = -1f;
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
	{
		fVar0 = (SYSTEM::TO_FLOAT(STREAMING::GET_PLAYER_SWITCH_STATE()) / SYSTEM::TO_FLOAT(9));
	}
	if (func_549(uParam0->f_2, &sVar1, &cVar2))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (fVar0 >= 0.95f)
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0)//Position - 0x1556F
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	iVar0 = uParam0->f_2;
	uParam0->f_96.f_4 = uParam0->f_62.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 192:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(9, 0, "Overcast", "RAIN", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 75:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(19, 45, "SMOG", "Wispy", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 95:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 280:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(18, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 76:
			if (Global_3)
			{
				if (func_155(uParam0, &fVar1))
				{
					return __LIB_38__::func_230(22, 0, "SMOG", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
				}
			}
			break;
		case 174:
			if (func_155(uParam0, &fVar1))
			{
				__LIB_13__::func_812(20, &uVar3, &iVar2);
				return __LIB_38__::func_230(iVar2, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
		case 231:
			if (func_155(uParam0, &fVar1))
			{
				__LIB_13__::func_812(15, &uVar5, &iVar4);
				return __LIB_38__::func_230(iVar4, 0, "", "", &(uParam0->f_96), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (__LIB_3__::func_423(Global_1574629))
	{
		iVar6 = __LIB_0__::func_199(Global_1574629);
		iVar7 = __LIB_0__::func_198(Global_1574629);
		sVar8 = "";
		sVar9 = "";
		if (!__LIB_17__::func_682())
		{
			sVar8 = "SMOG";
		}
		if (func_131(&fVar1, 5f))
		{
			return __LIB_38__::func_230(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_96), fVar1, 0, 1, 5f);
		}
	}
	else if (!__LIB_17__::func_682())
	{
	}
	return 0;
}

int func_131(float fParam0, float fParam1)//Position - 0x157A6
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_75 == -1)
	{
		iLocal_75 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_75);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}

int func_155(var uParam0, float fParam1)//Position - 0x1632F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	Var0 = { Local_73 };
	Var1 = { Local_74 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_13, false))
	{
		Local_73 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_13, true) };
		Var0 = { Local_73 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12, false))
	{
		Local_74 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, true) };
		Var1 = { Local_74 };
	}
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, false);
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var2, false);
	*fParam1 = (fVar4 / fVar3);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

int func_158(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x163FA
{
	return __LIB_17__::func_626(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_202(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)//Position - 0x17B20
{
	return __LIB_17__::func_626(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

void func_203(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, var uParam8)//Position - 0x17B47
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	*iParam1 = 1;
	*iParam2 = 0;
	*iParam3 = 0;
	if (uParam0->f_17.f_5 < 3 && uParam0->f_17.f_6 < 3)
	{
		if (uParam0->f_17.f_5 != uParam0->f_17.f_6)
		{
			iVar0 = __LIB_0__::func_484(uParam0->f_17.f_5);
			iVar1 = __LIB_0__::func_484(uParam0->f_17.f_6);
			Var2 = { Global_113386.f_2363.f_539.f_2300[iVar0 /*3*/] };
			Var3 = { Global_113386.f_2363.f_539.f_2300[iVar1 /*3*/] };
			if (SYSTEM::VDIST2(Var2, Var3) < (150f * 150f))
			{
				*iParam2 = 1;
			}
		}
	}
	if (__LIB_17__::func_341() == 145)
	{
		*iParam1 = 0;
	}
	if (Global_3)
	{
		*iParam1 = 0;
	}
	if (__LIB_0__::func_703(*uParam8, 64))
	{
		if (!__LIB_0__::func_703(*uParam8, 512))
		{
			__LIB_1__::func_330(uParam8, 512);
		}
		*iParam3 = 2;
		*iParam1 = 0;
	}
	if (((uParam0->f_2 == 174 || uParam0->f_2 == 232) || uParam0->f_2 == 233) || uParam0->f_2 == 231)
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
		*iParam1 = 0;
	}
	if (Global_97830)
	{
		*iParam1 = 0;
	}
	if (!((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7))
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
	}
	else if (*iParam3 == 0)
	{
		iVar4 = uParam0->f_62.f_13;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar4 = PLAYER::PLAYER_PED_ID();
		}
		if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(ENTITY::GET_ENTITY_COORDS(iVar4, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_62.f_12, false)) == 3)
		{
			if (*iParam3 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_62.f_12, false))
				{
					if (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(uParam0->f_62.f_12))
					{
						*iParam3 = 2;
					}
				}
			}
			if (*iParam3 == 0)
			{
				iVar5 = 0;
				iVar6 = 0;
				iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar4);
				if (INTERIOR::IS_VALID_INTERIOR(iVar7))
				{
					iVar5 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar7);
				}
				if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_16))
				{
					iVar6 = INTERIOR::GET_INTERIOR_GROUP_ID(uParam0->f_16);
				}
				if (iVar5 != iVar6)
				{
					*iParam3 = 2;
				}
				else
				{
					if (iVar5 != 0)
					{
					}
					if (iVar6 != 0)
					{
					}
				}
			}
		}
	}
	if (!func_204(uParam0->f_2, fParam4, &uVar8, fParam5))
	{
	}
	*iParam6 = 0;
	*iParam7 = 0;
	if (Global_100164 > 0)
	{
		*iParam7 = 1;
	}
}

int func_204(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x17D80
{
	*uParam2 = 1f;
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		switch (iParam0)
		{
			case 211:
			case 213:
				*uParam3 = -0.0922f;
				*uParam1 = -32.8439f;
				return 1;
				break;
			case 291:
				*uParam3 = -0.092f;
				*uParam1 = -3.5553f;
				return 1;
				break;
			case 299:
				*uParam3 = -0.0916f;
				*uParam1 = -1.4212f;
				return 1;
				break;
			case 293:
			case 294:
				*uParam3 = -0.0944f;
				*uParam1 = -4.2087f;
				return 1;
				break;
			case 292:
			case 295:
				*uParam3 = -0.092f;
				*uParam1 = -2.1053f;
				return 1;
				break;
			case 312:
				*uParam3 = 0f;
				*uParam1 = -7.6775f;
				return 1;
				break;
		}
		*uParam3 = 0f;
		*uParam1 = 0f;
		return 1;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			*uParam1 = 999f;
			*uParam3 = 999f;
			return 0;
			break;
		case 134:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 105:
			*uParam3 = -325.239f;
			*uParam1 = -9.9f;
			return 1;
			break;
		case 280:
			if (!Global_3)
			{
				*uParam3 = -60f;
				*uParam1 = 0f;
				return 1;
			}
			break;
		case 224:
			return func_204(222, uParam1, uParam2, uParam3);
			break;
		case 193:
			*uParam3 = -9f;
			*uParam1 = 0f;
			return 1;
			break;
		case 236:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 289:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 290:
			return func_204(289, uParam1, uParam2, uParam3);
			break;
		case 278:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 271:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 245:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 40:
			return func_204(245, uParam1, uParam2, uParam3);
			break;
		case 192:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 89:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 90:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		case 127:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
	}
	*uParam1 = 999f;
	*uParam3 = 999f;
	return 0;
}

int func_220(int iParam0, int iParam1)//Position - 0x186D2
{
	var uVar0;
	float fVar1;
	int iVar2;
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 7) || iParam1 == 1) || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
	{
		return 0;
	}
	if (func_22(iParam1, &uVar0, &fVar1))
	{
		return 0;
	}
	iVar2 = __LIB_32__::func_92(iParam0);
	Global_113386.f_18533.f_24[iParam0 /*5*/][iVar2] = 0;
	return 1;
}

void func_230(int iParam0, bool bParam1)//Position - 0x1936C
{
	bool bVar0;
	struct<3> Var1;
	__LIB_42__::func_525(iParam0, 0);
	func_231(iParam0, 0);
	bVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_0__::func_374(bVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (PATHFIND::GET_SAFE_COORD_FOR_PED(Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/], bParam1, &Var1, 16))
			{
				Global_113386.f_2363.f_539.f_2300[bVar0 /*3*/] = { Var1 };
			}
		}
	}
}

void func_231(int iParam0, int iParam1)//Position - 0x193E1
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_523(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_248(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_32__::func_75(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_37__::func_870();
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

void func_248(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1A647
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
		iVar0 = __LIB_17__::func_107(iParam0);
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
			if (func_521(iParam0, iVar1, &iVar2, 0))
			{
				func_507(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_449(iParam0, iVar1, &iVar2))
			{
				func_507(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_446(iParam0);
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
			func_258(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_258(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_258(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_258(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1B305
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
			func_394(iVar5, iParam1, iParam2, 1);
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
						func_394(iVar5, 10, 0, 1);
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
									func_394(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_258(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_394(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_385(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_258(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_379(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_394(iVar5, 14, uVar18[iVar1], 1);
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
							func_258(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_394(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_258(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_370(iParam0);
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
						func_258(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_258(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_368(iVar5, iVar24, iVar23, iVar25);
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
							func_258(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_258(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_258(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_258(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_258(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_258(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_258(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_379(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_368(iVar5, func_385(iParam0, 8, -1), iParam2, func_385(iParam0, 4, -1));
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
				func_305(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_368(iVar5, iParam2, iVar44, iVar45);
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
			func_379(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_368(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_258(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_258(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_368(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_368(iVar5, iVar58, iVar57, iParam2);
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
						func_258(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_368(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_258(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_277(iParam0, 9, iVar63))
						{
							func_258(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_258(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_258(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_258(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_385(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_385(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_258(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_258(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_258(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_258(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_258(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_258(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_258(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_258(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_258(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_258(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_370(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_258(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_258(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_259(iParam0, &uVar4))
		{
			func_258(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_258(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_258(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_258(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_385(iParam0, 3, -1), iVar10);
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
				func_258(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_259(int iParam0, var uParam1)//Position - 0x1D1B1
{
	int iVar0;
	int iVar1;
	*uParam1 = func_385(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_277(iParam0, iVar1, iVar0))
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

int func_277(int iParam0, int iParam1, int iParam2)//Position - 0x21461
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
				if (!func_277(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_277(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_277(iParam0, 14, iVar6))
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
			if (!func_277(iParam0, 14, uVar11[iVar10]))
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
						return func_277(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_277(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_305(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x291AE
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
	func_306(iParam0, bParam3, 0, -1);
}

void func_306(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x291FB
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
		bVar3 = func_348(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_339(iParam0, iParam3);
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

int func_339(int iParam0, int iParam1)//Position - 0x384D5
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
				iVar3 = func_385(iParam0, 11, -1);
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
				iVar5 = func_385(iParam0, 11, -1);
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

int func_348(int iParam0, bool bParam1)//Position - 0x38933
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_385(iParam0, 11, -1), 0);
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
						iVar3 = func_385(iParam0, 11, -1);
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
						iVar5 = func_385(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_385(iParam0, 11, -1), 0);
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
						iVar8 = func_385(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_385(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_385(iParam0, 11, -1), 0);
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
						iVar12 = func_385(iParam0, 8, -1);
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

int func_368(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x417BF
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
					iVar0 = func_368(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_368(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_370(int iParam0)//Position - 0x42C14
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
		if (!func_375(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_375(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x435DE
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_385(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x45FC8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_446(iParam0))
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

int func_385(int iParam0, int iParam1, int iParam2)//Position - 0x46277
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
				if (func_277(iParam0, iParam1, iVar0))
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
				if (func_277(iParam0, iParam1, iVar1))
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

void func_394(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x48F3B
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
							func_394(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_394(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_394(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_394(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_394(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_394(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_394(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_394(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_394(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_394(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_446(int iParam0)//Position - 0x6602E
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
				iVar1 = func_385(iParam0, 11, -1);
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
				iVar3 = func_385(iParam0, 11, -1);
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

int func_449(int iParam0, int iParam1, int iParam2)//Position - 0x663A0
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_450(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_450(int iParam0, int iParam1, int iParam2)//Position - 0x6642C
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
				if (!func_450(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_450(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_450(iParam0, 14, iVar4))
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
			if (!func_450(iParam0, 14, uVar8[iVar7]))
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

int func_507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x79390
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
										func_507(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_507(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_523(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_521(iParam0, iVar10, &iVar4, 1))
							{
								func_507(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_507(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_507(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_507(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_507(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_507(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_507(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_507(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_507(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_507(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_521(iParam0, iVar10, &iVar4, 0))
		{
			func_507(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_449(iParam0, iVar10, &iVar4))
		{
			func_507(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_521(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7B94C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_450(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_523(int iParam0, int iParam1, int iParam2)//Position - 0x7BC0C
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
				if (func_450(iParam0, iParam1, iVar0))
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
				if (func_450(iParam0, iParam1, iVar1))
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

int func_545(int iParam0, char* sParam1)//Position - 0x7DE1A
{
	switch (iParam0)
	{
		case 23:
			return func_545(208, sParam1);
			break;
		case 42:
			StringCopy(sParam1, "player_scene_ft_franklin1", 32);
			return 1;
			break;
		case 43:
			return func_545(42, sParam1);
			break;
		case 44:
			return func_545(42, sParam1);
			break;
		case 45:
			return func_545(42, sParam1);
			break;
		case 75:
			StringCopy(sParam1, "player_scene_m_fbi2", 32);
			return 1;
			break;
		case 76:
			StringCopy(sParam1, "player_scene_m_fbi2", 32);
			return 1;
			break;
		case 105:
			StringCopy(sParam1, "player_scene_mf_traffic", 32);
			return 1;
			break;
		case 106:
			return func_545(105, sParam1);
			break;
		case 107:
			return func_545(105, sParam1);
			break;
		case 98:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 99:
			return func_545(98, sParam1);
			break;
		case 100:
			return func_545(98, sParam1);
			break;
		case 101:
			return func_545(98, sParam1);
			break;
		case 102:
			return func_545(98, sParam1);
			break;
		case 170:
			return func_545(98, sParam1);
			break;
		case 171:
			return func_545(98, sParam1);
			break;
		case 172:
			return func_545(98, sParam1);
			break;
		case 108:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 109:
			return func_545(108, sParam1);
			break;
		case 157:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 165:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 97:
			StringCopy(sParam1, "player_scene_m_cinema", 32);
			return 1;
			break;
		case 158:
			return func_545(97, sParam1);
			break;
		case 86:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 173:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "player_scene_m_kids", 32);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "player_scene_m_shopping", 32);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 208:
			StringCopy(sParam1, "player_scene_mf_traffic", 32);
			return 1;
			break;
		case 209:
			return func_545(208, sParam1);
			break;
		case 210:
			return func_545(208, sParam1);
			break;
		case 218:
			StringCopy(sParam1, "player_scene_f_lamtaunt", 32);
			return 1;
			break;
		case 219:
			return func_545(218, sParam1);
			break;
		case 220:
			return func_545(218, sParam1);
			break;
		case 225:
			return func_545(218, sParam1);
			break;
		case 215:
			StringCopy(sParam1, "player_scene_f_taxi", 32);
			return 1;
			break;
		case 196:
			StringCopy(sParam1, "player_scene_f_taxi", 32);
			return 1;
			break;
		case 235:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 281:
			StringCopy(sParam1, "player_scene_t_chasecar", 32);
			return 1;
			break;
		case 282:
			return func_545(281, sParam1);
			break;
		case 283:
			return func_545(281, sParam1);
			break;
		case 284:
			return func_545(281, sParam1);
			break;
		case 275:
			return func_545(281, sParam1);
			break;
		case 276:
			return func_545(275, sParam1);
			break;
		case 277:
			return func_545(275, sParam1);
			break;
		case 273:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 245:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 40:
			return func_545(245, sParam1);
			break;
		case 310:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 315:
			StringCopy(sParam1, "player_scene_t_park", 32);
			return 1;
			break;
		case 274:
			return func_545(273, sParam1);
			break;
		case 286:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "player_scene_t_tie", 32);
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 256:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 257:
			return func_545(256, sParam1);
			break;
		case 258:
			return func_545(256, sParam1);
			break;
		case 259:
			StringCopy(sParam1, "player_scene_t_bbfight", 32);
			return 1;
			break;
		case 260:
			return func_545(259, sParam1);
			break;
		case 261:
			return func_545(259, sParam1);
			break;
		case 263:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 237:
			StringCopy(sParam1, "player_scene_t_insult", 32);
			return 1;
			break;
		case 268:
			StringCopy(sParam1, "player_scene_ft_franklin1", 32);
			return 1;
			break;
	}
	return 0;
}

int func_549(int iParam0, char* sParam1, char* sParam2)//Position - 0x7EB3B
{
	StringCopy(sParam2, "", 64);
	switch (iParam0)
	{
		case 174:
			StringCopy(sParam1, "", 64);
			StringCopy(sParam2, "_2", 64);
			return 0;
			break;
		case 77:
			StringCopy(sParam1, "BED_EXIT_Cam", 64);
			return 1;
			break;
		case 78:
			StringCopy(sParam1, "BED_EXIT_Cam", 64);
			return 1;
			break;
		case 129:
			StringCopy(sParam1, "Switch_ON_CLUBCHAIR_CAM", 64);
			return 1;
			break;
		case 108:
			StringCopy(sParam1, "PARKBENCH_SMOKE_RANGER_EXIT_CAM", 64);
			return 1;
			break;
		case 109:
			return func_549(108, sParam1, sParam2);
			break;
		case 115:
			StringCopy(sParam1, "Cafe_Exit_CAM", 64);
			return 1;
			break;
		case 116:
			return func_549(115, sParam1, sParam2);
			break;
		case 117:
			return func_549(115, sParam1, sParam2);
			break;
		case 97:
			return func_549(115, sParam1, sParam2);
			break;
		case 162:
			return func_549(115, sParam1, sParam2);
			break;
		case 86:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 87:
			StringCopy(sParam1, "SunLounger_GetUp_CAM", 64);
			return 1;
			break;
		case 88:
			return func_549(87, sParam1, sParam2);
			break;
		case 184:
			return func_549(87, sParam1, sParam2);
			break;
		case 185:
			return func_549(87, sParam1, sParam2);
			break;
		case 103:
			StringCopy(sParam1, "pier_lean_smoke_outro_CAM", 64);
			return 1;
			break;
		case 134:
			StringCopy(sParam1, "Drunk_Exit_CAM", 64);
			return 1;
			break;
		case 198:
			StringCopy(sParam1, "Garbage_Toss_CAM", 64);
			return 1;
			break;
		case 199:
			StringCopy(sParam1, "Garbage_Toss_CAM", 64);
			return 1;
			break;
		case 200:
			StringCopy(sParam1, "THROW_CUP_EXIT_CAM", 64);
			return 1;
			break;
		case 201:
			StringCopy(sParam1, "HIT_CUP_HAND_EXIT_CAM", 64);
			return 1;
			break;
		case 202:
			StringCopy(sParam1, "001942_02_GC_FRAS_IG_5_EXIT_CAM", 64);
			return 1;
			break;
		case 223:
			StringCopy(sParam1, "WipeHands_CAM", 64);
			return 1;
			break;
		case 224:
			StringCopy(sParam1, "WipeRight_CAM", 64);
			return 1;
			break;
		case 222:
			StringCopy(sParam1, "CheckShoe_CAM", 64);
			return 1;
			break;
		case 238:
			StringCopy(sParam1, "trev_leave_stripclub_outro_CAM", 64);
			return 1;
			break;
		case 296:
			StringCopy(sParam1, "BEAR_IN_FLOYDS_FACE_EXIT_CAM", 64);
			return 1;
			break;
		case 297:
			StringCopy(sParam1, "BEAR_FLOYDS_FACE_SMELL_EXIT_CAM", 64);
			return 1;
			break;
		case 221:
			StringCopy(sParam1, "switch_CAM", 64);
			return 1;
			break;
		case 255:
			StringCopy(sParam1, "TRVS_IG_11_EXIT_CAM", 64);
			return 1;
			break;
		case 245:
			StringCopy(sParam1, "TREV_SMOKING_METH_EXIT_CAM", 64);
			return 1;
			break;
		case 40:
			return func_549(245, sParam1, sParam2);
			break;
		case 263:
			StringCopy(sParam1, "TREV_SCARES_TRAMP_EXIT_CAM", 64);
			return 1;
			break;
		case 289:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 290:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 254:
			StringCopy(sParam1, "trev_exit_lingerie_shop_outro_CAM", 64);
			return 1;
			break;
		case 285:
			StringCopy(sParam1, "THROW_EXIT_CAM", 64);
			return 1;
			break;
		case 259:
			StringCopy(sParam1, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_CAM", 64);
			return 1;
			break;
		case 286:
			StringCopy(sParam1, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_CAM", 64);
			return 1;
			break;
		case 287:
			StringCopy(sParam1, "TAI_CHI_CAM", 64);
			return 1;
			break;
		case 288:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 121:
			StringCopy(sParam1, "EXIT_Cam", 64);
			return 1;
			break;
		case 122:
			StringCopy(sParam1, "ARGUE_WITH_AMANDA_EXIT_CAM", 64);
			return 1;
			break;
		case 196:
			StringCopy(sParam1, "Tanisha_Argue_CAM", 64);
			return 1;
			break;
		case 197:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 218:
			StringCopy(sParam1, "GANG_TAUNT_EXIT_CAM", 64);
			return 1;
			break;
		case 219:
			StringCopy(sParam1, "GANG_TAUNT_WITH_LAMAR_EXIT_CAM", 64);
			return 1;
			break;
		case 220:
			StringCopy(sParam1, "FRAS_IG_6_P5_EXIT_CAM", 64);
			return 1;
			break;
		case 225:
			StringCopy(sParam1, "FRAS_IG_10_P3_EXIT_CAM", 64);
			return 1;
			break;
		case 232:
			StringCopy(sParam1, "Franklin_call_Michael_EXIT_CAM", 64);
			return 1;
			break;
		case 233:
			StringCopy(sParam1, "Franklin_call_Michael_EXIT_CAM", 64);
			return 1;
			break;
		case 193:
			StringCopy(sParam1, "exit_dispensary_outro_CAM", 64);
			return 1;
			break;
		case 234:
			StringCopy(sParam1, "TREV_ON_TOILET_EXIT_CAM", 64);
			return 1;
			break;
		case 316:
			StringCopy(sParam1, "TREV_JERKING_OFF_EXIT_CAM", 64);
			return 1;
			break;
		case 192:
			StringCopy(sParam1, "002110_04_MAGD_3_WEED_EXCHANGE_CAM", 64);
			return 1;
			break;
		case 153:
			StringCopy(sParam1, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT_CAM", 64);
			return 1;
			break;
		case 154:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 161:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 164:
			StringCopy(sParam1, "001404_01_MICS3_16_READS_SCRIPT_EXIT_CAM", 64);
			return 1;
			break;
		case 159:
			StringCopy(sParam1, "001406_01_MICS3_7_EXITS_BARBER_EXIT_CAM", 64);
			return 1;
			break;
		case 160:
			StringCopy(sParam1, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT_CAM", 64);
			return 1;
			break;
		case 94:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 262:
			StringCopy(sParam1, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_CAM", 64);
			return 1;
			break;
		case 248:
			StringCopy(sParam1, "001220_03_GC_TRVS_IG_7_EXIT_CAM", 64);
			return 1;
			break;
		case 249:
			StringCopy(sParam1, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_CAM", 64);
			return 1;
			break;
		case 11:
			StringCopy(sParam1, "002113_02_FRAS_15_STRIPCLUB_EXIT_CAM", 64);
			return 1;
			break;
		case 298:
			StringCopy(sParam1, "pineapple_exit_cam", 64);
			return 1;
			break;
		case 310:
			StringCopy(sParam1, "001433_01_TRVS_26_DIGGING_EXIT_CAM", 64);
			return 1;
			break;
		case 247:
			StringCopy(sParam1, "TREV_ANNOYS_SUNBATHERS_EXIT_CAM", 64);
			return 1;
			break;
		case 246:
			StringCopy(sParam1, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_CAM", 64);
			return 1;
			break;
		case 98:
			StringCopy(sParam1, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_CAM", 64);
			return 1;
			break;
		case 150:
			StringCopy(sParam1, "RONEX_IG5_P2_CAM", 64);
			return 1;
			break;
		case 170:
			StringCopy(sParam1, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_CAM", 64);
			return 1;
			break;
		case 171:
			StringCopy(sParam1, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_CAM", 64);
			return 1;
			break;
		case 172:
			StringCopy(sParam1, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_CAM", 64);
			return 1;
			break;
		case 125:
			StringCopy(sParam1, "Im_A_Married_Man_CAM", 64);
			return 1;
			break;
		case 157:
			StringCopy(sParam1, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_CAM", 64);
			return 1;
			break;
		case 165:
			StringCopy(sParam1, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_CAM", 64);
			return 1;
			break;
		case 158:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 166:
			StringCopy(sParam1, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_CAM", 64);
			return 1;
			break;
		case 167:
			StringCopy(sParam1, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_CAM", 64);
			return 1;
			break;
		case 169:
			StringCopy(sParam1, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 155:
			StringCopy(sParam1, "001833_01_MICS3_18_AMA_TENNIS_EXIT_CAM", 64);
			return 1;
			break;
		case 156:
			StringCopy(sParam1, "AROUND_THE_TABLE_SELFISH_CAM", 64);
			return 1;
			break;
		case 204:
			return func_549(205, sParam1, sParam2);
			break;
		case 205:
			StringCopy(sParam1, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT_CAM", 64);
			return 1;
			break;
		case 203:
			return func_549(205, sParam1, sParam2);
			break;
		case 206:
			return func_549(205, sParam1, sParam2);
			break;
		case 207:
			return func_549(205, sParam1, sParam2);
			break;
		case 291:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 264:
			StringCopy(sParam1, "002002_01_TRVS_14_DUMPSTER_EXIT_CAM", 64);
			return 1;
			break;
		case 186:
			StringCopy(sParam1, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 191:
			StringCopy(sParam1, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT_CAM", 64);
			return 1;
			break;
		case 188:
			StringCopy(sParam1, "001922_01_FRAS_V2_3_SNACKING_EXIT_CAM", 64);
			StringCopy(sParam2, "_4", 64);
			return 1;
			break;
		case 189:
			StringCopy(sParam1, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 190:
			StringCopy(sParam1, "001947_01_GC_FRAS_V2_IG_6_EXIT_CAM", 64);
			StringCopy(sParam2, "_4", 64);
			return 1;
			break;
		case 278:
			StringCopy(sParam1, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT_CAM", 64);
			return 1;
			break;
		case 311:
			StringCopy(sParam1, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT_CAM", 64);
			return 1;
			break;
		case 215:
			StringCopy(sParam1, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_CAM", 64);
			return 1;
			break;
		case 214:
			StringCopy(sParam1, "001946_01_GC_FRAS_V2_IG_5_EXIT_CAM", 64);
			return 1;
			break;
		case 212:
			return func_549(214, sParam1, sParam2);
			break;
		case 163:
			StringCopy(sParam1, "001520_02_MICS3_14_GETS_READY_EXIT_CAM", 64);
			return 1;
			break;
		case 151:
			StringCopy(sParam1, "001510_02_GC_MICS3_IG_1_EXIT_CAM", 64);
			return 1;
			break;
		case 82:
			StringCopy(sParam1, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 83:
			StringCopy(sParam1, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT_CAM", 64);
			return 1;
			break;
		case 85:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 84:
			StringCopy(sParam1, "M_GetOut_countryside_CAM", 64);
			return 1;
			break;
		case 124:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 187:
			StringCopy(sParam1, "001914_01_FRAS_V2_2_ON_CELL_EXIT_CAM", 64);
			StringCopy(sParam2, "_3", 64);
			return 1;
			break;
		case 168:
			StringCopy(sParam1, "001520_02_MICS3_14_TV_W_KIDS_EXIT_CAM", 64);
			return 1;
			break;
		case 173:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 152:
			StringCopy(sParam1, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_CAM", 64);
			return 1;
			break;
		case 292:
			StringCopy(sParam1, "Bed_GetUp_1_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 293:
			StringCopy(sParam1, "Bed_GetUp_2_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 294:
			return func_549(293, sParam1, sParam2);
			break;
		case 295:
			return func_549(292, sParam1, sParam2);
			break;
		case 299:
			StringCopy(sParam1, "Console_Wasnt_Fun_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 300:
			return func_549(303, sParam1, sParam2);
			break;
		case 301:
			return func_549(303, sParam1, sParam2);
			break;
		case 302:
			return func_549(303, sParam1, sParam2);
			break;
		case 303:
			StringCopy(sParam1, "Console_Get_Along_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 235:
			StringCopy(sParam1, "001443_01_TRVS_28_EXIT_CAM", 64);
			return 1;
			break;
		case 236:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 237:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 239:
			StringCopy(sParam1, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_CAM", 64);
			return 1;
			break;
		case 273:
			StringCopy(sParam1, "TREV_FOUNTAIN_PUKE_EXIT_CAM", 64);
			return 1;
			break;
		case 274:
			return func_549(273, sParam1, sParam2);
			break;
		case 315:
			StringCopy(sParam1, "TREV_SINK_EXIT_CAM", 64);
			return 1;
			break;
		case 250:
			StringCopy(sParam1, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT_CAM", 64);
			return 1;
			break;
		case 251:
			return func_549(250, sParam1, sParam2);
			break;
		case 252:
			return func_549(250, sParam1, sParam2);
			break;
		case 253:
			return func_549(250, sParam1, sParam2);
			break;
		case 175:
			StringCopy(sParam1, "Sleep_GetUp_RubEyes_CAM", 64);
			StringCopy(sParam2, "_2", 64);
			return 1;
			break;
		case 176:
			return func_549(175, sParam1, sParam2);
			break;
		case 177:
			StringCopy(sParam1, "002333_01_FRAS_V2_10_NAPPING_EXIT_CAM", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 178:
			StringCopy(sParam1, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT_CAM", 64);
			StringCopy(sParam2, "", 64);
			return 1;
			break;
		case 179:
			StringCopy(sParam1, "Bed_Reading_GetUp_CAM", 64);
			return 1;
			break;
		case 180:
			return func_549(179, sParam1, sParam2);
			break;
		case 181:
			StringCopy(sParam1, "PressUps_OUT_CAM", 64);
			return 1;
			break;
		case 182:
			return func_549(181, sParam1, sParam2);
			break;
		case 183:
			return func_549(181, sParam1, sParam2);
			break;
		case 89:
			StringCopy(sParam1, "SLEEP_IN_CAR_CAM", 64);
			return 1;
			break;
		case 90:
			return func_549(89, sParam1, sParam2);
			break;
		case 127:
			StringCopy(sParam1, "SLEEP_IN_CAR_PREMIER_CAM", 64);
			return 1;
			break;
		case 91:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 92:
			return func_549(91, sParam1, sParam2);
			break;
		case 93:
			return func_549(91, sParam1, sParam2);
			break;
		case 104:
			return func_549(91, sParam1, sParam2);
			break;
		case 81:
			return func_549(91, sParam1, sParam2);
			break;
		case 95:
			StringCopy(sParam1, "MIC_EXIT_RESTAURANT_EXIT_CAM", 64);
			return 1;
			break;
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH_01_CAM", 64);
			return 1;
			break;
			break;
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH_02_CAM", 64);
			return 1;
			break;
			break;
		case 114:
			StringCopy(sParam1, "MICS1_IG_11_EXIT_CAM", 64);
			return 1;
			break;
		case 112:
			StringCopy(sParam1, "SITTING_ON_CAR_BONNET_EXIT_CAM", 64);
			return 1;
			break;
		case 113:
			return func_549(112, sParam1, sParam2);
			break;
		case 123:
			return func_549(112, sParam1, sParam2);
			break;
		case 41:
			return func_549(135, sParam1, sParam2);
			break;
		case 135:
			StringCopy(sParam1, "SITTING_ON_CAR_PREMIERE_EXIT_CAM", 64);
			return 1;
			break;
		case 136:
			return func_549(135, sParam1, sParam2);
			break;
		case 137:
			return func_549(135, sParam1, sParam2);
			break;
		case 138:
			return func_549(135, sParam1, sParam2);
			break;
		case 139:
			return func_549(135, sParam1, sParam2);
			break;
		case 271:
			StringCopy(sParam1, "TREV_SLOUCHED_GET_UP_EXIT_CAM", 64);
			return 1;
			break;
		case 211:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 213:
			return func_549(211, sParam1, sParam2);
			break;
		case 216:
			return func_549(211, sParam1, sParam2);
			break;
		case 217:
			return func_549(211, sParam1, sParam2);
			break;
		case 243:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 244:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
		case 280:
			StringCopy(sParam1, "EXIT_CAM", 64);
			return 1;
			break;
	}
	StringCopy(sParam1, "null", 64);
	return 0;
}

int func_550(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7FAAF
{
	struct<3> Var0;
	float fVar1;
	char[] cVar2[8];
	struct<3> Var3;
	float fVar4;
	char[] cVar5[8];
	*uParam3 = 40f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 1:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 2:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 3:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 4:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 5:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 6:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 7:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 11:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 8:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 9:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 10:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 13:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 14:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 15:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 12:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 16:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 17:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 18:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 19:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 20:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 22:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 74:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 23:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 24:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 67:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 25:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 26:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 27:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 28:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 58:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 59:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 60:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 38:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 39:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 40:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 41:
			*uParam1 = { 1393.829f, 3721.21f, 59.6646f };
			*uParam2 = { -77.4667f, -3.4089f, -29.2756f };
			*uParam3 = 45f;
			return 1;
			break;
		case 42:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 43:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 44:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 124:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 66:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 61:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 62:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 63:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 69:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 64:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 65:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 75:
			*uParam1 = { 1421.37f, -1909.6f, 70f };
			*uParam2 = { -89.499535f, -1E-06f, 166.04057f };
			*uParam3 = 50f;
			return 1;
			break;
		case 76:
			*uParam1 = { Vector(148.1897f, -2306.5835f, 1375.1461f) + Vector(-42.5f, 0f, 0f) };
			*uParam2 = { -78.9021f, 0f, 25.2484f };
			return 1;
			break;
		case 77:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 78:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 79:
			*uParam1 = { -806.1221f, 173.3714f, 73.0859f };
			*uParam2 = { -1.4712f, 0f, -95.2503f };
			*uParam3 = 50f;
			return 1;
			break;
		case 80:
			*uParam1 = { -777.6068f, 187.453f, 74.1732f };
			*uParam2 = { -10.8798f, 0f, -156.0149f };
			return 1;
			break;
		case 81:
			*uParam1 = { -1313.857f, 117.7842f, 83.0089f };
			*uParam2 = { -81.4288f, -0.0005f, -4.4763f };
			*uParam3 = 45f;
			return 1;
			break;
		case 82:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		case 83:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 84:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 85:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 86:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 87:
			*uParam1 = { -779.5107f, 184.6536f, 97.9522f };
			*uParam2 = { -83.1792f, -0.0008f, 33.1776f };
			*uParam3 = 45f;
			return 1;
			break;
		case 88:
			*uParam1 = { -1350.3981f, 355.7088f, 89.1898f };
			*uParam2 = { -83.1793f, -0.0008f, 94.8576f };
			*uParam3 = 45f;
			return 1;
			break;
		case 184:
			*uParam1 = { -11.4584f, 509.3831f, 199.7681f };
			*uParam2 = { -83.1793f, -0.0008f, 10.655f };
			*uParam3 = 45f;
			return 1;
			break;
		case 185:
			*uParam1 = { 21.0263f, 518.8938f, 195.3684f };
			*uParam2 = { -83.1792f, -0.0008f, 10.6496f };
			*uParam3 = 45f;
			return 1;
			break;
		case 186:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 187:
			*uParam1 = { 25.1207f, 538.1634f, 176.3949f };
			*uParam2 = { -9.1084f, 0f, 136.7439f };
			*uParam3 = 60f;
			return 1;
			break;
		case 188:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		case 189:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 190:
			*uParam1 = { 28.0599f, 519.777f, 170.9287f };
			*uParam2 = { 1.0712f, 0f, 66.1406f };
			*uParam3 = 62.3773f;
			return 1;
			break;
		case 191:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 94:
			*uParam1 = { -115.9504f, 359.3368f, 138.8368f };
			*uParam2 = { -84.145f, -0.0028f, 30.813f };
			*uParam3 = 45f;
			return 1;
			break;
		case 95:
			*uParam1 = { 388.4338f, 181.3034f, 128.5381f };
			*uParam2 = { -82.1573f, 0.0028f, -133.5252f };
			*uParam3 = 45f;
			return 1;
			break;
		case 96:
			*uParam1 = { -1368.7029f, 50.4611f, 55.6791f };
			*uParam2 = { -25.2992f, 0f, 39.0928f };
			return 1;
			break;
		case 97:
			*uParam1 = { -1412.4731f, -197.0279f, 73.1327f };
			*uParam2 = { -85.8754f, 0.0301f, 103.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		case 89:
			*uParam1 = { -828.6376f, 153.5095f, 94.4233f };
			*uParam2 = { -82.4779f, -87.738f, -38.5885f };
			*uParam3 = 45f;
			return 1;
			break;
		case 90:
			*uParam1 = { -886.2003f, 130.811f, 84.4115f };
			*uParam2 = { -82.1702f, -15.3164f, 27.7905f };
			*uParam3 = 45f;
			return 1;
			break;
		case 91:
			*uParam1 = { -1208.4165f, -952.6558f, 28.0064f };
			*uParam2 = { -81.4289f, -0.0005f, 145.6032f };
			*uParam3 = 45f;
			return 1;
			break;
		case 92:
			*uParam1 = { -848.757f, 852.361f, 228.9125f };
			*uParam2 = { -81.4289f, -0.0005f, -13.8233f };
			*uParam3 = 45f;
			return 1;
			break;
		case 93:
			*uParam1 = { -1267.4175f, -707.9901f, 48.813f };
			*uParam2 = { -81.4294f, -0.001f, 157.5229f };
			*uParam3 = 45f;
			return 1;
			break;
		case 108:
			*uParam1 = { 252.454f, 1118.0386f, 245.2481f };
			*uParam2 = { -77.0357f, 0.0002f, -101.5461f };
			*uParam3 = 45f;
			return 1;
			break;
		case 109:
			*uParam1 = { -1817.594f, -685.8846f, 35.5217f };
			*uParam2 = { -77.0356f, 0.0002f, 3.4539f };
			*uParam3 = 45f;
			return 1;
			break;
		case 112:
			*uParam1 = { 815.9318f, 1275.7186f, 387.0281f };
			*uParam2 = { -76.9465f, 0.0003f, 175.4883f };
			*uParam3 = 45f;
			return 1;
			break;
		case 113:
			*uParam1 = { -1664.9277f, 493.0317f, 155.4287f };
			*uParam2 = { -76.9465f, 0.0003f, 149.7993f };
			*uParam3 = 45f;
			return 1;
			break;
		case 135:
			*uParam1 = { 661.924f, 3503.3372f, 60.5464f };
			*uParam2 = { -76.9465f, -0.0009f, -81.4523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 136:
			*uParam1 = { 2409.7986f, 4293.222f, 61.6806f };
			*uParam2 = { -76.568f, -3.7101f, 56.4411f };
			*uParam3 = 45f;
			return 1;
			break;
		case 137:
			*uParam1 = { 100.7403f, 3369.28f, 61.103f };
			*uParam2 = { -77.9654f, 2.7972f, -172.4415f };
			*uParam3 = 45f;
			return 1;
			break;
		case 138:
			*uParam1 = { 2441.2163f, 3795.6873f, 66.4953f };
			*uParam2 = { -75.6905f, -1.8311f, -34.0872f };
			*uParam3 = 45f;
			return 1;
			break;
		case 139:
			*uParam1 = { 1779.8412f, 4588.3213f, 64.2296f };
			*uParam2 = { -77.2461f, -2.1153f, 134.3354f };
			*uParam3 = 45f;
			return 1;
			break;
		case 140:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 141:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 142:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 143:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 144:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 145:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 146:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 147:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 148:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 149:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 150:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 118:
			*uParam1 = { -1064.2815f, -1530.4437f, 4.9643f };
			*uParam2 = { -6.3151f, 0f, -11.6771f };
			return 1;
			break;
		case 119:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 120:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 114:
			*uParam1 = { 70.2718f, -1555.7793f, 54.57f };
			*uParam2 = { -79.8378f, 0.0014f, 146.7438f };
			*uParam3 = 45f;
			return 1;
			break;
		case 98:
			*uParam1 = { -611.2242f, -215.1656f, 69.3734f };
			*uParam2 = { -82.5325f, -23.1336f, 38.4436f };
			*uParam3 = 45f;
			return 1;
			break;
		case 99:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 100:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 101:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 102:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 103:
			*uParam1 = { -1733.7089f, -1127.2845f, 39.0047f };
			*uParam2 = { -83.9991f, 0.0016f, -37.0248f };
			*uParam3 = 45f;
			return 1;
			break;
		case 104:
			*uParam1 = { -1926.9205f, -575.551f, 37.5216f };
			*uParam2 = { -81.4289f, -0.0005f, 163.5237f };
			*uParam3 = 45f;
			return 1;
			break;
		case 121:
			*uParam1 = { -832.9372f, -1357.8823f, 31.1094f };
			*uParam2 = { -82.6154f, 0.0027f, -121.9677f };
			*uParam3 = 45f;
			return 1;
			break;
		case 122:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 196:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 197:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 123:
			*uParam1 = { -2008.9288f, -494.5522f, 38.0431f };
			*uParam2 = { -74.6696f, 3.4735f, 101.1669f };
			*uParam3 = 45f;
			return 1;
			break;
		case 125:
			*uParam1 = { -1500.4567f, -682.8798f, 52.8456f };
			*uParam2 = { -82.2007f, -0.0021f, -20.62f };
			*uParam3 = 45f;
			return 1;
			break;
		case 115:
			*uParam1 = { -514.3963f, -19.7218f, 71.4872f };
			*uParam2 = { -85.8754f, 0.0302f, -142.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		case 116:
			*uParam1 = { -627.7501f, 245.722f, 107.7731f };
			*uParam2 = { -85.8754f, 0.0301f, 148.5493f };
			*uParam3 = 45f;
			return 1;
			break;
		case 117:
			*uParam1 = { -831.1096f, -350.8676f, 64.5357f };
			*uParam2 = { -85.8754f, 0.0301f, 73.7675f };
			*uParam3 = 45f;
			return 1;
			break;
		case 105:
			*uParam1 = { -466.357f, -1586.5269f, 42.1308f };
			*uParam2 = { -24.1059f, 0f, -157.2387f };
			return 1;
			break;
		case 106:
			*uParam1 = { -1738.6078f, -624.3743f, 12.7827f };
			*uParam2 = { -22.3162f, 0f, 105.6959f };
			return 1;
			break;
		case 107:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 110:
			*uParam1 = { -95.4359f, -413.3546f, 61.9024f };
			*uParam2 = { -84.9814f, -0.0003f, 154.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 111:
			*uParam1 = { -1290.9719f, -697.7042f, 50.5674f };
			*uParam2 = { -84.9813f, -0.0003f, 54.7523f };
			*uParam3 = 45f;
			return 1;
			break;
		case 126:
			*uParam1 = { 1969.9984f, 3806.8472f, 35.494f };
			*uParam2 = { -14.7978f, 0f, -11.4244f };
			return 1;
			break;
		case 127:
			*uParam1 = { 672.4669f, 3502.7385f, 58.9099f };
			*uParam2 = { -83.2715f, 4.5479f, 61.6184f };
			*uParam3 = 45f;
			return 1;
			break;
		case 128:
			*uParam1 = { 1975.9104f, 3822.4126f, 34.0088f };
			*uParam2 = { -10.9024f, 0f, 154.0872f };
			*uParam3 = 50f;
			return 1;
			break;
		case 129:
			*uParam1 = { 1983.7357f, 3822.7627f, 57.6395f };
			*uParam2 = { -83.4323f, -0.0013f, 121.7344f };
			*uParam3 = 45f;
			return 1;
			break;
		case 130:
			*uParam1 = { 1978.2292f, 3820.7212f, 34.0738f };
			*uParam2 = { -8.2785f, 0f, 103.9586f };
			*uParam3 = 50f;
			return 1;
			break;
		case 131:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 132:
			*uParam1 = { 1973.9507f, 3819.0784f, 33.7825f };
			*uParam2 = { -5.3804f, 0f, -17.5258f };
			*uParam3 = 50f;
			return 1;
			break;
		case 133:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 134:
			*uParam1 = { 1994.9846f, 3057.2192f, 49.8043f };
			*uParam2 = { -49.0498f, 0.0012f, 99.8958f };
			*uParam3 = 41f;
			return 1;
			break;
		case 151:
			*uParam1 = { -113.8308f, 361.9919f, 138.5542f };
			*uParam2 = { -76.7137f, -0.0014f, 41.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		case 152:
			*uParam1 = { -1349.1143f, 351.6396f, 100.0071f };
			*uParam2 = { -80.7411f, -0.0078f, 34.6522f };
			*uParam3 = 50f;
			return 1;
			break;
		case 153:
			*uParam1 = { -715.1777f, 255.9193f, 105.5536f };
			*uParam2 = { -84.0507f, -0.0034f, 89.2749f };
			*uParam3 = 45f;
			return 1;
			break;
		case 154:
			*uParam1 = { -715.3492f, 256.7212f, 105.5855f };
			*uParam2 = { -82.4496f, -0.003003f, 99.94753f };
			*uParam3 = 45f;
			return 1;
			break;
		case 155:
			*uParam1 = { -774.8297f, 164.9666f, 104.4211f };
			*uParam2 = { -81.8771f, -0.0817f, 178.2323f };
			*uParam3 = 45f;
			return 1;
			break;
		case 156:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 157:
			*uParam1 = { -720.5396f, 253.1793f, 105.7766f };
			*uParam2 = { -83.2751f, 3.4532f, -42.6086f };
			*uParam3 = 45f;
			return 1;
			break;
		case 158:
			*uParam1 = { 533.3047f, 120.3593f, 122.7126f };
			*uParam2 = { -83.8911f, -0.0019f, -129.3945f };
			*uParam3 = 45f;
			return 1;
			break;
		case 159:
			*uParam1 = { -827.4469f, -191.4707f, 63.4392f };
			*uParam2 = { -80.7034f, 0.0005f, -51.0296f };
			*uParam3 = 44.888f;
			return 1;
			break;
		case 160:
			*uParam1 = { -718.5201f, -159.4091f, 62.5628f };
			*uParam2 = { -79.3643f, 0.0002f, -33.1272f };
			*uParam3 = 45f;
			return 1;
			break;
		case 161:
			*uParam1 = { -786.2485f, 187.686f, 97.9448f };
			*uParam2 = { -80.7232f, 0.0002f, 104.9069f };
			*uParam3 = 45f;
			return 1;
			break;
		case 162:
			*uParam1 = { -1370.7305f, -209.3841f, 70.322f };
			*uParam2 = { -85.8754f, 0.0301f, -94.4507f };
			*uParam3 = 45f;
			return 1;
			break;
		case 163:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 164:
			*uParam1 = { -778.8658f, 185.7413f, 98.1194f };
			*uParam2 = { -84.2688f, 0.0243f, 42.5521f };
			*uParam3 = 45f;
			return 1;
			break;
		case 165:
			*uParam1 = { -1133.2946f, -455.1246f, (95.9402f - 30f) };
			*uParam2 = { -85.6256f, 0f, 28.0351f };
			*uParam3 = 45f;
			return 1;
			break;
		case 166:
			*uParam1 = { -1046.6012f, -478.8773f, 62.6878f };
			*uParam2 = { -77.3255f, -6.297f, 139.6857f };
			*uParam3 = 45f;
			return 1;
			break;
		case 167:
			*uParam1 = { -1184.2911f, -505.4514f, 75.0146f };
			*uParam2 = { -82.6035f, 0.0014f, -31.0152f };
			*uParam3 = 45f;
			return 1;
			break;
		case 168:
			*uParam1 = { -774.6182f, 189.3469f, 73.1101f };
			*uParam2 = { 4.5397f, 0f, 113.3996f };
			*uParam3 = 43f;
			return 1;
			break;
		case 169:
			*uParam1 = { -837.0487f, 180.2459f, 70.842f };
			*uParam2 = { 9.3514f, -0.0001f, -106.3141f };
			*uParam3 = 50f;
			return 1;
			break;
		case 170:
			*uParam1 = { -657.0717f, -271.9325f, 61.5797f };
			*uParam2 = { -78.4277f, 9.0072f, -174.2934f };
			*uParam3 = 45f;
			return 1;
			break;
		case 171:
			*uParam1 = { -252.0919f, -81.0714f, 74.7886f };
			*uParam2 = { -86.5763f, 49.0804f, -90.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		case 173:
			*uParam1 = { -831.4534f, 178.1406f, 96.6498f };
			*uParam2 = { -73.1145f, -0.0027f, -93.0056f };
			*uParam3 = 45f;
			return 1;
			break;
		case 172:
			*uParam1 = { -250.7753f, -80.1775f, 74.8044f };
			*uParam2 = { -85.8438f, 27.439f, -107.783f };
			*uParam3 = 45f;
			return 1;
			break;
		case 174:
			*uParam1 = { -803.7232f, 181.6804f, 73.2304f };
			*uParam2 = { -5.3638f, 0f, -22.9153f };
			*uParam3 = 50f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = { -23.8601f, -1456.8895f, 30.8716f };
			*uParam2 = { 2.4688f, 0f, -32.828f };
			*uParam3 = 37.6481f;
			return 1;
			break;
		case 176:
			*uParam1 = { -7.0679f, 497.5869f, 175.1577f };
			*uParam2 = { -8.6355f, 0f, -18.0968f };
			*uParam3 = 69.428f;
			return 1;
			break;
		case 177:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 178:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 179:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 180:
			*uParam1 = { 41.506f, 518.56f, 172.883f };
			*uParam2 = { -3.496f, 0f, 80.268f };
			*uParam3 = 45f;
			return 1;
			break;
		case 181:
			*uParam1 = { -10.298f, -1454.639f, 30.922f };
			*uParam2 = { 3.353f, 0f, 15.658f };
			*uParam3 = 50f;
			return 1;
			break;
		case 182:
			*uParam1 = { -13.2465f, -1425.4192f, 31.1279f };
			*uParam2 = { -30.6822f, 0.6787f, 15.1437f };
			*uParam3 = 50f;
			return 1;
			break;
		case 183:
			*uParam1 = { 14.9547f, 525.4391f, 170.6328f };
			*uParam2 = { -30.6819f, 0.6789f, -170.1687f };
			*uParam3 = 50f;
			return 1;
			break;
		case 193:
			*uParam1 = { -1175.9375f, -1575.7007f, 30.1692f };
			*uParam2 = { -84.0992f, -0.0012f, -19.5058f };
			*uParam3 = 45f;
			return 1;
			break;
		case 192:
			*uParam1 = { -1175.7921f, -1576.0494f, 30.8335f };
			*uParam2 = { -80.2938f, 0.0008f, -26.9162f };
			*uParam3 = 49.9377f;
			return 1;
			break;
		case 194:
			*uParam1 = { -1151.1907f, -1365.4847f, 9.0273f };
			*uParam2 = { -14.4946f, 0f, 176.3572f };
			return 1;
			break;
		case 195:
			*uParam1 = { -1171.8738f, -1425.2235f, 9.2445f };
			*uParam2 = { -17.1697f, 0f, -111.3917f };
			return 1;
			break;
		case 198:
			*uParam1 = { -14.2911f, -1443.628f, 56.3341f };
			*uParam2 = { -81.6191f, 0.0002f, -175.2965f };
			*uParam3 = 45f;
			return 1;
			break;
		case 199:
			*uParam1 = { 18.2618f, 537.6057f, 201.7112f };
			*uParam2 = { -81.6191f, 0.0002f, 31.4594f };
			*uParam3 = 45f;
			return 1;
			break;
		case 200:
			*uParam1 = { -0.9251f, -1606.8064f, 54.3956f };
			*uParam2 = { -81.9792f, -0.0059f, -89.5973f };
			*uParam3 = 45f;
			return 1;
			break;
		case 201:
			*uParam1 = { 1.8601f, -1609.9586f, 55.0489f };
			*uParam2 = { -81.9213f, 0.0006f, -30.8316f };
			*uParam3 = 45f;
			return 1;
			break;
		case 202:
			*uParam1 = { -1246.266f, -1614.2175f, 30.1603f };
			*uParam2 = { -85.4036f, -0.0003f, -85.7066f };
			*uParam3 = 45f;
			return 1;
			break;
		case 203:
			*uParam1 = { -13.0353f, -1450.7229f, 55.6841f };
			*uParam2 = { -83.5727f, -0.0019f, 129.2043f };
			*uParam3 = 45f;
			return 1;
			break;
		case 204:
			*uParam1 = { -11.3015f, -1423.0619f, 55.8104f };
			*uParam2 = { -83.5727f, 0.0005f, 102.8099f };
			*uParam3 = 45f;
			return 1;
			break;
		case 206:
			*uParam1 = { 154.6263f, 769.2573f, 234.8318f };
			*uParam2 = { -83.5727f, -0.0019f, -173.7957f };
			*uParam3 = 45f;
			return 1;
			break;
		case 207:
			*uParam1 = { -264.6808f, 416.6765f, 134.8675f };
			*uParam2 = { -83.5727f, -0.0019f, 126.6163f };
			*uParam3 = 45f;
			return 1;
			break;
		case 205:
			*uParam1 = { 13.4706f, 520.5046f, 195.3417f };
			*uParam2 = { -83.5727f, 0.0005f, -15.8635f };
			*uParam3 = 45f;
			return 1;
			break;
		case 208:
			*uParam1 = { -452.4845f, -1591.8811f, 43.1702f };
			*uParam2 = { -15.7272f, 0f, 116.1361f };
			return 1;
			break;
		case 209:
			*uParam1 = { 41.4086f, -1491.7068f, 94.2915f };
			*uParam2 = { -83.0867f, 0f, -132.4861f };
			return 1;
			break;
		case 210:
			*uParam1 = { 213.7408f, 224.4167f, 107.2885f };
			*uParam2 = { -17.6158f, 0f, 124.3368f };
			return 1;
			break;
		case 211:
			*uParam1 = { -26.0418f, -1435.7556f, 56.3367f };
			*uParam2 = { -85.6549f, 0.0007f, -100.97f };
			*uParam3 = 45f;
			return 1;
			break;
		case 212:
			*uParam1 = { -26.9523f, -1443.4591f, 56.3006f };
			*uParam2 = { -82.158f, 0.0001f, -120.4657f };
			*uParam3 = 45f;
			return 1;
			break;
		case 213:
			*uParam1 = { 13.481f, 547.7665f, 201.6628f };
			*uParam2 = { -85.4529f, 32.8556f, -165.2088f };
			*uParam3 = 45f;
			return 1;
			break;
		case 214:
			*uParam1 = { 9.7918f, 546.587f, 201.411f };
			*uParam2 = { -85.6569f, 7.19613f, 128.447f };
			*uParam3 = 45f;
			return 1;
			break;
		case 215:
			*uParam1 = { 5.4402f, 547.371f, 201.086f };
			*uParam2 = { -75.7499f, -5.6172f, -42.2747f };
			*uParam3 = 45f;
			return 1;
			break;
		case 216:
			*uParam1 = { -1150.7317f, 941.2178f, 224.4071f };
			*uParam2 = { -84.8486f, -22.4675f, 10.6362f };
			*uParam3 = 45f;
			return 1;
			break;
		case 217:
			*uParam1 = { -1690.1348f, -945.0534f, 33.3591f };
			*uParam2 = { -85.6549f, 0.0007f, -128.97f };
			*uParam3 = 45f;
			return 1;
			break;
		case 221:
			*uParam1 = { -527.845f, -32.3779f, 69.5368f };
			*uParam2 = { -77.7626f, 15.8623f, -13.8244f };
			*uParam3 = 45f;
			return 1;
			break;
		case 222:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 223:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 224:
			*uParam1 = { 504.4986f, -1318.4994f, 29.3536f };
			*uParam2 = { 5.2409f, 0f, 89.8084f };
			*uParam3 = 50f;
			return 1;
			break;
		case 226:
			*uParam1 = { 30.1511f, -1357.0276f, 54.6942f };
			*uParam2 = { -78.5097f, 0.001f, 21.588f };
			*uParam3 = 45f;
			return 1;
			break;
		case 227:
			*uParam1 = { -380.8515f, 226.4113f, 109.5036f };
			*uParam2 = { -78.5097f, 0.001f, -153.161f };
			*uParam3 = 45f;
			return 1;
			break;
		case 228:
			*uParam1 = { 135.3769f, -1305.2886f, 54.269f };
			*uParam2 = { -81.3478f, 0.0016f, 71.6158f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		case 229:
			*uParam1 = { 789.0312f, -738.351f, 52.6819f };
			*uParam2 = { -81.3478f, 0.0016f, -42.3726f };
			*uParam3 = 42.2656f;
			return 1;
			break;
		case 230:
			*uParam1 = { -296.2211f, -1326.732f, 56.6653f };
			*uParam2 = { -78.5097f, 0.001f, 177.9219f };
			*uParam3 = 45f;
			return 1;
			break;
		case 218:
			*uParam1 = { -6.8196f, -1411.324f, 55.2464f };
			*uParam2 = { -78.7542f, -0.0029f, 172.9781f };
			*uParam3 = 45f;
			return 1;
			break;
		case 219:
			*uParam1 = { -237.5357f, -1534.0734f, 57.4441f };
			*uParam2 = { -78.2577f, 0.0009f, 122.6248f };
			*uParam3 = 45f;
			return 1;
			break;
		case 220:
			*uParam1 = { -21.2522f, -1820.312f, 51.5856f };
			*uParam2 = { -76.786f, 0.0038f, -145.6433f };
			*uParam3 = 43.299f;
			return 1;
			break;
		case 225:
			*uParam1 = { 189.5486f, -1676.4065f, 54.9378f };
			*uParam2 = { -76.6137f, 0.0002f, -45.2699f };
			*uParam3 = 45f;
			return 1;
			break;
		case 231:
			*uParam2 = { -89.499535f, -1E-06f, (166.04057f - 180f) };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		case 232:
			*uParam1 = { -79.1742f, -1020.3333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		case 233:
			*uParam1 = { -79.1742f, -1020.3333f, 54.5996f };
			*uParam2 = { -86.8093f, -0.0114f, -28.8534f };
			*uParam3 = 45f;
			return 1;
			break;
		case 235:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 236:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 237:
			*uParam1 = { 133.4546f, -1306.8057f, 55.17f };
			*uParam2 = { -79.386f, -0.0059f, 29.3671f };
			*uParam3 = 45f;
			return 1;
			break;
		case 238:
			*uParam1 = { 135.0825f, -1306.1569f, 54.8922f };
			*uParam2 = { -83.3399f, 0.2592f, 40.162f };
			*uParam3 = 45f;
			return 1;
			break;
		case 239:
			*uParam1 = { -50.4324f, 348.2621f, 157.2838f };
			*uParam2 = { -83.7124f, 0.0772f, 28.1343f };
			*uParam3 = 45f;
			return 1;
			break;
		case 240:
			*uParam1 = { 1534.4061f, 3607.2744f, 36.6934f };
			*uParam2 = { -12.1833f, 0f, 9.7072f };
			return 1;
			break;
		case 241:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 242:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 273:
			*uParam1 = { -119.1385f, -444.0774f, 61.0046f };
			*uParam2 = { -85.9063f, 0.0045f, -35.758f };
			*uParam3 = 45f;
			return 1;
			break;
		case 274:
			*uParam1 = { -1857.7023f, 2072.0447f, 166.0882f };
			*uParam2 = { -85.9063f, 0.0045f, 126.242f };
			*uParam3 = 45f;
			return 1;
			break;
		case 245:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 250:
			*uParam1 = { 287.7224f, -3200.387f, 31.6541f };
			*uParam2 = { -83.4634f, -0.0001f, -168.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		case 251:
			*uParam1 = { -869.8748f, 66.6628f, 77.9598f };
			*uParam2 = { -83.4634f, -0.0001f, 62.087f };
			*uParam3 = 45f;
			return 1;
			break;
		case 252:
			*uParam1 = { -44.7279f, -1473.6636f, 57.8914f };
			*uParam2 = { -83.4634f, -0.0001f, 107.5896f };
			*uParam3 = 45f;
			return 1;
			break;
		case 253:
			*uParam1 = { 1874.677f, 2621.563f, 71.5578f };
			*uParam2 = { -83.4635f, -0.0001f, -120.0601f };
			*uParam3 = 45f;
			return 1;
			break;
		case 243:
			*uParam1 = { 437.0992f, -1462.1802f, 54.8615f };
			*uParam2 = { -83.9471f, 0.0018f, 96.0313f };
			*uParam3 = 45f;
			return 1;
			break;
		case 244:
			*uParam1 = { 442.4368f, -1461.1077f, 54.2539f };
			*uParam2 = { -72.1078f, -0.0029f, 104.5689f };
			*uParam3 = 45f;
			return 1;
			break;
		case 271:
			*uParam1 = { -1267.9402f, -1104.5046f, 32.918f };
			*uParam2 = { -80.9687f, 0f, -3.6111f };
			*uParam3 = 45f;
			return 1;
			break;
		case 272:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 246:
			*uParam1 = { -1201.4962f, -1571.586f, 29.7218f };
			*uParam2 = { -84.4445f, 0.0015f, -51.2858f };
			*uParam3 = 45f;
			return 1;
			break;
		case 247:
			*uParam1 = { -1322.5938f, -1669.3389f, 27.6893f };
			*uParam2 = { -81.6907f, 0.0005f, 60.2722f };
			*uParam3 = 45f;
			return 1;
			break;
		case 278:
			*uParam1 = { 638.9762f, -1002.2932f, 68.2444f };
			*uParam2 = { -82.3678f, -0.0043f, -59.3736f };
			*uParam3 = 45f;
			return 1;
			break;
		case 279:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 280:
			*uParam1 = { 2786.551f, -1451.6735f, 26.3083f };
			*uParam2 = { -81.3303f, -0.0028f, -117.8646f };
			*uParam3 = 45f;
			return 1;
			break;
		case 264:
			*uParam1 = { 492.7402f, -1337.7001f, 53.2989f };
			*uParam2 = { -74.0621f, -0.0069f, 128.6647f };
			*uParam3 = 45f;
			return 1;
			break;
		case 266:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 265:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 267:
			*uParam1 = { 2210.5369f, 4919.154f, 41.1959f };
			*uParam2 = { -3.5325f, 0f, 169.681f };
			return 1;
			break;
		case 268:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 269:
			*uParam1 = { 415.3352f, -800.8342f, 51.2722f };
			*uParam2 = { -17.2722f, 0f, -24.592f };
			return 1;
			break;
		case 270:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 255:
			*uParam1 = { 411.8938f, -1481.1056f, 55.0911f };
			*uParam2 = { -73.5286f, 0.0012f, 177.4479f };
			*uParam3 = 45f;
			return 1;
			break;
		case 248:
			*uParam1 = { 297.5302f, 179.229f, 129.4594f };
			*uParam2 = { -83.7434f, 0.0126f, 62.1929f };
			*uParam3 = 45f;
			return 1;
			break;
		case 249:
			*uParam1 = { 294.6928f, 195.4445f, 129.4204f };
			*uParam2 = { -77.0175f, -0.0008f, 155.6596f };
			*uParam3 = 45f;
			return 1;
			break;
		case 281:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 50f;
			return 0;
			break;
		case 282:
			*uParam1 = { Vector(22.1187f, 2873.0781f, -930.9908f) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 20f), 0f, 0f) };
			*uParam2 = { -89.499535f, -1E-06f, 1.040573f };
			*uParam3 = 50f;
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			return 1;
			break;
		case 283:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 284:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 275:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 276:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
		case 277:
			*uParam1 = { 1076.9883f, 2685.1528f, (37.973f + 30f) };
			*uParam2 = { -89.4995f, 0.0796f, -93.9607f };
			*uParam3 = 55f;
			return 1;
			break;
		case 254:
			*uParam1 = { 150.8545f, -214.1522f, 79.4128f };
			*uParam2 = { -78.7899f, -0.0026f, -136.2629f };
			*uParam3 = 45f;
			return 1;
			break;
		case 285:
			*uParam1 = { 43.4637f, -2055.6338f, 47.3524f };
			*uParam2 = { -80.4436f, 0f, -109.8209f };
			*uParam3 = 45f;
			return 1;
			break;
		case 256:
			*uParam1 = { -1241.5002f, -1099.6058f, 10.4958f };
			*uParam2 = { -8.2431f, 0f, 146.4822f };
			return 1;
			break;
		case 257:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 258:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 259:
			*uParam1 = { -725.9904f, -1305.7162f, 30.7195f };
			*uParam2 = { -86.3376f, 0.0189f, -169.3006f };
			*uParam3 = 45f;
			return 1;
			break;
		case 260:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 261:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 286:
			*uParam1 = { -1275.4763f, -1194.2114f, 38.3756f };
			*uParam2 = { -84.3481f, -0.0001f, -125.4683f };
			*uParam3 = 45f;
			return 1;
			break;
		case 287:
			*uParam1 = { -876.4864f, -849.5565f, 45.7044f };
			*uParam2 = { -65.634f, -0.0013f, 106.1902f };
			*uParam3 = 45f;
			return 1;
			break;
		case 288:
			*uParam1 = { -1708.9696f, -1055.762f, 44.8272f };
			*uParam2 = { -76.5326f, -0.0048f, -144.2845f };
			*uParam3 = 45f;
			return 1;
			break;
		case 262:
			*uParam1 = { -1153.2279f, -1526.3785f, 30.1087f };
			*uParam2 = { -87.0602f, 0.0019f, -17.9875f };
			*uParam3 = 45f;
			return 1;
			break;
		case 263:
			*uParam1 = { -562.2963f, -1256.627f, 38.9716f };
			*uParam2 = { -80.9113f, -0.0008f, 143.1449f };
			*uParam3 = 45f;
			return 1;
			break;
		case 289:
			*uParam1 = { 442.2141f, -229.2575f, 81.2032f };
			*uParam2 = { -83.8876f, -0.0064f, 45.2185f };
			*uParam3 = 45f;
			return 1;
			break;
		case 290:
			*uParam1 = { 153.3026f, -1308.075f, 31.1902f };
			*uParam2 = { 2.0694f, 0f, 68.304f };
			*uParam3 = 45f;
			return 1;
			break;
		case 291:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 292:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 293:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 294:
			return func_550(293, uParam1, uParam2, uParam3);
			break;
		case 295:
			return func_550(292, uParam1, uParam2, uParam3);
			break;
		case 299:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 300:
			return func_550(303, uParam1, uParam2, uParam3);
			break;
		case 301:
			return func_550(303, uParam1, uParam2, uParam3);
			break;
		case 302:
			return func_550(303, uParam1, uParam2, uParam3);
			break;
		case 303:
			*uParam1 = { -1173.498f, -1515.8302f, 5.159f };
			*uParam2 = { 9.9778f, -0.0009f, -96.2808f };
			*uParam3 = 56.5538f;
			return 1;
			break;
		case 296:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 297:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 298:
			*uParam1 = { -1134.342f, -1497.24f, 4.753f };
			*uParam2 = { 4.753f, 0f, 151.569f };
			*uParam3 = 50f;
			return 1;
			break;
		case 304:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 305:
			*uParam1 = { 1395.4946f, 3601.725f, 39.5656f };
			*uParam2 = { -6.5114f, 0f, 79.7777f };
			*uParam3 = 50f;
			return 1;
			break;
		case 306:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 307:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 308:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 309:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 310:
			*uParam1 = { 2022.2897f, 3405.7341f, 68.8313f };
			*uParam2 = { -84.787f, 0.0001f, 143.9959f };
			*uParam3 = 45f;
			return 1;
			break;
		case 311:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 312:
			*uParam1 = { -272.257f, 6628.256f, 8.3634f };
			*uParam2 = { -13.8262f, 0f, 79.1812f };
			return 1;
			break;
		case 313:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 314:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = { 0f, 0f, 0f };
			return 0;
			break;
		case 234:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 316:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		case 315:
			*uParam1 = { 1976.5756f, 3803.5605f, 34.6805f };
			*uParam2 = { -7.8325f, 0f, 11.5471f };
			*uParam3 = 50f;
			return 1;
			break;
		default:
			func_563(iParam0, &Var0, &fVar1, &cVar2);
			*uParam1 = { Var0 + Vector(0f, -5f, 0f) };
			*uParam2 = { 0f, 0f, -fVar1 };
			return 1;
			break;
	}
	func_563(iParam0, &Var3, &fVar4, &cVar5);
	*uParam1 = { Var3 + Vector(0f, -5f, 0f) };
	*uParam2 = { 0f, 0f, 0f };
	return 0;
}

int func_551(int iParam0)//Position - 0x833B9
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	if (func_549(iParam0, &sVar0, &cVar1))
	{
		if (__LIB_32__::func_88(iParam0, &sVar2, &cVar3, &cVar4, &uVar5, &uVar6))
		{
			STREAMING::REQUEST_ANIM_DICT(&sVar2);
			return 1;
		}
	}
	return 0;
}

int func_563(int iParam0, var uParam1, float fParam2, char* sParam3)//Position - 0x83F23
{
	int iVar0;
	if (func_565(iParam0, fParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			case 1:
				__LIB_17__::func_693(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_95644[iVar0 /*9*/].f_3 };
					*fParam2 = Global_95644[iVar0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_95644[0 /*9*/].f_3 };
					*fParam2 = Global_95644[0 /*9*/].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			case 2:
				*uParam1 = { Global_98552[0 /*109*/].f_4 };
				*fParam2 = Global_98552[0 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 3:
				*uParam1 = { Global_98552[1 /*109*/].f_4 };
				*fParam2 = Global_98552[1 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 4:
				*uParam1 = { Global_98552[2 /*109*/].f_4 };
				*fParam2 = Global_98552[2 /*109*/].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 5:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[0 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 6:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[1 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			case 7:
				*uParam1 = { Global_113386.f_2363.f_539.f_2300[2 /*3*/] + Vector(-1f, 0f, 0f) };
				*fParam2 = Global_113386.f_2363.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_98880[iParam0 /*3*/] };
		return 1;
	}
	return 0;
}

int func_565(int iParam0, float fParam1, char* sParam2)//Position - 0x841D6
{
	struct<3> Var0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			__LIB_17__::func_693(&iVar1);
			if (iVar1 < 5)
			{
				*fParam1 = Global_95644[iVar1 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*fParam1 = Global_95644[0 /*9*/].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 2:
			*fParam1 = Global_98552[0 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 3:
			*fParam1 = Global_98552[1 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 4:
			*fParam1 = Global_98552[2 /*109*/].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 5:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[0];
			StringCopy(sParam2, __LIB_17__::func_694(Global_113386.f_2363.f_539.f_2314[0]), 32);
			return 1;
			break;
		case 6:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[1];
			StringCopy(sParam2, __LIB_17__::func_694(Global_113386.f_2363.f_539.f_2314[1]), 32);
			return 1;
			break;
		case 7:
			*fParam1 = Global_113386.f_2363.f_539.f_2310[2];
			StringCopy(sParam2, __LIB_17__::func_694(Global_113386.f_2363.f_539.f_2314[2]), 32);
			return 1;
			break;
		case 11:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		case 8:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 9:
			return func_565(8, fParam1, sParam2);
			break;
		case 10:
			return func_565(8, fParam1, sParam2);
			break;
		case 13:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 14:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 15:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 12:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 16:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 17:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 18:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 19:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 20:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 21:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 22:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 74:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 23:
			return func_565(208, fParam1, sParam2);
			break;
		case 24:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 67:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 25:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 26:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 27:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 28:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 29:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 30:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 31:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 32:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 33:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 34:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 35:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 36:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 37:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 58:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 59:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 60:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 38:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 39:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 40:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		case 41:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 42:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 43:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 44:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 45:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 46:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 47:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 49:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 48:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*fParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 50:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 51:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 52:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 66:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 53:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 54:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 55:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 56:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 57:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 61:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 62:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 63:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 68:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 69:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 64:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 65:
			if (func_22(iParam0, &Var0, fParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		case 70:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 71:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 72:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 73:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		case 234:
			*fParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 316:
			*fParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 315:
			*fParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 75:
			*fParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 76:
			*fParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 77:
			*fParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 78:
			*fParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 79:
			*fParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 80:
			*fParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 81:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 82:
			*fParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 83:
			*fParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 84:
			*fParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 85:
			*fParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 86:
			*fParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 87:
			*fParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 88:
			*fParam1 = 21f;
			*fParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 89:
			*fParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 90:
			*fParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 91:
			*fParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 92:
			*fParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 93:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 94:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 95:
			*fParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 96:
			*fParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 97:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 98:
			*fParam1 = (-150.6148f + 0.0095f);
			*fParam1 = (*fParam1 + 0.0004f);
			*fParam1 = (*fParam1 + 0.0015f);
			*fParam1 = (*fParam1 + 0.0002f);
			*fParam1 = (*fParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 99:
			*fParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 100:
			*fParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 101:
			*fParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 102:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 103:
			*fParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 104:
			*fParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 105:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 106:
			*fParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 107:
			*fParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 108:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 109:
			*fParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 110:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 111:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 112:
			*fParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 113:
			*fParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 135:
			*fParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 136:
			*fParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 137:
			*fParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 138:
			*fParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 139:
			*fParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 140:
			*fParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 141:
			*fParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 142:
			*fParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 143:
			*fParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 144:
			*fParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 145:
			*fParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 146:
			*fParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 147:
			*fParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 148:
			*fParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 149:
			*fParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 150:
			*fParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 114:
			*fParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 115:
			*fParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 116:
			*fParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 117:
			*fParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 118:
			*fParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 119:
			*fParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 120:
			*fParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 121:
			*fParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 122:
			*fParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 123:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 125:
			*fParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 126:
			*fParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 127:
			*fParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 128:
			*fParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 129:
			*fParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 130:
			*fParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 131:
			*fParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 132:
			*fParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 133:
			*fParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 134:
			*fParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 151:
			*fParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 152:
			*fParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 153:
			*fParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 154:
			*fParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 155:
			*fParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 156:
			*fParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 157:
			*fParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 158:
			*fParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 159:
			*fParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 160:
			*fParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 161:
			*fParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 162:
			*fParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 163:
			*fParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 164:
			*fParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 165:
			*fParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 166:
			*fParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 167:
			*fParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 168:
			if (func_566(0, 25, &uVar2, &fVar3))
			{
				*fParam1 = (fVar3 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		case 169:
			*fParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		case 170:
			*fParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 171:
			*fParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 173:
			*fParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 172:
			*fParam1 = -30.185f;
			*fParam1 = (*fParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 174:
			*fParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*fParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 176:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 177:
			*fParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 178:
			*fParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 179:
			*fParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 180:
			*fParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 181:
			*fParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 182:
			*fParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 183:
			*fParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 184:
			*fParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 185:
			*fParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 186:
			*fParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 187:
			*fParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 188:
			*fParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 189:
			*fParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 190:
			*fParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 191:
			*fParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 196:
			*fParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		case 197:
			*fParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		case 192:
			*fParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 193:
			*fParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 194:
			*fParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 195:
			*fParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 198:
			*fParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 199:
			*fParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 200:
			*fParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 201:
			*fParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 202:
			*fParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 203:
			*fParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 204:
			*fParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 205:
			*fParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 206:
			*fParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 207:
			*fParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 208:
			*fParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 209:
			*fParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 210:
			*fParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 211:
			*fParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 212:
			*fParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 213:
			*fParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 214:
			*fParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 215:
			*fParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 216:
			*fParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 217:
			*fParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 221:
			*fParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 222:
			*fParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 223:
			*fParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		case 224:
			return func_565(222, fParam1, sParam2);
			break;
		case 226:
			*fParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 227:
			*fParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 228:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 229:
			*fParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 230:
			*fParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 218:
			*fParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 219:
			*fParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 220:
			*fParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 225:
			*fParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 231:
			*fParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 232:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 233:
			*fParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 235:
			*fParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 236:
			*fParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 237:
			*fParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 238:
			*fParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 239:
			*fParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 240:
			*fParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 241:
			*fParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 242:
			*fParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 245:
			*fParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 243:
			*fParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 244:
			*fParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 246:
			*fParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 247:
			*fParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 248:
			*fParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 249:
			*fParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 250:
			*fParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 251:
			*fParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 252:
			*fParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 253:
			*fParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 254:
			*fParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 255:
			*fParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 264:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 265:
			*fParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 266:
			*fParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 267:
			*fParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 268:
			*fParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 269:
			*fParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 270:
			*fParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 271:
			*fParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 272:
			*fParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 273:
			*fParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 274:
			*fParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 275:
			*fParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 276:
			*fParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 277:
			*fParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 278:
			*fParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 279:
			*fParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 280:
			*fParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 281:
			*fParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 282:
			*fParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 283:
			*fParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 284:
			*fParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 285:
			*fParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 256:
			*fParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 257:
			*fParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 258:
			*fParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 259:
			*fParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 260:
			*fParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 261:
			*fParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 286:
			*fParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 287:
			*fParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 288:
			*fParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 262:
			*fParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 263:
			*fParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 289:
			*fParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 290:
			*fParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		case 291:
			*fParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 292:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 293:
			*fParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 294:
			return func_565(293, fParam1, sParam2);
			break;
		case 295:
			return func_565(292, fParam1, sParam2);
			break;
		case 299:
			*fParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 300:
			return func_565(303, fParam1, sParam2);
			break;
		case 301:
			return func_565(303, fParam1, sParam2);
			break;
		case 302:
			return func_565(303, fParam1, sParam2);
			break;
		case 303:
			*fParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 296:
			*fParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 297:
			*fParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 298:
			*fParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		case 304:
			*fParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 305:
			*fParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		case 306:
			Var4 = { -7.4998f, 7.4995f, -0.5258f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var4.f_0, -Var4.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 307:
			Var5 = { 10.6345f, 0.7246f, 1.2508f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var5.f_0, -Var5.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 308:
			Var6 = { -3.4271f, -13.6787f, -1.4107f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var6.f_0, -Var6.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 309:
			Var7 = { -19.6582f, 7.896f, 0.1334f };
			*fParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(-Var7.f_0, -Var7.f_1);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 310:
			*fParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 311:
			*fParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		case 312:
			*fParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 313:
			*fParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		case 314:
			*fParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*fParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_566(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x8680F
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				case 1:
					if (func_566(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				case 1:
					if (func_566(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				case 2:
					if (func_566(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_566(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = MISC::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_566(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		case 46:
			return func_566(iParam0, 26, uParam2, uParam3);
			break;
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		case 60:
			if (func_566(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		case 77:
			if (func_566(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.6757f, -42.2059f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.8477f, -40.7478f) - Vector(30.116f, -1435.9974f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_113386.f_18533[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_113386.f_18533[2] == 300 || Global_113386.f_18533[2] == 301) || Global_113386.f_18533[2] == 302) || Global_113386.f_18533[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (__LIB_0__::func_680())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_566(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.7363f, -1148.4664f) - Vector(9.6346f, -1517.601f, -1152.5707f) };
					*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		default:
			*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_584(var uParam0, var* uParam1, var uParam2)//Position - 0x8A776
{
	int iVar0;
	char cVar1[32];
	char* sVar2;
	iVar0 = 1;
	StringCopy(&cVar1, "player_timetable_scene", 32);
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&cVar1)) <= 0)
	{
		iVar0 = 0;
		if (!SCRIPT::HAS_SCRIPT_LOADED(&cVar1))
		{
			SCRIPT::REQUEST_SCRIPT(&cVar1);
		}
		else
		{
			__LIB_37__::func_865(*uParam0, uParam1);
			if (__LIB_0__::func_703(uParam2, 64))
			{
				uParam1->f_119 = 1;
			}
			SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&cVar1, uParam1, 120, 5050);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar1);
		}
	}
	if (func_545(uParam0->f_2, &sVar2))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&sVar2)) <= 0)
		{
			iVar0 = 0;
			if (!SCRIPT::HAS_SCRIPT_LOADED(&sVar2))
			{
				SCRIPT::REQUEST_SCRIPT(&sVar2);
			}
			else
			{
				SYSTEM::START_NEW_SCRIPT(&sVar2, 2050);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&sVar2);
			}
		}
	}
	return iVar0;
}

struct<109> func_585(var uParam0)//Position - 0x8A821
{
	char cVar0[32];
	char* sVar1;
	StringCopy(&cVar0, "player_timetable_scene", 32);
	SCRIPT::REQUEST_SCRIPT(&cVar0);
	if (func_545(uParam0->f_2, &sVar1))
	{
		SCRIPT::REQUEST_SCRIPT(&sVar1);
	}
	Global_97752 = 1;
	return *uParam0;
}

int func_586(int iParam0, bool bParam1)//Position - 0x8A855
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_16__::func_512(bVar0);
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
		func_589(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_954(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_861(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_589(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8AA13
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
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
				func_619(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_612(*iParam0);
				__LIB_17__::func_456(*iParam0, 1, 0);
				__LIB_17__::func_449(*iParam0);
				__LIB_17__::func_448(*iParam0);
				func_591(*iParam0, bParam6);
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

int func_591(int iParam0, bool bParam1)//Position - 0x8AB3E
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_0__::func_472(iVar0, 0);
		func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_231(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(iVar0, 0);
			func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_231(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_450(iParam0, 3, 169))
					{
						func_507(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_450(iParam0, 12, 6))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 11))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 10))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 50))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 14, 59))
			{
				func_507(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_450(iParam0, 8, 22))
			{
				func_507(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_450(iParam0, 12, 14))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_450(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 4))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 3))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 14, 82))
			{
				func_507(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_450(iParam0, 8, 76))
			{
				func_507(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_450(iParam0, 12, 1))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_450(iParam0, 12, 12))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 15))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_450(iParam0, 3, 71))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_450(iParam0, 12, 7))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 12, 6))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_450(iParam0, 14, 88))
			{
				func_507(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_450(iParam0, 8, 17))
			{
				func_507(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_450(iParam0, 12, 11))
			{
				func_507(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_612(int iParam0)//Position - 0x8C4F4
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_17__::func_107(iParam0);
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
		func_248(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_523(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_613(__LIB_16__::func_512(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_523(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_523(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_613(__LIB_16__::func_512(0), 3, 70, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 3, 71, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 3, 72, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 3, 73, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 3, 74, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 3, 75, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 4, 41, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 4, 42, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 4, 43, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 4, 44, 1, 0, 0, 0);
					func_613(__LIB_16__::func_512(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_523(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_248(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_613(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8C751
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_616(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_616(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8C90C
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
								func_616(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_616(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_616(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_616(iParam0, 14, iVar5, 1, 0);
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
								func_616(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_616(iParam0, 14, 17, 1, 0);
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

int func_619(int iParam0, bool bParam1, bool bParam2)//Position - 0x8CD9A
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 4;
	if (bParam1 == 0)
	{
		iVar0 = 0;
	}
	else if (bParam1 == 2)
	{
		iVar0 = 2;
	}
	else if (bParam1 == 1)
	{
		iVar0 = 1;
	}
	else if (bParam1 == 145)
	{
		iVar0 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_97919[iVar0]))
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < Global_100366)
		{
			if (iVar1 < 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_100366[iVar2]))
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 < 0 || iVar1 > Global_100366)
		{
			iVar1 = 0;
		}
		Global_100366[iVar1] = Global_97919[iVar0];
		if (bParam2)
		{
			if (!PED::IS_PED_INJURED(Global_100366[iVar1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
					{
						TASK::CLEAR_PED_TASKS(Global_100366[iVar1]);
						TASK::TASK_SMART_FLEE_COORD(Global_100366[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, true), 1000f, -1, true, false);
					}
				}
			}
		}
	}
	Global_97919[iVar0] = iParam0;
	Global_113386.f_2363.f_539.f_2296[bParam1] = __LIB_34__::func_681();
	Global_113386.f_2363.f_539.f_2300[bParam1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	Global_113386.f_2363.f_539.f_2310[bParam1] = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_97919.f_47), iVar0);
	}
	return 1;
}

void func_626(int iParam0)//Position - 0x8D903
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	while (CAM::IS_SCREEN_FADING_IN())
	{
		SYSTEM::WAIT(0);
	}
}

int func_627()//Position - 0x8D931
{
	if (iLocal_3423 == 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		iLocal_3523 = 0;
		iLocal_3532 = 0;
		iLocal_3543 = 0;
		iLocal_3564 = 0;
		VEHICLE::REQUEST_VEHICLE_RECORDING(0, "END_MARTIN_1");
		HUD::CLEAR_HELP(true);
		__LIB_0__::func_325();
		if (CAM::DOES_CAM_EXIST(iLocal_3916))
		{
			CAM::DESTROY_CAM(iLocal_3916, false);
		}
		if (CAM::DOES_CAM_EXIST(iLocal_3917))
		{
			CAM::DESTROY_CAM(iLocal_3917, false);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3916))
		{
			iLocal_3916 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1216.503f, 1864.9976f, 79.2422f, 1.266527f, 0f, -89.01587f, 45.031136f, false, 2);
			CAM::SET_CAM_ACTIVE(iLocal_3916, true);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3917))
		{
			iLocal_3917 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1217.5151f, 1867.1925f, 79.2422f, 16.74339f, 0f, -57.13797f, 45.031136f, false, 2);
			CAM::SET_CAM_ACTIVE(iLocal_3917, true);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_ext", 8);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		while (!CUTSCENE::HAS_CUTSCENE_LOADED() || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_ext"))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_17__::func_80() == 0)
				{
					__LIB_32__::func_76(2, "Trevor", 2);
				}
				else
				{
					__LIB_32__::func_76(2, "Trevor", 2);
				}
				__LIB_38__::func_186("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
			}
			SYSTEM::WAIT(0);
		}
		iLocal_3637 = 0;
		iLocal_3532 = 1;
		iLocal_3423 = 1;
	}
	else
	{
		if (iLocal_3637 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3685);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3782))
			{
				OBJECT::DELETE_OBJECT(&iLocal_3782);
			}
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
			__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_3917, iLocal_3916, 10000, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			SYSTEM::SETTIMERA(0);
			MISC::CLEAR_AREA(1215.974f, 1863.0908f, 77.88766f, 14f, false, false, false, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(1219.4f, 1865.7f, 78.1f, 15f, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			SYSTEM::SETTIMERB(0);
			iLocal_3637 = 1;
		}
		if (iLocal_3637 == 1)
		{
			if (SYSTEM::TIMERB() < 5000)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1219.4f, 1865.5f, 78.3278f, 3f, joaat("prop_barrel_01a"), false))
				{
					iLocal_3657 = PED::CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(1219.4f, 1865.5f, 78.3278f, 1f, joaat("prop_barrel_01a"));
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_3657, "missmartin1@leadinoutmartin_1_ext", "martin_1_ext_leadin", 8f, -8f, 0, 0, 1000f, 0);
					iLocal_3637 = 2;
				}
			}
			else
			{
				iLocal_3637 = 2;
			}
		}
		if (iLocal_3637 == 2)
		{
			if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "M1_EXT_LI", 7, 0, 0, 0))
			{
			}
			iLocal_3637 = 3;
		}
		if (iLocal_3637 == 3)
		{
			if (SYSTEM::TIMERA() > 9500)
			{
				MISC::CLEAR_AREA(1214.055f, 1875.0118f, 77.7712f, 15f, false, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3673)))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_3673, 1211.0487f, 1859.6018f, 77.9089f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_3673, 311.1039f);
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&iLocal_3673);
						}
					}
				}
				iLocal_3637 = 4;
			}
		}
		if (iLocal_3637 == 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3689);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3669, "Trevor", 2, joaat("Player_Two"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3670, "Patricia", 2, joaat("CS_Patricia"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3668, "Madrazos_Car", 2, joaat("baller"), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CUTSCENE::START_CUTSCENE(0);
			CUTSCENE::SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(joaat("baller"));
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_3637 = 5;
		}
		if (iLocal_3637 == 5)
		{
			if (iLocal_3564 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::SET_CAM_ACTIVE(iLocal_3916, false);
					CAM::SET_CAM_ACTIVE(iLocal_3917, false);
					CAM::DESTROY_CAM(iLocal_3916, false);
					CAM::DESTROY_CAM(iLocal_3917, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					iLocal_3564 = 1;
				}
			}
			if (iLocal_3523 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3673, true);
						iLocal_3523 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3689, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3689, 2);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_3669 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", joaat("Player_Two"));
				iLocal_3665 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_3669);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
				{
					if (!PED::IS_PED_INJURED(iLocal_3665))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3665, iLocal_3689, -1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Patricia", 0))
			{
				iLocal_3670 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Patricia", joaat("CS_Patricia"));
				iLocal_3666 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_3670);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_3666, iLocal_3689, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_3666, iLocal_3689, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3666, true);
							PED::SET_PED_KEEP_TASK(iLocal_3666, true);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3668))
			{
				iLocal_3668 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Madrazos_Car", joaat("baller"));
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				iLocal_3689 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_3668);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
			{
				if (iLocal_3543 == 0)
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_3689, "MADRAZO");
					iLocal_3543 = 1;
				}
			}
			if (!CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_3689, true, true, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Madrazos_Car", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3689, true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3689, 0, "END_MARTIN_1", true);
						VEHICLE::SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_3689, -0.1890575f, -0.1890575f, 0.1890575f, 0);
					}
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3689))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3689, 0, "END_MARTIN_1", true);
							VEHICLE::SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_3689, -0.1890575f, -0.1890575f, 0.1890575f, 0);
						}
					}
				}
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3787, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3788, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3789, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3791, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3792, false);
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3793, false);
				if (!__LIB_0__::func_2(0))
				{
					__LIB_0__::func_46(0, 0);
				}
				iLocal_3637 = 6;
			}
		}
		if (iLocal_3637 == 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3689, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3689, 2);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3666))
					{
						if (!PED::IS_PED_INJURED(iLocal_3666))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3666, iLocal_3689, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3666, iLocal_3689, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3666, true);
								PED::SET_PED_KEEP_TASK(iLocal_3666, true);
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
					{
						if (!PED::IS_PED_INJURED(iLocal_3665))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_3665, iLocal_3689, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_3665, iLocal_3689, -1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
							}
						}
					}
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_3689, true);
					if (!PED::IS_PED_INJURED(iLocal_3665))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3665, iLocal_3689, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3689))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3689) > 5000f)
								{
									iLocal_3637 = 7;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3637 >= 7)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3912))
			{
				HUD::REMOVE_BLIP(&iLocal_3912);
			}
			if (Global_78579 == 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				iLocal_3423 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_645()//Position - 0x8E951
{
	if (__LIB_17__::func_341() == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[4]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[4], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[5]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[5], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[6]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[6], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[7]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[7], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[8]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[8], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[9]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[9], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[10]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[10], false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3785))
	{
		iLocal_3785 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1219.4f, 1865.5f, 78.3278f, 1f, joaat("prop_barrel_01a"), true, false, true);
	}
	else if (iLocal_3583 == 0)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_3785, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3785, true);
		iLocal_3583 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
		{
			GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
			{
				if (iLocal_3588 == 0)
				{
					if (iLocal_3589 == 0)
					{
						if (func_741(iLocal_3685))
						{
							iLocal_3589 = 1;
						}
					}
					else if (ENTITY::IS_ENTITY_IN_AIR(iLocal_3685))
					{
						iLocal_3588 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(iLocal_3685))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_3685, true, false);
				}
			}
		}
	}
	if (iLocal_3423 == 1 && iLocal_3637 < 6)
	{
		if (iLocal_3637 > 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3674, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3674, false) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3674, 1) > 150f)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3674);
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_3637 == 3 || iLocal_3637 == 4)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_3913))
				{
					if (iLocal_3527 == 1)
					{
						HUD::CLEAR_PRINTS();
						iLocal_3527 = 0;
					}
					if (iLocal_3526 == 1)
					{
						HUD::CLEAR_PRINTS();
					}
					iLocal_3913 = __LIB_0__::func_488(1370.4f, 1174.3f, 113.1f, 1);
					if (iLocal_3529 == 0)
					{
						__LIB_0__::func_229("SNIPE5", 7500, 1);
						iLocal_3529 = 1;
					}
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_3914))
				{
					HUD::REMOVE_BLIP(&iLocal_3914);
				}
			}
			if (iLocal_3637 == 5)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_3913))
				{
					HUD::REMOVE_BLIP(&iLocal_3913);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_3914))
				{
					HUD::REMOVE_BLIP(&iLocal_3914);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 5f)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_3912))
					{
						if (iLocal_3527 == 1)
						{
							HUD::CLEAR_PRINTS();
							iLocal_3527 = 0;
						}
						iLocal_3912 = __LIB_0__::func_488(1216.6f, 1868.1f, 78.1f, 1);
					}
					else
					{
						if (iLocal_3528 == 0 && iLocal_3552 == 1)
						{
							if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								__LIB_0__::func_229("SNIPE7", 7500, 1);
								iLocal_3528 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1216.6f, 1868.1f, 78.1f, 2.5f, 2.5f, 2f, true, true, 0))
						{
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3913))
			{
				HUD::REMOVE_BLIP(&iLocal_3913);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_3912))
			{
				HUD::REMOVE_BLIP(&iLocal_3912);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_3914))
			{
				HUD::REMOVE_BLIP(&iLocal_3914);
			}
			if (iLocal_3527 == 0)
			{
				__LIB_0__::func_229("M1_GOD3", 7500, 1);
				iLocal_3527 = 1;
			}
		}
	}
	if (iLocal_3572 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_343(24)))
		{
			func_736(__LIB_0__::func_343(24));
			iLocal_3572 = 1;
		}
	}
	if (iLocal_3423 == 0)
	{
		iLocal_3532 = 0;
		STREAMING::REMOVE_PTFX_ASSET();
		iLocal_3496 = 0;
		iLocal_3526 = 0;
		iLocal_3527 = 0;
		iLocal_3528 = 0;
		iLocal_3529 = 0;
		iLocal_3552 = 0;
		iLocal_3553 = 0;
		iLocal_3554 = 0;
		iLocal_3555 = 0;
		iLocal_3565 = 0;
		iLocal_3583 = 0;
		iLocal_3588 = 0;
		iLocal_3589 = 0;
		iLocal_3592 = 0;
		iLocal_3593 = 0;
		iLocal_3595 = 0;
		if (!__LIB_17__::func_167(24))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
			{
				if (STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_741(0, 1)))
				{
					while (!__LIB_17__::func_478(&iLocal_3674, 0, -390.978f, 1189.5386f, 324.642f, 102.4179f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3674, 5f);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3674, true, 1);
				}
			}
		}
		else
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(0, 1));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
		{
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded")))
			{
				iLocal_3685 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.5392f, 1142.2645f, 323.1035f, 11.1408f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3685, true, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3685, 5f);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3685, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3685, 10f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3685, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				iLocal_3782 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.1714f, 323.0888f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3782, iLocal_3685, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
				ENTITY::SET_ENTITY_HEALTH(iLocal_3685, 310, 0);
			}
		}
		if (__LIB_17__::func_341() == 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					while (!func_589(&(uLocal_3201[0]), 0, iLocal_3685, -1, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_3201[0], joaat("WEAPON_PETROLCAN"), 1000, true, true);
				}
			}
		}
		if (__LIB_17__::func_341() == 0)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), 1000, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, -1);
			}
		}
		HUD::CLEAR_HELP(true);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		__LIB_37__::func_864(1, 1);
		__LIB_37__::func_864(2, 1);
		__LIB_37__::func_864(7, 1);
		__LIB_37__::func_864(8, 1);
		__LIB_37__::func_864(9, 1);
		__LIB_37__::func_864(10, 1);
		__LIB_37__::func_864(4, 1);
		__LIB_37__::func_864(12, 1);
		iLocal_3790 = PED::ADD_SCENARIO_BLOCKING_AREA(1288f, 1962.8f, 128.4f, 1139.2f, 1800.8f, 59.5f, false, true, true, true);
		iLocal_3791 = PED::ADD_SCENARIO_BLOCKING_AREA(-358.3f, 1130.6f, 333.3f, -323.6f, 1170.2f, 319.6f, false, true, true, true);
		func_731();
		iLocal_3637 = 0;
		iLocal_3532 = 1;
		iLocal_3423 = 1;
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
				{
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_3685, true), 20f, true, false, false, false);
				}
			}
		}
	}
	else
	{
		if (iLocal_3637 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_IN() && iLocal_3467 == 0)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_3637 = 1;
		}
		if (iLocal_3637 == 1)
		{
			if (__LIB_17__::func_341() == 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_3201[0]))
				{
					if (!__LIB_0__::func_75())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!Local_3184.f_20)
							{
								if (__LIB_32__::func_86(&uLocal_3201, 0))
								{
									HUD::CLEAR_PRINTS();
									AUDIO::TRIGGER_MUSIC_EVENT("SOL1_END");
									Local_3184.f_12 = uLocal_3201[uLocal_3201.f_7];
									Local_3184.f_20 = 1;
								}
							}
							else
							{
								while (func_730(&Local_3184, 0, 0f, 0f))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
									HUD::CLEAR_PRINTS();
									if (Local_3184.f_18)
									{
										if (!Local_3184.f_19)
										{
											if (func_861(&uLocal_3201, 1, 1, 0))
											{
												Local_3184.f_19 = 1;
											}
										}
									}
									if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8 && STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0)
									{
									}
									SYSTEM::WAIT(0);
								}
							}
						}
					}
				}
			}
			if (__LIB_17__::func_341() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_3201[2], true);
				}
				if (iLocal_3604 == 1)
				{
					if (!CAM::IS_ALLOWED_INDEPENDENT_CAMERA_MODES())
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, 4);
					}
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
					iLocal_3604 = 0;
				}
				if (!__LIB_0__::func_477())
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_3671, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3672);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3667[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3667[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3783))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_3783))
						{
							ENTITY::DETACH_ENTITY(iLocal_3783, true, true);
						}
						OBJECT::DELETE_OBJECT(&iLocal_3783);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
					{
						PED::DELETE_PED(&(uLocal_3201[2]));
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (!__LIB_6__::func_353(joaat("WEAPON_PISTOL")))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 100, false, false);
					}
					else if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL")) < 100)
					{
						WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 100, false);
					}
					func_681(4, "STAGE_DESTROY_SNIPER", 1, 0, 0, 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
					}
					SYSTEM::SETTIMERB(0);
					iLocal_3637 = 2;
				}
			}
		}
		if (iLocal_3637 == 2)
		{
			if (iLocal_3595 == 0)
			{
				if (SYSTEM::TIMERB() > 2000)
				{
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					iLocal_3595 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_3685, false), -428f, 1111f, 327f, true) < 250f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						iLocal_3593 = 0;
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_229("M1_GOD5", 200000, -1);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_3914))
							{
								HUD::CLEAR_PRINTS();
								HUD::REMOVE_BLIP(&iLocal_3914);
							}
						}
						else if (!HUD::DOES_BLIP_EXIST(iLocal_3914))
						{
							iLocal_3914 = __LIB_0__::func_639(iLocal_3685, 0, 0);
							HUD::CLEAR_PRINTS();
							if (iLocal_3592 == 0)
							{
								__LIB_0__::func_229("SNIPE9", 7500, -1);
								iLocal_3592 = 1;
							}
						}
					}
					else
					{
						func_16("M1_FAIL6");
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						if (iLocal_3593 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_3914))
							{
								HUD::REMOVE_BLIP(&iLocal_3914);
							}
							if (!HUD::DOES_BLIP_EXIST(iLocal_3914))
							{
								iLocal_3914 = __LIB_0__::func_639(iLocal_3685, 1, 0);
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_229("M1_GOD4", 200000, -1);
							}
							iLocal_3593 = 1;
						}
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_229("M1_GOD4", 200000, -1);
						}
					}
					if (iLocal_3467 == 0)
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_3685, false))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_3914))
							{
								HUD::REMOVE_BLIP(&iLocal_3914);
							}
							SYSTEM::SETTIMERA(0);
							HUD::CLEAR_PRINTS();
							iLocal_3601 = 0;
							iLocal_3637 = 3;
						}
					}
				}
			}
		}
		if (iLocal_3637 == 3)
		{
			if (iLocal_3601 == 0)
			{
				if (SYSTEM::TIMERA() > 3000)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 3);
					iLocal_3601 = 1;
				}
			}
			if (SYSTEM::TIMERA() > 30000 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1373f, 1147f, 113f, true) < 1000f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_677(&uLocal_3245, 2, "SLM1AUD", "M1_CHANGE", 9, 0, 0, 1))
					{
						iLocal_3637 = 4;
					}
				}
			}
		}
		if (iLocal_3637 == 4)
		{
			if (__LIB_14__::func_521())
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
				{
					PED::DELETE_PED(&(uLocal_3201[2]));
				}
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				SYSTEM::SETTIMERB(0);
				iLocal_3637 = 5;
			}
		}
		if (iLocal_3637 == 5)
		{
			if (iLocal_3496 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("Martin_1_ext", 8);
					iLocal_3496 = 1;
				}
			}
			if (iLocal_3496 == 1)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (__LIB_17__::func_80() == 0)
					{
						__LIB_32__::func_76(2, "Trevor", 2);
					}
					else
					{
						__LIB_32__::func_76(2, "Trevor", 2);
					}
					__LIB_38__::func_186("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1204.7f, 1859f, 78.2f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 120f)
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_3496 = 0;
				}
			}
			if (iLocal_3552 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "M1_CHANGE2", 7, 0, 0, 0))
						{
							iLocal_3552 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3671, 1) < 160f)
				{
					if (iLocal_3553 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "M1_WRECK", 7, 0, 0, 0))
								{
									iLocal_3553 = 1;
								}
							}
						}
					}
					if (iLocal_3554 == 0)
					{
						__LIB_0__::func_151("BFHELPTXT2", -1);
						iLocal_3554 = 1;
					}
					if (iLocal_3555 == 0)
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
						iLocal_3555 = 1;
					}
					if (iLocal_3555 == 1)
					{
						__LIB_17__::func_112(&uLocal_28, iLocal_3671, 0, 0, 1, 1, 1);
					}
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				else if (iLocal_3555 == 1)
				{
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_345(&uLocal_28, 0, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
					iLocal_3555 = 0;
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1216.6f, 1868.1f, 78.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 5f)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_3912))
					{
						HUD::REMOVE_BLIP(&iLocal_3912);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_3673 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						__LIB_0__::func_213(iLocal_3673, 1093140480, 1, 1056964608, 0, 1, 0);
						STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
						SYSTEM::SETTIMERB(0);
						iLocal_3637 = 6;
					}
					else
					{
						SYSTEM::SETTIMERB(0);
						STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
						iLocal_3637 = 6;
					}
				}
			}
		}
		if (iLocal_3637 == 6)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3912))
			{
				HUD::REMOVE_BLIP(&iLocal_3912);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (iLocal_3565 == 0)
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0);
						SYSTEM::SETTIMERB(0);
						iLocal_3565 = 1;
					}
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
					}
					iLocal_3637 = 7;
				}
			}
		}
		if (iLocal_3637 >= 7)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3912))
			{
				HUD::REMOVE_BLIP(&iLocal_3912);
			}
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_677(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x90A6A
{
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return __LIB_17__::func_394(sParam3, iParam4, bParam7);
}

void func_681(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x90B86
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
		func_682(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_682(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x90CFF
{
	func_683(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_683(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x90D1B
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_17__::func_341();
	uParam0->f_1 = __LIB_34__::func_681();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_510(&(uParam0->f_2884), 0);
		__LIB_17__::func_442(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_619(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_17__::func_341())
		{
			__LIB_32__::func_75(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_37__::func_871(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_730(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x95746
{
	return __LIB_17__::func_626(uParam0, 0, 1, iParam1, fParam2, fParam3, 0, 0, 0, 6, 0, 0, 0);
	return 1;
}

void func_731()//Position - 0x95767
{
	switch (iLocal_3183)
	{
		case 3:
			__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
			{
				__LIB_0__::func_222(&uLocal_3245, 4, iLocal_3661, "Solomon1Pilot", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_3245, 5, 0, "Sol1Tower", 0, 1);
			break;
		case 4:
			if (__LIB_17__::func_341() == 2)
			{
				__LIB_0__::func_222(&uLocal_3245, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_3245, 0, 0, "MICHAEL", 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
			{
				__LIB_0__::func_222(&uLocal_3245, 4, iLocal_3661, "Solomon1Pilot", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_3245, 5, 0, "Sol1Tower", 0, 1);
			break;
		case 6:
			if (__LIB_17__::func_341() == 2)
			{
				__LIB_0__::func_222(&uLocal_3245, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			__LIB_0__::func_222(&uLocal_3245, 0, 0, "MICHAEL", 0, 1);
			break;
		case 7:
			if (__LIB_17__::func_341() == 0)
			{
				__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_3201[0]))
				{
					__LIB_0__::func_222(&uLocal_3245, 0, uLocal_3201[0], "MICHAEL", 0, 1);
				}
			}
			__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
			break;
	}
}

void func_736(int iParam0)//Position - 0x95995
{
	__LIB_16__::func_870(&(Global_106934.f_2890), &Global_106934, iParam0, 1);
}

int func_741(int iParam0)//Position - 0x95A33
{
	if (iLocal_3590 == 0)
	{
		Local_3622 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
		iLocal_3654 = MISC::GET_GAME_TIMER();
		iLocal_3590 = 1;
	}
	if (iLocal_3591 == 0 && iLocal_3590 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_3654 + 4000)
		{
			Local_3623 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			iLocal_3591 = 1;
		}
	}
	if (iLocal_3591 == 1)
	{
		if (Local_3622.f_2 > (Local_3623.f_2 + 5f))
		{
			return 1;
		}
		else
		{
			iLocal_3591 = 0;
			iLocal_3590 = 0;
		}
	}
	return 0;
}

int func_742()//Position - 0x95AAF
{
	int iVar0;
	if (!iLocal_3423)
	{
		iLocal_3532 = 0;
		iLocal_3560 = 0;
		iLocal_3569 = 0;
		iLocal_3570 = 0;
		iLocal_3571 = 0;
		iLocal_3573 = 0;
		iLocal_3586 = 0;
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
		CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
		STREAMING::REQUEST_MODEL(joaat("burrito3"));
		STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 1));
		STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
		STREAMING::REQUEST_ANIM_DICT("missmartin1@switch");
		__LIB_38__::func_174(0);
		__LIB_0__::func_345(&uLocal_28, 0, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_3909))
		{
			HUD::REMOVE_BLIP(&iLocal_3909);
		}
		while (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			SYSTEM::WAIT(0);
		}
		func_731();
		HUD::CLEAR_HELP(true);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), true);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		}
		iLocal_3637 = 0;
		iLocal_3532 = 1;
		iLocal_3423 = 1;
		iLocal_3603 = 0;
		iLocal_3604 = 0;
	}
	else
	{
		switch (iLocal_3637)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_3784, "Crashed_Plane", 0, joaat("prop_shamal_crash"), 0);
				}
				STREAMING::REMOVE_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Pilot_Martin_1", 2, joaat("S_M_M_Pilot_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Briefcase", 2, joaat("p_attache_case_01_s"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevors_phone", 2, joaat("prop_phone_ing_02"), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("SOL1_GOT_IT");
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_325();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				}
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_3637++;
				break;
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_3604 == 0)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
							iLocal_3604 = 1;
						}
					}
				}
				if (iLocal_3586 == 0)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3691))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3691, false))
							{
								if (((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_3691)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3691))) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iLocal_3691))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_3691)))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_3691, 2795.7239f, 4801.2764f, 45.5453f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_3691, 168.8915f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3691, 5f);
									iLocal_3586 = 1;
								}
								else
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3691, true, false);
									VEHICLE::DELETE_VEHICLE(&iLocal_3691);
									iLocal_3586 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_3603)
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
						{
							PED::DELETE_PED(&iLocal_3661);
							iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar0))
								{
									iLocal_3661 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
								}
							}
							iLocal_3603 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_3667[1], false))
				{
					ENTITY::SET_ENTITY_HEALTH(iLocal_3667[1], 0, 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3783))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Briefcase", 0), true, false);
					iLocal_3783 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Briefcase", 0));
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3786))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevors_phone", 0), true, false);
					iLocal_3786 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevors_phone", 0));
				}
				if (iLocal_3573 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)))
					{
						PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)), 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
						PED::APPLY_PED_BLOOD_SPECIFIC(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Pilot_Martin_1", 0)), 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
						iLocal_3573 = 1;
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_3571 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_3667[0], 2806.6592f, 4801.574f, 48.026577f, 2800.0947f, 4802.9014f, 44.988617f, 2.5f, false, true, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_3667[0]))
								{
									fLocal_3632 = ENTITY::GET_ENTITY_HEADING(iLocal_3667[0]);
								}
								PED::DELETE_PED(&(iLocal_3667[0]));
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
						{
							STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGang_01"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGang_01")))
							{
								iLocal_3667[0] = PED::CREATE_PED(26, joaat("G_M_Y_MexGang_01"), 2803.2285f, 4805.61f, 45.9882f, fLocal_3632, true, true);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 4, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 6, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 10, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 11, 0, 0, 0);
								PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3667[0]);
								PED::EXPLODE_PED_HEAD(iLocal_3667[0], joaat("WEAPON_SNIPERRIFLE"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGang_01"));
								iLocal_3571 = 1;
							}
						}
					}
					if (!MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), "Silent Ringtone Dummy"))
					{
						if (iLocal_3569 == 0)
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 12959)
							{
								AUDIO::PLAY_PED_RINGTONE(&(Global_113386.f_14051[Global_20266 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), false);
								iLocal_3569 = 1;
							}
						}
						if (iLocal_3570 == 0)
						{
							if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()) && CUTSCENE::GET_CUTSCENE_TIME() > 15953)
							{
								AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
								iLocal_3570 = 1;
							}
						}
					}
					if (__LIB_0__::func_500())
					{
						iLocal_3560 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Crashed_Plane", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_3784, 2807.692f, 4796.4487f, 47.668404f, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_3784, 0f, 0f, -11.340065f, 2, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_3784, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3784, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_3784, true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2801.962f, 4800.413f, 46.0215f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, -34.2f, 2, true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@switch"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 1000f, -8f, -1, 0, 0f, false, false, false);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Briefcase", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3783))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3783, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0.05f, 0f, 0f, 0f, -90f, 0f, false, false, false, false, 2, true, 0);
						if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@switch"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3783, "missmartin1@switch", "trevor_switch_case", 3))
							{
								ENTITY::PLAY_ENTITY_ANIM(iLocal_3783, "trevor_switch_case", "missmartin1@switch", 1000f, false, true, false, 0f, 0);
								ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3783);
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Pilot_Martin_1", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
					{
						PED::DELETE_PED(&iLocal_3661);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					RECORDING::REPLAY_STOP_EVENT();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(80f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1f);
					if (iLocal_3560 == 1)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1f);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_phone", joaat("prop_phone_ing_02")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3786))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3786, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
				if (iLocal_3560 == 1)
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(80f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3.97f, 1f);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					iLocal_3637++;
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3661, true, false);
					PED::DELETE_PED(&iLocal_3661);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3786))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor") > 0.08f)
						{
							OBJECT::DELETE_OBJECT(&iLocal_3786);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missmartin1@switch", "trevor_switch_trevor") > 0.5f)
					{
						iLocal_3637++;
					}
				}
				break;
		}
		if (iLocal_3637 >= 3)
		{
			func_743(1);
			if (iLocal_3449[2] == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
					iLocal_3449[2] = 0;
				}
			}
			iLocal_3637 = 0;
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

void func_743(bool bParam0)//Position - 0x963FF
{
	if (CAM::DOES_CAM_EXIST(iLocal_3916))
	{
		CAM::STOP_CAM_SHAKING(iLocal_3916, bParam0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3917))
	{
		CAM::STOP_CAM_SHAKING(iLocal_3917, bParam0);
	}
}

void func_746()//Position - 0x96484
{
	if (__LIB_17__::func_341() == 2)
	{
		if (iLocal_3604 == 1)
		{
			CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
		}
	}
}

int func_747()//Position - 0x964A1
{
	bool bVar0;
	if (iLocal_3596 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3667[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b", 0.3f);
					iLocal_3596 = 1;
				}
			}
		}
	}
	if (iLocal_3597 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3667[1]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a", 0.3f);
					iLocal_3597 = 1;
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_3691 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (iLocal_3541 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2803.8f, 4798.1f, 47.7f, true) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			iLocal_3541 = 1;
		}
	}
	if (iLocal_3541 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2803.8f, 4798.1f, 47.7f, true) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3584 = 0;
			iLocal_3541 = 0;
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_38__::func_186("Trevor", PLAYER::PLAYER_PED_ID(), joaat("Player_Two"), 2);
		}
	}
	if (iLocal_3541 == 1 && iLocal_3584 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_38__::func_186("Pilot_Martin_1", iLocal_3661, 0, 2);
				iLocal_3584 = 1;
			}
		}
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_3567 == 0)
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
				iLocal_3567 = 1;
			}
		}
	}
	else if (iLocal_3567 == 1)
	{
		iLocal_3567 = 0;
	}
	if (!iLocal_3423)
	{
		func_681(3, "STAGE_KILL_PASSENGERS", 0, 0, 0, 1);
		iLocal_3532 = 0;
		iLocal_3549 = 0;
		iLocal_3550 = 0;
		iLocal_3551 = 0;
		iLocal_3567 = 0;
		iLocal_3580 = 0;
		iLocal_3584 = 0;
		iLocal_3477 = 1;
		iLocal_3568 = 0;
		iLocal_3596 = 0;
		iLocal_3597 = 0;
		func_731();
		__LIB_37__::func_864(1, 0);
		__LIB_37__::func_864(2, 0);
		__LIB_37__::func_864(7, 0);
		__LIB_37__::func_864(8, 0);
		__LIB_37__::func_864(9, 0);
		__LIB_37__::func_864(10, 0);
		__LIB_37__::func_864(4, 0);
		__LIB_37__::func_864(12, 0);
		STREAMING::REQUEST_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
		STREAMING::REQUEST_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
		if (HUD::DOES_BLIP_EXIST(iLocal_3911))
		{
			HUD::REMOVE_BLIP(&iLocal_3911);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			while (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			SYSTEM::SETTIMERB(0);
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4500f, 0);
			SYSTEM::WAIT(0);
			while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && SYSTEM::TIMERB() < 20000)
			{
				SYSTEM::WAIT(0);
			}
			__LIB_0__::func_433(iLocal_3673, -1, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3673, false))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3673, 20f);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
			{
				iLocal_3795[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_wreck", iLocal_3784, Local_3620, Local_3620, 1f, false, false, false);
				iLocal_3795[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_spot", 2803.5f, 4789.3f, 46.6f, 89.5f, 0f, 0f, 1.5f, false, false, false, false);
				iLocal_3795[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2805.4f, 4782.5f, 46.5f, 89.5f, 0f, 74f, 1.5f, false, false, false, false);
				iLocal_3795[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2804.1f, 4777.3f, 46.2f, 89.5f, 0f, 74f, 1.5f, false, false, false, false);
				iLocal_3795[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_drip", 2808.2f, 4791.6f, 48.8f, 89.5f, 0f, 169.1f, 1.5f, false, false, false, false);
				iLocal_3795[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_tail_fire", 2805.8f, 4788.5f, 49.8f, 89.5f, -100f, -40f, 0.7f, false, false, false, false);
				iLocal_3795[9] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_engine_fire", 2808.6f, 4793.4f, 48.7f, 0f, 0f, -10f, 0.6f, false, false, false, false);
				iLocal_3795[10] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_elec_crackle", 2809.1f, 4802.4f, 48f, 0f, 0f, 0f, 0.9f, false, false, false, false);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		SYSTEM::SETTIMERB(0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(PLAYER::PLAYER_PED_ID(), true);
		iLocal_3638 = 0;
		iLocal_3637 = 0;
		iLocal_3532 = 1;
		iLocal_3423 = 1;
		iLocal_3651 = MISC::GET_GAME_TIMER();
		iLocal_3652 = MISC::GET_GAME_TIMER();
	}
	else
	{
		switch (iLocal_3637)
		{
			case 0:
				bVar0 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_3667[0]))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b", 3))
						{
							if (iLocal_3568 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b") > 0.427f)
								{
									ENTITY::SET_ENTITY_COLLISION(iLocal_3784, true, false);
									iLocal_3568 = 1;
								}
							}
							if (iLocal_3550 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b") > 0.99f)
								{
									ENTITY::STOP_ENTITY_ANIM(iLocal_3667[0], "exit_plane_guy_b", "missmartin1@exit_plane", -2f);
									TASK::TASK_PLAY_ANIM(iLocal_3667[0], "missmartin1@exit_plane", "loop_guy_b", 4f, -8f, -1, 9, 0f, false, false, false);
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() >= iLocal_3656 + 500)
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				if (iLocal_3568 == 0)
				{
					if (bVar0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_3784, true, false);
							iLocal_3568 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3784, 1) < 50f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_3667[0]))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_3915[0]))
								{
									uLocal_3915[0] = __LIB_0__::func_639(iLocal_3667[0], 1, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_3667[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
								}
								if (iLocal_3549 == 0)
								{
									__LIB_0__::func_229("M1_GOD2", 7500, -1);
									iLocal_3549 = 1;
								}
								if (iLocal_3550 == 0)
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3667[0], 1) < 100f)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_3651 + 4000)
										{
											if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
											{
												if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
												{
													__LIB_0__::func_222(&uLocal_3245, 4, iLocal_3667[0], "JAVIER", 0, 1);
													if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_STUMBLE", 7, 0, 0, 0))
													{
														iLocal_3651 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3667[0], 1) < 30f)
										{
											if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
											{
												iLocal_3551 = 1;
											}
											if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												if (__LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
												{
													if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_3667[0]))
													{
														iLocal_3551 = 1;
													}
												}
											}
											if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
											{
												iLocal_3551 = 1;
											}
										}
										if (iLocal_3551 == 1)
										{
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3667[0], ENTITY::GET_ENTITY_COORDS(iLocal_3667[0], true), 10f, false, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3667[0], 50, true);
											TASK::TASK_COMBAT_PED(iLocal_3667[0], PLAYER::PLAYER_PED_ID(), 0, 16);
											iLocal_3550 = 1;
										}
									}
								}
								else if (iLocal_3580 == 0)
								{
									HUD::CLEAR_PRINTS();
									__LIB_0__::func_429();
									__LIB_0__::func_222(&uLocal_3245, 4, iLocal_3667[0], "JAVIER", 0, 1);
									if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_ATTACK", 7, 0, 0, 0))
									{
										iLocal_3652 = MISC::GET_GAME_TIMER();
										iLocal_3580 = 1;
									}
								}
								else if (MISC::GET_GAME_TIMER() > iLocal_3652 + 4000)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											__LIB_0__::func_222(&uLocal_3245, 4, iLocal_3667[0], "JAVIER", 0, 1);
											if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_ATTACK", 7, 0, 0, 0))
											{
												iLocal_3652 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(uLocal_3915[0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_3915[0]));
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_3915[0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_3915[0]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3667[1], false))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a") > 0.587f)
									{
										TASK::TASK_WRITHE(iLocal_3667[1], PLAYER::PLAYER_PED_ID(), 25, 0, false, -1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3667[1], true, false);
									}
								}
							}
							else if (HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
							{
								HUD::REMOVE_BLIP(&(uLocal_3915[1]));
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
						{
							HUD::REMOVE_BLIP(&(uLocal_3915[1]));
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_3915[0]) && !HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
						{
							__LIB_0__::func_345(&uLocal_28, 0, 0);
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
							STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
							STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
							iLocal_3637++;
						}
					}
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2807.4292f, 4802.9805f, 45.975845f, 2806.6736f, 4799.8135f, 48.22693f, 3.5f, false, true, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_3909))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&iLocal_3909);
					}
					STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
					iLocal_3637++;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_3909))
				{
					iLocal_3909 = HUD::ADD_BLIP_FOR_COORD(2807.9f, 4800.7f, 47.1f);
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_3909, true);
					__LIB_0__::func_229("M1_GOD1", 7500, 1);
				}
				break;
		}
		if (iLocal_3637 >= 2)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 4);
			AUDIO::STOP_STREAM();
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

int func_750()//Position - 0x96EE3
{
	if (iLocal_3423 == 1)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3672, 1) < 100f)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_3911))
						{
							iLocal_3911 = __LIB_0__::func_639(iLocal_3672, 0, 0);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_3911))
					{
						HUD::REMOVE_BLIP(&iLocal_3911);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_3911))
				{
					HUD::REMOVE_BLIP(&iLocal_3911);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_3911))
			{
				HUD::REMOVE_BLIP(&iLocal_3911);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_3911))
		{
			HUD::REMOVE_BLIP(&iLocal_3911);
		}
	}
	if (iLocal_3541 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2803.8f, 4798.1f, 47.7f, true) < 100f)
		{
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			iLocal_3541 = 1;
		}
	}
	if (iLocal_3541 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2803.8f, 4798.1f, 47.7f, true) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_3541 = 0;
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_38__::func_186("Trevor", PLAYER::PLAYER_PED_ID(), joaat("Player_Two"), 2);
		}
	}
	if (iLocal_3423 == 1)
	{
		func_769();
	}
	if (iLocal_3492 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_DAMAGED_PLANE_MASTER", 0))
				{
					AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_3671);
					iLocal_3492 = 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) < 30000f)
				{
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				}
			}
		}
	}
	if (iLocal_3495 == 0)
	{
		if (__LIB_17__::func_341() == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
				{
					iLocal_3495 = 1;
				}
			}
		}
	}
	if (iLocal_3495 == 1)
	{
		if (__LIB_17__::func_341() == 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
				{
					__LIB_0__::func_497(394, 1, 0);
					iLocal_3495 = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_3201[0], 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_3201[0]))
		{
			PED::DELETE_PED(&(uLocal_3201[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
	{
		if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3685, 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3685))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3782))
			{
				OBJECT::DELETE_OBJECT(&iLocal_3782);
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_3685);
		}
	}
	if (!iLocal_3423)
	{
		func_681(2, "STAGE_CHASE_PLANE", 0, 0, 0, 1);
		iLocal_3532 = 0;
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		iLocal_3787 = PED::ADD_SCENARIO_BLOCKING_AREA(957.9f, 3051.7f, 76.7f, 1898.5f, 3195.2f, 32.3f, false, true, true, true);
		iLocal_3789 = PED::ADD_SCENARIO_BLOCKING_AREA(2782.5f, 4496.7f, 50.8f, 2787.3f, 4519.3f, 42.5f, false, true, true, true);
		func_731();
		fLocal_3626 = 0.4f;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
			{
				iLocal_3641 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3641, "PLANE_ON_FIRE", iLocal_3671, 0, false, 0);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_3626);
				}
			}
		}
		iLocal_3453 = 0;
		iLocal_3545 = 0;
		iLocal_3454 = 0;
		iLocal_3455 = 0;
		iLocal_3456 = 0;
		iLocal_3457 = 0;
		iLocal_3459 = 0;
		iLocal_3460 = 0;
		iLocal_3462 = 0;
		iLocal_3464 = 0;
		iLocal_3465 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3470 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3475 = 0;
		iLocal_3477 = 0;
		iLocal_3484 = 0;
		iLocal_3485 = 0;
		iLocal_3486 = 0;
		iLocal_3489 = 0;
		iLocal_3487 = 0;
		iLocal_3490 = 0;
		iLocal_3488 = 0;
		iLocal_3491 = 0;
		iLocal_3493 = 0;
		iLocal_3495 = 0;
		iLocal_3501 = 0;
		iLocal_3502 = 0;
		iLocal_3503 = 0;
		iLocal_3504 = 0;
		iLocal_3505 = 0;
		iLocal_3506 = 0;
		iLocal_3507 = 0;
		iLocal_3508 = 0;
		iLocal_3510 = 0;
		iLocal_3511 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516 = 0;
		iLocal_3517 = 0;
		iLocal_3518 = 0;
		iLocal_3519 = 0;
		iLocal_3520 = 0;
		iLocal_3521 = 0;
		iLocal_3522 = 0;
		iLocal_3534 = 0;
		iLocal_3535 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3540 = 0;
		iLocal_3542 = 0;
		iLocal_3541 = 0;
		iLocal_3546 = 0;
		iLocal_3549 = 0;
		iLocal_3547 = 0;
		iLocal_3550 = 0;
		iLocal_3551 = 0;
		iLocal_3531 = 0;
		iLocal_3579 = 0;
		iLocal_3581 = 0;
		iLocal_3582 = 0;
		iLocal_3633 = 0;
		while (iLocal_3633 <= 19)
		{
			iLocal_3451[iLocal_3633] = 0;
			iLocal_3633++;
		}
		iLocal_3633 = 0;
		while (iLocal_3633 <= 5)
		{
			iLocal_3494[iLocal_3633] = 0;
			iLocal_3633++;
		}
		iLocal_3633 = 0;
		while (iLocal_3633 <= 2)
		{
			iLocal_3525[iLocal_3633] = 0;
			iLocal_3633++;
		}
		SYSTEM::SETTIMERB(0);
		PATHFIND::SET_ROADS_IN_AREA(Local_3616, Local_3617, false, true);
		PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, false, true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sanchez"), true);
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(false);
		__LIB_0__::func_505(iLocal_3672, -1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
		}
		MISC::SET_INSTANCE_PRIORITY_HINT(2);
		__LIB_16__::func_18(1);
		iLocal_3788 = PED::ADD_SCENARIO_BLOCKING_AREA(2756.5f, 4523.2f, 72f, 2916.2f, 4821.8f, 36.9f, false, true, true, true);
		iLocal_3793 = PED::ADD_SCENARIO_BLOCKING_AREA(2813.7f, 4807.9f, 51.5f, 2803.1f, 4795.8f, 44.6f, false, true, true, true);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(iLocal_3672, -1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 20f);
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[0], false);
		}
		if (iLocal_3449[2] == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
			{
				iLocal_3795[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3671, Local_3608, Local_3620, 1f, false, false, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(iLocal_3795[1], 2f);
				iLocal_3449[2] = 1;
			}
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3916))
		{
			iLocal_3916 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 20.82167f, 1743.0106f, 221.84955f, 11.511129f, 0f, 165.5968f, 34.700695f, false, 2);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3917))
		{
			iLocal_3917 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 28.231022f, 1742.3815f, 221.2972f, 27.23873f, 0f, 144.93054f, 34.700695f, false, 2);
		}
		if (!CAM::DOES_CAM_EXIST(iLocal_3919))
		{
			iLocal_3919 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 26.255728f, 1737.435f, 225.46613f, -14.318232f, 2.157022f, -28.279879f, 50.028435f, false, 2);
		}
		__LIB_37__::func_864(1, 0);
		__LIB_37__::func_864(2, 0);
		__LIB_37__::func_864(7, 0);
		__LIB_37__::func_864(8, 0);
		__LIB_37__::func_864(9, 0);
		__LIB_37__::func_864(10, 0);
		__LIB_37__::func_864(4, 0);
		__LIB_37__::func_864(12, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_229("BFCHASE", 7500, -1);
		iLocal_3638 = 0;
		iLocal_3637 = 0;
		fLocal_3630 = 1f;
		iLocal_3532 = 1;
		iLocal_3423 = 1;
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
				{
					fLocal_3625 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671);
				}
			}
		}
		switch (iLocal_3637)
		{
			case 0:
				if (iLocal_3453)
				{
					if ((ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 25f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 293f) || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 354f)
					{
						MISC::SET_TIME_SCALE(1f);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
						}
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_WIDESCREEN_BORDERS(false, 500);
						iLocal_3453 = 0;
						iLocal_3545 = 1;
						iLocal_3638 = 99;
					}
					switch (iLocal_3638)
					{
						case 0:
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
							{
								AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
							}
							SYSTEM::SETTIMERA(0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 7f, 4);
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_BUS_JUMP");
							iLocal_3638++;
							break;
						case 1:
							if (SYSTEM::TIMERA() > 500 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
							{
								fLocal_3630 = (fLocal_3630 / 1.15f);
								MISC::SET_TIME_SCALE(fLocal_3630);
								if (fLocal_3630 <= 0.25f)
								{
									fLocal_3630 = 0.25f;
									MISC::SET_TIME_SCALE(0.25f);
									iLocal_3638++;
								}
							}
							break;
						case 2:
							if (iLocal_3468 == 0)
							{
								__LIB_0__::func_429();
								HUD::CLEAR_PRINTS();
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_JUMP3", 7, 0, 0, 0))
								{
									iLocal_3468 = 1;
								}
							}
							iLocal_3638++;
							break;
						case 3:
							if (SYSTEM::TIMERA() > 1000 || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
							{
								fLocal_3630 = (fLocal_3630 * 1.15f);
								MISC::SET_TIME_SCALE(fLocal_3630);
								if (fLocal_3630 >= 1f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
									{
										AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
									}
									MISC::SET_TIME_SCALE(1f);
									iLocal_3638 = 0;
									iLocal_3453 = 0;
									iLocal_3545 = 1;
									iLocal_3638++;
								}
							}
							break;
					}
				}
				else
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (iLocal_3459 == 1 && MISC::GET_GAME_TIMER() > iLocal_3634 + 7000)
						{
							func_765();
						}
						if (iLocal_3459 == 0)
						{
							func_765();
						}
					}
					func_764();
					if (iLocal_3465 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3672))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3672) > 21000f)
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3672);
									VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
									iLocal_3465 = 1;
								}
							}
							else
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
								iLocal_3465 = 1;
							}
						}
					}
					if (iLocal_3477 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
							{
								if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) > 18952f)
								{
									CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
									iLocal_3477 = 1;
								}
							}
						}
					}
					if (iLocal_3475 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
									{
										iLocal_3475 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3460 == 0)
					{
						__LIB_0__::func_229("BFCHASE", 7500, 1);
						iLocal_3460 = 1;
					}
					if (!PED::IS_PED_INJURED(iLocal_3661))
					{
						func_763();
					}
					if (iLocal_3545 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -5.680077f, 1710.6708f, 230.73805f, 10.925901f, 1699.6661f, 224.22841f, 5.25f, false, true, 0))
							{
								if ((ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 25f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 293f) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 354f)
								{
									fLocal_3630 = 0.3f;
									iLocal_3638 = 0;
									iLocal_3453 = 1;
								}
							}
						}
					}
					if (iLocal_3545 == 1)
					{
						if (iLocal_3546 == 0)
						{
							if (CAM::IS_GAMEPLAY_CAM_RENDERING())
							{
								if (CAM::DOES_CAM_EXIST(iLocal_3916))
								{
									CAM::DESTROY_CAM(iLocal_3916, false);
								}
								if (CAM::DOES_CAM_EXIST(iLocal_3917))
								{
									CAM::DESTROY_CAM(iLocal_3917, false);
								}
								if (CAM::DOES_CAM_EXIST(iLocal_3919))
								{
									CAM::DESTROY_CAM(iLocal_3919, false);
								}
								MISC::SET_TIME_SCALE(1f);
								iLocal_3546 = 1;
							}
						}
						if (iLocal_3547 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, true, true);
									CAM::SHAKE_GAMEPLAY_CAM("small_explosion_shake", 0.2f);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 2f, 3);
									iLocal_3547 = 1;
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) < 105199f)
							{
								func_757(iLocal_3671, PLAYER::PLAYER_PED_ID(), &fLocal_3626, 0.45f, 90f, 107f, 125f, 2f, 0f, 0.95f, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_3626);
							}
							else
							{
								func_757(iLocal_3671, PLAYER::PLAYER_PED_ID(), &fLocal_3626, 0.55f, 95f, 105f, 125f, 2f, 0f, 1.3f, 1);
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_3626);
								if (iLocal_3464 == 0)
								{
									iLocal_3464 = 1;
								}
							}
						}
					}
					if (iLocal_3462 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3675))
						{
							if (fLocal_3625 > 72000f && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3675, 1) < 200f)
							{
								if (iLocal_3538 == 0)
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, true);
									iLocal_3645 = MISC::GET_GAME_TIMER();
									iLocal_3538 = 1;
								}
								else if (iLocal_3539 == 0)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3645 + 3000)
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, true);
										iLocal_3645 = MISC::GET_GAME_TIMER();
										iLocal_3539 = 1;
									}
								}
								else if (iLocal_3540 == 0)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3645 + 3000)
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "MARTIN1_DISTANT_TRAIN_HORNS_MASTER", 0, true);
										iLocal_3540 = 1;
									}
								}
							}
						}
						if (iLocal_3457 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1529f, 3349f, 37f, 6f, 3f, 4f, false, true, 0))
									{
										if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 65f || ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 270f)
										{
											if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 15f)
											{
												iLocal_3457 = 1;
											}
										}
									}
								}
							}
						}
						if (iLocal_3457 == 1)
						{
							if (iLocal_3454 == 0)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
										{
											AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
											MISC::SET_TIME_SCALE(0.3f);
											fLocal_3630 = 0.3f;
											SYSTEM::SETTIMERA(0);
											AUDIO::TRIGGER_MUSIC_EVENT("SOL1_TRAIN_JUMP");
											if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
											{
												AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
											}
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 4);
											iLocal_3454 = 1;
										}
									}
								}
							}
							else if (iLocal_3455 == 0)
							{
								if (SYSTEM::TIMERA() > 250)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
										{
											if (!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
											{
												MISC::SET_TIME_SCALE(1f);
												AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
												iLocal_3462 = 1;
												iLocal_3455 = 1;
											}
										}
									}
									else
									{
										MISC::SET_TIME_SCALE(1f);
										AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
										iLocal_3462 = 1;
										iLocal_3455 = 1;
									}
								}
								if (SYSTEM::TIMERA() > 379)
								{
									fLocal_3630 = (fLocal_3630 * 1.05f);
									MISC::SET_TIME_SCALE(fLocal_3630);
									if (fLocal_3630 >= 1f)
									{
										MISC::SET_TIME_SCALE(1f);
										AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
										iLocal_3462 = 1;
										iLocal_3455 = 1;
									}
								}
							}
						}
						else if (iLocal_3579 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_JUMP4", 7, 0, 0, 0))
								{
									iLocal_3579 = 1;
								}
							}
						}
					}
					else
					{
						if (iLocal_3531 == 0)
						{
							MISC::SET_TIME_SCALE(1f);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 3);
							iLocal_3531 = 1;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
						{
							AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
						}
					}
					if (fLocal_3625 > 90000f)
					{
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					}
					if (iLocal_3536 == 0)
					{
						if (fLocal_3625 > 108000f)
						{
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_01", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MARTIN_1_02", false, -1))
							{
								iLocal_3536 = 1;
							}
						}
					}
					else if (iLocal_3537 == 0)
					{
						if (fLocal_3625 > 117262f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
							{
								AUDIO::STOP_STREAM();
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "MARTIN_1_PLANE_CRASH_MASTER", iLocal_3671, 0, false, 0);
								iLocal_3537 = 1;
							}
						}
					}
					if (iLocal_3542 == 0)
					{
						if (fLocal_3625 > 117262f)
						{
							if (__LIB_0__::func_64(&uLocal_3796, 84))
							{
								__LIB_0__::func_544(84, 1, 0, 1, 0);
								iLocal_3542 = 1;
							}
						}
					}
					if (iLocal_3484 == 0)
					{
						if (fLocal_3625 > 108000f)
						{
							AUDIO::PREPARE_MUSIC_EVENT("SOL1_CRASH");
							STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGang_01"));
							STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
							iLocal_3484 = 1;
						}
					}
					else if (iLocal_3493 == 0)
					{
						if (fLocal_3625 > 117262f)
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
							{
								AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
							{
								AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
							{
								AUDIO::START_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
							}
							if (iLocal_3466 == 0)
							{
								AUDIO::STOP_SOUND(iLocal_3641);
								iLocal_3466 = 1;
							}
							STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
							STREAMING::REQUEST_ANIM_DICT("missmartin1@exit_plane");
							STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CRASH");
							iLocal_3493 = 1;
						}
					}
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (fLocal_3625 > 116262f)
							{
								iLocal_3795[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_crash_dust", iLocal_3671, Local_3620, Local_3620, 1f, false, false, false);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (fLocal_3625 > 119000f)
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3671, 0, false, true);
							}
						}
					}
					if (iLocal_3467 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
							{
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
								}
								if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[2]))
								{
									GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[2], false);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
								{
									if (!PED::IS_PED_INJURED(iLocal_3661))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_3661, 2808.387f, 4795.484f, 45.8104f, true, false, false, true);
										ENTITY::SET_ENTITY_COLLISION(iLocal_3661, false, false);
									}
								}
								VEHICLE::DELETE_VEHICLE(&iLocal_3671);
								if (STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash")))
								{
									iLocal_3784 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.4487f, 47.668404f, true, true, false);
									ENTITY::SET_ENTITY_COLLISION(iLocal_3784, false, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_3784, 0f, 0f, -11.340065f, 2, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_3784, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3784, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3784, true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
								}
								if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_dead_pilot"))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
									{
										if (!PED::IS_PED_INJURED(iLocal_3661))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3661, true);
											ENTITY::SET_ENTITY_COORDS(iLocal_3661, 2808.387f, 4795.484f, 45.8104f, true, false, false, true);
											ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3661, iLocal_3784, 0, -0.54f, 5.7f, 0.03f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
											TASK::TASK_PLAY_ANIM(iLocal_3661, "missmartin1@leadinoutmartin_1_dead_pilot", "dead_pilot_leadin_loop", 1000f, -8f, -1, 9, 0f, false, false, false);
											PED::SET_PED_KEEP_TASK(iLocal_3661, true);
											ENTITY::SET_ENTITY_COLLISION(iLocal_3661, false, false);
											PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3661, 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
											PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3661, 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
											PED::SET_PED_CAN_BE_TARGETTED(iLocal_3661, false);
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_3661, "dead_1", 0);
										}
									}
								}
								if ((STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGang_01")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@exit_plane"))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
									{
										iLocal_3667[0] = PED::CREATE_PED(26, joaat("G_M_Y_MexGang_01"), 2807.312f, 4802.314f, 46.3392f, 78.4343f, true, true);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 0, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 1, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 2, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 3, 1, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 4, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 6, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 7, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 8, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 9, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 10, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 11, 0, 0, 0);
										PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3667[0]);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3667[0], true);
										WEAPON::GIVE_WEAPON_TO_PED(iLocal_3667[0], joaat("WEAPON_PISTOL"), 100, false, true);
										PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3667[0], 1, 0.36f, 0.71f, "ShotgunSmall");
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3667[0], ENTITY::GET_ENTITY_COORDS(iLocal_3667[0], true), 10f, false, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3667[0], 50, true);
										TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b", 2804.3113f, 4798.0303f, 46.7273f, 0f, 0f, -0.21f, 8f, -1000f, -1, 4096, 0f, 2, 0);
										iLocal_3656 = MISC::GET_GAME_TIMER();
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
									{
										iLocal_3667[1] = PED::CREATE_PED(26, joaat("G_M_Y_MexGoon_02"), 2805.3694f, 4799.1553f, 46.039f, 82.164f, true, true);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 0, 0, 1, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 1, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 2, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 3, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 4, 0, 2, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 5, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 6, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 7, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 8, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 9, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 10, 0, 0, 0);
										PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 11, 0, 0, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3667[1], true);
										PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3667[1], 1, 0.36f, 0.71f, "ShotgunSmall");
										TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a", 2806.272f, 4799.625f, 46.5135f, 0f, 0f, 40f, 8f, -1000f, -1, 4106, 0f, 2, 0);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGang_01"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_02"));
								}
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
								}
								VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
								{
									iLocal_3795[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_wreck", iLocal_3784, Local_3620, Local_3620, 1f, false, false, false);
								}
								iLocal_3795[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_spot", 2803.5f, 4789.3f, 46.6f, 89.5f, 0f, 0f, 1.5f, false, false, false, false);
								iLocal_3795[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2805.4f, 4782.5f, 46.5f, 89.5f, 0f, 74f, 1.5f, false, false, false, false);
								iLocal_3795[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_trail", 2804.1f, 4777.3f, 46.2f, 89.5f, 0f, 74f, 1.5f, false, false, false, false);
								iLocal_3795[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_fire_drip", 2808.2f, 4791.6f, 48.8f, 89.5f, 0f, 169.1f, 1.5f, false, false, false, false);
								iLocal_3795[8] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_tail_fire", 2805.8f, 4788.5f, 49.8f, 89.5f, -100f, -40f, 0.7f, false, false, false, false);
								iLocal_3795[9] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_engine_fire", 2808.6f, 4793.4f, 48.7f, 0f, 0f, -10f, 0.6f, false, false, false, false);
								iLocal_3795[10] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_sol1_plane_elec_crackle", 2809.1f, 4802.4f, 48f, 0f, 0f, 0f, 0.9f, false, false, false, false);
								MISC::SET_INSTANCE_PRIORITY_HINT(0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 2f, 3);
								iLocal_3637++;
							}
						}
					}
				}
				break;
		}
		if (iLocal_3637 >= 1)
		{
			if (iLocal_3449[2] == 1)
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
					iLocal_3449[2] = 0;
				}
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
			__LIB_0__::func_345(&uLocal_28, 0, 0);
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

void func_757(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)//Position - 0x9CBDC
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	if (iLocal_94 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_94 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1287;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = __LIB_17__::func_498(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (__LIB_15__::func_927(iParam1, iParam0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (__LIB_17__::func_497(iParam0, iParam1) < fParam5)
			{
				fVar1 = __LIB_17__::func_496(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_95 = 1;
		}
		else if (iLocal_95)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_95 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1294 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = MISC::GET_FRAME_TIME();
		fVar8 = ((fLocal_1295 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar9 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (!ENTITY::IS_ENTITY_DEAD(iVar9, false))
				{
					iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar10) || VEHICLE::IS_THIS_MODEL_A_BIKE(iVar10))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1285 - fLocal_1286));
							fVar1 = (fVar1 + fLocal_1286);
							fLocal_1284 = fVar1;
							if (fLocal_1284 < fLocal_1286)
							{
								fLocal_1284 = fLocal_1286;
							}
							if (fLocal_1284 > fLocal_1285)
							{
								fLocal_1284 = fLocal_1285;
							}
							PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), fLocal_1284);
						}
					}
				}
			}
		}
	}
}

void func_763()//Position - 0x9D0C9
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_FOCUS_CAM");
	}
	if (iLocal_3477 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_669(1, 1, 0))
		{
			if (fLocal_3625 < 117498f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
				{
					__LIB_17__::func_112(&uLocal_28, iLocal_3671, 0, 0, 1, 1, 1);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_3915[0]) && !HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
				{
					__LIB_17__::func_112(&uLocal_28, iLocal_3671, 0, 0, 1, 1, 1);
				}
			}
			else
			{
				__LIB_0__::func_345(&uLocal_28, 0, 0);
			}
		}
		else
		{
			__LIB_0__::func_345(&uLocal_28, 0, 0);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_669(1, 1, 0))
	{
		if (iLocal_3456 == 0)
		{
			if (iLocal_3477 == 1)
			{
				if (iLocal_3525[0] == 0)
				{
					__LIB_0__::func_151("BFHELPTXT2", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_3525[0] = 1;
				}
				else if (iLocal_3525[1] == 0)
				{
					if (SYSTEM::TIMERB() > 15000)
					{
						__LIB_0__::func_151("BFHELPTXT2", -1);
						SYSTEM::SETTIMERB(0);
						iLocal_3525[1] = 1;
					}
				}
				else if (iLocal_3525[2] == 0)
				{
					if (SYSTEM::TIMERB() > 10000)
					{
						__LIB_0__::func_151("BFHELPTXT2", -1);
						SYSTEM::SETTIMERB(0);
						iLocal_3525[2] = 1;
					}
				}
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				iLocal_3456 = 1;
			}
		}
	}
	else if (__LIB_0__::func_1("BFHELPTXT2"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_764()//Position - 0x9D266
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			if (iLocal_3494[0] == 0)
			{
				if (fLocal_3625 > 17960f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[0] = 1;
				}
			}
			if (iLocal_3494[1] == 0)
			{
				if (fLocal_3625 > 29010f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[1] = 1;
				}
			}
			if (iLocal_3494[2] == 0)
			{
				if (fLocal_3625 > 55700f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[2] = 1;
				}
			}
			if (iLocal_3494[3] == 0)
			{
				if (fLocal_3625 > 65565f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[3] = 1;
				}
			}
			if (iLocal_3494[4] == 0)
			{
				if (fLocal_3625 > 104000f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[4] = 1;
				}
			}
			if (iLocal_3494[5] == 0)
			{
				if (fLocal_3625 > 110000f)
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3671, 3000, 0, 4);
					iLocal_3494[5] = 1;
				}
			}
		}
	}
}

void func_765()//Position - 0x9D393
{
	if (iLocal_3522 == 0)
	{
		if (fLocal_3625 > 13662f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FMC1", 7, 0, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
						iLocal_3522 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3521 == 0)
	{
		if (fLocal_3625 > 23659f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -253.2f, 1556.2f, 335.9f, true) < 10f)
						{
							if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_OROAD", 7, 0, 0, 0))
							{
								AUDIO::PREPARE_MUSIC_EVENT("SOL1_BUS_JUMP");
								iLocal_3521 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3520 == 0)
	{
		if (fLocal_3625 > 24701f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1.431795f, 1704.114f, 217.40277f, -89.1462f, 1637.3384f, 276.54712f, 26f, false, true, 0))
						{
							if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_JUMP1", 7, 0, 0, 0))
							{
								iLocal_3520 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3519 == 0)
	{
		if (fLocal_3625 > 30963f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FALL1", 7, 0, 0, 0))
					{
						iLocal_3519 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3518 == 0)
	{
		if (fLocal_3625 > 37858f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3671, 1) < 125f)
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FMC2", 7, 0, 0, 0))
								{
									iLocal_3518 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3517 == 0)
	{
		if (fLocal_3625 > 40402f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FALL2", 7, 0, 0, 0))
					{
						iLocal_3517 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3516 == 0)
	{
		if (fLocal_3625 > 46889f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FALL3", 7, 0, 0, 0))
					{
						iLocal_3516 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3515 == 0)
	{
		if (fLocal_3625 > 53000f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3671, 1) < 125f)
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FMC3", 7, 0, 0, 0))
								{
									iLocal_3515 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3514 == 0)
	{
		if (fLocal_3625 > 60000f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FALL4", 7, 0, 0, 0))
					{
						AUDIO::PREPARE_MUSIC_EVENT("SOL1_TRAIN_JUMP");
						iLocal_3514 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3513 == 0)
	{
		if (fLocal_3625 > 71768f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1496.0836f, 3259.3022f, 34.684143f, 1526.8601f, 3337.125f, 45.199547f, 40f, false, true, 0))
						{
							if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_JUMP2", 7, 0, 0, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3675, false))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUBWAY_TRAIN_HORNS_AIR_HORN", iLocal_3675, 0, false, 0);
								}
								iLocal_3513 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1538.2285f, 3252.8647f, 34.075874f, 1526.8601f, 3337.125f, 45.199547f, 40f, false, true, 0))
						{
							if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_JUMP2", 7, 0, 0, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3675, false))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUBWAY_TRAIN_HORNS_AIR_HORN", iLocal_3675, 0, false, 0);
								}
								iLocal_3513 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3512 == 0)
	{
		if (fLocal_3625 > 76555f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FALL5", 7, 0, 0, 0))
					{
						iLocal_3512 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3582 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1970f, 3815f, 34f, true) < 60f && fLocal_3625 > 84000f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3671, 1) < 125f)
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_TRAILER", 7, 0, 0, 0))
								{
									iLocal_3582 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3511 == 0)
	{
		if (fLocal_3625 > 90000f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3671, 1) < 125f)
							{
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FMC4", 7, 0, 0, 0))
								{
									iLocal_3511 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (fLocal_3625 > 103000f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_CLIFF", 7, 0, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
						}
						iLocal_3510 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3581 == 0)
	{
		if (fLocal_3625 > 117262f)
		{
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_FMC5", 7, 0, 0, 0))
					{
						iLocal_3581 = 1;
					}
				}
			}
		}
	}
}

void func_769()//Position - 0x9DB03
{
	if (iLocal_3501 == 0)
	{
		if (fLocal_3625 > 60000f)
		{
			STREAMING::REQUEST_MODEL(joaat("freight"));
			STREAMING::REQUEST_MODEL(joaat("freightcar"));
			STREAMING::REQUEST_MODEL(joaat("freightcont2"));
			iLocal_3501 = 1;
		}
	}
	if (iLocal_3501 == 1)
	{
		if (iLocal_3451[0] == 0)
		{
			if (fLocal_3625 > 65173f)
			{
				STREAMING::REQUEST_MODEL(joaat("freight"));
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightcont2"));
				if ((STREAMING::HAS_MODEL_LOADED(joaat("freight")) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2")))
				{
					iLocal_3675 = VEHICLE::CREATE_MISSION_TRAIN(22, 1800.49f, 3504.19f, 37.9f, true, 0, 0);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freight"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcar"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("freightcont2"));
					iLocal_3451[0] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3675))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3675, false))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_3675, (fLocal_3626 * 33.3f));
				if (fLocal_3625 > 90000f)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3675, 1) > 250f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3675))
					{
						VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_3675, false);
					}
				}
			}
		}
	}
	if (Global_96874 == 0)
	{
		if (iLocal_3503 == 0)
		{
			if (fLocal_3625 > 21000f)
			{
				STREAMING::REQUEST_MODEL(joaat("hauler"));
				STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TRK");
				iLocal_3503 = 1;
			}
		}
		if (iLocal_3503 == 1)
		{
			if (iLocal_3451[1] == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("hauler"));
				STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TRK");
				if ((STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_TRK"))
				{
					if (fLocal_3625 > 26640f)
					{
						iLocal_3677 = VEHICLE::CREATE_VEHICLE(joaat("hauler"), 716.3976f, 2266.221f, 49.7731f, 31.2793f, true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3677, 294, "BB_SOL_TRK", true);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3677, "MARTIN_1_PASSING_TRUCKS_GROUP", 0f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3677, false))
						{
							iLocal_3662[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3677, 26, joaat("A_M_Y_Business_01"), -1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[0], true);
							PED::SET_PED_KEEP_TASK(iLocal_3662[0], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[0]));
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hauler"));
						iLocal_3451[1] = 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3677))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3677, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3677))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3677) > 15500f)
						{
							Global_96874 = 1;
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3677))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3677, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3677))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_3677, fLocal_3626);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3677, iLocal_3672))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3677);
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_3452[1] == 0)
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TRK");
					iLocal_3452[1] = 1;
				}
				if (__LIB_0__::func_76(iLocal_3677, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3677))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3677, 0f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[0]))
					{
						PED::DELETE_PED(&(iLocal_3662[0]));
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_3677);
				}
			}
		}
	}
	if (iLocal_3504 == 0)
	{
		if (fLocal_3625 > 29000f)
		{
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_VAN");
			iLocal_3504 = 1;
		}
	}
	if (iLocal_3504 == 1)
	{
		if (iLocal_3451[2] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("patriot"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_VAN");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("patriot")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_VAN"))
			{
				if (fLocal_3625 > 34302f)
				{
					iLocal_3678 = VEHICLE::CREATE_VEHICLE(joaat("patriot"), 381.9736f, 2468.7913f, 45.1115f, 264.3281f, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3678, 294, "BB_SOL_VAN", true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3678, "MARTIN_1_PASSING_TRUCKS_GROUP", 0f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3678, false))
					{
						iLocal_3662[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3678, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[1], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[1], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[1]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
					iLocal_3451[2] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3678))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3678, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3678))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3678, fLocal_3626);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3678, iLocal_3672))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3678);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3452[2] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_VAN");
						iLocal_3452[2] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3678, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3678, 0f);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[1]))
						{
							PED::DELETE_PED(&(iLocal_3662[1]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3678);
					}
				}
			}
		}
	}
	if (iLocal_3502 == 0)
	{
		if (fLocal_3625 > 20000f)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS");
			iLocal_3502 = 1;
		}
	}
	if (iLocal_3502 == 1)
	{
		if (iLocal_3451[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("bus")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BUS"))
			{
				if (fLocal_3625 > 25650f)
				{
					PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, false, true);
					iLocal_3676 = VEHICLE::CREATE_VEHICLE(joaat("bus"), 143.1083f, 1650.0073f, 227.9803f, 32.0527f, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3676, 294, "BB_SOL_BUS", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3676, 4000f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3676, false))
					{
						iLocal_3662[2] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3676, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[2], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[2], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[2]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
					iLocal_3451[3] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3676))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3676, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3676))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3676, (fLocal_3626 * 2.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3676, iLocal_3672))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3676);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3452[3] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS");
						iLocal_3452[3] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3676, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3676))
					{
						PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, true, true);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[2]))
						{
							PED::DELETE_PED(&(iLocal_3662[2]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3676);
					}
				}
			}
		}
	}
	if (iLocal_3505 == 0)
	{
		if (fLocal_3625 > 37000f)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BLR");
			iLocal_3505 = 1;
		}
	}
	if (iLocal_3505 == 1)
	{
		if (iLocal_3451[4] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("baller"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BLR");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("baller")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BLR"))
			{
				if (fLocal_3625 > 42784f)
				{
					iLocal_3679 = VEHICLE::CREATE_VEHICLE(joaat("baller"), 961.7518f, 2697.2954f, 39.2009f, 85.8753f, true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3679, true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3679, 294, "BB_SOL_BLR", true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3679, false))
					{
						iLocal_3662[3] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3679, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[3], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[3], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[3]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
					iLocal_3451[4] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3679))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3679, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3679))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3679, (fLocal_3626 * 1.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_76(iLocal_3679, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_770(iLocal_3679);
						}
						if (fLocal_3625 > 62784f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3679))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3679);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3679);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[3]));
							VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
						}
					}
				}
				else
				{
					if (iLocal_3452[4] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
						iLocal_3452[4] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3679, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3679))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[3]))
						{
							PED::DELETE_PED(&(iLocal_3662[3]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3679);
					}
				}
			}
		}
	}
	if (iLocal_3506 == 0)
	{
		if (fLocal_3625 > 33000f)
		{
			STREAMING::REQUEST_MODEL(joaat("dilettante"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DIL");
			iLocal_3506 = 1;
		}
	}
	if (iLocal_3506 == 1)
	{
		if (iLocal_3451[5] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("dilettante"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DIL");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("dilettante")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_DIL"))
			{
				if (fLocal_3625 > 38832f)
				{
					iLocal_3680 = VEHICLE::CREATE_VEHICLE(joaat("dilettante"), 1373.666f, 2691.5361f, 36.6655f, 101.0761f, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3680, 294, "BB_SOL_DIL", true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3680, false))
					{
						iLocal_3662[4] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3680, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[4], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[4], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[4]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante"));
					iLocal_3451[5] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3680))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3680, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3680))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3680, fLocal_3626);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_76(iLocal_3680, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_770(iLocal_3680);
						}
					}
					if (fLocal_3625 > 58832f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3680))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3680);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3680);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[4]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
					}
				}
				else
				{
					if (iLocal_3452[5] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
						iLocal_3452[5] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3680, PLAYER::PLAYER_PED_ID(), 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3680))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[4]))
						{
							PED::DELETE_PED(&(iLocal_3662[4]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3680);
					}
				}
			}
		}
	}
	if (iLocal_3507 == 0)
	{
		if (fLocal_3625 > 77000f)
		{
			STREAMING::REQUEST_MODEL(joaat("tornado3"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_TOR");
			iLocal_3507 = 1;
		}
	}
	if (iLocal_3507 == 1)
	{
		if (iLocal_3451[7] == 0)
		{
			if ((STREAMING::HAS_MODEL_LOADED(joaat("tornado3")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_TOR"))
			{
				if (fLocal_3625 > 82241f)
				{
					iLocal_3682 = VEHICLE::CREATE_VEHICLE(joaat("tornado3"), 1890.7859f, 3826.8328f, 31.3937f, 208.6624f, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3682, 294, "BB_SOL_TOR", true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3682, false))
					{
						iLocal_3662[6] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3682, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[6], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[6], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[6]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tornado3"));
					iLocal_3451[7] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3682))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3682, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3682))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3682, (fLocal_3626 * 1.5f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_3682, iLocal_3672))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3682);
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_3452[7] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TOR");
						iLocal_3452[7] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3682, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[6]))
						{
							PED::DELETE_PED(&(iLocal_3662[6]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3682);
					}
				}
			}
		}
	}
	if (iLocal_3508 == 0)
	{
		if (fLocal_3625 > 89000f)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
			iLocal_3508 = 1;
		}
	}
	if (iLocal_3508 == 1)
	{
		if (iLocal_3451[8] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bus"));
			STREAMING::REQUEST_MODEL(joaat("A_M_Y_Business_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("bus")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_Business_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_BUS2"))
			{
				if (fLocal_3625 > 94000f)
				{
					iLocal_3683 = VEHICLE::CREATE_VEHICLE(joaat("bus"), 2501.225f, 4119.913f, 37.4645f, 153.5773f, true, true, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3683, 294, "BB_SOL_BUS2", true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3683, false))
					{
						iLocal_3662[7] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3683, 26, joaat("A_M_Y_Business_01"), -1, true, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3662[7], true);
						PED::SET_PED_KEEP_TASK(iLocal_3662[7], true);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[7]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Business_01"));
					iLocal_3451[8] = 1;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3683))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3683, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3683))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3683, (fLocal_3626 * 1.2f));
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_76(iLocal_3683, PLAYER::PLAYER_PED_ID(), 1) < 80f)
						{
							func_770(iLocal_3683);
						}
					}
					if (fLocal_3625 > 110000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3683))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3683);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3683);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3662[7]));
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
					}
				}
				else
				{
					if (iLocal_3452[8] == 0)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
						iLocal_3452[8] = 1;
					}
					if (__LIB_0__::func_76(iLocal_3683, PLAYER::PLAYER_PED_ID(), 1) > 150f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[7]))
						{
							PED::DELETE_PED(&(iLocal_3662[7]));
						}
						VEHICLE::DELETE_VEHICLE(&iLocal_3683);
					}
				}
			}
		}
	}
	if (iLocal_3470 == 0)
	{
		if (fLocal_3625 > 65000f)
		{
			STREAMING::REQUEST_MODEL(joaat("dump"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Construct_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "BB_SOL_DMP");
			iLocal_3470 = 1;
		}
	}
	else if (iLocal_3471 == 0)
	{
		if (fLocal_3625 > 70000f)
		{
			if ((STREAMING::HAS_MODEL_LOADED(joaat("dump")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Construct_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "BB_SOL_DMP"))
			{
				iLocal_3687 = VEHICLE::CREATE_VEHICLE(joaat("dump"), 2229.2375f, 3861.1123f, 32.4406f, 66.3172f, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dump"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("dump"), true);
				iLocal_3663 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3687, 26, joaat("S_M_Y_Construct_01"), -1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3663, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_3687, "MARTIN_1_DUMP_TRUCK_GROUP", 0f);
				iLocal_3471 = 1;
			}
		}
	}
	else if (iLocal_3472 == 0)
	{
		if (fLocal_3625 > 79600f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3687, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3687))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3687, 294, "BB_SOL_DMP", true);
					iLocal_3472 = 1;
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3687))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3687, false))
			{
				if (fLocal_3625 > 90000f)
				{
					Local_3618 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Local_3619 = { ENTITY::GET_ENTITY_COORDS(iLocal_3687, true) };
					if (Local_3618.f_0 < Local_3619.f_0)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
						}
					}
					else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
			{
				AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
		}
		if (iLocal_3473 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3687, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3687))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_3687, (fLocal_3626 * 1.2f));
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3687) > 52843f)
					{
						func_770(iLocal_3687);
						iLocal_3473 = 1;
					}
					if (fLocal_3625 > 100000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3687))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3687, 0f);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3687);
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3687);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_3663);
						VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3687))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3687))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3687, false))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3687, 1) > 150f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3687))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3663))
						{
							PED::DELETE_PED(&iLocal_3663);
						}
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_3687, 0f);
						VEHICLE::DELETE_VEHICLE(&iLocal_3687);
					}
				}
			}
		}
	}
	if (fLocal_3625 > 45000f)
	{
		if (iLocal_3491 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3684))
				{
					iLocal_3684 = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 754.9153f, 2688.4556f, 39.1427f, 301.681f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3684, true, 1);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3684, 0, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bobcatxl"));
					iLocal_3491 = 1;
				}
			}
		}
		if (iLocal_3486 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Barman_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Barman_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3664[0]))
				{
					iLocal_3664[0] = PED::CREATE_PED(26, joaat("S_M_Y_Barman_01"), 755.7743f, 2691.34f, 39.0932f, 260.5786f, true, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3664[0], true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Barman_01"));
					iLocal_3486 = 1;
				}
			}
		}
		if (iLocal_3485 == 0)
		{
			if (iLocal_3486 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3625 > 50000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3664[0]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[0], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3664[0], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								iLocal_3485 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3664[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3664[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[0], "missmartin1@pointing_sky1@base", "base", 3))
				{
					if (fLocal_3625 > 52000f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3684, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_3664[0], iLocal_3684, 20000, -1, 2f, 1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_3664[0], true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3664[0]));
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3684);
						}
					}
				}
			}
		}
	}
	if (fLocal_3625 > 75000f)
	{
		if (iLocal_3490 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("A_M_M_Tramp_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Tramp_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3664[1]))
				{
					iLocal_3664[1] = PED::CREATE_PED(26, joaat("A_M_M_Tramp_01"), 1663.0045f, 3602.342f, 34.5846f, 308.4162f, true, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3664[1], true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Tramp_01"));
					iLocal_3490 = 1;
				}
			}
		}
		if (iLocal_3488 == 0)
		{
			if (iLocal_3490 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3625 > 78000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3664[1]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[1], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3664[1], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								iLocal_3488 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3664[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3664[1]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[1], "missmartin1@pointing_sky1@base", "base", 3) || fLocal_3625 > 99000f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3664[1]));
				}
			}
		}
	}
	if (fLocal_3625 > 100000f)
	{
		if (iLocal_3489 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Barman_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Barman_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3664[2]))
				{
					iLocal_3664[2] = PED::CREATE_PED(26, joaat("S_M_Y_Barman_01"), 2672.271f, 4338.6265f, 44.4309f, 354.954f, true, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3664[2], true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Barman_01"));
					iLocal_3489 = 1;
				}
			}
		}
		if (iLocal_3487 == 0)
		{
			if (iLocal_3489 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3625 > 105000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3664[2]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[2], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3664[2], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								iLocal_3487 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3664[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3664[2]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[2], "missmartin1@pointing_sky1@base", "base", 3))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3664[2]));
				}
			}
		}
	}
	if (fLocal_3625 > 109000f)
	{
		if (iLocal_3535 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_M_LatHandy_01"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@pointing_sky1@base");
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_LatHandy_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3664[3]))
				{
					iLocal_3664[3] = PED::CREATE_PED(26, joaat("S_M_M_LatHandy_01"), 2825.1704f, 4616.926f, 45.5896f, 14.0262f, true, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3664[3], true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_LatHandy_01"));
					iLocal_3535 = 1;
				}
			}
		}
		if (iLocal_3534 == 0)
		{
			if (iLocal_3535 == 1)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@pointing_sky1@base"))
				{
					if (fLocal_3625 > 113000f)
					{
						if (!PED::IS_PED_INJURED(iLocal_3664[3]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[3], "missmartin1@pointing_sky1@base", "base", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_3664[3], "missmartin1@pointing_sky1@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
								iLocal_3534 = 1;
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3664[3]))
		{
			if (!PED::IS_PED_INJURED(iLocal_3664[3]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_3664[3], "missmartin1@pointing_sky1@base", "base", 3))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_3664[3]));
					STREAMING::REMOVE_ANIM_DICT("missmartin1@pointing_sky1@base");
				}
			}
		}
	}
}

void func_770(int iParam0)//Position - 0x9F330
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_771(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

void func_771(int iParam0)//Position - 0x9F352
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_111)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

int func_772()//Position - 0x9F3EC
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	__LIB_1__::func_33(0);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3671);
		}
	}
	if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		__LIB_0__::func_646();
	}
	if (iLocal_3500 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
		{
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("Player_Two"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sanchez")))
			{
				iLocal_3672 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Local_3607, 328.7128f, true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3672, true, true, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("Player_Two")))
			{
				if (func_589(&(uLocal_3201[2]), 2, iLocal_3672, -1, 1, 0, 0))
				{
					func_507(uLocal_3201[2], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					__LIB_0__::func_222(&uLocal_3245, 2, uLocal_3201[2], "TREVOR", 0, 1);
				}
			}
		}
		else if (__LIB_32__::func_86(&uLocal_3201, 2))
		{
			if (func_861(&uLocal_3201, 1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685) && ENTITY::DOES_ENTITY_EXIST(uLocal_3201[0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_3201[0], iLocal_3685, false))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_3201[0], iLocal_3685, -1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3201[0], true);
						}
					}
				}
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Angry_1", 0);
				__LIB_0__::func_222(&uLocal_3245, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				__LIB_0__::func_222(&uLocal_3245, 0, 0, "MICHAEL", 0, 1);
				iLocal_3500 = 1;
			}
		}
	}
	if (!iLocal_3423)
	{
		iLocal_3532 = 0;
		iLocal_3500 = 0;
		iLocal_3498 = 0;
		iLocal_3458 = 0;
		iLocal_3637 = 0;
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_3909))
		{
			HUD::REMOVE_BLIP(&iLocal_3909);
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -464.7f, 1255.5f, 317f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.0994f);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
		}
		func_731();
		HUD::CLEAR_HELP(true);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
		{
			AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
		}
		MISC::CLEAR_AREA(-401f, 1211f, 325f, 70f, true, false, false, false);
		PATHFIND::SET_ROADS_IN_AREA(Local_3614, Local_3615, false, true);
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		iLocal_3458 = iLocal_3458;
		iLocal_3642 = iLocal_3642;
		iLocal_3921 = 1;
		iLocal_6406 = 0;
		bLocal_6407 = false;
		iLocal_6408 = 0;
		iLocal_6409 = 0;
		iLocal_6410 = 0;
		iLocal_6411 = 0;
		iLocal_6412 = 0;
		iLocal_6413 = 0;
		iLocal_6414 = 0;
		iLocal_6415 = 0;
		iLocal_6445 = 0;
		AUDIO::PREPARE_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
		}
		iLocal_3449[2] = 0;
		__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
		AUDIO::STOP_STREAM();
		SYSTEM::SETTIMERB(0);
		iLocal_3532 = 1;
		iLocal_3423 = 1;
	}
	else
	{
		switch (iLocal_3637)
		{
			case 0:
				__LIB_7__::func_282();
				if (!iLocal_3498)
				{
					if (!iLocal_3497)
					{
						iLocal_3497 = AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_SHOT_DOWN_MASTER", 0);
					}
				}
				if (!iLocal_6406 && SYSTEM::TIMERB() > iLocal_6429)
				{
					__LIB_0__::func_429();
					HUD::CLEAR_PRINTS();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
					{
						AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
					}
					func_9(&Local_3198, 0);
					func_12(&Local_3198, 1);
					SYSTEM::SETTIMERB(0);
					iLocal_6406 = 1;
					Global_31970 = 0;
				}
				if (iLocal_6406 && !bLocal_6407)
				{
					if (!iLocal_3498)
					{
						if (iLocal_3497)
						{
							AUDIO::PLAY_STREAM_FRONTEND();
							iLocal_3498 = 1;
						}
					}
					if (!iLocal_6408 && SYSTEM::TIMERB() > iLocal_6430)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3642, "SOLOMON_1_JET_SHOT_EXPLODE", iLocal_3671, 0, false, 0);
									AUDIO::TRIGGER_MUSIC_EVENT("SOL1_ENGINE_HIT");
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sol1_sniper_impact", iLocal_3671, Local_3608 + Local_6454, Local_6455, fLocal_6456, false, false, false);
								}
							}
						}
						iLocal_6408 = 1;
					}
					if (!iLocal_6409 && SYSTEM::TIMERB() > iLocal_6431)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[0], false);
									}
									iLocal_3795[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3671, Local_3608, Local_3620, 1f, false, false, false);
								}
							}
						}
						iLocal_6409 = 1;
					}
					if (!iLocal_6410 && SYSTEM::TIMERB() > iLocal_6432)
					{
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
						}
						iLocal_6410 = 1;
					}
					if (!iLocal_3449[2] && SYSTEM::TIMERB() > iLocal_6433)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
									{
										GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[0], false);
									}
									iLocal_3795[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke_loop", iLocal_3671, Local_3608, Local_3620, 1f, false, false, false);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(iLocal_3795[1], 2f);
									iLocal_3449[2] = 1;
								}
							}
						}
					}
					if (!iLocal_6412 && SYSTEM::TIMERB() > iLocal_6435)
					{
						__LIB_0__::func_325();
						HUD::CLEAR_PRINTS();
						__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_PLANEHIT", 7, 0, 0, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
						iLocal_6412 = 1;
					}
					if (!iLocal_6411 && SYSTEM::TIMERB() > iLocal_6434)
					{
						__LIB_0__::func_325();
						HUD::CLEAR_PRINTS();
						__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_HIT", 7, 0, 0, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
						iLocal_6411 = 1;
					}
					if (func_775(&uLocal_3922, &uLocal_5163))
					{
						SYSTEM::SETTIMERA(0);
						bLocal_6407 = true;
					}
				}
				if (bLocal_6407)
				{
					if (!iLocal_6414)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
						}
						iLocal_6414 = 1;
					}
					if (!iLocal_6415)
					{
						if (func_773() || SYSTEM::TIMERA() > iLocal_6448)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_3672, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3672))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3672);
									}
								}
							}
							if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
							iLocal_3637++;
							iLocal_6415 = 1;
						}
					}
				}
				break;
			case 1:
				iLocal_3637++;
				break;
		}
		if (iLocal_3637 >= 2)
		{
			func_743(1);
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

int func_773()//Position - 0x9FACC
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	__LIB_0__::func_341(&iVar0, &iVar1, &uVar2, &uVar3, 0, 0);
	if (((IntToFloat(iVar0) > 0.5f || IntToFloat(iVar0) < -0.5f) || IntToFloat(iVar1) > 0.5f) || IntToFloat(iVar1) < -0.5f)
	{
		return 1;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
	{
		return 1;
	}
	return 0;
}

int func_775(var uParam0, var uParam1)//Position - 0x9FC3F
{
	var uVar0;
	float fVar1;
	switch (iLocal_3921)
	{
		case 0:
			break;
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
			CAM::DESTROY_ALL_CAMS(false);
			func_813(uParam0, &iLocal_3671);
			__LIB_16__::func_29(uParam0);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iLocal_6438 + 1, 4);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			CAM::SET_WIDESCREEN_BORDERS(true, 500);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3671);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 294, "DGTitanEntry", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, fLocal_6436);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_6437);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3671, true);
					}
				}
			}
			iLocal_6445 = 0;
			iLocal_6413 = 0;
			iLocal_6458 = 0;
			iLocal_6459 = 0;
			iLocal_6452 = 0;
			iLocal_6453 = 0;
			bLocal_6462 = false;
			iLocal_3921 = 2;
		case 2:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				uVar0 = uVar0;
				uVar0 = func_782(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (!iLocal_6445)
				{
					if (CAM::IS_CAM_SPLINE_PAUSED(uParam0->f_1))
					{
						CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iLocal_6438 + 1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3671);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 294, "DGTitanCrash", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, fLocal_6439);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_6440);
									VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3671, true);
								}
							}
						}
						iLocal_6445 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					if (CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
						{
							CAM::DESTROY_CAM(uParam0->f_1, false);
						}
					}
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_3921 = 3;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		case 3:
			__LIB_15__::func_959(&uLocal_3891);
			__LIB_17__::func_8(&uLocal_3891, iLocal_3672, 2, 1.3f, 1000, 1000, 700, 700, 1045220557);
			__LIB_15__::func_247(&uLocal_3891, 22f, 0f, 5f);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 2f, 3);
			func_778(uParam1, &iLocal_3671, &iLocal_3672);
			__LIB_16__::func_29(uParam1);
			CAM::SET_CAM_ACTIVE(uParam1->f_1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3672, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3672))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3672);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3672, 294, "DGBFReady", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3672, fLocal_6446);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3672, true);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3671);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 294, "DGTitanCrash", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, fLocal_6441);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_6442);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_3671, true);
					}
				}
			}
			iLocal_6461 = -1;
			iLocal_6460 = MISC::GET_GAME_TIMER();
			SYSTEM::SETTIMERA(0);
			iLocal_3921 = 4;
		case 4:
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				uVar0 = func_782(uParam1);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam1->f_1);
				if (!iLocal_6452)
				{
					if (fVar1 >= fLocal_6450)
					{
						iLocal_6449 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_6449, "In", "SHORT_PLAYER_SWITCH_SOUND_SET", true);
						iLocal_6452 = 1;
					}
				}
				if (!iLocal_6453)
				{
					if (fVar1 >= fLocal_6451)
					{
						AUDIO::STOP_SOUND(iLocal_6449);
						iLocal_6453 = 1;
					}
				}
				if (!iLocal_6459)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_6460 + 1565)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortTrevorMid", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_6459 = 1;
					}
				}
				if (!iLocal_6413)
				{
					if (SYSTEM::TIMERA() > iLocal_6447)
					{
						if (iLocal_3497 == 1)
						{
							AUDIO::STOP_STREAM();
							iLocal_3497 = 0;
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -393f, 1223f, 329f, 2000, 2096, 4);
							}
						}
						AUDIO::TRIGGER_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
						iLocal_6413 = 1;
					}
				}
				if (!iLocal_6458)
				{
					if (fVar1 >= fLocal_6457)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_6461 = MISC::GET_GAME_TIMER() + 200;
						iLocal_6458 = 1;
					}
				}
				if (iLocal_6461 != -1 && MISC::GET_GAME_TIMER() >= iLocal_6461)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_6461 = -1;
				}
				if (fVar1 >= 1f)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
					{
						bLocal_6462 = true;
					}
					else
					{
						bLocal_6462 = __LIB_15__::func_966(&uLocal_3891, 1, 1, 1, 0, 0, 0);
					}
					if (bLocal_6462)
					{
						MISC::SET_TIME_SCALE(1f);
						if (CAM::DOES_CAM_EXIST(uParam1->f_1))
						{
							if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
							{
								CAM::DESTROY_CAM(uParam1->f_1, false);
							}
						}
						CAM::DESTROY_ALL_CAMS(false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						AUDIO::STOP_SOUND(iLocal_6449);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_3671, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_3671);
									}
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 1, "BB_SOL_JET", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, fLocal_6443);
									VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, fLocal_6444);
									VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanCrash");
								}
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						}
						STREAMING::REMOVE_ANIM_DICT(sLocal_6404);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						CAM::SET_WIDESCREEN_BORDERS(false, 500);
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
						iLocal_3921 = 0;
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_778(var uParam0, int iParam1, int iParam2)//Position - 0xA05A1
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 9.5194f, 42.635f, -0.8512f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 7.8905f, -0.0652f, 5.4872f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 1f;
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
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { 14.4904f, 30.6943f, -3.5751f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.447f, -0.7788f, 2.6008f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 24.5f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 2f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 1f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.9f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0.8f;
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
		uParam0->f_10[2 /*57*/].f_5 = 900;
		uParam0->f_10[2 /*57*/].f_6 = { 16.7361f, 31.1127f, -5.2246f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 1.5855f, -0.5112f, 1.987f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 24.5f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
		uParam0->f_10[2 /*57*/].f_28 = 2;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.3f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 600;
		uParam0->f_10[3 /*57*/].f_6 = { 24.6776f, 34.653f, -18.4241f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 23.3133f, 36.4863f, 3.5606f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 24.5f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 1f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 1f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 50;
		uParam0->f_10[3 /*57*/].f_42 = 50;
		uParam0->f_10[3 /*57*/].f_43 = 100;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_54 = 1;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 0;
		uParam0->f_10[5 /*57*/].f_6 = { 0.9194f, 2.7878f, 6.4911f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 13.0044f, 0f, 142.8329f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 40f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 1f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
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
		uParam0->f_10[6 /*57*/].f_5 = 600;
		uParam0->f_10[6 /*57*/].f_6 = { 2.1044f, 3.4443f, 0.9265f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 0.1714f, 0.304f, 1.684f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0.75f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = -0.4f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 700;
		uParam0->f_10[7 /*57*/].f_6 = { 1.3806f, 2.0677f, 0.2982f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -0.1853f, 0.2172f, 0.6513f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 40f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 1f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 0;
		uParam0->f_10[7 /*57*/].f_23 = 0.75f;
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
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 300;
		uParam0->f_10[8 /*57*/].f_6 = { 1.3811f, 1.8374f, 0.2559f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 8.5434f, 0f, 137.2264f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 40f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0f;
		uParam0->f_10[8 /*57*/].f_53 = 0;
		uParam0->f_10[8 /*57*/].f_23 = 0.75f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
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
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Martin1_JetToBike.txt";
		uParam0->f_1225 = "CameraInfo_Martin1_JetToBike.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
	uParam0->f_4[1] = *iParam2;
}

int func_782(var uParam0)//Position - 0xA15BC
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_77 = __LIB_0__::func_504(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_77 = __LIB_15__::func_924(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_77 = __LIB_15__::func_923(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_77 = __LIB_15__::func_940(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_77);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		__LIB_15__::func_922(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						case 2:
							sVar2 = "switch_cam_1";
							break;
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							__LIB_15__::func_958(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						case 3:
							__LIB_15__::func_958(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), false);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(__LIB_15__::func_921(), ""))
				{
					__LIB_15__::func_958(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				__LIB_15__::func_920(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			__LIB_15__::func_920(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::RESET_ADAPTATION(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, true);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		__LIB_15__::func_919(0, 0, 1, 1);
	}
	else
	{
		__LIB_15__::func_919(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	__LIB_15__::func_918(uParam0);
	return iVar0;
}

void func_813(var uParam0, int iParam1)//Position - 0xA312F
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.8408f, 12.3731f, 0.1466f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 2.2061f, -0.0863f, 0.6487f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 25f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0.1f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
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
		uParam0->f_10[1 /*57*/].f_5 = 600;
		uParam0->f_10[1 /*57*/].f_6 = { 2.7632f, 10.8777f, 0.202f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.1944f, -0.0942f, 0.5753f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 25f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
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
		uParam0->f_10[2 /*57*/].f_5 = 2500;
		uParam0->f_10[2 /*57*/].f_6 = { 2.5059f, 7.8159f, 0.3064f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 1.9644f, -0.1365f, 0.1968f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 25f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 1;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.56f, 74.1566f, 3.0641f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -8.339f, 0.0002f, -175.0362f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 1f;
		uParam0->f_10[4 /*57*/].f_28 = 2;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
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
		uParam0->f_10[5 /*57*/].f_2 = 1;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 3000;
		uParam0->f_10[5 /*57*/].f_6 = { 3.8913f, -5.8747f, 0.5965f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -3.51f, -0.1071f, -176.1688f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 1f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 1f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
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
		uParam0->f_10[6 /*57*/].f_54 = 1;
		uParam0->f_10[7 /*57*/].f_2 = 1;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 16.2416f, -41.4694f, -2.3709f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 3.018f, -0.2268f, 9.4804f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 45f;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 1f;
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
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 3000;
		uParam0->f_10[8 /*57*/].f_6 = { 12.4154f, -42.9466f, -6.2632f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { 0.5307f, -0.4107f, 6.1259f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 45f;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 1f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0f;
		uParam0->f_10[8 /*57*/].f_30 = 0;
		uParam0->f_10[8 /*57*/].f_31 = 0;
		uParam0->f_10[8 /*57*/].f_33 = 1f;
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
		uParam0->f_1217 = 9;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Martin1_PlaneShotScene.txt";
		uParam0->f_1225 = "CameraInfo_Martin1_PlaneShotScene.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
}

int func_817()//Position - 0xA3E9D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
		{
			if (iLocal_6428 == 0)
			{
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
				iLocal_6428 = 1;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
			{
			}
		}
	}
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	__LIB_1__::func_33(0);
	__LIB_0__::func_646();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	if (iLocal_3423)
	{
		if (iLocal_3647 == 0)
		{
			if (iLocal_6420 == 0)
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_HIT_1_MASTER", 0))
				{
					iLocal_6420 = 1;
				}
			}
		}
		if (iLocal_3647 == 1 && iLocal_6416 == 1)
		{
			if (iLocal_6421 == 0)
			{
				if (AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_HIT_2_MASTER", 0))
				{
					iLocal_6421 = 1;
				}
			}
		}
	}
	Global_31970 = 1;
	if (!iLocal_3423)
	{
		func_681(1, "STAGE_SHOOT_PLANE", 0, 0, 0, 1);
		iLocal_3532 = 0;
		VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanCrash");
		CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		MISC::CLEAR_AREA(Local_3605, 5f, true, false, false, false);
		bLocal_3447 = false;
		bLocal_3446 = false;
		iLocal_3448 = 0;
		iLocal_3461 = 0;
		iLocal_3469 = 0;
		iLocal_3476 = 0;
		iLocal_3481 = 0;
		iLocal_3524 = 0;
		iLocal_3548 = 0;
		iLocal_6405 = 0;
		iLocal_6416 = 0;
		iLocal_6417 = 0;
		iLocal_6418 = 0;
		iLocal_6420 = 0;
		iLocal_6421 = 0;
		iLocal_6422 = 0;
		iLocal_6423 = 0;
		iLocal_6424 = 0;
		iLocal_6425 = 0;
		iLocal_6426 = 0;
		iLocal_6427 = 0;
		iLocal_6428 = 0;
		iLocal_3602 = 0;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		iLocal_3647 = 0;
		iLocal_3636 = 0;
		iLocal_3640 = 0;
		iLocal_3650 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_AREA(-318.28f, 1398.18f, 351.69f, 170f, true, false, false, false);
		MISC::CLEAR_AREA(-397.8f, 1205.1f, 324.8f, 50f, true, false, false, false);
		func_731();
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
		{
			AUDIO::START_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
		}
		if (iLocal_3561 == 1)
		{
			func_826(&uLocal_3410, 0, 0, 2000, 1, 1, 0, 1);
			if (iLocal_3478 == 0)
			{
				func_9(&Local_3198, 1);
				iLocal_3478 = 1;
			}
			iLocal_3480 = 1;
		}
		iLocal_3480 = 1;
		if (!__LIB_0__::func_324())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -455.6177f, 1083.2539f, 326.6815f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.0994f);
		}
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		SYSTEM::SETTIMERB(0);
		iLocal_3638 = 0;
		iLocal_3637 = 0;
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			if (__LIB_0__::func_324())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			__LIB_0__::func_433(iLocal_3685, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		__LIB_0__::func_963(1, 1, 1, 0);
		iLocal_3532 = 1;
		iLocal_3423 = 1;
	}
	else
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if (!iLocal_6405)
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_6404);
			iLocal_6405 = 1;
		}
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 205 /*INPUT_FRONTEND_LB*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 226 /*INPUT_SCRIPT_LB*/, true);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 9, 0);
		switch (iLocal_3637)
		{
			case 0:
				if (iLocal_3476 == 0 && iLocal_3467 == 0)
				{
					if (SYSTEM::TIMERB() > 1000)
					{
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(800);
							iLocal_3476 = 1;
						}
					}
				}
				if (WEAPON::GET_PED_LAST_WEAPON_IMPACT_COORD(PLAYER::PLAYER_PED_ID(), &uLocal_3611))
				{
				}
				if (!bLocal_3447)
				{
					if (iLocal_3647 == 1)
					{
						if (iLocal_6416 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3671);
								}
							}
							if (!CAM::DOES_CAM_EXIST(iLocal_3920) && MISC::GET_GAME_TIMER() > iLocal_3636 + 500)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(true);
								}
								HUD::CLEAR_PRINTS();
								iLocal_6422 = 1;
								func_9(&Local_3198, 0);
								iLocal_3920 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_FOV(iLocal_3920, 22.4f);
								CAM::SHAKE_CAM(iLocal_3920, "SKY_DIVING_SHAKE", 1.5f);
								CAM::ATTACH_CAM_TO_ENTITY(iLocal_3920, iLocal_3671, 4.88167f, 6.58488f, 0.16096f, true);
								CAM::POINT_CAM_AT_ENTITY(iLocal_3920, iLocal_3671, 1.2611f, -2.12109f, 0.750921f, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								HUD::DISPLAY_RADAR(false);
								HUD::DISPLAY_HUD(false);
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								if (iLocal_6420 == 1)
								{
									AUDIO::PLAY_STREAM_FRONTEND();
								}
								iLocal_3648 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_6419 == 0)
							{
								if (CAM::DOES_CAM_EXIST(iLocal_3920) && MISC::GET_GAME_TIMER() > iLocal_3648 + 400)
								{
									iLocal_3795[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sol1_plane_smoke", iLocal_3671, Local_3608, Local_3620, 1f, false, false, false);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_SCALE(iLocal_3795[0], 2f);
									GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3795[0], "Shot1", 1f, false);
									iLocal_3648 = MISC::GET_GAME_TIMER();
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
									iLocal_6419 = 1;
								}
							}
							if (iLocal_6419 == 1 && MISC::GET_GAME_TIMER() > iLocal_3648 + 2500)
							{
								iLocal_6422 = 0;
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								CAM::DESTROY_CAM(iLocal_3920, false);
								func_9(&Local_3198, 1);
								Local_3198.f_15 = 4f;
								iLocal_6416 = 1;
								__LIB_0__::func_151("M1_HELP3", -1);
							}
						}
					}
					if (iLocal_3647 == 2)
					{
						if (iLocal_6416 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
								{
									VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_3671);
								}
							}
							if (!CAM::DOES_CAM_EXIST(iLocal_3920) && MISC::GET_GAME_TIMER() > iLocal_3636 + 500)
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(true);
								}
								HUD::CLEAR_PRINTS();
								iLocal_6422 = 1;
								func_9(&Local_3198, 0);
								iLocal_3920 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_FOV(iLocal_3920, 22.4f);
								CAM::SHAKE_CAM(iLocal_3920, "SKY_DIVING_SHAKE", 1.5f);
								CAM::ATTACH_CAM_TO_ENTITY(iLocal_3920, iLocal_3671, 6.63932f, 5.91098f, 0.482164f, true);
								CAM::POINT_CAM_AT_ENTITY(iLocal_3920, iLocal_3671, 1.87226f, -2.71828f, 0.671346f, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								HUD::DISPLAY_RADAR(false);
								HUD::DISPLAY_HUD(false);
								if (iLocal_6421 == 1)
								{
									AUDIO::PLAY_STREAM_FRONTEND();
								}
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::START_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								iLocal_3648 = MISC::GET_GAME_TIMER();
							}
							if (iLocal_6419 == 0)
							{
								if (CAM::DOES_CAM_EXIST(iLocal_3920) && MISC::GET_GAME_TIMER() > iLocal_3648 + 400)
								{
									if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
									{
										GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3795[0], "Shot2", 1f, false);
									}
									iLocal_3648 = MISC::GET_GAME_TIMER();
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
									iLocal_6419 = 1;
								}
							}
							if (iLocal_6419 == 1 && MISC::GET_GAME_TIMER() > iLocal_3648 + 2500)
							{
								iLocal_6422 = 0;
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_BULLET_HITS_PLANE_SCENE"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_BULLET_HITS_PLANE_SCENE");
								}
								AUDIO::STOP_STREAM();
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								CAM::DESTROY_CAM(iLocal_3920, false);
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								func_9(&Local_3198, 1);
								Local_3198.f_15 = 4f;
								iLocal_6416 = 1;
							}
						}
					}
					if (iLocal_3647 == 3)
					{
						if (iLocal_6416 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
							{
								GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_3795[0], "Shot3", 1f, false);
							}
							iLocal_6416 = 1;
						}
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						bLocal_3446 = true;
						bLocal_3447 = true;
						iLocal_3637 = 1;
						__LIB_0__::func_498(0, -1);
					}
					if (!Local_3198.f_0)
					{
					}
					else
					{
						if (iLocal_3448 == 0)
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
							VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
							iLocal_3448 = 1;
						}
						if (!bLocal_3446)
						{
							if (iLocal_3467 == 0)
							{
								if (iLocal_6418 == 0)
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										__LIB_0__::func_151("M1_HELP2", -1);
										iLocal_6418 = 1;
									}
								}
								if (iLocal_6418 == 1)
								{
									if (iLocal_6417 == 0)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											__LIB_0__::func_151("M1_HELP1", -1);
											iLocal_6417 = 1;
										}
									}
								}
								if (iLocal_3548 == 0 && iLocal_3585 == 0)
								{
									__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
									if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_CONTROL", 7, 0, 0, 0))
									{
										iLocal_3548 = 1;
									}
								}
								if (iLocal_6427 == 0)
								{
									if (iLocal_3585 == 0)
									{
										if (SYSTEM::TIMERB() > 12500)
										{
											iLocal_3640 = MISC::GET_GAME_TIMER();
											iLocal_6427 = 1;
										}
									}
									else if (SYSTEM::TIMERB() > 2500)
									{
										iLocal_3640 = MISC::GET_GAME_TIMER();
										iLocal_6427 = 1;
									}
								}
								if (iLocal_6427 == 1)
								{
									if (MISC::GET_GAME_TIMER() > iLocal_3640 + 1500)
									{
										if (iLocal_6423 == 0)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3671) && iLocal_3647 == 0)
												{
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
													{
														if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
															__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
															if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_SEE", 7, 0, 0, 0))
															{
																iLocal_6423 = 1;
															}
														}
													}
												}
											}
										}
									}
									if (iLocal_6424 == 0 && iLocal_6423 == 1)
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
												if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_LEAD", 7, 0, 0, 0))
												{
													iLocal_6424 = 1;
												}
											}
										}
									}
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
									{
										STREAMING::REQUEST_MODEL(joaat("shamal"));
										STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01")))
										{
											iLocal_3671 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.6176f, -2734.4397f, 12.8201f, 327.2515f, true, true, false);
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_3671, 1);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3671, true, true, false);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3671, true, 1);
											ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3671, true);
											VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
											iLocal_3661 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3671, 26, joaat("S_M_M_Pilot_01"), -1, true, true);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 1, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 2, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 3, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 4, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 5, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 6, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 7, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 8, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 9, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 10, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 11, 0, 0, 0);
											func_821(&Local_3198, &iLocal_3661);
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
											STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
									{
										if (!HUD::DOES_BLIP_EXIST(iLocal_3909))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
											{
												iLocal_3909 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3671);
												HUD::SET_BLIP_AS_FRIENDLY(iLocal_3909, false);
											}
										}
										if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 294, "DGTitanEntry", true);
											VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, 0.616f);
										}
										if (iLocal_6426 == 0)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
												{
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
													{
														if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) > 14136f)
														{
															VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, 0.55f);
															iLocal_6426 = 1;
														}
													}
												}
											}
										}
										if (iLocal_6422 == 0)
										{
											func_819(&Local_3198, Local_3608, &(uLocal_3627[1]), &(uLocal_3628[1]));
										}
										if (iLocal_3469 == 0)
										{
											__LIB_0__::func_151("BFHELPTXT4", -1);
											iLocal_3469 = 1;
										}
										if (iLocal_3481 == 0)
										{
											if (iLocal_3585 == 0)
											{
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													__LIB_0__::func_229("BFDAMAGE", 7500, 1);
													iLocal_3481 = 1;
												}
											}
											else if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
											{
												__LIB_0__::func_229("BFDAMAGE", 4000, 1);
												iLocal_3481 = 1;
											}
										}
									}
								}
								else if (iLocal_3585 == 0)
								{
									if (iLocal_6425 == 0)
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
											{
												__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
												if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_LOOK", 7, 0, 0, 0))
												{
													iLocal_6425 = 1;
												}
											}
										}
									}
								}
							}
						}
						CAM::USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(true, true);
						if (iLocal_3461 == 0)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
								{
									if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) > 20000f)
									{
										__LIB_0__::func_229("SNIPE4", 7500, 1);
										iLocal_3461 = 1;
									}
								}
							}
						}
						if (iLocal_3524 == 0)
						{
							if (SYSTEM::TIMERB() > 1000)
							{
								__LIB_0__::func_499(399, 0);
								if (!bLocal_3446)
								{
									if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										__LIB_0__::func_497(395, 1, 0);
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 16f && CAM::GET_FINAL_RENDERED_CAM_FOV() > 5f)
										{
											if ((((uLocal_3627[1] > 0.49f && uLocal_3627[1] < 0.51f) && uLocal_3628[1] > 0.49f) && uLocal_3628[1] < 0.51f) && !bLocal_3446)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_3636 + 200)
												{
													iLocal_6416 = 0;
													iLocal_6419 = 0;
													iLocal_3636 = MISC::GET_GAME_TIMER();
													iLocal_3647++;
												}
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_3650 + 5000)
											{
												__LIB_0__::func_429();
												__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
												if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
												{
													iLocal_3650 = MISC::GET_GAME_TIMER();
												}
											}
										}
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 5f && CAM::GET_FINAL_RENDERED_CAM_FOV() > 2f)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
												{
													if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
													{
														if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_3671) < 18000f)
														{
															if ((((uLocal_3627[1] > 0.485f && uLocal_3627[1] < 0.515f) && uLocal_3628[1] > 0.485f) && uLocal_3628[1] < 0.515f) && !bLocal_3446)
															{
																if (MISC::GET_GAME_TIMER() > iLocal_3636 + 200)
																{
																	iLocal_6416 = 0;
																	iLocal_6419 = 0;
																	iLocal_3636 = MISC::GET_GAME_TIMER();
																	iLocal_3647++;
																}
															}
															else if (MISC::GET_GAME_TIMER() > iLocal_3650 + 5000)
															{
																__LIB_0__::func_429();
																__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
																__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
																if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
																{
																	iLocal_3650 = MISC::GET_GAME_TIMER();
																}
															}
														}
														else if ((((uLocal_3627[1] > 0.45f && uLocal_3627[1] < 0.55f) && uLocal_3628[1] > 0.45f) && uLocal_3628[1] < 0.55f) && !bLocal_3446)
														{
															if (MISC::GET_GAME_TIMER() > iLocal_3636 + 200)
															{
																iLocal_6416 = 0;
																iLocal_6419 = 0;
																iLocal_3636 = MISC::GET_GAME_TIMER();
																iLocal_3647++;
															}
														}
														else if (MISC::GET_GAME_TIMER() > iLocal_3650 + 5000)
														{
															__LIB_0__::func_429();
															__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
															__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
															if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
															{
																iLocal_3650 = MISC::GET_GAME_TIMER();
															}
														}
													}
												}
											}
										}
										if (CAM::GET_FINAL_RENDERED_CAM_FOV() <= 2f && CAM::GET_FINAL_RENDERED_CAM_FOV() >= 1f)
										{
											if ((((uLocal_3627[1] > 0.46f && uLocal_3627[1] < 0.54f) && uLocal_3628[1] > 0.46f) && uLocal_3628[1] < 0.54f) && !bLocal_3446)
											{
												if (MISC::GET_GAME_TIMER() > iLocal_3636 + 200)
												{
													iLocal_6416 = 0;
													iLocal_6419 = 0;
													iLocal_3636 = MISC::GET_GAME_TIMER();
													iLocal_3647++;
												}
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_3650 + 5000)
											{
												__LIB_0__::func_429();
												__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
												__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
												if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_MISS", 7, 0, 0, 0))
												{
													iLocal_3650 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
				}
				break;
		}
		if (iLocal_3637 >= 1)
		{
			CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(true);
			iLocal_3423 = 0;
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			return 1;
		}
	}
	return 0;
}

void func_819(bool bParam0, struct<3> Param1, var uParam2, var uParam3)//Position - 0xA4EBC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	struct<3> Var17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	Var6 = { CAM::GET_CAM_COORD(bParam0->f_39) };
	Var7 = { ENTITY::GET_ENTITY_ROTATION(bParam0->f_40, 2) };
	fVar8 = 1f;
	fVar9 = 30f;
	fVar10 = (bParam0->f_16 * 1.345f);
	fVar11 = bParam0->f_16;
	Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(0f, fVar9, fVar8) + Param1) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(0f, fVar9, -fVar8) + Param1) };
	Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(0f, (fVar9 - fVar8), 0f) + Param1) };
	Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(0f, (fVar9 + fVar8), 0f) + Param1) };
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(fVar8, fVar9, 0f) + Param1) };
	Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3671, Vector(-fVar8, fVar9, 0f) + Param1) };
	Var12 = { Var0 - Var6 };
	Var13 = { Var1 - Var6 };
	Var14 = { Var2 - Var6 };
	Var15 = { Var3 - Var6 };
	Var16 = { Var4 - Var6 };
	Var17 = { Var5 - Var6 };
	fVar18 = MISC::GET_HEADING_FROM_VECTOR_2D(Var14.f_0, Var14.f_1);
	fVar19 = MISC::GET_HEADING_FROM_VECTOR_2D(Var15.f_0, Var15.f_1);
	fVar20 = MISC::GET_HEADING_FROM_VECTOR_2D(Var16.f_0, Var16.f_1);
	fVar21 = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
	fVar22 = MISC::ATAN2(Var12.f_2, func_820(Var0, Var6, 1, 1));
	fVar23 = MISC::ATAN2(Var13.f_2, func_820(Var1, Var6, 1, 1));
	if (MISC::ABSF((fVar20 - fVar21)) > MISC::ABSF((fVar18 - fVar19)))
	{
		fVar18 = fVar20;
		fVar19 = fVar21;
	}
	fVar24 = Var7.f_2;
	if (fVar24 < 0f)
	{
		fVar24 = (fVar24 + 360f);
	}
	fVar25 = ((fVar18 - fVar24) / fVar10);
	fVar26 = ((fVar19 - fVar24) / fVar10);
	fVar27 = ((fVar22 - Var7.f_0) / fVar11);
	fVar28 = ((fVar23 - Var7.f_0) / fVar11);
	fVar29 = (0.5f - fVar25);
	fVar30 = (0.5f - fVar26);
	fVar31 = (0.5f - fVar27);
	fVar32 = (0.5f - fVar28);
	HUD::SET_WIDESCREEN_FORMAT(1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	fVar33 = MISC::ABSF((fVar29 - fVar30));
	fVar34 = MISC::ABSF((fVar31 - fVar32));
	*uParam2 = ((fVar29 + fVar30) / 2f);
	*uParam3 = ((fVar31 + fVar32) / 2f);
	GRAPHICS::DRAW_RECT(*uParam2, fVar31, fVar33, 0.002f, 255, 0, 0, 128, true);
	GRAPHICS::DRAW_RECT(fVar30, *uParam3, 0.002f, fVar34, 255, 0, 0, 128, true);
	GRAPHICS::DRAW_RECT(*uParam2, fVar32, fVar33, 0.002f, 255, 0, 0, 128, true);
	GRAPHICS::DRAW_RECT(fVar29, *uParam3, 0.002f, fVar34, 255, 0, 0, 128, true);
}

float func_820(struct<3> Param0, struct<3> Param1, bool bParam2, bool bParam3)//Position - 0xA5140
{
	if (bParam2)
	{
		Param0.f_2 = 0f;
		Param1.f_2 = 0f;
	}
	if (bParam3)
	{
		return SYSTEM::VDIST(Param0, Param1);
	}
	return SYSTEM::VDIST2(Param0, Param1);
}

void func_821(bool bParam0, int iParam1)//Position - 0xA517A
{
	struct<3> Var0;
	int iVar1;
	if (!PED::IS_PED_INJURED(*iParam1))
	{
		Var0 = { 0f, 0f, 0f };
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, PLAYER::PLAYER_PED_ID(), true))
		{
			iVar1 = 0;
			PED::GET_PED_LAST_DAMAGE_BONE(*iParam1, &iVar1);
			if (PED::WAS_PED_SKELETON_UPDATED(*iParam1))
			{
				Var0 = { PED::GET_PED_BONE_COORDS(*iParam1, iVar1, 0f, 0f, 0f) };
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true) };
			}
		}
		else if (func_822(bParam0, iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true) };
		}
		if (Var0.f_0 != 0f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam1, false))
			{
				PED::SET_PED_TO_RAGDOLL(*iParam1, 100, 1000, 2, false, false, false);
				ENTITY::APPLY_FORCE_TO_ENTITY(*iParam1, 1, bParam0->f_29 * Vector(4f, 4f, 4f), Var0 - ENTITY::GET_ENTITY_COORDS(*iParam1, true), PED::GET_PED_RAGDOLL_BONE_INDEX(*iParam1, 0), false, false, true, false, true);
			}
			ENTITY::SET_ENTITY_HEALTH(*iParam1, 0, 0);
		}
	}
}

int func_822(var uParam0, var uParam1)//Position - 0xA524B
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	if (!PED::IS_PED_INJURED(*uParam1))
	{
		if (uParam0->f_1)
		{
			fVar0 = func_820(uParam0->f_35, ENTITY::GET_ENTITY_COORDS(*uParam1, true), 0, 0);
			if (fVar0 < 25f)
			{
				Var7 = { CAM::GET_CAM_COORD(uParam0->f_39) };
				if (PED::WAS_PED_SKELETON_UPDATED(*uParam1))
				{
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0.45f, 0f, 0f) };
					Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, -0.45f, 0f, 0f) };
					Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, -0.3f, 0f) };
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, 0f, 0.3f, 0f) };
					Var1 = { PED::GET_PED_BONE_COORDS(*uParam1, 31086, 0f, 0f, 0f) + Vector(0.2f, 0f, 0f) };
					Var8 = { PED::GET_PED_BONE_COORDS(*uParam1, 14201, 0f, 0f, 0f) - Vector(0.2f, 0f, 0f) };
					Var9 = { PED::GET_PED_BONE_COORDS(*uParam1, 52301, 0f, 0f, 0f) - Vector(0.2f, 0f, 0f) };
					if (Var8.f_2 < Var9.f_2)
					{
						Var2 = { Var8 };
					}
					else
					{
						Var2 = { Var9 };
					}
					Var10 = { Var1 - Var7 };
					Var11 = { Var2 - Var7 };
					Var12 = { Var3 - Var7 };
					Var13 = { Var4 - Var7 };
					Var14 = { Var5 - Var7 };
					Var15 = { Var6 - Var7 };
					fVar16 = MISC::GET_HEADING_FROM_VECTOR_2D(Var12.f_0, Var12.f_1);
					fVar17 = MISC::GET_HEADING_FROM_VECTOR_2D(Var13.f_0, Var13.f_1);
					fVar18 = MISC::GET_HEADING_FROM_VECTOR_2D(Var14.f_0, Var14.f_1);
					fVar19 = MISC::GET_HEADING_FROM_VECTOR_2D(Var15.f_0, Var15.f_1);
					fVar20 = MISC::ATAN2(Var10.f_2, func_820(Var1, Var7, 1, 1));
					fVar21 = MISC::ATAN2(Var11.f_2, func_820(Var2, Var7, 1, 1));
					if (MISC::ABSF((fVar18 - fVar19)) > MISC::ABSF((fVar16 - fVar17)))
					{
						fVar16 = fVar18;
						fVar17 = fVar19;
					}
					if (fVar16 > fVar17)
					{
						func_823(&fVar16, &fVar17);
					}
					if (fVar21 > fVar20)
					{
						func_823(&fVar21, &fVar20);
					}
					if (uParam0->f_32 < fVar20)
					{
						if (uParam0->f_32 > fVar21)
						{
							if (uParam0->f_32.f_2 < fVar17)
							{
								if (uParam0->f_32.f_2 > fVar16)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_823(float fParam0, float fParam1)//Position - 0xA546C
{
	var uVar0;
	uVar0 = *fParam0;
	*fParam0 = *fParam1;
	*fParam1 = uVar0;
}

void func_826(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xA5551
{
	int iVar0;
	if (iParam4 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 64);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
	}
	if (!bParam1 && iParam6)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(bParam1, bParam2, iParam3, true, false, 0);
	}
	if (bParam1)
	{
		HUD::CLEAR_HELP(true);
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_4, false);
			}
			CAM::DESTROY_CAM(uParam0->f_4, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
		}
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_1__::func_373(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_13__::func_788();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	if (!bParam1)
	{
		if (Global_113386.f_32749.f_4801 != -15)
		{
			Global_113386.f_32749.f_4801 = __LIB_34__::func_681();
		}
	}
}

int func_827()//Position - 0xA56C5
{
	func_855();
	if (iLocal_3637 > 4 && iLocal_3637 < 7)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3658))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3658, 255, 255, 255, 0, 0);
		}
	}
	if (iLocal_3423)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3690))
		{
			if (__LIB_0__::func_76(iLocal_3690, PLAYER::PLAYER_PED_ID(), 1) > 100f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3690);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3690, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3690);
			}
		}
	}
	if (!iLocal_3423)
	{
		iLocal_3532 = 0;
		iLocal_3478 = 0;
		iLocal_3479 = 0;
		iLocal_3480 = 0;
		iLocal_3482 = 0;
		iLocal_3483 = 0;
		iLocal_3499 = 0;
		iLocal_3533 = 0;
		iLocal_3527 = 0;
		iLocal_3559 = 0;
		iLocal_3561 = 0;
		iLocal_3562 = 0;
		iLocal_3563 = 0;
		iLocal_3566 = 0;
		iLocal_3574 = 0;
		iLocal_3575 = 0;
		iLocal_3576 = 0;
		iLocal_3577 = 0;
		iLocal_3578 = 0;
		iLocal_3594 = 0;
		iLocal_3599 = 0;
		iLocal_3558 = 0;
		__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		HUD::CLEAR_PRINTS();
		CUTSCENE::REMOVE_CUTSCENE();
		__LIB_11__::func_816(2, 1);
		iLocal_3637 = 0;
		iLocal_3646 = 0;
		iLocal_3649 = 0;
		iLocal_3653 = 0;
		iLocal_3791 = PED::ADD_SCENARIO_BLOCKING_AREA(-358.3f, 1130.6f, 333.3f, -323.6f, 1170.2f, 319.6f, false, true, true, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
			{
				iLocal_3665 = uLocal_3201[2];
			}
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_324())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			__LIB_0__::func_433(0, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3673);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
			{
				__LIB_16__::func_843(&uLocal_3692, iLocal_3689, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3689, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
		{
			if (!PED::IS_PED_INJURED(uLocal_3201[2]))
			{
				func_507(uLocal_3201[2], 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		func_507(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		iLocal_3532 = 1;
		iLocal_3423 = 1;
	}
	else
	{
		if (iLocal_3594 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_3201[2]))
			{
				if (!PED::IS_PED_INJURED(uLocal_3201[2]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_3201[2], true);
					iLocal_3594 = 1;
				}
			}
		}
		if (iLocal_3637 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3606, true) < 200f)
				{
					STREAMING::REQUEST_MODEL(joaat("burrito3"));
					STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) && STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded")))
					{
						iLocal_3685 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.519f, 1142.1714f, 323.0888f, 11.2577f, true, true, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3685, true, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3685, 5f);
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(iLocal_3685, true);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_3685, 0, 0);
						VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3685, 10f);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3685, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, true);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, true);
						iLocal_3782 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.1714f, 323.0888f, true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3782, iLocal_3685, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3685);
						SYSTEM::SETTIMERB(0);
					}
				}
			}
			else
			{
				if (SYSTEM::TIMERB() < 2000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, false);
						VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, false);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3685);
					}
				}
				if (iLocal_3559 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3606, true) < 10f)
					{
						iLocal_3559 = 1;
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_3606, true) > 200f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3782))
					{
						OBJECT::DELETE_OBJECT(&iLocal_3782);
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_3685);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
				{
					if (!PED::IS_PED_INJURED(iLocal_3665))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_3665, iLocal_3689, false))
						{
							if (ENTITY::GET_ENTITY_MODEL(iLocal_3689) == joaat("bodhi2"))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3665, 1) < 5f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									Local_3621 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Local_3621, &fLocal_3631, false, false);
									if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1371.3188f, 1149.5133f, 113.36552f, 1371.1558f, 1145.7325f, 115.32128f, 1.5f, false, true, 0) && Local_3621.f_2 > 114.2f) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3689) && Local_3621.f_2 > (fLocal_3631 + 0.2f))) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3689, -0.00188396f, -0.300501f, 1.24172f), 1.5f, 1.5f, 2f, false, true, 0))
									{
										if (iLocal_3562 == 0)
										{
											TASK::CLEAR_PED_TASKS(iLocal_3665);
											if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_3689))
											{
												VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_3689, 2f, 2, false);
											}
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
											if (iLocal_3563 == 0)
											{
												__LIB_0__::func_222(&uLocal_3245, 2, iLocal_3665, "TREVOR", 0, 1);
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "M1_GETOFF", 7, 0, 0, 0))
														{
															iLocal_3653 = MISC::GET_GAME_TIMER();
															iLocal_3563 = 1;
														}
													}
												}
											}
											iLocal_3562 = 1;
										}
										if (iLocal_3563 == 1)
										{
											if (MISC::GET_GAME_TIMER() > iLocal_3653 + 8000)
											{
												__LIB_0__::func_222(&uLocal_3245, 2, iLocal_3665, "TREVOR", 0, 1);
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
												{
													if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													{
														if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "M1_GETOFF", 7, 0, 0, 0))
														{
															iLocal_3653 = MISC::GET_GAME_TIMER();
														}
													}
												}
											}
										}
									}
									else if (iLocal_3562 == 1)
									{
										TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_3665, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
										iLocal_3562 = 0;
									}
								}
								else if (iLocal_3562 == 1)
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_3665, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
									iLocal_3562 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (iLocal_3527 == 0)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_229("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
				iLocal_3527 = 1;
			}
			if (iLocal_3558 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3685, 2);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3685, false);
						iLocal_3558 = 1;
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_3914))
			{
				HUD::REMOVE_BLIP(&iLocal_3914);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_3910))
			{
				HUD::REMOVE_BLIP(&iLocal_3910);
			}
		}
		else
		{
			switch (iLocal_3637)
			{
				case 0:
					if (!HUD::DOES_BLIP_EXIST(iLocal_3910))
					{
						iLocal_3910 = HUD::ADD_BLIP_FOR_COORD(Local_3606);
					}
					HUD::SET_BLIP_ROUTE(iLocal_3910, true);
					AUDIO::TRIGGER_MUSIC_EVENT("SOL1_START");
					__LIB_0__::func_229("BFDRIVE", 7500, 1);
					iLocal_3637++;
					break;
				case 1:
					if (!HUD::DOES_BLIP_EXIST(iLocal_3910))
					{
						if (iLocal_3527 == 1)
						{
							HUD::CLEAR_PRINTS();
							iLocal_3527 = 0;
						}
						iLocal_3910 = HUD::ADD_BLIP_FOR_COORD(Local_3606);
						HUD::SET_BLIP_ROUTE(iLocal_3910, true);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
						{
							AUDIO::START_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
						}
						if (iLocal_3482 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_VEH");
							iLocal_3482 = 1;
						}
					}
					if (iLocal_3574 == 0)
					{
						if (!__LIB_0__::func_75())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_HEAD", 7, 0, 0, 0))
								{
									iLocal_3574 = 1;
								}
							}
						}
					}
					if (iLocal_3578 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_507(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							iLocal_3578 = 1;
						}
					}
					if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_3665) && iLocal_3578 == 1) && MISC::GET_GAME_TIMER() > iLocal_3649 + 30000)
					{
						if (iLocal_3577 == 0)
						{
							if (!__LIB_0__::func_75())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
									if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_BIKE", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
										iLocal_3577 = 1;
									}
								}
							}
						}
						if (iLocal_3575 == 0 && iLocal_3577 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
									__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
									if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_ATVAN", 7, 0, 0, 0))
									{
										iLocal_3575 = 1;
									}
								}
							}
						}
					}
					if (!Global_112433)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_3606, 100f, 100f, 100f, false, true, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_3674 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								}
								if (PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_3479 = 1;
								}
								STREAMING::REQUEST_MODEL(joaat("shamal"));
								STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
								STREAMING::REQUEST_PTFX_ASSET();
								VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
								func_854(&Local_3198);
								iLocal_3637++;
							}
						}
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, false);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, false);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3685);
						}
					}
					if (iLocal_3576 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3685, 1) < 30f)
								{
									__LIB_0__::func_325();
									if (!__LIB_0__::func_75())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											__LIB_0__::func_222(&uLocal_3245, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
											__LIB_0__::func_222(&uLocal_3245, 2, 0, "TREVOR", 0, 1);
											if (__LIB_17__::func_506(&uLocal_3245, "SLM1AUD", "S1_ATVAN2", 7, 0, 0, 0))
											{
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
												iLocal_3576 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3499 == 0)
					{
						if (func_853(&Local_3198))
						{
							MISC::CLEAR_AREA(Local_3605, 5f, true, false, false, false);
							func_852(&Local_3198, Local_3605, fLocal_3624);
							func_851(&Local_3198, 1, -179f, -70f);
							func_850(&Local_3198, -5f, 20f);
							__LIB_9__::func_819(&Local_3198, 0);
							iLocal_3499 = 1;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
					{
						if (STREAMING::HAS_MODEL_LOADED(joaat("shamal")))
						{
							iLocal_3671 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.6176f, -2734.4397f, 12.8201f, 327.2515f, true, true, false);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3671, true);
							VEHICLE::SET_VEHICLE_LIVERY(iLocal_3671, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3671, true, true, false);
							VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
							{
								if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01")))
								{
									iLocal_3661 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3671, 26, joaat("S_M_M_Pilot_01"), -1, true, true);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 1, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 2, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 4, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 5, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 6, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 7, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 8, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 9, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 10, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 11, 0, 0, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3661, true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
								}
							}
						}
					}
					if (iLocal_3479 == 1)
					{
						if (!PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
						{
							iLocal_3479 = 0;
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_3910))
						{
							HUD::REMOVE_BLIP(&iLocal_3910);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_3914))
						{
							if (iLocal_3527 == 1)
							{
								HUD::CLEAR_PRINTS();
								iLocal_3527 = 0;
							}
							iLocal_3914 = __LIB_0__::func_639(iLocal_3685, 0, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3685, 1);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_3685, true);
								iLocal_3558 = 0;
							}
							if (iLocal_3533 == 0)
							{
								__LIB_0__::func_229("SNIPE8", 7500, 1);
								iLocal_3533 = 1;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
						{
							if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_3685, false);
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3685, true);
								}
							}
							if (iLocal_3566 == 0)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_3685, 1) > 150f)
								{
									HUD::SET_BLIP_ROUTE(iLocal_3914, true);
									iLocal_3566 = 1;
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
								{
									AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
								}
								iLocal_3658 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("REMOTE_SNIPER_LOADING");
								AUDIO::TRIGGER_MUSIC_EVENT("SOL1_SNIPER_READY");
								AUDIO::PREPARE_MUSIC_EVENT("SOL1_APP_ACTIVE");
								PLAYER::SET_MAX_WANTED_LEVEL(0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								iLocal_3646 = MISC::GET_GAME_TIMER();
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
								iLocal_3637++;
							}
						}
					}
					break;
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3685, false, true, false);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, false);
							VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, false);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_3685);
						}
					}
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
					if (iLocal_3467 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_3646 + 1500)
						{
							__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_3685, true);
								}
							}
							if (__LIB_0__::func_75())
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_429();
							}
							iLocal_3637++;
						}
					}
					break;
				case 4:
					if (HUD::DOES_BLIP_EXIST(iLocal_3914))
					{
						HUD::REMOVE_BLIP(&iLocal_3914);
					}
					while (!func_843(45, &uLocal_3410, 0, 0, 1, 1, 0))
					{
						iLocal_3561 = 1;
						SYSTEM::WAIT(0);
					}
					if (iLocal_3561 == 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3658))
						{
							SYSTEM::WAIT(0);
						}
						SYSTEM::SETTIMERB(0);
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						iLocal_3637++;
					}
					else
					{
						iLocal_3637 = 7;
					}
					break;
				case 5:
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3658))
					{
						if (iLocal_3483 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("SOL1_APP_ACTIVE");
							SYSTEM::SETTIMERB(0);
							iLocal_3483 = 1;
						}
						__LIB_0__::func_963(1, 1, 1, 0);
						GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_3658, "START_LOADING");
						SYSTEM::SETTIMERA(0);
						iLocal_3635 = MISC::GET_GAME_TIMER();
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SCOPE_UI_MASTER", 0, true);
						iLocal_3637++;
					}
					break;
				case 6:
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_3659))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_3658, "IS_LOAD_ANIM_FINISHED");
						iLocal_3659 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
					if (iLocal_3478 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_3635 + 5999)
						{
							func_9(&Local_3198, 1);
							iLocal_3478 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3635 + 100)
					{
						iLocal_3480 = 1;
					}
					if (MISC::GET_GAME_TIMER() > iLocal_3635 + 6000 && iLocal_3478 == 1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3658);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3674, false))
							{
								MISC::CLEAR_AREA(-386.6838f, 1202.5878f, 324.6417f, 5f, true, false, false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_3674, -386.6838f, 1202.5878f, 324.6417f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_3674, 100.5474f);
								func_828(iLocal_3674, -386.6838f, 1202.5878f, 324.6417f, 100.5474f, 24, 0);
							}
						}
						iLocal_3637++;
					}
					break;
				}
		}
		if (iLocal_3637 > 6 && iLocal_3467 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_3910))
			{
				HUD::REMOVE_BLIP(&iLocal_3910);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_3914))
			{
				HUD::REMOVE_BLIP(&iLocal_3914);
			}
			iLocal_3480 = 1;
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

void func_828(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0xA6703
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		__LIB_17__::func_646(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_0__::func_209(iParam0, &Var0);
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_17__::func_648(iParam3, &Var0, Param1, fParam2, __LIB_0__::func_119(iParam0));
		func_829(iParam3, iParam0, 0);
	}
}

void func_829(int iParam0, int iParam1, int iParam2)//Position - 0xA682C
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_16__::func_841(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = __LIB_34__::func_681();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_343(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						__LIB_13__::func_828(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

bool func_843(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA8928
{
	struct<2> Var0;
	__LIB_17__::func_666(iParam0, &Var0);
	__LIB_13__::func_812(iParam0, &Var0, &(Var0.f_1));
	return func_844(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_844(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA8956
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((__LIB_0__::func_2(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !__LIB_13__::func_692(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, false);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, true, true, false, false);
			}
			__LIB_34__::func_686(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_826(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!__LIB_13__::func_692(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, false);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, true, true, false, false);
				}
				__LIB_34__::func_686(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				func_826(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, false);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, true, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, false, false);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
			}
			__LIB_34__::func_686(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			func_826(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (!uParam0->f_5)
		{
			if (__LIB_38__::func_230(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (__LIB_38__::func_230(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (__LIB_0__::func_645(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					__LIB_38__::func_230(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (__LIB_0__::func_645(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, false, true, false, false);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

void func_850(var uParam0, float fParam1, float fParam2)//Position - 0xAA118
{
	uParam0->f_26 = fParam1;
	uParam0->f_27 = fParam2;
}

void func_851(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0xAA12C
{
	uParam0->f_7 = iParam1;
	uParam0->f_24 = fParam2;
	uParam0->f_25 = fParam3;
}

void func_852(var uParam0, struct<3> Param1, float fParam2)//Position - 0xAA146
{
	if (func_853(uParam0))
	{
		uParam0->f_40 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pool_ball_01"), Param1, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_40, 0f, 0f, fParam2, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_40, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_40, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_40, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pool_ball_01"));
		uParam0->f_39 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_39, uParam0->f_40, 0f, 1f, 0f, true);
		CAM::SET_CAM_ROT(uParam0->f_39, ENTITY::GET_ENTITY_ROTATION(uParam0->f_40, 2), 2);
		uParam0->f_15 = 45f;
		uParam0->f_28 = 1f;
		CAM::SET_CAM_FOV(uParam0->f_39, uParam0->f_15);
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uParam0->f_39, 0.02f);
		uParam0->f_38 = joaat("WEAPON_REMOTESNIPER");
		uParam0->f_9 = 100;
		uParam0->f_22 = 20f;
		uParam0->f_23 = 10f;
		uParam0->f_21 = 1000f;
		uParam0->f_3 = 1;
		uParam0->f_26 = -20f;
		uParam0->f_27 = 45f;
		uParam0->f_20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		uParam0->f_10 = 0;
		uParam0->f_11 = 0;
		*uParam0 = 0;
		uParam0->f_1 = 0;
		uParam0->f_6 = 0;
		uParam0->f_5 = 0;
	}
}

int func_853(var uParam0)//Position - 0xAA264
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pool_ball_01")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_13(), false, -1))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_41))
		{
			return 1;
		}
	}
	uParam0->f_4 = 1;
	return 0;
}

void func_854(var uParam0)//Position - 0xAA29C
{
	STREAMING::REQUEST_MODEL(joaat("prop_pool_ball_01"));
	if (!uParam0->f_2)
	{
		uParam0->f_41 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("remote_sniper_hud");
		uParam0->f_2 = 1;
	}
}

void func_855()//Position - 0xAA2C7
{
	if (iLocal_3637 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
		{
			if (!PED::IS_PED_INJURED(iLocal_3665))
			{
				if (__LIB_0__::func_76(iLocal_3665, PLAYER::PLAYER_PED_ID(), 1) < 20f)
				{
					if (iLocal_3599 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_3665, PLAYER::PLAYER_PED_ID(), -1, 0, 3);
						iLocal_3599 = 1;
					}
				}
				else if (iLocal_3599 == 1)
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_3665);
					iLocal_3599 = 0;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
	{
		if (!PED::IS_PED_INJURED(iLocal_3665))
		{
			if (__LIB_0__::func_76(iLocal_3665, PLAYER::PLAYER_PED_ID(), 1) > 100f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3665))
			{
				PED::DELETE_PED(&iLocal_3665);
				iLocal_3649 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
	{
		if (__LIB_0__::func_76(iLocal_3689, PLAYER::PLAYER_PED_ID(), 1) > 100f || !ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3689))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_3689);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689) && ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
	{
		if (!PED::IS_PED_INJURED(iLocal_3665))
		{
			if (!__LIB_0__::func_75())
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_3665))
				{
					__LIB_0__::func_640(iLocal_3665, "GENERIC_INSULT_MED", 6);
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_3665, iLocal_3689, false))
				{
					TASK::TASK_LEAVE_VEHICLE(iLocal_3665, iLocal_3689, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(iLocal_3665, iLocal_3689, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3665, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_3665, true), 200f, 0, 4)))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_3665, VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(iLocal_3665, true), 200f, 0, 4), -1, -1, 2f, 9, 0);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 0)
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_3665, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3665, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_3665, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_3665, PED::GET_VEHICLE_PED_IS_IN(iLocal_3665, false), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, -1f, 1f, false);
						}
					}
				}
			}
		}
	}
}

int func_858()//Position - 0xAA755
{
	if (!iLocal_3423)
	{
		HUD::REQUEST_ADDITIONAL_TEXT("BFINJEC", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, false, false);
		func_1004();
		HUD::TOGGLE_STEALTH_RADAR(false);
		iLocal_3637 = 0;
		iLocal_3423 = 1;
	}
	else
	{
		switch (iLocal_3637)
		{
			case 0:
				iLocal_3637++;
				break;
		}
		if (iLocal_3637 >= 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			iLocal_3423 = 0;
			return 1;
		}
	}
	return 0;
}

int func_861(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xAA844
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_17__::func_341();
		if (!uParam0->f_23)
		{
			__LIB_42__::func_525(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_42__::func_525((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_17__::func_107(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				}
				break;
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				}
				break;
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
				}
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				}
				break;
		}
		if (__LIB_0__::func_374(__LIB_17__::func_341()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
		{
			if (Global_23011.f_13)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (BitTest(Global_91193[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_91193[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_91229[Global_78588.f_109[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_23011.f_13 = 0;
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_17__::func_438(iVar7);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar7, false, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
				__LIB_17__::func_438(iVar0);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(iVar0, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, true);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_97723 = 1;
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_501();
		__LIB_13__::func_799(iVar2);
		__LIB_37__::func_870();
		__LIB_13__::func_822(iVar2);
		__LIB_43__::func_904(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::isGlobal_43052EqualsValue(0) || __LIB_0__::isGlobal_43052EqualsValue(3)) || __LIB_0__::isGlobal_43052EqualsValue(2)) || __LIB_0__::isGlobal_43052EqualsValue(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!__LIB_0__::func_477())
		{
			__LIB_17__::func_500();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_893(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xAFBCB
{
	__LIB_17__::func_503(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_899(int iParam0, bool bParam1)//Position - 0xB0424
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			PED::DELETE_PED(&iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

void func_900(int iParam0, bool bParam1)//Position - 0xB045C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector(0f, 0f, 2f), true, false, false, true);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, false, true);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			VEHICLE::DELETE_VEHICLE(&iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

int func_954(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xB5ACA
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			func_619(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_612(*iParam0);
			__LIB_17__::func_456(*iParam0, 1, 0);
			__LIB_17__::func_449(*iParam0);
			__LIB_17__::func_448(*iParam0);
			func_591(*iParam0, bParam6);
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

void func_956()//Position - 0xB5B82
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_1001();
	func_1000();
	__LIB_0__::func_345(&uLocal_28, 0, 0);
	func_998();
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	Global_31970 = 0;
	switch (iLocal_3183)
	{
		case 0:
			if (__LIB_17__::func_341() != 0)
			{
				while (!func_954(&(uLocal_3201[0]), 0, 1392.3302f, 1141.6107f, 113.443f, 91.8877f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 1, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1386.8092f, 1142.3643f, 113.334f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 82.7671f);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
			if (__LIB_17__::func_80() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (__LIB_16__::func_327())
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
						{
							__LIB_37__::func_872(&iLocal_3689, 1360.32f, 1166.0765f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
						}
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
						{
							__LIB_37__::func_872(&iLocal_3689, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
						}
					}
					else
					{
						while (!__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (__LIB_17__::func_80() == 0)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						__LIB_37__::func_872(&iLocal_3673, 1360.32f, 1166.0765f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						__LIB_37__::func_872(&iLocal_3673, 1372.0696f, 1131.5979f, 112.8844f, 19.2193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					while (!__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			while (!func_954(&iLocal_3665, 2, 1386.1703f, 1141.1138f, 113.334f, 87.7877f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, 20000, -1, 1f, 1, 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
					{
						TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
						TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_3665, iLocal_3794);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3665, false, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3690))
			{
				iLocal_3690 = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.8268f, 1118.405f, 113.838f, 90.5742f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3690, 112, 112);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fusilade"));
			}
			break;
		case 1:
			if (__LIB_17__::func_341() != 0)
			{
				while (!func_954(&(uLocal_3201[0]), 0, 1392.3302f, 1141.6107f, 113.443f, 91.8877f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1386.8092f, 1142.3643f, 113.334f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 82.7671f);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
			if (__LIB_17__::func_80() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
				{
					while (!__LIB_17__::func_478(&iLocal_3673, 0, 1372.0696f, 1131.5979f, 112.8844f, 19.2193f, 1, 1))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					if (__LIB_16__::func_327())
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
						{
							__LIB_37__::func_872(&iLocal_3689, 1360.32f, 1166.0765f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
						}
						if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
						{
							__LIB_37__::func_872(&iLocal_3689, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
						}
					}
					else
					{
						while (!__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (__LIB_17__::func_80() == 0)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						__LIB_37__::func_872(&iLocal_3673, 1360.32f, 1166.0765f, 112.4975f, 181.0991f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						__LIB_37__::func_872(&iLocal_3673, 1372.0696f, 1131.5979f, 112.8844f, 19.2193f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_16__::func_851());
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
				{
					while (!__LIB_17__::func_478(&iLocal_3689, 2, 1371.1974f, 1146.6389f, 112.7587f, 177.6714f, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			while (!func_954(&iLocal_3665, 2, 1386.1703f, 1141.1138f, 113.334f, 87.7877f, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3689, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3689, 3);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3794);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3665, true);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_3689, 20000, -1, 1f, 1, 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
					{
						TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, 0, 1360.32f, 1166.0765f, 170f, 4, 20f, 20f, -1f, 70, 60, -1f, 0);
						TASK::TASK_HELI_MISSION(0, iLocal_3689, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, -1f, -1f, 100, 90, -1f, 0);
					}
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_3689)))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_3689, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8, 30f, 786599, -1f, -1f, true);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_3794);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_3665, iLocal_3794);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_3794);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_3665, false, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3690))
			{
				iLocal_3690 = VEHICLE::CREATE_VEHICLE(joaat("fusilade"), 1404.8268f, 1118.405f, 113.838f, 90.5742f, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3690, 112, 112);
			}
			break;
		case 2:
			MISC::CLEAR_AREA(Local_3605, 5f, true, false, false, false);
			func_852(&Local_3198, Local_3605, fLocal_3624);
			func_851(&Local_3198, 1, -179f, -70f);
			func_850(&Local_3198, -5f, 20f);
			func_9(&Local_3198, 1);
			__LIB_9__::func_819(&Local_3198, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				iLocal_3685 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), -363.519f, 1142.1714f, 323.0888f, 11.2577f, true, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, true);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3685, true, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3685, 5f);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3685, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3685, 10f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3685, true);
				iLocal_3782 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.1714f, 323.0888f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3782, iLocal_3685, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
			}
			if (__LIB_17__::func_341() != 0)
			{
				while (!func_589(&(uLocal_3201[0]), 0, iLocal_3685, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, -1);
						}
					}
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
			break;
		case 3:
			if (!iLocal_6405)
			{
				STREAMING::REQUEST_ANIM_DICT(sLocal_6404);
				iLocal_6405 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
			{
				iLocal_3685 = VEHICLE::CREATE_VEHICLE(joaat("burrito3"), 138.8186f, 1389.2057f, 253.1271f, 253.6382f, true, true, false);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 2, false, true);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3685, 3, false, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3685, true, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3685, 5f);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_3685, 0, 0);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_3685, 10f);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_3685, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito3"));
				iLocal_3782 = OBJECT::CREATE_OBJECT(joaat("p_rcss_folded"), -363.519f, 1142.1714f, 323.0888f, true, true, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3782, iLocal_3685, 0, 0f, -1.2f, -0.3f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_rcss_folded"));
			}
			if (__LIB_17__::func_341() == 2)
			{
				while (!func_589(&(uLocal_3201[0]), 0, iLocal_3685, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3685, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3685, -1);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
			{
				iLocal_3671 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.6176f, -2734.4397f, 12.8201f, 327.2515f, true, true, false);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3671, true);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3671, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3671, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3671, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_3671))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 294, "DGTitanEntry", true);
					func_988(iLocal_3671, 5000f, 0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
			{
				iLocal_3661 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3671, 26, joaat("S_M_M_Pilot_01"), -1, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 11, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
			}
			func_813(&uLocal_3922, &iLocal_3671);
			func_778(&uLocal_5163, &iLocal_3671, &iLocal_3672);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_6404))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
			{
				iLocal_3672 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Local_3607, 328.7128f, true, true, false);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3672, true, true, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			if (__LIB_17__::func_341() != 2)
			{
				while (!func_589(&(uLocal_3201[2]), 2, iLocal_3672, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				func_507(uLocal_3201[2], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_32__::func_86(&uLocal_3201, 2);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3672, -1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
			{
				iLocal_3671 = VEHICLE::CREATE_VEHICLE(joaat("shamal"), -1638.6176f, -2734.4397f, 12.8201f, 327.2515f, true, true, false);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_3671, 3);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3671, true);
				VEHICLE::SET_VEHICLE_LIVERY(iLocal_3671, 1);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3671, 1, "BB_SOL_JET", true);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_3671, 0.4f);
				func_988(iLocal_3671, 13662f, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("shamal"));
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3671, true, true, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
			{
				iLocal_3661 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3671, 26, joaat("S_M_M_Pilot_01"), -1, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 11, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3672, false))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_3672, 294, "DGBFReady", true);
				func_988(iLocal_3672, 18400f, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
			{
				iLocal_3673 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 2776.957f, 4740.3716f, 44.9082f, 341.7251f, true, true, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3673, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
			}
			if (__LIB_17__::func_341() != 2)
			{
				while (!func_589(&(uLocal_3201[2]), 2, iLocal_3673, -1, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 2);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3673, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3673, -1);
				}
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3673, true, true, false);
			func_507(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			iLocal_3784 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.4487f, 47.668404f, true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_3784, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_3784, 0f, 0f, -11.340065f, 2, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_3784, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3784, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_3784, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
			{
				iLocal_3661 = PED::CREATE_PED(26, joaat("S_M_M_Pilot_01"), 2809.4f, 4801.3f, 47.7f, 0f, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3661, 11, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3661, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_3661, 2808.387f, 4795.484f, 45.8104f, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3661, iLocal_3784, 0, -0.54f, 5.7f, 0.03f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				TASK::TASK_PLAY_ANIM(iLocal_3661, "missmartin1@leadinoutmartin_1_dead_pilot", "dead_pilot_leadin_loop", 1000f, -8f, -1, 9, 0f, false, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_3661, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_3661, false, false);
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3661, 1, 0.515f, 0.814f, 300.781f, 0.975f, 3, 0f, "stab");
				PED::APPLY_PED_BLOOD_SPECIFIC(iLocal_3661, 1, 0.633f, 0.62f, 300.617f, 0.262f, 1, 0f, "ShotgunLargeMonolithic");
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_3661, false);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_3661, "dead_1", 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
			{
				iLocal_3667[0] = PED::CREATE_PED(26, joaat("G_M_Y_MexGang_01"), 2807.312f, 4802.314f, 46.3392f, 78.4343f, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 6, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[0], 11, 0, 0, 0);
				PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_3667[0]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3667[0], true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_3667[0], joaat("WEAPON_PISTOL"), 100, false, true);
				PED::APPLY_PED_BLOOD_BY_ZONE(iLocal_3667[0], 1, 0.36f, 0.71f, "ShotgunSmall");
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_3667[0], ENTITY::GET_ENTITY_COORDS(iLocal_3667[0], true), 10f, false, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_3667[0], 50, true);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3667[0], "missmartin1@exit_plane", "exit_plane_guy_b", 2804.3113f, 4798.0303f, 46.7273f, 0f, 0f, -0.21f, 8f, -1000f, -1, 4096, 0f, 2, 0);
				iLocal_3656 = MISC::GET_GAME_TIMER();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
			{
				iLocal_3667[1] = PED::CREATE_PED(26, joaat("G_M_Y_MexGoon_02"), 2805.3694f, 4799.1553f, 46.039f, 82.164f, true, true);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 10, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_3667[1], 11, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3667[1], true);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_3667[1], "missmartin1@exit_plane", "exit_plane_guy_a", 2806.272f, 4799.625f, 46.5135f, 0f, 0f, 40f, 8f, -1000f, -1, 4106, 0f, 2, 0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGang_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_MexGoon_02"));
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_KILL_PASSENGERS"))
			{
				AUDIO::START_AUDIO_SCENE("MARTIN_1_KILL_PASSENGERS");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("SOL1_CRASHED_PLANE_RT");
			break;
		case 6:
			iLocal_3672 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), 2350.7231f, 3925.1118f, 34.6029f, 298.6736f, true, true, false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3672, true, true, false);
			if (__LIB_17__::func_341() != 2)
			{
				while (!func_954(&(uLocal_3201[2]), 2, -450.3808f, 1065.3434f, 326.5121f, 0, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 2);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			func_507(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			iLocal_3784 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.4487f, 47.668404f, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_3784, 0f, 0f, -11.340065f, 2, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_3784, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3784, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_3784, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_01"));
			break;
		case 7:
			STREAMING::REMOVE_PTFX_ASSET();
			if (__LIB_17__::func_341() != 0)
			{
				while (!func_954(&(uLocal_3201[0]), 0, -365.1108f, 1146.2261f, 323.6802f, 212.6341f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 0, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -365.1108f, 1146.2261f, 323.6802f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 212.6341f);
			}
			if (__LIB_0__::func_323())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3674))
				{
					if (__LIB_13__::func_821())
					{
						__LIB_16__::func_850(0, 0);
						__LIB_17__::func_454(-386.6838f, 1202.5878f, 324.6417f, 20f, 1);
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791()))
						{
							iLocal_3674 = __LIB_31__::func_966(-386.6838f, 1202.5878f, 324.6417f, 100.5474f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_791());
						}
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_3674, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_791());
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_3784 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_shamal_crash"), 2807.692f, 4796.4487f, 47.668404f, true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_3784, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_3784, 0f, 0f, -11.340065f, 2, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_3784, -0.0162f, -0.0524f, -0.1071f, 0.9927f);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3784, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_3784, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_shamal_crash"));
			if (__LIB_0__::func_64(&uLocal_3796, 84))
			{
				__LIB_0__::func_544(84, 1, 0, 1, 0);
			}
			break;
		case 8:
			MISC::CLEAR_AREA(1216.6f, 1852.6f, 78.8f, 60f, true, false, false, false);
			iLocal_3790 = PED::ADD_SCENARIO_BLOCKING_AREA(1288f, 1962.8f, 128.4f, 1139.2f, 1800.8f, 59.5f, false, true, true, true);
			if (__LIB_2__::func_85(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
			if (__LIB_17__::func_341() != 0)
			{
				while (!func_954(&(uLocal_3201[0]), 0, 1204.7f, 1859f, 78.2f, 214.528f, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_32__::func_86(&uLocal_3201, 0);
				func_861(&uLocal_3201, 1, 0, 0);
			}
			if (!__LIB_0__::func_324())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1204.7f, 1859f, 78.2f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 214.528f);
			}
			break;
		case 9:
			func_31();
			break;
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
}

void func_988(int iParam0, float fParam1, int iParam2)//Position - 0xB873D
{
	float fVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			fVar0 = (fVar0 * -1f);
			fParam1 = (fVar0 + fParam1);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam0, fParam1);
			if (iParam2 == 1)
			{
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iParam0);
			}
		}
	}
}

void func_998()//Position - 0xB8AE1
{
	STREAMING::REQUEST_PTFX_ASSET();
	while (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_3792 = PED::ADD_SCENARIO_BLOCKING_AREA(1333f, 1095f, 137f, 1438.9f, 1197f, 109f, false, true, true, true);
	switch (iLocal_3183)
	{
		case 0:
			if (__LIB_17__::func_80() == 2)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (__LIB_17__::func_80() == 0)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			STREAMING::REQUEST_MODEL(joaat("fusilade"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 1:
			if (__LIB_17__::func_80() == 2)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (__LIB_17__::func_80() == 0)
			{
				if (__LIB_16__::func_327())
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
					if (((VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_16__::func_851()) || VEHICLE::IS_THIS_MODEL_A_BIKE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(__LIB_16__::func_851())) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(__LIB_16__::func_851()))
					{
						STREAMING::REQUEST_MODEL(__LIB_16__::func_851());
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_16__::func_851()))
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			STREAMING::REQUEST_MODEL(joaat("fusilade"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("fusilade")))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 2:
			if (__LIB_0__::func_324())
			{
				STREAMING::NEW_LOAD_SCENE_START(-892f, -446f, 173f, 0f, 0f, -103f, 3000f, 0);
			}
			func_854(&Local_3198);
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !func_853(&Local_3198)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanEntry"))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanEntry");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGTitanCrash");
			while (((((((!STREAMING::HAS_MODEL_LOADED(joaat("shamal")) || !STREAMING::HAS_MODEL_LOADED(joaat("burrito3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanEntry")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGBFReady")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "BB_SOL_JET")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGTitanCrash"))
			{
				SYSTEM::WAIT(0);
			}
			while (!AUDIO::LOAD_STREAM("MARTIN_1_LEAR_JET_SHOT_DOWN_MASTER", 0))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 4:
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("shamal"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
			__LIB_38__::func_174(2);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "BB_SOL_JET");
			VEHICLE::REQUEST_VEHICLE_RECORDING(294, "DGBFReady");
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("shamal"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01"))) || !__LIB_38__::func_173(2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "BB_SOL_JET")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(294, "DGBFReady"))
			{
				SYSTEM::WAIT(0);
			}
			break;
		case 5:
			if (__LIB_0__::func_64(&uLocal_3796, 84))
			{
				__LIB_0__::func_544(84, 1, 0, 1, 0);
			}
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGang_01"));
			STREAMING::REQUEST_MODEL(joaat("G_M_Y_MexGoon_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			STREAMING::REQUEST_ANIM_DICT("missmartin1@exit_plane");
			STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_dead_pilot");
			while ((((((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGang_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_MexGoon_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@exit_plane")) || !STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_dead_pilot"))
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_0__::func_323())
			{
				if (__LIB_13__::func_821())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791()))
					{
						__LIB_14__::func_532();
						while (!__LIB_14__::func_531())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			break;
		case 6:
			CUTSCENE::REQUEST_CUTSCENE("Martin_1_mcs_1", 8);
			STREAMING::REQUEST_MODEL(joaat("sanchez"));
			STREAMING::REQUEST_MODEL(joaat("prop_shamal_crash"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_Pilot_01"));
			while (((!STREAMING::HAS_MODEL_LOADED(joaat("sanchez")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_shamal_crash"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Pilot_01"))) || !CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_0__::func_64(&uLocal_3796, 84))
			{
				__LIB_0__::func_544(84, 1, 0, 1, 0);
			}
			break;
		case 7:
			STREAMING::REQUEST_MODEL(joaat("burrito3"));
			STREAMING::REQUEST_MODEL(joaat("p_rcss_folded"));
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 1));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("burrito3")) || !STREAMING::HAS_MODEL_LOADED(joaat("p_rcss_folded"))) || !STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_741(0, 1)))
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_0__::func_323())
			{
				if (__LIB_13__::func_821())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_13__::func_791()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_13__::func_791()))
					{
						__LIB_14__::func_532();
						while (!__LIB_14__::func_531())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			break;
		case 8:
			STREAMING::REQUEST_ANIM_DICT("missmartin1@leadinoutmartin_1_ext");
			while (!STREAMING::HAS_ANIM_DICT_LOADED("missmartin1@leadinoutmartin_1_ext"))
			{
				SYSTEM::WAIT(0);
			}
			break;
	}
}

void func_1000()//Position - 0xB9253
{
	if (HUD::DOES_BLIP_EXIST(iLocal_3909))
	{
		HUD::REMOVE_BLIP(&iLocal_3909);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3910))
	{
		HUD::REMOVE_BLIP(&iLocal_3910);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3911))
	{
		HUD::REMOVE_BLIP(&iLocal_3911);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3912))
	{
		HUD::REMOVE_BLIP(&iLocal_3912);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3913))
	{
		HUD::REMOVE_BLIP(&iLocal_3913);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3914))
	{
		HUD::REMOVE_BLIP(&iLocal_3914);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3915[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_3915[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_3915[1]));
	}
}

void func_1001()//Position - 0xB92EF
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	CUTSCENE::REMOVE_CUTSCENE();
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	MISC::SET_TIME_SCALE(1f);
	if (!__LIB_0__::func_324())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
		}
	}
	if (iLocal_3466 == 0)
	{
		AUDIO::STOP_SOUND(iLocal_3641);
		iLocal_3466 = 1;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
	}
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_START");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_VEH");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SNIPER_READY");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_APP_ACTIVE");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ENGINE_HIT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_BUS_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_TRAIN_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
	AUDIO::STOP_STREAM();
	iLocal_3492 = 0;
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[0], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[1]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[1], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[2]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[2], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[3]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_3795[3], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[4]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[4], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[5]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[5], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[6]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[6], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[7]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[7], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[8]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[8], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[9]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[9], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3795[10]))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3795[10], false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3782))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3782);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3784))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3784);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3786))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3786);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3785))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3785);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3661))
	{
		PED::DELETE_PED(&iLocal_3661);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3663))
	{
		PED::DELETE_PED(&iLocal_3663);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3665))
	{
		PED::DELETE_PED(&iLocal_3665);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3666))
	{
		PED::DELETE_PED(&iLocal_3666);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[0]))
	{
		PED::DELETE_PED(&(iLocal_3667[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3667[1]))
	{
		PED::DELETE_PED(&(iLocal_3667[1]));
	}
	iLocal_3633 = 0;
	while (iLocal_3633 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3664[iLocal_3633]))
		{
			PED::DELETE_PED(&(iLocal_3664[iLocal_3633]));
		}
		iLocal_3633++;
	}
	iLocal_3633 = 0;
	while (iLocal_3633 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3662[iLocal_3633]))
		{
			PED::DELETE_PED(&(iLocal_3662[iLocal_3633]));
		}
		iLocal_3633++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3668))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3668);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3669))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3669);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3670))
	{
		ENTITY::DELETE_ENTITY(&iLocal_3670);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3671))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3671);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3672))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3672);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3673))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3673);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3675))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_3675);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3676))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3676);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3677))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3677);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3678))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3678);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3679))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3679);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3680))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3680);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3681))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3681);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3682))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3682);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3683))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3683);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3684))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3684);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3685))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3685);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3686))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3686);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3687))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3687);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3688))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3688);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3689))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3689);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3690))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3690);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3691))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_3691);
	}
	__LIB_16__::func_18(0);
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanEntry");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGTitanCrash");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "DGBFReady");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "BB_SOL_JET");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TRK");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_VAN");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BLR");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DIL");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BOB");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_TOR");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_BUS2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(294, "BB_SOL_DMP");
	STREAMING::REMOVE_ANIM_DICT("missmartin1@pointing_sky1@base");
	STREAMING::REMOVE_ANIM_DICT("missmartin1@exit_plane");
	STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_A");
	STREAMING::REMOVE_ANIM_DICT("COMBAT@DAMAGE@WRITHEIDLE_B");
	iLocal_3633 = 0;
	while (iLocal_3633 <= 99)
	{
		iLocal_3450[iLocal_3633] = 0;
		iLocal_3633++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3643))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3643, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3644))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3644, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3917))
	{
		CAM::DESTROY_CAM(iLocal_3917, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3916))
	{
		CAM::DESTROY_CAM(iLocal_3916, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_3918))
	{
		CAM::DESTROY_CAM(iLocal_3918, false);
	}
	func_9(&Local_3198, 0);
	func_12(&Local_3198, 1);
	iLocal_3480 = 0;
	MISC::CLEAR_AREA(1388.6f, 1150f, 114f, 70f, true, false, false, false);
}

void func_1004()//Position - 0xB9A9B
{
	iLocal_3637 = 0;
	iLocal_3638 = 0;
}

void func_1006()//Position - 0xB9ACF
{
	func_1007();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1007()//Position - 0xB9AE3
{
	__LIB_10__::func_347(2, 1);
	__LIB_0__::func_54(1, 1);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
	if (iLocal_3466 == 0)
	{
		AUDIO::STOP_SOUND(iLocal_3641);
		iLocal_3466 = 1;
	}
	__LIB_12__::func_849(20, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1367.5f, 1122.5f, 111.4f, 1377.8f, 1138.7f, 117.5f, true, true);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	__LIB_16__::func_18(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_TO_OBSERVATORY"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_TO_OBSERVATORY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_SNIPER_CAMERA"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_SNIPER_CAMERA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CHASE_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CHASE_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_01"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_01");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_TRAIN_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_TRAIN_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_JUMP_TRAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_JUMP_TRAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_CHASE_DUMP_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_CHASE_DUMP_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_PLANE_CRASH"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_PLANE_CRASH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MARTIN_1_DRIVE_BACK"))
	{
		AUDIO::STOP_AUDIO_SCENE("MARTIN_1_DRIVE_BACK");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3915[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_3915[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_3915[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_3915[1]));
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_3909))
	{
		HUD::REMOVE_BLIP(&iLocal_3909);
	}
	CAM::STOP_GAMEPLAY_HINT(false);
	__LIB_0__::func_345(&uLocal_28, 0, 0);
	MISC::SET_TIME_SCALE(1f);
	PATHFIND::SET_ROADS_IN_AREA(105.7f, 1683f, 230f, -11.8f, 1818.4f, 207f, true, true);
	PATHFIND::SET_ROADS_IN_AREA(-9.5f, 1758.3f, 235.3f, 134.5f, 1638.3f, 222.5f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(2299.7f, 4870.2f, 39f, 2307f, 4894.2f, 45f, true, true);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	func_1000();
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_START");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_VEH");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SNIPER_READY");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_APP_ACTIVE");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ENGINE_HIT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_FRANKLIN_STARTS");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_AIR_TRAFFIC");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_BUS_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_TRAIN_JUMP");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_ALMOST_CRASHED");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_DRIVE_TO_OBS_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_SHOOT_PLANE_RT");
	AUDIO::CANCEL_MUSIC_EVENT("SOL1_CHASE_PLANE_RT");
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3643))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3643, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_3644))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_3644, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3787, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3788, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3789, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3790, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3791, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3792, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_3793, false);
	func_12(&Local_3198, 1);
	func_1008(1, 1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_37__::func_864(1, 1);
	__LIB_37__::func_864(2, 1);
	__LIB_37__::func_864(7, 1);
	__LIB_37__::func_864(8, 1);
	__LIB_37__::func_864(9, 1);
	__LIB_37__::func_864(10, 1);
	__LIB_37__::func_864(4, 1);
	__LIB_37__::func_864(12, 1);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	VEHICLE::SET_RANDOM_TRAINS(true);
	Global_31970 = 0;
}

void func_1008(bool bParam0, bool bParam1)//Position - 0xB9E5A
{
	if (iLocal_3509)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(iLocal_3916))
			{
				CAM::SET_CAM_ACTIVE(iLocal_3916, false);
				CAM::DESTROY_CAM(iLocal_3916, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_3917))
			{
				CAM::SET_CAM_ACTIVE(iLocal_3917, false);
				CAM::DESTROY_CAM(iLocal_3917, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_3918))
			{
				CAM::SET_CAM_ACTIVE(iLocal_3918, false);
				CAM::DESTROY_CAM(iLocal_3918, false);
			}
			if (bParam1)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_3509 = 0;
		}
	}
}

void func_1011()//Position - 0xB9F7D
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
				if (!func_19(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_17__::func_505();
		}
	}
}

