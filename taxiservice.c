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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int* iLocal_50 = NULL;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	char* sLocal_107 = NULL;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 12;
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
	var uLocal_812 = 1065353216;
	int iLocal_813 = 0;
	struct<9> Local_814 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	struct<3> Local_819[40];
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	char cLocal_824[32] = "";
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	struct<3> Local_829 = { 0, 0, 0 } ;
	struct<3> Local_830 = { 0, 0, 0 } ;
	struct<3> Local_831 = { 0, 0, 0 } ;
	struct<3> Local_832 = { 0, 0, 0 } ;
	struct<3> Local_833 = { 0, 0, 0 } ;
	struct<3> Local_834 = { 0, 0, 0 } ;
	struct<3> Local_835 = { 0, 0, 0 } ;
	struct<3> Local_836 = { 0, 0, 0 } ;
	struct<3> Local_837 = { 0, 0, 0 } ;
	struct<3> Local_838 = { 0, 0, 0 } ;
	int iLocal_839 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_45 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_69 = 1076369579;
	iLocal_70 = 1076631591;
	fLocal_73 = 0.22f;
	fLocal_74 = 50f;
	fLocal_75 = -4f;
	fLocal_76 = 4f;
	fLocal_77 = -89f;
	fLocal_78 = 89f;
	fLocal_79 = 4f;
	fLocal_82 = 0f;
	fLocal_84 = 0.4f;
	fLocal_85 = 0.6f;
	fLocal_86 = 0.201f;
	fLocal_87 = 0.351f;
	iLocal_90 = -1;
	iLocal_105 = -1;
	iLocal_106 = -1;
	sLocal_107 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 195 /*INPUT_FRONTEND_AXIS_X*/, true);
	iLocal_108 = joaat("prop_taxi_meter_2");
	iLocal_110 = 3;
	iLocal_816 = -1;
	iLocal_817 = 263;
	StringCopy(&cLocal_824, "oddjobs@taxi@driver", 32);
	Local_830 = { 0f, 0f, 0f };
	Local_831 = { 0f, 0f, 0f };
	Local_835 = { 0f, -0.25f, 0.55f };
	Local_836 = { -0.3f, 1f, 0.35f };
	Local_837 = { -0.01f, 0.6f, 0.24f };
	Local_838 = { -5f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(66))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 64)
		{
			func_237(0);
		}
		else
		{
			func_237(1);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_230())
	{
		func_237(1);
	}
	while (true)
	{
		if (!__LIB_39__::func_762())
		{
			func_237(1);
		}
		if (func_228(iLocal_822))
		{
			func_237(1);
		}
		switch (iLocal_822)
		{
			case 1:
				func_63();
				break;
			case 2:
				func_1();
				break;
			case 3:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1D4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_112433)
		{
			Global_112433 = 0;
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			}
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
			if ((iLocal_821 == 2 || iLocal_821 == 3) || iLocal_821 == 4)
			{
				func_7();
			}
		}
	}
	__LIB_39__::func_768();
	if (__LIB_0__::func_695(Global_112417) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
	{
		if (!__LIB_39__::func_758(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && !__LIB_39__::func_758(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	else
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_112418, Global_112417, false))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Global_112418, Global_112417, PLAYER::PLAYER_PED_ID(), 8, 25f, 790564, 300f, 15f, true);
					}
				}
				else if (!PED::IS_PED_FLEEING(Global_112418))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SMART_FLEE_PED(Global_112418, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					}
				}
				PED::SET_PED_KEEP_TASK(Global_112418, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
			}
		}
		else if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
		{
			if (PED::IS_PED_IN_VEHICLE(Global_112418, Global_112417, false))
			{
				if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Global_112418, Global_112417, 12f, 790699);
				}
			}
			PED::SET_PED_KEEP_TASK(Global_112418, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_112418, false);
		}
		func_237(1);
	}
}

