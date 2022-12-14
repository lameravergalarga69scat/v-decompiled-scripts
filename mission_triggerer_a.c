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
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int* iLocal_69 = NULL;
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
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
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
	var uLocal_438 = 4;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
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
	var uLocal_456 = 4;
	var uLocal_457 = 0;
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
	var uLocal_472 = 4;
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
	var uLocal_486 = 4;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 3;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	struct<3> Local_505 = { 0, 0, 0 } ;
	struct<3> Local_506 = { 0, 0, 0 } ;
	struct<3> Local_507 = { 0, 0, 0 } ;
	struct<3> Local_508 = { 0, 0, 0 } ;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	int iLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 16;
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
	struct<3> Local_680 = { 0, 0, 0 } ;
	struct<3> Local_681 = { 0, 0, 0 } ;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	struct<3> Local_687 = { 0, 0, 0 } ;
	float fLocal_688 = 0f;
	float fLocal_689 = 0f;
	float fLocal_690 = 0f;
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
	struct<3> Local_707 = { 0, 0, 0 } ;
	struct<3> Local_708 = { 0, 0, 0 } ;
	var uLocal_709 = 16;
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
	struct<3> Local_880 = { 0, 0, 0 } ;
	struct<3> Local_881 = { 0, 0, 0 } ;
	struct<3> Local_882 = { 0, 0, 0 } ;
	float fLocal_883 = 0f;
	float fLocal_884 = 0f;
	float fLocal_885 = 0f;
	var uLocal_886 = 16;
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
	int iLocal_1055 = 0;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	struct<3> Local_1058 = { 0, 0, 0 } ;
	struct<3> Local_1059 = { 0, 0, 0 } ;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	float fLocal_1063 = 0f;
	float fLocal_1064 = 0f;
	float fLocal_1065 = 0f;
	float fLocal_1066 = 0f;
	float fLocal_1067 = 0f;
	var uLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 263;
	var uLocal_1074 = 0;
	var uLocal_1075 = 1065353216;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	struct<3> Local_1080 = { 0, 0, 0 } ;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 2;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	struct<3> Local_1087 = { 0, 0, 0 } ;
	struct<3> Local_1088 = { 0, 0, 0 } ;
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
	var uLocal_1100 = 49;
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
	var uLocal_1150 = 2;
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
	struct<3> Local_1169 = { 0, 0, 0 } ;
	var uLocal_1170 = 0;
	struct<3> Local_1171 = { 0, 0, 0 } ;
	var uLocal_1172 = 0;
	char* sLocal_1173 = NULL;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	struct<3> Local_1177 = { 0, 0, 0 } ;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	int iLocal_1184 = 0;
	int iLocal_1185 = 0;
	int iLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	struct<3> Local_1196 = { 0, 0, 0 } ;
	struct<3> Local_1197 = { 0, 0, 0 } ;
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
	float fLocal_1222 = 0f;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 7;
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
	var uLocal_1238 = 3;
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
	struct<3> Local_1249 = { 0, 0, 0 } ;
	struct<3> Local_1250 = { 0, 0, 0 } ;
	var uLocal_1251 = 0;
	struct<3> Local_1252 = { 0, 0, 0 } ;
	float fLocal_1253 = 0f;
	float fLocal_1254 = 0f;
	float fLocal_1255 = 0f;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 16;
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
	int iLocal_1425 = 0;
	int iLocal_1426 = 0;
	int iLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	int iLocal_1437 = 0;
	int iLocal_1438 = 0;
	int iLocal_1439 = 0;
	int iLocal_1440 = 0;
	int iLocal_1441 = 0;
	int iLocal_1442 = 0;
	int iLocal_1443 = 0;
	char cLocal_1444[32] = "";
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	char* sLocal_1449 = NULL;
	char* sLocal_1450 = NULL;
	struct<5> Local_1451 = { 263, 0, 1065353216, 0, 0 } ;
	int iLocal_1452 = 0;
	int iLocal_1453 = 0;
	int iLocal_1454 = 0;
	struct<3> Local_1455 = { 0, 0, 0 } ;
	struct<3> Local_1456 = { 0, 0, 0 } ;
	struct<5> Local_1457 = { 263, 0, 1065353216, 0, 0 } ;
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	int iLocal_1461 = 0;
	int iLocal_1462 = 0;
	int iLocal_1463 = 0;
	float fLocal_1464 = 0f;
	int iLocal_1465 = 0;
	int iLocal_1466 = 0;
	int iLocal_1467 = 0;
	int iLocal_1468 = 0;
	int iLocal_1469 = 0;
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
	int iLocal_1490 = 0;
	var uLocal_1491 = 0;
	float fLocal_1492 = 0f;
	float fLocal_1493 = 0f;
	float fLocal_1494 = 0f;
	float fLocal_1495 = 0f;
	float fLocal_1496 = 0f;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 263;
	var uLocal_1501 = 0;
	var uLocal_1502 = 1065353216;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	float fLocal_1511 = 0f;
	float fLocal_1512 = 0f;
	float fLocal_1513 = 0f;
	float fLocal_1514 = 0f;
	float fLocal_1515 = 0f;
	var uLocal_1516 = 0;
	int iLocal_1517 = 0;
	int iLocal_1518 = 0;
	int iLocal_1519 = 0;
	struct<3> Local_1520 = { 0, 0, 0 } ;
	struct<3> Local_1521 = { 0, 0, 0 } ;
	struct<3> Local_1522 = { 0, 0, 0 } ;
	float fLocal_1523 = 0f;
	float fLocal_1524 = 0f;
	float fLocal_1525 = 0f;
	var uLocal_1526 = 16;
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
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 16;
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
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	struct<3> Local_1856 = { 0, 0, 0 } ;
	struct<3> Local_1857 = { 0, 0, 0 } ;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	struct<3> Local_1864 = { 0, 0, 0 } ;
	float fLocal_1865 = 0f;
	float fLocal_1866 = 0f;
	float fLocal_1867 = 0f;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 16;
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
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	struct<3> Local_2042 = { 0, 0, 0 } ;
	struct<3> Local_2043 = { 0, 0, 0 } ;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
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
	iLocal_499 = -1;
	iLocal_500 = -1;
	Local_505 = { 1987.235f, 3052.738f, 46.22f };
	Local_506 = { 1986.785f, 3052.088f, 46.32f };
	Local_507 = { 1987.035f, 3052.288f, 46.34f };
	Local_508 = { 0f, 0f, 53.64f };
	iLocal_511 = 999;
	Local_680 = { -1159.737f, -1520.509f, 9.629f };
	Local_681 = { 0f, 0f, 45f };
	Local_687 = { -1158.2783f, -1521.0677f, 11.3094f };
	fLocal_688 = 0.65f;
	fLocal_689 = 0f;
	fLocal_690 = 35f;
	Local_707 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_708 = { 0f, 0f, 40f };
	Local_880 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_881 = { 0f, 0f, 40f };
	Local_882 = { -1158.2783f, -1521.0677f, 10.8094f };
	fLocal_883 = 0.65f;
	fLocal_884 = -0.16f;
	fLocal_885 = 35f;
	iLocal_1055 = -1;
	Local_1058 = { -440.132f, 1058.52f, 326.69f };
	Local_1059 = { 0f, 0f, 0f };
	fLocal_1063 = 30f;
	fLocal_1064 = 0.38f;
	fLocal_1065 = 0f;
	fLocal_1066 = 0.095f;
	fLocal_1067 = 0.05f;
	iLocal_1069 = -1;
	iLocal_1070 = -1;
	Local_1080 = { 0.2f, 2.2f, 0f };
	Local_1087 = { 0f, 0f, 0f };
	Local_1088 = { Local_1087 };
	Local_1169 = { 0f, 0f, 0f };
	Local_1171 = { 0f, 0f, 0f };
	sLocal_1173 = "FBIPRAU";
	Local_1177 = { 0f, 0f, 0f };
	iLocal_1184 = -1;
	iLocal_1185 = -1;
	iLocal_1186 = -1;
	Local_1196 = { 1276.88f, -1712.571f, 54.415f };
	Local_1197 = { 0f, 0f, -142.02f };
	fLocal_1222 = -0.64f;
	Local_1249 = { 95.84f, -1291.44f, 28.275f };
	Local_1250 = { 0f, 0f, 30f };
	Local_1252 = { 92.83592f, -1291.2959f, 29.36181f };
	fLocal_1253 = 0.35f;
	fLocal_1254 = 0f;
	fLocal_1255 = 40f;
	StringCopy(&cLocal_1444, "jhp1a_sec_arrive", 32);
	sLocal_1449 = "jhp2a_alt";
	sLocal_1450 = "jhp2a_main";
	Local_1455 = { 441.86075f, -1015.75806f, 27.66605f };
	Local_1456 = { -1511.4557f, -654.47925f, 28.23983f };
	fLocal_1464 = 999999f;
	iLocal_1465 = -1;
	iLocal_1490 = 613961892;
	fLocal_1492 = 30f;
	fLocal_1493 = 0.46f;
	fLocal_1494 = 0f;
	fLocal_1495 = -0.02f;
	fLocal_1496 = 0.1f;
	fLocal_1511 = 25f;
	fLocal_1512 = 0.5f;
	fLocal_1513 = 0f;
	fLocal_1514 = -0.005f;
	fLocal_1515 = 0.1f;
	Local_1520 = { -803.523f, 171.887f, 72.321f };
	Local_1521 = { 0f, 0f, -59.24f };
	Local_1522 = { -803.8107f, 172.2809f, 73.0846f };
	fLocal_1523 = 0.35f;
	fLocal_1524 = -0.02f;
	fLocal_1525 = 30f;
	Local_1856 = { 1972.956f, 3812.079f, 32.84f };
	Local_1857 = { 0f, 0f, 31f };
	Local_1864 = { 1972.9822f, 3814.1045f, 33.9045f };
	fLocal_1865 = 0.35f;
	fLocal_1866 = -0.78f;
	fLocal_1867 = 30f;
	Local_2042 = { -1148.219f, -1522.4f, 10.633f };
	Local_2043 = { 0f, 0f, -53.75f };
	Var0.f_1 = 8;
	Var0.f_115.f_7 = 21;
	Var0.f_115.f_8 = 6;
	Var0.f_110 = 0;
	Var0.f_111 = -1;
	Var0.f_0 = 31849/*func_168*/;
	__LIB_38__::func_454();
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
						__LIB_42__::func_595(&Var0);
						Var0.f_106 = 0;
					}
					else
					{
						__LIB_43__::func_569(&Var0);
					}
				}
			}
		}
		if (__LIB_0__::func_178(62))
		{
			__LIB_43__::func_569(&Var0);
		}
		func_1(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)//Position - 0x4A7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_201())
	{
		uParam0->f_109 = MISC::GET_GAME_TIMER() + 2000;
	}
	if (Global_113386.f_9085)
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
						if (!BitTest(Global_113386.f_9085.f_2[Global_97374[iVar0 /*17*/].f_6 /*3*/], 1) || BitTest(Global_113386.f_9085.f_2[Global_97374[iVar0 /*17*/].f_6 /*3*/], 2))
						{
							__LIB_38__::func_361(iVar0);
						}
						else
						{
							switch (Global_97374[iVar0 /*17*/].f_3)
							{
								case 0:
									func_29(iVar0, uParam0);
									break;
								case 1:
									__LIB_42__::func_589(iVar0, uParam0);
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
				iVar1 = __LIB_38__::func_441(Global_97374[Global_97372 /*17*/].f_5);
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
					__LIB_38__::func_398(&(Global_97374[Global_97372 /*17*/].f_7));
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
			iVar3 = __LIB_38__::func_381(Global_97364);
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
		if ((__LIB_38__::func_397() != 60 && (__LIB_38__::func_397() != 23 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)) && (__LIB_38__::func_397() != 38 || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4))
		{
			__LIB_16__::func_306(1, 0);
		}
		else
		{
			__LIB_16__::func_306(1, 1);
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
			__LIB_42__::func_595(uParam0);
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
				__LIB_43__::func_569(uParam0);
			}
		}
		else if (uParam0->f_110 > 50)
		{
			__LIB_43__::func_569(uParam0);
		}
	}
	else if (uParam0->f_110 > 0)
	{
		__LIB_43__::func_569(uParam0);
	}
	if (Global_97370)
	{
		if (!Global_97369)
		{
			Global_97370 = 0;
		}
	}
}

void func_29(int iParam0, var uParam1)//Position - 0x1300
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = Global_97374[iParam0 /*17*/].f_5;
	iVar1 = 0;
	if (BitTest(Global_32338[Global_97374[iParam0 /*17*/].f_9 /*23*/].f_11, 19))
	{
		iVar1 = __LIB_15__::func_942();
		if (iVar1 > 2 || iVar1 < 0)
		{
			iVar1 = 0;
		}
	}
	Var2 = { Global_32338[Global_97374[iParam0 /*17*/].f_9 /*23*/][iVar1 /*3*/] };
	if (__LIB_38__::func_385(iVar0))
	{
		if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 0))
		{
			Stack.Push(iVar0);
			Stack.Push(&(Global_97374[iParam0 /*17*/].f_10));
			Stack.Push(&(uParam1->f_1[iParam0 /*13*/]));
			Call_Loc(*uParam1);
			__LIB_38__::func_416(&(Global_97374[iParam0 /*17*/].f_10));
		}
		__LIB_42__::func_592(iVar0, Var2, &(uParam1->f_113));
		if (!func_30(iParam0, uParam1))
		{
			return;
		}
	}
	Global_97372 = iParam0;
	Global_97371 = 1;
}

