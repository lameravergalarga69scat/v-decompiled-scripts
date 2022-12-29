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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	char cLocal_79[16] = "";
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_87 = { 0, 0, 0 } ;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	var uLocal_94 = 30;
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
	var uLocal_245 = 10;
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
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 10;
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
	var uLocal_367 = 20;
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
	var uLocal_468 = 20;
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
	var uLocal_569 = 30;
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
	var uLocal_750 = 5;
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
	var uLocal_781 = 7;
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
	var uLocal_831 = 5;
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
	var uLocal_857 = 3;
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
	var uLocal_873 = 21;
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
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 10;
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
	var uLocal_1049 = 5;
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
	var uLocal_1075 = 5;
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
	struct<8> Local_1104[2];
	int* iLocal_1105 = NULL;
	var uLocal_1106 = 3;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 1092616192;
	var uLocal_1113 = 1101004800;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 3;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 16;
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
	var uLocal_1297 = -1;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 1000;
	var uLocal_1305 = 1000;
	var uLocal_1306 = 0;
	int iLocal_1307 = 0;
	int iLocal_1308 = 0;
	int iLocal_1309 = 0;
	struct<3> Local_1310 = { 0, 0, 0 } ;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	int iLocal_1318 = 0;
	var uLocal_1319 = 0;
	struct<2> Local_1320 = { 0, 0 } ;
	int iLocal_1321 = 0;
	var uLocal_1322 = 0;
	struct<2> Local_1323[3];
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
	float fLocal_1328 = 0f;
	int iLocal_1329 = 0;
	int iLocal_1330 = 0;
	int iLocal_1331 = 0;
	int iLocal_1332 = 0;
	int iLocal_1333 = 0;
	char cLocal_1334[24] = "";
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	int iLocal_1343 = 0;
	int iLocal_1344 = 0;
	bool bLocal_1345 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	StringCopy(&cLocal_79, "JHP2ADS", 16);
	iLocal_82 = joaat("S_M_M_Armoured_01");
	iLocal_83 = joaat("boxville3");
	iLocal_84 = joaat("prop_idol_case_02");
	iLocal_85 = joaat("prop_yell_plastic_target");
	Local_86 = { 0f, 0.175f, 0f };
	Local_87 = { 0f, -3.6f, 0f };
	iLocal_88 = 0;
	fLocal_1328 = 0f;
	iLocal_1343 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_320(5);
	}
	MISC::SET_MISSION_FLAG(true);
	func_299();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_JewelStoreJobPrep2A", 0);
		if (bLocal_93)
		{
			func_297();
		}
		__LIB_17__::func_469(&uLocal_94);
		func_209();
		func_207();
		if (!bLocal_91)
		{
			func_203();
			__LIB_37__::func_190(&Local_1104);
			func_1();
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x105
{
	switch (iLocal_88)
	{
		case 0:
			if (func_23())
			{
				func_22(1);
			}
			break;
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x136
{
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_STOP");
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_8(0);
	if (__LIB_0__::func_178(87))
	{
		__LIB_0__::func_526(0, 1);
	}
	else
	{
		__LIB_0__::func_526(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_8(bool bParam0)//Position - 0x307
{
	int iVar0;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Armoured_01"), false);
	if (__LIB_1__::func_861())
	{
		__LIB_0__::func_671(0);
	}
	iLocal_1330 = 0;
	Global_75595 = 0;
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		Global_75595 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1318))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_1318);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1318);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&Local_1310);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1310);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
	{
		if (bParam0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::DELETE_VEHICLE(&Local_1320);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1320);
		}
	}
	iVar0 = 0;
	while (iVar0 < Local_1323.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1323[iVar0 /*2*/]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(Local_1323[iVar0 /*2*/]));
			}
			else
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_1323[iVar0 /*2*/]))
				{
					ENTITY::DETACH_ENTITY(Local_1323[iVar0 /*2*/], true, true);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_1323[iVar0 /*2*/]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324))
	{
		if (bParam0)
		{
			OBJECT::DELETE_OBJECT(&iLocal_1324);
		}
		else
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_1324))
			{
				ENTITY::DETACH_ENTITY(iLocal_1324, true, true);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_1324);
		}
	}
	if (iLocal_1325 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1325, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"));
		}
	}
	__LIB_0__::func_345(&uLocal_1295, 0, 0);
	__LIB_16__::func_911();
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"));
	}
	__LIB_12__::func_849(6, 0);
}

void func_22(int iParam0)//Position - 0x812
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_89 = 0;
		iLocal_90 = 0;
		iLocal_88 = iParam0;
	}
}