void func_7()//Position - 0x4F4
{
	bool bVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (!PED::IS_PED_INJURED(Global_112418))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
			{
				if (!func_61())
				{
					bVar0 = true;
					if (__LIB_12__::func_295(__LIB_0__::func_683()) >= iLocal_101)
					{
						if (bLocal_65)
						{
							if (iLocal_101 > 0)
							{
								if (fLocal_72 > 75f)
								{
									iLocal_818 = 6;
								}
								else
								{
									iLocal_818 = 5;
								}
								func_44(Global_112418, &iLocal_818);
								__LIB_15__::func_812(__LIB_0__::func_683(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (iLocal_66 || iLocal_821 == 3)
						{
							if (iLocal_101 > 0)
							{
								iLocal_818 = 13;
								func_44(Global_112418, &iLocal_818);
								__LIB_15__::func_812(__LIB_0__::func_683(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Global_112417) > 5f)
						{
							if (!__LIB_0__::func_134())
							{
								iLocal_818 = 12;
								func_44(Global_112418, &iLocal_818);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							}
						}
						else
						{
							iLocal_818 = 13;
							func_44(Global_112418, &iLocal_818);
							if (iLocal_101 > 0)
							{
								__LIB_15__::func_812(__LIB_0__::func_683(), 21, iLocal_101);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_101 > 0)
						{
							iLocal_818 = 7;
							func_44(Global_112418, &iLocal_818);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					}
				}
			}
		}
	}
}

void func_44(int iParam0, int iParam1)//Position - 0x19D7
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!__LIB_39__::func_772(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					__LIB_0__::func_640(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_45();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					__LIB_0__::func_640(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					__LIB_0__::func_640(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					__LIB_0__::func_640(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					__LIB_0__::func_640(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					__LIB_0__::func_640(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_45();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					__LIB_0__::func_640(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					__LIB_0__::func_640(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					__LIB_0__::func_640(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					__LIB_0__::func_640(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_112438)
					{
						__LIB_0__::func_640(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_112438 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					__LIB_0__::func_640(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (AUDIO::IS_RADIO_RETUNING())
					{
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 4000)
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
							}
							switch (AUDIO::GET_PLAYER_RADIO_STATION_INDEX())
							{
								case 0:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VIBE", 7);
									break;
								case 1:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LRR", 7);
									break;
								case 2:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JNR", 7);
									break;
								case 3:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_MASSIVEB", 7);
									break;
								case 4:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_K109", 7);
									break;
								case 5:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_WKTT", 7);
									break;
								case 6:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_LCHC", 7);
									break;
								case 7:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_JOURNEY", 7);
									break;
								case 8:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FUSION", 7);
									break;
								case 9:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BEAT", 7);
									break;
								case 10:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_BROKER", 7);
									break;
								case 11:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								case 12:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_PLR", 7);
									break;
								case 13:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_SANJUAN", 7);
									break;
								case 14:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_FRANCOIS", 7);
									break;
								case 15:
									__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					__LIB_0__::func_640(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						bVar0 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
						}
						__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "THANKS", 7);
						if (bVar0)
						{
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!__LIB_39__::func_772(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_45()//Position - 0x1E84
{
	char* sVar0;
	bool bVar1;
	sVar0 = func_46();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		bVar1 = AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
		}
		__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), sVar0, 7);
		if (bVar1)
		{
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
		}
	}
}

char* func_46()//Position - 0x1ED0
{
	char cVar0[32];
	StringCopy(&cVar0, ZONE::GET_NAME_OF_ZONE(__LIB_39__::func_759(Local_43.f_0)), 32);
	if (MISC::ARE_STRINGS_EQUAL("SanAnd" /* GXT: San Andreas */, &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alamo" /* GXT: Alamo Sea */, &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Alta" /* GXT: Alta */, &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Airp" /* GXT: Los Santos International Airport */, &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ArmyB" /* GXT: Fort Zancudo */, &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BhamCa" /* GXT: Banham Canyon */, &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Banning" /* GXT: Banning */, &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Baytre" /* GXT: Baytree Canyon */, &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Beach" /* GXT: Vespucci Beach */, &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradT" /* GXT: Braddock Tunnel */, &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("BradP" /* GXT: Braddock Pass */, &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Burton" /* GXT: Burton */, &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CANNY" /* GXT: Raton Canyon */, &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CCreak" /* GXT: Cassidy Creek */, &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CalafB" /* GXT: Calafia Bridge */, &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ChamH" /* GXT: Chamberlain Hills */, &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHU" /* GXT: Chumash */, &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CHIL" /* GXT: Vinewood Hills */, &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("COSI" /* GXT: Countryside */, &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("CMSW" /* GXT: Chiliad Mountain State Wilderness */, &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Cypre" /* GXT: Cypress Flats */, &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Davis" /* GXT: Davis */, &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Desrt" /* GXT: Grand Senora Desert */, &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelBe" /* GXT: Del Perro Beach */, &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelPe" /* GXT: Del Perro */, &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DelSol" /* GXT: La Puerta */, &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Downt" /* GXT: Downtown */, &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("DTVine" /* GXT: Downtown Vinewood */, &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Eclips" /* GXT: Eclipse */, &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELSant" /* GXT: East Los Santos */, &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("EBuro" /* GXT: El Burro Heights */, &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ELGorl" /* GXT: El Gordo Lighthouse */, &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Elysian" /* GXT: Elysian Island */, &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galli" /* GXT: Galileo Park */, &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Galfish" /* GXT: Galilee */, &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Greatc" /* GXT: Great Chaparral */, &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Golf" /* GXT: GWC and Golfing Society */, &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("GrapeS" /* GXT: Grapeseed */, &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Hawick" /* GXT: Hawick */, &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Harmo" /* GXT: Harmony */, &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Heart" /* GXT: Heart Attacks Beach */, &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HumLab" /* GXT: Humane Labs and Research */, &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("HORS" /* GXT: Vinewood Racetrack */, &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Koreat" /* GXT: Little Seoul */, &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Jail" /* GXT: Bolingbroke Penitentiary */, &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LAct" /* GXT: Land Act Reservoir */, &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LDam" /* GXT: Land Act Dam */, &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Lago" /* GXT: Lago Zancudo */, &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LegSqu" /* GXT: Legion Square */, &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosSF" /* GXT: Los Santos Freeway */, &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LMesa" /* GXT: La Mesa */, &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPuer" /* GXT: La Puerta */, &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("LosPFy" /* GXT: La Puerta Fwy */, &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Mirr" /* GXT: Mirror Park */, &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Morn" /* GXT: Morningwood */, &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Murri" /* GXT: Murrieta Heights */, &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTChil" /* GXT: Mount Chiliad */, &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTJose" /* GXT: Mount Josiah */, &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("MTGordo" /* GXT: Mount Gordo */, &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Movie" /* GXT: Richards Majestic */, &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (MISC::ARE_STRINGS_EQUAL("NCHU" /* GXT: North Chumash */, &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Oceana" /* GXT: Pacific Ocean */, &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Observ" /* GXT: Galileo Observatory */, &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Palmpow" /* GXT: Palmer-Taylor Power Station */, &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBOX" /* GXT: Pillbox Hill */, &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PBluff" /* GXT: Pacific Bluffs */, &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Paleto" /* GXT: Paleto Bay */, &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalCov" /* GXT: Paleto Cove */, &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalFor" /* GXT: Paleto Forest */, &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (MISC::ARE_STRINGS_EQUAL("PalHigh" /* GXT: Palomino Highlands */, &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ProcoB" /* GXT: Procopio Beach */, &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Prol" /* GXT: North Yankton */, &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RTRAK" /* GXT: Redwood Lights Track */, &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rancho" /* GXT: Rancho */, &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (MISC::ARE_STRINGS_EQUAL("RGLEN" /* GXT: Richman Glen */, &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Richm" /* GXT: Richman */, &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Rockf" /* GXT: Rockford Hills */, &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SANDY" /* GXT: Sandy Shores */, &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaH" /* GXT: Tongva Hills */, &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TongvaV" /* GXT: Tongva Valley */, &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("East_V" /* GXT: East Vinewood */, &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zenora" /* GXT: Senora Freeway */, &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Slab" /* GXT: Stab City */, &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SKID" /* GXT: Mission Row */, &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SLSant" /* GXT: South Los Santos */, &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Stad" /* GXT: Maze Bank Arena */, &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Tatamo" /* GXT: Tataviam Mountains */, &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Termina" /* GXT: Terminal */, &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (MISC::ARE_STRINGS_EQUAL("TEXTI" /* GXT: Textile City */, &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WVine" /* GXT: West Vinewood */, &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("UtopiaG" /* GXT: Utopia Gardens */, &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vesp" /* GXT: Vespucci */, &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (MISC::ARE_STRINGS_EQUAL("VCana" /* GXT: Vespucci Canals */, &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Vine" /* GXT: Vinewood */, &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WMirror" /* GXT: West Mirror Drive */, &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("WindF" /* GXT: Ron Alternates Wind Farm */, &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (MISC::ARE_STRINGS_EQUAL("Zancudo" /* GXT: Zancudo River */, &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (MISC::ARE_STRINGS_EQUAL("SanChia" /* GXT: San Chianski Mountain Range */, &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (MISC::ARE_STRINGS_EQUAL("STRAW" /* GXT: Strawberry */, &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (MISC::ARE_STRINGS_EQUAL("zQ_UAR" /* GXT: Davis Quartz */, &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (MISC::ARE_STRINGS_EQUAL("ZP_ORT" /* GXT: Port of South Los Santos */, &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

int func_61()//Position - 0x2DE9
{
	if (__LIB_13__::func_636(1) == __LIB_0__::func_683())
	{
		return 1;
	}
	return 0;
}

void func_63()//Position - 0x2E15
{
	if (func_226())
	{
		func_224();
		func_223();
		func_222();
		if (!func_219())
		{
			func_213();
		}
		func_212();
		if (iLocal_821 != 4)
		{
			func_44(Global_112418, &iLocal_818);
			if (iLocal_821 != 0)
			{
				if (func_210())
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111))
					{
						func_187();
						iLocal_58 = 1;
					}
				}
				func_178();
			}
		}
		switch (iLocal_821)
		{
			case 0:
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
						{
							if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
							}
						}
					}
				}
				if (func_177())
				{
					if (func_176() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_187();
						iLocal_818 = 1;
						iLocal_820 = 0;
						Global_112454 = 0;
						iLocal_88 = 0;
						iLocal_66 = 0;
						iLocal_56 = 0;
						iLocal_58 = 1;
						func_175();
						iLocal_821 = 1;
					}
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
						{
							if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
							}
						}
					}
				}
				__LIB_42__::func_697(&Global_112417, iLocal_839);
				if (func_173())
				{
					STATS::STAT_INCREMENT(joaat("SP_NUMBER_OF_TAXIS_USED"), 1f);
					iLocal_58 = 1;
					iLocal_821 = 2;
				}
				break;
			case 2:
				if (func_173())
				{
					func_170();
				}
				break;
			case 3:
				func_169();
				break;
			case 4:
				func_79();
				break;
		}
		func_64();
	}
	else
	{
		iLocal_822 = 2;
	}
}

void func_64()//Position - 0x3019
{
	char* sVar0;
	if (!func_219())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112))
		{
			if (iLocal_821 != 0)
			{
				sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/, true);
				if (!MISC::ARE_STRINGS_EQUAL(sLocal_107, sVar0))
				{
					sLocal_107 = sVar0;
					iLocal_58 = 1;
				}
				if (iLocal_58)
				{
					Local_814 = { __LIB_1__::func_404() };
					__LIB_1__::func_539(&uLocal_113);
					__LIB_1__::func_513(0, 75, "TXM_EXIT" /* GXT: Exit */, &uLocal_113, 0, 363);
					if (iLocal_91 > 1)
					{
						__LIB_1__::func_513(2, 218, "TXM_CDES" /* GXT: Change Destination */, &uLocal_113, 0, 363);
					}
					if (!bLocal_60)
					{
						if (iLocal_91 > 0)
						{
							__LIB_1__::func_513(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 363);
						}
					}
					else if (iLocal_821 == 2)
					{
						__LIB_1__::func_513(2, 177, "TXM_STOP" /* GXT: Stop */, &uLocal_113, 0, 363);
						if (bLocal_59)
						{
							__LIB_1__::func_513(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 363);
						}
						if (func_74())
						{
							__LIB_1__::func_513(2, 176, "TXM_SKIP" /* GXT: Skip (Extra Cost) */, &uLocal_113, 0, 363);
						}
						if (!bLocal_64)
						{
							__LIB_1__::func_513(2, 179, "TXM_HURY" /* GXT: Hurry */, &uLocal_113, 0, 363);
						}
					}
					else if (iLocal_821 == 3)
					{
						__LIB_1__::func_513(2, 177, "TXM_STRT" /* GXT: Start */, &uLocal_113, 0, 363);
						if (bLocal_59)
						{
							__LIB_1__::func_513(2, 176, "TXM_SLCT" /* GXT: Choose Destination */, &uLocal_113, 0, 363);
						}
					}
					iLocal_58 = 0;
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
				__LIB_0__::func_876(1);
				__LIB_1__::func_10(1);
				__LIB_1__::func_538(&iLocal_112, &Local_814, &uLocal_113, __LIB_1__::func_402(&uLocal_113));
			}
		}
		else
		{
			iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);
		iLocal_58 = 1;
	}
}

int func_74()//Position - 0x35B7
{
	if (iLocal_821 != 2)
	{
		return 0;
	}
	if (bLocal_59)
	{
		return 0;
	}
	if (fLocal_83 < 50f)
	{
		return 0;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			return 0;
		}
	}
	return 1;
}

void func_79()//Position - 0x37B3
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	fVar2 = 1f;
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
	switch (iLocal_823)
	{
		case 0:
			__LIB_0__::func_671(1);
			if (__LIB_14__::func_684(iLocal_89, 500))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_823 = 1;
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_112417, false);
				}
				HUD::CLEAR_PRINTS();
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
				{
					HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
				{
					OBJECT::DELETE_OBJECT(&iLocal_109);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_108);
				}
				if (CAM::IS_CAM_ACTIVE(iLocal_68))
				{
					GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
					Global_112434 = 0;
					CAM::SET_CAM_ACTIVE(iLocal_68, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::UNLOCK_MINIMAP_POSITION();
					HUD::UNLOCK_MINIMAP_ANGLE();
					HUD::SET_RADAR_ZOOM(0);
				}
				func_158(iLocal_839);
				iLocal_89 = MISC::GET_GAME_TIMER();
				if (bLocal_59)
				{
					bLocal_61 = false;
					bLocal_59 = false;
					Local_43 = { Local_819[iLocal_92 /*3*/] };
				}
				if (!bLocal_61)
				{
					iLocal_88 = 0;
					iLocal_820 = 0;
					iLocal_823 = 2;
				}
				else
				{
					__LIB_38__::func_99();
					iLocal_823 = 3;
				}
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		case 2:
			if (func_124(&Local_43, &Global_112424, &Global_112430))
			{
				__LIB_38__::func_99();
				iLocal_823 = 3;
			}
			break;
		case 3:
			if (Global_78335 == -1)
			{
				func_123();
				func_122();
				func_120();
				func_116();
				func_115();
				MISC::CLEAR_AREA(Global_112424, 5f, true, false, false, false);
				func_111(1097859072);
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					ENTITY::SET_ENTITY_COORDS(Global_112417, Global_112424, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Global_112417, Global_112430);
					ENTITY::FREEZE_ENTITY_POSITION(Global_112417, true);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				STREAMING::NEW_LOAD_SCENE_STOP();
				MISC::CLEAR_AREA(Global_112424, 5000f, true, false, false, false);
				MISC::CLEAR_AREA_OF_OBJECTS(Global_112424, 5000f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Global_112424, 30f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Global_112424, 5000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Global_112424, 5000f);
				if (Global_97363 != -1)
				{
					__LIB_0__::func_379(Global_97363, 1);
					__LIB_0__::func_468(Global_97363);
				}
				iLocal_815 = func_108(Local_43.f_0);
				if (iLocal_815 != -1)
				{
					__LIB_0__::func_379(iLocal_815, 1);
				}
				iLocal_57 = 0;
				iLocal_823 = 4;
			}
			break;
		case 4:
			if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Global_112424, 4500f, 0))
			{
				iLocal_57 = 1;
				iLocal_823 = 5;
			}
			else if (__LIB_14__::func_684(iLocal_89, 2500))
			{
				iLocal_823 = 5;
			}
			break;
		case 5:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					if (iLocal_815 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_57 = 0;
						__LIB_39__::func_446(iLocal_815);
						__LIB_0__::func_379(iLocal_815, 0);
					}
					iLocal_823 = 6;
				}
				else if (__LIB_14__::func_684(iLocal_89, 20000))
				{
					if (iLocal_815 != -1)
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_57 = 0;
						__LIB_39__::func_446(iLocal_815);
						__LIB_0__::func_379(iLocal_815, 0);
					}
					iLocal_823 = 6;
				}
			}
			else
			{
				if (iLocal_815 != -1)
				{
					__LIB_39__::func_446(iLocal_815);
					__LIB_0__::func_379(iLocal_815, 0);
				}
				iLocal_57 = 0;
				iLocal_823 = 6;
			}
			break;
		case 6:
			__LIB_17__::func_10();
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			MISC::POPULATE_NOW();
			if (iLocal_815 != -1)
			{
				bVar1 = true;
				if (Global_91229[iLocal_815 /*34*/].f_13 == -1 && Global_91229[iLocal_815 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((__LIB_0__::func_683() == 0 && !BitTest(Global_91229[iLocal_815 /*34*/].f_15, 8)) || (__LIB_0__::func_683() == 1 && !BitTest(Global_91229[iLocal_815 /*34*/].f_15, 9))) || (__LIB_0__::func_683() == 2 && !BitTest(Global_91229[iLocal_815 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (__LIB_13__::func_692(Global_91229[iLocal_815 /*34*/].f_13, Global_91229[iLocal_815 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					CLOCK::ADVANCE_CLOCK_TIME_TO(Global_91229[iLocal_815 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_105 = func_96(1129381888, 1);
			iLocal_823 = 7;
			break;
		case 7:
			bVar0 = true;
			if (func_95(iLocal_105))
			{
				bVar0 = false;
			}
			if (!func_85(Global_112424))
			{
				bVar0 = false;
			}
			if (!__LIB_17__::func_9())
			{
				bVar0 = false;
			}
			if (!VEHICLE::HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED())
			{
				bVar0 = false;
			}
			if (iLocal_57)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_815 != -1 && Global_97368)
			{
				bVar0 = false;
			}
			if (__LIB_14__::func_684(iLocal_89, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_57)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					iLocal_57 = 0;
				}
				if (iLocal_67)
				{
					iLocal_67 = 0;
					MISC::GET_GROUND_Z_FOR_3D_COORD(Global_112424 + Vector(100f, 0f, 0f), &fVar2, false, false);
					if (fVar2 > Global_112424.f_2)
					{
						Global_112424.f_2 = (fVar2 + 0.5f);
					}
				}
				func_111(12f);
				func_81();
				if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_112417, false);
					ENTITY::SET_ENTITY_HEADING(Global_112417, Global_112430);
					ENTITY::SET_ENTITY_COORDS(Global_112417, Global_112424, true, false, false, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_112417, 5f);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 24, 5000);
				}
				iLocal_89 = MISC::GET_GAME_TIMER();
				iLocal_823 = 8;
			}
			break;
		case 8:
			if (__LIB_14__::func_684(iLocal_89, 500))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_112417, true);
				}
				if (!__LIB_0__::func_324())
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				iLocal_823 = 9;
			}
			break;
		case 9:
			if (CAM::IS_SCREEN_FADED_IN() || __LIB_0__::func_324())
			{
				if (((!Global_97369 && iLocal_815 != -1) && iLocal_815 != 72) && iLocal_815 != 87)
				{
					__LIB_0__::func_468(iLocal_815);
				}
				__LIB_0__::func_671(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 24, 5000);
				PED::SET_PED_KEEP_TASK(Global_112418, true);
				bLocal_65 = true;
				iLocal_822 = 2;
				iLocal_823 = 10;
			}
			break;
		case 10:
			break;
	}
}

void func_81()//Position - 0x3E2E
{
	struct<3> Var0;
	float fVar1;
	switch (iLocal_816)
	{
		case 92:
			Var0 = { __LIB_15__::func_964(229, 0) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_112424, Var0, true);
			if (fVar1 < 100f)
			{
				Var0 = { __LIB_0__::func_79(Global_112424 - Var0) };
				Var0 = { (Global_112424 + (Var0.f_0 * IntToFloat((100 - SYSTEM::ROUND(fVar1))))), (Global_112424.f_1 + (Var0.f_1 * IntToFloat((100 - SYSTEM::ROUND(fVar1))))), Global_112424.f_2 };
				PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, &Global_112424, &Global_112430, 1, 3f, 0f);
				ENTITY::SET_ENTITY_COORDS(Global_112417, Global_112424, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Global_112417, Global_112430);
			}
			break;
	}
}

int func_85(struct<3> Param0)//Position - 0x3F76
{
	int iVar0;
	iVar0 = func_93(Param0);
	if (!__LIB_0__::func_702(&iLocal_50))
	{
		iLocal_49 = 0;
		__LIB_38__::func_939(&iLocal_50, 0f);
	}
	if (iVar0 == iLocal_49 || __LIB_37__::func_276(&iLocal_50) > 8f)
	{
		__LIB_1__::func_12(&iLocal_50);
		iLocal_49 = 0;
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0)//Position - 0x40CE
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	if (__LIB_0__::func_786(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = SYSTEM::VDIST2(__LIB_15__::func_964(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (__LIB_0__::func_786(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = SYSTEM::VDIST2(__LIB_15__::func_964(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (__LIB_0__::func_786(0, 10))
	{
		iVar1 = 125;
		fVar2 = SYSTEM::VDIST2(__LIB_15__::func_964(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_95(int iParam0)//Position - 0x41D3
{
	if (iParam0 != -1)
	{
		if (!Global_112473[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_96(int iParam0, bool bParam1)//Position - 0x41F4
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = iParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__::func_43(__LIB_0__::func_683()))
		{
			iVar5 = __LIB_14__::func_792();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					__LIB_0__::func_432(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

int func_108(int iParam0)//Position - 0x5E4D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			if (Global_97374[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_32338[Global_97374[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_97374[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_111(float fParam0)//Position - 0x5F09
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	if (!(((((((__LIB_11__::func_283(89) || __LIB_11__::func_283(88)) || __LIB_11__::func_283(92)) || __LIB_11__::func_283(33)) || __LIB_13__::func_102() == 89) || __LIB_13__::func_102() == 88) || __LIB_13__::func_102() == 92) || __LIB_13__::func_102() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_112424 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_112(&iVar0, Var3, fParam0))
		{
			bVar1 = false;
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Global_112424, iVar2, &Var3, 1, 3f, 0f))
			{
				iVar2++;
			}
		}
	}
	if (SYSTEM::VDIST2(Var3, Global_112424) > 2f)
	{
		PATHFIND::GET_SAFE_COORD_FOR_PED(Var3, false, &Global_112424, 0);
	}
}

int func_112(int iParam0, struct<3> Param1, float fParam2)//Position - 0x5FF1
{
	int iVar0[5];
	int iVar1;
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		*iParam0 = VEHICLE::GET_CLOSEST_VEHICLE(Param1, fParam2, iVar0[iVar1], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_115()//Position - 0x60DA
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		switch (Global_63379[Global_75250[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_75250[iVar0 /*9*/].f_3 = 3;
				break;
			case 4:
				if (Global_63162)
				{
					Global_75250[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_116()//Position - 0x613A
{
	float fVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_112424);
	if (bLocal_64)
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 200f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 200f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	else
	{
		iVar1 = SYSTEM::FLOOR(((fVar0 / 100f) / 60f));
		iVar2 = SYSTEM::ROUND(((fVar0 / 100f) - (60f * SYSTEM::TO_FLOAT(iVar1))));
	}
	CLOCK::ADD_TO_CLOCK_TIME(iVar1, iVar2, 0);
	__LIB_42__::func_696((SYSTEM::TO_FLOAT((iVar1 * 60 + iVar2)) / 60f));
}

float func_119(struct<3> Param0, struct<3> Param1)//Position - 0x62A1
{
	return (SYSTEM::VMAG(Param1 - Param0) * 1.3f);
}

void func_120()//Position - 0x62BC
{
	float fVar0;
	int iVar1;
	fVar0 = (((func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_112424) / 50f) * fLocal_73) * 2.4f);
	iVar1 = (SYSTEM::FLOOR(fLocal_82) + SYSTEM::ROUND(fVar0));
	fVar0 = SYSTEM::TO_FLOAT(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = SYSTEM::ROUND(fVar0);
	iLocal_101 = (iLocal_101 + iVar1);
	fLocal_82 = (fLocal_82 + IntToFloat(iLocal_101));
	func_121();
}

void func_121()//Position - 0x6324
{
	iLocal_103 = (iLocal_103 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (iLocal_103 > 5000)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_833, false) > 50f)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
		Local_833 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	}
	iLocal_101 = SYSTEM::CEIL(fLocal_82);
	if (iLocal_101 != iLocal_102)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_112424);
		iLocal_102 = iLocal_101;
	}
}

void func_122()//Position - 0x63C2
{
	int iVar0;
	float fVar1;
	switch (iLocal_71)
	{
		case 0:
			iVar0 = joaat("SP0_DIST_AS_PASSENGER_TAXI");
			break;
		case 1:
			iVar0 = joaat("SP1_DIST_AS_PASSENGER_TAXI");
			break;
		case 2:
			iVar0 = joaat("SP2_DIST_AS_PASSENGER_TAXI");
			break;
		default:
			if (!__LIB_0__::func_39(14))
			{
			}
			break;
	}
	if (!__LIB_0__::func_39(14))
	{
		fVar1 = PATHFIND::CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_112424);
		STATS::STAT_INCREMENT(iVar0, fVar1);
	}
}

void func_123()//Position - 0x6435
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(Global_112096.f_218))
	{
		STREAMING::STREAMVOL_DELETE(Global_112096.f_218);
	}
}

int func_124(int iParam0, var* uParam1, float* fParam2)//Position - 0x6458
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		switch (iLocal_820)
		{
			case 0:
				iLocal_110 = 3;
				Local_829 = { __LIB_39__::func_759(*iParam0) };
				if (HUD::DOES_BLIP_EXIST(Global_112422) && *iParam0 == Global_112422)
				{
					*uParam1 = { Global_112427 };
					*fParam2 = Global_112431;
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
					iLocal_820 = 4;
					return 1;
				}
				else
				{
					if (func_144(Local_829, uParam1, fParam2))
					{
						Var0 = { Local_829 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_72 = SYSTEM::VMAG(Var0);
						iLocal_110 = 7;
						iLocal_820 = 4;
						return 1;
					}
					iLocal_820 = 1;
					return 0;
				}
				break;
			case 1:
				if (func_133(Local_829, uParam1, fParam2, 1))
				{
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
					iLocal_820 = 4;
					return 1;
				}
				else
				{
					iLocal_88 = 0;
					iLocal_820 = 2;
					return 0;
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
				{
					if (func_125(&Global_112417, ENTITY::GET_ENTITY_COORDS(Global_112417, false), Local_829, uParam1, fParam2, &iLocal_88, iParam0, 1000))
					{
						iLocal_820 = 3;
						return 0;
					}
					else
					{
						return 0;
					}
				}
				break;
			case 3:
				if (func_144(*uParam1, uParam1, fParam2))
				{
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = SYSTEM::VMAG(Var0);
					iLocal_110 = 7;
				}
				iLocal_820 = 4;
				return 1;
				break;
			case 4:
				return 1;
				break;
			case 5:
				break;
		}
	}
	return 0;
}

int func_125(var uParam0, struct<3> Param1, struct<3> Param2, var* uParam3, float* fParam4, int iParam5, var uParam6, int iParam7)//Position - 0x6615
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar5 = 0;
	bVar13 = false;
	iVar14 = 1;
	if (!__LIB_1__::func_509(Param2))
	{
		iVar14 = 9;
	}
	bVar15 = true;
	iVar18 = *iParam5 + 2;
	iVar19 = 50;
	__LIB_38__::func_481(Param1, Param2, &Local_830, &Local_831, iParam7);
	if (__LIB_38__::func_480(Local_830, Local_831))
	{
		while (!bVar13 && *iParam5 < iVar18)
		{
			if (Param2.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param2, *iParam5, uParam3, fParam4, &iVar6, iVar14, fVar0, fVar1))
			{
				iVar12 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(*uParam3, 1, iVar14, 3f, 0f);
				if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar12))
				{
					if (PATHFIND::GET_CLOSEST_ROAD(*uParam3, 1f, 1, &uVar4, &uVar3, &iVar8, &iVar7, &fVar10, bVar15))
					{
						if (*fParam4 < 90f || *fParam4 >= 270f)
						{
							bVar17 = true;
						}
						else
						{
							bVar17 = false;
						}
						bVar16 = false;
						if (bVar17)
						{
							if (iVar6 == iVar8)
							{
								bVar16 = true;
							}
						}
						else if (iVar6 == iVar7)
						{
							bVar16 = true;
						}
						if (fVar10 < 0f)
						{
							fVar9 = 0f;
						}
						else if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar12) || !PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar12))
						{
							fVar9 = 0f;
						}
						else
						{
							if (bVar17)
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
								}
								if (bVar16)
								{
									if (iVar8 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar8 - 2)) * 1f));
									}
								}
								else if (iVar8 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar8 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (SYSTEM::TO_FLOAT(iVar7) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * SYSTEM::TO_FLOAT(iVar7));
								}
								if (bVar16)
								{
									if (iVar7 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar7 - 2)) * 1f));
									}
								}
								else if (iVar7 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar7 - 1)) * 1f));
								}
							}
							if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(*uParam3, &uVar21, &uVar20))
							{
								if (!uVar20 & 64 == 0)
								{
									fVar9 = (fVar9 + (0.9f * fVar10));
								}
								if (!uVar20 & 4 == 0)
								{
									fVar9 = (fVar9 + -0.7f);
								}
							}
						}
						fVar11 = (Param2.f_2 - uParam3->f_2);
						if (fVar11 < 0f)
						{
							fVar11 = (fVar11 * -1f);
						}
						if ((__LIB_39__::func_770(Param2, *uParam3) || fVar11 < 0.5f) || func_126(uParam6))
						{
							*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam3, *fParam4, fVar9, 0f, 0f) };
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
							{
								iVar5 = *uParam0;
							}
							if (!MISC::IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(*uParam3, 3f, 3f, 3f, iVar5))
							{
								if (func_133(*uParam3, uParam3, fParam4, 1))
								{
								}
								bVar13 = true;
							}
						}
					}
				}
			}
			*iParam5++;
			if (*iParam5 >= iVar19)
			{
				*uParam3 = { Param2 };
				if (uParam3->f_2 == 1f)
				{
					fVar11 = 1f;
					fVar11 = PATHFIND::GET_APPROX_FLOOR_FOR_AREA((*uParam3 - 2f), (uParam3->f_1 - 2f), (*uParam3 + 2f), (uParam3->f_1 + 2f));
					if (fVar11 > 1f)
					{
						iLocal_67 = 1;
						uParam3->f_2 = fVar11;
						uParam3->f_2 = (uParam3->f_2 + 0.5f);
					}
				}
				bVar13 = true;
			}
		}
		if (bVar13)
		{
			Var2 = { Param2 - *uParam3 };
			Var2.f_2 = 0f;
			fLocal_72 = SYSTEM::VMAG(Var2);
			if (fLocal_72 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_126(var uParam0)//Position - 0x696E
{
	if (HUD::DOES_BLIP_EXIST(*uParam0) && __LIB_39__::func_760(*uParam0) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, var* uParam1, float* fParam2, int iParam3)//Position - 0x6E6D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	if (__LIB_37__::func_921(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.5804f, -3332.6846f, 5.4191f };
		*fParam2 = 163.87f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.1599f, 5166.5103f, 19.1864f };
		*fParam2 = 0f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -874.9833f, 125.7645f, -100f, -768.62537f, 193.02971f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*fParam2 = 355.3355f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, -39.2005f, -1473.5498f, -100f, 10.6133f, -1430.0988f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.3999f, 29.4244f };
		*fParam2 = 94.6893f;
		return 1;
	}
	else if (__LIB_37__::func_921(Param0, 1964.7421f, 3792.59f, -100f, 1992.6361f, 3840.2532f, 100f))
	{
		*uParam1 = { 1996.3718f, 3818.8308f, 31.1612f };
		*fParam2 = 170.0221f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -68.218704f, -1086.951f, -100f, -10.545177f, -1106.8953f, 100f, 43.5f, false, true))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam2 = 324.1257f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 398.78986f, -1651.4174f, -100f, 423.83725f, -1619.4325f, 100f, 45f, false, true))
	{
		*uParam1 = { 416.871f, -1613.0814f, 28.1401f };
		*fParam2 = 227.9333f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -988.8535f, -2553.1775f, -100f, -1041.4865f, -2644.97f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -1039.5425f, -2574.467f, 12.7566f };
		*fParam2 = 162.2744f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -906.90204f, -2600.4607f, -100f, -959.76514f, -2692.0571f, 100f, 49.75f, false, true) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		*uParam1 = { -911.1597f, -2676.1316f, 12.7567f };
		*fParam2 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -209.33719f, -2011.0995f, 26.620369f, -257.22247f, -2076.9631f, 36.620373f, 30f, false, true))
	{
		*uParam1 = { -211.8546f, -2030.7715f, 26.6204f };
		*fParam2 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -804.05005f, 4216.4116f, 204.4872f, -509.06787f, 4135.1904f, 123.25017f, 250f, false, true))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*fParam2 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2203.1675f, 183.35495f, 167.40219f, -2311.5874f, 434.3828f, 195.46692f, 138.5f, false, true))
	{
		*uParam1 = { -2294.9446f, 376.2506f, 173.4669f };
		*fParam2 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -2041.478f, -553.21594f, -0.089962f, -1787.0801f, -768.08856f, 37.999176f, 220f, false, true))
	{
		*uParam1 = { -1897.0765f, -557.3334f, 10.7279f };
		*fParam2 = 228.7709f;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1882.8832f, -541.7442f, 4.675224f, -1929.6265f, -598.6026f, 40.4298f, 35f, false, true))
		{
			return 1;
		}
		else
		{
			Var2[0 /*3*/] = { -1962.4679f, -503.4229f, 10.8349f };
			Var2[1 /*3*/] = { -1924.4722f, -534.7357f, 10.8181f };
			Var2[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var2[3 /*3*/] = { -1850.6611f, -595.8367f, 10.4649f };
			Var2[4 /*3*/] = { -1808.9995f, -632.1207f, 10.0016f };
			Var2[5 /*3*/] = { -1745.0428f, -694.4053f, 9.1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = SYSTEM::VDIST(Var2[iVar6 /*3*/], Var1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { Var2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*fParam2 = 234.3999f;
			}
			else if (iVar3 == 1)
			{
				*fParam2 = 232.2255f;
			}
			else if (iVar3 == 2)
			{
				*fParam2 = 228.2855f;
			}
			else if (iVar3 == 3)
			{
				*fParam2 = 231.4914f;
			}
			else if (iVar3 == 4)
			{
				*fParam2 = 230.6703f;
			}
			else if (iVar3 == 5)
			{
				*fParam2 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -446.12f, 1057.4515f, 318.61685f, -405.83362f, 1194.4865f, 337.09656f, 106.25f, false, true))
	{
		*uParam1 = { -411.3629f, 1174.5865f, 324.6421f };
		*fParam2 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1362.0906f, -29.26777f, -100f, -1377.9531f, 152.23888f, 100f, 50f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380.1006f, 95.1566f, 53.5054f };
				*fParam2 = 4.555f;
				break;
			case 2:
				*uParam1 = { -1379.1394f, 84.2472f, 53.0592f };
				*fParam2 = 6.9278f;
				break;
			case 3:
				*uParam1 = { -1378.4266f, 74.5077f, 52.6622f };
				*fParam2 = 2.6813f;
				break;
			case 4:
				*uParam1 = { -1384.1774f, 73.9207f, 52.7438f };
				*fParam2 = 5.542f;
				break;
			case 5:
				*uParam1 = { -1381.1179f, 35.7838f, 52.659f };
				*fParam2 = 7.6687f;
				break;
			case 6:
				*uParam1 = { -1383.7413f, 64.1491f, 52.6647f };
				*fParam2 = 2.5572f;
				break;
			case 7:
				*uParam1 = { -1382.6162f, 49.6876f, 52.6585f };
				*fParam2 = 3.0185f;
				break;
			default:
				*uParam1 = { -1383.2987f, 54.4598f, 52.6562f };
				*fParam2 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 48.31006f, -1120.6694f, 28.030502f, -12.123452f, -1112.0841f, 36.08567f, 60f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50.9889f, -1092.5254f, 28.2152f };
					*fParam2 = 150.8833f;
					break;
				case 2:
					*uParam1 = { 46.7725f, -1099.7506f, 28.1639f };
					*fParam2 = 149.4322f;
					break;
				case 3:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam2 = 154.1378f;
					break;
				case 4:
					*uParam1 = { 38.1922f, -1113.3936f, 28.1507f };
					*fParam2 = 146.3778f;
					break;
				case 5:
					*uParam1 = { 13.0436f, -1124.7668f, 27.7359f };
					*fParam2 = 91.163f;
					break;
				case 6:
					*uParam1 = { 1.4336f, -1125.0425f, 27.1705f };
					*fParam2 = 91.0578f;
					break;
				case 7:
					*uParam1 = { -11.1811f, -1125.8105f, 26.3688f };
					*fParam2 = 91.866f;
					break;
				default:
					*uParam1 = { 21.9431f, -1124.5731f, 27.9417f };
					*fParam2 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0181f, -2540.235f, 18.669323f, -1023.33246f, -2562.1145f, 31.576157f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
					*fParam2 = 148.7004f;
					break;
				case 2:
					*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
					*fParam2 = 148.7144f;
					break;
				case 3:
					*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
					*fParam2 = 150.0955f;
					break;
				case 4:
					*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
					*fParam2 = 149.5649f;
					break;
				case 5:
					*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
					*fParam2 = 150.7363f;
					break;
				case 6:
					*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
					*fParam2 = 147.2113f;
					break;
				case 7:
					*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
					*fParam2 = 150.7597f;
					break;
				default:
					*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
					*fParam2 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1061.0587f, -2540.2537f, 10.944668f, -1023.2968f, -2562.0525f, 18.516848f, 250f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044.7413f, -2528.786f, 12.7568f };
					*fParam2 = 150.9439f;
					break;
				case 2:
					*uParam1 = { -1050.7631f, -2539.4978f, 12.7566f };
					*fParam2 = 150.851f;
					break;
				case 3:
					*uParam1 = { -1054.9523f, -2546.8596f, 12.7566f };
					*fParam2 = 149.9285f;
					break;
				case 4:
					*uParam1 = { -1060.3972f, -2556.898f, 12.6066f };
					*fParam2 = 150.8244f;
					break;
				case 5:
					*uParam1 = { -1020.7437f, -2490.0842f, 12.6396f };
					*fParam2 = 148.6134f;
					break;
				case 6:
					*uParam1 = { -1076.9043f, -2589.1794f, 12.6858f };
					*fParam2 = 149.0112f;
					break;
				case 7:
					*uParam1 = { -1026.3866f, -2501.9521f, 12.6923f };
					*fParam2 = 149.7553f;
					break;
				default:
					*uParam1 = { -1070.5065f, -2578.3892f, 12.6932f };
					*fParam2 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1043.3641f, -2747.29f, 16.960567f, -991.5368f, -2657.6816f, 69.12349f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067.8463f, -2708.9397f, 19.0588f };
					*fParam2 = 230.9025f;
					break;
				case 2:
					*uParam1 = { -1058.2238f, -2716.2166f, 19.06f };
					*fParam2 = 237.1285f;
					break;
				case 3:
					*uParam1 = { -1004.5667f, -2744.797f, 19.0811f };
					*fParam2 = 255.6885f;
					break;
				case 4:
					*uParam1 = { -1049.5092f, -2721.58f, 19.0546f };
					*fParam2 = 242.3581f;
					break;
				case 5:
					*uParam1 = { -1017.1544f, -2740.1174f, 19.0525f };
					*fParam2 = 243.5798f;
					break;
				case 6:
					*uParam1 = { -1042.0872f, -2726.0767f, 19.0452f };
					*fParam2 = 240.2381f;
					break;
				case 7:
					*uParam1 = { -1027.353f, -2734.4617f, 19.0509f };
					*fParam2 = 239.8703f;
					break;
				default:
					*uParam1 = { -1033.7404f, -2730.7458f, 19.0521f };
					*fParam2 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1047.6465f, -2754.947f, 2.941969f, -991.73145f, -2653.1533f, 16.892282f, 200f, false, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam2 = 265.8022f;
					break;
				case 2:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*fParam2 = 263.5472f;
					break;
				case 3:
					*uParam1 = { -987.6072f, -2747.2734f, 12.6069f };
					*fParam2 = 257.2886f;
					break;
				case 4:
					*uParam1 = { -1006.8151f, -2739.345f, 12.6334f };
					*fParam2 = 242.1315f;
					break;
				case 5:
					*uParam1 = { -1051.8304f, -2713.5527f, 12.6333f };
					*fParam2 = 239.9312f;
					break;
				case 6:
					*uParam1 = { -1041.0035f, -2719.6467f, 12.6402f };
					*fParam2 = 240.1081f;
					break;
				case 7:
					*uParam1 = { -1023.8323f, -2729.4646f, 12.6445f };
					*fParam2 = 239.6737f;
					break;
				default:
					*uParam1 = { -1012.8478f, -2735.1724f, 12.6656f };
					*fParam2 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 845.7216f, -990.7473f, 37.469604f, 846.3397f, -1066.8805f, 16.966232f, 90f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam2 = 93.132f;
				break;
			case 2:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*fParam2 = 92.2581f;
				break;
			case 3:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam2 = 92.714f;
				break;
			case 4:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam2 = 92.8628f;
				break;
			case 5:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*fParam2 = 268.6186f;
				break;
			case 6:
				*uParam1 = { 844.6506f, -1010.0903f, 26.9894f };
				*fParam2 = 270.076f;
				break;
			case 7:
				*uParam1 = { 852.2498f, -1010.1324f, 27.8091f };
				*fParam2 = 269.722f;
				break;
			default:
				*uParam1 = { 861.4028f, -1010.0249f, 28.808f };
				*fParam2 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 767.3736f, -1077.4288f, -10.786545f, 682.82837f, -1080.6858f, 79.673035f, 60f, false, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703.2726f, -1067.6997f, 21.4765f };
				*fParam2 = 181.3629f;
				break;
			case 2:
				*uParam1 = { 715.2089f, -1070.3993f, 21.2708f };
				*fParam2 = 175.43623f;
				break;
			case 3:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam2 = 181.0347f;
				break;
			case 4:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*fParam2 = 233.169f;
				break;
			case 5:
				*uParam1 = { 703.807f, -1057.8665f, 21.4152f };
				*fParam2 = 170.1609f;
				break;
			case 6:
				*uParam1 = { 708.1994f, -1048.1937f, 21.216f };
				*fParam2 = 134.2729f;
				break;
			case 7:
				*uParam1 = { 711.1124f, -1069.4229f, 21.3129f };
				*fParam2 = 177.9198f;
				break;
			default:
				*uParam1 = { 703.545f, -1078.7177f, 21.3987f };
				*fParam2 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (__LIB_1__::func_873(3, Var1))
	{
		if (__LIB_0__::func_875(Var1, 3, 0, 0))
		{
			*uParam1 = { -1520.1213f, 2731.511f, 16.6437f };
			*fParam2 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1535.9866f, -2041.497f, 68.21275f, 1529.3566f, -2204.4634f, 96.111946f, 105f, false, true))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*fParam2 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1185.8104f, -1768.3672f, 28.311447f, 1369.068f, -1701.4515f, 66.25389f, 70f, true, true))
	{
		if (__LIB_0__::func_874(Var1, 1283.3257f, -1731.5222f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
			*fParam2 = 275.4274f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1334.3861f, -1709.7625f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.3861f, -1709.7625f, 55.70131f };
			*fParam2 = 275.4411f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1246.1661f, -1750.6246f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.1661f, -1750.6246f, 45.35691f };
			*fParam2 = 301.2981f;
			return 1;
		}
		if (__LIB_0__::func_874(Var1, 1196.2716f, -1753.0505f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.2716f, -1753.0505f, 37.63976f };
			*fParam2 = 209.4354f;
			return 1;
		}
		*uParam1 = { 1283.3257f, -1731.5222f, 51.78555f };
		*fParam2 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (__LIB_0__::func_874(Var1, -1693.3018f, -1109.1305f, 17.89778f, 240f))
	{
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1538.9806f, -941.1323f, 10.566226f, -1715.5703f, -1139.7659f, 52.203613f, 110f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1739.989f, -1115.973f, 10.087262f, -1800.5149f, -1187.1798f, 52.0172f, 25f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1801.7664f, -1180.2517f, 4.017236f, -1857.7177f, -1244.6284f, 38.49653f, 85f, false, true))
		{
			*uParam1 = { -1624.4452f, -976.9755f, 12.0175f };
			*fParam2 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -1140.8896f, -1573.1349f, -6.566939f, -1067.0844f, -1675.9756f, 23.531528f, 52f, false, true))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*fParam2 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
	{
		iVar0 = 3;
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369.246f, 1147.6527f, 112.7592f };
				*fParam2 = 182.0998f;
				break;
			case 1:
				*uParam1 = { 1360.8483f, 1139.121f, 112.7592f };
				*fParam2 = 83.3356f;
				break;
			case 2:
				*uParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
				*fParam2 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1737.3901f, 3287.7954f, 35.13897f, 1724.3452f, 3337.854f, 57.200382f, 40f, false, true))
	{
		*uParam1 = { 1782.1903f, 3300.076f, 40.4593f };
		*fParam2 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -695.7981f, -1379.6785f, 24.481243f, -777.3731f, -1491.13f, -3.594945f, 72f, false, true))
	{
		*uParam1 = { -658.2056f, -1388.7886f, 9.499f };
		*fParam2 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (SYSTEM::VDIST2(Var1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*fParam2 = 71.6555f;
		return 1;
	}
	if (!__LIB_39__::func_757())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (__LIB_1__::func_873(7, Var1))
		{
			if (__LIB_0__::func_875(Var1, 7, 0, 0))
			{
				*uParam1 = { -1012.3105f, -465.1634f, 36.1141f };
				*fParam2 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (__LIB_1__::func_873(2, Var1))
	{
		if (__LIB_0__::func_875(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
				{
					case 0:
						*uParam1 = { -979.95f, -2746.1086f, 12.7091f };
						*fParam2 = 91.4929f;
						break;
					case 1:
						*uParam1 = { -1025.1935f, -2728.2175f, 12.6647f };
						*fParam2 = 239.0041f;
						break;
					case 2:
						*uParam1 = { -1051.315f, -2713.0686f, 12.6676f };
						*fParam2 = 236.4666f;
						break;
					case 3:
						*uParam1 = { -1095.7417f, -2637.8713f, 12.6461f };
						*fParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023.9825f, -2489.8818f, 19.0755f };
						*fParam2 = 148.7004f;
						break;
					case 2:
						*uParam1 = { -1029.9678f, -2500.4377f, 19.0803f };
						*fParam2 = 148.7144f;
						break;
					case 3:
						*uParam1 = { -1070.5457f, -2570.8594f, 19.0836f };
						*fParam2 = 150.0955f;
						break;
					case 4:
						*uParam1 = { -1056.0647f, -2545.6619f, 19.0809f };
						*fParam2 = 149.5649f;
						break;
					case 5:
						*uParam1 = { -1050.578f, -2536.2185f, 19.0824f };
						*fParam2 = 150.7363f;
						break;
					case 6:
						*uParam1 = { -1036.0316f, -2510.902f, 19.0794f };
						*fParam2 = 147.2113f;
						break;
					case 7:
						*uParam1 = { -1044.4872f, -2525.5342f, 19.079f };
						*fParam2 = 150.7597f;
						break;
					default:
						*uParam1 = { -1064.5002f, -2560.6528f, 19.0905f };
						*fParam2 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var7 = { -509.5746f, 4938.9185f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = __LIB_1__::func_503(Param0, Var7);
	Var10 = { 2450.6035f, 5129.2236f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = __LIB_1__::func_503(Param0, Var10);
	Var1 = { Param0 };
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -148.87766f, 4862.2036f, 305.6442f, 454.62744f, 5573.104f, 804.097f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -482.89307f, 4990.2554f, 155.16011f, 7.830751f, 5009.3706f, 430.76038f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var7 };
		*fParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*fParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.26465f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 954.1139f, 5641.051f, 646.50543f, 2140.375f, 5377.7534f, 149.12209f, 250f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2117.3477f, 5377.2593f, 173.32973f, 2439.9338f, 5297.445f, 62.686623f, 100f, false, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 2393.3474f, 5321.5796f, 107.06242f, 2523.9456f, 5124.7456f, 41.68384f, 70f, false, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var10 };
		*fParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*fParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (__LIB_1__::func_504(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 85.05448f, -2511.8838f, -2.996267f, -57.599766f, -2412.7163f, 15.000947f, 75f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 7.516524f, -2546.741f, 1.331557f, -177.32684f, -2417.0466f, 19.160444f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -260.03537f, -2419.9783f, 1.399635f, -27.26375f, -2423.8484f, 25.00064f, 80f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -187.4256f, -2516.0857f, -6.849975f, -186.7518f, -2438.1487f, 25.001602f, 40f, false, true)) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -73.60813f, -2538.5637f, -6.989857f, -183.25558f, -2465.145f, 25.020298f, 70f, false, true))
		{
			iVar0 = 2;
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.6492f, 5.0031f };
				*fParam2 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 412.27902f, 6481.8677f, 25.808207f, 468.9353f, 6442.7524f, 45.607273f, 24f, false, true))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*fParam2 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 476.5394f, -1301.548f, 44.824577f, 499.58224f, -1339.0245f, 26.31703f, 35f, false, true))
	{
		*uParam1 = { 498.185f, -1288.5354f, 28.1923f };
		*fParam2 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 496.98163f, -1412.2551f, 43.293907f, 497.269f, -1339.3639f, 26.316479f, 40f, false, true))
	{
		*uParam1 = { 504.1738f, -1421.2511f, 28.2065f };
		*fParam2 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 951.1704f, -147.00467f, 71.54326f, 1005.24493f, -98.44745f, 95.626785f, 70f, false, true))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam2 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
	{
		*uParam1 = { 1118.7509f, 262.0209f, 79.8555f };
		*fParam2 = 52.3086f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 1137.0221f, 89.068535f, 71.89022f, 1010.04596f, -91.566986f, 103.45676f, 180f, false, true))
	{
		*uParam1 = { 1134.0535f, 53.1835f, 79.7553f };
		*fParam2 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 191.87312f, -723.55304f, 40.235764f, 79.586555f, -687.6684f, 29.547338f, 85f, false, true))
	{
		iVar0 = 2;
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0) == 0)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam2 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, false, true))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*fParam2 = -20f;
		return 1;
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, false, true))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*fParam2 = 160f;
		return 1;
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.2583f, 5.7109f, 10f, false, true))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam2 = 140.7302f;
		return 1;
	}
	return 0;
}