int func_30(int iParam0, var uParam1)//Position - 0x13CA
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
	iVar1 = __LIB_15__::func_942();
	if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 0))
	{
		if (__LIB_0__::func_374(iVar1))
		{
			iVar2 = Global_91229[iVar0 /*34*/].f_10;
			fVar3 = __LIB_38__::func_414(__LIB_42__::func_591(iVar2));
			if (__LIB_0__::func_215(__LIB_38__::func_441(iVar0)))
			{
				if (BitTest(Global_91229[iVar0 /*34*/].f_15, 13))
				{
					if (uParam1->f_109 > MISC::GET_GAME_TIMER() || __LIB_38__::func_413(iVar1) == 5)
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
					if (__LIB_0__::func_374(__LIB_15__::func_942()))
					{
						Call_Loc(uParam1->f_1[iParam0 /*13*/].f_12);
						if (!StackVal)
						{
							__LIB_38__::func_396(&(Global_96938.f_209));
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
							if (!__LIB_38__::func_412(iVar0))
							{
								if (__LIB_15__::func_276(iVar2) && __LIB_38__::func_384(iVar2))
								{
									__LIB_38__::func_383(iVar2);
									__LIB_38__::func_411(iVar0);
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
							if (__LIB_42__::func_590(iParam0, uParam1))
							{
								return 1;
							}
						}
						if (!Global_97367 && Global_97364 == -1)
						{
							if (!__LIB_38__::func_389())
							{
								if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 6))
								{
									if (fVar3 < (Global_97374[iParam0 /*17*/].f_10.f_4 * Global_97374[iParam0 /*17*/].f_10.f_4))
									{
										__LIB_38__::func_388(iVar0, 3, Global_97374[iParam0 /*17*/].f_10.f_6);
										MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 6);
									}
								}
								else if (fVar3 > ((Global_97374[iParam0 /*17*/].f_10.f_4 * Global_97374[iParam0 /*17*/].f_10.f_4) + 30f))
								{
									__LIB_17__::func_889(iVar0);
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
									__LIB_38__::func_388(Global_97374[iParam0 /*17*/].f_10, 1, Global_97374[iParam0 /*17*/].f_10.f_6);
									MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 7);
								}
							}
							else if (fVar3 > ((Global_97374[iParam0 /*17*/].f_10.f_5 * Global_97374[iParam0 /*17*/].f_10.f_5) + 30f))
							{
								__LIB_17__::func_889(iVar0);
								MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 7);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && __LIB_0__::func_374(__LIB_15__::func_942()))
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
									__LIB_42__::func_588(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
									return 0;
								}
								Call_Loc(uParam1->f_1[iParam0 /*13*/].f_4);
								if (StackVal)
								{
									if (BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_15__::func_942()))
									{
										if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 10))
										{
											if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 9))
											{
												if (__LIB_38__::func_483(iVar0))
												{
													MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 9);
												}
												else if (!__LIB_38__::func_389())
												{
													Call_Loc(uParam1->f_1[iParam0 /*13*/].f_5);
													Global_97368 = 0;
													MISC::SET_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 3);
													if (Global_96287 == 0)
													{
														__LIB_38__::func_388(iVar0, 2, Global_97374[iParam0 /*17*/].f_10.f_6);
													}
													if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 11))
													{
														__LIB_15__::func_228(&(uParam1->f_115), 0, 0, 2000, 1, 1, 0, 1);
														Var5.f_7 = 21;
														Var5.f_8 = 6;
														uParam1->f_115 = { Var5 };
														if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
														{
															CAM::DO_SCREEN_FADE_IN(800);
														}
														MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 11);
													}
													if (__LIB_42__::func_590(iParam0, uParam1))
													{
														return 1;
													}
												}
												else
												{
													__LIB_38__::func_442(&(Global_97374[iParam0 /*17*/].f_10));
												}
											}
											else
											{
												Var6 = { __LIB_38__::func_482(iVar0) };
												fVar7 = __LIB_38__::func_414(Var6);
												fVar8 = __LIB_38__::func_409(iVar0);
												if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 13))
												{
													if (HUD::DOES_BLIP_EXIST(uParam1->f_114))
													{
														HUD::REMOVE_BLIP(&(uParam1->f_114));
													}
													uParam1->f_114 = __LIB_0__::func_488(Var6, 0);
													HUD::SET_BLIP_SPRITE(uParam1->f_114, __LIB_38__::func_481(iVar2));
													if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_32338[iVar2 /*23*/].f_20)))
													{
														HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_114, &(Global_32338[iVar2 /*23*/].f_20));
													}
													HUD::SET_BLIP_HIGH_DETAIL(uParam1->f_114, true);
													HUD::SET_BLIP_AS_SHORT_RANGE(uParam1->f_114, false);
													HUD::SET_BLIP_DISPLAY(uParam1->f_114, 4);
													switch (__LIB_15__::func_942())
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
												__LIB_38__::func_408(Var6);
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
																if (!BitTest(Global_91229[iVar0 /*34*/].f_15, 25) || (iVar0 == 15 && __LIB_15__::func_942() == 1))
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
											if (__LIB_33__::func_623(iVar0, &(uParam1->f_115), bVar10, 1, 0, 1, 0))
											{
												if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
												{
													ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), __LIB_38__::func_407(iVar0), true, false, false, true);
													ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_38__::func_406(iVar0));
													if (__LIB_38__::func_405(iVar0))
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
										if (BitTest(Global_91229[iVar0 /*34*/].f_11, __LIB_15__::func_942()))
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
													switch (__LIB_15__::func_942())
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
													__LIB_38__::func_408(__LIB_42__::func_591(iVar2));
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
								__LIB_38__::func_404();
								if ((__LIB_38__::func_483(iVar0) || !BitTest(Global_97374[iParam0 /*17*/].f_8, __LIB_15__::func_942())) || __LIB_38__::func_389())
								{
									if (Global_97361)
									{
										__LIB_17__::func_464();
									}
									if (!(__LIB_38__::func_389() && iVar0 == 92))
									{
										__LIB_38__::func_442(&(Global_97374[iParam0 /*17*/].f_10));
										__LIB_38__::func_509();
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
										if (BitTest(Global_91229[iVar0 /*34*/].f_11, __LIB_15__::func_942()))
										{
											__LIB_0__::func_697("AM_H_DISRU" /* GXT: The mission has been disrupted. Return later to start the mission. */, 2, 0, 10000, 10000, 7, 0, 0, 0);
										}
										if (Global_97361)
										{
											__LIB_17__::func_464();
										}
										Call_Loc(uParam1->f_1[iParam0 /*13*/].f_6);
										__LIB_38__::func_442(&(Global_97374[iParam0 /*17*/].f_10));
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
										if (__LIB_42__::func_590(iParam0, uParam1))
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
								__LIB_17__::func_464();
							}
							MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
						}
						if (!Global_97374[iParam0 /*17*/].f_2)
						{
							Global_97374[iParam0 /*17*/].f_2 = 1;
						}
						__LIB_42__::func_588(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
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
						__LIB_38__::func_442(&(Global_97374[iParam0 /*17*/].f_10));
						MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 1);
					}
					if (Global_97363 == Global_97374[iParam0 /*17*/].f_10)
					{
						__LIB_42__::func_588(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
					}
				}
			}
			else if (BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 2))
			{
				if (Global_97363 != -1)
				{
					if (!BitTest(Global_97374[iParam0 /*17*/].f_10.f_1, 8))
					{
						__LIB_42__::func_588(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 0);
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
							__LIB_42__::func_588(&(Global_97374[iParam0 /*17*/].f_10), &(uParam1->f_1[iParam0 /*13*/]), &(uParam1->f_107), 1);
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_168(int iParam0, var uParam1, var uParam2)//Position - 0x7C69
{
	switch (iParam0)
	{
		case 1:
			__LIB_38__::func_440(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 543798/*func_806*/;
			uParam2->f_2 = 543700/*func_805*/;
			uParam2->f_3 = 543655/*func_804*/;
			uParam2->f_4 = 543629/*func_803*/;
			uParam2->f_5 = 543107/*func_802*/;
			uParam2->f_6 = 542920/*func_801*/;
			uParam2->f_7 = 542733/*func_800*/;
			uParam2->f_10 = 541905/*func_798*/;
			uParam2->f_11 = 541373/*func_797*/;
			uParam2->f_12 = 541364/*func_796*/;
			uParam2->f_8 = 540587/*func_792*/;
			uParam2->f_9 = 540579/*func_791*/;
			break;
		case 2:
			__LIB_38__::func_440(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 540542/*func_790*/;
			uParam2->f_2 = 540445/*func_789*/;
			uParam2->f_3 = 540394/*func_788*/;
			uParam2->f_4 = 540368/*func_787*/;
			uParam2->f_5 = 521224/*func_780*/;
			uParam2->f_6 = 520991/*func_779*/;
			uParam2->f_7 = 520758/*func_778*/;
			uParam2->f_10 = 518571/*func_775*/;
			uParam2->f_11 = 518132/*func_774*/;
			uParam2->f_12 = 518123/*func_773*/;
			uParam2->f_8 = 518115/*func_772*/;
			uParam2->f_9 = 518107/*func_771*/;
			break;
		case 17:
			__LIB_38__::func_440(uParam1, iParam0, 75f, 100f, 50f, 0, 0, 0);
			uParam2->f_1 = 518091/*func_770*/;
			uParam2->f_2 = 518083/*func_769*/;
			uParam2->f_3 = 518075/*func_768*/;
			uParam2->f_4 = 518066/*func_767*/;
			uParam2->f_5 = 518058/*func_766*/;
			uParam2->f_6 = 518050/*func_765*/;
			uParam2->f_7 = 518042/*func_764*/;
			uParam2->f_10 = 517783/*func_763*/;
			uParam2->f_11 = 517774/*func_762*/;
			uParam2->f_12 = 517765/*func_761*/;
			uParam2->f_8 = 517757/*func_760*/;
			uParam2->f_9 = 517749/*func_759*/;
			break;
		case 18:
			__LIB_38__::func_440(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 517741/*func_758*/;
			uParam2->f_2 = 517723/*func_757*/;
			uParam2->f_3 = 517705/*func_756*/;
			uParam2->f_4 = 517687/*func_755*/;
			uParam2->f_5 = 517259/*func_754*/;
			uParam2->f_6 = 517238/*func_753*/;
			uParam2->f_7 = 517217/*func_752*/;
			uParam2->f_10 = 516872/*func_751*/;
			uParam2->f_11 = 516863/*func_750*/;
			uParam2->f_12 = 516854/*func_749*/;
			uParam2->f_8 = 516763/*func_748*/;
			uParam2->f_9 = 516672/*func_747*/;
			break;
		case 19:
			__LIB_38__::func_440(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 516652/*func_746*/;
			uParam2->f_2 = 516190/*func_742*/;
			uParam2->f_3 = 515820/*func_736*/;
			uParam2->f_4 = 515444/*func_732*/;
			uParam2->f_5 = 514027/*func_729*/;
			uParam2->f_6 = 513875/*func_728*/;
			uParam2->f_7 = 513723/*func_727*/;
			uParam2->f_10 = 513253/*func_724*/;
			uParam2->f_11 = 513232/*func_723*/;
			uParam2->f_12 = 513223/*func_722*/;
			uParam2->f_8 = 511411/*func_721*/;
			uParam2->f_9 = 511403/*func_720*/;
			break;
		case 44:
			__LIB_38__::func_440(uParam1, iParam0, 50f, 65f, 50f, 0, 0, 0);
			uParam2->f_1 = 511268/*func_719*/;
			uParam2->f_2 = 511180/*func_718*/;
			uParam2->f_3 = 511050/*func_716*/;
			uParam2->f_4 = 510955/*func_715*/;
			uParam2->f_5 = 496877/*func_707*/;
			uParam2->f_6 = 496590/*func_706*/;
			uParam2->f_7 = 496495/*func_705*/;
			uParam2->f_10 = 496384/*func_704*/;
			uParam2->f_11 = 496312/*func_703*/;
			uParam2->f_12 = 496303/*func_702*/;
			uParam2->f_8 = 493167/*func_695*/;
			uParam2->f_9 = 493012/*func_694*/;
			break;
		case 40:
			__LIB_38__::func_440(uParam1, iParam0, 110f, 135f, 50f, 0, 0, 0);
			uParam2->f_1 = 493004/*func_693*/;
			uParam2->f_2 = 492996/*func_692*/;
			uParam2->f_3 = 492988/*func_691*/;
			uParam2->f_4 = 492979/*func_690*/;
			uParam2->f_5 = 492963/*func_689*/;
			uParam2->f_6 = 492951/*func_688*/;
			uParam2->f_7 = 492939/*func_687*/;
			uParam2->f_10 = 492183/*func_683*/;
			uParam2->f_11 = 492174/*func_682*/;
			uParam2->f_12 = 492165/*func_681*/;
			uParam2->f_8 = 492157/*func_680*/;
			uParam2->f_9 = 492149/*func_679*/;
			break;
		case 43:
			__LIB_38__::func_440(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 492141/*func_678*/;
			uParam2->f_2 = 492115/*func_677*/;
			uParam2->f_3 = 492089/*func_676*/;
			uParam2->f_4 = 492080/*func_675*/;
			uParam2->f_5 = 492072/*func_674*/;
			uParam2->f_6 = 492064/*func_673*/;
			uParam2->f_7 = 492056/*func_672*/;
			uParam2->f_10 = 491983/*func_671*/;
			uParam2->f_11 = 491974/*func_670*/;
			uParam2->f_12 = 491965/*func_669*/;
			uParam2->f_8 = 491908/*func_668*/;
			uParam2->f_9 = 491900/*func_667*/;
			break;
		case 86:
			__LIB_38__::func_440(uParam1, iParam0, 100f, 120f, 50f, 0, 0, 0);
			uParam2->f_1 = 491832/*func_666*/;
			uParam2->f_2 = 491777/*func_665*/;
			uParam2->f_3 = 491694/*func_664*/;
			uParam2->f_4 = 490976/*func_657*/;
			uParam2->f_5 = 487643/*func_645*/;
			uParam2->f_6 = 487421/*func_643*/;
			uParam2->f_7 = 487316/*func_641*/;
			uParam2->f_10 = 485433/*func_629*/;
			uParam2->f_11 = 485022/*func_625*/;
			uParam2->f_12 = 485013/*func_624*/;
			uParam2->f_8 = 480421/*func_608*/;
			uParam2->f_9 = 480258/*func_607*/;
			break;
		case 87:
			__LIB_38__::func_440(uParam1, iParam0, 325f, 335f, 50f, 0, 0, 0);
			uParam2->f_1 = 480250/*func_606*/;
			uParam2->f_2 = 480145/*func_605*/;
			uParam2->f_3 = 480047/*func_604*/;
			uParam2->f_4 = 479685/*func_603*/;
			uParam2->f_5 = 477943/*func_602*/;
			uParam2->f_6 = 477860/*func_601*/;
			uParam2->f_7 = 477777/*func_600*/;
			uParam2->f_10 = 477601/*func_598*/;
			uParam2->f_11 = 477592/*func_597*/;
			uParam2->f_12 = 477583/*func_596*/;
			uParam2->f_8 = 477575/*func_595*/;
			uParam2->f_9 = 477567/*func_594*/;
			break;
		case 88:
			__LIB_38__::func_440(uParam1, iParam0, 250f, 270f, 270f, 0, 0f, 2);
			uParam2->f_1 = 477498/*func_593*/;
			uParam2->f_2 = 477434/*func_592*/;
			uParam2->f_3 = 477370/*func_591*/;
			uParam2->f_4 = 477304/*func_590*/;
			uParam2->f_5 = 476785/*func_588*/;
			uParam2->f_6 = 476488/*func_586*/;
			uParam2->f_7 = 476426/*func_585*/;
			uParam2->f_10 = 476150/*func_584*/;
			uParam2->f_11 = 476141/*func_583*/;
			uParam2->f_12 = 475693/*func_582*/;
			uParam2->f_8 = 475582/*func_581*/;
			uParam2->f_9 = 475412/*func_580*/;
			break;
		case 89:
			__LIB_38__::func_440(uParam1, iParam0, 320f, 350f, 350f, 0, 0f, 2);
			uParam2->f_1 = 475343/*func_579*/;
			uParam2->f_2 = 475298/*func_578*/;
			uParam2->f_3 = 475263/*func_577*/;
			uParam2->f_4 = 475173/*func_576*/;
			uParam2->f_5 = 473962/*func_571*/;
			uParam2->f_6 = 473805/*func_570*/;
			uParam2->f_7 = 473695/*func_569*/;
			uParam2->f_10 = 473186/*func_566*/;
			uParam2->f_11 = 473131/*func_565*/;
			uParam2->f_12 = 472512/*func_562*/;
			uParam2->f_8 = 471570/*func_559*/;
			uParam2->f_9 = 470970/*func_553*/;
			break;
		case 62:
			__LIB_38__::func_440(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 470958/*func_552*/;
			uParam2->f_2 = 470915/*func_551*/;
			uParam2->f_3 = 470872/*func_550*/;
			uParam2->f_4 = 470806/*func_549*/;
			uParam2->f_5 = 53096/*func_210*/;
			uParam2->f_6 = 52820/*func_208*/;
			uParam2->f_7 = 52749/*func_206*/;
			uParam2->f_10 = 52689/*func_205*/;
			uParam2->f_11 = 52616/*func_204*/;
			uParam2->f_12 = 52607/*func_203*/;
			uParam2->f_8 = 34463/*func_186*/;
			uParam2->f_9 = 34455/*func_185*/;
			break;
		case 54:
		case 55:
		case 58:
			__LIB_38__::func_440(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 34447/*func_184*/;
			uParam2->f_2 = 34430/*func_183*/;
			uParam2->f_3 = 34413/*func_182*/;
			uParam2->f_4 = 34388/*func_181*/;
			uParam2->f_5 = 34283/*func_180*/;
			uParam2->f_6 = 34264/*func_179*/;
			uParam2->f_7 = 34140/*func_177*/;
			uParam2->f_10 = 33770/*func_173*/;
			uParam2->f_11 = 33761/*func_172*/;
			uParam2->f_12 = 33739/*func_171*/;
			uParam2->f_8 = 33731/*func_170*/;
			uParam2->f_9 = 33723/*func_169*/;
			break;
		default:
			return;
			break;
	}
	*uParam2 = 1;
}

void func_186()//Position - 0x869F
{
	__LIB_17__::func_761(46, 4);
	__LIB_17__::func_761(40, 4);
	__LIB_17__::func_761(45, 4);
	__LIB_17__::func_761(41, 4);
	__LIB_17__::func_761(43, 4);
	__LIB_17__::func_761(42, 4);
	__LIB_17__::func_761(44, 4);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.10254f, 175.44206f, 71.33471f, -807.3251f, 172.38206f, 73.83471f, 12.25f, false, true, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_1522, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1523);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1524);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1525);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
	}
	else
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
	}
	if (__LIB_15__::func_942() == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -820.7342f, 179.54707f, 68.11261f, -818.67267f, 174.17244f, 74.362816f, 7.5f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (__LIB_15__::func_942() == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.228f, 178.24481f, 68.67244f, -801.2753f, 182.81676f, 75.35547f, 7.5f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	switch (iLocal_1519)
	{
		case 0:
			if (__LIB_15__::func_942() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1971.284f, 3812.5002f, 30.847073f, 1978.9078f, 3816.8008f, 35.18824f, 3.5f, false, true, 0))
				{
					__LIB_0__::func_222(&uLocal_1526, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					__LIB_38__::func_445();
					iLocal_1519++;
				}
			}
			else
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (__LIB_15__::func_942() == 0)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.80133f, 179.06157f, 68.659195f, -818.582f, 177.39766f, 74.97781f, 3.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -816.228f, 178.24481f, 68.67244f, -801.2753f, 182.81676f, 75.35547f, 7.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.64514f, 179.6094f, 70.47739f, -816.49615f, 176.43573f, 75.22739f, 6f, false, true, 0))
					{
						iLocal_1519 = 2;
					}
				}
				else if (__LIB_15__::func_942() == 1)
				{
					if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -808.7091f, 178.38531f, 68.65309f, -807.49634f, 175.33884f, 75.59469f, 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.7493f, 176.76828f, 69.33471f, -802.0392f, 181.41832f, 75.35547f, 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.81726f, 168.55449f, 69.33471f, -804.96063f, 177.79117f, 75.6881f, 8.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.214f, 181.68332f, 70.85777f, -810.2359f, 179.37291f, 74.40309f, 3.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.711f, 180.37247f, 70.90308f, -812.6513f, 178.4246f, 74.909195f, 3.5f, false, true, 0))
					{
						__LIB_0__::func_222(&uLocal_1526, 0, Global_96938.f_9[0], "MICHAEL", 0, 1);
						__LIB_0__::func_222(&uLocal_1526, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1517))
						{
							iLocal_1518 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1520, Local_1521, 2);
							if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
							{
								if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -808.416f, 177.4646f, 71.6071f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1518, "missheist_jewelleadinoutjh_endscene", "action_mic", 8f, -8f, 4, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1518, 0.7f);
									__LIB_38__::func_445();
									iLocal_1519++;
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (__LIB_15__::func_942() == 1)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1518))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1518) > 0.8f)
					{
						iLocal_1519++;
					}
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				iLocal_1519++;
			}
			break;
		case 2:
			if (__LIB_15__::func_942() == 0)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (__LIB_15__::func_942() == 1)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			break;
	}
}