int func_23()//Position - 0x82D
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	Var0 = { 692.8256f, -1012.5445f, 21.722f };
	Var1 = { 707.15f, -959.66f, 29.4f };
	if (!iLocal_90)
	{
		if (func_201(Local_1320.f_0))
		{
			if (HUD::GET_BLIP_FROM_ENTITY(Local_1320.f_0) != 0)
			{
				Local_1320.f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_1320.f_0);
			}
			else
			{
				Local_1320.f_1 = __LIB_0__::func_639(Local_1320.f_0, 0, 0);
			}
			__LIB_0__::func_229("JHP2A_STEAL", 7500, 1);
			__LIB_0__::func_151("JHP2A_HLP2", 15000);
		}
		else if (HUD::GET_BLIP_FROM_ENTITY(Local_1320.f_0) != 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			iVar3 = HUD::GET_BLIP_FROM_ENTITY(Local_1320.f_0);
			HUD::REMOVE_BLIP(&iVar3);
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_START");
		__LIB_14__::func_785(0f, 0f, 0f, 0f, 1, __LIB_0__::func_683());
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
		iLocal_1338 = 0;
		iLocal_90 = 1;
		bLocal_1345 = true;
		iLocal_89 = 1;
	}
	if (iLocal_90)
	{
		func_137();
		switch (iLocal_89)
		{
			case 1:
				if ((((((iLocal_1307 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false)) && ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0)) && !PED::IS_PED_INJURED(Local_1310.f_0)) && PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, false)) && __LIB_37__::func_931(&(Local_1104[0 /*8*/])))
				{
					__LIB_17__::func_71(&uLocal_1295, Local_1320.f_0, 0, 0, 1, 1, 1);
				}
				else
				{
					__LIB_0__::func_345(&uLocal_1295, 0, 0);
				}
				if (iLocal_1307 == 3 || iLocal_1307 == 2)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					__LIB_13__::func_815(&iLocal_1105, 1, 0);
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && __LIB_0__::func_1("JHP2A_HLP2"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (!iLocal_1338)
					{
						__LIB_0__::func_229("JHP2A_TAKEBZ", 7500, 1);
					}
					iLocal_89 = 2;
				}
				else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1321, false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1321, Local_1320.f_0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_1320.f_1))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
						HUD::REMOVE_BLIP(&(Local_1320.f_1));
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
						__LIB_0__::func_499(705, 0);
					}
					__LIB_16__::func_34(&iLocal_1105, Var0, 0.1f, 0.1f, 0.1f, 1, iLocal_1321, "JHP2A_RTNVAN", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1320.f_0, 692.9143f, -1003.5558f, 21.508389f, 692.6511f, -1021.6041f, 26.206753f, 9.75f, false, true, 0))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1321, 5f, -1, false);
						iLocal_89 = 101;
					}
				}
				else if (iLocal_1307 == 1)
				{
					__LIB_13__::func_815(&iLocal_1105, 1, 0);
					if (!HUD::DOES_BLIP_EXIST(Local_1323[0 /*2*/].f_1))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						Local_1323[0 /*2*/].f_1 = __LIB_0__::func_643(Local_1323[0 /*2*/]);
						__LIB_0__::func_229("JHP2A_TAKEBZ", 7500, 1);
						iLocal_1338 = 1;
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1320.f_0, false);
					}
				}
				else if (iLocal_1307 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1320.f_1))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
						HUD::REMOVE_BLIP(&(Local_1320.f_1));
						MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
						__LIB_0__::func_499(705, 0);
					}
					if (func_98(&iLocal_1105, Var0, 692.9143f, -1003.5558f, 21.508389f, 692.6511f, -1021.6041f, 26.206753f, 9.75f, 1, Local_1320.f_0, "JHP2A_RTNVAN", "", "", PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, false), 0, 1, -1))
					{
						iLocal_89 = 101;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_1105) && HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_1105))
					{
						HUD::SET_BLIP_ROUTE(iLocal_1105, false);
					}
				}
				break;
			case 101:
				if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, false))
				{
					iVar4 = Local_1320.f_0;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1321, Local_1320.f_0))
				{
					iVar4 = iLocal_1321;
				}
				if (__LIB_0__::func_213(iVar4, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					if (__LIB_0__::func_178(87))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_89 = 1000;
					}
					else
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						iLocal_89++;
					}
				}
				break;
			case 102:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					HUD::CLEAR_PRINTS();
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1320.f_0, false);
					VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1320.f_0, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1321))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1321, 5f, 1, false);
					}
					__LIB_0__::func_498(0, -1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_1323[0 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1323[0 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1323[1 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1323[1 /*2*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1323[2 /*2*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_1323[2 /*2*/]));
					}
					return 1;
				}
				break;
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
				{
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1323[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1323[iVar2 /*2*/]))
						{
							if (HUD::DOES_BLIP_EXIST(Local_1320.f_1))
							{
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
								HUD::REMOVE_BLIP(&(Local_1320.f_1));
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
							}
							if (!HUD::DOES_BLIP_EXIST(Local_1323[iVar2 /*2*/].f_1))
							{
								Local_1323[iVar2 /*2*/].f_1 = __LIB_0__::func_643(Local_1323[iVar2 /*2*/]);
							}
						}
						iVar2++;
					}
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1323[iVar2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1323[iVar2 /*2*/]))
						{
							if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
							{
								bVar5 = func_94(Local_1323[iVar2 /*2*/]);
								if ((bVar5 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, 0f, -3f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, 0f, -4.5f, 1f), 1.68f, false, true, 1)) || (!bVar5 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_1323[iVar2 /*2*/], true), 0.75f, 0.75f, 4f, false, false, 1)))
								{
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), 1, false, false);
									OBJECT::DELETE_OBJECT(&(Local_1323[iVar2 /*2*/]));
									HUD::CLEAR_PRINTS();
									AUDIO::PLAY_SOUND_FRONTEND(-1, "PICKUP_WEAPON_SMOKEGRENADE", "HUD_FRONTEND_WEAPONS_PICKUPS_SOUNDSET", true);
								}
							}
						}
						iVar2++;
					}
				}
				else
				{
					__LIB_0__::func_499(705, 0);
					iVar2 = 0;
					while (iVar2 < Local_1323.f_0)
					{
						if (HUD::DOES_BLIP_EXIST(Local_1323[iVar2 /*2*/].f_1))
						{
							HUD::REMOVE_BLIP(&(Local_1323[iVar2 /*2*/].f_1));
						}
						iVar2++;
					}
					__LIB_17__::func_786(&iLocal_1105, Var1, 0.1f, 0.1f, 0.1f, 0, "JHP2A_RTNBZ", 1, 1, -1, 1);
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar6, true);
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 722.9849f, -965.74725f, 32.296906f, 50f, 40f, 11.4375f, false, true, 0))
					{
						iVar8 = 1;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.7432f, -960.3367f, 29.395329f, 703.64777f, -960.3293f, 33.65119f, 4.125f, false, true, 0))
					{
						bVar7 = true;
					}
					if (bVar7 || ((iVar8 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && bLocal_1345))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
						if (!__LIB_1__::func_861())
						{
							__LIB_0__::func_671(1);
						}
						if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_77(0))
							{
								if (iVar6 != joaat("WEAPON_BRIEFCASE"))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), true);
								}
							}
						}
					}
					if (bVar7)
					{
						if (iVar6 == joaat("WEAPON_BRIEFCASE"))
						{
							if (!__LIB_0__::func_1("JHP2A_HLP1"))
							{
								__LIB_0__::func_190("JHP2A_HLP1");
							}
						}
						if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/) && iVar6 == joaat("WEAPON_BRIEFCASE"))
						{
							if (__LIB_0__::func_1("JHP2A_HLP1"))
							{
								HUD::CLEAR_HELP(true);
							}
							iVar9 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(PLAYER::PLAYER_PED_ID(), true);
							PHYSICS::ACTIVATE_PHYSICS(iVar9);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Drop_Case", iVar9, "JWL_PREP_2A_SOUNDS", false, 0);
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar9);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"));
							__LIB_0__::func_498(0, -1);
							__LIB_0__::func_630(706);
							__LIB_13__::func_815(&iLocal_1105, 1, 0);
							if (__LIB_0__::func_178(87))
							{
								if (__LIB_1__::func_861())
								{
									__LIB_0__::func_671(0);
								}
								iLocal_89 = 2000;
							}
							else
							{
								return 1;
							}
						}
					}
					else
					{
						if (__LIB_1__::func_861())
						{
							__LIB_0__::func_671(0);
						}
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_0__::func_1("JHP2A_HLP1"))
							{
								HUD::CLEAR_HELP(true);
							}
						}
					}
					bLocal_1345 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
				}
				break;
			case 1000:
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1320.f_0, false);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1320.f_0, true);
				__LIB_17__::func_468(1);
				__LIB_16__::func_309(1, 0);
				if (__LIB_16__::func_855())
				{
					if (__LIB_14__::func_569(&uLocal_1130, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_89++;
					}
				}
				break;
			case 1001:
				__LIB_16__::func_309(1, 0);
				if (__LIB_13__::func_810())
				{
					iLocal_89++;
				}
				break;
			case 1002:
				__LIB_16__::func_309(1, 0);
				if (!__LIB_13__::func_810())
				{
					__LIB_13__::func_789();
					return 1;
				}
				break;
			case 2000:
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				Global_75595 = 1;
				__LIB_17__::func_468(1);
				__LIB_16__::func_309(1, 0);
				iLocal_89++;
				break;
			case 2001:
				__LIB_16__::func_309(1, 0);
				if (__LIB_16__::func_855())
				{
					if (__LIB_14__::func_569(&uLocal_1130, 12, "JHFAUD", "JHF_BZD2", 8, 1, 0, 0, 0))
					{
						iLocal_89++;
					}
				}
				break;
			case 2002:
				__LIB_16__::func_309(1, 0);
				if (__LIB_13__::func_810())
				{
					iLocal_89++;
				}
				break;
			case 2003:
				__LIB_16__::func_309(1, 0);
				if (!__LIB_13__::func_810())
				{
					__LIB_13__::func_789();
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x44E2
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
	{
		return 0;
	}
	Var0 = { MISC::GET_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, Local_86), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, Local_87), false) };
	if (SYSTEM::VDIST2(Var0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, Local_86)) <= SYSTEM::VDIST2(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, Local_87), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, Local_86)))
	{
		return 1;
	}
	return 0;
}