int func_144(struct<3> Param0, var* uParam1, float* fParam2)//Position - 0x9FC3
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = 100000000f;
	fVar1 = 100000000f;
	fVar2 = 100000000f;
	func_156(&Param0, &iLocal_816, &fVar0);
	func_154(&Param0, &iLocal_106, &fVar1);
	func_151(&Param0, &iLocal_817, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_150(iLocal_816, Param0))
		{
			if (func_149(iLocal_816, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_148(iLocal_106, Param0))
		{
			if (func_147(iLocal_106, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 100000000f)
	{
		if (func_146(iLocal_817, Param0))
		{
			if (func_145(iLocal_817, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(int iParam0, var uParam1, var uParam2)//Position - 0xA0A9
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094.7108f, -2641.9817f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		case 70:
			*uParam1 = { -1917.7191f, 4445.7495f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		case 71:
			*uParam1 = { -482.5762f, 1993.8499f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		case 73:
			*uParam1 = { -208.3305f, 4195.3413f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		case 74:
			*uParam1 = { 1619.446f, 3820.9602f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		case 75:
			*uParam1 = { 2045.1687f, 2155.8872f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		case 72:
			*uParam1 = { 2952.7668f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		case 105:
		case 106:
			*uParam1 = { 2119.6763f, 4747.1978f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		case 125:
			*uParam1 = { -817.3487f, -1303.8899f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		case 126:
			*uParam1 = { 1118.7509f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		case 127:
			*uParam1 = { 2414.0632f, 1503.7697f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		case 128:
			*uParam1 = { -203.2552f, 6536.0894f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		case 129:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		case 131:
			*uParam1 = { -1214.2524f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		case 132:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		case 134:
			*uParam1 = { -1363.1832f, 4468.6914f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		case 135:
			*uParam1 = { 2477.0884f, 4948.6772f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		case 136:
			*uParam1 = { 1047.9314f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		case 107:
			*uParam1 = { -1200.8625f, -2049.4602f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		case 65:
			*uParam1 = { 1960.3881f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_146(int iParam0, struct<3> Param1)//Position - 0xA3DF
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1157.5951f, -2726.6357f, 12.944641f, -1110.7938f, -2679.33f, 22.944656f, 26f, false, true))
			{
				return 1;
			}
			break;
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1908.0653f, 4432.693f, 51.384197f, -1962.2119f, 4473.8f, 22.939892f, 70f, false, true))
			{
				return 1;
			}
			break;
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -541.8311f, 2050.5989f, 186.39044f, -499.78702f, 1968.3253f, 228.01833f, 70f, false, true))
			{
				return 1;
			}
			break;
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -179.85881f, 4216.1665f, 30.265049f, -246.31996f, 4226.6533f, 53.77886f, 70f, false, true))
			{
				return 1;
			}
			break;
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1634.1221f, 3858.0493f, 28.339115f, 1573.2587f, 3800.4417f, 48.354755f, 70f, false, true))
			{
				return 1;
			}
			break;
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2057.873f, 2059.1975f, 63.880737f, 1999.0454f, 2190.5437f, 122.2642f, 110f, false, true))
			{
				return 1;
			}
			break;
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 3028.0845f, 2768.167f, 57.729843f, 2944.284f, 2772.836f, 30.230679f, 85f, false, true))
			{
				return 1;
			}
			break;
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2097.951f, 4820.308f, 55.481686f, 2151.2542f, 4726.398f, 31.073204f, 120f, false, true))
			{
				return 1;
			}
			break;
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -763.5086f, -1297.9799f, 2.000373f, -864.1372f, -1278.0072f, 24.150381f, 85f, false, true))
			{
				return 1;
			}
			break;
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1137.0221f, 89.068535f, 74.89022f, 1267.8208f, 292.01062f, 102.99044f, 195f, false, true))
			{
				return 1;
			}
			break;
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2512.3047f, 1519.4615f, 28.555042f, 2380.3738f, 1521.5872f, 58.809845f, 90f, false, true))
			{
				return 1;
			}
			break;
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -193.5583f, 6533.4395f, -1.902109f, -299.2512f, 6645.0493f, 20.459734f, 120f, false, true))
			{
				return 1;
			}
			break;
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1171.1467f, 4647.8896f, 203.79369f, -1280.1493f, 4457.5967f, 5.653551f, 120f, false, true))
			{
				return 1;
			}
			break;
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -687.974f, 4499.5195f, 114.78101f, -826.0081f, 4496.864f, 49.883595f, 140f, false, true))
			{
				return 1;
			}
			break;
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1364.7009f, 4490.626f, 49.52477f, -1367.1693f, 4340.34f, -1.682158f, 100f, false, true))
			{
				return 1;
			}
			break;
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2566.1895f, 5007.0073f, 97.36896f, 2491.7136f, 4923.261f, 30.434944f, 80f, false, true))
			{
				return 1;
			}
			break;
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1009.91705f, -163.46835f, 102.10279f, 1113.4741f, -221.32953f, 49.874504f, 90f, false, true))
			{
				return 1;
			}
			break;
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (SYSTEM::VDIST2(Param1, -1230.6222f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (SYSTEM::VDIST2(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_147(int iParam0, var uParam1, var uParam2)//Position - 0xAA03
{
	int iVar0;
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.1178f, 4206.7427f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				case 1:
					*uParam1 = { -1582.8895f, 4201.4087f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		case 11:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				case 1:
					*uParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		case 12:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.4458f, 4738.6123f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				case 1:
					*uParam1 = { 1702.4242f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		case 14:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.6604f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				case 1:
					*uParam1 = { -2842.0232f, 3145.0862f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		case 17:
			*uParam1 = { -204.0333f, 1313.9728f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		case 18:
			*uParam1 = { -906.4329f, -2694.2803f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		case 20:
			*uParam1 = { 1753.9014f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		case 21:
			*uParam1 = { -1859.5427f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		case 22:
			*uParam1 = { 827.072f, 1282.2883f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		case 23:
			*uParam1 = { -640.2675f, 6050.9805f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		case 24:
			*uParam1 = { -92.2052f, -1254.8276f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.9674f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		case 30:
			*uParam1 = { -1110.0881f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		case 33:
			*uParam1 = { 67.1562f, 4560.1343f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		case 37:
			*uParam1 = { -1069.0764f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		case 39:
			*uParam1 = { -1073.1289f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		case 43:
			*uParam1 = { -91.4237f, -1305.5577f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		case 44:
			*uParam1 = { 2479.249f, 3401.2341f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		case 50:
			*uParam1 = { 1149.9778f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.9329f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_148(int iParam0, struct<3> Param1)//Position - 0xAED5
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (SYSTEM::VDIST2(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
			{
				return 1;
			}
			break;
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1882.7897f, 4725.034f, 34.74373f, 1701.4972f, 4677.47f, 47.89289f, 159.5f, false, true))
			{
				return 1;
			}
			break;
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (SYSTEM::VDIST2(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (SYSTEM::VDIST2(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (SYSTEM::VDIST2(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (SYSTEM::VDIST2(Param1, -75.59782f, -818.60815f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (SYSTEM::VDIST2(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1903.3223f, -401.2384f, 19.234562f, -1844.8792f, -445.7261f, 73.56197f, 115f, false, true))
			{
				return 1;
			}
			break;
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 794.2453f, 1277.4425f, -100f, 833.82153f, 1277.1084f, 400f, 19f, false, true))
			{
				return 1;
			}
			break;
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1015.5258f, 6287.513f, -10.944491f, -761.3104f, 5895.0137f, 45.337265f, 167.75f, false, true))
			{
				return 1;
			}
			break;
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -72.13491f, -1267.5868f, 27.683605f, -72.18015f, -1256.7122f, 31f, 30f, false, true))
			{
				return 1;
			}
			break;
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (SYSTEM::VDIST2(Param1, -683.4159f, 5841.0435f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (SYSTEM::VDIST2(Param1, 566.1639f, -1773.8171f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (SYSTEM::VDIST2(Param1, -1103.6277f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -21.123615f, 4518.907f, 119.783615f, 43.132828f, 4538.9287f, 72.589554f, 48f, false, true))
			{
				return 1;
			}
			break;
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (SYSTEM::VDIST2(Param1, -1099.5017f, 790.26135f, 163.39977f) < (30f * 30f))
			{
				return 1;
			}
			break;
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1088.4253f, 372.07227f, 62.758965f, -967.02997f, 363.59756f, 101.34832f, 75f, false, true))
			{
				return 1;
			}
			break;
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -91.456764f, -1296.9753f, 26.154373f, 40.67288f, -1297.4586f, 58.293682f, 110f, false, true))
			{
				return 1;
			}
			break;
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (SYSTEM::VDIST2(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -78.38029f, 285.52542f, 102.62859f, -51.1546f, 357.5217f, 122.06169f, 40f, false, true))
			{
				return 1;
			}
			break;
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 420.5196f, 116.28917f, 77.57532f, 212.29375f, 193.67944f, 131.8767f, 250f, false, true))
			{
				return 1;
			}
			break;
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1140.158f, -540.9644f, 49.99944f, 972.37164f, -535.1002f, 85.64397f, 168.25f, false, true))
			{
				return 1;
			}
			break;
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (SYSTEM::VDIST2(Param1, -16.5304f, -1473.1208f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_149(int iParam0, var uParam1, var uParam2)//Position - 0xB5E3
{
	int iVar0;
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.3473f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		case 32:
		case 38:
			*uParam1 = { 1361.6746f, -2040.5747f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		case 41:
		case 47:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.4318f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				case 1:
					*uParam1 = { 14.0313f, -1460.4801f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		case 45:
			iVar0 = 3;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.6527f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				case 1:
					*uParam1 = { 1360.8483f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				case 2:
					*uParam1 = { 1364.7513f, 1154.3668f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.0966f, -2588.0654f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		case 87:
			*uParam1 = { 185.1471f, -3047.2285f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		case 78:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.4719f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				case 1:
					*uParam1 = { 275.9677f, -1554.2201f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		case 79:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.9219f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				case 1:
					*uParam1 = { 847.5631f, -1559.7194f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		case 83:
			iVar0 = 2;
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.4272f, 2852.1726f, 35.28f };
					*uParam2 = 19.36f;
					break;
				case 1:
					*uParam1 = { 2686.4038f, 2957.3896f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.8962f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_150(int iParam0, struct<3> Param1)//Position - 0xB988
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -1535.754f, -922.10095f, 4.122119f, -1487.8695f, -961.3929f, 26.71922f, 50f, false, true))
			{
				return 1;
			}
			break;
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 53.128983f, -463.9999f, 36.9208f, 99.3761f, -329.34763f, 118.04542f, 125f, false, true))
			{
				return 1;
			}
			break;
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1420.3473f, -2036.5577f, 47.360718f, 1341.1105f, -2103.8438f, 72.32651f, 55f, false, true))
			{
				return 1;
			}
			break;
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (SYSTEM::VDIST2(Param1, -13.89061f, -1449.2897f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -2306.9802f, 435.30377f, 171.46657f, -2303.291f, 366.31995f, 179.60176f, 65.5f, false, true))
			{
				return 1;
			}
			break;
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 1324.1715f, 1110.7479f, 99.65493f, 1523.0968f, 1110.4734f, 132.88586f, 170f, false, true))
			{
				return 1;
			}
			break;
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (SYSTEM::VDIST2(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -995.97797f, -517.43243f, 11.377625f, -1060.7251f, -547.55884f, 65.33043f, 35.75f, false, true))
			{
				return 1;
			}
			break;
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.40643f, 43.037125f, 53f, false, true))
			{
				return 1;
			}
			break;
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 148.8361f, -3029.1465f, 4.277727f, 148.13957f, -3342.3435f, 22.903791f, 97.75f, false, true))
			{
				return 1;
			}
			break;
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 446.8174f, -1691.7081f, 23.282328f, 288.5565f, -1552.3518f, 108.31166f, 155f, false, true))
			{
				return 1;
			}
			break;
		case 79:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 910.9382f, -1749.9097f, 14.506144f, 921.74146f, -1455.2479f, 99.67125f, 210f, false, true))
			{
				return 1;
			}
			break;
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 2657.3025f, 2974.5286f, 34.53447f, 2591.657f, 2880.2231f, 68.08156f, 78.75f, false, true))
			{
				return 1;
			}
			break;
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, 83.32325f, -1312.1722f, 23.33694f, 148.38303f, -1273.5532f, 49.466507f, 65f, false, true))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(var uParam0, int iParam1, float fParam2)//Position - 0xBDE0
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_153(iParam1))
		{
			if (__LIB_15__::func_276(*iParam1))
			{
				Var4 = { __LIB_15__::func_964(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_153(iParam1))
		{
			if (__LIB_15__::func_276(*iParam1))
			{
				Var4 = { __LIB_15__::func_964(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

int func_153(var uParam0)//Position - 0xBF35
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, int iParam1, float fParam2)//Position - 0xC03C
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	struct<27> Var5;
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 63)
	{
		*iParam1 = iVar4;
		if (BitTest(Global_113386.f_18574[*iParam1 /*6*/], 0) && !BitTest(Global_113386.f_18574[*iParam1 /*6*/], 3))
		{
			__LIB_0__::func_432(*iParam1, &Var5);
			if (BitTest(Var5.f_26, __LIB_39__::func_773()))
			{
				Var3 = { Var5.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = SYSTEM::VDIST(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar4;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_156(var uParam0, int iParam1, float fParam2)//Position - 0xC189
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (Global_97374[iVar4 /*17*/])
		{
			if (Global_97374[iVar4 /*17*/].f_9 != 263)
			{
				if (HUD::DOES_BLIP_EXIST(Global_32338[Global_97374[iVar4 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { HUD::GET_BLIP_COORDS(Global_32338[Global_97374[iVar4 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = SYSTEM::VDIST(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_97374[iVar4 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar4;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_97374[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_158(int iParam0)//Position - 0xC278
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	if (PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
	{
		PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 1);
				if (!PED::IS_PED_INJURED(iVar2))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_112417))
					{
						iVar3 = 0;
						if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, iVar3, false))
						{
							iVar3 = func_159(&Global_112417);
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, iVar3, false))
							{
								TASK::CLEAR_PED_TASKS(iVar2);
								PED::SET_PED_INTO_VEHICLE(iVar2, Global_112417, iVar3);
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_112417, iVar3);
						}
					}
				}
			}
			iVar2 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 0);
			if (!PED::IS_PED_INJURED(iVar2))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(iVar2, Global_112417))
				{
					TASK::CLEAR_PED_TASKS(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, iVar3, false))
					{
						iVar3 = func_159(&Global_112417);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, iVar3, false))
						{
							TASK::CLEAR_PED_TASKS(iVar2);
							PED::SET_PED_INTO_VEHICLE(iVar2, Global_112417, iVar3);
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iVar2);
						PED::SET_PED_INTO_VEHICLE(iVar2, Global_112417, iVar3);
					}
				}
			}
		}
	}
}

int func_159(var uParam0)//Position - 0xC3A0
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0, false))
			{
				return 0;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 1, false))
			{
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 2, false))
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_169()//Position - 0xC628
{
	struct<3> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
		{
			if (VEHICLE::IS_VEHICLE_STOPPED(Global_112417))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
				{
					if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
					}
					else
					{
						func_175();
					}
				}
				__LIB_42__::func_697(&Global_112417, iLocal_839);
			}
			else if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_PARK")))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Global_112417, true) };
				fVar1 = ENTITY::GET_ENTITY_HEADING(Global_112417);
				TASK::TASK_VEHICLE_PARK(Global_112418, Global_112417, Var0, fVar1, 3, 60f, false);
			}
		}
	}
}

void func_170()//Position - 0xC707
{
	int iVar0;
	float fVar1;
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			func_121();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
			{
				if (!PED::IS_PED_INJURED(Global_112418))
				{
					if (func_172())
					{
						if (ENTITY::GET_ENTITY_SPEED(Global_112417) < 2f)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
							}
							TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 24, 5000);
							PED::SET_PED_KEEP_TASK(Global_112418, true);
							bLocal_65 = true;
							iLocal_822 = 2;
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
					{
						if (PED::IS_PED_HEADTRACKING_PED(Global_112418, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_CLEAR_LOOK_AT(Global_112418);
						}
						TASK::TASK_PLAY_ANIM(Global_112418, &cLocal_824, "leanover_exit", 4f, -4f, -1, 0, 0f, false, false, false);
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_exit", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(Global_112418, &cLocal_824, "leanover_exit", 1.2f);
						iLocal_90 = MISC::GET_GAME_TIMER();
						__LIB_42__::func_697(&Global_112417, iLocal_839);
					}
					else if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						if (func_171(&iLocal_90, iLocal_839))
						{
							if (!__LIB_39__::func_758(Global_112418, joaat("SCRIPT_TASK_VEHICLE_TEMP_ACTION")))
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Global_112418, Global_112417, 1, 1000000);
							}
						}
						else
						{
							iLocal_56 = 0;
							if (bLocal_64)
							{
								fVar1 = 25f;
								iVar0 = iLocal_70;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_69;
							}
							TASK::CLEAR_PED_TASKS(Global_112418);
							TASK::TASK_CLEAR_LOOK_AT(Global_112418);
							PED::SET_DRIVER_ABILITY(Global_112418, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, Global_112417, Global_112424, fVar1, iVar0, 45f);
							TASK::TASK_VEHICLE_PARK(0, Global_112417, Global_112424, Global_112430, iLocal_110, 60f, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
							TASK::TASK_PERFORM_SEQUENCE(Global_112418, iLocal_813);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
						}
					}
				}
			}
		}
	}
}

int func_171(int iParam0, int iParam1)//Position - 0xC8FF
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	if (__LIB_14__::func_684(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!PED::DOES_GROUP_EXIST(__LIB_0__::func_495()))
	{
		*iParam0 = -1;
		return 0;
	}
	PED::GET_GROUP_SIZE(__LIB_0__::func_495(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 0);
	if (!PED::IS_PED_INJURED(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, iVar6, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 == PLAYER::PLAYER_PED_ID())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, false))
		{
			bVar4 = false;
		}
		if (__LIB_39__::func_758(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			TASK::TASK_ENTER_VEHICLE(iVar3, Global_112417, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = PED::GET_PED_AS_GROUP_MEMBER(__LIB_0__::func_495(), 1);
		if (!PED::IS_PED_INJURED(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, iVar6, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iVar2 == PLAYER::PLAYER_PED_ID())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (PED::GET_PED_CONFIG_FLAG(iVar3, 167, false))
			{
				bVar4 = false;
			}
			if (__LIB_39__::func_758(iVar3, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				TASK::TASK_ENTER_VEHICLE(iVar3, Global_112417, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_172()//Position - 0xCA84
{
	if ((ENTITY::IS_ENTITY_AT_COORD(Global_112417, Global_112424, 45f, 45f, 20f, false, true, 0) || iLocal_56) || iLocal_821 == 4)
	{
		iLocal_56 = 1;
		if (TASK::GET_SCRIPT_TASK_STATUS(Global_112418, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_173()//Position - 0xCADB
{
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			return 1;
		}
		else if (func_124(&Local_43, &Global_112424, &Global_112430))
		{
			iLocal_103 = 0;
			Local_833 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
			fLocal_83 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_112424);
			bLocal_61 = true;
			return 1;
		}
	}
	return 0;
}

int func_175()//Position - 0xCC6B
{
	if (!PED::IS_PED_INJURED(Global_112418) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
		{
			STREAMING::REQUEST_ANIM_DICT(&cLocal_824);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_824))
			{
				if (PED::IS_PED_HEADTRACKING_PED(Global_112418, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_112418);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_813);
				TASK::TASK_PLAY_ANIM(0, &cLocal_824, "leanover_enter", 4f, -8f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, &cLocal_824, "leanover_idle", 4f, -8f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_813);
				TASK::TASK_PERFORM_SEQUENCE(Global_112418, iLocal_813);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_813);
				return 1;
			}
		}
	}
	return 0;
}

int func_176()//Position - 0xCD19
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
		{
			iLocal_109 = OBJECT::CREATE_OBJECT(iLocal_108, ENTITY::GET_ENTITY_COORDS(Global_112417, true), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_109, Global_112417, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Global_112417, "Chassis"), Local_837, Local_838, false, false, false, false, 2, true, 0);
			VEHICLE::SET_TAXI_LIGHTS(Global_112417, false);
			if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
			{
				HUD::REGISTER_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */, false);
				HUD::LINK_NAMED_RENDERTARGET(ENTITY::GET_ENTITY_MODEL(iLocal_109));
			}
			iLocal_93 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID("taxi" /* GXT: Taxi */);
		}
	}
	return 0;
}

int func_177()//Position - 0xCDB4
{
	STREAMING::REQUEST_MODEL(iLocal_108);
	iLocal_111 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("taxi_display");
	iLocal_112 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	STREAMING::REQUEST_ANIM_DICT(&cLocal_824);
	if (((STREAMING::HAS_MODEL_LOADED(iLocal_108) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_111)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_112)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_824))
	{
		return 1;
	}
	return 0;
}

void func_178()//Position - 0xCE0D
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (!__LIB_0__::func_477() && !__LIB_0__::func_194(8, -1))
		{
			iLocal_68 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_68, Global_112417, Local_835, true);
			func_182();
			CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_68, true);
		}
	}
	else if (!bLocal_60 || bLocal_59)
	{
		if (!__LIB_0__::func_477() && !__LIB_0__::func_194(8, -1))
		{
			if (!CAM::IS_CAM_ACTIVE(iLocal_68))
			{
				__LIB_1__::func_7(4, 1, -1);
				CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_68, true);
				func_180();
				CAM::SET_CAM_ACTIVE(iLocal_68, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				Global_112434 = 1;
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				func_182();
				iLocal_58 = 1;
			}
			else
			{
				func_182();
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		}
	}
	else if (CAM::IS_CAM_ACTIVE(iLocal_68))
	{
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		Global_112434 = 0;
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
		iLocal_58 = 1;
		func_179();
	}
}

void func_179()//Position - 0xCF2A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (bLocal_60)
		{
			if (Local_43.f_0 == Local_819[iVar0 /*3*/])
			{
				iLocal_92 = iVar0;
			}
		}
		iVar0++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_180()//Position - 0xCF72
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Local_43.f_0))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_43.f_0) };
		if (CAM::DOES_CAM_EXIST(iLocal_68) && CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
			HUD::LOCK_MINIMAP_ANGLE(0);
			HUD::SET_RADAR_ZOOM(1400);
		}
	}
}