int func_204()//Position - 0xCD88
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_205()//Position - 0xCDD1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1519 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_206()//Position - 0xCE0D
{
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_38__::func_480(&(Global_96938.f_9[1]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_424();
}

void func_208()//Position - 0xCE54
{
	__LIB_38__::func_476(&(Global_96938.f_9[0]));
	__LIB_38__::func_476(&(Global_96938.f_9[1]));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_424();
}

void func_210()//Position - 0xCF68
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	__LIB_17__::func_699(1, 1, 1);
	__LIB_17__::func_699(1, 0, 1);
	__LIB_17__::func_699(1, 7, 1);
	__LIB_17__::func_761(53, 0);
	if (__LIB_15__::func_942() == 2)
	{
	}
	else if (__LIB_15__::func_942() == 0)
	{
		func_217(&(Global_96938.f_9[1]), 2, 1975.3729f, 3818.3162f, 32.4363f, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 23, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 6, 10, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 8, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 11, 0, 0, 0);
		__LIB_16__::func_309(Global_96938.f_9[1], Global_96938.f_42);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938.f_9[1], true);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_96938.f_9[1], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
	}
	else if (__LIB_15__::func_942() == 1)
	{
		func_217(&(Global_96938.f_9[0]), 0, Local_1520, 0, 1, 1, 0);
		__LIB_16__::func_309(Global_96938.f_9[0], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
		func_217(&(Global_96938.f_9[1]), 2, 1975.3729f, 3818.3162f, 32.4363f, 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 23, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 5, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 6, 10, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 7, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 8, 14, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 11, 0, 0, 0);
		__LIB_16__::func_309(Global_96938.f_9[1], Global_96938.f_42);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938.f_9[1], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_1520, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		iLocal_1517 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1520, Local_1521, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1517, "missheist_jewelleadinoutjh_endscene", "loop_mic", 1000f, -8f, 4, 16, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1517, true);
	}
	__LIB_38__::func_446(62, "TREVOR_1_INT", 8183, 8180, 8176);
	if (__LIB_15__::func_942() == 2)
	{
		__LIB_42__::func_593(62, "Trevor", PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_15__::func_942() == 0)
	{
		__LIB_42__::func_593(62, "Michael", PLAYER::PLAYER_PED_ID());
	}
	if (__LIB_15__::func_942() == 1)
	{
		__LIB_42__::func_593(62, "Michael", Global_96938.f_9[0]);
		__LIB_42__::func_593(62, "Franklin", PLAYER::PLAYER_PED_ID());
	}
}

int func_217(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xD64C
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
			__LIB_17__::func_235(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_540(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_219(*iParam0, bParam6);
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

int func_219(int iParam0, bool bParam1)//Position - 0xD764
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_309(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_309(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_289(iParam0, 3, 169))
					{
						func_503(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_289(iParam0, 12, 6))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 11))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 10))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 50))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 14, 59))
			{
				func_503(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_289(iParam0, 8, 22))
			{
				func_503(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_289(iParam0, 12, 14))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_289(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 4))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 3))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 14, 82))
			{
				func_503(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_289(iParam0, 8, 76))
			{
				func_503(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_289(iParam0, 12, 1))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_289(iParam0, 12, 12))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 15))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_289(iParam0, 3, 71))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_289(iParam0, 12, 7))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 12, 6))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_289(iParam0, 14, 88))
			{
				func_503(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_289(iParam0, 8, 17))
			{
				func_503(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_289(iParam0, 12, 11))
			{
				func_503(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_289(int iParam0, int iParam1, int iParam2)//Position - 0x24D90
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
				if (!func_289(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_289(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_289(iParam0, 14, iVar4))
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
			if (!func_289(iParam0, 14, uVar8[iVar7]))
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

void func_309(int iParam0, int iParam1)//Position - 0x29358
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
				iVar1 = func_502(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_320(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_233(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_650();
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
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_320(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2A336
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
			if (func_500(iParam0, iVar1, &iVar2, 0))
			{
				func_503(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_498(iParam0, iVar1, &iVar2))
			{
				func_503(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_495(iParam0);
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
			func_326(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_326(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_326(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2AAD2
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
			func_453(iVar5, iParam1, iParam2, 1);
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
						func_453(iVar5, 10, 0, 1);
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
									func_453(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_326(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_453(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_450(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_326(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_444(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_453(iVar5, 14, uVar18[iVar1], 1);
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
							func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_453(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_326(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_435(iParam0);
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
						func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_326(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_434(iVar5, iVar24, iVar23, iVar25);
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
							func_326(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_326(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_326(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_326(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_326(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_326(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_326(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_444(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, func_450(iParam0, 8, -1), iParam2, func_450(iParam0, 4, -1));
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
				func_369(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_434(iVar5, iParam2, iVar44, iVar45);
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
			func_444(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_326(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_326(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_434(iVar5, iVar58, iVar57, iParam2);
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
						func_326(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_434(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_326(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_346(iParam0, 9, iVar63))
						{
							func_326(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_326(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_326(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_326(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_450(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_450(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_326(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_326(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_326(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_326(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_326(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_326(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_326(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_326(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_326(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_326(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_435(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_326(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_326(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_327(iParam0, &uVar4))
		{
			func_326(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_326(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_326(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_326(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_450(iParam0, 3, -1), iVar10);
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
				func_326(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_327(int iParam0, var uParam1)//Position - 0x2C980
{
	int iVar0;
	int iVar1;
	*uParam1 = func_450(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_346(iParam0, iVar1, iVar0))
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

int func_346(int iParam0, int iParam1, int iParam2)//Position - 0x30C52
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
				if (!func_346(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_346(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_346(iParam0, 14, iVar6))
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
			if (!func_346(iParam0, 14, uVar11[iVar10]))
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
						return func_346(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_346(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_369(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x37967
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
	func_370(iParam0, bParam3, 0, -1);
}

void func_370(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x379B4
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
		bVar3 = func_414(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_405(iParam0, iParam3);
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

int func_405(int iParam0, int iParam1)//Position - 0x46BA3
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
				iVar3 = func_450(iParam0, 11, -1);
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
				iVar5 = func_450(iParam0, 11, -1);
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

int func_414(int iParam0, bool bParam1)//Position - 0x47001
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_450(iParam0, 11, -1), 0);
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
						iVar3 = func_450(iParam0, 11, -1);
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
						iVar5 = func_450(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_450(iParam0, 11, -1), 0);
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
						iVar8 = func_450(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_450(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_450(iParam0, 11, -1), 0);
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
						iVar12 = func_450(iParam0, 8, -1);
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

int func_434(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4FE8F
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
					iVar0 = func_434(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_434(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_435(int iParam0)//Position - 0x511CD
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
		if (!func_440(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_440(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_440(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x51B97
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_450(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_444(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x54580
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_495(iParam0))
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

int func_450(int iParam0, int iParam1, int iParam2)//Position - 0x5482F
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
				if (func_346(iParam0, iParam1, iVar0))
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
				if (func_346(iParam0, iParam1, iVar1))
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

void func_453(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x549AE
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
							func_453(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_453(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_453(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_453(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_453(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_453(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_453(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_453(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_453(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_453(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_495(int iParam0)//Position - 0x6D666
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
				iVar1 = func_450(iParam0, 11, -1);
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
				iVar3 = func_450(iParam0, 11, -1);
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

int func_498(int iParam0, int iParam1, int iParam2)//Position - 0x6D9D8
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_289(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_500(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6DA9F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_289(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_502(int iParam0, int iParam1, int iParam2)//Position - 0x6DD5F
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
				if (func_289(iParam0, iParam1, iVar0))
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
				if (func_289(iParam0, iParam1, iVar1))
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

int func_503(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6DE00
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
										func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_502(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_500(iParam0, iVar10, &iVar4, 1))
							{
								func_503(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_503(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_503(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_503(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_503(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_503(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_503(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_503(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_500(iParam0, iVar10, &iVar4, 0))
		{
			func_503(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_498(iParam0, iVar10, &iVar4))
		{
			func_503(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_540(int iParam0)//Position - 0x724E4
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
		func_320(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_502(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_541(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_502(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_502(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_541(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_541(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_502(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_320(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_541(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x72741
{
	__LIB_15__::func_948(iParam0, iParam1, iParam2, bParam3);
	func_544(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_950(iParam0, iParam1, iParam2, 0);
	}
}

int func_544(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x728FC
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
								func_544(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_544(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
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
								func_544(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_544(iParam0, 14, iVar5, 1, 0);
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
								func_544(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_544(iParam0, 14, 17, 1, 0);
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

int func_549()//Position - 0x72F16
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero")) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_jewelleadinoutjh_endscene")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_tumbler_01_empty")))
	{
		return 1;
	}
	return 0;
}

void func_550()//Position - 0x72F58
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tumbler_01_empty"));
	STREAMING::REMOVE_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
}

void func_551()//Position - 0x72F83
{
	STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
	STREAMING::REQUEST_MODEL(joaat("Player_Two"));
	STREAMING::REQUEST_MODEL(joaat("prop_tumbler_01_empty"));
	STREAMING::REQUEST_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
}

void func_552()//Position - 0x72FAE
{
	iLocal_1519 = 0;
}

void func_553()//Position - 0x72FBA
{
	if (iLocal_1458)
	{
		if (!iLocal_1459)
		{
			if (Global_97338 == 1)
			{
				iLocal_1459 = 1;
			}
			else if (Global_97338 <= 3)
			{
				switch (__LIB_13__::func_121("AM_H_JHP1B_REAP" /* GXT: Another LSPD tactical team is at ~BLIP_HEIST_PREP~ */))
				{
					case 2:
						__LIB_0__::func_697("AM_H_JHP1B_REAP" /* GXT: Another LSPD tactical team is at ~BLIP_HEIST_PREP~ */, 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1459 = 1;
						break;
				}
			}
			else
			{
				iLocal_1459 = 1;
			}
		}
		if (!__LIB_38__::func_473(&Local_1457) || !BitTest(Global_91229[89 /*34*/].f_11, __LIB_15__::func_942()))
		{
			Global_97337 = -15;
			StringCopy(&Global_97321, "", 64);
			iLocal_1458 = 0;
		}
	}
}

void func_559()//Position - 0x73212
{
	int iVar0;
	if (iLocal_1458)
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1456678445))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(-1456678445, joaat("prop_com_gar_door_01"), 452.2993f, -1001.1797f, 26.7593f, true, true, false);
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(2103312950))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(2103312950, joaat("prop_com_gar_door_01"), 447.48f, -1001.1707f, 26.7126f, true, true, false);
		}
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(2103312950) != 1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(2103312950, 1, true, true);
		}
		if (__LIB_16__::func_900(Global_96938.f_9[0]) && __LIB_16__::func_900(Global_96938[0]))
		{
			__LIB_38__::func_473(&Local_1457);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_96938.f_9[0], 449.77216f, -998.62335f, 23.115438f, 449.76837f, -993.62555f, 27.647564f, 11.75f, false, true, 0))
			{
				if (!__LIB_0__::func_798(Global_96938.f_9[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD"), 1))
				{
					if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1456678445)) < 0.05f)
					{
						Global_97337 = -15;
						StringCopy(&Global_97321, "", 64);
						iLocal_1458 = 0;
					}
					else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1456678445) == 0)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1456678445, 1, true, true);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_96938[0], 446.32425f, -993.33923f, 24.19417f, 445.69083f, -1029.0763f, 30.285543f, 26.4375f, false, true, 0))
			{
				if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1456678445)) > 0.75f)
				{
					if (!__LIB_0__::func_798(Global_96938.f_9[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD"), 1))
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Global_96938.f_9[0], Global_96938[0], 452.2002f, -997.1097f, 24.7618f, 5f, 0, joaat("fbi2"), 262275, 0.5f, 2f);
					}
				}
				else
				{
					if (__LIB_0__::func_798(Global_96938.f_9[0], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING"), 1))
					{
						if (!__LIB_0__::func_798(Global_96938.f_9[0], joaat("SCRIPT_TASK_VEHICLE_MISSION"), 1))
						{
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(Global_96938.f_9[0], Global_96938[0], 452.3164f, -1004.6366f, 25.9034f, 4, 2f, 262275, 0.5f, 1f, false);
						}
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1456678445) != 0)
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1456678445, 0, true, true);
					}
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Global_96938[0], true);
				VEHICLE::SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Global_96938[0], true);
				if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938[0]))
				{
					ENTITY::RESET_ENTITY_ALPHA(Global_96938[0]);
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Global_96938[0]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[0], Global_96938[0], &Global_97321, 786603, Local_1457.f_3, 24, -1, 15f, false, 2f);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938.f_9[iVar0]))
					{
						ENTITY::RESET_ENTITY_ALPHA(Global_96938.f_9[iVar0]);
					}
				}
			}
			iVar0++;
		}
	}
}

int func_562()//Position - 0x735C0
{
	float fVar0;
	float fVar1;
	if (iLocal_1458)
	{
		return 0;
	}
	else if (BitTest(Global_91229[89 /*34*/].f_11, __LIB_15__::func_942()))
	{
		if (Global_97337 == -15)
		{
			Global_97337 = __LIB_11__::func_762();
			__LIB_13__::func_827(&Global_97337, 0, 0, 1, 0, 0, 0);
		}
		if (__LIB_14__::func_793(Global_97337) || Global_97338 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97321))
			{
				switch (Global_96937)
				{
					case 0:
					case 1:
						Global_96938.f_358 = 0;
						StringCopy(&Global_97321, "JHP1bRoute2", 64);
						break;
					case 2:
					case 3:
						Global_96938.f_358 = 1;
						StringCopy(&Global_97321, "JHP1b", 64);
						break;
					default:
						fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1455, true);
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1456, true);
						if (fVar0 >= fVar1)
						{
							Global_96938.f_358 = 0;
							StringCopy(&Global_97321, "JHP1bRoute2", 64);
						}
						else if (fVar1 >= fVar0)
						{
							Global_96938.f_358 = 1;
							StringCopy(&Global_97321, "JHP1b", 64);
						}
						break;
				}
				Global_96937 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_97321);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97321))
				{
					Local_1457 = { __LIB_38__::func_438(220, &Global_97321, 0.2f, 0) };
					iLocal_1458 = 1;
					iLocal_1459 = 0;
					iLocal_1460 = 0;
					Global_97338++;
					return 0;
				}
			}
		}
		else if (!iLocal_1460 && !iLocal_1458)
		{
			if (Global_97338 <= 2)
			{
				switch (__LIB_13__::func_121("AM_H_JHP1B_MISS" /* GXT: The LSPD tactical team are no longer available to intercept. Another team will be en route in a few hours. */))
				{
					case 2:
						__LIB_0__::func_697("AM_H_JHP1B_MISS" /* GXT: The LSPD tactical team are no longer available to intercept. Another team will be en route in a few hours. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1460 = 1;
						break;
				}
			}
			else
			{
				iLocal_1460 = 1;
			}
		}
	}
	else
	{
		Global_97337 = -15;
		iLocal_1458 = 0;
		StringCopy(&Global_97321, "", 64);
	}
	return 1;
}

int func_566()//Position - 0x73862
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	int iVar3;
	Var0 = { __LIB_38__::func_415(220, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && BitTest(Global_91229[89 /*34*/].f_11, __LIB_15__::func_942()))
	{
		fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar2 < (110f * 110f))
			{
				bVar1 = true;
			}
		}
		else if (fVar2 < (60f * 60f))
		{
			bVar1 = true;
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar3]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar3], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[iVar3], PLAYER::PLAYER_PED_ID(), true))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar3]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar3]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar3], PLAYER::PLAYER_PED_ID(), true))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			iVar3++;
		}
	}
	if (bVar1)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		__LIB_0__::func_639(Global_96938[0], 0, 0);
		Global_97337 = -15;
		iLocal_1458 = 0;
		return 1;
	}
	return 0;
}

void func_569()//Position - 0x73A5F
{
	int iVar0;
	if (__LIB_15__::func_276(220))
	{
		Local_1457 = { __LIB_38__::func_438(220, &Global_97321, 0.2f, -1) };
	}
	__LIB_38__::func_418(&(Global_96938[0]));
	__LIB_38__::func_418(&(Global_96938[1]));
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		__LIB_38__::func_480(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}

void func_570()//Position - 0x73ACD
{
	var uVar0;
	char* sVar1;
	int iVar2;
	__LIB_38__::func_401(&(Global_96938[0]));
	__LIB_38__::func_401(&(Global_96938[1]));
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[iVar2], false))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938.f_9[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}

void func_571()//Position - 0x73B6A
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	Global_96938.f_358 = 1;
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&Global_97321, &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97321, Local_1457.f_3, &Var1);
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97321, __LIB_0__::func_340((Local_1457.f_3 - 1), 0, iVar0), &Var2);
	fVar3 = __LIB_0__::func_932(Var2, Var1);
	MISC::CLEAR_AREA(Var1, 60f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), Var1, fVar3, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fbi2"));
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(Global_96938[0], 15f);
	ENTITY::SET_ENTITY_ALPHA(Global_96938[0], 100, false);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Global_96938[0], false);
	func_573(0, Global_96938[0], 0);
	PED::SET_PED_ACCURACY(Global_96938.f_9[0], 7);
	func_573(1, Global_96938[0], 0);
	PED::SET_PED_ACCURACY(Global_96938.f_9[1], 7);
	func_573(2, Global_96938[0], 0);
	PED::SET_PED_ACCURACY(Global_96938.f_9[2], 7);
	func_573(3, Global_96938[0], 0);
	PED::SET_PED_ACCURACY(Global_96938.f_9[3], 7);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[0], Global_96938[0], &Global_97321, 786469, Local_1457.f_3, 24, -1, 25f, false, 2f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938[0], 250);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[0], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
	VEHICLE::SET_VEHICLE_STRONG(Global_96938[0], true);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[0], ENTITY::GET_ENTITY_HEALTH(Global_96938[0]) * 3, 0);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_96938[0], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_96938[0]) * 3f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Global_96938[0], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_96938[0]) * 3f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_SIREN(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_CAN_BREAK(Global_96938[0], false);
	VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Global_96938[0], 5, false);
	Local_1457 = { __LIB_38__::func_439(220, Global_96938[0]) };
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_ammo03a"), Global_32338[220 /*23*/][0 /*3*/], true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938[0], 0, 0f, -1.77f, 0f, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
}

void func_573(int iParam0, int iParam1, bool bParam2)//Position - 0x73E4B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		iVar1 = joaat("S_M_Y_Cop_01");
		iVar2 = joaat("WEAPON_PISTOL");
	}
	else
	{
		iVar1 = joaat("S_M_Y_Swat_01");
		iVar2 = joaat("WEAPON_SMG");
	}
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 2;
	}
	Global_96938.f_9[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 6, iVar1, iVar0, true, true);
	PED::SET_PED_AS_ENEMY(Global_96938.f_9[iParam0], true);
	PED::SET_PED_TO_LOAD_COVER(Global_96938.f_9[iParam0], true);
	WEAPON::GIVE_WEAPON_TO_PED(Global_96938.f_9[iParam0], iVar2, -1, true, true);
	PED::SET_PED_MONEY(Global_96938.f_9[iParam0], 0);
	PED::SET_PED_CAN_PEEK_IN_COVER(Global_96938.f_9[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[iParam0], 250);
	PED::SET_PED_ALERTNESS(Global_96938.f_9[iParam0], 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[iParam0], true, false);
	PED::SET_PED_COMBAT_ABILITY(Global_96938.f_9[iParam0], 2);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[iParam0], 184, true);
	if (!bParam2)
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[iParam0], 10, 0, 0, 0);
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[iParam0], true, 1);
	AUDIO::STOP_PED_SPEAKING(Global_96938.f_9[iParam0], true);
	PED::SET_PED_AS_COP(Global_96938.f_9[iParam0], true);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[iParam0], 330, true);
	ENTITY::SET_ENTITY_ALPHA(Global_96938.f_9[iParam0], 100, false);
	PED::SET_PED_ARMOUR(Global_96938.f_9[iParam0], 25);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[iParam0], joaat("SECURITY_GUARD"));
}

int func_576()//Position - 0x74025
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("fbi2")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Swat_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_97321)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97321)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_box_ammo03a")))
	{
		return 1;
	}
	return 0;
}

void func_577()//Position - 0x7407F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fbi2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Swat_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_box_ammo03a"));
}

void func_578()//Position - 0x740A2
{
	STREAMING::REQUEST_MODEL(joaat("fbi2"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Swat_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_box_ammo03a"));
	HUD::REQUEST_ADDITIONAL_TEXT("JHP1B", 0);
}

void func_579()//Position - 0x740CF
{
	struct<5> Var0;
	StringCopy(&Global_97321, "", 64);
	Global_97338 = 0;
	Global_97337 = -15;
	Var0 = 263;
	Var0.f_2 = 1065353216;
	Local_1457 = { Var0 };
	iLocal_1458 = 0;
	iLocal_1459 = 0;
	iLocal_1460 = 0;
}

void func_580()//Position - 0x74114
{
	if (iLocal_1452)
	{
		if (!iLocal_1453)
		{
			if (Global_97320 == 1)
			{
				iLocal_1453 = 1;
			}
			else if (Global_97320 <= 3)
			{
				switch (__LIB_13__::func_121("AM_H_JHP2A_REAP" /* GXT: A courier is delivering a BZ gas shipment at ~BLIP_HEIST_PREP~ */))
				{
					case 2:
						__LIB_0__::func_697("AM_H_JHP2A_REAP" /* GXT: A courier is delivering a BZ gas shipment at ~BLIP_HEIST_PREP~ */, 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1453 = 1;
						break;
				}
			}
			else
			{
				iLocal_1453 = 1;
			}
		}
		if (!__LIB_38__::func_473(&Local_1451) || !BitTest(Global_91229[88 /*34*/].f_11, __LIB_15__::func_942()))
		{
			Global_97319 = -15;
			iLocal_1452 = 0;
			StringCopy(&Global_97303, "", 64);
		}
	}
}

void func_581()//Position - 0x741BE
{
	if (iLocal_1452)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_96938[0]))
			{
				ENTITY::RESET_ENTITY_ALPHA(Global_96938[0]);
			}
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
				if (!__LIB_38__::func_473(&Local_1451))
				{
					Global_97319 = -15;
					iLocal_1452 = 0;
					StringCopy(&Global_97303, "", 64);
				}
			}
		}
	}
}

int func_582()//Position - 0x7422D
{
	struct<3> Var0;
	if (Global_96937 != -1)
	{
		func_593();
	}
	if (iLocal_1452)
	{
		return 0;
	}
	else if (BitTest(Global_91229[88 /*34*/].f_11, __LIB_15__::func_942()))
	{
		if (Global_97319 == -15)
		{
			Global_97319 = __LIB_11__::func_762();
			__LIB_13__::func_827(&Global_97319, 0, 24, 0, 0, 0, 0);
		}
		if (__LIB_14__::func_793(Global_97319) || Global_97320 == 0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_97303))
			{
				switch (Global_96937)
				{
					case 1:
						StringCopy(&Global_97303, sLocal_1449, 64);
						break;
					case 2:
						StringCopy(&Global_97303, sLocal_1450, 64);
						break;
					default:
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						if (SYSTEM::VDIST2(Var0, 1519.9181f, -1001.8893f, 56.8241f) > SYSTEM::VDIST2(Var0, 1388.3323f, 683.8095f, 78.2656f))
						{
							StringCopy(&Global_97303, sLocal_1450, 64);
						}
						else
						{
							StringCopy(&Global_97303, sLocal_1449, 64);
						}
						break;
				}
				Global_96937 = -1;
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&Global_97303);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97303))
				{
					Local_1451 = { __LIB_38__::func_438(219, &Global_97303, 0.2f, 0) };
					iLocal_1452 = 1;
					iLocal_1453 = 0;
					iLocal_1454 = 0;
					Global_97320++;
					return 0;
				}
			}
		}
		else if (!iLocal_1454 && !iLocal_1452)
		{
			if (Global_97320 <= 2)
			{
				switch (__LIB_13__::func_121("AM_H_JHP2A_MISS" /* GXT: The BZ gas is no longer available to steal. Another courier will be en route in a few hours. */))
				{
					case 2:
						__LIB_0__::func_697("AM_H_JHP2A_MISS" /* GXT: The BZ gas is no longer available to steal. Another courier will be en route in a few hours. */, 2, 0, 1000, 10000, 1, 0, 0, 0);
						break;
					case 1:
						StringCopy(&Global_112029, "", 16);
						iLocal_1454 = 1;
						break;
				}
			}
			else
			{
				iLocal_1454 = 1;
			}
		}
	}
	else
	{
		Global_97319 = -15;
		iLocal_1452 = 0;
		StringCopy(&Global_97303, "", 64);
	}
	return 1;
}

int func_584()//Position - 0x743F6
{
	struct<3> Var0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	Var0 = { __LIB_38__::func_415(219, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && BitTest(Global_91229[88 /*34*/].f_11, __LIB_15__::func_942()))
	{
		fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(Global_96938[0], true) };
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) && fVar2 < 12100f)
		{
			bVar1 = true;
		}
		else if (fVar2 < (50f * 50f) && MISC::ABSF(Var3.f_2) < 5f)
		{
			bVar1 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[0], PLAYER::PLAYER_PED_ID(), true))
		{
			bVar1 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
		{
			bVar1 = true;
		}
		else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_96938[0], true), 7f, true, true))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		__LIB_0__::func_639(Global_96938[0], 0, 0);
		Global_97319 = -15;
		iLocal_1452 = 0;
		return 1;
	}
	return 0;
}

void func_585()//Position - 0x7450A
{
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_38__::func_418(&(Global_96938[0]));
	if (__LIB_38__::func_384(219))
	{
		Local_1451 = { __LIB_38__::func_438(219, &Global_97303, 0.2f, -1) };
	}
}

void func_586()//Position - 0x74548
{
	__LIB_42__::func_587(&(Global_96938.f_9[0]), Global_96938[0]);
	__LIB_38__::func_401(&(Global_96938[0]));
}

void func_588()//Position - 0x74671
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	TASK::WAYPOINT_RECORDING_GET_COORD(&Global_97303, Local_1451.f_3, &Var0);
	Var1 = { __LIB_0__::func_79(Var0 - Global_32338[219 /*23*/][0 /*3*/]) * FtoV(TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(&Global_97303, Local_1451.f_3)) };
	fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D((Var0.f_0 - Global_32338[219 /*23*/][0 /*3*/]), (Var0.f_1 - Global_32338[219 /*23*/][0 /*3*/].f_1));
	MISC::CLEAR_AREA(Global_32338[219 /*23*/][0 /*3*/], 15f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("boxville3"), Global_32338[219 /*23*/][0 /*3*/], fVar2, true, true, false);
	ENTITY::SET_ENTITY_ALPHA(Global_96938[0], 100, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[0], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[0], true);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[0], 3000, 0);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[0], 0);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 1, false);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 2, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
	ENTITY::SET_ENTITY_VELOCITY(Global_96938[0], Var1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("boxville3"));
	Global_96938.f_9[0] = PED::CREATE_PED_INSIDE_VEHICLE(Global_96938[0], 26, joaat("S_M_M_Armoured_01"), -1, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Armoured_01"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[0], 116, false);
	PED::SET_PED_CONFIG_FLAG(Global_96938.f_9[0], 118, false);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[0], Global_96938[0], &Global_97303, 786475, Local_1451.f_3, 16, -1, 12f, false, 2f);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
	Local_1451 = { __LIB_38__::func_439(219, Global_96938[0]) };
}

int func_590()//Position - 0x74878
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("boxville3")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Armoured_01"))) && !MISC::IS_STRING_NULL_OR_EMPTY(&Global_97303)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Global_97303))
	{
		return 1;
	}
	return 0;
}

void func_591()//Position - 0x748BA
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("boxville3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Armoured_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_idol_case_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_yell_plastic_target"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Armoured_01"), false);
}

void func_592()//Position - 0x748FA
{
	STREAMING::REQUEST_MODEL(joaat("boxville3"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Armoured_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_idol_case_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_yell_plastic_target"));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("boxville3"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_M_Armoured_01"), true);
}

void func_593()//Position - 0x7493A
{
	struct<5> Var0;
	StringCopy(&Global_97303, "", 64);
	Global_97320 = 0;
	Global_97319 = -15;
	Var0 = 263;
	Var0.f_2 = 1065353216;
	Local_1451 = { Var0 };
	iLocal_1452 = 0;
	iLocal_1453 = 0;
	iLocal_1454 = 0;
}

int func_598()//Position - 0x749A1
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_15__::func_942() == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.95369f, -3119.8838f, 101.92259f, 94.25f, 239.75f, 108.0625f, false, true, 0) && !((__LIB_14__::func_552() && CAM::IS_SCREEN_FADED_OUT()) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()))
		{
			return 1;
		}
	}
	return 0;
}

void func_600()//Position - 0x74A51
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_38__::func_418(&(Global_96938[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_402(&(Global_96938.f_28[0]));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_38__::func_480(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
}

void func_601()//Position - 0x74AA4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_38__::func_401(&(Global_96938[iVar0]));
		iVar0++;
	}
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_38__::func_476(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
}

void func_602()//Position - 0x74AF7
{
	int iVar0;
	if (__LIB_15__::func_942() == 0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.42677f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.42677f) + Vector(2.375f, 22.75f, 19.4375f), 0);
		MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, true, false, false, false);
		Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 7);
		VEHICLE::SET_VEHICLE_ALARM(Global_96938[0], true);
		Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.1268f, -3078.9316f, 4.8963f, 283.8845f, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Global_96938[1], true, true, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Global_96938[1], 4, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[1], 0, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[1], 4, false, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_96938[1], 100f);
		Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.3313f, 4.8796f, 269.9255f, true, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[2], 2, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[2], 3, true, false);
		Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 126.2174f, -3089.3833f, 4.9199f, 275.4068f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[0], true, 1);
		ENTITY::SET_ENTITY_HEALTH(Global_96938.f_9[0], 150, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 0, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 10, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 0, 1, 0, false);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[0], 2f);
		TASK::TASK_PLAY_ANIM(Global_96938.f_9[0], "misslsdhsclipboard@base", "base", 1000f, -8f, -1, 1, 0f, false, false, false);
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Global_96938.f_9[0], 60309, 0f, 0f, 0f), true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 155.74f, -3098.89f, 5.93f, 0f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[2], true, 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 10, 0, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[2], 0, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[2], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[2], 155.74f, -3098.89f, 4.93f, 0.5f, 0);
		Global_96938.f_9[3] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 159.8f, -3085.96f, 6f, 0f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[3], true, 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[3], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[3], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[3], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[3], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[3], 10, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[3], 1, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[3], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[3], 159.8f, -3085.96f, 5f, 0.5f, 0);
		Global_96938.f_9[4] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 159.06f, -3085f, 6.01f, 0f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[4], true, 1);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 4, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 10, 0, 0, 0);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[4], 0, 0, 0, false);
		PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[4], 2f);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[4], 159.06f, -3085f, 5.01f, 0.5f, 0);
		if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
		{
			Global_96938[3] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
			Global_96938.f_9[5] = PED::CREATE_PED_INSIDE_VEHICLE(Global_96938[3], 26, joaat("S_M_M_Security_01"), -1, true, true);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Global_96938[3], &cLocal_1444, 786599, 0, 0, -1, -1f, false, 2f);
			TASK::TASK_LEAVE_VEHICLE(0, Global_96938[3], 0);
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[5], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			Global_96938.f_357 = 1;
		}
		else
		{
			Global_96938[3] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.0254f, 4.8228f, 88.4411f, true, true, false);
			VEHICLE::SET_VEHICLE_LIGHTS(Global_96938[3], 2);
			Global_96938.f_9[5] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 162.69f, -3115.67f, 4.95f, 3.5948f, true, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[5], true, 1);
			TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_96938.f_9[5], 162.69f, -3115.67f, 4.95f, 1f, 0);
			Global_96938.f_357 = 0;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[5], true);
		PED::SET_PED_ACCURACY(Global_96938.f_9[5], 5);
	}
}

int func_603()//Position - 0x751C5
{
	if (__LIB_15__::func_942() == 0)
	{
		if ((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("burrito2")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_PestCont_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("dilettante2"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_clipboard_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_1444)) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.94778f, -3092.5234f, 4.911984f, "po1_08_warehouseint1"))) && TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, false)) && TASK::DOES_SCENARIO_EXIST_IN_AREA(159.8f, -3085.96f, 5f, 0.5f, false)) && TASK::DOES_SCENARIO_EXIST_IN_AREA(159.06f, -3085f, 5.01f, 0.5f, false)) && (((CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21) && TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, false)) || (CLOCK::GET_CLOCK_HOURS() < 5 || (CLOCK::GET_CLOCK_HOURS() >= 21 && TASK::DOES_SCENARIO_EXIST_IN_AREA(162.67f, -3115.61f, 4.95f, 1f, false))))) && !((__LIB_14__::func_552() && CAM::IS_SCREEN_FADED_OUT()) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE()))
		{
			return 1;
		}
	}
	return 0;
}

void func_604()//Position - 0x7532F
{
	if (__LIB_15__::func_942() == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito2"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_PestCont_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dilettante2"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_clipboard_01"));
		STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@base");
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.94778f, -3092.5234f, 4.911984f, "po1_08_warehouseint1"));
	}
}

void func_605()//Position - 0x75391
{
	if (__LIB_15__::func_942() == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("burrito2"));
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_PestCont_01"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
		STREAMING::REQUEST_MODEL(joaat("dilettante2"));
		STREAMING::REQUEST_MODEL(joaat("p_amb_clipboard_01"));
		STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
		TASK::REQUEST_WAYPOINT_RECORDING(&cLocal_1444);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(154.94778f, -3092.5234f, 4.911984f, "po1_08_warehouseint1"));
	}
}

void func_607()//Position - 0x75402
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { 724.68976f, -984.86383f, 23.17047f };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar2 = SYSTEM::VDIST2(Var1, Var0);
	if (fVar2 < (60f * 60f))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 695.6506f, -985.3491f, 21.716518f, 755.72687f, -984.1184f, 28.208454f, 18.75f, false, true, 0))
				{
					Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
			}
		}
	}
}

void func_608()//Position - 0x754A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iLocal_1437 == 0)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SEW_MACHINE"))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("SEW_MACHINE"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("SEW_MACHINE", true);
				iLocal_1437 = 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			if (iLocal_1427 == 1)
			{
				if (iLocal_1436 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 0, 4);
					iLocal_1436 = 1;
				}
			}
			else if (iLocal_1436 == 1)
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_96938.f_9[0]);
				iLocal_1436 = 0;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 718.617f, -964.8593f, 29.3956f, true) < 25f)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 720.1095f, -974.87976f, 23.414156f, 716.2106f, -974.83203f, 25.664173f, 1f, false, true, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 718.617f, -964.8593f, 29.3956f, true) < 9f)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 736.0319f, -951.9467f, 29.36732f, 703.66534f, -951.8903f, 34.11732f, 12f, false, true, 0))
			{
				iLocal_1427 = 1;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.391f, -976.4401f, 22.644867f, 721.80536f, -976.48944f, 26.2f, 1.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 736.0319f, -951.9467f, 29.36732f, 703.66534f, -951.8903f, 34.11732f, 12f, false, true, 0))
		{
			iLocal_1427 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 695.6506f, -985.3491f, 21.716518f, 755.72687f, -984.1184f, 28.208454f, 18.75f, false, true, 0))
			{
				Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_1429 == 0)
		{
			if (iLocal_1434 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.5f, -964.7f, 29.4f, 4f, 4f, 4f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 719.3163f, -964.71735f, 28.64561f, 715.99384f, -964.719f, 31.645613f, 2.75f, false, true, 0))
					{
						iLocal_1429 = 1;
					}
				}
			}
		}
		if (iLocal_1429 == 1)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), "bb_jew_7", 3, 0, -1);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0.5f, true, -1, 2000, 2000, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, -1, 2000, 2000, 0);
				}
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				__LIB_38__::func_445();
			}
		}
		if (iLocal_1434 == 1)
		{
			if (iLocal_1427 == 1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (Global_96938.f_357 == 1)
				{
					if (iLocal_1431 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
							{
								if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false))
								{
									iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false, false, true);
									if (iVar0 != 0)
									{
										if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
										{
											iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "Lester_Leadin_Action", 8f, -8f, 5, 0, 1000f, 0);
											ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), iLocal_1439, "ss_door02_leadin_action", "MISSHEIST_JEWELLEADINOUT", 8f, -8f, 0, 1000f);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1439, false);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1439, true);
											PED::SET_FORCE_FOOTSTEP_UPDATE(Global_96938.f_9[0], true);
											iLocal_1440 = MISC::GET_GAME_TIMER();
											iLocal_1426 = 1;
											iLocal_1431 = 1;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_1432 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false))
							{
								iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false, false, true);
								if (iVar1 != 0)
								{
									if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar1))
									{
										iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "Lester_Leadin_Action", 8f, -8f, 5, 0, 1000f, 0);
										ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), iLocal_1439, "ss_door02_leadin_action", "MISSHEIST_JEWELLEADINOUT", 8f, -8f, 0, 1000f);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1439, false);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1439, true);
										PED::SET_FORCE_FOOTSTEP_UPDATE(Global_96938.f_9[0], true);
										iLocal_1440 = MISC::GET_GAME_TIMER();
										iLocal_1426 = 1;
										iLocal_1432 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_1432 == 1 || iLocal_1431 == 1)
			{
				if (iLocal_1428 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 1) < 9f)
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_17__::func_240(&(Global_96938.f_44), "JHS1AUD", "JHS1_LI_1", 7, 0, 0, 0))
									{
										iLocal_1428 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_1433 == 0)
			{
				if (iLocal_1426 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false))
							{
								iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(709.9806f, -963.5297f, 30.546f, 3f, joaat("v_ilev_ss_door02"), false, false, true);
								if (iVar2 != 0)
								{
									if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar2))
									{
										if (MISC::GET_GAME_TIMER() > iLocal_1440 + 3000)
										{
											if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1439))
											{
												if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1439) > 0.99f)
												{
													ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_9[0], -1000f, true);
													ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), -1000f);
													iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
													TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "lester_leadin_loop", 1000f, -8f, 5, 0, 1000f, 0);
													ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), iLocal_1439, "ss_door02_leadin_loop", "MISSHEIST_JEWELLEADINOUT", 1000f, -8f, 0, 1000f);
													PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1439, true);
													PED::SET_FORCE_FOOTSTEP_UPDATE(Global_96938.f_9[0], false);
													iLocal_1433 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					if (iLocal_1427 == 0)
					{
						if (__LIB_0__::func_75())
						{
							if (!__LIB_0__::func_568())
							{
								__LIB_0__::func_620(1);
							}
						}
					}
					else if (__LIB_0__::func_75())
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_1427 == 1)
			{
				if (iLocal_1425 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							if (!__LIB_0__::func_75() && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3))
							{
								if (iLocal_1430 == 0)
								{
									if (__LIB_17__::func_240(&(Global_96938.f_44), "JHS1AUD", "JHS1_PH34b", 7, 0, 0, 0))
									{
										if (iLocal_1438 == 0)
										{
											iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "lester_hanging_around_suitless_negative_a", 2f, -2f, 5, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1439, false);
											iLocal_1438 = 1;
										}
										SYSTEM::SETTIMERB(0);
										iLocal_1430 = 1;
									}
								}
								else
								{
									if ((SYSTEM::TIMERB() > 2000 && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 3))
									{
										iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 2f, -2f, 5, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1439, true);
									}
									if (SYSTEM::TIMERB() > 15000)
									{
										iLocal_1430 = 0;
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_hanging_around_suitless_negative_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 3))
					{
						PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0.55f);
					}
				}
			}
		}
		if (iLocal_1427 == 1 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 718.1f, -975.3f, 23.9f, true) < 3f)
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
			__LIB_1__::func_33(0);
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
			if (iVar3 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				}
			}
		}
	}
}