bool func_98(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x47B6
{
	return __LIB_15__::func_982(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 5, 0, 0, 0, iParam6, sParam7, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_137()//Position - 0x5BD1
{
	int iVar0;
	if (iLocal_1307 == 0 || iLocal_1307 == 1)
	{
		if (((ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[0 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1323[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[1 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1323[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[2 /*2*/]) && !ENTITY::IS_ENTITY_ATTACHED(Local_1323[2 /*2*/])))
		{
			iLocal_1307 = 2;
		}
	}
	if (iLocal_1307 == 2)
	{
		if ((((!ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false)) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[0 /*2*/]) && !func_94(Local_1323[0 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[1 /*2*/]) && !func_94(Local_1323[1 /*2*/]))) || (ENTITY::DOES_ENTITY_EXIST(Local_1323[2 /*2*/]) && !func_94(Local_1323[2 /*2*/])))
		{
			iLocal_1307 = 3;
		}
	}
	if (iLocal_1307 == 0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, Local_1320.f_0))
					{
						iLocal_1321 = iVar0;
					}
				}
			}
		}
	}
	if (iLocal_1307 == 0)
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false))
		{
			iLocal_1307 = 1;
		}
	}
	if (iLocal_1307 == 1 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, true))
	{
		__LIB_12__::func_849(6, 1);
	}
	else
	{
		__LIB_12__::func_849(6, 0);
	}
}