void func_182()//Position - 0xD006
{
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		func_183(Global_112417, &iLocal_68, Local_836);
		CAM::SET_CAM_FOV(iLocal_68, fLocal_74);
		CAM::SET_CAM_NEAR_CLIP(iLocal_68, 0.01f);
		CAM::SET_CAM_IS_INSIDE_VEHICLE(iLocal_68, true);
		CAM::SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(true);
	}
}

void func_183(int iParam0, int iParam1, struct<3> Param2)//Position - 0xD045
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
			fVar3 = Var0.f_1;
			Var4 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112417, Param2) - ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_112417, Local_835)) };
			__LIB_7__::func_720(Var4, &fVar1, &fVar2, 1);
			CAM::SET_CAM_ROT(*iParam1, fVar1, fVar3, fVar2, 2);
		}
	}
}

void func_187()//Position - 0xD198
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar6;
	iVar0 = 0;
	func_192();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "CLEAR_TAXI_DISPLAY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_819[iVar0 /*3*/]))
		{
		}
		else if (__LIB_39__::func_760(Local_819[iVar0 /*3*/]) == -1)
		{
		}
		else if (__LIB_0__::func_490(HUD::GET_BLIP_COORDS(Local_819[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "ADD_TAXI_DESTINATION");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(HUD::GET_BLIP_SPRITE(Local_819[iVar0 /*3*/]));
			HUD::GET_HUD_COLOUR(HUD::GET_BLIP_HUD_COLOUR(Local_819[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			iVar6 = __LIB_39__::func_771(Local_819[iVar0 /*3*/]);
			if (iVar6 == -1)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Local_819[iVar0 /*3*/]);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(__LIB_15__::func_278(iVar6));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(Local_819[iVar0 /*3*/]) == 2)
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_819[iVar0 /*3*/]))))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_819[iVar0 /*3*/])), true) };
				}
			}
			else if (HUD::GET_BLIP_INFO_ID_TYPE(Local_819[iVar0 /*3*/]) == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_819[iVar0 /*3*/]), false))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(HUD::GET_BLIP_INFO_ID_ENTITY_INDEX(Local_819[iVar0 /*3*/]), true) };
				}
			}
			else
			{
				Var5 = { HUD::GET_BLIP_COORDS(Local_819[iVar0 /*3*/]) };
			}
			__LIB_0__::func_610(ZONE::GET_NAME_OF_ZONE(Var5));
			if (Local_819[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_819[iVar0 /*3*/].f_1 != 0)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1" /* GXT: ~a~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_819[iVar0 /*3*/].f_1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2" /* GXT: ~a~ and ~a~ */);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_819[iVar0 /*3*/].f_1);
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Local_819[iVar0 /*3*/].f_2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (bLocal_60)
			{
				if (Local_43.f_0 == Local_819[iVar0 /*3*/])
				{
					iLocal_92 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_60)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_TAXI_PRICE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_101);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SHOW_TAXI_DESTINATION");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "HIGHLIGHT_DESTINATION");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_92);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_192()//Position - 0xE101
{
	int iVar0;
	iLocal_91 = 0;
	func_209();
	func_196(iLocal_44, 0);
	func_196(iLocal_45, 0);
	func_196(32, 0);
	func_196(143, 0);
	func_196(144, 0);
	func_196(145, 0);
	func_196(146, 0);
	func_196(78, 0);
	func_196(79, 0);
	func_196(88, 0);
	func_196(124, 0);
	func_196(112, 0);
	func_196(123, 0);
	func_196(293, 0);
	func_196(86, 0);
	func_196(77, 0);
	func_196(89, 0);
	func_196(106, 0);
	func_196(108, 0);
	func_196(120, 0);
	func_196(352, 0);
	func_196(107, 0);
	func_196(96, 0);
	func_196(104, 0);
	func_196(105, 0);
	func_196(80, 0);
	func_196(113, 0);
	func_196(118, 0);
	func_196(207, 1);
	func_196(208, 1);
	func_196(209, 1);
	func_196(210, 1);
	func_196(211, 1);
	func_196(212, 1);
	func_196(213, 1);
	func_196(214, 1);
	func_196(321, 1);
	func_196(320, 1);
	func_196(319, 1);
	func_196(322, 1);
	func_196(325, 1);
	func_196(324, 1);
	func_196(349, 1);
	func_196(323, 1);
	func_196(326, 1);
	func_196(317, 1);
	func_196(318, 1);
	func_196(363, 0);
	func_196(355, 0);
	func_196(263, 1);
	func_196(262, 1);
	func_196(267, 1);
	func_196(266, 1);
	func_196(265, 1);
	func_196(400, 0);
	func_196(381, 0);
	func_196(384, 0);
	func_196(382, 0);
	func_196(206, 0);
	func_196(405, 0);
	func_196(385, 0);
	func_196(383, 0);
	func_196(386, 0);
	func_196(387, 0);
	func_196(389, 0);
	func_196(388, 0);
	func_196(149, 0);
	func_196(66, 0);
	func_196(115, 0);
	func_196(114, 0);
	func_196(205, 1);
	func_196(48, 0);
	func_196(40, 1);
	func_196(357, 1);
	func_196(356, 1);
	func_196(359, 1);
	func_196(110, 1);
	func_196(60, 1);
	func_196(41, 1);
	func_196(61, 1);
	func_196(374, 1);
	func_196(375, 1);
	func_196(64, 1);
	func_196(165, 1);
	func_196(166, 1);
	func_196(167, 1);
	func_196(168, 1);
	func_196(169, 1);
	func_196(170, 1);
	func_196(172, 1);
	func_196(280, 1);
	func_196(37, 1);
	func_196(147, 1);
	func_196(62, 0);
	func_196(95, 1);
	func_196(99, 1);
	func_196(102, 1);
	func_196(135, 1);
	func_196(103, 1);
	func_196(90, 1);
	func_196(109, 1);
	func_196(141, 1);
	func_196(136, 1);
	func_196(127, 1);
	func_196(142, 1);
	func_196(38, 1);
	func_196(84, 1);
	func_196(119, 1);
	func_196(121, 1);
	func_196(122, 1);
	func_196(68, 1);
	func_196(126, 1);
	func_196(85, 1);
	func_196(140, 1);
	func_196(197, 1);
	func_196(162, 1);
	func_196(315, 1);
	func_196(71, 1);
	func_196(72, 1);
	func_196(446, 1);
	func_196(225, 1);
	func_196(73, 1);
	func_196(111, 1);
	func_196(75, 1);
	func_196(93, 1);
	func_196(98, 1);
	func_196(117, 1);
	iLocal_94 = func_193();
	iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
	if (MISC::GET_MISSION_FLAG())
	{
		if (iLocal_94 == 0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_112421))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (HUD::DOES_BLIP_EXIST(Local_819[iVar0 /*3*/]))
					{
						if (Local_819[iVar0 /*3*/] == Global_112421)
						{
							iLocal_92 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_112421 == 0)
	{
		Global_112421 = 0;
	}
	if (MISC::GET_MISSION_FLAG())
	{
		if (!Global_112423 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (HUD::DOES_BLIP_EXIST(Local_819[iVar0 /*3*/]))
				{
					if (__LIB_39__::func_760(Local_819[iVar0 /*3*/]) == Global_112423)
					{
						iLocal_92 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_112423 == -1)
	{
		Global_112423 = -1;
	}
}

int func_193()//Position - 0xE57B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_44);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (__LIB_39__::func_761(iVar1))
		{
			if ((HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 6) || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 3)
			{
				iVar0++;
			}
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 2 || HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 1)
			{
				if (func_194(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_44);
	}
	iVar1 = HUD::GET_FIRST_BLIP_INFO_ID(iLocal_45);
	while (HUD::DOES_BLIP_EXIST(iVar1))
	{
		if (__LIB_39__::func_761(iVar1))
		{
			if (HUD::GET_BLIP_INFO_ID_TYPE(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = HUD::GET_NEXT_BLIP_INFO_ID(iLocal_45);
	}
	return iVar0;
}

int func_194(int iParam0)//Position - 0xE637
{
	if (((HUD::GET_BLIP_HUD_COLOUR(iParam0) == 9 || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 11) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 10) || HUD::GET_BLIP_HUD_COLOUR(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, bool bParam1)//Position - 0xE6AD
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar2 = HUD::GET_FIRST_BLIP_INFO_ID(iParam0);
	iVar3 = 20;
	while (HUD::DOES_BLIP_EXIST(iVar2))
	{
		if (iLocal_98 >= iVar3)
		{
			SYSTEM::WAIT(0);
			iLocal_98 = 0;
			if (!__LIB_39__::func_762())
			{
				func_237(1);
			}
			func_182();
			func_224();
			func_223();
		}
		if (iLocal_91 < 40)
		{
			if (__LIB_39__::func_761(iVar2))
			{
				if (func_208(iVar2))
				{
					if (!__LIB_42__::func_699(&iVar2))
					{
						bVar1 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case 79:
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar1 = true;
								break;
							case 363:
								iVar5 = func_205(&iVar2);
								if (((iVar5 == 33 || iVar5 == 92) || iVar5 == 89) || iVar5 == 88)
								{
									bVar1 = false;
								}
								else
								{
									bVar1 = true;
								}
								break;
							default:
								bVar1 = false;
								if (iParam0 == iLocal_45)
								{
									bVar1 = true;
								}
								else if (iParam0 == iLocal_44)
								{
									if (func_204(&iVar2))
									{
										bVar1 = true;
									}
								}
								break;
						}
						if (HUD::DOES_BLIP_EXIST(Global_112420))
						{
							if (__LIB_39__::func_760(iVar2) == iLocal_44)
							{
								if (!Global_112420 == iVar2)
								{
									bVar1 = false;
								}
							}
						}
						if (bVar1)
						{
							bVar1 = false;
							if (__LIB_39__::func_761(iVar2))
							{
								iVar4 = HUD::GET_BLIP_INFO_ID_TYPE(iVar2);
								if (((iVar4 == 4 || iVar4 == 5) || iVar4 == 2) || iVar4 == 1)
								{
									bVar1 = true;
								}
							}
							if (bVar1)
							{
								func_203(&iVar2, &Var0);
								func_197(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_98++;
		iVar2 = HUD::GET_NEXT_BLIP_INFO_ID(iParam0);
	}
}

void func_197(struct<3> Param0, bool bParam1)//Position - 0xEB03
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_39__::func_760(Param0.f_0) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (__LIB_39__::func_760(Local_819[iVar0 /*3*/]) == __LIB_39__::func_760(Param0.f_0))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_91)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_91)
		{
			if (__LIB_39__::func_760(Local_819[iVar0 /*3*/]) == __LIB_39__::func_760(Param0.f_0))
			{
				if (__LIB_43__::func_573(Param0, Local_819[iVar0 /*3*/]))
				{
					if (bParam1)
					{
						func_200(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_198(Param0, iVar0);
						iLocal_91++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam1)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_198(Param0, iVar0);
				iLocal_91++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_198(Param0, iVar0);
			iLocal_91++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_198(struct<3> Param0, int iParam1)//Position - 0xEC22
{
	func_199(iParam1);
	Local_819[iParam1 /*3*/] = { Param0 };
	if (__LIB_39__::func_760(Local_819[iParam1 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam1;
		Local_834 = { HUD::GET_BLIP_COORDS(Local_819[iParam1 /*3*/]) };
	}
}

void func_199(int iParam0)//Position - 0xEC63
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_819[(iVar0 - 1) /*3*/] };
		Local_819[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_97)
		{
			iLocal_97 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_200(struct<3> Param0, int iParam1)//Position - 0xECA8
{
	Local_819[iParam1 /*3*/] = { Param0 };
	if (__LIB_39__::func_760(Local_819[iParam1 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
	{
		iLocal_97 = iParam1;
		Local_834 = { HUD::GET_BLIP_COORDS(Local_819[iParam1 /*3*/]) };
	}
}

void func_203(int iParam0, var uParam1)//Position - 0xED43
{
	struct<3> Var0;
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_112422)
	{
		Var0 = { __LIB_39__::func_759(*uParam1) };
		PATHFIND::GET_STREET_NAME_AT_COORD(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		PATHFIND::GET_STREET_NAME_AT_COORD(Global_112424, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_204(int iParam0)//Position - 0xED8D
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = HUD::GET_BLIP_HUD_COLOUR(*iParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0)//Position - 0xEDFB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_97374[iVar0 /*17*/])
		{
			if (Global_97374[iVar0 /*17*/].f_9 != 263)
			{
				if (HUD::DOES_BLIP_EXIST(Global_32338[Global_97374[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_32338[Global_97374[iVar0 /*17*/].f_9 /*23*/].f_19 == *iParam0)
					{
						return Global_97374[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_208(int iParam0)//Position - 0xEF10
{
	float fVar0;
	if (!__LIB_39__::func_760(iParam0) == iLocal_44)
	{
		fVar0 = __LIB_42__::func_698(iParam0);
		if (fVar0 > 50f)
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_209()//Position - 0xEF44
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_819[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_97 = -1;
	Local_834 = { 0f, 0f, 0f };
	iLocal_98 = 0;
}

bool func_210()//Position - 0xEF78
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	bVar0 = false;
	if (!HUD::DOES_BLIP_EXIST(Local_819[iLocal_92 /*3*/]))
	{
		if (iLocal_92 != iLocal_97)
		{
			return 1;
		}
	}
	if (SYSTEM::TIMERB() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_95 != HUD::GET_NUMBER_OF_ACTIVE_BLIPS())
			{
				bVar0 = true;
			}
			iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
			if (iLocal_96 != func_211())
			{
				bVar0 = true;
			}
			iLocal_96 = func_211();
		}
		if (!bVar0)
		{
			if (iLocal_97 != -1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_819[iLocal_97 /*3*/]))
				{
					if (__LIB_39__::func_760(Local_819[iLocal_97 /*3*/]) == HUD::GET_WAYPOINT_BLIP_ENUM_ID())
					{
						Var1 = { HUD::GET_BLIP_COORDS(Local_819[iLocal_97 /*3*/]) };
						if (!__LIB_0__::func_490(Var1, Local_834, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					iVar2 = HUD::GET_FIRST_BLIP_INFO_ID(HUD::GET_WAYPOINT_BLIP_ENUM_ID());
					if (HUD::DOES_BLIP_EXIST(iVar2))
					{
						Var1 = { HUD::GET_BLIP_COORDS(iVar2) };
						if (!__LIB_0__::func_490(Var1, Local_834, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		SYSTEM::SETTIMERB(0);
	}
	return bVar0;
}

int func_211()//Position - 0xF06C
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_695(Global_112417))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, -1, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 0, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 1, false))
		{
			iVar0++;
		}
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, 2, false))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_212()//Position - 0xF0D4
{
	if (iLocal_821 != 0)
	{
		HUD::SET_TEXT_RENDER_ID(iLocal_93);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_111, fLocal_86, fLocal_87, fLocal_84, fLocal_85, 0, 0, 0, 255, 0);
		}
	}
}

void func_213()//Position - 0xF113
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (iLocal_821 != 0)
	{
		if (iLocal_91 > 1)
		{
			__LIB_0__::func_603(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/);
				PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/);
			}
			if (iVar0 > 28 || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 180 /*INPUT_CELLPHONE_SCROLL_FORWARD*/))
			{
				if (!iLocal_62)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_217();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_217();
					}
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_62 = 1;
				}
			}
			else
			{
				iLocal_62 = 0;
			}
			if (iVar0 < -28 || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 181 /*INPUT_CELLPHONE_SCROLL_BACKWARD*/))
			{
				if (!iLocal_63)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_215();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_215();
					}
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_63 = 0;
			}
		}
		if (!bLocal_60)
		{
			if (iLocal_91 > 0)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
				{
					if (HUD::DOES_BLIP_EXIST(Local_819[iLocal_92 /*3*/]))
					{
						iLocal_818 = 2;
						Local_43 = { Local_819[iLocal_92 /*3*/] };
						iLocal_56 = 0;
						iLocal_90 = MISC::GET_GAME_TIMER();
						iLocal_99 = MISC::GET_GAME_TIMER();
						iLocal_100 = MISC::GET_GAME_TIMER();
						iLocal_88 = 0;
						iLocal_820 = 0;
						bLocal_60 = true;
						iLocal_58 = 1;
						bLocal_59 = false;
					}
				}
			}
		}
		else
		{
			CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			if (iLocal_821 == 2)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					iLocal_818 = 13;
					iLocal_58 = 1;
					if (!PED::IS_PED_INJURED(Global_112418))
					{
						TASK::CLEAR_PED_TASKS(Global_112418);
					}
					iLocal_821 = 3;
				}
				if (!bLocal_64)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 179 /*INPUT_CELLPHONE_EXTRA_OPTION*/))
					{
						iLocal_818 = 20;
						bLocal_64 = true;
						iLocal_58 = 1;
						fLocal_73 = (0.22f * 2f);
						if (!PED::IS_PED_INJURED(Global_112418))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_exit", 3))
									{
										TASK::CLEAR_PED_TASKS(Global_112418);
									}
								}
							}
						}
					}
				}
				if (func_74())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
					{
						if (bLocal_61)
						{
							iLocal_58 = 1;
							iLocal_89 = MISC::GET_GAME_TIMER();
							iLocal_823 = 0;
							iLocal_821 = 4;
						}
					}
				}
				if (iLocal_818 == 0)
				{
					if (iLocal_99 != -1)
					{
						if (__LIB_14__::func_684(iLocal_99, 68000))
						{
							iLocal_818 = 4;
							iLocal_99 = -1;
						}
					}
				}
				if (iLocal_818 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (__LIB_14__::func_684(iLocal_100, 5000))
						{
							if ((PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
							{
								iLocal_818 = 17;
								iLocal_99 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_821 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					iLocal_818 = 3;
					iLocal_58 = 1;
					iLocal_821 = 2;
				}
			}
			if (bLocal_59)
			{
				if (func_214())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/))
					{
						if (HUD::DOES_BLIP_EXIST(Local_819[iLocal_92 /*3*/]))
						{
							iLocal_818 = 9;
							bLocal_61 = false;
							if (iLocal_821 == 3)
							{
								iLocal_821 = 2;
							}
							iLocal_58 = 1;
							Local_43 = { Local_819[iLocal_92 /*3*/] };
							iLocal_56 = 0;
							iLocal_90 = MISC::GET_GAME_TIMER();
							iLocal_88 = 0;
							iLocal_820 = 0;
							if (!PED::IS_PED_INJURED(Global_112418))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_exit", 3))
										{
											TASK::CLEAR_PED_TASKS(Global_112418);
										}
									}
								}
							}
							iLocal_104 = MISC::GET_GAME_TIMER();
							bLocal_59 = false;
						}
					}
					if (__LIB_14__::func_684(iLocal_104, 3000))
					{
						bLocal_59 = false;
					}
				}
			}
		}
	}
}

int func_214()//Position - 0xF47C
{
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			return 1;
		}
	}
	if (bLocal_59)
	{
		return 1;
	}
	return 0;
}

void func_215()//Position - 0xF4A4
{
	struct<3> Var0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92 = (iLocal_92 - 1);
	if (iLocal_92 < 0)
	{
		iLocal_92 = (iLocal_91 - 1);
	}
	if (HUD::DOES_BLIP_EXIST(Local_819[iLocal_92 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_819[iLocal_92 /*3*/]) };
		if (!__LIB_0__::func_86(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

void func_217()//Position - 0xF533
{
	struct<3> Var0;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_111, "SET_INPUT_EVENT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iLocal_92++;
	if (iLocal_92 > (iLocal_91 - 1))
	{
		iLocal_92 = 0;
	}
	if (HUD::DOES_BLIP_EXIST(Local_819[iLocal_92 /*3*/]))
	{
		Var0 = { HUD::GET_BLIP_COORDS(Local_819[iLocal_92 /*3*/]) };
		if (!__LIB_0__::func_86(Var0))
		{
			HUD::LOCK_MINIMAP_POSITION(Var0.f_0, Var0.f_1);
		}
	}
}

int func_219()//Position - 0xF66D
{
	if (iLocal_821 == 4)
	{
		return 1;
	}
	if (__LIB_0__::func_877())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (__LIB_0__::func_193())
	{
		return 1;
	}
	if (__LIB_0__::func_194(8, -1))
	{
		return 1;
	}
	if (__LIB_0__::func_77(0))
	{
		return 1;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return 1;
	}
	if (__LIB_0__::func_477())
	{
		return 1;
	}
	if (Global_78579 || Global_78580)
	{
		return 1;
	}
	return 0;
}

void func_222()//Position - 0xF708
{
	if (!Global_112422 == 0)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_112422))
		{
			Global_112422 = 0;
		}
	}
}

void func_223()//Position - 0xF72B
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 2);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 3);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 4);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 5);
		PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 15);
	}
}

void func_224()//Position - 0xF77C
{
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(1 /*CAMERA_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	__LIB_0__::func_187();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (__LIB_0__::func_877() || __LIB_0__::func_77(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
}

int func_226()//Position - 0xF7F9
{
	int iVar0;
	if (Global_112418 == 0)
	{
		return 0;
	}
	if (!PED::IS_PED_INJURED(Global_112418))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Global_112418, Global_112417))
			{
				return 0;
			}
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (__LIB_40__::func_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
					if (!iVar0 == PLAYER::PLAYER_PED_ID())
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							Global_112433 = 1;
							PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
							AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
							return 1;
						}
					}
				}
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
			Global_112434 = 0;
		}
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::DESTROY_CAM(iLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	return 0;
}

int func_228(int iParam0)//Position - 0xF923
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) != iLocal_71)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_112417))
	{
		return 1;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_112418))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(Global_112418))
	{
		return 1;
	}
	if (iLocal_821 != 4)
	{
		if (iParam0 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 1;
			}
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_112417, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_112417, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_112417, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Global_112417, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(Global_112417, false) };
		if (MISC::IS_BULLET_IN_AREA(Var0, 7f, false))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.f_0 = (Var2.f_0 - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.f_0 = (Var3.f_0 + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (MISC::IS_PROJECTILE_IN_AREA(Var2, Var3, true))
		{
			return 1;
		}
	}
	return 0;
}

int func_230()//Position - 0xFAC4
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iLocal_95 = HUD::GET_NUMBER_OF_ACTIVE_BLIPS();
		if (__LIB_39__::func_765(&iVar0, __LIB_12__::func_850(), __LIB_39__::func_766()))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			func_222();
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false) == PLAYER::PLAYER_PED_ID())
			{
				iLocal_839 = 1;
			}
			else
			{
				iLocal_839 = 2;
			}
			if (__LIB_42__::func_700(&iVar0, &iVar1, 1))
			{
				Local_832 = { ENTITY::GET_ENTITY_COORDS(Global_112417, true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Local_832.f_2 = 0f;
				fLocal_72 = SYSTEM::VMAG(Local_832);
				iLocal_71 = __LIB_0__::func_216(PLAYER::PLAYER_PED_ID());
				__LIB_39__::func_763();
				iLocal_96 = func_211();
				iLocal_58 = 1;
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				Global_112433 = 1;
				iLocal_821 = 0;
				iLocal_822 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_237(bool bParam0)//Position - 0x1007B
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED("taxi" /* GXT: Taxi */))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("taxi" /* GXT: Taxi */);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_68))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_68))
		{
			GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		}
		CAM::SET_CAM_ACTIVE(iLocal_68, false);
		CAM::DESTROY_CAM(iLocal_68, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::UNLOCK_MINIMAP_POSITION();
		HUD::UNLOCK_MINIMAP_ANGLE();
		HUD::SET_RADAR_ZOOM(0);
	}
	Global_112434 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		OBJECT::DELETE_OBJECT(&iLocal_109);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_108);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_111);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_112);
	if (__LIB_39__::func_767(Global_112418))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_enter", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_112418, "leanover_enter", &cLocal_824, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_idle", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_112418, "leanover_idle", &cLocal_824, -2f);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_112418, &cLocal_824, "leanover_exit", 3))
		{
			ENTITY::STOP_ENTITY_ANIM(Global_112418, "leanover_exit", &cLocal_824, -2f);
		}
		if (PED::IS_PED_HEADTRACKING_PED(Global_112418, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_CLEAR_LOOK_AT(Global_112418);
		}
	}
	STREAMING::REMOVE_ANIM_DICT(&cLocal_824);
	if (iLocal_821 == 4)
	{
		if (iLocal_823 != 10)
		{
			if (iLocal_57)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				iLocal_57 = 0;
			}
			__LIB_0__::func_671(0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FADE_OUT_WORLD_250MS_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_112417))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Global_112417, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_112417, false);
				}
			}
			if (bParam0)
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						if ((!__LIB_0__::func_324() && !__LIB_0__::func_134()) && Global_100441 != 10)
						{
							CAM::DO_SCREEN_FADE_IN(250);
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_695(Global_112417))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_112417, true))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_112417, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					if (!__LIB_39__::func_758(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) && !__LIB_39__::func_758(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
		}
	}
	__LIB_39__::func_768();
	__LIB_39__::func_764();
	Global_112454 = -1;
	Global_112433 = 0;
	Global_112437 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