int func_625()//Position - 0x7669E
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					__LIB_0__::func_325();
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					__LIB_0__::func_325();
					return 1;
				}
			}
			iVar0++;
		}
		if (iLocal_1427 == 1)
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
			if (iVar1 != joaat("WEAPON_UNARMED"))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_325();
					return 1;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_1427 == 1)
		{
			if (iLocal_1435 == 0)
			{
				__LIB_0__::func_429();
				if (__LIB_17__::func_240(&(Global_96938.f_44), "JHS1AUD", "JHS1_PH56", 7, 0, 0, 0))
				{
					iLocal_1441 = MISC::GET_GAME_TIMER();
					iLocal_1442 = MISC::GET_GAME_TIMER();
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					iLocal_1435 = 1;
				}
			}
			if (iLocal_1435 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1441 + 5000)
				{
					__LIB_0__::func_429();
					if (__LIB_17__::func_240(&(Global_96938.f_44), "JHS1AUD", "JHS1_PH56", 7, 0, 0, 0))
					{
						iLocal_1441 = MISC::GET_GAME_TIMER();
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
			}
			if (iLocal_1435 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_1442 + 10000)
				{
					__LIB_0__::func_325();
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_629()//Position - 0x76839
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_1434 == 1)
		{
			if (iLocal_1429 == 1)
			{
				if (iLocal_1426 == 1)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 710.6041f, -965.1575f, 28.89533f, 710.62823f, -963.3939f, 31.314669f, 2f, false, true, 0))
					{
						HUD::CLEAR_PRINTS();
						__LIB_0__::func_429();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(12));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
						STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
						PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Global_96938.f_9[0], false);
						return 1;
					}
				}
			}
		}
		else
		{
			if (iLocal_1425 == 0)
			{
				if (iLocal_1427 == 1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
					{
						if (!__LIB_0__::func_1("JH1_SUIT"))
						{
							__LIB_0__::func_190("JH1_SUIT");
						}
					}
					__LIB_38__::func_391(18, 1);
					__LIB_38__::func_392(18, 1);
					__LIB_1__::func_714(18);
					__LIB_14__::func_654(&(Global_96938.f_44), "JHS1AUD", "JHS1_PH34", 8, 0, 0);
					iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "lester_1st_suitless_entrance_negative_a", 8f, -8f, 5, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1439, false);
					iLocal_1425 = 1;
					Global_96938.f_357 = 1;
				}
			}
			return 0;
		}
	}
	return 0;
}