int func_201(int iParam0)//Position - 0xC7FC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					return 1;
				}
				break;
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
				{
					return 1;
				}
				break;
			default:
				if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_203()//Position - 0xC8D1
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!iLocal_1344)
		{
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1);
			iLocal_1344 = 1;
		}
	}
	else if (iLocal_1344)
	{
		__LIB_0__::func_505(0, -1);
		__LIB_0__::func_377(0, -1);
		iLocal_1344 = 0;
	}
	if (!iLocal_1342)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, true))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_01", 0f);
				iLocal_1342 = 1;
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_2A_02", 0f);
				iLocal_1342 = 1;
			}
		}
	}
	if (iLocal_88 == 0)
	{
		switch (iLocal_1307)
		{
			case 0:
				if ((ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0) && !PED::IS_PED_INJURED(Local_1310.f_0)) && __LIB_37__::func_931(&(Local_1104[0 /*8*/])))
				{
					if (Local_1104[0 /*8*/].f_1 == 1)
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, 1) > 500f)
						{
							func_320(1);
						}
					}
					else if (Local_1104[0 /*8*/].f_1 == 4)
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, 1) > 250f)
						{
							func_320(1);
						}
					}
					else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, 1) > 250f)
					{
						func_320(2);
					}
				}
				else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, 1) > 250f)
				{
					func_320(2);
				}
				break;
			case 1:
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, 1) > 250f)
				{
					func_320(2);
				}
				break;
			case 3:
			case 2:
				if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(Local_1323[0 /*2*/]) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1323[0 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1323[1 /*2*/])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1323[1 /*2*/], 1) > 250f) && ENTITY::DOES_ENTITY_EXIST(Local_1323[2 /*2*/])) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_1323[2 /*2*/], 1) > 250f)
					{
						func_320(3);
					}
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
	{
		if ((ENTITY::IS_ENTITY_IN_WATER(Local_1320.f_0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false)) && !WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
		{
			func_320(4);
		}
	}
}

void func_207()//Position - 0xCC15
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_1310.f_0, false))
		{
			__LIB_0__::func_631(Local_1310.f_0, &(Local_1310.f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
	{
		if (((!func_201(Local_1320.f_0) && ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false)) && iLocal_1339) && __LIB_0__::func_76(Local_1320.f_0, PLAYER::PLAYER_PED_ID(), 1) > 200f)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_1320);
		}
	}
}

void func_209()//Position - 0xCE82
{
	struct<3> Var0;
	float fVar1;
	if (bLocal_91 == 1)
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
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::STOP_CUTSCENE(false);
				CUTSCENE::REMOVE_CUTSCENE();
			}
			iLocal_88 = iLocal_92;
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_8(1);
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (!__LIB_0__::func_324())
			{
				func_293(iLocal_88, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_16__::func_910(&uLocal_94, Var0, 50f, 0);
			}
			__LIB_16__::func_863(&uLocal_94);
			switch (iLocal_88)
			{
				case 0:
					__LIB_16__::func_852(&uLocal_94, iLocal_82);
					__LIB_16__::func_852(&uLocal_94, iLocal_83);
					__LIB_16__::func_852(&uLocal_94, iLocal_84);
					__LIB_16__::func_859(&uLocal_94, &Global_97303);
					break;
				case 1:
					__LIB_16__::func_852(&uLocal_94, joaat("burrito2"));
					break;
			}
			while (!__LIB_17__::func_632(&uLocal_94))
			{
				SYSTEM::WAIT(0);
				func_207();
			}
			switch (iLocal_88)
			{
				case 0:
					while (!func_280(0))
					{
						SYSTEM::WAIT(0);
					}
					if (MISC::ARE_STRINGS_EQUAL(&Global_97303, "jhp2a_main"))
					{
						while (!func_213(&iLocal_1318, 1395.851f, -1069.3057f, 52.4779f, 118.1591f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1395.851f, -1069.3057f, 52.4779f, 20f, false, false, false, false, false, false, 0);
						}
					}
					else
					{
						while (!func_213(&iLocal_1318, 1256.9131f, 556.8416f, 79.7013f, 134.0793f, 1))
						{
							SYSTEM::WAIT(0);
							MISC::CLEAR_AREA_OF_VEHICLES(1256.9131f, 556.8416f, 79.7013f, 20f, false, false, false, false, false, false, 0);
						}
					}
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1318, 0);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1318, 1, false);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_1318, 2, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1318, 5f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1318, true, true, false);
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(iLocal_1318, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1318, -1);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 1:
					if (!__LIB_0__::func_178(87))
					{
						Local_1320.f_0 = VEHICLE::CREATE_VEHICLE(joaat("boxville3"), 693.725f, -1006.3015f, 21.8355f, 359.884f, true, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1320.f_0, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1320.f_0, 5f);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					}
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 692.067f, -1004.8117f, 21.9059f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.5735f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
			}
			if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			bLocal_91 = false;
		}
	}
}

int func_213(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xD282
{
	struct<67> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	if (__LIB_0__::func_323())
	{
		if (__LIB_13__::func_821())
		{
			__LIB_0__::func_313(&(Global_106934.f_2890.f_12), &Var0);
		}
	}
	else if (__LIB_16__::func_327())
	{
		__LIB_0__::func_313(&(Global_103950.f_2890.f_12), &Var0);
	}
	if (Var0.f_66 != 0)
	{
		if (!func_276(0, &Var0))
		{
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Var0.f_66) || VEHICLE::IS_THIS_MODEL_A_BIKE(Var0.f_66))
			{
				STREAMING::REQUEST_MODEL(Var0.f_66);
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_66))
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_66, Param1, fParam2, true, true, false);
					__LIB_1__::func_569(*iParam0, &Var0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_66);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			bParam3 = true;
		}
	}
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (__LIB_14__::func_784(iParam0, 0, Param1, fParam2, 1, 0))
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_0__::func_721(0, 0), true);
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