void func_641()//Position - 0x76F94
{
	__LIB_38__::func_402(&(Global_96938.f_28[0]));
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_0__::func_221(&(Global_96938.f_44), 1);
	HUD::CLEAR_HELP(true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1443, false);
	__LIB_0__::func_429();
	__LIB_38__::func_424();
}

void func_643()//Position - 0x76FFD
{
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	__LIB_38__::func_501(&(Global_96938.f_9[0]));
	__LIB_0__::func_221(&(Global_96938.f_44), 1);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_424();
}

void func_645()//Position - 0x770DB
{
	MISC::CLEAR_AREA(718.617f, -964.8593f, 29.3956f, 15f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	iLocal_1443 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_38__::func_435(Global_96938.f_9[0]);
		ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[0], 120.4053f);
		__LIB_16__::func_309(Global_96938.f_9[0], Global_96938.f_42);
		__LIB_0__::func_222(&(Global_96938.f_44), 1, Global_96938.f_9[0], "LESTER", 1, 1);
		__LIB_0__::func_222(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 1393.0402f, -2069.2317f, 51.0114f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	iLocal_1439 = PED::CREATE_SYNCHRONIZED_SCENE(716.06f, -965.837f, 29.396f, 0f, 0f, 0f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1439, "MISSHEIST_JEWELLEADINOUT", "lester_base_idle", 8f, -8f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1439, true);
	PED::SET_PED_KEEP_TASK(Global_96938.f_9[0], true);
	if (!Global_112433)
	{
		__LIB_33__::func_599(714.7288f, -976.24207f, 23.133692f, 721.3814f, -976.23914f, 27.194174f, 5.75f, 707.3029f, -980.5249f, 23.1296f, 43.7514f, 1, 0, 1, 0, 0);
	}
	if (__LIB_38__::func_395())
	{
		iLocal_1434 = 1;
	}
	else
	{
		iLocal_1434 = 0;
	}
	__LIB_38__::func_446(86, "JH_1_INT", 0, -1, -1);
	__LIB_38__::func_460(86, "Lester", 3, 0, 0);
	__LIB_38__::func_460(86, "Lester", 4, 1, 0);
	__LIB_38__::func_490(86, "Lester", 1, 0, 0);
}

int func_657()//Position - 0x77DE0
{
	struct<3> Var0[2];
	struct<3> Var1[1];
	__LIB_38__::func_436(&(Var0[0 /*3*/]), 3, 0, 0);
	__LIB_38__::func_436(&(Var0[1 /*3*/]), 4, 1, 0);
	__LIB_38__::func_436(&(Var1[0 /*3*/]), 1, 0, 0);
	if ((((!func_658(&(Global_96938.f_9[0]), 12, 718.617f, -964.8593f, 29.3956f, &Var0, &Var1) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWELLEADINOUT")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("bb_jew_7"))
	{
		return 0;
	}
	return 1;
}

int func_658(int* iParam0, bool bParam1, struct<3> Param2, var uParam3, var uParam4)//Position - 0x77E7D
{
	int iVar0;
	if (!__LIB_17__::func_717(bParam1))
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
		while (iVar0 < *uParam4)
		{
			if ((uParam4[iVar0 /*3*/])->f_1 != -1)
			{
				PED::SET_PED_PROP_INDEX(*iParam0, (*uParam4)[iVar0 /*3*/], (uParam4[iVar0 /*3*/])->f_1, (uParam4[iVar0 /*3*/])->f_2, false);
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

void func_664()//Position - 0x780AE
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	TASK::REMOVE_WAYPOINT_RECORDING("bb_jew_7");
	iLocal_1425 = 0;
	iLocal_1426 = 0;
	iLocal_1433 = 0;
	iLocal_1427 = 0;
	iLocal_1428 = 0;
	iLocal_1429 = 0;
	iLocal_1436 = 0;
}

void func_665()//Position - 0x78101
{
	STREAMING::REQUEST_MODEL(__LIB_0__::func_493(12));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWELLEADINOUT");
	HUD::REQUEST_ADDITIONAL_TEXT("JH1TRIG", 0);
	TASK::REQUEST_WAYPOINT_RECORDING("bb_jew_7");
}

void func_666()//Position - 0x78138
{
	iLocal_1429 = 0;
	iLocal_1425 = 0;
	iLocal_1426 = 0;
	iLocal_1433 = 0;
	iLocal_1427 = 0;
	iLocal_1428 = 0;
	iLocal_1430 = 0;
	iLocal_1431 = 0;
	iLocal_1432 = 0;
	iLocal_1435 = 0;
	iLocal_1436 = 0;
	iLocal_1437 = 0;
	iLocal_1438 = 0;
	iLocal_1441 = 0;
	iLocal_1442 = 0;
}

void func_668()//Position - 0x78184
{
	__LIB_17__::func_761(47, 4);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.200673f, -1443.8246f, 31.18375f, 4f, 5f, 1.75f, false, true, 0))
	{
		__LIB_16__::func_306(1, 0);
	}
}

int func_683()//Position - 0x78297
{
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -18.72549f, -1457.3954f, 29.4688f, -8.22405f, -1449.7322f, 30.2016f, false, false, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -14.031f, -1449.824f, 29.573f, -17.235f, -1409.843f, 28.314f, 40f, false, false, 0))
	{
		if (!BitTest(Global_96938.f_358, 1))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.192642f, -1446.6919f, 30.896154f, 7f, 7f, 7f, false, false, 0) || !BitTest(Global_96938.f_358, 2))
			{
				__LIB_38__::func_424();
				MISC::SET_BIT(&(Global_96938.f_358), 1);
				MISC::CLEAR_BIT(&(Global_96938.f_358), 2);
				MISC::CLEAR_BIT(&(Global_96938.f_358), 5);
			}
		}
		else
		{
			__LIB_38__::func_446(40, "FRA_0_INT", -1, 14, -1);
			func_684();
			MISC::SET_BIT(&(Global_96938.f_358), 3);
			MISC::CLEAR_BIT(&(Global_96938.f_358), 4);
		}
	}
	else if (!BitTest(Global_96938.f_358, 2))
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.192642f, -1446.6919f, 30.896154f, 7f, 7f, 7f, false, false, 0) || !BitTest(Global_96938.f_358, 1))
		{
			__LIB_38__::func_424();
			MISC::CLEAR_BIT(&(Global_96938.f_358), 1);
			MISC::SET_BIT(&(Global_96938.f_358), 2);
			MISC::CLEAR_BIT(&(Global_96938.f_358), 5);
		}
	}
	else
	{
		__LIB_38__::func_446(40, "FRA_0_INT", -1, 13, -1);
		func_684();
		MISC::CLEAR_BIT(&(Global_96938.f_358), 3);
		MISC::SET_BIT(&(Global_96938.f_358), 4);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.192642f, -1446.6919f, 30.896154f, 3f, 4.5f, 1.5f, false, true, 0) && (BitTest(Global_96938.f_358, 4) || BitTest(Global_96938.f_358, 3)))
		{
			__LIB_38__::func_445();
			return 1;
		}
	}
	return 0;
}