int func_276(int iParam0, var uParam1)//Position - 0x12BA5
{
	struct<82> Var0;
	if (!__LIB_0__::func_43(iParam0))
	{
		return 0;
	}
	if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/] == uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][iParam0 /*98*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/] == uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113386.f_2363.f_539.f_2407[1 /*295*/][iParam0 /*98*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	__LIB_0__::func_120(iParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	__LIB_0__::func_120(iParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_280(bool bParam0)//Position - 0x12D84
{
	bool bVar0;
	struct<3> Var1;
	bVar0 = false;
	__LIB_16__::func_859(&uLocal_94, &Global_97303);
	__LIB_16__::func_852(&uLocal_94, joaat("S_M_M_Armoured_01"));
	__LIB_16__::func_852(&uLocal_94, iLocal_84);
	__LIB_16__::func_852(&uLocal_94, iLocal_85);
	if ((STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Armoured_01")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && STREAMING::HAS_MODEL_LOADED(iLocal_85))
	{
		if (bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
					Local_1320.f_0 = Global_96938[0];
				}
				else
				{
					bVar0 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
					Local_1310.f_0 = Global_96938.f_9[0];
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		else
		{
			__LIB_16__::func_852(&uLocal_94, iLocal_83);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_83) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97303))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_97303, "jhp2a_main"))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97303, 23, &Var1);
					MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, false, false, false, false, false, false, 0);
					Local_1320.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 119.4988f, true, true, false);
					Local_1310.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1320.f_0, 26, iLocal_82, -1, true, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1320.f_0, 5f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, 23, 16, -1, 12f, false, 2f);
				}
				else
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97303, 29, &Var1);
					MISC::CLEAR_AREA_OF_VEHICLES(Var1, 20f, false, false, false, false, false, false, 0);
					Local_1320.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_83, Var1, 134.0011f, true, true, false);
					Local_1310.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1320.f_0, 26, iLocal_82, -1, true, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1320.f_0, 5f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, 29, 16, -1, 12f, false, 2f);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
		{
			__LIB_0__::func_679(Local_1320.f_0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_1320.f_0, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1320.f_0, true, 1);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_1320.f_0, true);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1320.f_0, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0))
		{
			if (!PED::IS_PED_INJURED(Local_1310.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1310.f_0, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_1310.f_0, iLocal_1309);
				PED::SET_PED_ACCURACY(Local_1310.f_0, 5);
				PED::SET_PED_CAN_BE_TARGETTED(Local_1310.f_0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1310.f_0, 1, false);
				WEAPON::GIVE_WEAPON_TO_PED(Local_1310.f_0, joaat("WEAPON_PISTOL"), 15, false, true);
				__LIB_0__::func_222(&uLocal_1130, 3, Local_1310.f_0, "JHP2A_Driver", 0, 1);
				__LIB_37__::func_191(&(Local_1104[0 /*8*/]), 0, 0, 1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0))
		{
			func_283();
			__LIB_37__::func_191(&(Local_1104[1 /*8*/]), 0, 0, 1);
			__LIB_16__::func_912(&uLocal_94, joaat("boxville3"));
			__LIB_16__::func_912(&uLocal_94, joaat("S_M_M_Armoured_01"));
			__LIB_16__::func_912(&uLocal_94, iLocal_84);
			__LIB_16__::func_912(&uLocal_94, iLocal_85);
			return 1;
		}
		else if (bVar0)
		{
		}
	}
	return 0;
}

void func_283()//Position - 0x130FD
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1324))
		{
			iLocal_1324 = OBJECT::CREATE_OBJECT(iLocal_85, ENTITY::GET_ENTITY_COORDS(Local_1320.f_0, true), true, true, false);
			OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1324, 0.1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
			ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iLocal_1324, Local_1320.f_0, -1, -1, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_1320.f_0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_1320.f_0, 5)) + Vector(0f, 0f, 0.02f), 0f, 0f, 0f, 0f, 0f, 0f, -1f, true, true, false, true, 2);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1324, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1323[0 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
				Local_1323[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[0 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1320.f_0, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1323[0 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1323[0 /*2*/], Local_1320.f_0, -1, -0.2f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1323[0 /*2*/], true);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1323[1 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
				Local_1323[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[1 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1320.f_0, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1323[1 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1323[1 /*2*/], Local_1320.f_0, -1, 0f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1323[1 /*2*/], true);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1323[2 /*2*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-2.5f, 2.5f), -5f, 0f) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
				Local_1323[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, Var0, true, true, false);
			}
			else
			{
				Local_1323[2 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(Local_1320.f_0, true), true, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_1323[2 /*2*/], 3.5f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1323[2 /*2*/], Local_1320.f_0, -1, 0.2f, -2.675f, 0.05f, -90f, 0f, -90f, false, false, false, false, 2, true, 0);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1323[2 /*2*/], true);
			}
		}
	}
}

void func_293(int iParam0, var uParam1, var uParam2)//Position - 0x139CD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1256.9364f, 556.8262f, 79.7001f };
			*uParam2 = 134.0936f;
			break;
		case 1:
			*uParam1 = { 692.2659f, -1004.1848f, 21.9451f };
			*uParam2 = 3.5976f;
			break;
	}
}