void func_684()//Position - 0x7849B
{
	int iVar0;
	if (!BitTest(Global_96938.f_358, 5))
	{
		__LIB_38__::func_460(40, "Lamar", 0, 0, 0);
		__LIB_38__::func_460(40, "Lamar", 1, 1, 0);
		__LIB_38__::func_460(40, "Lamar", 2, 2, 0);
		__LIB_38__::func_460(40, "Lamar", 3, 2, 1);
		__LIB_38__::func_460(40, "Lamar", 4, 4, 0);
		__LIB_38__::func_460(40, "Lamar", 5, 0, 0);
		__LIB_38__::func_460(40, "Lamar", 8, 0, 0);
		__LIB_38__::func_460(40, "Lamar", 9, 0, 0);
		__LIB_38__::func_460(40, "Lamar", 6, 1, 0);
		if (__LIB_28__::func_205())
		{
			iVar0 = __LIB_28__::func_204();
		}
		else
		{
			iVar0 = 4;
		}
		__LIB_38__::func_460(40, "Chop", 3, 0, iVar0);
		MISC::SET_BIT(&(Global_96938.f_358), 5);
	}
}

void func_689()//Position - 0x785A3
{
	Global_96938.f_358 = 0;
}

void func_694()//Position - 0x785D4
{
	if (iLocal_1468 == 0)
	{
		iLocal_1468 = INTERIOR::GET_INTERIOR_AT_COORDS(1273.4475f, -1715.7549f, 53.7715f);
	}
	if (iLocal_1469 == 0)
	{
		iLocal_1469 = INTERIOR::GET_INTERIOR_AT_COORDS(1274.3635f, -1708.2041f, 53.7715f);
	}
	if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_1468 || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_1469) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1274.4967f, -1720.7449f, 53.6807f, true) < 2.375f)
	{
		__LIB_0__::func_189();
		Global_8141 = 1;
	}
	else
	{
		Global_8141 = 0;
	}
}

void func_695()//Position - 0x7866F
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1274.4967f, -1720.7449f, 53.6807f, true) < 2.375f)
	{
		__LIB_0__::func_189();
		Global_8141 = 1;
	}
	else
	{
		Global_8141 = 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), true), 1274.45f, -1720.51f, 53.65f);
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 1274.4508f, -1720.5134f, 53.65498f, 1275.7821f, -1723.2019f, 56.267433f, 3.625f, false, true, 0))
			{
				if (fVar0 < fLocal_1464)
				{
					Var1 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), true) - Vector(53.65f, -1720.51f, 1274.45f)) };
					fVar2 = __LIB_0__::func_158(-ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)), Var1);
					fVar3 = __LIB_0__::func_158(-__LIB_0__::func_79(ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))), Var1);
					if (fVar2 > 0.1f && fVar3 > 0.85f)
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true), 1f, 1, false);
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 100, 0);
					}
				}
			}
		}
		fLocal_1464 = fVar0;
	}
	if (iLocal_1463 >= 0 && iLocal_1463 <= 2)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358))
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && __LIB_0__::func_645(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				__LIB_0__::func_429();
				PED::SET_SYNCHRONIZED_SCENE_RATE(Global_96938.f_358, 0f);
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358, 1f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(Global_96938.f_358, 1f);
				iLocal_1463 = 2;
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1466))
	{
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if ((CAM::DOES_CAM_EXIST(iLocal_1466) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358) >= 0.371f)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() == -1)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam");
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1467, "SET_TIME");
		if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() <= 12)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_HOURS());
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((CLOCK::GET_CLOCK_HOURS() - 12));
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(CLOCK::GET_CLOCK_MINUTES());
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (CLOCK::GET_CLOCK_HOURS() >= 0 && CLOCK::GET_CLOCK_HOURS() < 12)
		{
			__LIB_0__::func_610("LSH_TIMEAM" /* GXT: ~s~AM */);
		}
		else
		{
			__LIB_0__::func_610("LSH_TIMEPM" /* GXT: ~s~PM */);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_1467, 255, 255, 255, 255, 0);
	}
	else if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1274.6821f, -1720.7256f, 54.68081f, 1.75f, 2.3125f, 1f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_1463)
	{
		case 0:
			if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1275.344f, -1722.3481f, 53.65502f, 1274.4331f, -1720.4475f, 55.882668f, 3.1875f, false, true, 0))
				{
					ENTITY::CREATE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 2f, joaat("prop_cctv_cam_06a"), true);
					Global_96938.f_28[1] = OBJECT::CREATE_OBJECT(joaat("p_cctv_s"), 1276.5f, -1719.98f, 56.37f, true, true, false);
					Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1273.895f, -1720.816f, 53.66f, 0f, 0f, 27.36f, 2);
					iLocal_1466 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "MissLester1ALeadInOut", "lester_1_int_leadin_doorway_michael", 1273.895f, -1720.816f, 53.66f, 0f, 0f, 27.36f, 1000f, -8f, -1, 4104, 0f, 2, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[1], Global_96938.f_358, "lester_1_int_leadin_doorway_seccamprop", "MissLester1ALeadInOut", 1000f, -8f, 4, 1000f);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_1466, Global_96938.f_358, "lester_1_int_leadin_doorway_cam", "MissLester1ALeadInOut");
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_96938.f_358, true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), false, true, true, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1467, "SET_DETAILS");
					__LIB_0__::func_610("LSH_CAMDETAILS" /* GXT: ~s~CAM: 02 */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_1467, "SET_LOCATION");
					__LIB_0__::func_610("LSH_CAMLOCALE" /* GXT: ~s~FRONT DOOR */);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					__LIB_0__::func_189();
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					__LIB_33__::func_599(1278.1764f, -1729.5922f, 51.456005f, 1274.3373f, -1720.4734f, 56.967484f, 7.25f, 1283.7845f, -1728.9476f, 51.8119f, 115.1431f, 1, 1, 1, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(1275.42f, -1721.52f, 53.65f, 5f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(1275.42f, -1721.52f, 53.65f, 5f, 0);
					FIRE::STOP_FIRE_IN_RANGE(1274.49f, -1720.51f, 53.7f, 6.625f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(1274.49f, -1720.51f, 53.7f, 6.625f);
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					iLocal_1463++;
				}
			}
			break;
		case 1:
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			__LIB_0__::func_189();
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358) && PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358) >= 0.5f) && __LIB_16__::func_852())
			{
				if (__LIB_17__::func_240(&(Global_96938.f_44), "LS1AAUD", "LES1A_INTL1", 8, 0, 0, 0))
				{
					iLocal_1463++;
				}
			}
			break;
		case 2:
			__LIB_0__::func_189();
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (!Global_96938.f_357)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358))
				{
					fVar4 = (ENTITY::GET_ANIM_DURATION("MissLester1ALeadInOut", "lester_1_int_leadin_doorway_cam") * 1000f);
					fVar5 = PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358);
					fVar6 = (fVar5 * fVar4);
					if (fVar6 >= (fVar4 - 300f))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						Global_96938.f_357 = 1;
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358) || (PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358) == 1f && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADED_OUT())))
			{
				Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_LesterCrest"), 1275.3646f, -1710.7744f, 53.7715f, 333.7887f, true, true);
				Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1275.3646f, -1710.7744f, 53.7715f, true, true, false);
				__LIB_16__::func_309(Global_96938.f_9[0], Global_96938.f_42);
				PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
				Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], Global_96938.f_358, "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_loop_Lester", 1000f, -8f, 5, 0, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], Global_96938.f_358, "Lester_1_INT_LeadIn_loop_wChair", "MissLester1ALeadInOut", 1000f, -8f, 4, 1000f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_96938.f_358, true);
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
				if (!Global_97299)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(62.7384f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::FORCE_INSTANT_LEG_IK_SETUP(PLAYER::PLAYER_PED_ID());
					OBJECT::DELETE_OBJECT(&(Global_96938.f_28[1]));
					ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 2f, joaat("prop_cctv_cam_06a"), false);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_1466, false);
					iLocal_1461 = 0;
					Global_97299 = 1;
				}
				else
				{
					iLocal_1461 = 1;
				}
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", 1275.72f, -1719.97f, 54.97f, "LESTER1A_SOUNDS", false, 0, false);
				__LIB_0__::func_222(&(Global_96938.f_44), 8, Global_96938.f_9[0], "Lester", 0, 1);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", false, true);
				iLocal_1462 = MISC::GET_GAME_TIMER() + 750;
				iLocal_1463++;
			}
			break;
		case 3:
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (INTERIOR::IS_INTERIOR_SCENE())
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_ENTER_LESTERS_HOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("LESTER_1A_ENTER_LESTERS_HOUSE");
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1273.8013f, -1717.0015f, 53.771458f, 1272.2081f, -1713.6747f, 56.385838f, 6.75f, false, true, 0) && __LIB_16__::func_852())
				{
					if (__LIB_17__::func_240(&(Global_96938.f_44), "LS1AAUD", "LES1A_INTL2", 8, 0, 0, 0))
					{
						Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], Global_96938.f_358, "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_action_Lester", 1000f, -8f, 5, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], Global_96938.f_358, "Lester_1_INT_LeadIn_action_wChair", "MissLester1ALeadInOut", 1000f, -8f, 4, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_96938.f_358, true);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 4);
						__LIB_38__::func_445();
						__LIB_38__::func_446(44, "LESTER_1_INT", 0, -1, -1);
						__LIB_38__::func_490(44, "Lester", 1, 0, 0);
						iLocal_1463++;
					}
				}
				else if (!iLocal_1461)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_1462)
					{
						fVar7 = __LIB_0__::func_331((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_1462)) / 100f), 0f, 1f);
						fVar8 = __LIB_3__::func_569(0f, 0.05f, fVar7);
						if (fVar8 >= 0.05f)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, fVar8, true, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, true, true);
							iLocal_1461 = 1;
						}
						else
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, fVar8, true, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, true, true);
						}
					}
				}
				else if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) != 0)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, true, true);
				}
			}
			break;
		case 4:
			if (iLocal_1465 == -1)
			{
				iLocal_1465 = MISC::GET_GAME_TIMER();
			}
			fVar9 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-565026078);
			if (fVar9 != 0f && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) != 1)
			{
				fVar10 = __LIB_0__::func_331((IntToFloat((MISC::GET_GAME_TIMER() - iLocal_1465)) / 500f), 0f, 1f);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, __LIB_0__::func_504(0f, 1f, fVar10), true, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, true, true);
			}
			else
			{
				__LIB_17__::func_761(75, 1);
			}
			if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Global_96938.f_358) || PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_96938.f_358) == 1f) || !__LIB_0__::func_75()) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_1463++;
			}
			break;
	}
}

int func_703()//Position - 0x792B8
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		func_719();
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 0, true, true);
		Global_97299 = 0;
		Global_8141 = 0;
		return 1;
	}
	return 0;
}

int func_704()//Position - 0x79300
{
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_1463 > 4)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_ENTER_LESTERS_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("LESTER_1A_ENTER_LESTERS_HOUSE");
			}
			Global_97299 = 0;
			func_719();
			return 1;
		}
	}
	return 0;
}

void func_705()//Position - 0x7936F
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_38__::func_402(&(Global_96938.f_28[0]));
	__LIB_38__::func_402(&(Global_96938.f_28[1]));
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_424();
}

void func_706()//Position - 0x793CE
{
	var uVar0;
	char* sVar1;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	__LIB_38__::func_450(Global_96938.f_9[0]);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938.f_9[0], &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Global_96938.f_9[0], true))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Global_96938.f_9[0]))
						{
							ENTITY::DETACH_ENTITY(Global_96938.f_9[0], true, true);
						}
						ENTITY::SET_ENTITY_COLLISION(Global_96938.f_9[0], true, false);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(Global_96938.f_9[0]);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Global_96938.f_9[0], true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], false);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[0]));
			}
		}
	}
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	__LIB_38__::func_403(&(Global_96938.f_28[1]));
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_38__::func_424();
}

void func_707()//Position - 0x794ED
{
	PED::ADD_RELATIONSHIP_GROUP("TS_LES1A", &(Global_96938.f_42));
	__LIB_0__::func_222(&(Global_96938.f_44), 8, 0, "Lester", 0, 1);
	__LIB_0__::func_222(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	if (Global_97299)
	{
		iLocal_1463 = 2;
	}
	else
	{
		iLocal_1463 = 0;
	}
	__LIB_11__::func_816(6, 0);
}

int func_715()//Position - 0x7CBEB
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("IG_LesterCrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s"))) && STREAMING::HAS_MODEL_LOADED(joaat("p_cctv_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("MissLester1ALeadInOut")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false, -1)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1467))
	{
		return 1;
	}
	return 0;
}

void func_716()//Position - 0x7CC4A
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_LesterCrest"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cctv_s"));
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	STREAMING::REMOVE_ANIM_DICT("MissLester1ALeadInOut");
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	STREAMING::CLEAR_HD_AREA();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1467);
	if (__LIB_13__::func_102() != 44)
	{
		__LIB_10__::func_347(6, 1);
	}
}

void func_718()//Position - 0x7CCCC
{
	STREAMING::REQUEST_MODEL(joaat("IG_LesterCrest"));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_MODEL(joaat("p_cctv_s"));
	STREAMING::REQUEST_ANIM_DICT("MissLester1ALeadInOut");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false, -1);
	STREAMING::SET_HD_AREA(1274.42f, -1720.42f, 54.99f, 5f);
	iLocal_1467 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
}

void func_719()//Position - 0x7CD24
{
	int iVar0;
	iLocal_1461 = 0;
	iLocal_1463 = 0;
	fLocal_1464 = 999999f;
	iLocal_1465 = -1;
	iLocal_1462 = -1;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, 0f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, true, true);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_1466))
	{
		CAM::DESTROY_CAM(iLocal_1466, false);
	}
	ENTITY::REMOVE_MODEL_HIDE(1276.49f, -1720.06f, 56.47f, 0.5f, joaat("prop_cctv_cam_06a"), false);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", true, true);
}

void func_721()//Position - 0x7CDB3
{
	int iVar0;
	int iVar1;
	switch (__LIB_15__::func_942())
	{
		case 0:
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(1893421006, joaat("v_ilev_mm_doorw"), -809.281f, 177.855f, 76.89f, false, false, false);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1893421006, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 4, false, true);
			}
			if (!iLocal_1057)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -809.74243f, 177.31267f, 76.94073f, 0.5f, 0.5f, 1.2f, false, true, 0))
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_222(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
							if (__LIB_17__::func_240(&(Global_96938.f_44), "FAM3AUD", "FAM3_INTLID", 7, 0, 0, 0))
							{
								iLocal_1057 = 1;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
				{
					AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_2", false, -1);
					switch (iLocal_1056)
					{
						case 0:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -827.60443f, 186.85683f, 67.19885f, -817.85657f, 162.98712f, 75.10821f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -829.0895f, 166.36217f, 66.578064f, -818.6422f, 176.90288f, 75.02752f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -833.9898f, 178.3006f, 67.98793f, -822.4761f, 176.72778f, 75.278336f, 12.7f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -819.0621f, 189.45787f, 69.49169f, -817.6436f, 176.62231f, 75.227425f, 6f, false, true, 0))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach", -817.395f, 179.25f, 71.2f, 0f, 0f, -115f, 1000f, -4f, -1, 5130, 0f, 2, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
									TASK::SET_PED_PATH_AVOID_FIRE(Global_96938.f_9[0], false);
									ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[0], true, false);
									INTERIOR::CLEAR_ROOM_FOR_ENTITY(Global_96938.f_9[0]);
									if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAMILY3_2", false, -1))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FAMILY3_COACH_OUT_WINDOW_MASTER", Global_96938.f_9[0], 0, false, 0);
									}
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[1], 1);
									__LIB_38__::func_445();
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 2);
									}
									iLocal_1056++;
								}
							}
							break;
						case 1:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach", 3))
							{
								if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0]))
								{
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 2);
								}
								if (!iLocal_1057)
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach") > 0.25f)
									{
										if (__LIB_17__::func_240(&(Global_96938.f_44), "FAM3AUD", "FAM3_GROUND", 7, 0, 0, 0))
										{
											iLocal_1057 = 1;
										}
									}
								}
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "missfam3leadinoutfam_3_int", "_leadout_coach") >= 0.95f)
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -818.0023f, 165.63606f, 72.426025f, 8f, 4f, 4f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -818.0023f, 165.63606f, 72.426025f, 8f, 4f, 4f, false, true, 0))
									{
										iLocal_1055 = 0;
										TASK::TASK_PLAY_ANIM(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180", 1.5f, -4f, -1, 32778, 0f, false, false, false);
									}
									else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -831.5207f, 167.63303f, 66.51776f, -826.6659f, 178.93369f, 74.30521f, 8f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -833.46924f, 164.454f, 65.8009f, -831.25726f, 168.37843f, 72.68283f, 10f, false, true, 0))
									{
										iLocal_1055 = 1;
										TASK::TASK_PLAY_ANIM(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0", 1.5f, -4f, -1, 32778, 0f, false, false, false);
									}
									iLocal_1056++;
								}
							}
							break;
						case 2:
							switch (iLocal_1055)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_180") >= 0.525f)
										{
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -815.77f, 163.63f, 70.34f, 2f, 20000, 0.25f, 1, 40000f);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
											{
												if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Global_96938.f_9[0], Global_96938[1], -1, false, false))
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_96938[1], 20000, -1, 2f, 131072, 0);
												}
												else
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_96938[1], 20000, -1, 2f, 1, 0);
												}
											}
											else
											{
												TASK::TASK_SMART_FLEE_COORD(0, -815.77f, 163.63f, 70.34f, 100f, -1, false, false);
											}
											TASK::CLOSE_SEQUENCE_TASK(iVar0);
											TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[0], iVar0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											PED::FORCE_PED_MOTION_STATE(Global_96938.f_9[0], joaat("MotionState_Run"), false, 0, false);
											TASK::SET_PED_PATH_AVOID_FIRE(Global_96938.f_9[0], false);
											iLocal_1056++;
										}
									}
									break;
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "get_up@directional@movement@from_knees@panic", "get_up_0") >= 0.525f)
										{
											TASK::CLEAR_SEQUENCE_TASK(&iVar1);
											TASK::OPEN_SEQUENCE_TASK(&iVar1);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -831.35f, 165.95f, 68.27f, 2f, 20000, 0.25f, 1, 40000f);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
											{
												if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Global_96938.f_9[0], Global_96938[1], -1, false, false))
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_96938[1], 20000, -1, 2f, 131072, 0);
												}
												else
												{
													TASK::TASK_ENTER_VEHICLE(0, Global_96938[1], 20000, -1, 2f, 1, 0);
												}
											}
											else
											{
												TASK::TASK_SMART_FLEE_COORD(0, -831.35f, 165.95f, 68.27f, 100f, -1, false, false);
											}
											TASK::CLOSE_SEQUENCE_TASK(iVar1);
											TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[0], iVar1);
											TASK::CLEAR_SEQUENCE_TASK(&iVar1);
											PED::FORCE_PED_MOTION_STATE(Global_96938.f_9[0], joaat("MotionState_Run"), false, 0, false);
											TASK::SET_PED_PATH_AVOID_FIRE(Global_96938.f_9[0], false);
											iLocal_1056++;
										}
									}
									break;
							}
							break;
						}
					}
			}
			break;
	}
}