void func_297()//Position - 0x14422
{
	if (bLocal_93 && (__LIB_0__::func_223() || CAM::IS_SCREEN_FADED_OUT()))
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_299()//Position - 0x14478
{
	struct<3> Var0;
	var uVar1;
	func_306();
	PED::ADD_RELATIONSHIP_GROUP("SECDRIVER", &iLocal_1309);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1309, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1309, joaat("SECURITY_GUARD"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1309);
	if (__LIB_0__::func_2(0) || __LIB_0__::func_323())
	{
		iLocal_92 = 0;
		if (__LIB_0__::func_323())
		{
			if (Global_94618)
			{
				iLocal_92++;
			}
		}
		StringCopy(&Global_97303, "jhp2a_alt", 64);
		if (__LIB_0__::func_323())
		{
			func_293(iLocal_92, &Var0, &uVar1);
			__LIB_16__::func_3(Var0, uVar1, 1, 0);
		}
		bLocal_91 = true;
	}
	else
	{
		while (!func_280(1))
		{
			SYSTEM::WAIT(0);
			__LIB_17__::func_630(&uLocal_94);
		}
	}
	__LIB_37__::func_186(&uLocal_94, "JHP2A", 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	__LIB_16__::func_916(88);
	__LIB_0__::func_222(&uLocal_1130, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	__LIB_0__::func_222(&uLocal_1130, 3, 0, "Lester", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Armoured_01"), true);
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE"));
	}
	__LIB_37__::func_185();
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97303))
	{
	}
	iLocal_1325 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	Global_75595 = 1;
}

void func_306()//Position - 0x147E1
{
	__LIB_37__::func_194(&(Local_1104[0 /*8*/]), 85336/*func_315*/, "Van Driver Manager");
	__LIB_37__::func_194(&(Local_1104[1 /*8*/]), 83983/*func_307*/, "Cargo Manager");
}

void func_307(var uParam0)//Position - 0x1480F
{
	if (!__LIB_37__::func_188(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
		{
			func_312(Local_1323[0 /*2*/], 1);
			func_312(Local_1323[1 /*2*/], 1);
			func_312(Local_1323[2 /*2*/], 1);
			iLocal_1339 = 1;
			__LIB_37__::func_193(uParam0);
		}
		else
		{
			switch (uParam0->f_1)
			{
				case 1:
					__LIB_16__::func_909(&uLocal_94, "JWL_HEIST_PREP_2A_SHOOTING_LOCK");
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("JWL_HEIST_PREP_2A_SHOOTING_LOCK", false, -1))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1331) > 150)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1324, PLAYER::PLAYER_PED_ID(), false))
							{
								if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1324, joaat("WEAPON_MOLOTOV"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1324, joaat("WEAPON_BZGAS"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1324, joaat("WEAPON_KNIFE"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1324, joaat("WEAPON_UNARMED"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_1324, joaat("WEAPON_HIT_BY_WATER_CANNON"), 0))
								{
									WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_1324);
								}
								else
								{
									ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1324);
									iLocal_1331 = MISC::GET_GAME_TIMER();
									iLocal_1330++;
									if (iLocal_1330 >= 3)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Destroyed", iLocal_1324, "JWL_PREP_2A_SOUNDS", false, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lock_Damage", iLocal_1324, "JWL_PREP_2A_SOUNDS", false, 0);
									}
								}
							}
						}
						else
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1324);
						}
					}
					if (((((iLocal_1330 >= 3 || ENTITY::IS_ENTITY_DEAD(iLocal_1324, false)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 2)) || VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 3)) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1320.f_0, 2) > 0f) || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1320.f_0, 3) > 0f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324))
						{
							OBJECT::DELETE_OBJECT(&iLocal_1324);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 2))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1320.f_0, 2, false, false);
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 3))
						{
							VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1320.f_0, 3, false, false);
						}
						iLocal_1340 = 0;
						iLocal_1341 = 0;
						func_312(Local_1323[0 /*2*/], 0);
						func_312(Local_1323[1 /*2*/], 0);
						func_312(Local_1323[2 /*2*/], 0);
						__LIB_37__::func_192(uParam0, 2, 0);
					}
					break;
				case 2:
					if (__LIB_0__::func_121(Local_1320.f_0))
					{
						if (MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1320.f_0, 2)) > 0.5f && MISC::ABSF(VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_1320.f_0, 3)) > 0.5f)
						{
							__LIB_37__::func_192(uParam0, 3, 0);
						}
					}
					break;
				case 3:
					if (__LIB_0__::func_121(Local_1320.f_0))
					{
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 2))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1320.f_0, 2))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1320.f_0, 2, true, false);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1320.f_0, 2, false, false, true);
								iLocal_1340 = 1;
							}
						}
						else
						{
							iLocal_1340 = 1;
						}
						if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_1320.f_0, 3))
						{
							if (VEHICLE::IS_VEHICLE_DOOR_FULLY_OPEN(Local_1320.f_0, 3))
							{
								VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1320.f_0, 3, true, false);
								VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_1320.f_0, 3, false, false, true);
								iLocal_1341 = 1;
							}
						}
						else
						{
							iLocal_1341 = 1;
						}
						if (iLocal_1340 && iLocal_1341)
						{
							iLocal_1339 = 1;
							__LIB_37__::func_192(uParam0, 4, 0);
						}
					}
					break;
				}
			}
	}
	if (__LIB_37__::func_188(uParam0))
	{
	}
}

void func_312(int iParam0, bool bParam1)//Position - 0x14C35
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, true, bParam1);
			ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
			PHYSICS::ACTIVATE_PHYSICS(iParam0);
		}
		if (bParam1)
		{
			Var0 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iParam0, true) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f), IntToFloat(-MISC::GET_RANDOM_INT_IN_RANGE(3, 6)), MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f))) };
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 1, Var0 * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f)), false, true, true, false);
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iParam0, 5, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 10)), false, true, true, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Local_1320.f_0, true);
		}
	}
}