int func_723()//Position - 0x7D4D0
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	return 0;
}

int func_724()//Position - 0x7D4E5
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_415(182, __LIB_15__::func_942()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		switch (__LIB_15__::func_942())
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.5096f, 181.25679f, 70.5141f, -816.14404f, 175.07147f, 75.21168f, 6f, false, true, 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				if (fVar1 < (2.75f * 2.75f))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.3764f, 179.81993f, 71.12732f, -816.11584f, 176.53127f, 74.72732f, 3.5f, false, true, 0))
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, false, true);
						}
						if (iLocal_1057)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_638();
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
							{
								TASK::CLEAR_PED_TASKS(Global_96938.f_9[0]);
							}
						}
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						return 1;
					}
				}
				break;
			case 1:
				if (fVar1 < (2.75f * 2.75f))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, false, true);
					}
					if (iLocal_1057)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_638();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
						{
							TASK::CLEAR_PED_TASKS(Global_96938.f_9[0]);
						}
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_727()//Position - 0x7D6BB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_38__::func_480(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_38__::func_418(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_38__::func_402(&(Global_96938.f_28[iVar0]));
		iVar0++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1893421006, 0);
	}
	__LIB_38__::func_424();
}

void func_728()//Position - 0x7D753
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_38__::func_476(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_38__::func_401(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_38__::func_403(&(Global_96938.f_28[iVar0]));
		iVar0++;
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1893421006, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1893421006))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1893421006, 0);
	}
	__LIB_38__::func_424();
}

void func_729()//Position - 0x7D7EB
{
	MISC::CLEAR_AREA(__LIB_38__::func_415(182, 0), 30f, true, false, false, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::ADD_RELATIONSHIP_GROUP("FAMILY_3_TS_RELGROUP", &(Global_96938.f_42));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96938.f_42, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96938.f_42);
	switch (__LIB_15__::func_942())
	{
		case 1:
			if (__LIB_0__::func_648(&(Global_96938.f_9[0]), 25, -811.6234f, 167.6178f, 75.7124f, 116.2182f, 1))
			{
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 1, 0, 0);
				func_731(Global_96938.f_9[0]);
				__LIB_0__::func_222(&(Global_96938.f_44), 0, 0, "MICHAEL", 0, 1);
				__LIB_0__::func_222(&(Global_96938.f_44), 2, 0, "AMANDA", 0, 1);
				__LIB_0__::func_222(&(Global_96938.f_44), 3, Global_96938.f_9[0], "TENNISCOACH", 0, 1);
				ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[0], false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Global_96938.f_9[0], true);
				TASK::SET_PED_PATH_AVOID_FIRE(Global_96938.f_9[0], false);
				ENTITY::SET_ENTITY_PROOFS(Global_96938.f_9[0], true, true, true, true, true, false, false, false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_TennisCoach"));
			}
			break;
	}
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("bison2"), -827.0914f, 176.4763f, 69.9637f, 148.6507f, true, true, false);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 5, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[0], 132, 0);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 2);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[0], false, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_96938[0], false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bison2"));
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("blista"), -826.2942f, 158.1811f, 68.3918f, 84.0848f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[1], 43, 43);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[1], 2);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[1], false);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[1], false, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Global_96938[1], false);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Global_96938[1], false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01"), -818.038f, 179.26f, 71.252f, true, true, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_96938.f_28[0], -818.038f, 179.26f, 71.252f, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[0], -20.52f, -74.02f, 14.3f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[0], true);
	Global_96938.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_tennis_rack_01b"), -818.128f, 179.1527f, 71.262f, true, true, false);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_96938.f_28[1], -818.128f, 179.1527f, 71.262f, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[1], -39.24f, -75.96f, 16.2f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[1], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tennis_rack_01"));
	__LIB_38__::func_446(19, "FAMILY_3_INT", 0, 24, -1);
	switch (__LIB_15__::func_942())
	{
		case 0:
			func_730(19, "Franklin", joaat("Player_One"), 17);
			__LIB_38__::func_460(19, "TennisCoach", 3, 1, 0);
			__LIB_38__::func_460(19, "TennisCoach", 4, 1, 0);
			__LIB_38__::func_460(19, "Amanda", 2, 1, 0);
			__LIB_38__::func_460(19, "Amanda", 3, 2, 0);
			__LIB_38__::func_460(19, "Amanda", 4, 2, 0);
			__LIB_38__::func_460(19, "Amanda", 10, 1, 0);
			break;
		case 1:
			func_730(19, "Michael", joaat("Player_Zero"), 35);
			__LIB_38__::func_460(19, "Amanda", 2, 1, 0);
			__LIB_38__::func_460(19, "Amanda", 3, 2, 0);
			__LIB_38__::func_460(19, "Amanda", 4, 2, 0);
			__LIB_38__::func_460(19, "Amanda", 10, 1, 0);
			break;
	}
}

void func_730(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x7DC06
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if (Global_78324 == iParam0)
	{
		if (Global_78503 < 4)
		{
			Global_78504[Global_78503 /*3*/] = __LIB_38__::func_428(sParam1);
			Global_78504[Global_78503 /*3*/].f_1 = iParam2;
			Global_78504[Global_78503 /*3*/].f_2 = iParam3;
			Global_78503++;
			iVar0 = __LIB_38__::func_427(sParam1);
			if (iVar0 != 144)
			{
				uVar2 = { __LIB_0__::func_459(iParam2, iParam3) };
				iVar1 = 0;
				while (iVar1 < 12)
				{
					iVar3 = __LIB_0__::func_33(iVar1);
					iVar4 = iVar3;
					if ((iVar3 == 2 || iVar3 == 0) && uVar2[iVar4] == -99)
					{
						MISC::CLEAR_BIT(&(Global_78339[iVar0]), iVar1);
					}
					else
					{
						MISC::SET_BIT(&(Global_78339[iVar0]), iVar1);
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < 9)
				{
					MISC::SET_BIT(&(Global_78339[iVar0]), (12 + iVar1));
					iVar1++;
				}
			}
		}
	}
}

void func_731(int iParam0)//Position - 0x7DCF9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_AS_ENEMY(iParam0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
			PED::SET_PED_CAN_RAGDOLL(iParam0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_96938.f_42);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		}
	}
}

void func_736()//Position - 0x7DEEC
{
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_38__::func_451(&(Global_96938.f_209), 0);
}

void func_742()//Position - 0x7E05E
{
	switch (__LIB_15__::func_942())
	{
		case 0:
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("blista"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("bison2"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("prop_tennis_rack_01"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("prop_tennis_rack_01b"));
			break;
		case 1:
			__LIB_38__::func_430(&(Global_96938.f_209), "get_up@directional@movement@from_knees@panic");
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("blista"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("bison2"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("ig_TennisCoach"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("prop_tennis_rack_01"));
			__LIB_38__::func_431(&(Global_96938.f_209), joaat("prop_tennis_rack_01b"));
			__LIB_38__::func_430(&(Global_96938.f_209), "missfam3leadinoutfam_3_int");
			break;
	}
}

void func_746()//Position - 0x7E22C
{
	iLocal_1057 = 0;
	iLocal_1055 = -1;
	iLocal_1056 = 0;
}

void func_747()//Position - 0x7E240
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -815.59454f, 182.77159f, 66.90443f, -828.9664f, 178.47429f, 74.64547f, 12.75f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
}

int func_751()//Position - 0x7E308
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_415(181, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (3.5f * 3.5f) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 1f, Global_19.f_2, true, true, 0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					while (!__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if ((((PED::GET_PED_DRAWABLE_VARIATION(Global_96938.f_9[0], 1) == 0 && PED::GET_PED_DRAWABLE_VARIATION(Global_96938.f_9[0], 3) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_96938.f_9[0], 4) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_96938.f_9[0], 6) == 0) && PED::GET_PED_DRAWABLE_VARIATION(Global_96938.f_9[0], 10) == 0)
				{
					__LIB_38__::func_445();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_752()//Position - 0x7E461
{
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
}

void func_753()//Position - 0x7E476
{
	__LIB_38__::func_476(&(Global_96938.f_9[0]));
}

void func_754()//Position - 0x7E48B
{
	bool bVar0;
	bVar0 = false;
	while (!__LIB_0__::func_648(&(Global_96938.f_9[0]), 14, -805.7495f, 168.2395f, 75.7504f, 84.5596f, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], true);
		ENTITY::SET_ENTITY_COLLISION(Global_96938.f_9[0], false, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[0], false, false);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0], 1, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0], 3, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0], 4, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0], 6, 0, 0);
		PED::SET_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0], 10, 0, 0);
	}
	while (!bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Global_96938.f_9[0]))
		{
			bVar0 = true;
		}
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 10, 0, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(Global_96938.f_9[0]);
	}
}

bool func_755()//Position - 0x7E637
{
	return STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(14));
}

void func_756()//Position - 0x7E649
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(14));
}

void func_757()//Position - 0x7E65B
{
	STREAMING::REQUEST_MODEL(__LIB_0__::func_493(14));
}

int func_763()//Position - 0x7E697
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_38__::func_415(180, __LIB_15__::func_942()) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (3f * 3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.7225f, 176.35396f, 74.65309f, -816.4317f, 181.58743f, 71.00117f, 2f, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -814.7225f, 176.35396f, 74.65309f, -816.4317f, 181.58743f, 71.00117f, 2f, false, true, 0))
			{
				Global_96938.f_357 = 1;
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0.025f, false, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 4, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0.025f, false, true);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 4, false, true);
				}
			}
			else
			{
				Global_96938.f_357 = 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_774()//Position - 0x7E7F4
{
	int iVar0;
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
	if (((MISC::IS_BULLET_IN_ANGLED_AREA(-37.20001f, -1114.9641f, 25.439144f, -60.222214f, -1106.4718f, 29.185764f, 10f, true) || MISC::IS_BULLET_IN_ANGLED_AREA(-37.20001f, -1114.9641f, 25.439144f, -61.98855f, -1116.2395f, 29.18388f, 9f, true)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -37.20001f, -1114.9641f, 25.439144f, -60.222214f, -1106.4718f, 29.185764f, 10f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -37.20001f, -1114.9641f, 25.439144f, -61.98855f, -1116.2395f, 29.18388f, 9f))
	{
		return 1;
	}
	return 0;
}

int func_775()//Position - 0x7E9AB
{
	struct<3> Var0;
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_238, joaat("v_ilev_csr_door_l"), -38.4641f, -1108.4462f, 26.7198f, true, true, false);
	}
	else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_238) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_238) != 4)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_238, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_238, 4, false, true);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_239))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_239, joaat("v_ilev_csr_door_r"), -36.6615f, -1109.1016f, 26.7198f, true, true, false);
	}
	else if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_239) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_239) != 4)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_239, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_239, 4, false, true);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { __LIB_38__::func_415(163, 0) };
		if (!Global_97361)
		{
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.9641f, 25.439144f, -60.222214f, -1106.4718f, 29.185764f, 10f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.9641f, 25.439144f, -61.98855f, -1116.2395f, 29.18388f, 9f, false, true, 0)) && (!__LIB_38__::func_434(-37.20001f, -1114.9641f, 25.439144f, -60.222214f, -1106.4718f, 29.185764f, 10f) && !__LIB_38__::func_434(-37.20001f, -1114.9641f, 25.439144f, -61.98855f, -1116.2395f, 29.18388f, 9f))) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_244 = -1;
				}
				__LIB_38__::func_445();
				MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
			}
		}
		else
		{
			if (iLocal_244 == -1 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_244 = MISC::GET_GAME_TIMER();
			}
			if (!bLocal_242)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.24773f, -1124.2498f, 25.20335f, -42.225227f, -1103.323f, 30.422344f, 15f, false, true, 0) && !(iLocal_244 == -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.057453f, -1107.888f, 25.437035f, -59.5508f, -1104.4417f, 28.93643f, 7f, false, true, 0)))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -35.822376f, -1111.3821f, 25.437346f, -59.892017f, -1110.7146f, 30.435806f, 20f, false, true, 0) && iLocal_244 != -1) && (MISC::GET_GAME_TIMER() - iLocal_244) > 1500)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -46.0563f, -1113.3688f, 25.4358f, 1f, 20000, 0.25f, 4, 40000f);
						iLocal_243 = 1;
						bLocal_242 = true;
					}
				}
				else
				{
					if (iLocal_244 == -1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -50.057453f, -1107.888f, 25.437035f, -59.5508f, -1104.4417f, 28.93643f, 7f, false, true, 0))
					{
						iLocal_243 = 1;
					}
					bLocal_242 = true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]) && !PED::IS_PED_INJURED(Global_96938.f_9[1]))
			{
				PED::SET_PED_RESET_FLAG(Global_96938.f_9[1], 313, true);
				PED::SET_PED_RESET_FLAG(Global_96938.f_9[1], 309, true);
			}
			if (bLocal_242)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.264633f, -1108.2784f, 25.436941f, -42.440727f, -1117.4642f, 30.434734f, 9.5f, false, true, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
				}
				if (((((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1])) && !PED::IS_PED_INJURED(Global_96938.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[0])) && !ENTITY::IS_ENTITY_DEAD(Global_96938[0], false))
				{
					if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("ARMENIAN_3_INT"))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_240))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_240))
							{
								if (!__LIB_0__::func_75())
								{
									if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 2) || iLocal_243)
									{
										__LIB_17__::func_240(&(Global_96938.f_44), "ARM3AUD", "ARM3_INT_LI", 7, 0, 0, 0);
										Global_96938.f_358 = MISC::GET_GAME_TIMER() + 3500;
									}
									else
									{
										__LIB_17__::func_728(&(Global_96938.f_44), "ARM3AUD", "ARM3_INT_LI", "ARM3_INT_LI_3", 7, 0, 0);
										Global_96938.f_358 = -1;
									}
								}
								else if (MISC::GET_GAME_TIMER() > Global_96938.f_358)
								{
									if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 2)
									{
										CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
										CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
										CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
										CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.015f);
										CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.02f);
										CAM::SET_GAMEPLAY_HINT_FOV(35f);
									}
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 10000, 0, 2);
									iLocal_241 = PED::CREATE_SYNCHRONIZED_SCENE(-43.6345f, -1110.6049f, 25.9582f, 0f, 0f, 178.9958f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_241, false);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_241, true);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -40.73348f, -1123.2677f, 24.71316f, -41.51882f, -1107.4323f, 32.43694f, 15f, false, true, 0))
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_241, "missarmenian3leadinoutarmenian_3_int", "_leadin_look_left_simeon", 2f, -2f, 1, 0, 1000f, 0);
									}
									else
									{
										TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_241, "missarmenian3leadinoutarmenian_3_int", "_leadin_look_right_simeon", 2f, -2f, 1, 0, 1000f, 0);
									}
									TASK::TASK_PLAY_ANIM(Global_96938.f_9[1], "missarmenian3leadinoutArmenian_3_int", "_leadin_customer", 1000f, -2f, -1, 18, 0f, false, false, false);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938[0], iLocal_241, "_leadin_car", "missarmenian3leadinoutArmenian_3_int", 1000f, -1000f, 1, 1000f);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Global_96938[0]);
									TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
								}
							}
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_241))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_LOOPED(iLocal_241))
							{
								if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_241) >= 0.35f && !__LIB_0__::func_75()) || (Global_96938.f_358 == -1 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_241) >= 0.25f))
								{
									Global_96938.f_357 = 1;
									return 1;
								}
							}
						}
					}
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true) - Vector(1f, 0f, 0f), 2f, 2f, 5f, false, true, 0)) || (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.9641f, 25.439144f, -62.60672f, -1104.8619f, 29.31163f, 16f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.20001f, -1114.9641f, 25.439144f, -63.4054f, -1116.2142f, 29.180868f, 13f, false, true, 0)))
				{
					Global_96938.f_357 = 1;
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
	}
	return 0;
}