void func_315(var uParam0)//Position - 0x14D58
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	float fVar4;
	if (!__LIB_37__::func_188(uParam0))
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0) || PED::IS_PED_INJURED(Local_1310.f_0)) || (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && __LIB_0__::func_76(Local_1320.f_0, Local_1310.f_0, 1) > 200f)) || (!PED::IS_PED_IN_ANY_VEHICLE(Local_1310.f_0, false) && __LIB_0__::func_76(Local_1320.f_0, Local_1310.f_0, 1) > 200f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1320.f_0, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_1310);
			__LIB_37__::func_193(uParam0);
		}
		else
		{
			if ((uParam0->f_1 != 5 && uParam0->f_1 != 3) && ((!ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false)) || !PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, false)))
			{
				iLocal_1332 = 0;
				iLocal_1333 = 0;
				StringCopy(&cLocal_1334, "", 24);
				__LIB_37__::func_192(uParam0, 5, 0);
			}
			else if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 4)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1320.f_0))
					{
						if ((!iLocal_1327 && (MISC::GET_GAME_TIMER() - iLocal_1329) > 500) && fLocal_1328 >= 4f)
						{
							iLocal_1327 = 1;
							iLocal_1326++;
						}
					}
					else if (iLocal_1327)
					{
						iLocal_1329 = MISC::GET_GAME_TIMER();
						iLocal_1327 = 0;
					}
					Var1 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(iVar0, true) - ENTITY::GET_ENTITY_COORDS(Local_1320.f_0, true)) };
					Var2 = { ENTITY::GET_ENTITY_VELOCITY(Local_1320.f_0) - ENTITY::GET_ENTITY_VELOCITY(iVar0) };
					fLocal_1328 = __LIB_0__::func_158(Var2, Var1);
				}
			}
			switch (uParam0->f_1)
			{
				case 1:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1320.f_0, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1310.f_0, PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1310.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1320.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						__LIB_37__::func_192(uParam0, 4, 0);
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false))
						{
							if ((ENTITY::IS_ENTITY_STATIC(PLAYER::PLAYER_PED_ID()) || fLocal_1328 > 0.5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, 0f, 2f, -0.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1320.f_0, 0f, 10f, 2f), 4.5f, false, true, 0))
							{
								if (!AUDIO::IS_HORN_ACTIVE(Local_1320.f_0))
								{
									if (iLocal_1343 == -1)
									{
										iLocal_1343 = MISC::GET_GAME_TIMER();
									}
									else if ((MISC::GET_GAME_TIMER() - iLocal_1343) > 5000)
									{
										VEHICLE::START_VEHICLE_HORN(Local_1320.f_0, 2000, joaat("normal"), false);
									}
								}
								else
								{
									iLocal_1343 = -1;
								}
							}
						}
						if (__LIB_0__::func_724(Local_1320.f_0, -993.7236f, -2418.7566f, 12.9447f, 1) < 20f)
						{
							__LIB_16__::func_859(&uLocal_94, "jhp2a_airport");
						}
						if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING"), 1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1320.f_0, -990.63116f, -2413.2139f, 12.694712f, -996.0194f, -2422.6077f, 16.058456f, 8.75f, false, true, 0))
							{
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("jhp2a_airport"))
								{
									iLocal_1332 = 0;
									iLocal_1333 = 0;
									StringCopy(&cLocal_1334, "", 24);
									__LIB_37__::func_192(uParam0, 2, 0);
								}
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1310.f_0, Local_1320.f_0, &Global_97303, 786475, -1, 24, -1, 12f, false, 2f);
							}
						}
					}
					break;
				case 2:
					if ((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1320.f_0, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1310.f_0, PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1310.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1320.f_0)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						__LIB_37__::func_192(uParam0, 5, 0);
					}
					else if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING"), 1))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_1320.f_0, -1096.1387f, -2467.1167f, 12.695615f, -1101.6414f, -2476.7747f, 15.6304f, 7.8125f, false, true, 0))
						{
							iLocal_1332 = 0;
							iLocal_1333 = 0;
							StringCopy(&cLocal_1334, "", 24);
							__LIB_37__::func_192(uParam0, 3, 0);
						}
						else
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1310.f_0, Local_1320.f_0, "jhp2a_airport", 786475, -1, 24, -1, 12f, false, 2f);
						}
					}
					break;
				case 3:
					if (((((((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1320.f_0, PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1310.f_0, PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 29)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 118)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 24)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 47)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 62)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 138)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 89)) || PED::IS_PED_BEING_JACKED(Local_1310.f_0)) || FIRE::IS_ENTITY_ON_FIRE(Local_1320.f_0)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1320.f_0, true)) || iLocal_1326 > 0)
					{
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						__LIB_37__::func_192(uParam0, 5, 0);
					}
					else if (PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, true))
					{
						if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
						{
							TASK::TASK_LEAVE_VEHICLE(Local_1310.f_0, Local_1320.f_0, 0);
						}
					}
					else
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_1320.f_0, 2);
						if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_1308);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1093.4863f, -2471.6694f, 13.0716f, 1f, -1, 0.25f, 0, 40000f);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", -1, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_1308);
							TASK::TASK_PERFORM_SEQUENCE(Local_1310.f_0, iLocal_1308);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_1308);
						}
					}
					break;
				case 4:
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1320.f_0, 0, true))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1320.f_0, 1, true))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1320.f_0, 4, true))
					{
						iVar3++;
					}
					if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_1320.f_0, 5, true))
					{
						iVar3++;
					}
					if (((((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_1320.f_0)) <= 0f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_1320.f_0) <= 250f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_1320.f_0) <= 400f) || PED::IS_PED_INJURED(Local_1310.f_0)) || iVar3 >= 2) || iLocal_1326 > 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1320.f_0, false))
						{
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_1320.f_0, false);
						}
						iLocal_1332 = 0;
						iLocal_1333 = 0;
						StringCopy(&cLocal_1334, "", 24);
						__LIB_37__::func_192(uParam0, 5, 0);
					}
					else if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_1310.f_0, Local_1320.f_0, PLAYER::PLAYER_PED_ID(), 8, 90f, 786468, 400f, 10f, false);
					}
					break;
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
					{
						if (PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, false))
						{
							if (!__LIB_0__::func_587(Local_1320.f_0))
							{
								if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION"), 1))
								{
									TASK::CLEAR_PED_TASKS(Local_1310.f_0);
									TASK::TASK_VEHICLE_TEMP_ACTION(Local_1310.f_0, Local_1320.f_0, 5, -1);
								}
							}
							else if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), 1))
							{
								TASK::TASK_LEAVE_VEHICLE(Local_1310.f_0, Local_1320.f_0, 256);
							}
						}
						else if (!__LIB_0__::func_798(Local_1310.f_0, joaat("SCRIPT_TASK_COMBAT"), 1))
						{
							PED::SET_PED_CAN_BE_TARGETTED(Local_1310.f_0, true);
							TASK::TASK_COMBAT_PED(Local_1310.f_0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1320.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_1320.f_0, false))
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1320.f_0, 2, true);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_1320.f_0, 3, true);
					}
					break;
				}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Local_1310.f_0) && !PED::IS_PED_INJURED(Local_1310.f_0)) && !PED::IS_CONVERSATION_PED_DEAD(Local_1310.f_0))
		{
			switch (uParam0->f_1)
			{
				case 4:
					switch (iLocal_1332)
					{
						case 0:
							if (__LIB_16__::func_855() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								if (PED::IS_PED_BEING_JACKED(Local_1310.f_0))
								{
									__LIB_0__::func_640(Local_1310.f_0, "JACKED_GENERIC", 10);
								}
								else
								{
									__LIB_0__::func_640(Local_1310.f_0, "GENERIC_SHOCKED_HIGH", 10);
								}
								iLocal_1332++;
							}
							break;
						case 1:
							if (!PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, false) || iLocal_1307 == 3)
							{
								if (!PED::IS_PED_IN_VEHICLE(Local_1310.f_0, Local_1320.f_0, false))
								{
									iLocal_1332 = 4;
								}
								else
								{
									iLocal_1332++;
								}
							}
							else if (__LIB_16__::func_855() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								if (__LIB_2__::func_859(&uLocal_1130, &cLocal_79, "JS_INIT_M", 8, 0, 0, 0))
								{
									iLocal_1332++;
								}
							}
							break;
						case 2:
							if (__LIB_16__::func_855() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1334))
								{
									fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1310.f_0, true));
									if ((((((iLocal_1327 || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_1310.f_0, 126)) || fVar4 < 49f) && (MISC::GET_GAME_TIMER() - iLocal_1333) > 5000) && fVar4 < 225f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_CURSE_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_ATT_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1334))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1334, "GENERIC_CURSE_HIGH"))
									{
										__LIB_0__::func_640(Local_1310.f_0, "GENERIC_CURSE_HIGH", 10);
										iLocal_1332++;
									}
									else
									{
										if (__LIB_2__::func_859(&uLocal_1130, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
										{
											iLocal_1332++;
										}
										iLocal_1332++;
									}
								}
							}
							break;
						case 3:
							if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								iLocal_1333 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				case 5:
					switch (iLocal_1332)
					{
						case 0:
							if (__LIB_16__::func_855() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1334))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_1333) > 5000 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1310.f_0, true)) < 400f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
										{
											StringCopy(&cLocal_1334, "GENERIC_INSULT_HIGH", 24);
										}
										else
										{
											StringCopy(&cLocal_1334, "JS_COMB_M", 24);
										}
									}
								}
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1334))
								{
									if (MISC::ARE_STRINGS_EQUAL(&cLocal_1334, "GENERIC_INSULT_HIGH"))
									{
										__LIB_0__::func_640(Local_1310.f_0, "GENERIC_INSULT_HIGH", 10);
										iLocal_1332++;
									}
									else if (__LIB_2__::func_859(&uLocal_1130, &cLocal_79, &cLocal_1334, 8, 0, 0, 0))
									{
										iLocal_1332++;
									}
								}
							}
							break;
						case 1:
							if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1310.f_0))
							{
								iLocal_1333 = MISC::GET_GAME_TIMER();
								StringCopy(&cLocal_1334, "", 24);
								iLocal_1332 = (iLocal_1332 - 1);
							}
							break;
					}
					break;
				}
			}
	}
	if (__LIB_37__::func_188(uParam0))
	{
	}
}

void func_320(int iParam0)//Position - 0x15B75
{
	struct<2> Var0;
	char[] cVar1[8];
	AUDIO::TRIGGER_MUSIC_EVENT("JHP2A_FAIL");
	if (iParam0 == 5)
	{
		func_332();
		func_8(0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_93)
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(&Var0, "JHP2A_FGOTAWAY", 16);
				break;
			case 2:
				StringCopy(&Var0, "JHP2A_FGOTAWAY2", 16);
				break;
			case 4:
				StringCopy(&Var0, "JHP2A_FCARGO", 16);
				break;
			case 3:
				StringCopy(&Var0, "JHP2A_FCARGO2", 16);
				break;
			case 0:
			default:
				StringCopy(&Var0, "JHP2A_FF", 16);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_330(&Var0);
		}
		else
		{
			func_321(&Var0, &cVar1);
		}
		bLocal_93 = true;
	}
}

void func_321(char* sParam0, char* sParam1)//Position - 0x15C1B
{
	__LIB_0__::func_632(sParam0, sParam1);
	func_322(0);
}

void func_322(int iParam0)//Position - 0x15C30
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_323(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_323(int iParam0)//Position - 0x15C75
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
	func_324(&(Global_113386.f_2363.f_539), iVar1);
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

void func_324(var uParam0, int iParam1)//Position - 0x15D85
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
			if (!func_326(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_326(int iParam0, var uParam1, float fParam2)//Position - 0x15F59
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
			return func_326(8, uParam1, fParam2);
			break;
		case 10:
			return func_326(8, uParam1, fParam2);
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

void func_330(char* sParam0)//Position - 0x16A31
{
	__LIB_0__::func_381(sParam0);
	func_322(0);
}

void func_332()//Position - 0x16A83
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
				if (!func_323(iVar0))
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