void func_778()//Position - 0x7F236
{
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_38__::func_480(&(Global_96938.f_9[1]));
	__LIB_38__::func_418(&(Global_96938[0]));
	__LIB_38__::func_418(&(Global_96938[1]));
	__LIB_38__::func_418(&(Global_96938[2]));
	__LIB_38__::func_418(&(Global_96938[3]));
	__LIB_38__::func_418(&(Global_96938[4]));
	__LIB_38__::func_418(&(Global_96938[5]));
	__LIB_38__::func_418(&(Global_96938[6]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_239))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_239, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), true, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	CAM::STOP_GAMEPLAY_HINT(false);
	__LIB_38__::func_424();
}

void func_779()//Position - 0x7F31F
{
	__LIB_38__::func_476(&(Global_96938.f_9[0]));
	__LIB_38__::func_476(&(Global_96938.f_9[1]));
	__LIB_38__::func_401(&(Global_96938[0]));
	__LIB_38__::func_401(&(Global_96938[1]));
	__LIB_38__::func_401(&(Global_96938[2]));
	__LIB_38__::func_401(&(Global_96938[3]));
	__LIB_38__::func_401(&(Global_96938[4]));
	__LIB_38__::func_401(&(Global_96938[5]));
	__LIB_38__::func_401(&(Global_96938[6]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_239))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_239, 0);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), true, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	CAM::STOP_GAMEPLAY_HINT(false);
	__LIB_38__::func_424();
}

void func_780()//Position - 0x7F408
{
	int iVar0;
	MISC::CLEAR_AREA(-47.07522f, -1114.4764f, 25.43581f, 7.5f, true, false, false, false);
	MISC::CLEAR_AREA(-40.14164f, -1113.7135f, 25.43738f, 5f, true, false, false, false);
	MISC::CLEAR_AREA(-57.75611f, -1112.7688f, 25.43581f, 10f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(__LIB_38__::func_415(163, 0) - Vector(15f, 25f, 25f), __LIB_38__::func_415(171, 0) + Vector(15f, 25f, 25f), false, true, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(29.436941f, -1105.479f, -46.890217f) - Vector(5f, 20f, 20f), Vector(29.436941f, -1105.479f, -46.890217f) + Vector(5f, 20f, 20f), false, true);
	iLocal_240 = PED::CREATE_SYNCHRONIZED_SCENE(-43.6345f, -1110.6049f, 25.9582f, 0f, 0f, 178.9958f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_240, true);
	__LIB_0__::func_648(&(Global_96938.f_9[0]), 18, -42.4751f, -1110.9316f, 25.4343f, 312.8127f, 1);
	__LIB_16__::func_309(Global_96938.f_9[0], Global_96938.f_42);
	__LIB_0__::func_222(&(Global_96938.f_44), 0, Global_96938.f_9[0], "SIMEON", 0, 1);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_240, "missarmenian3leadinoutArmenian_3_int", "_intro_loop_simeon", 1000f, -2f, 1, 0, 1000f, 0);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("premier"), -43.6345f, -1110.6049f, 25.4358f, 178.9958f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[0], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[0], 43, 43);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 10, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 11, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[0], 12, true);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[0], 43, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[0], false);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938[0], iLocal_240, "_intro_loop_car", "missarmenian3leadinoutArmenian_3_int", 1000f, -1000f, 1, 1000f);
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("A_M_M_BevHills_02"), -39.8746f, -1100.5786f, 25.4343f, 139.6499f, true, true);
	__LIB_16__::func_309(Global_96938.f_9[1], Global_96938.f_42);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 0, 0, 0);
	__LIB_0__::func_222(&(Global_96938.f_44), 1, Global_96938.f_9[1], "MrKenneth", 0, 1);
	PED::SET_PED_INTO_VEHICLE(Global_96938.f_9[1], Global_96938[0], -1);
	TASK::TASK_PLAY_ANIM(Global_96938.f_9[1], "missarmenian3leadinoutArmenian_3_int", "_intro_loop_customer", 1000f, -2f, -1, 17, 0f, false, false, false);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Vector(25.4364f, -1105.8546f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(0f, 0f, 0f), 190.0401f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[1], 0f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[1], 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[1], 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[1], 3, true);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Vector(25.4364f, -1105.8546f, -57.1048f) + Vector(0f, -1.55f, 4.32f) * Vector(1f, 1f, 1f), 190.0401f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[2], 0f);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[2], 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[2], 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[2], 3, true);
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-60.3707f, -1098.9924f, 25.4262f, "v_carshowroom");
	Global_96938[3] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.6411f, -1102.1914f, 25.4223f, 154.2468f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[3], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[3], 39, 39);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[3], 10, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[3], 11, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[3], 12, true);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[3], 29, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[3], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[3], false);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Global_96938[3], iVar0);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[3], true);
	Global_96938[4] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -41.7113f, -1100.0415f, 25.4223f, 138.7067f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[4], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[4], 68, 68);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[4], 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[4], 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[4], 3, true);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[4], 68, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[4], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[4], false);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Global_96938[4], iVar0);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[4], true);
	Global_96938[5] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -46.3951f, -1097.7783f, 25.4223f, 108.3411f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[5], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[5], 6, 3);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[5], 10, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[5], 11, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[5], 12, true);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[5], 10, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[5], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[5], false);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Global_96938[5], iVar0);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[5], true);
	Global_96938[6] = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), -50.0989f, -1094.534f, 25.4223f, 88.9621f, true, true, false);
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(Global_96938[6], 0f);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[6], 42, 42);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[6], 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[6], 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(Global_96938[6], 3, true);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Global_96938[6], 42, 134);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[6], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[6], false);
	INTERIOR::RETAIN_ENTITY_IN_INTERIOR(Global_96938[6], iVar0);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[6], true);
	STREAMING::REMOVE_ANIM_DICT("missarmenian3leadinoutArmenian_3_int");
	__LIB_38__::func_387(18);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_BevHills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("premier"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tailgater"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
	__LIB_0__::func_544(179, 1, 0, 1, 0);
	__LIB_38__::func_446(2, "ARMENIAN_3_INT", -1, 2, -1);
	__LIB_42__::func_593(2, "Siemon", Global_96938.f_9[0]);
	__LIB_42__::func_593(2, "customer", Global_96938.f_9[1]);
}

void func_788()//Position - 0x83EEA
{
	__LIB_38__::func_451(&(Global_96938.f_209), 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_238))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_238, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_239))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_239, 0);
	}
}

void func_789()//Position - 0x83F1D
{
	__LIB_38__::func_430(&(Global_96938.f_209), "missarmenian3leadinoutArmenian_3_int");
	__LIB_38__::func_431(&(Global_96938.f_209), __LIB_0__::func_493(18));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("A_M_M_BevHills_02"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("premier"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("tailgater"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("bjxl"));
}

void func_790()//Position - 0x83F7E
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	Global_96938.f_358 = 0;
}

void func_792()//Position - 0x83FAB
{
	int iVar0;
	int iVar1;
	if (!iLocal_68)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -24.00677f, -1086.3643f, 25.01074f, -31.045536f, -1083.7764f, 28.975454f, 3.5625f, false, true, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (__LIB_0__::func_213(iVar0, 2f, 1, 1056964608, 0, 1, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							iLocal_68 = 1;
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 18f)
	{
		if (!__LIB_7__::func_691() || __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 8f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		if (!iLocal_66)
		{
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -33.71f, -1096.13f, 25.42f, 1) < 18f)
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					__LIB_0__::func_638();
					__LIB_0__::func_222(&uLocal_70, 1, Global_96938.f_9[0], "SIMEON", 0, 1);
					__LIB_0__::func_222(&uLocal_70, 0, PLAYER::PLAYER_PED_ID(), "Franklin", 0, 1);
					iLocal_66 = 1;
				}
			}
		}
		else if (!iLocal_67)
		{
			if (__LIB_17__::func_727(&uLocal_70, "AR2AUD", "AR2_INTRO_LI", 7, 0, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
		}
	}
	else
	{
		if (iLocal_66)
		{
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			iLocal_66 = 0;
		}
		if (iLocal_67)
		{
			__LIB_0__::func_638();
			iLocal_67 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(-31.6922f, -1106.5552f, 25.4223f);
		if (INTERIOR::IS_INTERIOR_READY(iVar1))
		{
			Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_SiemonYetarian"), -30.2735f, -1103.4025f, 25.4223f, 140.5788f, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_96938.f_9[0]);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 7, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_96938.f_9[0], "WORLD_HUMAN_STAND_MOBILE", 0, false);
		}
	}
}

int func_797()//Position - 0x842BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-36.5853f, -1101.4738f, 26.3444f, 5f, joaat("bjxl"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-46.2594f, -1097.8386f, 26.3444f, 5f, joaat("schwarzer"), 2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-50.08f, -1094.4625f, 26.0671f, 5f, joaat("tailgater"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-37.4128f, -1088.5618f, 26.0671f, 5f, joaat("tailgater"), 4);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-41.4259f, -1099.6481f, 26.0534f, 5f, joaat("baller"), 2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		iVar0 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(iVar1));
	}
	if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 150.5f)
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(-39.62799f, -1099.2401f, 25.25259f, 26.5f, true, true))
		{
			return 1;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -39.62799f, -1099.2401f, 25.25259f, 26.5f))
		{
			return 1;
		}
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -39.62799f, -1099.2401f, 25.25259f, 1) < 26.5f)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iVar2 = joaat("WEAPON_UNARMED");
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
				switch (iVar2)
				{
					case joaat("WEAPON_BAT"):
					case joaat("WEAPON_CROWBAR"):
					case joaat("WEAPON_HAMMER"):
					case joaat("WEAPON_KNIFE"):
					case joaat("WEAPON_NIGHTSTICK"):
					case joaat("WEAPON_PETROLCAN"):
					case joaat("WEAPON_STICKYBOMB"):
					case joaat("WEAPON_GRENADE"):
					case joaat("WEAPON_BOTTLE"):
						break;
					default:
						return 1;
						break;
					}
				}
			}
	}
	if (iLocal_237 != 0)
	{
		if (MISC::ABSI((iLocal_237 - iVar0)) < 200 && MISC::ABSI((iLocal_237 - iVar0)) > 10)
		{
			return 1;
		}
	}
	iLocal_237 = iVar0;
	return 0;
}

int func_798()//Position - 0x844D1
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_235)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.335527f, -1091.9121f, 24.936195f, -40.877926f, -1087.528f, 28.109842f, 4.0625f, false, true, 0))
					{
						__LIB_38__::func_445();
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, true);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -34.4845f, -1099.388f, 25.4223f, 1f, 20000, 0.25f, 1, 40000f);
						iLocal_235++;
					}
				}
				break;
			case 1:
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), false))
				{
					iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), false, false, true);
					if (iVar0 != 0)
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iVar0))
						{
							iLocal_236 = PED::CREATE_SYNCHRONIZED_SCENE(-31.828f, -1101.772f, 26.572f, 0f, 0f, 68.4f, 2);
							if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_96938.f_9[0]);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_236, "missarmenian2leadinoutint_alt2", "arm_2_int_alt2_leadin", 1000f, -1000f, 0, 0, 1000f, 0);
							}
							__LIB_17__::func_761(97, 0);
							ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-31.72f, -1101.85f, 26.57f, 1f, joaat("v_ilev_fib_door1"), iLocal_236, "arm_2_int_alt2_leadin_door", "missarmenian2leadinoutint_alt2", 1000f, -8f, 0, 1000f);
							iLocal_235++;
						}
					}
				}
				break;
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_236))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_236) > 0.44f)
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							CAM::STOP_GAMEPLAY_HINT(true);
							CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0.5f, true, 4500, 2500, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.57f);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.055f);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
							CAM::SET_GAMEPLAY_HINT_FOV(30f);
							iLocal_235++;
						}
					}
				}
				break;
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_236))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_236) > 0.5f)
					{
						__LIB_13__::func_783();
						iLocal_235++;
					}
				}
				break;
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_236))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_236) > 0.99f)
					{
						return 1;
					}
				}
				break;
			}
	}
	if (iLocal_235 > 1)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
	if (!iLocal_65)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_employee_month_02")))
		{
			iLocal_69 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-29.13f, -1102.377f, 27.26f, 0.5f, joaat("prop_employee_month_01"), true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_69, false, false);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_69, false, true);
				Global_96938.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_employee_month_02"), ENTITY::GET_ENTITY_COORDS(iLocal_69, true), true, true, false);
				ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[0], 0f, 0f, -20f, 2, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_employee_month_02"));
				iLocal_65 = 1;
			}
		}
	}
	return 0;
}

void func_800()//Position - 0x8480D
{
	__LIB_38__::func_418(&(Global_96938[0]));
	__LIB_38__::func_418(&(Global_96938[1]));
	__LIB_38__::func_418(&(Global_96938[2]));
	__LIB_38__::func_418(&(Global_96938[3]));
	__LIB_38__::func_418(&(Global_96938[4]));
	__LIB_38__::func_480(&(Global_96938.f_9[0]));
	__LIB_38__::func_402(&(Global_96938.f_28[0]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_69, true, false);
	}
	__LIB_38__::func_403(&iLocal_69);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), true, true);
	iLocal_65 = 0;
	__LIB_38__::func_424();
}

void func_801()//Position - 0x848C8
{
	__LIB_38__::func_401(&(Global_96938[0]));
	__LIB_38__::func_401(&(Global_96938[1]));
	__LIB_38__::func_401(&(Global_96938[2]));
	__LIB_38__::func_401(&(Global_96938[3]));
	__LIB_38__::func_401(&(Global_96938[4]));
	__LIB_38__::func_476(&(Global_96938.f_9[0]));
	__LIB_38__::func_403(&(Global_96938.f_28[0]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_69, true, false);
	}
	__LIB_38__::func_403(&iLocal_69);
	iLocal_65 = 0;
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), true, true);
	__LIB_38__::func_424();
}

void func_802()//Position - 0x84983
{
	__LIB_38__::func_446(1, "ARMENIAN_2_INT", -1, 0, -1);
	MISC::CLEAR_AREA_OF_VEHICLES(-11.3885f, -1080.6869f, 25.6721f, 8f, false, false, false, false, false, false, 0);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -7.6801f, -1082.4365f, 25.6721f, 159.3786f, true, true, false);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -11.3885f, -1080.6869f, 25.6721f, 160.6359f, true, true, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("bullet"), -17.3168f, -1079.2955f, 25.6721f, 204.3207f, true, true, false);
	MISC::CLEAR_AREA_OF_VEHICLES(-38f, -1104f, 26.0534f, 4f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-41.4259f, -1099.6481f, 26.0534f, 4f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(-46.2594f, -1097.8386f, 26.3444f, 4f, false, false, false, false, false, false, 0);
	Global_96938[3] = VEHICLE::CREATE_VEHICLE(joaat("baller"), -41.4259f, -1099.6481f, 26.0534f, 132.3786f, true, true, false);
	Global_96938[4] = VEHICLE::CREATE_VEHICLE(joaat("schwarzer"), -46.2594f, -1097.8386f, 26.3444f, 113.3786f, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[3], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[3], false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[4], 10);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_96938[4], false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[0], 3, 1);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[2], 37, 37);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[1], 52, 10);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[3], 25, 16);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[4], 32, 17);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(25.859827f, -1098.9319f, -43.781937f) - Vector(2.5625f, 6.75f, 9.75f), Vector(25.859827f, -1098.9319f, -43.781937f) + Vector(2.5625f, 6.75f, 9.75f), false, true);
	__LIB_17__::func_761(97, 1);
}

void func_804()//Position - 0x84BA7
{
	__LIB_38__::func_451(&(Global_96938.f_209), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_69, true, false);
	}
	__LIB_38__::func_403(&iLocal_69);
	iLocal_65 = 0;
}

void func_805()//Position - 0x84BD4
{
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("schwarzer"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("baller"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("bullet"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("IG_SiemonYetarian"));
	__LIB_38__::func_431(&(Global_96938.f_209), joaat("prop_employee_month_02"));
	__LIB_38__::func_430(&(Global_96938.f_209), "missarmenian2leadinoutint_alt2");
}

